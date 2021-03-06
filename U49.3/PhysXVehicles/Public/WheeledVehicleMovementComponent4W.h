#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent.h"
#include "VehicleEngineData.h"
#include "VehicleDifferential4WData.h"
#include "VehicleTransmissionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "WheeledVehicleMovementComponent4W.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class PHYSXVEHICLES_API UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVehicleEngineData EngineSetup;
    
    UPROPERTY(EditAnywhere)
    FVehicleDifferential4WData DifferentialSetup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AckermannAccuracy;
    
    UPROPERTY(EditAnywhere)
    FVehicleTransmissionData TransmissionSetup;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SteeringCurve;
    
    UWheeledVehicleMovementComponent4W();
};

