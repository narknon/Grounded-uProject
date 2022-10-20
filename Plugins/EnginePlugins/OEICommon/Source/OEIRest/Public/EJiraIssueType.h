#pragma once
#include "CoreMinimal.h"
#include "EJiraIssueType.generated.h"

UENUM(meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EJiraIssueType : uint32 {
    Bug = 0x1,
    Task = 0x29CD,
    Unknown = 0xFFFF,
};

ENUM_CLASS_FLAGS(EJiraIssueType);