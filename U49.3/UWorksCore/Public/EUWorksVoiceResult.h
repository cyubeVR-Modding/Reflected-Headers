#pragma once
#include "CoreMinimal.h"
#include "EUWorksVoiceResult.generated.h"

UENUM()
enum class EUWorksVoiceResult : uint8 {
    OK,
    NotInitialized,
    NotRecording,
    NoData,
    BufferTooSmall,
    DataCorrupted,
    Restricted,
    UnsupportedCodec,
    ReceiverOutOfDate,
    ReceiverDidNotAnswer,
};

