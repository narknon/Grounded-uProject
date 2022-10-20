#pragma once
#include "CoreMinimal.h"
#include "EAlertState.generated.h"

UENUM(BlueprintType)
enum class EAlertState : uint8 {
    Unaware,
    Aware,
    Suspicious,
    Danger,
};

