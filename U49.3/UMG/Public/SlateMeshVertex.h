#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "SlateMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FSlateMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2D Position;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    FVector2D UV0;
    
    UPROPERTY()
    FVector2D UV1;
    
    UPROPERTY()
    FVector2D UV2;
    
    UPROPERTY()
    FVector2D UV3;
    
    UPROPERTY()
    FVector2D UV4;
    
    UPROPERTY()
    FVector2D UV5;
    
    UMG_API FSlateMeshVertex();
};

