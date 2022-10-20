#pragma once
#include "CoreMinimal.h"
#include "EItemProcessingState.generated.h"

UENUM(BlueprintType)
enum class EItemProcessingState : uint8 {
    Empty,
    NotStarted,
    Working,
    Finished,
};

