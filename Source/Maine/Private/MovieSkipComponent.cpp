#include "MovieSkipComponent.h"
#include "Net/UnrealNetwork.h"

class APlayerState;
class ASurvivalPlayerState;

void UMovieSkipComponent::ServerSkipRequestCanceled_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::ServerSetPlayerInMovie_Implementation(APlayerState* Player, bool bInMovie) {
}

void UMovieSkipComponent::ServerRequestSkipProgressState_Implementation(ASurvivalPlayerState* RequestingPlayerState) {
}

void UMovieSkipComponent::ServerOnMovieStarted_Implementation() {
}

void UMovieSkipComponent::ServerOnMovieFinished_Implementation() {
}

void UMovieSkipComponent::ServerBeginRequestSkip_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::RemoveSkippingPlayer(APlayerState* Player) {
}

void UMovieSkipComponent::OnRep_PlayersInMovie() {
}

void UMovieSkipComponent::MulticastSkipRequestSucceeded_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastSkipRequestCanceled_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastOnMovieStarted_Implementation() {
}

void UMovieSkipComponent::MulticastOnMovieFinished_Implementation() {
}

void UMovieSkipComponent::MulticastBeginRequestSkip_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastAllSkipped_Implementation() {
}

bool UMovieSkipComponent::IsPlayerRequestingSkip(APlayerState* Player) const {
    return false;
}

bool UMovieSkipComponent::IsPlayerInMovie(APlayerState* Player) const {
    return false;
}

float UMovieSkipComponent::GetSkipProgress(APlayerState* Player) const {
    return 0.0f;
}

bool UMovieSkipComponent::DidPlayerSuccessfullySkip(APlayerState* Player) const {
    return false;
}

void UMovieSkipComponent::ClientReceiveSkipProgressState_Implementation(const TArray<APlayerState*>& Players, const TArray<float>& PercentCompletion, const TArray<bool>& IsRequestingSkip) {
}

void UMovieSkipComponent::AddSkippingPlayer(APlayerState* Player) {
}

void UMovieSkipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovieSkipComponent, PlayersInMovie);
}

UMovieSkipComponent::UMovieSkipComponent() {
    this->HoldToSkip = true;
    this->HoldToSkipTime = 0.00f;
}

