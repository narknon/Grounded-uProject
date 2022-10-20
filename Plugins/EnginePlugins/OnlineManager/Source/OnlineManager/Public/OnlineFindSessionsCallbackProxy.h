#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "OnlineFindSessionsCallbackProxy.generated.h"

class UObject;
class UOnlineFindSessionsCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate onFailure;
    
    UOnlineFindSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineFindSessionsCallbackProxy* OnlineFindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, const FString& SpecificHostId, const FString& SessionTypes);
    
};

