// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorKeySwing.h"
#include "DoorKey.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ADoorKeySwing::ADoorKeySwing()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	boxComp->InitBoxExtent(FVector(150, 100, 100));
	boxComp->SetCollisionProfileName("Trigger");
	boxComp->SetSimulatePhysics(false);
	boxComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RootComponent = boxComp;

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ADoorKeySwing::OnOverlapBegin);
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ADoorKeySwing::OnOverlapEnd);

	door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	door->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> DoorAsset(TEXT("/Game/StarterContent/Props/SM_Door.SM_Door"));

	if (DoorAsset.Succeeded())
	{
		door->SetStaticMesh(DoorAsset.Object);
		door->SetRelativeLocation(FVector(0.0f, 50.0f, -100.0f));
		door->SetWorldScale3D(FVector(1.0f));
	}

	// Set bools

	isClosed = true;
	Opening = false;
	Closing = true;

	dotP = 1.0f;
	maxDegree = 90.0f;
	posNeg = 1.0f;
	doorCurrentRotation = 0.0f;
}

// Called when the game starts or when spawned
void ADoorKeySwing::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), boxComp->GetScaledBoxExtent(), FQuat(GetActorRotation()), FColor::Red, true, -1.0f, 0, 2);
}

// Called every frame
void ADoorKeySwing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Opening)
	{
		OpenDoor(DeltaTime);
	}

	if (Closing)
	{
		CloseDoor(DeltaTime);
	}
}

// Opend Door Function

void ADoorKeySwing::OpenDoor(float dt)
{
	//Get Current Z rotation
	doorCurrentRotation = door->RelativeRotation.Yaw;

	addRotation = posNeg * dt * 80;
	//UE_LOG(LogTemp, Warning, TEXT(addRotation));
	if (FMath::IsNearlyEqual(doorCurrentRotation, maxDegree, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Opening)
	{
		FRotator newRotation = FRotator(0.0f, addRotation, 0.0f);
		door->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void ADoorKeySwing::CloseDoor(float dt)
{
	//Get Current Z rotation
	doorCurrentRotation = door->RelativeRotation.Yaw;

	if (doorCurrentRotation > 0)
	{
		addRotation = -dt * 80;
	}
	else
	{
		addRotation = dt * 80;
	}

	if (FMath::IsNearlyEqual(doorCurrentRotation, 0.0f, 1.5f))
	{
		Opening = false;
		Closing = false;
	}
	else if (Closing)
	{
		FRotator newRotation = FRotator(0.0f, addRotation, 0.0f);
		door->AddRelativeRotation(FQuat(newRotation), false, 0, ETeleportType::None);
	}
}

void ADoorKeySwing::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Door Key Swing Begin Overlap Triggered"));

	if (ADoorKey* doorKey = Cast<ADoorKey>(OtherActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Door Key Found - Begin Overlap Triggered"));

		if (isClosed)
		{
			isClosed = false;
			Closing = false;
			Opening = true;
		}
	}
}

void ADoorKeySwing::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	//UE_LOG(LogTemp, Warning, TEXT("Door Key Swing End Overlap Triggered"));
	//if (!isClosed)
	//{
	//	Opening = false;
	//	isClosed = true;
	//	Closing = true;
	//}
}