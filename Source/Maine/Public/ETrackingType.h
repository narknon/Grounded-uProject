#pragma once
#include "CoreMinimal.h"
#include "ETrackingType.generated.h"

UENUM(BlueprintType)
enum class ETrackingType : uint8 {
    Head,
    Body,
    Count,
};

