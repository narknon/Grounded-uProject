#pragma once
#include "CoreMinimal.h"
#include "EParticleBlockingVolumeType.generated.h"

UENUM(BlueprintType)
enum class EParticleBlockingVolumeType : uint8 {
    SphereFade,
    BoxKill,
};

