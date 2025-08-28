#include "TaleWorlds.Native.Split.h"

// 03_rendering_part699.c - 1 个函数

// 函数: void FUN_18066f810(longlong param_1,longlong param_2,int param_3)
void FUN_18066f810(longlong param_1,longlong param_2,int param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  byte *pbVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint uVar13;
  int *piVar14;
  int8_t *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  int8_t auStack_198 [32];
  uint uStack_178;
  longlong *plStack_170;
  longlong lStack_168;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  uint uStack_148;
  int iStack_144;
  uint uStack_140;
  uint uStack_13c;
  int iStack_138;
  int iStack_134;
  longlong lStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  int *piStack_110;
  int *piStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  int *piStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  uint auStack_b8 [4];
  longlong alStack_a8 [6];
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  iStack_160 = *(int *)(param_1 + 0x43a4);
  lStack_e0 = *(longlong *)(param_1 + 0x12a0);
  iStack_144 = *(int *)(param_1 + 0x1e78) + iStack_160;
  uVar21 = (ulonglong)(int)*(uint *)(lStack_e0 + 0x10);
  uStack_148 = *(uint *)(lStack_e0 + 0x24);
  uVar19 = (ulonglong)(int)uStack_148;
  piStack_e8 = *(int **)(param_1 + 0x12a8);
  iStack_138 = 1 << ((byte)*(int32_t *)(param_1 + 0x34e4) & 0x1f);
  alStack_a8[3] = *(uint64_t *)(piStack_e8 + 0xe);
  alStack_a8[4] = *(uint64_t *)(piStack_e8 + 0x10);
  alStack_a8[5] = *(uint64_t *)(piStack_e8 + 0x12);
  lVar20 = *(longlong *)(param_1 + 0x12b0);
  auStack_b8[1] = piStack_e8[0x22];
  uStack_13c = *(uint *)(lStack_e0 + 0x10);
  uStack_78 = *(uint64_t *)(lVar20 + 0x38);
  uStack_70 = *(uint64_t *)(lVar20 + 0x40);
  uStack_68 = *(uint64_t *)(lVar20 + 0x48);
  lVar18 = *(longlong *)(param_1 + 0x12b8);
  auStack_b8[2] = *(int32_t *)(lVar20 + 0x88);
  auStack_b8[0] = 0;
  uStack_60 = *(uint64_t *)(lVar18 + 0x38);
  uStack_58 = *(uint64_t *)(lVar18 + 0x40);
  uStack_50 = *(uint64_t *)(lVar18 + 0x48);
  auStack_b8[3] = *(int32_t *)(lVar18 + 0x88);
  lStack_100 = *(longlong *)(lStack_e0 + 0x38);
  lStack_f8 = *(longlong *)(lStack_e0 + 0x40);
  lStack_f0 = *(longlong *)(lStack_e0 + 0x48);
  *(uint *)(param_2 + 0xf10) = (uint)(param_3 != 0);
  iStack_15c = param_3;
  if (param_3 < *(int *)(param_1 + 0x1e74)) {
    uStack_120 = uVar21;
    uStack_118 = uVar19;
    uVar22 = uVar21;
    do {
      iStack_134 = iStack_15c;
      *(longlong *)(param_2 + 0xfb8) =
           ((longlong)(iStack_15c % iStack_138) + 0x15c) * 0x30 + param_1;
      if (iStack_15c < 1) {
        piStack_110 = &iStack_144;
      }
      else {
        piStack_110 = (int *)(*(longlong *)(param_1 + 0x43a8) + (longlong)(iStack_15c + -1) * 4);
      }
      lStack_168 = (longlong)iStack_15c;
      piStack_108 = (int *)(*(longlong *)(param_1 + 0x43a8) + lStack_168 * 4);
      *(uint64_t *)(param_2 + 0xf50) = *(uint64_t *)(param_1 + 0x2c18);
      puVar6 = *(uint64_t **)(param_2 + 0xf58);
      iStack_154 = iStack_15c * (int)uVar22 * 0x10;
      iStack_150 = iStack_15c * (int)uVar19 * 8;
      *puVar6 = 0;
      *(int8_t *)(puVar6 + 1) = 0;
      *(int32_t *)(param_2 + 0xf14) = 0;
      *(int *)(param_2 + 0xf8c) = iStack_15c * -0x80;
      *(int *)(param_2 + 0xf90) = ((*(int *)(param_1 + 0x1e74) - iStack_15c) + -1) * 0x80;
      if (*(int *)(param_1 + 0x2be0) == 0) {
        *(longlong *)(param_2 + 0xf18) = iStack_154 + lStack_100;
        *(longlong *)(param_2 + 0xf20) = lStack_f8 + iStack_150;
        *(longlong *)(param_2 + 0xf28) = lStack_f0 + iStack_150;
        *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf18) + -1;
        *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf20) + -1;
        puVar7 = *(int8_t **)(param_2 + 0xf38);
        *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf28) + -1;
        puVar8 = *(int8_t **)(param_2 + 0xf40);
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(param_2 + 0xf18) - (longlong)*(int *)(param_2 + 0xe80);
        lVar20 = 0x10;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(param_2 + 0xf20) - (longlong)*(int *)(param_2 + 0xe94);
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(param_2 + 0xf28) - (longlong)*(int *)(param_2 + 0xe94);
        *(int32_t *)(param_2 + 0xf48) = *(int32_t *)(param_2 + 0xe80);
        *(int32_t *)(param_2 + 0xf4c) = *(int32_t *)(param_2 + 0xe94);
        lVar18 = (longlong)*(int *)(param_2 + 0xe94);
        puVar15 = *(int8_t **)(param_2 + 0xf30);
        iVar5 = *(int *)(param_2 + 0xe80);
        do {
          *puVar15 = 0x81;
          puVar15 = puVar15 + iVar5;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        *puVar7 = 0x81;
        puVar7[lVar18] = 0x81;
        puVar7[lVar18 * 2] = 0x81;
        puVar7[lVar18 * 3] = 0x81;
        puVar7[lVar18 * 4] = 0x81;
        puVar7[lVar18 * 5] = 0x81;
        puVar7[lVar18 * 6] = 0x81;
        puVar7[lVar18 * 7] = 0x81;
        *puVar8 = 0x81;
        puVar8[lVar18] = 0x81;
        puVar8[lVar18 * 2] = 0x81;
        puVar8[lVar18 * 3] = 0x81;
        puVar8[lVar18 * 4] = 0x81;
        puVar8[lVar18 * 5] = 0x81;
        puVar8[lVar18 * 6] = 0x81;
        puVar8[lVar18 * 7] = 0x81;
      }
      else {
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(*(longlong *)(param_1 + 0x43b0) + lStack_168 * 8) + 0x20;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(*(longlong *)(param_1 + 0x43b8) + lStack_168 * 8) + 0x10;
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(*(longlong *)(param_1 + 0x43c0) + lStack_168 * 8) + 0x10;
        *(uint64_t *)(param_2 + 0xf30) =
             *(uint64_t *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8);
        *(uint64_t *)(param_2 + 0xf38) =
             *(uint64_t *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8);
        *(uint64_t *)(param_2 + 0xf40) =
             *(uint64_t *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8);
        *(int32_t *)(param_2 + 0xf48) = 1;
        *(int32_t *)(param_2 + 0xf4c) = 1;
      }
      uVar17 = 0;
      if (0 < *(int *)(param_1 + 0x1e78)) {
        lStack_128 = 0x10;
        iStack_14c = 0;
        lStack_130 = 0x20;
        do {
          piVar14 = piStack_110;
          iVar5 = iStack_160;
          *piStack_108 = uVar17 - 1;
          if (((uVar17 & iStack_160 - 1U) == 0) && (*piStack_110 - iStack_160 < (int)uVar17)) {
            do {
              Sleep(0);
            } while (*piVar14 - iVar5 < (int)uVar17);
            uVar21 = (ulonglong)(int)uVar22;
          }
          lVar20 = *(longlong *)(param_2 + 0xf00);
          lVar18 = (longlong)iStack_150;
          *(int *)(param_2 + 0xf84) = iStack_14c;
          iVar5 = *(int *)(param_1 + 0x1e78);
          *(longlong *)(param_2 + 0xea8) = lStack_100 + iStack_154;
          *(longlong *)(param_2 + 0xeb0) = lStack_f8 + lVar18;
          *(uint *)(param_2 + 0xf88) = ((iVar5 - uVar17) + -1) * 0x80;
          *(longlong *)(param_2 + 0xeb8) = lStack_f0 + lVar18;
          *(longlong *)(param_2 + 0xe18) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3] + (longlong)iStack_154;
          *(longlong *)(param_2 + 0xe20) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3 + 1] + lVar18;
          *(longlong *)(param_2 + 0xe28) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3 + 2] + lVar18;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) | auStack_b8[*(byte *)(lVar20 + 2)];
          FUN_18066f3e0(param_1,param_2,0);
          uVar13 = uStack_148;
          *(int32_t *)(param_2 + 0xf14) = 1;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               (uint)(*(int *)(*(longlong *)(param_2 + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
          *(longlong *)(param_2 + 0xf18) = *(longlong *)(param_2 + 0xf18) + 0x10;
          *(longlong *)(param_2 + 0xf20) = *(longlong *)(param_2 + 0xf20) + 8;
          *(longlong *)(param_2 + 0xf28) = *(longlong *)(param_2 + 0xf28) + 8;
          if (*(int *)(param_1 + 0x2be0) == 0) {
            *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf30) + 0x10;
            *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf38) + 8;
            *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf40) + 8;
            if (*(int *)(param_1 + 0x2be0) != 0) goto LAB_18066fdc2;
          }
          else {
LAB_18066fdc2:
            pbVar9 = *(byte **)(param_2 + 0xf00);
            bVar4 = *pbVar9;
            if (((bVar4 == 4) || (bVar4 == 9)) || (iStack_158 = 1, pbVar9[9] == 0)) {
              iStack_158 = 0;
            }
            bVar4 = *(byte *)((ulonglong)*(byte *)((ulonglong)bVar4 + 0xd00 + param_1 + 0x1ed0) +
                              param_1 + 0x1ed0 + 0xc40 +
                             ((ulonglong)pbVar9[2] + (ulonglong)pbVar9[0xb] * 4) * 4);
            uStack_140 = (uint)bVar4;
            if (iStack_15c != *(int *)(param_1 + 0x1e74) + -1) {
              puVar1 = (int32_t *)(uVar21 * 0xf + *(longlong *)(param_2 + 0xea8));
              uVar10 = puVar1[1];
              uVar11 = puVar1[2];
              uVar12 = puVar1[3];
              puVar2 = (int32_t *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x43b0) + 8 + lStack_168 * 8) +
                       lStack_130);
              *puVar2 = *puVar1;
              puVar2[1] = uVar10;
              puVar2[2] = uVar11;
              puVar2[3] = uVar12;
              *(uint64_t *)
               (lStack_128 + *(longlong *)(*(longlong *)(param_1 + 0x43b8) + 8 + lStack_168 * 8)) =
                   *(uint64_t *)(uStack_118 * 7 + *(longlong *)(param_2 + 0xeb0));
              *(uint64_t *)
               (lStack_128 + *(longlong *)(*(longlong *)(param_1 + 0x43c0) + 8 + lStack_168 * 8)) =
                   *(uint64_t *)(uStack_118 * 7 + *(longlong *)(param_2 + 0xeb8));
            }
            if ((uVar17 != *(int *)(param_1 + 0x1e78) - 1U) &&
               (*(char *)(*(longlong *)(param_2 + 0xf00) + 0x4e) == '\0')) {
              lVar18 = 0;
              lVar20 = uStack_120 * 2;
              do {
                lVar16 = lVar20 + uStack_120;
                *(int8_t *)
                 (lVar18 + *(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8)) =
                     *(int8_t *)
                      (lVar20 + uStack_120 * -2 + 0xf + *(longlong *)(param_2 + 0xea8));
                *(int8_t *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 1 + lVar18) =
                     *(int8_t *)((*(longlong *)(param_2 + 0xea8) + lVar20 + 0xf) - uStack_120);
                lVar3 = lVar20 + 0xf;
                lVar20 = lVar20 + uStack_120 * 4;
                *(int8_t *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 2 + lVar18) =
                     *(int8_t *)(lVar3 + *(longlong *)(param_2 + 0xea8));
                *(int8_t *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 3 + lVar18) =
                     *(int8_t *)(lVar16 + 0xf + *(longlong *)(param_2 + 0xea8));
                lVar18 = lVar18 + 4;
              } while (lVar18 < 0x10);
              **(int8_t **)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb0) + 7);
              **(int8_t **)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 1) =
                   *(int8_t *)(uStack_118 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 1) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 2) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb0) + 7 + uStack_118 * 2);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 2) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 2);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 3) =
                   *(int8_t *)(uStack_118 * 3 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 3) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 3);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 4) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb0) + 7 + uStack_118 * 4);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 4) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 4);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 5) =
                   *(int8_t *)(uStack_118 * 5 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 5) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 5);
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 6) =
                   *(int8_t *)(uStack_118 * 6 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 6) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 6);
              uVar22 = (ulonglong)uStack_13c;
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 7) =
                   *(int8_t *)(uStack_118 * 7 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 7) =
                   *(int8_t *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 7);
            }
            uVar23 = (uint)bVar4;
            lVar20 = param_1 + 0x1ed0;
            if (uVar23 != 0) {
              if (*(int *)(param_1 + 0x1ec0) == 0) {
                lVar18 = (longlong)(int)uVar23;
                lStack_d8 = lVar18 * 0x10 + lVar20;
                lStack_d0 = (lVar18 + 0x40) * 0x10 + lVar20;
                lStack_c8 = (lVar18 + 0x80) * 0x10 + lVar20;
                lStack_c0 = ((ulonglong)
                             *(byte *)(((longlong)*(int *)(param_1 + 0x1e64) + 0x32) * 0x40 + lVar18
                                      + lVar20) + 0xc0) * 0x10 + lVar20;
                if (0 < (int)uVar17) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uStack_148;
                  FUN_18069cb40(*(uint64_t *)(param_2 + 0xea8),*(uint64_t *)(param_2 + 0xeb0),
                                *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                iVar5 = iStack_158;
                if (iStack_158 == 0) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069ca00(*(uint64_t *)(param_2 + 0xea8),*(uint64_t *)(param_2 + 0xeb0),
                                *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                if (0 < lStack_168) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069cad0(*(uint64_t *)(param_2 + 0xea8),*(uint64_t *)(param_2 + 0xeb0),
                                *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                if (iVar5 == 0) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069c900(*(uint64_t *)(param_2 + 0xea8),*(uint64_t *)(param_2 + 0xeb0),
                                *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
              }
              else {
                if (0 < (int)uVar17) {
                  func_0x00018001c253(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                      (longlong)(int)uVar23 * 0x10 + lVar20);
                }
                iVar5 = iStack_158;
                if (iStack_158 == 0) {
                  FUN_18069ca80(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar20);
                }
                if (0 < lStack_168) {
                  func_0x00018001c10b(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                      (longlong)(int)uVar23 * 0x10 + lVar20);
                }
                if (iVar5 == 0) {
                  FUN_18069c990(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar20);
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
          iStack_14c = iStack_14c + -0x80;
          iStack_154 = iStack_154 + 0x10;
          iStack_150 = iStack_150 + 8;
          *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
          *(longlong *)(param_2 + 0xf50) = *(longlong *)(param_2 + 0xf50) + 9;
          lStack_130 = lStack_130 + 0x10;
          lStack_128 = lStack_128 + 8;
          uVar21 = (ulonglong)(int)uVar22;
        } while ((int)uVar17 < *(int *)(param_1 + 0x1e78));
        uVar21 = (ulonglong)(int)uVar22;
      }
      if (*(int *)(param_1 + 0x2be0) == 0) {
        func_0x00018069cbd0(lStack_e0,*(longlong *)(param_2 + 0xea8) + 0x10,
                            *(longlong *)(param_2 + 0xeb0) + 8,*(longlong *)(param_2 + 0xeb8) + 8);
      }
      else if (iStack_15c != *(int *)(param_1 + 0x1e74) + -1) {
        lVar20 = 0;
        iVar5 = *piStack_e8;
        lVar18 = (longlong)((iVar5 >> 1) + 0x10);
        do {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43b0) + 8 + lStack_168 * 8) +
                   (longlong)(iVar5 + 0x20);
          *(int8_t *)(lVar16 + lVar20) = *(int8_t *)(lVar16 + -1);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43b8) + 8 + lStack_168 * 8) + lVar18;
          *(int8_t *)(lVar16 + lVar20) = *(int8_t *)(lVar16 + -1);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43c0) + 8 + lStack_168 * 8) + lVar18;
          *(int8_t *)(lVar16 + lVar20) = *(int8_t *)(lVar16 + -1);
          lVar20 = lVar20 + 1;
        } while (lVar20 < 4);
      }
      uVar19 = (ulonglong)uStack_148;
      *piStack_108 = uVar17 + iStack_160;
      *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
      *(int32_t *)(param_2 + 0xf10) = 1;
      *(longlong *)(param_2 + 0xf00) =
           *(longlong *)(param_2 + 0xf00) +
           (ulonglong)(uint)(*(int *)(param_2 + 0xf08) * *(int *)(param_1 + 0x438c)) * 0x4c;
      iStack_15c = iStack_15c + 1 + *(int *)(param_1 + 0x438c);
      param_3 = iStack_134;
    } while (iStack_15c < *(int *)(param_1 + 0x1e74));
  }
  if (param_3 == *(int *)(param_1 + 0x1e74) + -1) {
    ReleaseSemaphore(*(uint64_t *)(param_1 + 0x4400),1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





