// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldPosition.h"
#include "GameFrameWork/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	// // Just to know how Logs work
	// /*
	// UE_LOG(LogTemp, Display, TEXT("Just a log!"));
	// UE_LOG(LogTemp, Error, TEXT("This is a error!"));*/
	// FString Log = TEXT("Hello!");
	// FString *PtrLog = &Log;

	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);

	FString NameOfOwner = GetOwner()->GetName();
	FString OwnersTransform = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("I'm attached to %s, my location is %s."), *NameOfOwner, *OwnersTransform);
}

// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
