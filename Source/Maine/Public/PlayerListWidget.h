#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "BlueprintFriendResult.h"
#include "PlayerListWidget.generated.h"

class APlayerState;
class APlayerController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UPlayerListWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPlayerListWidget();
    UFUNCTION(BlueprintCallable)
    void ViewPlayerProfileFromFriendStruct(const FBlueprintFriendResult& Friend);
    
    UFUNCTION(BlueprintCallable)
    void ViewPlayerProfile(APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer(APlayerController* Controller);
    
};

