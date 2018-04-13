// Fill out your copyright notice in the Description page of Project Settings.

#include "Puzzle1Variables.h"

bool APuzzle1Variables::bWaterFlow = false;
bool APuzzle1Variables::bLightOnPoint = false;
bool APuzzle1Variables::bIsPlantInside = false;

bool APuzzle1Variables::GetWaterFlow()
{
	return APuzzle1Variables::bWaterFlow;
}

void APuzzle1Variables::SetWaterFlow(bool b)
{
	APuzzle1Variables::bWaterFlow = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
	}
}

bool APuzzle1Variables::GetLightOnPoint()
{
	return APuzzle1Variables::bLightOnPoint;
}

void APuzzle1Variables::SetLightOnPoint(bool b)
{
	APuzzle1Variables::bLightOnPoint = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Light on point True"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Light on point False"));
	}
}

bool APuzzle1Variables::GetIsPlantInside()
{
	return APuzzle1Variables::bIsPlantInside;
}

void APuzzle1Variables::SetIsPlantInside(bool b)
{
	APuzzle1Variables::bIsPlantInside = b;
	if (b)
	{
		UE_LOG(LogTemp, Warning, TEXT("Plant True"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Plant False"));
	}
}