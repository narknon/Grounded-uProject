#pragma once
#include "CoreMinimal.h"
#include "OnlineAccountLinkResultDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineLinkAccountCallbackProxy.generated.h"

class APlayerController;
class UOnlineLinkAccountCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineLinkAccountCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineAccountLinkResult onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineAccountLinkResult onFailure;
    
    UOnlineLinkAccountCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineLinkAccountCallbackProxy* OnlineUnlinkAccount(UObject* WorldContextObject, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineLinkAccountCallbackProxy* OnlineLinkAccount(UObject* WorldContextObject, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineIsLinked(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineIsAccountLinkingEnabled(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetLinkedAccountDisplayName(APlayerController* InPlayerController);
    
};

