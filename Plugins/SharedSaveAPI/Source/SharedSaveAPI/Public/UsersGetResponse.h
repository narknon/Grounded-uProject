#pragma once
#include "CoreMinimal.h"
#include "SharedSaveUser.h"
#include "BaseResponse.h"
#include "UsersGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FUsersGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveUser User;
    
    FUsersGetResponse();
};

