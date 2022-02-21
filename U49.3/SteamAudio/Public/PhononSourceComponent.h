#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PhononSourceComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class STEAMAUDIO_API UPhononSourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BakingRadius;
    
    UPROPERTY(EditAnywhere)
    FName UniqueIdentifier;
    
    UPhononSourceComponent();
};

