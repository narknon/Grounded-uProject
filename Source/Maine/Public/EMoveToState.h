#pragma once
#include "CoreMinimal.h"
#include "EMoveToState.generated.h"

UENUM(BlueprintType)
enum class EMoveToState : uint8 {
    None,
    MoveToTarget,
    MoveToNavMesh,
    Failed,
    Success,
};

