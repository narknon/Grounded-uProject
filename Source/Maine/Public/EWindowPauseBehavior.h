#pragma once
#include "CoreMinimal.h"
#include "EWindowPauseBehavior.generated.h"

UENUM(BlueprintType)
enum class EWindowPauseBehavior : uint8 {
    DoNotPause,
    AlwaysPause,
    PauseBasedOnDifficulty,
    Manual,
};

