#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part356_sub002_sub002.c - 1 个函数

// 函数: void FUN_180860690(longlong param_1,undefined8 *param_2)
void FUN_180860690(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  undefined1 auStack_1a8 [32];
  uint uStack_188;
  uint uStack_180;
  uint uStack_178;
  uint uStack_170;
  uint uStack_168;
  uint uStack_160;
  uint uStack_158;
  uint uStack_150;
  uint uStack_148;
  uint uStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  byte bStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  byte bStack_124;
  byte bStack_123;
  byte bStack_122;
  byte bStack_121;
  undefined8 *puStack_120;
  longlong lStack_118;
  longlong *aplStack_110 [2];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [40];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  lVar13 = *(longlong *)(param_1 + 0x88);
  lStack_138 = param_1;
  puStack_120 = param_2;
  lStack_118 = lVar13;
  if (lVar13 != 0) {
    lVar7 = (**(code **)(*(longlong *)*param_2 + 0x288))((longlong *)*param_2,lVar13 + 0x10);
    if (lVar7 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar13 + 0x10,auStack_a0);
    }
    *(longlong *)(param_1 + 0x88) = lVar7;
  }
  iVar6 = FUN_1808b8950(param_1 + 0x90,param_2);
  if ((iVar6 == 0) && (iVar6 = FUN_1808b2950(param_1 + 8,param_2), iVar6 == 0)) {
    lVar7 = *(longlong *)(param_1 + 0x88);
    if (lVar7 != 0) {
      plVar19 = param_2 + 0x8d;
      if (param_2 == (undefined8 *)0xffffffffffffff08) {
        plVar19 = (longlong *)0x0;
      }
      if (plVar19 != (longlong *)0x0) {
        if (((*(int *)((longlong)plVar19 + 0x24) != 0) && ((int)plVar19[1] != 0)) &&
           (iVar6 = *(int *)(*plVar19 +
                            (longlong)
                            (int)((*(uint *)(lVar7 + 0x1c) ^ *(uint *)(lVar7 + 0x18) ^
                                   *(uint *)(lVar7 + 0x14) ^ *(uint *)(lVar7 + 0x10)) &
                                 (int)plVar19[1] - 1U) * 4), iVar6 != -1)) {
          lVar14 = plVar19[2];
          do {
            lVar8 = (longlong)iVar6;
            if ((*(longlong *)(lVar14 + lVar8 * 0x18) == *(longlong *)(lVar7 + 0x10)) &&
               (*(longlong *)(lVar14 + 8 + lVar8 * 0x18) == *(longlong *)(lVar7 + 0x18)))
            goto LAB_1808607eb;
            iVar6 = *(int *)(lVar14 + 0x10 + lVar8 * 0x18);
          } while (iVar6 != -1);
        }
        iVar6 = -1;
LAB_1808607eb:
        if (iVar6 != -1) {
          iVar6 = FUN_1808b2f30(param_1 + 8,10);
          if (((iVar6 != 0) || (iVar6 = FUN_1808b2f30(param_1 + 8,0x1e), iVar6 != 0)) ||
             (iVar6 = FUN_1808b2f30(param_1 + 8), iVar6 != 0)) goto FUN_1808616bc;
          lVar7 = *(longlong *)(param_1 + 0x88);
          for (uVar20 = *(ulonglong *)(lVar7 + 0x70);
              (*(ulonglong *)(lVar7 + 0x70) <= uVar20 &&
              (uVar20 < (longlong)*(int *)(lVar7 + 0x78) * 0x10 + *(ulonglong *)(lVar7 + 0x70)));
              uVar20 = uVar20 + 0x10) {
            cVar4 = func_0x00018085d7b0(lVar13 + 0x70);
            if (cVar4 == '\0') {
              uStack_130 = (longlong *)0x0;
              iVar6 = FUN_1808bc010(*(undefined8 *)(param_1 + 0x2c8),uVar20,param_1);
              if (iVar6 != 0) goto FUN_1808616bc;
            }
          }
          for (plVar19 = *(longlong **)(lVar13 + 0x70);
              (*(longlong **)(lVar13 + 0x70) <= plVar19 &&
              (plVar19 < *(longlong **)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x78) * 2));
              plVar19 = plVar19 + 2) {
            iVar17 = 0;
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x78);
            if (0 < iVar6) {
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x70);
              do {
                if ((*(longlong *)(lVar7 + (longlong)iVar17 * 0x10) == *plVar19) &&
                   (*(longlong *)(lVar7 + 8 + (longlong)iVar17 * 0x10) == plVar19[1]))
                goto LAB_1808609c2;
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar6);
            }
            lVar7 = *(longlong *)(param_1 + 0x2c8);
            uVar18 = *(uint *)(param_1 + 0x2dc);
            lVar14 = *(longlong *)(lVar7 + 0x130);
            if (lVar14 != 0) {
              FUN_180768360(lVar14);
            }
            plVar9 = (longlong *)func_0x000180851be0(lVar7 + 0x138,plVar19);
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)func_0x000180851be0(lVar7 + 0x108,plVar19);
            }
            if (plVar9 == (longlong *)0x0) {
              if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
                FUN_180768400(lVar14);
              }
              goto FUN_1808616bc;
            }
            if (((*(int *)((longlong)plVar9 + 0x24) != 0) && ((int)plVar9[1] != 0)) &&
               (iVar6 = *(int *)(*plVar9 + (longlong)(int)((int)plVar9[1] - 1U & uVar18) * 4),
               iVar6 != -1)) {
              lVar7 = plVar9[2];
              do {
                lVar8 = (longlong)iVar6;
                if (*(uint *)(lVar7 + lVar8 * 0x10) == uVar18) {
                  lVar7 = *(longlong *)(lVar7 + 8 + lVar8 * 0x10);
                  goto LAB_180860998;
                }
                iVar6 = *(int *)(lVar7 + 4 + lVar8 * 0x10);
              } while (iVar6 != -1);
            }
            lVar7 = 0;
LAB_180860998:
            if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
              FUN_180768400(lVar14);
            }
            if ((lVar7 == 0) ||
               (iVar6 = FUN_1808c19d0(*(undefined8 *)(param_1 + 0x2c8)), iVar6 != 0))
            goto FUN_1808616bc;
LAB_1808609c2:
          }
          iVar6 = 0;
          if (0 < *(int *)(lVar13 + 0x88)) {
            do {
              iVar22 = 0;
              plVar19 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar13 + 0x80));
              iVar17 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x88);
              if (0 < iVar17) {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x80);
                do {
                  if ((*(longlong *)(lVar7 + (longlong)iVar22 * 0x10) == *plVar19) &&
                     (*(longlong *)(lVar7 + 8 + (longlong)iVar22 * 0x10) == plVar19[1]))
                  goto LAB_180860a65;
                  iVar22 = iVar22 + 1;
                } while (iVar22 < iVar17);
              }
              iVar17 = FUN_1808626e0(param_1);
              if (iVar17 != 0) goto FUN_1808616bc;
LAB_180860a65:
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar13 + 0x88));
          }
          iVar6 = 0;
          lVar7 = *(longlong *)(param_1 + 0x88);
          if (0 < *(int *)(lVar7 + 0x88)) {
            do {
              iVar17 = 0;
              plVar19 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar7 + 0x80));
              if (0 < *(int *)(lVar13 + 0x88)) {
                do {
                  if ((*(longlong *)(*(longlong *)(lVar13 + 0x80) + (longlong)iVar17 * 0x10) ==
                       *plVar19) &&
                     (*(longlong *)(*(longlong *)(lVar13 + 0x80) + 8 + (longlong)iVar17 * 0x10) ==
                      plVar19[1])) goto LAB_180860af6;
                  iVar17 = iVar17 + 1;
                } while (iVar17 < *(int *)(lVar13 + 0x88));
              }
              iVar17 = FUN_18085ea80(param_1,iVar6);
              if (iVar17 != 0) goto FUN_1808616bc;
LAB_180860af6:
              lVar7 = *(longlong *)(param_1 + 0x88);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar7 + 0x88));
          }
          iVar6 = 0;
          param_2 = puStack_120;
          if (0 < *(int *)(lVar13 + 0xa8)) {
            do {
              iVar22 = 0;
              plVar19 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar13 + 0xa0));
              iVar17 = *(int *)(*(longlong *)(param_1 + 0x88) + 0xa8);
              if (0 < iVar17) {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0xa0);
                do {
                  if ((*(longlong *)(lVar7 + (longlong)iVar22 * 0x10) == *plVar19) &&
                     (*(longlong *)(lVar7 + 8 + (longlong)iVar22 * 0x10) == plVar19[1]))
                  goto LAB_180860c58;
                  iVar22 = iVar22 + 1;
                } while (iVar22 < iVar17);
              }
              plVar9 = (longlong *)(param_1 + 0x490);
              plVar21 = (longlong *)*plVar9;
              plVar23 = plVar21;
              while (plVar23 != plVar9) {
                (**(code **)(*(longlong *)plVar21[2] + 0x30))((longlong *)plVar21[2],&uStack_130);
                if ((uStack_130 == (longlong *)*plVar19) &&
                   (CONCAT17(bStack_121,
                             CONCAT16(bStack_122,
                                      CONCAT15(bStack_123,
                                               CONCAT14(bStack_124,
                                                        CONCAT13(bStack_125,
                                                                 CONCAT12(bStack_126,
                                                                          CONCAT11(bStack_127,
                                                                                   bStack_128)))))))
                    == plVar19[1])) {
                  if (plVar21 != (longlong *)0x0) {
                    (**(code **)(*(longlong *)plVar21[2] + 0x30))
                              ((longlong *)plVar21[2],aplStack_110);
                    iVar6 = FUN_1808caa20(param_1 + 0x3f8,aplStack_110);
                    if (iVar6 == 0) {
                      uStack_188 = CONCAT31(uStack_188._1_3_,1);
                      *(longlong *)plVar21[1] = *plVar21;
                      *(longlong *)(*plVar21 + 8) = plVar21[1];
                      plVar21[1] = (longlong)plVar21;
                      *plVar21 = (longlong)plVar21;
                      *(longlong **)plVar21[1] = plVar21;
                      *(longlong *)(*plVar21 + 8) = plVar21[1];
                      plVar21[1] = (longlong)plVar21;
                      *plVar21 = (longlong)plVar21;
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar21,&UNK_180984ef0,
                                    0xa2c);
                    }
                    goto FUN_1808616bc;
                  }
                  break;
                }
                if (plVar21 != plVar9) {
                  plVar21 = (longlong *)*plVar21;
                  plVar23 = plVar21;
                }
              }
LAB_180860c58:
              iVar6 = iVar6 + 1;
              param_2 = puStack_120;
            } while (iVar6 < *(int *)(lVar13 + 0xa8));
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x80) == 0) ||
       (iVar6 = FUN_180868330(*(longlong *)(param_1 + 0x80),param_2), iVar6 == 0)) {
      for (puVar16 = *(undefined8 **)(param_1 + 0x4d0);
          (*(undefined8 **)(param_1 + 0x4d0) <= puVar16 &&
          (puVar16 < *(undefined8 **)(param_1 + 0x4d0) + *(int *)(param_1 + 0x4d8)));
          puVar16 = puVar16 + 1) {
        iVar6 = FUN_1808cc190(*puVar16,param_2);
        if (iVar6 != 0) goto FUN_1808616bc;
      }
      plVar19 = (longlong *)(param_1 + 0x250);
      func_0x00018085f3d0(plVar19);
      puVar1 = (ulonglong *)(param_1 + 0x260);
      iVar6 = FUN_180744d60(puVar1);
      if (iVar6 == 0) {
        puVar25 = (ulonglong *)(param_1 + 0x270);
        iVar6 = FUN_180744d60(puVar25);
        if (iVar6 == 0) {
          plVar21 = (longlong *)0x0;
          aplStack_110[0] = (longlong *)(lStack_138 + 0x240);
          plVar9 = (longlong *)(*aplStack_110[0] + -0x18);
          if (*aplStack_110[0] == 0) {
            plVar9 = plVar21;
          }
          plVar23 = plVar21;
          if (plVar9 != (longlong *)0x0) {
            plVar23 = plVar9 + 3;
          }
          if (plVar23 != aplStack_110[0]) {
            do {
              lVar13 = lStack_138;
              (**(code **)(*(longlong *)(lStack_138 + 8) + 0x30))(lStack_138 + 8);
              plVar9 = plVar23 + -3;
              if (plVar23 == (longlong *)0x0) {
                plVar9 = (longlong *)0x0;
              }
              iVar6 = FUN_1808d6650(plVar9,puStack_120);
              if (iVar6 != 0) goto FUN_1808616bc;
              plVar9 = plVar23 + 4;
              if (plVar23 == (longlong *)0x0) {
                plVar9 = (longlong *)0x38;
              }
              if ((*(int *)(*plVar9 + 0x30) != -1) &&
                 (iVar6 = FUN_18085e990(lVar13,*plVar9), iVar6 != 0)) goto FUN_1808616bc;
              if ((*(longlong *)(lStack_138 + 0x80) != 0) &&
                 (iVar6 = FUN_180868970(*(longlong *)(lStack_138 + 0x80),plVar21), iVar6 != 0))
              goto FUN_1808616bc;
              plVar9 = plVar23 + 3;
              iVar6 = 0;
              if (plVar23 == (longlong *)0x0) {
                plVar9 = (longlong *)0x30;
                iVar6 = 0;
              }
              while( true ) {
                if (*(int *)(*plVar9 + 0x60) <= iVar6) break;
                uStack_130 = (longlong *)0x0;
                iVar17 = FUN_180860480(lStack_138,
                                       (longlong)iVar6 * 0x10 + *(longlong *)(*plVar9 + 0x58));
                if (iVar17 != 0) goto FUN_1808616bc;
                iVar6 = iVar6 + 1;
              }
              if (plVar23 != aplStack_110[0]) {
                plVar9 = (longlong *)(*plVar23 + -0x18);
                if (*plVar23 == 0) {
                  plVar9 = (longlong *)0x0;
                }
                plVar23 = (longlong *)0x0;
                if (plVar9 != (longlong *)0x0) {
                  plVar23 = plVar9 + 3;
                }
              }
              plVar21 = (longlong *)(ulonglong)((int)plVar21 + 1);
            } while (plVar23 != aplStack_110[0]);
          }
          lVar13 = lStack_138;
          if ((*(longlong *)(lStack_138 + 0x350) == 0) || (iVar6 = FUN_1808ccc40(), iVar6 == 0)) {
            lVar7 = *plVar19 + -8;
            if (*plVar19 == 0) {
              lVar7 = 0;
            }
            plVar9 = (longlong *)(lVar7 + 8);
            puVar16 = puStack_120;
            if (lVar7 == 0) {
              plVar9 = (longlong *)0x0;
            }
            while (plVar9 != plVar19) {
              plVar21 = plVar9 + -1;
              if (plVar9 == (longlong *)0x0) {
                plVar21 = (longlong *)0x0;
              }
              uStack_130 = plVar21;
              uVar10 = (**(code **)(*(longlong *)(lVar13 + 8) + 0x38))(lVar13 + 8);
              uVar11 = (**(code **)(*(longlong *)(lVar13 + 8) + 0x30))(lVar13 + 8);
              puVar16 = puStack_120;
              iVar6 = FUN_1808d6410(plVar21,puStack_120,uVar11,uVar10);
              if (iVar6 != 0) goto FUN_1808616bc;
              lVar7 = plVar21[3];
              if (lVar7 != 0) {
                plVar23 = puVar16 + 0x97;
                if (puVar16 == (undefined8 *)0xffffffffffffff08) {
                  plVar23 = (longlong *)0x0;
                }
                if (plVar23 != (longlong *)0x0) {
                  if (((*(int *)((longlong)plVar23 + 0x24) != 0) && ((int)plVar23[1] != 0)) &&
                     (iVar6 = *(int *)(*plVar23 +
                                      (longlong)
                                      (int)((*(uint *)(lVar7 + 0x1c) ^ *(uint *)(lVar7 + 0x18) ^
                                             *(uint *)(lVar7 + 0x14) ^ *(uint *)(lVar7 + 0x10)) &
                                           (int)plVar23[1] - 1U) * 4), iVar6 != -1)) {
                    lVar14 = plVar23[2];
                    do {
                      lVar8 = (longlong)iVar6;
                      if ((*(longlong *)(lVar14 + lVar8 * 0x18) == *(longlong *)(lVar7 + 0x10)) &&
                         (*(longlong *)(lVar14 + (lVar8 * 3 + 1) * 8) == *(longlong *)(lVar7 + 0x18)
                         )) goto LAB_180860f7b;
                      iVar6 = *(int *)(lVar14 + (lVar8 * 3 + 2) * 8);
                    } while (iVar6 != -1);
                  }
                  iVar6 = -1;
LAB_180860f7b:
                  if (iVar6 != -1) {
                    cVar4 = func_0x00018084de30(lVar7);
                    plVar23 = uStack_130;
                    iVar6 = *(int *)(param_1 + 0x278);
                    iVar17 = 0;
                    lVar7 = 0;
                    if (0 < iVar6) {
                      puVar12 = (undefined8 *)*puVar25;
                      do {
                        if ((longlong *)*puVar12 == plVar21) break;
                        iVar17 = iVar17 + 1;
                        lVar7 = lVar7 + 1;
                        puVar12 = puVar12 + 1;
                      } while (lVar7 < iVar6);
                    }
                    uVar2 = *puVar25;
                    uVar20 = uVar2 + (longlong)iVar17 * 8;
                    if ((uVar20 < uVar2) || (uVar2 + (longlong)iVar6 * 8 <= uVar20)) {
                      cVar5 = '\0';
                    }
                    else {
                      cVar5 = '\x01';
                    }
                    if (cVar4 != cVar5) {
                      if (cVar4 == '\0') {
                        iVar17 = (int)((longlong)(uVar20 - uVar2) >> 3);
                        if ((iVar17 < 0) || (iVar6 <= iVar17)) goto FUN_1808616bc;
                        iVar22 = (iVar6 - iVar17) + -1;
                        if (0 < iVar22) {
                          lVar13 = uVar2 + (longlong)iVar17 * 8;
                    // WARNING: Subroutine does not return
                          memmove(lVar13,lVar13 + 8,(longlong)iVar22 << 3);
                        }
                        *(int *)(param_1 + 0x278) = iVar6 + -1;
                      }
                      else {
                        iVar6 = iVar6 + 1;
                        uVar18 = (int)*(uint *)(param_1 + 0x27c) >> 0x1f;
                        iVar17 = (*(uint *)(param_1 + 0x27c) ^ uVar18) - uVar18;
                        if (iVar17 < iVar6) {
                          iVar22 = (int)((float)iVar17 * 1.5);
                          iVar17 = iVar6;
                          if (iVar6 <= iVar22) {
                            iVar17 = iVar22;
                          }
                          if (iVar17 < 8) {
                            iVar22 = 8;
                          }
                          else if (iVar22 < iVar6) {
                            iVar22 = iVar6;
                          }
                          iVar6 = FUN_180747f10(puVar25,iVar22);
                          if (iVar6 != 0) goto FUN_1808616bc;
                        }
                        *(longlong **)(*puVar25 + (longlong)*(int *)(param_1 + 0x278) * 8) = plVar23
                        ;
                        *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
                      }
                    }
                    lVar7 = plVar21[3];
                    if (((*(float *)(lVar7 + 0x40) == 0.0) && (*(float *)(lVar7 + 0x44) == 0.0)) &&
                       (*(float *)(lVar7 + 0x48) == 0.0)) {
                      cVar4 = '\0';
                    }
                    else {
                      cVar4 = '\x01';
                    }
                    iVar6 = *(int *)(param_1 + 0x268);
                    iVar17 = 0;
                    lVar7 = 0;
                    if (0 < iVar6) {
                      puVar12 = (undefined8 *)*puVar1;
                      do {
                        if ((longlong *)*puVar12 == plVar21) break;
                        iVar17 = iVar17 + 1;
                        lVar7 = lVar7 + 1;
                        puVar12 = puVar12 + 1;
                      } while (lVar7 < iVar6);
                    }
                    uVar2 = *puVar1;
                    uVar20 = uVar2 + (longlong)iVar17 * 8;
                    if ((uVar20 < uVar2) || (uVar2 + (longlong)iVar6 * 8 <= uVar20)) {
                      cVar5 = '\0';
                    }
                    else {
                      cVar5 = '\x01';
                    }
                    if (cVar4 != cVar5) {
                      if (cVar4 == '\0') {
                        iVar17 = (int)((longlong)(uVar20 - uVar2) >> 3);
                        if ((iVar17 < 0) || (iVar6 <= iVar17)) goto FUN_1808616bc;
                        iVar22 = (iVar6 - iVar17) + -1;
                        if (0 < iVar22) {
                          lVar13 = uVar2 + (longlong)iVar17 * 8;
                    // WARNING: Subroutine does not return
                          memmove(lVar13,lVar13 + 8,(longlong)iVar22 << 3);
                        }
                        *(int *)(param_1 + 0x268) = iVar6 + -1;
                      }
                      else {
                        iVar6 = iVar6 + 1;
                        uVar18 = (int)*(uint *)(param_1 + 0x26c) >> 0x1f;
                        iVar17 = (*(uint *)(param_1 + 0x26c) ^ uVar18) - uVar18;
                        if (iVar17 < iVar6) {
                          iVar22 = (int)((float)iVar17 * 1.5);
                          iVar17 = iVar6;
                          if (iVar6 <= iVar22) {
                            iVar17 = iVar22;
                          }
                          if (iVar17 < 8) {
                            iVar22 = 8;
                          }
                          else if (iVar22 < iVar6) {
                            iVar22 = iVar6;
                          }
                          iVar6 = FUN_180747f10(puVar1,iVar22);
                          if (iVar6 != 0) goto FUN_1808616bc;
                        }
                        *(longlong **)(*puVar1 + (longlong)*(int *)(param_1 + 0x268) * 8) = plVar23;
                        *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
                      }
                    }
                  }
                }
              }
              lVar7 = *plVar9 + -8;
              if (*plVar9 == 0) {
                lVar7 = 0;
              }
              plVar9 = (longlong *)(lVar7 + 8);
              if (lVar7 == 0) {
                plVar9 = (longlong *)0x0;
              }
            }
            if ((((*(longlong *)(lVar13 + 0x478) == 0) ||
                 (iVar6 = FUN_1808d84d0(*(longlong *)(lVar13 + 0x478),puVar16), iVar6 == 0)) &&
                (iVar6 = FUN_1808cc000(lVar13 + 0x3f8,puVar16), iVar6 == 0)) &&
               (iVar6 = FUN_1808cc000(lVar13 + 0x378,puVar16), iVar6 == 0)) {
              plVar19 = (longlong *)(lVar13 + 0x490);
              for (plVar9 = (longlong *)*plVar19; plVar9 != plVar19; plVar9 = (longlong *)*plVar9) {
                (**(code **)(*(longlong *)plVar9[2] + 0x30))((longlong *)plVar9[2],auStack_100);
                cVar4 = func_0x0001808c57f0(puVar16,plVar9[2]);
                if ((cVar4 != '\0') && (plVar21 = (longlong *)plVar9[2], plVar21 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar21 + 0x30))(plVar21,&uStack_130);
                  lVar13 = (**(code **)(*(longlong *)*puVar16 + 0x128))
                                     ((longlong *)*puVar16,&uStack_130,1);
                  if (lVar13 == 0) {
                    uStack_140 = (uint)bStack_121;
                    uStack_148 = (uint)bStack_122;
                    uStack_150 = (uint)bStack_123;
                    uStack_158 = (uint)bStack_124;
                    uStack_160 = (uint)bStack_125;
                    uStack_168 = (uint)bStack_126;
                    uStack_170 = (uint)bStack_127;
                    uStack_178 = (uint)bStack_128;
                    uStack_180 = (uint)uStack_130._6_2_;
                    uStack_188 = (uint)uStack_130._4_2_;
                    // WARNING: Subroutine does not return
                    FUN_18076b390(auStack_a0,0x27,&UNK_180958180,(ulonglong)uStack_130 & 0xffffffff)
                    ;
                  }
                  plVar9[2] = lVar13;
                }
                lVar13 = lStack_138;
                if (plVar9 == plVar19) break;
              }
              cVar4 = func_0x000180857b20(lVar13 + 200);
              lVar7 = lStack_118;
              if (((cVar4 != '\0') || ((*(uint *)(lVar13 + 0x2d8) >> 0xf & 1) != 0)) ||
                 (*(int *)(lVar13 + 0x2e4) != 0)) {
                lVar14 = *(longlong *)(lVar13 + 0x88);
                iVar6 = 0;
                if (0 < *(int *)(lVar14 + 0xa8)) {
                  do {
                    iVar22 = 0;
                    iVar17 = *(int *)(lVar7 + 0xa8);
                    plVar9 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar14 + 0xa0));
                    if (0 < iVar17) {
                      lVar14 = *(longlong *)(lVar7 + 0xa0);
                      do {
                        if ((*(longlong *)(lVar14 + (longlong)iVar22 * 0x10) == *plVar9) &&
                           (*(longlong *)(lVar14 + 8 + (longlong)iVar22 * 0x10) == plVar9[1]))
                        goto LAB_18086142b;
                        iVar22 = iVar22 + 1;
                      } while (iVar22 < iVar17);
                    }
                    uStack_130 = (longlong *)0x0;
                    iVar17 = FUN_180860480(lVar13,plVar9,&uStack_130);
                    plVar9 = uStack_130;
                    if (iVar17 != 0) goto FUN_1808616bc;
                    *(uint *)((longlong)uStack_130 + 0x1c) =
                         *(uint *)((longlong)uStack_130 + 0x1c) | 0x80;
                    if (((*(uint *)((longlong)uStack_130 + 0x1c) >> 5 & 1) == 0) ||
                       ((*(uint *)((longlong)uStack_130 + 0x1c) >> 6 & 1) != 0)) {
                      uVar10 = FUN_18085ba10(lVar13 + 200,auStack_f0);
                      iVar17 = FUN_1808c7260(uVar10,plVar9,1);
                      if (iVar17 != 0) goto FUN_1808616bc;
                    }
LAB_18086142b:
                    lVar14 = *(longlong *)(lVar13 + 0x88);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)(lVar14 + 0xa8));
                }
              }
              puVar16 = puStack_120;
              iVar6 = FUN_180856ec0(lVar13 + 200,puStack_120);
              if ((iVar6 == 0) && (iVar6 = FUN_1808d3ee0(lVar13 + 0x280,puVar16), iVar6 == 0)) {
                lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0x2b0) + 0x30);
                iVar6 = FUN_18085ab70(lVar13 + 200);
                lVar7 = lVar7 + iVar6;
                plVar9 = (longlong *)*plVar19;
                lVar13 = lStack_138;
joined_r0x000180861496:
                plVar21 = plVar9;
                if (plVar21 != plVar19) {
                  plVar23 = plVar21 + 2;
                  (**(code **)(*(longlong *)plVar21[2] + 0x30))((longlong *)plVar21[2],&uStack_130);
                  plVar9 = plVar21;
                  if (plVar21 != plVar19) {
                    plVar9 = (longlong *)*plVar21;
                  }
                  lVar14 = *plVar23;
                  cVar4 = func_0x0001808c57f0(puStack_120,lVar14);
                  if (cVar4 == '\0') {
                    if ((*(byte *)((longlong)plVar21 + 0x1c) & 1) == 0) {
                      plVar24 = (longlong *)0x0;
                      lVar8 = CONCAT17(bStack_121,
                                       CONCAT16(bStack_122,
                                                CONCAT15(bStack_123,
                                                         CONCAT14(bStack_124,
                                                                  CONCAT13(bStack_125,
                                                                           CONCAT12(bStack_126,
                                                                                    CONCAT11(
                                                  bStack_127,bStack_128)))))));
                      iVar6 = *(int *)(*(longlong *)(lStack_138 + 0x88) + 0xa8);
                      if (0 < iVar6) {
                        lVar3 = *(longlong *)(*(longlong *)(lStack_138 + 0x88) + 0xa0);
                        plVar15 = plVar24;
                        do {
                          iVar17 = (int)plVar15;
                          if ((*(longlong **)(lVar3 + (longlong)iVar17 * 0x10) == uStack_130) &&
                             (lVar13 = lStack_138,
                             *(longlong *)(lVar3 + 8 + (longlong)iVar17 * 0x10) == lVar8))
                          goto joined_r0x000180861496;
                          plVar15 = (longlong *)(ulonglong)(iVar17 + 1U);
                        } while ((int)(iVar17 + 1U) < iVar6);
                      }
                      plVar15 = (longlong *)(*aplStack_110[0] + -0x18);
                      if (*aplStack_110[0] == 0) {
                        plVar15 = plVar24;
                      }
                      if (plVar15 != (longlong *)0x0) {
                        plVar24 = plVar15 + 3;
                      }
                      while (plVar24 != aplStack_110[0]) {
                        iVar6 = 0;
                        plVar15 = plVar24 + 3;
                        if (plVar24 == (longlong *)0x0) {
                          plVar15 = (longlong *)0x30;
                        }
                        iVar17 = *(int *)(*plVar15 + 0x60);
                        if (0 < iVar17) {
                          lVar13 = *(longlong *)(*plVar15 + 0x58);
                          do {
                            if ((*(longlong **)(lVar13 + (longlong)iVar6 * 0x10) == uStack_130) &&
                               (*(longlong *)(lVar13 + 8 + (longlong)iVar6 * 0x10) == lVar8)) {
                              FUN_180862080(lStack_138,lVar14,lVar7 + 0x40);
                              lVar13 = lStack_138;
                              goto joined_r0x000180861496;
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < iVar17);
                        }
                        lVar13 = *plVar24 + -0x18;
                        if (*plVar24 == 0) {
                          lVar13 = 0;
                        }
                        plVar24 = (longlong *)(lVar13 + 0x18);
                        if (lVar13 == 0) {
                          plVar24 = (longlong *)0x0;
                        }
                      }
                      uVar18 = *(uint *)((longlong)plVar21 + 0x1c);
                      (**(code **)(*(longlong *)*plVar23 + 0x30))((longlong *)*plVar23,auStack_100);
                      iVar6 = FUN_1808caa20(lStack_138 + 0x378 +
                                            (ulonglong)(~(uVar18 >> 1) & 1) * 0x80,auStack_100);
                      if (iVar6 == 0) {
                        uStack_188 = CONCAT31(uStack_188._1_3_,1);
                        *(longlong *)plVar21[1] = *plVar21;
                        *(longlong *)(*plVar21 + 8) = plVar21[1];
                        plVar21[1] = (longlong)plVar21;
                        *plVar21 = (longlong)plVar21;
                        *(longlong **)plVar21[1] = plVar21;
                        *(longlong *)(*plVar21 + 8) = plVar21[1];
                        plVar21[1] = (longlong)plVar21;
                        *plVar21 = (longlong)plVar21;
                    // WARNING: Subroutine does not return
                        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar21,&UNK_180984ef0
                                      ,0xadc);
                      }
                      goto FUN_1808616bc;
                    }
                  }
                  else {
                    FUN_180862080(lVar13,*plVar23,lVar7 + 0x40);
                  }
                  goto joined_r0x000180861496;
                }
              }
            }
          }
        }
      }
    }
  }
FUN_1808616bc:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





