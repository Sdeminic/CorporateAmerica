// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Corporate_AmericaHUD.generated.h"

UCLASS()
class ACorporate_AmericaHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACorporate_AmericaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

