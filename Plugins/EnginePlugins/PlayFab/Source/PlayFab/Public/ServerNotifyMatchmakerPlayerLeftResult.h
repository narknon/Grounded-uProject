#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EPlayerConnectionState.h"
#include "ServerNotifyMatchmakerPlayerLeftResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerNotifyMatchmakerPlayerLeftResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerConnectionState PlayerState;
    
    FServerNotifyMatchmakerPlayerLeftResult();
};

