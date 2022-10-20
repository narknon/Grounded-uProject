#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridBuildingId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildingGridComponent* Grid;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    FBuildingGridBuildingId();
};

