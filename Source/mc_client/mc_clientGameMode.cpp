// Copyright Epic Games, Inc. All Rights Reserved.

#include "mc_clientGameMode.h"
#include "mc_clientPlayerController.h"
#include "mc_clientCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amc_clientGameMode::Amc_clientGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Amc_clientPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}