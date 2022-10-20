#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableReferenceConditional.h"
#include "ReportCategoryData.h"
#include "ReportGlobalVariableData.generated.h"

USTRUCT(BlueprintType)
struct FReportGlobalVariableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCategoryData ReportData;
    
    MAINE_API FReportGlobalVariableData();
};

