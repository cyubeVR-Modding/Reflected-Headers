#pragma once
#include "CoreMinimal.h"
#include "BPActorGripInformation.h"
#include "VROnControllerGripSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVROnControllerGripSignature, const FBPActorGripInformation&, GripInformation);

