#include "SpawnedItemDroplet.h"
#include "Net/UnrealNetwork.h"

class AController;
class AActor;
class UBaseLODActor;

UBaseLODActor* ASpawnedItemDroplet::Unfreeze(AController* InstigatorController) {
    return NULL;
}

void ASpawnedItemDroplet::SetServings(int32 NewServings) {
}



void ASpawnedItemDroplet::OnRep_Servings() {
}

void ASpawnedItemDroplet::OnRep_ActorsContained() {
}


float ASpawnedItemDroplet::GetVolume() const {
    return 0.0f;
}

int32 ASpawnedItemDroplet::GetServings() const {
    return 0;
}

float ASpawnedItemDroplet::GetRadius() const {
    return 0.0f;
}

float ASpawnedItemDroplet::GetOccupiedVolume() const {
    return 0.0f;
}

int32 ASpawnedItemDroplet::GetNumActorContained() const {
    return 0;
}

float ASpawnedItemDroplet::GetAvailableVolume() const {
    return 0.0f;
}

AActor* ASpawnedItemDroplet::GetActorContained(int32 Index) const {
    return NULL;
}

void ASpawnedItemDroplet::EjectRandomActor() {
}

void ASpawnedItemDroplet::EjectAllActors() {
}

void ASpawnedItemDroplet::EjectActor(AActor* Actor) {
}

void ASpawnedItemDroplet::AdjustServings(int32 Delta) {
}

void ASpawnedItemDroplet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnedItemDroplet, Servings);
    DOREPLIFETIME(ASpawnedItemDroplet, ActorsContained);
}

ASpawnedItemDroplet::ASpawnedItemDroplet() {
    this->UnfrozenReplacement = NULL;
    this->ServingVolume = 0.00f;
    this->DefaultRadius = 0.00f;
    this->BufferVolumeRatio = 0.00f;
    this->MaxServings = 0.00f;
    this->EjectForce = 0.00f;
    this->InteractLinearDampening = 0.00f;
    this->SplashVFX = NULL;
    this->ScaleAnimCurve = NULL;
    this->WobbleStrengthCurve = NULL;
    this->MIDDroplet = NULL;
    this->NativeWobbleStrength = 0.00f;
    this->Servings = 0.00f;
}

