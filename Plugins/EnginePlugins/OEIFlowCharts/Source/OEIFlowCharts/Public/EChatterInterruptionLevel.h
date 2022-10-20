#pragma once
#include "CoreMinimal.h"
#include "EChatterInterruptionLevel.generated.h"

UENUM(BlueprintType)
enum class EChatterInterruptionLevel : uint8 {
    All,
    EventType,
    Set,
    Character,
};

