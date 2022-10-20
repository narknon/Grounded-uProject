#pragma once
#include "CoreMinimal.h"
#include "EGameCombatState.generated.h"

UENUM(BlueprintType)
enum class EGameCombatState : uint8 {
    OutOfCombat,
    InCombat,
};

