#pragma once
#include "CoreMinimal.h"
#include "CustomPropertiesWindowWidget.h"
#include "CustomPropertyComponent.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CustomizeInteractionComponent.generated.h"



UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCustomizeInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomPropertiesWindowWidget> WidgetClass;
    
    UCustomizeInteractionComponent();
    UFUNCTION(BlueprintCallable)
    void ShowCustomizationUI(UCustomPropertyComponent* CustomPropertyComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCustomPropertyComponentInUse(ASurvivalPlayerCharacter* CustomizingPlayer, UCustomPropertyComponent* Component, bool InUse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnCustomPropertyComponentChanged(UCustomPropertyComponent* CustomPropertyComponent, FName PropertyName, float PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizeUIClosed(AActor* InteractableActor);
    
};

