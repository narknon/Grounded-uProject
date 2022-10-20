#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableBlockers.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_DisableBlockers : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableBlockers();
};

