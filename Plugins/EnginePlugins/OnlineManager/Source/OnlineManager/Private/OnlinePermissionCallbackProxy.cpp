#include "OnlinePermissionCallbackProxy.h"

class UObject;
class APlayerController;
class UOnlinePermissionCallbackProxy;

UOnlinePermissionCallbackProxy* UOnlinePermissionCallbackProxy::OnlineCheckUserPrivilege(UObject* WorldContextObject, APlayerController* InPlayerController, EOnlineUserPrivilege InPrivilegeToCheck, bool bSilently, FName InSubsystemName) {
    return NULL;
}

UOnlinePermissionCallbackProxy::UOnlinePermissionCallbackProxy() {
}

