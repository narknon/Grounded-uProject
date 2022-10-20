#pragma once
#include "CoreMinimal.h"
#include "EOEIMovieQuality.generated.h"

UENUM(BlueprintType)
enum class EOEIMovieQuality : uint8 {
    None,
    Quality_1080p30,
    Quality_1080p60,
    Quality_4k60,
};

