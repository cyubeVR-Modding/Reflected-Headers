#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestLobbyListDelegateDelegate.h"
#include "CoreRequestLobbyListNode.generated.h"

class UCoreRequestLobbyListNode;

UCLASS()
class UWORKSCORE_API UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestLobbyListDelegate Completed;
    
    UCoreRequestLobbyListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestLobbyListNode* RequestLobbyListNode();
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
    
};

