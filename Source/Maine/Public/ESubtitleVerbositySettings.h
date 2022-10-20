#pragma once
#include "CoreMinimal.h"
#include "ESubtitleVerbositySettings.generated.h"

UENUM(BlueprintType)
enum class ESubtitleVerbositySettings : uint8 {
    DialogueOnly,
    All,
    None,
};

