#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part260.c - 9 个函数

// 函数: void FUN_180228280(int64_t param_1,int64_t *param_2)
void FUN_180228280(int64_t param_1,int64_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  
  System_QueueProcessor(param_2,param_1);
  lVar5 = *(int64_t *)(param_1 + 0x28);
  lVar2 = *(int64_t *)(param_1 + 0x20);
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)((lVar5 - lVar2) / 0xe0);
  param_2[1] = param_2[1] + 4;
  uVar6 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x20);
  lVar3 = *(int64_t *)(param_1 + 0x28) - lVar5;
  lVar2 = lVar3 >> 0x3f;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (lVar3 / 0xe0 + lVar2 != lVar2) {
    do {
      System_QueueProcessor(param_2,lVar5 + 8 + uVar6 * 0xe0);
      puVar4 = (int32_t *)param_2[1];
      uVar1 = *(int32_t *)(uVar7 + *(int64_t *)(param_1 + 0x20));
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar1;
      param_2[1] = param_2[1] + 4;
      lVar5 = uVar6 * 0xe0 + *(int64_t *)(param_1 + 0x20);
      if ((uint64_t)((*param_2 - param_2[1]) + param_2[2]) < 0x41) {
        System_BufferManager(param_2,(param_2[1] - *param_2) + 0x40);
      }
      FUN_180639fd0(param_2,lVar5 + 0xa0);
      FUN_180639fd0(param_2,lVar5 + 0xb0);
      FUN_180639fd0(param_2,lVar5 + 0xc0);
      FUN_180639fd0(param_2,lVar5 + 0xd0);
      lVar5 = *(int64_t *)(param_1 + 0x20);
      uVar8 = (int)uVar9 + 1;
      uVar6 = (uint64_t)(int)uVar8;
      uVar7 = uVar7 + 0xe0;
      uVar9 = (uint64_t)uVar8;
    } while (uVar6 < (uint64_t)((*(int64_t *)(param_1 + 0x28) - lVar5) / 0xe0));
  }
  return;
}





// 函数: void FUN_180228326(void)
void FUN_180228326(void)

{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  uint64_t uVar4;
  uint unaff_R15D;
  
  uVar4 = (uint64_t)unaff_R15D;
  do {
    System_QueueProcessor();
    puVar2 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x20));
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar2 = (int32_t *)unaff_RBX[1];
    }
    *puVar2 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    if ((uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2]) < 0x41) {
      System_BufferManager();
    }
    FUN_180639fd0();
    FUN_180639fd0();
    FUN_180639fd0();
    FUN_180639fd0();
    unaff_R15D = unaff_R15D + 1;
    lVar3 = SUB168(SEXT816(unaff_R12) *
                   SEXT816(*(int64_t *)(unaff_RDI + 0x28) - *(int64_t *)(unaff_RDI + 0x20)),8);
    uVar4 = uVar4 + 0xe0;
  } while ((uint64_t)(int64_t)(int)unaff_R15D < (uint64_t)((lVar3 >> 6) - (lVar3 >> 0x3f)));
  return;
}





// 函数: void FUN_180228434(void)
void FUN_180228434(void)

{
  return;
}





// 函数: void FUN_180228450(int64_t *param_1,int64_t param_2)
void FUN_180228450(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint *puVar6;
  int64_t lVar7;
  
  uVar1 = **(uint **)(param_2 + 8);
  puVar6 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar6;
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar6,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar6 = *(uint **)(param_2 + 8);
  }
  lVar4 = (int64_t)(int)*puVar6;
  *(uint **)(param_2 + 8) = puVar6 + 1;
  FUN_180229a10(param_1 + 4,lVar4);
  if (0 < lVar4) {
    puVar6 = *(uint **)(param_2 + 8);
    lVar7 = 0;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar2 = param_1[4];
      *(uint **)(param_2 + 8) = puVar6;
      plVar5 = (int64_t *)(lVar2 + 8 + lVar7);
      if (uVar1 != 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,uVar1);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
        puVar6 = *(uint **)(param_2 + 8);
      }
      *(uint *)(lVar7 + param_1[4]) = *puVar6;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      puVar3 = *(int32_t **)(param_2 + 8);
      lVar2 = param_1[4];
      *(int32_t *)(lVar7 + 0xa0 + lVar2) = *puVar3;
      *(int32_t *)(lVar7 + 0xa4 + lVar2) = puVar3[1];
      *(int32_t *)(lVar7 + 0xa8 + lVar2) = puVar3[2];
      *(int32_t *)(lVar7 + 0xac + lVar2) = puVar3[3];
      *(int32_t *)(lVar7 + 0xb0 + lVar2) = puVar3[4];
      *(int32_t *)(lVar7 + 0xb4 + lVar2) = puVar3[5];
      *(int32_t *)(lVar7 + 0xb8 + lVar2) = puVar3[6];
      *(int32_t *)(lVar7 + 0xbc + lVar2) = puVar3[7];
      *(int32_t *)(lVar7 + 0xc0 + lVar2) = puVar3[8];
      *(int32_t *)(lVar7 + 0xc4 + lVar2) = puVar3[9];
      *(int32_t *)(lVar7 + 200 + lVar2) = puVar3[10];
      *(int32_t *)(lVar7 + 0xcc + lVar2) = puVar3[0xb];
      *(int32_t *)(lVar7 + 0xd0 + lVar2) = puVar3[0xc];
      *(int32_t *)(lVar7 + 0xd4 + lVar2) = puVar3[0xd];
      *(int32_t *)(lVar7 + 0xd8 + lVar2) = puVar3[0xe];
      puVar6 = puVar3 + 0x10;
      *(int32_t *)(lVar7 + 0xdc + lVar2) = puVar3[0xf];
      lVar7 = lVar7 + 0xe0;
      *(uint **)(param_2 + 8) = puVar6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}





// 函数: void FUN_1802284b5(uint64_t param_1,uint *param_2)
void FUN_1802284b5(uint64_t param_1,uint *param_2)

{
  uint uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar5;
  int64_t unaff_R14;
  
  lVar5 = 0;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    lVar2 = *(int64_t *)(unaff_R14 + 0x20);
    *(uint **)(unaff_RBX + 8) = param_2;
    plVar4 = (int64_t *)(lVar2 + 8 + lVar5);
    if (uVar1 != 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,uVar1);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + (uint64_t)uVar1;
      param_2 = *(uint **)(unaff_RBX + 8);
    }
    *(uint *)(lVar5 + *(int64_t *)(unaff_R14 + 0x20)) = *param_2;
    *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
    puVar3 = *(int32_t **)(unaff_RBX + 8);
    lVar2 = *(int64_t *)(unaff_R14 + 0x20);
    *(int32_t *)(lVar5 + 0xa0 + lVar2) = *puVar3;
    *(int32_t *)(lVar5 + 0xa4 + lVar2) = puVar3[1];
    *(int32_t *)(lVar5 + 0xa8 + lVar2) = puVar3[2];
    *(int32_t *)(lVar5 + 0xac + lVar2) = puVar3[3];
    *(int32_t *)(lVar5 + 0xb0 + lVar2) = puVar3[4];
    *(int32_t *)(lVar5 + 0xb4 + lVar2) = puVar3[5];
    *(int32_t *)(lVar5 + 0xb8 + lVar2) = puVar3[6];
    *(int32_t *)(lVar5 + 0xbc + lVar2) = puVar3[7];
    *(int32_t *)(lVar5 + 0xc0 + lVar2) = puVar3[8];
    *(int32_t *)(lVar5 + 0xc4 + lVar2) = puVar3[9];
    *(int32_t *)(lVar5 + 200 + lVar2) = puVar3[10];
    *(int32_t *)(lVar5 + 0xcc + lVar2) = puVar3[0xb];
    *(int32_t *)(lVar5 + 0xd0 + lVar2) = puVar3[0xc];
    *(int32_t *)(lVar5 + 0xd4 + lVar2) = puVar3[0xd];
    *(int32_t *)(lVar5 + 0xd8 + lVar2) = puVar3[0xe];
    param_2 = puVar3 + 0x10;
    *(int32_t *)(lVar5 + 0xdc + lVar2) = puVar3[0xf];
    lVar5 = lVar5 + 0xe0;
    *(uint **)(unaff_RBX + 8) = param_2;
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  return;
}





// 函数: void FUN_1802285bd(void)
void FUN_1802285bd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802285e0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_1802285e0(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int8_t auStack_118 [32];
  void **ppuStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  uint64_t uStack_e4;
  uint64_t uStack_dc;
  uint64_t uStack_d4;
  uint64_t uStack_cc;
  int8_t uStack_c4;
  void *puStack_c0;
  int8_t *puStack_b8;
  int32_t uStack_b0;
  int8_t auStack_a8 [64];
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puStack_c0 = &memory_allocator_3480_ptr;
  puStack_b8 = auStack_a8;
  uStack_b0 = 0;
  auStack_a8[0] = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  ppuStack_f8 = (void **)&uStack_38;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 3;
  uStack_e4 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_e8 = 0;
  uStack_c4 = 2;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  FUN_180228ce0(&uStack_e8,param_1,param_2);
  FUN_180228730(&uStack_e8,param_3);
  ppuStack_f8 = (void **)&uStack_38;
  FUN_180229940(&uStack_38);
  ppuStack_f8 = (void **)&uStack_58;
  FUN_180229ab0(&uStack_58);
  ppuStack_f8 = &puStack_c0;
  puStack_c0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_180228730(int32_t *param_1,int64_t *param_2)
void FUN_180228730(int32_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  char *pcVar6;
  int8_t *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  int *piVar12;
  int64_t lVar13;
  uint64_t uVar14;
  
  puVar8 = (int32_t *)param_2[1];
  uVar1 = *param_1;
  if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639f50(param_2,param_1 + 1);
  FUN_180639f50(param_2,param_1 + 5);
  pcVar6 = (char *)0x180bf7cf8;
  uVar14 = 0;
  uVar11 = uVar14;
  do {
    if (*pcVar6 == *(char *)(param_1 + 9)) {
      FUN_180639de0(param_2,*(uint64_t *)((int64_t)(int)uVar11 * 0x10 + 0x180bf7cf0));
      break;
    }
    uVar11 = (uint64_t)((int)uVar11 + 1);
    pcVar6 = pcVar6 + 0x10;
  } while ((int64_t)pcVar6 < 0x180bf7d28);
  System_QueueProcessor(param_2,param_1 + 10);
  puVar8 = (int32_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[0x21];
  uVar4 = param_1[0x22];
  uVar5 = param_1[0x23];
  *puVar8 = param_1[0x20];
  puVar8[1] = uVar1;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  piVar12 = (int *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)piVar12;
  lVar13 = (*(int64_t *)(param_1 + 0x26) - *(int64_t *)(param_1 + 0x24)) +
           SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                  SEXT816(*(int64_t *)(param_1 + 0x26) - *(int64_t *)(param_1 + 0x24)),8);
  iVar10 = (int)((uint64_t)lVar13 >> 8) - (int)(lVar13 >> 0x3f);
  if ((uint64_t)((param_2[2] - (int64_t)piVar12) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)piVar12 + (4 - *param_2));
    piVar12 = (int *)param_2[1];
  }
  *piVar12 = iVar10;
  param_2[1] = param_2[1] + 4;
  puVar8 = (int32_t *)param_2[1];
  lVar13 = (int64_t)iVar10;
  uVar11 = uVar14;
  if (0 < iVar10) {
    do {
      lVar3 = *(int64_t *)(param_1 + 0x24);
      System_QueueProcessor(param_2,lVar3 + 8 + uVar11);
      puVar7 = (int8_t *)param_2[1];
      uVar2 = *(int8_t *)(uVar11 + lVar3);
      if ((uint64_t)((param_2[2] - (int64_t)puVar7) + *param_2) < 2) {
        System_BufferManager(param_2,puVar7 + (1 - *param_2));
        puVar7 = (int8_t *)param_2[1];
      }
      *puVar7 = uVar2;
      param_2[1] = param_2[1] + 1;
      System_QueueProcessor(param_2,lVar3 + 0xa0 + uVar11);
      pcVar6 = (char *)0x180bf7d28;
      uVar9 = uVar14;
      do {
        if (*pcVar6 == *(char *)(uVar11 + 0xf8 + lVar3)) {
          FUN_180639de0(param_2,*(uint64_t *)(uVar9 * 0x10 + 0x180bf7d20));
          break;
        }
        uVar9 = uVar9 + 1;
        pcVar6 = pcVar6 + 0x10;
      } while ((int64_t)pcVar6 < 0x180bf7e28);
      puVar8 = (int32_t *)param_2[1];
      uVar1 = *(int32_t *)(uVar11 + 0xfc + lVar3);
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
        System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = uVar1;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x104 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x108 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x10c + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x114 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x118 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x11c + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      uVar1 = *(int32_t *)(uVar11 + 0x124 + lVar3);
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
        System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = uVar1;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x128 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 300 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x130 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x138 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x13c + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar11 + 0x140 + lVar3);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      uVar1 = *(int32_t *)(uVar11 + 0x148 + lVar3);
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
        System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = uVar1;
      param_2[1] = param_2[1] + 4;
      puVar8 = (int32_t *)param_2[1];
      uVar1 = *(int32_t *)(uVar11 + 0x100 + lVar3);
      if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
        System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      *puVar8 = uVar1;
      puVar8 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (int64_t)puVar8;
      lVar13 = lVar13 + -1;
      uVar11 = uVar11 + 0x150;
    } while (lVar13 != 0);
  }
  if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = 0;
  piVar12 = (int *)(param_2[1] + 4);
  param_2[1] = (int64_t)piVar12;
  lVar13 = (*(int64_t *)(param_1 + 0x2e) - *(int64_t *)(param_1 + 0x2c)) / 6 +
           (*(int64_t *)(param_1 + 0x2e) - *(int64_t *)(param_1 + 0x2c) >> 0x3f);
  uVar11 = (lVar13 >> 4) - (lVar13 >> 0x3f);
  if ((uint64_t)((param_2[2] - (int64_t)piVar12) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)piVar12 + (4 - *param_2));
    piVar12 = (int *)param_2[1];
  }
  iVar10 = (int)uVar11;
  *piVar12 = iVar10;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar10) {
    uVar11 = uVar11 & 0xffffffff;
    do {
      FUN_180226a90(*(int64_t *)(param_1 + 0x2c) + uVar14,param_2);
      uVar14 = uVar14 + 0x60;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}





// 函数: void FUN_18022873e(int32_t *param_1,int64_t param_2)
void FUN_18022873e(int32_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  char *pcVar6;
  int8_t *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int64_t *unaff_RBX;
  int iVar10;
  uint64_t uVar11;
  int *piVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int32_t in_XMM0_Da;
  int32_t uVar15;
  
  puVar8 = *(int32_t **)(param_2 + 8);
  uVar15 = *param_1;
  if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
    in_XMM0_Da = System_BufferManager(in_XMM0_Da,(int64_t)puVar8 + (4 - *unaff_RBX));
    puVar8 = (int32_t *)unaff_RBX[1];
  }
  *puVar8 = uVar15;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar15 = FUN_180639f50(in_XMM0_Da,param_1 + 1);
  uVar15 = FUN_180639f50(uVar15,param_1 + 5);
  pcVar6 = (char *)0x180bf7cf8;
  uVar14 = 0;
  uVar11 = uVar14;
  do {
    if (*pcVar6 == *(char *)(param_1 + 9)) {
      uVar15 = FUN_180639de0(uVar15,*(uint64_t *)((int64_t)(int)uVar11 * 0x10 + 0x180bf7cf0));
      break;
    }
    uVar11 = (uint64_t)((int)uVar11 + 1);
    pcVar6 = pcVar6 + 0x10;
  } while ((int64_t)pcVar6 < 0x180bf7d28);
  uVar15 = System_QueueProcessor(uVar15,param_1 + 10);
  puVar8 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 0x11) {
    System_BufferManager(uVar15,(int64_t)puVar8 + (0x10 - *unaff_RBX));
    puVar8 = (int32_t *)unaff_RBX[1];
  }
  uVar15 = param_1[0x20];
  uVar1 = param_1[0x21];
  uVar4 = param_1[0x22];
  uVar5 = param_1[0x23];
  *puVar8 = uVar15;
  puVar8[1] = uVar1;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  piVar12 = (int *)(unaff_RBX[1] + 0x10);
  unaff_RBX[1] = (int64_t)piVar12;
  lVar13 = (*(int64_t *)(param_1 + 0x26) - *(int64_t *)(param_1 + 0x24)) +
           SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                  SEXT816(*(int64_t *)(param_1 + 0x26) - *(int64_t *)(param_1 + 0x24)),8);
  iVar10 = (int)((uint64_t)lVar13 >> 8) - (int)(lVar13 >> 0x3f);
  if ((uint64_t)((unaff_RBX[2] - (int64_t)piVar12) + *unaff_RBX) < 5) {
    uVar15 = System_BufferManager(uVar15,(int64_t)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  *piVar12 = iVar10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar8 = (int32_t *)unaff_RBX[1];
  lVar13 = (int64_t)iVar10;
  uVar11 = uVar14;
  if (0 < iVar10) {
    do {
      lVar3 = *(int64_t *)(param_1 + 0x24);
      uVar15 = System_QueueProcessor(uVar15,lVar3 + 8 + uVar11);
      puVar7 = (int8_t *)unaff_RBX[1];
      uVar2 = *(int8_t *)(uVar11 + lVar3);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar7) + *unaff_RBX) < 2) {
        uVar15 = System_BufferManager(uVar15,puVar7 + (1 - *unaff_RBX));
        puVar7 = (int8_t *)unaff_RBX[1];
      }
      *puVar7 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      uVar15 = System_QueueProcessor(uVar15,lVar3 + 0xa0 + uVar11);
      pcVar6 = (char *)0x180bf7d28;
      uVar9 = uVar14;
      do {
        if (*pcVar6 == *(char *)(uVar11 + 0xf8 + lVar3)) {
          uVar15 = FUN_180639de0(uVar15,*(uint64_t *)(uVar9 * 0x10 + 0x180bf7d20));
          break;
        }
        uVar9 = uVar9 + 1;
        pcVar6 = pcVar6 + 0x10;
      } while ((int64_t)pcVar6 < 0x180bf7e28);
      puVar8 = (int32_t *)unaff_RBX[1];
      uVar1 = *(int32_t *)(uVar11 + 0xfc + lVar3);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (4 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 0x11) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (0x10 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x104 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x108 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x10c + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = 0x3f800000;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 0x11) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (0x10 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x114 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x118 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x11c + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = 0x3f800000;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      uVar1 = *(int32_t *)(uVar11 + 0x124 + lVar3);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (4 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 0x11) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (0x10 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x128 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 300 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x130 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = 0x3f800000;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 0x11) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (0x10 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = *(int32_t *)(uVar11 + 0x138 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x13c + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = *(int32_t *)(uVar11 + 0x140 + lVar3);
      unaff_RBX[1] = unaff_RBX[1] + 4;
      *(int32_t *)unaff_RBX[1] = 0x3f800000;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      uVar1 = *(int32_t *)(uVar11 + 0x148 + lVar3);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (4 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar8 = (int32_t *)unaff_RBX[1];
      uVar1 = *(int32_t *)(uVar11 + 0x100 + lVar3);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
        uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (4 - *unaff_RBX));
        puVar8 = (int32_t *)unaff_RBX[1];
      }
      *puVar8 = uVar1;
      puVar8 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (int64_t)puVar8;
      lVar13 = lVar13 + -1;
      uVar11 = uVar11 + 0x150;
    } while (lVar13 != 0);
  }
  if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar8) + *unaff_RBX) < 5) {
    uVar15 = System_BufferManager(uVar15,(int64_t)puVar8 + (4 - *unaff_RBX));
    puVar8 = (int32_t *)unaff_RBX[1];
  }
  *puVar8 = 0;
  piVar12 = (int *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)piVar12;
  lVar13 = (*(int64_t *)(param_1 + 0x2e) - *(int64_t *)(param_1 + 0x2c)) / 6 +
           (*(int64_t *)(param_1 + 0x2e) - *(int64_t *)(param_1 + 0x2c) >> 0x3f);
  uVar11 = (lVar13 >> 4) - (lVar13 >> 0x3f);
  if ((uint64_t)((unaff_RBX[2] - (int64_t)piVar12) + *unaff_RBX) < 5) {
    System_BufferManager(uVar15,(int64_t)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  iVar10 = (int)uVar11;
  *piVar12 = iVar10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar10) {
    uVar11 = uVar11 & 0xffffffff;
    do {
      FUN_180226a90(*(int64_t *)(param_1 + 0x2c) + uVar14);
      uVar14 = uVar14 + 0x60;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}





