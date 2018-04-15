// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Room3PlantPot.generated.h"

UCLASS()
class ECHOES_OF_TIME_API ARoom3PlantPot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoom3PlantPot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Trigger box pointer
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* potTriggerBox;

	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UBoxComponent* potTriggerBox2;

	// Pointer to wall that is going to be created after trigger
	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UStaticMeshComponent* wall;

	UPROPERTY(VisibleAnywhere, Category = "Box Comps")
		class UStaticMeshComponent* wall2;

	UPROPERTY(EditAnywhere)
		FString ValveTag;


	// Overlap Begin
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

	UFUNCTION()
		void OnOverlapBegin2(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	UFUNCTION()
		void OnOverlapEnd2(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	bool plantInPot;
};
