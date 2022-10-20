#pragma once
#include "CoreMinimal.h"
#include "NarratableUserWidget.h"
#include "Framework/Commands/InputChord.h"
#include "LocString.h"
#include "EGameInputType.h"
#include "GameUserWidget.generated.h"

class AGameUI;
class ASurvivalPlayerCharacter;
class ASurvivalPlayerController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UGameUserWidget : public UNarratableUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedToolTipText;
    
public:
    UGameUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessedPlayerChange(ASurvivalPlayerCharacter* NewPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGlobalColorChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameInputTypeChanged(const EGameInputType NewGameInputType);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnLanguageChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HandleKeyEventChord(const FInputChord& InChord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalPlayerCharacter* GetSurvivalPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalPlayerController* GetOwningSurvivalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameUI* GetGameUI() const;
    
};

