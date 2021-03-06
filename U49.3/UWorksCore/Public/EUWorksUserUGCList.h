#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserUGCList.generated.h"

UENUM()
enum class EUWorksUserUGCList : uint8 {
    Published,
    VotedOn,
    VotedUp,
    VotedDown,
    WillVoteLater,
    Favorited,
    Subscribed,
    UsedOrPlayed,
    Followed,
};

