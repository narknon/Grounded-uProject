#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInteractionChannel.h"
#include "EInteractionType.h"
#include "InteractableFunctionLibrary.generated.h"

class UObject;
class AActor;
class UItem;

UCLASS(Blueprintable)
class MAINE_API UInteractableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractableFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShowInteractionInterface(const UObject* Interactable, EInteractionChannel Channel, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowAnyInteractionInterface(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void SendInteractError(UObject* Source, AActor* InstigatedBy, const FText& Warning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyInteractionEnabled(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItem* GetInteractItem(const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EInteractionType GetFirstEnabledPrimaryInteractionType(const UObject* Interactable, const AActor* InstigatedBy);
    
};

