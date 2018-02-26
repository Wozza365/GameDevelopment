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

	UFUNCTION()
		void CloseDoor(float dt);

	UFUNCTION()
		void OpenDoor(float dt);

	class UStaticMeshComponent* door;

	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* boxComp;

	UFUNCTION()
		void ToggleDoor(FVector forwardVector);

	bool Opening;
	bool Closing;
	bool isClosed;
	class ADoorSwing* debug;

	float dotP;
	float maxDegree;
	float addRotation;
	float posNeg;
	float doorCurrentRotation;
};
