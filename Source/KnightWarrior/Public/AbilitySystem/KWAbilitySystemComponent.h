// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "KWTypes/KWStructTypes.h"
#include "KWAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);

	UFUNCTION(BlueprintCallable, Category="--- KW ---|Ability", meta=(ApplyLevel = "1"))
	void GrantHeroWeaponAbilities(const TArray<FKWHeroAbilitySet>& InDefaultWeaponAbilities, int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitiySpecHandle);

	UFUNCTION(BlueprintCallable, Category="--- KW ---|Ability")
	void RemoveGrantedHeroWeaponAbilities(UPARAM(ref) TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove);
};
