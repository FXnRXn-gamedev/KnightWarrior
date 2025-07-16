// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
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
};
