// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Characters/Player/KWCharacterBase.h"
#include "KWCharacterHero.generated.h"

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
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;



private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- Camera ---", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "--- Camera ---", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

#pragma endregion

#pragma region Inputs
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- CharacterData ---", meta = (AllowPrivateAccess = "true"))
	class UDataAsset_KWInputConfig* InputConfigDataAsset;


	void Input_Move(const FInputActionValue& Value);
	void Input_Look(const FInputActionValue& Value);
#pragma endregion
	
};

