#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part215.c - 3 个函数

// 函数: void FUN_180190fa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_180190fa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uStackX_10;
  undefined4 uStackX_14;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  
  lVar8 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = param_1[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = func_0x00018018e0d0(param_1[lVar4],param_1[lVar4 + -1]);
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4 + -1);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + -4);
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(param_1[lVar4],uVar1);
        if (cVar2 == '\0') break;
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      uStackX_20 = (undefined4)uVar1;
      uStackX_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + lVar3) = uStackX_20;
      *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) = uStackX_24;
    } while (lVar6 != 0);
  }
  puVar7 = param_2;
  if (param_2 < param_3) {
    do {
      cVar2 = func_0x00018018e0d0(*puVar7,*param_1);
      if (cVar2 != '\0') {
        uVar1 = *puVar7;
        lVar5 = 0;
        lVar6 = 2;
        *(undefined4 *)puVar7 = *(undefined4 *)param_1;
        *(undefined4 *)((longlong)puVar7 + 4) = *(undefined4 *)((longlong)param_1 + 4);
        bVar9 = lVar8 == 2;
        lVar3 = lVar5;
        if (2 < lVar8) {
          do {
            cVar2 = func_0x00018018e0d0(param_1[lVar6],param_1[lVar6 + -1]);
            lVar5 = lVar6;
            if (cVar2 != '\0') {
              lVar5 = lVar6 + -1;
            }
            *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar5);
            *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
                 *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4);
            lVar6 = lVar5 * 2 + 2;
            bVar9 = lVar6 == lVar8;
            lVar3 = lVar5;
          } while (lVar6 < lVar8);
        }
        if (bVar9) {
          *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6 + -1);
          *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
               *(undefined4 *)((longlong)param_1 + lVar6 * 8 + -4);
          lVar5 = lVar6 + -1;
        }
        while (0 < lVar5) {
          lVar6 = lVar5 + -1 >> 1;
          cVar2 = func_0x00018018e0d0(param_1[lVar6],uVar1);
          if (cVar2 == '\0') break;
          *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6);
          *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
               *(undefined4 *)((longlong)param_1 + lVar6 * 8 + 4);
          lVar5 = lVar6;
        }
        uStackX_20 = (undefined4)uVar1;
        uStackX_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(param_1 + lVar5) = uStackX_20;
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) = uStackX_24;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 < param_3);
  }
  if (1 < lVar8) {
    param_2 = param_2 + -1;
    do {
      uVar1 = *param_2;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018018e0d0(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar5);
          *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
               *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6 + -1);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(param_1[lVar8],uVar1);
        if (cVar2 == '\0') break;
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar8);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar8 * 8 + 4);
        lVar5 = lVar8;
      }
      uStackX_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
      param_2 = param_2 + -1;
      uStackX_10 = (undefined4)uVar1;
      *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) = uStackX_14;
      *(undefined4 *)(param_1 + lVar5) = uStackX_10;
      lVar8 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar8);
  }
  return;
}





// 函数: void FUN_180190fbb(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_180190fbb(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong unaff_R15;
  longlong lVar8;
  bool bVar9;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  lVar8 = unaff_R15 - (longlong)param_1 >> 3;
  puVar7 = param_2;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = param_1[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = func_0x00018018e0d0(param_1[lVar4],param_1[lVar4 + -1]);
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4 + -1);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + -4);
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(param_1[lVar4],uVar1);
        if (cVar2 == '\0') break;
        *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar4);
        *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      uStack0000000000000078 = (undefined4)uVar1;
      uStack000000000000007c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + lVar3) = uStack0000000000000078;
      *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) = uStack000000000000007c;
      param_2 = _uStack0000000000000068;
      puVar7 = _uStack0000000000000068;
    } while (lVar6 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar2 = func_0x00018018e0d0(*param_2,*param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      lVar5 = 0;
      lVar6 = 2;
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018018e0d0(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar5);
          *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
               *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6 + -1);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(param_1[lVar6],uVar1);
        if (cVar2 == '\0') break;
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar6 * 8 + 4);
        lVar5 = lVar6;
      }
      uStack0000000000000078 = (undefined4)uVar1;
      uStack000000000000007c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + lVar5) = uStack0000000000000078;
      *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) = uStack000000000000007c;
    }
    puVar7 = _uStack0000000000000068;
  }
  if (1 < lVar8) {
    puVar7 = puVar7 + -1;
    do {
      uVar1 = *puVar7;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(undefined4 *)puVar7 = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)puVar7 + 4) = *(undefined4 *)((longlong)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018018e0d0(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar5);
          *(undefined4 *)((longlong)param_1 + lVar3 * 8 + 4) =
               *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar6 + -1);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018018e0d0(param_1[lVar8],uVar1);
        if (cVar2 == '\0') break;
        *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar8);
        *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar8 * 8 + 4);
        lVar5 = lVar8;
      }
      uStack000000000000006c = (undefined4)((ulonglong)uVar1 >> 0x20);
      puVar7 = puVar7 + -1;
      uStack0000000000000068 = (undefined4)uVar1;
      *(undefined4 *)((longlong)param_1 + lVar5 * 8 + 4) = uStack000000000000006c;
      *(undefined4 *)(param_1 + lVar5) = uStack0000000000000068;
      lVar8 = (8 - (longlong)param_1) + (longlong)puVar7 >> 3;
    } while (1 < lVar8);
  }
  return;
}





// 函数: void FUN_1801911b1(void)
void FUN_1801911b1(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *unaff_RDI;
  undefined8 *puVar6;
  longlong unaff_R15;
  longlong lVar7;
  bool bVar8;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  puVar6 = (undefined8 *)(in_RAX + -8);
  do {
    uVar1 = *puVar6;
    lVar7 = unaff_R15 + -1;
    lVar5 = 0;
    lVar4 = 2;
    *(undefined4 *)puVar6 = *unaff_RDI;
    *(undefined4 *)((longlong)puVar6 + 4) = unaff_RDI[1];
    bVar8 = lVar7 == 2;
    lVar3 = lVar5;
    _uStack0000000000000068 = uVar1;
    if (2 < lVar7) {
      do {
        cVar2 = func_0x00018018e0d0(*(undefined8 *)(unaff_RDI + lVar4 * 2),
                                    *(undefined8 *)(unaff_RDI + lVar4 * 2 + -2));
        lVar5 = lVar4;
        if (cVar2 != '\0') {
          lVar5 = lVar4 + -1;
        }
        unaff_RDI[lVar3 * 2] = unaff_RDI[lVar5 * 2];
        unaff_RDI[lVar3 * 2 + 1] = unaff_RDI[lVar5 * 2 + 1];
        lVar4 = lVar5 * 2 + 2;
        bVar8 = lVar4 == lVar7;
        lVar3 = lVar5;
      } while (lVar4 < lVar7);
    }
    if (bVar8) {
      unaff_RDI[lVar5 * 2] = unaff_RDI[lVar4 * 2 + -2];
      unaff_RDI[lVar5 * 2 + 1] = unaff_RDI[lVar4 * 2 + -1];
      lVar5 = lVar4 + -1;
    }
    while (0 < lVar5) {
      lVar4 = lVar5 + -1 >> 1;
      cVar2 = func_0x00018018e0d0(*(undefined8 *)(unaff_RDI + lVar4 * 2),uVar1);
      if (cVar2 == '\0') break;
      unaff_RDI[lVar5 * 2] = unaff_RDI[lVar4 * 2];
      unaff_RDI[lVar5 * 2 + 1] = unaff_RDI[lVar4 * 2 + 1];
      lVar5 = lVar4;
    }
    puVar6 = puVar6 + -1;
    unaff_RDI[lVar5 * 2 + 1] = uStack000000000000006c;
    unaff_RDI[lVar5 * 2] = uStack0000000000000068;
    unaff_R15 = (8 - (longlong)unaff_RDI) + (longlong)puVar6 >> 3;
    if (unaff_R15 < 2) {
      return;
    }
  } while( true );
}





