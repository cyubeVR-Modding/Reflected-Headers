#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESphericalLimitType.h"
#include "AnimPhysSphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysSphericalLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FVector SphereLocalOffset;
    
    UPROPERTY(EditAnywhere)
    float LimitRadius;
    
    UPROPERTY(EditAnywhere)
    ESphericalLimitType LimitType;
    
    ANIMGRAPHRUNTIME_API FAnimPhysSphericalLimit();
};

