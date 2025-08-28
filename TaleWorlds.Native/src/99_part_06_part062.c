#include "TaleWorlds.Native.Split.h"

// 99_part_06_part062.c - 3 个函数

// 函数: void FUN_1803e306f(void)
void FUN_1803e306f(void)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int in_EAX;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBX;
  longlong *plVar11;
  undefined8 unaff_RBP;
  int unaff_ESI;
  undefined8 unaff_RDI;
  longlong *plVar12;
  longlong in_R11;
  int unaff_R12D;
  undefined8 unaff_R13;
  ulonglong uVar13;
  longlong unaff_R14;
  int iVar14;
  undefined8 unaff_R15;
  undefined8 uVar15;
  undefined8 in_stack_00000030;
  int in_stack_00000038;
  int iStack00000000000000b0;
  int iStack00000000000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x20) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_RDI;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x40) = unaff_R15;
  do {
    iStack00000000000000b8 = 0;
    if (0 < in_EAX) {
      do {
        iVar3 = iStack00000000000000b8;
        lVar7 = *(longlong *)(unaff_R14 + 400);
        iStack00000000000000b0 = 0;
        if (0 < *(int *)(lVar7 + 0x78)) {
          plVar1 = (longlong *)(unaff_R14 + 0x60);
          do {
            iVar14 = iStack00000000000000b0;
            plVar6 = *(longlong **)(unaff_R14 + 0x70);
            plVar4 = plVar6;
            plVar11 = plVar1;
            if (plVar6 == (longlong *)0x0) {
LAB_1803e33c4:
              puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
              in_stack_000000c8 = 0xffffffffffffffff;
              if (*(undefined8 **)(unaff_R14 + 0x140) <= puVar8) {
                puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
                lVar7 = (longlong)puVar8 - (longlong)puVar10 >> 3;
                if (lVar7 == 0) {
                  lVar7 = 1;
LAB_1803e3424:
                  puVar9 = (undefined8 *)
                           FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(unaff_R14 + 0x148)
                                        );
                  puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
                  puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
                }
                else {
                  lVar7 = lVar7 * 2;
                  if (lVar7 != 0) goto LAB_1803e3424;
                  puVar9 = (undefined8 *)0x0;
                }
                uVar15 = in_stack_000000c8;
                if (puVar10 != puVar8) {
                    // WARNING: Subroutine does not return
                  memmove(puVar9,puVar10,(longlong)puVar8 - (longlong)puVar10);
                }
                goto LAB_1803e3474;
              }
              *(undefined8 **)(unaff_R14 + 0x138) = puVar8 + 1;
              *puVar8 = 0xffffffffffffffff;
            }
            else {
              do {
                if (((int)plVar4[4] < iStack00000000000000b0) ||
                   (((int)plVar4[4] <= iStack00000000000000b0 &&
                    ((*(int *)((longlong)plVar4 + 0x24) < unaff_R12D ||
                     ((*(int *)((longlong)plVar4 + 0x24) <= unaff_R12D && ((int)plVar4[5] < iVar3)))
                     ))))) {
                  plVar5 = (longlong *)*plVar4;
                  bVar2 = true;
                }
                else {
                  plVar5 = (longlong *)plVar4[1];
                  bVar2 = false;
                }
                plVar12 = plVar4;
                if (bVar2) {
                  plVar12 = plVar11;
                }
                plVar4 = plVar5;
                plVar11 = plVar12;
              } while (plVar5 != (longlong *)0x0);
              if (((plVar12 == plVar1) || (iStack00000000000000b0 < (int)plVar12[4])) ||
                 ((plVar4 = plVar1, iStack00000000000000b0 <= (int)plVar12[4] &&
                  ((unaff_R12D < *(int *)((longlong)plVar12 + 0x24) ||
                   ((unaff_R12D <= *(int *)((longlong)plVar12 + 0x24) && (iVar3 < (int)plVar12[5])))
                   ))))) goto LAB_1803e33c4;
              while (plVar11 = plVar4, plVar6 != (longlong *)0x0) {
                if (((int)plVar6[4] < iStack00000000000000b0) ||
                   (((int)plVar6[4] <= iStack00000000000000b0 &&
                    ((*(int *)((longlong)plVar6 + 0x24) < unaff_R12D ||
                     ((*(int *)((longlong)plVar6 + 0x24) <= unaff_R12D && ((int)plVar6[5] < iVar3)))
                     ))))) {
                  plVar5 = (longlong *)*plVar6;
                  bVar2 = true;
                }
                else {
                  plVar5 = (longlong *)plVar6[1];
                  bVar2 = false;
                }
                plVar4 = plVar6;
                plVar6 = plVar5;
                if (bVar2) {
                  plVar4 = plVar11;
                }
              }
              if (((plVar11 == plVar1) || (iStack00000000000000b0 < (int)plVar11[4])) ||
                 ((iStack00000000000000b0 <= (int)plVar11[4] &&
                  ((unaff_R12D < *(int *)((longlong)plVar11 + 0x24) ||
                   ((unaff_R12D <= *(int *)((longlong)plVar11 + 0x24) && (iVar3 < (int)plVar11[5])))
                   ))))) {
                plVar6 = (longlong *)*plVar1;
                if ((plVar11 == plVar6) || (plVar11 == plVar1)) {
                  if ((*(longlong *)(unaff_R14 + 0x80) != 0) &&
                     ((plVar11 = plVar6, (int)plVar6[4] < iStack00000000000000b0 ||
                      (((int)plVar6[4] <= iStack00000000000000b0 &&
                       ((*(int *)((longlong)plVar6 + 0x24) < unaff_R12D ||
                        ((*(int *)((longlong)plVar6 + 0x24) <= unaff_R12D &&
                         ((int)plVar6[5] < iVar3)))))))))) {
LAB_1803e326f:
                    bVar2 = false;
                    goto LAB_1803e3271;
                  }
                }
                else {
                  plVar6 = (longlong *)func_0x00018066bd70(plVar11);
                  if ((((int)plVar11[4] < iVar14) ||
                      (((int)plVar11[4] <= iVar14 &&
                       ((*(int *)((longlong)plVar11 + 0x24) < unaff_R12D ||
                        ((*(int *)((longlong)plVar11 + 0x24) <= unaff_R12D &&
                         ((int)plVar11[5] < iVar3)))))))) &&
                     ((iVar14 < (int)plVar6[4] ||
                      ((iVar14 <= (int)plVar6[4] &&
                       ((unaff_R12D < *(int *)((longlong)plVar6 + 0x24) ||
                        ((unaff_R12D <= *(int *)((longlong)plVar6 + 0x24) &&
                         (iVar3 < (int)plVar6[5])))))))))) {
                    if (*plVar11 == 0) goto LAB_1803e326f;
                    bVar2 = true;
                    plVar11 = plVar6;
LAB_1803e3271:
                    if (plVar11 != (longlong *)0x0) {
                      if ((((bVar2) || (plVar11 == plVar1)) || (iVar14 < (int)plVar11[4])) ||
                         ((iVar14 <= (int)plVar11[4] &&
                          ((unaff_R12D < *(int *)((longlong)plVar11 + 0x24) ||
                           ((unaff_R12D <= *(int *)((longlong)plVar11 + 0x24) &&
                            (iVar3 < (int)plVar11[5])))))))) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = 1;
                      }
                      lVar7 = FUN_18062b420(_DAT_180c8ed18,0x38,*(undefined1 *)(unaff_R14 + 0x88));
                      *(ulonglong *)(lVar7 + 0x20) = CONCAT44(unaff_R12D,iVar14);
                      *(int *)(lVar7 + 0x28) = iVar3;
                      *(undefined8 *)(lVar7 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
                      FUN_18066bdc0(lVar7,plVar11,plVar1,uVar15);
                    }
                  }
                }
                puVar8 = (undefined8 *)FUN_1803e8000(plVar1,&stack0x00000050);
                plVar11 = (longlong *)*puVar8;
              }
              uVar15 = *(undefined8 *)((longlong)plVar11 + 0x2c);
              puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
              uStack00000000000000c0 = (undefined4)uVar15;
              uStack00000000000000c4 = (undefined4)((ulonglong)uVar15 >> 0x20);
              if (puVar8 < *(undefined8 **)(unaff_R14 + 0x140)) {
                *(undefined8 **)(unaff_R14 + 0x138) = puVar8 + 1;
                *puVar8 = uVar15;
                goto LAB_1803e34ad;
              }
              puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
              lVar7 = (longlong)puVar8 - (longlong)puVar10 >> 3;
              if (lVar7 == 0) {
                lVar7 = 1;
LAB_1803e336f:
                puVar9 = (undefined8 *)
                         FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(unaff_R14 + 0x148));
                puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
                puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
              }
              else {
                lVar7 = lVar7 * 2;
                if (lVar7 != 0) goto LAB_1803e336f;
                puVar9 = (undefined8 *)0x0;
              }
              if (puVar10 != puVar8) {
                    // WARNING: Subroutine does not return
                memmove(puVar9,puVar10,(longlong)puVar8 - (longlong)puVar10);
              }
              uVar15 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
LAB_1803e3474:
              *puVar9 = uVar15;
              if (*(longlong *)(unaff_R14 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(undefined8 **)(unaff_R14 + 0x130) = puVar9;
              *(undefined8 **)(unaff_R14 + 0x140) = puVar9 + lVar7;
              *(undefined8 **)(unaff_R14 + 0x138) = puVar9 + 1;
              iVar14 = iStack00000000000000b0;
            }
LAB_1803e34ad:
            lVar7 = *(longlong *)(unaff_R14 + 400);
            iStack00000000000000b0 = iVar14 + 1;
          } while (iStack00000000000000b0 < *(int *)(lVar7 + 0x78));
        }
        if (*(int *)(lVar7 + 0x78) < 0x10) {
          uVar13 = (ulonglong)(0x10 - *(int *)(lVar7 + 0x78));
          do {
            puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
            if (puVar8 < *(undefined8 **)(unaff_R14 + 0x140)) {
              *(undefined8 **)(unaff_R14 + 0x138) = puVar8 + 1;
              *puVar8 = 0xffffffffffffffff;
            }
            else {
              puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
              lVar7 = (longlong)puVar8 - (longlong)puVar10 >> 3;
              if (lVar7 == 0) {
                lVar7 = 1;
LAB_1803e353c:
                puVar9 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar7 * 8);
                puVar10 = *(undefined8 **)(unaff_R14 + 0x130);
                puVar8 = *(undefined8 **)(unaff_R14 + 0x138);
              }
              else {
                lVar7 = lVar7 * 2;
                if (lVar7 != 0) goto LAB_1803e353c;
                puVar9 = (undefined8 *)0x0;
              }
              if (puVar10 != puVar8) {
                    // WARNING: Subroutine does not return
                memmove(puVar9,puVar10,(longlong)puVar8 - (longlong)puVar10);
              }
              *puVar9 = 0xffffffffffffffff;
              if (*(longlong *)(unaff_R14 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(undefined8 **)(unaff_R14 + 0x130) = puVar9;
              *(undefined8 **)(unaff_R14 + 0x140) = puVar9 + lVar7;
              *(undefined8 **)(unaff_R14 + 0x138) = puVar9 + 1;
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        iStack00000000000000b8 = iStack00000000000000b8 + 1;
        in_EAX = in_stack_00000030._4_4_;
        unaff_ESI = in_stack_00000038;
      } while (iStack00000000000000b8 < in_stack_00000030._4_4_);
    }
    unaff_R12D = unaff_R12D + 1;
    if (unaff_ESI <= unaff_R12D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803e3616(void)
void FUN_1803e3616(void)

{
  return;
}






// 函数: void FUN_1803e361b(void)
void FUN_1803e361b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




