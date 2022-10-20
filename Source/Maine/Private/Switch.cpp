#include "Switch.h"
#include "Net/UnrealNetwork.h"
#include "OCLComponent.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class AActor;

void ASwitch::SetUsesRemaining(float UsesRemaining) {
}




void ASwitch::NativeOnUpdateVisualState(bool IsOpen) {
}

void ASwitch::NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator) {
}

void ASwitch::NativeOnLockStateChanged(bool IsLocked) {
}

void ASwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASwitch, NumUsesRemaining);
}

ASwitch::ASwitch() {
    /*this->SwitchMode = ESwitchMode::;*/
    this->NumUsesRemaining = 0.00f;
    this->OCLComponent = CreateDefaultSubobject<UOCLComponent>(TEXT("OCLComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

