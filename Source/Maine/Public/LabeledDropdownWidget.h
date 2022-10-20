#pragma once
#include "CoreMinimal.h"
#include "BaseSettingsWidget.h"
#include "Types/SlateEnums.h"
#include "LabeledDropdownWidget.generated.h"

class UComboBoxString;
class UBaseOptionsDropdownAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API ULabeledDropdownWidget : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* DropdownSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* DropDownAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastConfirmedValue;
    
public:
    ULabeledDropdownWidget();
protected:
    UFUNCTION()
    void OnSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitManual(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void Init(const TArray<FString>& Options, int32 SelectedIndex);
    
};

