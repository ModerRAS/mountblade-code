#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part018.c - 19 个函数

// 函数: void FUN_1800f68d0(uint *param_1,uint param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f68d0(uint *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  if (*param_1 < param_2) {
    iVar10 = param_2 - *param_1;
    if (iVar10 != 0) {
      LOCK();
      uVar2 = *param_1;
      *param_1 = *param_1 + iVar10;
      UNLOCK();
      uVar8 = (uint64_t)(uVar2 >> 0xc);
      uVar6 = (uint64_t)(iVar10 + -1 + uVar2 >> 0xc);
      if (uVar8 <= uVar6) {
        puVar9 = param_1 + (uint64_t)(uVar2 >> 0xc) * 2 + 2;
        lVar7 = (uVar6 - uVar8) + 1;
        do {
          if (*(int64_t *)puVar9 == 0) {
            lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18000,0x1e,param_4,uVar12);
            LOCK();
            bVar11 = *(int64_t *)(param_1 + (int64_t)(int)uVar8 * 2 + 2) == 0;
            if (bVar11) {
              *(int64_t *)(param_1 + (int64_t)(int)uVar8 * 2 + 2) = lVar4;
            }
            UNLOCK();
            if ((!bVar11) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(lVar4);
            }
          }
          uVar8 = (uint64_t)((int)uVar8 + 1);
          puVar9 = puVar9 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      FUN_1800f6e10(param_1,uVar2,iVar10);
    }
  }
  else if (param_2 < *param_1) {
    uVar2 = *param_1;
    uVar6 = (uint64_t)param_2;
    if ((int)param_2 < (int)uVar2) {
      do {
        plVar1 = (int64_t *)
                 (*(int64_t *)(param_1 + (uVar6 >> 0xc) * 2 + 2) +
                 (int64_t)((int)uVar6 + (int)(uVar6 >> 0xc) * -0x1000) * 0x18);
        plVar3 = (int64_t *)plVar1[1];
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar1 = (int64_t *)*plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar5;
      } while ((int)uVar5 < (int)uVar2);
    }
    LOCK();
    *param_1 = param_2;
    UNLOCK();
  }
  return;
}






// 函数: void FUN_1800f6a20(int64_t param_1)
void FUN_1800f6a20(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 10);
  return;
}



uint64_t *
FUN_1800f6a80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_6480_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6ad0(int64_t *param_1,uint64_t param_2)
void FUN_1800f6ad0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  lVar5 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar5 - lVar3;
  if (param_2 <= uVar2) {
    param_1[1] = param_2 + lVar3;
    return;
  }
  param_2 = (lVar3 - lVar5) + param_2;
  if (param_2 <= (uint64_t)(param_1[2] - lVar5)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,param_2);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar4 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar2 + param_2) {
    uVar4 = uVar2 + param_2;
  }
  if (uVar4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4,(char)param_1[3]);
    lVar3 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar3 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar5 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar4;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6af6(int64_t param_1,int64_t param_2)
void FUN_1800f6af6(int64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = (param_2 - unaff_RDI) + in_RAX;
  if (uVar3 <= (uint64_t)(unaff_RBX[2] - unaff_RDI)) {
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
  if (uVar2 < param_1 + uVar3) {
    uVar2 = param_1 + uVar3;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2,(char)unaff_RBX[3]);
    param_2 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RDI - param_2);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_1800f6bc6(void)
void FUN_1800f6bc6(void)

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






// 函数: void FUN_1800f6bf4(uint64_t param_1,int64_t param_2)
void FUN_1800f6bf4(uint64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = in_RAX + param_2;
  return;
}






// 函数: void FUN_1800f6c10(int64_t *param_1)
void FUN_1800f6c10(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1800f89b0();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1800f6c80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f6c80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800f7260(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f6ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f6ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800f7320(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f6cc0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f6cc0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800f74f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6ce0(uint64_t param_1,int64_t *param_2,int param_3)
void FUN_1800f6ce0(uint64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = system_system_data_config;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 4;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_3,0x10,3);
  FUN_180083520(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1800f6e10(int64_t param_1,uint param_2,int param_3)
void FUN_1800f6e10(int64_t param_1,uint param_2,int param_3)

{
  uint64_t *puVar1;
  
  param_3 = param_2 + param_3;
  if ((int)param_2 < param_3) {
    do {
      puVar1 = (uint64_t *)
               (*(int64_t *)(param_1 + 8 + (uint64_t)(param_2 >> 0xc) * 8) +
               (int64_t)(int)(param_2 + (param_2 >> 0xc) * -0x1000) * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(int8_t *)(puVar1 + 2) = 0;
      param_2 = param_2 + 1;
    } while ((int)param_2 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6e70(int64_t *param_1,uint64_t param_2)
void FUN_1800f6e70(int64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  int64_t lVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  puVar10 = (int32_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar10) / 0x30)) {
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar10 + 4);
      uVar12 = param_2;
      do {
        *(int8_t *)puVar10 = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(int32_t *)(puVar8 + 2) = 3;
        *(int32_t *)(puVar8 + 3) = 0xffffffff;
        puVar10 = puVar10 + 0xc;
        puVar8 = puVar8 + 6;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar10 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar10 + param_2 * 0xc);
    return;
  }
  puVar7 = (int32_t *)*param_1;
  lVar11 = ((int64_t)puVar10 - (int64_t)puVar7) / 0x30;
  uVar12 = lVar11 * 2;
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar11 + param_2) {
    uVar12 = lVar11 + param_2;
  }
  puVar4 = (int8_t *)0x0;
  if (uVar12 != 0) {
    puVar4 = (int8_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 0x30,(char)param_1[3],puVar10,0xfffffffffffffffe)
    ;
    puVar10 = (int32_t *)param_1[1];
    puVar7 = (int32_t *)*param_1;
  }
  puVar5 = puVar4;
  if (puVar7 != puVar10) {
    lVar11 = (int64_t)puVar4 - (int64_t)puVar7;
    puVar7 = puVar7 + 8;
    do {
      *puVar5 = *(int8_t *)(puVar7 + -8);
      puVar8 = (uint64_t *)((int64_t)puVar7 + lVar11 + -0x18);
      *puVar8 = 0;
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar7) = 0;
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar7) = 0;
      *(int32_t *)(lVar11 + (int64_t)puVar7) = *puVar7;
      uVar3 = *puVar8;
      *puVar8 = *(uint64_t *)(puVar7 + -6);
      *(uint64_t *)(puVar7 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar7);
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar7) = *(uint64_t *)(puVar7 + -4);
      *(uint64_t *)(puVar7 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -8 + (int64_t)puVar7);
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar7) = *(uint64_t *)(puVar7 + -2);
      *(uint64_t *)(puVar7 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar11 + (int64_t)puVar7);
      *(int32_t *)(lVar11 + (int64_t)puVar7) = *puVar7;
      *puVar7 = uVar2;
      *(int32_t *)(lVar11 + 8 + (int64_t)puVar7) = puVar7[2];
      puVar5 = puVar5 + 0x30;
      puVar1 = puVar7 + 4;
      puVar7 = puVar7 + 0xc;
    } while (puVar1 != puVar10);
  }
  if (param_2 != 0) {
    puVar8 = (uint64_t *)(puVar5 + 0x10);
    uVar9 = param_2;
    do {
      *(int8_t *)(puVar8 + -2) = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(int32_t *)(puVar8 + 2) = 3;
      *(int32_t *)(puVar8 + 3) = 0xffffffff;
      puVar8 = puVar8 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar11 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar11) {
    do {
      FUN_1800f89b0();
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar11);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar5 + param_2 * 0x30);
    param_1[2] = (int64_t)(puVar4 + uVar12 * 0x30);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7100(int64_t *param_1,uint64_t param_2)
void FUN_1800f7100(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  
  puVar5 = (int8_t *)param_1[1];
  if (param_2 <= (uint64_t)(param_1[2] - (int64_t)puVar5 >> 4)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0;
        *(uint64_t *)(puVar5 + 4) = 0xffffffffffffffff;
        *(int32_t *)(puVar5 + 0xc) = 0;
        puVar5 = puVar5 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar5 = (int8_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar5 + param_2 * 0x10);
    return;
  }
  puVar4 = (int8_t *)*param_1;
  lVar1 = (int64_t)puVar5 - (int64_t)puVar4 >> 4;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 << 4,(char)param_1[3]);
    puVar4 = (int8_t *)*param_1;
    puVar5 = (int8_t *)param_1[1];
  }
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
  }
  if (param_2 != 0) {
    puVar2 = (uint64_t *)(lVar1 + 4);
    uVar3 = param_2;
    do {
      *(int8_t *)((int64_t)puVar2 + -4) = 0;
      *puVar2 = 0xffffffffffffffff;
      *(int32_t *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = lVar1;
    param_1[2] = uVar6 * 0x10 + lVar1;
    param_1[1] = param_2 * 0x10 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7133(int64_t param_1,int64_t param_2)
void FUN_1800f7133(int64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar4;
  
  lVar1 = in_RAX >> 4;
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (uint64_t)(lVar1 + unaff_RDI)) {
    uVar4 = lVar1 + unaff_RDI;
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 << 4,*(int8_t *)(param_1 + 0x18));
    param_2 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBX - param_2);
  }
  if (unaff_RDI != 0) {
    puVar2 = (uint64_t *)(lVar1 + 4);
    lVar3 = unaff_RDI;
    do {
      *(int8_t *)((int64_t)puVar2 + -4) = 0;
      *puVar2 = 0xffffffffffffffff;
      *(int32_t *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar1;
    unaff_RSI[2] = uVar4 * 0x10 + lVar1;
    unaff_RSI[1] = unaff_RDI * 0x10 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1800f7215(int64_t param_1)
void FUN_1800f7215(int64_t param_1)

{
  int64_t lVar1;
  int8_t *unaff_RBX;
  int64_t unaff_RDI;
  
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *unaff_RBX = 0;
      *(uint64_t *)(unaff_RBX + 4) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBX + 0xc) = 0;
      unaff_RBX = unaff_RBX + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(int8_t **)(param_1 + 8);
  }
  *(int8_t **)(param_1 + 8) = unaff_RBX + unaff_RDI * 0x10;
  return;
}






// 函数: void FUN_1800f7260(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f7260(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1800f7260(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = param_2[6];
  for (lVar2 = param_2[5]; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (param_2[5] == 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1800f7320(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f7320(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800f7320(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_180083f10(param_2 + 5);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800f73a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  void *puVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  puVar4 = (uint64_t *)FUN_1800f7a90();
  if (*param_2 != 0) {
    uVar5 = FUN_1800f73a0(param_1,*param_2,puVar4,param_4,uVar8);
    *puVar4 = uVar5;
  }
  puVar3 = puVar4;
  for (plVar2 = (int64_t *)param_2[1]; plVar2 != (int64_t *)0x0; plVar2 = (int64_t *)plVar2[1]) {
    puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28));
    puVar1 = puVar6 + 4;
    *puVar1 = &system_state_ptr;
    puVar6[5] = 0;
    *(int32_t *)(puVar6 + 6) = 0;
    *puVar1 = &unknown_var_3432_ptr;
    puVar6[5] = puVar6 + 7;
    *(int32_t *)(puVar6 + 6) = 0;
    *(int8_t *)(puVar6 + 7) = 0;
    *(int *)(puVar6 + 6) = (int)plVar2[6];
    puVar7 = &system_buffer_ptr;
    if ((void *)plVar2[5] != (void *)0x0) {
      puVar7 = (void *)plVar2[5];
    }
    strcpy_s(puVar6[5],0x80,puVar7,param_4,uVar8,puVar1);
    puVar6[0x17] = plVar2[0x17];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = puVar3;
    *(char *)(puVar6 + 3) = (char)plVar2[3];
    puVar3[1] = puVar6;
    if (*plVar2 != 0) {
      uVar5 = FUN_1800f73a0(param_1,*plVar2,puVar6);
      *puVar6 = uVar5;
    }
    puVar3 = puVar6;
  }
  return puVar4;
}






// 函数: void FUN_1800f74f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800f74f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800f74f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800f7570(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)

{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  byte *pbVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  plVar5 = (int64_t *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (int64_t *)(plVar5[5] - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7694;
      }
LAB_1800f7677:
      uVar9 = (uint64_t)plVar8 & 0xffffffffffffff00;
LAB_1800f767a:
      if (plVar5 != (int64_t *)0x0) {
        FUN_1800f7b20(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7694;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (int64_t *)(*(int64_t *)(param_5 + 8) - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_1800f7677;
          uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_1800f767a;
        }
      }
    }
  }
LAB_1800f7694:
  bVar2 = true;
  plVar5 = (int64_t *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (int64_t *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_1800f76b2:
      plVar5 = (int64_t *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1800f76b2;
      plVar5 = (int64_t *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (int64_t *)param_1[1]) {
      plVar5 = (int64_t *)func_0x00018066b9a0(plVar8);
      goto LAB_1800f76d2;
    }
  }
  else {
LAB_1800f76d2:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1800f77de:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f77de;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_1800f7747:
      uVar10 = 1;
      goto LAB_1800f7790;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7747;
    }
  }
  uVar10 = 0;
LAB_1800f7790:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,(char)param_1[5]);
  FUN_180049b30(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800f7800(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)

{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  byte *pbVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  plVar5 = (int64_t *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (int64_t *)(plVar5[5] - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7924;
      }
LAB_1800f7907:
      uVar9 = (uint64_t)plVar8 & 0xffffffffffffff00;
LAB_1800f790a:
      if (plVar5 != (int64_t *)0x0) {
        FUN_1800f7c00(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7924;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (int64_t *)(*(int64_t *)(param_5 + 8) - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_1800f7907;
          uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_1800f790a;
        }
      }
    }
  }
LAB_1800f7924:
  bVar2 = true;
  plVar5 = (int64_t *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (int64_t *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_1800f7942:
      plVar5 = (int64_t *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1800f7942;
      plVar5 = (int64_t *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (int64_t *)param_1[1]) {
      plVar5 = (int64_t *)func_0x00018066b9a0(plVar8);
      goto LAB_1800f7962;
    }
  }
  else {
LAB_1800f7962:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1800f7a6e:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7a6e;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_1800f79d7:
      uVar10 = 1;
      goto LAB_1800f7a20;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f79d7;
    }
  }
  uVar10 = 0;
LAB_1800f7a20:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,(char)param_1[5]);
  FUN_180049b30(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800f7a90(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                         0xfffffffffffffffe);
  FUN_180049b30(puVar1 + 4,param_2 + 0x20);
  puVar1[0x17] = *(uint64_t *)(param_2 + 0xb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_3;
  *(int8_t *)(puVar1 + 3) = *(int8_t *)(param_2 + 0x18);
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




