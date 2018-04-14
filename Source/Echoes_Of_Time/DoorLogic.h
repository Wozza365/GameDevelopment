// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorSwing.h"
#include "DoorLogic.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ECHOES_OF_TIME_API UDoorLogic : public UActorComponent
{
	GENERATED_BODY()
		// create trigger capsule
		UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
		class UCapsuleComponent* TriggerCapsule;
public:
	// Sets default values for this component's properties
	UDoorLogic();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// declare overlap begin function
	UFUNCTION(BlueprintCallable, Category = "Door Logic")
		void OnOverlapBegin(class AActor* OtherActor);

	// declare overlap end function
	UFUNCTION(BlueprintCallable, Category = "Door Logic")
		void OnOverlapEnd(ADoorSwing* other);

	// Action Key Pressed Event
	UFUNCTION(BlueprintCallable, Category = "Door Logic")
		void OnAction(UCameraComponent* camComp);

	// Just for testing 
	UFUNCTION(BlueprintCallable, Category = "Door Logic")
		ADoorSwing* GetCurrentDoor();

	class ADoorSwing* CurrentDoor;
};
