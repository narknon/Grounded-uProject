#pragma once
#include "CoreMinimal.h"
#include "EFabricationState.generated.h"

UENUM(BlueprintType)
enum class EFabricationState : uint8 {
    None,
    Ingredients,
    Ready,
    Processing,
    Complete,
    Damaged,
};

