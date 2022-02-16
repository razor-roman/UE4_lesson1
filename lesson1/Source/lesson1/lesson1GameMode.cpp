// Copyright Epic Games, Inc. All Rights Reserved.

#include "lesson1GameMode.h"
#include "lesson1Character.h"
#include "UObject/ConstructorHelpers.h"

Alesson1GameMode::Alesson1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
