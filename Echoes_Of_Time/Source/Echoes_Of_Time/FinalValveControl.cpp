// Fill out your copyright notice in the Description page of Project Settings.

#include "FinalValveControl.h"
#include "PuzzleFinalVariables.h"
#include "FinalValve.h"


// Sets default values for this component's properties
UFinalValveControl::UFinalValveControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CurrentValve = NULL;
	// ...
}


// Called when the game starts
void UFinalValveControl::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFinalValveControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFinalValveControl::F_OnAction()
{
	if (CurrentValve != NULL)
	{
		if (APuzzleFinalVariables::GetWaterFlow())
		{
			APuzzleFinalVariables::SetWaterFlow(false);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
		}
		else
		{
			APuzzleFinalVariables::SetWaterFlow(true);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
		}

		if (APuzzleFinalVariables::GetFuturePipeRusted())
		{
			APuzzleFinalVariables::SetFuturePipeRusted(false);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Future Pipe NOT rusted"));
		}
		else
		{
			APuzzleFinalVariables::SetFuturePipeRusted(true);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Future Pipe RUSTED"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
	}
}

void UFinalValveControl::F_OverlapBegin(class AActor* OtherActor)
{
	CurrentValve = Cast<AFinalValve>(OtherActor);

	if (CurrentValve != NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Valve One"));
	}
}

void UFinalValveControl::F_OverlapEnd(AFinalValve* other)
{
	CurrentValve = NULL;
	UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
}