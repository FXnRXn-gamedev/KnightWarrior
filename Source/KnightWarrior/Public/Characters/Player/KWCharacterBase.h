// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "KWCharacterBase.generated.h"

class UDataAsset_StartUpDataBase;
UCLASS()
class KNIGHTWARRIOR_API AKWCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKWCharacterBase();
	//~Begin IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~END IAbilitySystemInterface
protected:
	//~Begin Pawn Interface
	virtual void PossessedBy(AController* NewController) override;
	//~END Pawn Interface
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- AbilitySystem ---")
	class UKWAbilitySystemComponent* KWAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- AbilitySystem ---")
	class UKWAttributeSet* KWAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- CharacterData ---")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

public:
	FORCEINLINE UKWAbilitySystemComponent* GetKWAbilitySystemComponent() const { return KWAbilitySystemComponent; }
	FORCEINLINE UKWAttributeSet* GetKWAttributeSet() const { return KWAttributeSet; }
};
