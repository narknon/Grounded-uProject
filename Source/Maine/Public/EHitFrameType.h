#pragma once
#include "CoreMinimal.h"
#include "EHitFrameType.generated.h"

UENUM(BlueprintType)
enum class EHitFrameType : uint8 {
    HitAtAllFrames,
    OneHitByTarget,
};

