// Fill out your copyright notice in the Description page of Project Settings.

#include "FinalPipe.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PuzzleFinalVariables.h"

// Sets default values
AFinalPipe::AFinalPipe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	pipe = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("pipe"));
	pipe->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PipeAsset(TEXT("/Game/0Dev_Assets/Jason/Tree/Tree_Low_Poly.Tree_Low_Poly")); //replace with pipe pls

	if (PipeAsset.Succeeded())
	{
		pipe->SetStaticMesh(PipeAsset.Object);
		pipe->SetRelativeLocation(FVector::ZeroVector); // set relative location to root
		pipe->SetWorldScale3D(FVector(1.0f));
		pipe->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		pipe->SetHiddenInGame(false);
		pipe->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	}
}

// Called when the game starts or when spawned
void AFinalPipe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinalPipe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFinalPipe::TogglePipe(bool Rusted)
{
	if (Rusted)
	{
		//rust pipe
		pipe->SetHiddenInGame(true);
	}
	else 
	{
		//unrust pipe
		pipe->SetHiddenInGame(false);
	}
}

