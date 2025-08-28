#include "TaleWorlds.Native.Split.h"

// 99_part_04_part083.c - 2 个函数

// 函数: void FUN_1802d40d9(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)
void FUN_1802d40d9(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong unaff_RBP;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  float unaff_R12D;
  longlong unaff_R13;
  longlong *unaff_R14;
  float *pfVar19;
  longlong unaff_R15;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_XMM4_Da;
  float fVar25;
  float fVar26;
  float unaff_XMM15_Da;
  float *pfStack0000000000000028;
  ushort *puStack0000000000000030;
  float *pfStack0000000000000038;
  char in_stack_00000040;
  longlong lStack0000000000000048;
  char cStack0000000000000050;
  char cStack0000000000000054;
  char in_stack_00000058;
  longlong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000160;
  char in_stack_00000168;
  int in_stack_00000170;
  
  pfVar20 = (float *)(param_3 + unaff_R15 * 8);
  lStack0000000000000048 = param_1;
  uStack0000000000000160 = param_4;
  do {
    pfVar1 = pfVar20 + -2;
    pfVar19 = (float *)((longlong)*(int *)(*unaff_R14 + lStack0000000000000048 * 8) * 0x70 +
                       *(longlong *)(unaff_RBP + 0x58));
    if (*(char *)(unaff_RBP + 0xa1) == '\0') {
      *pfVar1 = *pfVar19;
      pfVar20[-1] = pfVar19[1];
      *pfVar20 = pfVar19[2];
    }
    else {
      fVar7 = *(float *)(unaff_RBP + 0xc4);
      fVar11 = *(float *)(unaff_RBP + 200);
      fVar23 = pfVar19[1];
      fVar12 = *(float *)(unaff_RBP + 0xb4);
      fVar21 = *(float *)(unaff_RBP + 0xb8);
      fVar26 = *pfVar19;
      fVar25 = pfVar19[2];
      fVar24 = *(float *)(unaff_RBP + 0xd4);
      fVar22 = *(float *)(unaff_RBP + 0xd8);
      fVar5 = *(float *)(unaff_RBP + 0xe4);
      fVar6 = *(float *)(unaff_RBP + 0xe8);
      *pfVar1 = *(float *)(unaff_RBP + 0xc0) * fVar23 + *(float *)(unaff_RBP + 0xb0) * fVar26 +
                *(float *)(unaff_RBP + 0xd0) * fVar25 + *(float *)(unaff_RBP + 0xe0);
      *pfVar20 = fVar11 * fVar23 + fVar21 * fVar26 + fVar22 * fVar25 + fVar6;
      pfVar20[-1] = fVar7 * fVar23 + fVar12 * fVar26 + fVar24 * fVar25 + fVar5;
    }
    pfVar20[0xe] = pfVar19[0x17];
    pfVar20[1] = pfVar19[3];
    pfVar20[4] = pfVar19[0xb];
    pfVar20[0xb] = pfVar19[0x18];
    pfVar20[0xc] = pfVar19[0x19];
    pfVar20[0xd] = pfVar19[0x1a];
    fVar23 = pfVar19[0xd];
    pfVar20[7] = fVar23;
    fVar26 = pfVar19[0xe];
    pfVar20[8] = fVar26;
    pfVar20[9] = pfVar19[0xf] * 60.0;
    pfVar20[7] = fVar23 * 60.0;
    pfVar20[8] = fVar26 * 60.0;
    fVar23 = pfVar19[9];
    fVar26 = pfVar19[8];
    pfStack0000000000000028 = pfVar19 + 0x14;
    puStack0000000000000030 = (ushort *)((longlong)pfVar19 + 0x52);
    pfStack0000000000000038 = pfVar19 + 0x15;
    FUN_1802cf260(uStack0000000000000160,in_stack_00000170,pfVar1,unaff_XMM15_Da * pfVar19[0xb],
                  param_2);
    in_XMM4_Da = fVar23 * in_XMM4_Da;
    pfVar20[10] = (float)(((uint)*(byte *)(pfVar19 + 0x15) << 0xc |
                          *(ushort *)(pfVar19 + 0x14) & 0xfff) << 0xc |
                         *(ushort *)((longlong)pfVar19 + 0x52) & 0xfff);
    pfVar20[5] = *(float *)(unaff_RBP + 0xa4);
    if (*(int *)(unaff_R13 + 0x10c) == 0) {
      fVar7 = (float)(int)in_XMM4_Da;
      fVar11 = (float)(int)(in_XMM4_Da + 1.0);
      in_XMM4_Da = in_XMM4_Da - (float)(int)fVar7;
      fVar25 = unaff_R12D;
      if ((-1 < (int)fVar11) && (fVar25 = fVar11, 0x31 < (int)fVar11)) {
        fVar25 = 6.86636e-44;
      }
      lVar15 = (longlong)(int)fVar25;
      fVar25 = unaff_R12D;
      if ((-1 < (int)fVar7) && (fVar25 = fVar7, 0x31 < (int)fVar7)) {
        fVar25 = 6.86636e-44;
      }
      fVar12 = pfVar19[0x11];
      lVar9 = (longlong)(int)fVar25;
      fVar25 = *(float *)(unaff_R13 + 0xbf0 + lVar9 * 0x10);
      fVar7 = *(float *)(unaff_R13 + 0xbf4 + lVar9 * 0x10);
      fVar25 = (*(float *)(unaff_R13 + 0xbf0 + lVar15 * 0x10) - fVar25) * in_XMM4_Da + fVar25;
      fVar11 = *(float *)(unaff_R13 + 0xbf8 + lVar9 * 0x10);
      fVar7 = (*(float *)(unaff_R13 + 0xbf4 + lVar15 * 0x10) - fVar7) * in_XMM4_Da + fVar7;
      fVar24 = *(float *)(unaff_R13 + 0xbfc + lVar9 * 0x10);
      fVar11 = (*(float *)(unaff_R13 + 0xbf8 + lVar15 * 0x10) - fVar11) * in_XMM4_Da + fVar11;
      fVar24 = (*(float *)(unaff_R13 + 0xbfc + lVar15 * 0x10) - fVar24) * in_XMM4_Da + fVar24;
      if (fVar12 != -NAN) {
        fVar21 = (float)((uint)fVar12 >> 0x10 & 0xff);
        fVar22 = (float)((uint)fVar12 >> 8 & 0xff);
        fVar11 = (float)((uint)fVar12 & 0xff) * (float)((uint)fVar12 & 0xff) * 1.5378702e-05 *
                 fVar11;
        fVar25 = fVar21 * fVar21 * 1.5378702e-05 * fVar25;
        fVar7 = fVar22 * fVar22 * 1.5378702e-05 * fVar7;
      }
    }
    else {
      fVar11 = pfVar19[0x11];
      fVar24 = (float)(int)(in_XMM4_Da + 1.0);
      fVar25 = (float)((uint)fVar11 >> 0x10 & 0xff) * 0.003921569;
      fVar21 = (float)(int)in_XMM4_Da;
      fVar7 = (float)((uint)fVar11 >> 8 & 0xff) * 0.003921569;
      fVar11 = (float)((uint)fVar11 & 0xff) * 0.003921569;
      fVar12 = unaff_R12D;
      if ((-1 < (int)fVar24) && (fVar12 = fVar24, 0x31 < (int)fVar24)) {
        fVar12 = 6.86636e-44;
      }
      fVar24 = unaff_R12D;
      if ((-1 < (int)fVar21) && (fVar24 = fVar21, 0x31 < (int)fVar21)) {
        fVar24 = 6.86636e-44;
      }
      fVar24 = *(float *)(unaff_R13 + 0xbfc + (longlong)(int)fVar24 * 0x10);
      fVar24 = (*(float *)(unaff_R13 + 0xbfc + (longlong)(int)fVar12 * 0x10) - fVar24) *
               (in_XMM4_Da - (float)(int)fVar21) + fVar24;
    }
    pfVar20[0xf] = pfVar19[0x1b];
    uVar8 = (uint)(longlong)(fVar24 * 255.9);
    uVar18 = 0xff;
    if (uVar8 < 0xff) {
      uVar18 = uVar8;
    }
    uVar13 = (uint)(longlong)(fVar25 * 255.9);
    uVar8 = 0xff;
    if (uVar13 < 0xff) {
      uVar8 = uVar13;
    }
    uVar14 = (uint)(longlong)(fVar7 * 255.9);
    uVar13 = 0xff;
    if (uVar14 < 0xff) {
      uVar13 = uVar14;
    }
    uVar16 = (uint)(longlong)(fVar11 * 255.9);
    uVar14 = 0xff;
    if (uVar16 < 0xff) {
      uVar14 = uVar16;
    }
    pfVar20[6] = (float)(((uVar18 << 8 | uVar8) << 8 | uVar13) << 8 | uVar14);
    if ((cStack0000000000000050 == '\0') || (in_stack_00000168 == '\0')) {
      if ((in_stack_00000058 == '\0') || (in_stack_00000168 == '\0')) {
        pfVar20[2] = unaff_R12D;
        fVar23 = 0.0;
      }
      else {
        iVar3 = *(int *)(unaff_R13 + 0xfc4);
        sVar2 = *(short *)((longlong)pfVar19 + 0x32);
        iVar4 = *(int *)(unaff_R13 + 0xfc8);
        pfVar20[2] = (float)((int)sVar2 % iVar3) / (float)iVar3;
        fVar23 = (float)((int)sVar2 / iVar3) / (float)iVar4;
      }
    }
    else {
      uVar18 = *(uint *)(unaff_R13 + 0xfcc);
      uVar10 = (ulonglong)uVar18;
      fVar26 = fVar26 * fVar23 * *(float *)(unaff_R13 + 0xfd0) +
               (float)(int)*(short *)((longlong)pfVar19 + 0x32);
      if (cStack0000000000000054 == '\0') {
        uVar17 = (ulonglong)fVar26;
        if (in_stack_00000040 == '\0') {
          uVar10 = (ulonglong)(uVar18 - 1);
          if ((uint)uVar17 < uVar18 - 1) {
            uVar10 = uVar17 & 0xffffffff;
          }
        }
        else {
          uVar10 = (uVar17 & 0xffffffff) % uVar10;
        }
        uVar18 = *(uint *)(unaff_R13 + 0xfc4);
        fVar23 = (float)(uVar10 / uVar18) / (float)*(int *)(unaff_R13 + 0xfc8);
        pfVar20[2] = (float)(uVar10 % (ulonglong)uVar18) / (float)(int)uVar18;
      }
      else if (in_stack_00000040 == '\0') {
        fVar23 = 0.0;
        fVar25 = (float)(uVar18 - 1);
        if (fVar26 <= (float)(uVar18 - 1)) {
          fVar25 = fVar26;
        }
        pfVar20[2] = fVar25;
      }
      else {
        fVar26 = (float)fmodf(uVar10,(float)uVar10);
        fVar23 = 0.0;
        pfVar20[2] = fVar26;
      }
    }
    unaff_R14 = (longlong *)(unaff_RBP + 0xf8);
    pfVar20[3] = fVar23;
    pfVar20 = pfVar20 + 0x12;
    in_stack_00000170 = in_stack_00000170 + 1;
    lStack0000000000000048 = lStack0000000000000048 + 1;
    in_XMM4_Da = 49.0;
    param_2 = in_stack_00000078;
  } while (lStack0000000000000048 < in_stack_00000070);
  return;
}






// 函数: void FUN_1802d4720(void)
void FUN_1802d4720(void)

{
  return;
}






