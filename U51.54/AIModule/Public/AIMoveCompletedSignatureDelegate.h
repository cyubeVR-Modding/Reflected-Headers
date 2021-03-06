#pragma once
#include "CoreMinimal.h"
#include "AIRequestID.h"
#include "EPathFollowingResult.h"
#include "AIMoveCompletedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, requestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

