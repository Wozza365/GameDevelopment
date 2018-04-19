// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "Puzzle1Variables.generated.h"

/**
 * 
 */
UCLASS()
class ECHOES_OF_TIME_API APuzzle1Variables : public AWorldSettings
{
	GENERATED_BODY()

public:
	static bool bWaterFlow;
	static bool bLightOnPoint;
	static bool bIsPlantInside;
	
	UFUNCTION(BlueprintCallable, Category = "Water")
		static bool GetWaterFlow();

	UFUNCTION(BlueprintCallable, Category = "Puzzle Room 2")
	static void SetWaterFlow(bool b);

	UFUNCTION(BlueprintCallable, Category = "Puzzle Room 2")
	static void SetLightOnPoint(bool b);

	UFUNCTION(BlueprintCallable, Category = "Puzzle Room 2")
	static void SetIsPlantInside(bool b);

	static bool GetLightOnPoint();
	static bool GetIsPlantInside();
};
