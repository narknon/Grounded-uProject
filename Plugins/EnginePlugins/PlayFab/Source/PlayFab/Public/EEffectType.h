#pragma once
#include "CoreMinimal.h"
#include "EEffectType.generated.h"

UENUM(BlueprintType)
enum class EEffectType : uint8 {
    pfenum_Allow,
    pfenum_Deny,
    pfenum_MAX UMETA(Hidden),
};

