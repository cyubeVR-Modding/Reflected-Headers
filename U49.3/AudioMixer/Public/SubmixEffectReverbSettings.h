#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectReverbSettings.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypassEarlyReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GainHF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionsGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypassLateReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Diffusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirAbsorptionGainHF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayHFRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LateGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypass;
    
    FSubmixEffectReverbSettings();
};

