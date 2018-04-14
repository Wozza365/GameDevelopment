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

	static void SetWaterFlow(bool b);
	static bool GetLightOnPoint();
	static void SetLightOnPoint(bool b);
	static bool GetIsPlantInside();
	static void SetIsPlantInside(bool b);
};
