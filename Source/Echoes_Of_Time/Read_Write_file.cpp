// Fill out your copyright notice in the Description page of Project Settings.

#include "Read_Write_file.h"
#include "Echoes_Of_Time.h"


bool URead_Write_file::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool URead_Write_file::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}
