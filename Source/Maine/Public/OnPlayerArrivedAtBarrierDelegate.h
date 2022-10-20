#pragma once
#include "CoreMinimal.h"
#include "OnPlayerArrivedAtBarrierDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerArrivedAtBarrier, APlayerState*, Player, FName, Barrier, bool, ShouldExecuteBarrier);

