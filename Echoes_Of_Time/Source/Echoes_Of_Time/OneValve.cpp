// Fill out your copyright notice in the Description page of Project Settings.

#include "OneValve.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Puzzle1Variables.h"

// Sets default values
AOneValve::AOneValve()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default root component
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	// Create Triger Box to rotate
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	boxComp->InitBoxExtent(FVector(90.0f, 90.0f, 90.0f));
	boxComp->SetRelativeLocation(FVector(0.0f, 60.0f, -30.0f)); // set relative location to root
	boxComp->SetCollisionProfileName("Trigger");
	boxComp->SetupAttachment(RootComponent);

	valve = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Valve"));
	valve->SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ValveAsset(TEXT("/Game/Assets/Props/BronzeDoor/BronzeDoor.BronzeDoor"));

	if (ValveAsset.Succeeded())
	{
		valve->SetStaticMesh(ValveAsset.Object);
		valve->SetRelativeLocation(FVector(0.0f, 50.0f, -100.0f)); // set relative location to root
		valve->SetWorldScale3D(FVector(1.0f));
	}

	//Decalred variables
	opening = false;
	closing = false;
	rotSpeed = 60.0f;
	maxRot = 180.0f;
	addRot = 0.0f;
}

// Called when the game starts or when spawned
void AOneValve::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOneValve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (opening)
	{
		OpenValve(DeltaTime);
	}

	if (closing)
	{
		CloseValve(DeltaTime);
	}
}

void AOneValve::OpenValve(float dt)
{
	addRot = dt * rotSpeed;
	currentRot += addRot;
	UE_LOG(LogTemp, Warning, TEXT("currentRot = %f"), currentRot);
	FRotator newRot = FRotator(addRot, 0.0f, 0.0f);
	valve->AddRelativeRotation(newRot);
	if (FMath::IsNearlyEqual(maxRot, currentRot, 4.0f)) 
	{
		opening = false;
		closing = false;
	}
}

void AOneValve::CloseValve(float dt)
{
	addRot = -dt * rotSpeed;
	currentRot += addRot;
	UE_LOG(LogTemp, Warning, TEXT("currentRot = %f"), currentRot);
	FRotator newRot = FRotator(addRot, 0.0f, 0.0f);
	valve->AddRelativeRotation(newRot);
	if (FMath::IsNearlyEqual(0.0f, currentRot, 4.0f)) 
	{
		closing = false;
		opening = false;
	}
}

void AOneValve::ToggleValve()
{
	if (APuzzle1Variables::GetWaterFlow()) 
	{
		//currentRot += 1.0f;
		opening = true;
		closing = false;
	}
	else {
		//currentRot -= 1.0f;
		opening = false;
		closing = true;
	}
}