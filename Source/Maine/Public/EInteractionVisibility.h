#pragma once
#include "CoreMinimal.h"
#include "EInteractionVisibility.generated.h"

UENUM(BlueprintType)
enum class EInteractionVisibility : uint8 {
    Default,
    Always,
    Never,
};

