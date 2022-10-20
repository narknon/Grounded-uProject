#pragma once
#include "CoreMinimal.h"
#include "EDefensePointChargeFailType.generated.h"

UENUM(BlueprintType)
enum class EDefensePointChargeFailType : uint8 {
    SingleFail,
    AllFail,
};

