#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt64 -FallbackName=UInt64
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "SteamWorkshopItemInstallInfo.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopItemInstallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt64 sizeOnDiskBytes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 sizeOnDiskMBytes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Directory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime timeStampLastUpdate;
    
    STEAMWORKSHOP_API FSteamWorkshopItemInstallInfo();
};

