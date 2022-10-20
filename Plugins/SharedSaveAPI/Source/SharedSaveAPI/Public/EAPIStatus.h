#pragma once
#include "CoreMinimal.h"
#include "EAPIStatus.generated.h"

UENUM(BlueprintType)
enum class EAPIStatus : uint8 {
    Enabled,
    Disabled,
    Maintenance,
    MaintenanceReadOnly,
};

