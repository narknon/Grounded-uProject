#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ETitleMultiplayerServerEnabledStatus.h"
#include "MultiplayerEnableMultiplayerServersForTitleResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerEnableMultiplayerServersForTitleResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleMultiplayerServerEnabledStatus Status;
    
    FMultiplayerEnableMultiplayerServersForTitleResponse();
};

