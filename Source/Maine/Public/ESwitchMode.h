#pragma once
#include "CoreMinimal.h"
#include "ESwitchMode.generated.h"

UENUM(BlueprintType)
enum class ESwitchMode : uint8 {
    AllowNumUses,
    PingPong,
};

