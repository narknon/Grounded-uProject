#pragma once
#include "CoreMinimal.h"
#include "EBuildingPlacementMode.generated.h"

UENUM(BlueprintType)
enum class EBuildingPlacementMode : uint8 {
    None,
    Standard,
    Wall,
    Grid,
};

