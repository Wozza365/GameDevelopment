// Fill out your copyright notice in the Description page of Project Settings.

#include "OneValve.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Puzzle1Variables.h"

// Sets default values
AOneValve::AOneValve()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default root component
	USceneComponent* DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = DummyRoot;

	// Create Triger Box to rotate
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	boxComp->InitBoxExtent(FVector(90.0f, 90.0f, 90.0f));
	boxComp->SetRelativeLocation(FVector(0.0f, 60.0f, -30.0f)); // set relative location to root
	boxComp->SetCollisionProfileName("Trigger");
	boxComp->SetupAttachment(RootComponent);

	valve = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Valve"));
	valve->SetupAttachment(RootComponent);

	// Parse asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ValveAsset(TEXT("/Game/Assets/Props/Vase/vase.vase"));

	if (ValveAsset.Succeeded())
	{
		valve->SetStaticMesh(ValveAsset.Object);
		valve->SetRelativeLocation(FVector(0.0f, 50.0f, -100.0f)); // set relative location to root
		valve->SetWorldScale3D(FVector(1.0f));
	}

	// Invisible Trigger Actor 
	invActor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InvActor"));
	invActor->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> InvisibleAsset(TEXT("/Game/StarterContent/Props/SM_Rock.SM_Rock"));

	if (InvisibleAsset.Succeeded())
	{
		invActor->SetStaticMesh(InvisibleAsset.Object);
		invActor->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // set relative location to root
		invActor->SetWorldScale3D(FVector(0.1f));
		invActor->SetSimulatePhysics(false);
	}

	// Add overlap events functions 
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &AOneValve::OnOverlapBegin);
	boxComp->OnComponentEndOverlap.AddDynamic(this, &AOneValve::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AOneValve::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOneValve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOneValve::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	//{
	//	APuzzle1Variables::SetWaterFlow(true);
	//	UE_LOG(LogTemp, Warning, TEXT("Water Flow True"));
	//	if (APuzzle1Variables::GetWaterFlow())
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("KURWA"));
	//	}
	//}
}

void AOneValve::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	//{
	//	APuzzle1Variables::SetWaterFlow(false);
	//	UE_LOG(LogTemp, Warning, TEXT("Water Flow False"));
	//	if (!APuzzle1Variables::GetWaterFlow())
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("KURWA"));
	//	}
	//}
}

//UMeshComponent* AOneValve::SpawnNewComponent(UClass* ComponentClassToSpawn, const FTransform& SpawnLocation)
//{
//	//Make sure it is a scene component since we are going to attach it to our root component  
//	check(ComponentClassToSpawn->IsChildOf(UMeshComponent::StaticClass()));
//
//	// Construct an object of the class passed to us but return a point to USceneComponent  
//	UMeshComponent* Component = NewObject<UMeshComponent>(this, ComponentClassToSpawn);
//
//	//Attach the component and position it at the location given  
//	Component->SetupAttachment(RootComponent);
//	Component->SetWorldTransform(SpawnLocation);
//	
//	return Component;
//}