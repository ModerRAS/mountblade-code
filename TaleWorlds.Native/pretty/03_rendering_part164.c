#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part164.c - 9 个函数

// 函数: void FUN_18036c820(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18036c820(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  void *puStack_b0;
  uint64_t *puStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  void *puStack_88;
  uint64_t *puStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_80 = puVar2;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x6d614e2068746150;
  *(int16_t *)(puVar2 + 1) = 0x65;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 9;
  uStack_98._4_4_ = 0;
  uStack_78 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_90 = 0;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,1);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &system_state_ptr;
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar3 = 0;
  puStack_60 = (uint64_t *)puVar3;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x6873654d;
  *(int8_t *)(puVar3 + 1) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 4;
  uStack_98._4_4_ = 0;
  uStack_58 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = 0;
  uStack_90 = 8;
  puStack_a8 = (uint64_t *)puVar3;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,2);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_80 = puVar2;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x656c616353205a;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 7;
  uStack_98._4_4_ = 0;
  uStack_78 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_90 = 2;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,4);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &system_state_ptr;
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar3 = 0;
  puStack_60 = (uint64_t *)puVar3;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x70696c46;
  *(int8_t *)(puVar3 + 1) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 4;
  uStack_98._4_4_ = 0;
  uStack_58 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = 0;
  uStack_90 = 3;
  puStack_a8 = (uint64_t *)puVar3;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,8);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar3 = 0;
  puStack_80 = (uint64_t *)puVar3;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x6b73614d;
  *(int8_t *)(puVar3 + 1) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 4;
  uStack_98._4_4_ = 0;
  uStack_78 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_90 = 9;
  puStack_a8 = (uint64_t *)puVar3;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,0x10);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &system_state_ptr;
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_60 = puVar2;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x72656972726142;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 7;
  uStack_98._4_4_ = 0;
  uStack_58 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = 0;
  uStack_90 = 3;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,0x20);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_80 = puVar2;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x74696d694c206941;
  *(int16_t *)(puVar2 + 1) = 0x7265;
  *(int8_t *)((int64_t)puVar2 + 10) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 10;
  uStack_98._4_4_ = 0;
  uStack_78 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_90 = 3;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,0x40);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &system_state_ptr;
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_60 = puVar2;
  uStack_98._0_4_ = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x6e4f20746e656741;
  *(int16_t *)(puVar2 + 1) = 0x796c;
  *(int8_t *)((int64_t)puVar2 + 10) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 10;
  uStack_98._4_4_ = 0;
  uStack_58 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = 0;
  uStack_90 = 3;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,0x80);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_a8 = (uint64_t *)0x0;
  uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
  puStack_b0 = &system_state_ptr;
  puStack_60 = (uint64_t *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0);
  *(int8_t *)puVar2 = 0;
  puStack_80 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x20656c697373694d;
  *(int32_t *)(puVar2 + 1) = 0x796c6e4f;
  *(int8_t *)((int64_t)puVar2 + 0xc) = 0;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_a0 = 0xc;
  uStack_98 = (uint64_t)uVar1;
  uStack_78 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_90 = 3;
  puStack_a8 = puVar2;
  FUN_18036d170(param_1,auStack_48,&puStack_b0,param_4,0x100);
  puStack_b0 = &system_data_buffer_ptr;
  if (puStack_a8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18036d170(int64_t param_1,int64_t *param_2,int64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puStackX_8;
  int64_t lStackX_10;
  
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (uint64_t *)(lVar4 + 0x20);
  puStackX_8 = puVar1;
  FUN_180049b30(puVar1,param_3);
  *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(param_3 + 0x20);
  lStackX_10 = lVar4;
  lVar5 = FUN_1800590b0(param_1,&puStackX_8,puVar1);
  if ((char)puStackX_8 == '\0') {
    *puVar1 = &system_state_ptr;
    if (lVar4 != 0) {
      puStackX_8 = puVar1;
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar4);
    }
    *param_2 = lVar5;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_18036d227:
      uVar8 = 1;
      goto LAB_18036d232;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(int64_t *)(lVar4 + 0x28) - (int64_t)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_18036d227;
    }
  }
  uVar8 = 0;
LAB_18036d232:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,lVar5,param_1,uVar8);
}



uint64_t * FUN_18036d290(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2088_ptr;
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036d330(uint64_t param_1,uint64_t param_2)
void FUN_18036d330(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3,0xfffffffffffffffe);
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_2088_ptr;
  plVar1 = puVar4 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar4[0x12] = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_48 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
  *puVar4 = 0x7250207265746157;
  *(int32_t *)(puVar4 + 1) = 0x62616665;
  *(int8_t *)((int64_t)puVar4 + 0xc) = 0;
  uStack_40 = 0xc;
  FUN_1803460a0(puVar3,&puStack_50,plVar1,9);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}





// 函数: void FUN_18036d4a0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18036d4a0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  void *puStack_40;
  int64_t lStack_38;
  int32_t uStack_28;
  
  if (((*(int *)(param_2 + 0x10) == 0xc) &&
      (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_96c8,param_3,param_4,0xfffffffffffffffe
                     ), iVar2 == 0)) &&
     (lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x380), lVar3 != 0
     )) {
    lVar1 = *(int64_t *)(lVar3 + 0xb8);
    for (lVar3 = *(int64_t *)(lVar3 + 0xb0); lVar3 != lVar1; lVar3 = lVar3 + 0x110) {
      if (*(char *)(lVar3 + 0x108) == '\0') {
        SystemCore_EncryptionEngine0(&puStack_40,lVar3);
        FUN_180066df0(param_3,&puStack_40);
        puStack_40 = &system_data_buffer_ptr;
        if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_38 = 0;
        uStack_28 = 0;
        puStack_40 = &system_state_ptr;
      }
    }
  }
  return;
}





// 函数: void FUN_18036d5a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18036d5a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  uint64_t uVar11;
  int64_t lStack_40;
  int64_t lStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  
  uVar11 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    lStack_40 = 0;
    lStack_38 = 0;
    uVar10 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    lVar1 = *(int64_t *)(param_1 + 0x18);
    uVar8 = uVar10;
    uVar9 = uVar10;
    if (*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3 != 0) {
      do {
        plVar2 = *(int64_t **)(uVar9 + *(int64_t *)(lVar1 + 0xf0));
        (**(code **)(*plVar2 + 0x170))(plVar2,&lStack_40,0xffffffff,param_4,uVar11);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        uVar9 = uVar9 + 8;
      } while ((uint64_t)(int64_t)(int)uVar7 <
               (uint64_t)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3));
    }
    if (*(int64_t *)(lVar1 + 0x260) != 0) {
      FUN_1802fdc90(*(int64_t *)(lVar1 + 0x260),&lStack_40,0xffffffff);
    }
    uVar8 = uVar10;
    if (lStack_38 - lStack_40 >> 3 != 0) {
      do {
        uVar11 = *(uint64_t *)(uVar10 + lStack_40);
        plVar2 = *(int64_t **)(param_1 + 0x90);
        plStackX_8 = plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        FUN_180076910(uVar11,&plStackX_8);
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2);
        }
        lVar1 = *(int64_t *)(uVar10 + lStack_40);
        uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 0x90) + 0x290);
        *(uint64_t *)(lVar1 + 0x2a8) = *(uint64_t *)(*(int64_t *)(param_1 + 0x90) + 0x288);
        *(uint64_t *)(lVar1 + 0x2b0) = uVar11;
        lVar1 = *(int64_t *)(uVar10 + lStack_40);
        lVar3 = *(int64_t *)(param_1 + 0x90);
        uVar4 = *(int32_t *)(lVar3 + 0x29c);
        uVar5 = *(int32_t *)(lVar3 + 0x2a0);
        uVar6 = *(int32_t *)(lVar3 + 0x2a4);
        *(int32_t *)(lVar1 + 0x2b8) = *(int32_t *)(lVar3 + 0x298);
        *(int32_t *)(lVar1 + 700) = uVar4;
        *(int32_t *)(lVar1 + 0x2c0) = uVar5;
        *(int32_t *)(lVar1 + 0x2c4) = uVar6;
        uVar7 = (int)uVar8 + 1;
        uVar10 = uVar10 + 8;
        uVar8 = (uint64_t)uVar7;
      } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)(lStack_38 - lStack_40 >> 3));
    }
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_18036d750(int64_t param_1)
void FUN_18036d750(int64_t param_1)

{
  int64_t lVar1;
  
  FUN_18036d5a0();
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x148) != 0x100000) {
    *(int32_t *)(lVar1 + 0x148) = 0x100000;
  }
  if (*(int64_t *)(lVar1 + 0x270) != 0) {
    *(int32_t *)(*(int64_t *)(lVar1 + 0x270) + 0x18) = 0x100000;
  }
  return;
}





// 函数: void FUN_18036d7a0(uint64_t *param_1)
void FUN_18036d7a0(uint64_t *param_1)

{
  int64_t lVar1;
  
  if ((void *)*param_1 == &unknown_var_2088_ptr) {
    FUN_18036d5a0();
    lVar1 = param_1[3];
    if (*(int *)(lVar1 + 0x148) != 0x100000) {
      *(int32_t *)(lVar1 + 0x148) = 0x100000;
    }
    if (*(int64_t *)(lVar1 + 0x270) != 0) {
      *(int32_t *)(*(int64_t *)(lVar1 + 0x270) + 0x18) = 0x100000;
      return;
    }
  }
  else {
    (**(code **)((void *)*param_1 + 0x70))(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036d810(int64_t param_1,int64_t param_2)
void FUN_18036d810(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  byte *pbVar10;
  uint64_t *puVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t lStack_40;
  int64_t lStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  
  if (*(int *)(param_2 + 0x10) == 0xc) {
    lStack_40 = 0x18036d83f;
    iVar9 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_96c8);
    if ((iVar9 == 0) &&
       (lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x380),
       lVar5 != 0)) {
      lVar18 = *(int64_t *)(lVar5 + 0xb0);
      if (lVar18 != *(int64_t *)(lVar5 + 0xb8)) {
        iVar9 = *(int *)(param_1 + 0x80);
        do {
          iVar2 = *(int *)(lVar18 + 0x10);
          iVar12 = iVar9;
          if (iVar2 == iVar9) {
            if (iVar2 != 0) {
              pbVar10 = *(byte **)(lVar18 + 8);
              lVar17 = *(int64_t *)(param_1 + 0x78) - (int64_t)pbVar10;
              do {
                pbVar1 = pbVar10 + lVar17;
                iVar12 = (uint)*pbVar10 - (uint)*pbVar1;
                if (iVar12 != 0) break;
                pbVar10 = pbVar10 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18036d8be:
            if (iVar12 == 0) {
              lStack_40 = 0x18036d8e6;
              puVar11 = (uint64_t *)
                        FUN_1800b30d0(system_resource_state,&plStackX_10,lVar18 + 0x58,
                                      CONCAT71((int7)((uint64_t)lVar18 >> 8),1));
              *(uint64_t *)(param_1 + 0x90) = *puVar11;
              if (plStackX_10 != (int64_t *)0x0) {
                lStack_40 = 0x18036d901;
                (**(code **)(*plStackX_10 + 0x38))();
              }
              break;
            }
          }
          else if (iVar2 == 0) goto LAB_18036d8be;
          lVar18 = lVar18 + 0x110;
        } while (lVar18 != *(int64_t *)(lVar5 + 0xb8));
      }
      if (*(int64_t *)(param_1 + 0x90) != 0) {
        lStack_40 = 0;
        lStack_38 = 0;
        uVar16 = 0;
        uStack_30 = 0;
        uStack_28 = 3;
        lVar5 = *(int64_t *)(param_1 + 0x18);
        uVar14 = uVar16;
        uVar15 = uVar16;
        if (*(int64_t *)(lVar5 + 0xf8) - *(int64_t *)(lVar5 + 0xf0) >> 3 != 0) {
          do {
            plVar3 = *(int64_t **)(uVar15 + *(int64_t *)(lVar5 + 0xf0));
            (**(code **)(*plVar3 + 0x170))(plVar3,&lStack_40,0xffffffff);
            uVar13 = (int)uVar14 + 1;
            uVar14 = (uint64_t)uVar13;
            uVar15 = uVar15 + 8;
          } while ((uint64_t)(int64_t)(int)uVar13 <
                   (uint64_t)(*(int64_t *)(lVar5 + 0xf8) - *(int64_t *)(lVar5 + 0xf0) >> 3));
        }
        if (*(int64_t *)(lVar5 + 0x260) != 0) {
          FUN_1802fdc90(*(int64_t *)(lVar5 + 0x260),&lStack_40,0xffffffff);
        }
        uVar14 = uVar16;
        if (lStack_38 - lStack_40 >> 3 != 0) {
          do {
            uVar4 = *(uint64_t *)(uVar16 + lStack_40);
            plVar3 = *(int64_t **)(param_1 + 0x90);
            plStackX_8 = plVar3;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            FUN_180076910(uVar4,&plStackX_8);
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3);
            }
            lVar5 = *(int64_t *)(uVar16 + lStack_40);
            uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x90) + 0x290);
            *(uint64_t *)(lVar5 + 0x2a8) = *(uint64_t *)(*(int64_t *)(param_1 + 0x90) + 0x288);
            *(uint64_t *)(lVar5 + 0x2b0) = uVar4;
            lVar5 = *(int64_t *)(uVar16 + lStack_40);
            lVar18 = *(int64_t *)(param_1 + 0x90);
            uVar6 = *(int32_t *)(lVar18 + 0x29c);
            uVar7 = *(int32_t *)(lVar18 + 0x2a0);
            uVar8 = *(int32_t *)(lVar18 + 0x2a4);
            *(int32_t *)(lVar5 + 0x2b8) = *(int32_t *)(lVar18 + 0x298);
            *(int32_t *)(lVar5 + 700) = uVar6;
            *(int32_t *)(lVar5 + 0x2c0) = uVar7;
            *(int32_t *)(lVar5 + 0x2c4) = uVar8;
            uVar13 = (int)uVar14 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = (uint64_t)uVar13;
          } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)(lStack_38 - lStack_40 >> 3));
        }
        if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036d920(uint64_t *param_1)
void FUN_18036d920(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void *puStack_238;
  int32_t *puStack_230;
  int32_t uStack_228;
  uint64_t uStack_220;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar7 = param_1;
  FUN_1803456e0();
  *puVar7 = &unknown_var_2456_ptr;
  lVar4 = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  *(int32_t *)(puVar7 + 0x13) = 3;
  puStack_58 = puVar7 + 0x14;
  *puStack_58 = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  *(int32_t *)(puVar7 + 0x17) = 3;
  plVar1 = puVar7 + 0x19;
  *plVar1 = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  *(int32_t *)(puVar7 + 0x1c) = 3;
  puStack_50 = puVar7 + 0x1d;
  *puStack_50 = &system_state_ptr;
  puVar7[0x1e] = 0;
  *(int32_t *)(puVar7 + 0x1f) = 0;
  *puStack_50 = &system_data_buffer_ptr;
  puVar7[0x20] = 0;
  puVar7[0x1e] = 0;
  *(int32_t *)(puVar7 + 0x1f) = 0;
  param_1[0xe] = 0;
  lVar5 = puVar7[0x1a];
  uVar8 = lVar5 - *plVar1 >> 3;
  if (uVar8 < 4) {
    uVar9 = 4 - uVar8;
    if ((uint64_t)(puVar7[0x1b] - lVar5 >> 3) < uVar9) {
      uVar10 = uVar8 * 2;
      if (uVar8 == 0) {
        uVar10 = 1;
      }
      if (uVar10 < 4) {
        uVar10 = 4;
      }
      if (uVar10 != 0) {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 8,*(int8_t *)(puVar7 + 0x1c));
        lVar5 = puVar7[0x1a];
      }
      lVar2 = *plVar1;
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar5 - lVar2);
      }
      if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar4,0,uVar9 * 8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = lVar4;
      puVar7[0x1a] = lVar4;
      puVar7[0x1b] = lVar4 + uVar10 * 8;
      goto LAB_18036dafe;
    }
    if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,uVar9 * 8);
    }
  }
  else {
    lVar5 = *plVar1 + 0x20;
  }
  puVar7[0x1a] = lVar5;
LAB_18036dafe:
  param_1[0x24] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x22] = 0x41200000;
  *(int32_t *)(param_1 + 0x23) = 0x42c80000;
  *(int8_t *)((int64_t)param_1 + 0xc5) = 0;
  *(int32_t *)(param_1 + 0x21) = 0x3f400000;
  *(int32_t *)((int64_t)param_1 + 0x10c) = 0x3fa00000;
  puVar7[0x11] = puVar7[0x10];
  puStack_58[1] = *puStack_58;
  puStack_238 = &system_data_buffer_ptr;
  uStack_220 = 0;
  puStack_230 = (int32_t *)0x0;
  uStack_228 = 0;
  puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_230 = puVar6;
  uVar3 = CoreEngineSystemCleanup(puVar6);
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar3);
  *puVar6 = 0x64656553;
  *(int8_t *)(puVar6 + 1) = 0;
  uStack_228 = 4;
  FUN_1803460a0(param_1,&puStack_238,param_1 + 0x18,2);
  puStack_238 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar6);
}



int64_t FUN_18036e600(int64_t param_1,uint64_t param_2)

{
  *(uint64_t *)(param_1 + 0xe8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0xf0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(int32_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0xe8) = &system_state_ptr;
  if (*(int64_t *)(param_1 + 200) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x80) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x130);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036e6e0(uint64_t param_1,uint64_t param_2)
void FUN_18036e6e0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void *puStack_238;
  int32_t *puStack_230;
  int32_t uStack_228;
  uint64_t uStack_220;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  
  puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,3);
  uStack_48 = 0xfffffffffffffffe;
  puVar8 = puVar7;
  FUN_1803456e0(puVar7,param_2,param_1);
  *puVar8 = &unknown_var_2456_ptr;
  lVar4 = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  *(int32_t *)(puVar8 + 0x13) = 3;
  puStack_58 = puVar8 + 0x14;
  *puStack_58 = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  *(int32_t *)(puVar8 + 0x17) = 3;
  plVar1 = puVar8 + 0x19;
  *plVar1 = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  *(int32_t *)(puVar8 + 0x1c) = 3;
  puStack_50 = puVar8 + 0x1d;
  *puStack_50 = &system_state_ptr;
  puVar8[0x1e] = 0;
  *(int32_t *)(puVar8 + 0x1f) = 0;
  *puStack_50 = &system_data_buffer_ptr;
  puVar8[0x20] = 0;
  puVar8[0x1e] = 0;
  *(int32_t *)(puVar8 + 0x1f) = 0;
  puVar7[0xe] = 0;
  lVar5 = puVar8[0x1a];
  uVar9 = lVar5 - *plVar1 >> 3;
  if (uVar9 < 4) {
    uVar10 = 4 - uVar9;
    if ((uint64_t)(puVar8[0x1b] - lVar5 >> 3) < uVar10) {
      uVar11 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar11 = 1;
      }
      if (uVar11 < 4) {
        uVar11 = 4;
      }
      if (uVar11 != 0) {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 8,*(int8_t *)(puVar8 + 0x1c));
        lVar5 = puVar8[0x1a];
      }
      lVar2 = *plVar1;
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar5 - lVar2);
      }
      if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar4,0,uVar10 * 8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = lVar4;
      puVar8[0x1a] = lVar4;
      puVar8[0x1b] = lVar4 + uVar11 * 8;
      goto LAB_18036dafe;
    }
    if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,uVar10 * 8);
    }
  }
  else {
    lVar5 = *plVar1 + 0x20;
  }
  puVar8[0x1a] = lVar5;
LAB_18036dafe:
  puVar7[0x24] = 0;
  puVar7[0xf] = 0;
  *(int32_t *)(puVar7 + 0x25) = 0;
  *(int32_t *)(puVar7 + 0x18) = 0;
  puVar7[0x22] = 0x41200000;
  *(int32_t *)(puVar7 + 0x23) = 0x42c80000;
  *(int8_t *)((int64_t)puVar7 + 0xc5) = 0;
  *(int32_t *)(puVar7 + 0x21) = 0x3f400000;
  *(int32_t *)((int64_t)puVar7 + 0x10c) = 0x3fa00000;
  puVar8[0x11] = puVar8[0x10];
  puStack_58[1] = *puStack_58;
  puStack_238 = &system_data_buffer_ptr;
  uStack_220 = 0;
  puStack_230 = (int32_t *)0x0;
  uStack_228 = 0;
  puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_230 = puVar6;
  uVar3 = CoreEngineSystemCleanup(puVar6);
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar3);
  *puVar6 = 0x64656553;
  *(int8_t *)(puVar6 + 1) = 0;
  uStack_228 = 4;
  FUN_1803460a0(puVar7,&puStack_238,puVar7 + 0x18,2);
  puStack_238 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar6);
}





