#include "TaleWorlds.Native.Split.h"

// 03_rendering_part178_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803759b8(undefined8 param_1,uint param_2)
void FUN_1803759b8(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong in_RAX;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  bool bVar21;
  int unaff_EBX;
  longlong unaff_RBP;
  int iVar22;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  longlong lVar27;
  longlong unaff_R13;
  longlong lVar28;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM10_Da;
  float fVar36;
  float unaff_XMM15_Da;
  bool bStack0000000000000040;
  char cStack0000000000000041;
  int iStack0000000000000044;
  int iStack0000000000000048;
  ulonglong uStack0000000000000050;
  longlong in_stack_00000058;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  
  fVar33 = *(float *)(unaff_RBP + 0x158);
  fVar35 = *(float *)(unaff_RBP + 0x154);
  lStack0000000000000060 = 0;
  do {
    puVar26 = *(uint **)(in_RAX + 0x118 + lStack0000000000000060 * 8);
    *(uint **)(unaff_RBP + -0x78) = puVar26;
    lVar28 = lStack0000000000000060;
    if ((((*puVar26 & *(uint *)(unaff_RBP + -0x68)) != 0) && (puVar26[0x5e] != 3)) &&
       ((puVar26[1] >> 0x18 & 1) == 0)) {
      lVar11 = *(longlong *)(puVar26 + 0xd60);
      if (((lVar11 == 0) || (*(int *)(lVar11 + 0x110) == 0)) ||
         ((*(uint **)(lVar11 + 0x118) != puVar26 ||
          (cStack0000000000000041 = '\x01', (puVar26[0x6f6] & 0x20) == 0)))) {
        cStack0000000000000041 = '\0';
      }
      iStack0000000000000048 = 0;
      if (0 < unaff_EDI) {
        do {
          iStack0000000000000044 = 0;
          iVar6 = iStack0000000000000048;
          if (0 < unaff_EBX) {
            do {
              lVar11 = *(longlong *)(unaff_R14 + 0x138);
              lVar23 = (longlong)(*(int *)(unaff_R14 + 0x60) * iVar6 + iStack0000000000000044) *
                       0x130;
              lVar18 = lVar11 + 8 + lVar23;
              lVar27 = lVar11 + 0xc0 + lVar23;
              fVar32 = *(float *)(lVar18 + 0x20) - *(float *)(unaff_RBP + 0x150);
              fVar30 = *(float *)(lVar18 + 0x24) - fVar35;
              fVar31 = *(float *)(lVar18 + 0x28) - fVar33;
              if (*(int *)(unaff_R13 + 0x60) < 0) {
                fVar36 = 5.0;
              }
              else {
                fVar36 = 1.0;
              }
              fVar34 = 1.0;
              if ((((puVar26[1] & 0x8000) == 0) && ((*puVar26 & 1) == 1)) &&
                 (*(longlong *)(lVar23 + 0x118 + lVar11) != 0)) {
                bVar21 = true;
              }
              else {
                bVar21 = false;
              }
              if (*(float *)(lVar27 + 0x30) != 0.0) {
                if (cStack0000000000000041 == '\0') {
                  iVar6 = FUN_18063c930(puVar26 + 0xc);
                }
                else {
                  iVar6 = FUN_1801b8ce0(*(longlong *)(unaff_R15 + 0x2148) + 0x2998,puVar26 + 0xc,
                                        lVar18,lVar27,&DAT_180a00300);
                }
                if (iVar6 != 0) {
                  if (bVar21) {
                    if ((cStack0000000000000074 != '\0') ||
                       (fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31 <=
                        fStack0000000000000070)) {
                      lVar27 = (longlong)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(longlong *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 2) {
                        if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 1;
                          *(float *)((longlong)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130 + 0x128 +
                                    *(longlong *)(unaff_R14 + 0x138)) = unaff_XMM10_Da;
                        }
                        else {
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 0;
                        }
                      }
                      lVar27 = (longlong)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(longlong *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 1) {
                        fVar30 = (unaff_XMM10_Da - *(float *)(lVar27 + 0x128 + lVar18)) * fVar36;
                        if (fVar30 <= 0.001) {
                          fVar30 = 0.001;
                        }
                        fVar30 = -fVar30;
                        bVar21 = fVar30 < -1.0;
                        if (bVar21) {
                          fVar30 = -1.0;
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 0;
                        }
                        bStack0000000000000040 = !bVar21;
                        for (lVar18 = *(longlong *)(lVar23 + 0x100 + lVar11);
                            lVar18 != lVar11 + 0xf8 + lVar23; lVar18 = func_0x00018066bd70(lVar18))
                        {
                          lVar27 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8),
                                                 *(undefined8 *)(lVar18 + 0x20));
                          lVar27 = *(longlong *)(lVar27 + 0x18);
                          lVar8 = ((longlong)*(int *)(unaff_R15 + 0x2140) * 0x20 + lVar28) * 0x100;
                          iVar6 = (int)(*(longlong *)(lVar18 + 0x30) - *(longlong *)(lVar18 + 0x28)
                                       >> 5);
                          lVar7 = (longlong)iVar6;
                          if (0 < iVar6) {
                            lVar28 = 0;
                            do {
                              puVar16 = *(undefined8 **)(lVar8 + 0x18 + lVar27);
                              puVar14 = (undefined4 *)(*(longlong *)(lVar18 + 0x28) + 0x10 + lVar28)
                              ;
                              uVar1 = puVar14[1];
                              uVar2 = puVar14[2];
                              uVar3 = puVar14[3];
                              puVar17 = (undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar28);
                              uVar13 = *puVar17;
                              uVar12 = puVar17[1];
                              *(undefined4 *)(unaff_RBP + 0x38) = *puVar14;
                              *(undefined4 *)(unaff_RBP + 0x3c) = uVar1;
                              *(undefined4 *)(unaff_RBP + 0x40) = uVar2;
                              *(undefined4 *)(unaff_RBP + 0x44) = uVar3;
                              *(float *)(unaff_RBP + 0x44) = fVar30;
                              if (puVar16 < *(undefined8 **)(lVar8 + 0x20 + lVar27)) {
                                uVar1 = *(undefined4 *)(unaff_RBP + 0x38);
                                uVar2 = *(undefined4 *)(unaff_RBP + 0x3c);
                                uVar3 = *(undefined4 *)(unaff_RBP + 0x40);
                                uVar4 = *(undefined4 *)(unaff_RBP + 0x44);
                                *(undefined8 **)(lVar8 + 0x18 + lVar27) = puVar16 + 4;
                                *puVar16 = uVar13;
                                puVar16[1] = uVar12;
                                *(undefined4 *)(puVar16 + 2) = uVar1;
                                *(undefined4 *)((longlong)puVar16 + 0x14) = uVar2;
                                *(undefined4 *)(puVar16 + 3) = uVar3;
                                *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
                              }
                              else {
                                puVar17 = *(undefined8 **)(lVar8 + 0x10 + lVar27);
                                lVar29 = (longlong)puVar16 - (longlong)puVar17 >> 5;
                                if (lVar29 == 0) {
                                  lVar29 = 1;
LAB_1803760d1:
                                  puVar9 = (undefined8 *)
                                           FUN_18062b420(_DAT_180c8ed18,lVar29 << 5,
                                                         *(undefined1 *)(lVar8 + 0x28 + lVar27));
                                  puVar17 = *(undefined8 **)(lVar8 + 0x10 + lVar27);
                                  puVar16 = *(undefined8 **)(lVar8 + 0x18 + lVar27);
                                }
                                else {
                                  lVar29 = lVar29 * 2;
                                  if (lVar29 != 0) goto LAB_1803760d1;
                                  puVar9 = (undefined8 *)0x0;
                                }
                                if (puVar17 != puVar16) {
                    // WARNING: Subroutine does not return
                                  memmove(puVar9,puVar17,(longlong)puVar16 - (longlong)puVar17);
                                }
                                uVar1 = *(undefined4 *)(unaff_RBP + 0x38);
                                uVar2 = *(undefined4 *)(unaff_RBP + 0x3c);
                                uVar3 = *(undefined4 *)(unaff_RBP + 0x40);
                                uVar4 = *(undefined4 *)(unaff_RBP + 0x44);
                                *puVar9 = uVar13;
                                puVar9[1] = uVar12;
                                *(undefined4 *)(puVar9 + 2) = uVar1;
                                *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
                                *(undefined4 *)(puVar9 + 3) = uVar3;
                                *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
                                if (*(longlong *)(lVar8 + 0x10 + lVar27) != 0) {
                    // WARNING: Subroutine does not return
                                  FUN_18064e900();
                                }
                                *(undefined8 **)(lVar8 + 0x10 + lVar27) = puVar9;
                                *(undefined8 **)(lVar8 + 0x20 + lVar27) = puVar9 + lVar29 * 4;
                                *(undefined8 **)(lVar8 + 0x18 + lVar27) = puVar9 + 4;
                              }
                              lVar28 = lVar28 + 0x20;
                              lVar7 = lVar7 + -1;
                            } while (lVar7 != 0);
                            unaff_R15 = *(longlong *)(unaff_RBP + 0x290);
                            lVar28 = lStack0000000000000060;
                            unaff_R13 = in_stack_00000058;
                          }
                        }
                        if (!bVar21) goto LAB_18037619a;
                      }
                    }
                    else {
                      lVar27 = (longlong)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(longlong *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 0) {
                        if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 1;
                          *(float *)((longlong)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130 + 0x128 +
                                    *(longlong *)(unaff_R14 + 0x138)) = unaff_XMM10_Da;
                        }
                        else {
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 2;
                        }
                      }
                      bStack0000000000000040 = false;
                      lVar27 = (longlong)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(longlong *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 1) {
                        bStack0000000000000040 = true;
                        fVar34 = (unaff_XMM10_Da - *(float *)(lVar27 + 0x128 + lVar18)) * fVar36;
                        if (fVar34 <= 0.001) {
                          fVar34 = 0.001;
                        }
                        if (1.0 < fVar34) {
                          fVar34 = 1.0;
                          *(undefined4 *)(lVar27 + 0xf4 + lVar18) = 2;
                          bStack0000000000000040 = false;
                        }
                      }
                      lVar18 = *(longlong *)(lVar23 + 0x100 + lVar11);
                      while (lVar18 != lVar11 + 0xf8 + lVar23) {
                        lVar7 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8),
                                              *(undefined8 *)(lVar18 + 0x20));
                        lVar27 = *(longlong *)(lVar7 + 0x18);
                        *(undefined4 *)(lVar7 + 0xc) = 7;
                        uStack0000000000000050 =
                             (ulonglong)
                             (int)(*(longlong *)(lVar18 + 0x30) - *(longlong *)(lVar18 + 0x28) >> 5)
                        ;
                        lVar7 = ((longlong)*(int *)(unaff_R15 + 0x2140) * 0x20 + lVar28) * 0x100;
                        lVar28 = *(longlong *)(lVar7 + 0x10 + lVar27);
                        if ((ulonglong)(*(longlong *)(lVar7 + 0x20 + lVar27) - lVar28 >> 5) <
                            uStack0000000000000050) {
                          if (uStack0000000000000050 == 0) {
                            lVar8 = 0;
                          }
                          else {
                            lVar8 = FUN_18062b420(_DAT_180c8ed18,uStack0000000000000050 << 5,
                                                  *(undefined1 *)(lVar7 + 0x28 + lVar27));
                            lVar28 = *(longlong *)(lVar7 + 0x10 + lVar27);
                          }
                          lVar29 = *(longlong *)(lVar7 + 0x18 + lVar27);
                          if (lVar28 != lVar29) {
                    // WARNING: Subroutine does not return
                            memmove(lVar8,lVar28,lVar29 - lVar28);
                          }
                          if (lVar28 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          *(longlong *)(lVar7 + 0x10 + lVar27) = lVar8;
                          *(longlong *)(lVar7 + 0x18 + lVar27) = lVar8;
                          *(ulonglong *)(lVar7 + 0x20 + lVar27) =
                               uStack0000000000000050 * 0x20 + lVar8;
                        }
                        if (0 < (longlong)uStack0000000000000050) {
                          lVar28 = 0;
                          do {
                            puVar16 = *(undefined8 **)(lVar7 + 0x18 + lVar27);
                            puVar14 = (undefined4 *)(*(longlong *)(lVar18 + 0x28) + 0x10 + lVar28);
                            uVar1 = puVar14[1];
                            uVar2 = puVar14[2];
                            uVar3 = puVar14[3];
                            puVar17 = (undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar28);
                            uVar13 = *puVar17;
                            uVar12 = puVar17[1];
                            *(undefined4 *)(unaff_RBP + 0x18) = *puVar14;
                            *(undefined4 *)(unaff_RBP + 0x1c) = uVar1;
                            *(undefined4 *)(unaff_RBP + 0x20) = uVar2;
                            *(undefined4 *)(unaff_RBP + 0x24) = uVar3;
                            *(float *)(unaff_RBP + 0x24) = fVar34;
                            if (puVar16 < *(undefined8 **)(lVar7 + 0x20 + lVar27)) {
                              uVar1 = *(undefined4 *)(unaff_RBP + 0x18);
                              uVar2 = *(undefined4 *)(unaff_RBP + 0x1c);
                              uVar3 = *(undefined4 *)(unaff_RBP + 0x20);
                              uVar4 = *(undefined4 *)(unaff_RBP + 0x24);
                              *(undefined8 **)(lVar7 + 0x18 + lVar27) = puVar16 + 4;
                              *puVar16 = uVar13;
                              puVar16[1] = uVar12;
                              *(undefined4 *)(puVar16 + 2) = uVar1;
                              *(undefined4 *)((longlong)puVar16 + 0x14) = uVar2;
                              *(undefined4 *)(puVar16 + 3) = uVar3;
                              *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
                            }
                            else {
                              puVar17 = *(undefined8 **)(lVar7 + 0x10 + lVar27);
                              lVar8 = (longlong)puVar16 - (longlong)puVar17 >> 5;
                              if (lVar8 == 0) {
                                lVar8 = 1;
LAB_180375e41:
                                puVar9 = (undefined8 *)
                                         FUN_18062b420(_DAT_180c8ed18,lVar8 << 5,
                                                       *(undefined1 *)(lVar7 + 0x28 + lVar27));
                                puVar17 = *(undefined8 **)(lVar7 + 0x10 + lVar27);
                                puVar16 = *(undefined8 **)(lVar7 + 0x18 + lVar27);
                              }
                              else {
                                lVar8 = lVar8 * 2;
                                if (lVar8 != 0) goto LAB_180375e41;
                                puVar9 = (undefined8 *)0x0;
                              }
                              if (puVar17 != puVar16) {
                    // WARNING: Subroutine does not return
                                memmove(puVar9,puVar17,(longlong)puVar16 - (longlong)puVar17);
                              }
                              uVar1 = *(undefined4 *)(unaff_RBP + 0x18);
                              uVar2 = *(undefined4 *)(unaff_RBP + 0x1c);
                              uVar3 = *(undefined4 *)(unaff_RBP + 0x20);
                              uVar4 = *(undefined4 *)(unaff_RBP + 0x24);
                              *puVar9 = uVar13;
                              puVar9[1] = uVar12;
                              *(undefined4 *)(puVar9 + 2) = uVar1;
                              *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
                              *(undefined4 *)(puVar9 + 3) = uVar3;
                              *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
                              if (*(longlong *)(lVar7 + 0x10 + lVar27) != 0) {
                    // WARNING: Subroutine does not return
                                FUN_18064e900();
                              }
                              *(undefined8 **)(lVar7 + 0x10 + lVar27) = puVar9;
                              *(undefined8 **)(lVar7 + 0x20 + lVar27) = puVar9 + lVar8 * 4;
                              *(undefined8 **)(lVar7 + 0x18 + lVar27) = puVar9 + 4;
                            }
                            lVar28 = lVar28 + 0x20;
                            uStack0000000000000050 = uStack0000000000000050 - 1;
                            unaff_R13 = in_stack_00000058;
                          } while (uStack0000000000000050 != 0);
                        }
                        lVar18 = func_0x00018066bd70(lVar18);
                        unaff_R15 = *(longlong *)(unaff_RBP + 0x290);
                        lVar28 = lStack0000000000000060;
                      }
LAB_18037619a:
                      if (!bStack0000000000000040) {
                        unaff_R14 = *(longlong *)(unaff_RBP + 0x2a0);
                        unaff_R15 = *(longlong *)(unaff_RBP + 0x290);
                        lVar28 = lStack0000000000000060;
                        goto LAB_1803768c5;
                      }
                    }
                  }
                  iVar24 = 0;
                  *(undefined4 *)(unaff_RBP + -0x80) = 0;
                  iVar6 = iStack0000000000000048 * 4;
                  iVar22 = iStack0000000000000044 * 4;
                  *(int *)(unaff_RBP + -0x5c) = iVar6;
                  *(int *)(unaff_RBP + -0x58) = iVar22;
                  do {
                    unaff_R14 = *(longlong *)(unaff_RBP + 0x2a0);
                    iVar6 = iVar6 + iVar24;
                    *(int *)(unaff_RBP + -0x60) = iVar6;
                    lStack0000000000000068 = 4;
                    do {
                      lVar28 = *(longlong *)(unaff_R14 + 0x110);
                      iVar24 = *(int *)(unaff_R14 + 0x58) * iVar6 + iVar22;
                      uVar19 = (ulonglong)(longlong)iVar24 % (ulonglong)*(uint *)(unaff_R14 + 0x118)
                      ;
                      for (piVar15 = *(int **)(lVar28 + uVar19 * 8); piVar15 != (int *)0x0;
                          piVar15 = *(int **)(piVar15 + 4)) {
                        if (iVar24 == *piVar15) {
                          if (piVar15 != (int *)0x0) {
                            lVar11 = *(longlong *)(unaff_R14 + 0x118);
                            *(int **)(unaff_RBP + -0x30) = piVar15;
                            plVar10 = (longlong *)(unaff_RBP + -0x30);
                            *(ulonglong *)(unaff_RBP + -0x28) = lVar28 + uVar19 * 8;
                            goto LAB_18037624d;
                          }
                          break;
                        }
                      }
                      lVar11 = *(longlong *)(unaff_R14 + 0x118);
                      *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(lVar28 + lVar11 * 8);
                      plVar10 = (longlong *)(unaff_RBP + -0x20);
                      *(longlong *)(unaff_RBP + -0x18) = lVar28 + lVar11 * 8;
LAB_18037624d:
                      if ((*plVar10 != *(longlong *)(lVar28 + lVar11 * 8)) &&
                         (lVar28 = FUN_180372570(unaff_R14,iVar6,iVar22),
                         *(longlong *)(lVar28 + 0x108) != 0)) {
                        lVar28 = FUN_180372570(unaff_R14,iVar6,iVar22);
                        lVar11 = FUN_180372570(unaff_R14,iVar6,iVar22);
                        fVar30 = *(float *)(lVar28 + 0x38) - *(float *)(unaff_RBP + 0x150);
                        fVar32 = *(float *)(lVar28 + 0x3c) - fVar35;
                        fVar31 = *(float *)(lVar28 + 0x40) - fVar33;
                        fVar30 = SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31) -
                                 *(float *)(lVar28 + 0x48);
                        if (((cStack0000000000000074 == '\0') || (fVar30 <= unaff_XMM15_Da)) &&
                           ((((-1 < *(int *)(unaff_R13 + 0x60) ||
                              (0 < *(int *)(_DAT_180c86920 + 0xe0))) || (fVar30 <= 120.0)) &&
                            (iVar24 = FUN_1801b8ce0(*(longlong *)
                                                     (*(longlong *)(unaff_RBP + 0x290) + 0x2148) +
                                                    0x2998,*(longlong *)(unaff_RBP + -0x78) + 0x30,
                                                    lVar11 + 0x4c,lVar28 + 0x18,&DAT_180a00300),
                            iVar24 != 0)))) {
                          lVar11 = FUN_180372570(unaff_R14,iVar6,iVar22);
                          uVar25 = *(uint *)(unaff_R14 + 0x118);
                          iVar24 = *(int *)(unaff_R14 + 0x58);
                          lVar28 = *(longlong *)(unaff_R14 + 0x110);
                          *(longlong *)(unaff_RBP + -0x48) = lVar11 + 0x118;
                          iVar24 = iVar24 * iVar6 + iVar22;
                          for (piVar15 = *(int **)(lVar28 + ((ulonglong)(longlong)iVar24 %
                                                            (ulonglong)uVar25) * 8);
                              piVar15 != (int *)0x0; piVar15 = *(int **)(piVar15 + 4)) {
                            if (iVar24 == *piVar15) {
                              lVar18 = *(longlong *)(unaff_R14 + 0x118);
                              goto LAB_1803763e0;
                            }
                          }
                          lVar18 = *(longlong *)(unaff_R14 + 0x118);
                          piVar15 = *(int **)(lVar28 + lVar18 * 8);
LAB_1803763e0:
                          if (piVar15 == *(int **)(lVar28 + lVar18 * 8)) {
                            uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
                            uVar13 = *(undefined8 *)(unaff_R14 + 0x68);
                            *(int *)(unaff_RBP + -0x10) = iVar24;
                            uVar13 = FUN_180372430(uVar12,uVar13);
                            *(undefined8 *)(unaff_RBP + -8) = uVar13;
                            puVar14 = (undefined4 *)
                                      FUN_18037f020(unaff_R14 + 0x108,unaff_RBP + 0x48,
                                                    unaff_RBP + -0x10);
                            uVar1 = puVar14[1];
                            uVar2 = puVar14[2];
                            uVar3 = puVar14[3];
                            *(undefined4 *)(unaff_RBP + -0x40) = *puVar14;
                            *(undefined4 *)(unaff_RBP + -0x3c) = uVar1;
                            *(undefined4 *)(unaff_RBP + -0x38) = uVar2;
                            *(undefined4 *)(unaff_RBP + -0x34) = uVar3;
                            piVar15 = *(int **)(unaff_RBP + -0x40);
                          }
                          lVar28 = *(longlong *)(lVar11 + 0x120);
                          puVar17 = (undefined8 *)(*(longlong *)(piVar15 + 2) + 0x148);
                          *(undefined8 **)(unaff_RBP + -0x40) = puVar17;
                          if (lVar28 != lVar11 + 0x118) {
                            do {
                              plVar10 = *(longlong **)(lVar28 + 0x20);
                              puVar9 = (undefined8 *)puVar17[2];
                              puVar16 = puVar17;
                              while (puVar5 = puVar9, puVar5 != (undefined8 *)0x0) {
                                if ((longlong *)puVar5[4] < plVar10) {
                                  puVar9 = (undefined8 *)*puVar5;
                                }
                                else {
                                  puVar9 = (undefined8 *)puVar5[1];
                                  puVar16 = puVar5;
                                }
                              }
                              if ((puVar16 == puVar17) || (plVar10 < (longlong *)puVar16[4])) {
                                puVar16 = (undefined8 *)FUN_18037f530();
                                puVar16 = (undefined8 *)*puVar16;
                              }
                              lVar11 = *(longlong *)(lVar28 + 0x30);
                              lVar18 = *(longlong *)(lVar28 + 0x28);
                              iVar6 = (int)plVar10[0xb];
                              *(int *)(unaff_RBP + -100) = iVar6;
                              iVar24 = (int)(lVar11 - lVar18 >> 5);
                              if (0 < iVar24) {
                                lVar11 = FUN_18046c710(*(undefined8 *)(unaff_RBP + 0x2a8));
                                lVar18 = 0;
                                lVar11 = *(longlong *)(lVar11 + 0x18) +
                                         ((longlong)
                                          *(int *)(*(longlong *)(unaff_RBP + 0x290) + 0x2140) * 0x20
                                         + lStack0000000000000060) * 0x100 + 0x10;
                                *(longlong *)(unaff_RBP + -0x50) = (longlong)iVar24;
                                if (0 < iVar24) {
                                  lVar23 = 0;
                                  do {
                                    lVar27 = *(longlong *)(lVar28 + 0x28);
                                    fVar31 = (float)modff(*(float *)(lVar23 + 4 + lVar27) +
                                                          *(float *)(lVar23 + lVar27) +
                                                          *(float *)(lVar23 + 8 + lVar27) +
                                                          *(float *)(lVar23 + 0x18 + lVar27),
                                                          unaff_RBP + -0x54);
                                    lVar27 = *(longlong *)(lVar28 + 0x28);
                                    uVar25 = *(uint *)(in_stack_00000058 + 0x60);
                                    fVar33 = *(float *)(lVar23 + lVar27);
                                    fVar35 = *(float *)(lVar23 + 4 + lVar27);
                                    fVar30 = *(float *)(lVar23 + 8 + lVar27);
                                    if ((uVar25 >> 0x16 & 1) == 0) {
                                      fVar32 = 0.0;
                                    }
                                    else if (*(code **)(*plVar10 + 0x198) == (code *)&UNK_18027d990)
                                    {
                                      fVar32 = *(float *)((longlong)plVar10 + 0x244);
                                    }
                                    else {
                                      lVar27 = (**(code **)(*plVar10 + 0x198))();
                                      uVar25 = *(uint *)(in_stack_00000058 + 0x60);
                                      fVar32 = *(float *)(lVar27 + 0x30);
                                    }
                                    if (*(int *)(_DAT_180c8a9c8 + 0x7e0) == 0) {
                                      if ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0) ||
                                         (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) !=
                                          3)) {
                                        iVar24 = *(int *)(*(longlong *)(unaff_RBP + 0x290) + 0x2310)
                                        ;
                                        if (iVar24 == -1) {
                                          fVar33 = fVar33 - *(float *)(unaff_RBP + 0x150);
                                          fVar35 = fVar35 - *(float *)(unaff_RBP + 0x154);
                                          fVar30 = fVar30 - *(float *)(unaff_RBP + 0x158);
                                          fVar33 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 +
                                                        fVar30 * fVar30) -
                                                   ((fVar31 * 2.0 - 1.0) * 5.0 + fVar32);
                                          if (fVar33 <= 0.0) {
                                            fVar33 = 0.0;
                                          }
                                          fVar33 = fVar33 * 0.2;
                                          if (127.0 <= fVar33) {
                                            fVar33 = 127.0;
                                          }
                                          iVar24 = (int)*(char *)((longlong)(int)fVar33 + 8 +
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
                                    lVar27 = *(longlong *)(unaff_RBP + -0x78);
                                    lVar7 = puVar16[5];
                                    if ((*(uint *)(lVar27 + 4) & 0x200000) == 0) {
                                      iVar6 = (int)*(char *)(lVar7 + 4 + lVar18 * 8);
                                    }
                                    else {
                                      iVar6 = 4;
                                      iVar24 = 4;
                                    }
                                    if ((-1 < (int)uVar25) || (*(int *)(lVar27 + 0x178) < 2)) {
                                      if (iVar24 != iVar6) {
                                        fVar33 = *(float *)(lVar7 + lVar18 * 8);
                                        if (fVar33 == -1.0) {
                                          *(float *)(lVar7 + lVar18 * 8) = unaff_XMM10_Da;
                                          fVar33 = unaff_XMM10_Da;
                                        }
                                        fVar33 = (unaff_XMM10_Da - fVar33) * fVar36;
                                        if (fVar33 <= 0.001) {
                                          fVar33 = 0.001;
                                        }
                                        if (fVar33 <= 1.0) {
                                          puVar20 = (undefined4 *)
                                                    (*(longlong *)(lVar28 + 0x28) + lVar23);
                                          lVar27 = (longlong)iVar24 * 0x20 + lVar11;
                                          puVar14 = *(undefined4 **)(lVar27 + 8);
                                          if (puVar14 < *(undefined4 **)(lVar27 + 0x10)) {
                                            uVar1 = puVar20[1];
                                            uVar2 = puVar20[2];
                                            uVar3 = puVar20[3];
                                            *puVar14 = *puVar20;
                                            puVar14[1] = uVar1;
                                            puVar14[2] = uVar2;
                                            puVar14[3] = uVar3;
                                            uVar13 = *(undefined8 *)(puVar20 + 6);
                                            *(undefined8 *)(puVar14 + 4) =
                                                 *(undefined8 *)(puVar20 + 4);
                                            *(undefined8 *)(puVar14 + 6) = uVar13;
                                            *(longlong *)(lVar27 + 8) =
                                                 *(longlong *)(lVar27 + 8) + 0x20;
                                          }
                                          else {
                                            FUN_18037f6b0(lVar27);
                                          }
                                          lVar7 = (longlong)iVar6 * 0x20 + lVar11;
                                          *(float *)(*(longlong *)(lVar27 + 8) + -4) = fVar33;
                                          puVar20 = (undefined4 *)
                                                    (*(longlong *)(lVar28 + 0x28) + lVar23);
                                          puVar14 = *(undefined4 **)(lVar7 + 8);
                                          if (puVar14 < *(undefined4 **)(lVar7 + 0x10)) {
                                            uVar1 = puVar20[1];
                                            uVar2 = puVar20[2];
                                            uVar3 = puVar20[3];
                                            *puVar14 = *puVar20;
                                            puVar14[1] = uVar1;
                                            puVar14[2] = uVar2;
                                            puVar14[3] = uVar3;
                                            uVar13 = *(undefined8 *)(puVar20 + 6);
                                            *(undefined8 *)(puVar14 + 4) =
                                                 *(undefined8 *)(puVar20 + 4);
                                            *(undefined8 *)(puVar14 + 6) = uVar13;
                                            *(longlong *)(lVar7 + 8) =
                                                 *(longlong *)(lVar7 + 8) + 0x20;
                                          }
                                          else {
                                            FUN_18037f6b0();
                                          }
                                          *(float *)(*(longlong *)(lVar7 + 8) + -4) = -fVar33;
                                          goto LAB_180376825;
                                        }
                                        *(char *)(puVar16[5] + 4 + lVar18 * 8) = (char)iVar24;
                                        *(undefined4 *)(puVar16[5] + lVar18 * 8) = 0xbf800000;
                                        if (-1 < *(int *)(lVar27 + 0x178)) {
                                          if (((*(uint *)(in_stack_00000058 + 0x60) >> 0x16 & 1) !=
                                               0) && (4 < iVar24)) {
                                            iVar24 = 4;
                                          }
                                          if (((int)*(uint *)(in_stack_00000058 + 0x60) < 0) &&
                                             (2 < iVar24)) {
                                            iVar24 = 2;
                                          }
                                        }
                                      }
                                      puVar20 = (undefined4 *)
                                                (*(longlong *)(lVar28 + 0x28) + lVar23);
                                      lVar27 = (longlong)iVar24 * 0x20 + lVar11;
                                      puVar14 = *(undefined4 **)(lVar27 + 8);
                                      if (puVar14 < *(undefined4 **)(lVar27 + 0x10)) {
                                        uVar1 = puVar20[1];
                                        uVar2 = puVar20[2];
                                        uVar3 = puVar20[3];
                                        *puVar14 = *puVar20;
                                        puVar14[1] = uVar1;
                                        puVar14[2] = uVar2;
                                        puVar14[3] = uVar3;
                                        uVar13 = *(undefined8 *)(puVar20 + 6);
                                        *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar20 + 4);
                                        *(undefined8 *)(puVar14 + 6) = uVar13;
                                        *(longlong *)(lVar27 + 8) = *(longlong *)(lVar27 + 8) + 0x20
                                        ;
                                      }
                                      else {
                                        FUN_18037f6b0();
                                      }
                                    }
LAB_180376825:
                                    iVar6 = *(int *)(unaff_RBP + -100);
                                    lVar18 = lVar18 + 1;
                                    lVar23 = lVar23 + 0x20;
                                  } while (lVar18 < *(longlong *)(unaff_RBP + -0x50));
                                }
                              }
                              lVar28 = func_0x00018066bd70(lVar28);
                              puVar17 = *(undefined8 **)(unaff_RBP + -0x40);
                            } while (lVar28 != *(longlong *)(unaff_RBP + -0x48));
                            fVar33 = *(float *)(unaff_RBP + 0x158);
                            fVar35 = *(float *)(unaff_RBP + 0x154);
                            unaff_R14 = *(longlong *)(unaff_RBP + 0x2a0);
                            iVar6 = *(int *)(unaff_RBP + -0x60);
                          }
                        }
                      }
                      iVar22 = iVar22 + 1;
                      lStack0000000000000068 = lStack0000000000000068 + -1;
                      unaff_R13 = in_stack_00000058;
                    } while (lStack0000000000000068 != 0);
                    iVar6 = *(int *)(unaff_RBP + -0x5c);
                    iVar24 = *(int *)(unaff_RBP + -0x80) + 1;
                    iVar22 = *(int *)(unaff_RBP + -0x58);
                    *(int *)(unaff_RBP + -0x80) = iVar24;
                  } while (iVar24 < 4);
                  unaff_R15 = *(longlong *)(unaff_RBP + 0x290);
                  lVar28 = lStack0000000000000060;
                }
LAB_1803768c5:
                puVar26 = *(uint **)(unaff_RBP + -0x78);
                iVar6 = iStack0000000000000048;
              }
              unaff_EBX = *(int *)(unaff_RBP + -0x70);
              iStack0000000000000044 = iStack0000000000000044 + 1;
              unaff_R13 = in_stack_00000058;
            } while (iStack0000000000000044 < unaff_EBX);
            unaff_EDI = *(int *)(unaff_RBP + -0x6c);
          }
          iStack0000000000000048 = iVar6 + 1;
        } while (iStack0000000000000048 < unaff_EDI);
        param_2 = *(uint *)(unaff_RBP + -0x7c);
        unaff_RSI = *(longlong *)(unaff_RBP + 0x298);
      }
    }
    in_RAX = *(longlong *)(unaff_RSI + 0x3580);
    param_2 = param_2 + 1;
    lStack0000000000000060 = lVar28 + 1;
    *(uint *)(unaff_RBP + -0x7c) = param_2;
    if (*(uint *)(in_RAX + 0x110) <= param_2) {
      return;
    }
  } while( true );
}







