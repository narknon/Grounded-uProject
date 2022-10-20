#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSkipRequestCanceledDelegate.h"
#include "Components/ActorComponent.h"
#include "OnPlayerBeganSkipRequestDelegate.h"
#include "OnPlayerSkipRequestCompletedDelegate.h"
#include "OnAllPlayersSkippedDelegate.h"
#include "OnPlayerSkipStatusUpdateDelegate.h"
#include "OnPlayersInMovieChangedDelegate.h"
#include "MovieSkipComponent.generated.h"

class APlayerState;
class ASurvivalPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMovieSkipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBeganSkipRequest OnPlayerBeganSkipRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkipRequestCompleted OnPlayerSkipRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkipRequestCanceled OnPlayerSkipRequestCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersSkipped OnAllPlayersSkipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkipStatusUpdate OnPlayerSkipStatusUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayersInMovieChanged OnPlayersInMovieChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldToSkipTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersInMovie, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> PlayersInMovie;
    
public:
    UMovieSkipComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSkipRequestCanceled(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerInMovie(APlayerState* Player, bool bInMovie);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestSkipProgressState(ASurvivalPlayerState* RequestingPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnMovieStarted();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnMovieFinished();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginRequestSkip(APlayerState* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSkippingPlayer(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInMovie();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSkipRequestSucceeded(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSkipRequestCanceled(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBeginRequestSkip(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAllSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRequestingSkip(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInMovie(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkipProgress(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidPlayerSuccessfullySkip(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveSkipProgressState(const TArray<APlayerState*>& Players, const TArray<float>& PercentCompletion, const TArray<bool>& IsRequestingSkip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSkippingPlayer(APlayerState* Player);
    
};

