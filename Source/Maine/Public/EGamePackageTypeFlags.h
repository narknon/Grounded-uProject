#pragma once
#include "CoreMinimal.h"
#include "EGamePackageTypeFlags.generated.h"

UENUM(BlueprintType)
enum class EGamePackageTypeFlags : uint8 {
    Default,
    Flight,
    Demo,
    PublicTest,
};

