#include "FrankenlineMaster.h"
#include "Net/UnrealNetwork.h"
#include "ObsidianIDComponent.h"
#include "PersistenceComponent.h"

class UStaticMeshComponent;

void AFrankenlineMaster::ReplicateDrawLine() {
}

void AFrankenlineMaster::MulticastDrawLine_Implementation(FVector2D To, uint8 ColorIndex) {
}

void AFrankenlineMaster::MulticastCycleColor_Implementation() {
}

void AFrankenlineMaster::MulticastClear_Implementation() {
}

void AFrankenlineMaster::InputMotion(FVector2D Motion) {
}





FLinearColor AFrankenlineMaster::GetNextColor() const {
    return FLinearColor{};
}

FLinearColor AFrankenlineMaster::GetCurrentColor() const {
    return FLinearColor{};
}

void AFrankenlineMaster::FinallyCycleColor() {
}

void AFrankenlineMaster::FinallyClear() {
}

void AFrankenlineMaster::CacheCursorMesh(UStaticMeshComponent* InCursorMesh) {
}

void AFrankenlineMaster::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFrankenlineMaster, CursorPosition);
}

AFrankenlineMaster::AFrankenlineMaster() {
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->RenderTarget = NULL;
    this->BrushSize = 0.00f;
    this->WriteHeadSize = 0.00f;
    this->LineReplicationRate = 0.00f;
    this->CurrentColorIndex = 0;
}

