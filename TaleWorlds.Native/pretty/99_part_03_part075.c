#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part075.c - 11 个函数

// 函数: void FUN_1802403c0(int64_t param_1)
void FUN_1802403c0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  plVar2 = (int64_t *)(param_1 + 0x1678);
  lVar3 = 7;
  do {
    plVar1 = (int64_t *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t SystemCore_LoggingSystem0(int64_t param_1,int64_t param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  byte *pbVar6;
  int64_t lVar7;
  int iVar8;
  void *puVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t *plStackX_8;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 0x1628) < 1) {
    lVar4 = *(int64_t *)(param_1 + 0x1598);
    lVar12 = *(int64_t *)(param_1 + 0x15a0) - lVar4;
    lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
    lVar7 = lVar12 >> 4;
    lVar12 = lVar12 >> 0x3f;
    if (lVar7 != lVar12) {
      iVar2 = *(int *)(param_2 + 0x10);
      uVar15 = uVar11;
      do {
        iVar3 = *(int *)(uVar15 + 0x10 + lVar4);
        iVar8 = iVar2;
        if (iVar3 == iVar2) {
          if (iVar3 != 0) {
            pbVar6 = *(byte **)(uVar15 + 8 + lVar4);
            lVar14 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
            do {
              pbVar1 = pbVar6 + lVar14;
              iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18024063e:
          if (iVar8 == 0) {
            return 1L << ((byte)uVar11 & 0x3f);
          }
        }
        else if (iVar3 == 0) goto LAB_18024063e;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (uint64_t)uVar10;
        uVar15 = uVar15 + 0x60;
      } while ((uint64_t)(int64_t)(int)uVar10 < (uint64_t)(lVar7 - lVar12));
    }
  }
  else {
    if (*(int64_t *)(param_1 + 0xb8) == 0) {
      puVar5 = (uint64_t *)
               FUN_1800b31f0(system_resource_state,&plStackX_8,param_1 + 0x1618,param_3,0,
                             0xfffffffffffffffe);
      *(uint64_t *)(param_1 + 0xb8) = *puVar5;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    lVar4 = *(int64_t *)(param_1 + 0xb8);
    lVar7 = *(int64_t *)(lVar4 + 0x15a0) - *(int64_t *)(lVar4 + 0x1598);
    lVar12 = lVar7 >> 0x3f;
    if (lVar7 / 0x60 + lVar12 != lVar12) {
      iVar2 = *(int *)(param_2 + 0x10);
      lVar12 = lVar4;
      uVar15 = uVar11;
      do {
        iVar3 = *(int *)(*(int64_t *)(lVar12 + 0x1598) + 0x10 + uVar15);
        iVar8 = iVar2;
        if (iVar3 == iVar2) {
          if (iVar3 != 0) {
            pbVar6 = *(byte **)(*(int64_t *)(lVar12 + 0x1598) + 8 + uVar15);
            lVar12 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
            do {
              pbVar1 = pbVar6 + lVar12;
              iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18024053f:
          if (iVar8 == 0) {
            return 1L << ((byte)uVar11 & 0x3f);
          }
        }
        else if (iVar3 == 0) goto LAB_18024053f;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (uint64_t)uVar10;
        uVar15 = uVar15 + 0x60;
        lVar12 = *(int64_t *)(param_1 + 0xb8);
      } while ((uint64_t)(int64_t)(int)uVar10 <
               (uint64_t)((*(int64_t *)(lVar4 + 0x15a0) - *(int64_t *)(lVar4 + 0x1598)) / 0x60));
    }
  }
  if (param_3 != '\0') {
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar13 = *(void **)(param_1 + 0x18);
    }
    puVar9 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar9 = *(void **)(param_2 + 8);
    }
    SystemDataInitializer(&processed_var_8944_ptr,puVar9,puVar13);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180240670(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  byte *pbVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int8_t *puVar6;
  uint64_t *puVar7;
  byte *pbVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  void *puVar17;
  int *piVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  
  plVar4 = (int64_t *)FUN_180240a60();
  lVar10 = (plVar4[1] - *plVar4) / 6 + (plVar4[1] - *plVar4 >> 0x3f);
  puVar14 = (uint64_t *)0x0;
  lVar10 = (lVar10 >> 4) - (lVar10 >> 0x3f);
  puVar5 = puVar14;
  if (lVar10 != 0) {
    puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x60,*(uint *)(plVar4 + 3) & 0xff);
  }
  puVar7 = (uint64_t *)plVar4[1];
  puVar11 = (uint64_t *)*plVar4;
  puVar16 = puVar5;
  if (puVar11 != puVar7) {
    lVar10 = (int64_t)puVar5 - (int64_t)puVar11;
    puVar11 = puVar11 + 1;
    do {
      *puVar16 = &system_state_ptr;
      *(uint64_t *)(lVar10 + (int64_t)puVar11) = 0;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar11) = 0;
      *puVar16 = &memory_allocator_3480_ptr;
      puVar6 = (int8_t *)((int64_t)puVar11 + lVar10 + 0x10);
      *(int8_t **)(lVar10 + (int64_t)puVar11) = puVar6;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar11) = 0;
      *puVar6 = 0;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar11) = *(int32_t *)(puVar11 + 1);
      puVar17 = &system_buffer_ptr;
      if ((void *)*puVar11 != (void *)0x0) {
        puVar17 = (void *)*puVar11;
      }
      strcpy_s(*(uint64_t *)(lVar10 + (int64_t)puVar11),0x40,puVar17);
      *(int32_t *)(lVar10 + 0x50 + (int64_t)puVar11) = *(int32_t *)(puVar11 + 10);
      *(int32_t *)(lVar10 + 0x54 + (int64_t)puVar11) = *(int32_t *)((int64_t)puVar11 + 0x54)
      ;
      puVar16 = puVar16 + 0xc;
      puVar21 = puVar11 + 0xb;
      puVar11 = puVar11 + 0xc;
    } while (puVar21 != puVar7);
  }
  plVar4 = (int64_t *)FUN_180240a60(param_2);
  lVar10 = (plVar4[1] - *plVar4) / 6 + (plVar4[1] - *plVar4 >> 0x3f);
  lVar10 = (lVar10 >> 4) - (lVar10 >> 0x3f);
  puVar7 = puVar14;
  if (lVar10 != 0) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x60,*(uint *)(plVar4 + 3) & 0xff);
  }
  puVar11 = (uint64_t *)plVar4[1];
  puVar21 = (uint64_t *)*plVar4;
  puVar12 = puVar7;
  if (puVar21 != puVar11) {
    lVar10 = (int64_t)puVar7 - (int64_t)puVar21;
    puVar21 = puVar21 + 1;
    do {
      *puVar12 = &system_state_ptr;
      *(uint64_t *)(lVar10 + (int64_t)puVar21) = 0;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar21) = 0;
      *puVar12 = &memory_allocator_3480_ptr;
      puVar6 = (int8_t *)((int64_t)puVar21 + lVar10 + 0x10);
      *(int8_t **)(lVar10 + (int64_t)puVar21) = puVar6;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar21) = 0;
      *puVar6 = 0;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar21) = *(int32_t *)(puVar21 + 1);
      puVar17 = &system_buffer_ptr;
      if ((void *)*puVar21 != (void *)0x0) {
        puVar17 = (void *)*puVar21;
      }
      strcpy_s(*(uint64_t *)(lVar10 + (int64_t)puVar21),0x40,puVar17);
      *(int32_t *)(lVar10 + 0x50 + (int64_t)puVar21) = *(int32_t *)(puVar21 + 10);
      *(int32_t *)(lVar10 + 0x54 + (int64_t)puVar21) = *(int32_t *)((int64_t)puVar21 + 0x54)
      ;
      puVar12 = puVar12 + 0xc;
      puVar1 = puVar21 + 0xb;
      puVar21 = puVar21 + 0xc;
    } while (puVar1 != puVar11);
  }
  lVar10 = ((int64_t)puVar16 - (int64_t)puVar5) / 6 +
           ((int64_t)puVar16 - (int64_t)puVar5 >> 0x3f);
  lVar19 = lVar10 >> 4;
  lVar10 = lVar10 >> 0x3f;
  uVar20 = lVar19 - lVar10;
  puVar11 = puVar7;
  if (uVar20 == ((int64_t)puVar12 - (int64_t)puVar7) / 0x60) {
    if (lVar19 != lVar10) {
      piVar18 = (int *)(puVar7 + 2);
      do {
        iVar3 = *(int *)(((int64_t)puVar5 - (int64_t)puVar7) + (int64_t)piVar18);
        iVar9 = *piVar18;
        if (iVar3 == iVar9) {
          if (iVar3 != 0) {
            pbVar8 = *(byte **)(((int64_t)puVar5 - (int64_t)puVar7) + -8 + (int64_t)piVar18);
            lVar10 = *(int64_t *)(piVar18 + -2) - (int64_t)pbVar8;
            do {
              pbVar2 = pbVar8 + lVar10;
              iVar9 = (uint)*pbVar8 - (uint)*pbVar2;
              if (iVar9 != 0) break;
              pbVar8 = pbVar8 + 1;
            } while (*pbVar2 != 0);
          }
        }
        else if (iVar3 != 0) goto LAB_1802409b2;
        if (iVar9 != 0) goto LAB_1802409b2;
        uVar13 = (int)puVar14 + 1;
        puVar14 = (uint64_t *)(uint64_t)uVar13;
        piVar18 = piVar18 + 0x18;
      } while ((uint64_t)(int64_t)(int)uVar13 < uVar20);
    }
    uVar15 = 1;
  }
  else {
LAB_1802409b2:
    uVar15 = 0;
  }
  for (; puVar11 != puVar12; puVar11 = puVar11 + 0xc) {
    *puVar11 = &system_state_ptr;
  }
  puVar14 = puVar5;
  if (puVar7 == (uint64_t *)0x0) {
    for (; puVar14 != puVar16; puVar14 = puVar14 + 0xc) {
      *puVar14 = &system_state_ptr;
    }
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    return uVar15;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180240a60(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t *plStackX_8;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x1628) < 1) {
    return param_1 + 0x1598;
  }
  while( true ) {
    puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStackX_8,param_1 + 0x1618,1,0,uVar3);
    *(uint64_t *)(param_1 + 0xb8) = *puVar2;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar1 = *(int64_t *)(param_1 + 0xb8);
    if (lVar1 == 0) break;
    param_1 = lVar1;
    if (*(int *)(lVar1 + 0x1628) < 1) {
      return lVar1 + 0x1598;
    }
  }
  return param_1 + 0x1598;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180240b30(int64_t param_1)
void FUN_180240b30(int64_t param_1)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  void *puStack_188;
  int32_t *puStack_180;
  int32_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puStack_188 = &system_data_buffer_ptr;
  uStack_170 = 0;
  puStack_180 = (int32_t *)0x0;
  uStack_178 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_180 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar1);
  *puVar2 = 0x5f657375;
  puVar2[1] = 0x73736574;
  puVar2[2] = 0x74616c65;
  puVar2[3] = 0x6e6f69;
  uStack_178 = 0xf;
  uVar3 = SystemCore_LoggingSystem0(param_1,&puStack_188,0);
  *(uint64_t *)(param_1 + 0x15c0) = uVar3;
  puStack_188 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180241250(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  iVar2 = *(int *)(param_1 + 0x1628);
  while (0 < iVar2) {
    plVar1 = (int64_t *)(param_1 + 0xb8);
    if (*plVar1 == 0) {
      plVar3 = (int64_t *)FUN_1800b31f0(system_resource_state,&plStackX_8,param_1 + 0x1618,0,0,uVar4);
      *plVar1 = *plVar3;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    param_1 = *plVar1;
    iVar2 = *(int *)(param_1 + 0x1628);
  }
  return *(uint64_t *)(param_1 + 0x1670);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802412f0(int64_t *param_1)
void FUN_1802412f0(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  
  plVar3 = (int64_t *)param_1[1];
  plVar5 = (int64_t *)*param_1;
  uVar2 = (int64_t)plVar3 - (int64_t)plVar5 >> 3;
  if (0xf < uVar2) {
    plVar1 = plVar5 + 0x10;
    if (plVar1 != plVar3) {
      do {
        if ((int64_t *)*plVar1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (int64_t *)*param_1;
    }
    param_1[1] = (int64_t)(plVar5 + 0x10);
    return;
  }
  uVar4 = 0x10 - uVar2;
  if ((uint64_t)(param_1[2] - (int64_t)plVar3 >> 3) < uVar4) {
    uVar6 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < uVar2 + uVar4) {
      uVar6 = uVar2 + uVar4;
    }
    plVar1 = (int64_t *)0x0;
    plVar7 = plVar1;
    if (uVar6 != 0) {
      plVar1 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 8,(char)param_1[3]);
      plVar5 = (int64_t *)*param_1;
      plVar3 = (int64_t *)param_1[1];
      plVar7 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = uVar4;
    plVar5 = plVar1;
    if (uVar4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (int64_t *)param_1[1];
    plVar3 = (int64_t *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (int64_t *)*param_1;
    }
    if (plVar3 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar3);
    }
    *param_1 = (int64_t)plVar7;
    param_1[2] = (int64_t)(plVar7 + uVar6);
    param_1[1] = (int64_t)(plVar1 + uVar4);
    return;
  }
  uVar2 = uVar4;
  if (uVar4 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (int64_t *)param_1[1];
  }
  param_1[1] = (int64_t)(plVar3 + uVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024131a(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18024131a(int64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  
  uVar4 = 0x10 - param_1;
  if (uVar4 <= (uint64_t)(in_RAX - (int64_t)unaff_RBX >> 3)) {
    uVar7 = uVar4;
    if (uVar4 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
      }
      unaff_RBX = (uint64_t *)unaff_RSI[1];
    }
    unaff_RSI[1] = (int64_t)(unaff_RBX + uVar4);
    return;
  }
  uVar7 = param_1 * 2;
  if (param_1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 < param_1 + uVar4) {
    uVar7 = param_1 + uVar4;
  }
  puVar2 = (uint64_t *)0x0;
  puVar8 = puVar2;
  if (uVar7 != 0) {
    puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,(char)unaff_RSI[3]);
    param_3 = (uint64_t *)*unaff_RSI;
    unaff_RBX = (uint64_t *)unaff_RSI[1];
    puVar8 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  uVar3 = uVar4;
  puVar5 = puVar2;
  if (uVar4 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (int64_t *)unaff_RSI[1];
  plVar6 = (int64_t *)*unaff_RSI;
  if (plVar6 != plVar1) {
    do {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (int64_t *)*unaff_RSI;
  }
  if (plVar6 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar6);
  }
  *unaff_RSI = (int64_t)puVar8;
  unaff_RSI[2] = (int64_t)(puVar8 + uVar7);
  unaff_RSI[1] = (int64_t)(puVar2 + uVar4);
  return;
}






// 函数: void FUN_180241415(void)
void FUN_180241415(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  
  lVar1 = unaff_RBP;
  if (unaff_RBP != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(uint64_t **)(unaff_RSI + 8);
  }
  *(uint64_t **)(unaff_RSI + 8) = unaff_RBX + unaff_RBP;
  return;
}






// 函数: void FUN_18024143e(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18024143e(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t *unaff_RBX;
  int64_t *unaff_RSI;
  int64_t *plVar1;
  
  plVar1 = (int64_t *)(param_3 + 0x80);
  if (plVar1 != unaff_RBX) {
    do {
      if ((int64_t *)*plVar1 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != unaff_RBX);
    param_3 = *unaff_RSI;
  }
  unaff_RSI[1] = param_3 + 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180241480(int64_t *param_1,uint64_t param_2)
void FUN_180241480(int64_t *param_1,uint64_t param_2)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  void *puVar8;
  int64_t lVar9;
  
  puVar4 = (uint64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar4) / 0x58) < param_2) {
    puVar7 = (uint64_t *)*param_1;
    lVar9 = ((int64_t)puVar4 - (int64_t)puVar7) / 0x58;
    uVar3 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar3 = 1;
    }
    if (uVar3 < lVar9 + param_2) {
      uVar3 = lVar9 + param_2;
    }
    puVar2 = (uint64_t *)0x0;
    if (uVar3 != 0) {
      puVar2 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 0x58,(char)param_1[3],0x2e8ba2e8ba2e8ba3,
                             0xfffffffffffffffe);
      puVar4 = (uint64_t *)param_1[1];
      puVar7 = (uint64_t *)*param_1;
    }
    puVar6 = puVar2;
    if (puVar7 != puVar4) {
      lVar9 = (int64_t)puVar7 - (int64_t)puVar2;
      do {
        *puVar6 = &system_state_ptr;
        puVar6[1] = 0;
        *(int32_t *)(puVar6 + 2) = 0;
        *puVar6 = &memory_allocator_3480_ptr;
        puVar6[1] = puVar6 + 3;
        *(int32_t *)(puVar6 + 2) = 0;
        *(int8_t *)(puVar6 + 3) = 0;
        *(int32_t *)(puVar6 + 2) = *(int32_t *)((int64_t)puVar6 + lVar9 + 0x10);
        puVar1 = *(void **)((int64_t)puVar6 + lVar9 + 8);
        puVar8 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar8 = puVar1;
        }
        strcpy_s(puVar6[1],0x40,puVar8);
        puVar6 = puVar6 + 0xb;
      } while ((uint64_t *)((int64_t)puVar6 + lVar9) != puVar4);
    }
    if (param_2 != 0) {
      puVar4 = puVar6 + 1;
      uVar5 = param_2;
      do {
        puVar4[-1] = &system_state_ptr;
        *puVar4 = 0;
        *(int32_t *)(puVar4 + 1) = 0;
        puVar4[-1] = &memory_allocator_3480_ptr;
        *puVar4 = puVar4 + 2;
        *(int32_t *)(puVar4 + 1) = 0;
        *(int8_t *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 0xb;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar4 = (uint64_t *)param_1[1];
    puVar7 = (uint64_t *)*param_1;
    if (puVar7 != puVar4) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 0xb;
      } while (puVar7 != puVar4);
      puVar7 = (uint64_t *)*param_1;
    }
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    *param_1 = (int64_t)puVar2;
    param_1[1] = (int64_t)(puVar6 + param_2 * 0xb);
    param_1[2] = (int64_t)(puVar2 + uVar3 * 0xb);
  }
  else {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = &system_state_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &memory_allocator_3480_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        puVar4 = puVar4 + 0xb;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar4 + param_2 * 0xb);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802416d0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802416d0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar8 = ((int64_t)puVar7 - (int64_t)puVar4) / 0x60;
  puVar2 = (uint64_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_180241760;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0x60,*(int8_t *)(param_1 + 3),param_4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_180241760:
  puVar5 = puVar2;
  if (puVar4 != puVar7) {
    lVar9 = (int64_t)puVar2 - (int64_t)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar9 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = 0;
      *puVar5 = &memory_allocator_3480_ptr;
      puVar3 = (int8_t *)((int64_t)puVar4 + lVar9 + 0x10);
      *(int8_t **)(lVar9 + (int64_t)puVar4) = puVar3;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = 0;
      *puVar3 = 0;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      puVar6 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar6 = (void *)*puVar4;
      }
      strcpy_s(*(uint64_t *)(lVar9 + (int64_t)puVar4),0x40,puVar6);
      *(int32_t *)(lVar9 + 0x50 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 10);
      *(int32_t *)(lVar9 + 0x54 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x54);
      puVar5 = puVar5 + 0xc;
      puVar1 = puVar4 + 0xb;
      puVar4 = puVar4 + 0xc;
    } while (puVar1 != puVar7);
  }
  FUN_1800b8300(puVar5,param_2);
  *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar5 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 0xc;
    param_1[2] = puVar2 + lVar8 * 0xc;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802418c0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1802418c0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  lVar4 = (param_3 - param_2) / 0x26 + (param_3 - param_2 >> 0x3f);
  uVar6 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  if ((uint64_t)((param_1[2] - *param_1) / 0x98) < uVar6) {
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 0x98,(char)param_1[3]);
    }
    FUN_180241ca0(param_2,param_3,lVar4);
    puVar1 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
    if (puVar5 != puVar1) {
      do {
        (**(code **)*puVar5)(puVar5,0);
        puVar5 = puVar5 + 0x13;
      } while (puVar5 != puVar1);
      puVar5 = (uint64_t *)*param_1;
    }
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    *param_1 = lVar4;
    lVar4 = uVar6 * 0x98 + lVar4;
    param_1[2] = lVar4;
    param_1[1] = lVar4;
  }
  else {
    uVar2 = (param_1[1] - *param_1) / 0x98;
    if (uVar2 < uVar6) {
      lVar4 = uVar2 * 0x98 + param_2;
      FUN_180241bf0(param_2,lVar4);
      lVar4 = FUN_180241ca0(lVar4,param_3,param_1[1]);
      param_1[1] = lVar4;
    }
    else {
      puVar3 = (uint64_t *)FUN_180241bf0(param_2,param_3);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar5 = puVar3; puVar5 != puVar1; puVar5 = puVar5 + 0x13) {
        (**(code **)*puVar5)(puVar5,0);
      }
      param_1[1] = (int64_t)puVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180241929(void)
void FUN_180241929(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBP * 0x98,(char)unaff_RDI[3]);
  }
  FUN_180241ca0();
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 0x13;
    } while (puVar3 != puVar1);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  *unaff_RDI = lVar2;
  lVar2 = unaff_RBP * 0x98 + lVar2;
  unaff_RDI[2] = lVar2;
  unaff_RDI[1] = lVar2;
  return;
}






// 函数: void FUN_1802419b5(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1802419b5(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R10;
  
  lVar4 = SUB168(SEXT816(in_R10) * SEXT816(*(int64_t *)(unaff_RDI + 8) - param_3),8);
  uVar5 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  if (uVar5 < unaff_RBP) {
    FUN_180241bf0();
    uVar3 = FUN_180241ca0(uVar5 * 0x98 + unaff_RSI);
    *(uint64_t *)(unaff_RDI + 8) = uVar3;
  }
  else {
    puVar2 = (uint64_t *)FUN_180241bf0();
    puVar1 = *(uint64_t **)(unaff_RDI + 8);
    for (puVar6 = puVar2; puVar6 != puVar1; puVar6 = puVar6 + 0x13) {
      (**(code **)*puVar6)(puVar6,0);
    }
    *(uint64_t **)(unaff_RDI + 8) = puVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




