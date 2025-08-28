#include "TaleWorlds.Native.Split.h"

// 03_rendering_part180_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803769a6(void)
void FUN_1803769a6(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  bool bVar20;
  longlong unaff_RBP;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint *puVar25;
  longlong lVar26;
  int in_R10D;
  int in_R11D;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar35;
  float unaff_XMM15_Da;
  bool bStack0000000000000040;
  char cStack0000000000000041;
  int iStack0000000000000044;
  int in_stack_00000048;
  ulonglong uStack0000000000000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong lStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  
  iStack0000000000000044 = in_R10D;
code_r0x0001803769a6:
  lVar8 = *(longlong *)(unaff_RBP + 0x2a0);
  lVar28 = *(longlong *)(unaff_RBP + 0x290);
  lVar27 = in_stack_00000060;
LAB_1803768c5:
  do {
    puVar25 = *(uint **)(unaff_RBP + -0x78);
    do {
      iStack0000000000000044 = iStack0000000000000044 + 1;
      if (*(int *)(unaff_RBP + -0x70) <= iStack0000000000000044) {
        in_stack_00000048 = in_R11D;
        do {
          in_stack_00000048 = in_stack_00000048 + 1;
          if (*(int *)(unaff_RBP + -0x6c) <= in_stack_00000048) {
            uVar16 = *(uint *)(unaff_RBP + -0x7c);
            do {
              do {
                lVar29 = *(longlong *)(*(longlong *)(unaff_RBP + 0x298) + 0x3580);
                uVar16 = uVar16 + 1;
                lVar27 = lVar27 + 1;
                *(uint *)(unaff_RBP + -0x7c) = uVar16;
                if (*(uint *)(lVar29 + 0x110) <= uVar16) {
                  return;
                }
                puVar25 = *(uint **)(lVar29 + 0x118 + lVar27 * 8);
                *(uint **)(unaff_RBP + -0x78) = puVar25;
              } while ((((*puVar25 & *(uint *)(unaff_RBP + -0x68)) == 0) || (puVar25[0x5e] == 3)) ||
                      ((puVar25[1] >> 0x18 & 1) != 0));
              lVar29 = *(longlong *)(puVar25 + 0xd60);
              if (((lVar29 == 0) || (*(int *)(lVar29 + 0x110) == 0)) ||
                 ((*(uint **)(lVar29 + 0x118) != puVar25 ||
                  (cStack0000000000000041 = '\x01', (puVar25[0x6f6] & 0x20) == 0)))) {
                cStack0000000000000041 = '\0';
              }
              in_stack_00000048 = 0;
              in_stack_00000060 = lVar27;
            } while (*(int *)(unaff_RBP + -0x6c) < 1);
          }
          iStack0000000000000044 = 0;
          in_R11D = in_stack_00000048;
        } while (*(int *)(unaff_RBP + -0x70) < 1);
      }
      lVar29 = *(longlong *)(lVar8 + 0x138);
      lVar23 = (longlong)(*(int *)(lVar8 + 0x60) * in_R11D + iStack0000000000000044) * 0x130;
      lVar17 = lVar29 + 8 + lVar23;
      lVar26 = lVar29 + 0xc0 + lVar23;
      fVar34 = *(float *)(lVar17 + 0x20) - *(float *)(unaff_RBP + 0x150);
      fVar30 = *(float *)(lVar17 + 0x24) - unaff_XMM9_Da;
      fVar32 = *(float *)(lVar17 + 0x28) - unaff_XMM8_Da;
      fVar35 = unaff_XMM12_Da;
      if (*(int *)(in_stack_00000058 + 0x60) < 0) {
        fVar35 = 5.0;
      }
      if ((((puVar25[1] & 0x8000) == 0) && ((*puVar25 & 1) == 1)) &&
         (*(longlong *)(lVar23 + 0x118 + lVar29) != 0)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
    } while (unaff_XMM13_Da == *(float *)(lVar26 + 0x30));
    if (cStack0000000000000041 == '\0') {
      iVar6 = FUN_18063c930(puVar25 + 0xc);
    }
    else {
      iVar6 = FUN_1801b8ce0(*(longlong *)(lVar28 + 0x2148) + 0x2998,puVar25 + 0xc,lVar17,lVar26,
                            &DAT_180a00300);
    }
    in_R11D = in_stack_00000048;
  } while (iVar6 == 0);
  if (bVar20) {
    if ((cStack0000000000000074 != '\0') ||
       (fVar34 * fVar34 + fVar30 * fVar30 + fVar32 * fVar32 <= fStack0000000000000070)) {
      lVar26 = (longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044) *
               0x130;
      lVar17 = *(longlong *)(lVar8 + 0x138);
      if (*(int *)(lVar26 + 0xf4 + lVar17) == 2) {
        if ((*(uint *)(in_stack_00000058 + 0x60) & 0x800000) == 0) {
          *(undefined4 *)(lVar26 + 0xf4 + lVar17) = 1;
          *(float *)((longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044)
                     * 0x130 + 0x128 + *(longlong *)(lVar8 + 0x138)) = unaff_XMM10_Da;
        }
        else {
          *(undefined4 *)(lVar26 + 0xf4 + lVar17) = 0;
        }
      }
      lVar17 = (longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044) *
               0x130;
      lVar8 = *(longlong *)(lVar8 + 0x138);
      if (*(int *)(lVar17 + 0xf4 + lVar8) == 1) {
        fVar30 = (unaff_XMM10_Da - *(float *)(lVar17 + 0x128 + lVar8)) * fVar35;
        if (fVar30 <= 0.001) {
          fVar30 = 0.001;
        }
        fVar30 = -fVar30;
        bVar20 = fVar30 < -1.0;
        if (bVar20) {
          fVar30 = -1.0;
          *(undefined4 *)(lVar17 + 0xf4 + lVar8) = 0;
        }
        bStack0000000000000040 = !bVar20;
        for (lVar8 = *(longlong *)(lVar23 + 0x100 + lVar29); lVar8 != lVar29 + 0xf8 + lVar23;
            lVar8 = func_0x00018066bd70(lVar8)) {
          lVar17 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8),*(undefined8 *)(lVar8 + 0x20));
          lVar17 = *(longlong *)(lVar17 + 0x18);
          lVar22 = ((longlong)*(int *)(lVar28 + 0x2140) * 0x20 + lVar27) * 0x100;
          iVar6 = (int)(*(longlong *)(lVar8 + 0x30) - *(longlong *)(lVar8 + 0x28) >> 5);
          lVar26 = (longlong)iVar6;
          if (0 < iVar6) {
            lVar28 = 0;
            do {
              puVar14 = *(undefined8 **)(lVar22 + 0x18 + lVar17);
              puVar12 = (undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar28);
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar3 = puVar12[3];
              puVar15 = (undefined8 *)(*(longlong *)(lVar8 + 0x28) + lVar28);
              uVar11 = *puVar15;
              uVar10 = puVar15[1];
              *(undefined4 *)(unaff_RBP + 0x38) = *puVar12;
              *(undefined4 *)(unaff_RBP + 0x3c) = uVar1;
              *(undefined4 *)(unaff_RBP + 0x40) = uVar2;
              *(undefined4 *)(unaff_RBP + 0x44) = uVar3;
              *(float *)(unaff_RBP + 0x44) = fVar30;
              if (puVar14 < *(undefined8 **)(lVar22 + 0x20 + lVar17)) {
                uVar1 = *(undefined4 *)(unaff_RBP + 0x38);
                uVar2 = *(undefined4 *)(unaff_RBP + 0x3c);
                uVar3 = *(undefined4 *)(unaff_RBP + 0x40);
                uVar4 = *(undefined4 *)(unaff_RBP + 0x44);
                *(undefined8 **)(lVar22 + 0x18 + lVar17) = puVar14 + 4;
                *puVar14 = uVar11;
                puVar14[1] = uVar10;
                *(undefined4 *)(puVar14 + 2) = uVar1;
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar2;
                *(undefined4 *)(puVar14 + 3) = uVar3;
                *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar4;
              }
              else {
                puVar15 = *(undefined8 **)(lVar22 + 0x10 + lVar17);
                lVar27 = (longlong)puVar14 - (longlong)puVar15 >> 5;
                if (lVar27 == 0) {
                  lVar27 = 1;
LAB_1803760d1:
                  puVar7 = (undefined8 *)
                           FUN_18062b420(_DAT_180c8ed18,lVar27 << 5,
                                         *(undefined1 *)(lVar22 + 0x28 + lVar17));
                  puVar15 = *(undefined8 **)(lVar22 + 0x10 + lVar17);
                  puVar14 = *(undefined8 **)(lVar22 + 0x18 + lVar17);
                }
                else {
                  lVar27 = lVar27 * 2;
                  if (lVar27 != 0) goto LAB_1803760d1;
                  puVar7 = (undefined8 *)0x0;
                }
                if (puVar15 != puVar14) {
                    // WARNING: Subroutine does not return
                  memmove(puVar7,puVar15,(longlong)puVar14 - (longlong)puVar15);
                }
                uVar1 = *(undefined4 *)(unaff_RBP + 0x38);
                uVar2 = *(undefined4 *)(unaff_RBP + 0x3c);
                uVar3 = *(undefined4 *)(unaff_RBP + 0x40);
                uVar4 = *(undefined4 *)(unaff_RBP + 0x44);
                *puVar7 = uVar11;
                puVar7[1] = uVar10;
                *(undefined4 *)(puVar7 + 2) = uVar1;
                *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
                *(undefined4 *)(puVar7 + 3) = uVar3;
                *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
                if (*(longlong *)(lVar22 + 0x10 + lVar17) != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *(undefined8 **)(lVar22 + 0x10 + lVar17) = puVar7;
                *(undefined8 **)(lVar22 + 0x20 + lVar17) = puVar7 + lVar27 * 4;
                *(undefined8 **)(lVar22 + 0x18 + lVar17) = puVar7 + 4;
              }
              lVar28 = lVar28 + 0x20;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar28 = *(longlong *)(unaff_RBP + 0x290);
            lVar27 = in_stack_00000060;
          }
        }
        if (!bVar20) goto LAB_18037619a;
      }
    }
    else {
      lVar26 = (longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044) *
               0x130;
      lVar17 = *(longlong *)(lVar8 + 0x138);
      if (*(int *)(lVar26 + 0xf4 + lVar17) == 0) {
        if ((*(uint *)(in_stack_00000058 + 0x60) & 0x800000) == 0) {
          *(undefined4 *)(lVar26 + 0xf4 + lVar17) = 1;
          *(float *)((longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044)
                     * 0x130 + 0x128 + *(longlong *)(lVar8 + 0x138)) = unaff_XMM10_Da;
        }
        else {
          *(undefined4 *)(lVar26 + 0xf4 + lVar17) = 2;
        }
      }
      bStack0000000000000040 = false;
      lVar17 = (longlong)(*(int *)(lVar8 + 0x60) * in_stack_00000048 + iStack0000000000000044) *
               0x130;
      lVar8 = *(longlong *)(lVar8 + 0x138);
      fVar30 = unaff_XMM12_Da;
      if (*(int *)(lVar17 + 0xf4 + lVar8) == 1) {
        bStack0000000000000040 = true;
        fVar30 = (unaff_XMM10_Da - *(float *)(lVar17 + 0x128 + lVar8)) * fVar35;
        if (fVar30 <= 0.001) {
          fVar30 = 0.001;
        }
        if (unaff_XMM12_Da < fVar30) {
          *(undefined4 *)(lVar17 + 0xf4 + lVar8) = 2;
          bStack0000000000000040 = false;
          fVar30 = unaff_XMM12_Da;
        }
      }
      lVar8 = *(longlong *)(lVar23 + 0x100 + lVar29);
      while (lVar8 != lVar29 + 0xf8 + lVar23) {
        lVar26 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8),*(undefined8 *)(lVar8 + 0x20));
        lVar17 = *(longlong *)(lVar26 + 0x18);
        *(undefined4 *)(lVar26 + 0xc) = 7;
        uStack0000000000000050 =
             (ulonglong)(int)(*(longlong *)(lVar8 + 0x30) - *(longlong *)(lVar8 + 0x28) >> 5);
        lVar27 = ((longlong)*(int *)(lVar28 + 0x2140) * 0x20 + lVar27) * 0x100;
        lVar28 = *(longlong *)(lVar27 + 0x10 + lVar17);
        if ((ulonglong)(*(longlong *)(lVar27 + 0x20 + lVar17) - lVar28 >> 5) <
            uStack0000000000000050) {
          if (uStack0000000000000050 == 0) {
            lVar26 = 0;
          }
          else {
            lVar26 = FUN_18062b420(_DAT_180c8ed18,uStack0000000000000050 << 5,
                                   *(undefined1 *)(lVar27 + 0x28 + lVar17));
            lVar28 = *(longlong *)(lVar27 + 0x10 + lVar17);
          }
          lVar22 = *(longlong *)(lVar27 + 0x18 + lVar17);
          if (lVar28 != lVar22) {
                    // WARNING: Subroutine does not return
            memmove(lVar26,lVar28,lVar22 - lVar28);
          }
          if (lVar28 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(longlong *)(lVar27 + 0x10 + lVar17) = lVar26;
          *(longlong *)(lVar27 + 0x18 + lVar17) = lVar26;
          *(ulonglong *)(lVar27 + 0x20 + lVar17) = uStack0000000000000050 * 0x20 + lVar26;
        }
        if (0 < (longlong)uStack0000000000000050) {
          lVar28 = 0;
          do {
            puVar14 = *(undefined8 **)(lVar27 + 0x18 + lVar17);
            puVar12 = (undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar28);
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            puVar15 = (undefined8 *)(*(longlong *)(lVar8 + 0x28) + lVar28);
            uVar11 = *puVar15;
            uVar10 = puVar15[1];
            *(undefined4 *)(unaff_RBP + 0x18) = *puVar12;
            *(undefined4 *)(unaff_RBP + 0x1c) = uVar1;
            *(undefined4 *)(unaff_RBP + 0x20) = uVar2;
            *(undefined4 *)(unaff_RBP + 0x24) = uVar3;
            *(float *)(unaff_RBP + 0x24) = fVar30;
            if (puVar14 < *(undefined8 **)(lVar27 + 0x20 + lVar17)) {
              uVar1 = *(undefined4 *)(unaff_RBP + 0x18);
              uVar2 = *(undefined4 *)(unaff_RBP + 0x1c);
              uVar3 = *(undefined4 *)(unaff_RBP + 0x20);
              uVar4 = *(undefined4 *)(unaff_RBP + 0x24);
              *(undefined8 **)(lVar27 + 0x18 + lVar17) = puVar14 + 4;
              *puVar14 = uVar11;
              puVar14[1] = uVar10;
              *(undefined4 *)(puVar14 + 2) = uVar1;
              *(undefined4 *)((longlong)puVar14 + 0x14) = uVar2;
              *(undefined4 *)(puVar14 + 3) = uVar3;
              *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar4;
            }
            else {
              puVar15 = *(undefined8 **)(lVar27 + 0x10 + lVar17);
              lVar26 = (longlong)puVar14 - (longlong)puVar15 >> 5;
              if (lVar26 == 0) {
                lVar26 = 1;
LAB_180375e41:
                puVar7 = (undefined8 *)
                         FUN_18062b420(_DAT_180c8ed18,lVar26 << 5,
                                       *(undefined1 *)(lVar27 + 0x28 + lVar17));
                puVar15 = *(undefined8 **)(lVar27 + 0x10 + lVar17);
                puVar14 = *(undefined8 **)(lVar27 + 0x18 + lVar17);
              }
              else {
                lVar26 = lVar26 * 2;
                if (lVar26 != 0) goto LAB_180375e41;
                puVar7 = (undefined8 *)0x0;
              }
              if (puVar15 != puVar14) {
                    // WARNING: Subroutine does not return
                memmove(puVar7,puVar15,(longlong)puVar14 - (longlong)puVar15);
              }
              uVar1 = *(undefined4 *)(unaff_RBP + 0x18);
              uVar2 = *(undefined4 *)(unaff_RBP + 0x1c);
              uVar3 = *(undefined4 *)(unaff_RBP + 0x20);
              uVar4 = *(undefined4 *)(unaff_RBP + 0x24);
              *puVar7 = uVar11;
              puVar7[1] = uVar10;
              *(undefined4 *)(puVar7 + 2) = uVar1;
              *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
              *(undefined4 *)(puVar7 + 3) = uVar3;
              *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
              if (*(longlong *)(lVar27 + 0x10 + lVar17) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(undefined8 **)(lVar27 + 0x10 + lVar17) = puVar7;
              *(undefined8 **)(lVar27 + 0x20 + lVar17) = puVar7 + lVar26 * 4;
              *(undefined8 **)(lVar27 + 0x18 + lVar17) = puVar7 + 4;
            }
            lVar28 = lVar28 + 0x20;
            uStack0000000000000050 = uStack0000000000000050 - 1;
          } while (uStack0000000000000050 != 0);
        }
        lVar8 = func_0x00018066bd70(lVar8);
        lVar28 = *(longlong *)(unaff_RBP + 0x290);
        lVar27 = in_stack_00000060;
      }
LAB_18037619a:
      if (!bStack0000000000000040) goto code_r0x0001803769a6;
    }
  }
  iVar24 = 0;
  *(undefined4 *)(unaff_RBP + -0x80) = 0;
  iVar6 = in_stack_00000048 * 4;
  iVar21 = iStack0000000000000044 * 4;
  *(int *)(unaff_RBP + -0x5c) = iVar6;
  *(int *)(unaff_RBP + -0x58) = iVar21;
  do {
    lVar8 = *(longlong *)(unaff_RBP + 0x2a0);
    iVar6 = iVar6 + iVar24;
    *(int *)(unaff_RBP + -0x60) = iVar6;
    lStack0000000000000068 = 4;
    do {
      lVar28 = *(longlong *)(lVar8 + 0x110);
      iVar24 = *(int *)(lVar8 + 0x58) * iVar6 + iVar21;
      uVar18 = (ulonglong)(longlong)iVar24 % (ulonglong)*(uint *)(lVar8 + 0x118);
      for (piVar13 = *(int **)(lVar28 + uVar18 * 8); piVar13 != (int *)0x0;
          piVar13 = *(int **)(piVar13 + 4)) {
        if (iVar24 == *piVar13) {
          if (piVar13 != (int *)0x0) {
            lVar27 = *(longlong *)(lVar8 + 0x118);
            *(int **)(unaff_RBP + -0x30) = piVar13;
            plVar9 = (longlong *)(unaff_RBP + -0x30);
            *(ulonglong *)(unaff_RBP + -0x28) = lVar28 + uVar18 * 8;
            goto LAB_18037624d;
          }
          break;
        }
      }
      lVar27 = *(longlong *)(lVar8 + 0x118);
      *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(lVar28 + lVar27 * 8);
      plVar9 = (longlong *)(unaff_RBP + -0x20);
      *(longlong *)(unaff_RBP + -0x18) = lVar28 + lVar27 * 8;
LAB_18037624d:
      if ((*plVar9 != *(longlong *)(lVar28 + lVar27 * 8)) &&
         (lVar28 = FUN_180372570(lVar8,iVar6,iVar21), *(longlong *)(lVar28 + 0x108) != 0)) {
        lVar28 = FUN_180372570(lVar8,iVar6,iVar21);
        lVar27 = FUN_180372570(lVar8,iVar6,iVar21);
        fVar30 = *(float *)(lVar28 + 0x38) - *(float *)(unaff_RBP + 0x150);
        fVar34 = *(float *)(lVar28 + 0x3c) - unaff_XMM9_Da;
        fVar32 = *(float *)(lVar28 + 0x40) - unaff_XMM8_Da;
        fVar30 = SQRT(fVar34 * fVar34 + fVar30 * fVar30 + fVar32 * fVar32) -
                 *(float *)(lVar28 + 0x48);
        if (((cStack0000000000000074 == '\0') || (fVar30 <= unaff_XMM15_Da)) &&
           ((((-1 < *(int *)(in_stack_00000058 + 0x60) || (0 < *(int *)(_DAT_180c86920 + 0xe0))) ||
             (fVar30 <= 120.0)) &&
            (iVar24 = FUN_1801b8ce0(*(longlong *)(*(longlong *)(unaff_RBP + 0x290) + 0x2148) +
                                    0x2998,*(longlong *)(unaff_RBP + -0x78) + 0x30,lVar27 + 0x4c,
                                    lVar28 + 0x18,&DAT_180a00300), iVar24 != 0)))) {
          lVar27 = FUN_180372570(lVar8,iVar6,iVar21);
          uVar16 = *(uint *)(lVar8 + 0x118);
          iVar24 = *(int *)(lVar8 + 0x58);
          lVar28 = *(longlong *)(lVar8 + 0x110);
          *(longlong *)(unaff_RBP + -0x48) = lVar27 + 0x118;
          iVar24 = iVar24 * iVar6 + iVar21;
          for (piVar13 = *(int **)(lVar28 + ((ulonglong)(longlong)iVar24 % (ulonglong)uVar16) * 8);
              piVar13 != (int *)0x0; piVar13 = *(int **)(piVar13 + 4)) {
            if (iVar24 == *piVar13) {
              lVar29 = *(longlong *)(lVar8 + 0x118);
              goto LAB_1803763e0;
            }
          }
          lVar29 = *(longlong *)(lVar8 + 0x118);
          piVar13 = *(int **)(lVar28 + lVar29 * 8);
LAB_1803763e0:
          if (piVar13 == *(int **)(lVar28 + lVar29 * 8)) {
            uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
            uVar11 = *(undefined8 *)(lVar8 + 0x68);
            *(int *)(unaff_RBP + -0x10) = iVar24;
            uVar11 = FUN_180372430(uVar10,uVar11);
            *(undefined8 *)(unaff_RBP + -8) = uVar11;
            puVar12 = (undefined4 *)FUN_18037f020(lVar8 + 0x108,unaff_RBP + 0x48,unaff_RBP + -0x10);
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            *(undefined4 *)(unaff_RBP + -0x40) = *puVar12;
            *(undefined4 *)(unaff_RBP + -0x3c) = uVar1;
            *(undefined4 *)(unaff_RBP + -0x38) = uVar2;
            *(undefined4 *)(unaff_RBP + -0x34) = uVar3;
            piVar13 = *(int **)(unaff_RBP + -0x40);
          }
          lVar28 = *(longlong *)(lVar27 + 0x120);
          puVar15 = (undefined8 *)(*(longlong *)(piVar13 + 2) + 0x148);
          *(undefined8 **)(unaff_RBP + -0x40) = puVar15;
          if (lVar28 != lVar27 + 0x118) {
            do {
              plVar9 = *(longlong **)(lVar28 + 0x20);
              puVar7 = (undefined8 *)puVar15[2];
              puVar14 = puVar15;
              while (puVar5 = puVar7, puVar5 != (undefined8 *)0x0) {
                if ((longlong *)puVar5[4] < plVar9) {
                  puVar7 = (undefined8 *)*puVar5;
                }
                else {
                  puVar7 = (undefined8 *)puVar5[1];
                  puVar14 = puVar5;
                }
              }
              if ((puVar14 == puVar15) || (plVar9 < (longlong *)puVar14[4])) {
                puVar14 = (undefined8 *)FUN_18037f530();
                puVar14 = (undefined8 *)*puVar14;
              }
              lVar8 = *(longlong *)(lVar28 + 0x30);
              lVar27 = *(longlong *)(lVar28 + 0x28);
              iVar6 = (int)plVar9[0xb];
              *(int *)(unaff_RBP + -100) = iVar6;
              iVar24 = (int)(lVar8 - lVar27 >> 5);
              if (0 < iVar24) {
                lVar8 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8));
                lVar27 = 0;
                lVar8 = *(longlong *)(lVar8 + 0x18) +
                        ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x290) + 0x2140) * 0x20 +
                        in_stack_00000060) * 0x100 + 0x10;
                *(longlong *)(unaff_RBP + -0x50) = (longlong)iVar24;
                if (0 < iVar24) {
                  lVar29 = 0;
                  do {
                    lVar17 = *(longlong *)(lVar28 + 0x28);
                    fVar31 = (float)modff(*(float *)(lVar29 + 4 + lVar17) +
                                          *(float *)(lVar29 + lVar17) +
                                          *(float *)(lVar29 + 8 + lVar17) +
                                          *(float *)(lVar29 + 0x18 + lVar17),unaff_RBP + -0x54);
                    lVar17 = *(longlong *)(lVar28 + 0x28);
                    uVar16 = *(uint *)(in_stack_00000058 + 0x60);
                    fVar30 = *(float *)(lVar29 + lVar17);
                    fVar32 = *(float *)(lVar29 + 4 + lVar17);
                    fVar34 = *(float *)(lVar29 + 8 + lVar17);
                    fVar33 = unaff_XMM13_Da;
                    if ((uVar16 >> 0x16 & 1) != 0) {
                      if (*(code **)(*plVar9 + 0x198) == (code *)&UNK_18027d990) {
                        fVar33 = *(float *)((longlong)plVar9 + 0x244);
                      }
                      else {
                        lVar17 = (**(code **)(*plVar9 + 0x198))();
                        uVar16 = *(uint *)(in_stack_00000058 + 0x60);
                        fVar33 = *(float *)(lVar17 + 0x30);
                      }
                    }
                    if (*(int *)(_DAT_180c8a9c8 + 0x7e0) == 0) {
                      if ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0) ||
                         (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) != 3)) {
                        iVar24 = *(int *)(*(longlong *)(unaff_RBP + 0x290) + 0x2310);
                        if (iVar24 == -1) {
                          fVar30 = fVar30 - *(float *)(unaff_RBP + 0x150);
                          fVar32 = fVar32 - *(float *)(unaff_RBP + 0x154);
                          fVar34 = fVar34 - *(float *)(unaff_RBP + 0x158);
                          fVar30 = SQRT(fVar30 * fVar30 + fVar32 * fVar32 + fVar34 * fVar34) -
                                   ((fVar31 * 2.0 - unaff_XMM12_Da) * 5.0 + fVar33);
                          if (fVar30 <= unaff_XMM13_Da) {
                            fVar30 = unaff_XMM13_Da;
                          }
                          fVar30 = fVar30 * 0.2;
                          if (127.0 <= fVar30) {
                            fVar30 = 127.0;
                          }
                          iVar24 = (int)*(char *)((longlong)(int)fVar30 + 8 +
                                                 *(longlong *)(unaff_RBP + 0x290));
                        }
                        if (iVar6 <= iVar24) {
                          iVar24 = iVar6 + -1;
                        }
                      }
                      else {
                        iVar24 = 0;
                      }
                    }
                    else {
                      iVar24 = 0;
                    }
                    lVar17 = *(longlong *)(unaff_RBP + -0x78);
                    lVar23 = puVar14[5];
                    if ((*(uint *)(lVar17 + 4) & 0x200000) == 0) {
                      iVar6 = (int)*(char *)(lVar23 + 4 + lVar27 * 8);
                    }
                    else {
                      iVar6 = 4;
                      iVar24 = 4;
                    }
                    if ((-1 < (int)uVar16) || (*(int *)(lVar17 + 0x178) < 2)) {
                      if (iVar24 != iVar6) {
                        fVar30 = *(float *)(lVar23 + lVar27 * 8);
                        if (fVar30 == -1.0) {
                          *(float *)(lVar23 + lVar27 * 8) = unaff_XMM10_Da;
                          fVar30 = unaff_XMM10_Da;
                        }
                        fVar30 = (unaff_XMM10_Da - fVar30) * fVar35;
                        if (fVar30 <= 0.001) {
                          fVar30 = 0.001;
                        }
                        if (fVar30 <= unaff_XMM12_Da) {
                          puVar19 = (undefined4 *)(*(longlong *)(lVar28 + 0x28) + lVar29);
                          lVar17 = (longlong)iVar24 * 0x20 + lVar8;
                          puVar12 = *(undefined4 **)(lVar17 + 8);
                          if (puVar12 < *(undefined4 **)(lVar17 + 0x10)) {
                            uVar1 = puVar19[1];
                            uVar2 = puVar19[2];
                            uVar3 = puVar19[3];
                            *puVar12 = *puVar19;
                            puVar12[1] = uVar1;
                            puVar12[2] = uVar2;
                            puVar12[3] = uVar3;
                            uVar11 = *(undefined8 *)(puVar19 + 6);
                            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar19 + 4);
                            *(undefined8 *)(puVar12 + 6) = uVar11;
                            *(longlong *)(lVar17 + 8) = *(longlong *)(lVar17 + 8) + 0x20;
                          }
                          else {
                            FUN_18037f6b0(lVar17);
                          }
                          lVar23 = (longlong)iVar6 * 0x20 + lVar8;
                          *(float *)(*(longlong *)(lVar17 + 8) + -4) = fVar30;
                          puVar19 = (undefined4 *)(*(longlong *)(lVar28 + 0x28) + lVar29);
                          puVar12 = *(undefined4 **)(lVar23 + 8);
                          if (puVar12 < *(undefined4 **)(lVar23 + 0x10)) {
                            uVar1 = puVar19[1];
                            uVar2 = puVar19[2];
                            uVar3 = puVar19[3];
                            *puVar12 = *puVar19;
                            puVar12[1] = uVar1;
                            puVar12[2] = uVar2;
                            puVar12[3] = uVar3;
                            uVar11 = *(undefined8 *)(puVar19 + 6);
                            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar19 + 4);
                            *(undefined8 *)(puVar12 + 6) = uVar11;
                            *(longlong *)(lVar23 + 8) = *(longlong *)(lVar23 + 8) + 0x20;
                          }
                          else {
                            FUN_18037f6b0();
                          }
                          *(float *)(*(longlong *)(lVar23 + 8) + -4) = -fVar30;
                          goto LAB_180376825;
                        }
                        *(char *)(puVar14[5] + 4 + lVar27 * 8) = (char)iVar24;
                        *(undefined4 *)(puVar14[5] + lVar27 * 8) = 0xbf800000;
                        if (-1 < *(int *)(lVar17 + 0x178)) {
                          if (((*(uint *)(in_stack_00000058 + 0x60) >> 0x16 & 1) != 0) &&
                             (4 < iVar24)) {
                            iVar24 = 4;
                          }
                          if (((int)*(uint *)(in_stack_00000058 + 0x60) < 0) && (2 < iVar24)) {
                            iVar24 = 2;
                          }
                        }
                      }
                      puVar19 = (undefined4 *)(*(longlong *)(lVar28 + 0x28) + lVar29);
                      lVar17 = (longlong)iVar24 * 0x20 + lVar8;
                      puVar12 = *(undefined4 **)(lVar17 + 8);
                      if (puVar12 < *(undefined4 **)(lVar17 + 0x10)) {
                        uVar1 = puVar19[1];
                        uVar2 = puVar19[2];
                        uVar3 = puVar19[3];
                        *puVar12 = *puVar19;
                        puVar12[1] = uVar1;
                        puVar12[2] = uVar2;
                        puVar12[3] = uVar3;
                        uVar11 = *(undefined8 *)(puVar19 + 6);
                        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar19 + 4);
                        *(undefined8 *)(puVar12 + 6) = uVar11;
                        *(longlong *)(lVar17 + 8) = *(longlong *)(lVar17 + 8) + 0x20;
                      }
                      else {
                        FUN_18037f6b0();
                      }
                    }
LAB_180376825:
                    iVar6 = *(int *)(unaff_RBP + -100);
                    lVar27 = lVar27 + 1;
                    lVar29 = lVar29 + 0x20;
                  } while (lVar27 < *(longlong *)(unaff_RBP + -0x50));
                }
              }
              lVar28 = func_0x00018066bd70(lVar28);
              puVar15 = *(undefined8 **)(unaff_RBP + -0x40);
            } while (lVar28 != *(longlong *)(unaff_RBP + -0x48));
            unaff_XMM8_Da = *(float *)(unaff_RBP + 0x158);
            unaff_XMM9_Da = *(float *)(unaff_RBP + 0x154);
            lVar8 = *(longlong *)(unaff_RBP + 0x2a0);
            iVar6 = *(int *)(unaff_RBP + -0x60);
          }
        }
      }
      iVar21 = iVar21 + 1;
      lStack0000000000000068 = lStack0000000000000068 + -1;
    } while (lStack0000000000000068 != 0);
    iVar6 = *(int *)(unaff_RBP + -0x5c);
    iVar24 = *(int *)(unaff_RBP + -0x80) + 1;
    iVar21 = *(int *)(unaff_RBP + -0x58);
    *(int *)(unaff_RBP + -0x80) = iVar24;
  } while (iVar24 < 4);
  lVar28 = *(longlong *)(unaff_RBP + 0x290);
  lVar27 = in_stack_00000060;
  goto LAB_1803768c5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





