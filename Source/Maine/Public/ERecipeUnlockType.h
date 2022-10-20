#pragma once
#include "CoreMinimal.h"
#include "ERecipeUnlockType.generated.h"

UENUM(BlueprintType)
enum class ERecipeUnlockType : uint8 {
    Discovery,
    Research,
    All,
};

