#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "EMotionRange.h"
#include "EHand.h"
#include "EHandSkeleton.h"
#include "SteamVRSkeletonTransform.h"
#include "UE4RetargettingRefs.h"
#include "AnimNode_SteamVRInputAnimPose.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMotionRange MotionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHand hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHandSkeleton HandSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Mirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSteamVRSkeletonTransform SteamVRSkeletalTransform;
    
    UPROPERTY()
    FUE4RetargettingRefs UE4RetargettingRefs;
    
    FAnimNode_SteamVRInputAnimPose();
};

