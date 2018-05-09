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

	//Default root component
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	window = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Window"));
	window -> SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> WindowAsset(TEXT("/Game/0Dev_Assets/Megan/Window_Panels.Window_Panels"));

	if (WindowAsset.Succeeded())
	{
		window->SetStaticMesh(WindowAsset.Object);
		window->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // set relative location to root
		window->SetWorldScale3D(FVector(0.75f));
		window->ComponentTags.Add(FName("Ignore"));
	}

	lever = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lever"));
	lever->SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LeverAsset(TEXT("/Game/0Dev_Assets/Megan/lever/lever_handle.lever_handle"));

	if (LeverAsset.Succeeded())
	{
		lever->SetStaticMesh(LeverAsset.Object);
		lever->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // set relative location to root
		lever->SetWorldScale3D(FVector(0.5f));
	}

	// Add lever base

	leverBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeverBase"));
	leverBase->SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LeverBaseAsset(TEXT("/Game/0Dev_Assets/Megan/lever/lever_base.lever_base"));

	if (LeverBaseAsset.Succeeded())
	{
		leverBase->SetStaticMesh(LeverBaseAsset.Object);
		leverBase->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // set relative location to root
		leverBase->SetWorldScale3D(FVector(0.8f));
	}

	//Declare variables
	Opening = false;
	Closing = false;
	isClosed = true;

	leverOpening = false;
	leverClosing = false;
	leverIsClosed = true;

	float maxDegree = 100.0f;			// Max degree that doors can rotate
	float addRotation = 0.0f;
	float windowCurrentRotation = 0.0f;

	float leverCurrentRotation = -50.0f;
	float leverMaxDegree = 50.0f;

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

	if (leverOpening)
	{
		OpenLever(DeltaTime);
	}

	if (leverClosing)
	{
		CloseLever(DeltaTime);
	}

	if (Opening)
	{
		OpenWindow(DeltaTime);
	}

	if (Closing)
	{
		CloseWindow(DeltaTime);
	}
}

// Open Window Function

void AWindowSwing::OpenWindow(float dt)
{
	//Get Current Z rotation
	windowCurrentRotation = window->RelativeRotation.Roll;

	addRotation = -dt * 80;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), windowCurrentRotation);
	//UE_LOG(LogTemp, Warning, TEXT("MAX: %f"), maxDegree);
	if (FMath::IsNearlyEqual(windowCurrentRotation, -100.0f, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Opening)
	{
		FRotator newRotation = FRotator(0.0f, 0.0f, addRotation);
		window->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void AWindowSwing::CloseWindow(float dt)
{
	//Get Current Z rotation
	windowCurrentRotation = window->RelativeRotation.Roll;
	
	addRotation = dt * 80;

	if (FMath::IsNearlyEqual(windowCurrentRotation, -180.0f, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Closing)
	{
		FRotator newRotation = FRotator(0.0f, 0.0f, addRotation);
		window->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

// Open Lever Function

void AWindowSwing::OpenLever(float dt)
{
	leverCurrentRotation = lever->RelativeRotation.Pitch;

	addRotation = dt * 80;

	if (FMath::IsNearlyEqual(leverCurrentRotation, 50.0f, 1.5f))
	{
		leverIsClosed = false;

		isClosed = false;
		Closing = false;
		Opening = true;
	}
	else if (leverOpening)
	{
		FRotator newRotation = FRotator(addRotation, 0.0f, 0.0f);
		lever->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void AWindowSwing::CloseLever(float dt)
{
	leverCurrentRotation = lever->RelativeRotation.Pitch;

	addRotation = -dt * 80;

	if (FMath::IsNearlyEqual(leverCurrentRotation, -50.0f, 1.5f))
	{
		leverIsClosed = true;

		Opening = false;
		isClosed = true;
		Closing = true;
	}
	else if (leverClosing)
	{
		FRotator newRotation = FRotator(addRotation, 0.0f, 0.0f);
		lever->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void AWindowSwing::ToggleWindow()
{
	maxDegree = 100.0f;
	//leverMaxDegree = -40.0f;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), this->maxDegree); //Debug
	if (leverIsClosed)
	{
		leverOpening = true;
		leverClosing = false;
	}
	else
	{
		leverOpening = false;
		leverClosing = true;
	}
	//UE_LOG(LogTemp, Warning, TEXT("ToggleWindow")); //Debug
}