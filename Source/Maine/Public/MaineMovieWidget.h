#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "MaineMovieWidget.generated.h"

class UCharacterProgressGroup;
class UOEIMoviePlayerWidget;
class UContentFadeWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMaineMovieWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIMoviePlayerWidget* MoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentFadeWidget* FadePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterProgressGroup* ProgressGroup;
    
    UMaineMovieWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeComplete(bool bFadeIn);
    
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersSkipped();
    
};

