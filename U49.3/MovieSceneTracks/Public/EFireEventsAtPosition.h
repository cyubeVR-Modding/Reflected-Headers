#pragma once
#include "CoreMinimal.h"
#include "EFireEventsAtPosition.generated.h"

UENUM()
enum class EFireEventsAtPosition : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

