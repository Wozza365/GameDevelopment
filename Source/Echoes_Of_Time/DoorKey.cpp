// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorKey.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "DoorKeySwing.h"

// Sets default values
ADoorKey::ADoorKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	statue = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Statue"));
	statue->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> StatueAsset(TEXT("/Game/Assets/key.key"));

	if (StatueAsset.Succeeded())
	{
		statue->SetStaticMesh(StatueAsset.Object);
		statue->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		statue->SetWorldScale3D(FVector(1.0f));
		statue->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		statue->SetSimulatePhysics(true);
	}
}

// Called when the game starts or when spawned
void ADoorKey::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorKey::OnOverlapWithDoors(ADoorSwing* doorActor)
{

}