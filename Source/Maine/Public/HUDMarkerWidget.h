#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDMarkerWidget.generated.h"

class UTextBlock;
class UHUDMarkerData;
class UProgressBar;
class UVerticalBox;
class UOverlay;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDMarkerWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDMarkerData* MarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerDistanceTruncated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DistanceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* OuterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ArrowRotationOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArrowIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressFillbar;
    
    UHUDMarkerWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerPosition();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerFade();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarkerDistance();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildingMarkerHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowMarkerProgressBar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowMarkerArrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMarkerLockToScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFadeMarkerAtEdge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleStickiedQuestChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMarkerScreenEdgeAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMarkerLifetimeFade();
    
};

