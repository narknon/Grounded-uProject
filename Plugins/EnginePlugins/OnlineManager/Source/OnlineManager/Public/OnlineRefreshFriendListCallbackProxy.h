#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintRefreshFriendListResultDelegateDelegate.h"
#include "OnlineRefreshFriendListCallbackProxy.generated.h"

class UObject;
class UOnlineRefreshFriendListCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineRefreshFriendListCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRefreshFriendListResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRefreshFriendListResultDelegate onFailure;
    
    UOnlineRefreshFriendListCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineRefreshFriendListCallbackProxy* OnlineRefreshFriendList(UObject* WorldContextObject, APlayerController* PlayerController, const FString& ListName, FName SubsystemName);
    
};

