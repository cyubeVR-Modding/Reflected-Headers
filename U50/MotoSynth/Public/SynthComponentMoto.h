#pragma once
#include "CoreMinimal.h"
#include "MotoSynthRuntimeSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "SynthComponentMoto.generated.h"

class UMotoSynthPreset;

UCLASS(meta=(BlueprintSpawnableComponent))
class MOTOSYNTH_API USynthComponentMoto : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotoSynthPreset* MotoSynthPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RPM;
    
    USynthComponentMoto();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FMotoSynthRuntimeSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetRPM(float InRPM, float InTimeSec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
    
};

