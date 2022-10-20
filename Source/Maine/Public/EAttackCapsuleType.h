#pragma once
#include "CoreMinimal.h"
#include "EAttackCapsuleType.generated.h"

UENUM(BlueprintType)
enum class EAttackCapsuleType : uint8 {
    Attack,
    PullForce,
    AttachSocket,
};

