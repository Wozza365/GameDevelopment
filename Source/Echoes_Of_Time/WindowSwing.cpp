// Fill out your copyright notice in the Description page of Project Settings.

#include "WindowSwing.h"
#include "DrawDebugHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"

// Sets default values
AWindowSwing::AWindowSwing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default root component needed for C++ classes
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	// Add window asset as Box component and set it as root component
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	boxComp->InitBoxExtent(FVector(150, 100, 100));
	boxComp->SetCollisionProfileName("Trigger");
	boxComp->SetupAttachment(RootComponent);

	window = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Window"));
	window -> SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> WindowAsset(TEXT("/Game/0Dev_Assets/Megan/Window_Panels.Window_Panels"));

	if (WindowAsset.Succeeded())
	{
		window->SetStaticMesh(WindowAsset.Object);
		window->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // set relative location to root
		window->SetWorldScale3D(FVector(0.75f));
	}

	//Declare variables
	Opening = false;
	Closing = false;
	isClosed = true;

	float maxDegree = 90.0f;			// Max degree that doors can rotate
	float addRotation = 0.0f;
	float windowCurrentRotation = 0.0f;

	UPROPERTY(EditAnywhere)
		bool isSolution = false;

}

// Called when the game starts or when spawned
void AWindowSwing::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWindowSwing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Opening)
	{
		OpenWindow(DeltaTime);
	}

	if (Closing)
	{
		CloseWindow(DeltaTime);
	}
}

// Open Door Function

void AWindowSwing::OpenWindow(float dt)
{
	//Get Current Z rotation
	windowCurrentRotation = window->RelativeRotation.Yaw;

	addRotation = dt * 80;
	//UE_LOG(LogTemp, Warning, TEXT(addRotation));
	if (FMath::IsNearlyEqual(windowCurrentRotation, maxDegree, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Opening)
	{
		FRotator newRotation = FRotator(0.0f, addRotation, 0.0f);
		window->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void AWindowSwing::CloseWindow(float dt)
{
	//Get Current Z rotation
	windowCurrentRotation = window->RelativeRotation.Yaw;

	
	addRotation = -dt * 80;
	
	

	if (FMath::IsNearlyEqual(windowCurrentRotation, 0.0f, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Closing)
	{
		FRotator newRotation = FRotator(0.0f, addRotation, 0.0f);
		window->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void AWindowSwing::ToggleWindow()
{
	// Determine which way door should swing
	maxDegree = 90.0f;

	//UE_LOG(LogTemp, Warning, TEXT("%f"), this->maxDegree); //Debug
	if (isClosed)
	{
		isClosed = false;
		Closing = false;
		Opening = true;
	}
	else
	{
		Opening = false;
		isClosed = true;
		Closing = true;
	}
	//UE_LOG(LogTemp, Warning, TEXT("ToggleWindow")); //Debug
}


