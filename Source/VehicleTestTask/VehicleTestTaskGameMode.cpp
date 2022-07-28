// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleTestTaskGameMode.h"
#include "VehicleTestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVehicleTestTaskGameMode::AVehicleTestTaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
