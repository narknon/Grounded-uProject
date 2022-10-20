#pragma once
#include "CoreMinimal.h"
#include "EBuildingPowerState.generated.h"

UENUM(BlueprintType)
enum class EBuildingPowerState : uint8 {
    BuildingPowerFeatureDisabled,
    Off,
    LowPower,
    FullPower,
};

