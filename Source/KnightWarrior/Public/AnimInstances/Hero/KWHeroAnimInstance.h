// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/KWCharacterAnimInstance.h"
#include "KWHeroAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWHeroAnimInstance : public UKWCharacterAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	FORCEINLINE bool GetIsOnGround() const {return !bIsJumping;}

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|Refferences")
	class AKWCharacterHero* OwningHeroCharacter;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	bool bShouldEnterRelaxState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	float EnterRelaxStateThreshold = 5.f;

	float IdleElapsedTime;


	
	bool		bIsJumping;
	
#pragma region Look AO

	FRotator	LookRotOffset;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	float LookYawOffset;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	float LookPitchOffset;

#pragma endregion 

	
};
