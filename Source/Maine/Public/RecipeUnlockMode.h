#pragma once
#include "CoreMinimal.h"
#include "RecipeUnlockMode.generated.h"

UENUM(BlueprintType)
enum class RecipeUnlockMode : uint8 {
    Default,
    IncludeHidden,
};

