// FXnRXn copyright notice

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/KWAnimInstanceBase.h"
#include "KWHeroLinkedAnimLayer.generated.h"

class UKWHeroAnimInstance;
/**
 * 
 */
UCLASS()
class KNIGHTWARRIOR_API UKWHeroLinkedAnimLayer : public UKWAnimInstanceBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UKWHeroAnimInstance* GetHeroAnimInstance() const;
};
