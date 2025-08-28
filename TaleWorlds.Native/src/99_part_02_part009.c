#include "TaleWorlds.Native.Split.h"

// 99_part_02_part009.c - 15 个函数

// 函数: void FUN_1800eccd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1800eccd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  
  lVar15 = param_4 * 2 + 2;
  if (lVar15 < param_3) {
    iVar5 = (int)param_1[1];
    lVar6 = *param_1;
    lVar16 = param_4;
    do {
      uVar18 = (int)lVar15 + iVar5 + -1;
      uVar19 = (int)lVar15 + iVar5;
      uVar14 = uVar18 >> 0xb;
      uVar13 = uVar19 >> 0xb;
      cVar12 = func_0x0001800d4090(*(undefined8 *)
                                    (*(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8) + 0x10 +
                                    (ulonglong)(uVar19 + uVar13 * -0x800) * 0x18),
                                   *(undefined8 *)
                                    (*(longlong *)(lVar6 + 8 + (ulonglong)uVar14 * 8) + 0x10 +
                                    (ulonglong)(uVar18 + uVar14 * -0x800) * 0x18));
      param_4 = lVar15;
      if (cVar12 != '\0') {
        param_4 = lVar15 + -1;
      }
      uVar14 = iVar5 + (int)param_4;
      uVar13 = uVar14 >> 0xb;
      uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
      lVar15 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8);
      puVar1 = (undefined4 *)(lVar15 + uVar17 * 0x18);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      uVar14 = iVar5 + (int)lVar16;
      uVar4 = *(undefined8 *)(lVar15 + 0x10 + uVar17 * 0x18);
      lVar15 = param_4 * 2 + 2;
      uVar13 = uVar14 >> 0xb;
      uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
      lVar16 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8);
      puVar2 = (undefined4 *)(lVar16 + uVar17 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      *(undefined8 *)(lVar16 + 0x10 + uVar17 * 0x18) = uVar4;
      lVar16 = param_4;
    } while (lVar15 < param_3);
  }
  if (lVar15 == param_3) {
    uVar14 = (int)param_1[1] + -1 + (int)lVar15;
    uVar13 = uVar14 >> 0xb;
    uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
    lVar6 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar13 * 8);
    puVar1 = (undefined4 *)(lVar6 + uVar17 * 0x18);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar14 = (int)param_1[1] + (int)param_4;
    uVar4 = *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18);
    param_4 = lVar15 + -1;
    uVar13 = uVar14 >> 0xb;
    uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
    lVar15 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar13 * 8);
    puVar2 = (undefined4 *)(lVar15 + uVar17 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    *(undefined8 *)(lVar15 + 0x10 + uVar17 * 0x18) = uVar4;
  }
  lVar15 = *param_1;
  iVar5 = (int)param_1[1];
  while (iVar7 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar14 = (int)param_4 + iVar5;
    uVar13 = uVar14 >> 0xb;
    uVar17 = (ulonglong)(uVar14 & 0x7ff);
    cVar12 = func_0x0001800d4090(*(undefined8 *)
                                  (*(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8) + 0x10 +
                                  uVar17 * 0x18),param_5[2]);
    if (cVar12 == '\0') break;
    lVar6 = *(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8);
    uVar14 = iVar7 + iVar5;
    puVar1 = (undefined4 *)(lVar6 + uVar17 * 0x18);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar4 = *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18);
    uVar13 = uVar14 >> 0xb;
    uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
    lVar6 = *(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8);
    puVar2 = (undefined4 *)(lVar6 + uVar17 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18) = uVar4;
  }
  uVar11 = param_5[1];
  uVar14 = iVar7 + iVar5;
  uVar4 = param_5[2];
  uVar13 = uVar14 >> 0xb;
  uVar17 = (ulonglong)(uVar14 + uVar13 * -0x800);
  lVar15 = *(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8);
  puVar3 = (undefined8 *)(lVar15 + uVar17 * 0x18);
  *puVar3 = *param_5;
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar15 + 0x10 + uVar17 * 0x18) = uVar4;
  return;
}






// 函数: void FUN_1800ecf20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1800ecf20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  
  lVar15 = param_4 * 2 + 2;
  if (lVar15 < param_3) {
    lVar6 = *param_1;
    iVar5 = (int)param_1[1];
    lVar16 = param_4;
    do {
      uVar18 = iVar5 + (int)lVar15;
      uVar13 = uVar18 - 1 >> 0xb;
      cVar12 = func_0x0001800d40c0(*(longlong *)(lVar6 + 8 + (ulonglong)(uVar18 >> 0xb) * 8) +
                                   (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800) * 0x10,
                                   *(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8) +
                                   (ulonglong)((uVar18 - 1) + uVar13 * -0x800) * 0x10);
      param_4 = lVar15;
      if (cVar12 != '\0') {
        param_4 = lVar15 + -1;
      }
      uVar18 = iVar5 + (int)param_4;
      uVar13 = uVar18 >> 0xb;
      uVar14 = iVar5 + (int)lVar16;
      lVar15 = param_4 * 2 + 2;
      puVar1 = (undefined4 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8) +
               (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      uVar13 = uVar14 >> 0xb;
      puVar2 = (undefined4 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)uVar13 * 8) +
               (ulonglong)(uVar14 + uVar13 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      lVar16 = param_4;
    } while (lVar15 < param_3);
  }
  if (lVar15 == param_3) {
    uVar18 = (int)param_1[1] + -1 + (int)lVar15;
    uVar13 = uVar18 >> 0xb;
    uVar14 = (int)param_1[1] + (int)param_4;
    param_4 = lVar15 + -1;
    puVar3 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar13 * 8) +
             (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
    uVar11 = puVar3[1];
    uVar13 = uVar14 >> 0xb;
    puVar4 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar13 * 8) +
             (ulonglong)(uVar14 + uVar13 * -0x800) * 0x10);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
  }
  lVar15 = *param_1;
  iVar5 = (int)param_1[1];
  while (iVar7 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar18 = (int)param_4 + iVar5;
    uVar13 = uVar18 >> 0xb;
    uVar17 = (ulonglong)(uVar18 & 0x7ff);
    cVar12 = func_0x0001800d40c0(*(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8) + uVar17 * 0x10,
                                 param_5);
    if (cVar12 == '\0') break;
    uVar14 = iVar7 + iVar5;
    uVar18 = uVar14 >> 0xb;
    puVar1 = (undefined4 *)(*(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8) + uVar17 * 0x10);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (undefined4 *)
             (*(longlong *)(lVar15 + 8 + (ulonglong)uVar18 * 8) +
             (ulonglong)(uVar14 + uVar18 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  uVar11 = param_5[1];
  uVar18 = iVar7 + iVar5;
  uVar13 = uVar18 >> 0xb;
  puVar3 = (undefined8 *)
           (*(longlong *)(lVar15 + 8 + (ulonglong)uVar13 * 8) +
           (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
  *puVar3 = *param_5;
  puVar3[1] = uVar11;
  return;
}






// 函数: void FUN_1800ed130(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1800ed130(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  int iStack_10;
  
  lVar16 = param_4 * 2 + 2;
  if (lVar16 < param_3) {
    iVar7 = (int)param_1[1];
    lVar3 = *param_1;
    lVar15 = param_4;
    do {
      uVar10 = (int)lVar16 + iVar7 + -1;
      uVar9 = uVar10 >> 0xb;
      uVar11 = (int)lVar16 + iVar7;
      puVar14 = (ulonglong *)
                (*(longlong *)(lVar3 + 8 + (ulonglong)uVar9 * 8) +
                (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
      uVar9 = uVar11 >> 0xb;
      uVar13 = (ulonglong)(uVar11 + uVar9 * -0x800);
      lVar4 = *(longlong *)(lVar3 + 8 + (ulonglong)uVar9 * 8);
      uVar5 = *(ulonglong *)(lVar4 + uVar13 * 0x10);
      uVar6 = *puVar14;
      bVar17 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        bVar17 = *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(**(longlong **)(lVar4 + 8 + uVar13 * 0x10) + 0x18) + 0x184);
      }
      param_4 = lVar16 + -1;
      if (!bVar17) {
        param_4 = lVar16;
      }
      uVar10 = iVar7 + (int)param_4;
      lVar16 = param_4 * 2 + 2;
      uVar9 = uVar10 >> 0xb;
      uVar11 = iVar7 + (int)lVar15;
      puVar1 = (undefined8 *)
               (*(longlong *)(lVar3 + 8 + (ulonglong)uVar9 * 8) +
               (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
      uVar8 = puVar1[1];
      uVar9 = uVar11 >> 0xb;
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar3 + 8 + (ulonglong)uVar9 * 8) +
               (ulonglong)(uVar11 + uVar9 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      lVar15 = param_4;
    } while (lVar16 < param_3);
  }
  if (lVar16 == param_3) {
    uVar10 = (int)param_1[1] + -1 + (int)lVar16;
    uVar9 = uVar10 >> 0xb;
    uVar11 = (int)param_1[1] + (int)param_4;
    param_4 = lVar16 + -1;
    puVar1 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar9 * 8) +
             (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
    uVar8 = puVar1[1];
    uVar9 = uVar11 >> 0xb;
    puVar2 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar9 * 8) +
             (ulonglong)(uVar11 + uVar9 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
  }
  lVar16 = *param_1;
  iStack_10 = (int)param_1[1];
  while (iVar7 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar9 = (int)param_4 + iStack_10;
    uVar10 = uVar9 & 0x7ff;
    uVar9 = uVar9 >> 0xb;
    puVar14 = (ulonglong *)
              (*(longlong *)(lVar16 + 8 + (ulonglong)uVar9 * 8) + (ulonglong)uVar10 * 0x10);
    uVar5 = *puVar14;
    bVar17 = uVar5 < *param_5;
    if (uVar5 == *param_5) {
      bVar17 = *(int *)(*(longlong *)(*(longlong *)param_5[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184);
    }
    if (!bVar17) break;
    uVar12 = iVar7 + iStack_10;
    uVar11 = uVar12 >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar16 + 8 + (ulonglong)uVar9 * 8) + (ulonglong)uVar10 * 0x10);
    uVar8 = puVar1[1];
    puVar2 = (undefined8 *)
             (*(longlong *)(lVar16 + 8 + (ulonglong)uVar11 * 8) +
             (ulonglong)(uVar12 + uVar11 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
  }
  uVar5 = param_5[1];
  uVar10 = iVar7 + iStack_10;
  uVar9 = uVar10 >> 0xb;
  puVar14 = (ulonglong *)
            (*(longlong *)(lVar16 + 8 + (ulonglong)uVar9 * 8) +
            (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
  *puVar14 = *param_5;
  puVar14[1] = uVar5;
  return;
}






// 函数: void FUN_1800ed168(void)
void FUN_1800ed168(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong *puVar13;
  longlong lVar14;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R14;
  bool bVar15;
  int iStackX_8;
  ulonglong *in_stack_00000040;
  
  do {
    uVar9 = (int)in_R11 + unaff_EBX + -1;
    uVar8 = uVar9 >> 0xb;
    uVar10 = (int)in_R11 + unaff_EBX;
    puVar13 = (ulonglong *)
              (*(longlong *)(in_R9 + 8 + (ulonglong)uVar8 * 8) +
              (ulonglong)(uVar9 + uVar8 * -0x800) * 0x10);
    uVar8 = uVar10 >> 0xb;
    uVar12 = (ulonglong)(uVar10 + uVar8 * -0x800);
    lVar14 = *(longlong *)(in_R9 + 8 + (ulonglong)uVar8 * 8);
    uVar3 = *(ulonglong *)(lVar14 + uVar12 * 0x10);
    uVar4 = *puVar13;
    bVar15 = uVar3 < uVar4;
    if (uVar3 == uVar4) {
      bVar15 = *(int *)(*(longlong *)(*(longlong *)puVar13[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(**(longlong **)(lVar14 + 8 + uVar12 * 0x10) + 0x18) + 0x184);
    }
    lVar14 = in_R11 + -1;
    if (!bVar15) {
      lVar14 = in_R11;
    }
    uVar9 = unaff_EBX + (int)lVar14;
    in_R11 = lVar14 * 2 + 2;
    uVar8 = uVar9 >> 0xb;
    uVar10 = unaff_EBX + (int)in_R10;
    puVar1 = (undefined8 *)
             (*(longlong *)(in_R9 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)(uVar9 + uVar8 * -0x800) * 0x10);
    uVar6 = puVar1[1];
    uVar8 = uVar10 >> 0xb;
    puVar2 = (undefined8 *)
             (*(longlong *)(in_R9 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)(uVar10 + uVar8 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    in_R10 = lVar14;
  } while (in_R11 < unaff_RSI);
  if (in_R11 == unaff_RSI) {
    uVar9 = (int)unaff_RDI[1] + -1 + (int)in_R11;
    uVar8 = uVar9 >> 0xb;
    uVar10 = (int)unaff_RDI[1] + (int)lVar14;
    lVar14 = lVar14 * 2 + 1;
    puVar1 = (undefined8 *)
             (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)(uVar9 + uVar8 * -0x800) * 0x10);
    uVar6 = puVar1[1];
    uVar8 = uVar10 >> 0xb;
    puVar2 = (undefined8 *)
             (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)(uVar10 + uVar8 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
  }
  lVar7 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar5 = (int)lVar14, unaff_R14 < lVar14) {
    lVar14 = lVar14 + -1 >> 1;
    uVar8 = (int)lVar14 + iStackX_8;
    uVar9 = uVar8 & 0x7ff;
    uVar8 = uVar8 >> 0xb;
    puVar13 = (ulonglong *)
              (*(longlong *)(lVar7 + 8 + (ulonglong)uVar8 * 8) + (ulonglong)uVar9 * 0x10);
    uVar3 = *puVar13;
    bVar15 = uVar3 < *in_stack_00000040;
    if (uVar3 == *in_stack_00000040) {
      bVar15 = *(int *)(*(longlong *)(*(longlong *)in_stack_00000040[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar13[1] + 0x18) + 0x184);
    }
    if (!bVar15) break;
    uVar11 = iVar5 + iStackX_8;
    uVar10 = uVar11 >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar7 + 8 + (ulonglong)uVar8 * 8) + (ulonglong)uVar9 * 0x10);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)
             (*(longlong *)(lVar7 + 8 + (ulonglong)uVar10 * 8) +
             (ulonglong)(uVar11 + uVar10 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
  }
  uVar3 = in_stack_00000040[1];
  uVar9 = iVar5 + iStackX_8;
  uVar8 = uVar9 >> 0xb;
  puVar13 = (ulonglong *)
            (*(longlong *)(lVar7 + 8 + (ulonglong)uVar8 * 8) +
            (ulonglong)(uVar9 + uVar8 * -0x800) * 0x10);
  *puVar13 = *in_stack_00000040;
  puVar13[1] = uVar3;
  return;
}






// 函数: void FUN_1800ed239(void)
void FUN_1800ed239(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R14;
  bool bVar12;
  int iStackX_8;
  ulonglong *in_stack_00000040;
  
  if (in_R11 == unaff_RSI) {
    uVar8 = (int)unaff_RDI[1] + -1 + (int)in_R11;
    uVar7 = uVar8 >> 0xb;
    uVar9 = (int)unaff_RDI[1] + (int)in_R10;
    in_R10 = in_R11 + -1;
    puVar1 = (undefined8 *)
             (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar7 * 8) +
             (ulonglong)(uVar8 + uVar7 * -0x800) * 0x10);
    uVar5 = puVar1[1];
    uVar7 = uVar9 >> 0xb;
    puVar2 = (undefined8 *)
             (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar7 * 8) +
             (ulonglong)(uVar9 + uVar7 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
  }
  lVar6 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar4 = (int)in_R10, unaff_R14 < in_R10) {
    in_R10 = in_R10 + -1 >> 1;
    uVar7 = (int)in_R10 + iStackX_8;
    uVar8 = uVar7 & 0x7ff;
    uVar7 = uVar7 >> 0xb;
    puVar11 = (ulonglong *)
              (*(longlong *)(lVar6 + 8 + (ulonglong)uVar7 * 8) + (ulonglong)uVar8 * 0x10);
    uVar3 = *puVar11;
    bVar12 = uVar3 < *in_stack_00000040;
    if (uVar3 == *in_stack_00000040) {
      bVar12 = *(int *)(*(longlong *)(*(longlong *)in_stack_00000040[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184);
    }
    if (!bVar12) break;
    uVar10 = iVar4 + iStackX_8;
    uVar9 = uVar10 >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar6 + 8 + (ulonglong)uVar7 * 8) + (ulonglong)uVar8 * 0x10);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)
             (*(longlong *)(lVar6 + 8 + (ulonglong)uVar9 * 8) +
             (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
  }
  uVar3 = in_stack_00000040[1];
  uVar8 = iVar4 + iStackX_8;
  uVar7 = uVar8 >> 0xb;
  puVar11 = (ulonglong *)
            (*(longlong *)(lVar6 + 8 + (ulonglong)uVar7 * 8) +
            (ulonglong)(uVar8 + uVar7 * -0x800) * 0x10);
  *puVar11 = *in_stack_00000040;
  puVar11[1] = uVar3;
  return;
}






// 函数: void FUN_1800ed380(longlong *param_1)
void FUN_1800ed380(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_18023b050(param_1[4],0);
  }
  if (param_1[3] != 0) {
    FUN_18023b050(param_1[3],0);
  }
  if (*param_1 != 0) {
    FUN_18023b050(*param_1,0);
  }
  if (param_1[1] != 0) {
    FUN_18023b050(param_1[1],0);
  }
  *(undefined4 *)(param_1 + 6) = 0x461c4000;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x41a00000;
  return;
}






// 函数: void FUN_1800ed400(void)
void FUN_1800ed400(void)

{
  FUN_1800ed380();
  return;
}






// 函数: void FUN_1800ed420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800ed420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x1060101;
  *(undefined4 *)(param_1 + 0x94) = 0xff000000;
  *(undefined4 *)(param_1 + 0x98) = 0x40300ff;
  *(undefined8 *)(param_1 + 0x9c) = 0x30503;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x900;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0xc;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    // WARNING: Subroutine does not return
  memset(0,0,0x80,param_4,0xfffffffffffffffe);
}






// 函数: void FUN_1800ed630(longlong param_1)
void FUN_1800ed630(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + *(int *)(param_1 + 0x48);
    UNLOCK();
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 <= iVar2) break;
    iVar4 = *(int *)(param_1 + 0x48) + iVar2;
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    (**(code **)(param_1 + 0x38))(iVar2,iVar3,param_1 + 0x20);
    LOCK();
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + -1;
    UNLOCK();
  }
  return;
}






// 函数: void FUN_1800ed680(undefined8 *param_1,int param_2)
void FUN_1800ed680(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0x4c);
  if (*(int *)(param_1 + 9) + param_2 < *(int *)((longlong)param_1 + 0x4c)) {
    iVar2 = *(int *)(param_1 + 9) + param_2;
  }
  (*(code *)param_1[7])(param_2,iVar2,param_1 + 4);
  LOCK();
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  UNLOCK();
  if ((undefined *)*param_1 == &UNK_180a047e8) {
    while( true ) {
      LOCK();
      piVar1 = (int *)(param_1[8] + 0x10);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + *(int *)(param_1 + 9);
      UNLOCK();
      iVar3 = *(int *)((longlong)param_1 + 0x4c);
      if (iVar3 <= iVar2) break;
      if (*(int *)(param_1 + 9) + iVar2 < iVar3) {
        iVar3 = *(int *)(param_1 + 9) + iVar2;
      }
      (*(code *)param_1[7])(iVar2,iVar3,param_1 + 4);
      LOCK();
      *(int *)param_1[10] = *(int *)param_1[10] + -1;
      UNLOCK();
    }
  }
  else {
    (**(code **)((undefined *)*param_1 + 0x60))(param_1);
  }
  return;
}






// 函数: void FUN_1800ed720(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
void FUN_1800ed720(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  *(longlong **)(param_1 + 0x40) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  lVar1 = param_1 + 0x20;
  if (lVar1 != param_6) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(lVar1,0,0);
    }
    pcVar4 = *(code **)(param_6 + 0x10);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar1,param_6,1);
      pcVar4 = *(code **)(param_6 + 0x10);
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x50) = param_7;
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if (*(code **)(param_6 + 0x10) != (code *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  return;
}



undefined8 * FUN_1800ed810(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xc;
  return param_1;
}



undefined8 *
FUN_1800ed900(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180049830();
  *param_1 = &UNK_180a04880;
  puVar1 = param_1 + 0x18;
  param_1[0x1a] = 0;
  param_1[0x1b] = _guard_check_icall;
  if (puVar1 != param_2) {
    if ((code *)param_1[0x1a] != (code *)0x0) {
      (*(code *)param_1[0x1a])(puVar1,0,0,param_4,uVar3);
    }
    pcVar2 = (code *)param_2[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1,param_2,1);
      pcVar2 = (code *)param_2[2];
    }
    param_1[0x1a] = pcVar2;
    param_1[0x1b] = param_2[3];
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800ed9c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1808fc838(param_1 + 0x30,0x30,0xe,FUN_1800edda0,FUN_1800edc10);
  lVar3 = param_1 + 0x2d0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 3;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(param_1 + 0x2d8) = lVar3;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(longlong *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 3;
  *(undefined8 *)(param_1 + 0x308) = 8;
  lVar3 = FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(param_1 + 0x350));
  *(longlong *)(param_1 + 0x300) = lVar3;
  plVar2 = (longlong *)(lVar3 + (*(longlong *)(param_1 + 0x308) - 1U >> 1) * 8);
  plVar1 = plVar2;
  for (uVar5 = (ulonglong)(plVar2 <= plVar2 + 1); uVar5 != 0; uVar5 = uVar5 - 1) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x1e0,*(undefined1 *)(param_1 + 0x350));
    *plVar1 = lVar3;
    plVar1 = plVar1 + 1;
  }
  *(longlong **)(param_1 + 0x328) = plVar2;
  lVar3 = *plVar2;
  *(longlong *)(param_1 + 0x318) = lVar3;
  *(longlong *)(param_1 + 800) = lVar3 + 0x1e0;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x318);
  *(longlong **)(param_1 + 0x348) = plVar2;
  lVar3 = *plVar2;
  *(longlong *)(param_1 + 0x338) = lVar3;
  *(longlong *)(param_1 + 0x340) = lVar3 + 0x1e0;
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x338);
  plVar1 = (longlong *)(param_1 + 0x358);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 3;
  plVar2 = *(longlong **)(param_1 + 0x360);
  lVar3 = *plVar1;
  uVar5 = (longlong)plVar2 - lVar3 >> 5;
  if (uVar5 < 0x10) {
    FUN_1800ee210(plVar1,0x10 - uVar5);
  }
  else {
    plVar4 = (longlong *)(lVar3 + 0x200);
    if (plVar4 != plVar2) {
      do {
        if ((longlong *)plVar4[3] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar4[3] + 0x38))();
        }
        if ((longlong *)plVar4[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar4[2] + 0x38))();
        }
        if ((longlong *)plVar4[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar4[1] + 0x38))();
        }
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x38))();
        }
        plVar4 = plVar4 + 4;
      } while (plVar4 != plVar2);
      lVar3 = *plVar1;
    }
    *(longlong *)(param_1 + 0x360) = lVar3 + 0x200;
  }
  return param_1;
}






// 函数: void FUN_1800edc10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800edc10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800ee080(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800edc40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800edc40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800ee130(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800edc70(longlong *param_1)
void FUN_1800edc70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = param_1[2];
  lVar2 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  if (lVar1 != param_1[6]) {
    do {
      FUN_1800edd10(lVar1);
      lVar1 = lVar1 + 0x78;
      if (lVar1 == lVar2) {
        plVar3 = plVar3 + 1;
        lVar1 = *plVar3;
        lVar2 = lVar1 + 0x1e0;
      }
    } while (lVar1 != param_1[6]);
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1800edc90(longlong *param_1)
void FUN_1800edc90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    if ((longlong *)plVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[3] + 0x38))();
    }
    if ((longlong *)plVar2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[2] + 0x38))();
    }
    if ((longlong *)plVar2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[1] + 0x38))();
    }
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






