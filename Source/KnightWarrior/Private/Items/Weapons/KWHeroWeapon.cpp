// FXnRXn copyright notice


#include "Items/Weapons/KWHeroWeapon.h"

void AKWHeroWeapon::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InAbilitySpecHandles)
{
	GrantedAbilitySpecHandles = InAbilitySpecHandles;
}

TArray<FGameplayAbilitySpecHandle> AKWHeroWeapon::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandles;
}
