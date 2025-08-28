#include "TaleWorlds.Native.Split.h"

// 99_part_12_part051.c - 7 个函数

// 函数: void FUN_1807eb0c6(int64_t param_1,int param_2,uint param_3,float *param_4)
void FUN_1807eb0c6(int64_t param_1,int param_2,uint param_3,float *param_4)

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
  uint64_t uVar13;
  uint unaff_EBP;
  uint uVar15;
  uint64_t uVar16;
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
  uint64_t uVar14;
  
  uVar13 = 0;
  uVar10 = 0;
  if (param_3 == 6) {
    pfVar11 = *(float **)(param_1 + 8);
    uVar15 = unaff_EBP >> 2;
    if (3 < uVar15) {
      uVar10 = (uVar15 - 4 >> 2) + 1;
      uVar13 = (uint64_t)uVar10;
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
    if (uVar10 < uVar15) {
      pfVar11 = pfVar11 + 2;
      param_4 = param_4 + 2;
      uVar13 = (uint64_t)(uVar15 - uVar10);
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
    uVar15 = unaff_EBP >> 2;
    if (3 < uVar15) {
      uVar10 = (uVar15 - 4 >> 2) + 1;
      uVar13 = (uint64_t)uVar10;
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
    if (uVar10 < uVar15) {
      param_4 = param_4 + 2;
      pfVar11 = pfVar11 + 2;
      uVar13 = (uint64_t)(uVar15 - uVar10);
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
    uVar16 = uVar13;
    uVar14 = uVar13;
    do {
      *(int32_t *)((int64_t)pfVar11 + uVar16) = 0;
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
            uVar15 = iVar17 + 4;
            uVar14 = uVar13;
            do {
              iVar9 = (int)uVar14;
              uVar12 = iVar9 + 8;
              uVar14 = (uint64_t)uVar12;
              pfVar1 = param_4 + (uint)(iVar17 + iVar9);
              fVar23 = fVar23 + *pfVar1;
              fVar24 = fVar24 + pfVar1[1];
              fVar25 = fVar25 + pfVar1[2];
              fVar26 = fVar26 + pfVar1[3];
              pfVar1 = param_4 + uVar15;
              uVar15 = uVar15 + 8;
              fVar19 = fVar19 + *pfVar1;
              fVar20 = fVar20 + pfVar1[1];
              fVar21 = fVar21 + pfVar1[2];
              fVar22 = fVar22 + pfVar1[3];
            } while ((int)uVar12 < (int)(param_3 - uVar10));
            *(float *)((int64_t)pfVar11 + uVar16) =
                 fVar25 + fVar21 + fVar23 + fVar19 + fVar26 + fVar22 + fVar24 + fVar20;
          }
        }
        if ((int)uVar14 < (int)param_3) {
          fVar19 = *(float *)((int64_t)pfVar11 + uVar16);
          do {
            iVar17 = (int)uVar14;
            uVar10 = iVar17 + 1;
            uVar14 = (uint64_t)uVar10;
            fVar19 = fVar19 + param_4[iVar18 * param_3 + iVar17];
          } while ((int)uVar10 < (int)param_3);
          *(float *)((int64_t)pfVar11 + uVar16) = fVar19;
        }
      }
      uVar14 = (uint64_t)(iVar18 + 1U);
      uVar16 = uVar16 + 4;
    } while (iVar18 + 1U < unaff_EBP);
  }
  return;
}






// 函数: void FUN_1807eb538(int64_t param_1,int param_2,uint param_3,float *param_4)
void FUN_1807eb538(int64_t param_1,int param_2,uint param_3,float *param_4)

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
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint unaff_EBP;
  uint uVar15;
  uint64_t uVar16;
  int iVar17;
  uint64_t unaff_R14;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_3 == 8) {
    pfVar11 = *(float **)(param_1 + 8);
    uVar15 = unaff_EBP >> 2;
    if (3 < uVar15) {
      uVar10 = (uVar15 - 4 >> 2) + 1;
      uVar12 = (uint64_t)uVar10;
      unaff_R14 = (uint64_t)(uVar10 * 4);
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
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if ((uint)unaff_R14 < uVar15) {
      param_4 = param_4 + 2;
      pfVar11 = pfVar11 + 2;
      uVar12 = (uint64_t)(uVar15 - (uint)unaff_R14);
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
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      return;
    }
  }
  else {
    uVar12 = unaff_R14 & 0xffffffff;
    if (param_2 != 0) {
      pfVar11 = *(float **)(param_1 + 8);
      uVar16 = unaff_R14;
      do {
        *(int *)((int64_t)pfVar11 + uVar16) = (int)unaff_R14;
        uVar14 = unaff_R14 & 0xffffffff;
        iVar18 = (int)uVar12;
        if (0 < (int)param_3) {
          if (7 < param_3) {
            iVar17 = iVar18 * param_3;
            if ((param_4 + (int)((param_3 - 1) + iVar17) < pfVar11) ||
               (pfVar11 + (int)(param_3 - 1) < param_4 + iVar17)) {
              uVar15 = param_3 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              fVar23 = 0.0;
              fVar24 = 0.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              uVar10 = iVar17 + 4;
              do {
                iVar9 = (int)uVar14;
                uVar13 = iVar9 + 8;
                uVar14 = (uint64_t)uVar13;
                pfVar1 = param_4 + (uint)(iVar17 + iVar9);
                fVar23 = fVar23 + *pfVar1;
                fVar24 = fVar24 + pfVar1[1];
                fVar25 = fVar25 + pfVar1[2];
                fVar26 = fVar26 + pfVar1[3];
                pfVar1 = param_4 + uVar10;
                uVar10 = uVar10 + 8;
                fVar19 = fVar19 + *pfVar1;
                fVar20 = fVar20 + pfVar1[1];
                fVar21 = fVar21 + pfVar1[2];
                fVar22 = fVar22 + pfVar1[3];
              } while ((int)uVar13 < (int)(param_3 - uVar15));
              *(float *)((int64_t)pfVar11 + uVar16) =
                   fVar25 + fVar21 + fVar23 + fVar19 + fVar26 + fVar22 + fVar24 + fVar20;
            }
          }
          if ((int)uVar14 < (int)param_3) {
            fVar19 = *(float *)((int64_t)pfVar11 + uVar16);
            do {
              iVar17 = (int)uVar14;
              uVar15 = iVar17 + 1;
              uVar14 = (uint64_t)uVar15;
              fVar19 = fVar19 + param_4[iVar18 * param_3 + iVar17];
            } while ((int)uVar15 < (int)param_3);
            *(float *)((int64_t)pfVar11 + uVar16) = fVar19;
          }
        }
        uVar12 = (uint64_t)(iVar18 + 1U);
        uVar16 = uVar16 + 4;
      } while (iVar18 + 1U < unaff_EBP);
    }
  }
  return;
}






// 函数: void FUN_1807ebaec(int64_t param_1,int param_2,uint param_3,int64_t param_4)
void FUN_1807ebaec(int64_t param_1,int param_2,uint param_3,int64_t param_4)

{
  float *pfVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint unaff_EBP;
  uint64_t uVar7;
  uint uVar8;
  int iVar9;
  uint64_t unaff_R14;
  int iVar10;
  uint64_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar11 = unaff_R14 & 0xffffffff;
  if (param_2 != 0) {
    uVar2 = *(uint64_t *)(param_1 + 8);
    uVar7 = unaff_R14;
    do {
      *(int *)(uVar2 + uVar7) = (int)unaff_R14;
      uVar6 = unaff_R14 & 0xffffffff;
      iVar10 = (int)uVar11;
      if (0 < (int)param_3) {
        if (7 < param_3) {
          iVar9 = iVar10 * param_3;
          if (((uint64_t)(param_4 + (int64_t)(int)((param_3 - 1) + iVar9) * 4) < uVar2) ||
             (uVar2 + (int64_t)(int)(param_3 - 1) * 4 < (uint64_t)(param_4 + (int64_t)iVar9 * 4))
             ) {
            uVar4 = param_3 & 0x80000007;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar12 = 0.0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
            uVar8 = iVar9 + 4;
            do {
              iVar3 = (int)uVar6;
              uVar5 = iVar3 + 8;
              uVar6 = (uint64_t)uVar5;
              pfVar1 = (float *)(param_4 + (uint64_t)(uint)(iVar9 + iVar3) * 4);
              fVar16 = fVar16 + *pfVar1;
              fVar17 = fVar17 + pfVar1[1];
              fVar18 = fVar18 + pfVar1[2];
              fVar19 = fVar19 + pfVar1[3];
              pfVar1 = (float *)(param_4 + (uint64_t)uVar8 * 4);
              uVar8 = uVar8 + 8;
              fVar12 = fVar12 + *pfVar1;
              fVar13 = fVar13 + pfVar1[1];
              fVar14 = fVar14 + pfVar1[2];
              fVar15 = fVar15 + pfVar1[3];
            } while ((int)uVar5 < (int)(param_3 - uVar4));
            *(float *)(uVar2 + uVar7) =
                 fVar18 + fVar14 + fVar16 + fVar12 + fVar19 + fVar15 + fVar17 + fVar13;
          }
        }
        if ((int)uVar6 < (int)param_3) {
          fVar12 = *(float *)(uVar2 + uVar7);
          do {
            iVar9 = (int)uVar6;
            uVar4 = iVar9 + 1;
            uVar6 = (uint64_t)uVar4;
            fVar12 = fVar12 + *(float *)(param_4 + (uint64_t)(iVar10 * param_3 + iVar9) * 4);
          } while ((int)uVar4 < (int)param_3);
          *(float *)(uVar2 + uVar7) = fVar12;
        }
      }
      uVar11 = (uint64_t)(iVar10 + 1U);
      uVar7 = uVar7 + 4;
    } while (iVar10 + 1U < unaff_EBP);
  }
  return;
}






// 函数: void FUN_1807ebafc(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)
void FUN_1807ebafc(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)

{
  float *pfVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint unaff_EBP;
  uint64_t uVar7;
  uint uVar8;
  int iVar9;
  uint64_t unaff_R14;
  uint unaff_R15D;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = *(uint64_t *)(param_1 + 8);
  uVar7 = unaff_R14;
  do {
    *(int *)(uVar2 + uVar7) = (int)unaff_R14;
    uVar6 = unaff_R14 & 0xffffffff;
    if (0 < (int)param_3) {
      if (7 < param_3) {
        iVar9 = unaff_R15D * param_3;
        if (((uint64_t)(param_4 + (int64_t)(int)((param_3 - 1) + iVar9) * 4) < uVar2) ||
           (uVar2 + (int64_t)(int)(param_3 - 1) * 4 < (uint64_t)(param_4 + (int64_t)iVar9 * 4)))
        {
          uVar4 = param_3 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar10 = 0.0;
          fVar11 = 0.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          uVar8 = iVar9 + 4;
          do {
            iVar3 = (int)uVar6;
            uVar5 = iVar3 + 8;
            uVar6 = (uint64_t)uVar5;
            pfVar1 = (float *)(param_4 + (uint64_t)(uint)(iVar9 + iVar3) * 4);
            fVar14 = fVar14 + *pfVar1;
            fVar15 = fVar15 + pfVar1[1];
            fVar16 = fVar16 + pfVar1[2];
            fVar17 = fVar17 + pfVar1[3];
            pfVar1 = (float *)(param_4 + (uint64_t)uVar8 * 4);
            uVar8 = uVar8 + 8;
            fVar10 = fVar10 + *pfVar1;
            fVar11 = fVar11 + pfVar1[1];
            fVar12 = fVar12 + pfVar1[2];
            fVar13 = fVar13 + pfVar1[3];
          } while ((int)uVar5 < (int)(param_3 - uVar4));
          *(float *)(uVar2 + uVar7) =
               fVar16 + fVar12 + fVar14 + fVar10 + fVar17 + fVar13 + fVar15 + fVar11;
        }
      }
      if ((int)uVar6 < (int)param_3) {
        fVar10 = *(float *)(uVar2 + uVar7);
        do {
          iVar9 = (int)uVar6;
          uVar4 = iVar9 + 1;
          uVar6 = (uint64_t)uVar4;
          fVar10 = fVar10 + *(float *)(param_4 + (uint64_t)(unaff_R15D * param_3 + iVar9) * 4);
        } while ((int)uVar4 < (int)param_3);
        *(float *)(uVar2 + uVar7) = fVar10;
      }
    }
    unaff_R15D = unaff_R15D + 1;
    uVar7 = uVar7 + 4;
  } while (unaff_R15D < unaff_EBP);
  return;
}






// 函数: void FUN_1807ebc15(void)
void FUN_1807ebc15(void)

{
  return;
}






// 函数: void FUN_1807ebc1a(void)
void FUN_1807ebc1a(void)

{
  return;
}






// 函数: void FUN_1807ebc30(int64_t param_1)
void FUN_1807ebc30(int64_t param_1)

{
  uint uVar1;
  uint64_t uVar3;
  uint64_t uVar2;
  
  uVar2 = 0;
  if ((*(int64_t *)(param_1 + 8) != 0) && (uVar3 = uVar2, 0 < *(int *)(param_1 + 0x10))) {
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
      *(int32_t *)(uVar3 + *(int64_t *)(param_1 + 8)) = 0;
      uVar3 = uVar3 + 4;
    } while ((int)uVar1 < *(int *)(param_1 + 0x10));
  }
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x528),0,(int64_t)*(int *)(param_1 + 0x5c8) << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




