// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadingScreenGI.h"
#include "MoviePlayer.h"

void ULoadingScreenGI::Init()
{
	Super::Init();

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &ULoadingScreenGI::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &ULoadingScreenGI::EndLoadingScreen);
}

void ULoadingScreenGI::BeginLoadingScreen(const FString& InMapName)
{
	//if (!IsRunningDedicatedServer())
	//{
		FLoadingScreenAttributes LoadingScreen;
		LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;
		LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();

		GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
	//}
}

void ULoadingScreenGI::EndLoadingScreen(UWorld* InLoadedWorld)
{

}
