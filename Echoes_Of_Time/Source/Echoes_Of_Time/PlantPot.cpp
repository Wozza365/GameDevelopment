// Fill out your copyright notice in the Description page of Project Settings.

#include "PlantPot.h"
#include "DrawDebugHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "Plant.h"
#include "Puzzle1Variables.h"


//#define SPHERE_TRACER ECC_GameTraceChannel1

// Sets default values
APlantPot::APlantPot()
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
	potTriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APlantPot::OnOverlapBegin);
	potTriggerBox->OnComponentEndOverlap.AddDynamic(this, &APlantPot::OnOverlapEnd);

	//Create wall, parse asset
	wall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall"));
	wall->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> WallAsset(TEXT("/Game/Assets/WallMesh.WallMesh"));

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

	//Initiate varaibles
	plantInPot = false;
}

// Called when the game starts or when spawned
void APlantPot::BeginPlay()
{
	Super::BeginPlay();
	
	// Draw trigger box for testing
}

// Called every frame
void APlantPot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(APuzzle1Variables::GetWaterFlow() &&
		APuzzle1Variables::GetLightOnPoint() &&
		APuzzle1Variables::GetIsPlantInside())
	{
		// Make wall visible and enable collisions
		wall->SetHiddenInGame(false);
		wall->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	//if (!APuzzle1Variables::GetWaterFlow() ||
	//	!APuzzle1Variables::GetLightOnPoint() ||
	//	!APuzzle1Variables::GetIsPlantInside())
	//{
	//	// Make wall visible and enable collisions
	//	wall->SetHiddenInGame(true);
	//	wall->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//}
}

void APlantPot::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
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
			APuzzle1Variables::SetIsPlantInside(true);
		}
	}
}

void APlantPot::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (APlant* plant = Cast<APlant>(OtherActor))
		{
			APuzzle1Variables::SetIsPlantInside(false);
		}
	}
}