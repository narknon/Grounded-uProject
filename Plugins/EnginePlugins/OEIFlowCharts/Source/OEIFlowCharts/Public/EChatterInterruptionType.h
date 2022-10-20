#pragma once
#include "CoreMinimal.h"
#include "EChatterInterruptionType.generated.h"

UENUM(BlueprintType)
enum class EChatterInterruptionType : uint8 {
    Interrupt,
    PlaySimultaneously,
};

