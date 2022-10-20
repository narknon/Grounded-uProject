#include "HotBarWidget.h"

void UHotBarWidget::OnSelectedItemChanged() {
}


UHotBarWidget::UHotBarWidget() {
    this->SelectedSlot = 0.00f;
    this->CurrentPage = 0.00f;
    this->bUsingHotBar = false;
}

