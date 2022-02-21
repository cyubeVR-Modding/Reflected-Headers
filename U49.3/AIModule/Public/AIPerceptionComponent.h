#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorPerceptionInfoUpdatedDelegateDelegate.h"
#include "PerceptionUpdatedDelegateDelegate.h"
#include "ActorPerceptionUpdatedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ActorPerceptionBlueprintInfo.h"
#include "AIPerceptionComponent.generated.h"

class UAISenseConfig;
class AActor;
class UAISense;
class AAIController;

UCLASS(BlueprintType, Config=Game, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UAIPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAISense> DominantSense;
    
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
public:
    UPROPERTY(BlueprintAssignable)
    FPerceptionUpdatedDelegate OnPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FActorPerceptionUpdatedDelegate OnTargetPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FActorPerceptionInfoUpdatedDelegate OnTargetPerceptionInfoUpdated;
    
    UAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestStimuliListenerUpdate();
    
    UFUNCTION()
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintPure)
    void GetPerceivedHostileActorsBySense(const TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetPerceivedHostileActors(TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAll();
    
};

