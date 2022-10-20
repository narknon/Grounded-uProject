#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScriptEvent.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class OEISCRIPTING_API UScriptEvent : public UObject {
    GENERATED_BODY()
public:
    UScriptEvent();
};

