#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ETradeStatus.h"
#include "ClientGetPlayerTradesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayerTradesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETradeStatus StatusFilter;
    
    FClientGetPlayerTradesRequest();
};

