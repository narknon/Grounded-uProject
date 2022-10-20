#pragma once
#include "CoreMinimal.h"
#include "EGruntGroup.generated.h"

UENUM(BlueprintType)
enum class EGruntGroup : uint8 {
    None,
    Attack,
    Death,
    HitReact,
    Movement,
};

