#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PaperRuntimeSettings.generated.h"

UCLASS(DefaultConfig)
class PAPER2D_API UPaperRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableSpriteAtlasGroups;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableTerrainSplineEditing;
    
    UPROPERTY(Config, EditAnywhere)
    bool bResizeSpriteDataToMatchTextures;
    
    UPaperRuntimeSettings();
};

