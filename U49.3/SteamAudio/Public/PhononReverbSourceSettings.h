#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=ReverbPluginSourceSettingsBase -FallbackName=ReverbPluginSourceSettingsBase
#include "EIplSimulationType.h"
#include "PhononReverbSourceSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class STEAMAUDIO_API UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIplSimulationType SourceReverbSimulationType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float SourceReverbContribution;
    
    UPhononReverbSourceSettings();
};

