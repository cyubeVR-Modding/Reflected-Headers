#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "SteamUGCQueryHandle.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FUInt64 Handle;
    
    STEAMGENERAL_API FSteamUGCQueryHandle();
};

