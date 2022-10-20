#pragma once
#include "CoreMinimal.h"
#include "OnAllPlayersArrivedAtBarrierDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAllPlayersArrivedAtBarrier, FName, Barrier, bool, ShouldExecuteBarrier);

