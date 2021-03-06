#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraVariable.h"
#include "NiagaraComponentPropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraComponentPropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding AttributeBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraTypeDefinition PropertyType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName MetadataSetterName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FNiagaraVariable WritableValue;
    
    NIAGARA_API FNiagaraComponentPropertyBinding();
};

