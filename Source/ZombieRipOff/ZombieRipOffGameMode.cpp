// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ZombieRipOff.h"
#include "ZombieRipOffGameMode.h"
#include "ZombieRipOffCharacter.h"

AZombieRipOffGameMode::AZombieRipOffGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
