#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "Styling/SlateColor.h"
#include "HUDDestroyStructureWidget.generated.h"

class UWidgetAnimation;
class UCanvasPanel;
class ULocalizedTextBlock;
class UGameTextBlock;
class UImage;
class UCircularThrobber;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDDestroyStructureWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StructureContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalizedTextBlock* FragileText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameTextBlock* SupportCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCircularThrobber* CountThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DangerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecycleWarningStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecycleWarning;
    
public:
    UHUDDestroyStructureWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeUpdateData();
    
    UFUNCTION(BlueprintCallable)
    void InitSupportTextColors(FSlateColor NormalColor, FSlateColor WarningColor);
    
};

