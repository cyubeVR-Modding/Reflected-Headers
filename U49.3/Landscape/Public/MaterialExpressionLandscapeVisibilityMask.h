#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionLandscapeVisibilityMask.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeVisibilityMask();
};

