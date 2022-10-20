#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "BlueprintFriendResult.h"
#include "ManageSharedSavesWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UManageSharedSavesWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UManageSharedSavesWidget();
    UFUNCTION(BlueprintCallable)
    void ViewPlayerProfileFromFriendStruct(const FBlueprintFriendResult& Friend);
    
};

