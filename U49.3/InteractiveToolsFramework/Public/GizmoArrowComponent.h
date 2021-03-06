#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoBaseComponent.h"
#include "GizmoArrowComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class INTERACTIVETOOLSFRAMEWORK_API UGizmoArrowComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float Gap;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UGizmoArrowComponent();
};

