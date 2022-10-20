#include "CreditsWidget.h"

class APlayerState;

void UCreditsWidget::StopCredits(bool bForced) {
}

void UCreditsWidget::StartCredits() {
}

void UCreditsWidget::OnPlayerSkipped(APlayerState* Player) {
}

void UCreditsWidget::OnFadeComplete(bool bFadeIn) {
}



void UCreditsWidget::OnAllPlayersSkipped() {
}

bool UCreditsWidget::IsPlaying() const {
    return false;
}

UCreditsWidget::UCreditsWidget() {
    this->FadePanel = NULL;
    this->ScrollSpeed = 0.00f;
    this->AcceleratedScrollSpeed = 0.00f;
    this->WidgetsPerSecond = 0.00f;
    this->CreditsAsset = NULL;
    this->CreditsScrollBox = NULL;
    this->CreditsVerticalBox = NULL;
    this->ProgressGroup = NULL;
    this->OnCreditsStartGlobalVariableValue = 0.00f;
    this->OnCreditsSkippedGlobalVariableValue = 0.00f;
    this->OnCreditsEndedGlobalVariableValue = 0.00f;
    this->CreditsAssetToUse = NULL;
}

