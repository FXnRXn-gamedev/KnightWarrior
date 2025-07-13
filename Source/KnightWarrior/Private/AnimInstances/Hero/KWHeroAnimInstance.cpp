// FXnRXn copyright notice


#include "AnimInstances/Hero/KWHeroAnimInstance.h"
#include "Characters/Player/KWCharacterHero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UKWHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (OwningCharacter)
	{
		OwningHeroCharacter = Cast<AKWCharacterHero>(OwningCharacter);
	}
}

void UKWHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	if (HasAcceleration)
	{
		IdleElapsedTime = 0.f;
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElapsedTime += DeltaSeconds;
		bShouldEnterRelaxState = (IdleElapsedTime >= EnterRelaxStateThreshold);
	}

	if (OwningHeroCharacter)
	{
		FRotator BodyRot = OwningHeroCharacter->GetActorRotation();
		FRotator ControlRot = OwningHeroCharacter->GetBaseAimRotation();
		LookRotOffset = UKismetMathLibrary::NormalizedDeltaRotator(ControlRot, BodyRot);
		LookYawOffset = LookRotOffset.Yaw;
		LookPitchOffset = LookRotOffset.Pitch;
	}

	if (OwningCharacterMovementComp)
	{
		bIsJumping = OwningCharacterMovementComp->IsFalling();
	}
}
