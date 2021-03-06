#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetLeaderboardScoreDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetLeaderboardScoreNode.generated.h"

class USetLeaderboardScoreNode;

UCLASS()
class UWORKSWEB_API USetLeaderboardScoreNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetLeaderboardScoreDelegate Completed;
    
    USetLeaderboardScoreNode();
    UFUNCTION(BlueprintCallable)
    static USetLeaderboardScoreNode* SetLeaderboardScoreNode(const FString& Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, const FString& ScoreMethod, TArray<uint8> Details);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

