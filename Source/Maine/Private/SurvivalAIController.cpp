#include "SurvivalAIController.h"
#include "TrackingComponent.h"
#include "InterestComponent.h"
#include "AITargettingComponent.h"
#include "AIDetectionComponent.h"

class UAnimMontage;
class AWaypoint;
class AActor;
class UAttack;
class AController;
class UBaseLODActor;
class ASurvivalCharacter;
class UWorld;
class ANonPlayerInteraction;

void ASurvivalAIController::UpdateHomeLocation() {
}

void ASurvivalAIController::TickFindNonPlayerInteractions(float DeltaTime) {
}

bool ASurvivalAIController::ShouldWaitAfterWander() {
    return false;
}

bool ASurvivalAIController::ShouldStrafeInCombat() {
    return false;
}

bool ASurvivalAIController::ShouldBurrowAfterFlee() const {
    return false;
}

void ASurvivalAIController::SetWantsToRetreat() {
}

void ASurvivalAIController::SetTargetWaypoint(AWaypoint* Waypoint) {
}

void ASurvivalAIController::SetTarget(AActor* Target) {
}

void ASurvivalAIController::SetNextWaypoint(AWaypoint* NextWaypoint) {
}

void ASurvivalAIController::SetHomeLocation(FVector Location) {
}

void ASurvivalAIController::SetFollowTarget(AActor* Target) {
}

void ASurvivalAIController::SetDisabled(bool bDisabled) {
}

void ASurvivalAIController::SetDesiredCombatAction(AActor* Target, UAttack* Attack, UAnimMontage* AnimMontage) {
}

void ASurvivalAIController::OnWaveAttackStateChanged(EWaveAttackState AttackState) {
}

void ASurvivalAIController::OnRevived() {
}

void ASurvivalAIController::OnHealthStateChanged(EHealthState HealthState) {
}

void ASurvivalAIController::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void ASurvivalAIController::OnCombatChanged(ASurvivalCharacter* CombatCharacter, bool bInCombat) {
}

void ASurvivalAIController::OnAttack(UAttack* Attack) {
}

void ASurvivalAIController::OnActorCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

bool ASurvivalAIController::IsScriptedBpConditionValid_Implementation(FDataTableRowHandle AbilityData) {
    return false;
}

bool ASurvivalAIController::IsInCombat() const {
    return false;
}

bool ASurvivalAIController::IsClimbing() const {
    return false;
}

bool ASurvivalAIController::HasPatrol() const {
    return false;
}

bool ASurvivalAIController::HasAbilityUsableOfPriority(int32 MinPriority) {
    return false;
}

bool ASurvivalAIController::HasAbilityUsable() {
    return false;
}

void ASurvivalAIController::HandleFollowTargetRespawned(ASurvivalCharacter* InOldPawn, ASurvivalCharacter* InNewPawn) {
}

void ASurvivalAIController::HandleActivityModeChanged(UInterestComponent* Sender, ECreatureActivityMode Mode) {
}

FVector ASurvivalAIController::GetWaveDestination() const {
    return FVector{};
}

float ASurvivalAIController::GetWanderRange(const UWorld* World) const {
    return 0.0f;
}

bool ASurvivalAIController::GetUsePathFollower() const {
    return false;
}

float ASurvivalAIController::GetTetherRange() const {
    return 0.0f;
}

FVector ASurvivalAIController::GetSearchOrigin() const {
    return FVector{};
}

float ASurvivalAIController::GetRandomStrafeIdleTime() const {
    return 0.0f;
}

float ASurvivalAIController::GetRandomCombatIdleTime() const {
    return 0.0f;
}

float ASurvivalAIController::GetPreferredMinimumHeight() const {
    return 0.0f;
}

FVector ASurvivalAIController::GetHomeLocation() const {
    return FVector{};
}

bool ASurvivalAIController::GetGoalLocation(FVector& OutLocation) const {
    return false;
}

AActor* ASurvivalAIController::GetGoalActor() const {
    return NULL;
}

AActor* ASurvivalAIController::GetFollowTarget() const {
    return NULL;
}

float ASurvivalAIController::GetFleeRange() const {
    return 0.0f;
}

ANonPlayerInteraction* ASurvivalAIController::GetDesiredNonPlayerInteraction() const {
    return NULL;
}

EBehaviorType ASurvivalAIController::GetDesiredBehavior() const {
    return EBehaviorType::Disabled;
}

AActor* ASurvivalAIController::GetDesiredAttackTarget() const {
    return NULL;
}

UAttack* ASurvivalAIController::GetDesiredAttack() const {
    return NULL;
}

AWaypoint* ASurvivalAIController::GetCurrentWaypoint() const {
    return NULL;
}

FVector2D ASurvivalAIController::GetConeWanderRange() const {
    return FVector2D{};
}

FVector ASurvivalAIController::GetBlackboardTargetLocation() const {
    return FVector{};
}

AActor* ASurvivalAIController::GetBlackboardTargetActor() const {
    return NULL;
}

void ASurvivalAIController::FinishMoveManual(TEnumAsByte<EBTNodeResult::Type> ResultType) {
}

FVector ASurvivalAIController::FindClosestAttachPoint() {
    return FVector{};
}

void ASurvivalAIController::ClearRetreat() {
}

ASurvivalAIController::ASurvivalAIController() {
    this->ManualMoveResult = EBTNodeResult::InProgress;
    this->bIsInBurrowed = false;
    this->WanderDestinationQuery = NULL;
    this->WarpToFollowTargetQuery = NULL;
    this->FollowTargetPriorityDist = 0.00f;
    this->TargettingComponent = CreateDefaultSubobject<UAITargettingComponent>(TEXT("TargettingComponent"));
    this->DetectionComponent = CreateDefaultSubobject<UAIDetectionComponent>(TEXT("DetectionComponent"));
    this->InterestComponent = CreateDefaultSubobject<UInterestComponent>(TEXT("InterestComponent"));
    this->TrackingComponent = CreateDefaultSubobject<UTrackingComponent>(TEXT("TrackingComponent"));
    this->BehaviorTree = NULL;
    this->bIsStationary = false;
    this->bLevelWhenIdle = false;
    this->TetherRange = 0.00f;
    this->TetherRangeTame = 0.00f;
    this->WanderRange = 0.00f;
    this->ActivePetWanderRange = 0.00f;
    this->InactivePetWanderRange = 0.00f;
    this->PreferredMinimumHeight = 0.00f;
    this->bFocusOnInterest = false;
    this->SearchRadius = 0.00f;
    this->TargetClass = NULL;
    this->ExploreMinAltitude = 0.00f;
    this->ExploreMaxAltitude = 0.00f;
    this->DefaultBehaviorType = (EDefaultBehaviorType)140698270272880;
    this->AICharacter = NULL;
    this->AICreature = NULL;
    this->AISwimmingCharacter = NULL;
    this->TokenCooldown = 0.00f;
    this->TokenRandomDeviation = 0.00f;
    this->UsesPerToken = 0.00f;
    this->bIgnoreTargetTokenLimit = false;
    this->bClearThreatAfterAttack = false;
    this->FleeRange = 0.00f;
    this->bNeverFlee = false;
    this->bBurrowAfterFlee = false;
    this->bCanStrafeWhileInCombatIdle = true;
    this->CombatIdleTime = 0.00f;
    this->CombatIdleRandomDeviation = 0.00f;
    this->StrafeIdleTime = 0.00f;
    this->StrafeIdleRandomDeviation = 0.00f;
    this->bPutsPlayersInCombat = true;
    this->bIgnoreWander = false;
    this->TraceType = TraceTypeQuery1;
    this->TerrainTraceDistance = 0.00f;
    this->WanderBlockOffset = 0.00f;
    this->DrawDebugLines = false;
    this->bWaitAfterWander = true;
    this->bDoNonPlayerInteractions = false;
    this->NextWantedAbility = NULL;
    this->LastAbilitySelectedCombatAction = NULL;
    this->WaveCreatureComponent = NULL;
}

