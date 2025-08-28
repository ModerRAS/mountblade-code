#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part294.c - 9 个函数

// 函数: void FUN_18082e110(undefined8 param_1,undefined8 *param_2)
void FUN_18082e110(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 6) != 0) {
    if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0();
    }
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}





// 函数: void FUN_18082e170(undefined8 param_1,undefined8 *param_2)
void FUN_18082e170(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 6) == 0) {
    return;
  }
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,param_2);
}





// 函数: void FUN_18082e1e0(uint *param_1)
void FUN_18082e1e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = powf(param_1,1.0 / (float)(int)uVar1);
  auVar9._0_4_ = (float)extraout_XMM0_Qa;
  iVar5 = (int)auVar9._0_4_;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar9._0_4_)) {
    uVar11 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
    auVar10._8_4_ = uVar11;
    auVar10._0_8_ = extraout_XMM0_Qa;
    auVar10._12_4_ = uVar11;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._4_4_ = auVar9._0_4_;
    uVar4 = movmskps(uVar3,auVar9);
    auVar9._0_4_ = (float)(int)(iVar5 - (uVar4 & 1));
  }
  iVar5 = (int)auVar9._0_4_;
  while( true ) {
    iVar7 = 1;
    iVar6 = 1;
    if (0 < (int)uVar1) {
      uVar8 = (ulonglong)uVar1;
      do {
        iVar6 = iVar6 * iVar5;
        iVar7 = iVar7 * (iVar5 + 1);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((iVar6 <= (int)uVar2) && ((int)uVar2 < iVar7)) break;
    iVar7 = -1;
    if (iVar6 <= (int)uVar2) {
      iVar7 = 1;
    }
    iVar5 = iVar7 + iVar5;
  }
  return;
}



longlong FUN_18082e290(undefined8 param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  
  iVar10 = 0;
  if (1 < param_2[4] - 1) {
    return 0;
  }
  dVar17 = (double)ldexp(param_2[5],((int)param_2[5] >> 0x15 & 0x3ffU) - 0x314);
  dVar18 = (double)ldexp(param_2[6],((int)param_2[6] >> 0x15 & 0x3ffU) - 0x314);
  lVar6 = FUN_1807c4170(param_1,*param_2 * param_3);
  if (lVar6 != 0) {
    if (param_2[4] == 1) {
      uVar7 = *param_2;
      uVar9 = (ulonglong)uVar7;
      uVar1 = param_2[1];
      uVar3 = powf();
      auVar19._0_4_ = (float)extraout_XMM0_Qa;
      iVar12 = (int)auVar19._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar19._0_4_)) {
        uVar21 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
        auVar20._8_4_ = uVar21;
        auVar20._0_8_ = extraout_XMM0_Qa;
        auVar20._12_4_ = uVar21;
        auVar19._8_8_ = auVar20._8_8_;
        auVar19._4_4_ = auVar19._0_4_;
        uVar4 = movmskps(uVar3,auVar19);
        auVar19._0_4_ = (float)(int)(iVar12 - (uVar4 & 1));
      }
      iVar12 = (int)auVar19._0_4_;
      while( true ) {
        iVar2 = 1;
        iVar11 = 1;
        if (0 < (int)uVar7) {
          uVar8 = uVar9;
          do {
            iVar11 = iVar11 * iVar12;
            iVar2 = iVar2 * (iVar12 + 1);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if ((iVar11 <= (int)uVar1) && ((int)uVar1 < iVar2)) break;
        iVar2 = -1;
        if (iVar11 <= (int)uVar1) {
          iVar2 = 1;
        }
        iVar12 = iVar2 + iVar12;
      }
      iVar11 = 0;
      if (0 < (int)uVar1) {
        lVar15 = 0;
        piVar14 = param_4;
        do {
          if ((param_4 == (int *)0x0) || (*(int *)(lVar15 + *(longlong *)(param_2 + 2)) != 0)) {
            iVar2 = 0;
            auVar19._0_4_ = 0.0;
            iVar13 = 1;
            if (0 < (int)uVar9) {
              do {
                fVar16 = ABS((float)*(int *)(*(longlong *)(param_2 + 10) +
                                            (longlong)
                                            (int)((longlong)
                                                  ((ulonglong)
                                                   (uint)((int)((longlong)iVar11 / (longlong)iVar13)
                                                         >> 0x1f) << 0x20 |
                                                  (longlong)iVar11 / (longlong)iVar13 & 0xffffffffU)
                                                 % (longlong)iVar12) * 4)) * (float)dVar18 +
                         (float)dVar17 + auVar19._0_4_;
                if (param_2[8] != 0) {
                  auVar19._0_4_ = fVar16;
                }
                iVar5 = iVar10;
                if (param_4 != (int *)0x0) {
                  iVar5 = *piVar14;
                }
                iVar5 = iVar2 + (int)uVar9 * iVar5;
                iVar13 = iVar13 * iVar12;
                iVar2 = iVar2 + 1;
                *(float *)(lVar6 + (longlong)iVar5 * 4) = fVar16;
                uVar9 = (ulonglong)*param_2;
              } while (iVar2 < (int)*param_2);
            }
            iVar10 = iVar10 + 1;
            piVar14 = piVar14 + 1;
          }
          iVar11 = iVar11 + 1;
          lVar15 = lVar15 + 4;
        } while (iVar11 < (int)param_2[1]);
      }
    }
    else if ((param_2[4] == 2) && (iVar12 = 0, 0 < (int)param_2[1])) {
      lVar15 = 0;
      piVar14 = param_4;
      do {
        if ((param_4 == (int *)0x0) || (*(int *)(lVar15 + *(longlong *)(param_2 + 2)) != 0)) {
          uVar7 = *param_2;
          iVar11 = 0;
          auVar19._0_4_ = 0.0;
          if (0 < (int)uVar7) {
            do {
              fVar16 = ABS((float)*(int *)(*(longlong *)(param_2 + 10) +
                                          (longlong)(int)(uVar7 * iVar12 + iVar11) * 4)) *
                       (float)dVar18 + (float)dVar17 + auVar19._0_4_;
              if (param_2[8] != 0) {
                auVar19._0_4_ = fVar16;
              }
              iVar2 = iVar10;
              if (param_4 != (int *)0x0) {
                iVar2 = *piVar14;
              }
              iVar2 = iVar2 * uVar7 + iVar11;
              iVar11 = iVar11 + 1;
              *(float *)(lVar6 + (longlong)iVar2 * 4) = fVar16;
              uVar7 = *param_2;
            } while (iVar11 < (int)uVar7);
          }
          iVar10 = iVar10 + 1;
          piVar14 = piVar14 + 1;
        }
        iVar12 = iVar12 + 1;
        lVar15 = lVar15 + 4;
      } while (iVar12 < (int)param_2[1]);
    }
  }
  return lVar6;
}





// 函数: void FUN_18082e42e(void)
void FUN_18082e42e(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  int iVar9;
  int *piVar10;
  int *unaff_R14;
  longlong lVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  
  uVar1 = unaff_RDI[1];
  uVar2 = powf();
  auVar13._0_4_ = (float)extraout_XMM0_Qa;
  iVar6 = (int)auVar13._0_4_;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
    uVar15 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
    auVar14._8_4_ = uVar15;
    auVar14._0_8_ = extraout_XMM0_Qa;
    auVar14._12_4_ = uVar15;
    auVar13._8_8_ = auVar14._8_8_;
    auVar13._4_4_ = auVar13._0_4_;
    uVar3 = movmskps(uVar2,auVar13);
    auVar13._0_4_ = (float)(int)(iVar6 - (uVar3 & 1));
  }
  iVar6 = (int)auVar13._0_4_;
  while( true ) {
    iVar7 = 1;
    iVar4 = 1;
    if (0 < (int)unaff_RBX) {
      uVar8 = unaff_RBX;
      do {
        iVar4 = iVar4 * iVar6;
        iVar7 = iVar7 * (iVar6 + 1);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((iVar4 <= (int)uVar1) && ((int)uVar1 < iVar7)) break;
    iVar7 = -1;
    if (iVar4 <= (int)uVar1) {
      iVar7 = 1;
    }
    iVar6 = iVar7 + iVar6;
  }
  iVar4 = 0;
  if (0 < (int)uVar1) {
    lVar11 = 0;
    piVar10 = unaff_R14;
    do {
      if ((unaff_R14 == (int *)0x0) || (*(int *)(lVar11 + *(longlong *)(unaff_RDI + 2)) != 0)) {
        iVar7 = 0;
        auVar13._0_4_ = 0.0;
        iVar9 = 1;
        if (0 < (int)unaff_RBX) {
          do {
            fVar12 = ABS((float)*(int *)(*(longlong *)(unaff_RDI + 10) +
                                        (longlong)
                                        (int)((longlong)
                                              ((ulonglong)
                                               (uint)((int)((longlong)iVar4 / (longlong)iVar9) >>
                                                     0x1f) << 0x20 |
                                              (longlong)iVar4 / (longlong)iVar9 & 0xffffffffU) %
                                             (longlong)iVar6) * 4)) * unaff_XMM6_Da + unaff_XMM7_Da
                     + auVar13._0_4_;
            if (unaff_RDI[8] != 0) {
              auVar13._0_4_ = fVar12;
            }
            iVar5 = unaff_EBP;
            if (unaff_R14 != (int *)0x0) {
              iVar5 = *piVar10;
            }
            iVar5 = iVar7 + (int)unaff_RBX * iVar5;
            iVar9 = iVar9 * iVar6;
            iVar7 = iVar7 + 1;
            *(float *)(unaff_RSI + (longlong)iVar5 * 4) = fVar12;
            unaff_RBX = (ulonglong)*unaff_RDI;
          } while (iVar7 < (int)*unaff_RDI);
        }
        unaff_EBP = unaff_EBP + 1;
        piVar10 = piVar10 + 1;
      }
      iVar4 = iVar4 + 1;
      lVar11 = lVar11 + 4;
    } while (iVar4 < (int)unaff_RDI[1]);
  }
  return;
}





// 函数: void FUN_18082e592(void)
void FUN_18082e592(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082e5c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)
void FUN_18082e5c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [144];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (param_4 != 0) {
    param_3 = param_4;
  }
  lVar1 = FUN_1807c4200(param_1,param_3 << 2);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_d8,0,0x84);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_18082e60c(undefined8 param_1,undefined8 param_2)
void FUN_18082e60c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStackX_20 [8];
  
                    // WARNING: Subroutine does not return
  memset(auStackX_20,param_2,0x84);
}





// 函数: void FUN_18082e78c(void)
void FUN_18082e78c(void)

{
  ulonglong in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18082e7ab(void)
void FUN_18082e7ab(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}



undefined4 FUN_18082e7c0(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = FUN_18082f650();
    if (-1 < iVar1) {
      return *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 4);
    }
  }
  return 0xffffffff;
}



undefined8 FUN_18082e800(int *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  
  uVar11 = (ulonglong)(int)param_4;
  if (0 < param_1[2]) {
    if (*param_1 < 9) {
      uVar7 = 0;
      uVar12 = uVar7;
      if (0 < (int)param_4) {
        do {
          iVar20 = (int)uVar12;
          iVar13 = param_1[0x11];
          iVar4 = FUN_18082d710(param_3,param_1[0x10]);
          iVar14 = 0;
          if (iVar4 < 0) {
            iVar4 = param_1[2];
            uVar10 = 0;
LAB_18082ea71:
            uVar5 = FUN_18082d710(param_3,iVar13);
            while ((int)uVar5 < 0) {
              if (iVar13 < 2) {
                if ((int)uVar5 < 0) {
                  return 0xffffffff;
                }
                break;
              }
              iVar13 = iVar13 + -1;
              uVar5 = FUN_18082d710(param_3,iVar13);
            }
            uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
            iVar15 = iVar4 - uVar10;
            uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
            uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
            uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
            uVar5 = (uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2;
            if (1 < iVar15) {
              do {
                iVar15 = iVar15 >> 1;
                iVar1 = iVar15 + uVar10;
                iVar6 = iVar15;
                if (uVar5 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4)) {
                  iVar6 = iVar14;
                }
                uVar10 = uVar10 + iVar6;
                iVar6 = iVar14;
                if (uVar5 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4)) {
                  iVar6 = iVar15;
                }
                iVar4 = iVar4 - iVar6;
                iVar15 = iVar4 - uVar10;
              } while (1 < iVar15);
            }
            iVar4 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar10);
            if (iVar13 < iVar4) goto LAB_18082eccb;
            uVar11 = (ulonglong)param_4;
          }
          else {
            uVar10 = *(uint *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar4 * 4);
            if ((int)uVar10 < 0) {
              iVar4 = param_1[2] - (uVar10 & 0x7fff);
              uVar10 = (int)uVar10 >> 0xf & 0x7fff;
              goto LAB_18082ea71;
            }
            uVar10 = uVar10 - 1;
            iVar4 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar10);
          }
          func_0x00018082d690(param_3,iVar4);
          if (uVar10 == 0xffffffff) {
            return 0xffffffff;
          }
          lVar3 = *(longlong *)(param_1 + 6);
          lVar19 = (longlong)(int)(*param_1 * uVar10);
          uVar18 = uVar7;
          uVar17 = uVar7;
          switch(*param_1) {
          case 8:
            iVar14 = 1;
            lVar8 = (longlong)iVar20;
            uVar18 = 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + lVar19 * 4) + *(float *)(param_2 + lVar8 * 4);
          case 7:
            lVar8 = (longlong)iVar20;
            iVar14 = iVar14 + 1;
            uVar17 = uVar18 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + (uVar18 + lVar19) * 4) + *(float *)(param_2 + lVar8 * 4);
          case 6:
            lVar8 = (longlong)iVar20;
            iVar14 = iVar14 + 1;
            uVar18 = uVar17 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + (uVar17 + lVar19) * 4) + *(float *)(param_2 + lVar8 * 4);
          case 5:
            lVar8 = (longlong)iVar20;
            iVar14 = iVar14 + 1;
            uVar17 = uVar18 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + (uVar18 + lVar19) * 4) + *(float *)(param_2 + lVar8 * 4);
          case 4:
            lVar8 = (longlong)iVar20;
            iVar14 = iVar14 + 1;
            uVar18 = uVar17 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + (uVar17 + lVar19) * 4) + *(float *)(param_2 + lVar8 * 4);
          case 3:
            lVar8 = (longlong)iVar20;
            iVar14 = iVar14 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar8 * 4) =
                 *(float *)(lVar3 + (uVar18 + lVar19) * 4) + *(float *)(param_2 + lVar8 * 4);
          case 2:
            lVar9 = (longlong)iVar20;
            lVar8 = (longlong)iVar14;
            iVar14 = iVar14 + 1;
            iVar20 = iVar20 + 1;
            *(float *)(param_2 + lVar9 * 4) =
                 *(float *)(lVar3 + (lVar8 + lVar19) * 4) + *(float *)(param_2 + lVar9 * 4);
          case 1:
            uVar12 = (ulonglong)(iVar20 + 1);
            *(float *)(param_2 + (longlong)iVar20 * 4) =
                 *(float *)(lVar3 + (iVar14 + lVar19) * 4) +
                 *(float *)(param_2 + (longlong)iVar20 * 4);
          }
        } while ((int)uVar12 < (int)uVar11);
      }
    }
    else if (0 < (int)param_4) {
      uVar12 = 0;
      do {
        iVar13 = param_1[0x11];
        iVar4 = FUN_18082d710(param_3,param_1[0x10]);
        if (iVar4 < 0) {
          iVar4 = param_1[2];
          uVar10 = 0;
LAB_18082e8a4:
          uVar5 = FUN_18082d710(param_3,iVar13);
          while ((int)uVar5 < 0) {
            if (iVar13 < 2) {
              if ((int)uVar5 < 0) {
                return 0xffffffff;
              }
              break;
            }
            iVar13 = iVar13 + -1;
            uVar5 = FUN_18082d710(param_3,iVar13);
          }
          uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
          iVar14 = iVar4 - uVar10;
          uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
          uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
          uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
          uVar5 = (uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2;
          if (1 < iVar14) {
            do {
              iVar14 = iVar14 >> 1;
              iVar20 = iVar14 + uVar10;
              iVar15 = iVar14;
              if (uVar5 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar20 * 4)) {
                iVar15 = 0;
              }
              uVar10 = uVar10 + iVar15;
              iVar15 = 0;
              if (uVar5 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar20 * 4)) {
                iVar15 = iVar14;
              }
              iVar4 = iVar4 - iVar15;
              iVar14 = iVar4 - uVar10;
            } while (1 < iVar14);
          }
          iVar4 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar10);
          if (iVar13 < iVar4) {
LAB_18082eccb:
            func_0x00018082d690(param_3,iVar13);
            return 0xffffffff;
          }
        }
        else {
          uVar10 = *(uint *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar4 * 4);
          if ((int)uVar10 < 0) {
            iVar4 = param_1[2] - (uVar10 & 0x7fff);
            uVar10 = (int)uVar10 >> 0xf & 0x7fff;
            goto LAB_18082e8a4;
          }
          uVar10 = uVar10 - 1;
          iVar4 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar10);
        }
        func_0x00018082d690(param_3,iVar4);
        if (uVar10 == 0xffffffff) {
          return 0xffffffff;
        }
        pfVar16 = (float *)(*(longlong *)(param_1 + 6) + (longlong)(int)(*param_1 * uVar10) * 4);
        uVar7 = 0;
        if (0 < *param_1) {
          do {
            uVar10 = (int)uVar7 + 1;
            fVar2 = *pfVar16;
            pfVar16 = pfVar16 + 1;
            *(float *)(param_2 + uVar12 * 4) = *(float *)(param_2 + uVar12 * 4) + fVar2;
            uVar12 = uVar12 + 1;
            uVar7 = (ulonglong)uVar10;
          } while ((int)uVar10 < *param_1);
        }
      } while ((longlong)uVar12 < (longlong)uVar11);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



