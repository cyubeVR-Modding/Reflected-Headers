#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PlayerReservation.generated.h"

USTRUCT()
struct FPlayerReservation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(Transient)
    FString ValidationStr;
    
    UPROPERTY(Transient)
    FString Platform;
    
    UPROPERTY(Transient)
    bool bAllowCrossplay;
    
    UPROPERTY(Transient)
    float ElapsedTime;
    
    ONLINESUBSYSTEMUTILS_API FPlayerReservation();
};

