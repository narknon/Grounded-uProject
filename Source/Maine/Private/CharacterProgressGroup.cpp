#include "CharacterProgressGroup.h"

class APlayerState;

void UCharacterProgressGroup::SetSkipComponentRegistration(bool Registered) {
}

void UCharacterProgressGroup::OnSkipStatusUpdate() {
}

void UCharacterProgressGroup::OnPlayerCanceledSkip(APlayerState* Player) {
}

void UCharacterProgressGroup::OnAllPlayersSkipped() {
}

UCharacterProgressGroup::UCharacterProgressGroup() {
    this->SkipWidgets = NULL;
    this->ProgressBarOne = NULL;
    this->ProgressBarTwo = NULL;
    this->ProgressBarThree = NULL;
    this->ProgressBarFour = NULL;
    this->SkipButton = NULL;
    this->ShowSkipWidgets = NULL;
    this->ShowProgressBarOne = NULL;
    this->ShowProgressBarTwo = NULL;
    this->ShowProgressBarThree = NULL;
    this->ShowProgressBarFour = NULL;
    this->ShowSkipButton = NULL;
    this->FadeTimeMax = 0.00f;
}

