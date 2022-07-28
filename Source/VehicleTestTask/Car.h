// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Car.generated.h"

class ATargetPoint;

UCLASS()
class VEHICLETESTTASK_API ACar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACar();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category="Components")
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Movement|Speed")
	float MoveSpeed = 300;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Movement|TypeIndex")
	int MovementTypeIndex = 0; // 0 - forward, 1 - forward and stop, 2 - forward and back

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Target")
	FName TargetPointTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffectMove;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffectBreak;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffectStart;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UParticleSystemComponent* CarSpawnEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UParticleSystemComponent* CarMoveEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UParticleSystemComponent* CarBreakEffect;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void MoveForward(float Scale);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void MoveCar(float DeltaTime);
	float MoveScaleTarget = 0;
};
