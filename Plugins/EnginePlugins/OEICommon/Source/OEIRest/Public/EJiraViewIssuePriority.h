#pragma once
#include "CoreMinimal.h"
#include "EJiraViewIssuePriority.generated.h"

UENUM(BlueprintType)
enum class EJiraViewIssuePriority : uint8 {
    A1,
    A2,
    A3,
    B,
    C,
    D,
};

