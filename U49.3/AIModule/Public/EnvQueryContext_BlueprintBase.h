#pragma once
#include "CoreMinimal.h"
#include "EnvQueryContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnvQueryContext_BlueprintBase.generated.h"

class UObject;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_BlueprintBase();
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;
    
};

