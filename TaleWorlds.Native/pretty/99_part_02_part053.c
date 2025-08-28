#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part053.c - 16 个函数

// 函数: void FUN_1801beba8(int64_t param_1,uint64_t *param_2)
void FUN_1801beba8(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t unaff_RBX;
  int64_t *plVar4;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *plVar5;
  uint64_t unaff_RDI;
  int64_t *plVar6;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t uVar7;
  uint64_t unaff_R13;
  uint64_t uVar8;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t *plVar9;
  uint64_t *in_stack_00000060;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -8) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  plVar6 = (int64_t *)(param_1 + 0x10);
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    uVar7 = 0;
    plVar9 = (int64_t *)plVar6[3];
    uVar8 = (plVar6[4] - (int64_t)plVar9) + 7U >> 3;
    if ((int64_t *)plVar6[4] < plVar9) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        plVar2 = (int64_t *)0x0;
        for (plVar4 = (int64_t *)*param_2; plVar4 != (int64_t *)param_2[1]; plVar4 = plVar4 + 0xf)
        {
          if (*plVar9 == *plVar4) {
            plVar5 = (int64_t *)*plVar6;
            if (plVar5 < (int64_t *)plVar6[1]) {
              *plVar6 = (int64_t)(plVar5 + 1);
              *plVar5 = *plVar4;
            }
            else {
              plVar3 = (int64_t *)plVar6[-1];
              lVar1 = (int64_t)plVar5 - (int64_t)plVar3 >> 3;
              if (lVar1 == 0) {
                lVar1 = 1;
LAB_1801bec67:
                plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8);
                plVar3 = (int64_t *)plVar6[-1];
                plVar5 = (int64_t *)*plVar6;
              }
              else {
                lVar1 = lVar1 * 2;
                if (lVar1 != 0) goto LAB_1801bec67;
              }
              if (plVar3 != plVar5) {
                    // WARNING: Subroutine does not return
                memmove(plVar2,plVar3,(int64_t)plVar5 - (int64_t)plVar3);
              }
              *plVar2 = *plVar4;
              if (plVar6[-1] != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              plVar6[1] = (int64_t)(plVar2 + lVar1);
              plVar6[-1] = (int64_t)plVar2;
              *plVar6 = (int64_t)(plVar2 + 1);
              param_2 = in_stack_00000060;
            }
            break;
          }
        }
        plVar9 = plVar9 + 1;
        uVar7 = uVar7 + 1;
        param_1 = in_stack_00000068;
      } while (uVar7 != uVar8);
    }
    param_1 = param_1 + 0x78;
    plVar6 = plVar6 + 0xf;
    in_stack_00000068 = param_1;
    if (param_1 == in_stack_00000070) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801bed29(void)
void FUN_1801bed29(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bed30(int64_t *param_1,uint64_t *param_2,int param_3)
void FUN_1801bed30(int64_t *param_1,uint64_t *param_2,int param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  byte bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  
  if (param_3 < *(int *)(param_2 + 0xe)) {
    *(int *)(param_2 + 0xe) = param_3;
  }
  if ((*(byte *)((int64_t)param_2 + 0x74) & 2) != 0) {
    return;
  }
  bVar3 = *(byte *)((int64_t)param_2 + 0x74) | 1;
  *(byte *)((int64_t)param_2 + 0x74) = bVar3;
  plVar6 = (int64_t *)param_2[1];
  puVar2 = (uint64_t *)0x0;
  puVar4 = (uint64_t *)((param_2[2] - (int64_t)plVar6) + 7U >> 3);
  if ((int64_t *)param_2[2] < plVar6) {
    puVar4 = puVar2;
  }
  if (puVar4 != (uint64_t *)0x0) {
    puVar5 = puVar2;
    do {
      FUN_1801bed30(param_1,*plVar6 * 0x78 + *param_1,param_3 + 1);
      puVar5 = (uint64_t *)((int64_t)puVar5 + 1);
      plVar6 = plVar6 + 1;
    } while (puVar5 != puVar4);
    bVar3 = *(byte *)((int64_t)param_2 + 0x74);
  }
  *(byte *)((int64_t)param_2 + 0x74) = bVar3 | 2;
  puVar4 = (uint64_t *)param_1[5];
  if (puVar4 < (uint64_t *)param_1[6]) {
    param_1[5] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar5 = (uint64_t *)param_1[4];
  lVar1 = (int64_t)puVar4 - (int64_t)puVar5 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) goto LAB_1801bee38;
  }
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,(char)param_1[7]);
  puVar5 = (uint64_t *)param_1[4];
  puVar4 = (uint64_t *)param_1[5];
LAB_1801bee38:
  if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar5,(int64_t)puVar4 - (int64_t)puVar5);
  }
  *puVar2 = *param_2;
  if (param_1[4] == 0) {
    param_1[4] = (int64_t)puVar2;
    param_1[6] = (int64_t)(puVar2 + lVar1);
    param_1[5] = (int64_t)(puVar2 + 1);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bed55(byte param_1,int64_t param_2)
void FUN_1801bed55(byte param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *unaff_R14;
  
  param_1 = param_1 | 1;
  *(byte *)(param_2 + 0x74) = param_1;
  puVar2 = (uint64_t *)0x0;
  puVar3 = (uint64_t *)((*(int64_t *)(param_2 + 0x10) - *(uint64_t *)(param_2 + 8)) + 7 >> 3);
  if (*(uint64_t *)(param_2 + 0x10) < *(uint64_t *)(param_2 + 8)) {
    puVar3 = puVar2;
  }
  puVar4 = puVar2;
  if (puVar3 != (uint64_t *)0x0) {
    do {
      FUN_1801bed30();
      puVar4 = (uint64_t *)((int64_t)puVar4 + 1);
    } while (puVar4 != puVar3);
    param_1 = *(byte *)((int64_t)unaff_R14 + 0x74);
  }
  *(byte *)((int64_t)unaff_R14 + 0x74) = param_1 | 2;
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
  if (puVar3 < *(uint64_t **)(unaff_RBX + 0x30)) {
    *(uint64_t **)(unaff_RBX + 0x28) = puVar3 + 1;
    *puVar3 = *unaff_R14;
    return;
  }
  puVar4 = *(uint64_t **)(unaff_RBX + 0x20);
  lVar1 = (int64_t)puVar3 - (int64_t)puVar4 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) goto LAB_1801bee38;
  }
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(unaff_RBX + 0x38));
  puVar4 = *(uint64_t **)(unaff_RBX + 0x20);
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
LAB_1801bee38:
  if (puVar4 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(int64_t)puVar3 - (int64_t)puVar4);
  }
  *puVar2 = *unaff_R14;
  if (*(int64_t *)(unaff_RBX + 0x20) == 0) {
    *(uint64_t **)(unaff_RBX + 0x20) = puVar2;
    *(uint64_t **)(unaff_RBX + 0x30) = puVar2 + lVar1;
    *(uint64_t **)(unaff_RBX + 0x28) = puVar2 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bed95(void)
void FUN_1801bed95(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *puVar3;
  uint64_t *unaff_R12;
  uint64_t *unaff_R14;
  
  do {
    FUN_1801bed30();
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI != unaff_RBP);
  *(byte *)((int64_t)unaff_R14 + 0x74) = *(byte *)((int64_t)unaff_R14 + 0x74) | 2;
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
  if (puVar3 < *(uint64_t **)(unaff_RBX + 0x30)) {
    *(uint64_t **)(unaff_RBX + 0x28) = puVar3 + 1;
    *puVar3 = *unaff_R14;
    return;
  }
  puVar2 = *(uint64_t **)(unaff_RBX + 0x20);
  lVar1 = (int64_t)puVar3 - (int64_t)puVar2 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) goto LAB_1801bee38;
  }
  unaff_R12 = (uint64_t *)
              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(unaff_RBX + 0x38));
  puVar2 = *(uint64_t **)(unaff_RBX + 0x20);
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
LAB_1801bee38:
  if (puVar2 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(unaff_R12,puVar2,(int64_t)puVar3 - (int64_t)puVar2);
  }
  *unaff_R12 = *unaff_R14;
  if (*(int64_t *)(unaff_RBX + 0x20) == 0) {
    *(uint64_t **)(unaff_RBX + 0x20) = unaff_R12;
    *(uint64_t **)(unaff_RBX + 0x30) = unaff_R12 + lVar1;
    *(uint64_t **)(unaff_RBX + 0x28) = unaff_R12 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bedc8(byte param_1)
void FUN_1801bedc8(byte param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  uint64_t *puVar3;
  uint64_t *unaff_R12;
  uint64_t *unaff_R14;
  
  *(byte *)((int64_t)unaff_R14 + 0x74) = param_1 | 2;
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
  if (puVar3 < *(uint64_t **)(unaff_RBX + 0x30)) {
    *(uint64_t **)(unaff_RBX + 0x28) = puVar3 + 1;
    *puVar3 = *unaff_R14;
    return;
  }
  puVar2 = *(uint64_t **)(unaff_RBX + 0x20);
  lVar1 = (int64_t)puVar3 - (int64_t)puVar2 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) goto LAB_1801bee38;
  }
  unaff_R12 = (uint64_t *)
              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(unaff_RBX + 0x38));
  puVar2 = *(uint64_t **)(unaff_RBX + 0x20);
  puVar3 = *(uint64_t **)(unaff_RBX + 0x28);
LAB_1801bee38:
  if (puVar2 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(unaff_R12,puVar2,(int64_t)puVar3 - (int64_t)puVar2);
  }
  *unaff_R12 = *unaff_R14;
  if (*(int64_t *)(unaff_RBX + 0x20) == 0) {
    *(uint64_t **)(unaff_RBX + 0x20) = unaff_R12;
    *(uint64_t **)(unaff_RBX + 0x30) = unaff_R12 + lVar1;
    *(uint64_t **)(unaff_RBX + 0x28) = unaff_R12 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801bedde(void)
void FUN_1801bedde(void)

{
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  uint64_t *unaff_R14;
  
  *(uint64_t **)(unaff_RBX + 0x28) = unaff_RDI + 1;
  *unaff_RDI = *unaff_R14;
  return;
}






// 函数: void FUN_1801bee8a(void)
void FUN_1801bee8a(void)

{
  return;
}






// 函数: void FUN_1801beea0(uint64_t *param_1,int64_t param_2,int32_t param_3,int param_4)
void FUN_1801beea0(uint64_t *param_1,int64_t param_2,int32_t param_3,int param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  for (lVar1 = param_1[8]; (lVar1 != param_1[9] && (*(int64_t *)(lVar1 + 0x28) != param_2));
      lVar1 = lVar1 + 0x38) {
  }
  if (*(int *)(lVar1 + 0x30) == -1) {
    *(int32_t *)(lVar1 + 0x30) = param_3;
    *(int *)(lVar1 + 0x34) = param_4;
    if (*(int *)(param_1 + 0xc) < param_4) {
      *(int *)(param_1 + 0xc) = param_4;
    }
    for (plVar2 = (int64_t *)*param_1; (plVar2 != (int64_t *)param_1[1] && (*plVar2 != param_2));
        plVar2 = plVar2 + 0xf) {
    }
    puVar3 = (uint64_t *)plVar2[9];
    uVar4 = 0;
    uVar5 = (uint64_t)(plVar2[10] + (7 - (int64_t)puVar3)) >> 3;
    if ((uint64_t *)plVar2[10] < puVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        FUN_1801beea0(param_1,*puVar3,param_3,param_4 + 1);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}






// 函数: void FUN_1801beedd(uint64_t param_1,int64_t param_2)
void FUN_1801beedd(uint64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  int64_t *plVar1;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t unaff_R15D;
  int64_t lStack0000000000000040;
  
  *(int32_t *)(in_RAX + 0x30) = unaff_R15D;
  *(int *)(in_RAX + 0x34) = unaff_EBP;
  if (*(int *)(unaff_RSI + 0xc) < unaff_EBP) {
    *(int *)(unaff_RSI + 0xc) = unaff_EBP;
  }
  for (plVar1 = (int64_t *)*unaff_RSI; (plVar1 != (int64_t *)unaff_RSI[1] && (*plVar1 != param_2))
      ; plVar1 = plVar1 + 0xf) {
  }
  uVar2 = 0;
  uVar3 = (plVar1[10] - plVar1[9]) + 7U >> 3;
  if ((uint64_t)plVar1[10] < (uint64_t)plVar1[9]) {
    uVar3 = uVar2;
  }
  lStack0000000000000040 = param_2;
  if (uVar3 != 0) {
    do {
      FUN_1801beea0();
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}






// 函数: void FUN_1801bef6f(void)
void FUN_1801bef6f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bef80(int64_t *param_1,uint64_t param_2)
void FUN_1801bef80(int64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  puVar10 = (int32_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar10) / 0x28)) {
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar10 + 4);
      uVar12 = param_2;
      do {
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(int32_t *)(puVar8 + 2) = 3;
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 10;
        puVar8 = puVar8 + 5;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar10 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar10 + param_2 * 10);
    return;
  }
  puVar7 = (int32_t *)*param_1;
  lVar11 = ((int64_t)puVar10 - (int64_t)puVar7) / 0x28;
  uVar12 = lVar11 * 2;
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar11 + param_2) {
    uVar12 = lVar11 + param_2;
  }
  puVar4 = (int32_t *)0x0;
  if (uVar12 != 0) {
    puVar4 = (int32_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 0x28,(char)param_1[3],puVar10,0xfffffffffffffffe)
    ;
    puVar10 = (int32_t *)param_1[1];
    puVar7 = (int32_t *)*param_1;
  }
  puVar5 = puVar4;
  if (puVar7 != puVar10) {
    lVar11 = (int64_t)puVar4 - (int64_t)puVar7;
    puVar7 = puVar7 + 8;
    do {
      *puVar5 = puVar7[-8];
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
      puVar5 = puVar5 + 10;
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 10;
    } while (puVar1 != puVar10);
  }
  if (param_2 != 0) {
    puVar8 = (uint64_t *)(puVar5 + 4);
    uVar9 = param_2;
    do {
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(int32_t *)(puVar8 + 2) = 3;
      *(int32_t *)(puVar8 + -2) = 0xffffffff;
      puVar8 = puVar8 + 5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar11 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar11) {
    do {
      FUN_1801bf1f0();
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != lVar11);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar5 + param_2 * 10);
    param_1[2] = (int64_t)(puVar4 + uVar12 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}






// 函数: void FUN_1801bf1f0(int64_t *param_1)
void FUN_1801bf1f0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_180057830(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801bf260(int64_t *param_1)
void FUN_1801bf260(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_180057830(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bf280(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801bf280(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)(param_1[2] - (int64_t)puVar7 >> 5) < param_2) {
    puVar10 = (uint64_t *)*param_1;
    lVar4 = (int64_t)puVar7 - (int64_t)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (uint64_t *)0x0;
    if (uVar9 != 0) {
      puVar5 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar10 = (uint64_t *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (int64_t)puVar5 - (int64_t)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = 0;
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = 0;
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(int32_t *)(lVar4 + (int64_t)puVar10);
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        *(int32_t *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(int32_t *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    lVar4 = param_1[1];
    lVar8 = *param_1;
    if (lVar8 != lVar4) {
      do {
        FUN_180057830(lVar8);
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar4);
      lVar8 = *param_1;
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar8);
    }
    *param_1 = (int64_t)puVar5;
    param_1[1] = (int64_t)(puVar6 + param_2 * 4);
    param_1[2] = (int64_t)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(int32_t *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001801bf7e0)
// WARNING: Removing unreachable block (ram,0x0001801bf7e8)
// WARNING: Removing unreachable block (ram,0x0001801bf7ee)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bf4d0(uint64_t *param_1)
void FUN_1801bf4d0(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  bool bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  char cVar14;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int64_t *plStack_68;
  int64_t *plStack_60;
  int64_t *plStack_58;
  
  plStack_68 = (int64_t *)0x0;
  plStack_60 = (int64_t *)0x0;
  plStack_58 = (int64_t *)0x0;
  lVar1 = *(int64_t *)*param_1 + (int64_t)*(int *)(param_1 + 1) * 0x28;
  plStackX_18 = *(int64_t **)(lVar1 + 8);
  plVar10 = (int64_t *)0x0;
  if (plStackX_18 != *(int64_t **)(lVar1 + 0x10)) {
    do {
      plVar8 = (int64_t *)*plStackX_18;
      plStackX_20 = (int64_t *)plStackX_18[1];
      plVar10 = plStack_58;
      plVar12 = plStack_60;
      plVar13 = plStack_60;
      if (plVar8 != plStackX_20) {
        do {
          plVar2 = (int64_t *)*plVar8;
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x28))(plVar2);
          }
          plVar2[3] = (int64_t)(int)(1 << (*(int *)((int64_t)param_1 + 0xc) + 2U & 0x1f) | 1);
          uVar5 = system_context_ptr;
          plStackX_10 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          FUN_18005e110(uVar5,&plStackX_10);
          if (plStack_60 < plVar10) {
            *plStack_60 = (int64_t)plVar2;
            (**(code **)(*plVar2 + 0x28))(plVar2);
            plVar13 = plVar12;
            plVar7 = plStack_60;
          }
          else {
            lVar6 = (int64_t)plStack_60 - (int64_t)plVar12 >> 3;
            plVar10 = plVar12;
            if (lVar6 == 0) {
              lVar6 = 1;
LAB_1801bf606:
              plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,3);
              plVar13 = plVar7;
            }
            else {
              lVar6 = lVar6 * 2;
              if (lVar6 != 0) goto LAB_1801bf606;
              plVar7 = (int64_t *)0x0;
              plVar13 = plVar7;
            }
            for (; plVar10 != plStack_60; plVar10 = plVar10 + 1) {
              *plVar7 = *plVar10;
              *plVar10 = 0;
              plVar7 = plVar7 + 1;
            }
            *plVar7 = (int64_t)plVar2;
            (**(code **)(*plVar2 + 0x28))(plVar2);
            for (plVar10 = plVar12; plVar10 != plStack_60; plVar10 = plVar10 + 1) {
              if ((int64_t *)*plVar10 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar10 + 0x38))();
              }
            }
            if (plVar12 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar12);
            }
            plVar10 = plVar13 + lVar6;
            plStack_68 = plVar13;
            plStack_58 = plVar10;
          }
          plStack_60 = plVar7 + 1;
          (**(code **)(*plVar2 + 0x38))(plVar2);
          plVar8 = plVar8 + 1;
          plVar12 = plVar13;
        } while (plVar8 != plStackX_20);
      }
      uVar5 = system_context_ptr;
      uVar11 = (int64_t)plStack_60 - (int64_t)plVar13 >> 3;
      do {
        bVar4 = false;
        uVar9 = 0;
        plVar8 = plStackX_18;
        plVar10 = plVar13;
        if (uVar11 == 0) break;
        do {
          plVar10 = plVar13 + uVar9;
          plVar8 = (int64_t *)*plVar10;
          pcVar3 = *(code **)(*plVar8 + 0x68);
          if (pcVar3 == (code *)&processed_var_9696_ptr) {
            cVar14 = (char)plVar8[2] != '\0';
            plVar13 = plStack_68;
          }
          else {
            cVar14 = (*pcVar3)();
          }
          if (cVar14 == '\0') {
            bVar4 = true;
            plVar8 = (int64_t *)FUN_18005e890(uVar5);
            cVar14 = (**(code **)(*plVar8 + 0x20))(plVar8,0);
            if (cVar14 == '\0') {
              plVar10 = (int64_t *)*plVar10;
              pcVar3 = *(code **)(*plVar10 + 0x80);
              if (pcVar3 == (code *)&ui_system_data_1840_ptr) {
                FUN_1800496b0(plVar10 + 4);
              }
              else {
                (*pcVar3)();
              }
            }
          }
          uVar9 = (uint64_t)((int)uVar9 + 1);
        } while (uVar9 < uVar11);
        plVar8 = plStackX_18;
        plVar10 = plVar13;
      } while (bVar4);
      for (; plVar12 = plStackX_18, plVar13 != plStack_60; plVar13 = plVar13 + 1) {
        plStackX_18 = plVar8;
        if ((int64_t *)*plVar13 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar13 + 0x38))();
        }
        plVar8 = plStackX_18;
        plStackX_18 = plVar12;
      }
      plStackX_18 = plStackX_18 + 4;
      plStack_60 = plVar10;
    } while (plStackX_18 != *(int64_t **)(lVar1 + 0x10));
  }
  if (plVar10 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar10);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




