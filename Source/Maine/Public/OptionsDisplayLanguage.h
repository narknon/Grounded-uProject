#pragma once
#include "CoreMinimal.h"
#include "ELanguageSetting.h"
#include "LocString.h"
#include "OptionsDisplayLanguage.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FOptionsDisplayLanguage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageSetting ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NativeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedName;
    
    FOptionsDisplayLanguage();
};

