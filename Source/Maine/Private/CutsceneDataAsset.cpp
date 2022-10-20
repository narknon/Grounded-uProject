#include "CutsceneDataAsset.h"

UCutsceneDataAsset::UCutsceneDataAsset() {
    this->TargetType = ECutsceneTargetType::;
    this->bProvideInitialFOV = true;
    this->InitialFOV = 0.00f;
    this->bHidePlayerCharacters = false;
    this->SoundMix = NULL;
}

