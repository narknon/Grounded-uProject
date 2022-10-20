#include "ItemSpawnManager.h"
#include "Net/UnrealNetwork.h"
#include "ObsidianIDComponent.h"
#include "PersistenceComponent.h"

class UTrackedItemSpawnGroup;
class UItemSpawnGroupData;
class AActor;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;

void AItemSpawnManager::OnRep_ReplicatedSpawnData() {
}

UTrackedItemSpawnGroup* AItemSpawnManager::AddSpawnGroupHelper(AActor* InOwner, UItemSpawnGroupData* Group, const FItemSpawnGroup& SpawnGroup, bool bEnabled) {
    return NULL;
}

UTrackedItemSpawnGroup* AItemSpawnManager::AddSpawnGroup(AActor* InOwner, UItemSpawnGroupData* Group, TScriptInterface<ISpawnPointProviderInterface> Provider, bool bEnabled) {
    return NULL;
}

void AItemSpawnManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemSpawnManager, ReplicatedSpawnData);
}

AItemSpawnManager::AItemSpawnManager() {
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
}

