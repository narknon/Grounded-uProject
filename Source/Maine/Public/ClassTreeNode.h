#pragma once
#include "CoreMinimal.h"
#include "ClassTreeNode.generated.h"

class UActorLiteData;

USTRUCT(BlueprintType)
struct FClassTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
    MAINE_API FClassTreeNode();
};

