#pragma once
#include "CoreMinimal.h"
#include "EColorBlindModeSettings.generated.h"

UENUM(BlueprintType)
enum class EColorBlindModeSettings : uint8 {
    None,
    Deuteranopia,
    Protanopia,
    Tritanopia,
};

