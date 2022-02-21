#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "ReceiveLightActor.h"
#include "MeshObject.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class CYUBEVR_API AMeshObject : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoInstantDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* OverlapBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UStaticMeshComponent*> PreviewMaterialIgnoreComponents;
    
    AMeshObject();
    UFUNCTION(BlueprintCallable)
    void SetReadyForSaving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPreviewValid(bool IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsPreview(bool IsPreview);
    
    UFUNCTION(BlueprintCallable)
    void MarkForSave();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMeshObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyEvent();
    
    UFUNCTION(BlueprintCallable)
    void DamageMeshObject(float Damage, bool& Destroyed_);
    
    UFUNCTION(BlueprintCallable)
    bool CanDamageObject();
    
};

