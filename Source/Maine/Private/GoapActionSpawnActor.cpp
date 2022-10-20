#include "GoapActionSpawnActor.h"

UGoapActionSpawnActor::UGoapActionSpawnActor() {
    this->SpawnActorHard = NULL;
    this->bFaceCharacter = false;
    this->bSpawnOnGround = true;
    this->bForceSimulatePhysics = false;
    this->bSpawnActorIsRelevantItem = false;
}

