// FXnRXn copyright notice


#include "Characters/Player/KWCharacterBase.h"
#include "AbilitySystem/KWAbilitySystemComponent.h"
#include "AbilitySystem/KWAttributeSet.h"

// Sets default values
AKWCharacterBase::AKWCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	KWAbilitySystemComponent = CreateDefaultSubobject<UKWAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	KWAttributeSet = CreateDefaultSubobject<UKWAttributeSet>(TEXT("AttributeSet"));
	
}

UAbilitySystemComponent* AKWCharacterBase::GetAbilitySystemComponent() const
{
	return GetKWAbilitySystemComponent();
}

void AKWCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (KWAbilitySystemComponent)
	{
		KWAbilitySystemComponent->InitAbilityActorInfo(this, this);
		
		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign start up data to %s"), *GetName());
	}
}


