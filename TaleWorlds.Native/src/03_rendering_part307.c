#include "TaleWorlds.Native.Split.h"

// 03_rendering_part307.c - 2 个函数

// 函数: void FUN_18042f7d0(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4,longlong param_5
void FUN_18042f7d0(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4,longlong param_5
                  ,int param_6,longlong param_7,ushort *param_8)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  float *pfVar6;
  char cVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1f8 [32];
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  char acStack_1b8 [8];
  ushort uStack_1b0;
  ushort uStack_1ae;
  ushort uStack_1ac;
  int iStack_1a8;
  uint *puStack_1a0;
  ushort uStack_198;
  uint *puStack_190;
  ulonglong uStack_188;
  uint uStack_180;
  uint uStack_17c;
  longlong lStack_178;
  ulonglong uStack_170;
  ushort *puStack_168;
  uint auStack_158 [61];
  int aiStack_64 [3];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  lVar8 = param_4 + 0x18;
  puStack_168 = param_8;
  lVar11 = 8;
  uStack_1ac = *param_8;
  lVar15 = 8;
  uStack_1ae = param_8[1];
  uStack_198 = param_8[0x1e0];
  uStack_1b0 = param_8[0x1e1];
  puStack_1a0 = param_2;
  puStack_190 = param_3;
  do {
    lStack_1c0 = lVar8 + 4;
    lStack_1d0 = lVar8 + -4;
    lStack_1d8 = lVar8 + -8;
    lStack_1c8 = lVar8;
    FUN_18042f630(lVar8 + -0x18,lVar8 + -0x14,lVar8 + -0x10,lVar8 + -0xc);
    lVar8 = lVar8 + 0x20;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar8 = param_4 + 0xc0;
  do {
    lStack_1c0 = lVar8 + 0x20;
    lStack_1d0 = lVar8 + -0x20;
    lStack_1d8 = lVar8 + -0x40;
    lStack_1c8 = lVar8;
    FUN_18042f630(lVar8 + -0xc0,lVar8 + -0xa0,lVar8 + -0x80,lVar8 + -0x60);
    puVar2 = puStack_190;
    lVar8 = lVar8 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar8 = 0;
  param_4 = param_4 - param_5;
  pfVar6 = (float *)(param_5 + 4);
  do {
    fVar17 = *(float *)(param_4 + -4 + (longlong)pfVar6) * pfVar6[-1];
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + (longlong)pfVar6) * *pfVar6;
    auStack_158[(byte)(&UNK_180995860)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 4 + (longlong)pfVar6) * pfVar6[1];
    auStack_158[(byte)(&UNK_180995861)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 8 + (longlong)pfVar6) * pfVar6[2];
    auStack_158[(byte)(&UNK_180995862)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0xc + (longlong)pfVar6) * pfVar6[3];
    auStack_158[(byte)(&UNK_180995863)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x10 + (longlong)pfVar6) * pfVar6[4];
    auStack_158[(byte)(&UNK_180995864)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0x14 + (longlong)pfVar6) * pfVar6[5];
    auStack_158[(byte)(&UNK_180995865)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x18 + (longlong)pfVar6) * pfVar6[6];
    auStack_158[(byte)(&UNK_180995866)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0x1c + (longlong)pfVar6) * pfVar6[7];
    auStack_158[(byte)(&UNK_180995867)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x20 + (longlong)pfVar6) * pfVar6[8];
    auStack_158[(byte)(&UNK_180995868)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0x24 + (longlong)pfVar6) * pfVar6[9];
    auStack_158[(byte)(&UNK_180995869)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x28 + (longlong)pfVar6) * pfVar6[10];
    auStack_158[(byte)(&UNK_18099586a)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0x2c + (longlong)pfVar6) * pfVar6[0xb];
    auStack_158[(byte)(&UNK_18099586b)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x30 + (longlong)pfVar6) * pfVar6[0xc];
    auStack_158[(byte)(&UNK_18099586c)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    fVar17 = *(float *)(param_4 + 0x34 + (longlong)pfVar6) * pfVar6[0xd];
    auStack_158[(byte)(&UNK_18099586d)[lVar8]] = (int)fVar18;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + 0.5;
    }
    else {
      fVar17 = fVar17 - 0.5;
    }
    fVar18 = *(float *)(param_4 + 0x38 + (longlong)pfVar6) * pfVar6[0xe];
    auStack_158[(byte)(&UNK_18099586e)[lVar8]] = (int)fVar17;
    if (0.0 <= fVar18) {
      fVar18 = fVar18 + 0.5;
    }
    else {
      fVar18 = fVar18 - 0.5;
    }
    pbVar1 = &UNK_18099586f + lVar8;
    pfVar6 = pfVar6 + 0x10;
    lVar8 = lVar8 + 0x10;
    auStack_158[*pbVar1] = (int)fVar18;
  } while (lVar8 < 0x40);
  auStack_158[0] = auStack_158[0] - param_6;
  if (auStack_158[0] == 0) {
    FUN_18042f570(param_1,param_2,puStack_190,param_7);
  }
  else {
    iVar12 = (auStack_158[0] ^ (int)auStack_158[0] >> 0x1f) - ((int)auStack_158[0] >> 0x1f);
    uVar5 = auStack_158[0] - 1;
    if (-1 < (int)auStack_158[0]) {
      uVar5 = auStack_158[0];
    }
    uVar16 = 1;
    while (iVar12 = iVar12 >> 1, iVar12 != 0) {
      uVar16 = (ulonglong)(ushort)((short)uVar16 + 1);
    }
    FUN_18042f570(param_1,param_2,puStack_190,param_7 + uVar16 * 4);
    uVar9 = *puVar2 + (int)uVar16;
    uVar5 = ((uint)(ushort)((1 << ((byte)uVar16 & 0x1f)) - 1) & uVar5 & 0xffff) <<
            (0x18U - (char)uVar9 & 0x1f) | *puStack_1a0;
    if (7 < (int)uVar9) {
      uVar16 = (ulonglong)(uVar9 >> 3);
      uVar9 = uVar9 + (uVar9 >> 3) * -8;
      do {
        cVar7 = (char)(uVar5 >> 0x10);
        acStack_1b8[0] = cVar7;
        (*(code *)*param_1)(param_1[1],acStack_1b8,1);
        if (cVar7 == -1) {
          acStack_1b8[0] = '\0';
          (*(code *)*param_1)(param_1[1],acStack_1b8,1);
        }
        uVar5 = uVar5 << 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *puStack_1a0 = uVar5;
    *puVar2 = uVar9;
    param_2 = puStack_1a0;
  }
  piVar3 = aiStack_64;
  uStack_188 = 0x3f;
  lVar8 = 0x3f;
  do {
    uVar5 = (uint)uStack_188;
    if (piVar3[2] != 0) break;
    if (piVar3[1] != 0) {
      uVar5 = uVar5 - 1;
LAB_18042fd0f:
      uStack_188 = (ulonglong)uVar5;
      break;
    }
    if (*piVar3 != 0) {
      uVar5 = uVar5 - 2;
      goto LAB_18042fd0f;
    }
    uVar5 = uVar5 - 3;
    uStack_188 = (ulonglong)uVar5;
    lVar8 = lVar8 + -3;
    piVar3 = piVar3 + -3;
  } while (0 < lVar8);
  if (uVar5 == 0) {
    uVar5 = (uint)uStack_1ae + *puVar2;
    uVar9 = (uint)uStack_1ac << (0x18U - (char)uVar5 & 0x1f) | *param_2;
    if (7 < (int)uVar5) {
      uVar16 = (ulonglong)(uVar5 >> 3);
      uVar5 = uVar5 + (uVar5 >> 3) * -8;
      do {
        cVar7 = (char)(uVar9 >> 0x10);
        acStack_1b8[0] = cVar7;
        (*(code *)*param_1)(param_1[1],acStack_1b8,1);
        if (cVar7 == -1) {
          acStack_1b8[0] = '\0';
          (*(code *)*param_1)(param_1[1],acStack_1b8,1);
        }
        uVar9 = uVar9 << 8;
        uVar16 = uVar16 - 1;
        param_2 = puStack_1a0;
      } while (uVar16 != 0);
    }
    *param_2 = uVar9;
    *puVar2 = uVar5;
  }
  else {
    lVar8 = (longlong)(int)uVar5;
    iStack_1a8 = 1;
    if (0 < lVar8) {
      lStack_178 = 1;
      do {
        puVar2 = puStack_190;
        uVar5 = auStack_158[lStack_178];
        iVar12 = iStack_1a8;
        while ((uVar5 == 0 && (lStack_178 <= lVar8))) {
          lStack_178 = lStack_178 + 1;
          iVar12 = iVar12 + 1;
          uVar5 = auStack_158[lStack_178];
        }
        uVar5 = iVar12 - iStack_1a8;
        iStack_1a8 = iVar12;
        uStack_17c = uVar5;
        if (0xf < (int)uVar5) {
          if (0 < (int)uVar5 >> 4) {
            uVar9 = (uint)uStack_198;
            uVar13 = (uint)uStack_1b0;
            uStack_170 = (ulonglong)(uint)((int)uVar5 >> 4);
            uStack_180 = (uint)uStack_198;
            do {
              uVar5 = *puVar2 + uVar13;
              uVar10 = uVar9 << (0x18U - (char)uVar5 & 0x1f) | *param_2;
              if (7 < (int)uVar5) {
                uVar16 = (ulonglong)(uVar5 >> 3);
                uVar5 = uVar5 + (uVar5 >> 3) * -8;
                do {
                  cVar7 = (char)(uVar10 >> 0x10);
                  acStack_1b8[0] = cVar7;
                  (*(code *)*param_1)(param_1[1],acStack_1b8,1);
                  if (cVar7 == -1) {
                    acStack_1b8[0] = '\0';
                    (*(code *)*param_1)(param_1[1],acStack_1b8,1);
                  }
                  uVar10 = uVar10 << 8;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
                uVar13 = (uint)uStack_1b0;
                param_2 = puStack_1a0;
                uVar9 = uStack_180;
              }
              uStack_170 = uStack_170 - 1;
              *param_2 = uVar10;
              *puVar2 = uVar5;
            } while (uStack_170 != 0);
            uStack_170 = 0;
          }
          uVar5 = uStack_17c & 0xf;
        }
        lVar8 = lStack_178;
        puVar2 = puStack_190;
        iVar14 = iStack_1a8;
        uVar4 = 1;
        uVar9 = auStack_158[lStack_178];
        iVar12 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
        uVar13 = uVar9 - 1;
        if (-1 < (int)uVar9) {
          uVar13 = uVar9;
        }
        while (iVar12 = iVar12 >> 1, iVar12 != 0) {
          uVar4 = uVar4 + 1;
        }
        FUN_18042f570(param_1,param_2,puStack_190,
                      puStack_168 + (longlong)(int)((uint)uVar4 + uVar5 * 0x10) * 2);
        uVar9 = *puVar2 + (uint)uVar4;
        uVar13 = ((uint)(ushort)((1 << ((byte)uVar4 & 0x1f)) - 1) & uVar13 & 0xffff) <<
                 (0x18U - (char)uVar9 & 0x1f) | *puStack_1a0;
        if (7 < (int)uVar9) {
          uVar16 = (ulonglong)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            cVar7 = (char)(uVar13 >> 0x10);
            acStack_1b8[0] = cVar7;
            (*(code *)*param_1)(param_1[1],acStack_1b8,1);
            if (cVar7 == -1) {
              acStack_1b8[0] = '\0';
              (*(code *)*param_1)(param_1[1],acStack_1b8,1);
            }
            uVar13 = uVar13 << 8;
            uVar16 = uVar16 - 1;
            iVar14 = iStack_1a8;
          } while (uVar16 != 0);
        }
        iStack_1a8 = iVar14 + 1;
        uVar5 = (uint)uStack_188;
        lStack_178 = lVar8 + 1;
        lVar8 = (longlong)(int)uVar5;
        *puStack_1a0 = uVar13;
        *puStack_190 = uVar9;
        param_2 = puStack_1a0;
      } while (lStack_178 <= lVar8);
    }
    if (uVar5 != 0x3f) {
      uVar5 = (uint)uStack_1ae + *puStack_190;
      uVar9 = (uint)uStack_1ac << (0x18U - (char)uVar5 & 0x1f) | *param_2;
      if (7 < (int)uVar5) {
        uVar16 = (ulonglong)(uVar5 >> 3);
        uVar5 = uVar5 + (uVar5 >> 3) * -8;
        do {
          cVar7 = (char)(uVar9 >> 0x10);
          acStack_1b8[0] = cVar7;
          (*(code *)*param_1)(param_1[1],acStack_1b8,1);
          if (cVar7 == -1) {
            acStack_1b8[0] = '\0';
            (*(code *)*param_1)(param_1[1],acStack_1b8,1);
          }
          uVar9 = uVar9 << 8;
          uVar16 = uVar16 - 1;
          param_2 = puStack_1a0;
        } while (uVar16 != 0);
      }
      *param_2 = uVar9;
      *puStack_190 = uVar5;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804300b0(undefined8 *param_1,int param_2,int param_3,int param_4,longlong param_5)
void FUN_1804300b0(undefined8 *param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_6f8 [32];
  float *pfStack_6d8;
  undefined4 uStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  char acStack_6b8 [8];
  int iStack_6b0;
  uint uStack_6ac;
  int iStack_6a8;
  int iStack_6a4;
  int iStack_6a0;
  int iStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  int iStack_68c;
  int iStack_688;
  float fStack_684;
  undefined8 uStack_680;
  float afStack_678 [61];
  float afStack_584 [67];
  float afStack_478 [64];
  float afStack_378 [64];
  float afStack_278 [64];
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined1 uStack_173;
  undefined1 uStack_172;
  undefined1 uStack_171;
  undefined1 uStack_170;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined4 uStack_167;
  undefined2 uStack_163;
  undefined1 uStack_161;
  byte abStack_158 [64];
  byte abStack_118 [64];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_6f8;
  iStack_6b0 = param_3;
  iStack_69c = param_4;
  uStack_680 = param_1;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 - 1U < 4)) {
    lVar16 = 0;
    do {
      iVar14 = (*(int *)(&UNK_180a28fb0 + lVar16 * 4) * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28eb0 + lVar16 * 4);
      bVar2 = (&UNK_180995860)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fb4 + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28eb4 + lVar16 * 4);
      bVar2 = (&UNK_180995861)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fb8 + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28eb8 + lVar16 * 4);
      bVar2 = (&UNK_180995862)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fbc + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28ebc + lVar16 * 4);
      bVar2 = (&UNK_180995863)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fc0 + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28ec0 + lVar16 * 4);
      bVar2 = (&UNK_180995864)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fc4 + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28ec4 + lVar16 * 4);
      bVar2 = (&UNK_180995865)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fc8 + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28ec8 + lVar16 * 4);
      bVar2 = (&UNK_180995866)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28fcc + lVar16 * 4);
      abStack_118[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      iVar14 = *(int *)(&UNK_180a28ecc + lVar16 * 4);
      bVar2 = (&UNK_180995867)[lVar16];
      abStack_158[bVar2] = bVar8;
      iVar14 = (iVar14 * 0x14 + 0x32) / 100;
      if (iVar14 < 1) {
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)iVar14;
        if (0xff < iVar14) {
          bVar8 = 0xff;
        }
      }
      lVar16 = lVar16 + 8;
      abStack_118[bVar2] = bVar8;
    } while (lVar16 < 0x40);
    pfVar17 = (float *)&UNK_180a28e90;
    lVar16 = 0;
    do {
      fVar21 = *pfVar17;
      bVar8 = abStack_118[(byte)(&UNK_180995860)[lVar16]];
      bVar2 = (&UNK_180995861)[lVar16];
      bVar3 = abStack_158[bVar2];
      afStack_584[lVar16 + 3] =
           0.35355338 / ((float)abStack_158[(byte)(&UNK_180995860)[lVar16]] * fVar21);
      bVar2 = abStack_118[bVar2];
      bVar4 = (&UNK_180995862)[lVar16];
      afStack_678[lVar16] = 0.35355338 / ((float)bVar8 * fVar21);
      bVar8 = abStack_158[bVar4];
      afStack_584[lVar16 + 4] = 0.25489777 / ((float)bVar3 * fVar21);
      bVar3 = abStack_118[bVar4];
      bVar4 = (&UNK_180995863)[lVar16];
      afStack_678[lVar16 + 1] = 0.25489777 / ((float)bVar2 * fVar21);
      bVar2 = abStack_158[bVar4];
      afStack_584[lVar16 + 5] = 0.27059805 / ((float)bVar8 * fVar21);
      bVar8 = abStack_118[bVar4];
      bVar4 = (&UNK_180995864)[lVar16];
      afStack_678[lVar16 + 2] = 0.27059805 / ((float)bVar3 * fVar21);
      bVar3 = abStack_158[bVar4];
      afStack_584[lVar16 + 6] = 0.30067247 / ((float)bVar2 * fVar21);
      bVar2 = abStack_118[bVar4];
      bVar4 = (&UNK_180995865)[lVar16];
      afStack_678[lVar16 + 3] = 0.30067247 / ((float)bVar8 * fVar21);
      bVar8 = abStack_158[bVar4];
      afStack_584[lVar16 + 7] = 0.35355338 / ((float)bVar3 * fVar21);
      afStack_678[lVar16 + 4] = 0.35355338 / ((float)bVar2 * fVar21);
      bVar2 = abStack_118[bVar4];
      bVar3 = (&UNK_180995866)[lVar16];
      lVar1 = lVar16 + 8;
      pfVar17 = pfVar17 + 1;
      bVar4 = abStack_158[bVar3];
      afStack_584[lVar1] = 0.4499881 / ((float)bVar8 * fVar21);
      bVar8 = abStack_118[bVar3];
      bVar3 = (&UNK_180995867)[lVar16];
      (&fStack_684)[lVar1] = 0.4499881 / ((float)bVar2 * fVar21);
      bVar2 = abStack_158[bVar3];
      afStack_584[lVar16 + 9] = 0.6532815 / ((float)bVar4 * fVar21);
      bVar3 = abStack_118[bVar3];
      *(float *)((longlong)&uStack_680 + lVar1 * 4) = 0.6532815 / ((float)bVar8 * fVar21);
      afStack_584[lVar16 + 10] = 1.2814577 / ((float)bVar2 * fVar21);
      *(float *)((longlong)&uStack_680 + lVar1 * 4 + 4) = 1.2814577 / ((float)bVar3 * fVar21);
      lVar16 = lVar1;
    } while ((longlong)pfVar17 < 0x180a28eb0);
    uStack_178 = 0x1100c0ff;
    uStack_173 = (undefined1)((uint)param_3 >> 8);
    uStack_171 = (undefined1)((uint)param_2 >> 8);
    uStack_174 = 8;
    uStack_172 = (undefined1)param_3;
    uStack_170 = (undefined1)param_2;
    uStack_16f = 0x110103;
    uStack_16b = 0x3011102;
    uStack_167 = 0xc4ff0111;
    uStack_163 = 0xa201;
    uStack_161 = 0;
    (*(code *)*param_1)(param_1[1],&UNK_180a28e70,0x19);
    (*(code *)*param_1)(param_1[1],abStack_158,0x40);
    acStack_6b8[0] = '\x01';
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
    (*(code *)*param_1)(param_1[1],abStack_118,0x40);
    (*(code *)*param_1)(param_1[1],&uStack_178,0x18);
    (*(code *)*param_1)(param_1[1],&UNK_180a29171,0x10);
    (*(code *)*param_1)(param_1[1],&UNK_180a28230,0xc);
    acStack_6b8[0] = '\x10';
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
    (*(code *)*param_1)(param_1[1],&UNK_180a29159,0x10);
    (*(code *)*param_1)(param_1[1],&UNK_180a290b0,0xa2);
    acStack_6b8[0] = '\x01';
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
    (*(code *)*param_1)(param_1[1],&UNK_180a28241,0x10);
    (*(code *)*param_1)(param_1[1],&UNK_180a28230,0xc);
    acStack_6b8[0] = '\x11';
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
    (*(code *)*param_1)(param_1[1],&UNK_180a28219,0x10);
    (*(code *)*param_1)(param_1[1],&UNK_180a28170,0xa2);
    (*(code *)*param_1)(param_1[1],&UNK_180a28e60);
    iVar14 = 0;
    uStack_698 = 0;
    uStack_694 = 0;
    uStack_690 = 0;
    if (2 < param_4) {
      iVar14 = 2;
    }
    uStack_6ac = 0;
    iStack_6a4 = 0;
    bVar5 = 2 < param_4;
    iStack_6a8 = 0;
    iVar15 = iStack_6b0;
    if (0 < iStack_6b0) {
      do {
        if (0 < param_2) {
          iStack_68c = 8;
          do {
            param_1 = uStack_680;
            iVar6 = iStack_68c;
            lVar16 = 0;
            fStack_684 = (float)(iStack_6a4 + 8);
            for (iVar20 = iStack_6a4; iVar20 < (int)fStack_684; iVar20 = iVar20 + 1) {
              iVar18 = iVar20;
              if (iVar15 <= iVar20) {
                iVar18 = iVar15 + -1;
              }
              if (_DAT_180c8ec8c != 0) {
                iVar18 = (iVar15 - iVar18) + -1;
              }
              iVar18 = iVar18 * param_2;
              iVar15 = iStack_68c + -8;
              if (iVar15 < iStack_68c) {
                if (3 < iStack_68c - iVar15) {
                  iStack_688 = iStack_68c + -3;
                  iVar19 = iStack_68c + -6;
                  do {
                    iStack_6a0 = param_2 + -1;
                    iVar10 = iVar15;
                    if (param_2 <= iVar15) {
                      iVar10 = iStack_6a0;
                    }
                    iVar9 = (iVar10 + iVar18) * iStack_69c;
                    fVar23 = (float)*(byte *)(iVar9 + param_5);
                    fVar21 = (float)*(byte *)((int)(iVar9 + (uint)bVar5) + param_5);
                    iVar10 = iVar19 + -1;
                    if (param_2 <= iVar19 + -1) {
                      iVar10 = iStack_6a0;
                    }
                    iVar10 = (iVar10 + iVar18) * iStack_69c;
                    fVar22 = (float)*(byte *)((iVar9 + iVar14) + param_5);
                    bVar8 = *(byte *)(iVar10 + param_5);
                    afStack_478[lVar16] = (fVar23 * 0.299 + fVar21 * 0.587 + fVar22 * 0.114) - 128.0
                    ;
                    afStack_378[lVar16] = fVar22 * 0.5 - (fVar23 * 0.16874 + fVar21 * 0.33126);
                    afStack_278[lVar16] = (fVar23 * 0.5 - fVar21 * 0.41869) - fVar22 * 0.08131;
                    fVar22 = (float)bVar8;
                    fVar21 = (float)*(byte *)((int)(iVar10 + (uint)bVar5) + param_5);
                    fVar23 = (float)*(byte *)((iVar10 + iVar14) + param_5);
                    afStack_478[lVar16 + 1] =
                         (fVar22 * 0.299 + fVar21 * 0.587 + fVar23 * 0.114) - 128.0;
                    afStack_378[lVar16 + 1] = fVar23 * 0.5 - (fVar22 * 0.16874 + fVar21 * 0.33126);
                    afStack_278[lVar16 + 1] = (fVar22 * 0.5 - fVar21 * 0.41869) - fVar23 * 0.08131;
                    iVar10 = iVar19;
                    if (param_2 <= iVar19) {
                      iVar10 = iStack_6a0;
                    }
                    iVar9 = (iVar10 + iVar18) * iStack_69c;
                    fVar23 = (float)*(byte *)(iVar9 + param_5);
                    fVar21 = (float)*(byte *)((int)(iVar9 + (uint)bVar5) + param_5);
                    iVar10 = iVar19 + 1;
                    if (param_2 <= iVar19 + 1) {
                      iVar10 = param_2 + -1;
                    }
                    iVar10 = (iVar10 + iVar18) * iStack_69c;
                    fVar22 = (float)*(byte *)((iVar9 + iVar14) + param_5);
                    bVar8 = *(byte *)(iVar10 + param_5);
                    afStack_478[lVar16 + 2] =
                         (fVar23 * 0.299 + fVar21 * 0.587 + fVar22 * 0.114) - 128.0;
                    afStack_378[lVar16 + 2] = fVar22 * 0.5 - (fVar23 * 0.16874 + fVar21 * 0.33126);
                    afStack_278[lVar16 + 2] = (fVar23 * 0.5 - fVar21 * 0.41869) - fVar22 * 0.08131;
                    fVar22 = (float)bVar8;
                    fVar21 = (float)*(byte *)((int)(iVar10 + (uint)bVar5) + param_5);
                    fVar23 = (float)*(byte *)((iVar10 + iVar14) + param_5);
                    afStack_478[lVar16 + 3] =
                         (fVar22 * 0.299 + fVar21 * 0.587 + fVar23 * 0.114) - 128.0;
                    afStack_378[lVar16 + 3] = fVar23 * 0.5 - (fVar22 * 0.16874 + fVar21 * 0.33126);
                    iVar15 = iVar15 + 4;
                    iVar19 = iVar19 + 4;
                    afStack_278[lVar16 + 3] = (fVar22 * 0.5 - fVar21 * 0.41869) - fVar23 * 0.08131;
                    lVar16 = lVar16 + 4;
                    param_4 = iStack_69c;
                  } while (iVar15 < iStack_688);
                }
                for (; iVar15 < iStack_68c; iVar15 = iVar15 + 1) {
                  iVar19 = iVar15;
                  if (param_2 <= iVar15) {
                    iVar19 = param_2 + -1;
                  }
                  iVar19 = (iVar19 + iVar18) * param_4;
                  fVar22 = (float)*(byte *)(iVar19 + param_5);
                  fVar21 = (float)*(byte *)((int)(iVar19 + (uint)bVar5) + param_5);
                  fVar23 = (float)*(byte *)((iVar19 + iVar14) + param_5);
                  afStack_478[lVar16] = (fVar22 * 0.299 + fVar21 * 0.587 + fVar23 * 0.114) - 128.0;
                  afStack_378[lVar16] = fVar23 * 0.5 - (fVar22 * 0.16874 + fVar21 * 0.33126);
                  afStack_278[lVar16] = (fVar22 * 0.5 - fVar21 * 0.41869) - fVar23 * 0.08131;
                  lVar16 = lVar16 + 1;
                }
              }
              iVar15 = iStack_6b0;
            }
            puStack_6c0 = &UNK_180a28a60;
            puStack_6c8 = &UNK_180a28660;
            uStack_6d0 = uStack_698;
            pfStack_6d8 = afStack_584 + 3;
            uStack_698 = FUN_18042f7d0(uStack_680,&uStack_6ac,&iStack_6a8,afStack_478);
            puStack_6c0 = &UNK_180a28260;
            puStack_6c8 = &UNK_180a27d70;
            uStack_6d0 = uStack_694;
            pfStack_6d8 = afStack_678;
            uStack_694 = FUN_18042f7d0(param_1,&uStack_6ac,&iStack_6a8,afStack_378);
            puStack_6c0 = &UNK_180a28260;
            puStack_6c8 = &UNK_180a27d70;
            uStack_6d0 = uStack_690;
            pfStack_6d8 = afStack_678;
            uStack_690 = FUN_18042f7d0(param_1,&uStack_6ac,&iStack_6a8,afStack_278);
            iStack_68c = iVar6 + 8;
            iVar15 = iStack_6b0;
          } while (iVar6 < param_2);
        }
        iStack_6a4 = iStack_6a4 + 8;
      } while (iStack_6a4 < iVar15);
    }
    uVar7 = iStack_6a8 + 7;
    uVar13 = 0x7f << (0x18U - (char)uVar7 & 0x1f) | uStack_6ac;
    if (7 < (int)uVar7) {
      uVar12 = (ulonglong)(uVar7 >> 3);
      do {
        cVar11 = (char)(uVar13 >> 0x10);
        acStack_6b8[0] = cVar11;
        (*(code *)*param_1)(param_1[1],acStack_6b8,1);
        if (cVar11 == -1) {
          acStack_6b8[0] = '\0';
          (*(code *)*param_1)(param_1[1],acStack_6b8,1);
        }
        uVar13 = uVar13 << 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    acStack_6b8[0] = -1;
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
    acStack_6b8[0] = -0x27;
    (*(code *)*param_1)(param_1[1],acStack_6b8,1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_6f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



