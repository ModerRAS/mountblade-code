#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part224.c - 1 个函数

// 函数: void FUN_18019aac0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18019aac0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  void *puVar6;
  void *puStack_88;
  int64_t lStack_80;
  int iStack_78;
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  FUN_180627ae0(&puStack_88,param_3,param_3,param_4,0,0xfffffffffffffffe);
  System_DataHandler(&puStack_88,&unknown_var_2452_ptr,*(uint64_t *)(param_2 + 0x20));
  lVar3 = *param_1;
  if (0 < iStack_78) {
    FUN_1806277c0(lVar3 + 0x60780,*(int *)(lVar3 + 0x60790) + iStack_78);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(lVar3 + 0x60790) + *(int64_t *)(lVar3 + 0x60788),lStack_80,
           (int64_t)(iStack_78 + 1));
  }
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)puVar1[1];
  puVar4 = (uint64_t *)*puVar1;
  if (puVar4 != puVar2) {
    do {
      *puVar4 = &system_data_buffer_ptr;
      if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 3) = 0;
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar2);
    puVar4 = (uint64_t *)*puVar1;
  }
  puVar1[1] = puVar4;
  for (lVar3 = *(int64_t *)(param_2 + 8); lVar3 != param_2; lVar3 = func_0x00018066bd70(lVar3)) {
    lVar5 = param_1[1];
    FUN_180627ae0(&puStack_68,lVar3 + 0x20);
    uStack_48 = *(int32_t *)(lVar3 + 0x40);
    puVar1 = *(uint64_t **)(lVar5 + 8);
    if (puVar1 < *(uint64_t **)(lVar5 + 0x10)) {
      *(uint64_t **)(lVar5 + 8) = puVar1 + 5;
      *puVar1 = &system_state_ptr;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *puVar1 = &system_data_buffer_ptr;
      puVar1[3] = 0;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *(int32_t *)(puVar1 + 2) = uStack_58;
      puVar1[1] = lStack_60;
      *(int32_t *)((int64_t)puVar1 + 0x1c) = uStack_50._4_4_;
      *(int32_t *)(puVar1 + 3) = (int32_t)uStack_50;
      uStack_58 = 0;
      lStack_60 = 0;
      uStack_50 = 0;
      *(int32_t *)(puVar1 + 4) = uStack_48;
    }
    else {
      FUN_1800584e0(lVar5,&puStack_68);
    }
    puStack_68 = &system_data_buffer_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    puStack_68 = &system_state_ptr;
  }
  FUN_1801bb3a0(*(uint64_t *)param_1[1],((uint64_t *)param_1[1])[1],0);
  lVar3 = ((int64_t *)param_1[1])[1];
  for (lVar5 = *(int64_t *)param_1[1]; lVar5 != lVar3; lVar5 = lVar5 + 0x28) {
    puVar6 = &system_buffer_ptr;
    if (*(void **)(lVar5 + 8) != (void *)0x0) {
      puVar6 = *(void **)(lVar5 + 8);
    }
    System_DataHandler(*param_1 + 0x60780,&unknown_var_2440_ptr,puVar6,*(int32_t *)(lVar5 + 0x20));
  }
  System_DataHandler(*param_1 + 0x60780,&system_data_cc18);
  puStack_88 = &system_data_buffer_ptr;
  if (lStack_80 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



