#pragma once
#include "CoreMinimal.h"
#include "EGardenState.generated.h"

UENUM(BlueprintType)
enum class EGardenState : uint8 {
    Idle,
    InProduction,
    Complete,
};

