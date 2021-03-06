#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "NavigationInvokerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavigationInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float TileGenerationRadius;
    
    UPROPERTY(EditAnywhere)
    float TileRemovalRadius;
    
public:
    UNavigationInvokerComponent();
};

