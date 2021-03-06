#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EnvQuery.generated.h"

class UEnvQueryOption;

UCLASS()
class AIMODULE_API UEnvQuery : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName QueryName;
    
    UPROPERTY()
    TArray<UEnvQueryOption*> Options;
    
public:
    UEnvQuery();
};

