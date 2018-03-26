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

	UFUNCTION()
		bool KeyMovement(float dt);

	UFUNCTION()
		void OnActionKeyPressed(ADoorKey* key);
	
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
			int32 OtherBodyIndex);

	// Pointer to door component
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UStaticMeshComponent* doorRight;

	// Pointer to door 2
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UStaticMeshComponent* doorLeft;

	// Pointer to door 2
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class USceneComponent* keyStartPoint;

	// Pointer to door 2
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class USceneComponent* keyEndPoint;

	// Pointer Box Component
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* boxComp;

	// Variables
	bool Opening;
	bool Closing;
	bool isClosed;
	bool isKeyInside;
	bool bKeyMovementFinished;
	class ADoorKey* doorKey;
	class ADoorKeySwing* debug;

	float maxDegree;			// Max Degree that doors can rotate
	float addRotation;						
	float doorCurrentRotation;	

	// Key animation controls
	FVector doorLocation;
	FVector keyLocation;
	FVector startPosition;	// in front of key hole
	FVector endPosition;	// key hole location
	FVector moveVector;
	FVector newKeyLocation;

	FTransform newTransform;

	float moveSpeed;
	float rotationSpeed;
	float totalRotation;

	bool moveToStartingPosition;
	bool moveToEndPosition;
	bool startRotate;
};
