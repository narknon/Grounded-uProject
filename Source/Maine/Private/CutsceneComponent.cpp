#include "CutsceneComponent.h"
#include "Net/UnrealNetwork.h"

class UCutsceneDataAsset;
class AActor;
class UObject;
class UWindowWidget;
class ALevelSequenceActor;

void UCutsceneComponent::StartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor) {
}

void UCutsceneComponent::ResumeActiveCutscenes() {
}

void UCutsceneComponent::PlayMovie(UObject* InMediaObject, float Delay) {
}

void UCutsceneComponent::PauseActiveCutscenes() {
}

void UCutsceneComponent::OnRep_IsCutsceneActive() {
}

void UCutsceneComponent::OnMovieWidgetClosed(UWindowWidget* Sender) {
}

void UCutsceneComponent::OnMovieFinished(bool bWasSkipped) {
}

void UCutsceneComponent::MulticastStartCutscene_Implementation(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor) {
}

ALevelSequenceActor* UCutsceneComponent::GetCurrentSequence() const {
    return NULL;
}

void UCutsceneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCutsceneComponent, IsCutsceneActive);
}

UCutsceneComponent::UCutsceneComponent() {
    this->IsCutsceneActive = false;
    this->MovieSoundMix = NULL;
    this->ActiveMovieWidget = NULL;
}

