// Fill out your copyright notice in the Description page of Project Settings.

#include "DoubleTriggerBoxDoor.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADoubleTriggerBoxDoor::ADoubleTriggerBoxDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default root component needed for C++ classes
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	// Create Triger Box1
	triggerBox1 = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox1"));
	triggerBox1->InitBoxExtent(FVector(150, 100, 100));
	triggerBox1->SetCollisionProfileName("Trigger");
	triggerBox1->SetSimulatePhysics(false);
	triggerBox1->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	triggerBox1->SetupAttachment(RootComponent);

	// Add overlap events functions 
	triggerBox1->OnComponentBeginOverlap.AddDynamic(this, &ADoubleTriggerBoxDoor::OnOverlapBegin);

	// Create Triger Box2
	triggerBox2 = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox2"));
	triggerBox2->InitBoxExtent(FVector(150, 100, 100));
	triggerBox2->SetCollisionProfileName("Trigger");
	triggerBox2->SetSimulatePhysics(false);
	triggerBox2->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	triggerBox2->SetupAttachment(RootComponent);

	// Add overlap events functions 
	triggerBox2->OnComponentBeginOverlap.AddDynamic(this, &ADoubleTriggerBoxDoor::OnOverlapBegin);

	// Add door asset as Box component and set it as root component
	door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	door->SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DoorAsset(TEXT("/Game/Assets/Props/BronzeDoor/BronzeDoor.BronzeDoor"));

	if (DoorAsset.Succeeded())
	{
		door->SetStaticMesh(DoorAsset.Object);
		door->SetRelativeLocation(FVector(0.0f, 50.0f, -100.0f)); // set relative location to trigger box
		door->SetWorldScale3D(FVector(1.0f));
	}

	// Set varaibles

	isOpened = false;
	Opening = false;
	triggerBox1Activated = false;
	triggerBox2Activated = false;

	maxDegree = 90.0f;
	doorCurrentRotation = 0.0f;
}

// Called when the game starts or when spawned
void ADoubleTriggerBoxDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoubleTriggerBoxDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (triggerBox1Activated && triggerBox2Activated && !isOpened)
	{
		Opening = true;
		UE_LOG(LogTemp, Warning, TEXT("Door Opening"));
		isOpened = true;
	}

	if (Opening)
	{
		OpenDoor(DeltaTime);
	}
}

// Opend Door Function

void ADoubleTriggerBoxDoor::OpenDoor(float dt)
{
	//Get Current Z rotation
	doorCurrentRotation = door->RelativeRotation.Yaw;

	addRotation = dt * 80;

	if (FMath::IsNearlyEqual(doorCurrentRotation, maxDegree, 1.5f))
	{
		Opening = false;
	}
	else if (Opening)
	{
		FRotator newRotation = FRotator(0.0f, addRotation, 0.0f);
		door->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void ADoubleTriggerBoxDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Door Key Swing Begin Overlap Triggered"));

	if (OverlappedComponent == triggerBox1)
	{
		triggerBox1Activated = true;
		UE_LOG(LogTemp, Warning, TEXT("TriggerBox1"));
	}
	if(OverlappedComponent == triggerBox2)
	{
		triggerBox2Activated = true;
		UE_LOG(LogTemp, Warning, TEXT("TriggerBox2"));
	}
}