#pragma once
#include "CoreMinimal.h"
#include "ECooldownBeginConfig.generated.h"

UENUM(BlueprintType)
enum class ECooldownBeginConfig : uint8 {
    AvailableBeginCooldown,
    RandomBeginCooldown,
    MaxBeginCooldown,
    SetBeginCooldown,
};

