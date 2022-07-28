// Fill out your copyright notice in the Description page of Project Settings.


#include "CarAIController.h"

#include "Car.h"
#include "TargetPointActor.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

void ACarAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	Car = Cast<ACar>(InPawn);

	if (!Car)
		return;

	Car->AudioEffectStart->Play();
	Car->AudioEffectMove->Play();
	
	Car->CarSpawnEffect->Activate();
	Car->CarMoveEffect->Activate();

	TargetPointTag = Car->TargetPointTag;

	TArray<AActor*> Actors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPointActor::StaticClass(), Actors);

	for (auto Actor: Actors)
	{
		auto TargetPointFound = CastChecked<ATargetPointActor>(Actor);
		if (TargetPointFound->Tags.Contains(TargetPointTag))
		{
			TargetPointVector = TargetPointFound->GetActorLocation();
			break;
		}
	}

	if (Car->MovementTypeIndex == 1)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle1, FTimerDelegate::CreateUObject(this, &ACarAIController::StopMove), 1.5f, true, 1.0f);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle2, FTimerDelegate::CreateUObject(this, &ACarAIController::StartForwardMove), 1.5f, true, 0.0f);
	}

	if (Car->MovementTypeIndex == 2)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle1, FTimerDelegate::CreateUObject(this, &ACarAIController::StartBackMove), 1.5f, true, 1.0f);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle2, FTimerDelegate::CreateUObject(this, &ACarAIController::StartForwardMove), 1.5f, true, 0.0f);
	}
	
}

void ACarAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!Car)
		return;

	FVector PawnLocation = GetPawn()->GetActorLocation();

	if (FVector::Distance(TargetPointVector, PawnLocation) < MovementAccuracy)
	{
		Car->MoveForward(0);

		//this if block run once
		if (bBreakKey)
		{
			Car->AudioEffectMove->Stop();
			Car->AudioEffectBreak->Play();

			Car->CarMoveEffect->Complete();
			Car->CarBreakEffect->Activate();

			GetWorld()->GetTimerManager().SetTimer(TimerHandle3, FTimerDelegate::CreateUObject(this, &ACarAIController::StopBreakEffect), 2, false);
		
			if (Car->MovementTypeIndex == 1 || Car->MovementTypeIndex == 2)
			{
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle1);
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle2);
			}
			
			bBreakKey = false; 
		}
	}
	else
	{
		Car->MoveForward(MoveScale);
	}
}

void ACarAIController::StopMove()
{
	MoveScale = 0;
}

void ACarAIController::StartForwardMove()
{
	MoveScale = 1;
}

void ACarAIController::StartBackMove()
{
	MoveScale = -1;
}

void ACarAIController::StopBreakEffect()
{
	Car->CarBreakEffect->Complete();
}
