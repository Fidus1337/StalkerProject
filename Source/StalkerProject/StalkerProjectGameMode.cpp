// Copyright Epic Games, Inc. All Rights Reserved.

#include "StalkerProjectGameMode.h"
#include "StalkerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStalkerProjectGameMode::AStalkerProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
