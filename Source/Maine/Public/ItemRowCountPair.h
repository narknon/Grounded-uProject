#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemRowCountPair.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FItemRowCountPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FItemRowCountPair();
};

