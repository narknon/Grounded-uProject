#pragma once
#include "CoreMinimal.h"
#include "ELODDebugDrawMode.generated.h"

UENUM(BlueprintType)
enum class ELODDebugDrawMode : uint8 {
    None,
    All,
    ErrorsOnly,
};

