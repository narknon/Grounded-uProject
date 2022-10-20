#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableReference.generated.h"

USTRUCT(BlueprintType)
struct OEIGLOBALVARIABLES_API FGlobalVariableReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;

    
    
public:
    FGlobalVariableReference();

    
};

FORCEINLINE uint32 GetTypeHash(const FGlobalVariableReference) { return 0; };