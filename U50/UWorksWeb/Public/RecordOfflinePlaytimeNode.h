#pragma once
#include "CoreMinimal.h"
#include "RecordOfflinePlaytimeDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksPlaySessions.h"
#include "RecordOfflinePlaytimeNode.generated.h"

class URecordOfflinePlaytimeNode;

UCLASS()
class UWORKSWEB_API URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeDelegate Completed;
    
    URecordOfflinePlaytimeNode();
    UFUNCTION(BlueprintCallable)
    static URecordOfflinePlaytimeNode* RecordOfflinePlaytimeNode(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

