#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
#include "AIDataProviderFloatValue.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryGenerator_ActorsOfClass.generated.h"

class AActor;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SearchedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UEnvQueryGenerator_ActorsOfClass();
};

