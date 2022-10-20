#include "AISenseConfig_Sound.h"
#include "AISense_Sound.h"

UAISenseConfig_Sound::UAISenseConfig_Sound() {
    this->Implementation = UAISense_Sound::StaticClass();
    this->HearingRadius = 0.00f;
}

