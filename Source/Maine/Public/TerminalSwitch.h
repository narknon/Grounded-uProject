#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Switch.h"
#include "TerminalConditional.h"
#include "ETerminalWidgetState.h"
#include "GlobalVariableReference.h"
#include "TerminalSwitch.generated.h"

class UTerminalWidget;
class AActor;
class UStaticMeshComponent;
class UWidgetComponent;
class UAudioComponent;
class UBoxComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UConditionalToggleComponent;

UCLASS(Blueprintable)
class MAINE_API ATerminalSwitch : public ASwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> PersistentListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTerminalWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlayerBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerminalConditional> Conditionals;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStateIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWidgetState, meta=(AllowPrivateAccess=true))
    ETerminalWidgetState CurrentWidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTerminalWidget* ActiveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ScreenMID;
    
public:
    ATerminalSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWidgetState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStateIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConditionalStateChanged(UConditionalToggleComponent* Component, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConditionalChanged(FName ConditionalStateName, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanSetGlobalVariables(FName ConditionalStateName, const FGlobalVariableReference& GlobalVariable, int32 DesiredValue);
    
};

