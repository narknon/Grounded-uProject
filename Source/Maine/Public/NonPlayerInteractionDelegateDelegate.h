#pragma once
#include "CoreMinimal.h"
#include "NonPlayerInteractionDelegateDelegate.generated.h"

class ANonPlayerInteraction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNonPlayerInteractionDelegate, ANonPlayerInteraction*, Sender);

