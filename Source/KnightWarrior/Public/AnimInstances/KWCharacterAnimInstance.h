// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/KWAnimInstanceBase.h"
#include "KWCharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWCharacterAnimInstance : public UKWAnimInstanceBase
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY()
	class AKWCharacterBase* OwningCharacter;

	UPROPERTY()
	class UCharacterMovementComponent* OwningCharacterMovementComp;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "--- AnimData ---|LocomotionData")
	bool HasAcceleration;
};
