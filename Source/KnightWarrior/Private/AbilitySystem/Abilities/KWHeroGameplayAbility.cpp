// FXnRXn copyright notice


#include "AbilitySystem/Abilities/KWHeroGameplayAbility.h"
#include "Characters/Player/KWCharacterHero.h"
#include "Controllers/KWHeroController.h"

AKWCharacterHero* UKWHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedKWHeroCharacter.IsValid())
	{
		CachedKWHeroCharacter = Cast<AKWCharacterHero>(CurrentActorInfo->AvatarActor);
	}
	return CachedKWHeroCharacter.IsValid() ? CachedKWHeroCharacter.Get() : nullptr;
}

AKWHeroController* UKWHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
	if (!CachedKWHeroController.IsValid())
	{
		CachedKWHeroController = Cast<AKWHeroController>(CurrentActorInfo->PlayerController);
	}
	return CachedKWHeroController.IsValid() ? CachedKWHeroController.Get() : nullptr;
}

UKWHeroCombatComponent* UKWHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
