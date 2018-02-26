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

	UFUNCTION()
		void CloseDoor(float dt);

	UFUNCTION()
		void OpenDoor(float dt);

	class UStaticMeshComponent* door;

	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* boxComp;

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

	bool Opening;
	bool Closing;
	bool isClosed;
	class ADoorKeySwing* debug;

	float dotP;
	float maxDegree;
	float addRotation;
	float posNeg;
	float doorCurrentRotation;
};
