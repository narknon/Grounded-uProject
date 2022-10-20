#pragma once
#include "CoreMinimal.h"
#include "EWaveAttackState.generated.h"

UENUM(BlueprintType)
enum class EWaveAttackState : uint8 {
    None,
    SpawnFailure,
    Traveling,
    AttackingBase,
    Retreating,
};

