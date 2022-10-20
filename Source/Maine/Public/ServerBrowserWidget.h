#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "FindSessionsCallbackProxy.h"
#include "ServerBrowserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UServerBrowserWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UServerBrowserWidget();
    UFUNCTION(BlueprintCallable)
    void ViewPlayerProfileFromSession(const FBlueprintSessionResult& Session);
    
};

