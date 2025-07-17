// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "KWHeroCombatComponent.generated.h"

class AKWHeroWeapon;
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "--- KW ---|Combat")
	AKWHeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const;
};
