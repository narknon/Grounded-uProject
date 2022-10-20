#pragma once
#include "CoreMinimal.h"
#include "OnSessionCutsceneStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionCutsceneStateChanged, bool, IsCutsceneActive);

