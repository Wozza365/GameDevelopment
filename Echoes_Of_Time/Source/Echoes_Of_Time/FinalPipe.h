// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FinalPipe.generated.h"

UCLASS()
class ECHOES_OF_TIME_API AFinalPipe : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFinalPipe();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "F_Pipe comp")
		UStaticMeshComponent* pipe;

	UFUNCTION()
		void TogglePipe(bool Rusted);

};
