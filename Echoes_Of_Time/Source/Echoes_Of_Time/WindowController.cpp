// Fill out your copyright notice in the Description page of Project Settings.

#include "WindowController.h"
#include "WindowSwing.h"

// Sets default values for this component's properties
UWindowController::UWindowController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	currentWindow = NULL;
	// ...
}


// Called when the game starts
void UWindowController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWindowController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWindowController::OnOverlapBegin(class AActor* OtherActor) 
{
	currentWindow = Cast<AWindowSwing>(OtherActor);
	
}


void UWindowController::OnOverlapEnd(AWindowSwing* other)
{
	if (!currentWindow->IsOverlappingActor(other))
	{
		currentWindow = NULL;
		//UE_LOG(LogTemp, Warning, TEXT("OverlapEnd"));
	}
}

void UWindowController::OnAction()
{
	if (currentWindow != NULL)
	{
		currentWindow->ToggleWindow();
		//Add boolean value settings
		/*if (APuzzle1Variables::GetWaterFlow())
		{
			APuzzle1Variables::SetWaterFlow(false);
			UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
		}
		else
		{
			APuzzle1Variables::SetWaterFlow(true);
			UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
		}*/
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Window Null"));
	}
}