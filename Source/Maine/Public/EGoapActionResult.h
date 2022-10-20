#pragma once
#include "CoreMinimal.h"
#include "EGoapActionResult.generated.h"

UENUM(BlueprintType)
enum class EGoapActionResult : uint8 {
    Failed,
    Succeeded,
};

