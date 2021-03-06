#pragma once
#include "CoreMinimal.h"
#include "AIDamageEvent.h"
#include "AISense.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense_Damage.generated.h"

class AActor;
class UObject;

UCLASS()
class AIMODULE_API UAISense_Damage : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIDamageEvent> RegisteredEvents;
    
    UAISense_Damage();
    UFUNCTION(BlueprintCallable)
    static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation);
    
};

