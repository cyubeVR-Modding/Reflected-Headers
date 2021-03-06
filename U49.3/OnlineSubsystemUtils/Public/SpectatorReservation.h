#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PlayerReservation.h"
#include "SpectatorReservation.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMUTILS_API FSpectatorReservation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FUniqueNetIdRepl SpectatorId;
    
    UPROPERTY(Transient)
    FPlayerReservation Spectator;
    
    FSpectatorReservation();
};

