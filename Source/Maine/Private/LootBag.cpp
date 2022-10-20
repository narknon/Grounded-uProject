#include "LootBag.h"
#include "Net/UnrealNetwork.h"
#include "LootComponent.h"
#include "InventoryComponent.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class AActor;

void ALootBag::TickBuoyancy(float DeltaTime) {
}

void ALootBag::ResyncReplicationTransform() {
}

void ALootBag::OnInteractingActorDestroyed(AActor* Actor) {
}

bool ALootBag::GetShouldShowHUDMarker_Implementation() const {
    return false;
}

void ALootBag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALootBag, OwnerPlayerGuid);
    DOREPLIFETIME(ALootBag, OwnerName);
    DOREPLIFETIME(ALootBag, DisplayName);
    DOREPLIFETIME(ALootBag, bInUse);
}

ALootBag::ALootBag() {
    this->LiteData = NULL;
    this->bOnlyAllowPreviousOwnerToLoot = false;
    this->bAutoLootOnInteract = true;
    this->bDestroyWhenEmpty = true;
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->LootComponent = CreateDefaultSubobject<ULootComponent>(TEXT("LootComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->bUseBuoyancy = false;
    this->bInUse = false;
}

