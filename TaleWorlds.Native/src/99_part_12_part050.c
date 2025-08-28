#include "TaleWorlds.Native.Split.h"

// 99_part_12_part050.c - 2 个函数

// 函数: void FUN_1807eaa70(undefined1 (*param_1) [16],float *param_2)
void FUN_1807eaa70(undefined1 (*param_1) [16],float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar11 = maxps(*param_1,_DAT_18097da20);
  fVar2 = (float)(auVar11._0_4_ & 0x807fffff | 0x3f800000);
  fVar3 = (float)(auVar11._4_4_ & 0x807fffff | 0x3f800000);
  fVar4 = (float)(auVar11._8_4_ & 0x807fffff | 0x3f800000);
  fVar5 = (float)(auVar11._12_4_ & 0x807fffff | 0x3f800000);
  auVar7._0_4_ = fVar2 + 1.0;
  auVar7._4_4_ = fVar3 + 1.0;
  auVar7._8_4_ = fVar4 + 1.0;
  auVar7._12_4_ = fVar5 + 1.0;
  auVar7 = rcpps(in_XMM4,auVar7);
  fVar6 = auVar7._0_4_ * (fVar2 - 1.0);
  fVar8 = auVar7._4_4_ * (fVar3 - 1.0);
  fVar9 = auVar7._8_4_ * (fVar4 - 1.0);
  fVar10 = auVar7._12_4_ * (fVar5 - 1.0);
  fVar6 = fVar6 + fVar6;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar8 * fVar8;
  fVar4 = fVar9 * fVar9;
  fVar5 = fVar10 * fVar10;
  auVar1._0_4_ = (fVar2 * -35.67228 + 312.09378) * fVar2 + -769.69196;
  auVar1._4_4_ = (fVar3 * -35.67228 + 312.09378) * fVar3 + -769.69196;
  auVar1._8_4_ = (fVar4 * -35.67228 + 312.09378) * fVar4 + -769.69196;
  auVar1._12_4_ = (fVar5 * -35.67228 + 312.09378) * fVar5 + -769.69196;
  auVar7 = rcpps(in_XMM3,auVar1);
  auVar12._0_4_ =
       (auVar7._0_4_ * (fVar2 * -0.7895803 + 16.386665) * fVar2 * fVar2 * fVar6 * 1.442695 +
       (float)(int)((auVar11._0_4_ >> 0x17) - 0x7f) + fVar6 * 1.442695) * *param_2;
  auVar12._4_4_ =
       (auVar7._4_4_ * (fVar3 * -0.7895803 + 16.386665) * fVar3 * fVar3 * fVar8 * 1.442695 +
       (float)(int)((auVar11._4_4_ >> 0x17) - 0x7f) + fVar8 * 1.442695) * param_2[1];
  auVar12._8_4_ =
       (auVar7._8_4_ * (fVar4 * -0.7895803 + 16.386665) * fVar4 * fVar4 * fVar9 * 1.442695 +
       (float)(int)((auVar11._8_4_ >> 0x17) - 0x7f) + fVar9 * 1.442695) * param_2[2];
  auVar12._12_4_ =
       (auVar7._12_4_ * (fVar5 * -0.7895803 + 16.386665) * fVar5 * fVar5 * fVar10 * 1.442695 +
       (float)(int)((auVar11._12_4_ >> 0x17) - 0x7f) + fVar10 * 1.442695) * param_2[3];
  auVar7 = minps(auVar12,_DAT_18097da70);
  auVar7 = maxps(auVar7,_DAT_18097da80);
  fVar2 = auVar7._0_4_ + 0.5;
  fVar3 = auVar7._4_4_ + 0.5;
  fVar4 = auVar7._8_4_ + 0.5;
  fVar5 = auVar7._12_4_ + 0.5;
  fVar6 = auVar7._0_4_ - (float)(int)((int)fVar2 - (-(uint)(fVar2 <= 0.0) & 1));
  fVar8 = auVar7._4_4_ - (float)(int)((int)fVar3 - (-(uint)(fVar3 <= 0.0) & 1));
  fVar9 = auVar7._8_4_ - (float)(int)((int)fVar4 - (-(uint)(fVar4 <= 0.0) & 1));
  fVar10 = auVar7._12_4_ - (float)(int)((int)fVar5 - (-(uint)(fVar5 <= 0.0) & 1));
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar8 * fVar8;
  fVar4 = fVar9 * fVar9;
  fVar5 = fVar10 * fVar10;
  auVar11._0_4_ =
       (fVar2 * 3.001985e-06 + 4368.2114) -
       fVar6 * ((fVar2 * 0.023093348 + 20.202066) * fVar2 + 1513.9069);
  auVar11._4_4_ =
       (fVar3 * 3.001985e-06 + 4368.2114) -
       fVar8 * ((fVar3 * 0.023093348 + 20.202066) * fVar3 + 1513.9069);
  auVar11._8_4_ =
       (fVar4 * 3.001985e-06 + 4368.2114) -
       fVar9 * ((fVar4 * 0.023093348 + 20.202066) * fVar4 + 1513.9069);
  auVar11._12_4_ =
       (fVar5 * 3.001985e-06 + 4368.2114) -
       fVar10 * ((fVar5 * 0.023093348 + 20.202066) * fVar5 + 1513.9069);
  rcpps(auVar11,auVar11);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807eabe0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x330));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar8 = uVar3 + 1;
  *(uint *)(param_1 + 0x3b8) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x334));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar7 = uVar3 + 1;
  *(uint *)(param_1 + 0x3bc) = uVar3;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x338));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar14 = uVar3 + 1;
  *(uint *)(param_1 + 0x3c0) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x33c));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar15 = uVar3 + 1;
  *(uint *)(param_1 + 0x3c4) = uVar3;
  *(undefined8 *)(param_1 + 0x3e4) = 0;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x340));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar13 = uVar3 + 1;
  *(uint *)(param_1 + 0x3c8) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x344));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar12 = uVar3 + 1;
  *(uint *)(param_1 + 0x3cc) = uVar3;
  *(undefined8 *)(param_1 + 0x3ec) = 0;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x348));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar9 = uVar3 + 1;
  *(uint *)(param_1 + 0x3d0) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x34c));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar10 = uVar3 + 1;
  *(uint *)(param_1 + 0x3d4) = uVar3;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(int *)(param_1 + 0x5c8) =
       *(int *)(param_1 + 0x5c8) +
       iVar8 + iVar7 + iVar14 + iVar15 + iVar13 + iVar12 + iVar9 + iVar10;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x5a0));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar4 = uVar3 + 1;
  *(uint *)(param_1 + 0x5b0) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x5a4));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  *(uint *)(param_1 + 0x5b4) = uVar3;
  iVar5 = *(int *)(param_1 + 0x5c8) + iVar4 + uVar3 + 1;
  *(int *)(param_1 + 0x5c8) = iVar5;
  uVar3 = (uint)(((*(float *)(param_1 + 0x480) + 0.4) - *(float *)(param_1 + 0x464)) * param_2);
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar11 = uVar3 + 1;
  *(uint *)(param_1 + 0x4d8) = uVar3;
  uVar3 = (uint)(param_2 * *(float *)(param_1 + 0x548));
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  iVar6 = uVar3 + 1;
  iVar5 = iVar5 + iVar6 + iVar11;
  *(int *)(param_1 + 0x5c8) = iVar5;
  *(uint *)(param_1 + 0x568) = uVar3;
  lVar1 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar5 * 4,&UNK_18097db40,0x9b,0);
  if (lVar1 == 0) {
    uVar2 = 0x1194;
  }
  else {
    iVar11 = iVar6 + iVar11;
    *(longlong *)(param_1 + 0x528) = lVar1;
    *(longlong *)(param_1 + 0x458) = lVar1 + (longlong)iVar6 * 4;
    iVar8 = iVar11 + iVar8;
    *(longlong *)(param_1 + 0x2f0) = lVar1 + (longlong)iVar11 * 4;
    iVar7 = iVar8 + iVar7;
    *(longlong *)(param_1 + 0x2f8) = lVar1 + (longlong)iVar8 * 4;
    iVar14 = iVar7 + iVar14;
    *(longlong *)(param_1 + 0x300) = lVar1 + (longlong)iVar7 * 4;
    iVar15 = iVar14 + iVar15;
    *(longlong *)(param_1 + 0x308) = lVar1 + (longlong)iVar14 * 4;
    iVar13 = iVar15 + iVar13;
    *(longlong *)(param_1 + 0x310) = lVar1 + (longlong)iVar15 * 4;
    iVar12 = iVar13 + iVar12;
    iVar9 = iVar12 + iVar9;
    *(longlong *)(param_1 + 0x318) = lVar1 + (longlong)iVar13 * 4;
    iVar10 = iVar9 + iVar10;
    *(longlong *)(param_1 + 800) = lVar1 + (longlong)iVar12 * 4;
    *(longlong *)(param_1 + 0x328) = lVar1 + (longlong)iVar9 * 4;
    *(longlong *)(param_1 + 0x590) = lVar1 + (longlong)iVar10 * 4;
    uVar2 = 0;
    *(longlong *)(param_1 + 0x598) = lVar1 + (longlong)(iVar10 + iVar4) * 4;
  }
  return uVar2;
}






// 函数: void FUN_1807eb0a0(longlong param_1,uint param_2,uint param_3,float *param_4)
void FUN_1807eb0a0(longlong param_1,uint param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar14;
  
  if (param_3 == 1) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc53. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memmove(*(undefined8 *)(param_1 + 8),param_4,(ulonglong)param_2 << 2);
    return;
  }
  uVar13 = 0;
  uVar10 = 0;
  if (param_3 == 6) {
    pfVar11 = *(float **)(param_1 + 8);
    param_2 = param_2 >> 2;
    if (3 < param_2) {
      uVar10 = (param_2 - 4 >> 2) + 1;
      uVar13 = (ulonglong)uVar10;
      uVar10 = uVar10 * 4;
      do {
        *pfVar11 = param_4[1] + *param_4 + param_4[2] + param_4[3] + param_4[4] + param_4[5];
        pfVar11[1] = param_4[7] + param_4[6] + param_4[8] + param_4[9] + param_4[10] + param_4[0xb];
        pfVar11[2] = param_4[0xd] + param_4[0xc] + param_4[0xe] + param_4[0xf] + param_4[0x10] +
                     param_4[0x11];
        pfVar11[3] = param_4[0x13] + param_4[0x12] + param_4[0x14] + param_4[0x15] + param_4[0x16] +
                     param_4[0x17];
        pfVar11[4] = param_4[0x19] + param_4[0x18] + param_4[0x1a] + param_4[0x1b] + param_4[0x1c] +
                     param_4[0x1d];
        pfVar11[5] = param_4[0x1f] + param_4[0x1e] + param_4[0x20] + param_4[0x21] + param_4[0x22] +
                     param_4[0x23];
        pfVar11[6] = param_4[0x25] + param_4[0x24] + param_4[0x26] + param_4[0x27] + param_4[0x28] +
                     param_4[0x29];
        pfVar11[7] = param_4[0x2b] + param_4[0x2a] + param_4[0x2c] + param_4[0x2d] + param_4[0x2e] +
                     param_4[0x2f];
        pfVar11[8] = param_4[0x31] + param_4[0x30] + param_4[0x32] + param_4[0x33] + param_4[0x34] +
                     param_4[0x35];
        pfVar11[9] = param_4[0x37] + param_4[0x36] + param_4[0x38] + param_4[0x39] + param_4[0x3a] +
                     param_4[0x3b];
        pfVar11[10] = param_4[0x3d] + param_4[0x3c] + param_4[0x3e] + param_4[0x3f] + param_4[0x40]
                      + param_4[0x41];
        pfVar11[0xb] = param_4[0x43] + param_4[0x42] + param_4[0x44] + param_4[0x45] + param_4[0x46]
                       + param_4[0x47];
        pfVar11[0xc] = param_4[0x49] + param_4[0x48] + param_4[0x4a] + param_4[0x4b] + param_4[0x4c]
                       + param_4[0x4d];
        pfVar11[0xd] = param_4[0x4f] + param_4[0x4e] + param_4[0x50] + param_4[0x51] + param_4[0x52]
                       + param_4[0x53];
        pfVar11[0xe] = param_4[0x55] + param_4[0x54] + param_4[0x56] + param_4[0x57] + param_4[0x58]
                       + param_4[0x59];
        pfVar1 = param_4 + 0x5b;
        pfVar2 = param_4 + 0x5a;
        pfVar3 = param_4 + 0x5c;
        pfVar4 = param_4 + 0x5d;
        pfVar5 = param_4 + 0x5e;
        pfVar6 = param_4 + 0x5f;
        param_4 = param_4 + 0x60;
        pfVar11[0xf] = *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6;
        pfVar11 = pfVar11 + 0x10;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (uVar10 < param_2) {
      pfVar11 = pfVar11 + 2;
      param_4 = param_4 + 2;
      uVar13 = (ulonglong)(param_2 - uVar10);
      do {
        pfVar11[-2] = param_4[-2] + param_4[-1] + *param_4 + param_4[1] + param_4[2] + param_4[3];
        pfVar11[-1] = param_4[5] + param_4[4] + param_4[6] + param_4[7] + param_4[8] + param_4[9];
        *pfVar11 = param_4[0xb] + param_4[10] + param_4[0xc] + param_4[0xd] + param_4[0xe] +
                   param_4[0xf];
        pfVar1 = param_4 + 0x11;
        pfVar2 = param_4 + 0x10;
        pfVar3 = param_4 + 0x12;
        pfVar4 = param_4 + 0x13;
        pfVar5 = param_4 + 0x14;
        pfVar6 = param_4 + 0x15;
        param_4 = param_4 + 0x18;
        pfVar11[1] = *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6;
        pfVar11 = pfVar11 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      return;
    }
  }
  else if (param_3 == 8) {
    pfVar11 = *(float **)(param_1 + 8);
    param_2 = param_2 >> 2;
    if (3 < param_2) {
      uVar10 = (param_2 - 4 >> 2) + 1;
      uVar13 = (ulonglong)uVar10;
      uVar10 = uVar10 * 4;
      do {
        *pfVar11 = param_4[1] + *param_4 + param_4[2] + param_4[3] + param_4[4] + param_4[5] +
                   param_4[6] + param_4[7];
        pfVar11[1] = param_4[9] + param_4[8] + param_4[10] + param_4[0xb] + param_4[0xc] +
                     param_4[0xd] + param_4[0xe] + param_4[0xf];
        pfVar11[2] = param_4[0x11] + param_4[0x10] + param_4[0x12] + param_4[0x13] + param_4[0x14] +
                     param_4[0x15] + param_4[0x16] + param_4[0x17];
        pfVar11[3] = param_4[0x19] + param_4[0x18] + param_4[0x1a] + param_4[0x1b] + param_4[0x1c] +
                     param_4[0x1d] + param_4[0x1e] + param_4[0x1f];
        pfVar11[4] = param_4[0x21] + param_4[0x20] + param_4[0x22] + param_4[0x23] + param_4[0x24] +
                     param_4[0x25] + param_4[0x26] + param_4[0x27];
        pfVar11[5] = param_4[0x29] + param_4[0x28] + param_4[0x2a] + param_4[0x2b] + param_4[0x2c] +
                     param_4[0x2d] + param_4[0x2e] + param_4[0x2f];
        pfVar11[6] = param_4[0x31] + param_4[0x30] + param_4[0x32] + param_4[0x33] + param_4[0x34] +
                     param_4[0x35] + param_4[0x36] + param_4[0x37];
        pfVar11[7] = param_4[0x39] + param_4[0x38] + param_4[0x3a] + param_4[0x3b] + param_4[0x3c] +
                     param_4[0x3d] + param_4[0x3e] + param_4[0x3f];
        pfVar11[8] = param_4[0x41] + param_4[0x40] + param_4[0x42] + param_4[0x43] + param_4[0x44] +
                     param_4[0x45] + param_4[0x46] + param_4[0x47];
        pfVar11[9] = param_4[0x49] + param_4[0x48] + param_4[0x4a] + param_4[0x4b] + param_4[0x4c] +
                     param_4[0x4d] + param_4[0x4e] + param_4[0x4f];
        pfVar11[10] = param_4[0x51] + param_4[0x50] + param_4[0x52] + param_4[0x53] + param_4[0x54]
                      + param_4[0x55] + param_4[0x56] + param_4[0x57];
        pfVar11[0xb] = param_4[0x59] + param_4[0x58] + param_4[0x5a] + param_4[0x5b] + param_4[0x5c]
                       + param_4[0x5d] + param_4[0x5e] + param_4[0x5f];
        pfVar11[0xc] = param_4[0x61] + param_4[0x60] + param_4[0x62] + param_4[99] + param_4[100] +
                       param_4[0x65] + param_4[0x66] + param_4[0x67];
        pfVar11[0xd] = param_4[0x69] + param_4[0x68] + param_4[0x6a] + param_4[0x6b] + param_4[0x6c]
                       + param_4[0x6d] + param_4[0x6e] + param_4[0x6f];
        pfVar11[0xe] = param_4[0x71] + param_4[0x70] + param_4[0x72] + param_4[0x73] + param_4[0x74]
                       + param_4[0x75] + param_4[0x76] + param_4[0x77];
        pfVar1 = param_4 + 0x79;
        pfVar2 = param_4 + 0x78;
        pfVar3 = param_4 + 0x7a;
        pfVar4 = param_4 + 0x7b;
        pfVar5 = param_4 + 0x7c;
        pfVar6 = param_4 + 0x7d;
        pfVar7 = param_4 + 0x7e;
        pfVar8 = param_4 + 0x7f;
        param_4 = param_4 + 0x80;
        pfVar11[0xf] = *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6 + *pfVar7 + *pfVar8
        ;
        pfVar11 = pfVar11 + 0x10;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (uVar10 < param_2) {
      param_4 = param_4 + 2;
      pfVar11 = pfVar11 + 2;
      uVar13 = (ulonglong)(param_2 - uVar10);
      do {
        pfVar11[-2] = param_4[-2] + param_4[-1] + *param_4 + param_4[1] + param_4[2] + param_4[3] +
                      param_4[4] + param_4[5];
        pfVar11[-1] = param_4[7] + param_4[6] + param_4[8] + param_4[9] + param_4[10] + param_4[0xb]
                      + param_4[0xc] + param_4[0xd];
        *pfVar11 = param_4[0xf] + param_4[0xe] + param_4[0x10] + param_4[0x11] + param_4[0x12] +
                   param_4[0x13] + param_4[0x14] + param_4[0x15];
        pfVar1 = param_4 + 0x17;
        pfVar2 = param_4 + 0x16;
        pfVar3 = param_4 + 0x18;
        pfVar4 = param_4 + 0x19;
        pfVar5 = param_4 + 0x1a;
        pfVar6 = param_4 + 0x1b;
        pfVar7 = param_4 + 0x1c;
        pfVar8 = param_4 + 0x1d;
        param_4 = param_4 + 0x20;
        pfVar11[1] = *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6 + *pfVar7 + *pfVar8;
        pfVar11 = pfVar11 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      return;
    }
  }
  else if (param_2 != 0) {
    pfVar11 = *(float **)(param_1 + 8);
    uVar15 = uVar13;
    uVar14 = uVar13;
    do {
      *(undefined4 *)((longlong)pfVar11 + uVar15) = 0;
      iVar18 = (int)uVar14;
      if (0 < (int)param_3) {
        uVar14 = uVar13;
        if (7 < param_3) {
          iVar17 = iVar18 * param_3;
          if ((param_4 + (int)((param_3 - 1) + iVar17) < pfVar11) ||
             (uVar14 = 0, pfVar11 + (int)(param_3 - 1) < param_4 + iVar17)) {
            uVar10 = param_3 & 0x80000007;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
            }
            fVar23 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
            fVar26 = 0.0;
            fVar19 = 0.0;
            fVar20 = 0.0;
            fVar21 = 0.0;
            fVar22 = 0.0;
            uVar16 = iVar17 + 4;
            uVar14 = uVar13;
            do {
              iVar9 = (int)uVar14;
              uVar12 = iVar9 + 8;
              uVar14 = (ulonglong)uVar12;
              pfVar1 = param_4 + (uint)(iVar17 + iVar9);
              fVar23 = fVar23 + *pfVar1;
              fVar24 = fVar24 + pfVar1[1];
              fVar25 = fVar25 + pfVar1[2];
              fVar26 = fVar26 + pfVar1[3];
              pfVar1 = param_4 + uVar16;
              uVar16 = uVar16 + 8;
              fVar19 = fVar19 + *pfVar1;
              fVar20 = fVar20 + pfVar1[1];
              fVar21 = fVar21 + pfVar1[2];
              fVar22 = fVar22 + pfVar1[3];
            } while ((int)uVar12 < (int)(param_3 - uVar10));
            *(float *)((longlong)pfVar11 + uVar15) =
                 fVar25 + fVar21 + fVar23 + fVar19 + fVar26 + fVar22 + fVar24 + fVar20;
          }
        }
        if ((int)uVar14 < (int)param_3) {
          fVar19 = *(float *)((longlong)pfVar11 + uVar15);
          do {
            iVar17 = (int)uVar14;
            uVar10 = iVar17 + 1;
            uVar14 = (ulonglong)uVar10;
            fVar19 = fVar19 + param_4[iVar18 * param_3 + iVar17];
          } while ((int)uVar10 < (int)param_3);
          *(float *)((longlong)pfVar11 + uVar15) = fVar19;
        }
      }
      uVar14 = (ulonglong)(iVar18 + 1U);
      uVar15 = uVar15 + 4;
    } while (iVar18 + 1U < param_2);
  }
  return;
}






