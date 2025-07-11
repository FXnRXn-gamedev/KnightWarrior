// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAssets/Input/DataAsset_KWInputConfig.h"
#include "KWInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserObject, typename CallbackFunc>
	void BindNativeInputAction(const UDataAsset_KWInputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func);
};

template <class UserObject, typename CallbackFunc>
void UKWInputComponent::BindNativeInputAction(const UDataAsset_KWInputConfig* InInputConfig,
	const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func)
{
	checkf(InInputConfig, TEXT("Input Config Data asset null, Cannot proceed !!"));
	if (UInputAction* Action = InInputConfig->FindNativeInputActionByTag(InInputTag))
	{
		BindAction(Action, TriggerEvent, ContextObject, Func);
	}
}
