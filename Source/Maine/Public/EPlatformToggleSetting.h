#pragma once
#include "CoreMinimal.h"
#include "EPlatformToggleSetting.generated.h"

UENUM(BlueprintType)
enum class EPlatformToggleSetting : uint8 {
    All,
    XBoxOnly,
    WindowsOnly,
};

