#include "MaineMovieWidget.h"

void UMaineMovieWidget::OnMovieOpened() {
}

void UMaineMovieWidget::OnMovieFailed() {
}

void UMaineMovieWidget::OnFadeComplete(bool bFadeIn) {
}

void UMaineMovieWidget::OnAllPlayersSkipped() {
}

UMaineMovieWidget::UMaineMovieWidget() {
    this->MoviePlayer = NULL;
    this->FadePanel = NULL;
    this->ProgressGroup = NULL;
}

