#pragma once
#include "CoreMinimal.h"
#include "EReportCategory.h"
#include "LocString.h"
#include "PostGameReport.generated.h"

USTRUCT(BlueprintType)
struct FPostGameReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowestScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReportCategory LowestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TipString;
    
    MAINE_API FPostGameReport();
};

