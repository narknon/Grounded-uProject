#pragma once
#include "CoreMinimal.h"
#include "EAnimMovementState.generated.h"

UENUM(BlueprintType)
enum class EAnimMovementState : uint8 {
    OnGround,
    InAir,
    Climbing,
};

