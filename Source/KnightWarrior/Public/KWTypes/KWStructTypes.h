// FXnRXn copyright notice

#pragma once
#include "GameplayTagContainer.h"
#include "KWStructTypes.generated.h"

class UKWGameplayAbility;
class UKWHeroLinkedAnimLayer;
class UInputMappingContext;
//----------------------------------------------------------------------------------------------------------------------
USTRUCT(BlueprintType)
struct FKWHeroAbilitySet
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Category = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UKWGameplayAbility> AbilityToGrant;

	bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FKWHeroWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UKWHeroLinkedAnimLayer> WeaponAnimLayerToLink;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* WeaponInputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(TitleProperty = "InputTag"))
	TArray<FKWHeroAbilitySet> DefaultWeaponAbilities;
};

