#pragma once
#include "CoreMinimal.h"
#include "ELoadResetLevel.h"
#include "DataTableRowRedirects.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "CustomLoadRestoreSettings.h"
#include "UObject/NoExportTypes.h"
#include "GameVersion.h"
#include "GlobalSaveLoadData.generated.h"

class AActor;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalSaveLoadData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftClassPath> ClassRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> DataTableRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FDataTableRowRedirects> DataTableRowRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> SpawnedItemClassChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadResetLevel, FCustomLoadRestoreSettings> CustomLoadRestoreSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameVersion QuestsRestructuredVersion;
    
    UGlobalSaveLoadData();
};

