// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorLogic.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UDoorLogic::UDoorLogic()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	TriggerCapsule->InitCapsuleSize(55.f, 96.0f);
	TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));

	CurrentDoor = NULL;
	// ...
}


// Called when the game starts
void UDoorLogic::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UDoorLogic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

void UDoorLogic::OnOverlapBegin(class AActor* OtherActor)
{
	CurrentDoor = Cast<ADoorSwing>(OtherActor);
	//UE_LOG(LogTemp, Warning, TEXT("OverlapBegin"));
	//if (OtherActor && (OtherActor != GetOwner()) && OtherComp && OtherActor->GetClass()->IsChildOf(ADoorSwing::StaticClass()))
	//{
	//	CurrentDoor = Cast<ADoorSwing>(OtherActor);
	//	UE_LOG(LogTemp, Warning, TEXT("OverlapBegin"));
	//}
}

void UDoorLogic::OnOverlapEnd(ADoorSwing* other)
{
	if (!CurrentDoor->IsOverlappingActor(other))
	{
		CurrentDoor = NULL;
		UE_LOG(LogTemp, Warning, TEXT("OverlapEnd"));
	}
}

void UDoorLogic::OnAction(UCameraComponent* camComp)
{
	FVector ForwardVector = camComp->GetForwardVector();

	if (CurrentDoor)
	{
		CurrentDoor->ToggleDoor(ForwardVector);
		UE_LOG(LogTemp, Warning, TEXT("Open"));
	}
	UE_LOG(LogTemp, Warning, TEXT("Your message"));
}

ADoorSwing* UDoorLogic::GetCurrentDoor()
{
	return CurrentDoor;
}