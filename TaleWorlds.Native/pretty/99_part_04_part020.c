#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part020.c - 10 个函数

// 函数: void FUN_180269f00(int64_t param_1)
void FUN_180269f00(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  *(void **)(param_1 + 8) = &processed_var_7440_ptr;
  FUN_1802708b0((uint64_t *)(param_1 + 0x10));
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_180269f50(int64_t param_1)
void FUN_180269f50(int64_t param_1)

{
  *(void **)(param_1 + 0x38) = &processed_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x40));
  if (*(int64_t *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(void **)(param_1 + 8) = &processed_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x10));
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_180269fe0(int64_t param_1)
void FUN_180269fe0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  if (*(int64_t *)(param_1 + 0x340) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puVar2 = *(uint64_t **)(param_1 + 800);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a040(int64_t *param_1,int64_t param_2,int param_3)
void FUN_18026a040(int64_t *param_1,int64_t param_2,int param_3)

{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint *puVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int32_t *puVar12;
  int32_t *puVar13;
  uint64_t uVar14;
  
  puVar13 = (int32_t *)0x0;
  iVar4 = (int)(param_1[5] - param_1[4] >> 3);
  puVar12 = puVar13;
  if (0 < iVar4) {
    do {
      lVar3 = *(int64_t *)(param_1[4] + (int64_t)puVar12 * 8);
      if (lVar3 != 0) {
        FUN_18026dbe0(lVar3);
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar3);
      }
      *(uint64_t *)(param_1[4] + (int64_t)puVar12 * 8) = 0;
      puVar12 = (int32_t *)((int64_t)puVar12 + 1);
    } while ((int64_t)puVar12 < (int64_t)iVar4);
  }
  param_1[5] = param_1[4];
  uVar1 = **(uint **)(param_2 + 8);
  puVar8 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar8;
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar8,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar8 = *(uint **)(param_2 + 8);
  }
  if (param_3 != 0) {
    uVar14 = (uint64_t)(int)*puVar8;
    *(uint **)(param_2 + 8) = puVar8 + 1;
    puVar12 = (int32_t *)param_1[9];
    puVar9 = (int32_t *)param_1[8];
    uVar7 = (int64_t)puVar12 - (int64_t)puVar9 >> 2;
    if (uVar7 < uVar14) {
      uVar10 = uVar14 - uVar7;
      if ((uint64_t)(param_1[10] - (int64_t)puVar12 >> 2) < uVar10) {
        uVar11 = uVar7 * 2;
        if (uVar7 == 0) {
          uVar11 = 1;
        }
        if (uVar11 < uVar7 + uVar10) {
          uVar11 = uVar7 + uVar10;
        }
        puVar5 = puVar13;
        if (uVar11 != 0) {
          puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 4,(char)param_1[0xb]);
          puVar9 = (int32_t *)param_1[8];
          puVar12 = (int32_t *)param_1[9];
        }
        if (puVar9 != puVar12) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar9,(int64_t)puVar12 - (int64_t)puVar9);
        }
        uVar7 = uVar10;
        puVar12 = puVar5;
        if (uVar10 != 0) {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
        }
        puVar12 = puVar5 + uVar10;
        if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        param_1[8] = (int64_t)puVar5;
        param_1[10] = (int64_t)(puVar5 + uVar11);
      }
      else {
        uVar7 = uVar10;
        if (uVar10 != 0) {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          puVar12 = (int32_t *)param_1[9];
        }
        puVar12 = puVar12 + uVar10;
      }
    }
    else {
      puVar12 = puVar9 + uVar14;
    }
    param_1[9] = (int64_t)puVar12;
    puVar12 = puVar13;
    if (3 < (int64_t)uVar14) {
      puVar9 = *(int32_t **)(param_2 + 8);
      do {
        uVar2 = *puVar9;
        lVar3 = param_1[8];
        *(int32_t **)(param_2 + 8) = puVar9 + 1;
        *(int32_t *)(lVar3 + (int64_t)puVar12 * 4) = uVar2;
        uVar2 = puVar9[1];
        lVar3 = param_1[8];
        *(int32_t **)(param_2 + 8) = puVar9 + 2;
        *(int32_t *)(lVar3 + 4 + (int64_t)puVar12 * 4) = uVar2;
        uVar2 = puVar9[2];
        lVar3 = param_1[8];
        *(int32_t **)(param_2 + 8) = puVar9 + 3;
        *(int32_t *)(lVar3 + 8 + (int64_t)puVar12 * 4) = uVar2;
        lVar3 = param_1[8];
        uVar2 = puVar9[3];
        puVar9 = puVar9 + 4;
        *(int32_t **)(param_2 + 8) = puVar9;
        *(int32_t *)(lVar3 + 0xc + (int64_t)puVar12 * 4) = uVar2;
        puVar12 = puVar12 + 1;
      } while ((int64_t)puVar12 < (int64_t)(uVar14 - 3));
    }
    if ((int64_t)puVar12 < (int64_t)uVar14) {
      puVar9 = *(int32_t **)(param_2 + 8);
      do {
        lVar3 = param_1[8];
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        *(int32_t **)(param_2 + 8) = puVar9;
        *(int32_t *)(lVar3 + (int64_t)puVar12 * 4) = uVar2;
        puVar12 = (int32_t *)((int64_t)puVar12 + 1);
      } while ((int64_t)puVar12 < (int64_t)uVar14);
    }
  }
  uVar7 = 1;
  uVar10 = (uint64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  puVar12 = (int32_t *)param_1[5];
  puVar9 = (int32_t *)param_1[4];
  uVar14 = (int64_t)puVar12 - (int64_t)puVar9 >> 3;
  if (uVar14 < uVar10) {
    uVar11 = uVar10 - uVar14;
    if ((uint64_t)(param_1[6] - (int64_t)puVar12 >> 3) < uVar11) {
      if (uVar14 != 0) {
        uVar7 = uVar14 * 2;
      }
      if (uVar7 < uVar10) {
        uVar7 = uVar10;
      }
      puVar5 = puVar12;
      puVar12 = puVar13;
      if (uVar7 != 0) {
        puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,(char)param_1[7]);
        puVar9 = (int32_t *)param_1[4];
        puVar5 = (int32_t *)param_1[5];
      }
      if (puVar9 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar12,puVar9,(int64_t)puVar5 - (int64_t)puVar9);
      }
      if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
        memset(puVar12,0,uVar11 * 8);
      }
      if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1[4] = (int64_t)puVar12;
      param_1[6] = (int64_t)(puVar12 + uVar7 * 2);
    }
    else if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
      memset(puVar12,0,uVar11 * 8);
    }
  }
  else {
    puVar12 = puVar9 + uVar10 * 2;
  }
  param_1[5] = (int64_t)puVar12;
  if (0 < (int64_t)uVar10) {
    do {
      uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x900,8,0x1a);
      uVar6 = FUN_1802699c0(uVar6,&system_data_d7b0);
      *(uint64_t *)(param_1[4] + (int64_t)puVar13 * 8) = uVar6;
      FUN_18026c3f0(*(uint64_t *)(param_1[4] + (int64_t)puVar13 * 8),param_2);
      puVar13 = (int32_t *)((int64_t)puVar13 + 1);
    } while ((int64_t)puVar13 < (int64_t)uVar10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a059(int64_t *param_1,uint64_t param_2,int param_3)
void FUN_18026a059(int64_t *param_1,uint64_t param_2,int param_3)

{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint64_t uVar6;
  uint *puVar7;
  int32_t *puVar8;
  int64_t unaff_RBP;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int32_t *puVar12;
  int32_t *unaff_R14;
  uint64_t uVar13;
  
  iVar4 = (int)(in_RAX >> 3);
  if (0 < iVar4) {
    uVar11 = (uint64_t)unaff_R14 & 0xffffffff;
    do {
      lVar3 = *(int64_t *)(param_1[4] + uVar11 * 8);
      if (lVar3 != 0) {
        FUN_18026dbe0(lVar3);
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar3);
      }
      *(int32_t **)(param_1[4] + uVar11 * 8) = unaff_R14;
      uVar11 = uVar11 + 1;
    } while ((int64_t)uVar11 < (int64_t)iVar4);
  }
  param_1[5] = param_1[4];
  uVar1 = **(uint **)(unaff_RBP + 8);
  puVar7 = *(uint **)(unaff_RBP + 8) + 1;
  *(uint **)(unaff_RBP + 8) = puVar7;
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar7,uVar1);
    *(int64_t *)(unaff_RBP + 8) = *(int64_t *)(unaff_RBP + 8) + (uint64_t)uVar1;
    puVar7 = *(uint **)(unaff_RBP + 8);
  }
  if (param_3 != 0) {
    uVar13 = (uint64_t)(int)*puVar7;
    *(uint **)(unaff_RBP + 8) = puVar7 + 1;
    puVar12 = (int32_t *)param_1[9];
    puVar8 = (int32_t *)param_1[8];
    uVar11 = (int64_t)puVar12 - (int64_t)puVar8 >> 2;
    if (uVar11 < uVar13) {
      uVar9 = uVar13 - uVar11;
      if ((uint64_t)(param_1[10] - (int64_t)puVar12 >> 2) < uVar9) {
        uVar10 = uVar11 * 2;
        if (uVar11 == 0) {
          uVar10 = 1;
        }
        if (uVar10 < uVar11 + uVar9) {
          uVar10 = uVar11 + uVar9;
        }
        puVar5 = unaff_R14;
        if (uVar10 != 0) {
          puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 4,(char)param_1[0xb]);
          puVar8 = (int32_t *)param_1[8];
          puVar12 = (int32_t *)param_1[9];
        }
        if (puVar8 != puVar12) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar8,(int64_t)puVar12 - (int64_t)puVar8);
        }
        uVar11 = uVar9;
        puVar12 = puVar5;
        if (uVar9 != 0) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
        }
        puVar12 = puVar5 + uVar9;
        if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        param_1[8] = (int64_t)puVar5;
        param_1[10] = (int64_t)(puVar5 + uVar10);
      }
      else {
        uVar11 = uVar9;
        if (uVar9 != 0) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          puVar12 = (int32_t *)param_1[9];
        }
        puVar12 = puVar12 + uVar9;
      }
    }
    else {
      puVar12 = puVar8 + uVar13;
    }
    param_1[9] = (int64_t)puVar12;
    puVar12 = unaff_R14;
    if (3 < (int64_t)uVar13) {
      puVar8 = *(int32_t **)(unaff_RBP + 8);
      do {
        uVar2 = *puVar8;
        lVar3 = param_1[8];
        *(int32_t **)(unaff_RBP + 8) = puVar8 + 1;
        *(int32_t *)(lVar3 + (int64_t)puVar12 * 4) = uVar2;
        uVar2 = puVar8[1];
        lVar3 = param_1[8];
        *(int32_t **)(unaff_RBP + 8) = puVar8 + 2;
        *(int32_t *)(lVar3 + 4 + (int64_t)puVar12 * 4) = uVar2;
        uVar2 = puVar8[2];
        lVar3 = param_1[8];
        *(int32_t **)(unaff_RBP + 8) = puVar8 + 3;
        *(int32_t *)(lVar3 + 8 + (int64_t)puVar12 * 4) = uVar2;
        lVar3 = param_1[8];
        uVar2 = puVar8[3];
        puVar8 = puVar8 + 4;
        *(int32_t **)(unaff_RBP + 8) = puVar8;
        *(int32_t *)(lVar3 + 0xc + (int64_t)puVar12 * 4) = uVar2;
        puVar12 = puVar12 + 1;
      } while ((int64_t)puVar12 < (int64_t)(uVar13 - 3));
    }
    if ((int64_t)puVar12 < (int64_t)uVar13) {
      puVar8 = *(int32_t **)(unaff_RBP + 8);
      do {
        lVar3 = param_1[8];
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        *(int32_t **)(unaff_RBP + 8) = puVar8;
        *(int32_t *)(lVar3 + (int64_t)puVar12 * 4) = uVar2;
        puVar12 = (int32_t *)((int64_t)puVar12 + 1);
      } while ((int64_t)puVar12 < (int64_t)uVar13);
    }
  }
  uVar11 = 1;
  uVar9 = (uint64_t)**(int **)(unaff_RBP + 8);
  *(int **)(unaff_RBP + 8) = *(int **)(unaff_RBP + 8) + 1;
  puVar12 = (int32_t *)param_1[5];
  puVar8 = (int32_t *)param_1[4];
  uVar13 = (int64_t)puVar12 - (int64_t)puVar8 >> 3;
  if (uVar13 < uVar9) {
    uVar10 = uVar9 - uVar13;
    if ((uint64_t)(param_1[6] - (int64_t)puVar12 >> 3) < uVar10) {
      if (uVar13 != 0) {
        uVar11 = uVar13 * 2;
      }
      if (uVar11 < uVar9) {
        uVar11 = uVar9;
      }
      puVar5 = puVar12;
      puVar12 = unaff_R14;
      if (uVar11 != 0) {
        puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 8,(char)param_1[7]);
        puVar8 = (int32_t *)param_1[4];
        puVar5 = (int32_t *)param_1[5];
      }
      if (puVar8 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar12,puVar8,(int64_t)puVar5 - (int64_t)puVar8);
      }
      if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
        memset(puVar12,0,uVar10 * 8);
      }
      if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1[4] = (int64_t)puVar12;
      param_1[6] = (int64_t)(puVar12 + uVar11 * 2);
    }
    else if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
      memset(puVar12,0,uVar10 * 8);
    }
  }
  else {
    puVar12 = puVar8 + uVar9 * 2;
  }
  param_1[5] = (int64_t)puVar12;
  if (0 < (int64_t)uVar9) {
    do {
      uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x900,8,0x1a);
      uVar6 = FUN_1802699c0(uVar6,&system_data_d7b0);
      *(uint64_t *)(param_1[4] + (int64_t)unaff_R14 * 8) = uVar6;
      FUN_18026c3f0(*(uint64_t *)(param_1[4] + (int64_t)unaff_R14 * 8));
      unaff_R14 = (int32_t *)((int64_t)unaff_R14 + 1);
    } while ((int64_t)unaff_R14 < (int64_t)uVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a3a0(void)
void FUN_18026a3a0(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  do {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x900,8,0x1a);
    uVar1 = FUN_1802699c0(uVar1,&system_data_d7b0);
    *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x20) + unaff_R14 * 8) = uVar1;
    FUN_18026c3f0(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x20) + unaff_R14 * 8));
    unaff_R14 = unaff_R14 + 1;
  } while (unaff_R14 < unaff_R15);
  return;
}






// 函数: void FUN_18026a400(int64_t param_1)
void FUN_18026a400(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t alStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  lVar1 = *(int64_t *)(param_1 + 0xb0);
  plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x88);
  pcStack_20 = (code *)&processed_var_9616_ptr;
  puStack_18 = &system_pattern2_ptr;
  alStack_30[0] = lVar1;
  cVar3 = (**(code **)(*plVar2 + 0x60))
                    (plVar2,&system_data_c8c8,*(int64_t *)(lVar1 + 0x10) + 0xc,0,alStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(alStack_30,0,0);
  }
  if (cVar3 != '\0') {
    FUN_18026a670(lVar1,lVar1 + 0xa8);
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a4b0(int64_t param_1)
void FUN_18026a4b0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  
  if (*(int64_t *)(param_1 + 0xb0) == 0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x108,8,3,0,0xfffffffffffffffe);
    plVar2 = (int64_t *)FUN_1802b6690(uVar1);
    plStackX_8 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    SystemCore_ConfigurationHandler0(plVar2 + 9,param_1 + 0x68);
    plVar2[2] = param_1;
    *(int32_t *)(plVar2 + 0xe) = 1;
    plStackX_8 = (int64_t *)0x0;
    pplStackX_10 = *(int64_t ***)(param_1 + 0xb0);
    *(int64_t **)(param_1 + 0xb0) = plVar2;
    if (pplStackX_10 != (int64_t **)0x0) {
      (**(code **)((int64_t)*pplStackX_10 + 0x38))();
    }
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(int64_t **)(param_1 + 0xb0);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800c26d0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a5b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18026a5b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t **pplVar2;
  int64_t **pplVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plStackX_8 = *(int64_t **)(param_1 + 0xb0);
  if (plStackX_8 != (int64_t *)0x0) {
    pplStackX_10 = &plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    lVar1 = system_system_data_config;
    pplStackX_18 = &plStackX_8;
    pplVar3 = (int64_t **)(system_system_data_config + 0x20);
    FUN_180058080(pplVar3,&pplStackX_10,plStackX_8 + 9,param_4,uVar4);
    pplVar2 = pplStackX_10;
    if (pplStackX_10 != pplVar3) {
      *(int64_t *)(lVar1 + 0x40) = *(int64_t *)(lVar1 + 0x40) + -1;
      func_0x00018066bd70(pplStackX_10);
      FUN_18066ba00(pplVar2,pplVar3);
      FUN_1800c2c20();
      *(int32_t *)(plStackX_8 + 0xe) = 0;
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026a670(int64_t param_1,int64_t param_2)
void FUN_18026a670(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  int8_t uVar16;
  int64_t *plVar17;
  int64_t lStack_90;
  int64_t *plStack_80;
  int64_t *plStack_78;
  
  plStack_80 = (int64_t *)0x0;
  plStack_78 = (int64_t *)0x0;
  plVar12 = (int64_t *)0x0;
  plVar10 = (int64_t *)(param_1 + 0x88);
  lVar11 = *(int64_t *)(param_1 + 0x90);
  lVar8 = *plVar10;
  if (lVar8 != lVar11) {
    do {
      FUN_180057830();
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar11);
    lVar8 = *plVar10;
  }
  *(int64_t *)(param_1 + 0x90) = lVar8;
  SystemCore_ConfigurationHandler0(param_1 + 0x18,param_2);
  uVar16 = 0;
  iVar1 = (int)(*(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20) >> 3);
  lVar11 = (int64_t)iVar1;
  if (0 < iVar1) {
    lVar8 = 0;
    plStack_78 = (int64_t *)0x0;
    uVar16 = 0;
    do {
      uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1078,8,0x1a);
      plVar3 = (int64_t *)FUN_1802b4570(uVar2);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      FUN_18026ad00(plVar3,*(uint64_t *)(*(int64_t *)(param_2 + 0x20) + lVar8 * 8));
      if (plStack_78 < plVar12) {
        plVar6 = plStack_78 + 1;
        *plStack_78 = (int64_t)plVar3;
        plStack_78 = plVar6;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
      }
      else {
        lVar4 = (int64_t)plStack_78 - (int64_t)plStack_80 >> 3;
        plVar12 = plStack_80;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18026a7db:
          plVar6 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8);
          plVar9 = plVar6;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18026a7db;
          plVar6 = (int64_t *)0x0;
          plVar9 = plVar6;
        }
        for (; plVar12 != plStack_78; plVar12 = plVar12 + 1) {
          *plVar6 = *plVar12;
          *plVar12 = 0;
          plVar6 = plVar6 + 1;
        }
        *plVar6 = (int64_t)plVar3;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        for (plVar12 = plStack_80; plVar12 != plStack_78; plVar12 = plVar12 + 1) {
          if ((int64_t *)*plVar12 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar12 + 0x38))();
          }
        }
        if (plStack_80 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plStack_80);
        }
        plVar12 = plVar9 + lVar4;
        plStack_80 = plVar9;
        plStack_78 = plVar6 + 1;
      }
      lVar4 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + lVar8 * 8);
      if (((*(byte *)(lVar4 + 0x60) & 2) == 0) && (*(float *)(lVar4 + 0x6c) == 0.0)) {
        uVar16 = 1;
      }
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar11);
  }
  *(int8_t *)(param_1 + 0x3c) = uVar16;
  uVar13 = *(int64_t *)(param_2 + 0x48) - *(int64_t *)(param_2 + 0x40) >> 2;
  lVar8 = *(int64_t *)(param_1 + 0x90);
  lVar4 = *plVar10;
  uVar7 = (lVar8 - lVar4) / 0x28;
  if (uVar7 < uVar13) {
    FUN_18026dfc0(plVar10,uVar13 - uVar7);
  }
  else {
    lVar5 = lVar4 + uVar13 * 0x28;
    if (lVar5 != lVar8) {
      do {
        FUN_180057830();
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar8);
      lVar4 = *plVar10;
    }
    *(uint64_t *)(param_1 + 0x90) = lVar4 + uVar13 * 0x28;
  }
  uVar7 = 0;
  uVar13 = uVar7;
  uVar15 = uVar7;
  if (*(int64_t *)(param_2 + 0x48) - *(int64_t *)(param_2 + 0x40) >> 2 != 0) {
    do {
      *(int32_t *)(uVar7 + *plVar10) = *(int32_t *)(uVar13 + *(int64_t *)(param_2 + 0x40));
      uVar14 = (int)uVar15 + 1;
      uVar7 = uVar7 + 0x28;
      uVar13 = uVar13 + 4;
      uVar15 = (uint64_t)uVar14;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)(*(int64_t *)(param_2 + 0x48) - *(int64_t *)(param_2 + 0x40) >> 2));
  }
  plVar12 = plStack_80;
  lStack_90 = lVar11;
  if (0 < lVar11) {
    do {
      plVar3 = (int64_t *)0x0;
      lVar8 = *(int64_t *)
               ((*(int64_t *)(param_2 + 0x20) - (int64_t)plStack_80) + (int64_t)plVar12);
      plVar6 = plVar3;
      if ((*(int64_t *)(lVar8 + 0x10) == 0) && (*(int64_t *)(lVar8 + 0x18) == 0)) {
        lVar4 = (int64_t)*(int *)(lVar8 + 0x78);
        lVar8 = *plVar10;
        plVar6 = *(int64_t **)(lVar8 + 0x10 + lVar4 * 0x28);
        if (plVar6 < *(int64_t **)(lVar8 + 0x18 + lVar4 * 0x28)) {
          *(int64_t **)(lVar8 + 0x10 + lVar4 * 0x28) = plVar6 + 1;
LAB_18026aa3d:
          plVar3 = (int64_t *)*plVar12;
          *plVar6 = (int64_t)plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))();
          }
        }
        else {
          plVar9 = *(int64_t **)(lVar8 + 8 + lVar4 * 0x28);
          lVar5 = (int64_t)plVar6 - (int64_t)plVar9 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_18026aa80:
            plVar3 = (int64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,
                                   *(int8_t *)(lVar8 + 0x20 + lVar4 * 0x28));
            plVar6 = *(int64_t **)(lVar8 + 0x10 + lVar4 * 0x28);
            plVar9 = *(int64_t **)(lVar8 + 8 + lVar4 * 0x28);
            plVar17 = plVar3;
          }
          else {
            lVar5 = lVar5 * 2;
            plVar17 = plVar3;
            if (lVar5 != 0) goto LAB_18026aa80;
          }
          for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
            *plVar3 = *plVar9;
            *plVar9 = 0;
            plVar3 = plVar3 + 1;
          }
          plVar6 = (int64_t *)*plVar12;
          *plVar3 = (int64_t)plVar6;
          if (plVar6 != (int64_t *)0x0) {
            (**(code **)(*plVar6 + 0x28))();
          }
          plVar6 = *(int64_t **)(lVar8 + 0x10 + lVar4 * 0x28);
          plVar9 = *(int64_t **)(lVar8 + 8 + lVar4 * 0x28);
          if (plVar9 != plVar6) {
            do {
              if ((int64_t *)*plVar9 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar9 + 0x38))();
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar6);
            plVar9 = *(int64_t **)(lVar8 + 8 + lVar4 * 0x28);
          }
          if (plVar9 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plVar9);
          }
          *(int64_t **)(lVar8 + 8 + lVar4 * 0x28) = plVar17;
          *(int64_t **)(lVar8 + 0x10 + lVar4 * 0x28) = plVar3 + 1;
          *(int64_t **)(lVar8 + 0x18 + lVar4 * 0x28) = plVar17 + lVar5;
        }
      }
      else {
        while ((lVar4 = plStack_80[(int64_t)plVar6],
               *(int64_t *)(lVar8 + 0x10) != *(int64_t *)(lVar4 + 0x34) ||
               (*(int64_t *)(lVar8 + 0x18) != *(int64_t *)(lVar4 + 0x3c)))) {
          plVar6 = (int64_t *)((int64_t)plVar6 + 1);
          if (lVar11 <= (int64_t)plVar6) goto LAB_18026ac94;
        }
        plVar6 = *(int64_t **)(lVar4 + 0xf58);
        if (plVar6 < *(int64_t **)(lVar4 + 0xf60)) {
          *(int64_t **)(lVar4 + 0xf58) = plVar6 + 1;
          goto LAB_18026aa3d;
        }
        plVar9 = *(int64_t **)(lVar4 + 0xf50);
        lVar8 = (int64_t)plVar6 - (int64_t)plVar9 >> 3;
        if (lVar8 == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = lVar8 * 2;
          plVar17 = plVar3;
          if (lVar8 == 0) goto joined_r0x00018026abe8;
        }
        plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(lVar4 + 0xf68));
        plVar6 = *(int64_t **)(lVar4 + 0xf58);
        plVar9 = *(int64_t **)(lVar4 + 0xf50);
        plVar17 = plVar3;
joined_r0x00018026abe8:
        for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
          *plVar3 = *plVar9;
          *plVar9 = 0;
          plVar3 = plVar3 + 1;
        }
        plVar6 = (int64_t *)*plVar12;
        *plVar3 = (int64_t)plVar6;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x28))();
        }
        plVar6 = *(int64_t **)(lVar4 + 0xf58);
        plVar9 = *(int64_t **)(lVar4 + 0xf50);
        if (plVar9 != plVar6) {
          do {
            if ((int64_t *)*plVar9 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar9 + 0x38))();
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar6);
          plVar9 = *(int64_t **)(lVar4 + 0xf50);
        }
        if (plVar9 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar9);
        }
        *(int64_t **)(lVar4 + 0xf50) = plVar17;
        *(int64_t **)(lVar4 + 0xf58) = plVar3 + 1;
        *(int64_t **)(lVar4 + 0xf60) = plVar17 + lVar8;
      }
LAB_18026ac94:
      lStack_90 = lStack_90 + -1;
      plVar12 = plVar12 + 1;
    } while (lStack_90 != 0);
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  for (plVar10 = plStack_80; plVar10 != plStack_78; plVar10 = plVar10 + 1) {
    if ((int64_t *)*plVar10 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar10 + 0x38))();
    }
  }
  if (plStack_80 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plStack_80);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018026affb)
// WARNING: Removing unreachable block (ram,0x00018026b00b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




