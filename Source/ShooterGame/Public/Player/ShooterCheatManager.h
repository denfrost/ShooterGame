// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "ShooterGame.h"
#include "ShooterCheatManager.generated.h"

UCLASS(Within=ShooterPlayerController)
class UShooterCheatManager : public UCheatManager
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(exec)
	void ToggleInfiniteAmmo();

	UFUNCTION(exec)
	void ToggleInfiniteClip();

	UFUNCTION(exec)
	void ToggleMatchTimer();

	UFUNCTION(exec)
	void ForceMatchStart();

	UFUNCTION(exec)
	void ChangeTeam(int32 NewTeamNumber);

	UFUNCTION(exec)
	void Cheat(const FString& Msg);

	UFUNCTION(exec)
	void SpawnBot();
};
