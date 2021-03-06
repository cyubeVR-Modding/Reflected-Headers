#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "EBlockTypeBP.h"
#include "CubePlayerController.generated.h"

UCLASS()
class CYUBEVR_API ACubePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STAT_BlocksDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STAT_BlocksDestroyedInLast10Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STAT_BlocksDestroyedInLast10MinutesBest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnrealisticCameraHeight;
    
    ACubePlayerController();
    UFUNCTION(BlueprintCallable)
    void IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type);
    
};

