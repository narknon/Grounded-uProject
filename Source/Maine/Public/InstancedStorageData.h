#pragma once
#include "CoreMinimal.h"
#include "InstancedStorageData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FInstancedStorageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* ISMComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> StorageToISMIndices;
    
    MAINE_API FInstancedStorageData();
};

