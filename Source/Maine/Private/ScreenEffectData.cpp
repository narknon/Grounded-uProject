#include "ScreenEffectData.h"

UScreenEffectData::UScreenEffectData() {
    this->MaterialParameterCollection = NULL;
    this->PostProcessMaterial = NULL;
    /*this->DisplayType = EScreenEffectType::;*/
    this->MaterialParameterIntensityScalar = 0.00f;
    this->ChromaticAberrationIntensityScalar = 0.00f;
}

