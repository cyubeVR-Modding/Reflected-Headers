#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ChunkPartData.generated.h"

USTRUCT(BlueprintType)
struct FChunkPartData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    uint32 Offset;
    
    UPROPERTY()
    uint32 Size;
    
    BUILDPATCHSERVICES_API FChunkPartData();
};

