#pragma once
#include "CoreMinimal.h"
#include "BaseOptionsDropdownAsset.h"
#include "OptionsDisplayLanguage.h"
#include "OptionsDropdownLanguageAsset.generated.h"

UCLASS(Blueprintable)
class MAINE_API UOptionsDropdownLanguageAsset : public UBaseOptionsDropdownAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionsDisplayLanguage> Languages;
    
    UOptionsDropdownLanguageAsset();
};

