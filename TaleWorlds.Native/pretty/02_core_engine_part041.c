#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part041.c - 24 个函数

// 函数: void FUN_180080060(int64_t *param_1)
void FUN_180080060(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  void **ppuVar3;
  int64_t *plVar4;
  int8_t auStack_248 [32];
  void ***pppuStack_228;
  void **ppuStack_220;
  int64_t *plStack_218;
  uint64_t uStack_210;
  void **ppuStack_208;
  int64_t *plStack_200;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [128];
  int32_t uStack_160;
  int64_t lStack_158;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  int64_t lStack_78;
  uint64_t uStack_38;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  LOCK();
  plVar4 = param_1 + 2;
  lVar1 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    while ((*(char *)((int64_t)param_1 + 0x15) == '\x01' ||
           (*(char *)((int64_t)param_1 + 0x15) == '\x02'))) {
      Sleep(0);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if ((*(uint *)(*(int64_t *)(lVar1 + 0x20) + 0x100) >> 6 & 1) != 0) goto LAB_1800802aa;
      LOCK();
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      UNLOCK();
      ppuStack_220 = &puStack_1f8;
      puStack_1f8 = &memory_allocator_3432_ptr;
      puStack_1f0 = auStack_1e0;
      uStack_1e8 = 0;
      auStack_1e0[0] = 0;
      uStack_160 = 0x24;
      lStack_158 = lVar1;
      uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      ppuVar3 = (void **)FUN_18005ce30(uVar2,&puStack_1f8);
      ppuStack_208 = ppuVar3;
      if (ppuVar3 != (void **)0x0) {
        (**(code **)(*ppuVar3 + 0x28))(ppuVar3);
      }
      uVar2 = system_context_ptr;
      pppuStack_228 = &ppuStack_220;
      ppuStack_220 = ppuVar3;
      if (ppuVar3 != (void **)0x0) {
        (**(code **)(*ppuVar3 + 0x28))(ppuVar3);
      }
      FUN_18005e370(uVar2,&ppuStack_220);
      if (ppuVar3 != (void **)0x0) {
        (**(code **)(*ppuVar3 + 0x38))(ppuVar3);
      }
      puStack_1f8 = &system_state_ptr;
      lStack_78 = param_1[1];
      LOCK();
      *(int *)(lStack_78 + 0x10) = *(int *)(lStack_78 + 0x10) + 1;
      UNLOCK();
      pppuStack_228 = (void ***)&puStack_118;
      puStack_118 = &memory_allocator_3432_ptr;
      puStack_110 = auStack_100;
      uStack_108 = 0;
      auStack_100[0] = 0;
      uStack_80 = 0x26;
      uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      plVar4 = (int64_t *)FUN_18005ce30(uVar2,&puStack_118);
      plStack_200 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      uVar2 = system_context_ptr;
      pppuStack_228 = (void ***)&plStack_218;
      plStack_218 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      FUN_18005e370(uVar2,&plStack_218);
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      pppuStack_228 = (void ***)&puStack_118;
      puStack_118 = &system_state_ptr;
    }
    LOCK();
    *(int8_t *)((int64_t)param_1 + 0x15) = 0;
    UNLOCK();
  }
LAB_1800802aa:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_248);
}





// 函数: void FUN_1800802e0(int64_t param_1,uint param_2,uint64_t *param_3,uint param_4)
void FUN_1800802e0(int64_t param_1,uint param_2,uint64_t *param_3,uint param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  
  uVar16 = (uint64_t)param_2;
  uVar13 = param_2 >> 0xd;
  if (uVar13 == param_2 + param_4 >> 0xd) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(param_1 + 8 + (uint64_t)uVar13 * 8) +
           (uint64_t)(param_2 + uVar13 * -0x2000) * 0x40,param_3,(uint64_t)param_4 << 6);
    return;
  }
  if (param_4 != 0) {
    uVar14 = (uint64_t)param_4;
    do {
      uVar4 = *param_3;
      uVar5 = param_3[1];
      iVar15 = (int)uVar16;
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar3 = uVar16 >> 0xd;
      uVar16 = (uint64_t)(iVar15 + 1);
      uVar8 = param_3[4];
      uVar9 = param_3[5];
      uVar10 = param_3[6];
      uVar11 = param_3[7];
      lVar2 = *(int64_t *)(param_1 + 8 + uVar3 * 8);
      param_3 = param_3 + 8;
      lVar12 = (uint64_t)(uint)(iVar15 + (int)uVar3 * -0x2000) * 0x40;
      *(uint64_t *)(lVar2 + lVar12) = uVar4;
      ((uint64_t *)(lVar2 + lVar12))[1] = uVar5;
      puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar12);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar12);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (uint64_t *)(lVar2 + 0x30 + lVar12);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180080380(uint *param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  char *pcVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint *puVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (uint64_t)(uVar1 >> 0xd);
  uVar6 = (uint64_t)(param_2 + -1 + uVar1 >> 0xd);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((int64_t)param_1 + uVar5 + 0x108);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (uint64_t)(uVar1 >> 0xd) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(int64_t *)puVar8 == 0) {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80000,0x25);
        LOCK();
        bVar9 = *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(int8_t *)((int64_t)iVar4 + 0x108 + (int64_t)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (uint64_t)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1800803c8(int64_t param_1)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t lVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int iVar4;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t *plVar6;
  int32_t unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x108 + unaff_RSI);
  lVar5 = (unaff_RDI - unaff_RSI) + 1;
  plVar6 = (int64_t *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RSI;
    if (*plVar6 == 0) {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80000,0x25);
      plVar1 = (int64_t *)(unaff_RBP + 8 + (int64_t)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(int8_t *)((int64_t)iVar4 + 0x108 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (uint64_t)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R15D;
}



int32_t FUN_180080460(void)

{
  int32_t unaff_R15D;
  
  return unaff_R15D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180080480(uint *param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  char *pcVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar7 = (uint64_t)(uVar1 >> 0xb);
  uVar4 = (uint64_t)(param_2 + -1 + uVar1 >> 0xb);
  if (uVar7 <= uVar4) {
    pcVar3 = (char *)((int64_t)param_1 + uVar7 + 0x408);
    lVar5 = (uVar4 - uVar7) + 1;
    puVar10 = param_1 + (uint64_t)(uVar1 >> 0xb) * 2 + 2;
    do {
      iVar6 = (int)uVar7;
      if (*(int64_t *)puVar10 == 0) {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4000,0x25);
        LOCK();
        bVar11 = *(int64_t *)(param_1 + (int64_t)iVar6 * 2 + 2) == 0;
        if (bVar11) {
          *(int64_t *)(param_1 + (int64_t)iVar6 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar11) {
          uVar8 = iVar6 * 0x800;
          iVar9 = uVar8 + 0x800;
          for (; (int)uVar8 < iVar9; uVar8 = uVar8 + 1) {
            *(uint64_t *)
             (*(int64_t *)(param_1 + (uint64_t)(uVar8 >> 0xb) * 2 + 2) +
             (int64_t)(int)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8) = 0;
          }
          LOCK();
          *(int8_t *)((int64_t)iVar6 + 0x408 + (int64_t)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar7 = (uint64_t)(iVar6 + 1);
      puVar10 = puVar10 + 2;
      pcVar3 = pcVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1800804c8(int64_t param_1)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t lVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int64_t lVar4;
  int iVar5;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int32_t unaff_R15D;
  bool bVar9;
  
  pcVar3 = (char *)(param_1 + 0x408 + unaff_RSI);
  lVar4 = (unaff_RBP - unaff_RSI) + 1;
  plVar8 = (int64_t *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar5 = (int)unaff_RSI;
    if (*plVar8 == 0) {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4000,0x25);
      plVar1 = (int64_t *)(unaff_RDI + 8 + (int64_t)iVar5 * 8);
      LOCK();
      bVar9 = *plVar1 == 0;
      if (bVar9) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar9) {
        uVar6 = iVar5 * 0x800;
        iVar7 = uVar6 + 0x800;
        for (; (int)uVar6 < iVar7; uVar6 = uVar6 + 1) {
          *(uint64_t *)
           (*(int64_t *)(unaff_RDI + 8 + (uint64_t)(uVar6 >> 0xb) * 8) +
           (int64_t)(int)(uVar6 + (uVar6 >> 0xb) * -0x800) * 8) = 0;
        }
        LOCK();
        *(int8_t *)((int64_t)iVar5 + 0x408 + unaff_RDI) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (uint64_t)(iVar5 + 1);
    plVar8 = plVar8 + 1;
    pcVar3 = pcVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return unaff_R15D;
}



int32_t FUN_1800805aa(void)

{
  int32_t unaff_R15D;
  
  return unaff_R15D;
}





// 函数: void FUN_1800805d0(void)
void FUN_1800805d0(void)

{
  FUN_180080870();
  return;
}





// 函数: void FUN_1800805f0(void)
void FUN_1800805f0(void)

{
  FUN_1800809a0();
  return;
}





// 函数: void FUN_180080610(uint64_t *param_1)
void FUN_180080610(uint64_t *param_1)

{
  FUN_180085530(*param_1);
  *param_1 = 0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  return;
}





// 函数: void FUN_180080650(int *param_1,int64_t param_2)
void FUN_180080650(int *param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  
  *(int8_t *)(param_1 + 8) = *(int8_t *)(param_2 + 0x1a);
  *param_1 = **(int **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar2 < iVar1) {
    if (iVar1 == 0) {
      if (iVar2 < 2) {
        param_1[1] = 8;
      }
      else {
        param_1[1] = (iVar2 >> 1) + iVar2;
      }
    }
    else {
      param_1[1] = iVar1;
    }
    FUN_1800846d0(param_1);
  }
  *param_1 = iVar1;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 2),*(uint64_t *)(param_2 + 8),(int64_t)(iVar1 << 4));
}





// 函数: void FUN_1800806e0(int *param_1,int64_t *param_2)
void FUN_1800806e0(int *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int *piVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  iVar5 = *param_1;
  lVar6 = param_2[2];
  piVar4 = (int *)param_2[1];
  lVar2 = *param_2;
  uVar7 = (int64_t)iVar5 * 0x10 + 4;
  if ((uint64_t)((lVar2 - (int64_t)piVar4) + lVar6) <= uVar7) {
    System_BufferManager(param_2,(int64_t)piVar4 + (uVar7 - lVar2));
    lVar6 = param_2[2];
    piVar4 = (int *)param_2[1];
    lVar2 = *param_2;
    iVar5 = *param_1;
  }
  if ((uint64_t)((lVar2 - (int64_t)piVar4) + lVar6) < 5) {
    System_BufferManager(param_2,(int64_t)piVar4 + (4 - lVar2));
    piVar4 = (int *)param_2[1];
  }
  *piVar4 = iVar5;
  iVar5 = 0;
  puVar3 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar3;
  if (0 < *param_1) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(param_1 + 2);
      if ((uint64_t)((param_2[2] - (int64_t)puVar3) + *param_2) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar3 + (0x10 - *param_2));
        puVar3 = (int32_t *)param_2[1];
      }
      iVar5 = iVar5 + 1;
      *puVar3 = *(int32_t *)(lVar6 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(lVar6 + 4 + lVar2);
      param_2[1] = param_2[1] + 4;
      lVar1 = lVar6 + 8;
      lVar6 = lVar6 + 0x10;
      *(int32_t *)param_2[1] = *(int32_t *)(lVar1 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      param_2[1] = param_2[1] + 4;
      puVar3 = (int32_t *)param_2[1];
    } while (iVar5 < *param_1);
  }
  return;
}





// 函数: void FUN_180080779(int32_t *param_1)
void FUN_180080779(int32_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  uint64_t uVar3;
  int *unaff_R14;
  
  uVar3 = (uint64_t)unaff_EBP;
  do {
    lVar2 = *(int64_t *)(unaff_R14 + 2);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)param_1) + *unaff_RBX) < 0x11) {
      System_BufferManager();
      param_1 = (int32_t *)unaff_RBX[1];
    }
    unaff_EBP = unaff_EBP + 1;
    *param_1 = *(int32_t *)(uVar3 + lVar2);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar3 + 4 + lVar2);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    lVar1 = uVar3 + 8;
    uVar3 = uVar3 + 0x10;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar1 + lVar2);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = 0x3f800000;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    param_1 = (int32_t *)unaff_RBX[1];
  } while ((int)unaff_EBP < *unaff_R14);
  return;
}





// 函数: void FUN_1800807f5(void)
void FUN_1800807f5(void)

{
  return;
}



int64_t * FUN_180080810(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  param_2 = (int64_t *)*param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (int64_t *)*param_1;
  *param_1 = (int64_t)param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080870(int64_t *param_1)
void FUN_180080870(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  
  *(int16_t *)(param_1 + 1) = 0;
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != (int64_t *)0x0) {
    plStackX_8 = plVar2;
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar2);
  }
  *param_1 = 0;
  lVar3 = core_system_data_config;
  if (*(int *)((int64_t)param_1 + 0xc) != -1) {
    lVar4 = (int64_t)(int)*(uint *)((int64_t)param_1 + 0xc);
    plStackX_8 = (int64_t *)(uint64_t)*(uint *)((int64_t)param_1 + 0xc);
    lVar1 = core_system_data_config + 0x2b8;
    AcquireSRWLockExclusive(lVar1);
    *(int8_t *)(lVar3 + 2) = 1;
    **(int8_t **)(*(int64_t *)(lVar3 + 0x160) + lVar4 * 8) = 0;
    *(uint64_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x160) + lVar4 * 8) + 0x20) = 0;
    lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x160) + lVar4 * 8);
    plStackX_10 = *(int64_t **)(lVar4 + 0x10);
    *(uint64_t *)(lVar4 + 0x10) = 0;
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    plStackX_18 = *(int64_t **)(lVar4 + 8);
    *(uint64_t *)(lVar4 + 8) = 0;
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    FUN_1800571e0(lVar3 + 0x100,&plStackX_8);
    *(int32_t *)((int64_t)param_1 + 0xc) = 0xffffffff;
    ReleaseSRWLockExclusive(lVar1);
    *(int32_t *)((int64_t)param_1 + 0xc) = 0xffffffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800809a0(int64_t *param_1)
void FUN_1800809a0(int64_t *param_1)

{
  int8_t *puVar1;
  int8_t *puVar2;
  int64_t lVar3;
  int aiStackX_8 [2];
  
  *(int16_t *)(param_1 + 1) = 0;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_180083f10(lVar3);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  *param_1 = 0;
  puVar2 = core_system_data_config;
  if (*(int *)((int64_t)param_1 + 0xc) != -1) {
    aiStackX_8[0] = *(int *)((int64_t)param_1 + 0xc);
    lVar3 = (int64_t)aiStackX_8[0];
    puVar1 = core_system_data_config + 0x2b8;
    AcquireSRWLockExclusive(puVar1);
    *puVar2 = 1;
    **(int8_t **)(*(int64_t *)(puVar2 + 0x140) + lVar3 * 8) = 0;
    *(uint64_t *)(*(int64_t *)(*(int64_t *)(puVar2 + 0x140) + lVar3 * 8) + 0x1a8) = 0;
    FUN_1800f8a50(*(int64_t *)(*(int64_t *)(puVar2 + 0x140) + lVar3 * 8) + 8);
    FUN_1800571e0(puVar2 + 0xc0,aiStackX_8);
    *(int32_t *)((int64_t)param_1 + 0xc) = 0xffffffff;
    ReleaseSRWLockExclusive(puVar1);
    *(int32_t *)((int64_t)param_1 + 0xc) = 0xffffffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080aa0(int64_t *param_1,uint64_t param_2)
void FUN_180080aa0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  lVar1 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar1 - lVar3 >> 4;
  if (uVar2 < param_2) {
    param_2 = param_2 - uVar2;
    if ((uint64_t)(param_1[2] - lVar1 >> 4) < param_2) {
      uVar5 = uVar2 * 2;
      if (uVar2 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar2 + param_2) {
        uVar5 = uVar2 + param_2;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 << 4,(char)param_1[3]);
        lVar3 = *param_1;
        lVar4 = param_1[1];
      }
      if (lVar3 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar3,lVar4 - lVar3);
      }
      if (param_2 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar1,0,param_2 * 0x10);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = lVar1;
      param_1[2] = uVar5 * 0x10 + lVar1;
    }
    else if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,param_2 * 0x10);
    }
  }
  else {
    lVar1 = param_2 * 0x10 + lVar3;
  }
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080ae6(int64_t param_1,int64_t param_2)
void FUN_180080ae6(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (uint64_t)(param_1 + unaff_RBX)) {
    uVar2 = param_1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2 << 4,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
    unaff_RBP = unaff_RDI[1];
  }
  if (param_2 != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBP - param_2);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX << 4);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = uVar2 * 0x10 + lVar1;
  unaff_RDI[1] = lVar1;
  return;
}





// 函数: void FUN_180080b98(void)
void FUN_180080b98(void)

{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_RBP;
  return;
}





// 函数: void FUN_180080be0(int64_t param_1)
void FUN_180080be0(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_180080c10(int *param_1,uint64_t *param_2)
void FUN_180080c10(int *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  
  iVar3 = *param_1;
  iVar2 = param_1[1];
  if (iVar2 <= iVar3) {
    if (iVar2 < 2) {
      iVar2 = 8;
    }
    else {
      iVar2 = (iVar2 >> 1) + iVar2;
    }
    param_1[1] = iVar2;
    FUN_180086010(param_1);
    iVar3 = *param_1;
  }
  uVar1 = param_2[1];
  puVar4 = (uint64_t *)((int64_t)iVar3 * 0x5c + *(int64_t *)(param_1 + 2));
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  uVar1 = param_2[3];
  puVar4[2] = param_2[2];
  puVar4[3] = uVar1;
  uVar1 = param_2[5];
  puVar4[4] = param_2[4];
  puVar4[5] = uVar1;
  uVar1 = param_2[7];
  puVar4[6] = param_2[6];
  puVar4[7] = uVar1;
  uVar1 = param_2[9];
  puVar4[8] = param_2[8];
  puVar4[9] = uVar1;
  puVar4[10] = param_2[10];
  *(int32_t *)(puVar4 + 0xb) = *(int32_t *)(param_2 + 0xb);
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080ca0(int64_t *param_1,uint64_t param_2)
void FUN_180080ca0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  uVar2 = lVar5 - lVar6 >> 2;
  if (param_2 <= uVar2) {
    param_1[1] = lVar6 + param_2 * 4;
    return;
  }
  uVar4 = param_2 - uVar2;
  if (uVar4 <= (uint64_t)(param_1[2] - lVar5 >> 2)) {
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,uVar4 * 4);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar3 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 4,(char)param_1[3]);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar6 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar6,lVar5 - lVar6);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar4 * 4);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar3 * 4;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080ccb(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180080ccb(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = param_2 - param_1;
  if (uVar3 <= (uint64_t)(in_RAX - unaff_RDI >> 2)) {
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 4,(char)unaff_RBX[3]);
    param_4 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_4,unaff_RDI - param_4);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3 * 4);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2 * 4;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void FUN_180080da6(void)
void FUN_180080da6(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RBX + 8) = unaff_RDI;
  return;
}





// 函数: void FUN_180080dd9(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180080dd9(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = param_4 + param_2 * 4;
  return;
}





// 函数: void FUN_180080df0(int64_t *param_1)
void FUN_180080df0(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180080e90(uint *param_1,int *param_2,int64_t *param_3)
void FUN_180080e90(uint *param_1,int *param_2,int64_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  bool bVar8;
  
  LOCK();
  uVar2 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  uVar3 = uVar2 >> 0xb;
  uVar7 = (uint64_t)uVar3;
  if (*(int64_t *)(param_1 + (uint64_t)uVar3 * 2 + 2) == 0) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
    LOCK();
    bVar8 = *(int64_t *)(param_1 + uVar7 * 2 + 2) == 0;
    if (bVar8) {
      *(int64_t *)(param_1 + uVar7 * 2 + 2) = lVar4;
    }
    UNLOCK();
    if (bVar8) {
      iVar5 = uVar3 * 0x800;
      iVar1 = iVar5 + 0x800;
      for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      }
      LOCK();
      *(int8_t *)(uVar7 + 0x108 + (int64_t)param_1) = 0;
      UNLOCK();
    }
    else {
      if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      do {
      } while (*(char *)(uVar7 + 0x108 + (int64_t)param_1) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar7 + 0x108 + (int64_t)param_1) != '\0');
  }
  lVar4 = *param_3;
  plVar6 = (int64_t *)
           (*(int64_t *)(param_1 + uVar7 * 2 + 2) + (uint64_t)(uVar2 + uVar3 * -0x800) * 0x10);
  *plVar6 = (int64_t)*param_2;
  plVar6[1] = lVar4;
  return;
}





// 函数: void FUN_180080fa0(int64_t *param_1)
void FUN_180080fa0(int64_t *param_1)

{
  int64_t *plVar1;
  
  for (plVar1 = (int64_t *)*param_1; plVar1 != (int64_t *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180081010(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180081010(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  
  plVar1 = (int64_t *)param_1[1];
  lVar3 = *param_1;
  uVar2 = (int64_t)plVar1 - lVar3 >> 5;
  if (uVar2 < param_2) {
    FUN_180082290(param_1,param_2 - uVar2,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    plVar4 = (int64_t *)(param_2 * 0x20 + lVar3);
    if (plVar4 != plVar1) {
      do {
        if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar4 = plVar4 + 4;
      } while (plVar4 != plVar1);
      lVar3 = *param_1;
    }
    param_1[1] = param_2 * 0x20 + lVar3;
  }
  return;
}





