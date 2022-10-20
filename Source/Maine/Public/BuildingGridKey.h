#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBuildingGridSlot.h"
#include "BuildingGridKey.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingGridSlot Slot;
    
    FBuildingGridKey();
};

FORCEINLINE uint32 GetTypeHash(const FBuildingGridKey) { return 0; };