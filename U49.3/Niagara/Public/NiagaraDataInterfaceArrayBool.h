#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayBool.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> BoolData;
    
    UNiagaraDataInterfaceArrayBool();
};

