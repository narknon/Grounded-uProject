#pragma once
#include "CoreMinimal.h"
#include "ETechChipQuery.generated.h"

UENUM(BlueprintType)
enum class ETechChipQuery : uint8 {
    UnlockedOnly,
    ReadyForUnlockOnly,
    All,
};

