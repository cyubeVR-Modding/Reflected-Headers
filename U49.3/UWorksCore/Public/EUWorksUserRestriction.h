#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserRestriction.generated.h"

UENUM()
enum class EUWorksUserRestriction : uint8 {
    Unknown,
    AnyChat,
    VoiceChat,
    GroupChat,
    Rating,
    GameInvites,
    Trading,
};

