#pragma once
#include "CoreMinimal.h"
#include "EFaceTargetType.generated.h"

UENUM(BlueprintType)
enum class EFaceTargetType : uint8 {
    None,
    FaceTarget,
    AlignWithTarget,
};

