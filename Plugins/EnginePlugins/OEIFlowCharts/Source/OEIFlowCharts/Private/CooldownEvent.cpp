#include "CooldownEvent.h"

FCooldownEvent::FCooldownEvent() {
    this->Cooldown = 0.00f;
    this->GameStartCooldown = 0.00f;
    this->Priority = 0.00f;
    this->MaxSimultaneousVO = 0.00f;
    this->bPlayIfOffScreen = false;
}

