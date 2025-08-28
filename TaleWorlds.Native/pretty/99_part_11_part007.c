#include "TaleWorlds.Native.Split.h"

// 99_part_11_part007.c - 5 个函数

// 函数: void FUN_1806dacef(uint param_1)
void FUN_1806dacef(uint param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  float *unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar7;
  longlong *unaff_R14;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM4_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_XMM5_Da;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  fVar18 = in_XMM5_Da + in_XMM5_Da;
  fVar15 = in_XMM4_Da + in_XMM4_Da;
  fVar22 = unaff_RBP[-0x1d];
  fVar20 = (unaff_RBP[4] - unaff_RBP[-0x1a]) + (unaff_RBP[4] - unaff_RBP[-0x1a]);
  fVar17 = unaff_RBP[-0x20];
  fStack0000000000000060 = (float)((uint)fVar17 ^ param_1);
  unaff_RBP[0x46] = unaff_RBP[-0x1e];
  fStack0000000000000068 = (float)((uint)unaff_RBP[-0x1e] ^ param_1);
  fVar14 = fVar22 * fVar22 - 0.5;
  unaff_RBP[0x4c] = unaff_RBP[-0x1f];
  fStack0000000000000064 = (float)((uint)unaff_RBP[-0x1f] ^ param_1);
  fVar12 = fStack0000000000000064 * fVar15 + fStack0000000000000060 * fVar18 +
           fStack0000000000000068 * fVar20;
  fVar26 = (fStack0000000000000064 * fVar20 - fStack0000000000000068 * fVar15) * fVar22 +
           fVar14 * fVar18 + fVar12 * fStack0000000000000060;
  fVar25 = (fStack0000000000000068 * fVar18 - fStack0000000000000060 * fVar20) * fVar22 +
           fVar14 * fVar15 + fVar12 * fStack0000000000000064;
  fVar24 = (fStack0000000000000060 * fVar15 - fStack0000000000000064 * fVar18) * fVar22 +
           fVar14 * fVar20 + fVar12 * fStack0000000000000068;
  fStack000000000000006c = fVar22;
  pfVar4 = (float *)FUN_1800fcb90(&stack0x00000060);
  fVar12 = unaff_RBP[0x46];
  fVar14 = unaff_RBP[0x4c];
  fVar16 = fVar17 + fVar17;
  fVar15 = pfVar4[2];
  fVar18 = *pfVar4;
  fVar20 = pfVar4[3];
  unaff_RBP[-5] = pfVar4[1];
  fVar8 = fVar14 + fVar14;
  fVar13 = fVar12 * (fVar12 + fVar12);
  unaff_RBP[0x4c] = fVar14 * fVar16;
  unaff_RBP[-6] = fVar15;
  fVar15 = fVar22 * (fVar12 + fVar12);
  unaff_RBP[-0x18] = fVar22 * fVar8;
  unaff_RBP[-0x17] = (1.0 - fVar14 * fVar8) - fVar13;
  fVar9 = unaff_RBP[0x4c] - fVar15;
  fVar23 = unaff_RBP[-0x18] + fVar12 * fVar16;
  unaff_RBP[-0x16] = fVar15 + unaff_RBP[0x4c];
  fVar15 = unaff_RBP[-1];
  unaff_RBP[0x4c] = fVar9;
  unaff_RBP[-0xd] = fVar9;
  fVar21 = fVar12 * fVar8 - fVar22 * fVar16;
  unaff_RBP[-0x10] = unaff_RBP[-0x17];
  fVar9 = fVar12 * fVar8 + fVar22 * fVar16;
  unaff_RBP[-0x15] = fVar12 * fVar16 - fVar22 * fVar8;
  unaff_RBP[-0xf] = unaff_RBP[-0x16];
  fVar19 = unaff_RBP[-2] + unaff_RBP[-2];
  unaff_RBP[0x46] = fVar21;
  fVar16 = 1.0 - fVar17 * fVar16;
  unaff_RBP[-9] = fVar21;
  fVar22 = *unaff_RBP;
  unaff_RBP[-0xe] = unaff_RBP[-0x15];
  unaff_RBP[-0x11] = fVar9;
  unaff_RBP[-0xb] = fVar9;
  unaff_RBP[-0x18] = fVar23;
  fVar17 = fVar16 - fVar14 * fVar8;
  unaff_RBP[-10] = fVar23;
  fVar16 = fVar16 - fVar13;
  unaff_RBP[-0x14] = fVar17;
  unaff_RBP[-8] = fVar17;
  unaff_RBP[-4] = fVar16;
  unaff_RBP[-0xc] = fVar16;
  cVar1 = *(char *)(unaff_RSI + 0x1dd);
  fVar17 = unaff_RBP[-6];
  unaff_RBP[-0x13] = (1.0 - fVar15 * (fVar15 + fVar15)) - fVar22 * (fVar22 + fVar22);
  fVar12 = unaff_RBP[1] * (fVar15 + fVar15);
  fVar14 = unaff_RBP[1] * (fVar22 + fVar22) + fVar15 * fVar19;
  unaff_RBP[-0x12] = fVar22 * fVar19 - fVar12;
  if (cVar1 == '\0') goto LAB_1806db1d3;
  switch(*(undefined4 *)(unaff_RSI + 0x1c8)) {
  case 1:
    FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
    break;
  case 2:
    FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar25);
    break;
  case 3:
    goto code_r0x0001806db100;
  case 4:
    FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -10,unaff_RSI + 0xb8,fVar24);
    break;
  case 5:
code_r0x0001806db100:
    FUN_1806e38f0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
    break;
  case 6:
    FUN_1806e38f0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar25);
    break;
  case 7:
    FUN_1806e3150(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
  }
LAB_1806db1d3:
  fVar22 = 0.0;
  if (*(char *)(unaff_RSI + 0x1dc) == '\0') {
    fVar15 = unaff_RBP[0x46];
    fVar12 = unaff_RBP[0x4c];
  }
  else {
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar13 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar8 = fVar26 * unaff_RBP[-0x17];
      fVar9 = unaff_RBP[-0x16] * fVar26;
      fVar13 = unaff_RBP[-0x15] * fVar26;
    }
    fVar12 = unaff_RBP[0x4c];
    if ((uVar3 & 2) != 0) {
      fVar8 = fVar8 + fVar12 * fVar25;
      fVar9 = fVar9 + fVar16 * fVar25;
      fVar13 = fVar13 + unaff_RBP[-0x11] * fVar25;
    }
    fVar15 = unaff_RBP[0x46];
    if ((uVar3 & 4) != 0) {
      fVar8 = fVar8 + fVar23 * fVar24;
      fVar9 = fVar9 + fVar15 * fVar24;
      fVar13 = fVar13 + unaff_RBP[-0x14] * fVar24;
    }
    fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar13 * fVar13);
    if (*(float *)(unaff_RSI + 0x1d0) <= fVar8 && fVar8 != *(float *)(unaff_RSI + 0x1d0)) {
      uVar7 = 0xff0000;
      if (fVar8 < *(float *)(unaff_RSI + 0x7c) || fVar8 == *(float *)(unaff_RSI + 0x7c)) {
        uVar7 = 0xff00;
      }
      (**(code **)(*unaff_R14 + 0x30))(fVar8,unaff_RBP + -0x1c,unaff_RBP + 2,uVar7);
    }
  }
  if (fVar18 == 0.0) {
    fVar8 = 0.0;
    fVar9 = 1.0;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar20 * fVar20 + fVar18 * fVar18);
    fVar8 = fVar18 * fVar9;
    fVar9 = fVar20 * fVar9;
  }
  uVar3 = *(uint *)(unaff_RSI + 0x1c8);
  fVar13 = -fVar8;
  fStack0000000000000060 = fVar20 * fVar13 + fVar18 * fVar9;
  fVar18 = fVar20 * fVar9 - fVar18 * fVar13;
  fVar20 = fVar17 * fVar9 - unaff_RBP[-5] * fVar13;
  fVar17 = fVar17 * fVar13 + unaff_RBP[-5] * fVar9;
  fStack0000000000000064 = fVar17;
  fStack0000000000000068 = fVar20;
  fStack000000000000006c = fVar18;
  if ((uVar3 & 8) != 0) {
    fVar13 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    if (fVar13 != 0.0) {
      fVar13 = 1.0 / fVar13;
      fVar9 = fVar13 * fVar9;
      fVar8 = fVar13 * fVar8;
    }
    if (fVar9 <= -1.0) {
      fVar9 = -1.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    fVar9 = (float)acosf(fVar9);
    fVar9 = fVar9 + fVar9;
    if (fVar8 < 0.0) {
      fVar9 = -fVar9;
    }
    fVar8 = *(float *)(unaff_RSI + 0xe4);
    if ((0.0 < *(float *)(unaff_RSI + 0xe0)) || (0.0 < *(float *)(unaff_RSI + 0xdc))) {
      fVar8 = 0.0;
    }
    fVar13 = fVar8 + *(float *)(unaff_RSI + 0xec);
    (**(code **)(*unaff_R14 + 0x18))
              (fVar13,unaff_RBP + -0x20,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
               *(float *)(unaff_RSI + 0xe8) - fVar8 < fVar9 || fVar9 < fVar13);
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
  }
  uVar6 = uVar3 >> 4;
  if (((uVar6 & 1) == 0) || ((uVar3 >> 5 & 1) == 0)) {
    if (((byte)(uVar3 >> 5) & 1) == ((byte)uVar6 & 1)) {
      return;
    }
    uVar3 = *(uint *)(unaff_RSI + 0x1c4);
    cVar1 = *(char *)(unaff_RSI + 0x1df);
    unaff_RBP[-0xc] = 0.0;
    unaff_RBP[-0xb] = 0.0;
    unaff_RBP[-10] = 0.0;
    unaff_RBP[0xe] = 0.0;
    unaff_RBP[0xf] = 0.0;
    unaff_RBP[0x10] = 0.0;
    unaff_RBP[-0x10] = -0.0;
    unaff_RBP[-0xf] = -0.0;
    unaff_RBP[-0xe] = -0.70710677;
    unaff_RBP[-0xd] = 0.70710677;
    unaff_RBP[10] = 0.0;
    unaff_RBP[0xb] = 0.70710677;
    unaff_RBP[0xc] = 0.0;
    unaff_RBP[0xd] = 0.70710677;
    if ((uVar6 & 1) == 0) {
      if ((uVar3 & 0x10) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
        fStack0000000000000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000078 = unaff_RBP[-0x1a];
        fVar22 = fVar14 * unaff_RBP[-4] + unaff_RBP[-0x13] * fVar12 +
                 unaff_RBP[-0x12] * unaff_RBP[-0x11];
        uVar10 = *(undefined4 *)(unaff_RSI + 0x108);
        goto LAB_1806db85b;
      }
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
        fStack0000000000000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack0000000000000074 = unaff_RBP[-0x1b];
        in_stack_00000078 = unaff_RBP[-0x1a];
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x108),&stack0x00000060,fVar20,
                      fVar18);
        return;
      }
    }
    else {
      if ((uVar3 & 0x20) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
        fStack0000000000000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000078 = unaff_RBP[-0x1a];
        fVar22 = fVar14 * fVar15 + unaff_RBP[-0x13] * unaff_RBP[-0x18] +
                 unaff_RBP[-0x12] * unaff_RBP[-0x14];
        uVar10 = *(undefined4 *)(unaff_RSI + 0x104);
LAB_1806db85b:
        fStack0000000000000074 = unaff_RBP[-0x1b];
        FUN_1806e3720(uVar10,fStack0000000000000074,&stack0x00000060,fVar22,uVar10);
        return;
      }
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
        fStack0000000000000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack0000000000000074 = unaff_RBP[-0x1b];
        in_stack_00000078 = unaff_RBP[-0x1a];
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x104),&stack0x00000060,fVar17,
                      fVar18);
        return;
      }
    }
  }
  else {
    if (*(char *)(unaff_RSI + 0x1de) != '\0') {
      fVar17 = (float)atan2f(fVar17,fVar18 + 1.0);
      fVar12 = (float)atan2f(fVar20,fVar18 + 1.0);
      if ((*(float *)(unaff_RSI + 0xfc) <= 0.0) && (*(float *)(unaff_RSI + 0xf8) <= 0.0)) {
        fVar22 = *(float *)(unaff_RSI + 0x100);
      }
      fVar14 = *(float *)(unaff_RSI + 0x108);
      lVar2 = *unaff_R14;
      fVar12 = (ABS(fVar12 * 4.0) + fVar22) / fVar14;
      fVar22 = (ABS(fVar17 * 4.0) + fVar22) / *(float *)(unaff_RSI + 0x104);
      uVar10 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
      uVar11 = tanf(fVar14 * 0.25);
      (**(code **)(lVar2 + 0x20))
                (uVar11,unaff_RBP + -0x20,uVar11,uVar10,1.0 < fVar12 * fVar12 + fVar22 * fVar22);
    }
    if (*(char *)(unaff_RSI + 0x1df) == '\0') {
      return;
    }
  }
  FUN_1806df8b0();
  return;
}






// 函数: void FUN_1806dad96(uint param_1,float param_2,undefined8 param_3,float param_4)
void FUN_1806dad96(uint param_1,float param_2,undefined8 param_3,float param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  float *unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar7;
  longlong *unaff_R14;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float in_XMM4_Da;
  float fVar13;
  float fVar14;
  float in_XMM5_Da;
  float fVar15;
  float unaff_XMM6_Da;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  float fVar18;
  float unaff_XMM9_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar21;
  float unaff_XMM12_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_stack_00000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  unaff_RBP[0x4c] = unaff_RBP[-0x1f];
  fStack0000000000000064 = (float)((uint)unaff_RBP[-0x1f] ^ param_1);
  param_2 = fStack0000000000000064 * in_XMM4_Da + unaff_XMM11_Da * in_XMM5_Da + param_2;
  fVar23 = (fStack0000000000000064 * unaff_XMM6_Da - unaff_XMM8_Da * in_XMM4_Da) * unaff_XMM9_Da +
           param_4 * in_XMM5_Da + param_2 * unaff_XMM11_Da;
  fVar22 = (unaff_XMM12_Da - unaff_XMM11_Da * unaff_XMM6_Da) * unaff_XMM9_Da + param_4 * in_XMM4_Da
           + param_2 * fStack0000000000000064;
  fVar21 = (unaff_XMM11_Da * in_XMM4_Da - fStack0000000000000064 * in_XMM5_Da) * unaff_XMM9_Da +
           param_4 * unaff_XMM6_Da + param_2 * unaff_XMM8_Da;
  pfVar4 = (float *)FUN_1800fcb90(&stack0x00000060);
  fVar17 = unaff_RBP[0x46];
  fVar14 = unaff_RBP[0x4c];
  fVar13 = unaff_XMM10_Da + unaff_XMM10_Da;
  fVar19 = pfVar4[2];
  fVar18 = *pfVar4;
  fVar24 = pfVar4[3];
  unaff_RBP[-5] = pfVar4[1];
  fVar8 = fVar14 + fVar14;
  fVar12 = fVar17 * (fVar17 + fVar17);
  unaff_RBP[0x4c] = fVar14 * fVar13;
  unaff_RBP[-6] = fVar19;
  fVar19 = unaff_XMM9_Da * (fVar17 + fVar17);
  unaff_RBP[-0x18] = unaff_XMM9_Da * fVar8;
  unaff_RBP[-0x17] = (1.0 - fVar14 * fVar8) - fVar12;
  fVar9 = unaff_RBP[0x4c] - fVar19;
  fVar20 = unaff_RBP[-0x18] + fVar17 * fVar13;
  unaff_RBP[-0x16] = fVar19 + unaff_RBP[0x4c];
  fVar19 = unaff_RBP[-1];
  unaff_RBP[0x4c] = fVar9;
  unaff_RBP[-0xd] = fVar9;
  fVar16 = fVar17 * fVar8 - unaff_XMM9_Da * fVar13;
  unaff_RBP[-0x10] = unaff_RBP[-0x17];
  fVar9 = fVar17 * fVar8 + unaff_XMM9_Da * fVar13;
  unaff_RBP[-0x15] = fVar17 * fVar13 - unaff_XMM9_Da * fVar8;
  unaff_RBP[-0xf] = unaff_RBP[-0x16];
  fVar15 = unaff_RBP[-2] + unaff_RBP[-2];
  unaff_RBP[0x46] = fVar16;
  fVar13 = 1.0 - unaff_XMM10_Da * fVar13;
  unaff_RBP[-9] = fVar16;
  fVar17 = *unaff_RBP;
  unaff_RBP[-0xe] = unaff_RBP[-0x15];
  unaff_RBP[-0x11] = fVar9;
  unaff_RBP[-0xb] = fVar9;
  unaff_RBP[-0x18] = fVar20;
  fVar14 = fVar13 - fVar14 * fVar8;
  unaff_RBP[-10] = fVar20;
  fVar13 = fVar13 - fVar12;
  unaff_RBP[-0x14] = fVar14;
  unaff_RBP[-8] = fVar14;
  unaff_RBP[-4] = fVar13;
  unaff_RBP[-0xc] = fVar13;
  cVar1 = *(char *)(unaff_RSI + 0x1dd);
  fVar14 = unaff_RBP[-6];
  unaff_RBP[-0x13] = (1.0 - fVar19 * (fVar19 + fVar19)) - fVar17 * (fVar17 + fVar17);
  fVar8 = unaff_RBP[1] * (fVar19 + fVar19);
  fVar19 = unaff_RBP[1] * (fVar17 + fVar17) + fVar19 * fVar15;
  unaff_RBP[-0x12] = fVar17 * fVar15 - fVar8;
  if (cVar1 == '\0') goto LAB_1806db1d3;
  switch(*(undefined4 *)(unaff_RSI + 0x1c8)) {
  case 1:
    FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
    break;
  case 2:
    FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar22);
    break;
  case 3:
    goto code_r0x0001806db100;
  case 4:
    FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -10,unaff_RSI + 0xb8,fVar21);
    break;
  case 5:
code_r0x0001806db100:
    FUN_1806e38f0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
    break;
  case 6:
    FUN_1806e38f0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar22);
    break;
  case 7:
    FUN_1806e3150(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
  }
LAB_1806db1d3:
  fVar17 = 0.0;
  if (*(char *)(unaff_RSI + 0x1dc) == '\0') {
    fVar9 = unaff_RBP[0x46];
    fVar8 = unaff_RBP[0x4c];
  }
  else {
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    fVar12 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar12 = fVar23 * unaff_RBP[-0x17];
      fVar15 = unaff_RBP[-0x16] * fVar23;
      fVar16 = unaff_RBP[-0x15] * fVar23;
    }
    fVar8 = unaff_RBP[0x4c];
    if ((uVar3 & 2) != 0) {
      fVar12 = fVar12 + fVar8 * fVar22;
      fVar15 = fVar15 + fVar13 * fVar22;
      fVar16 = fVar16 + unaff_RBP[-0x11] * fVar22;
    }
    fVar9 = unaff_RBP[0x46];
    if ((uVar3 & 4) != 0) {
      fVar12 = fVar12 + fVar20 * fVar21;
      fVar15 = fVar15 + fVar9 * fVar21;
      fVar16 = fVar16 + unaff_RBP[-0x14] * fVar21;
    }
    fVar12 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar16 * fVar16);
    if (*(float *)(unaff_RSI + 0x1d0) <= fVar12 && fVar12 != *(float *)(unaff_RSI + 0x1d0)) {
      uVar7 = 0xff0000;
      if (fVar12 < *(float *)(unaff_RSI + 0x7c) || fVar12 == *(float *)(unaff_RSI + 0x7c)) {
        uVar7 = 0xff00;
      }
      (**(code **)(*unaff_R14 + 0x30))(fVar12,unaff_RBP + -0x1c,unaff_RBP + 2,uVar7);
    }
  }
  if (fVar18 == 0.0) {
    fVar12 = 0.0;
    fVar13 = 1.0;
  }
  else {
    fVar13 = 1.0 / SQRT(fVar24 * fVar24 + fVar18 * fVar18);
    fVar12 = fVar18 * fVar13;
    fVar13 = fVar24 * fVar13;
  }
  uVar3 = *(uint *)(unaff_RSI + 0x1c8);
  fVar15 = -fVar12;
  in_stack_00000060 = fVar24 * fVar15 + fVar18 * fVar13;
  fVar18 = fVar24 * fVar13 - fVar18 * fVar15;
  fVar24 = fVar14 * fVar13 - unaff_RBP[-5] * fVar15;
  fVar14 = fVar14 * fVar15 + unaff_RBP[-5] * fVar13;
  fStack0000000000000064 = fVar14;
  fStack0000000000000068 = fVar24;
  fStack000000000000006c = fVar18;
  if ((uVar3 & 8) != 0) {
    fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
    if (fVar15 != 0.0) {
      fVar15 = 1.0 / fVar15;
      fVar13 = fVar15 * fVar13;
      fVar12 = fVar15 * fVar12;
    }
    if (fVar13 <= -1.0) {
      fVar13 = -1.0;
    }
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    fVar13 = (float)acosf(fVar13);
    fVar13 = fVar13 + fVar13;
    if (fVar12 < 0.0) {
      fVar13 = -fVar13;
    }
    fVar12 = *(float *)(unaff_RSI + 0xe4);
    if ((0.0 < *(float *)(unaff_RSI + 0xe0)) || (0.0 < *(float *)(unaff_RSI + 0xdc))) {
      fVar12 = 0.0;
    }
    fVar15 = fVar12 + *(float *)(unaff_RSI + 0xec);
    (**(code **)(*unaff_R14 + 0x18))
              (fVar15,unaff_RBP + -0x20,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
               *(float *)(unaff_RSI + 0xe8) - fVar12 < fVar13 || fVar13 < fVar15);
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
  }
  uVar6 = uVar3 >> 4;
  if (((uVar6 & 1) == 0) || ((uVar3 >> 5 & 1) == 0)) {
    if (((byte)(uVar3 >> 5) & 1) == ((byte)uVar6 & 1)) {
      return;
    }
    uVar3 = *(uint *)(unaff_RSI + 0x1c4);
    cVar1 = *(char *)(unaff_RSI + 0x1df);
    unaff_RBP[-0xc] = 0.0;
    unaff_RBP[-0xb] = 0.0;
    unaff_RBP[-10] = 0.0;
    unaff_RBP[0xe] = 0.0;
    unaff_RBP[0xf] = 0.0;
    unaff_RBP[0x10] = 0.0;
    unaff_RBP[-0x10] = -0.0;
    unaff_RBP[-0xf] = -0.0;
    unaff_RBP[-0xe] = -0.70710677;
    unaff_RBP[-0xd] = 0.70710677;
    unaff_RBP[10] = 0.0;
    unaff_RBP[0xb] = 0.70710677;
    unaff_RBP[0xc] = 0.0;
    unaff_RBP[0xd] = 0.70710677;
    if ((uVar6 & 1) == 0) {
      if ((uVar3 & 0x10) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
        in_stack_00000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000078 = unaff_RBP[-0x1a];
        fVar17 = fVar19 * unaff_RBP[-4] + unaff_RBP[-0x13] * fVar8 +
                 unaff_RBP[-0x12] * unaff_RBP[-0x11];
        uVar10 = *(undefined4 *)(unaff_RSI + 0x108);
        goto LAB_1806db85b;
      }
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
        in_stack_00000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack0000000000000074 = unaff_RBP[-0x1b];
        in_stack_00000078 = unaff_RBP[-0x1a];
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x108),&stack0x00000060,fVar24,
                      fVar18);
        return;
      }
    }
    else {
      if ((uVar3 & 0x20) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
        in_stack_00000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000078 = unaff_RBP[-0x1a];
        fVar17 = fVar19 * fVar9 + unaff_RBP[-0x13] * unaff_RBP[-0x18] +
                 unaff_RBP[-0x12] * unaff_RBP[-0x14];
        uVar10 = *(undefined4 *)(unaff_RSI + 0x104);
LAB_1806db85b:
        fStack0000000000000074 = unaff_RBP[-0x1b];
        FUN_1806e3720(uVar10,fStack0000000000000074,&stack0x00000060,fVar17,uVar10);
        return;
      }
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
        in_stack_00000060 = (float)*puVar5;
        fStack0000000000000064 = (float)puVar5[1];
        fStack0000000000000068 = (float)puVar5[2];
        fStack000000000000006c = (float)puVar5[3];
        in_stack_00000070 = unaff_RBP[-0x1c];
        fStack0000000000000074 = unaff_RBP[-0x1b];
        in_stack_00000078 = unaff_RBP[-0x1a];
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x104),&stack0x00000060,fVar14,
                      fVar18);
        return;
      }
    }
  }
  else {
    if (*(char *)(unaff_RSI + 0x1de) != '\0') {
      fVar14 = (float)atan2f(fVar14,fVar18 + 1.0);
      fVar19 = (float)atan2f(fVar24,fVar18 + 1.0);
      if ((*(float *)(unaff_RSI + 0xfc) <= 0.0) && (*(float *)(unaff_RSI + 0xf8) <= 0.0)) {
        fVar17 = *(float *)(unaff_RSI + 0x100);
      }
      fVar18 = *(float *)(unaff_RSI + 0x108);
      lVar2 = *unaff_R14;
      fVar19 = (ABS(fVar19 * 4.0) + fVar17) / fVar18;
      fVar17 = (ABS(fVar14 * 4.0) + fVar17) / *(float *)(unaff_RSI + 0x104);
      uVar10 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
      uVar11 = tanf(fVar18 * 0.25);
      (**(code **)(lVar2 + 0x20))
                (uVar11,unaff_RBP + -0x20,uVar11,uVar10,1.0 < fVar19 * fVar19 + fVar17 * fVar17);
    }
    if (*(char *)(unaff_RSI + 0x1df) == '\0') {
      return;
    }
  }
  FUN_1806df8b0();
  return;
}






// 函数: void FUN_1806db3b0(void)
void FUN_1806db3b0(void)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_R14;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float in_XMM3_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  fVar9 = SQRT(in_XMM3_Da * in_XMM3_Da + unaff_XMM9_Da * unaff_XMM9_Da);
  if (fVar9 != unaff_XMM7_Da) {
    fVar9 = unaff_XMM11_Da / fVar9;
    in_XMM3_Da = fVar9 * in_XMM3_Da;
    unaff_XMM9_Da = fVar9 * unaff_XMM9_Da;
  }
  if (in_XMM3_Da <= -1.0) {
    in_XMM3_Da = -1.0;
  }
  if (unaff_XMM11_Da <= in_XMM3_Da) {
    in_XMM3_Da = unaff_XMM11_Da;
  }
  fVar9 = (float)acosf(in_XMM3_Da);
  fVar9 = fVar9 + fVar9;
  if (unaff_XMM9_Da < unaff_XMM7_Da) {
    fVar9 = -fVar9;
  }
  fVar10 = *(float *)(unaff_RSI + 0xe4);
  if ((unaff_XMM7_Da < *(float *)(unaff_RSI + 0xe0)) ||
     (unaff_XMM7_Da < *(float *)(unaff_RSI + 0xdc))) {
    fVar10 = 0.0;
  }
  fVar6 = fVar10 + *(float *)(unaff_RSI + 0xec);
  (**(code **)(*unaff_R14 + 0x18))
            (fVar6,unaff_RBP + -0x80,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
             *(float *)(unaff_RSI + 0xe8) - fVar10 < fVar9 || fVar9 < fVar6);
  uVar3 = *(uint *)(unaff_RSI + 0x1c8) >> 5;
  uVar5 = *(uint *)(unaff_RSI + 0x1c8) >> 4;
  if (((uVar5 & 1) == 0) || ((uVar3 & 1) == 0)) {
    if (((byte)uVar3 & 1) == ((byte)uVar5 & 1)) {
      return;
    }
    uVar3 = *(uint *)(unaff_RSI + 0x1c4);
    cVar1 = *(char *)(unaff_RSI + 0x1df);
    *(undefined8 *)(unaff_RBP + -0x30) = 0;
    *(undefined4 *)(unaff_RBP + -0x28) = 0;
    *(undefined8 *)(unaff_RBP + 0x38) = 0;
    *(undefined4 *)(unaff_RBP + 0x40) = 0;
    *(undefined8 *)(unaff_RBP + -0x40) = 0x8000000080000000;
    *(undefined8 *)(unaff_RBP + -0x38) = 0x3f3504f3bf3504f3;
    *(undefined4 *)(unaff_RBP + 0x28) = 0;
    *(undefined4 *)(unaff_RBP + 0x2c) = 0x3f3504f3;
    *(undefined4 *)(unaff_RBP + 0x30) = 0;
    *(undefined4 *)(unaff_RBP + 0x34) = 0x3f3504f3;
    if ((char)(uVar5 & 0xffffff01) == '\0') {
      if ((uVar3 & 0x10) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar4 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + -0x40);
        in_stack_00000060 = *puVar4;
        uStack0000000000000064 = puVar4[1];
        in_stack_00000068 = puVar4[2];
        in_stack_00000070 = *(undefined4 *)(unaff_RBP + -0x70);
        uStack000000000000006c = puVar4[3];
        in_stack_00000078 = *(undefined4 *)(unaff_RBP + -0x68);
        fVar9 = unaff_XMM6_Da * *(float *)(unaff_RBP + -0x10) +
                *(float *)(unaff_RBP + -0x4c) * unaff_XMM14_Da +
                *(float *)(unaff_RBP + -0x48) * *(float *)(unaff_RBP + -0x44);
        uVar7 = *(undefined4 *)(unaff_RSI + 0x108);
        goto LAB_1806db85b;
      }
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + 0x28);
        in_stack_00000060 = *puVar4;
        uStack0000000000000064 = puVar4[1];
        in_stack_00000068 = puVar4[2];
        uStack000000000000006c = puVar4[3];
        in_stack_00000070 = *(undefined4 *)(unaff_RBP + -0x70);
        uStack0000000000000074 = *(undefined4 *)(unaff_RBP + -0x6c);
        in_stack_00000078 = *(undefined4 *)(unaff_RBP + -0x68);
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x108),&stack0x00000060);
        return;
      }
    }
    else {
      if ((uVar3 & 0x20) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        puVar4 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + 0x28);
        in_stack_00000060 = *puVar4;
        uStack0000000000000064 = puVar4[1];
        in_stack_00000068 = puVar4[2];
        in_stack_00000070 = *(undefined4 *)(unaff_RBP + -0x70);
        uStack000000000000006c = puVar4[3];
        in_stack_00000078 = *(undefined4 *)(unaff_RBP + -0x68);
        fVar9 = unaff_XMM6_Da * unaff_XMM12_Da +
                *(float *)(unaff_RBP + -0x4c) * *(float *)(unaff_RBP + -0x60) +
                *(float *)(unaff_RBP + -0x48) * *(float *)(unaff_RBP + -0x50);
        uVar7 = *(undefined4 *)(unaff_RSI + 0x104);
LAB_1806db85b:
        uStack0000000000000074 = *(undefined4 *)(unaff_RBP + -0x6c);
        FUN_1806e3720(uVar7,uStack0000000000000074,&stack0x00000060,fVar9,uVar7);
        return;
      }
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + -0x40);
        in_stack_00000060 = *puVar4;
        uStack0000000000000064 = puVar4[1];
        in_stack_00000068 = puVar4[2];
        uStack000000000000006c = puVar4[3];
        in_stack_00000070 = *(undefined4 *)(unaff_RBP + -0x70);
        uStack0000000000000074 = *(undefined4 *)(unaff_RBP + -0x6c);
        in_stack_00000078 = *(undefined4 *)(unaff_RBP + -0x68);
        FUN_1806e30c0(in_stack_00000078,*(undefined4 *)(unaff_RSI + 0x104),&stack0x00000060);
        return;
      }
    }
  }
  else {
    if (*(char *)(unaff_RSI + 0x1de) != '\0') {
      fVar9 = (float)atan2f(uVar5 & 0xffffff01,unaff_XMM8_Da + unaff_XMM11_Da);
      fVar10 = (float)atan2f();
      if ((*(float *)(unaff_RSI + 0xfc) <= unaff_XMM7_Da) &&
         (*(float *)(unaff_RSI + 0xf8) <= unaff_XMM7_Da)) {
        unaff_XMM7_Da = *(float *)(unaff_RSI + 0x100);
      }
      fVar6 = *(float *)(unaff_RSI + 0x108);
      lVar2 = *unaff_R14;
      fVar10 = (ABS(fVar10 * 4.0) + unaff_XMM7_Da) / fVar6;
      fVar9 = (ABS(fVar9 * 4.0) + unaff_XMM7_Da) / *(float *)(unaff_RSI + 0x104);
      uVar7 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
      uVar8 = tanf(fVar6 * 0.25);
      (**(code **)(lVar2 + 0x20))
                (uVar8,unaff_RBP + -0x80,uVar8,uVar7,
                 unaff_XMM11_Da < fVar10 * fVar10 + fVar9 * fVar9);
    }
    if (*(char *)(unaff_RSI + 0x1df) == '\0') {
      return;
    }
  }
  FUN_1806df8b0();
  return;
}






// 函数: void FUN_1806db4ad(void)
void FUN_1806db4ad(void)

{
  float fVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_R14;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float unaff_XMM7_Da;
  float unaff_XMM11_Da;
  
  fVar3 = (float)atan2f();
  fVar4 = (float)atan2f();
  if ((*(float *)(unaff_RSI + 0xfc) <= unaff_XMM7_Da) &&
     (*(float *)(unaff_RSI + 0xf8) <= unaff_XMM7_Da)) {
    unaff_XMM7_Da = *(float *)(unaff_RSI + 0x100);
  }
  fVar1 = *(float *)(unaff_RSI + 0x108);
  lVar2 = *unaff_R14;
  fVar4 = (ABS(fVar4 * 4.0) + unaff_XMM7_Da) / fVar1;
  fVar3 = (ABS(fVar3 * 4.0) + unaff_XMM7_Da) / *(float *)(unaff_RSI + 0x104);
  uVar5 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
  uVar6 = tanf(fVar1 * 0.25);
  (**(code **)(lVar2 + 0x20))
            (uVar6,unaff_RBP + -0x80,uVar6,uVar5,unaff_XMM11_Da < fVar4 * fVar4 + fVar3 * fVar3);
  if (*(char *)(unaff_RSI + 0x1df) != '\0') {
    FUN_1806df8b0();
  }
  return;
}






// 函数: void FUN_1806db58d(void)
void FUN_1806db58d(void)

{
  longlong unaff_RSI;
  undefined1 uStack0000000000000028;
  
  if (*(char *)(unaff_RSI + 0x1df) != '\0') {
    uStack0000000000000028 = 1;
    FUN_1806df8b0();
  }
  return;
}






