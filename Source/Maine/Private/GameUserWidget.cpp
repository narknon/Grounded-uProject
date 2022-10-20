#include "GameUserWidget.h"

class AGameUI;
class ASurvivalPlayerCharacter;
class ASurvivalPlayerController;





void UGameUserWidget::NativeOnLanguageChanged() {
}


ASurvivalPlayerCharacter* UGameUserWidget::GetSurvivalPlayerCharacter() const {
    return NULL;
}

ASurvivalPlayerController* UGameUserWidget::GetOwningSurvivalPlayerController() const {
    return NULL;
}

AGameUI* UGameUserWidget::GetGameUI() const {
    return NULL;
}

UGameUserWidget::UGameUserWidget() {
}

