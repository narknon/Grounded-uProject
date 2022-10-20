#pragma once
#include "CoreMinimal.h"
#include "EBuildConfigationType.generated.h"

UENUM(BlueprintType)
enum class EBuildConfigationType : uint8 {
    Debug,
    Development,
    Test,
    Shipping,
};

