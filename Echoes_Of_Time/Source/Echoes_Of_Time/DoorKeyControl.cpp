// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorKeyControl.h"
#include "DoorKeySwing.h"
#include "DoorKey.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"


// Sets default values for this component's properties
UDoorKeyControl::UDoorKeyControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	doorActor = NULL;
	doorKey = NULL;
}


// Called when the game starts
void UDoorKeyControl::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDoorKeyControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UDoorKeyControl::OnKeyPressed(class UPhysicsHandleComponent* physicsHandle, class AActor* actorHeld)
{
	if (physicsHandle->bIsActive)
	{
		doorKey = Cast<ADoorKey>(actorHeld);
		if (doorKey != NULL)
		{
			UE_LOG(LogTemp, Warning, TEXT("Key pointer passed"));
			if (doorActor != NULL)
			{
				UE_LOG(LogTemp, Warning, TEXT("Door Actor Found"));
				doorKey->DisableComponentsSimulatePhysics();
				physicsHandle->ReleaseComponent();
				UE_LOG(LogTemp, Warning, TEXT("Key Rleased"));

				doorActor->OnActionKeyPressed(doorKey);
				return true;
			}
		}
		return false;
	}
	return false;
}

void UDoorKeyControl::OnOverlapBegin(ADoorKeySwing* door)
{
	doorActor = Cast<ADoorKeySwing>(door);
}