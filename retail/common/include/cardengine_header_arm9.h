#ifndef CARDENGINE_HEADER_ARM9_H
#define CARDENGINE_HEADER_ARM9_H

#include <nds/ndstypes.h>
#include "module_params.h"

//
// ARM9 cardengine patches
//
typedef struct cardengineArm9Patches {
    u32* card_read_arm9;
    u32* card_irq_enable;
    u32* card_pull_out_arm9;
    u32* card_id_arm9;
    u32* card_dma_arm9;
    u32* card_set_dma_arm9;
    u32* nand_read_arm9;
    u32* nand_write_arm9;
    u32* cardStructArm9;
    u32* card_pull; // Unused
    u32* slot2_exists_fix;
    u32* slot2_read;
    u32* cacheFlushRef;
    u32* cardEndReadDmaRef;
    u32* terminateForPullOutRef;
    u32* swi02;
    u32* reset_arm9;
    u32 needFlushDCCache;
    u32* pdash_read;
    u32* ipcSyncHandlerRef;
} __attribute__ ((__packed__)) cardengineArm9Patches;


//
// ARM9 cardengine thumb patches
//
typedef struct cardengineArm9ThumbPatches {
    u32* card_read_arm9;
    u32* card_irq_enable;
    u32* card_pull_out_arm9;
    u32* card_id_arm9;
    u32* card_dma_arm9;
    u32* card_set_dma_arm9;
    u32* nand_read_arm9;
    u32* nand_write_arm9;
    u32* cardStructArm9;
    u32* card_pull; // Unused
    u32* slot2_read;
    u32* cacheFlushRef;
    u32* cardEndReadDmaRef;
    u32* terminateForPullOutRef;
} __attribute__ ((__packed__)) cardengineArm9ThumbPatches;


//
// ARM9 cardengine
//
typedef struct cardengineArm9 {
    u32 ce9;
    cardengineArm9Patches* patches;
    cardengineArm9ThumbPatches* thumbPatches;
    u32 intr_ipc_orig_return;
    const module_params_t* moduleParams;
    u32 fileCluster;
    u32 saveCluster;
    u32 saveOnFlashcard;
    u32 cardStruct0;
    u32 cacheStruct;
    u32 cacheBlockSize;
    u32 ROMinRAM;
    u32 dsiMode;
    u32 enableExceptionHandler;
    u32 consoleModel;
    u32* irqTable;
} __attribute__ ((__packed__)) cardengineArm9;

#endif // CARDENGINE_HEADER_ARM9_H
