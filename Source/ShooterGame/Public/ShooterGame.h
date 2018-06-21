// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once
//need for all headers of Shootergame
#include "GameFramework/SpectatorPawn.h"
#include "GameFramework/HUD.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/CheatManager.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/SaveGame.h"
#include "Components/SceneComponent.h"
#include "Components/PointLightComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ShooterPersistentUser.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "UnrealNetwork.h"
#include "LogMacros.h"

#include "Templates/Casts.h"
#include "Kismet/GameplayStatics.h"
#include "ShooterGameMode.h"
#include "Engine/EngineTypes.h"
#include "Engine/GameEngine.h"
#include "Engine/PointLight.h"
#include "GameFramework/GameState.h"

#include "OnlineSessionSettings.h"


//
#include "CoreMinimal.h"
#include "ModuleManager.h"
//
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "ParticleDefinitions.h"
#include "SoundDefinitions.h"

#include "ShooterGameMode.h"
#include "ShooterGameState.h"
#include "ShooterCharacter.h"
#include "ShooterCharacterMovement.h"
#include "ShooterPlayerController.h"
#include "ShooterGameClasses.h"
/*
class FShooterGameModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
*/

class UBehaviorTreeComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogShooter, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogShooterWeapon, Log, All);

/** when you modify this, please note that this information can be saved with instances
* also DefaultEngine.ini [/Script/Engine.CollisionProfile] should match with this list **/
#define COLLISION_WEAPON		ECC_GameTraceChannel1
#define COLLISION_PROJECTILE	ECC_GameTraceChannel2
#define COLLISION_PICKUP		ECC_GameTraceChannel3

#define MAX_PLAYER_NAME_LENGTH 16


/** Set to 1 to pretend we're building for console even on a PC, for testing purposes */
#define SHOOTER_SIMULATE_CONSOLE_UI	0

#if PLATFORM_PS4 || PLATFORM_XBOXONE || PLATFORM_SWITCH || SHOOTER_SIMULATE_CONSOLE_UI
#define SHOOTER_CONSOLE_UI 1
#else
#define SHOOTER_CONSOLE_UI 0
#endif