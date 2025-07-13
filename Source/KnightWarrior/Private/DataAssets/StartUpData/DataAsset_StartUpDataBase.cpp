// FXnRXn copyright notice


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/KWAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/KWGameplayAbility.h"


void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UKWAbilitySystemComponent* InASCToGive,
                                                              int32 ApplyLevel)
{
	checkf(InASCToGive, TEXT("INVALID InWarriorASCToGive!!! "));
	GrantAbilities(ActivateOnGivenAbilities, InASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InASCToGive, ApplyLevel);
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<UKWGameplayAbility>>& InAbilitiesToGive,
	UKWAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty()) return;
	for (const TSubclassOf<UKWGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
