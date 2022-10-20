#pragma once
#include "CoreMinimal.h"
#include "EBuildingTargettingType.generated.h"

UENUM(BlueprintType)
enum class EBuildingTargettingType : uint8 {
    Default,
    AlwaysAttack,
    Ignore,
};

