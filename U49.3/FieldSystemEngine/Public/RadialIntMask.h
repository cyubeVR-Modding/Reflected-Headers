#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ESetMaskConditionType -FallbackName=ESetMaskConditionType
#include "FieldNodeInt.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RadialIntMask.generated.h"

class URadialIntMask;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URadialIntMask : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InteriorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExteriorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESetMaskConditionType> SetMaskCondition;
    
    URadialIntMask();
    UFUNCTION(BlueprintPure)
    URadialIntMask* SetRadialIntMask(float NewRadius, FVector NewPosition, int32 NewInteriorValue, int32 NewExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);
    
};

