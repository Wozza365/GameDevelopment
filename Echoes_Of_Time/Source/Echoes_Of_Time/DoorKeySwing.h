// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKeySwing.generated.h"

UCLASS()
class ECHOES_OF_TIME_API ADoorKeySwing : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoorKeySwing();

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
	
	// Overlap Events
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	// Variables
	bool Opening;
	bool Closing;
	bool isClosed;
	class ADoorKeySwing* debug;

	float maxDegree;			// Max Degree that doors can rotate
	float addRotation;						
	float doorCurrentRotation;	
};
