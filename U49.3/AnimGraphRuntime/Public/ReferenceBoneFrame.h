#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
#include "ReferenceBoneFrame.generated.h"

USTRUCT(BlueprintType)
struct FReferenceBoneFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    FAxis Axis;
    
    ANIMGRAPHRUNTIME_API FReferenceBoneFrame();
};

