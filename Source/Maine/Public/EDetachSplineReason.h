#pragma once
#include "CoreMinimal.h"
#include "EDetachSplineReason.generated.h"

UENUM(BlueprintType)
enum class EDetachSplineReason : uint8 {
    None,
    Landed,
    Ejecting,
    KnockedOff,
    ToppedOut,
};

