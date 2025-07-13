// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "KWGameplayAbility.generated.h"

UENUM(BlueprintType)
enum class EKWAbilityActivationPolicyType : uint8
{
	OnTriggered UMETA(DisplayName = "On Triggered"),
	OnGiven UMETA(DisplayName = "On Given")
};
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	//~ Begin UGameplayAbility
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ END
	
	UPROPERTY(EditDefaultsOnly, Category="--- KW Ability ---")
	EKWAbilityActivationPolicyType AbilityActivationPolicyType = EKWAbilityActivationPolicyType::OnTriggered;
	
};
