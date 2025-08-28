#include "TaleWorlds.Native.Split.h"

// 99_part_02_part008.c - 6 个函数

// 函数: void FUN_1800ec430(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)
void FUN_1800ec430(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  
  lVar8 = *param_1;
  iVar4 = (int)param_1[1];
  lStack_80 = param_1[1];
  lVar12 = (longlong)(int)param_2[1] - (longlong)iVar4;
  lStack_88 = lVar8;
  if (1 < lVar12) {
    lVar14 = (lVar12 + -2 >> 1) + 1;
    do {
      uStack_78 = (undefined4)*param_1;
      uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_70 = (uint)param_1[1];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
      lVar14 = lVar14 + -1;
      uVar10 = (int)lVar14 + iVar4;
      uVar9 = uVar10 >> 0xb;
      plVar1 = (longlong *)
               (*(longlong *)(lVar8 + 8 + (ulonglong)uVar9 * 8) +
               (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
      lStack_88 = *plVar1;
      lStack_80 = plVar1[1];
      FUN_1800ed130(&uStack_78,lVar14,lVar12,lVar14,&lStack_88,param_4);
    } while (lVar14 != 0);
  }
  uStack_78 = (undefined4)*param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  lVar8 = *param_2;
  uVar9 = *(uint *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar4 = *(int *)(param_3 + 8);
  uStack_70 = uVar9;
  if ((int)uVar9 < iVar4) {
    uVar10 = *(uint *)(param_1 + 1);
    lVar14 = *param_1;
    uVar13 = (ulonglong)(uVar10 - (uVar10 & 0xfffff800));
    lVar12 = (ulonglong)(uVar10 >> 0xb) * 8;
    do {
      lVar17 = *(longlong *)(lVar12 + 8 + lVar14);
      uVar15 = uVar9 >> 0xb;
      puVar11 = (ulonglong *)
                ((ulonglong)(uVar9 + uVar15 * -0x800) * 0x10 +
                *(longlong *)(lVar8 + 8 + (ulonglong)uVar15 * 8));
      uVar5 = *puVar11;
      uVar6 = *(ulonglong *)(lVar17 + uVar13 * 0x10);
      bVar16 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        bVar16 = *(int *)(*(longlong *)(**(longlong **)(lVar17 + 8 + uVar13 * 0x10) + 0x18) + 0x184)
                 < *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184);
      }
      if (bVar16) {
        lVar17 = param_2[1];
        puVar2 = (undefined8 *)
                 (*(longlong *)(lVar8 + 8 + (ulonglong)uVar15 * 8) +
                 (ulonglong)(uVar9 + uVar15 * -0x800) * 0x10);
        uStack_68 = *puVar2;
        uStack_60 = puVar2[1];
        puVar2 = (undefined8 *)(*(longlong *)(lVar12 + 8 + lVar14) + uVar13 * 0x10);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)
                 (*(longlong *)(lVar8 + 8 + (ulonglong)uVar15 * 8) +
                 (ulonglong)(uVar9 + uVar15 * -0x800) * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        lStack_58 = *param_1;
        lStack_50 = param_1[1];
        FUN_1800ed130(&lStack_58,0,(longlong)(int)lVar17 - (longlong)(int)uVar10,0,&uStack_68,
                      param_4);
        lVar14 = *param_1;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar4);
  }
  lVar8 = *param_2;
  uVar9 = *(uint *)(param_2 + 1);
  lStack_50 = param_2[1];
  lVar12 = param_1[1];
  if (1 < (longlong)(int)uVar9 - (longlong)(int)lVar12) {
    lVar17 = *param_1;
    lVar18 = param_1[1];
    uVar10 = (uint)lVar18;
    lVar14 = lVar17 + (ulonglong)(uVar10 >> 0xb) * 8;
    lStack_58 = lVar8;
    do {
      uVar15 = uVar9 - 1;
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar15 >> 0xb) * 8) +
               (ulonglong)(uVar15 & 0x7ff) * 0x10);
      uStack_48 = *puVar2;
      uStack_40 = puVar2[1];
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar14 + 8) + (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
      uVar7 = puVar2[1];
      puVar3 = (undefined8 *)
               (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar15 >> 0xb) * 8) +
               (ulonglong)(uVar15 & 0x7ff) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      lStack_38 = lVar17;
      lStack_30 = lVar18;
      FUN_1800ed130(&lStack_38,0,((longlong)(int)uVar9 - (longlong)(int)uVar10) + -1,0,&uStack_48,
                    param_4);
      uVar9 = uVar15;
    } while (1 < (longlong)(int)uVar15 - (longlong)(int)lVar12);
  }
  return;
}



longlong * FUN_1800ec740(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  lVar4 = *param_2;
  uVar12 = *(uint *)(param_2 + 1);
  lVar5 = *param_3;
  while( true ) {
    while( true ) {
      cVar10 = func_0x0001800d4090(*(undefined8 *)
                                    (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar12 >> 0xb) * 8) +
                                     0x10 + (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800) * 0x18),
                                   *(undefined8 *)(param_4 + 0x10));
      if (cVar10 == '\0') break;
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 1) = uVar12;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    uVar11 = *(uint *)(param_3 + 1);
    cVar10 = func_0x0001800d4090(*(undefined8 *)(param_4 + 0x10),
                                 *(undefined8 *)
                                  (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar11 >> 0xb) * 8) + 0x10
                                  + (ulonglong)(uVar11 + (uVar11 >> 0xb) * -0x800) * 0x18));
    if (cVar10 != '\0') {
      do {
        uVar11 = uVar11 - 1;
        cVar10 = func_0x0001800d4090(*(undefined8 *)(param_4 + 0x10),
                                     *(undefined8 *)
                                      (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar11 >> 0xb) * 8) +
                                       0x10 + (ulonglong)(uVar11 + (uVar11 >> 0xb) * -0x800) * 0x18)
                                    );
      } while (cVar10 != '\0');
      uVar12 = *(uint *)(param_2 + 1);
      *(uint *)(param_3 + 1) = uVar11;
    }
    if ((int)uVar11 <= (int)uVar12) break;
    uVar11 = (uint)param_3[1] >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(*param_3 + 8 + (ulonglong)uVar11 * 8) +
             (ulonglong)((uint)param_3[1] + uVar11 * -0x800) * 0x18);
    uVar11 = (uint)param_2[1] >> 0xb;
    uVar13 = (ulonglong)((uint)param_2[1] + uVar11 * -0x800);
    uVar12 = uVar12 + 1;
    *(uint *)(param_2 + 1) = uVar12;
    lVar6 = *(longlong *)(*param_2 + 8 + (ulonglong)uVar11 * 8);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + uVar13 * 0x18);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    uVar3 = *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
    puVar2 = (undefined8 *)(lVar6 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18) = puVar1[2];
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar3;
  }
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  return param_1;
}



longlong * FUN_1800ec8e0(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  lVar2 = *param_3;
  uVar3 = *param_4;
  lVar4 = *param_2;
  uVar12 = *(uint *)(param_2 + 1);
  while( true ) {
    while( true ) {
      uVar11 = (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800);
      lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)(uVar12 >> 0xb) * 8);
      uVar10 = *(ulonglong *)(lVar5 + uVar11 * 0x10);
      bVar14 = uVar10 < uVar3;
      if (uVar10 == uVar3) {
        bVar14 = *(int *)(*(longlong *)(*(longlong *)param_4[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(**(longlong **)(lVar5 + 8 + uVar11 * 0x10) + 0x18) + 0x184);
      }
      if (!bVar14) break;
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 1) = uVar12;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    uVar12 = *(uint *)(param_3 + 1);
    while( true ) {
      uVar11 = (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800);
      lVar5 = *(longlong *)(lVar2 + 8 + (ulonglong)(uVar12 >> 0xb) * 8);
      uVar10 = *(ulonglong *)(lVar5 + uVar11 * 0x10);
      bVar14 = uVar3 < uVar10;
      if (uVar3 == uVar10) {
        bVar14 = *(int *)(*(longlong *)(**(longlong **)(lVar5 + 8 + uVar11 * 0x10) + 0x18) + 0x184)
                 < *(int *)(*(longlong *)(*(longlong *)param_4[1] + 0x18) + 0x184);
      }
      if (!bVar14) break;
      uVar12 = uVar12 - 1;
      *(uint *)(param_3 + 1) = uVar12;
    }
    if ((int)uVar12 <= (int)param_2[1]) break;
    uVar12 = (uint)param_3[1] >> 0xb;
    puVar13 = (undefined8 *)
              (*(longlong *)(*param_3 + 8 + (ulonglong)uVar12 * 8) +
              (ulonglong)((uint)param_3[1] + uVar12 * -0x800) * 0x10);
    uVar12 = (uint)param_2[1] >> 0xb;
    lVar5 = *(longlong *)(*param_2 + 8 + (ulonglong)uVar12 * 8);
    uVar6 = *puVar13;
    uVar7 = puVar13[1];
    uVar10 = (ulonglong)((uint)param_2[1] + uVar12 * -0x800);
    uVar12 = (int)param_2[1] + 1;
    *(uint *)(param_2 + 1) = uVar12;
    puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x10);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *puVar13 = uVar8;
    puVar13[1] = uVar9;
  }
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  return param_1;
}






// 函数: void FUN_1800eca80(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1800eca80(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  int iStack_20;
  
  lVar11 = param_4 * 2 + 2;
  if (lVar11 < param_3) {
    iVar7 = (int)param_1[1];
    lVar4 = *param_1;
    lVar16 = param_4;
    do {
      uVar12 = (int)lVar11 + iVar7 + -1;
      uVar10 = uVar12 >> 0xb;
      puVar9 = (ulonglong *)
               (*(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8) +
               (ulonglong)(uVar12 + uVar10 * -0x800) * 0x18);
      uVar12 = (int)lVar11 + iVar7;
      uVar10 = uVar12 >> 0xb;
      uVar14 = (ulonglong)(uVar12 + uVar10 * -0x800);
      lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      uVar15 = *(ulonglong *)(lVar5 + uVar14 * 0x18);
      uVar6 = *puVar9;
      bVar17 = uVar15 < uVar6;
      if (uVar15 == uVar6) {
        bVar17 = *(ulonglong *)(lVar5 + uVar14 * 0x18 + 8) < puVar9[1];
      }
      param_4 = lVar11 + -1;
      if (!bVar17) {
        param_4 = lVar11;
      }
      uVar12 = iVar7 + (int)param_4;
      lVar11 = param_4 * 2 + 2;
      uVar10 = uVar12 >> 0xb;
      uVar15 = (ulonglong)(uVar12 + uVar10 * -0x800);
      lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      puVar1 = (undefined8 *)(lVar5 + uVar15 * 0x18);
      uVar8 = puVar1[1];
      uVar12 = iVar7 + (int)lVar16;
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar15 * 0x18);
      uVar10 = uVar12 >> 0xb;
      uVar15 = (ulonglong)(uVar12 + uVar10 * -0x800);
      lVar16 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      puVar2 = (undefined8 *)(lVar16 + uVar15 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18) = uVar3;
      lVar16 = param_4;
    } while (lVar11 < param_3);
  }
  if (lVar11 == param_3) {
    uVar12 = (int)param_1[1] + -1 + (int)lVar11;
    uVar10 = uVar12 >> 0xb;
    uVar15 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar4 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8);
    puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x18);
    uVar8 = puVar1[1];
    uVar12 = (int)param_1[1] + (int)param_4;
    uVar3 = *(undefined8 *)(lVar4 + 0x10 + uVar15 * 0x18);
    param_4 = lVar11 + -1;
    uVar10 = uVar12 >> 0xb;
    uVar15 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar11 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar11 + uVar15 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar11 + 0x10 + uVar15 * 0x18) = uVar3;
  }
  lVar11 = *param_1;
  iStack_20 = (int)param_1[1];
  while (iVar7 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar10 = (int)param_4 + iStack_20;
    uVar12 = uVar10 & 0x7ff;
    uVar10 = uVar10 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(lVar11 + 8 + (ulonglong)uVar10 * 8) + (ulonglong)uVar12 * 0x18);
    uVar15 = *puVar9;
    bVar17 = uVar15 < *param_5;
    if (uVar15 == *param_5) {
      bVar17 = puVar9[1] < param_5[1];
    }
    if (!bVar17) break;
    lVar4 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar10 * 8);
    uVar13 = iVar7 + iStack_20;
    puVar1 = (undefined8 *)(lVar4 + (ulonglong)uVar12 * 0x18);
    uVar8 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar12 * 0x18);
    uVar10 = uVar13 >> 0xb;
    uVar15 = (ulonglong)(uVar13 + uVar10 * -0x800);
    lVar4 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar4 + uVar15 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar4 + 0x10 + uVar15 * 0x18) = uVar3;
  }
  uVar6 = param_5[1];
  uVar12 = iVar7 + iStack_20;
  uVar15 = param_5[2];
  uVar10 = uVar12 >> 0xb;
  uVar14 = (ulonglong)(uVar12 + uVar10 * -0x800);
  lVar11 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar10 * 8);
  puVar9 = (ulonglong *)(lVar11 + uVar14 * 0x18);
  *puVar9 = *param_5;
  puVar9[1] = uVar6;
  *(ulonglong *)(lVar11 + 0x10 + uVar14 * 0x18) = uVar15;
  return;
}






// 函数: void FUN_1800eca95(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_1800eca95(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong unaff_RBX;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  int iStackX_8;
  ulonglong *in_stack_00000050;
  
  if (unaff_RBX < param_3) {
    iVar7 = (int)param_1[1];
    lVar4 = *param_1;
    lVar15 = param_4;
    do {
      uVar11 = (int)unaff_RBX + iVar7 + -1;
      uVar10 = uVar11 >> 0xb;
      puVar9 = (ulonglong *)
               (*(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8) +
               (ulonglong)(uVar11 + uVar10 * -0x800) * 0x18);
      uVar11 = (int)unaff_RBX + iVar7;
      uVar10 = uVar11 >> 0xb;
      uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
      lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      uVar14 = *(ulonglong *)(lVar5 + uVar13 * 0x18);
      uVar6 = *puVar9;
      bVar16 = uVar14 < uVar6;
      if (uVar14 == uVar6) {
        bVar16 = *(ulonglong *)(lVar5 + uVar13 * 0x18 + 8) < puVar9[1];
      }
      param_4 = unaff_RBX + -1;
      if (!bVar16) {
        param_4 = unaff_RBX;
      }
      uVar11 = iVar7 + (int)param_4;
      unaff_RBX = param_4 * 2 + 2;
      uVar10 = uVar11 >> 0xb;
      uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
      lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x18);
      uVar8 = puVar1[1];
      uVar11 = iVar7 + (int)lVar15;
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
      uVar10 = uVar11 >> 0xb;
      uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
      lVar15 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
      puVar2 = (undefined8 *)(lVar15 + uVar14 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar15 + 0x10 + uVar14 * 0x18) = uVar3;
      lVar15 = param_4;
    } while (unaff_RBX < param_3);
  }
  if (unaff_RBX == param_3) {
    uVar11 = (int)param_1[1] + -1 + (int)unaff_RBX;
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar4 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8);
    puVar1 = (undefined8 *)(lVar4 + uVar14 * 0x18);
    uVar8 = puVar1[1];
    uVar11 = (int)param_1[1] + (int)param_4;
    uVar3 = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
    param_4 = unaff_RBX + -1;
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar4 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar4 + uVar14 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18) = uVar3;
  }
  lVar4 = *param_1;
  iStackX_8 = (int)param_1[1];
  while (iVar7 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar10 = (int)param_4 + iStackX_8;
    uVar11 = uVar10 & 0x7ff;
    uVar10 = uVar10 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8) + (ulonglong)uVar11 * 0x18);
    uVar14 = *puVar9;
    bVar16 = uVar14 < *in_stack_00000050;
    if (uVar14 == *in_stack_00000050) {
      bVar16 = puVar9[1] < in_stack_00000050[1];
    }
    if (!bVar16) break;
    lVar15 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
    uVar12 = iVar7 + iStackX_8;
    puVar1 = (undefined8 *)(lVar15 + (ulonglong)uVar11 * 0x18);
    uVar8 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar15 + 0x10 + (ulonglong)uVar11 * 0x18);
    uVar10 = uVar12 >> 0xb;
    uVar14 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar15 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar15 + uVar14 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar15 + 0x10 + uVar14 * 0x18) = uVar3;
  }
  uVar6 = in_stack_00000050[1];
  uVar11 = iVar7 + iStackX_8;
  uVar14 = in_stack_00000050[2];
  uVar10 = uVar11 >> 0xb;
  uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
  lVar4 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
  puVar9 = (ulonglong *)(lVar4 + uVar13 * 0x18);
  *puVar9 = *in_stack_00000050;
  puVar9[1] = uVar6;
  *(ulonglong *)(lVar4 + 0x10 + uVar13 * 0x18) = uVar14;
  return;
}






// 函数: void FUN_1800ecab5(void)
void FUN_1800ecab5(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int unaff_EDI;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R15;
  bool bVar16;
  int iStackX_8;
  ulonglong *in_stack_00000050;
  
  do {
    uVar11 = (int)unaff_RBX + unaff_EDI + -1;
    uVar10 = uVar11 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(in_R10 + 8 + (ulonglong)uVar10 * 8) +
             (ulonglong)(uVar11 + uVar10 * -0x800) * 0x18);
    uVar11 = (int)unaff_RBX + unaff_EDI;
    uVar10 = uVar11 >> 0xb;
    uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar15 = *(longlong *)(in_R10 + 8 + (ulonglong)uVar10 * 8);
    uVar14 = *(ulonglong *)(lVar15 + uVar13 * 0x18);
    uVar4 = *puVar9;
    bVar16 = uVar14 < uVar4;
    if (uVar14 == uVar4) {
      bVar16 = *(ulonglong *)(lVar15 + uVar13 * 0x18 + 8) < puVar9[1];
    }
    lVar15 = unaff_RBX + -1;
    if (!bVar16) {
      lVar15 = unaff_RBX;
    }
    uVar11 = unaff_EDI + (int)lVar15;
    unaff_RBX = lVar15 * 2 + 2;
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar5 = *(longlong *)(in_R10 + 8 + (ulonglong)uVar10 * 8);
    puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x18);
    uVar8 = puVar1[1];
    uVar11 = unaff_EDI + (int)in_R11;
    uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar5 = *(longlong *)(in_R10 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar5 + uVar14 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18) = uVar3;
    in_R11 = lVar15;
  } while (unaff_RBX < unaff_RBP);
  if (unaff_RBX == unaff_RBP) {
    uVar11 = (int)unaff_RSI[1] + -1 + (int)unaff_RBX;
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar5 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar10 * 8);
    puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x18);
    uVar8 = puVar1[1];
    uVar11 = (int)unaff_RSI[1] + (int)lVar15;
    uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
    lVar15 = lVar15 * 2 + 1;
    uVar10 = uVar11 >> 0xb;
    uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar5 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar5 + uVar14 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18) = uVar3;
  }
  lVar5 = *unaff_RSI;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar7 = (int)lVar15, unaff_R15 < lVar15) {
    lVar15 = lVar15 + -1 >> 1;
    uVar10 = (int)lVar15 + iStackX_8;
    uVar11 = uVar10 & 0x7ff;
    uVar10 = uVar10 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(lVar5 + 8 + (ulonglong)uVar10 * 8) + (ulonglong)uVar11 * 0x18);
    uVar14 = *puVar9;
    bVar16 = uVar14 < *in_stack_00000050;
    if (uVar14 == *in_stack_00000050) {
      bVar16 = puVar9[1] < in_stack_00000050[1];
    }
    if (!bVar16) break;
    lVar6 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar10 * 8);
    uVar12 = iVar7 + iStackX_8;
    puVar1 = (undefined8 *)(lVar6 + (ulonglong)uVar11 * 0x18);
    uVar8 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar11 * 0x18);
    uVar10 = uVar12 >> 0xb;
    uVar14 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar6 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar14 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18) = uVar3;
  }
  uVar4 = in_stack_00000050[1];
  uVar11 = iVar7 + iStackX_8;
  uVar14 = in_stack_00000050[2];
  uVar10 = uVar11 >> 0xb;
  uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
  lVar15 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar10 * 8);
  puVar9 = (ulonglong *)(lVar15 + uVar13 * 0x18);
  *puVar9 = *in_stack_00000050;
  puVar9[1] = uVar4;
  *(ulonglong *)(lVar15 + 0x10 + uVar13 * 0x18) = uVar14;
  return;
}






// 函数: void FUN_1800ecb7f(void)
void FUN_1800ecb7f(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong in_R11;
  longlong unaff_R15;
  bool bVar15;
  int iStackX_8;
  ulonglong *in_stack_00000050;
  
  if (unaff_RBX == unaff_RBP) {
    uVar11 = (int)unaff_RSI[1] + -1 + (int)unaff_RBX;
    uVar10 = uVar11 >> 0xb;
    uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar4 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar10 * 8);
    puVar1 = (undefined8 *)(lVar4 + uVar13 * 0x18);
    uVar7 = puVar1[1];
    uVar11 = (int)unaff_RSI[1] + (int)in_R11;
    uVar3 = *(undefined8 *)(lVar4 + 0x10 + uVar13 * 0x18);
    in_R11 = unaff_RBX + -1;
    uVar10 = uVar11 >> 0xb;
    uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
    lVar4 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar4 + 0x10 + uVar13 * 0x18) = uVar3;
  }
  lVar4 = *unaff_RSI;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar6 = (int)in_R11, unaff_R15 < in_R11) {
    in_R11 = in_R11 + -1 >> 1;
    uVar10 = (int)in_R11 + iStackX_8;
    uVar11 = uVar10 & 0x7ff;
    uVar10 = uVar10 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8) + (ulonglong)uVar11 * 0x18);
    uVar13 = *puVar9;
    bVar15 = uVar13 < *in_stack_00000050;
    if (uVar13 == *in_stack_00000050) {
      bVar15 = puVar9[1] < in_stack_00000050[1];
    }
    if (!bVar15) break;
    lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
    uVar12 = iVar6 + iStackX_8;
    puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar11 * 0x18);
    uVar7 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar11 * 0x18);
    uVar10 = uVar12 >> 0xb;
    uVar13 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar5 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
    puVar2 = (undefined8 *)(lVar5 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x18) = uVar3;
  }
  uVar8 = in_stack_00000050[1];
  uVar11 = iVar6 + iStackX_8;
  uVar13 = in_stack_00000050[2];
  uVar10 = uVar11 >> 0xb;
  uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
  lVar4 = *(longlong *)(lVar4 + 8 + (ulonglong)uVar10 * 8);
  puVar9 = (ulonglong *)(lVar4 + uVar14 * 0x18);
  *puVar9 = *in_stack_00000050;
  puVar9[1] = uVar8;
  *(ulonglong *)(lVar4 + 0x10 + uVar14 * 0x18) = uVar13;
  return;
}






// 函数: void FUN_1800ecb89(void)
void FUN_1800ecb89(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int in_R11D;
  longlong unaff_R15;
  bool bVar17;
  int iStackX_8;
  ulonglong *in_stack_00000050;
  
  uVar11 = (int)unaff_RSI[1] + -1 + (int)unaff_RBX;
  uVar10 = uVar11 >> 0xb;
  uVar13 = (ulonglong)(uVar11 + uVar10 * -0x800);
  lVar15 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar10 * 8);
  puVar1 = (undefined8 *)(lVar15 + uVar13 * 0x18);
  uVar5 = puVar1[1];
  uVar10 = (int)unaff_RSI[1] + in_R11D;
  uVar3 = *(undefined8 *)(lVar15 + 0x10 + uVar13 * 0x18);
  lVar15 = unaff_RBX + -1;
  uVar11 = uVar10 >> 0xb;
  uVar13 = (ulonglong)(uVar10 + uVar11 * -0x800);
  lVar16 = *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar11 * 8);
  puVar2 = (undefined8 *)(lVar16 + uVar13 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar16 + 0x10 + uVar13 * 0x18) = uVar3;
  lVar6 = *unaff_RSI;
  lVar16 = unaff_RBX + -2;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar8 = (int)lVar15, unaff_R15 < lVar15) {
    lVar15 = lVar16 >> 1;
    uVar10 = (int)lVar15 + iStackX_8;
    uVar11 = uVar10 & 0x7ff;
    uVar10 = uVar10 >> 0xb;
    puVar9 = (ulonglong *)
             (*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) + (ulonglong)uVar11 * 0x18);
    uVar13 = *puVar9;
    bVar17 = uVar13 < *in_stack_00000050;
    if (uVar13 == *in_stack_00000050) {
      bVar17 = puVar9[1] < in_stack_00000050[1];
    }
    if (!bVar17) break;
    lVar16 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8);
    uVar12 = iVar8 + iStackX_8;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)uVar11 * 0x18);
    uVar5 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)uVar11 * 0x18);
    uVar10 = uVar12 >> 0xb;
    uVar13 = (ulonglong)(uVar12 + uVar10 * -0x800);
    lVar4 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8);
    lVar16 = lVar15 + -1;
    puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(lVar4 + 0x10 + uVar13 * 0x18) = uVar3;
  }
  uVar7 = in_stack_00000050[1];
  uVar11 = iVar8 + iStackX_8;
  uVar13 = in_stack_00000050[2];
  uVar10 = uVar11 >> 0xb;
  uVar14 = (ulonglong)(uVar11 + uVar10 * -0x800);
  lVar15 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8);
  puVar9 = (ulonglong *)(lVar15 + uVar14 * 0x18);
  *puVar9 = *in_stack_00000050;
  puVar9[1] = uVar7;
  *(ulonglong *)(lVar15 + 0x10 + uVar14 * 0x18) = uVar13;
  return;
}






