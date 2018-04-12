// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleFinalVariables.h"


bool APuzzleFinalVariables::bWaterFlow1 = false;
bool APuzzleFinalVariables::bWaterFlow2 = false;
bool APuzzleFinalVariables::bWaterFlow3 = false;
bool APuzzleFinalVariables::bLightOnPoint = false;
bool APuzzleFinalVariables::bIsPlantInside = false;
bool APuzzleFinalVariables::bFuturePipeRusted = false;

bool APuzzleFinalVariables::GetWaterFlow1()
{
	return APuzzleFinalVariables::bWaterFlow1;
}

void APuzzleFinalVariables::SetWaterFlow1(bool b)
{
	APuzzleFinalVariables::bWaterFlow1 = b;
}

bool APuzzleFinalVariables::GetWaterFlow2()
{
	return APuzzleFinalVariables::bWaterFlow2;
}

void APuzzleFinalVariables::SetWaterFlow2(bool b)
{
	APuzzleFinalVariables::bWaterFlow2 = b;
}

bool APuzzleFinalVariables::GetWaterFlow3()
{
	return APuzzleFinalVariables::bWaterFlow3;
}

void APuzzleFinalVariables::SetWaterFlow3(bool b)
{
	APuzzleFinalVariables::bWaterFlow3 = b;
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

