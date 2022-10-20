#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "RecipeRequirements.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FindSessionsCallbackProxy.h"
#include "Framework/Commands/InputChord.h"
#include "RecipeData.h"
#include "UserInterfaceStatics.generated.h"

class UObject;
class UScrollBox;
class UWidgetManager;
class AGameUI;
class UItem;
class UWidget;
class UWidgetPlayerProxy;

UCLASS(Blueprintable)
class MAINE_API UUserInterfaceStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserInterfaceStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText TryCensorText(const UObject* WorldContextObject, const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString TryCensorString(const UObject* WorldContextObject, const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static void SortItemList(TArray<UItem*>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void ScrollInViewForFocus(UScrollBox* ScrollBox, UWidget* Widget, bool AnimateScroll, float Padding);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItemsForCraftingRecipe(FDataTableRowHandle RecipeRowHandle, UPARAM(Ref) TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MakeTextDirectional(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHotBarQuickSlotItemTypeKey MakeHotBarQuickSlotItemTypeKeyFromItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    static void LogUIMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLocalizedString(const FLocString& LocString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasRequirements(const UObject* WorldContextObject, const TArray<FRecipeRequirements>& Requirements, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWidgetPlayerProxy* GetWidgetManagerOwnerProxy(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWidgetManager* GetWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UScrollBox* GetParentScrollBox(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxCraftable(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocalizedString(const FLocString& LocString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetItemCount(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetHeatMapColor(const UObject* WorldContextObject, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetGlobalColorLinear(const UObject* WorldContextObject, FName EnumName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameUI* GetGameUI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFilterMatches(const FString& FilterText, const TArray<FString>& Keywords);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCultureFlowIsRTL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAttackSpeedText(FGameplayTag AttackSpeedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void FindScreenEdgeLocationForWorldLocation(UObject* WorldContextObject, const FVector& InLocation, const float EdgePercent, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen, bool& bFacingBackward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesSessionResultOwnerMatchSharedSaveUserId(const FBlueprintSessionResult& Result, const FString& SharedSaveUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesLocalUserHaveUserGeneratedContentPrivilege(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesKeyMatchActionMapping(FKey Key, FName ActionMappingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesChordMatchActionMapping(const FInputChord& Chord, FName ActionMappingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanCraftRecipeData(const UObject* WorldContextObject, FRecipeData& RecipeData, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanCraftRecipe(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems);
    
};

