// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "PuzzleFinalVariables.generated.h"

/**
 * 
 */
UCLASS()
class ECHOES_OF_TIME_API APuzzleFinalVariables : public AWorldSettings
{
	GENERATED_BODY()

public:
	//inset variables for final puzzle here, pipe initial settings 
	static bool bWaterFlow1;
	static bool bWaterFlow2;
	static bool bWaterFlow3;
	static bool bLightOnPoint;
	static bool bIsPlantInside;
	static bool bFuturePipeRusted;

	static bool GetWaterFlow1(); //if water flow is true pipe in future is rusted/removed
	static void SetWaterFlow1(bool b);

	static bool GetWaterFlow2(); //if water flow is true pipe in future is rusted/removed
	static void SetWaterFlow2(bool b);

	static bool GetWaterFlow3(); //if water flow is true pipe in future is rusted/removed
	static void SetWaterFlow3(bool b);

	static bool GetLightOnPoint();
	static void SetLightOnPoint(bool b);

	static bool GetIsPlantInside();
	static void SetIsPlantInside(bool b);

	static bool GetFuturePipeRusted();
	static void SetFuturePipeRusted(bool b);
};
