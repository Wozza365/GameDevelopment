// Fill out your copyright notice in the Description page of Project Settings.

#include "FinalValve.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PuzzleFinalVariables.h"

// Sets default values
AFinalValve::AFinalValve()
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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ValveAsset(TEXT("/Game/Assets/Valve.Valve"));

	if (ValveAsset.Succeeded())
	{
		valve->SetStaticMesh(ValveAsset.Object);
		valve->SetRelativeLocation(FVector(0.0f, 50.0f, -100.0f)); // set relative location to root
		valve->SetWorldScale3D(FVector(1.0f));
	}

	pipeLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("pipeLeft"));
	pipeLeft->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PipeLeftAsset(TEXT("/Game/0Dev_Assets/Jason/Tree/Tree_Low_Poly.Tree_Low_Poly")); //replace with pipe pls

	if (PipeLeftAsset.Succeeded())
	{
		pipeLeft->SetStaticMesh(PipeLeftAsset.Object);
		pipeLeft->SetRelativeLocation(FVector::ZeroVector); // set relative location to root
		pipeLeft->SetWorldScale3D(FVector(1.0f));
		pipeLeft->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		pipeLeft->SetHiddenInGame(false);
		pipeLeft->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	}

	pipeRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("pipeRight"));
	pipeRight->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PipeRightAsset(TEXT("/Game/0Dev_Assets/Jason/Tree/Tree_Low_Poly.Tree_Low_Poly")); //replace with pipe pls

	if (PipeRightAsset.Succeeded())
	{
		pipeRight->SetStaticMesh(PipeRightAsset.Object);
		pipeRight->SetRelativeLocation(FVector::ZeroVector); // set relative location to root
		pipeRight->SetWorldScale3D(FVector(1.0f));
		pipeRight->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		pipeRight->SetHiddenInGame(true);
		pipeRight->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	}

	//Decalred variables
	opening = false;
	closing = false;
	rotSpeed = 80.0f;
	maxRot = 180.0f;
	addRot = 0.0f;

}

// Called when the game starts or when spawned
void AFinalValve::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinalValve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (opening)
	{
		OpenValve(DeltaTime);

		pipeLeft->SetHiddenInGame(true);
		pipeLeft->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		pipeRight->SetHiddenInGame(false);
		pipeRight->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	if (closing)
	{
		CloseValve(DeltaTime);

		pipeLeft->SetHiddenInGame(false);
		pipeLeft->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		pipeRight->SetHiddenInGame(true);
		pipeRight->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

}

void AFinalValve::OpenValve(float dt)
{
	addRot = dt * rotSpeed;
	currentRot += addRot;
	//UE_LOG(LogTemp, Warning, TEXT("currentRot = %f"), currentRot);
	FRotator newRot = FRotator(0.0f, 0.0f, addRot);
	valve->AddRelativeRotation(newRot);
	if (FMath::IsNearlyEqual(maxRot, currentRot, 4.0f))
	{
		opening = false;
		closing = false;
	}
}

void AFinalValve::CloseValve(float dt)
{
	addRot = -dt * rotSpeed;
	currentRot += addRot;
	//UE_LOG(LogTemp, Warning, TEXT("currentRot = %f"), currentRot);
	FRotator newRot = FRotator(0.0f, 0.0f, addRot);
	valve->AddRelativeRotation(newRot);
	if (FMath::IsNearlyEqual(0.0f, currentRot, 4.0f))
	{
		closing = false;
		opening = false;
	}
}

void AFinalValve::ToggleValve()
{
	if (APuzzleFinalVariables::GetWaterFlow())
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