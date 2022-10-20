#pragma once
#include "CoreMinimal.h"
#include "EOnlineVoiceIncomingChannel.generated.h"

UENUM(BlueprintType)
enum class EOnlineVoiceIncomingChannel : uint8 {
    MicrophoneAudio,
    TextToSpeechAudio,
};

