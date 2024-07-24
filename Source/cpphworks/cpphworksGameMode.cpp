// Copyright Epic Games, Inc. All Rights Reserved.

#include "cpphworksGameMode.h"
#include "cpphworksCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcpphworksGameMode::AcpphworksGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
