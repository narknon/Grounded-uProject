#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteOpenIdConnectionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteOpenIdConnectionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionId;
    
    FAdminDeleteOpenIdConnectionRequest();
};

