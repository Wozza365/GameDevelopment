// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ValveControl.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ECHOES_OF_TIME_API UValveControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UValveControl();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Action Key Pressed Event
	UFUNCTION(BlueprintCallable, Category = "Valve Control")
		void OnAction();

	UFUNCTION(BlueprintCallable, Category = "Valve Control")
		void OverlapBegin(class AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "Valve Control")
		void OverlapEnd(class AOneValve* other);

	class AOneValve* CurrentValve;
};
