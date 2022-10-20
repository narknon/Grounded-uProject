#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AuthenticationValidateEntityTokenResponse.h"
#include "AuthenticationGetEntityTokenResponse.h"
#include "PlayFabAuthenticationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabAuthenticationModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FAuthenticationValidateEntityTokenResponse decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationGetEntityTokenResponse decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* response);
    
};

