#pragma once
#include "CoreMinimal.h"
#include "EIncapacitationSetting.generated.h"

UENUM(BlueprintType)
enum class EIncapacitationSetting : uint8 {
    None,
    Always,
    MultiplayerOnly,
};

