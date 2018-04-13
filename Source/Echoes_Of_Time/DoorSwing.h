// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorSwing.generated.h"

UCLASS()
class ECHOES_OF_TIME_API ADoorSwing : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoorSwing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Functions for closing and opening doors
	UFUNCTION()
		void CloseDoor(float dt);

	UFUNCTION()
		void OpenDoor(float dt);

	// Pointer to door component
	class UStaticMeshComponent* door;

	// Pointer Box Component
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* boxComp;

	// Main Logic
	UFUNCTION()
		void ToggleDoor(FVector forwardVector);

	// Variables
	bool Opening;
	bool Closing;
	bool isClosed;
	class ADoorSwing* debug;

	float dotP;					// Dot Product
	float maxDegree;			// Max degree that doors can rotate
	float addRotation;
	float posNeg;				// Positive or negative value (Can only be -1,0,1). Used to see if player is behind or in front of door.
	float doorCurrentRotation;
};
