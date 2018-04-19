// Fill out your copyright notice in the Description page of Project Settings.

#include "WindowController.h"
#include "WindowSwing.h"
#include "Puzzle1Variables.h"

// Sets default values for this component's properties
UWindowController::UWindowController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

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

void UWindowController::OnAction(AWindowSwing* windowSwingPointer)
{
	if (windowSwingPointer != NULL)
	{
		windowSwingPointer->ToggleWindow();
		//Add boolean value settings
		if (windowSwingPointer->isSolution)
		{
			if (windowSwingPointer->isClosed)
			{
				APuzzle1Variables::SetLightOnPoint(true);
				UE_LOG(LogTemp, Warning, TEXT("Window is solution and is open"));
			}
			else
			{
				APuzzle1Variables::SetLightOnPoint(false);
				UE_LOG(LogTemp, Warning, TEXT("Window is solution and is closed"));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Window Null"));
	}
}