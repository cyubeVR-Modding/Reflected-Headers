#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "UE4RetargettingRefs.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FUE4RetargettingRefs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsRightHanded;
    
    UPROPERTY(BlueprintReadOnly)
    FVector KnuckleAverageMS_UE4;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WristSideDirectionLS_UE4;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WristForwardLS_UE4;
    
    FUE4RetargettingRefs();
};

