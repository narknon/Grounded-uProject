#pragma once
#include "CoreMinimal.h"
#include "EGameCombatEndReason.generated.h"

UENUM(BlueprintType)
enum class EGameCombatEndReason : uint8 {
    Victory,
    Flee,
    Death,
};

