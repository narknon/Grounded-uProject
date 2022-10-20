#pragma once
#include "CoreMinimal.h"
#include "EScalabilitySettings.generated.h"

UENUM(BlueprintType)
enum class EScalabilitySettings : uint8 {
    Low,
    Medium,
    High,
    Epic,
};

