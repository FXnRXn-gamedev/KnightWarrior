// FXnRXn copyright notice

#pragma once

#include "KWStructTypes.generated.h"

class UKWHeroLinkedAnimLayer;
USTRUCT(BlueprintType)
struct FKWHeroWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UKWHeroLinkedAnimLayer> WeaponAnimLayerToLink;
};

