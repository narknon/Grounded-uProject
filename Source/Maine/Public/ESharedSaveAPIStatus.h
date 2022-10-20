#pragma once
#include "CoreMinimal.h"
#include "ESharedSaveAPIStatus.generated.h"

UENUM(BlueprintType)
enum class ESharedSaveAPIStatus : uint8 {
    Unknown,
    Enabled,
    Disabled,
    Maintenance,
    InvalidVersion,
    QueryFailure,
};

