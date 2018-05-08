// Fill out your copyright notice in the Description page of Project Settings.

#include "Room3PlantPot.h"
#include "DrawDebugHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "Plant.h"
#include "PuzzleFinalVariables.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "FinalValve.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Engine.h"

//#define SPHERE_TRACER ECC_GameTraceChannel1

// Sets default values
ARoom3PlantPot::ARoom3PlantPot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default root component needed for C++ classes
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	// Create Triger Box
	potTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	potTriggerBox->InitBoxExtent(FVector(150, 100, 100));
	potTriggerBox->SetCollisionProfileName("Trigger");
	potTriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	potTriggerBox->bHiddenInGame = false;
	potTriggerBox->SetupAttachment(RootComponent);

	// Add overlap event function
	potTriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ARoom3PlantPot::OnOverlapBegin);
	potTriggerBox->OnComponentEndOverlap.AddDynamic(this, &ARoom3PlantPot::OnOverlapEnd);

	// Create Triger Box
	potTriggerBox2 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component2"));
	potTriggerBox2->InitBoxExtent(FVector(150, 100, 100));
	potTriggerBox2->SetCollisionProfileName("Trigger");
	potTriggerBox2->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	potTriggerBox2->bHiddenInGame = false;
	potTriggerBox2->SetupAttachment(RootComponent);

	// Add overlap event function
	potTriggerBox2->OnComponentBeginOverlap.AddDynamic(this, &ARoom3PlantPot::OnOverlapBegin2);
	potTriggerBox2->OnComponentEndOverlap.AddDynamic(this, &ARoom3PlantPot::OnOverlapEnd2);

	//Create wall, parse asset a
	wall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall"));
	wall->SetupAttachment(RootComponent);

	wall2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall2"));
	wall2->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> WallAsset(TEXT("/Game/0Dev_Assets/Jason/Vine/Vines_Plant.Vines_Plant"));



	// Set wall proporties and make it invisible in game
	if (WallAsset.Succeeded())
	{
		// TODO:
		// Set custom trace/object response to Overlap so you dont have to do it in editior after spawning.
		wall->SetStaticMesh(WallAsset.Object);
		wall->SetRelativeLocation(FVector::ZeroVector);
		wall->SetWorldScale3D(FVector(1.0f));
		wall->bGenerateOverlapEvents = true;
		wall->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		wall->bHiddenInGame = true;
		wall->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	}

	if (WallAsset.Succeeded())
	{
		// TODO:
		// Set custom trace/object response to Overlap so you dont have to do it in editior after spawning.
		wall2->SetStaticMesh(WallAsset.Object);
		wall2->SetRelativeLocation(FVector::ZeroVector);
		wall2->SetWorldScale3D(FVector(1.0f));
		wall2->bGenerateOverlapEvents = true;
		wall2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		wall2->bHiddenInGame = true;
		wall2->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	}

	//Initiate varaibles
	plantInPot = false;
	ValveTag = "NULL";
}

// Called when the game starts or when spawned
void ARoom3PlantPot::BeginPlay()
{
	Super::BeginPlay();
	// Draw trigger box for testing

	//find actors of class "valve"
}

// Called every frame
void ARoom3PlantPot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//vine 1
	if ((APuzzleFinalVariables::GetWaterFlow1() &&
		APuzzleFinalVariables::GetIsPlantInside())|| (APuzzleFinalVariables::GetWaterFlow2() &&
			APuzzleFinalVariables::GetIsPlantInside()))
	{

		// Make wall visible and enable collisions
		wall->SetHiddenInGame(false);
		wall->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	if (!APuzzleFinalVariables::GetWaterFlow1() ||
		!APuzzleFinalVariables::GetIsPlantInside()||
		!APuzzleFinalVariables::GetWaterFlow2())
	{
		// Make wall visible and enable collisions
		wall->SetHiddenInGame(true);
		wall->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	//Vine 2
	if (APuzzleFinalVariables::GetWaterFlow3() &&
		APuzzleFinalVariables::GetIsPlantInside())
	{
		// Make wall visible and enable collisions
		wall2->SetHiddenInGame(false);
		wall2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	if (!APuzzleFinalVariables::GetWaterFlow3() ||
		!APuzzleFinalVariables::GetIsPlantInside())
	{
		// Make wall visible and enable collisions
		wall2->SetHiddenInGame(true);
		wall2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ARoom3PlantPot::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Pot Begin Overlap Triggered"));
	if (OtherActor && (OtherActor != this))
	{
		// if can cast plant is in trigger box
		if (APlant* plant = Cast<APlant>(OtherActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("Plant in pot - Begin Overlap Triggered"));
			//plantInPot = true;
			APuzzleFinalVariables::SetIsPlantInside(true);
		}
	}
}

void ARoom3PlantPot::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (APlant* plant = Cast<APlant>(OtherActor))
		{
			APuzzleFinalVariables::SetIsPlantInside(false);
		}
	}
}

void ARoom3PlantPot::OnOverlapBegin2(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Pot Begin Overlap Triggered"));
	if (OtherActor && (OtherActor != this))
	{
		// if can cast plant is in trigger box
		if (APlant* plant = Cast<APlant>(OtherActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("Plant in pot - Begin Overlap Triggered"));
			//plantInPot = true;
			APuzzleFinalVariables::SetIsPlantInside(true);
		}
	}
}

void ARoom3PlantPot::OnOverlapEnd2(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (APlant* plant = Cast<APlant>(OtherActor))
		{
			APuzzleFinalVariables::SetIsPlantInside(false);
		}
	}
}