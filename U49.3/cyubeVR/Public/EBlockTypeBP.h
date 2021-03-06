#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.generated.h"

UENUM(BlueprintType)
enum class EBlockTypeBP : uint8 {
    Stone,
    Grass,
    Dirt,
    Air,
    BottomStone,
    GrassFoliage,
    TreeWood,
    Leaves,
    CobbleStone,
    B_Water,
    Sand,
    Invalid,
    Ore_Coal,
    Ore_Iron,
    TreeRoot,
    Torch,
    Flower1,
    Flower2,
    T_Stick,
    T_PickAxe_Stone,
    T_Axe_Stone,
    T_Shovel_Stone,
    Nugget_Copper,
    Nugget_Gold,
    Nugget_Coal,
    Ore_Copper,
    Ore_Gold,
    Ore_Silver,
    T_PickAxe_Copper,
    T_Axe_Copper,
    T_Shovel_Copper,
    MeatDeer,
    TreeWoodBright,
    WoodPlankBright,
    WoodPlank,
    StoneMined,
    Flower3,
    TorchBlue,
    DyeBlue,
    Flower4,
    TorchGreen,
    DyeGreen,
    Compass,
    Chest1,
    SpecialBlockObject,
    MeshObject,
    Wallstone,
    Flagstone,
    DyeRed,
    TorchRed,
    Chair1,
    Chair1Birch,
    WoodScaffolding,
    Arrow,
    WallmountCopper,
    Cactus,
    DesertGrass,
    FrameWood,
    FrameGold,
    FrameCopper,
    T_Sledgehammer_Copper,
    TorchRainbow,
    DyeRainbow,
    FlowerRainbow,
    DyeWhite,
    BigWallStone,
    ModBlock,
    CrystalBlock,
    Crystal,
    Furnace,
    FurnaceMoldIron,
    FlintStone,
    DryGrass,
    IngotIron,
    T_PickAxe_Iron,
    T_Sledgehammer_Iron,
    T_Axe_Iron,
    T_Shovel_Iron,
    WoodStool,
    WoodTable1,
    WoodTable2,
    WoodCarafe,
    WoodBench1,
    WoodBarrel,
    WoodPost,
    MetalPod,
    WoodBench2,
    WoodBench3,
    SandbagPile,
    GlassBlock,
    ModBlockTransparent,
    GlassIngot,
    LootableInventory,
    RespawnTorch,
    T_Bow,
    MAX_BLOCKTYPE,
};

