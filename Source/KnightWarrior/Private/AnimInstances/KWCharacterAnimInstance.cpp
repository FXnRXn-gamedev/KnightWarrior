// FXnRXn copyright notice


#include "AnimInstances/KWCharacterAnimInstance.h"
#include "Characters/Player/KWCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void UKWCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	OwningCharacter = Cast<AKWCharacterBase>(TryGetPawnOwner());
	if (OwningCharacter)
	{
		OwningCharacterMovementComp	= OwningCharacter->GetCharacterMovement();
	}
}

void UKWCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	if (!OwningCharacter || !OwningCharacterMovementComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("OwningCharacter or OwningCharacterMovementComp is NULL"));
		return;
	}

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
	HasAcceleration = OwningCharacterMovementComp->GetCurrentAcceleration().SizeSquared2D() > 0.f;
}
