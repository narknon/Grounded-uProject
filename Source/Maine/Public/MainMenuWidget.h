#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "EMainMenuStateTransitionType.h"
#include "EMainMenuState.h"
#include "LocString.h"
#include "EActiveUserChangeType.h"
#include "MainMenuWidget.generated.h"

class UMainMenuButtonsGroup;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMainMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PressAnyKeyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonsGroup* MainMenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonsGroup* NewContinueButtonOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonsGroup* HostJoinButtonOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LobbyString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LoadString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreLoginInput;
    
public:
    UMainMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionToMainMenuState(EMainMenuState FromState, EMainMenuState ToState, EMainMenuStateTransitionType TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNewSinglePlayerGame();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusForCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void PushMainMenuState(EMainMenuState NewState, bool ReplacePriorState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopToState(EMainMenuState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopMainMenuState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSinglePlayerNewGameClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSinglePlayerContinueClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnSinglePlayerClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiplayerNewGameClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerHostClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiplayerContinueClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiplayerConnectionError();
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadUserGameSettingsComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonExitClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackInput();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveUserChanged(EActiveUserChangeType ChangeType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyNewGameClicked();
    
    UFUNCTION(BlueprintCallable)
    void NotifyContinueClicked();
    
    UFUNCTION(BlueprintCallable)
    void HostMultiplayerLobby(bool bPasswordProtected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShowPressAnyKeyPromptBegin();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerInput(int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMainMenuState GetMainMenuState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateSinglePlayerLobby();
    
};

