#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnOptionSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionSelected, const FGameplayTag&, ActionSelected);

