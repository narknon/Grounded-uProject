#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "ReportCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FReportCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TipString;
    
    MAINE_API FReportCategoryData();
};

