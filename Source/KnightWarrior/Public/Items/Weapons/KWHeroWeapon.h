// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/KWWeaponBase.h"
#include "KWTypes/KWStructTypes.h"
#include "KWHeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API AKWHeroWeapon : public AKWWeaponBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="--- WeaponData ---")
	FKWHeroWeaponData HeroWeaponData;
};
