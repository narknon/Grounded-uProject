#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableReferenceConditional.h"
#include "BurgleQuestParameterValue.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ProgressRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional GlobalVariableCondition;
    
    FBurgleQuestParameterValue();
};

