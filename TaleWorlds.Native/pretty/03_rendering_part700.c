#include "TaleWorlds.Native.Split.h"
// 03_rendering_part700.c - 1 个函数
// 函数: void UtilitiesSystem_6f834(int64_t param_1,int64_t param_2,int param_3)
void UtilitiesSystem_6f834(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t *puVar1;
  int64_t lVar2;
  byte bVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  byte *pbVar9;
  int32_t uVar10;
  int32_t uVar11;
  bool bVar12;
  uint uVar13;
  int8_t *puVar14;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar15;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t in_R11;
  int64_t lVar20;
  uint64_t unaff_R13;
  uint64_t uVar21;
  uint64_t uVar22;
  uint uVar23;
  int *piVar24;
  int32_t in_XMM0_Da;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint local_buffer_50;
  int iStack0000000000000054;
  uint local_buffer_58;
  uint local_buffer_5c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  int64_t local_buffer_68;
  int64_t local_buffer_70;
  uint64_t local_buffer_78;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  iStack0000000000000038 = *(int *)(param_1 + 0x43a4);
  lVar16 = *(int64_t *)(unaff_RDI + 0x12a0);
  iStack0000000000000054 = *(int *)(param_1 + 0x1e78) + iStack0000000000000038;
  uVar4 = *(int32_t *)(unaff_RDI + 0x34e4);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  local_buffer_5c = *(uint *)(lVar16 + 0x10);
  uVar21 = (uint64_t)(int)local_buffer_5c;
  local_buffer_50 = *(uint *)(lVar16 + 0x24);
  uVar19 = (uint64_t)(int)local_buffer_50;
  lVar20 = *(int64_t *)(unaff_RDI + 0x12a8);
  *(int64_t *)(unaff_RBP + -0x50) = lVar20;
  iStack0000000000000060 = 1 << ((byte)uVar4 & 0x1f);
  *(uint64_t *)(unaff_RBP + 8) = *(uint64_t *)(lVar20 + 0x38);
  *(uint64_t *)(unaff_RBP + 0x10) = *(uint64_t *)(lVar20 + 0x40);
  *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(lVar20 + 0x48);
  lVar18 = *(int64_t *)(unaff_RDI + 0x12b0);
  *(int32_t *)(unaff_RBP + -0x1c) = *(int32_t *)(lVar20 + 0x88);
  *(int64_t *)(unaff_RBP + -0x48) = lVar16;
  *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(lVar18 + 0x38);
  *(uint64_t *)(unaff_RBP + 0x28) = *(uint64_t *)(lVar18 + 0x40);
  *(uint64_t *)(unaff_RBP + 0x30) = *(uint64_t *)(lVar18 + 0x48);
  lVar20 = *(int64_t *)(unaff_RDI + 0x12b8);
  *(int32_t *)(unaff_RBP + -0x18) = *(int32_t *)(lVar18 + 0x88);
  *(int32_t *)(unaff_RBP + -0x20) = 0;
  *(uint64_t *)(unaff_RBP + 0x38) = *(uint64_t *)(lVar20 + 0x38);
  *(uint64_t *)(unaff_RBP + 0x40) = *(uint64_t *)(lVar20 + 0x40);
  *(uint64_t *)(unaff_RBP + 0x48) = *(uint64_t *)(lVar20 + 0x48);
  *(int32_t *)(unaff_RBP + -0x14) = *(int32_t *)(lVar20 + 0x88);
  *(uint64_t *)(unaff_RBP + -0x68) = *(uint64_t *)(lVar16 + 0x38);
  *(uint64_t *)(unaff_RBP + -0x60) = *(uint64_t *)(lVar16 + 0x40);
  *(uint64_t *)(unaff_RBP + -0x58) = *(uint64_t *)(lVar16 + 0x48);
  *(uint *)(param_2 + 0xf10) = (uint)(param_3 != 0);
  iStack000000000000003c = param_3;
  if (param_3 < *(int *)(unaff_RDI + 0x1e74)) {
    local_buffer_78 = uVar21;
    *(uint64_t *)(unaff_RBP + -0x80) = uVar19;
    uVar22 = uVar21;
    do {
      iStack0000000000000064 = iStack000000000000003c;
      *(int64_t *)(param_2 + 0xfb8) =
           ((int64_t)(iStack000000000000003c % iStack0000000000000060) + 0x15c) * 0x30 + unaff_RDI;
      if (iStack000000000000003c < 1) {
        piVar24 = &local_buffer_00000054;
      }
      else {
        piVar24 = (int *)(*(int64_t *)(unaff_RDI + 0x43a8) +
                         (int64_t)(iStack000000000000003c + -1) * 4);
      }
      lVar16 = *(int64_t *)(unaff_RDI + 0x43a8);
      lVar20 = (int64_t)iStack000000000000003c;
      *(int **)(unaff_RBP + -0x78) = piVar24;
      *(int64_t *)(unaff_RBP + -0x70) = lVar16 + lVar20 * 4;
      *(uint64_t *)(param_2 + 0xf50) = *(uint64_t *)(unaff_RDI + 0x2c18);
      puVar6 = *(uint64_t **)(param_2 + 0xf58);
      iStack0000000000000044 = iStack000000000000003c * (int)uVar22 * 0x10;
      iStack0000000000000048 = iStack000000000000003c * (int)uVar19 * 8;
      *puVar6 = 0;
      *(int8_t *)(puVar6 + 1) = 0;
      *(int32_t *)(param_2 + 0xf14) = 0;
      *(int *)(param_2 + 0xf8c) = iStack000000000000003c * -0x80;
      *(int *)(param_2 + 0xf90) =
           ((*(int *)(unaff_RDI + 0x1e74) - iStack000000000000003c) + -1) * 0x80;
      if (*(int *)(unaff_RDI + 0x2be0) == 0) {
        lVar16 = *(int64_t *)(unaff_RBP + -0x60);
        *(int64_t *)(param_2 + 0xf18) =
             (int64_t)iStack0000000000000044 + *(int64_t *)(unaff_RBP + -0x68);
        *(int64_t *)(param_2 + 0xf20) = lVar16 + iStack0000000000000048;
        *(int64_t *)(param_2 + 0xf28) =
             *(int64_t *)(unaff_RBP + -0x58) + (int64_t)iStack0000000000000048;
        *(int64_t *)(param_2 + 0xf30) = *(int64_t *)(param_2 + 0xf18) + -1;
        *(int64_t *)(param_2 + 0xf38) = *(int64_t *)(param_2 + 0xf20) + -1;
        puVar7 = *(int8_t **)(param_2 + 0xf38);
        *(int64_t *)(param_2 + 0xf40) = *(int64_t *)(param_2 + 0xf28) + -1;
        puVar8 = *(int8_t **)(param_2 + 0xf40);
        *(int64_t *)(param_2 + 0xf18) =
             *(int64_t *)(param_2 + 0xf18) - (int64_t)*(int *)(param_2 + 0xe80);
        lVar16 = 0x10;
        *(int64_t *)(param_2 + 0xf20) =
             *(int64_t *)(param_2 + 0xf20) - (int64_t)*(int *)(param_2 + 0xe94);
        *(int64_t *)(param_2 + 0xf28) =
             *(int64_t *)(param_2 + 0xf28) - (int64_t)*(int *)(param_2 + 0xe94);
        *(int32_t *)(param_2 + 0xf48) = *(int32_t *)(param_2 + 0xe80);
        *(int32_t *)(param_2 + 0xf4c) = *(int32_t *)(param_2 + 0xe94);
        lVar18 = (int64_t)*(int *)(param_2 + 0xe94);
        puVar14 = *(int8_t **)(param_2 + 0xf30);
        iVar5 = *(int *)(param_2 + 0xe80);
        do {
          *puVar14 = 0x81;
          puVar14 = puVar14 + iVar5;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
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
        *(int64_t *)(param_2 + 0xf18) =
             *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b0) + lVar20 * 8) + 0x20;
        *(int64_t *)(param_2 + 0xf20) =
             *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + lVar20 * 8) + 0x10;
        *(int64_t *)(param_2 + 0xf28) =
             *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + lVar20 * 8) + 0x10;
        *(uint64_t *)(param_2 + 0xf30) =
             *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lVar20 * 8);
        *(uint64_t *)(param_2 + 0xf38) =
             *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8);
        *(uint64_t *)(param_2 + 0xf40) =
             *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8);
        *(int32_t *)(param_2 + 0xf48) = 1;
        *(int32_t *)(param_2 + 0xf4c) = 1;
      }
      uVar15 = 0;
      if (0 < *(int *)(unaff_RDI + 0x1e78)) {
        local_buffer_70 = 0x10;
        iStack000000000000004c = 0;
        local_buffer_68 = 0x20;
        do {
          iVar5 = iStack0000000000000038;
          **(int **)(unaff_RBP + -0x70) = uVar15 - 1;
          if (((uVar15 & iStack0000000000000038 - 1U) == 0) &&
             (*piVar24 - iStack0000000000000038 < (int)uVar15)) {
            do {
              in_XMM0_Da = Sleep(0);
            } while (*piVar24 - iVar5 < (int)uVar15);
            uVar21 = (uint64_t)(int)uVar22;
          }
          lVar16 = *(int64_t *)(param_2 + 0xf00);
          lVar17 = (int64_t)iStack0000000000000048;
          *(int *)(param_2 + 0xf84) = iStack000000000000004c;
          iVar5 = *(int *)(unaff_RDI + 0x1e78);
          *(int64_t *)(param_2 + 0xea8) =
               *(int64_t *)(unaff_RBP + -0x68) + (int64_t)iStack0000000000000044;
          *(int64_t *)(param_2 + 0xeb0) = *(int64_t *)(unaff_RBP + -0x60) + lVar17;
          lVar18 = *(int64_t *)(unaff_RBP + -0x58);
          *(uint *)(param_2 + 0xf88) = ((iVar5 - uVar15) + -1) * 0x80;
          *(int64_t *)(param_2 + 0xeb8) = lVar18 + lVar17;
          *(int64_t *)(param_2 + 0xe18) =
               *(int64_t *)(unaff_RBP + -0x10 + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) +
               (int64_t)iStack0000000000000044;
          *(int64_t *)(param_2 + 0xe20) =
               *(int64_t *)(unaff_RBP + -8 + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
          *(int64_t *)(param_2 + 0xe28) =
               *(int64_t *)(unaff_RBP + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               *(uint *)(unaff_RBP + -0x20 + (uint64_t)*(byte *)(lVar16 + 2) * 4);
          in_XMM0_Da = UtilitiesSystem_6f3e0(in_XMM0_Da,param_2,0);
          uVar13 = local_buffer_50;
          *(int32_t *)(param_2 + 0xf14) = 1;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               (uint)(*(int *)(*(int64_t *)(param_2 + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
          *(int64_t *)(param_2 + 0xf18) = *(int64_t *)(param_2 + 0xf18) + 0x10;
          *(int64_t *)(param_2 + 0xf20) = *(int64_t *)(param_2 + 0xf20) + 8;
          *(int64_t *)(param_2 + 0xf28) = *(int64_t *)(param_2 + 0xf28) + 8;
          if (*(int *)(unaff_RDI + 0x2be0) == 0) {
            *(int64_t *)(param_2 + 0xf30) = *(int64_t *)(param_2 + 0xf30) + 0x10;
            *(int64_t *)(param_2 + 0xf38) = *(int64_t *)(param_2 + 0xf38) + 8;
            *(int64_t *)(param_2 + 0xf40) = *(int64_t *)(param_2 + 0xf40) + 8;
            if (*(int *)(unaff_RDI + 0x2be0) != 0) goto LAB_18066fdc2;
          }
          else {
LAB_18066fdc2:
            pbVar9 = *(byte **)(param_2 + 0xf00);
            bVar3 = *pbVar9;
            if (((bVar3 == 4) || (bVar3 == 9)) || (bVar12 = true, pbVar9[9] == 0)) {
              bVar12 = false;
            }
            bVar3 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar3 + 0xd00 + unaff_RDI + 0x1ed0) +
                              unaff_RDI + 0x1ed0 + 0xc40 +
                             ((uint64_t)pbVar9[2] + (uint64_t)pbVar9[0xb] * 4) * 4);
            local_buffer_58 = (uint)bVar3;
            if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
              puVar1 = (int32_t *)(uVar21 * 0xf + *(int64_t *)(param_2 + 0xea8));
              in_XMM0_Da = *puVar1;
              uVar4 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              lVar16 = *(int64_t *)(unaff_RBP + -0x80) * 7;
              puVar1 = (int32_t *)
                       (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b0) + 8 + lVar20 * 8) +
                       local_buffer_68);
              *puVar1 = in_XMM0_Da;
              puVar1[1] = uVar4;
              puVar1[2] = uVar10;
              puVar1[3] = uVar11;
              *(uint64_t *)
               (local_buffer_70 +
               *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + 8 + lVar20 * 8)) =
                   *(uint64_t *)(lVar16 + *(int64_t *)(param_2 + 0xeb0));
              *(uint64_t *)
               (local_buffer_70 +
               *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + 8 + lVar20 * 8)) =
                   *(uint64_t *)(lVar16 + *(int64_t *)(param_2 + 0xeb8));
            }
            if ((uVar15 != *(int *)(unaff_RDI + 0x1e78) - 1U) &&
               (*(char *)(*(int64_t *)(param_2 + 0xf00) + 0x4e) == '\0')) {
              lVar18 = 0;
              lVar16 = local_buffer_78 * 2;
              do {
                lVar17 = lVar16 + local_buffer_78;
                *(int8_t *)
                 (lVar18 + *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lVar20 * 8)) =
                     *(int8_t *)
                      (lVar16 + local_buffer_78 * -2 + 0xf + *(int64_t *)(param_2 + 0xea8));
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 1 + lVar18) =
                     *(int8_t *)
                      ((*(int64_t *)(param_2 + 0xea8) + lVar16 + 0xf) - local_buffer_78);
                lVar2 = lVar16 + 0xf;
                lVar16 = lVar16 + local_buffer_78 * 4;
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 2 + lVar18) =
                     *(int8_t *)(lVar2 + *(int64_t *)(param_2 + 0xea8));
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 3 + lVar18) =
                     *(int8_t *)(lVar17 + 0xf + *(int64_t *)(param_2 + 0xea8));
                lVar18 = lVar18 + 4;
              } while (lVar18 < 0x10);
              lVar16 = *(int64_t *)(unaff_RBP + -0x80);
              **(int8_t **)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb0) + 7);
              **(int8_t **)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 1) =
                   *(int8_t *)(lVar16 + 7 + *(int64_t *)(param_2 + 0xeb0));
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 1) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 2) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb0) + 7 + lVar16 * 2);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 2) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 2);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 3) =
                   *(int8_t *)(lVar16 * 3 + 7 + *(int64_t *)(param_2 + 0xeb0));
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 3) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 3);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 4) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb0) + 7 + lVar16 * 4);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 4) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 4);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 5) =
                   *(int8_t *)(lVar16 * 5 + 7 + *(int64_t *)(param_2 + 0xeb0));
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 5) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 5);
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 6) =
                   *(int8_t *)(lVar16 * 6 + 7 + *(int64_t *)(param_2 + 0xeb0));
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 6) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 6);
              uVar22 = (uint64_t)local_buffer_5c;
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 7) =
                   *(int8_t *)(lVar16 * 7 + 7 + *(int64_t *)(param_2 + 0xeb0));
              *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 7) =
                   *(int8_t *)(*(int64_t *)(param_2 + 0xeb8) + 7 + lVar16 * 7);
            }
            uVar23 = (uint)bVar3;
            lVar16 = unaff_RDI + 0x1ed0;
            if (uVar23 != 0) {
              if (*(int *)(unaff_RDI + 0x1ec0) == 0) {
                lVar18 = (int64_t)(int)uVar23;
                *(int64_t *)(unaff_RBP + -0x40) = lVar18 * 0x10 + lVar16;
                *(int64_t *)(unaff_RBP + -0x38) = (lVar18 + 0x40) * 0x10 + lVar16;
                *(int64_t *)(unaff_RBP + -0x30) = (lVar18 + 0x80) * 0x10 + lVar16;
                *(uint64_t *)(unaff_RBP + -0x28) =
                     ((uint64_t)
                      *(byte *)(((int64_t)*(int *)(unaff_RDI + 0x1e64) + 0x32) * 0x40 + lVar18 +
                               lVar16) + 0xc0) * 0x10 + lVar16;
                if (0 < (int)uVar15) {
                  in_XMM0_Da = UtilitiesSystem_9cb40(*(uint64_t *)(param_2 + 0xea8),
                                             *(uint64_t *)(param_2 + 0xeb0),
                                             *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             local_buffer_50);
                }
                if (!bVar12) {
                  in_XMM0_Da = UtilitiesSystem_9ca00(*(uint64_t *)(param_2 + 0xea8),
                                             *(uint64_t *)(param_2 + 0xeb0),
                                             *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
                if (0 < lVar20) {
                  in_XMM0_Da = UtilitiesSystem_9cad0(*(uint64_t *)(param_2 + 0xea8),
                                             *(uint64_t *)(param_2 + 0xeb0),
                                             *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
                if (!bVar12) {
                  in_XMM0_Da = UtilitiesSystem_9c900(*(uint64_t *)(param_2 + 0xea8),
                                             *(uint64_t *)(param_2 + 0xeb0),
                                             *(uint64_t *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
              }
              else {
                if (0 < (int)uVar15) {
                  in_XMM0_Da = Function_40cb8ea4(*(uint64_t *)(param_2 + 0xea8),
                                                   uVar22 & 0xffffffff,
                                                   (int64_t)(int)uVar23 * 0x10 + lVar16);
                }
                if (!bVar12) {
                  in_XMM0_Da = UtilitiesSystem_9ca80(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                             ((int64_t)(int)uVar23 + 0x40) * 0x10 + lVar16);
                }
                if (0 < lVar20) {
                  in_XMM0_Da = Function_ccf36d4a(*(uint64_t *)(param_2 + 0xea8),
                                                   uVar22 & 0xffffffff,
                                                   (int64_t)(int)uVar23 * 0x10 + lVar16);
                }
                if (!bVar12) {
                  in_XMM0_Da = UtilitiesSystem_9c990(*(uint64_t *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                             ((int64_t)(int)uVar23 + 0x40) * 0x10 + lVar16);
                }
              }
            }
          }
          uVar15 = uVar15 + 1;
          iStack000000000000004c = iStack000000000000004c + -0x80;
          iStack0000000000000044 = iStack0000000000000044 + 0x10;
          iStack0000000000000048 = iStack0000000000000048 + 8;
          *(int64_t *)(param_2 + 0xf00) = *(int64_t *)(param_2 + 0xf00) + 0x4c;
          *(int64_t *)(param_2 + 0xf50) = *(int64_t *)(param_2 + 0xf50) + 9;
          local_buffer_68 = local_buffer_68 + 0x10;
          local_buffer_70 = local_buffer_70 + 8;
          piVar24 = *(int **)(unaff_RBP + -0x78);
          uVar21 = (uint64_t)(int)uVar22;
        } while ((int)uVar15 < *(int *)(unaff_RDI + 0x1e78));
        uVar21 = (uint64_t)(int)uVar22;
      }
      if (*(int *)(unaff_RDI + 0x2be0) == 0) {
        in_XMM0_Da = Function_dd6b5106(*(uint64_t *)(unaff_RBP + -0x48),
                                         *(int64_t *)(param_2 + 0xea8) + 0x10,
                                         *(int64_t *)(param_2 + 0xeb0) + 8,
                                         *(int64_t *)(param_2 + 0xeb8) + 8);
      }
      else if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
        lVar16 = 0;
        iVar5 = **(int **)(unaff_RBP + -0x50);
        lVar18 = (int64_t)((iVar5 >> 1) + 0x10);
        do {
          lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b0) + 8 + lVar20 * 8) +
                   (int64_t)(iVar5 + 0x20);
          *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
          lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + 8 + lVar20 * 8) + lVar18;
          *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
          lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + 8 + lVar20 * 8) + lVar18;
          *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
          lVar16 = lVar16 + 1;
        } while (lVar16 < 4);
      }
      uVar19 = (uint64_t)local_buffer_50;
      **(int **)(unaff_RBP + -0x70) = uVar15 + iStack0000000000000038;
      *(int64_t *)(param_2 + 0xf00) = *(int64_t *)(param_2 + 0xf00) + 0x4c;
      *(int32_t *)(param_2 + 0xf10) = 1;
      *(int64_t *)(param_2 + 0xf00) =
           *(int64_t *)(param_2 + 0xf00) +
           (uint64_t)(uint)(*(int *)(param_2 + 0xf08) * *(int *)(unaff_RDI + 0x438c)) * 0x4c;
      iStack000000000000003c = iStack000000000000003c + 1 + *(int *)(unaff_RDI + 0x438c);
      param_3 = iStack0000000000000064;
    } while (iStack000000000000003c < *(int *)(unaff_RDI + 0x1e74));
  }
  if (param_3 == *(int *)(unaff_RDI + 0x1e74) + -1) {
    ReleaseSemaphore(*(uint64_t *)(unaff_RDI + 0x4400),1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}