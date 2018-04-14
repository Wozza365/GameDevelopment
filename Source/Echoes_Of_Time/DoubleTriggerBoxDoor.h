// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoubleTriggerBoxDoor.generated.h"

UCLASS()
class ECHOES_OF_TIME_API ADoubleTriggerBoxDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoubleTriggerBoxDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OpenDoor(float dt);

	// Pointer to door component
	class UStaticMeshComponent* door;

	// Pointer Box1 Component
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* triggerBox1;

	// Pointer Box2 Component
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* triggerBox2;

	// Overlap Events
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	// Variables
	bool Opening;
	bool isOpened;
	bool triggerBox1Activated;
	bool triggerBox2Activated;
	class ADoubleTriggerBoxDoor* debug;

	float maxDegree;			// Max Degree that doors can rotate
	float addRotation;
	float doorCurrentRotation;
};
