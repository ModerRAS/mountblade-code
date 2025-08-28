#include "TaleWorlds.Native.Split.h"

// 99_part_09_part030.c - 6 个函数

// 函数: void FUN_1805cbf90(longlong *param_1,char param_2)
void FUN_1805cbf90(longlong *param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStackX_8;
  undefined1 auStack_e8 [208];
  
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    FUN_1805d4440(param_1 + 1);
  }
  if ((*(char *)((longlong)param_1 + 0xd6) == '\0') ||
     (((param_2 == '\0' && ((*(byte *)(param_1 + 0x269) & 2) == 0)) &&
      ((param_1[0x41e] == 0 ||
       ((1 < (int)param_1[0x295] - 5U &&
        (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 ||
         ((*(byte *)(param_1 + 0x413) & 1) == 0)))))))))) {
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
    goto LAB_1805cc805;
  }
  *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x200;
  if (*(int *)(*param_1 + 0x564) == -1) {
    if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = lVar9;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    }
    else {
      lVar9 = param_1[0x15];
    }
    if ((((*(uint *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar9 + 0xd0))
           >> 8 & 1) == 0) &&
        (-0.7 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                       param_1[0x2e9]) * 1e-05)) && ((int)param_1[0x2f2] == 3)) {
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffff0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
    }
  }
  uVar10 = *(uint *)(param_1 + 2);
  if ((uVar10 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
    uVar10 = *(uint *)(param_1 + 2);
  }
  fVar16 = *(float *)(param_1 + 0x22);
  if ((uVar10 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
    uVar10 = *(uint *)(param_1 + 2);
  }
  fVar17 = *(float *)((longlong)param_1 + 0x10c);
  if ((uVar10 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
  }
  fVar18 = *(float *)((longlong)param_1 + 0x114);
  uVar11 = 0xffffffff;
  bVar4 = fVar18 < fVar17;
  if (bVar4) {
    lVar9 = *param_1;
    lVar2 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar9 + 0x268) * 8);
    lVar3 = *(longlong *)(lVar9 + 0x260);
    lVar9 = FUN_1805a0610(lVar9 + 0x28,1);
    if (lVar9 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(undefined4 *)(lVar9 + 0x1c);
    }
    iVar6 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(*param_1 + 0x590) + 0xac),
                          uVar12);
    iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
    if (iVar6 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar6 * 8);
    }
    lVar13 = *param_1;
    fVar16 = *(float *)(lVar9 + 0x188);
    fVar17 = 1.0;
    lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x8f8) + 0x9e8);
    if (lVar9 != 0) {
      fVar17 = (float)*(int *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x68 +
                              *(longlong *)(lVar9 + 0xd0)) * 0.01;
    }
    fVar18 = *(float *)(lVar13 + 0x3ac);
    uVar10 = *(uint *)(param_1 + 2);
    if ((uVar10 & 0x20) == 0) {
      uVar10 = uVar10 | 0x20;
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = lVar9;
      *(uint *)(param_1 + 2) = uVar10;
      lVar13 = *param_1;
    }
    else {
      lVar9 = param_1[0x15];
    }
    fVar1 = *(float *)(lVar13 + 0x3c8);
    fVar14 = *(float *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x84 + *(longlong *)(lVar9 + 0xd0)
                       );
    if ((uVar10 & 1) == 0) {
      FUN_1805d3210(param_1 + 1);
    }
    fVar14 = (0.02 / fVar14) * *(float *)(param_1 + 0xd);
    if (0.0 <= fVar14) {
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
    }
    else {
      fVar14 = 0.0;
    }
    fVar16 = (fVar1 + fVar16 / (fVar17 * fVar18) + fVar14 * 0.6) - (float)(lVar2 - lVar3) * 1e-05;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
  }
  else {
    if ((*(uint *)(param_1 + 2) & 0x1000) == 0) {
      FUN_1805d4df0(param_1 + 1);
      fVar18 = *(float *)((longlong)param_1 + 0x114);
    }
    fVar16 = (fVar18 - fVar17) / ((fVar16 - fVar17) + (fVar18 - fVar17));
    if (0.0 <= fVar16) {
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      fVar16 = fVar16 * 5.0;
    }
    else {
      fVar16 = 0.0;
    }
  }
  fVar18 = 1.0;
  fVar17 = 0.0;
  if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - param_1[0x2e9]) *
      1e-05 <= fVar16) {
    return;
  }
  if ((bVar4) && (fVar16 != 0.0)) {
    return;
  }
  lVar9 = param_1[0x2f2];
  if ((param_1[0x41e] == 0) ||
     ((1 < (int)param_1[0x295] - 5U &&
      (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 || ((*(byte *)(param_1 + 0x413) & 1) == 0))
      )))) {
    uVar7 = FUN_1805b7970(param_1,auStack_e8);
    if ((char)param_1[0x438] == '\0') {
      uVar12 = *(undefined4 *)((longlong)param_1 + 0x14b4);
    }
    else {
      uVar12 = *(undefined4 *)((longlong)param_1 + 0x21c4);
    }
    iVar6 = FUN_1805bf5a0(param_1,uVar12,uVar7);
  }
  else {
    iVar6 = 3;
  }
  *(int *)(param_1 + 0x2f2) = iVar6;
  if ((int)lVar9 == 3) {
    if ((iVar6 == 3) && (*(int *)(*param_1 + 0x5f8) != 2)) {
      uVar7 = *(undefined8 *)((longlong)param_1 + 0x135c);
      uStackX_8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      uStackX_8._0_4_ = (float)uVar7;
      fVar16 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
      auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      uStackX_8 = uVar7;
                    // WARNING: Subroutine does not return
      FUN_1808fd400(iVar6 == 3,3.0 - fVar16 * auVar15._0_4_ * auVar15._0_4_);
    }
FUN_1805cc66f:
    if (iVar6 == 3) {
      lVar9 = FUN_1805a0610(*param_1 + 0x28,1);
      if (lVar9 != 0) {
        uVar11 = *(undefined4 *)(lVar9 + 0x34);
      }
      lVar9 = FUN_18053a5a0(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(*param_1 + 0x590) + 0xac),
                            uVar11);
      fVar16 = *(float *)(lVar9 + 0x1d8);
      fVar18 = *(float *)(lVar9 + 0x188);
      if ((*(uint *)((longlong)param_1 + 0x209c) & 0x400) == 0) {
        fVar17 = -0.2;
      }
      uVar10 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      uVar10 = uVar10 << 5 ^ uVar10;
      *(uint *)(param_1 + 0x272) = uVar10;
      param_1[0x2e9] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
           (longlong)(((fVar17 - (float)(uVar10 - 1) * 4.656613e-11) - fVar16 * fVar18) * 100000.0);
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f;
      *(undefined4 *)((longlong)param_1 + 0x178c) = 3;
      return;
    }
  }
  else {
    if (iVar6 != 3) goto FUN_1805cc66f;
    param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 50000;
  }
  if ((*(uint *)((longlong)param_1 + 0x1484) >> 4 & 1) != 0) {
    fVar18 = 0.0;
  }
  fVar16 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                  param_1[0x2e9]) * 1e-05;
  if (fVar16 <= fVar18) {
    if (-1.0 <= fVar16) {
      return;
    }
    param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 100000;
    return;
  }
  if ((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0) {
    FUN_1805be810(param_1,&uStackX_8);
    if ((int)uStackX_8 == -1) {
      puVar8 = (ulonglong *)FUN_1805bed80(param_1,&uStackX_8);
      uStackX_8 = *puVar8;
    }
    uVar5 = uStackX_8;
    if ((char)param_1[0x438] == '\0') {
      iVar6 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (((int)uStackX_8 != iVar6) && (-1 < (int)uStackX_8)) {
      FUN_1805d1c80(param_1,&uStackX_8);
      if ((int)param_1[0x295] == 2) {
        FUN_1805d9040(param_1 + 0x2f,uVar5 & 0xffffffff);
      }
      param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 75000;
      return;
    }
  }
  if ((int)param_1[0x2f2] == 3) {
    return;
  }
  if (((int)param_1[0x2f2] == 4) &&
     ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - param_1[0x2e9]) *
      1e-05 <= 5.0)) {
    return;
  }
LAB_1805cc805:
  *(uint *)((longlong)param_1 + 0x158c) =
       *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
  return;
}






// 函数: void FUN_1805cc543(undefined8 param_1,undefined8 param_2)
void FUN_1805cc543(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  float fVar1;
  undefined4 uVar2;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float in_stack_00000110;
  
  uVar2 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar1 = (float)param_2 + in_stack_00000110 * in_stack_00000110;
  auVar3._4_4_ = uVar2;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar4._4_4_ = uVar2;
  auVar4._0_4_ = fVar1;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._12_4_ = in_XMM1_Dd;
  auVar4 = rsqrtss(auVar3,auVar4);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(in_RAX + 0x34),3.0 - fVar1 * auVar4._0_4_ * auVar4._0_4_);
}






// 函数: void FUN_1805cc66f(char param_1)
void FUN_1805cc66f(char param_1)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  ulonglong in_stack_00000110;
  
  if (param_1 == '\0') {
    if ((*(uint *)((longlong)unaff_RDI + 0x1484) >> 4 & 1) != 0) {
      unaff_XMM13_Da = 0.0;
    }
    lVar5 = *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8);
    fVar7 = (float)(lVar5 - unaff_RDI[0x2e9]) * unaff_XMM15_Da;
    if (fVar7 <= unaff_XMM13_Da) {
      if (fVar7 < -1.0) {
        unaff_RDI[0x2e9] = lVar5 + 100000;
      }
    }
    else {
      if ((*(uint *)((longlong)unaff_RDI + 0x209c) >> 0xb & 1) == 0) {
        uVar8 = FUN_1805be810(fVar7,&stack0x00000110);
        if ((int)in_stack_00000110 == unaff_ESI) {
          puVar4 = (ulonglong *)
                   FUN_1805bed80(uVar8,&stack0x00000110,unaff_XMM14_Da * unaff_XMM14_Da);
          in_stack_00000110 = *puVar4;
          uVar8 = extraout_XMM0_Da;
        }
        uVar2 = in_stack_00000110;
        if ((char)unaff_RDI[0x438] == '\0') {
          iVar3 = *(int *)((longlong)unaff_RDI + 0x14b4);
        }
        else {
          iVar3 = *(int *)((longlong)unaff_RDI + 0x21c4);
        }
        if (((int)in_stack_00000110 != iVar3) && (-1 < (int)in_stack_00000110)) {
          FUN_1805d1c80(uVar8,&stack0x00000110,0);
          if ((int)unaff_RDI[0x295] == 2) {
            FUN_1805d9040(unaff_RDI + 0x2f,uVar2 & 0xffffffff);
          }
          unaff_RDI[0x2e9] = *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8) + 75000;
          return;
        }
      }
      if (((int)unaff_RDI[0x2f2] != 3) &&
         (((int)unaff_RDI[0x2f2] != 4 ||
          (unaff_XMM10_Da <
           (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8) - unaff_RDI[0x2e9]
                  ) * unaff_XMM15_Da)))) {
        *(uint *)((longlong)unaff_RDI + 0x158c) =
             *(uint *)((longlong)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
        *(undefined4 *)((longlong)unaff_RDI + 0x178c) = 0;
      }
    }
  }
  else {
    lVar5 = FUN_1805a0610(*unaff_RDI + 0x28,1);
    if (lVar5 != 0) {
      unaff_ESI = *(int *)(lVar5 + 0x34);
    }
    lVar5 = FUN_18053a5a0(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(*unaff_RDI + 0x590) + 0xac),
                          unaff_ESI);
    fVar7 = *(float *)(lVar5 + 0x1d8);
    fVar1 = *(float *)(lVar5 + 0x188);
    if ((*(uint *)((longlong)unaff_RDI + 0x209c) & 0x400) == 0) {
      unaff_XMM12_Da = -0.2;
    }
    uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(unaff_RDI + 0x272) = uVar6;
    unaff_RDI[0x2e9] =
         *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
         (longlong)
         (((unaff_XMM12_Da - (float)(uVar6 - 1) * 4.656613e-11) - fVar7 * fVar1) * 100000.0);
    *(uint *)((longlong)unaff_RDI + 0x158c) = *(uint *)((longlong)unaff_RDI + 0x158c) & 0xfffffc3f;
    *(undefined4 *)((longlong)unaff_RDI + 0x178c) = 3;
  }
  return;
}






// 函数: void FUN_1805cc890(longlong *param_1)
void FUN_1805cc890(longlong *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fStackX_8;
  float fStackX_c;
  
  if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - param_1[0x2e9]) *
      1e-05 < 1.0) {
    *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x200;
  }
  if (*(int *)(*param_1 + 0x564) == -1) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    if (param_1[0x1d] != 0) {
      if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(param_1 + 1);
      }
      if ((char)param_1[0x20] != '\0') {
        if ((*(uint *)(param_1 + 2) >> 0x13 & 1) == 0) {
          if ((*(uint *)(param_1 + 2) >> 9 & 1) == 0) {
            func_0x0001805d4cd0(param_1 + 1);
          }
          lVar5 = param_1[0x1d];
          if (lVar5 == 0) {
            fVar10 = 0.0;
          }
          else {
            if ((*(uint *)(param_1 + 2) >> 0x12 & 1) == 0) {
              if ((*(uint *)(param_1 + 2) >> 9 & 1) == 0) {
                func_0x0001805d4cd0(param_1 + 1);
                lVar5 = param_1[0x1d];
              }
              if (lVar5 == 0) {
                param_1[0x10] = 0;
                param_1[0x11] = 0;
              }
              else {
                if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
                  func_0x0001805d4cd0(param_1 + 1);
                  lVar5 = param_1[0x1d];
                }
                lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x204);
                param_1[0x10] = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x1fc);
                param_1[0x11] = lVar4;
              }
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x40000;
            }
            fVar10 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                     *(float *)((longlong)param_1 + 0x84) * *(float *)((longlong)param_1 + 0x84) +
                     *(float *)(param_1 + 0x11) * *(float *)(param_1 + 0x11);
          }
          *(float *)((longlong)param_1 + 0x7c) = fVar10;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x80000;
        }
        if (2.25 < *(float *)((longlong)param_1 + 0x7c) ||
            *(float *)((longlong)param_1 + 0x7c) == 2.25) goto FUN_1805ccc2c;
      }
      if ((*(longlong *)(*param_1 + 0x658) != 0) && ((int)param_1[0x295] != 6)) {
        puVar6 = (undefined8 *)FUN_1805b6c30(param_1 + 1);
        fStackX_c = (float)((ulonglong)*puVar6 >> 0x20);
        fStackX_8 = (float)*puVar6;
        fVar10 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
        fVar10 = (float)(fVar10 <= 1.1754944e-38) * 1.1754944e-38 + fVar10;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        pfVar7 = (float *)FUN_1805b6920(param_1 + 1);
        fVar10 = fStackX_c * fVar10 * pfVar7[1] + fStackX_8 * fVar10 * *pfVar7;
        if ((fVar10 < -0.5) && (*(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498) != -1)) {
          plVar8 = *(longlong **)(*(longlong *)(*param_1 + 0x658) + 0x210);
          pcVar3 = *(code **)(*plVar8 + 0xb8);
          pfVar7 = (float *)FUN_1805b6c30(param_1 + 1);
          fVar11 = pfVar7[1];
          fVar1 = *pfVar7;
          fVar2 = pfVar7[2];
          pfVar7 = (float *)FUN_1805b6980(param_1 + 1);
          fVar9 = (float)(*pcVar3)(plVar8,1);
          if ((*pfVar7 / (SQRT(fVar1 * fVar1 + fVar11 * fVar11 + fVar2 * fVar2) + 0.1)) *
              (-1.0 / fVar10) - 0.5 < fVar9) {
            *(undefined4 *)(param_1 + 0x277) = 0;
            *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
            *(undefined1 *)((longlong)param_1 + 0x13bd) = 1;
          }
        }
      }
    }
  }
FUN_1805ccc2c:
  if (*(int *)(*param_1 + 0x564) == -1) {
    *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffff0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
  }
  if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = (longlong)plVar8;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
  }
  else {
    plVar8 = (longlong *)param_1[0x15];
  }
  if ((*plVar8 != 0) && (0 < *(short *)(*plVar8 + 8))) {
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
  }
  if ((*(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498) == -1) &&
     (1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                   param_1[0x2e9]) * 1e-05)) {
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
  }
  if (((((int)param_1[0x2f1] == 0) ||
       ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) - param_1[0x2ed])
        * 1e-05 < -100.0)) || (9 < *(uint *)((longlong)param_1 + 0x178c))) ||
     ((0x241U >> (*(uint *)((longlong)param_1 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0(param_1);
  }
  return;
}






// 函数: void FUN_1805cc8be(longlong *param_1)
void FUN_1805cc8be(longlong *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  longlong in_RAX;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *unaff_R14;
  longlong unaff_R15;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float unaff_XMM9_Da;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  
  if ((float)(*(longlong *)(unaff_R15 + in_RAX * 8) - param_1[0x2e9]) * unaff_XMM9_Da < 1.0) {
    *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x200;
  }
  if (*(int *)(*param_1 + 0x564) == -1) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    if (unaff_R14[0x1d] != 0) {
      if ((*(uint *)(unaff_R14 + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_R14 + 1);
      }
      if ((char)unaff_R14[0x20] != '\0') {
        if ((*(uint *)(unaff_R14 + 2) >> 0x13 & 1) == 0) {
          if ((*(uint *)(unaff_R14 + 2) >> 9 & 1) == 0) {
            func_0x0001805d4cd0(unaff_R14 + 1);
          }
          lVar5 = unaff_R14[0x1d];
          if (lVar5 == 0) {
            fVar10 = 0.0;
          }
          else {
            if ((*(uint *)(unaff_R14 + 2) >> 0x12 & 1) == 0) {
              if ((*(uint *)(unaff_R14 + 2) >> 9 & 1) == 0) {
                func_0x0001805d4cd0(unaff_R14 + 1);
                lVar5 = unaff_R14[0x1d];
              }
              if (lVar5 == 0) {
                unaff_R14[0x10] = 0;
                unaff_R14[0x11] = 0;
              }
              else {
                if ((*(uint *)(unaff_R14 + 2) & 0x200) == 0) {
                  func_0x0001805d4cd0(unaff_R14 + 1);
                  lVar5 = unaff_R14[0x1d];
                }
                lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x204);
                unaff_R14[0x10] = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x1fc);
                unaff_R14[0x11] = lVar4;
              }
              *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x40000;
            }
            fVar10 = *(float *)(unaff_R14 + 0x10) * *(float *)(unaff_R14 + 0x10) +
                     *(float *)((longlong)unaff_R14 + 0x84) * *(float *)((longlong)unaff_R14 + 0x84)
                     + *(float *)(unaff_R14 + 0x11) * *(float *)(unaff_R14 + 0x11);
          }
          *(float *)((longlong)unaff_R14 + 0x7c) = fVar10;
          *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x80000;
        }
        if (2.25 < *(float *)((longlong)unaff_R14 + 0x7c) ||
            *(float *)((longlong)unaff_R14 + 0x7c) == 2.25) goto FUN_1805ccc2c;
      }
      if ((*(longlong *)(*unaff_R14 + 0x658) != 0) && ((int)unaff_R14[0x295] != 6)) {
        puVar6 = (undefined8 *)FUN_1805b6c30(unaff_R14 + 1);
        fStack00000000000000a4 = (float)((ulonglong)*puVar6 >> 0x20);
        fStack00000000000000a0 = (float)*puVar6;
        fVar10 = fStack00000000000000a4 * fStack00000000000000a4 +
                 fStack00000000000000a0 * fStack00000000000000a0;
        fVar10 = (float)(fVar10 <= 1.1754944e-38) * 1.1754944e-38 + fVar10;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        pfVar7 = (float *)FUN_1805b6920(unaff_R14 + 1);
        fVar10 = fStack00000000000000a4 * fVar10 * pfVar7[1] +
                 fStack00000000000000a0 * fVar10 * *pfVar7;
        if ((fVar10 < -0.5) && (*(int *)(*(longlong *)(*unaff_R14 + 0x590) + 0x2498) != -1)) {
          plVar8 = *(longlong **)(*(longlong *)(*unaff_R14 + 0x658) + 0x210);
          pcVar3 = *(code **)(*plVar8 + 0xb8);
          pfVar7 = (float *)FUN_1805b6c30(unaff_R14 + 1);
          fVar11 = pfVar7[1];
          fVar1 = *pfVar7;
          fVar2 = pfVar7[2];
          pfVar7 = (float *)FUN_1805b6980(unaff_R14 + 1);
          fVar9 = (float)(*pcVar3)(plVar8,1);
          if ((*pfVar7 / (SQRT(fVar1 * fVar1 + fVar11 * fVar11 + fVar2 * fVar2) + 0.1)) *
              (-1.0 / fVar10) - 0.5 < fVar9) {
            *(undefined4 *)(unaff_R14 + 0x277) = 0;
            *(undefined4 *)((longlong)unaff_R14 + 0x178c) = 0;
            *(undefined1 *)((longlong)unaff_R14 + 0x13bd) = 1;
          }
        }
      }
    }
  }
FUN_1805ccc2c:
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((longlong)unaff_R14 + 0x158c) = *(uint *)((longlong)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (longlong)plVar8;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar8 = (longlong *)unaff_R14[0x15];
  }
  if ((*plVar8 != 0) && (0 < *(short *)(*plVar8 + 8))) {
    *(undefined4 *)((longlong)unaff_R14 + 0x178c) = 0;
  }
  if ((*(int *)(*(longlong *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (1.0 < (float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_R14[0x2ea] * 8) -
                   unaff_R14[0x2e9]) * unaff_XMM9_Da)) {
    *(undefined4 *)((longlong)unaff_R14 + 0x178c) = 0;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((longlong)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((longlong)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805cc913(longlong param_1)
void FUN_1805cc913(longlong param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong unaff_RBP;
  longlong *unaff_R14;
  longlong unaff_R15;
  bool in_ZF;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  
  if (in_ZF) {
    func_0x0001805d4cd0(param_1 + 8);
  }
  uVar9 = (undefined4)unaff_RBP;
  if (unaff_R14[0x1d] != unaff_RBP) {
    if ((*(uint *)(unaff_R14 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_R14 + 1);
    }
    if ((char)unaff_R14[0x20] != (char)unaff_RBP) {
      if ((*(uint *)(unaff_R14 + 2) >> 0x13 & 1) == 0) {
        if ((*(uint *)(unaff_R14 + 2) >> 9 & 1) == 0) {
          func_0x0001805d4cd0(unaff_R14 + 1);
        }
        lVar5 = unaff_R14[0x1d];
        if (lVar5 == 0) {
          fVar11 = 0.0;
        }
        else {
          if ((*(uint *)(unaff_R14 + 2) >> 0x12 & 1) == 0) {
            if ((*(uint *)(unaff_R14 + 2) >> 9 & 1) == 0) {
              func_0x0001805d4cd0(unaff_R14 + 1);
              lVar5 = unaff_R14[0x1d];
            }
            if (lVar5 == 0) {
              unaff_R14[0x10] = 0;
              unaff_R14[0x11] = 0;
            }
            else {
              if ((*(uint *)(unaff_R14 + 2) & 0x200) == 0) {
                func_0x0001805d4cd0(unaff_R14 + 1);
                lVar5 = unaff_R14[0x1d];
              }
              lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x204);
              unaff_R14[0x10] = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x1fc);
              unaff_R14[0x11] = lVar4;
            }
            *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x40000;
          }
          fVar11 = *(float *)(unaff_R14 + 0x10) * *(float *)(unaff_R14 + 0x10) +
                   *(float *)((longlong)unaff_R14 + 0x84) * *(float *)((longlong)unaff_R14 + 0x84) +
                   *(float *)(unaff_R14 + 0x11) * *(float *)(unaff_R14 + 0x11);
        }
        *(float *)((longlong)unaff_R14 + 0x7c) = fVar11;
        *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x80000;
      }
      if (2.25 < *(float *)((longlong)unaff_R14 + 0x7c) ||
          *(float *)((longlong)unaff_R14 + 0x7c) == 2.25) goto FUN_1805ccc24;
    }
    if ((*(longlong *)(*unaff_R14 + 0x658) != unaff_RBP) && ((int)unaff_R14[0x295] != 6)) {
      puVar6 = (undefined8 *)FUN_1805b6c30(unaff_R14 + 1);
      fStack00000000000000a4 = (float)((ulonglong)*puVar6 >> 0x20);
      fStack00000000000000a0 = (float)*puVar6;
      fVar11 = fStack00000000000000a4 * fStack00000000000000a4 +
               fStack00000000000000a0 * fStack00000000000000a0;
      fVar11 = (float)(int)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar11 <= 1.1754944e-38) *
               1.1754944e-38 + fVar11;
      auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar13._0_4_;
      fVar11 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
      pfVar7 = (float *)FUN_1805b6920(unaff_R14 + 1);
      fVar11 = fStack00000000000000a4 * fVar11 * pfVar7[1] +
               fStack00000000000000a0 * fVar11 * *pfVar7;
      if ((fVar11 < -0.5) && (*(int *)(*(longlong *)(*unaff_R14 + 0x590) + 0x2498) != -1)) {
        plVar8 = *(longlong **)(*(longlong *)(*unaff_R14 + 0x658) + 0x210);
        pcVar3 = *(code **)(*plVar8 + 0xb8);
        pfVar7 = (float *)FUN_1805b6c30(unaff_R14 + 1);
        fVar12 = pfVar7[1];
        fVar1 = *pfVar7;
        fVar2 = pfVar7[2];
        pfVar7 = (float *)FUN_1805b6980(unaff_R14 + 1);
        fVar10 = (float)(*pcVar3)(plVar8,1);
        if ((*pfVar7 / (SQRT(fVar1 * fVar1 + fVar12 * fVar12 + fVar2 * fVar2) + 0.1)) *
            (-1.0 / fVar11) - 0.5 < fVar10) {
          *(undefined4 *)(unaff_R14 + 0x277) = uVar9;
          *(undefined4 *)((longlong)unaff_R14 + 0x178c) = uVar9;
          *(undefined1 *)((longlong)unaff_R14 + 0x13bd) = 1;
        }
      }
    }
  }
FUN_1805ccc24:
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((longlong)unaff_R14 + 0x158c) = *(uint *)((longlong)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (longlong)plVar8;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar8 = (longlong *)unaff_R14[0x15];
  }
  if ((*plVar8 != 0) && ((short)unaff_RBP < *(short *)(*plVar8 + 8))) {
    *(undefined4 *)((longlong)unaff_R14 + 0x178c) = uVar9;
  }
  if ((*(int *)(*(longlong *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(undefined4 *)((longlong)unaff_R14 + 0x178c) = uVar9;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((longlong)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((longlong)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






