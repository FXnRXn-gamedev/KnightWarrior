// FXnRXn copyright notice


#include "AbilitySystem/Abilities/KWGameplayAbility.h"
#include "AbilitySystem/KWAbilitySystemComponent.h"
#include "Components/Combat/PawnCombatComponent.h"

void UKWGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);
	if (AbilityActivationPolicyType == EKWAbilityActivationPolicyType::OnGiven)
	{
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void UKWGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	if (AbilityActivationPolicyType == EKWAbilityActivationPolicyType::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
	
	
}

UPawnCombatComponent* UKWGameplayAbility::GetPawnCombatComponentFromActorInfo() const
{
	return GetAvatarActorFromActorInfo()->FindComponentByClass<UPawnCombatComponent>();
}

UKWAbilitySystemComponent* UKWGameplayAbility::GetKWAbilitySystemComponentFromActorInfo() const
{
	return Cast<UKWAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent);
}
