// Fill out your copyright notice in the Description page of Project Settings.

#include "Plant.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	plant = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant"));
	plant->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantAsset(TEXT("/Game/0Dev_Assets/Jason/Tree/Tree_Low_Poly.Tree_Low_Poly"));

	if (PlantAsset.Succeeded())
	{
		// SetMass if there is a need for fixed mass
		// SetCollision if asset needs it
		plant->SetStaticMesh(PlantAsset.Object);
		plant->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		plant->SetWorldScale3D(FVector(0.5f));
		plant->bGenerateOverlapEvents = true;
		plant->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		plant->SetSimulatePhysics(true);
	}
}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

