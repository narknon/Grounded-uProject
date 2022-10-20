#pragma once
#include "CoreMinimal.h"
#include "ETextDisplayType.generated.h"

UENUM(BlueprintType)
enum class ETextDisplayType : uint8 {
    Percentage,
    NormalizedPercentage,
    NormalizedDisplayPercentage,
    IntegerPercentage,
    RawInteger,
    RawFloat,
};

