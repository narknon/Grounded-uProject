#pragma once
#include "CoreMinimal.h"
#include "SharedSaveUser.h"
#include "BaseResponse.h"
#include "SaveLimits.h"
#include "TokenGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FTokenGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 expiresAtUnix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveLimits SaveLimits;
    
    FTokenGetResponse();
};

