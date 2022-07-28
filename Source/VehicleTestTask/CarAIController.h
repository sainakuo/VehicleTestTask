// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CarAIController.generated.h"

class ACar;
/**
 * 
 */
UCLASS()
class VEHICLETESTTASK_API ACarAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Target")
	FName TargetPointTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI|Move", meta=(MekeEditWidget = true))
	FVector TargetPointVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI|Move")
	float MovementAccuracy = 200;

	virtual void OnPossess(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

private:
	
	UPROPERTY()
	ACar* Car;
	float MoveScale = 1;
	bool bBreakKey = true;

	FTimerHandle TimerHandle1;
	FTimerHandle TimerHandle2;
	FTimerHandle TimerHandle3;
	
	void StopMove();
	void StartForwardMove();
	void StartBackMove();
	void StopBreakEffect();
};
