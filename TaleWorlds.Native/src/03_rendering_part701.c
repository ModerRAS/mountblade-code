#include "TaleWorlds.Native.Split.h"

// 03_rendering_part701.c - 4 个函数

// 函数: void FUN_18066f94e(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_18066f94e(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 *puVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  uint uVar15;
  longlong unaff_RDI;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong in_R10;
  int in_R11D;
  ulonglong uVar19;
  ulonglong unaff_R13;
  ulonglong uVar20;
  uint uVar21;
  int *piVar22;
  longlong lStack0000000000000030;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint in_stack_00000050;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  int in_stack_00000060;
  int iStack0000000000000064;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  
  *(ulonglong *)(unaff_RBP + -0x80) = in_R10;
  uVar19 = unaff_R13;
  uVar20 = unaff_R13;
  do {
    iStack0000000000000064 = unaff_ESI;
    *(longlong *)(unaff_RBX + 0xfb8) = ((longlong)(unaff_ESI % in_R11D) + 0x15c) * 0x30 + unaff_RDI;
    if (unaff_ESI < 1) {
      piVar22 = (int *)&stack0x00000054;
    }
    else {
      piVar22 = (int *)(*(longlong *)(unaff_RDI + 0x43a8) + (longlong)(unaff_ESI + -1) * 4);
    }
    lVar16 = *(longlong *)(unaff_RDI + 0x43a8);
    lStack0000000000000030 = (longlong)unaff_ESI;
    *(int **)(unaff_RBP + -0x78) = piVar22;
    *(longlong *)(unaff_RBP + -0x70) = lVar16 + lStack0000000000000030 * 4;
    *(undefined8 *)(unaff_RBX + 0xf50) = *(undefined8 *)(unaff_RDI + 0x2c18);
    puVar6 = *(undefined8 **)(unaff_RBX + 0xf58);
    iStack0000000000000044 = unaff_ESI * (int)uVar20 * 0x10;
    iStack0000000000000048 = unaff_ESI * (int)in_R10 * 8;
    *puVar6 = 0;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(undefined4 *)(unaff_RBX + 0xf14) = 0;
    *(int *)(unaff_RBX + 0xf8c) = unaff_ESI * -0x80;
    *(int *)(unaff_RBX + 0xf90) = ((*(int *)(unaff_RDI + 0x1e74) - unaff_ESI) + -1) * 0x80;
    if (*(int *)(unaff_RDI + 0x2be0) == 0) {
      lVar16 = *(longlong *)(unaff_RBP + -0x60);
      *(longlong *)(unaff_RBX + 0xf18) =
           (longlong)iStack0000000000000044 + *(longlong *)(unaff_RBP + -0x68);
      *(longlong *)(unaff_RBX + 0xf20) = lVar16 + iStack0000000000000048;
      *(longlong *)(unaff_RBX + 0xf28) =
           *(longlong *)(unaff_RBP + -0x58) + (longlong)iStack0000000000000048;
      *(longlong *)(unaff_RBX + 0xf30) = *(longlong *)(unaff_RBX + 0xf18) + -1;
      *(longlong *)(unaff_RBX + 0xf38) = *(longlong *)(unaff_RBX + 0xf20) + -1;
      puVar7 = *(undefined1 **)(unaff_RBX + 0xf38);
      *(longlong *)(unaff_RBX + 0xf40) = *(longlong *)(unaff_RBX + 0xf28) + -1;
      puVar8 = *(undefined1 **)(unaff_RBX + 0xf40);
      *(longlong *)(unaff_RBX + 0xf18) =
           *(longlong *)(unaff_RBX + 0xf18) - (longlong)*(int *)(unaff_RBX + 0xe80);
      lVar16 = 0x10;
      *(longlong *)(unaff_RBX + 0xf20) =
           *(longlong *)(unaff_RBX + 0xf20) - (longlong)*(int *)(unaff_RBX + 0xe94);
      *(longlong *)(unaff_RBX + 0xf28) =
           *(longlong *)(unaff_RBX + 0xf28) - (longlong)*(int *)(unaff_RBX + 0xe94);
      *(undefined4 *)(unaff_RBX + 0xf48) = *(undefined4 *)(unaff_RBX + 0xe80);
      *(undefined4 *)(unaff_RBX + 0xf4c) = *(undefined4 *)(unaff_RBX + 0xe94);
      lVar18 = (longlong)*(int *)(unaff_RBX + 0xe94);
      puVar14 = *(undefined1 **)(unaff_RBX + 0xf30);
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
      *(longlong *)(unaff_RBX + 0xf18) =
           *(longlong *)(*(longlong *)(unaff_RDI + 0x43b0) + lStack0000000000000030 * 8) + 0x20;
      *(longlong *)(unaff_RBX + 0xf20) =
           *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + lStack0000000000000030 * 8) + 0x10;
      *(longlong *)(unaff_RBX + 0xf28) =
           *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + lStack0000000000000030 * 8) + 0x10;
      *(undefined8 *)(unaff_RBX + 0xf30) =
           *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8);
      *(undefined8 *)(unaff_RBX + 0xf38) =
           *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8);
      *(undefined8 *)(unaff_RBX + 0xf40) =
           *(undefined8 *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8);
      *(undefined4 *)(unaff_RBX + 0xf48) = 1;
      *(undefined4 *)(unaff_RBX + 0xf4c) = 1;
    }
    uVar15 = 0;
    if (0 < *(int *)(unaff_RDI + 0x1e78)) {
      in_stack_00000070 = 0x10;
      iStack000000000000004c = 0;
      in_stack_00000068 = 0x20;
      do {
        **(int **)(unaff_RBP + -0x70) = uVar15 - 1;
        if (((uVar15 & param_3 - 1U) == 0) && (*piVar22 - param_3 < (int)uVar15)) {
          do {
            Sleep(0);
          } while (*piVar22 - iStack0000000000000038 < (int)uVar15);
          uVar19 = (ulonglong)(int)uVar20;
        }
        lVar16 = *(longlong *)(unaff_RBX + 0xf00);
        lVar17 = (longlong)iStack0000000000000048;
        *(int *)(unaff_RBX + 0xf84) = iStack000000000000004c;
        iVar5 = *(int *)(unaff_RDI + 0x1e78);
        *(longlong *)(unaff_RBX + 0xea8) =
             *(longlong *)(unaff_RBP + -0x68) + (longlong)iStack0000000000000044;
        *(longlong *)(unaff_RBX + 0xeb0) = *(longlong *)(unaff_RBP + -0x60) + lVar17;
        lVar18 = *(longlong *)(unaff_RBP + -0x58);
        *(uint *)(unaff_RBX + 0xf88) = ((iVar5 - uVar15) + -1) * 0x80;
        *(longlong *)(unaff_RBX + 0xeb8) = lVar18 + lVar17;
        *(longlong *)(unaff_RBX + 0xe18) =
             *(longlong *)(unaff_RBP + -0x10 + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) +
             (longlong)iStack0000000000000044;
        *(longlong *)(unaff_RBX + 0xe20) =
             *(longlong *)(unaff_RBP + -8 + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
        *(longlong *)(unaff_RBX + 0xe28) =
             *(longlong *)(unaff_RBP + (ulonglong)*(byte *)(lVar16 + 2) * 0x18) + lVar17;
        *(uint *)(unaff_RBX + 0xfc0) =
             *(uint *)(unaff_RBX + 0xfc0) |
             *(uint *)(unaff_RBP + -0x20 + (ulonglong)*(byte *)(lVar16 + 2) * 4);
        FUN_18066f3e0();
        *(undefined4 *)(unaff_RBX + 0xf14) = 1;
        *(uint *)(unaff_RBX + 0xfc0) =
             *(uint *)(unaff_RBX + 0xfc0) |
             (uint)(*(int *)(*(longlong *)(unaff_RBX + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
        *(longlong *)(unaff_RBX + 0xf18) = *(longlong *)(unaff_RBX + 0xf18) + 0x10;
        *(longlong *)(unaff_RBX + 0xf20) = *(longlong *)(unaff_RBX + 0xf20) + 8;
        *(longlong *)(unaff_RBX + 0xf28) = *(longlong *)(unaff_RBX + 0xf28) + 8;
        if (*(int *)(unaff_RDI + 0x2be0) == 0) {
          *(longlong *)(unaff_RBX + 0xf30) = *(longlong *)(unaff_RBX + 0xf30) + 0x10;
          *(longlong *)(unaff_RBX + 0xf38) = *(longlong *)(unaff_RBX + 0xf38) + 8;
          *(longlong *)(unaff_RBX + 0xf40) = *(longlong *)(unaff_RBX + 0xf40) + 8;
          if (*(int *)(unaff_RDI + 0x2be0) != 0) goto LAB_18066fdc2;
        }
        else {
LAB_18066fdc2:
          pbVar9 = *(byte **)(unaff_RBX + 0xf00);
          bVar4 = *pbVar9;
          if (((bVar4 == 4) || (bVar4 == 9)) || (bVar13 = true, pbVar9[9] == 0)) {
            bVar13 = false;
          }
          bVar4 = *(byte *)((ulonglong)*(byte *)((ulonglong)bVar4 + 0xd00 + unaff_RDI + 0x1ed0) +
                            unaff_RDI + 0x1ed0 + 0xc40 +
                           ((ulonglong)pbVar9[2] + (ulonglong)pbVar9[0xb] * 4) * 4);
          uStack0000000000000058 = (uint)bVar4;
          if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
            puVar1 = (undefined4 *)(uVar19 * 0xf + *(longlong *)(unaff_RBX + 0xea8));
            uVar10 = puVar1[1];
            uVar11 = puVar1[2];
            uVar12 = puVar1[3];
            lVar16 = *(longlong *)(unaff_RBP + -0x80) * 7;
            puVar2 = (undefined4 *)
                     (*(longlong *)
                       (*(longlong *)(unaff_RDI + 0x43b0) + 8 + lStack0000000000000030 * 8) +
                     in_stack_00000068);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            *(undefined8 *)
             (in_stack_00000070 +
             *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + 8 + lStack0000000000000030 * 8)) =
                 *(undefined8 *)(lVar16 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined8 *)
             (in_stack_00000070 +
             *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + 8 + lStack0000000000000030 * 8)) =
                 *(undefined8 *)(lVar16 + *(longlong *)(unaff_RBX + 0xeb8));
          }
          if ((uVar15 != *(int *)(unaff_RDI + 0x1e78) - 1U) &&
             (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 0x4e) == '\0')) {
            lVar18 = 0;
            lVar16 = unaff_R13 * 2;
            do {
              lVar17 = lVar16 + unaff_R13;
              *(undefined1 *)
               (lVar18 + *(longlong *)
                          (*(longlong *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8)) =
                   *(undefined1 *)(lVar16 + unaff_R13 * -2 + 0xf + *(longlong *)(unaff_RBX + 0xea8))
              ;
              *(undefined1 *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 1 +
               lVar18) = *(undefined1 *)
                          ((*(longlong *)(unaff_RBX + 0xea8) + lVar16 + 0xf) - unaff_R13);
              lVar3 = lVar16 + 0xf;
              lVar16 = lVar16 + unaff_R13 * 4;
              *(undefined1 *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 2 +
               lVar18) = *(undefined1 *)(lVar3 + *(longlong *)(unaff_RBX + 0xea8));
              *(undefined1 *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x43c8) + lStack0000000000000030 * 8) + 3 +
               lVar18) = *(undefined1 *)(lVar17 + 0xf + *(longlong *)(unaff_RBX + 0xea8));
              lVar18 = lVar18 + 4;
            } while (lVar18 < 0x10);
            lVar16 = *(longlong *)(unaff_RBP + -0x80);
            **(undefined1 **)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb0) + 7);
            **(undefined1 **)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 1) =
                 *(undefined1 *)(lVar16 + 7 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 1) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 2) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb0) + 7 + lVar16 * 2);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 2) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 2);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 3) =
                 *(undefined1 *)(lVar16 * 3 + 7 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 3) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 3);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 4) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb0) + 7 + lVar16 * 4);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 4) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 4);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 5) =
                 *(undefined1 *)(lVar16 * 5 + 7 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 5) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 5);
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 6) =
                 *(undefined1 *)(lVar16 * 6 + 7 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 6) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 6);
            uVar20 = (ulonglong)uStack000000000000005c;
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d0) + lStack0000000000000030 * 8) + 7) =
                 *(undefined1 *)(lVar16 * 7 + 7 + *(longlong *)(unaff_RBX + 0xeb0));
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x43d8) + lStack0000000000000030 * 8) + 7) =
                 *(undefined1 *)(*(longlong *)(unaff_RBX + 0xeb8) + 7 + lVar16 * 7);
          }
          uVar21 = (uint)bVar4;
          lVar16 = unaff_RDI + 0x1ed0;
          if (uVar21 != 0) {
            if (*(int *)(unaff_RDI + 0x1ec0) == 0) {
              lVar18 = (longlong)(int)uVar21;
              *(longlong *)(unaff_RBP + -0x40) = lVar18 * 0x10 + lVar16;
              *(longlong *)(unaff_RBP + -0x38) = (lVar18 + 0x40) * 0x10 + lVar16;
              *(longlong *)(unaff_RBP + -0x30) = (lVar18 + 0x80) * 0x10 + lVar16;
              *(ulonglong *)(unaff_RBP + -0x28) =
                   ((ulonglong)
                    *(byte *)(((longlong)*(int *)(unaff_RDI + 0x1e64) + 0x32) * 0x40 + lVar18 +
                             lVar16) + 0xc0) * 0x10 + lVar16;
              if (0 < (int)uVar15) {
                FUN_18069cb40(*(undefined8 *)(unaff_RBX + 0xea8),*(undefined8 *)(unaff_RBX + 0xeb0),
                              *(undefined8 *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              in_stack_00000050);
              }
              if (!bVar13) {
                FUN_18069ca00(*(undefined8 *)(unaff_RBX + 0xea8),*(undefined8 *)(unaff_RBX + 0xeb0),
                              *(undefined8 *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              in_stack_00000050);
              }
              if (0 < lStack0000000000000030) {
                FUN_18069cad0(*(undefined8 *)(unaff_RBX + 0xea8),*(undefined8 *)(unaff_RBX + 0xeb0),
                              *(undefined8 *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              in_stack_00000050);
              }
              if (!bVar13) {
                FUN_18069c900(*(undefined8 *)(unaff_RBX + 0xea8),*(undefined8 *)(unaff_RBX + 0xeb0),
                              *(undefined8 *)(unaff_RBX + 0xeb8),uVar20 & 0xffffffff,
                              in_stack_00000050);
              }
            }
            else {
              if (0 < (int)uVar15) {
                func_0x00018001c253(*(undefined8 *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                                    (longlong)(int)uVar21 * 0x10 + lVar16);
              }
              if (!bVar13) {
                FUN_18069ca80(*(undefined8 *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                              ((longlong)(int)uVar21 + 0x40) * 0x10 + lVar16);
              }
              if (0 < lStack0000000000000030) {
                func_0x00018001c10b(*(undefined8 *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                                    (longlong)(int)uVar21 * 0x10 + lVar16);
              }
              if (!bVar13) {
                FUN_18069c990(*(undefined8 *)(unaff_RBX + 0xea8),uVar20 & 0xffffffff,
                              ((longlong)(int)uVar21 + 0x40) * 0x10 + lVar16);
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        iStack000000000000004c = iStack000000000000004c + -0x80;
        iStack0000000000000044 = iStack0000000000000044 + 0x10;
        iStack0000000000000048 = iStack0000000000000048 + 8;
        *(longlong *)(unaff_RBX + 0xf00) = *(longlong *)(unaff_RBX + 0xf00) + 0x4c;
        *(longlong *)(unaff_RBX + 0xf50) = *(longlong *)(unaff_RBX + 0xf50) + 9;
        in_stack_00000068 = in_stack_00000068 + 0x10;
        in_stack_00000070 = in_stack_00000070 + 8;
        piVar22 = *(int **)(unaff_RBP + -0x78);
        uVar19 = (ulonglong)(int)uVar20;
        param_3 = iStack0000000000000038;
      } while ((int)uVar15 < *(int *)(unaff_RDI + 0x1e78));
      uVar19 = (ulonglong)(int)uVar20;
    }
    if (*(int *)(unaff_RDI + 0x2be0) == 0) {
      func_0x00018069cbd0(*(undefined8 *)(unaff_RBP + -0x48),*(longlong *)(unaff_RBX + 0xea8) + 0x10
                          ,*(longlong *)(unaff_RBX + 0xeb0) + 8,*(longlong *)(unaff_RBX + 0xeb8) + 8
                         );
    }
    else if (iStack000000000000003c != *(int *)(unaff_RDI + 0x1e74) + -1) {
      lVar16 = 0;
      iVar5 = **(int **)(unaff_RBP + -0x50);
      lVar18 = (longlong)((iVar5 >> 1) + 0x10);
      do {
        lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43b0) + 8 + lStack0000000000000030 * 8) +
                 (longlong)(iVar5 + 0x20);
        *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
        lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43b8) + 8 + lStack0000000000000030 * 8) +
                 lVar18;
        *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
        lVar17 = *(longlong *)(*(longlong *)(unaff_RDI + 0x43c0) + 8 + lStack0000000000000030 * 8) +
                 lVar18;
        *(undefined1 *)(lVar17 + lVar16) = *(undefined1 *)(lVar17 + -1);
        lVar16 = lVar16 + 1;
      } while (lVar16 < 4);
    }
    in_R10 = (ulonglong)in_stack_00000050;
    **(int **)(unaff_RBP + -0x70) = uVar15 + iStack0000000000000038;
    *(longlong *)(unaff_RBX + 0xf00) = *(longlong *)(unaff_RBX + 0xf00) + 0x4c;
    *(undefined4 *)(unaff_RBX + 0xf10) = 1;
    *(longlong *)(unaff_RBX + 0xf00) =
         *(longlong *)(unaff_RBX + 0xf00) +
         (ulonglong)(uint)(*(int *)(unaff_RBX + 0xf08) * *(int *)(unaff_RDI + 0x438c)) * 0x4c;
    unaff_ESI = iStack000000000000003c + 1 + *(int *)(unaff_RDI + 0x438c);
    in_R11D = in_stack_00000060;
    param_3 = iStack0000000000000038;
    iStack000000000000003c = unaff_ESI;
    if (*(int *)(unaff_RDI + 0x1e74) <= unaff_ESI) {
      if (iStack0000000000000064 == *(int *)(unaff_RDI + 0x1e74) + -1) {
        ReleaseSemaphore(*(undefined8 *)(unaff_RDI + 0x4400),1);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_1806704b6(void)
void FUN_1806704b6(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  int in_R9D;
  
  if (in_R9D == *(int *)(unaff_RDI + 0x1e74) + -1) {
    ReleaseSemaphore(*(undefined8 *)(unaff_RDI + 0x4400),1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806704db(void)
void FUN_1806704db(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  ReleaseSemaphore(*(undefined8 *)(unaff_RDI + 0x4400),1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180670510(longlong param_1,longlong param_2,longlong param_3,int param_4)
void FUN_180670510(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_4;
  if (0 < lVar6) {
    iVar5 = 1;
    puVar4 = (undefined8 *)(param_3 + 4000);
    do {
      puVar4[-1] = *(undefined8 *)(param_2 + 0xf98);
      *puVar4 = *(undefined8 *)(param_2 + 4000);
      puVar4[1] = *(undefined8 *)(param_2 + 0xfa8);
      puVar4[2] = *(undefined8 *)(param_2 + 0xfb0);
      puVar4[-0x14] =
           (longlong)(*(int *)(param_1 + 0x1e7c) * iVar5) * 0x4c + *(longlong *)(param_1 + 0x1eb0);
      *(undefined4 *)(puVar4 + -0x13) = *(undefined4 *)(param_1 + 0x1e7c);
      *(undefined4 *)((longlong)puVar4 + -0x94) = *(undefined4 *)(param_1 + 0x1e64);
      uVar2 = *(undefined8 *)(param_2 + 0xde8);
      puVar4[-0x38] = *(undefined8 *)(param_2 + 0xde0);
      puVar4[-0x37] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xdf8);
      puVar4[-0x36] = *(undefined8 *)(param_2 + 0xdf0);
      puVar4[-0x35] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe08);
      puVar4[-0x34] = *(undefined8 *)(param_2 + 0xe00);
      puVar4[-0x33] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe18);
      puVar4[-0x32] = *(undefined8 *)(param_2 + 0xe10);
      puVar4[-0x31] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe28);
      puVar4[-0x30] = *(undefined8 *)(param_2 + 0xe20);
      puVar4[-0x2f] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe38);
      puVar4[-0x2e] = *(undefined8 *)(param_2 + 0xe30);
      puVar4[-0x2d] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe48);
      puVar4[-0x2c] = *(undefined8 *)(param_2 + 0xe40);
      puVar4[-0x2b] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe58);
      puVar4[-0x2a] = *(undefined8 *)(param_2 + 0xe50);
      puVar4[-0x29] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe68);
      puVar4[-0x28] = *(undefined8 *)(param_2 + 0xe60);
      puVar4[-0x27] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe78);
      puVar4[-0x26] = *(undefined8 *)(param_2 + 0xe70);
      puVar4[-0x25] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe88);
      puVar4[-0x24] = *(undefined8 *)(param_2 + 0xe80);
      puVar4[-0x23] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xe98);
      puVar4[-0x22] = *(undefined8 *)(param_2 + 0xe90);
      puVar4[-0x21] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xea8);
      puVar4[-0x20] = *(undefined8 *)(param_2 + 0xea0);
      puVar4[-0x1f] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xeb8);
      puVar4[-0x1e] = *(undefined8 *)(param_2 + 0xeb0);
      puVar4[-0x1d] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xec8);
      puVar4[-0x1c] = *(undefined8 *)(param_2 + 0xec0);
      puVar4[-0x1b] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xed8);
      puVar4[-0x1a] = *(undefined8 *)(param_2 + 0xed0);
      puVar4[-0x19] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xee8);
      puVar4[-0x18] = *(undefined8 *)(param_2 + 0xee0);
      puVar4[-0x17] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xef8);
      puVar4[-0x16] = *(undefined8 *)(param_2 + 0xef0);
      puVar4[-0x15] = uVar2;
      *(undefined1 *)(puVar4 + -8) = *(undefined1 *)(param_2 + 0xf60);
      *(undefined1 *)((longlong)puVar4 + -0x3d) = *(undefined1 *)(param_2 + 0xf63);
      *(undefined8 *)((longlong)puVar4 + -0x39) = *(undefined8 *)(param_2 + 0xf67);
      *(undefined4 *)((longlong)puVar4 + -0x2b) = *(undefined4 *)(param_2 + 0xf75);
      *(undefined4 *)((longlong)puVar4 + -0x23) = *(undefined4 *)(param_2 + 0xf7d);
      *(undefined1 *)((longlong)puVar4 + -0x31) = *(undefined1 *)(param_2 + 0xf6f);
      *(undefined1 *)(puVar4 + -6) = *(undefined1 *)(param_2 + 0xf70);
      puVar4[3] = param_1 + 0x4140;
      uVar2 = *(undefined8 *)(param_2 + 0x808);
      puVar4[-0xf4] = *(undefined8 *)(param_2 + 0x800);
      puVar4[-0xf3] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x818);
      puVar4[-0xf2] = *(undefined8 *)(param_2 + 0x810);
      puVar4[-0xf1] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x7e8);
      puVar4[-0xf8] = *(undefined8 *)(param_2 + 0x7e0);
      puVar4[-0xf7] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x7f8);
      puVar4[-0xf6] = *(undefined8 *)(param_2 + 0x7f0);
      puVar4[-0xf5] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x828);
      puVar4[-0xf0] = *(undefined8 *)(param_2 + 0x820);
      puVar4[-0xef] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x838);
      puVar4[-0xee] = *(undefined8 *)(param_2 + 0x830);
      puVar4[-0xed] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x848);
      puVar4[-0xec] = *(undefined8 *)(param_2 + 0x840);
      puVar4[-0xeb] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x850);
      uVar3 = *(undefined8 *)(param_2 + 0x858);
      *(undefined4 *)(puVar4 + -0x39) = 0xffffffff;
      puVar4[-0xea] = uVar2;
      puVar4[-0xe9] = uVar3;
      uVar1 = *(undefined4 *)(puVar4 + -0x39);
      if (*(int *)(param_1 + 0x1e8c) != 0) {
        uVar1 = 0xfffffff8;
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(puVar4 + -0x39) = uVar1;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 0x254;
    } while (lVar6 != 0);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1e74)) {
    lVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(lVar6 + *(longlong *)(param_1 + 0x43a8)) = 0xffffffff;
      lVar6 = lVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x1e74));
  }
  return;
}





