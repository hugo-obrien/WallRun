// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WallRun2HUD.generated.h"

UCLASS()
class AWallRun2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AWallRun2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

