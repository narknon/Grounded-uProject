#include "MusicManager.h"

class UMusicTrackData;

void UMusicManager::SetScriptedTrack(UMusicTrackData* TrackData, bool ForcePlayScriptedTrack, bool ClearOnEnd) {
}

void UMusicManager::OnTrackFinished() {
}

void UMusicManager::OnLoadComplete() {
}

void UMusicManager::ClearScriptedTrack() {
}

UMusicManager::UMusicManager() {
    this->CurrentTrack = NULL;
    this->CurrentOverlayTrack = NULL;
    this->ScriptedTrack = NULL;
    this->DefaultMusicSettings = NULL;
    this->LevelMusicSettings = NULL;
    this->OverrideMusicSettings = NULL;
    this->MusicComponent = NULL;
    this->OverlayMusicComponent = NULL;
    this->IsMoviePlaying = false;
    this->bForcePlayScriptedTrack = false;
    this->bClearScriptedTrackOnEnd = false;
    this->TimelapseStartTime = 0.00f;
}

