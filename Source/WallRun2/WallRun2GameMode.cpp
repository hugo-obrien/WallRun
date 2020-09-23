// Copyright Epic Games, Inc. All Rights Reserved.

#include "WallRun2GameMode.h"
#include "WallRun2HUD.h"
#include "WallRun2Character.h"
#include "UObject/ConstructorHelpers.h"

AWallRun2GameMode::AWallRun2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWallRun2HUD::StaticClass();
}
