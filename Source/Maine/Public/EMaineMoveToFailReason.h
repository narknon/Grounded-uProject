#pragma once
#include "CoreMinimal.h"
#include "EMaineMoveToFailReason.generated.h"

UENUM(BlueprintType)
enum class EMaineMoveToFailReason : uint8 {
    Unspecified,
    StuckInLocalMinimum,
    TooInefficient,
    InterestChanged,
    AttackChanged,
    TargetMoved,
};

