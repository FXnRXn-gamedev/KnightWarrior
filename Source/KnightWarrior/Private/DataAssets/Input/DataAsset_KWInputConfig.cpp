// FXnRXn copyright notice


#include "DataAssets/Input/DataAsset_KWInputConfig.h"

UInputAction* UDataAsset_KWInputConfig::FindNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FKWInputActionConfig& Action : NativeInputAction)
	{
		if (Action.InputTag == InInputTag && Action.InputAction)
		{
			return Action.InputAction;
		}
	}
	return nullptr;
}

