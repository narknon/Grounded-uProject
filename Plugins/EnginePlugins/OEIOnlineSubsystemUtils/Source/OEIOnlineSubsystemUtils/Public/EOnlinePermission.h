#pragma once
#include "CoreMinimal.h"
#include "EOnlinePermission.generated.h"

UENUM(BlueprintType)
enum class EOnlinePermission : uint8 {
    CommunicateUsingText,
    CommunicateUsingVideo,
    CommunicateUsingVoice,
    ViewTargetProfile,
    ViewTargetPresence,
    PlayMultiplayer,
};

