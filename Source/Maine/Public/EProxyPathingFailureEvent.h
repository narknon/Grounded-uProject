#pragma once
#include "CoreMinimal.h"
#include "EProxyPathingFailureEvent.generated.h"

UENUM(BlueprintType)
enum class EProxyPathingFailureEvent : uint8 {
    None,
    ProjectStart,
    ProjectEnd,
    FindPath,
    Obstructed,
    LocalMinimum,
    TargetMissing,
};

