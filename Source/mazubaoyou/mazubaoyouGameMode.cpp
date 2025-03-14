// Copyright Epic Games, Inc. All Rights Reserved.

#include "mazubaoyouGameMode.h"
#include "mazubaoyouCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmazubaoyouGameMode::AmazubaoyouGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
