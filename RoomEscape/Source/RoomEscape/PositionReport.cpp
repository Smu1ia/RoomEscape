// Fill out your copyright notice in the Description page of Project Settings.

#include "RoomEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// Display Actor Name in Console using Warning Colour (yellow)
	FString ObjName = GetOwner()->GetName();
	FString ObjPos = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is located at %s"), *ObjName, *ObjPos);
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

