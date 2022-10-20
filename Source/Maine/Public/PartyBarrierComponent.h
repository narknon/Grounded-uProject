#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "OnPlayerArrivedAtBarrierDelegate.h"
#include "OnAllPlayersArrivedAtBarrierDelegate.h"
#include "OnBarrierTimeoutDelegate.h"
#include "PartyBarrierComponent.generated.h"

class UPartyBarrierObject;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPartyBarrierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerArrivedAtBarrier OnPlayerArrivedAtBarrier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersArrivedAtBarrier OnAllPlayersArrivedAtBarrier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBarrierTimeout OnBarrierTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UPartyBarrierObject>> PartyBarrierTypes;
    
public:
    UPartyBarrierComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayerArrivedAtBarrier(FName BarrierName, APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnPlayerArrivedAtBarrier(APlayerState* Player, FName BarrierName, bool ShouldExecuteBarrier);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnBarrierTimeout(FName BarrierName, bool ShouldExecuteBarrier);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnAllPlayersArrivedAtBarrier(FName BarrierName, bool ShouldExecuteBarrier);
    
};

