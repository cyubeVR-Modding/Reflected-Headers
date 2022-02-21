#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "Storage.h"
#include "EBlockTypeBP.h"
#include "ChestInternals.generated.h"

class AInventory;
class AChest;

UCLASS()
class CYUBEVR_API AChestInternals : public AStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Initialized;
    
    AChestInternals();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateVisualsEvent(bool MarkForSave);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSingleItemFromSlot(int32 FromIndex, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChestInternals(AInventory* Inventory_, AChest* ParentChest_);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSlot(EBlockTypeBP ToAdd, int32 ToAddID, float ToAddChargeState, FColor ToAddCrystalColor, int32 Amount, int32 ToIndex, int32 FromInventoryIndex, bool& success);
    
};

