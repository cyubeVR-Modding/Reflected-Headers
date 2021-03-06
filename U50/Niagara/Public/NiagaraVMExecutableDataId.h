#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptUsage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraCompileHash -FallbackName=NiagaraCompileHash
#include "NiagaraVMExecutableDataId.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableDataId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid CompilerVersionID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraScriptUsage ScriptUsageType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ScriptUsageTypeID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bUsesRapidIterationParams: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bInterpolatedSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid BaseScriptID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraCompileHash BaseScriptCompileHash;
    
    FNiagaraVMExecutableDataId();
};

