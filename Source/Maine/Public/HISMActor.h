#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HISMActor.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAINE_API AHISMActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* HISMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalInstancedStaticMeshComponent*> ClusterHISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Outliers;
    
    AHISMActor();
};

