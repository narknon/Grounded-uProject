#pragma once
#include "CoreMinimal.h"
#include "OnBarrierTimeoutDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBarrierTimeout, FName, Barrier, bool, ShouldExecuteBarrier);

