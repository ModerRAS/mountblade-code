#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part357.c - 2 个函数

// 函数: void FUN_180860737(void)
void FUN_180860737(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int iVar16;
  uint uVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *plVar20;
  int iVar21;
  int64_t *plVar22;
  int64_t *plVar23;
  int64_t in_R9;
  int64_t unaff_R12;
  uint64_t *puVar24;
  int64_t unaff_R13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  int64_t in_stack_00000070;
  int64_t *in_stack_00000078;
  
  if (in_R9 != 0) {
    plVar18 = (int64_t *)(unaff_RSI + 0x468);
    if (unaff_RSI == -0xf8) {
      plVar18 = (int64_t *)0x0;
    }
    if (plVar18 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar18 + 0x24) != 0) && ((int)plVar18[1] != 0)) &&
         (iVar5 = *(int *)(*plVar18 +
                          (int64_t)
                          (int)((*(uint *)(in_R9 + 0x1c) ^ *(uint *)(in_R9 + 0x18) ^
                                 *(uint *)(in_R9 + 0x14) ^ *(uint *)(in_R9 + 0x10)) &
                               (int)plVar18[1] - 1U) * 4), iVar5 != -1)) {
        lVar14 = plVar18[2];
        do {
          lVar6 = (int64_t)iVar5;
          if ((*(int64_t *)(lVar14 + lVar6 * 0x18) == *(int64_t *)(in_R9 + 0x10)) &&
             (*(int64_t *)(lVar14 + 8 + lVar6 * 0x18) == *(int64_t *)(in_R9 + 0x18)))
          goto LAB_1808607eb;
          iVar5 = *(int *)(lVar14 + 0x10 + lVar6 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_1808607eb:
      if (iVar5 != -1) {
        iVar5 = FUN_1808b2f30(unaff_R12 + 8,10);
        if (((iVar5 != 0) || (iVar5 = FUN_1808b2f30(unaff_R12 + 8,0x1e), iVar5 != 0)) ||
           (iVar5 = FUN_1808b2f30(unaff_R12 + 8), iVar5 != 0)) goto LAB_180861693;
        lVar14 = *(int64_t *)(unaff_R12 + 0x88);
        uVar9 = extraout_XMM0_Qa;
        for (uVar19 = *(uint64_t *)(lVar14 + 0x70);
            (*(uint64_t *)(lVar14 + 0x70) <= uVar19 &&
            (uVar19 < (int64_t)*(int *)(lVar14 + 0x78) * 0x10 + *(uint64_t *)(lVar14 + 0x70)));
            uVar19 = uVar19 + 0x10) {
          cVar3 = func_0x00018085d7b0(unaff_R13 + 0x70);
          uVar9 = extraout_XMM0_Qa_00;
          if (cVar3 == '\0') {
            in_stack_00000078 = (int64_t *)0x0;
            iVar5 = FUN_1808bc010(*(uint64_t *)(unaff_R12 + 0x2c8));
            uVar9 = extraout_XMM0_Qa_01;
            if (iVar5 != 0) goto LAB_180861693;
          }
        }
        for (plVar18 = *(int64_t **)(unaff_R13 + 0x70);
            (*(int64_t **)(unaff_R13 + 0x70) <= plVar18 &&
            (plVar18 < *(int64_t **)(unaff_R13 + 0x70) + (int64_t)*(int *)(unaff_R13 + 0x78) * 2))
            ; plVar18 = plVar18 + 2) {
          iVar16 = 0;
          iVar5 = *(int *)(*(int64_t *)(unaff_R12 + 0x88) + 0x78);
          if (0 < iVar5) {
            lVar14 = *(int64_t *)(*(int64_t *)(unaff_R12 + 0x88) + 0x70);
            do {
              if ((*(int64_t *)(lVar14 + (int64_t)iVar16 * 0x10) == *plVar18) &&
                 (*(int64_t *)(lVar14 + 8 + (int64_t)iVar16 * 0x10) == plVar18[1]))
              goto LAB_1808609c2;
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar5);
          }
          lVar14 = *(int64_t *)(unaff_R12 + 0x2c8);
          uVar17 = *(uint *)(unaff_R12 + 0x2dc);
          lVar6 = *(int64_t *)(lVar14 + 0x130);
          if (lVar6 != 0) {
            FUN_180768360(lVar6);
          }
          plVar7 = (int64_t *)func_0x000180851be0(lVar14 + 0x138,plVar18);
          if (plVar7 == (int64_t *)0x0) {
            plVar7 = (int64_t *)func_0x000180851be0(lVar14 + 0x108,plVar18);
          }
          if (plVar7 == (int64_t *)0x0) {
            if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
              FUN_180768400(lVar6);
            }
            goto LAB_180861693;
          }
          if (((*(int *)((int64_t)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
             (iVar5 = *(int *)(*plVar7 + (int64_t)(int)((int)plVar7[1] - 1U & uVar17) * 4),
             iVar5 != -1)) {
            lVar14 = plVar7[2];
            do {
              lVar8 = (int64_t)iVar5;
              if (*(uint *)(lVar14 + lVar8 * 0x10) == uVar17) {
                lVar14 = *(int64_t *)(lVar14 + 8 + lVar8 * 0x10);
                goto LAB_180860998;
              }
              iVar5 = *(int *)(lVar14 + 4 + lVar8 * 0x10);
            } while (iVar5 != -1);
          }
          lVar14 = 0;
LAB_180860998:
          if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
            FUN_180768400(lVar6);
          }
          if ((lVar14 == 0) ||
             (iVar5 = FUN_1808c19d0(*(uint64_t *)(unaff_R12 + 0x2c8)), uVar9 = extraout_XMM0_Qa_02
             , iVar5 != 0)) goto LAB_180861693;
LAB_1808609c2:
        }
        iVar5 = 0;
        if (0 < *(int *)(unaff_R13 + 0x88)) {
          do {
            iVar21 = 0;
            plVar18 = (int64_t *)((int64_t)iVar5 * 0x10 + *(int64_t *)(unaff_R13 + 0x80));
            iVar16 = *(int *)(*(int64_t *)(unaff_R12 + 0x88) + 0x88);
            if (0 < iVar16) {
              lVar14 = *(int64_t *)(*(int64_t *)(unaff_R12 + 0x88) + 0x80);
              do {
                if ((*(int64_t *)(lVar14 + (int64_t)iVar21 * 0x10) == *plVar18) &&
                   (*(int64_t *)(lVar14 + 8 + (int64_t)iVar21 * 0x10) == plVar18[1]))
                goto LAB_180860a65;
                iVar21 = iVar21 + 1;
              } while (iVar21 < iVar16);
            }
            iVar16 = FUN_1808626e0();
            uVar9 = extraout_XMM0_Qa_03;
            if (iVar16 != 0) goto LAB_180861693;
LAB_180860a65:
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(unaff_R13 + 0x88));
        }
        iVar5 = 0;
        lVar14 = *(int64_t *)(unaff_R12 + 0x88);
        if (0 < *(int *)(lVar14 + 0x88)) {
          do {
            iVar16 = 0;
            plVar18 = (int64_t *)((int64_t)iVar5 * 0x10 + *(int64_t *)(lVar14 + 0x80));
            if (0 < *(int *)(unaff_R13 + 0x88)) {
              do {
                if ((*(int64_t *)(*(int64_t *)(unaff_R13 + 0x80) + (int64_t)iVar16 * 0x10) ==
                     *plVar18) &&
                   (*(int64_t *)(*(int64_t *)(unaff_R13 + 0x80) + 8 + (int64_t)iVar16 * 0x10) ==
                    plVar18[1])) goto LAB_180860af6;
                iVar16 = iVar16 + 1;
              } while (iVar16 < *(int *)(unaff_R13 + 0x88));
            }
            iVar16 = FUN_18085ea80(uVar9,iVar5);
            uVar9 = extraout_XMM0_Qa_04;
            if (iVar16 != 0) goto LAB_180861693;
LAB_180860af6:
            lVar14 = *(int64_t *)(unaff_R12 + 0x88);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar14 + 0x88));
        }
        iVar5 = 0;
        if (0 < *(int *)(unaff_R13 + 0xa8)) {
          do {
            iVar21 = 0;
            plVar18 = (int64_t *)((int64_t)iVar5 * 0x10 + *(int64_t *)(unaff_R13 + 0xa0));
            iVar16 = *(int *)(*(int64_t *)(unaff_R12 + 0x88) + 0xa8);
            if (0 < iVar16) {
              lVar14 = *(int64_t *)(*(int64_t *)(unaff_R12 + 0x88) + 0xa0);
              do {
                if ((*(int64_t *)(lVar14 + (int64_t)iVar21 * 0x10) == *plVar18) &&
                   (*(int64_t *)(lVar14 + 8 + (int64_t)iVar21 * 0x10) == plVar18[1]))
                goto LAB_180860c58;
                iVar21 = iVar21 + 1;
              } while (iVar21 < iVar16);
            }
            plVar7 = (int64_t *)(unaff_R12 + 0x490);
            plVar20 = (int64_t *)*plVar7;
            plVar22 = plVar20;
            while (plVar22 != plVar7) {
              (**(code **)(*(int64_t *)plVar20[2] + 0x30))((int64_t *)plVar20[2],&stack0x00000078)
              ;
              if ((in_stack_00000078 == (int64_t *)*plVar18) &&
                 (*(int64_t *)(unaff_RBP + -0x80) == plVar18[1])) {
                if (plVar20 != (int64_t *)0x0) {
                  (**(code **)(*(int64_t *)plVar20[2] + 0x30))
                            ((int64_t *)plVar20[2],unaff_RBP + -0x68);
                  iVar5 = FUN_1808caa20(unaff_R12 + 0x3f8,unaff_RBP + -0x68);
                  if (iVar5 == 0) {
                    *(int64_t *)plVar20[1] = *plVar20;
                    *(int64_t *)(*plVar20 + 8) = plVar20[1];
                    plVar20[1] = (int64_t)plVar20;
                    *plVar20 = (int64_t)plVar20;
                    *(int64_t **)plVar20[1] = plVar20;
                    *(int64_t *)(*plVar20 + 8) = plVar20[1];
                    plVar20[1] = (int64_t)plVar20;
                    *plVar20 = (int64_t)plVar20;
                    // WARNING: Subroutine does not return
                    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar20,&unknown_var_2624_ptr,
                                  0xa2c,1);
                  }
                  goto LAB_180861693;
                }
                break;
              }
              if (plVar20 != plVar7) {
                plVar20 = (int64_t *)*plVar20;
                plVar22 = plVar20;
              }
            }
LAB_180860c58:
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(unaff_R13 + 0xa8));
        }
        unaff_RSI = *(int64_t *)(unaff_RBP + -0x78);
      }
    }
  }
  if ((*(int64_t *)(unaff_R12 + 0x80) == 0) ||
     (iVar5 = FUN_180868330(*(int64_t *)(unaff_R12 + 0x80),unaff_RSI), iVar5 == 0)) {
    for (puVar13 = *(uint64_t **)(unaff_R12 + 0x4d0);
        (*(uint64_t **)(unaff_R12 + 0x4d0) <= puVar13 &&
        (puVar13 < *(uint64_t **)(unaff_R12 + 0x4d0) + *(int *)(unaff_R12 + 0x4d8)));
        puVar13 = puVar13 + 1) {
      iVar5 = FUN_1808cc190(*puVar13,unaff_RSI);
      if (iVar5 != 0) goto LAB_180861693;
    }
    plVar18 = (int64_t *)(unaff_R12 + 0x250);
    func_0x00018085f3d0(plVar18);
    puVar1 = (uint64_t *)(unaff_R12 + 0x260);
    iVar5 = FUN_180744d60(puVar1);
    if (iVar5 == 0) {
      puVar24 = (uint64_t *)(unaff_R12 + 0x270);
      iVar5 = FUN_180744d60(puVar24);
      if (iVar5 == 0) {
        plVar22 = (int64_t *)0x0;
        plVar7 = (int64_t *)(in_stack_00000070 + 0x240);
        lVar14 = *plVar7;
        *(int64_t **)(unaff_RBP + -0x68) = plVar7;
        plVar20 = (int64_t *)(lVar14 + -0x18);
        if (lVar14 == 0) {
          plVar20 = plVar22;
        }
        plVar23 = plVar22;
        if (plVar20 != (int64_t *)0x0) {
          plVar23 = plVar20 + 3;
        }
        if (plVar23 != plVar7) {
          do {
            (**(code **)(*(int64_t *)(in_stack_00000070 + 8) + 0x30))(in_stack_00000070 + 8);
            plVar7 = plVar23 + -3;
            if (plVar23 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
            }
            iVar5 = FUN_1808d6650(plVar7,*(uint64_t *)(unaff_RBP + -0x78));
            if (iVar5 != 0) goto LAB_180861693;
            plVar7 = plVar23 + 4;
            if (plVar23 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x38;
            }
            if ((*(int *)(*plVar7 + 0x30) != -1) &&
               (iVar5 = FUN_18085e990(in_stack_00000070,*plVar7), iVar5 != 0)) goto LAB_180861693;
            if ((*(int64_t *)(in_stack_00000070 + 0x80) != 0) &&
               (iVar5 = FUN_180868970(*(int64_t *)(in_stack_00000070 + 0x80),plVar22), iVar5 != 0))
            goto LAB_180861693;
            plVar7 = plVar23 + 3;
            iVar5 = 0;
            if (plVar23 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x30;
              iVar5 = 0;
            }
            while( true ) {
              if (*(int *)(*plVar7 + 0x60) <= iVar5) break;
              in_stack_00000078 = (int64_t *)0x0;
              iVar16 = FUN_180860480(in_stack_00000070,
                                     (int64_t)iVar5 * 0x10 + *(int64_t *)(*plVar7 + 0x58));
              if (iVar16 != 0) goto LAB_180861693;
              iVar5 = iVar5 + 1;
            }
            if (plVar23 != *(int64_t **)(unaff_RBP + -0x68)) {
              plVar7 = (int64_t *)(*plVar23 + -0x18);
              if (*plVar23 == 0) {
                plVar7 = (int64_t *)0x0;
              }
              plVar23 = (int64_t *)0x0;
              if (plVar7 != (int64_t *)0x0) {
                plVar23 = plVar7 + 3;
              }
            }
            plVar22 = (int64_t *)(uint64_t)((int)plVar22 + 1);
          } while (plVar23 != *(int64_t **)(unaff_RBP + -0x68));
        }
        if ((*(int64_t *)(in_stack_00000070 + 0x350) == 0) || (iVar5 = FUN_1808ccc40(), iVar5 == 0)
           ) {
          lVar14 = *plVar18 + -8;
          if (*plVar18 == 0) {
            lVar14 = 0;
          }
          plVar7 = (int64_t *)(lVar14 + 8);
          if (lVar14 == 0) {
            plVar7 = (int64_t *)0x0;
          }
          if (plVar7 == plVar18) {
            puVar13 = *(uint64_t **)(unaff_RBP + -0x78);
          }
          else {
            do {
              plVar20 = plVar7 + -1;
              if (plVar7 == (int64_t *)0x0) {
                plVar20 = (int64_t *)0x0;
              }
              in_stack_00000078 = plVar20;
              uVar9 = (**(code **)(*(int64_t *)(in_stack_00000070 + 8) + 0x38))
                                (in_stack_00000070 + 8);
              uVar10 = (**(code **)(*(int64_t *)(in_stack_00000070 + 8) + 0x30))
                                 (in_stack_00000070 + 8);
              puVar13 = *(uint64_t **)(unaff_RBP + -0x78);
              iVar5 = FUN_1808d6410(plVar20,puVar13,uVar10,uVar9);
              if (iVar5 != 0) goto LAB_180861693;
              lVar14 = plVar20[3];
              if (lVar14 != 0) {
                plVar22 = puVar13 + 0x97;
                if (puVar13 == (uint64_t *)0xffffffffffffff08) {
                  plVar22 = (int64_t *)0x0;
                }
                if (plVar22 != (int64_t *)0x0) {
                  if (((*(int *)((int64_t)plVar22 + 0x24) != 0) && ((int)plVar22[1] != 0)) &&
                     (iVar5 = *(int *)(*plVar22 +
                                      (int64_t)
                                      (int)((*(uint *)(lVar14 + 0x1c) ^ *(uint *)(lVar14 + 0x18) ^
                                             *(uint *)(lVar14 + 0x14) ^ *(uint *)(lVar14 + 0x10)) &
                                           (int)plVar22[1] - 1U) * 4), iVar5 != -1)) {
                    lVar6 = plVar22[2];
                    do {
                      lVar8 = (int64_t)iVar5;
                      if ((*(int64_t *)(lVar6 + lVar8 * 0x18) == *(int64_t *)(lVar14 + 0x10)) &&
                         (*(int64_t *)(lVar6 + (lVar8 * 3 + 1) * 8) == *(int64_t *)(lVar14 + 0x18)
                         )) goto LAB_180860f7b;
                      iVar5 = *(int *)(lVar6 + (lVar8 * 3 + 2) * 8);
                    } while (iVar5 != -1);
                  }
                  iVar5 = -1;
LAB_180860f7b:
                  if (iVar5 != -1) {
                    cVar3 = func_0x00018084de30(lVar14);
                    plVar22 = in_stack_00000078;
                    iVar5 = *(int *)(unaff_R12 + 0x278);
                    iVar16 = 0;
                    lVar14 = 0;
                    if (0 < iVar5) {
                      puVar11 = (uint64_t *)*puVar24;
                      do {
                        if ((int64_t *)*puVar11 == plVar20) break;
                        iVar16 = iVar16 + 1;
                        lVar14 = lVar14 + 1;
                        puVar11 = puVar11 + 1;
                      } while (lVar14 < iVar5);
                    }
                    uVar2 = *puVar24;
                    uVar19 = uVar2 + (int64_t)iVar16 * 8;
                    if ((uVar19 < uVar2) || (uVar2 + (int64_t)iVar5 * 8 <= uVar19)) {
                      cVar4 = '\0';
                    }
                    else {
                      cVar4 = '\x01';
                    }
                    if (cVar3 != cVar4) {
                      if (cVar3 == '\0') {
                        iVar16 = (int)((int64_t)(uVar19 - uVar2) >> 3);
                        if ((iVar16 < 0) || (iVar5 <= iVar16)) goto LAB_180861693;
                        iVar21 = (iVar5 - iVar16) + -1;
                        if (0 < iVar21) {
                          lVar14 = uVar2 + (int64_t)iVar16 * 8;
                    // WARNING: Subroutine does not return
                          memmove(lVar14,lVar14 + 8,(int64_t)iVar21 << 3);
                        }
                        *(int *)(unaff_R12 + 0x278) = iVar5 + -1;
                      }
                      else {
                        iVar5 = iVar5 + 1;
                        uVar17 = (int)*(uint *)(unaff_R12 + 0x27c) >> 0x1f;
                        iVar16 = (*(uint *)(unaff_R12 + 0x27c) ^ uVar17) - uVar17;
                        if (iVar16 < iVar5) {
                          iVar21 = (int)((float)iVar16 * 1.5);
                          iVar16 = iVar5;
                          if (iVar5 <= iVar21) {
                            iVar16 = iVar21;
                          }
                          if (iVar16 < 8) {
                            iVar21 = 8;
                          }
                          else if (iVar21 < iVar5) {
                            iVar21 = iVar5;
                          }
                          iVar5 = FUN_180747f10(puVar24,iVar21);
                          if (iVar5 != 0) goto LAB_180861693;
                        }
                        *(int64_t **)(*puVar24 + (int64_t)*(int *)(unaff_R12 + 0x278) * 8) =
                             plVar22;
                        *(int *)(unaff_R12 + 0x278) = *(int *)(unaff_R12 + 0x278) + 1;
                      }
                    }
                    lVar14 = plVar20[3];
                    if (((*(float *)(lVar14 + 0x40) == 0.0) && (*(float *)(lVar14 + 0x44) == 0.0))
                       && (*(float *)(lVar14 + 0x48) == 0.0)) {
                      cVar3 = '\0';
                    }
                    else {
                      cVar3 = '\x01';
                    }
                    iVar5 = *(int *)(unaff_R12 + 0x268);
                    iVar16 = 0;
                    lVar14 = 0;
                    if (0 < iVar5) {
                      puVar11 = (uint64_t *)*puVar1;
                      do {
                        if ((int64_t *)*puVar11 == plVar20) break;
                        iVar16 = iVar16 + 1;
                        lVar14 = lVar14 + 1;
                        puVar11 = puVar11 + 1;
                      } while (lVar14 < iVar5);
                    }
                    uVar2 = *puVar1;
                    uVar19 = uVar2 + (int64_t)iVar16 * 8;
                    if ((uVar19 < uVar2) || (uVar2 + (int64_t)iVar5 * 8 <= uVar19)) {
                      cVar4 = '\0';
                    }
                    else {
                      cVar4 = '\x01';
                    }
                    if (cVar3 != cVar4) {
                      if (cVar3 == '\0') {
                        iVar16 = (int)((int64_t)(uVar19 - uVar2) >> 3);
                        if ((iVar16 < 0) || (iVar5 <= iVar16)) goto LAB_180861693;
                        iVar21 = (iVar5 - iVar16) + -1;
                        if (0 < iVar21) {
                          lVar14 = uVar2 + (int64_t)iVar16 * 8;
                    // WARNING: Subroutine does not return
                          memmove(lVar14,lVar14 + 8,(int64_t)iVar21 << 3);
                        }
                        *(int *)(unaff_R12 + 0x268) = iVar5 + -1;
                      }
                      else {
                        iVar5 = iVar5 + 1;
                        uVar17 = (int)*(uint *)(unaff_R12 + 0x26c) >> 0x1f;
                        iVar16 = (*(uint *)(unaff_R12 + 0x26c) ^ uVar17) - uVar17;
                        if (iVar16 < iVar5) {
                          iVar21 = (int)((float)iVar16 * 1.5);
                          iVar16 = iVar5;
                          if (iVar5 <= iVar21) {
                            iVar16 = iVar21;
                          }
                          if (iVar16 < 8) {
                            iVar21 = 8;
                          }
                          else if (iVar21 < iVar5) {
                            iVar21 = iVar5;
                          }
                          iVar5 = FUN_180747f10(puVar1,iVar21);
                          if (iVar5 != 0) goto LAB_180861693;
                        }
                        *(int64_t **)(*puVar1 + (int64_t)*(int *)(unaff_R12 + 0x268) * 8) =
                             plVar22;
                        *(int *)(unaff_R12 + 0x268) = *(int *)(unaff_R12 + 0x268) + 1;
                      }
                    }
                  }
                }
              }
              lVar14 = *plVar7 + -8;
              if (*plVar7 == 0) {
                lVar14 = 0;
              }
              plVar7 = (int64_t *)(lVar14 + 8);
              if (lVar14 == 0) {
                plVar7 = (int64_t *)0x0;
              }
            } while (plVar7 != plVar18);
          }
          if ((((*(int64_t *)(in_stack_00000070 + 0x478) == 0) ||
               (iVar5 = FUN_1808d84d0(*(int64_t *)(in_stack_00000070 + 0x478),puVar13), iVar5 == 0)
               ) && (iVar5 = FUN_1808cc000(in_stack_00000070 + 0x3f8,puVar13), iVar5 == 0)) &&
             (iVar5 = FUN_1808cc000(in_stack_00000070 + 0x378,puVar13), iVar5 == 0)) {
            plVar18 = (int64_t *)(in_stack_00000070 + 0x490);
            for (plVar7 = (int64_t *)*plVar18; plVar7 != plVar18; plVar7 = (int64_t *)*plVar7) {
              (**(code **)(*(int64_t *)plVar7[2] + 0x30))((int64_t *)plVar7[2],unaff_RBP + -0x58);
              cVar3 = func_0x0001808c57f0(puVar13,plVar7[2]);
              if ((cVar3 != '\0') && (plVar20 = (int64_t *)plVar7[2], plVar20 != (int64_t *)0x0))
              {
                (**(code **)(*plVar20 + 0x30))(plVar20,&stack0x00000078);
                lVar14 = (**(code **)(*(int64_t *)*puVar13 + 0x128))
                                   ((int64_t *)*puVar13,&stack0x00000078,1);
                if (lVar14 == 0) {
                    // WARNING: Subroutine does not return
                  FUN_18076b390(unaff_RBP + 8,0x27,&unknown_var_8960_ptr,
                                (uint64_t)in_stack_00000078 & 0xffffffff,in_stack_00000078._4_2_);
                }
                plVar7[2] = lVar14;
              }
              if (plVar7 == plVar18) break;
            }
            cVar3 = func_0x000180857b20(in_stack_00000070 + 200);
            if (((cVar3 != '\0') || ((*(uint *)(in_stack_00000070 + 0x2d8) >> 0xf & 1) != 0)) ||
               (*(int *)(in_stack_00000070 + 0x2e4) != 0)) {
              lVar14 = *(int64_t *)(in_stack_00000070 + 0x88);
              iVar5 = 0;
              if (0 < *(int *)(lVar14 + 0xa8)) {
                lVar6 = *(int64_t *)(unaff_RBP + -0x70);
                do {
                  iVar21 = 0;
                  iVar16 = *(int *)(lVar6 + 0xa8);
                  plVar7 = (int64_t *)((int64_t)iVar5 * 0x10 + *(int64_t *)(lVar14 + 0xa0));
                  if (0 < iVar16) {
                    lVar14 = *(int64_t *)(lVar6 + 0xa0);
                    do {
                      if ((*(int64_t *)(lVar14 + (int64_t)iVar21 * 0x10) == *plVar7) &&
                         (*(int64_t *)(lVar14 + 8 + (int64_t)iVar21 * 0x10) == plVar7[1]))
                      goto LAB_18086142b;
                      iVar21 = iVar21 + 1;
                    } while (iVar21 < iVar16);
                  }
                  in_stack_00000078 = (int64_t *)0x0;
                  iVar16 = FUN_180860480(in_stack_00000070,plVar7,&stack0x00000078);
                  plVar7 = in_stack_00000078;
                  if (iVar16 != 0) goto LAB_180861693;
                  *(uint *)((int64_t)in_stack_00000078 + 0x1c) =
                       *(uint *)((int64_t)in_stack_00000078 + 0x1c) | 0x80;
                  if (((*(uint *)((int64_t)in_stack_00000078 + 0x1c) >> 5 & 1) == 0) ||
                     ((*(uint *)((int64_t)in_stack_00000078 + 0x1c) >> 6 & 1) != 0)) {
                    uVar9 = FUN_18085ba10(in_stack_00000070 + 200,unaff_RBP + -0x48);
                    iVar16 = FUN_1808c7260(uVar9,plVar7,1);
                    if (iVar16 != 0) goto LAB_180861693;
                  }
LAB_18086142b:
                  lVar14 = *(int64_t *)(in_stack_00000070 + 0x88);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(lVar14 + 0xa8));
              }
            }
            uVar9 = *(uint64_t *)(unaff_RBP + -0x78);
            iVar5 = FUN_180856ec0(in_stack_00000070 + 200,uVar9);
            if ((iVar5 == 0) && (iVar5 = FUN_1808d3ee0(in_stack_00000070 + 0x280,uVar9), iVar5 == 0)
               ) {
              lVar14 = *(int64_t *)(*(int64_t *)(in_stack_00000070 + 0x2b0) + 0x30);
              iVar5 = FUN_18085ab70(in_stack_00000070 + 200);
              lVar14 = lVar14 + iVar5;
              plVar7 = (int64_t *)*plVar18;
joined_r0x000180861496:
              plVar20 = plVar7;
              if (plVar20 != plVar18) {
                plVar22 = plVar20 + 2;
                (**(code **)(*(int64_t *)plVar20[2] + 0x30))
                          ((int64_t *)plVar20[2],&stack0x00000078);
                plVar7 = plVar20;
                if (plVar20 != plVar18) {
                  plVar7 = (int64_t *)*plVar20;
                }
                lVar6 = *plVar22;
                cVar3 = func_0x0001808c57f0(*(uint64_t *)(unaff_RBP + -0x78),lVar6);
                if (cVar3 == '\0') {
                  if ((*(byte *)((int64_t)plVar20 + 0x1c) & 1) == 0) {
                    plVar23 = (int64_t *)0x0;
                    iVar5 = *(int *)(*(int64_t *)(in_stack_00000070 + 0x88) + 0xa8);
                    if (0 < iVar5) {
                      lVar8 = *(int64_t *)(*(int64_t *)(in_stack_00000070 + 0x88) + 0xa0);
                      plVar15 = plVar23;
                      do {
                        iVar16 = (int)plVar15;
                        if ((*(int64_t **)(lVar8 + (int64_t)iVar16 * 0x10) == in_stack_00000078)
                           && (*(int64_t *)(lVar8 + 8 + (int64_t)iVar16 * 0x10) ==
                               *(int64_t *)(unaff_RBP + -0x80))) goto joined_r0x000180861496;
                        plVar15 = (int64_t *)(uint64_t)(iVar16 + 1U);
                      } while ((int)(iVar16 + 1U) < iVar5);
                    }
                    plVar15 = *(int64_t **)(unaff_RBP + -0x68);
                    plVar12 = (int64_t *)(*plVar15 + -0x18);
                    if (*plVar15 == 0) {
                      plVar12 = plVar23;
                    }
                    if (plVar12 != (int64_t *)0x0) {
                      plVar23 = plVar12 + 3;
                    }
                    if (plVar23 != plVar15) {
                      do {
                        iVar5 = 0;
                        plVar12 = plVar23 + 3;
                        if (plVar23 == (int64_t *)0x0) {
                          plVar12 = (int64_t *)0x30;
                        }
                        iVar16 = *(int *)(*plVar12 + 0x60);
                        if (0 < iVar16) {
                          lVar8 = *(int64_t *)(*plVar12 + 0x58);
                          do {
                            if ((*(int64_t **)(lVar8 + (int64_t)iVar5 * 0x10) == in_stack_00000078
                                ) && (*(int64_t *)(lVar8 + 8 + (int64_t)iVar5 * 0x10) ==
                                      *(int64_t *)(unaff_RBP + -0x80))) {
                              FUN_180862080(in_stack_00000070,lVar6,lVar14 + 0x40);
                              goto joined_r0x000180861496;
                            }
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < iVar16);
                          plVar15 = *(int64_t **)(unaff_RBP + -0x68);
                        }
                        lVar8 = *plVar23 + -0x18;
                        if (*plVar23 == 0) {
                          lVar8 = 0;
                        }
                        plVar23 = (int64_t *)(lVar8 + 0x18);
                        if (lVar8 == 0) {
                          plVar23 = (int64_t *)0x0;
                        }
                      } while (plVar23 != plVar15);
                    }
                    uVar17 = *(uint *)((int64_t)plVar20 + 0x1c);
                    (**(code **)(*(int64_t *)*plVar22 + 0x30))
                              ((int64_t *)*plVar22,unaff_RBP + -0x58);
                    iVar5 = FUN_1808caa20(in_stack_00000070 + 0x378 +
                                          (uint64_t)(~(uVar17 >> 1) & 1) * 0x80,unaff_RBP + -0x58);
                    if (iVar5 == 0) {
                      *(int64_t *)plVar20[1] = *plVar20;
                      *(int64_t *)(*plVar20 + 8) = plVar20[1];
                      plVar20[1] = (int64_t)plVar20;
                      *plVar20 = (int64_t)plVar20;
                      *(int64_t **)plVar20[1] = plVar20;
                      *(int64_t *)(*plVar20 + 8) = plVar20[1];
                      plVar20[1] = (int64_t)plVar20;
                      *plVar20 = (int64_t)plVar20;
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar20,&unknown_var_2624_ptr,
                                    0xadc,1);
                    }
                    goto LAB_180861693;
                  }
                }
                else {
                  FUN_180862080(in_stack_00000070,*plVar22,lVar14 + 0x40);
                }
                goto joined_r0x000180861496;
              }
            }
          }
        }
      }
    }
  }
LAB_180861693:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x30) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808616bc(void)
void FUN_1808616bc(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x30) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



