#include "AuraReceiverComponent.h"
#include "Net/UnrealNetwork.h"

class ASurvivalCharacter;

void UAuraReceiverComponent::OnCombatChanged(ASurvivalCharacter* Character, bool bInCombat) {
}

void UAuraReceiverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAuraReceiverComponent, ReplicatedEmitterCount);
}

UAuraReceiverComponent::UAuraReceiverComponent() {
    this->bCannotDecreaseInCombat = true;
    this->ReplicatedEmitterCount = 0.00f;
}

