// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataAsset_KWInputConfig.generated.h"


USTRUCT(BlueprintType)
struct FKWInputActionConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Category = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UInputAction* InputAction;
};
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UDataAsset_KWInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(TitleProperty = "InputTag", Category = "InputAction"))
	TArray<FKWInputActionConfig> NativeInputAction;

	UInputAction* FindNativeInputActionByTag(const FGameplayTag& InInputTag) const;
	
};
