// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FinalValveControl.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ECHOES_OF_TIME_API UFinalValveControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFinalValveControl();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Action Key Pressed Event
	UFUNCTION(BlueprintCallable, Category = "F_Valve Control")
		void F_OnAction();

	UFUNCTION(BlueprintCallable, Category = "F_Valve Control")
		void F_OverlapBegin(class AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "F_Valve Control")
		void F_OverlapEnd(class AFinalValve* other);

	class AFinalValve* CurrentValve;
	
};
