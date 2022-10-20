#pragma once
#include "CoreMinimal.h"
#include "ENodeDisplayType.h"
#include "SpeakerBundle.h"
#include "EConversationNodeDisplayStyle.h"
#include "ShowConversationNodeParams.generated.h"

USTRUCT(BlueprintType)
struct FShowConversationNodeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerResponseString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerBundle Speaker;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodeDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideSpeaker;
    
    MAINE_API FShowConversationNodeParams();
};

