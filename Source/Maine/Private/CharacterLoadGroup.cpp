#include "CharacterLoadGroup.h"

class APlayerState;

void UCharacterLoadGroup::OnPlayerIdentitiesChanged() {
}

void UCharacterLoadGroup::OnPlayerArrivedInGame(APlayerState* Player, FName BarrierName, bool ShouldExecuteBarrier) {
}

UCharacterLoadGroup::UCharacterLoadGroup() {
    this->SkipWidgets = NULL;
    this->ProgressBarOne = NULL;
    this->ProgressBarTwo = NULL;
    this->ProgressBarThree = NULL;
    this->ProgressBarFour = NULL;
    this->SizeBoxOne = NULL;
    this->SizeBoxTwo = NULL;
    this->SizeBoxThree = NULL;
    this->SizeBoxFour = NULL;
}

