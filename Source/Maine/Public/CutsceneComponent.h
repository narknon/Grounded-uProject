#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCutsceneEndServerDelegate.h"
#include "OnSessionCutsceneStateChangedDelegate.h"
#include "CutsceneComponent.generated.h"

class UObject;
class AActor;
class UActiveCutscene;
class UMaineMovieWidget;
class USoundMix;
class UCutsceneDataAsset;
class UWindowWidget;
class ALevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCutsceneEndServer OnCutsceneEndServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionCutsceneStateChanged OnSessionCutsceneStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCutsceneActive, meta=(AllowPrivateAccess=true))
    bool IsCutsceneActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMaineMovieWidget> MovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* MovieSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaineMovieWidget* ActiveMovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActiveCutscene*> ActiveCutscenes;
    
public:
    UCutsceneComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintCallable)
    void ResumeActiveCutscenes();
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie(UObject* InMediaObject, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void PauseActiveCutscenes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCutsceneActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieWidgetClosed(UWindowWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFinished(bool bWasSkipped);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetCurrentSequence() const;
    
};

