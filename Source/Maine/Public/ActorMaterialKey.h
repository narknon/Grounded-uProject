#pragma once
#include "CoreMinimal.h"
#include "ActorMaterialKey.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FActorMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    MAINE_API FActorMaterialKey();
};

