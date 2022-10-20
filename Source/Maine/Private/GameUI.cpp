#include "GameUI.h"

class UTexture2D;
class ASurvivalPlayerState;
class ASurvivalPlayerCharacter;
class UHUDWidget;

void AGameUI::PostPlayerChatMessage(const FString& Message, ASurvivalPlayerState* PlayerState) {
}

void AGameUI::PostGenericMessage(const FString& Message, UTexture2D* MessageTexture) {
}

void AGameUI::PostChatMessage(const FChatBoxMessage& Message) {
}

void AGameUI::OnDayNightChange(bool bIsDayTime) {
}

void AGameUI::OnControllerPairingChanged(int32 InControllerIndex, int32 InNewUserId, int32 inOldUserId) {
}

void AGameUI::NotifyPossessedPlayerChanged(ASurvivalPlayerCharacter* NewPlayerCharacter) {
}

void AGameUI::NotifyPlayerStateRegistered(ASurvivalPlayerState* NewPlayerState) {
}

void AGameUI::NotifyGlobalColorChanged() {
}

bool AGameUI::GetShowSubtitles() const {
    return false;
}

UHUDWidget* AGameUI::GetHUD() const {
    return NULL;
}

AGameUI::AGameUI() {
}

