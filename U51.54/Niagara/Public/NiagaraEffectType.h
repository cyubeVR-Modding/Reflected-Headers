#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScalabilityUpdateFrequency.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENiagaraCullReaction.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
#include "NiagaraPerfBaselineStats.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraEffectType.generated.h"

class UNiagaraSignificanceHandler;
class UNiagaraBaselineController;

UCLASS(Blueprintable, PerObjectConfig, Config=Niagara)
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraBaselineController* PerformanceBaselineController;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPerfBaselineStats PerfBaselineStats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PerfBaselineVersion;
    
public:
    UNiagaraEffectType();
};

