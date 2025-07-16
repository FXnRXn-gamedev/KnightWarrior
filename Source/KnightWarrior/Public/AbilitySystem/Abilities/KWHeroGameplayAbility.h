// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/KWGameplayAbility.h"
#include "KWHeroGameplayAbility.generated.h"

class AKWCharacterHero;
class AKWHeroController;
class UKWHeroCombatComponent;
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWHeroGameplayAbility : public UKWGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "--- KW  ---|Ability")
	AKWCharacterHero* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "--- KW  ---|Ability")
	AKWHeroController* GetHeroControllerFromActorInfo();
	//~

	UFUNCTION(BlueprintPure, Category = "--- KW  ---|Ability")
	UKWHeroCombatComponent* GetHeroCombatComponentFromActorInfo();
	//~
private:
	TWeakObjectPtr<AKWCharacterHero> CachedKWHeroCharacter;
	TWeakObjectPtr<AKWHeroController> CachedKWHeroController;
	
	
};
