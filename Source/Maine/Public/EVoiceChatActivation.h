#pragma once
#include "CoreMinimal.h"
#include "EVoiceChatActivation.generated.h"

UENUM(BlueprintType)
enum class EVoiceChatActivation : uint8 {
    Never,
    PushToTalk,
    OnActivity,
};

