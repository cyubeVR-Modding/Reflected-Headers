#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "CubeGameState.generated.h"

class AChunkManager;
class UTexture2D;

UCLASS(Blueprintable)
class CYUBEVR_API ACubeGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> AlreadyLoadedTextures;
    
    ACubeGameState();
};

