#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintOnlineFindFriendSessionsResultDelegateDelegate.h"
#include "OnlineFindFriendSessionsCallbackProxy.generated.h"

class UObject;
class APlayerController;
class UOnlineFindFriendSessionsCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineFindFriendSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineFindFriendSessionsResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineFindFriendSessionsResultDelegate onFailure;
    
    UOnlineFindFriendSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineFindFriendSessionsCallbackProxy* OnlineFindFriendSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults);
    
};

