#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SMInstancerInterface.h"
#include "SMInstancerWidget.generated.h"

class USMInstancingWidgetConfig;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API USMInstancerWidget : public UUserWidget, public ISMInstancerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InstanceButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InstanceAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DeinstanceButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DeinstanceAllButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USMInstancingWidgetConfig* Config;
    
public:
    USMInstancerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

