#pragma once
#include "CoreMinimal.h"
#include "ESetTrapStateFlags.generated.h"

UENUM(BlueprintType)
enum class ESetTrapStateFlags : uint8 {
    None,
    SkipFlush,
    Force,
};

