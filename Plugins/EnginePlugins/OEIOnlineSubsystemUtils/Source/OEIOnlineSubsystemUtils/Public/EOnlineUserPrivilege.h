#pragma once
#include "CoreMinimal.h"
#include "EOnlineUserPrivilege.generated.h"

UENUM(BlueprintType)
enum class EOnlineUserPrivilege : uint8 {
    CrossPlay,
    Clubs,
    CloudSavedGames,
    SocialNetworkSharing,
    AccessUserGeneratedContent,
    Communications,
    Multiplayer,
    AddFriends,
    ReceivingSpeechToText,
    ReceivingTextToSpeech,
    TextToSpeech,
};

