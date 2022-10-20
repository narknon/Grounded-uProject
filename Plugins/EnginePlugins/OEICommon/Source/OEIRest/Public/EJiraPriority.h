#pragma once
#include "CoreMinimal.h"
#include "EJiraPriority.generated.h"

UENUM(BlueprintType)
enum class EJiraPriority : uint8 {
    A1 = 0x2710,
    A2,
    A3,
    B,
    C,
    D,
    Unknown = 0xFFFF,
};

