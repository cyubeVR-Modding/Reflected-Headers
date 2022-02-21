#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetDeveloperMetadataDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "SetDeveloperMetadataNode.generated.h"

class USetDeveloperMetadataNode;

UCLASS()
class UWORKSWEB_API USetDeveloperMetadataNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetDeveloperMetadataDelegate Completed;
    
    USetDeveloperMetadataNode();
    UFUNCTION(BlueprintCallable)
    static USetDeveloperMetadataNode* SetDeveloperMetadataNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

