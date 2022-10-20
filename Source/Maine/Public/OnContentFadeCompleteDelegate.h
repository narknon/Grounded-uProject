#pragma once
#include "CoreMinimal.h"
#include "OnContentFadeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContentFadeComplete, bool, bFadeIn);

