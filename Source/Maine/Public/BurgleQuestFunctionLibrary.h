#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestFunctionLibrary.generated.h"

class UBurgleObjectiveSimple;
class ABurgleQuestOptionActor;
class UObject;
class UBurgleObjectiveProgress;
class UBurgleQuestInstance;

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBurgleQuestFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestError(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBurgleQuestProgressAtLeast(const UObject* WorldContextObject, float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABurgleQuestOptionActor* GetRandomQuestOption(const UObject* WorldContextObject, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static UBurgleObjectiveSimple* CreateBurgleQuestSimpleObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex);
    
    UFUNCTION(BlueprintCallable)
    static UBurgleObjectiveProgress* CreateBurgleQuestProgressObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex, int32 MaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalculateBurgleQuestTargetCount(const UObject* WorldContextObject, FFloatRange AvailableProgressRange, int32 MinCount, int32 MaxCount, float MaxCountAt);
    
};

