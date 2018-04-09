// Fill out your copyright notice in the Description page of Project Settings.

#include "FinalValveControl.h"
#include "PuzzleFinalVariables.h"
#include "FinalValve.h"
#include "FinalPipe.h"
#include <string>


// Sets default values for this component's properties
UFinalValveControl::UFinalValveControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CurrentValve = NULL;
	CurrentPipe = NULL;
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
	UE_LOG(LogTemp, Warning, TEXT("Is this running twice?"));

	if (CurrentValve != NULL)
	{
		if (APuzzleFinalVariables::GetWaterFlow())
		{
			APuzzleFinalVariables::SetWaterFlow(false);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Water Flow False pipe2"));
		}
		else
		{
			APuzzleFinalVariables::SetWaterFlow(true);
			CurrentValve->ToggleValve();
			UE_LOG(LogTemp, Warning, TEXT("Water Flow True pipe2"));
		}
		UE_LOG(LogTemp, Warning, TEXT("%s"), *CurrentPipe->GetFullName());
		if (CurrentPipe != NULL)
		{
			if (APuzzleFinalVariables::GetFuturePipeRusted())
			{
				APuzzleFinalVariables::SetFuturePipeRusted(false);
				Rusted = false;
				CurrentValve->ToggleValve();
				UE_LOG(LogTemp, Warning, TEXT("Future Pipe NOT rusted pipe2"));
				//unrust the pipe here
				CurrentPipe->TogglePipe(Rusted);
			}
			else
			{
				APuzzleFinalVariables::SetFuturePipeRusted(true);
				Rusted = true;
				CurrentValve->ToggleValve();
				UE_LOG(LogTemp, Warning, TEXT("Future Pipe RUSTED pipe2"));
				//Rust pipe here
				CurrentPipe->TogglePipe(Rusted);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Current Pipe Null"));
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
	}
}

void UFinalValveControl::F_OverlapBegin(class AActor* OtherActor)
{
	FString LTheString = "FinalValve /Game/FirstPersonBP/Maps/UEDPIE_0_FirstPersonExampleMap.FirstPersonExampleMap:PersistentLevel.FinalValve_1";

	UE_LOG(LogTemp, Warning, TEXT("%s"), *OtherActor->GetFullName());
	UE_LOG(LogTemp, Warning, TEXT("%s"), *LTheString);

	if (*OtherActor->GetFullName() == LTheString)
	{
		UE_LOG(LogTemp, Warning, TEXT("true"));

		CurrentValve = Cast<AFinalValve>(OtherActor);
		UE_LOG(LogTemp, Warning, TEXT("___ %s ____ "), *OtherActor->GetFullName());

		if (CurrentValve != NULL)
		{
			UE_LOG(LogTemp, Warning, TEXT("Current Valve One"));
		}
	}
}

void UFinalValveControl::F_OverlapEnd(AFinalValve* other)
{
	CurrentValve = NULL;
	UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
}

void UFinalValveControl::PipeOverlapBegin(class AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("It is hitting pipe overlap method"));


	FString LTheString = "FinalValve /Game/FirstPersonBP/Maps/UEDPIE_0_FirstPersonExampleMap.FirstPersonExampleMap:PersistentLevel.FinalValve_1";

	UE_LOG(LogTemp, Warning, TEXT("%s"), *OtherActor->GetFullName());
	UE_LOG(LogTemp, Warning, TEXT("%s"), *LTheString);

	if (*OtherActor->GetFullName() == LTheString)
	{
		CurrentPipe = Cast<AFinalPipe>(OtherActor);

		if (CurrentPipe != NULL)
		{
			UE_LOG(LogTemp, Warning, TEXT("Current Pipe One"));
		}
	}
}

void UFinalValveControl::PipeOverlapEnd(AFinalPipe* other)
{
	//CurrentPipe = NULL;
	UE_LOG(LogTemp, Warning, TEXT("Current Valve Null"));
}