#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part214.c - 6 个函数

// 函数: void FUN_180190c90(uint64_t *param_1,uint64_t *param_2,longlong param_3)
void FUN_180190c90(uint64_t *param_1,uint64_t *param_2,longlong param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  int32_t uStackX_20;
  int32_t uStackX_24;
  
  uVar4 = (longlong)param_2 - (longlong)param_1;
  do {
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        lVar12 = (lVar5 + -2 >> 1) + 1;
        lVar11 = lVar12 * 2 + 2;
        do {
          uVar1 = param_1[lVar12 + -1];
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + -2;
          lVar8 = lVar12;
          for (lVar9 = lVar11; lVar9 < lVar5; lVar9 = lVar9 * 2 + 2) {
            cVar3 = func_0x00018018e0d0(param_1[lVar9],param_1[lVar9 + -1]);
            if (cVar3 != '\0') {
              lVar9 = lVar9 + -1;
            }
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + 4);
            lVar8 = lVar9;
          }
          if (lVar9 == lVar5) {
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9 + -1);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + -4);
            lVar8 = lVar9 + -1;
          }
          while (lVar12 < lVar8) {
            lVar9 = lVar8 + -1 >> 1;
            cVar3 = func_0x00018018e0d0(param_1[lVar9],uVar1);
            if (cVar3 == '\0') break;
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + 4);
            lVar8 = lVar9;
          }
          uStackX_20 = (int32_t)uVar1;
          uStackX_24 = (int32_t)((ulonglong)uVar1 >> 0x20);
          *(int32_t *)(param_1 + lVar8) = uStackX_20;
          *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) = uStackX_24;
        } while (lVar12 != 0);
      }
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar5 = lVar5 + -1;
          lVar11 = 0;
          lVar12 = 2;
          *(int32_t *)param_2 = *(int32_t *)param_1;
          *(int32_t *)((longlong)param_2 + 4) = *(int32_t *)((longlong)param_1 + 4);
          bVar13 = lVar5 == 2;
          lVar8 = lVar11;
          if (2 < lVar5) {
            do {
              cVar3 = func_0x00018018e0d0(param_1[lVar12],param_1[lVar12 + -1]);
              lVar11 = lVar12;
              if (cVar3 != '\0') {
                lVar11 = lVar12 + -1;
              }
              *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar11);
              *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                   *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4);
              lVar12 = lVar11 * 2 + 2;
              bVar13 = lVar12 == lVar5;
              lVar8 = lVar11;
            } while (lVar12 < lVar5);
          }
          if (bVar13) {
            *(int32_t *)(param_1 + lVar11) = *(int32_t *)(param_1 + lVar12 + -1);
            *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar12 * 8 + -4);
            lVar11 = lVar12 + -1;
          }
          while (0 < lVar11) {
            lVar5 = lVar11 + -1 >> 1;
            cVar3 = func_0x00018018e0d0(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            *(int32_t *)(param_1 + lVar11) = *(int32_t *)(param_1 + lVar5);
            *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar5 * 8 + 4);
            lVar11 = lVar5;
          }
          param_2 = param_2 + -1;
          *(int *)((longlong)param_1 + lVar11 * 8 + 4) = (int)((ulonglong)uVar1 >> 0x20);
          *(int *)(param_1 + lVar11) = (int)uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    puVar10 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar6 = param_1 + (lVar5 >> 1);
    cVar3 = func_0x00018018e0d0(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x00018018e0d0(*param_1,*puVar10);
      puVar7 = param_1;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*puVar6,*puVar10);
        goto LAB_180190d41;
      }
    }
    else {
      cVar3 = func_0x00018018e0d0(*puVar6,*puVar10);
      puVar7 = puVar6;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*param_1,*puVar10);
        puVar6 = param_1;
LAB_180190d41:
        puVar7 = puVar6;
        if (cVar3 != '\0') {
          puVar7 = puVar10;
        }
      }
    }
    uVar1 = *puVar7;
    puVar6 = param_1;
    puVar10 = param_2;
    while( true ) {
      while (cVar3 = func_0x00018018e0d0(*puVar6,uVar1), cVar3 != '\0') {
        puVar6 = puVar6 + 1;
      }
      cVar3 = func_0x00018018e0d0(uVar1,puVar10[-1]);
      puVar7 = puVar10;
      while (puVar10 = puVar7 + -1, cVar3 != '\0') {
        cVar3 = func_0x00018018e0d0(uVar1,puVar7[-2]);
        puVar7 = puVar10;
      }
      if (puVar10 <= puVar6) break;
      uVar2 = *puVar6;
      *(int32_t *)puVar6 = *(int32_t *)puVar10;
      *(int32_t *)((longlong)puVar6 + 4) = *(int32_t *)((longlong)puVar7 + -4);
      uStackX_20 = (int32_t)uVar2;
      *(int32_t *)puVar10 = uStackX_20;
      puVar6 = puVar6 + 1;
      *(int *)((longlong)puVar7 + -4) = (int)((ulonglong)uVar2 >> 0x20);
    }
    param_3 = param_3 + -1;
    FUN_180190c90(puVar6,param_2,param_3);
    uVar4 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001801910ba)
// WARNING: Removing unreachable block (ram,0x0001801910c0)
// WARNING: Removing unreachable block (ram,0x0001801910d3)
// WARNING: Removing unreachable block (ram,0x0001801910f7)
// WARNING: Removing unreachable block (ram,0x000180191100)
// WARNING: Removing unreachable block (ram,0x000180191112)
// WARNING: Removing unreachable block (ram,0x000180191115)
// WARNING: Removing unreachable block (ram,0x000180191133)
// WARNING: Removing unreachable block (ram,0x000180191135)
// WARNING: Removing unreachable block (ram,0x000180191148)
// WARNING: Removing unreachable block (ram,0x000180191150)
// WARNING: Removing unreachable block (ram,0x000180191167)
// WARNING: Removing unreachable block (ram,0x00018019117d)
// WARNING: Removing unreachable block (ram,0x000180191190)
// WARNING: Removing unreachable block (ram,0x00018019119d)



// 函数: void FUN_180190c9f(uint64_t *param_1,uint64_t *param_2,longlong param_3)
void FUN_180190c9f(uint64_t *param_1,uint64_t *param_2,longlong param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  longlong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  uVar4 = in_RAX - (longlong)param_1;
  do {
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        lVar12 = (lVar5 + -2 >> 1) + 1;
        lVar11 = lVar12 * 2 + 2;
        do {
          uVar1 = param_1[lVar12 + -1];
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + -2;
          lVar8 = lVar12;
          for (lVar9 = lVar11; lVar9 < lVar5; lVar9 = lVar9 * 2 + 2) {
            cVar3 = func_0x00018018e0d0(param_1[lVar9],param_1[lVar9 + -1]);
            if (cVar3 != '\0') {
              lVar9 = lVar9 + -1;
            }
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + 4);
            lVar8 = lVar9;
          }
          if (lVar9 == lVar5) {
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9 + -1);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + -4);
            lVar8 = lVar9 + -1;
          }
          while (lVar12 < lVar8) {
            lVar9 = lVar8 + -1 >> 1;
            cVar3 = func_0x00018018e0d0(param_1[lVar9],uVar1);
            if (cVar3 == '\0') break;
            *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar9);
            *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar9 * 8 + 4);
            lVar8 = lVar9;
          }
          uStack0000000000000058 = (int32_t)uVar1;
          uStack000000000000005c = (int32_t)((ulonglong)uVar1 >> 0x20);
          *(int32_t *)(param_1 + lVar8) = uStack0000000000000058;
          *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) = uStack000000000000005c;
        } while (lVar12 != 0);
      }
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar5 = lVar5 + -1;
          lVar11 = 0;
          lVar12 = 2;
          *(int32_t *)param_2 = *(int32_t *)param_1;
          *(int32_t *)((longlong)param_2 + 4) = *(int32_t *)((longlong)param_1 + 4);
          bVar13 = lVar5 == 2;
          lVar8 = lVar11;
          if (2 < lVar5) {
            do {
              cVar3 = func_0x00018018e0d0(param_1[lVar12],param_1[lVar12 + -1]);
              lVar11 = lVar12;
              if (cVar3 != '\0') {
                lVar11 = lVar12 + -1;
              }
              *(int32_t *)(param_1 + lVar8) = *(int32_t *)(param_1 + lVar11);
              *(int32_t *)((longlong)param_1 + lVar8 * 8 + 4) =
                   *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4);
              lVar12 = lVar11 * 2 + 2;
              bVar13 = lVar12 == lVar5;
              lVar8 = lVar11;
            } while (lVar12 < lVar5);
          }
          if (bVar13) {
            *(int32_t *)(param_1 + lVar11) = *(int32_t *)(param_1 + lVar12 + -1);
            *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar12 * 8 + -4);
            lVar11 = lVar12 + -1;
          }
          while (0 < lVar11) {
            lVar5 = lVar11 + -1 >> 1;
            cVar3 = func_0x00018018e0d0(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            *(int32_t *)(param_1 + lVar11) = *(int32_t *)(param_1 + lVar5);
            *(int32_t *)((longlong)param_1 + lVar11 * 8 + 4) =
                 *(int32_t *)((longlong)param_1 + lVar5 * 8 + 4);
            lVar11 = lVar5;
          }
          param_2 = param_2 + -1;
          *(int *)((longlong)param_1 + lVar11 * 8 + 4) = (int)((ulonglong)uVar1 >> 0x20);
          *(int *)(param_1 + lVar11) = (int)uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    puVar10 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar6 = param_1 + (lVar5 >> 1);
    cVar3 = func_0x00018018e0d0(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x00018018e0d0(*param_1,*puVar10);
      puVar7 = param_1;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*puVar6,*puVar10);
        goto LAB_180190d41;
      }
    }
    else {
      cVar3 = func_0x00018018e0d0(*puVar6,*puVar10);
      puVar7 = puVar6;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*param_1,*puVar10);
        puVar6 = param_1;
LAB_180190d41:
        puVar7 = puVar6;
        if (cVar3 != '\0') {
          puVar7 = puVar10;
        }
      }
    }
    uVar1 = *puVar7;
    puVar6 = param_1;
    puVar10 = param_2;
    while( true ) {
      while (cVar3 = func_0x00018018e0d0(*puVar6,uVar1), cVar3 != '\0') {
        puVar6 = puVar6 + 1;
      }
      cVar3 = func_0x00018018e0d0(uVar1,puVar10[-1]);
      puVar7 = puVar10;
      while (puVar10 = puVar7 + -1, cVar3 != '\0') {
        cVar3 = func_0x00018018e0d0(uVar1,puVar7[-2]);
        puVar7 = puVar10;
      }
      if (puVar10 <= puVar6) break;
      uVar2 = *puVar6;
      *(int32_t *)puVar6 = *(int32_t *)puVar10;
      *(int32_t *)((longlong)puVar6 + 4) = *(int32_t *)((longlong)puVar7 + -4);
      uStack0000000000000058 = (int32_t)uVar2;
      *(int32_t *)puVar10 = uStack0000000000000058;
      puVar6 = puVar6 + 1;
      *(int *)((longlong)puVar7 + -4) = (int)((ulonglong)uVar2 >> 0x20);
    }
    param_3 = param_3 + -1;
    FUN_180190c90(puVar6,param_2,param_3);
    uVar4 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001801910ba)
// WARNING: Removing unreachable block (ram,0x0001801910c0)
// WARNING: Removing unreachable block (ram,0x0001801910d3)
// WARNING: Removing unreachable block (ram,0x0001801910f7)
// WARNING: Removing unreachable block (ram,0x000180191100)
// WARNING: Removing unreachable block (ram,0x000180191112)
// WARNING: Removing unreachable block (ram,0x000180191115)
// WARNING: Removing unreachable block (ram,0x000180191133)
// WARNING: Removing unreachable block (ram,0x000180191135)
// WARNING: Removing unreachable block (ram,0x000180191148)
// WARNING: Removing unreachable block (ram,0x000180191150)
// WARNING: Removing unreachable block (ram,0x000180191167)
// WARNING: Removing unreachable block (ram,0x00018019117d)
// WARNING: Removing unreachable block (ram,0x000180191190)
// WARNING: Removing unreachable block (ram,0x00018019119d)



// 函数: void FUN_180190cc0(void)
void FUN_180190cc0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *unaff_RBP;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *unaff_R14;
  longlong lVar11;
  longlong unaff_R15;
  bool bVar12;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  do {
    puVar7 = unaff_RBP;
    if (unaff_R15 < 1) break;
    puVar7 = unaff_RBP + -1;
    lVar4 = (longlong)unaff_RBP - (longlong)unaff_R14 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = unaff_R14 + (lVar4 >> 1);
    cVar3 = func_0x00018018e0d0(*unaff_R14,unaff_R14[lVar4 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x00018018e0d0(*unaff_R14,*puVar7);
      puVar6 = unaff_R14;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*puVar5,*puVar7);
        goto LAB_180190d41;
      }
    }
    else {
      cVar3 = func_0x00018018e0d0(*puVar5,*puVar7);
      puVar6 = puVar5;
      if (cVar3 == '\0') {
        cVar3 = func_0x00018018e0d0(*unaff_R14,*puVar7);
        puVar5 = unaff_R14;
LAB_180190d41:
        puVar6 = puVar5;
        if (cVar3 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    uVar1 = *puVar6;
    puVar7 = unaff_R14;
    puVar5 = unaff_RBP;
    while( true ) {
      while (cVar3 = func_0x00018018e0d0(*puVar7,uVar1), cVar3 != '\0') {
        puVar7 = puVar7 + 1;
      }
      cVar3 = func_0x00018018e0d0(uVar1,puVar5[-1]);
      puVar6 = puVar5;
      while (puVar5 = puVar6 + -1, cVar3 != '\0') {
        cVar3 = func_0x00018018e0d0(uVar1,puVar6[-2]);
        puVar6 = puVar5;
      }
      if (puVar5 <= puVar7) break;
      uVar2 = *puVar7;
      *(int32_t *)puVar7 = *(int32_t *)puVar5;
      *(int32_t *)((longlong)puVar7 + 4) = *(int32_t *)((longlong)puVar6 + -4);
      uStack0000000000000058 = (int32_t)uVar2;
      *(int32_t *)puVar5 = uStack0000000000000058;
      puVar7 = puVar7 + 1;
      *(int *)((longlong)puVar6 + -4) = (int)((ulonglong)uVar2 >> 0x20);
    }
    unaff_R15 = unaff_R15 + -1;
    FUN_180190c90(puVar7,unaff_RBP,unaff_R15);
    unaff_RBP = puVar7;
  } while (0xe0 < (longlong)((longlong)puVar7 - (longlong)unaff_R14 & 0xfffffffffffffff8U));
  if (unaff_R15 != 0) {
    return;
  }
  lVar4 = (longlong)puVar7 - (longlong)unaff_R14 >> 3;
  if (1 < lVar4) {
    lVar11 = (lVar4 + -2 >> 1) + 1;
    lVar10 = lVar11 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar11 + -1];
      lVar11 = lVar11 + -1;
      lVar10 = lVar10 + -2;
      lVar8 = lVar11;
      for (lVar9 = lVar10; lVar9 < lVar4; lVar9 = lVar9 * 2 + 2) {
        cVar3 = func_0x00018018e0d0(unaff_R14[lVar9],unaff_R14[lVar9 + -1]);
        if (cVar3 != '\0') {
          lVar9 = lVar9 + -1;
        }
        *(int32_t *)(unaff_R14 + lVar8) = *(int32_t *)(unaff_R14 + lVar9);
        *(int32_t *)((longlong)unaff_R14 + lVar8 * 8 + 4) =
             *(int32_t *)((longlong)unaff_R14 + lVar9 * 8 + 4);
        lVar8 = lVar9;
      }
      if (lVar9 == lVar4) {
        *(int32_t *)(unaff_R14 + lVar8) = *(int32_t *)(unaff_R14 + lVar9 + -1);
        *(int32_t *)((longlong)unaff_R14 + lVar8 * 8 + 4) =
             *(int32_t *)((longlong)unaff_R14 + lVar9 * 8 + -4);
        lVar8 = lVar9 + -1;
      }
      while (lVar11 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        cVar3 = func_0x00018018e0d0(unaff_R14[lVar9],uVar1);
        if (cVar3 == '\0') break;
        *(int32_t *)(unaff_R14 + lVar8) = *(int32_t *)(unaff_R14 + lVar9);
        *(int32_t *)((longlong)unaff_R14 + lVar8 * 8 + 4) =
             *(int32_t *)((longlong)unaff_R14 + lVar9 * 8 + 4);
        lVar8 = lVar9;
      }
      uStack0000000000000058 = (int32_t)uVar1;
      uStack000000000000005c = (int32_t)((ulonglong)uVar1 >> 0x20);
      *(int32_t *)(unaff_R14 + lVar8) = uStack0000000000000058;
      *(int32_t *)((longlong)unaff_R14 + lVar8 * 8 + 4) = uStack000000000000005c;
    } while (lVar11 != 0);
  }
  if (1 < lVar4) {
    puVar7 = puVar7 + -1;
    do {
      uVar1 = *puVar7;
      lVar4 = lVar4 + -1;
      lVar10 = 0;
      lVar11 = 2;
      *(int32_t *)puVar7 = *(int32_t *)unaff_R14;
      *(int32_t *)((longlong)puVar7 + 4) = *(int32_t *)((longlong)unaff_R14 + 4);
      bVar12 = lVar4 == 2;
      lVar8 = lVar10;
      if (2 < lVar4) {
        do {
          cVar3 = func_0x00018018e0d0(unaff_R14[lVar11],unaff_R14[lVar11 + -1]);
          lVar10 = lVar11;
          if (cVar3 != '\0') {
            lVar10 = lVar11 + -1;
          }
          *(int32_t *)(unaff_R14 + lVar8) = *(int32_t *)(unaff_R14 + lVar10);
          *(int32_t *)((longlong)unaff_R14 + lVar8 * 8 + 4) =
               *(int32_t *)((longlong)unaff_R14 + lVar10 * 8 + 4);
          lVar11 = lVar10 * 2 + 2;
          bVar12 = lVar11 == lVar4;
          lVar8 = lVar10;
        } while (lVar11 < lVar4);
      }
      if (bVar12) {
        *(int32_t *)(unaff_R14 + lVar10) = *(int32_t *)(unaff_R14 + lVar11 + -1);
        *(int32_t *)((longlong)unaff_R14 + lVar10 * 8 + 4) =
             *(int32_t *)((longlong)unaff_R14 + lVar11 * 8 + -4);
        lVar10 = lVar11 + -1;
      }
      while (0 < lVar10) {
        lVar4 = lVar10 + -1 >> 1;
        cVar3 = func_0x00018018e0d0(unaff_R14[lVar4],uVar1);
        if (cVar3 == '\0') break;
        *(int32_t *)(unaff_R14 + lVar10) = *(int32_t *)(unaff_R14 + lVar4);
        *(int32_t *)((longlong)unaff_R14 + lVar10 * 8 + 4) =
             *(int32_t *)((longlong)unaff_R14 + lVar4 * 8 + 4);
        lVar10 = lVar4;
      }
      puVar7 = puVar7 + -1;
      *(int *)((longlong)unaff_R14 + lVar10 * 8 + 4) = (int)((ulonglong)uVar1 >> 0x20);
      *(int *)(unaff_R14 + lVar10) = (int)uVar1;
      lVar4 = (8 - (longlong)unaff_R14) + (longlong)puVar7 >> 3;
    } while (1 < lVar4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001801910ba)
// WARNING: Removing unreachable block (ram,0x0001801910c0)
// WARNING: Removing unreachable block (ram,0x0001801910d3)
// WARNING: Removing unreachable block (ram,0x0001801910f7)
// WARNING: Removing unreachable block (ram,0x000180191100)
// WARNING: Removing unreachable block (ram,0x000180191112)
// WARNING: Removing unreachable block (ram,0x000180191115)
// WARNING: Removing unreachable block (ram,0x000180191133)
// WARNING: Removing unreachable block (ram,0x000180191135)
// WARNING: Removing unreachable block (ram,0x000180191148)
// WARNING: Removing unreachable block (ram,0x000180191150)
// WARNING: Removing unreachable block (ram,0x000180191167)
// WARNING: Removing unreachable block (ram,0x00018019117d)
// WARNING: Removing unreachable block (ram,0x000180191190)
// WARNING: Removing unreachable block (ram,0x00018019119d)



// 函数: void FUN_180190e00(void)
void FUN_180190e00(void)

{
  uint64_t uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  uint64_t in_R9;
  longlong lVar5;
  int32_t *unaff_R14;
  longlong lVar6;
  uint64_t *puVar7;
  longlong unaff_R15;
  longlong lVar8;
  bool bVar9;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  if (unaff_R15 != 0) {
    return;
  }
  lVar8 = unaff_RBP - (longlong)unaff_R14 >> 3;
  _uStack0000000000000058 = in_R9;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = *(uint64_t *)(unaff_R14 + lVar6 * 2 + -2);
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      _uStack0000000000000058 = uVar1;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar4 * 2),
                                    *(uint64_t *)(unaff_R14 + lVar4 * 2 + -2));
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + 1];
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2 + -2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + -1];
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar4 * 2),uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + 1];
        lVar3 = lVar4;
      }
      unaff_R14[lVar3 * 2] = uStack0000000000000058;
      unaff_R14[lVar3 * 2 + 1] = uStack000000000000005c;
    } while (lVar6 != 0);
  }
  if (1 < lVar8) {
    puVar7 = (uint64_t *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar7;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(int32_t *)puVar7 = *unaff_R14;
      *(int32_t *)((longlong)puVar7 + 4) = unaff_R14[1];
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar6 * 2),
                                      *(uint64_t *)(unaff_R14 + lVar6 * 2 + -2));
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          unaff_R14[lVar3 * 2] = unaff_R14[lVar5 * 2];
          unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar5 * 2 + 1];
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        unaff_R14[lVar5 * 2] = unaff_R14[lVar6 * 2 + -2];
        unaff_R14[lVar5 * 2 + 1] = unaff_R14[lVar6 * 2 + -1];
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar8 * 2),uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar5 * 2] = unaff_R14[lVar8 * 2];
        unaff_R14[lVar5 * 2 + 1] = unaff_R14[lVar8 * 2 + 1];
        lVar5 = lVar8;
      }
      puVar7 = puVar7 + -1;
      unaff_R14[lVar5 * 2 + 1] = (int)((ulonglong)uVar1 >> 0x20);
      unaff_R14[lVar5 * 2] = (int)uVar1;
      lVar8 = (8 - (longlong)unaff_R14) + (longlong)puVar7 >> 3;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001801910ba)
// WARNING: Removing unreachable block (ram,0x0001801910c0)
// WARNING: Removing unreachable block (ram,0x0001801910d3)
// WARNING: Removing unreachable block (ram,0x0001801910f7)
// WARNING: Removing unreachable block (ram,0x000180191100)
// WARNING: Removing unreachable block (ram,0x000180191112)
// WARNING: Removing unreachable block (ram,0x000180191115)
// WARNING: Removing unreachable block (ram,0x000180191133)
// WARNING: Removing unreachable block (ram,0x000180191135)
// WARNING: Removing unreachable block (ram,0x000180191148)
// WARNING: Removing unreachable block (ram,0x000180191150)
// WARNING: Removing unreachable block (ram,0x000180191167)
// WARNING: Removing unreachable block (ram,0x00018019117d)
// WARNING: Removing unreachable block (ram,0x000180191190)
// WARNING: Removing unreachable block (ram,0x00018019119d)



// 函数: void FUN_180190e0a(void)
void FUN_180190e0a(void)

{
  uint64_t uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  uint64_t in_R9;
  longlong lVar5;
  int32_t *unaff_R14;
  longlong lVar6;
  uint64_t *puVar7;
  longlong lVar8;
  bool bVar9;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  lVar8 = unaff_RBP - (longlong)unaff_R14 >> 3;
  _uStack0000000000000058 = in_R9;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = *(uint64_t *)(unaff_R14 + lVar6 * 2 + -2);
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      _uStack0000000000000058 = uVar1;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar4 * 2),
                                    *(uint64_t *)(unaff_R14 + lVar4 * 2 + -2));
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + 1];
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2 + -2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + -1];
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar4 * 2),uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar3 * 2] = unaff_R14[lVar4 * 2];
        unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar4 * 2 + 1];
        lVar3 = lVar4;
      }
      unaff_R14[lVar3 * 2] = uStack0000000000000058;
      unaff_R14[lVar3 * 2 + 1] = uStack000000000000005c;
    } while (lVar6 != 0);
  }
  if (1 < lVar8) {
    puVar7 = (uint64_t *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar7;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(int32_t *)puVar7 = *unaff_R14;
      *(int32_t *)((longlong)puVar7 + 4) = unaff_R14[1];
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar6 * 2),
                                      *(uint64_t *)(unaff_R14 + lVar6 * 2 + -2));
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          unaff_R14[lVar3 * 2] = unaff_R14[lVar5 * 2];
          unaff_R14[lVar3 * 2 + 1] = unaff_R14[lVar5 * 2 + 1];
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        unaff_R14[lVar5 * 2] = unaff_R14[lVar6 * 2 + -2];
        unaff_R14[lVar5 * 2 + 1] = unaff_R14[lVar6 * 2 + -1];
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(*(uint64_t *)(unaff_R14 + lVar8 * 2),uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar5 * 2] = unaff_R14[lVar8 * 2];
        unaff_R14[lVar5 * 2 + 1] = unaff_R14[lVar8 * 2 + 1];
        lVar5 = lVar8;
      }
      puVar7 = puVar7 + -1;
      unaff_R14[lVar5 * 2 + 1] = (int)((ulonglong)uVar1 >> 0x20);
      unaff_R14[lVar5 * 2] = (int)uVar1;
      lVar8 = (8 - (longlong)unaff_R14) + (longlong)puVar7 >> 3;
    } while (1 < lVar8);
  }
  return;
}





// 函数: void FUN_180190e30(longlong param_1,longlong param_2,longlong param_3,int8_t param_4)
void FUN_180190e30(longlong param_1,longlong param_2,longlong param_3,int8_t param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  int8_t auStack_368 [848];
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = param_2 - param_1;
  do {
    if ((lVar2 < 0x5f28) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1801912b0(param_1,param_2,param_2,param_4,uVar4);
      }
      return;
    }
    lVar2 = ((param_2 - param_1) / 0x690) * 0x348 + param_1;
    cVar1 = FUN_180190530(param_2 - param_1,param_1,lVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_180190530();
      lVar3 = param_1;
      if (cVar1 == '\0') {
        cVar1 = FUN_180190530();
        goto LAB_180190f00;
      }
    }
    else {
      cVar1 = FUN_180190530();
      lVar3 = lVar2;
      if (cVar1 == '\0') {
        cVar1 = FUN_180190530();
        lVar2 = param_1;
LAB_180190f00:
        lVar3 = lVar2;
        if (cVar1 != '\0') {
          lVar3 = param_2 + -0x348;
        }
      }
    }
    FUN_18018e7e0(auStack_368,lVar3);
    lVar3 = FUN_180191560(param_1,param_2,auStack_368);
    FUN_1801431d0(auStack_368);
    param_3 = param_3 + -1;
    FUN_180190e30(lVar3,param_2,param_3,param_4);
    lVar2 = lVar3 - param_1;
    param_2 = lVar3;
  } while( true );
}





