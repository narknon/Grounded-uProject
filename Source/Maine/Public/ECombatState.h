#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM(BlueprintType)
enum class ECombatState : uint8 {
    Attack,
    Idle,
};

