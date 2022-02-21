#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceParticleRead.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    UNiagaraDataInterfaceParticleRead();
};

