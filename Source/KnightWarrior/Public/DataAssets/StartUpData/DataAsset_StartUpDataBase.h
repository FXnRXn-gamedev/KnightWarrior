// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UKWGameplayAbility;
class UKWAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UKWAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

protected:
	UPROPERTY(EditDefaultsOnly, Category= "--- StartUpData ---")
	TArray<TSubclassOf<UKWGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category= "--- StartUpData ---")
	TArray<TSubclassOf<UKWGameplayAbility>> ReactiveAbilities;

	void GrantAbilities(const TArray<TSubclassOf<UKWGameplayAbility>>& InAbilitiesToGive, UKWAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
};
