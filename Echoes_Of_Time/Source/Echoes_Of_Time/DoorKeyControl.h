// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorKeyControl.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ECHOES_OF_TIME_API UDoorKeyControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorKeyControl();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// OnEvent
	// if is inside trigger box release key and pass it to swing class 
	UFUNCTION(BlueprintCallable, Category = "Door Key Control")
		bool OnKeyPressed(class UPhysicsHandleComponent* physicsHandle, class AActor* actorHeld);

	UFUNCTION(BlueprintCallable, Category = "Door Key Control")
		void OnOverlapBegin(ADoorKeySwing* door);

	class ADoorKey* doorKey;
	class ADoorKeySwing* doorActor;
};
