#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebugHUDSettingsData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDebugHUDSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=EditorPerProjectUserSettings)
class NIAGARA_API UNiagaraDebugHUDSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDebugHUDSettingsData Data;
    
    UNiagaraDebugHUDSettings();
};
