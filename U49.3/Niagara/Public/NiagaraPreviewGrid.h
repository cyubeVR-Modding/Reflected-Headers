#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ENiagaraPreviewGridResetMode.h"
#include "NiagaraPreviewGrid.generated.h"

class UChildActorComponent;
class UNiagaraSystem;
class UNiagaraComponent;
class UNiagaraPreviewAxis;
class ANiagaraPreviewBase;

UCLASS()
class ANiagaraPreviewGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* System;
    
    UPROPERTY(EditAnywhere)
    ENiagaraPreviewGridResetMode ResetMode;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraPreviewAxis* PreviewAxisX;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraPreviewAxis* PreviewAxisY;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ANiagaraPreviewBase> PreviewClass;
    
    UPROPERTY(EditAnywhere)
    float SpacingX;
    
    UPROPERTY(EditAnywhere)
    float SpacingY;
    
private:
    UPROPERTY(Transient)
    int32 NumX;
    
    UPROPERTY(Transient)
    int32 NumY;
    
    UPROPERTY(Export, Transient)
    TArray<UChildActorComponent*> PreviewComponents;
    
public:
    ANiagaraPreviewGrid();
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePreviews();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreviews(bool bReset);
    
};

