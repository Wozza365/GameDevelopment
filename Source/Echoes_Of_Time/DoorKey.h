// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKey.generated.h"

UCLASS()
class ECHOES_OF_TIME_API ADoorKey : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorKey();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Pointer to asset
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* statue;
	
	// On Overlap Event
	UFUNCTION(BlueprintCallable, Category = "Door Key Logic")
		void OnOverlapWithDoors(ADoorSwing* doorActor);
};
