#pragma once
#include "CoreMinimal.h"
#include "ESizzleState.generated.h"

UENUM(BlueprintType)
enum class ESizzleState : uint8 {
    NotSizzling,
    Sizzling,
    MaxSizzle,
};

