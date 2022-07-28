// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Car.h"
#include "GameFramework/Actor.h"
#include "Garage.generated.h"

class ATargetPoint;
class UArrowComponent;

UCLASS()
class VEHICLETESTTASK_API AGarage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGarage();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BuildingMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* SpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Car")
	TSubclassOf<ACar> CarClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Target")
	FName TargetPointTag;
	
	UFUNCTION(BlueprintCallable)
	void OnCarSpawn();
	
};
