#pragma once
#include "CoreMinimal.h"
#include "NamedInterfaceDef.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NamedInterface.h"
#include "NamedInterfaces.generated.h"

UCLASS(Transient)
class UNamedInterfaces : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FNamedInterface> NamedInterfaces;
    
    UPROPERTY(Config)
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;
    
public:
    UNamedInterfaces();
};

