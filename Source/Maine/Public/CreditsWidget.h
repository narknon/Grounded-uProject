#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableReference.h"
#include "WindowWidget.h"
#include "CreditsClosedDelegate.h"
#include "CreditsWidget.generated.h"

class UCharacterProgressGroup;
class UCreditsData;
class UContentFadeWidget;
class UScrollBox;
class UVerticalBox;
class APlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCreditsWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreditsClosed CreditsClosedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentFadeWidget* FadePanel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AccelerateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratedScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* CreditsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* CreditsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterProgressGroup* ProgressGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference CreditsMusicGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsStartGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsSkippedGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnCreditsEndedGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsAssetToUse;
    
public:
    UCreditsWidget();
    UFUNCTION(BlueprintCallable)
    void StopCredits(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void StartCredits();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSkipped(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeComplete(bool bFadeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreditsStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreditsEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

