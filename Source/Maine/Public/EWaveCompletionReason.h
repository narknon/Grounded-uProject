#pragma once
#include "CoreMinimal.h"
#include "EWaveCompletionReason.generated.h"

UENUM(BlueprintType)
enum class EWaveCompletionReason : uint8 {
    Failure,
    Success,
};

