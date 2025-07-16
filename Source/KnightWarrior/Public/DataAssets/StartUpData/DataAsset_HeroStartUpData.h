// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_HeroStartUpData.generated.h"

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
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UDataAsset_HeroStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UKWAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;
private:
	UPROPERTY(EditDefaultsOnly, Category= "--- StartUpData ---", meta = (TitleProperty = "InputTag"))
	TArray<FKWHeroAbilitySet> HeroStartUpAbilitySets;
	
};
