#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part029.c - 1 个函数

// 函数: void FUN_18066f834(longlong param_1,longlong param_2,int param_3)
void FUN_18066f834(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint uVar15;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong in_R11;
  longlong lVar20;
  undefined8 unaff_R13;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  int *piVar24;
  undefined4 in_XMM0_Da;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint uStack0000000000000050;
  int iStack0000000000000054;
  uint in_stack_00000058;
  uint uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  ulonglong in_stack_00000078;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RSI;
  iStack0000000000000038 = *(int *)(param_1 + 0x43a4);
  lVar16 = *(longlong *)(unaff_RDI + 0x12a0);
  iStack0000000000000054 = *(int *)(param_1 + 0x1e78) + iStack0000000000000038;
  uVar4 = *(undefined4 *)(unaff_RDI + 0x34e4);
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  uStack000000000000005c = *(uint *)(lVar16 + 0x10);
  uVar21 = (ulonglong)(int)uStack000000000000005c;
  uStack0000000000000050 = *(uint *)(lVar16 + 0x24);
  uVar19 = (ulonglong)(int)uStack0000000000000050;
  lVar20 = *(longlong *)(unaff_RDI + 0x12a8);
  *(longlong *)(unaff_RBP + -0x50) = lVar20;
  iStack0000000000000060 = 1 << ((byte)uVar4 & 0x1f);
  *(undefined8 *)(unaff_RBP + 8) = *(undefined8 *)(lVar20 + 0x38);
  *(undefined8 *)(unaff_RBP + 0x10) = *(undefined8 *)(lVar20 + 0x40);
  *(undefined8 *)(unaff_RBP + 0x18) = *(undefined8 *)(lVar20 + 0x48);
  lVar18 = *(longlong *)(unaff_RDI + 0x12b0);
  *(undefined4 *)(unaff_RBP + -0x1c) = *(undefined4 *)(lVar20 + 0x88);
  *(longlong *)(unaff_RBP + -0x48) = lVar16;
  *(undefined8 *)(unaff_RBP + 0x20) = *(undefined8 *)(lVar18 + 0x38);
  *(undefined8 *)(unaff_RBP + 0x28) = *(undefined8 *)(lVar18 + 0x40);
  *(undefined8 *)(unaff_RBP + 0x30) = *(undefined8 *)(lVar18 + 0x48);
  lVar20 = *(longlong *)(unaff_RDI + 0x12b8);
  *(undefined4 *)(unaff_RBP + -0x18) = *(undefined4 *)(lVar18 + 0x88);
  *(undefined4 *)(unaff_RBP + -0x20) = 0;
  *(undefined8 *)(unaff_RBP + 0x38) = *(undefined8 *)(lVar20 + 0x38);
  *(undefined8 *)(unaff_RBP + 0x40) = *(undefined8 *)(lVar20 + 0x40);
  *(undefined8 *)(unaff_RBP + 0x48) = *(undefined8 *)(lVar20 + 0x48);
  *(undefined4 *)(unaff_RBP + -0x14) = *(undefined4 *)(lVar20 + 0x88);
  *(undefined8 *)(unaff_RBP + -0x68) = *(undefined8 *)(lVar16 + 0x38);
  *(undefined8 *)(unaff_RBP + -0x60) = *(undefined8 *)(lVar16 + 0x40);
  *(undefined8 *)(unaff_RBP + -0x58) = *(undefined8 *)(lVar16 + 0x48);
  *(uint *)(param_2 + 0xf10) = (uint)(param_3 != 0);
  iStack000000000000003c = param_3;
  if (param_3 < *(int *)(unaff_RDI + 0x1e74)) {
    in_stack_00000078 = uVar21;
    *(ulonglong *)(unaff_RBP + -0x80) = uVar19;
    uVar22 = uVar21;
    do {
      iStack0000000000000064 = iStack000000000000003c;
      *(longlong *)(param_2 + 0xfb8) =
           ((longlong)(iStack000000000000003c % iStack0000000000000060) + 0x15c) * 0x30 + unaff_RDI;
      if (iStack000000000000003c < 1) {
        piVar24 = &stack0x00000054;
      }
      else {
        piVar24 = (int *)(*(longlong *)(unaff_RDI + 0x43a8) +
                         (longlong)(iStack000000000000003c + -1) * 4);
      }
      lVar16 = *(longlong *)(unaff_RDI + 0x43a8);
      lVar20 = (longlong)iStack000000000000003c;
      *(int **)(unaff_RBP + -0x78) = piVar24;
      *(longlong *)(unaff_RBP + -0x70) = lVar16 + lVar20 * 4;
      *(undefined8 *)(param_2 + 0xf50) = *(undefined8 *)(unaff_RDI + 0x2c18);
      puVar6 = *(undefined8 **)(param_2 + 0xf58);
      iStack0000000000000044 = iStack000000000000003c * (int)uVar22 * 0x10;
      iStack0000000000000048 = iStack000000000000003c * (int)uVar19 * 8;
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)(param_2 + 0xf14) = 0;
      *(int *)(param_2 + 0xf8c) = iStack000000000000003c * -0x80;
      *(int *)(param_2 + 0xf90) =
           ((*(int *)(unaff_RDI + 0x1e74) - iStack000000000000003c) + -1) * 0x80;
      if (*(int *)(unaff_RDI + 0x2be0) == 0) {
        lVar16 = *(longlong *)(unaff_RBP + -0x60);
        *(longlong *)(param_2 + 0xf18) =
             (longlong)iStack0000000000000044 + *(longlong *)(unaff_RBP + -0x68);
        *(longlong *)(param_2 + 0xf20) = lVar16 + iStack0000000000000048;
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(unaff_RBP + -0x58) + (longlong)iStack0000000000000048;
        *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf18) + -1;
        *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf20) + -1;
        puVar7 = *(undefined1 **)(param_2 + 0xf38);
        *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf28) + -1;
        puVar8 = *(undefined1 **)(param_2 + 0xf40);
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(param_2 + 0xf18) - (longlong)*(int *)(param_2 + 0xe80);
        lVar16 = 0x10;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(param_2 + 0xf20) - (longlong)*(int *)(param_2 + 0xe94);
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(param_2 + 0xf28) - (longlong)*(int *)(param_2 + 0xe94);
        *(undefined4 *)(param_2 + 0xf48) = *(undefined4 *)(param_2 + 0xe80);
        *(undefined4 *)(param_2 + 0xf4c) = *(undefined4 *)(param_2 + 0xe94);
        lVar18 = (longlong)*(int *)(param_2 + 0xe94);
        puVar14 = *(undefined1 **)(param_2 + 0xf30);
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
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x43b0) + lVar20 * 8) + 0x20;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + lVar20 * 8) + 0x10;
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + lVar20 * 8) + 0x10;
        *(undefined8 *)(param_2 + 0xf30) =
             *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43c8) + lVar20 * 8);
        *(undefined8 *)(param_2 + 0xf38) =
             *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8);
        *(undefined8 *)(param_2 + 0xf40) =
             *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8);
        *(undefined4 *)(param_2 + 0xf48) = 1;
        *(undefined4 *)(param_2 + 0xf4c) = 1;
      }
      uVar15 = 0;
      if (0 < *(int *)(unaff_RDI + 0x1e78)) {
        in_stack_00000070 = 0x10;
        iStack000000000000004c = 0;
        in_stack_00000068 = 0x20;
        do {
          iVar5 = iStack0000000000000038;
          **(int **)(unaff_RBP + -0x70) = uVar15 - 1;
          if (((uVar15 & iStack0000000000000038 - 1U) == 0) &&
             (*piVar24 - iStack0000000000000038 < (int)uVar15)) {
            do {
              in_XMM0_Da = Sleep(0);
            } while (*piVar24 - iVar5 < (int)uVar15);
            uVar21 = (ulonglong)(int)uVar22;
          }
          lVar16 = *(longlong *)(param_2 + 0xf00);
          lVar17 = (longlong)iStack0000000000000048;
          *(int *)(param_2 + 0xf84) = iStack000000000000004c;
          iVar5 = *(int *)(unaff_RDI + 0x1e78);
          *(longlong *)(param_2 + 0xea8) =
               *(longlong *)(unaff_RBP + -0x68) + (longlong)iStack0000000000000044;
          *(longlong *)(param_2 + 0xeb0) = *(longlong *)(unaff_RBP + -0x60) + lVar17;
          lVar18 = *(longlong *)(unaff_RBP + -0x58);
          *(uint *)(param_2 + 0xf88) = ((iVar5 - uVar15) + -1) * 0x80;
          *(longlong *)(param_2 + 0xeb8) = lVar18 + lVar17;
          *(longlong *)(param_2 + 0xe18) =
               *(longlong *)(unaff_RBP + -0x10 + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) +
               (longlong)iStack0000000000000044;
          *(longlong *)(param_2 + 0xe20) =
               *(longlong *)(unaff_RBP + -8 + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
          *(longlong *)(param_2 + 0xe28) =
               *(longlong *)(unaff_RBP + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               *(uint *)(unaff_RBP + -0x20 + (ulonglong)*(byte *)(lVar16 + 2) * 4);
          in_XMM0_Da = FUN_18066f3e0(in_XMM0_Da,param_2,0);
          uVar13 = uStack0000000000000050;
          *(undefined4 *)(param_2 + 0xf14) = 1;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               (uint)(*(int *)(*(longlong *)(param_2 + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
          *(longlong *)(param_2 + 0xf18) = *(longlong *)(param_2 + 0xf18) + 0x10;
          *(longlong *)(param_2 + 0xf20) = *(longlong *)(param_2 + 0xf20) + 8;
          *(longlong *)(param_2 + 0xf28) = *(longlong *)(param_2 + 0xf28) + 8;
          if (*(int *)(unaff_RDI + 0x2be0) == 0) {
            *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf30) + 0x10;
            *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf38) + 8;
            *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf40) + 8;
            if (*(int *)(unaff_RDI + 0x2be0) != 0) goto LAB_18066fdc2;
          }
          else {
LAB_18066fdc2:
            pbVar9 = *(byte **)(param_2 + 0xf00);
            bVar3 = *pbVar9;
            if (((bVar3 == 4) || (bVar3 == 9)) || (bVar12 = true, pbVar9[9] == 0)) {
              bVar12 = false;
            }
            bVar3 = *(byte *)((ulonglong)*(byte *)((ulonglong)bVar3 + 0xd00 + unaff_RDI + 0x1ed0) +
                              unaff_RDI + 0x1ed0 + 0xc40 +
                             ((ulonglong)pbVar9[2] + (ulonglong)pbVar9[0xb] * 4) * 4);
            in_stack_00000058 = (uint)bVar3;
            if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
              puVar1 = (undefined4 *)(uVar21 * 0xf + *(longlong *)(param_2 + 0xea8));
              in_XMM0_Da = *puVar1;
              uVar4 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              lVar16 = *(longlong *)(unaff_RBP + -0x80) * 7;
              puVar1 = (undefined4 *)
                       (*(longlong *)(*(longlong *)(unaff_RDI + 0x43b0) + 8 + lVar20 * 8) +
                       in_stack_00000068);
              *puVar1 = in_XMM0_Da;
              puVar1[1] = uVar4;
              puVar1[2] = uVar10;
              puVar1[3] = uVar11;
              *(undefined8 *)
               (in_stack_00000070 +
               *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + 8 + lVar20 * 8)) =
                   *(undefined8 *)(lVar16 + *(longlong *)(param_2 + 0xeb0));
              *(undefined8 *)
               (in_stack_00000070 +
               *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + 8 + lVar20 * 8)) =
                   *(undefined8 *)(lVar16 + *(longlong *)(param_2 + 0xeb8));
            }
            if ((uVar15 != *(int *)(unaff_RDI + 0x1e78) - 1U) &&
               (*(char *)(*(longlong *)(param_2 + 0xf00) + 0x4e) == '\0')) {
              lVar18 = 0;
              lVar16 = in_stack_00000078 * 2;
              do {
                lVar17 = lVar16 + in_stack_00000078;
                *(undefined1 *)
                 (lVar18 + *(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lVar20 * 8)) =
                     *(undefined1 *)
                      (lVar16 + in_stack_00000078 * -2 + 0xf + *(longlong *)(param_2 + 0xea8));
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 1 + lVar18) =
                     *(undefined1 *)
                      ((*(longlong *)(param_2 + 0xea8) + lVar16 + 0xf) - in_stack_00000078);
                lVar2 = lVar16 + 0xf;
                lVar16 = lVar16 + in_stack_00000078 * 4;
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 2 + lVar18) =
                     *(undefined1 *)(lVar2 + *(longlong *)(param_2 + 0xea8));
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lVar20 * 8) + 3 + lVar18) =
                     *(undefined1 *)(lVar17 + 0xf + *(longlong *)(param_2 + 0xea8));
                lVar18 = lVar18 + 4;
              } while (lVar18 < 0x10);
              lVar16 = *(longlong *)(unaff_RBP + -0x80);
              **(undefined1 **)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7);
              **(undefined1 **)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 1) =
                   *(undefined1 *)(lVar16 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 1) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 2) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7 + lVar16 * 2);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 2) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 2);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 3) =
                   *(undefined1 *)(lVar16 * 3 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 3) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 3);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 4) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7 + lVar16 * 4);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 4) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 4);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 5) =
                   *(undefined1 *)(lVar16 * 5 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 5) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 5);
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 6) =
                   *(undefined1 *)(lVar16 * 6 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 6) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 6);
              uVar22 = (ulonglong)uStack000000000000005c;
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lVar20 * 8) + 7) =
                   *(undefined1 *)(lVar16 * 7 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lVar20 * 8) + 7) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + lVar16 * 7);
            }
            uVar23 = (uint)bVar3;
            lVar16 = unaff_RDI + 0x1ed0;
            if (uVar23 != 0) {
              if (*(int *)(unaff_RDI + 0x1ec0) == 0) {
                lVar18 = (longlong)(int)uVar23;
                *(longlong *)(unaff_RBP + -0x40) = lVar18 * 0x10 + lVar16;
                *(longlong *)(unaff_RBP + -0x38) = (lVar18 + 0x40) * 0x10 + lVar16;
                *(longlong *)(unaff_RBP + -0x30) = (lVar18 + 0x80) * 0x10 + lVar16;
                *(ulonglong *)(unaff_RBP + -0x28) =
                     ((ulonglong)
                      *(byte *)(((longlong)*(int *)(unaff_RDI + 0x1e64) + 0x32) * 0x40 + lVar18 +
                               lVar16) + 0xc0) * 0x10 + lVar16;
                if (0 < (int)uVar15) {
                  in_XMM0_Da = FUN_18069cb40(*(undefined8 *)(param_2 + 0xea8),
                                             *(undefined8 *)(param_2 + 0xeb0),
                                             *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uStack0000000000000050);
                }
                if (!bVar12) {
                  in_XMM0_Da = FUN_18069ca00(*(undefined8 *)(param_2 + 0xea8),
                                             *(undefined8 *)(param_2 + 0xeb0),
                                             *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
                if (0 < lVar20) {
                  in_XMM0_Da = FUN_18069cad0(*(undefined8 *)(param_2 + 0xea8),
                                             *(undefined8 *)(param_2 + 0xeb0),
                                             *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
                if (!bVar12) {
                  in_XMM0_Da = FUN_18069c900(*(undefined8 *)(param_2 + 0xea8),
                                             *(undefined8 *)(param_2 + 0xeb0),
                                             *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff,
                                             uVar13);
                }
              }
              else {
                if (0 < (int)uVar15) {
                  in_XMM0_Da = func_0x00018001c253(*(undefined8 *)(param_2 + 0xea8),
                                                   uVar22 & 0xffffffff,
                                                   (longlong)(int)uVar23 * 0x10 + lVar16);
                }
                if (!bVar12) {
                  in_XMM0_Da = FUN_18069ca80(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                             ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar16);
                }
                if (0 < lVar20) {
                  in_XMM0_Da = func_0x00018001c10b(*(undefined8 *)(param_2 + 0xea8),
                                                   uVar22 & 0xffffffff,
                                                   (longlong)(int)uVar23 * 0x10 + lVar16);
                }
                if (!bVar12) {
                  in_XMM0_Da = FUN_18069c990(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                             ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar16);
                }
              }
            }
          }
          uVar15 = uVar15 + 1;
          iStack000000000000004c = iStack000000000000004c + -0x80;
          iStack0000000000000044 = iStack0000000000000044 + 0x10;
          iStack0000000000000048 = iStack0000000000000048 + 8;
          *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
          *(longlong *)(param_2 + 0xf50) = *(longlong *)(param_2 + 0xf50) + 9;
          in_stack_00000068 = in_stack_00000068 + 0x10;
          in_stack_00000070 = in_stack_00000070 + 8;
          piVar24 = *(int **)(unaff_RBP + -0x78);
          uVar21 = (ulonglong)(int)uVar22;
        } while ((int)uVar15 < *(int *)(unaff_RDI + 0x1e78));
        uVar21 = (ulonglong)(int)uVar22;
      }
      if (*(int *)(unaff_RDI + 0x2be0) == 0) {
        in_XMM0_Da = func_0x00018069cbd0(*(undefined8 *)(unaff_RBP + -0x48),
                                         *(longlong *)(param_2 + 0xea8) + 0x10,
                                         *(longlong *)(param_2 + 0xeb0) + 8,
                                         *(longlong *)(param_2 + 0xeb8) + 8);
      }
      else if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
        lVar16 = 0;
        iVar5 = **(int **)(unaff_RBP + -0x50);
        lVar18 = (longlong)((iVar5 >> 1) + 0x10);
        do {
          lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43b0) + 8 + lVar20 * 8) +
                   (longlong)(iVar5 + 0x20);
          *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
          lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + 8 + lVar20 * 8) + lVar18;
          *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
          lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + 8 + lVar20 * 8) + lVar18;
          *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
          lVar16 = lVar16 + 1;
        } while (lVar16 < 4);
      }
      uVar19 = (ulonglong)uStack0000000000000050;
      **(int **)(unaff_RBP + -0x70) = uVar15 + iStack0000000000000038;
      *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
      *(undefined4 *)(param_2 + 0xf10) = 1;
      *(longlong *)(param_2 + 0xf00) =
           *(longlong *)(param_2 + 0xf00) +
           (ulonglong)(uint)(*(int *)(param_2 + 0xf08) * *(int *)(unaff_RDI + 0x438c)) * 0x4c;
      iStack000000000000003c = iStack000000000000003c + 1 + *(int *)(unaff_RDI + 0x438c);
      param_3 = iStack0000000000000064;
    } while (iStack000000000000003c < *(int *)(unaff_RDI + 0x1e74));
  }
  if (param_3 == *(int *)(unaff_RDI + 0x1e74) + -1) {
    ReleaseSemaphore(*(undefined8 *)(unaff_RDI + 0x4400),1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





