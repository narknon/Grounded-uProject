#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectClearFlags.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectClearFlags : uint8 {
    DealDamage,
    TakeDamage,
    CombatStart,
    CombatEnd,
    Rest,
};

