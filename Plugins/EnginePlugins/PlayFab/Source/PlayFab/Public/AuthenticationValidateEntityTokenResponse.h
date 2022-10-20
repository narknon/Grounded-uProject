#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ELoginIdentityProvider.h"
#include "EIdentifiedDeviceType.h"
#include "AuthenticationValidateEntityTokenResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationValidateEntityTokenResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIdentifiedDeviceType IdentifiedDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoginIdentityProvider IdentityProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Lineage;
    
    FAuthenticationValidateEntityTokenResponse();
};

