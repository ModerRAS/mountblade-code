#include "TaleWorlds.Native.Split.h"

// 99_part_03_part052.c - 3 个函数

// 函数: void FUN_180230ced(void)
void FUN_180230ced(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong in_RAX;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong unaff_RBX;
  float *unaff_RSI;
  longlong unaff_RDI;
  float *pfVar9;
  longlong in_R9;
  float *in_R10;
  longlong in_R11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  lVar5 = (in_R11 - 4U >> 2) + 1;
  lVar6 = lVar5;
  pfVar7 = (float *)(*(longlong *)(unaff_RBX + 0x18) + 0x10);
  pfVar9 = (float *)(*(longlong *)(unaff_RBX + 0x18) + 0x24);
  do {
    fVar12 = pfVar7[-4];
    fVar13 = pfVar7[-3];
    fVar14 = fVar12;
    if (fVar12 <= unaff_XMM10_Da) {
      fVar14 = unaff_XMM10_Da;
    }
    if (unaff_XMM8_Da <= fVar12) {
      fVar12 = unaff_XMM8_Da;
    }
    fVar10 = fVar13;
    if (fVar13 <= unaff_XMM11_Da) {
      fVar10 = unaff_XMM11_Da;
    }
    if (unaff_XMM9_Da <= fVar13) {
      fVar13 = unaff_XMM9_Da;
    }
    if (fVar14 <= *pfVar7) {
      fVar14 = *pfVar7;
    }
    if (*pfVar7 <= fVar12) {
      fVar12 = *pfVar7;
    }
    if (fVar10 <= pfVar9[-4]) {
      fVar10 = pfVar9[-4];
    }
    if (pfVar9[-4] <= fVar13) {
      fVar13 = pfVar9[-4];
    }
    if (fVar14 <= pfVar7[4]) {
      fVar14 = pfVar7[4];
    }
    if (pfVar7[4] <= fVar12) {
      fVar12 = pfVar7[4];
    }
    if (fVar10 <= *pfVar9) {
      fVar10 = *pfVar9;
    }
    if (*pfVar9 <= fVar13) {
      fVar13 = *pfVar9;
    }
    unaff_XMM10_Da = fVar14;
    if (fVar14 <= pfVar7[8]) {
      unaff_XMM10_Da = pfVar7[8];
    }
    unaff_XMM8_Da = fVar12;
    if (pfVar7[8] <= fVar12) {
      unaff_XMM8_Da = pfVar7[8];
    }
    unaff_XMM11_Da = fVar10;
    if (fVar10 <= pfVar9[4]) {
      unaff_XMM11_Da = pfVar9[4];
    }
    unaff_XMM9_Da = fVar13;
    if (pfVar9[4] <= fVar13) {
      unaff_XMM9_Da = pfVar9[4];
    }
    lVar6 = lVar6 + -1;
    pfVar7 = pfVar7 + 0x10;
    pfVar9 = pfVar9 + 0x10;
  } while (lVar6 != 0);
  if (lVar5 * 4 < in_R11) {
    pfVar7 = (float *)(lVar5 * 0x40 + *(longlong *)(unaff_RBX + 0x18));
    lVar6 = in_R11 + lVar5 * -4;
    fVar12 = unaff_XMM8_Da;
    fVar13 = unaff_XMM9_Da;
    fVar14 = unaff_XMM10_Da;
    fVar10 = unaff_XMM11_Da;
    do {
      unaff_XMM8_Da = *pfVar7;
      unaff_XMM9_Da = pfVar7[1];
      unaff_XMM10_Da = unaff_XMM8_Da;
      if (unaff_XMM8_Da <= fVar14) {
        unaff_XMM10_Da = fVar14;
      }
      if (fVar12 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = fVar12;
      }
      pfVar7 = pfVar7 + 4;
      unaff_XMM11_Da = unaff_XMM9_Da;
      if (unaff_XMM9_Da <= fVar10) {
        unaff_XMM11_Da = fVar10;
      }
      if (fVar13 <= unaff_XMM9_Da) {
        unaff_XMM9_Da = fVar13;
      }
      lVar6 = lVar6 + -1;
      fVar12 = unaff_XMM8_Da;
      fVar13 = unaff_XMM9_Da;
      fVar14 = unaff_XMM10_Da;
      fVar10 = unaff_XMM11_Da;
    } while (lVar6 != 0);
  }
  if ((unaff_XMM10_Da - unaff_XMM8_Da != 0.0) && (unaff_XMM11_Da - unaff_XMM9_Da != 0.0)) {
    fVar13 = (unaff_RSI[1] - in_R10[1]) / (unaff_XMM11_Da - unaff_XMM9_Da);
    fVar12 = (*unaff_RSI - *in_R10) / (unaff_XMM10_Da - unaff_XMM8_Da);
    fVar14 = (fVar13 + fVar12) * 0.5;
    lVar6 = unaff_RDI;
    if (3 < in_R11) {
      lVar5 = (in_R11 - 4U >> 2) + 1;
      lVar6 = lVar5 * 4;
      do {
        lVar3 = *(longlong *)(*(longlong *)(in_R9 + 8) + 0x18);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 4 + lVar3) = *(float *)(unaff_RDI + 4 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + lVar3) = fVar12 * *(float *)(unaff_RDI + lVar3);
        *(float *)(unaff_RDI + 4 + lVar3) = fVar13 * *(float *)(unaff_RDI + 4 + lVar3);
        *(float *)(unaff_RDI + 8 + lVar3) = fVar14 * *(float *)(unaff_RDI + 8 + lVar3);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 4 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 4 + lVar3);
        lVar8 = *(longlong *)(in_R9 + 8);
        if (*(int *)(lVar8 + 0x38) != 0) {
          uVar4 = ((undefined8 *)(unaff_RDI + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(lVar8 + 0x40) + unaff_RDI);
          *puVar1 = *(undefined8 *)(unaff_RDI + lVar3);
          puVar1[1] = uVar4;
          lVar8 = *(longlong *)(in_R9 + 8);
        }
        lVar3 = *(longlong *)(lVar8 + 0x18);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) - unaff_XMM8_Da;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = *(float *)(lVar3 + 0x14 + unaff_RDI) - unaff_XMM9_Da;
        *(float *)(lVar3 + 0x10 + unaff_RDI) = fVar12 * *(float *)(lVar3 + 0x10 + unaff_RDI);
        *(float *)(lVar3 + 0x14 + unaff_RDI) = fVar13 * *(float *)(lVar3 + 0x14 + unaff_RDI);
        *(float *)(lVar3 + 0x18 + unaff_RDI) = fVar14 * *(float *)(lVar3 + 0x18 + unaff_RDI);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) + *in_R10;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = in_R10[1] + *(float *)(lVar3 + 0x14 + unaff_RDI);
        lVar8 = *(longlong *)(in_R9 + 8);
        if (*(int *)(lVar8 + 0x38) != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0x10 + unaff_RDI);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x10 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar8 = *(longlong *)(in_R9 + 8);
        }
        lVar3 = *(longlong *)(lVar8 + 0x18);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x24 + lVar3) = *(float *)(unaff_RDI + 0x24 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x20 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x20 + lVar3);
        *(float *)(unaff_RDI + 0x24 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x24 + lVar3);
        *(float *)(unaff_RDI + 0x28 + lVar3) = fVar14 * *(float *)(unaff_RDI + 0x28 + lVar3);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x24 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x24 + lVar3);
        lVar8 = *(longlong *)(in_R9 + 8);
        if (*(int *)(lVar8 + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar8 = *(longlong *)(in_R9 + 8);
        }
        lVar3 = *(longlong *)(lVar8 + 0x18);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x34 + lVar3) = *(float *)(unaff_RDI + 0x34 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x30 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x30 + lVar3);
        *(float *)(unaff_RDI + 0x34 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x34 + lVar3);
        *(float *)(unaff_RDI + 0x38 + lVar3) = fVar14 * *(float *)(unaff_RDI + 0x38 + lVar3);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x34 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x34 + lVar3);
        if (*(int *)(*(longlong *)(in_R9 + 8) + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(*(longlong *)(in_R9 + 8) + 0x40) + 0x30 + unaff_RDI)
          ;
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
        unaff_RDI = unaff_RDI + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar6 < in_R11) {
      lVar5 = lVar6 << 4;
      lVar6 = in_R11 - lVar6;
      do {
        lVar3 = *(longlong *)(*(longlong *)(in_R9 + 8) + 0x18);
        *(float *)(lVar5 + 8 + lVar3) = fVar14 * *(float *)(lVar5 + 8 + lVar3);
        fVar11 = (*(float *)(lVar5 + lVar3) - unaff_XMM8_Da) * fVar12;
        fVar10 = (*(float *)(lVar5 + 4 + lVar3) - unaff_XMM9_Da) * fVar13;
        *(float *)(lVar5 + lVar3) = fVar11;
        *(float *)(lVar5 + 4 + lVar3) = fVar10;
        *(float *)(lVar5 + lVar3) = fVar11 + *in_R10;
        *(float *)(lVar5 + 4 + lVar3) = fVar10 + in_R10[1];
        if (*(int *)(*(longlong *)(in_R9 + 8) + 0x38) != 0) {
          uVar4 = ((undefined8 *)(lVar5 + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(in_R9 + 8) + 0x40) + lVar5);
          *puVar1 = *(undefined8 *)(lVar5 + lVar3);
          puVar1[1] = uVar4;
        }
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    *(undefined1 *)(in_R9 + 0x30) = 1;
    *(undefined1 *)(in_R9 + 0x32) = 1;
  }
  return;
}






// 函数: void FUN_180230db8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_180230db8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong unaff_RBX;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  float *in_R10;
  longlong in_R11;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (param_2 < in_R11) {
    pfVar5 = (float *)(param_2 * 0x10 + *(longlong *)(unaff_RBX + 0x18));
    param_2 = in_R11 - param_2;
    fVar11 = unaff_XMM8_Da;
    fVar12 = unaff_XMM9_Da;
    fVar13 = unaff_XMM10_Da;
    fVar9 = unaff_XMM11_Da;
    do {
      unaff_XMM8_Da = *pfVar5;
      unaff_XMM9_Da = pfVar5[1];
      unaff_XMM10_Da = unaff_XMM8_Da;
      if (unaff_XMM8_Da <= fVar13) {
        unaff_XMM10_Da = fVar13;
      }
      if (fVar11 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = fVar11;
      }
      pfVar5 = pfVar5 + 4;
      unaff_XMM11_Da = unaff_XMM9_Da;
      if (unaff_XMM9_Da <= fVar9) {
        unaff_XMM11_Da = fVar9;
      }
      if (fVar12 <= unaff_XMM9_Da) {
        unaff_XMM9_Da = fVar12;
      }
      param_2 = param_2 + -1;
      fVar11 = unaff_XMM8_Da;
      fVar12 = unaff_XMM9_Da;
      fVar13 = unaff_XMM10_Da;
      fVar9 = unaff_XMM11_Da;
    } while (param_2 != 0);
  }
  if ((unaff_XMM10_Da - unaff_XMM8_Da != 0.0) && (unaff_XMM11_Da - unaff_XMM9_Da != 0.0)) {
    fVar12 = (unaff_RSI[1] - in_R10[1]) / (unaff_XMM11_Da - unaff_XMM9_Da);
    fVar11 = (*unaff_RSI - *in_R10) / (unaff_XMM10_Da - unaff_XMM8_Da);
    fVar13 = (fVar12 + fVar11) * 0.5;
    lVar8 = unaff_RDI;
    if (3 < in_R11) {
      lVar7 = (in_R11 - 4U >> 2) + 1;
      lVar8 = lVar7 * 4;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_4 + 8) + 0x18);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 4 + lVar3) = *(float *)(unaff_RDI + 4 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + lVar3) = fVar11 * *(float *)(unaff_RDI + lVar3);
        *(float *)(unaff_RDI + 4 + lVar3) = fVar12 * *(float *)(unaff_RDI + 4 + lVar3);
        *(float *)(unaff_RDI + 8 + lVar3) = fVar13 * *(float *)(unaff_RDI + 8 + lVar3);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 4 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 4 + lVar3);
        lVar6 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          uVar4 = ((undefined8 *)(unaff_RDI + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + unaff_RDI);
          *puVar1 = *(undefined8 *)(unaff_RDI + lVar3);
          puVar1[1] = uVar4;
          lVar6 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar6 + 0x18);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) - unaff_XMM8_Da;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = *(float *)(lVar3 + 0x14 + unaff_RDI) - unaff_XMM9_Da;
        *(float *)(lVar3 + 0x10 + unaff_RDI) = fVar11 * *(float *)(lVar3 + 0x10 + unaff_RDI);
        *(float *)(lVar3 + 0x14 + unaff_RDI) = fVar12 * *(float *)(lVar3 + 0x14 + unaff_RDI);
        *(float *)(lVar3 + 0x18 + unaff_RDI) = fVar13 * *(float *)(lVar3 + 0x18 + unaff_RDI);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) + *in_R10;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = in_R10[1] + *(float *)(lVar3 + 0x14 + unaff_RDI);
        lVar6 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0x10 + unaff_RDI);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + 0x10 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar6 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar6 + 0x18);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x24 + lVar3) = *(float *)(unaff_RDI + 0x24 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x20 + lVar3) = fVar11 * *(float *)(unaff_RDI + 0x20 + lVar3);
        *(float *)(unaff_RDI + 0x24 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x24 + lVar3);
        *(float *)(unaff_RDI + 0x28 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x28 + lVar3);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x24 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x24 + lVar3);
        lVar6 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + 0x20 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar6 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar6 + 0x18);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x34 + lVar3) = *(float *)(unaff_RDI + 0x34 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x30 + lVar3) = fVar11 * *(float *)(unaff_RDI + 0x30 + lVar3);
        *(float *)(unaff_RDI + 0x34 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x34 + lVar3);
        *(float *)(unaff_RDI + 0x38 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x38 + lVar3);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x34 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x34 + lVar3);
        if (*(int *)(*(longlong *)(param_4 + 8) + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)
                   (*(longlong *)(*(longlong *)(param_4 + 8) + 0x40) + 0x30 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
        unaff_RDI = unaff_RDI + 0x40;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar8 < in_R11) {
      lVar7 = lVar8 << 4;
      lVar8 = in_R11 - lVar8;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_4 + 8) + 0x18);
        *(float *)(lVar7 + 8 + lVar3) = fVar13 * *(float *)(lVar7 + 8 + lVar3);
        fVar10 = (*(float *)(lVar7 + lVar3) - unaff_XMM8_Da) * fVar11;
        fVar9 = (*(float *)(lVar7 + 4 + lVar3) - unaff_XMM9_Da) * fVar12;
        *(float *)(lVar7 + lVar3) = fVar10;
        *(float *)(lVar7 + 4 + lVar3) = fVar9;
        *(float *)(lVar7 + lVar3) = fVar10 + *in_R10;
        *(float *)(lVar7 + 4 + lVar3) = fVar9 + in_R10[1];
        if (*(int *)(*(longlong *)(param_4 + 8) + 0x38) != 0) {
          uVar4 = ((undefined8 *)(lVar7 + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 8) + 0x40) + lVar7);
          *puVar1 = *(undefined8 *)(lVar7 + lVar3);
          puVar1[1] = uVar4;
        }
        lVar7 = lVar7 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined1 *)(param_4 + 0x32) = 1;
  }
  return;
}






// 函数: void FUN_180230e22(float param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_180230e22(float param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  float *in_R10;
  longlong in_R11;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (unaff_XMM11_Da - unaff_XMM9_Da != param_1) {
    fVar11 = (unaff_RSI[1] - in_R10[1]) / (unaff_XMM11_Da - unaff_XMM9_Da);
    fVar10 = (*unaff_RSI - *in_R10) / unaff_XMM10_Da;
    fVar12 = (fVar11 + fVar10) * 0.5;
    lVar7 = unaff_RDI;
    if (3 < in_R11) {
      lVar6 = (in_R11 - 4U >> 2) + 1;
      lVar7 = lVar6 * 4;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_4 + 8) + 0x18);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 4 + lVar3) = *(float *)(unaff_RDI + 4 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + lVar3) = fVar10 * *(float *)(unaff_RDI + lVar3);
        *(float *)(unaff_RDI + 4 + lVar3) = fVar11 * *(float *)(unaff_RDI + 4 + lVar3);
        *(float *)(unaff_RDI + 8 + lVar3) = fVar12 * *(float *)(unaff_RDI + 8 + lVar3);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 4 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 4 + lVar3);
        lVar5 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar5 + 0x38) != 0) {
          uVar4 = ((undefined8 *)(unaff_RDI + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x40) + unaff_RDI);
          *puVar1 = *(undefined8 *)(unaff_RDI + lVar3);
          puVar1[1] = uVar4;
          lVar5 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar5 + 0x18);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) - unaff_XMM8_Da;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = *(float *)(lVar3 + 0x14 + unaff_RDI) - unaff_XMM9_Da;
        *(float *)(lVar3 + 0x10 + unaff_RDI) = fVar10 * *(float *)(lVar3 + 0x10 + unaff_RDI);
        *(float *)(lVar3 + 0x14 + unaff_RDI) = fVar11 * *(float *)(lVar3 + 0x14 + unaff_RDI);
        *(float *)(lVar3 + 0x18 + unaff_RDI) = fVar12 * *(float *)(lVar3 + 0x18 + unaff_RDI);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) + *in_R10;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = in_R10[1] + *(float *)(lVar3 + 0x14 + unaff_RDI);
        lVar5 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar5 + 0x38) != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0x10 + unaff_RDI);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x10 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar5 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar5 + 0x18);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x24 + lVar3) = *(float *)(unaff_RDI + 0x24 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x20 + lVar3) = fVar10 * *(float *)(unaff_RDI + 0x20 + lVar3);
        *(float *)(unaff_RDI + 0x24 + lVar3) = fVar11 * *(float *)(unaff_RDI + 0x24 + lVar3);
        *(float *)(unaff_RDI + 0x28 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x28 + lVar3);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x24 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x24 + lVar3);
        lVar5 = *(longlong *)(param_4 + 8);
        if (*(int *)(lVar5 + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x20 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar5 = *(longlong *)(param_4 + 8);
        }
        lVar3 = *(longlong *)(lVar5 + 0x18);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x34 + lVar3) = *(float *)(unaff_RDI + 0x34 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x30 + lVar3) = fVar10 * *(float *)(unaff_RDI + 0x30 + lVar3);
        *(float *)(unaff_RDI + 0x34 + lVar3) = fVar11 * *(float *)(unaff_RDI + 0x34 + lVar3);
        *(float *)(unaff_RDI + 0x38 + lVar3) = fVar12 * *(float *)(unaff_RDI + 0x38 + lVar3);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x34 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x34 + lVar3);
        if (*(int *)(*(longlong *)(param_4 + 8) + 0x38) != 0) {
          puVar1 = (undefined8 *)(unaff_RDI + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)
                   (*(longlong *)(*(longlong *)(param_4 + 8) + 0x40) + 0x30 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
        unaff_RDI = unaff_RDI + 0x40;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar7 < in_R11) {
      lVar6 = lVar7 << 4;
      lVar7 = in_R11 - lVar7;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_4 + 8) + 0x18);
        *(float *)(lVar6 + 8 + lVar3) = fVar12 * *(float *)(lVar6 + 8 + lVar3);
        fVar9 = (*(float *)(lVar6 + lVar3) - unaff_XMM8_Da) * fVar10;
        fVar8 = (*(float *)(lVar6 + 4 + lVar3) - unaff_XMM9_Da) * fVar11;
        *(float *)(lVar6 + lVar3) = fVar9;
        *(float *)(lVar6 + 4 + lVar3) = fVar8;
        *(float *)(lVar6 + lVar3) = fVar9 + *in_R10;
        *(float *)(lVar6 + 4 + lVar3) = fVar8 + in_R10[1];
        if (*(int *)(*(longlong *)(param_4 + 8) + 0x38) != 0) {
          uVar4 = ((undefined8 *)(lVar6 + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 8) + 0x40) + lVar6);
          *puVar1 = *(undefined8 *)(lVar6 + lVar3);
          puVar1[1] = uVar4;
        }
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined1 *)(param_4 + 0x32) = 1;
  }
  return;
}






