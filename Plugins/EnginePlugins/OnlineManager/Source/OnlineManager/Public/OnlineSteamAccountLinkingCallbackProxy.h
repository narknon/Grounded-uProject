#pragma once
#include "CoreMinimal.h"
#include "OnlineAccountLinkResultDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineSteamAccountLinkingCallbackProxy.generated.h"

class APlayerController;
class UOnlineSteamAccountLinkingCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineSteamAccountLinkingCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineAccountLinkResult onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineAccountLinkResult onFailure;
    
    UOnlineSteamAccountLinkingCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineSteamAccountLinkingCallbackProxy* OnlineSteamAccountLinking(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

