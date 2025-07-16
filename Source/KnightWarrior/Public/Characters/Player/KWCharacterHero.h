// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Characters/Player/KWCharacterBase.h"
#include "GameplayTagContainer.h"
#include "KWCharacterHero.generated.h"

class UKWHeroCombatComponent;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API AKWCharacterHero : public AKWCharacterBase
{
	GENERATED_BODY()
public:
	AKWCharacterHero();
protected:
	//~Begin Pawn Interface
	virtual void PossessedBy(AController* NewController) override;
	//~END Pawn Interface
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- Camera ---", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- Camera ---", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- Combat ---", meta = (AllowPrivateAccess = "true"))
	UKWHeroCombatComponent* HeroCombatComponent;

#pragma endregion

#pragma region Inputs
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- CharacterData ---", meta = (AllowPrivateAccess = "true"))
	class UDataAsset_KWInputConfig* InputConfigDataAsset;


	void Input_Move(const FInputActionValue& Value);
	void Input_Look(const FInputActionValue& Value);

	void Input_AbilityInputPressed(FGameplayTag InInputTag);
	void Input_AbilityInputReleased(FGameplayTag InInputTag);
#pragma endregion


public:
	FORCEINLINE UKWHeroCombatComponent* GetHeroCombatComponent() const { return HeroCombatComponent; }
};

