#pragma once
#include "CoreMinimal.h"
#include "EJiraPriority.generated.h"

UENUM(meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EJiraPriority : uint32 {
    A1 = 0x2710,
    A2,
    A3,
    B,
    C,
    D,
    Unknown = 0xFFFF,
};

ENUM_CLASS_FLAGS(EJiraPriority);

