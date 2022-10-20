#pragma once
#include "CoreMinimal.h"
#include "EHazardEffectApplyType.generated.h"

UENUM(BlueprintType)
enum class EHazardEffectApplyType : uint8 {
    Overlap,
    Interval,
};

