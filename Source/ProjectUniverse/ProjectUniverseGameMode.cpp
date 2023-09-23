// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectUniverseGameMode.h"
#include "ProjectUniverseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectUniverseGameMode::AProjectUniverseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
