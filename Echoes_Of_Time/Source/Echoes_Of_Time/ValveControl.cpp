// Fill out your copyright notice in the Description page of Project Settings.

#include "ValveControl.h"
#include "Puzzle1Variables.h"
#include "OneValve.h"


// Sets default values for this component's properties
UValveControl::UValveControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CurrentValve = NULL;
	// ...
}


// Called when the game starts
void UValveControl::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UValveControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UValveControl::OnAction()
{
	if (CurrentValve != NULL)
	{
		if (APuzzle1Variables::GetWaterFlow())
		{
			APuzzle1Variables::SetWaterFlow(false);
			UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
		}
		else
		{
			APuzzle1Variables::SetWaterFlow(true);
			UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
	}
}

void UValveControl::OverlapBegin(class AActor* OtherActor)
{
	CurrentValve = Cast<AOneValve>(OtherActor);

	if (CurrentValve != NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Valve One"));
	}
}

void UValveControl::OverlapEnd(AOneValve* other)
{
	CurrentValve = NULL;
	UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
	//if (!CurrentValve->IsOverlappingActor(other))
	//{
	//	CurrentValve = NULL;
	//	UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
	//}
}