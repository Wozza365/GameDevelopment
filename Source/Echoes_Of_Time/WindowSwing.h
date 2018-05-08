// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindowSwing.generated.h"

UCLASS()
class ECHOES_OF_TIME_API AWindowSwing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWindowSwing();

	// Pointer to door component
	UPROPERTY(VisibleAnywhere, Category = "Window Comp")
		class UStaticMeshComponent* window;

	UPROPERTY(VisibleAnywhere, Category = "Lever Comp")
		class UStaticMeshComponent* lever;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Functions for closing and opening doors
	UFUNCTION()
		void CloseWindow(float dt);

	UFUNCTION()
		void OpenWindow(float dt);

	UFUNCTION()
		void CloseLever(float dt);

	UFUNCTION()
		void OpenLever(float dt);

	// Main Logic
	UFUNCTION()
		void ToggleWindow();

	// Variables
	bool Opening;
	bool Closing;
	bool isClosed;

	bool leverOpening;
	bool leverClosing;
	bool leverIsClosed;

	float maxDegree;			// Max degree that doors can rotate
	float addRotation;
	float windowCurrentRotation;

	float leverCurrentRotation;
	float leverMaxDegree;
	
	UPROPERTY(EditAnywhere)
		bool isSolution;
	
};
