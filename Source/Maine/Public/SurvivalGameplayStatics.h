#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "UObject/NoExportTypes.h"
#include "EConversationPlayPriority.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ChatterEventReference.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "Camera/CameraTypes.h"
#include "FindSessionsCallbackProxy.h"
#include "ERecipeUnlockType.h"
#include "EStatusEffectType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGamePlatform.h"
#include "EGamePackageType.h"
#include "EGameContentType.h"
#include "EGameInputType.h"
#include "EColorBlindModeSettings.h"
#include "LocString.h"
#include "RecipeRequirements.h"
#include "EBuildConfigationType.h"
#include "UObject/NoExportTypes.h"
#include "EEquipmentSlot.h"
#include "AI/Navigation/NavigationTypes.h"
#include "DamageData.h"
#include "GameplayTagContainer.h"
#include "SurvivalGameplayStatics.generated.h"

class UObject;
class UWidgetManager;
class ASurvivalWorldSettings;
class USoundConcurrency;
class UMaterialInstanceDynamic;
class ASurvivalCharacter;
class UWaveManagerComponent;
class AActor;
class UWorldTraceManagerComponent;
class ULightComponent;
class UZoneManagerComponent;
class UPowerNetworkManagerComponent;
class UPrimitiveComponent;
class USceneComponent;
class UAudioComponent;
class ADecalActor;
class UMaterialInterface;
class UStaticMeshComponent;
class UStaticMesh;
class USoundBase;
class UQuestManagerComponent;
class UMaineAnalyticsManager;
class ASurvivalPlayerState;
class USoundAttenuation;
class UAttack;
class UMaineGameUserSettings;
class USaveLoadManager;
class UBaseLODActor;
class UBuildingManagerComponent;
class UItem;
class APlayerState;
class UWaterManagerComponent;
class UVisualStateManagerComponent;
class USurvivalDamageType;
class ASurvivalPlayerController;
class APawn;
class ASurvivalGameState;
class UPhysicalMaterial;
class UMovieSkipComponent;
class UResourceSurveyComponent;
class USurvivalModeManagerComponent;
class USurvivalGameInstance;
class ASurvivalAIController;
class ACharacter;
class URenderTargetManagerComponent;
class UPropManagerComponent;
class UPartyComponent;
class UPartyBarrierComponent;
class UMusicManager;
class UMapComponent;
class UGlobalUIData;
class ULODActorManagerComponent;
class ASurvivalPlayerCharacter;
class UCapsuleComponent;
class AItemSpawnManager;
class UInterfaceNarrationManager;
class UCutsceneComponent;
class UInterfaceManagerComponent;
class UInterestManagerComponent;
class UHUDMarkerManagerComponent;
class UGlobalTamingData;
class UGlobalTableData;
class UGlobalLiteData;
class UGlobalItemData;
class UGlobalControlsData;
class UGlobalCombatData;
class UGlobalBuildingData;
class UGlobalAIData;
class UFoliageManagerComponent;
class UMeshComponent;
class UDynamicMaterialCache;
class UActorComponent;
class UCVarManagerComponent;
class UConversationNavigatorComponent;
class UColonyManagerComponent;
class UCalendarComponent;
class UAuraManagerComponent;
class UBurgleQuestManagerComponent;
class UWorld;
class UBestiaryComponent;
class UBaseManagerComponent;
class UAsyncTraceShareComponent;
class USkeletalMeshComponent;
class APhysicsVolume;
class AController;

UCLASS(Blueprintable)
class MAINE_API USurvivalGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USurvivalGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static FVector VertexSecondaryAnim(float DeltaTime, UMaterialInstanceDynamic* Mid, AActor* Actor, FVector PreviousLocation);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue);
    
    UFUNCTION(BlueprintCallable)
    static void TestChatter(ASurvivalCharacter* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartFieldConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable)
    static ADecalActor* SpawnDecalActor(UObject* Context, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnAI(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* InteractionObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorAtSocket(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, USceneComponent* AtComponent, FName AtSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowResourceInMenu(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearClipPlane(float ClipPlane);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightChannel(UPrimitiveComponent* PrimitiveComponent, int32 LightChannel, bool ChannelActive);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteractHighlight(AActor* Actor, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetFragilityHighlight(AActor* Actor, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoliageOverrideViewDistanceScale(float ViewDistanceScale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ServerTravel(const UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStaticMesh(UStaticMeshComponent* StaticMeshComponent, UStaticMesh* StaticMesh, bool ResetMaterials);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetCreatureLocations(const UObject* WorldContextObject, float MaxRequiredDistanceFromPartyToResetCreatureLocation);
    
    UFUNCTION(BlueprintCallable)
    static void RerunConstructionScript(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RecoverPlayerBackpacks(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayOneShotAtRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, USoundBase* SoundToPlay, const float MinSpawnDistance, const float MaxSpawnDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayChatterRandomPlayerAroundLocation(const UObject* WorldContextObject, FVector Location, float Distance, const FChatterEventReference& ChatterEvent, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayChatterRandomPlayer(const UObject* WorldContextObject, const FChatterEventReference& ChatterEvent, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCharacterSoundAttached(ASurvivalCharacter* Character, FGameplayTag SoundTag, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCharacterSoundAtLocation(ASurvivalCharacter* Character, FGameplayTag SoundTag, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable)
    static UAttack* NewAttack(FDataTableRowHandle AttackRowHandle, AActor* Owner, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    static void MarkPrimitiveRenderStatesDirty(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool LoadGameInProgress(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FTransform LerpTransforms(FTransform A, FTransform B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool KnowsRecipe(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaineGameUserSettings* K2_GetMaineGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinterHoliday();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUsingGamepadControls(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStaticObstacle(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSinglePlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRecipeRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPublicTestBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPasswordProtectedGame(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlappingWaterVolume(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlappingBuilding(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNightTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNaturalResource(const FDataTableRowHandle& ItemRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLODActorStaticObstacle(const UBaseLODActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadingSave(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInCutscene(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInConversation(const UObject* WorldContextObject, AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHourNightTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHourDayTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHaulingItems(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHalloweenHoliday();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGDKPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFlightBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCurrentLevelMenuLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCraftingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsConversationPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControlBound(FName ControlName, bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyPartyMemberInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorStaticObstacle(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateLightingCache(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable)
    static UItem* InteractShouldProvidePower(const AActor* InstigatedBy, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasUnlockedTechTreeRecipe(const UObject* WorldContextObject, FDataTableRowHandle TechTreeRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasKeyItem(AActor* SourceActor, FDataTableRowHandle KeyItemRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FDataTableRowHandle> HandleRecipeUnlockFromItem(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle, ERecipeUnlockType RecipeUnlockType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HandleNewResourceNotify(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UZoneManagerComponent* GetZoneManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetYawPitchRoll(const FRotator& InRotator, float& Yaw, float& Pitch, float& Roll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWorldTraceManagerComponent* GetWorldTraceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWidgetManager* GetWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWaveManagerComponent* GetWaveManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWaterSurfaceZ(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWaterManagerComponent* GetWaterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UVisualStateManagerComponent* GetVisualStateManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USoundBase* GetUISound(FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTotalGameHoursPassed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<USurvivalDamageType> GetThirstDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalWorldSettings* GetSurvivalWorldSettingsFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalWorldSettings* GetSurvivalWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerController* GetSurvivalPlayerController(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalGameState* GetSurvivalGameStateWorldSafe(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalGameState* GetSurvivalGameStateFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalGameState* GetSurvivalGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USurvivalModeManagerComponent* GetSurvivalGameModeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USurvivalGameInstance* GetSurvivalGameInstanceFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USurvivalGameInstance* GetSurvivalGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalAIController* GetSurvivalController(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EPhysicalSurface> GetSurfaceMaterial(const UObject* WorldContextObject, FHitResult& OutHit, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatusEffectBaseValue(EStatusEffectType StatusEffectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USaveLoadManager* GetSaveLoadManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UResourceSurveyComponent* GetResourceSurveyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URenderTargetManagerComponent* GetRenderTargetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, const float MinSpawnDistance, const float MaxSpawnDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UQuestManagerComponent* GetQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPropManagerComponent* GetPropManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetProjectionMatrix(FMinimalViewInfo MinimalViewInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPowerNetworkManagerComponent* GetPowerNetwork(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerState* GetPlayerStateMatchingUniqueID(const UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerState* GetPlayerStateMatchingPlayerGuid(const UObject* WorldContextObject, FGuid PlayerGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerController* GetPlayerControllerMatchingPlayerState(const UObject* WorldContextObject, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPhysicalMaterial* GetPhysicalMaterialFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPartyComponent* GetPartyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPartyBarrierComponent* GetPartyBarrierComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumberPlayerDrivenConversationsPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNearClipPlane();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMusicManager* GetMusicManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMovieSkipComponent* GetMovieSkipManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMetaBuildingsFeatureEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMapComponent* GetMapComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULODActorManagerComponent* GetLODActorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform GetLocalSurvivalPlayerTransform(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerState* GetLocalSurvivalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerController* GetLocalSurvivalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASurvivalPlayerCharacter* GetLocalSurvivalPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCapsuleComponent* GetLocalSurvivalPlayerCapsule(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AItemSpawnManager* GetItemSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetItemCraftingRecipeForRow(FDataTableRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UInterfaceNarrationManager* GetInterfaceNarrationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UInterfaceManagerComponent* GetInterfaceManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UInterestManagerComponent* GetInterestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetIcon(const FDataTableRowHandle& DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<USurvivalDamageType> GetHungerDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHUDMarkerManagerComponent* GetHUDMarkerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalUIData* GetGlobalUIData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalTamingData* GetGlobalTamingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalTableData* GetGlobalTableData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalLiteData* GetGlobalLiteData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalItemData* GetGlobalItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalControlsData* GetGlobalControlsData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalCombatData* GetGlobalCombatData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalBuildingData* GetGlobalBuildingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalAIData* GetGlobalAIData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<USurvivalDamageType> GetGenericDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGamePlatform GetGamePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGamePackageType GetGamePackageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGameContentType GetGameContentType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFoliageManagerComponent* GetFoliageManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMeshComponent* GetEquipmentMeshComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<USurvivalDamageType> GetEnvironmentalDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDynamicMaterialCache* GetDynamicMaterialCache(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetDefaultComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCVarManagerComponent* GetCVarManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCutsceneComponent* GetCutsceneComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGameInputType GetCurrentGameInputType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromCraftingRecipe(FDataTableRowHandle CraftingRecipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromBuildingRecipe(FDataTableRowHandle BuildingRecipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingRecipeForItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UConversationNavigatorComponent* GetConversationNavigatorComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EColorBlindModeSettings GetColorblindSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UColonyManagerComponent* GetColonyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetClosestPartyMemberDistanceSquared(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString GetCharacterTypeNameByTag(const FGameplayTag& TypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCancelNearbyBlueprintsCount(AActor* Instigator, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCalendarComponent* GetCalendarComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBurgleQuestManagerComponent* GetBurgleQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetBuildingShoppingList(const UObject* WorldContextObject, TArray<FRecipeRequirements>& Results);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBuildingManagerComponent* GetBuildingManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EBuildConfigationType GetBuildConfigationType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetBroadphaseBounds(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetBigHeadsState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBestiaryComponent* GetBestiaryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBaseManagerComponent* GetBaseManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<USurvivalDamageType> GetBadFoodDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAuraManagerComponent* GetAuraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAsyncTraceShareComponent* GetAsyncTraceShareManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetArmorMeshComponent(AActor* Actor, EEquipmentSlot ArmorSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetArachnophobiaSafeSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaineAnalyticsManager* GetAnalyticsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GenerateRandomPhysicsVolumeLocation(const UObject* WorldContextObject, APhysicsVolume* PhysicsVolume, FVector Origin, float Range, FVector& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GenerateRandomNavLocation(const UObject* WorldContextObject, FVector Origin, float Range, const FNavAgentProperties& NavAgentProperties, FVector& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushPrestreamTextures(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatPositiveInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatNegativeInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForAny(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UActorComponent*> FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByName(const AActor* Actor, FName ComponentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindClassDefaultComponentByClass(const TSubclassOf<AActor> Class, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FastForwardPhysics(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static void EnableForegroundDOF(float MaxRadius);
    
    UFUNCTION(BlueprintCallable)
    static void DisableForegroundDOF();
    
    UFUNCTION(BlueprintCallable)
    static void DefragItemList(TArray<UItem*>& ItemList, bool SingleItem);
    
    UFUNCTION(BlueprintCallable)
    static void DealDamage(AActor* TargetActor, FDamageData DamageData, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UItem* CreateItem(const UObject* WorldContextObject, FDataTableRowHandle ItemType);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumableHasPositiveSurvivalStat(FDataTableRowHandle ConsumableDataHandle, EStatusEffectType Stat);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumableHasNegativeEffect(FDataTableRowHandle ConsumableDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanItemBeAnalyzed(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanDefragItemList(TArray<UItem*> ItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCraftIngredientViaRecipe(const FDataTableRowHandle& IngredientRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void CancelNearbyBlueprints(AActor* Instigator, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyConsumableEffects(AActor* InstigatedBy, TArray<FDataTableRowHandle> ConsumableData, bool PlayChatter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyConsumableEffect(AActor* InstigatedBy, FDataTableRowHandle ConsumableDataHandle, bool PlayChatter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForceWithSurface(UStaticMeshComponent* Mesh, float SurfaceWorldZ);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForceToMesh(UStaticMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForce(UStaticMeshComponent* Mesh, AActor* WaterVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool AnyConsumableHasPositiveSurvivalStat(TArray<FDataTableRowHandle> ConsumableData, EStatusEffectType Stat);
    
    UFUNCTION(BlueprintCallable)
    static bool AnyConsumableHasNegativeEffect(TArray<FDataTableRowHandle> ConsumableData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddObjectiveToItem(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorHasGameplayTag(AActor* Actor, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AbortAllConversations(const UObject* WorldContextObject);
    
};

