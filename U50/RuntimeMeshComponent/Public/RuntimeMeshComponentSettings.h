#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ERuntimeMeshCollisionCookingMode.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "ERuntimeMeshThreadingPriority.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "RuntimeMeshComponentSettings.generated.h"

UCLASS(DefaultConfig, Config=RuntimeMeshComponent)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponentSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshUpdateFrequency DefaultUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse32BitIndicesByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTexCoordsByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTangentsByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookCollisionAsync;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshCollisionCookingMode DefaultCookingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range MinMaxThreadPoolThreads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SystemThreadDivisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshThreadingPriority ThreadPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreadStackSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTimePerTick;
    
    URuntimeMeshComponentSettings();
};

