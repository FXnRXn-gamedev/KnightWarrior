// FXnRXn copyright notice


#include "AnimInstances/Hero/KWHeroLinkedAnimLayer.h"
#include "AnimInstances/Hero/KWHeroAnimInstance.h"

UKWHeroAnimInstance* UKWHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
	return Cast<UKWHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
