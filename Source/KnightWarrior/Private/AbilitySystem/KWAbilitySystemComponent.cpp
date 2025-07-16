// FXnRXn copyright notice


#include "AbilitySystem/KWAbilitySystemComponent.h"

void UKWAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid()) return;

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;

		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UKWAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid()) return;
}
