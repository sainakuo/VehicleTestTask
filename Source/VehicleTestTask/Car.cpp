// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ACar::ACar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>("Car Body");
	RootComponent = BodyMesh;

	AudioEffectMove = CreateDefaultSubobject<UAudioComponent>("AudioEffectMove");
	AudioEffectMove->SetupAttachment(RootComponent);

	AudioEffectBreak = CreateDefaultSubobject<UAudioComponent>("AudioEffectBreak");
	AudioEffectBreak->SetupAttachment(RootComponent);

	AudioEffectStart = CreateDefaultSubobject<UAudioComponent>("AudioEffectStart");
	AudioEffectStart->SetupAttachment(RootComponent);

	CarSpawnEffect = CreateDefaultSubobject<UParticleSystemComponent>("CarSpawnEffect");
	CarSpawnEffect -> SetupAttachment(RootComponent);

	CarMoveEffect = CreateDefaultSubobject<UParticleSystemComponent>("CarMoveEffect");
	CarMoveEffect -> SetupAttachment(RootComponent);

	CarBreakEffect = CreateDefaultSubobject<UParticleSystemComponent>("CarBreakEffect");
	CarBreakEffect -> SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveCar(DeltaTime);
}

void ACar::MoveForward(float Scale)
{
	MoveScaleTarget = Scale;
}

// Called to bind functionality to input
void ACar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ACar::MoveCar(float DeltaTime)
{
		FVector currentLocation = GetActorLocation();
		FVector forwardVector = GetActorForwardVector();
		FVector movePosition = currentLocation + MoveScaleTarget*forwardVector*MoveSpeed*DeltaTime;
		SetActorLocation(movePosition, true);
}



