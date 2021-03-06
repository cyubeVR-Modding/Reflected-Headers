#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraLightRendererProperties.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectsTranslucency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ColorAdd;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding LightExponentBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding RadiusBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
    
    UNiagaraLightRendererProperties();
};

