#pragma once
#include "CoreMinimal.h"
#include "EJiraResolution.generated.h"

UENUM(meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EJiraResolution : uint32 {
    Fixed = 0x1,
    WontFix,
    Duplicate,
    Incomplete,
    CannotReproduce,
    Done = 0x2710,
    Waived = 0x2774,
    Cut = 0x27D8,
    Accepted,
    Rejected,
    WontDo = 0x283D,
    Declined = 0x28A1,
    Completed,
    Reopened,
    Pass = 0x2905,
    Fail,
    Submittable,
    Unknown = 0xFFFF,
};

ENUM_CLASS_FLAGS(EJiraResolution);
