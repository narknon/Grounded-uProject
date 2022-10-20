#pragma once
#include "CoreMinimal.h"
#include "EScreenEffectType.generated.h"

UENUM(BlueprintType)
enum class EScreenEffectType : uint8 {
    Instant,
    InOut,
};

