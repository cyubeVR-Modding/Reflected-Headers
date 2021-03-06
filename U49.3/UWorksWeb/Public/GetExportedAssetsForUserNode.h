#pragma once
#include "CoreMinimal.h"
#include "GetExportedAssetsForUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetExportedAssetsForUserNode.generated.h"

class UGetExportedAssetsForUserNode;

UCLASS()
class UWORKSWEB_API UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetExportedAssetsForUserDelegate Completed;
    
    UGetExportedAssetsForUserNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
};

