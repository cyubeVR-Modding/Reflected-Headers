#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EnumerateUserSubscribedFilesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EnumerateUserSubscribedFilesNode.generated.h"

class UEnumerateUserSubscribedFilesNode;

UCLASS()
class UWORKSWEB_API UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnumerateUserSubscribedFilesDelegate Completed;
    
    UEnumerateUserSubscribedFilesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEnumerateUserSubscribedFilesNode* EnumerateUserSubscribedFilesNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    
};

