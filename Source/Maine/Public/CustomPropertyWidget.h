#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "LocString.h"
#include "CustomProperty.h"
#include "ECustomPropertyInputType.h"
#include "Types/SlateEnums.h"
#include "CustomPropertyWidget.generated.h"

class UPhotoModeComboBoxBase;
class UPhotoModeCheckBoxBase;
class UOverlay;
class UHorizontalBox;
class UPhotoModeTextBlock;
class UPhotoModeSliderBase;
class USizeBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCustomPropertyWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhotoModeTextBlock* SettingTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhotoModeSliderBase* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* CheckBoxSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhotoModeCheckBoxBase* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhotoModeComboBoxBase* ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomProperty CachedPropertyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumIntegralDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumFractionalDigits;
    
    UCustomPropertyWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputStyles(ECustomPropertyInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledState(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComboBoxOptions(const TArray<FLocString>& InOptions);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSettingChangedSlider(float Value);
    
    UFUNCTION()
    void OnSettingChangedComboBox(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingChangedCheckBox(bool bChecked);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabledChanged(bool Enabled);
    
};

