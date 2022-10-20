#include "ContentFadeWidget.h"

void UContentFadeWidget::OnFadeComplete() {
}

void UContentFadeWidget::BeginFade(bool bFadeIn) {
}

UContentFadeWidget::UContentFadeWidget() {
    this->FadePanel = NULL;
    this->FadeTimeMax = 0.00f;
    this->StartFadedOut = false;
}

