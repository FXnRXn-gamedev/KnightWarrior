// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AKWWeaponBase;

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "--- KW ---|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AKWWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false); //-- bRegisterAsEquippedWeapon(false) = Hero register weapon, bRegisterAsEquippedWeapon(true) = Enemy register weapon

	UFUNCTION(BlueprintCallable, Category = "--- KW ---|Combat")
	AKWWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	UPROPERTY(BlueprintReadWrite, Category = "--- KW ---|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "--- KW ---|Combat")
	AKWWeaponBase* GetCharacterCurrentEquippedWeapon() const;
	
private:
	TMap<FGameplayTag, AKWWeaponBase*> CharacterCarriedWeaponMap;
};
