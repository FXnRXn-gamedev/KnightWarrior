// FXnRXn copyright notice


#include "KWTypes/KWStructTypes.h"
#include "AbilitySystem/Abilities/KWGameplayAbility.h"

bool FKWHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
