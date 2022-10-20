#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionState.generated.h"

UENUM(BlueprintType)
enum class ESoundDetectionState : uint8 {
    None,
    Investigating,
};

