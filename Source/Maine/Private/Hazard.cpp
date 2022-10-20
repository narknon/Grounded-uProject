#include "Hazard.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

class ASurvivalCharacter;
class AActor;
class UPrimitiveComponent;
class UAttack;

void AHazard::SetProjectileAttackOwner(AActor* NewOwner) {
}

void AHazard::OnRep_HazardEnding() {
}

void AHazard::OnRep_HazardEnabled() {
}

void AHazard::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHazard::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AHazard::IsHazardExpired() const {
    return false;
}

void AHazard::HazardExpired() {
}


UAttack* AHazard::GetProjectileAttack() {
    return NULL;
}

bool AHazard::GetHazardEnabled() const {
    return false;
}

void AHazard::EnableHazard(bool bEnabled) {
}

bool AHazard::CanApplyToTarget_Implementation(ASurvivalCharacter* TargetToTest) {
    return false;
}

void AHazard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHazard, bHazardEnded);
    DOREPLIFETIME(AHazard, bHazardEnabled);
}

AHazard::AHazard() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CollisionComponent = NULL;
    this->TickInterval = 0.00f;
    this->Lifetime = 0.00f;
    this->bTickForDamage = true;
    this->DamageStyle = (EInflictDamageStyle)140698270272880;
    this->bHazardEnded = false;
    this->bHazardEnabled = true;
    this->FailsafeDestroyTime = 0.00f;
    this->StatusEffectApplyType = (EHazardEffectApplyType)140698270272880;
    this->ScreenEffect = NULL;
    this->ProjectileOwner = NULL;
    this->ProjectileAttack = NULL;
    this->bAlwaysClearEffectsOnExit = false;
}

