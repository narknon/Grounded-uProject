#pragma once
#include "CoreMinimal.h"
#include "ECharacterLockCategory.generated.h"

UENUM(BlueprintType)
enum class ECharacterLockCategory : uint8 {
    None,
    Animation,
    Cinematic,
    AI,
    Capture,
};

