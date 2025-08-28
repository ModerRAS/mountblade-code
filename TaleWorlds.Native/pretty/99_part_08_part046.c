#include "TaleWorlds.Native.Split.h"

// 99_part_08_part046.c - 3 个函数

// 函数: void FUN_1805a8580(longlong param_1,float *param_2,uint64_t param_3,longlong param_4,
void FUN_1805a8580(longlong param_1,float *param_2,uint64_t param_3,longlong param_4,
                  int8_t param_5,longlong param_6,longlong param_7,longlong param_8)

{
  float fVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int8_t uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int32_t extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  
  lVar13 = (longlong)*(short *)(param_2 + 0xd) * 0x200 + param_6;
  lVar11 = (longlong)*(short *)(param_2 + 0xd) * 0x240;
  if ((param_8 == 0) || (lVar9 = param_8, (*(byte *)(lVar11 + 8 + param_8) & 1) == 0)) {
    lVar9 = param_7;
  }
  lVar11 = lVar11 + lVar9;
  fVar21 = param_2[4];
  fVar19 = param_2[5];
  sVar2 = *(short *)((longlong)param_2 + 0x36);
  uVar12 = *(uint *)(lVar13 + 0x24);
  uVar10 = uVar12 & 0x800;
  fVar16 = *(float *)(lVar11 + 0x16c);
  fVar15 = *(float *)(lVar11 + 0x10);
  fVar14 = fVar19 * fVar19 + fVar21 * fVar21 + 1.1754944e-38;
  auVar20 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar21 = fVar21 * auVar20._0_4_;
  fVar14 = *(float *)(lVar11 + 0x168);
  fVar17 = *(float *)(lVar11 + 0xc);
  fVar19 = auVar20._0_4_ * fVar19;
  *(int8_t *)(param_2 + 0x18) = 0;
  uVar6 = *(int8_t *)(param_2 + 0x18);
  if (uVar10 != 0) {
    uVar6 = 4;
  }
  *(int8_t *)(param_2 + 0x18) = uVar6;
  fVar15 = (param_2[1] - (fVar16 + fVar15)) * fVar21 + ((fVar14 + fVar17) - *param_2) * fVar19;
  fVar16 = *(float *)(lVar11 + 0x188);
  param_2[0x16] = fVar16;
  param_2[0x14] = fVar16;
  param_2[0xe] = fVar15;
  if (sVar2 < 0) {
    param_2[0xf] = 1.0;
    if (uVar10 == 0) {
      fVar21 = fVar15 * 0.75 * fVar15 * 2.25;
    }
    else {
      fVar21 = 0.0;
    }
    param_2[0x10] = fVar21;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    param_2[0x11] = 0.0;
  }
  else {
    fVar14 = 0.0;
    fVar16 = 1.0 / *(float *)(lVar13 + 0x158);
    param_2[0xf] = fVar16;
    if (uVar10 == 0) {
      fVar16 = fVar15 * 0.75 * fVar15 * 2.25 * fVar16;
    }
    else {
      fVar16 = 0.0;
    }
    param_2[0x10] = fVar16;
    param_6 = (longlong)sVar2 * 0x200 + param_6;
    lVar9 = (longlong)sVar2 * 0x240;
    if ((param_8 == 0) || (lVar4 = param_8, (*(byte *)(lVar9 + 8 + param_8) & 1) == 0)) {
      lVar4 = param_7;
    }
    lVar9 = lVar9 + lVar4;
    fVar16 = *(float *)(lVar9 + 0x188);
    fVar15 = param_2[6];
    param_2[0x17] = fVar16;
    param_2[0x15] = fVar16;
    if ((fVar15 != 0.0) &&
       ((((*(byte *)(lVar11 + 0x40) & 1) == 0 && (*(float *)(lVar11 + 0x2c) <= 0.0)) ||
        (((*(byte *)(lVar9 + 0x40) & 1) == 0 && (*(float *)(lVar9 + 0x2c) <= 0.0)))))) {
      if (((-0.01 < fVar15 - 1.0) && (fVar15 - 1.0 < 0.01)) ||
         ((-0.01 < fVar15 - -1.0 && (fVar15 - -1.0 < 0.01)))) {
        param_2[4] = 0.0;
        param_2[5] = 1.0;
        param_2[6] = 0.0;
        param_2[7] = 0.0;
      }
      else {
        param_2[6] = 0.0;
        fVar16 = param_2[4];
        fVar15 = fVar16 * fVar16 + param_2[5] * param_2[5] + param_2[6] * param_2[6];
        auVar20 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar17 = auVar20._0_4_;
        fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
        param_2[5] = fVar15 * param_2[5];
        param_2[6] = fVar15 * param_2[6];
        param_2[4] = fVar15 * fVar16;
      }
    }
    uVar10 = *(uint *)(param_6 + 0x24);
    uVar8 = uVar10 & 0x800;
    if (uVar8 != 0) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 8;
    }
    if ((*(char *)(lVar13 + 0x9b) == *(char *)(param_6 + 0x9b)) &&
       (*(char *)(lVar13 + 0x9b) != '\0')) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x40;
    }
    fVar16 = *(float *)(lVar9 + 0x16c);
    fVar15 = *(float *)(lVar9 + 0x10);
    fVar18 = 1.0 / *(float *)(param_6 + 0x158);
    fVar17 = *(float *)(lVar9 + 0xc);
    fVar1 = *(float *)(lVar9 + 0x168);
    param_2[0x12] = fVar18;
    fVar19 = ((fVar17 + fVar1) - *param_2) * fVar19;
    fVar21 = -((param_2[1] - (fVar16 + fVar15)) * fVar21) - fVar19;
    param_2[0x11] = fVar21;
    if (uVar8 == 0) {
      fVar14 = fVar21 * 0.75 * fVar21 * 2.25 * fVar18;
    }
    iVar3 = *(int *)(lVar13 + 0x1dc);
    uVar12 = uVar12 >> 0xb;
    param_2[0x13] = fVar14;
    if (((iVar3 < 0) || (uVar8 = *(uint *)(param_6 + 0x1dc), (int)uVar8 < 0)) ||
       (((&UNK_1809f89f0)[uVar8 & 7] &
        *(byte *)((longlong)((*(int *)(param_4 + 0x87b770) >> 3) * iVar3 + ((int)uVar8 >> 3)) +
                 *(longlong *)(param_4 + 0x87b768))) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((*(char *)(param_1 + 0x1488) == '\0') || (bVar5)) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 3;
    }
    else {
      cVar7 = func_0x000180598dd0(fVar19,lVar13,param_6,param_5);
      if (cVar7 != '\0') {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
      }
      cVar7 = func_0x000180598dd0(extraout_XMM0_Da,param_6,lVar13);
      if (cVar7 != '\0') {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
      }
    }
    if ((param_8 != 0) && (*(char *)(param_1 + 0x1489) != '\0')) {
      if (((byte)uVar12 & 1) == ((byte)(uVar10 >> 0xb) & 1)) {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x60;
      }
      else if ((uVar12 & 1) == 0) {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x40;
      }
      else {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x20;
      }
    }
  }
  return;
}






// 函数: void FUN_1805a85bd(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1805a85bd(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  int8_t uVar5;
  char cVar6;
  longlong in_RAX;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RBP;
  uint uVar12;
  longlong unaff_RDI;
  longlong lVar13;
  float *in_R10;
  longlong lVar14;
  uint64_t unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  int8_t in_stack_000000b0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R12;
  lVar14 = (longlong)*(short *)(param_2 + 0x34) * 0x200 + unaff_RDI;
  lVar10 = (longlong)*(short *)(param_2 + 0x34) * 0x240;
  if ((unaff_RBP == 0) ||
     (lVar13 = lVar10 + unaff_RBP, (*(byte *)(lVar10 + 8 + unaff_RBP) & 1) == 0)) {
    lVar13 = lVar10 + param_4;
  }
  fVar22 = in_R10[4];
  fVar20 = in_R10[5];
  sVar2 = *(short *)((longlong)in_R10 + 0x36);
  uVar12 = *(uint *)(lVar14 + 0x24);
  uVar9 = uVar12 & 0x800;
  fVar17 = *(float *)(lVar13 + 0x16c);
  fVar16 = *(float *)(lVar13 + 0x10);
  fVar15 = fVar20 * fVar20 + fVar22 * fVar22 + 1.1754944e-38;
  auVar21 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
  fVar22 = fVar22 * auVar21._0_4_;
  fVar15 = *(float *)(lVar13 + 0x168);
  fVar18 = *(float *)(lVar13 + 0xc);
  fVar20 = auVar21._0_4_ * fVar20;
  *(int8_t *)(in_R10 + 0x18) = 0;
  uVar5 = *(int8_t *)(in_R10 + 0x18);
  if (uVar9 != 0) {
    uVar5 = 4;
  }
  *(int8_t *)(in_R10 + 0x18) = uVar5;
  fVar16 = (in_R10[1] - (fVar17 + fVar16)) * fVar22 + ((fVar15 + fVar18) - *in_R10) * fVar20;
  fVar17 = *(float *)(lVar13 + 0x188);
  in_R10[0x16] = fVar17;
  in_R10[0x14] = fVar17;
  in_R10[0xe] = fVar16;
  if (sVar2 < 0) {
    in_R10[0xf] = 1.0;
    if (uVar9 == 0) {
      fVar22 = fVar16 * 0.75 * fVar16 * 2.25;
    }
    else {
      fVar22 = 0.0;
    }
    in_R10[0x10] = fVar22;
    in_R10[0x12] = 0.0;
    in_R10[0x13] = 0.0;
    in_R10[0x11] = 0.0;
  }
  else {
    fVar15 = 0.0;
    fVar17 = 1.0 / *(float *)(lVar14 + 0x158);
    in_R10[0xf] = fVar17;
    if (uVar9 == 0) {
      fVar17 = fVar16 * 0.75 * fVar16 * 2.25 * fVar17;
    }
    else {
      fVar17 = 0.0;
    }
    in_R10[0x10] = fVar17;
    lVar11 = (longlong)sVar2 * 0x200 + unaff_RDI;
    lVar10 = (longlong)sVar2 * 0x240;
    if ((unaff_RBP == 0) ||
       (lVar7 = lVar10 + unaff_RBP, (*(byte *)(lVar10 + 8 + unaff_RBP) & 1) == 0)) {
      lVar7 = lVar10 + param_4;
    }
    fVar17 = *(float *)(lVar7 + 0x188);
    fVar16 = in_R10[6];
    in_R10[0x17] = fVar17;
    in_R10[0x15] = fVar17;
    if ((fVar16 != 0.0) &&
       ((((*(byte *)(lVar13 + 0x40) & 1) == 0 && (*(float *)(lVar13 + 0x2c) <= 0.0)) ||
        (((*(byte *)(lVar7 + 0x40) & 1) == 0 && (*(float *)(lVar7 + 0x2c) <= 0.0)))))) {
      if (((-0.01 < fVar16 - 1.0) && (fVar16 - 1.0 < 0.01)) ||
         ((-0.01 < fVar16 - -1.0 && (fVar16 - -1.0 < 0.01)))) {
        in_R10[4] = 0.0;
        in_R10[5] = 1.0;
        in_R10[6] = 0.0;
        in_R10[7] = 0.0;
      }
      else {
        in_R10[6] = 0.0;
        fVar17 = in_R10[4];
        fVar16 = fVar17 * fVar17 + in_R10[5] * in_R10[5] + in_R10[6] * in_R10[6];
        auVar21 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar18 = auVar21._0_4_;
        fVar16 = fVar18 * 0.5 * (3.0 - fVar16 * fVar18 * fVar18);
        in_R10[5] = fVar16 * in_R10[5];
        in_R10[6] = fVar16 * in_R10[6];
        in_R10[4] = fVar16 * fVar17;
      }
    }
    uVar9 = *(uint *)(lVar11 + 0x24);
    uVar8 = uVar9 & 0x800;
    if (uVar8 != 0) {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 8;
    }
    if ((*(char *)(lVar14 + 0x9b) == *(char *)(lVar11 + 0x9b)) && (*(char *)(lVar14 + 0x9b) != '\0')
       ) {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x40;
    }
    fVar17 = *(float *)(lVar7 + 0x16c);
    fVar16 = *(float *)(lVar7 + 0x10);
    fVar19 = 1.0 / *(float *)(lVar11 + 0x158);
    fVar18 = *(float *)(lVar7 + 0xc);
    fVar1 = *(float *)(lVar7 + 0x168);
    in_R10[0x12] = fVar19;
    fVar20 = ((fVar18 + fVar1) - *in_R10) * fVar20;
    fVar22 = -((in_R10[1] - (fVar17 + fVar16)) * fVar22) - fVar20;
    in_R10[0x11] = fVar22;
    if (uVar8 == 0) {
      fVar15 = fVar22 * 0.75 * fVar22 * 2.25 * fVar19;
    }
    iVar3 = *(int *)(lVar14 + 0x1dc);
    uVar12 = uVar12 >> 0xb;
    in_R10[0x13] = fVar15;
    if (((iVar3 < 0) || (uVar8 = *(uint *)(lVar11 + 0x1dc), (int)uVar8 < 0)) ||
       (((&UNK_1809f89f0)[uVar8 & 7] &
        *(byte *)((longlong)((*(int *)(unaff_R15 + 0x87b770) >> 3) * iVar3 + ((int)uVar8 >> 3)) +
                 *(longlong *)(unaff_R15 + 0x87b768))) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((*(char *)(unaff_R14 + 0x1488) == '\0') || (bVar4)) {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 3;
    }
    else {
      cVar6 = func_0x000180598dd0(fVar20,lVar14,lVar11,in_stack_000000b0);
      if (cVar6 != '\0') {
        *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 1;
      }
      cVar6 = func_0x000180598dd0(extraout_XMM0_Da,lVar11,lVar14);
      if (cVar6 != '\0') {
        *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 2;
      }
    }
    if ((unaff_RBP != 0) && (*(char *)(unaff_R14 + 0x1489) != '\0')) {
      if (((byte)uVar12 & 1) == ((byte)(uVar9 >> 0xb) & 1)) {
        *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x60;
      }
      else if ((uVar12 & 1) == 0) {
        *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x40;
      }
      else {
        *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x20;
      }
    }
  }
  return;
}






// 函数: void FUN_1805a86be(uint64_t param_1,float param_2,longlong param_3,longlong param_4)
void FUN_1805a86be(uint64_t param_1,float param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int in_EDX;
  short unaff_BX;
  longlong lVar9;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  float *in_R10;
  longlong in_R11;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar10;
  int32_t extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int8_t in_stack_000000b0;
  
  fVar14 = 0.0;
  fVar11 = 1.0 / *(float *)(in_R11 + 0x158);
  in_R10[0xf] = fVar11;
  if (in_EDX == 0) {
    fVar11 = param_2 * 0.75 * param_2 * 2.25 * fVar11;
  }
  else {
    fVar11 = 0.0;
  }
  in_R10[0x10] = fVar11;
  lVar9 = (longlong)unaff_BX * 0x200 + unaff_RDI;
  lVar8 = (longlong)unaff_BX * 0x240;
  if ((unaff_RBP == 0) || (lVar6 = lVar8 + unaff_RBP, (*(byte *)(lVar8 + 8 + unaff_RBP) & 1) == 0))
  {
    lVar6 = lVar8 + param_4;
  }
  fVar11 = *(float *)(lVar6 + 0x188);
  fVar12 = in_R10[6];
  in_R10[0x17] = fVar11;
  in_R10[0x15] = fVar11;
  if ((fVar12 != 0.0) &&
     ((((*(byte *)(param_3 + 0x40) & 1) == 0 && (*(float *)(param_3 + 0x2c) <= 0.0)) ||
      (((*(byte *)(lVar6 + 0x40) & 1) == 0 && (*(float *)(lVar6 + 0x2c) <= 0.0)))))) {
    if (((-0.01 < fVar12 - 1.0) && (fVar12 - 1.0 < 0.01)) ||
       ((-0.01 < fVar12 - -1.0 && (fVar12 - -1.0 < 0.01)))) {
      in_R10[4] = 0.0;
      in_R10[5] = 1.0;
      in_R10[6] = 0.0;
      in_R10[7] = 0.0;
    }
    else {
      in_R10[6] = 0.0;
      fVar11 = in_R10[4];
      fVar12 = fVar11 * fVar11 + in_R10[5] * in_R10[5] + in_R10[6] * in_R10[6];
      auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar10 = auVar13._0_4_;
      fVar12 = fVar10 * 0.5 * (3.0 - fVar12 * fVar10 * fVar10);
      in_R10[5] = fVar12 * in_R10[5];
      in_R10[6] = fVar12 * in_R10[6];
      in_R10[4] = fVar12 * fVar11;
    }
  }
  uVar2 = *(uint *)(lVar9 + 0x24);
  uVar7 = uVar2 & 0x800;
  if (uVar7 != 0) {
    *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 8;
  }
  if ((*(char *)(in_R11 + 0x9b) == *(char *)(lVar9 + 0x9b)) && (*(char *)(in_R11 + 0x9b) != '\0')) {
    *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x40;
  }
  fVar11 = *(float *)(lVar6 + 0x16c);
  fVar12 = *(float *)(lVar6 + 0x10);
  fVar15 = 1.0 / *(float *)(lVar9 + 0x158);
  fVar10 = *(float *)(lVar6 + 0xc);
  fVar1 = *(float *)(lVar6 + 0x168);
  in_R10[0x12] = fVar15;
  fVar10 = ((fVar10 + fVar1) - *in_R10) * unaff_XMM12_Da;
  fVar11 = -((in_R10[1] - (fVar11 + fVar12)) * unaff_XMM13_Da) - fVar10;
  in_R10[0x11] = fVar11;
  if (uVar7 == 0) {
    fVar14 = fVar11 * 0.75 * fVar11 * 2.25 * fVar15;
  }
  iVar3 = *(int *)(in_R11 + 0x1dc);
  in_R10[0x13] = fVar14;
  if (((iVar3 < 0) || (uVar7 = *(uint *)(lVar9 + 0x1dc), (int)uVar7 < 0)) ||
     (((&UNK_1809f89f0)[uVar7 & 7] &
      *(byte *)((longlong)((*(int *)(unaff_R15 + 0x87b770) >> 3) * iVar3 + ((int)uVar7 >> 3)) +
               *(longlong *)(unaff_R15 + 0x87b768))) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(unaff_R14 + 0x1488) == '\0') || (bVar4)) {
    *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 3;
  }
  else {
    cVar5 = func_0x000180598dd0(fVar10,fVar11,lVar9,in_stack_000000b0);
    if (cVar5 != '\0') {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 1;
    }
    cVar5 = func_0x000180598dd0(extraout_XMM0_Da,lVar9,in_R11);
    if (cVar5 != '\0') {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 2;
    }
  }
  if ((unaff_RBP != 0) && (*(char *)(unaff_R14 + 0x1489) != '\0')) {
    if (((byte)(unaff_ESI >> 0xb) & 1) == ((byte)(uVar2 >> 0xb) & 1)) {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x60;
    }
    else if ((unaff_ESI >> 0xb & 1) == 0) {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x40;
    }
    else {
      *(byte *)(in_R10 + 0x18) = *(byte *)(in_R10 + 0x18) | 0x20;
    }
  }
  return;
}






