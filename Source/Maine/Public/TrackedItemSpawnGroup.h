#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PersistentInterface.h"
#include "ItemSpawnGroup.h"
#include "TrackedSpawnsChangedDelegate.h"
#include "ItemSpawnPointData.h"
#include "TrackedSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnGroupEvent.h"
#include "TrackedItemSpawnGroup.generated.h"

class UItemSpawnGroupData;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UTrackedItemSpawnGroup : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSpawnGroupData* ItemSpawnGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSpawnGroup SpawnPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackedSpawnsChanged OnTrackedSpawnsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemSpawnPointData> SerializedTrackedSpawnsPointDatas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FItemSpawnPointData, FTrackedSpawnData> TrackedSpawns;
    
public:
    UTrackedItemSpawnGroup();
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemSpawnPointData> GetSpawnPointsToAffect(const FItemSpawnGroupEvent& Event) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemSpawnPointData> GetAllSpawnPoints() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

