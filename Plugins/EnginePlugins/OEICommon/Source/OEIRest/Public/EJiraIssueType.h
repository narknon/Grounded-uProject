#pragma once
#include "CoreMinimal.h"
#include "EJiraIssueType.generated.h"

UENUM(BlueprintType)
enum class EJiraIssueType : uint8 {
    Bug = 0x1,
    Task = 0x29CD,
    Unknown = 0xFFFF,
};

