#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "OnContentFadeCompleteDelegate.h"
#include "ContentFadeWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UContentFadeWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FadePanel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContentFadeComplete OnContentFadeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartFadedOut;
    
    UContentFadeWidget();
    UFUNCTION(BlueprintCallable)
    void OnFadeComplete();
    
    UFUNCTION(BlueprintCallable)
    void BeginFade(bool bFadeIn);
    
};

