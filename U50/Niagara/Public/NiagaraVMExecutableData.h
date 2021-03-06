#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetProperties.h"
#include "NiagaraVariable.h"
#include "NiagaraScriptDataUsageInfo.h"
#include "NiagaraScriptDataInterfaceCompileInfo.h"
#include "NiagaraStatScope.h"
#include "NiagaraDataSetID.h"
#include "VMExternalFunctionBindingInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraDataInterfaceGPUParamInfo -FallbackName=NiagaraDataInterfaceGPUParamInfo
#include "ENiagaraScriptCompileStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=SimulationStageMetaData -FallbackName=SimulationStageMetaData
#include "NiagaraVMExecutableData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> OptimizedByteCode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumTempRegisters;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumUserPtrs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ScriptLiterals;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Attributes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraScriptDataUsageInfo DataUsage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataSetID> ReadDataSets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraStatScope> StatScopes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraScriptCompileStatus LastCompileStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bReadsSignificanceIndex: 1;
    
    FNiagaraVMExecutableData();
};

