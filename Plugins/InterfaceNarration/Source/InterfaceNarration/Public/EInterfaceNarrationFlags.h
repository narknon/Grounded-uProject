#pragma once
#include "CoreMinimal.h"
#include "EInterfaceNarrationFlags.generated.h"

UENUM(BlueprintType)
enum class EInterfaceNarrationFlags : uint8 {
    IgnoreChangeCheck,
    Verbose,
    IsUsingMouse,
    IsContextChange,
};

