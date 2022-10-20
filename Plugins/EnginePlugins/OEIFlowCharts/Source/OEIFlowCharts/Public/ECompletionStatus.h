#pragma once
#include "CoreMinimal.h"
#include "ECompletionStatus.generated.h"

UENUM(BlueprintType)
enum class ECompletionStatus : uint8 {
    Invalid,
    NotStarted,
    InProgress,
    Completed,
    Failed,
};

