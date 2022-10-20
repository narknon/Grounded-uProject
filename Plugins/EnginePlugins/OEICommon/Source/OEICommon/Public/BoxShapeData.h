#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShapeInterface.h"
#include "BoxShapeData.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FBoxShapeData : public FShapeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    FBoxShapeData();
};

