#include "PartyBarrierComponent.h"

class APlayerState;

void UPartyBarrierComponent::ServerPlayerArrivedAtBarrier_Implementation(FName BarrierName, APlayerState* Player) {
}

void UPartyBarrierComponent::MulticastOnPlayerArrivedAtBarrier_Implementation(APlayerState* Player, FName BarrierName, bool ShouldExecuteBarrier) {
}

void UPartyBarrierComponent::MulticastOnBarrierTimeout_Implementation(FName BarrierName, bool ShouldExecuteBarrier) {
}

void UPartyBarrierComponent::MulticastOnAllPlayersArrivedAtBarrier_Implementation(FName BarrierName, bool ShouldExecuteBarrier) {
}

UPartyBarrierComponent::UPartyBarrierComponent() {
}

