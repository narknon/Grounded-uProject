#pragma once
#include "CoreMinimal.h"
#include "HidePoseableCloneOverrideDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHidePoseableCloneOverride, ACharacter*, PoseableClone);

