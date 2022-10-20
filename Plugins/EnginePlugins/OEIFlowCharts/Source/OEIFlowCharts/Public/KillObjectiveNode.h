#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveNode.h"
#include "EKillTargetType.h"
#include "GlobalVariableConditional.h"
#include "KillObjectiveNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FKillObjectiveNode : public FObjectiveNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional ChildFailedConditional;
    
public:
    FKillObjectiveNode();
};

