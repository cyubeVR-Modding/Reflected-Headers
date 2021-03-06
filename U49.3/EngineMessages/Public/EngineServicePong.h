#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EngineServicePong.generated.h"

USTRUCT()
struct FEngineServicePong {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CurrentLevel;
    
    UPROPERTY(EditAnywhere)
    int32 EngineVersion;
    
    UPROPERTY(EditAnywhere)
    bool HasBegunPlay;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceID;
    
    UPROPERTY(EditAnywhere)
    FString InstanceType;
    
    UPROPERTY(EditAnywhere)
    FGuid SessionId;
    
    UPROPERTY(EditAnywhere)
    float WorldTimeSeconds;
    
    ENGINEMESSAGES_API FEngineServicePong();
};

