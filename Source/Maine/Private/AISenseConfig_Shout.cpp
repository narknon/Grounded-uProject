#include "AISenseConfig_Shout.h"
#include "AISense_Shout.h"

UAISenseConfig_Shout::UAISenseConfig_Shout() {
    this->Implementation = UAISense_Shout::StaticClass();
    this->ShoutHearingRadius = 0.00f;
}

