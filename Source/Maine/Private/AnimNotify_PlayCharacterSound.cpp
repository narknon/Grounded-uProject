#include "AnimNotify_PlayCharacterSound.h"

UAnimNotify_PlayCharacterSound::UAnimNotify_PlayCharacterSound() {
    this->SoundType = ECharacterAudioType::;
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->bFollow = true;
}

