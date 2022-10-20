#pragma once
#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "ProxyComponent.h"
#include "Components/ActorComponent.h"
#include "UObject/Object.h"
#include "BaseLODComponent.generated.h"



UCLASS(Blueprintable)
class MAINE_API UBaseLODComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* FullComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProxyComponent* ProxyComponent;
    
public:
    UBaseLODComponent();
};

