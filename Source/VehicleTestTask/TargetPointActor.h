// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetPointActor.generated.h"

UCLASS()
class VEHICLETESTTASK_API ATargetPointActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetPointActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
