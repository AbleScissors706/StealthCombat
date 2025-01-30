// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthCombarGameMode.h"
#include "StealthCombarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthCombarGameMode::AStealthCombarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
