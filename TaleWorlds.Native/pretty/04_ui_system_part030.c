#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part030.c - 4 个函数
// 函数: void UtilitiesSystem_6f94e(uint64_t param_1,uint64_t param_2,int param_3)
void UtilitiesSystem_6f94e(uint64_t param_1,uint64_t param_2,int param_3)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  byte *pbVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  bool bVar13;
  int8_t *puVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint uVar15;
  int64_t unaff_RDI;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t in_R10;
  int in_R11D;
  uint64_t uVar19;
  uint64_t unaff_R13;
  uint64_t uVar20;
  uint uVar21;
  int *piVar22;
  int64_t lStack0000000000000030;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint local_buffer_50;
  uint local_buffer_58;
  uint local_buffer_5c;
  int local_var_60;
  int iStack0000000000000064;
  int64_t local_var_68;
  int64_t local_var_70;
  *(uint64_t *)(unaff_RBP + -0x80) = in_R10;
  uVar19 = unaff_R13;
  uVar20 = unaff_R13;
  do {
    iStack0000000000000064 = unaff_ESI;
    *(int64_t *)(unaff_RBX + 0xfb8) = ((int64_t)(unaff_ESI % in_R11D) + 0x15c) * 0x30 + unaff_RDI;
    if (unaff_ESI < 1) {
      piVar22 = (int *)&local_buffer_00000054;
    }
    else {
      piVar22 = (int *)(*(int64_t *)(unaff_RDI + 0x43a8) + (int64_t)(unaff_ESI + -1) * 4);
    }
    lVar16 = *(int64_t *)(unaff_RDI + 0x43a8);
    lStack0000000000000030 = (int64_t)unaff_ESI;
    *(int **)(unaff_RBP + -0x78) = piVar22;
    *(int64_t *)(unaff_RBP + -0x70) = lVar16 + lStack0000000000000030 * 4;
    *(uint64_t *)(unaff_RBX + 0xf50) = *(uint64_t *)(unaff_RDI + 0x2c18);
    puVar6 = *(uint64_t **)(unaff_RBX + 0xf58);
    iStack0000000000000044 = unaff_ESI * (int)uVar20 * 0x10;
    iStack0000000000000048 = unaff_ESI * (int)in_R10 * 8;
    *puVar6 = 0;
    *(int8_t *)(puVar6 + 1) = 0;
    *(int32_t *)(unaff_RBX + 0xf14) = 0;
    *(int *)(unaff_RBX + 0xf8c) = unaff_ESI * -0x80;
    *(int *)(unaff_RBX + 0xf90) = ((*(int *)(unaff_RDI + 0x1e74) - unaff_ESI) + -1) * 0x80;
    if (*(int *)(unaff_RDI + 0x2be0) == 0) {
      lVar16 = *(int64_t *)(unaff_RBP + -0x60);
      *(int64_t *)(unaff_RBX + 0xf18) =
           (int64_t)iStack0000000000000044 + *(int64_t *)(unaff_RBP + -0x68);
      *(int64_t *)(unaff_RBX + 0xf20) = lVar16 + iStack0000000000000048;
      *(int64_t *)(unaff_RBX + 0xf28) =
           *(int64_t *)(unaff_RBP + -0x58) + (int64_t)iStack0000000000000048;
      *(int64_t *)(unaff_RBX + 0xf30) = *(int64_t *)(unaff_RBX + 0xf18) + -1;
      *(int64_t *)(unaff_RBX + 0xf38) = *(int64_t *)(unaff_RBX + 0xf20) + -1;
      puVar7 = *(int8_t **)(unaff_RBX + 0xf38);
      *(int64_t *)(unaff_RBX + 0xf40) = *(int64_t *)(unaff_RBX + 0xf28) + -1;
      puVar8 = *(int8_t **)(unaff_RBX + 0xf40);
      *(int64_t *)(unaff_RBX + 0xf18) =
           *(int64_t *)(unaff_RBX + 0xf18) - (int64_t)*(int *)(unaff_RBX + 0xe80);
      lVar16 = 0x10;
      *(int64_t *)(unaff_RBX + 0xf20) =
           *(int64_t *)(unaff_RBX + 0xf20) - (int64_t)*(int *)(unaff_RBX + 0xe94);
      *(int64_t *)(unaff_RBX + 0xf28) =
           *(int64_t *)(unaff_RBX + 0xf28) - (int64_t)*(int *)(unaff_RBX + 0xe94);
      *(int32_t *)(unaff_RBX + 0xf48) = *(int32_t *)(unaff_RBX + 0xe80);
      *(int32_t *)(unaff_RBX + 0xf4c) = *(int32_t *)(unaff_RBX + 0xe94);
      lVar18 = (int64_t)*(int *)(unaff_RBX + 0xe94);
      puVar14 = *(int8_t **)(unaff_RBX + 0xf30);
      iVar5 = *(int *)(unaff_RBX + 0xe80);
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
      param_3 = iStack0000000000000038;
    }
    else {
      *(int64_t *)(unaff_RBX + 0xf18) =
           *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b0) + lStack0000000000000030 * 8) + 0x20;
      *(int64_t *)(unaff_RBX + 0xf20) =
           *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + lStack0000000000000030 * 8) + 0x10;
      *(int64_t *)(unaff_RBX + 0xf28) =
           *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + lStack0000000000000030 * 8) + 0x10;
      *(uint64_t *)(unaff_RBX + 0xf30) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8);
      *(uint64_t *)(unaff_RBX + 0xf38) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8);
      *(uint64_t *)(unaff_RBX + 0xf40) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8);
      *(int32_t *)(unaff_RBX + 0xf48) = 1;
      *(int32_t *)(unaff_RBX + 0xf4c) = 1;
    }
    uVar15 = 0;
    if (0 < *(int *)(unaff_RDI + 0x1e78)) {
      local_var_70 = 0x10;
      iStack000000000000004c = 0;
      local_var_68 = 0x20;
      do {
        **(int **)(unaff_RBP + -0x70) = uVar15 - 1;
        if (((uVar15 & param_3 - 1U) == 0) && (*piVar22 - param_3 < (int)uVar15)) {
          do {
            Sleep(0);
          } while (*piVar22 - iStack0000000000000038 < (int)uVar15);
          uVar19 = (uint64_t)(int)uVar20;
        }
        lVar16 = *(int64_t *)(unaff_RBX + 0xf00);
        lVar17 = (int64_t)iStack0000000000000048;
        *(int *)(unaff_RBX + 0xf84) = iStack000000000000004c;
        iVar5 = *(int *)(unaff_RDI + 0x1e78);
        *(int64_t *)(unaff_RBX + 0xea8) =
             *(int64_t *)(unaff_RBP + -0x68) + (int64_t)iStack0000000000000044;
        *(int64_t *)(unaff_RBX + 0xeb0) = *(int64_t *)(unaff_RBP + -0x60) + lVar17;
        lVar18 = *(int64_t *)(unaff_RBP + -0x58);
        *(uint *)(unaff_RBX + 0xf88) = ((iVar5 - uVar15) + -1) * 0x80;
        *(int64_t *)(unaff_RBX + 0xeb8) = lVar18 + lVar17;
        *(int64_t *)(unaff_RBX + 0xe18) =
             *(int64_t *)(unaff_RBP + -0x10 + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) +
             (int64_t)iStack0000000000000044;
        *(int64_t *)(unaff_RBX + 0xe20) =
             *(int64_t *)(unaff_RBP + -8 + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
        *(int64_t *)(unaff_RBX + 0xe28) =
             *(int64_t *)(unaff_RBP + (uint64_t)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
        *(uint *)(unaff_RBX + 0xfc0) =
             *(uint *)(unaff_RBX + 0xfc0) |
             *(uint *)(unaff_RBP + -0x20 + (uint64_t)*(byte *)(lVar16 + 2) * 4);
        UtilitiesSystem_6f3e0();
        *(int32_t *)(unaff_RBX + 0xf14) = 1;
        *(uint *)(unaff_RBX + 0xfc0) =
             *(uint *)(unaff_RBX + 0xfc0) |
             (uint)(*(int *)(*(int64_t *)(unaff_RBX + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
        *(int64_t *)(unaff_RBX + 0xf18) = *(int64_t *)(unaff_RBX + 0xf18) + 0x10;
        *(int64_t *)(unaff_RBX + 0xf20) = *(int64_t *)(unaff_RBX + 0xf20) + 8;
        *(int64_t *)(unaff_RBX + 0xf28) = *(int64_t *)(unaff_RBX + 0xf28) + 8;
        if (*(int *)(unaff_RDI + 0x2be0) == 0) {
          *(int64_t *)(unaff_RBX + 0xf30) = *(int64_t *)(unaff_RBX + 0xf30) + 0x10;
          *(int64_t *)(unaff_RBX + 0xf38) = *(int64_t *)(unaff_RBX + 0xf38) + 8;
          *(int64_t *)(unaff_RBX + 0xf40) = *(int64_t *)(unaff_RBX + 0xf40) + 8;
          if (*(int *)(unaff_RDI + 0x2be0) != 0) goto LAB_18066fdc2;
        }
        else {
LAB_18066fdc2:
          pbVar9 = *(byte **)(unaff_RBX + 0xf00);
          bVar4 = *pbVar9;
          if (((bVar4 == 4) || (bVar4 == 9)) || (bVar13 = true, pbVar9[9] == 0)) {
            bVar13 = false;
          }
          bVar4 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar4 + 0xd00 + unaff_RDI + 0x1ed0) +
                            unaff_RDI + 0x1ed0 + 0xc40 +
                           ((uint64_t)pbVar9[2] + (uint64_t)pbVar9[0xb] * 4) * 4);
          local_buffer_58 = (uint)bVar4;
          if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
            puVar1 = (int32_t *)(uVar19 * 0xf + *(int64_t *)(unaff_RBX + 0xea8));
            uVar10 = puVar1[1];
            uVar11 = puVar1[2];
            uVar12 = puVar1[3];
            lVar16 = *(int64_t *)(unaff_RBP + -0x80) * 7;
            puVar2 = (int32_t *)
                     (*(int64_t *)
                       (*(int64_t *)(unaff_RDI + 0x43b0) + 8 + lStack0000000000000030 * 8) +
                     local_var_68);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            *(uint64_t *)
             (local_var_70 +
             *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + 8 + lStack0000000000000030 * 8)) =
                 *(uint64_t *)(lVar16 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(uint64_t *)
             (local_var_70 +
             *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + 8 + lStack0000000000000030 * 8)) =
                 *(uint64_t *)(lVar16 + *(int64_t *)(unaff_RBX + 0xeb8));
          }
          if ((uVar15 != *(int *)(unaff_RDI + 0x1e78) - 1U) &&
             (*(char *)(*(int64_t *)(unaff_RBX + 0xf00) + 0x4e) == '\0')) {
            lVar18 = 0;
            lVar16 = unaff_R13 * 2;
            do {
              lVar17 = lVar16 + unaff_R13;
              *(int8_t *)
               (lVar18 + *(int64_t *)
                          (*(int64_t *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8)) =
                   *(int8_t *)(lVar16 + unaff_R13 * -2 + 0xf + *(int64_t *)(unaff_RBX + 0xea8))
              ;
              *(int8_t *)
               (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 1 +
               lVar18) = *(int8_t *)
                          ((*(int64_t *)(unaff_RBX + 0xea8) + lVar16 + 0xf) - unaff_R13);
              lVar3 = lVar16 + 0xf;
              lVar16 = lVar16 + unaff_R13 * 4;
              *(int8_t *)
               (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 2 +
               lVar18) = *(int8_t *)(lVar3 + *(int64_t *)(unaff_RBX + 0xea8));
              *(int8_t *)
               (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 3 +
               lVar18) = *(int8_t *)(lVar17 + 0xf + *(int64_t *)(unaff_RBX + 0xea8));
              lVar18 = lVar18 + 4;
            } while (lVar18 < 0x10);
            lVar16 = *(int64_t *)(unaff_RBP + -0x80);
            **(int8_t **)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb0) + 7);
            **(int8_t **)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 1) =
                 *(int8_t *)(lVar16 + 7 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 1) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 2) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb0) + 7 + lVar16 * 2);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 2) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 2);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 3) =
                 *(int8_t *)(lVar16 * 3 + 7 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 3) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 3);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 4) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb0) + 7 + lVar16 * 4);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 4) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 4);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 5) =
                 *(int8_t *)(lVar16 * 5 + 7 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 5) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 5);
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 6) =
                 *(int8_t *)(lVar16 * 6 + 7 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 6) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 6);
            uVar20 = (uint64_t)local_buffer_5c;
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 7) =
                 *(int8_t *)(lVar16 * 7 + 7 + *(int64_t *)(unaff_RBX + 0xeb0));
            *(int8_t *)
             (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 7) =
                 *(int8_t *)(*(int64_t *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 7);
          }
          uVar21 = (uint)bVar4;
          lVar16 = unaff_RDI + 0x1ed0;
          if (uVar21 != 0) {
            if (*(int *)(unaff_RDI + 0x1ec0) == 0) {
              lVar18 = (int64_t)(int)uVar21;
              *(int64_t *)(unaff_RBP + -0x40) = lVar18 * 0x10 + lVar16;
              *(int64_t *)(unaff_RBP + -0x38) = (lVar18 + 0x40) * 0x10 + lVar16;
              *(int64_t *)(unaff_RBP + -0x30) = (lVar18 + 0x80) * 0x10 + lVar16;
              *(uint64_t *)(unaff_RBP + -0x28) =
                   ((uint64_t)
                    *(byte *)(((int64_t)*(int *)(unaff_RDI + 0x1e64) + 0x32) * 0x40 + lVar18 +
                             lVar16) + 0xc0) * 0x10 + lVar16;
              if (0 < (int)uVar15) {
                UtilitiesSystem_9cb40(*(uint64_t *)(unaff_RBX + 0xea8),*(uint64_t *)(unaff_RBX + 0xeb0),
                              *(uint64_t *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              local_buffer_50);
              }
              if (!bVar13) {
                UtilitiesSystem_9ca00(*(uint64_t *)(unaff_RBX + 0xea8),*(uint64_t *)(unaff_RBX + 0xeb0),
                              *(uint64_t *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              local_buffer_50);
              }
              if (0 < lStack0000000000000030) {
                UtilitiesSystem_9cad0(*(uint64_t *)(unaff_RBX + 0xea8),*(uint64_t *)(unaff_RBX + 0xeb0),
                              *(uint64_t *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              local_buffer_50);
              }
              if (!bVar13) {
                UtilitiesSystem_9c900(*(uint64_t *)(unaff_RBX + 0xea8),*(uint64_t *)(unaff_RBX + 0xeb0),
                              *(uint64_t *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              local_buffer_50);
              }
            }
            else {
              if (0 < (int)uVar15) {
                Function_40cb8ea4(*(uint64_t *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                                    (int64_t)(int)uVar21 * 0x10 + lVar16);
              }
              if (!bVar13) {
                UtilitiesSystem_9ca80(*(uint64_t *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                              ((int64_t)(int)uVar21 + 0x40) * 0x10 + lVar16);
              }
              if (0 < lStack0000000000000030) {
                Function_ccf36d4a(*(uint64_t *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                                    (int64_t)(int)uVar21 * 0x10 + lVar16);
              }
              if (!bVar13) {
                UtilitiesSystem_9c990(*(uint64_t *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                              ((int64_t)(int)uVar21 + 0x40) * 0x10 + lVar16);
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        iStack000000000000004c = iStack000000000000004c + -0x80;
        iStack0000000000000044 = iStack0000000000000044 + 0x10;
        iStack0000000000000048 = iStack0000000000000048 + 8;
        *(int64_t *)(unaff_RBX + 0xf00) = *(int64_t *)(unaff_RBX + 0xf00) + 0x4c;
        *(int64_t *)(unaff_RBX + 0xf50) = *(int64_t *)(unaff_RBX + 0xf50) + 9;
        local_var_68 = local_var_68 + 0x10;
        local_var_70 = local_var_70 + 8;
        piVar22 = *(int **)(unaff_RBP + -0x78);
        uVar19 = (uint64_t)(int)uVar20;
        param_3 = iStack0000000000000038;
      } while ((int)uVar15 < *(int *)(unaff_RDI + 0x1e78));
      uVar19 = (uint64_t)(int)uVar20;
    }
    if (*(int *)(unaff_RDI + 0x2be0) == 0) {
      Function_dd6b5106(*(uint64_t *)(unaff_RBP + -0x48),*(int64_t *)(unaff_RBX + 0xea8) + 0x10
                          ,*(int64_t *)(unaff_RBX + 0xeb0) + 8,*(int64_t *)(unaff_RBX + 0xeb8) + 8
                         );
    }
    else if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
      lVar16 = 0;
      iVar5 = **(int **)(unaff_RBP + -0x50);
      lVar18 = (int64_t)((iVar5 >> 1) + 0x10);
      do {
        lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b0) + 8 + lStack0000000000000030 * 8) +
                 (int64_t)(iVar5 + 0x20);
        *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
        lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43b8) + 8 + lStack0000000000000030 * 8) +
                 lVar18;
        *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
        lVar17 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x43c0) + 8 + lStack0000000000000030 * 8) +
                 lVar18;
        *(int8_t *)(lVar17 + lVar16) = *(int8_t *)(lVar17 + -1);
        lVar16 = lVar16 + 1;
      } while (lVar16 < 4);
    }
    in_R10 = (uint64_t)local_buffer_50;
    **(int **)(unaff_RBP + -0x70) = uVar15 + iStack0000000000000038;
    *(int64_t *)(unaff_RBX + 0xf00) = *(int64_t *)(unaff_RBX + 0xf00) + 0x4c;
    *(int32_t *)(unaff_RBX + 0xf10) = 1;
    *(int64_t *)(unaff_RBX + 0xf00) =
         *(int64_t *)(unaff_RBX + 0xf00) +
         (uint64_t)(uint)(*(int *)(unaff_RBX + 0xf08) * *(int *)(unaff_RDI + 0x438c)) * 0x4c;
    unaff_ESI = iStack000000000000003c + 1 + *(int *)(unaff_RDI + 0x438c);
    in_R11D = local_var_60;
    param_3 = iStack0000000000000038;
    iStack000000000000003c = unaff_ESI;
    if (*(int *)(unaff_RDI + 0x1e74) <= unaff_ESI) {
      if (iStack0000000000000064 == *(int *)(unaff_RDI + 0x1e74) + -1) {
        ReleaseSemaphore(*(uint64_t *)(unaff_RDI + 0x4400),1);
      }
// WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void UtilitiesSystem_704b6(void)
void UtilitiesSystem_704b6(void)
{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int in_R9D;
  if (in_R9D == *(int *)(unaff_RDI + 0x1e74) + -1) {
    ReleaseSemaphore(*(uint64_t *)(unaff_RDI + 0x4400),1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_704db(void)
void UtilitiesSystem_704db(void)
{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  ReleaseSemaphore(*(uint64_t *)(unaff_RDI + 0x4400),1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_70510(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
void UtilitiesSystem_70510(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  lVar6 = (int64_t)param_4;
  if (0 < lVar6) {
    iVar5 = 1;
    puVar4 = (uint64_t *)(param_3 + 4000);
    do {
      puVar4[-1] = *(uint64_t *)(param_2 + 0xf98);
      *puVar4 = *(uint64_t *)(param_2 + 4000);
      puVar4[1] = *(uint64_t *)(param_2 + 0xfa8);
      puVar4[2] = *(uint64_t *)(param_2 + 0xfb0);
      puVar4[-0x14] =
           (int64_t)(*(int *)(param_1 + 0x1e7c) * iVar5) * 0x4c + *(int64_t *)(param_1 + 0x1eb0);
      *(int32_t *)(puVar4 + -0x13) = *(int32_t *)(param_1 + 0x1e7c);
      *(int32_t *)((int64_t)puVar4 + -0x94) = *(int32_t *)(param_1 + 0x1e64);
      uVar2 = *(uint64_t *)(param_2 + 0xde8);
      puVar4[-0x38] = *(uint64_t *)(param_2 + 0xde0);
      puVar4[-0x37] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xdf8);
      puVar4[-0x36] = *(uint64_t *)(param_2 + 0xdf0);
      puVar4[-0x35] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe08);
      puVar4[-0x34] = *(uint64_t *)(param_2 + 0xe00);
      puVar4[-0x33] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe18);
      puVar4[-0x32] = *(uint64_t *)(param_2 + 0xe10);
      puVar4[-0x31] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe28);
      puVar4[-0x30] = *(uint64_t *)(param_2 + 0xe20);
      puVar4[-0x2f] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe38);
      puVar4[-0x2e] = *(uint64_t *)(param_2 + 0xe30);
      puVar4[-0x2d] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe48);
      puVar4[-0x2c] = *(uint64_t *)(param_2 + 0xe40);
      puVar4[-0x2b] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe58);
      puVar4[-0x2a] = *(uint64_t *)(param_2 + 0xe50);
      puVar4[-0x29] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe68);
      puVar4[-0x28] = *(uint64_t *)(param_2 + 0xe60);
      puVar4[-0x27] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe78);
      puVar4[-0x26] = *(uint64_t *)(param_2 + 0xe70);
      puVar4[-0x25] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe88);
      puVar4[-0x24] = *(uint64_t *)(param_2 + 0xe80);
      puVar4[-0x23] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xe98);
      puVar4[-0x22] = *(uint64_t *)(param_2 + 0xe90);
      puVar4[-0x21] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xea8);
      puVar4[-0x20] = *(uint64_t *)(param_2 + 0xea0);
      puVar4[-0x1f] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xeb8);
      puVar4[-0x1e] = *(uint64_t *)(param_2 + 0xeb0);
      puVar4[-0x1d] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xec8);
      puVar4[-0x1c] = *(uint64_t *)(param_2 + 0xec0);
      puVar4[-0x1b] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xed8);
      puVar4[-0x1a] = *(uint64_t *)(param_2 + 0xed0);
      puVar4[-0x19] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xee8);
      puVar4[-0x18] = *(uint64_t *)(param_2 + 0xee0);
      puVar4[-0x17] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0xef8);
      puVar4[-0x16] = *(uint64_t *)(param_2 + 0xef0);
      puVar4[-0x15] = uVar2;
      *(int8_t *)(puVar4 + -8) = *(int8_t *)(param_2 + 0xf60);
      *(int8_t *)((int64_t)puVar4 + -0x3d) = *(int8_t *)(param_2 + 0xf63);
      *(uint64_t *)((int64_t)puVar4 + -0x39) = *(uint64_t *)(param_2 + 0xf67);
      *(int32_t *)((int64_t)puVar4 + -0x2b) = *(int32_t *)(param_2 + 0xf75);
      *(int32_t *)((int64_t)puVar4 + -0x23) = *(int32_t *)(param_2 + 0xf7d);
      *(int8_t *)((int64_t)puVar4 + -0x31) = *(int8_t *)(param_2 + 0xf6f);
      *(int8_t *)(puVar4 + -6) = *(int8_t *)(param_2 + 0xf70);
      puVar4[3] = param_1 + 0x4140;
      uVar2 = *(uint64_t *)(param_2 + 0x808);
      puVar4[-0xf4] = *(uint64_t *)(param_2 + 0x800);
      puVar4[-0xf3] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x818);
      puVar4[-0xf2] = *(uint64_t *)(param_2 + 0x810);
      puVar4[-0xf1] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x7e8);
      puVar4[-0xf8] = *(uint64_t *)(param_2 + 0x7e0);
      puVar4[-0xf7] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x7f8);
      puVar4[-0xf6] = *(uint64_t *)(param_2 + 0x7f0);
      puVar4[-0xf5] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x828);
      puVar4[-0xf0] = *(uint64_t *)(param_2 + 0x820);
      puVar4[-0xef] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x838);
      puVar4[-0xee] = *(uint64_t *)(param_2 + 0x830);
      puVar4[-0xed] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x848);
      puVar4[-0xec] = *(uint64_t *)(param_2 + 0x840);
      puVar4[-0xeb] = uVar2;
      uVar2 = *(uint64_t *)(param_2 + 0x850);
      uVar3 = *(uint64_t *)(param_2 + 0x858);
      *(int32_t *)(puVar4 + -0x39) = 0xffffffff;
      puVar4[-0xea] = uVar2;
      puVar4[-0xe9] = uVar3;
      uVar1 = *(int32_t *)(puVar4 + -0x39);
      if (*(int *)(param_1 + 0x1e8c) != 0) {
        uVar1 = 0xfffffff8;
      }
      iVar5 = iVar5 + 1;
      *(int32_t *)(puVar4 + -0x39) = uVar1;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 0x254;
    } while (lVar6 != 0);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1e74)) {
    lVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(int32_t *)(lVar6 + *(int64_t *)(param_1 + 0x43a8)) = 0xffffffff;
      lVar6 = lVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x1e74));
  }
  return;
}