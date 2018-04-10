// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleFinalVariables.h"


bool APuzzleFinalVariables::bWaterFlow = false;
bool APuzzleFinalVariables::bLightOnPoint = false;
bool APuzzleFinalVariables::bIsPlantInside = false;
bool APuzzleFinalVariables::bFuturePipeRusted = false;

bool APuzzleFinalVariables::GetWaterFlow()
{
	return APuzzleFinalVariables::bWaterFlow;
}

void APuzzleFinalVariables::SetWaterFlow(bool b)
{
	APuzzleFinalVariables::bWaterFlow = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
		UE_LOG(LogTemp, Warning, TEXT("Future Pipe Rusted"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
		UE_LOG(LogTemp, Warning, TEXT("Future Pipe not Rusted"))
	}
}

bool APuzzleFinalVariables::GetLightOnPoint()
{
	return APuzzleFinalVariables::bLightOnPoint;
}

void APuzzleFinalVariables::SetLightOnPoint(bool b)
{
	APuzzleFinalVariables::bLightOnPoint = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Light on point True"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Light on point False"));
	}
}

bool APuzzleFinalVariables::GetIsPlantInside()
{
	return APuzzleFinalVariables::bIsPlantInside;
}

void APuzzleFinalVariables::SetIsPlantInside(bool b)
{
	APuzzleFinalVariables::bIsPlantInside = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Plant True"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Plant False"));
	}
}


//Pipe rusted set and get
bool APuzzleFinalVariables::GetFuturePipeRusted()
{
	return APuzzleFinalVariables::bFuturePipeRusted;
}

void APuzzleFinalVariables::SetFuturePipeRusted(bool b)
{
	APuzzleFinalVariables::bFuturePipeRusted = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pipe Rusted"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Pipe NOT Rusted"));
	}
}

