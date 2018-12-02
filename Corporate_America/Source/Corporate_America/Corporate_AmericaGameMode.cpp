// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Corporate_AmericaGameMode.h"
#include "Corporate_AmericaHUD.h"
#include "Corporate_AmericaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACorporate_AmericaGameMode::ACorporate_AmericaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Employee/Character/BP_Employee"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACorporate_AmericaHUD::StaticClass();
}
