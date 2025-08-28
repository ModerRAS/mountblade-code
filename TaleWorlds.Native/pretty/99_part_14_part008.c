#include "TaleWorlds.Native.Split.h"

// 99_part_14_part008.c - 4 个函数

// 函数: void FUN_1808edd90(byte *param_1,byte *param_2)
void FUN_1808edd90(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int16_t uVar6;
  uint uVar7;
  byte abStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)abStack_28;
  if ((*param_1 & 1) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 1) {
      if (param_1[0x11] == 0) goto LAB_1808ee082;
      param_2[1] = 0x21;
      bVar1 = param_1[0x10];
      abStack_28[0] = 0;
      abStack_28[1] = 0;
      abStack_28[2] = 0;
      abStack_28[3] = 0;
      abStack_28[4] = 0;
      abStack_28[5] = 0;
      abStack_28[6] = 0;
      abStack_28[7] = 0;
      abStack_28[8] = 0;
      abStack_28[9] = 0;
      uVar7 = 1 << (bVar1 & 0x1f);
      uVar6 = (int16_t)uVar7;
      uVar3 = bVar1 + 1;
      abStack_28[bVar1] = param_1[0x11] - 1;
      if (uVar3 < 10) {
        pbVar5 = abStack_28 + uVar3;
        do {
          *pbVar5 = abStack_28[bVar1];
          pbVar5 = pbVar5 + 1;
          uVar7 = uVar7 & 0xffff | 1 << (uVar3 & 0x1f);
          uVar6 = (int16_t)uVar7;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 10);
      }
      param_2[2] = (byte)uVar6;
      param_2[3] = (byte)((ushort)uVar6 >> 8);
      lVar4 = (((((((((ulonglong)(abStack_28[9] & 7) << 3 | (ulonglong)(abStack_28[8] & 7)) << 3 |
                    (ulonglong)(abStack_28[7] & 7)) << 3 | (ulonglong)(abStack_28[6] & 7)) << 3 |
                  (ulonglong)(abStack_28[5] & 7)) << 3 | (ulonglong)(abStack_28[4] & 7)) << 3 |
                (ulonglong)(abStack_28[3] & 7)) << 3 | (ulonglong)(abStack_28[2] & 7)) << 3 |
              (ulonglong)(abStack_28[1] & 7)) << 3;
      param_2[4] = (byte)lVar4 | abStack_28[0] & 7;
      param_2[5] = (byte)((ulonglong)lVar4 >> 8);
      param_2[6] = (byte)((ulonglong)lVar4 >> 0x10);
      param_2[7] = (byte)((ulonglong)lVar4 >> 0x18);
      param_2[9] = 0;
      param_2[8] = 0;
    }
    else if (iVar2 == 2) {
      if (param_1[0x12] == 0) goto LAB_1808ee082;
      param_2[1] = 0x25;
      uVar7 = 1 << (param_1[0x10] & 0x1f) & 0xffffU | 1 << (param_1[0x11] & 0x1f);
      param_2[2] = (byte)uVar7;
      param_2[3] = (byte)(uVar7 >> 8);
      param_2[4] = param_1[0x12] - 1;
    }
    else if (iVar2 == 3) {
      if ((param_1[0x11] == 0) || (param_1[0x12] == 0)) {
LAB_1808ee082:
        param_2[1] = 5;
      }
      else {
        param_2[1] = 0x26;
        bVar1 = param_1[0x10];
        abStack_28[0] = 0;
        abStack_28[1] = 0;
        abStack_28[2] = 0;
        abStack_28[3] = 0;
        abStack_28[4] = 0;
        abStack_28[5] = 0;
        abStack_28[6] = 0;
        abStack_28[7] = 0;
        abStack_28[8] = 0;
        abStack_28[9] = 0;
        uVar7 = 1 << (bVar1 & 0x1f);
        uVar6 = (int16_t)uVar7;
        uVar3 = bVar1 + 1;
        abStack_28[bVar1] = param_1[0x11] - 1;
        if (uVar3 < 10) {
          pbVar5 = abStack_28 + uVar3;
          do {
            *pbVar5 = abStack_28[bVar1];
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 & 0xffff | 1 << (uVar3 & 0x1f);
            uVar6 = (int16_t)uVar7;
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 10);
        }
        param_2[2] = (byte)uVar6;
        param_2[3] = (byte)((ushort)uVar6 >> 8);
        lVar4 = (((((((((ulonglong)(abStack_28[9] & 7) << 3 | (ulonglong)(abStack_28[8] & 7)) << 3 |
                      (ulonglong)(abStack_28[7] & 7)) << 3 | (ulonglong)(abStack_28[6] & 7)) << 3 |
                    (ulonglong)(abStack_28[5] & 7)) << 3 | (ulonglong)(abStack_28[4] & 7)) << 3 |
                  (ulonglong)(abStack_28[3] & 7)) << 3 | (ulonglong)(abStack_28[2] & 7)) << 3 |
                (ulonglong)(abStack_28[1] & 7)) << 3;
        param_2[4] = (byte)lVar4 | abStack_28[0] & 7;
        param_2[5] = (byte)((ulonglong)lVar4 >> 8);
        param_2[6] = (byte)((ulonglong)lVar4 >> 0x10);
        param_2[7] = (byte)((ulonglong)lVar4 >> 0x18);
        param_2[9] = 0;
        param_2[8] = 0;
        param_2[10] = param_1[0x12];
      }
    }
    else if (iVar2 == 0) goto LAB_1808ee082;
  }
  if ((*param_1 & 2) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 1) {
      if (param_1[0x49] != 0) {
        param_2[0xc] = 0x21;
        bVar1 = param_1[0x48];
        abStack_28[0] = 0;
        abStack_28[1] = 0;
        abStack_28[2] = 0;
        abStack_28[3] = 0;
        abStack_28[4] = 0;
        abStack_28[5] = 0;
        abStack_28[6] = 0;
        abStack_28[7] = 0;
        uVar7 = 1 << (bVar1 & 0x1f);
        uVar6 = (int16_t)uVar7;
        abStack_28[8] = 0;
        abStack_28[9] = 0;
        uVar3 = bVar1 + 1;
        abStack_28[bVar1] = param_1[0x49] - 1;
        if (uVar3 < 10) {
          pbVar5 = abStack_28 + uVar3;
          do {
            *pbVar5 = abStack_28[bVar1];
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 & 0xffff | 1 << (uVar3 & 0x1f);
            uVar6 = (int16_t)uVar7;
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 10);
        }
        param_2[0xd] = (byte)uVar6;
        param_2[0xe] = (byte)((ushort)uVar6 >> 8);
        lVar4 = (((((((((ulonglong)(abStack_28[9] & 7) << 3 | (ulonglong)(abStack_28[8] & 7)) << 3 |
                      (ulonglong)(abStack_28[7] & 7)) << 3 | (ulonglong)(abStack_28[6] & 7)) << 3 |
                    (ulonglong)(abStack_28[5] & 7)) << 3 | (ulonglong)(abStack_28[4] & 7)) << 3 |
                  (ulonglong)(abStack_28[3] & 7)) << 3 | (ulonglong)(abStack_28[2] & 7)) << 3 |
                (ulonglong)(abStack_28[1] & 7)) << 3;
        param_2[0xf] = (byte)lVar4 | abStack_28[0] & 7;
        param_2[0x10] = (byte)((ulonglong)lVar4 >> 8);
        param_2[0x11] = (byte)((ulonglong)lVar4 >> 0x10);
        param_2[0x12] = (byte)((ulonglong)lVar4 >> 0x18);
        param_2[0x14] = 0;
        param_2[0x13] = 0;
        goto LAB_1808ee377;
      }
    }
    else if (iVar2 == 2) {
      if (param_1[0x4a] != 0) {
        param_2[0xc] = 0x25;
        uVar7 = 1 << (param_1[0x48] & 0x1f) & 0xffffU | 1 << (param_1[0x49] & 0x1f);
        param_2[0xd] = (byte)uVar7;
        param_2[0xe] = (byte)(uVar7 >> 8);
        param_2[0xf] = param_1[0x4a] - 1;
        goto LAB_1808ee377;
      }
    }
    else if (iVar2 == 3) {
      if ((param_1[0x49] != 0) && (param_1[0x4a] != 0)) {
        param_2[0xc] = 0x26;
        bVar1 = param_1[0x48];
        abStack_28[0] = 0;
        abStack_28[1] = 0;
        abStack_28[2] = 0;
        abStack_28[3] = 0;
        abStack_28[4] = 0;
        abStack_28[5] = 0;
        abStack_28[6] = 0;
        abStack_28[7] = 0;
        uVar7 = 1 << (bVar1 & 0x1f);
        uVar6 = (int16_t)uVar7;
        abStack_28[8] = 0;
        abStack_28[9] = 0;
        uVar3 = bVar1 + 1;
        abStack_28[bVar1] = param_1[0x49] - 1;
        if (uVar3 < 10) {
          pbVar5 = abStack_28 + uVar3;
          do {
            *pbVar5 = abStack_28[bVar1];
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 & 0xffff | 1 << (uVar3 & 0x1f);
            uVar6 = (int16_t)uVar7;
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 10);
        }
        param_2[0xd] = (byte)uVar6;
        param_2[0xe] = (byte)((ushort)uVar6 >> 8);
        lVar4 = (((((((((ulonglong)(abStack_28[9] & 7) << 3 | (ulonglong)(abStack_28[8] & 7)) << 3 |
                      (ulonglong)(abStack_28[7] & 7)) << 3 | (ulonglong)(abStack_28[6] & 7)) << 3 |
                    (ulonglong)(abStack_28[5] & 7)) << 3 | (ulonglong)(abStack_28[4] & 7)) << 3 |
                  (ulonglong)(abStack_28[3] & 7)) << 3 | (ulonglong)(abStack_28[2] & 7)) << 3 |
                (ulonglong)(abStack_28[1] & 7)) << 3;
        param_2[0xf] = (byte)lVar4 | abStack_28[0] & 7;
        param_2[0x10] = (byte)((ulonglong)lVar4 >> 8);
        param_2[0x11] = (byte)((ulonglong)lVar4 >> 0x10);
        param_2[0x12] = (byte)((ulonglong)lVar4 >> 0x18);
        param_2[0x14] = 0;
        param_2[0x13] = 0;
        param_2[0x15] = param_1[0x4a];
        goto LAB_1808ee377;
      }
    }
    else if (iVar2 != 0) goto LAB_1808ee377;
    param_2[0xc] = 5;
  }
LAB_1808ee377:
  *param_2 = *param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)abStack_28);
}






// 函数: void FUN_1808eddbc(longlong param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_1808eddbc(longlong param_1,longlong param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  longlong unaff_RBP;
  byte bVar9;
  uint in_R10D;
  int16_t uVar10;
  uint uVar11;
  
  bVar9 = (byte)in_R10D;
  if (in_EAX == 1) {
    if (*(byte *)(param_1 + 0x11) == bVar9) goto LAB_1808ee082;
    *(int8_t *)(param_2 + 1) = 0x21;
    bVar1 = *(byte *)(param_1 + 0x10);
    *(uint64_t *)(unaff_RBP + -0x20) = 0;
    pcVar8 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar1);
    *(int16_t *)(unaff_RBP + -0x18) = 0;
    uVar11 = in_R10D | 1 << (bVar1 & 0x1f);
    uVar10 = (int16_t)uVar11;
    uVar5 = bVar1 + 1;
    *pcVar8 = param_3[0x11] - 1;
    if (uVar5 < 10) {
      pcVar7 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar5);
      do {
        *pcVar7 = *pcVar8;
        pcVar7 = pcVar7 + 1;
        uVar11 = uVar11 & 0xffff | 1 << (uVar5 & 0x1f);
        uVar10 = (int16_t)uVar11;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 10);
    }
    bVar1 = *(byte *)(unaff_RBP + -0x18);
    bVar2 = *(byte *)(unaff_RBP + -0x17);
    param_4[2] = (byte)uVar10;
    bVar3 = *(byte *)(unaff_RBP + -0x19);
    param_4[3] = (byte)((ushort)uVar10 >> 8);
    lVar6 = (((((((((ulonglong)(bVar2 & 7) << 3 | (ulonglong)(bVar1 & 7)) << 3 |
                  (ulonglong)(bVar3 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7)) << 3
                | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
               (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
              (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
             (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
            (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
    param_4[4] = (byte)lVar6 | *(byte *)(unaff_RBP + -0x20) & 7;
    param_4[5] = (byte)((ulonglong)lVar6 >> 8);
    param_4[6] = (byte)((ulonglong)lVar6 >> 0x10);
    param_4[7] = (byte)((ulonglong)lVar6 >> 0x18);
    param_4[9] = 0;
    param_4[8] = 0;
  }
  else if (in_EAX == 2) {
    if (*(byte *)(param_1 + 0x12) == bVar9) goto LAB_1808ee082;
    *(int8_t *)(param_2 + 1) = 0x25;
    uVar5 = (in_R10D | 1 << (*(byte *)(param_1 + 0x10) & 0x1f)) & 0xffff |
            1 << (param_3[0x11] & 0x1f);
    param_4[2] = (byte)uVar5;
    param_4[3] = (byte)(uVar5 >> 8);
    param_4[4] = param_3[0x12] - 1;
  }
  else if (in_EAX == 3) {
    if ((*(byte *)(param_1 + 0x11) == bVar9) || (*(byte *)(param_1 + 0x12) == bVar9)) {
LAB_1808ee082:
      *(int8_t *)(param_2 + 1) = 5;
    }
    else {
      *(int8_t *)(param_2 + 1) = 0x26;
      bVar1 = *(byte *)(param_1 + 0x10);
      *(uint64_t *)(unaff_RBP + -0x20) = 0;
      pcVar8 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar1);
      *(int16_t *)(unaff_RBP + -0x18) = 0;
      uVar11 = in_R10D | 1 << (bVar1 & 0x1f);
      uVar10 = (int16_t)uVar11;
      uVar5 = bVar1 + 1;
      *pcVar8 = param_3[0x11] - 1;
      if (uVar5 < 10) {
        pcVar7 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar5);
        do {
          *pcVar7 = *pcVar8;
          pcVar7 = pcVar7 + 1;
          uVar11 = uVar11 & 0xffff | 1 << (uVar5 & 0x1f);
          uVar10 = (int16_t)uVar11;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 10);
      }
      bVar1 = *(byte *)(unaff_RBP + -0x18);
      bVar2 = *(byte *)(unaff_RBP + -0x17);
      param_4[2] = (byte)uVar10;
      bVar3 = *(byte *)(unaff_RBP + -0x19);
      param_4[3] = (byte)((ushort)uVar10 >> 8);
      lVar6 = (((((((((ulonglong)(bVar2 & 7) << 3 | (ulonglong)(bVar1 & 7)) << 3 |
                    (ulonglong)(bVar3 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7)) <<
                   3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
                 (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
                (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
               (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
              (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
      param_4[4] = (byte)lVar6 | *(byte *)(unaff_RBP + -0x20) & 7;
      param_4[5] = (byte)((ulonglong)lVar6 >> 8);
      param_4[6] = (byte)((ulonglong)lVar6 >> 0x10);
      param_4[7] = (byte)((ulonglong)lVar6 >> 0x18);
      param_4[9] = 0;
      param_4[8] = 0;
      param_4[10] = param_3[0x12];
    }
  }
  else if (in_EAX == 0) goto LAB_1808ee082;
  if ((*param_3 & 2) != 0) {
    iVar4 = *(int *)(param_3 + 0x40);
    if (iVar4 == 1) {
      if (param_3[0x49] != bVar9) {
        param_4[0xc] = 0x21;
        bVar9 = param_3[0x48];
        *(uint64_t *)(unaff_RBP + -0x20) = 0;
        uVar11 = in_R10D | 1 << (bVar9 & 0x1f);
        uVar10 = (int16_t)uVar11;
        *(int16_t *)(unaff_RBP + -0x18) = 0;
        pcVar8 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar9);
        uVar5 = bVar9 + 1;
        *pcVar8 = param_3[0x49] - 1;
        if (uVar5 < 10) {
          pcVar7 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar5);
          do {
            *pcVar7 = *pcVar8;
            pcVar7 = pcVar7 + 1;
            uVar11 = uVar11 & 0xffff | 1 << (uVar5 & 0x1f);
            uVar10 = (int16_t)uVar11;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 10);
        }
        bVar9 = *(byte *)(unaff_RBP + -0x18);
        bVar1 = *(byte *)(unaff_RBP + -0x17);
        param_4[0xd] = (byte)uVar10;
        bVar2 = *(byte *)(unaff_RBP + -0x19);
        param_4[0xe] = (byte)((ushort)uVar10 >> 8);
        lVar6 = (((((((((ulonglong)(bVar1 & 7) << 3 | (ulonglong)(bVar9 & 7)) << 3 |
                      (ulonglong)(bVar2 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7))
                     << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
                   (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
                  (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
                 (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
                (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
        param_4[0xf] = (byte)lVar6 | *(byte *)(unaff_RBP + -0x20) & 7;
        param_4[0x10] = (byte)((ulonglong)lVar6 >> 8);
        param_4[0x11] = (byte)((ulonglong)lVar6 >> 0x10);
        param_4[0x12] = (byte)((ulonglong)lVar6 >> 0x18);
        param_4[0x14] = 0;
        param_4[0x13] = 0;
        goto LAB_1808ee377;
      }
    }
    else if (iVar4 == 2) {
      if (param_3[0x4a] != bVar9) {
        param_4[0xc] = 0x25;
        uVar5 = (in_R10D | 1 << (param_3[0x48] & 0x1f)) & 0xffff | 1 << (param_3[0x49] & 0x1f);
        param_4[0xd] = (byte)uVar5;
        param_4[0xe] = (byte)(uVar5 >> 8);
        param_4[0xf] = param_3[0x4a] - 1;
        goto LAB_1808ee377;
      }
    }
    else if (iVar4 == 3) {
      if ((param_3[0x49] != bVar9) && (param_3[0x4a] != bVar9)) {
        param_4[0xc] = 0x26;
        bVar9 = param_3[0x48];
        *(uint64_t *)(unaff_RBP + -0x20) = 0;
        uVar11 = in_R10D | 1 << (bVar9 & 0x1f);
        uVar10 = (int16_t)uVar11;
        *(int16_t *)(unaff_RBP + -0x18) = 0;
        pcVar8 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar9);
        uVar5 = bVar9 + 1;
        *pcVar8 = param_3[0x49] - 1;
        if (uVar5 < 10) {
          pcVar7 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar5);
          do {
            *pcVar7 = *pcVar8;
            pcVar7 = pcVar7 + 1;
            uVar11 = uVar11 & 0xffff | 1 << (uVar5 & 0x1f);
            uVar10 = (int16_t)uVar11;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 10);
        }
        bVar9 = *(byte *)(unaff_RBP + -0x18);
        bVar1 = *(byte *)(unaff_RBP + -0x17);
        param_4[0xd] = (byte)uVar10;
        bVar2 = *(byte *)(unaff_RBP + -0x19);
        param_4[0xe] = (byte)((ushort)uVar10 >> 8);
        lVar6 = (((((((((ulonglong)(bVar1 & 7) << 3 | (ulonglong)(bVar9 & 7)) << 3 |
                      (ulonglong)(bVar2 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7))
                     << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
                   (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
                  (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
                 (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
                (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
        param_4[0xf] = (byte)lVar6 | *(byte *)(unaff_RBP + -0x20) & 7;
        param_4[0x10] = (byte)((ulonglong)lVar6 >> 8);
        param_4[0x11] = (byte)((ulonglong)lVar6 >> 0x10);
        param_4[0x12] = (byte)((ulonglong)lVar6 >> 0x18);
        param_4[0x14] = 0;
        param_4[0x13] = 0;
        param_4[0x15] = param_3[0x4a];
        goto LAB_1808ee377;
      }
    }
    else if (iVar4 != 0) goto LAB_1808ee377;
    param_4[0xc] = 5;
  }
LAB_1808ee377:
  *param_4 = *param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808ee08b(uint64_t param_1,uint64_t param_2,byte *param_3,byte *param_4)
void FUN_1808ee08b(uint64_t param_1,uint64_t param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong unaff_RBP;
  byte bVar7;
  int16_t uVar8;
  uint in_R10D;
  char *pcVar10;
  uint uVar9;
  
  if ((*param_3 & 2) != 0) {
    iVar3 = *(int *)(param_3 + 0x40);
    bVar7 = (byte)in_R10D;
    if (iVar3 == 1) {
      if (param_3[0x49] != bVar7) {
        param_4[0xc] = 0x21;
        bVar7 = param_3[0x48];
        *(uint64_t *)(unaff_RBP + -0x20) = 0;
        uVar9 = in_R10D | 1 << (bVar7 & 0x1f);
        uVar8 = (int16_t)uVar9;
        *(int16_t *)(unaff_RBP + -0x18) = 0;
        pcVar10 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar7);
        uVar4 = bVar7 + 1;
        *pcVar10 = param_3[0x49] - 1;
        if (uVar4 < 10) {
          pcVar6 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar4);
          do {
            *pcVar6 = *pcVar10;
            pcVar6 = pcVar6 + 1;
            uVar9 = uVar9 & 0xffff | 1 << (uVar4 & 0x1f);
            uVar8 = (int16_t)uVar9;
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < 10);
        }
        bVar7 = *(byte *)(unaff_RBP + -0x18);
        bVar1 = *(byte *)(unaff_RBP + -0x17);
        param_4[0xd] = (byte)uVar8;
        bVar2 = *(byte *)(unaff_RBP + -0x19);
        param_4[0xe] = (byte)((ushort)uVar8 >> 8);
        lVar5 = (((((((((ulonglong)(bVar1 & 7) << 3 | (ulonglong)(bVar7 & 7)) << 3 |
                      (ulonglong)(bVar2 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7))
                     << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
                   (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
                  (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
                 (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
                (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
        param_4[0xf] = (byte)lVar5 | *(byte *)(unaff_RBP + -0x20) & 7;
        param_4[0x10] = (byte)((ulonglong)lVar5 >> 8);
        param_4[0x11] = (byte)((ulonglong)lVar5 >> 0x10);
        param_4[0x12] = (byte)((ulonglong)lVar5 >> 0x18);
        param_4[0x14] = 0;
        param_4[0x13] = 0;
        goto LAB_1808ee377;
      }
    }
    else if (iVar3 == 2) {
      if (param_3[0x4a] != bVar7) {
        param_4[0xc] = 0x25;
        uVar4 = (in_R10D | 1 << (param_3[0x48] & 0x1f)) & 0xffff | 1 << (param_3[0x49] & 0x1f);
        param_4[0xd] = (byte)uVar4;
        param_4[0xe] = (byte)(uVar4 >> 8);
        param_4[0xf] = param_3[0x4a] - 1;
        goto LAB_1808ee377;
      }
    }
    else if (iVar3 == 3) {
      if ((param_3[0x49] != bVar7) && (param_3[0x4a] != bVar7)) {
        param_4[0xc] = 0x26;
        bVar7 = param_3[0x48];
        *(uint64_t *)(unaff_RBP + -0x20) = 0;
        uVar9 = in_R10D | 1 << (bVar7 & 0x1f);
        uVar8 = (int16_t)uVar9;
        *(int16_t *)(unaff_RBP + -0x18) = 0;
        pcVar10 = (char *)(unaff_RBP + -0x20 + (ulonglong)bVar7);
        uVar4 = bVar7 + 1;
        *pcVar10 = param_3[0x49] - 1;
        if (uVar4 < 10) {
          pcVar6 = (char *)(unaff_RBP + -0x20 + (ulonglong)uVar4);
          do {
            *pcVar6 = *pcVar10;
            pcVar6 = pcVar6 + 1;
            uVar9 = uVar9 & 0xffff | 1 << (uVar4 & 0x1f);
            uVar8 = (int16_t)uVar9;
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < 10);
        }
        bVar7 = *(byte *)(unaff_RBP + -0x18);
        bVar1 = *(byte *)(unaff_RBP + -0x17);
        param_4[0xd] = (byte)uVar8;
        bVar2 = *(byte *)(unaff_RBP + -0x19);
        param_4[0xe] = (byte)((ushort)uVar8 >> 8);
        lVar5 = (((((((((ulonglong)(bVar1 & 7) << 3 | (ulonglong)(bVar7 & 7)) << 3 |
                      (ulonglong)(bVar2 & 7)) << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1a) & 7))
                     << 3 | (ulonglong)(*(byte *)(unaff_RBP + -0x1b) & 7)) << 3 |
                   (ulonglong)(*(byte *)(unaff_RBP + -0x1c) & 7)) << 3 |
                  (ulonglong)(*(byte *)(unaff_RBP + -0x1d) & 7)) << 3 |
                 (ulonglong)(*(byte *)(unaff_RBP + -0x1e) & 7)) << 3 |
                (ulonglong)(*(byte *)(unaff_RBP + -0x1f) & 7)) << 3;
        param_4[0xf] = (byte)lVar5 | *(byte *)(unaff_RBP + -0x20) & 7;
        param_4[0x10] = (byte)((ulonglong)lVar5 >> 8);
        param_4[0x11] = (byte)((ulonglong)lVar5 >> 0x10);
        param_4[0x12] = (byte)((ulonglong)lVar5 >> 0x18);
        param_4[0x14] = 0;
        param_4[0x13] = 0;
        param_4[0x15] = param_3[0x4a];
        goto LAB_1808ee377;
      }
    }
    else if (iVar3 != 0) goto LAB_1808ee377;
    param_4[0xc] = 5;
  }
LAB_1808ee377:
  *param_4 = *param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808ee390(uint64_t param_1)
void FUN_1808ee390(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x78);
}



uint64_t FUN_1808ee3e0(int32_t param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  char *apcStackX_18 [2];
  
  if (system_data_f818 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (float *)0x0) {
    return 0x80920001;
  }
  iVar2 = FUN_1808f6cb0();
  if (iVar2 != 0) {
    return 0x809200ff;
  }
  iVar2 = func_0x0001808f0200(param_1);
  if (iVar2 < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  iVar2 = func_0x0001808f0760(param_1,apcStackX_18,0);
  if (iVar2 != 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  if ((*apcStackX_18[0] != '\0') && (*(longlong *)(apcStackX_18[0] + 0x160) != 0)) {
    *param_2 = (float)*(uint *)(apcStackX_18[0] + 0x148) / 100.0;
    *(int16_t *)(param_2 + 1) = *(int16_t *)(apcStackX_18[0] + 0x14c);
    *(int16_t *)((longlong)param_2 + 6) = *(int16_t *)(apcStackX_18[0] + 0x14e);
    *(char *)(param_2 + 2) = apcStackX_18[0][0x150];
    *(char *)((longlong)param_2 + 9) = apcStackX_18[0][0x151];
    cVar1 = apcStackX_18[0][1];
    *(int8_t *)(param_2 + 3) = 1;
    *(char *)((longlong)param_2 + 0xb) = cVar1;
    func_0x0001808f6ce0();
    return 0;
  }
  *(char *)((longlong)param_2 + 0xb) = apcStackX_18[0][1];
  func_0x0001808f6ce0();
  return 0;
}



uint64_t FUN_1808ee530(int32_t param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *apcStackX_18 [2];
  
  if (system_data_f818 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (int *)0x0) {
    return 0x80920001;
  }
  iVar2 = FUN_1808f6cb0();
  if (iVar2 != 0) {
    return 0x809200ff;
  }
  iVar2 = func_0x0001808f0200(param_1);
  if (iVar2 < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  iVar2 = func_0x0001808f0760(param_1,apcStackX_18,0);
  if (iVar2 != 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  if (*apcStackX_18[0] != '\0') {
    cVar1 = func_0x0001808f0e30(*(int16_t *)(apcStackX_18[0] + 2),
                                *(int16_t *)(apcStackX_18[0] + 4));
    *param_2 = (cVar1 != '\0') + 1;
    func_0x0001808f6ce0();
    return 0;
  }
  *param_2 = 0;
  func_0x0001808f6ce0();
  return 0;
}



int FUN_1808ee620(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (system_data_f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (((param_1 - 1U < 4) && (param_2 == 0)) && (param_3 == 0)) {
    iVar1 = FUN_1808f6cb0();
    if (iVar1 != 0) {
      return -0x7f6dff01;
    }
    lVar2 = func_0x0001808f0e00(param_1);
    iVar1 = -0x7f6dfff8;
    if (lVar2 != 0) {
      iVar1 = -0x7f6dfff8;
      if (*(int *)(lVar2 + 0x10) != 0) {
        iVar1 = *(int *)(lVar2 + 0x10);
      }
    }
    func_0x0001808f6ce0();
    return iVar1;
  }
  return -0x7f6dffff;
}



uint64_t FUN_1808ee6a0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint auStackX_8 [8];
  
  if (system_data_f818 == '\0') {
    if ((free_exref == (code *)0x0) || (malloc_exref == (code *)0x0)) {
      return 0x80920001;
    }
    func_0x0001808f62c0(malloc_exref);
    func_0x0001808f62a0(free_exref);
    iVar2 = timeGetDevCaps(auStackX_8,8);
    uVar3 = 1;
    if (iVar2 == 0) {
      uVar3 = 1;
      if (1 < auStackX_8[0]) {
        uVar3 = auStackX_8[0];
      }
    }
    func_0x0001808f6640(uVar3);
    cVar1 = FUN_1808f1d70();
    if (cVar1 == '\0') {
      return 0x809200ff;
    }



