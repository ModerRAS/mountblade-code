#include "TaleWorlds.Native.Split.h"
// 99_part_05_part002.c - 5 个函数
// 函数: void DataStructure_d52fa(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_d52fa(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  byte *pbVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  uint64_t uVar18;
  uint uVar19;
  int in_R11D;
  int64_t unaff_R12;
  int64_t unaff_R13;
  float *unaff_R14;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_XMM5_Da;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM13_Da;
  ushort *plocal_buffer_28;
  ushort *plocal_buffer_30;
  byte *pbStack0000000000000038;
  char cStack0000000000000040;
  char cStack0000000000000044;
  int64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  char local_var_150;
  char local_var_158;
  int local_var_160;
  char local_var_168;
  lVar20 = 0;
  local_buffer_58 = param_4;
  do {
    lVar1 = *(int64_t *)(unaff_R12 + 0x58);
    if (*(char *)(unaff_R12 + 0xa1) == '\0') {
      *unaff_R14 = *(float *)(lVar20 + lVar1);
      unaff_R14[1] = *(float *)(lVar20 + 4 + lVar1);
      unaff_R14[2] = *(float *)(lVar20 + 8 + lVar1);
    }
    else {
      fVar27 = *(float *)(unaff_R12 + 0xc4);
      fVar28 = *(float *)(unaff_R12 + 200);
      fVar23 = *(float *)(lVar20 + 4 + lVar1);
      fVar21 = *(float *)(unaff_R12 + 0xb4);
      fVar24 = *(float *)(unaff_R12 + 0xb8);
      fVar25 = *(float *)(lVar20 + lVar1);
      fVar26 = *(float *)(lVar20 + 8 + lVar1);
      fVar22 = *(float *)(unaff_R12 + 0xd4);
      fVar2 = *(float *)(unaff_R12 + 0xd8);
      fVar3 = *(float *)(unaff_R12 + 0xe4);
      fVar4 = *(float *)(unaff_R12 + 0xe8);
      *unaff_R14 = *(float *)(unaff_R12 + 0xc0) * fVar23 + *(float *)(unaff_R12 + 0xb0) * fVar25 +
                   *(float *)(unaff_R12 + 0xd0) * fVar26 + *(float *)(unaff_R12 + 0xe0);
      unaff_R14[2] = fVar28 * fVar23 + fVar24 * fVar25 + fVar2 * fVar26 + fVar4;
      unaff_R14[1] = fVar27 * fVar23 + fVar21 * fVar25 + fVar22 * fVar26 + fVar3;
    }
    unaff_R14[0x10] = *(float *)(lVar20 + 0x5c + lVar1);
    unaff_R14[3] = *(float *)(lVar20 + 0xc + lVar1);
    pbVar14 = (byte *)(lVar1 + 0x54 + lVar20);
    unaff_R14[6] = *(float *)(lVar20 + 0x2c + lVar1);
    puVar15 = (ushort *)(lVar1 + 0x52 + lVar20);
    puVar16 = (ushort *)(lVar1 + 0x50 + lVar20);
    unaff_R14[0xd] = *(float *)(lVar20 + 0x60 + lVar1);
    unaff_R14[0xe] = *(float *)(lVar20 + 100 + lVar1);
    unaff_R14[0xf] = *(float *)(lVar20 + 0x68 + lVar1);
    fVar23 = *(float *)(lVar20 + 0x34 + lVar1);
    unaff_R14[9] = fVar23;
    fVar25 = *(float *)(lVar20 + 0x38 + lVar1);
    unaff_R14[10] = fVar25;
    unaff_R14[0xb] = *(float *)(lVar20 + 0x3c + lVar1) * 60.0;
    unaff_R14[9] = fVar23 * 60.0;
    unaff_R14[10] = fVar25 * 60.0;
    fVar23 = *(float *)(lVar20 + 0x20 + lVar1);
    fVar25 = *(float *)(lVar20 + 0x24 + lVar1);
    plocal_buffer_28 = puVar16;
    plocal_buffer_30 = puVar15;
    pbStack0000000000000038 = pbVar14;
    DataStructure_cf260(local_buffer_58,in_R11D,unaff_R14,
                  unaff_XMM13_Da * *(float *)(lVar20 + 0x2c + lVar1),param_1);
    in_XMM5_Da = fVar25 * in_XMM5_Da;
    unaff_R14[0xc] = (float)(((uint)*pbVar14 << 0xc | *puVar16 & 0xfff) << 0xc | *puVar15 & 0xfff);
    unaff_R14[7] = *(float *)(unaff_R12 + 0xa4);
    if (*(int *)(unaff_R13 + 0x10c) == 0) {
      iVar10 = (int)in_XMM5_Da;
      iVar5 = (int)(in_XMM5_Da + 1.0);
      in_XMM5_Da = in_XMM5_Da - (float)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = 0x31;
      }
      lVar13 = (int64_t)iVar5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = 0x31;
      }
      lVar8 = (int64_t)iVar10;
      uVar19 = *(uint *)(lVar20 + 0x44 + lVar1);
      fVar26 = *(float *)(unaff_R13 + 0xbf0 + lVar8 * 0x10);
      fVar27 = *(float *)(unaff_R13 + 0xbf4 + lVar8 * 0x10);
      fVar26 = (*(float *)(unaff_R13 + 0xbf0 + lVar13 * 0x10) - fVar26) * in_XMM5_Da + fVar26;
      fVar28 = *(float *)(unaff_R13 + 0xbf8 + lVar8 * 0x10);
      fVar27 = (*(float *)(unaff_R13 + 0xbf4 + lVar13 * 0x10) - fVar27) * in_XMM5_Da + fVar27;
      fVar24 = *(float *)(unaff_R13 + 0xbfc + lVar8 * 0x10);
      fVar28 = (*(float *)(unaff_R13 + 0xbf8 + lVar13 * 0x10) - fVar28) * in_XMM5_Da + fVar28;
      fVar24 = (*(float *)(unaff_R13 + 0xbfc + lVar13 * 0x10) - fVar24) * in_XMM5_Da + fVar24;
      if (uVar19 != 0xffffffff) {
        fVar21 = (float)(uVar19 >> 0x10 & 0xff);
        fVar22 = (float)(uVar19 >> 8 & 0xff);
        fVar28 = (float)(uVar19 & 0xff) * (float)(uVar19 & 0xff) * 1.5378702e-05 * fVar28;
        fVar26 = fVar21 * fVar21 * 1.5378702e-05 * fVar26;
        fVar27 = fVar22 * fVar22 * 1.5378702e-05 * fVar27;
      }
    }
    else {
      uVar19 = *(uint *)(lVar20 + 0x44 + lVar1);
      iVar10 = (int)(in_XMM5_Da + 1.0);
      fVar26 = (float)(uVar19 >> 0x10 & 0xff) * 0.003921569;
      iVar5 = (int)in_XMM5_Da;
      fVar27 = (float)(uVar19 >> 8 & 0xff) * 0.003921569;
      fVar21 = (float)iVar5;
      fVar28 = (float)(uVar19 & 0xff) * 0.003921569;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = 0x31;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = 0x31;
      }
      fVar24 = *(float *)(unaff_R13 + 0xbfc + (int64_t)iVar5 * 0x10);
      fVar24 = (*(float *)(unaff_R13 + 0xbfc + (int64_t)iVar10 * 0x10) - fVar24) *
               (in_XMM5_Da - fVar21) + fVar24;
    }
    unaff_R14[0x11] = *(float *)(lVar20 + 0x6c + lVar1);
    uVar6 = (uint)(int64_t)(fVar24 * 255.9);
    uVar19 = 0xff;
    if (uVar6 < 0xff) {
      uVar19 = uVar6;
    }
    uVar11 = (uint)(int64_t)(fVar26 * 255.9);
    uVar6 = 0xff;
    if (uVar11 < 0xff) {
      uVar6 = uVar11;
    }
    uVar12 = (uint)(int64_t)(fVar27 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar17 = (uint)(int64_t)(fVar28 * 255.9);
    uVar12 = 0xff;
    if (uVar17 < 0xff) {
      uVar12 = uVar17;
    }
    unaff_R14[8] = (float)(((uVar19 << 8 | uVar6) << 8 | uVar11) << 8 | uVar12);
    if ((local_var_158 == '\0') || (local_var_168 == '\0')) {
      if ((cStack0000000000000044 == '\0') || (local_var_168 == '\0')) {
        unaff_R14[4] = 0.0;
        fVar23 = 0.0;
      }
      else {
        iVar5 = *(int *)(unaff_R13 + 0xfc4);
        iVar7 = (int)*(short *)(lVar20 + 0x32 + lVar1);
        iVar10 = *(int *)(unaff_R13 + 0xfc8);
        unaff_R14[4] = (float)(iVar7 % iVar5) / (float)iVar5;
        fVar23 = (float)(iVar7 / iVar5) / (float)iVar10;
      }
    }
    else {
      uVar19 = *(uint *)(unaff_R13 + 0xfcc);
      uVar9 = (uint64_t)uVar19;
      fVar25 = fVar23 * fVar25 * *(float *)(unaff_R13 + 0xfd0) +
               (float)(int)*(short *)(lVar20 + 0x32 + lVar1);
      if (cStack0000000000000040 == '\0') {
        uVar18 = (uint64_t)fVar25;
        if (local_var_150 == '\0') {
          uVar9 = (uint64_t)(uVar19 - 1);
          if ((uint)uVar18 < uVar19 - 1) {
            uVar9 = uVar18 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar18 & 0xffffffff) % uVar9;
        }
        uVar19 = *(uint *)(unaff_R13 + 0xfc4);
        fVar23 = (float)(uVar9 / uVar19) / (float)*(int *)(unaff_R13 + 0xfc8);
        unaff_R14[4] = (float)(uVar9 % (uint64_t)uVar19) / (float)(int)uVar19;
      }
      else if (local_var_150 == '\0') {
        fVar23 = 0.0;
        fVar26 = (float)(uVar19 - 1);
        if (fVar25 <= (float)(uVar19 - 1)) {
          fVar26 = fVar25;
        }
        unaff_R14[4] = fVar26;
      }
      else {
        fVar25 = (float)fmodf(uVar9,(float)uVar9);
        fVar23 = 0.0;
        unaff_R14[4] = fVar25;
      }
    }
    lVar20 = lVar20 + 0x70;
    unaff_R14[5] = fVar23;
    unaff_R14 = unaff_R14 + 0x12;
    in_XMM5_Da = 49.0;
    local_var_160 = local_var_160 + 1;
    local_var_48 = local_var_48 + -1;
    param_1 = local_buffer_50;
    in_R11D = local_var_160;
  } while (local_var_48 != 0);
  return;
}
// 函数: void DataStructure_d59a8(void)
void DataStructure_d59a8(void)
{
  return;
}
// 函数: void DataStructure_d59c0(int64_t param_1,int64_t param_2,int param_3)
void DataStructure_d59c0(int64_t param_1,int64_t param_2,int param_3)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int64_t lVar16;
  float *pfVar17;
  int64_t lVar18;
  int iVar19;
  uint uVar20;
  uint64_t uVar21;
  uint uVar22;
  int64_t lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  lVar2 = *(int64_t *)(param_2 + 0x48);
  uVar1 = *(uint *)(lVar2 + 0x68);
  iVar19 = (int)((*(int64_t *)(param_2 + 0x60) - *(int64_t *)(param_2 + 0x58)) / 0x70);
  pfVar17 = (float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x310) + 0x10) +
                     (int64_t)param_3 * 0x48);
  if ((*(int *)(lVar2 + 0xfc4) < 1) || (*(int *)(lVar2 + 0xfc8) < 1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  lVar23 = (int64_t)iVar19;
  if (0 < iVar19) {
    lVar18 = 0;
    do {
      iVar19 = 0x31;
      lVar3 = *(int64_t *)(param_2 + 0x58);
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar17 = *(float *)(lVar18 + lVar3);
        pfVar17[1] = *(float *)(lVar18 + 4 + lVar3);
        pfVar17[2] = *(float *)(lVar18 + 8 + lVar3);
      }
      else {
        fVar29 = *(float *)(param_2 + 0xc4);
        fVar30 = *(float *)(param_2 + 200);
        fVar24 = *(float *)(lVar18 + 4 + lVar3);
        fVar31 = *(float *)(param_2 + 0xb4);
        fVar27 = *(float *)(param_2 + 0xb8);
        fVar28 = *(float *)(lVar18 + lVar3);
        fVar26 = *(float *)(lVar18 + 8 + lVar3);
        fVar25 = *(float *)(param_2 + 0xd4);
        fVar4 = *(float *)(param_2 + 0xd8);
        fVar5 = *(float *)(param_2 + 0xe4);
        fVar6 = *(float *)(param_2 + 0xe8);
        *pfVar17 = *(float *)(param_2 + 0xc0) * fVar24 + *(float *)(param_2 + 0xb0) * fVar28 +
                   *(float *)(param_2 + 0xd0) * fVar26 + *(float *)(param_2 + 0xe0);
        pfVar17[2] = fVar30 * fVar24 + fVar27 * fVar28 + fVar4 * fVar26 + fVar6;
        pfVar17[1] = fVar29 * fVar24 + fVar31 * fVar28 + fVar25 * fVar26 + fVar5;
      }
      pfVar17[0x10] = *(float *)(lVar18 + 0x5c + lVar3);
      pfVar17[3] = *(float *)(lVar18 + 0xc + lVar3);
      pfVar17[6] = *(float *)(lVar18 + 0x2c + lVar3);
      pfVar17[0xd] = *(float *)(lVar18 + 0x60 + lVar3);
      pfVar17[0xe] = *(float *)(lVar18 + 100 + lVar3);
      pfVar17[0xf] = *(float *)(lVar18 + 0x68 + lVar3);
      fVar24 = *(float *)(lVar18 + 0x34 + lVar3);
      pfVar17[9] = fVar24;
      fVar28 = *(float *)(lVar18 + 0x38 + lVar3);
      pfVar17[10] = fVar28;
      pfVar17[0xb] = *(float *)(lVar18 + 0x3c + lVar3) * 60.0;
      pfVar17[9] = fVar24 * 60.0;
      pfVar17[10] = fVar28 * 60.0;
      fVar24 = *(float *)(lVar18 + 0x24 + lVar3);
      fVar28 = *(float *)(lVar18 + 0x20 + lVar3);
      fVar26 = fVar24 * 49.0;
      pfVar17[7] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar2 + 0x10c) == 0) {
        iVar13 = (int)fVar26;
        iVar8 = (int)(fVar26 + 1.0);
        fVar26 = fVar26 - (float)iVar13;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (0x31 < iVar8) {
          iVar8 = iVar19;
        }
        lVar16 = (int64_t)iVar8;
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        else if (0x31 < iVar13) {
          iVar13 = iVar19;
        }
        lVar11 = (int64_t)iVar13;
        uVar22 = *(uint *)(lVar18 + 0x44 + lVar3);
        fVar29 = *(float *)(lVar2 + 0xbf0 + lVar11 * 0x10);
        fVar30 = *(float *)(lVar2 + 0xbf4 + lVar11 * 0x10);
        fVar29 = (*(float *)(lVar2 + 0xbf0 + lVar16 * 0x10) - fVar29) * fVar26 + fVar29;
        fVar31 = *(float *)(lVar2 + 0xbf8 + lVar11 * 0x10);
        fVar30 = (*(float *)(lVar2 + 0xbf4 + lVar16 * 0x10) - fVar30) * fVar26 + fVar30;
        fVar27 = *(float *)(lVar2 + 0xbfc + lVar11 * 0x10);
        fVar31 = (*(float *)(lVar2 + 0xbf8 + lVar16 * 0x10) - fVar31) * fVar26 + fVar31;
        fVar27 = (*(float *)(lVar2 + 0xbfc + lVar16 * 0x10) - fVar27) * fVar26 + fVar27;
        if (uVar22 != 0xffffffff) {
          fVar26 = (float)(uVar22 >> 0x10 & 0xff);
          fVar25 = (float)(uVar22 >> 8 & 0xff);
          fVar31 = (float)(uVar22 & 0xff) * (float)(uVar22 & 0xff) * 1.5378702e-05 * fVar31;
          fVar29 = fVar26 * fVar26 * 1.5378702e-05 * fVar29;
          fVar30 = fVar25 * fVar25 * 1.5378702e-05 * fVar30;
        }
      }
      else {
        uVar22 = *(uint *)(lVar18 + 0x44 + lVar3);
        iVar8 = (int)(fVar26 + 1.0);
        fVar29 = (float)(uVar22 >> 0x10 & 0xff) * 0.003921569;
        iVar13 = (int)fVar26;
        fVar30 = (float)(uVar22 >> 8 & 0xff) * 0.003921569;
        fVar31 = (float)(uVar22 & 0xff) * 0.003921569;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (0x31 < iVar8) {
          iVar8 = iVar19;
        }
        if (iVar13 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = iVar13;
          if (0x31 < iVar13) {
            iVar9 = iVar19;
          }
        }
        fVar27 = *(float *)(lVar2 + 0xbfc + (int64_t)iVar9 * 0x10);
        fVar27 = (*(float *)(lVar2 + 0xbfc + (int64_t)iVar8 * 0x10) - fVar27) *
                 (fVar26 - (float)iVar13) + fVar27;
      }
      pfVar17[0x11] = *(float *)(lVar18 + 0x6c + lVar3);
      uVar10 = (uint)(int64_t)(fVar27 * 255.9);
      uVar22 = 0xff;
      if (uVar10 < 0xff) {
        uVar22 = uVar10;
      }
      uVar14 = (uint)(int64_t)(fVar29 * 255.9);
      uVar10 = 0xff;
      if (uVar14 < 0xff) {
        uVar10 = uVar14;
      }
      uVar15 = (uint)(int64_t)(fVar30 * 255.9);
      uVar14 = 0xff;
      if (uVar15 < 0xff) {
        uVar14 = uVar15;
      }
      uVar20 = (uint)(int64_t)(fVar31 * 255.9);
      uVar15 = 0xff;
      if (uVar20 < 0xff) {
        uVar15 = uVar20;
      }
      pfVar17[8] = (float)(((uVar22 << 8 | uVar10) << 8 | uVar14) << 8 | uVar15);
      if (((uVar1 >> 4 & 1) == 0) || (!bVar7)) {
        if (((uVar1 >> 0xb & 1) == 0) || (!bVar7)) {
          pfVar17[4] = 0.0;
          fVar24 = 0.0;
        }
        else {
          iVar19 = *(int *)(lVar2 + 0xfc4);
          iVar13 = (int)*(short *)(lVar18 + 0x32 + lVar3);
          iVar8 = *(int *)(lVar2 + 0xfc8);
          pfVar17[4] = (float)(iVar13 % iVar19) / (float)iVar19;
          fVar24 = (float)(iVar13 / iVar19) / (float)iVar8;
        }
      }
      else {
        uVar22 = *(uint *)(lVar2 + 0xfcc);
        uVar12 = (uint64_t)uVar22;
        fVar28 = fVar28 * fVar24 * *(float *)(lVar2 + 0xfd0) +
                 (float)(int)*(short *)(lVar18 + 0x32 + lVar3);
        if ((uVar1 >> 0x16 & 1) == 0) {
          uVar21 = (uint64_t)fVar28;
          if ((uVar1 >> 3 & 1) == 0) {
            uVar12 = (uint64_t)(uVar22 - 1);
            if ((uint)uVar21 < uVar22 - 1) {
              uVar12 = uVar21 & 0xffffffff;
            }
          }
          else {
            uVar12 = (uVar21 & 0xffffffff) % uVar12;
          }
          uVar22 = *(uint *)(lVar2 + 0xfc4);
          fVar24 = (float)(uVar12 / uVar22) / (float)*(int *)(lVar2 + 0xfc8);
          pfVar17[4] = (float)(uVar12 % (uint64_t)uVar22) / (float)(int)uVar22;
        }
        else if ((uVar1 >> 3 & 1) == 0) {
          fVar24 = 0.0;
          fVar26 = (float)(uVar22 - 1);
          if (fVar28 <= (float)(uVar22 - 1)) {
            fVar26 = fVar28;
          }
          pfVar17[4] = fVar26;
        }
        else {
          fVar24 = (float)fmodf(uVar12,(float)uVar12);
          pfVar17[4] = fVar24;
          fVar24 = 0.0;
        }
      }
      pfVar17[5] = fVar24;
      lVar18 = lVar18 + 0x70;
      pfVar17 = pfVar17 + 0x12;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  return;
}
// 函数: void DataStructure_d5a75(void)
void DataStructure_d5a75(void)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar14;
  int iVar15;
  uint uVar16;
  uint64_t uVar17;
  uint uVar18;
  char in_R11B;
  int64_t unaff_R12;
  char unaff_R13B;
  char unaff_R14B;
  char unaff_R15B;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char local_var_110;
  char local_var_118;
  lVar14 = 0;
  do {
    iVar15 = 0x31;
    lVar1 = *(int64_t *)(unaff_RBP + 0x58);
    if (*(char *)(unaff_RBP + 0xa1) == '\0') {
      *unaff_RBX = *(float *)(lVar14 + lVar1);
      unaff_RBX[1] = *(float *)(lVar14 + 4 + lVar1);
      unaff_RBX[2] = *(float *)(lVar14 + 8 + lVar1);
    }
    else {
      fVar24 = *(float *)(unaff_RBP + 0xc4);
      fVar25 = *(float *)(unaff_RBP + 200);
      fVar19 = *(float *)(lVar14 + 4 + lVar1);
      fVar26 = *(float *)(unaff_RBP + 0xb4);
      fVar22 = *(float *)(unaff_RBP + 0xb8);
      fVar23 = *(float *)(lVar14 + lVar1);
      fVar21 = *(float *)(lVar14 + 8 + lVar1);
      fVar20 = *(float *)(unaff_RBP + 0xd4);
      fVar2 = *(float *)(unaff_RBP + 0xd8);
      fVar3 = *(float *)(unaff_RBP + 0xe4);
      fVar4 = *(float *)(unaff_RBP + 0xe8);
      *unaff_RBX = *(float *)(unaff_RBP + 0xc0) * fVar19 + *(float *)(unaff_RBP + 0xb0) * fVar23 +
                   *(float *)(unaff_RBP + 0xd0) * fVar21 + *(float *)(unaff_RBP + 0xe0);
      unaff_RBX[2] = fVar25 * fVar19 + fVar22 * fVar23 + fVar2 * fVar21 + fVar4;
      unaff_RBX[1] = fVar24 * fVar19 + fVar26 * fVar23 + fVar20 * fVar21 + fVar3;
    }
    unaff_RBX[0x10] = *(float *)(lVar14 + 0x5c + lVar1);
    unaff_RBX[3] = *(float *)(lVar14 + 0xc + lVar1);
    unaff_RBX[6] = *(float *)(lVar14 + 0x2c + lVar1);
    unaff_RBX[0xd] = *(float *)(lVar14 + 0x60 + lVar1);
    unaff_RBX[0xe] = *(float *)(lVar14 + 100 + lVar1);
    unaff_RBX[0xf] = *(float *)(lVar14 + 0x68 + lVar1);
    fVar19 = *(float *)(lVar14 + 0x34 + lVar1);
    unaff_RBX[9] = fVar19;
    fVar23 = *(float *)(lVar14 + 0x38 + lVar1);
    unaff_RBX[10] = fVar23;
    unaff_RBX[0xb] = *(float *)(lVar14 + 0x3c + lVar1) * 60.0;
    unaff_RBX[9] = fVar19 * 60.0;
    unaff_RBX[10] = fVar23 * 60.0;
    fVar19 = *(float *)(lVar14 + 0x24 + lVar1);
    fVar23 = *(float *)(lVar14 + 0x20 + lVar1);
    fVar21 = fVar19 * 49.0;
    unaff_RBX[7] = *(float *)(unaff_RBP + 0xa4);
    if (*(int *)(unaff_RSI + 0x10c) == 0) {
      iVar10 = (int)fVar21;
      iVar5 = (int)(fVar21 + 1.0);
      fVar21 = fVar21 - (float)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = iVar15;
      }
      lVar13 = (int64_t)iVar5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = iVar15;
      }
      lVar8 = (int64_t)iVar10;
      uVar18 = *(uint *)(lVar14 + 0x44 + lVar1);
      fVar24 = *(float *)(unaff_RSI + 0xbf0 + lVar8 * 0x10);
      fVar25 = *(float *)(unaff_RSI + 0xbf4 + lVar8 * 0x10);
      fVar24 = (*(float *)(unaff_RSI + 0xbf0 + lVar13 * 0x10) - fVar24) * fVar21 + fVar24;
      fVar26 = *(float *)(unaff_RSI + 0xbf8 + lVar8 * 0x10);
      fVar25 = (*(float *)(unaff_RSI + 0xbf4 + lVar13 * 0x10) - fVar25) * fVar21 + fVar25;
      fVar22 = *(float *)(unaff_RSI + 0xbfc + lVar8 * 0x10);
      fVar26 = (*(float *)(unaff_RSI + 0xbf8 + lVar13 * 0x10) - fVar26) * fVar21 + fVar26;
      fVar22 = (*(float *)(unaff_RSI + 0xbfc + lVar13 * 0x10) - fVar22) * fVar21 + fVar22;
      if (uVar18 != 0xffffffff) {
        fVar21 = (float)(uVar18 >> 0x10 & 0xff);
        fVar20 = (float)(uVar18 >> 8 & 0xff);
        fVar26 = (float)(uVar18 & 0xff) * (float)(uVar18 & 0xff) * 1.5378702e-05 * fVar26;
        fVar24 = fVar21 * fVar21 * 1.5378702e-05 * fVar24;
        fVar25 = fVar20 * fVar20 * 1.5378702e-05 * fVar25;
      }
    }
    else {
      uVar18 = *(uint *)(lVar14 + 0x44 + lVar1);
      iVar5 = (int)(fVar21 + 1.0);
      fVar24 = (float)(uVar18 >> 0x10 & 0xff) * 0.003921569;
      iVar10 = (int)fVar21;
      fVar25 = (float)(uVar18 >> 8 & 0xff) * 0.003921569;
      fVar26 = (float)(uVar18 & 0xff) * 0.003921569;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = iVar15;
      }
      if (iVar10 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar10;
        if (0x31 < iVar10) {
          iVar6 = iVar15;
        }
      }
      fVar22 = *(float *)(unaff_RSI + 0xbfc + (int64_t)iVar6 * 0x10);
      fVar22 = (*(float *)(unaff_RSI + 0xbfc + (int64_t)iVar5 * 0x10) - fVar22) *
               (fVar21 - (float)iVar10) + fVar22;
    }
    unaff_RBX[0x11] = *(float *)(lVar14 + 0x6c + lVar1);
    uVar7 = (uint)(int64_t)(fVar22 * 255.9);
    uVar18 = 0xff;
    if (uVar7 < 0xff) {
      uVar18 = uVar7;
    }
    uVar11 = (uint)(int64_t)(fVar24 * 255.9);
    uVar7 = 0xff;
    if (uVar11 < 0xff) {
      uVar7 = uVar11;
    }
    uVar12 = (uint)(int64_t)(fVar25 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar16 = (uint)(int64_t)(fVar26 * 255.9);
    uVar12 = 0xff;
    if (uVar16 < 0xff) {
      uVar12 = uVar16;
    }
    unaff_RBX[8] = (float)(((uVar18 << 8 | uVar7) << 8 | uVar11) << 8 | uVar12);
    if ((local_var_110 == '\0') || (unaff_R15B == '\0')) {
      if ((in_R11B == '\0') || (unaff_R15B == '\0')) {
        unaff_RBX[4] = 0.0;
        fVar19 = 0.0;
      }
      else {
        iVar15 = *(int *)(unaff_RSI + 0xfc4);
        iVar10 = (int)*(short *)(lVar14 + 0x32 + lVar1);
        iVar5 = *(int *)(unaff_RSI + 0xfc8);
        unaff_RBX[4] = (float)(iVar10 % iVar15) / (float)iVar15;
        fVar19 = (float)(iVar10 / iVar15) / (float)iVar5;
      }
    }
    else {
      uVar18 = *(uint *)(unaff_RSI + 0xfcc);
      uVar9 = (uint64_t)uVar18;
      fVar23 = fVar23 * fVar19 * *(float *)(unaff_RSI + 0xfd0) +
               (float)(int)*(short *)(lVar14 + 0x32 + lVar1);
      if (unaff_R13B == '\0') {
        uVar17 = (uint64_t)fVar23;
        if (unaff_R14B == '\0') {
          uVar9 = (uint64_t)(uVar18 - 1);
          if ((uint)uVar17 < uVar18 - 1) {
            uVar9 = uVar17 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar17 & 0xffffffff) % uVar9;
        }
        uVar18 = *(uint *)(unaff_RSI + 0xfc4);
        fVar19 = (float)(uVar9 / uVar18) / (float)*(int *)(unaff_RSI + 0xfc8);
        unaff_RBX[4] = (float)(uVar9 % (uint64_t)uVar18) / (float)(int)uVar18;
      }
      else if (unaff_R14B == '\0') {
        fVar19 = 0.0;
        fVar21 = (float)(uVar18 - 1);
        if (fVar23 <= (float)(uVar18 - 1)) {
          fVar21 = fVar23;
        }
        unaff_RBX[4] = fVar21;
      }
      else {
        fVar19 = (float)fmodf(uVar9,(float)uVar9);
        unaff_RBX[4] = fVar19;
        fVar19 = 0.0;
        in_R11B = local_var_118;
      }
    }
    unaff_RBX[5] = fVar19;
    lVar14 = lVar14 + 0x70;
    unaff_RBX = unaff_RBX + 0x12;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  return;
}
// 函数: void DataStructure_d600b(void)
void DataStructure_d600b(void)
{
  return;
}