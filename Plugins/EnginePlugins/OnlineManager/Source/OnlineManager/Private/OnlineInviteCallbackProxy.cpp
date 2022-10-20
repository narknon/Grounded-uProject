#include "OnlineInviteCallbackProxy.h"

class UObject;
class APlayerController;
class UOnlineInviteCallbackProxy;

UOnlineInviteCallbackProxy* UOnlineInviteCallbackProxy::OnlineSendInvite(UObject* WorldContextObject, APlayerController* InPlayerController, const FBlueprintFriendResult& TargetPlayer) {
    return NULL;
}

bool UOnlineInviteCallbackProxy::OnlineHasInvitationWaitingLogin(UObject* WorldContextObject) {
    return false;
}

UOnlineInviteCallbackProxy::UOnlineInviteCallbackProxy() {
}

