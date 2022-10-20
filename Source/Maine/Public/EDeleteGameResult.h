#pragma once
#include "CoreMinimal.h"
#include "EDeleteGameResult.generated.h"

UENUM(BlueprintType)
enum class EDeleteGameResult : uint8 {
    Success,
    Restricted,
    Failed,
    SaveOfGivenNameNotFound,
    FailedDeletingStaleTargetDir,
};

