#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraVariable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraParameterCollection.generated.h"

class UMaterialParameterCollection;
class UNiagaraParameterCollectionInstance;

UCLASS()
class NIAGARA_API UNiagaraParameterCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Namespace;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SourceMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollectionInstance* DefaultInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid CompileId;
    
public:
    UNiagaraParameterCollection();
};
