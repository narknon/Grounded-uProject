#pragma once
#include "CoreMinimal.h"
#include "ECanRevertToFoliageState.generated.h"

UENUM(BlueprintType)
enum class ECanRevertToFoliageState : uint8 {
    No,
    IfNecessary,
    Yes,
};

