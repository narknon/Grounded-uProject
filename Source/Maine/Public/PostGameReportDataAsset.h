#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EReportCategory.h"
#include "ReportGlobalVariableData.h"
#include "ReportCategoryData.h"
#include "PostGameReportDataAsset.generated.h"

class UPlayerStatConfig;

UCLASS(Blueprintable)
class MAINE_API UPostGameReportDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReportCategory, FReportCategoryData> CategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReportGlobalVariableData> GlobalVariableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerStatConfig*> Stats;
    
    UPostGameReportDataAsset();
};

