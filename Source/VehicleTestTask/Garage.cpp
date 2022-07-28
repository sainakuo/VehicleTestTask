// Fill out your copyright notice in the Description page of Project Settings.


#include "Garage.h"

#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGarage::AGarage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");

	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuildingMesh");
	BuildingMesh -> SetupAttachment(RootComponent);

	SpawnPoint = CreateDefaultSubobject<UArrowComponent>("SpawnPoint");
	SpawnPoint -> SetupAttachment(RootComponent);
	
}

void AGarage::OnCarSpawn()
{
	auto Car = GetWorld()->SpawnActorDeferred<ACar>(CarClass, SpawnPoint->GetComponentTransform());
	
	Car->TargetPointTag = TargetPointTag;
	
	UGameplayStatics::FinishSpawningActor(Car, SpawnPoint->GetComponentTransform());
}

