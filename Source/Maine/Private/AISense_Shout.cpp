#include "AISense_Shout.h"

class UObject;
class AActor;

void UAISense_Shout::ReportShoutEvent(UObject* WorldContextObject, AActor* Shouter, AActor* Target, FName Tag) {
}

UAISense_Shout::UAISense_Shout() {
    this->SpeedOfSoundSq = 0.00f;
}

