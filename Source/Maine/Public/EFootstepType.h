#pragma once
#include "CoreMinimal.h"
#include "EFootstepType.generated.h"

UENUM(BlueprintType)
enum class EFootstepType : uint8 {
    None,
    Default,
    Sprint,
    Landed,
    Jump,
};

