// FXnRXn copyright notice


#include "Components/Combat/KWHeroCombatComponent.h"
#include "Items/Weapons/KWHeroWeapon.h"

AKWHeroWeapon* UKWHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<AKWHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}
