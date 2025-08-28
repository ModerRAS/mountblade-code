#include "TaleWorlds.Native.Split.h"

// 99_part_04_part034_sub001.c - 10 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_04_part034.c - 10 个函数


// 函数: void FUN_1802a442e(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802a442e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar10;
  undefined1 *unaff_R14;
  float *unaff_R15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar1 = *(ushort *)(param_3 + 0x5c);
  iVar10 = uVar1 - 1;
  auVar11._0_4_ = (float)iVar10 * *unaff_R15;
  iVar4 = (int)auVar11._0_4_;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar11._0_4_)) {
    auVar11._4_4_ = auVar11._0_4_;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(in_EAX,auVar11);
    in_EAX = uVar2 & 1;
    auVar11._0_4_ = (float)(int)(iVar4 - in_EAX);
  }
  iVar7 = (int)auVar11._0_4_;
  iVar4 = *(ushort *)(param_3 + 0x5e) - 1;
  auVar12._0_4_ = (float)iVar4 * unaff_R15[1];
  iVar5 = (int)auVar12._0_4_;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar12._0_4_)) {
    auVar12._4_4_ = auVar12._0_4_;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(in_EAX,auVar12);
    auVar12._0_4_ = (float)(int)(iVar5 - (uVar2 & 1));
  }
  iVar5 = (int)auVar12._0_4_;
  if ((iVar7 < 0) || ((int)(uint)uVar1 <= iVar7)) {
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    iVar7 = 0;
    if (-1 < iVar10) {
      iVar7 = iVar10;
    }
  }
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)(param_3 + 0x5e) <= iVar5)) {
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
  }
  uVar8 = iVar7 >> 0x1f & 3;
  uVar2 = iVar7 + uVar8;
  uVar9 = iVar5 >> 0x1f & 3;
  uVar3 = iVar5 + uVar9;
  FUN_18041c5b0(&stack0x00000038,&stack0x00000070,
                (ulonglong)((((int)uVar2 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar3 >> 2)) * 0x10) +
                *unaff_RSI);
  lVar6 = (longlong)(int)(((uVar2 & 3) - uVar8) + ((uVar3 & 3) - uVar9) * 4) * 0x20;
  unaff_R14[2] = (char)(int)*(double *)(&stack0x00000070 + lVar6);
  unaff_R14[1] = (char)(int)*(double *)(&stack0x00000078 + lVar6);
  *unaff_R14 = (char)(int)*(double *)(unaff_RBP + -0x80 + lVar6);
  unaff_R14[3] = (char)(int)*(double *)(unaff_RBP + -0x78 + lVar6);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x170) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802a4590(undefined8 param_1,undefined8 *param_2,longlong *param_3,float *param_4,
void FUN_1802a4590(undefined8 param_1,undefined8 *param_2,longlong *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  
  uStack_b0 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar5 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
    if ((int)((float)iVar5 * *param_4) <= iVar5) {
      iVar5 = (int)((float)iVar5 * *param_4);
    }
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    *param_2 = *(undefined8 *)
                (*param_3 +
                (longlong)(int)(iVar6 * (uint)*(ushort *)((longlong)param_3 + 0x5c) + iVar4) * 8);
  }
  else if (param_5 == 1) {
    puVar7 = &uStack_d0;
    lVar10 = 4;
    do {
      func_0x000180074f10(puVar7);
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar5 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar13 = (float)iVar5 * param_4[1];
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
    uVar12 = (uint)uVar1;
    iVar6 = (int)fVar13;
    iVar4 = uVar1 - 1;
    fVar13 = (float)iVar4 * *param_4;
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    iVar11 = (int)fVar13;
    iVar9 = iVar11 + 1;
    if ((iVar11 < 0) || (iVar4 <= iVar11)) {
      iVar3 = iVar4;
      if (iVar11 <= iVar4) {
        iVar3 = iVar11;
      }
      iVar11 = 0;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      if (iVar9 <= iVar4) {
        iVar4 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
    }
    if ((iVar6 < 0) || (iVar4 = iVar6, iVar3 = iVar6 + 1, iVar8 = iVar6 + 1, iVar5 <= iVar6)) {
      iVar3 = iVar5;
      if (iVar6 <= iVar5) {
        iVar3 = iVar6;
      }
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar6 <= iVar5) {
        iVar5 = iVar6;
      }
      iVar6 = 0;
      iVar3 = iVar4;
      iVar8 = 0;
      if (-1 < iVar5) {
        iVar6 = iVar5;
        iVar8 = iVar5;
      }
    }
    lVar10 = *param_3;
    uStack_d0 = *(ulonglong *)(lVar10 + (ulonglong)(uVar12 * iVar4 + iVar11) * 8);
    uStack_c8 = *(ulonglong *)(lVar10 + (ulonglong)((uint)uVar1 * iVar6 + iVar9) * 8);
    uStack_c0 = *(ulonglong *)(lVar10 + (ulonglong)(uVar12 * iVar3 + iVar11) * 8);
    uStack_b8 = *(ulonglong *)(lVar10 + (ulonglong)(uVar12 * iVar8 + iVar9) * 8);
    modff(uStack_b8,auStack_d8);
    modff();
    func_0x0001800adf40(uStack_d0._4_2_);
    func_0x0001800adf40(uStack_d0._2_2_);
    func_0x0001800adf40(uStack_d0 & 0xffff);
    func_0x0001800adf40(uStack_d0._6_2_);
    func_0x0001800adf40(uStack_c0._4_2_);
    func_0x0001800adf40(uStack_c0._2_2_);
    func_0x0001800adf40(uStack_c0 & 0xffff);
    func_0x0001800adf40(uStack_c0._6_2_);
    func_0x0001800adf40(uStack_c8._4_2_);
    func_0x0001800adf40(uStack_c8._2_2_);
    func_0x0001800adf40(uStack_c8 & 0xffff);
    func_0x0001800adf40(uStack_c8._6_2_);
    func_0x0001800adf40(uStack_b8._2_2_);
    func_0x0001800adf40(uStack_b8 & 0xffff);
    func_0x0001800adf40(uStack_b8._6_2_);
    func_0x0001800adf40(uStack_b8._4_2_);
    uVar2 = func_0x0001800840d0();
    *(undefined2 *)param_2 = uVar2;
    uVar2 = func_0x0001800840d0();
    *(undefined2 *)((longlong)param_2 + 2) = uVar2;
    uVar2 = func_0x0001800840d0();
    *(undefined2 *)((longlong)param_2 + 4) = uVar2;
    uVar2 = func_0x0001800840d0();
    *(undefined2 *)((longlong)param_2 + 6) = uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b0 ^ (ulonglong)auStack_f8);
}







// 函数: void FUN_1802a45ce(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
void FUN_1802a45ce(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  ulonglong param_9)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  undefined8 *puVar8;
  int iVar9;
  float *unaff_RBP;
  longlong *unaff_RSI;
  int iVar10;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong in_R11;
  undefined2 *unaff_R14;
  undefined8 unaff_R15;
  float fVar14;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined1 auStackX_20 [8];
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  puVar8 = &param_5;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  uVar11 = (ulonglong)(param_2 + 3);
  *(undefined8 *)(in_R11 + 0x20) = unaff_R15;
  *(undefined8 *)(in_R11 + -0x28) = unaff_XMM6_Qa;
  *(undefined8 *)(in_R11 + -0x20) = unaff_XMM6_Qb;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  do {
    func_0x000180074f10(puVar8);
    puVar8 = puVar8 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  iVar6 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  fVar14 = (float)iVar6 * unaff_RBP[1];
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
  uVar13 = (uint)uVar1;
  iVar7 = (int)fVar14;
  iVar5 = uVar1 - 1;
  fVar14 = (float)iVar5 * *unaff_RBP;
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  iVar12 = (int)fVar14;
  iVar10 = iVar12 + 1;
  if ((iVar12 < 0) || (iVar5 <= iVar12)) {
    iVar4 = iVar5;
    if (iVar12 <= iVar5) {
      iVar4 = iVar12;
    }
    iVar12 = 0;
    if (-1 < iVar4) {
      iVar12 = iVar4;
    }
    if (iVar10 <= iVar5) {
      iVar5 = iVar10;
    }
    iVar10 = 0;
    if (-1 < iVar5) {
      iVar10 = iVar5;
    }
  }
  if ((iVar7 < 0) || (iVar5 = iVar7, iVar4 = iVar7 + 1, iVar9 = iVar7 + 1, iVar6 <= iVar7)) {
    iVar4 = iVar6;
    if (iVar7 <= iVar6) {
      iVar4 = iVar7;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar7 <= iVar6) {
      iVar6 = iVar7;
    }
    iVar7 = 0;
    iVar4 = iVar5;
    iVar9 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
      iVar9 = iVar6;
    }
  }
  lVar2 = *unaff_RSI;
  param_5 = *(ulonglong *)(lVar2 + (ulonglong)(uVar13 * iVar5 + iVar12) * 8);
  param_6 = *(ulonglong *)(lVar2 + (ulonglong)((uint)uVar1 * iVar7 + iVar10) * 8);
  param_7 = *(ulonglong *)(lVar2 + (ulonglong)(uVar13 * iVar4 + iVar12) * 8);
  param_8 = *(ulonglong *)(lVar2 + (ulonglong)(uVar13 * iVar9 + iVar10) * 8);
  modff(param_8,auStackX_20);
  modff();
  func_0x0001800adf40(param_5._4_2_);
  func_0x0001800adf40(param_5._2_2_);
  func_0x0001800adf40(param_5 & 0xffff);
  func_0x0001800adf40(param_5._6_2_);
  func_0x0001800adf40(param_7._4_2_);
  func_0x0001800adf40(param_7._2_2_);
  func_0x0001800adf40(param_7 & 0xffff);
  func_0x0001800adf40(param_7._6_2_);
  func_0x0001800adf40(param_6._4_2_);
  func_0x0001800adf40(param_6._2_2_);
  func_0x0001800adf40(param_6 & 0xffff);
  func_0x0001800adf40(param_6._6_2_);
  func_0x0001800adf40(param_8._2_2_);
  func_0x0001800adf40(param_8 & 0xffff);
  func_0x0001800adf40(param_8._6_2_);
  func_0x0001800adf40(param_8._4_2_);
  uVar3 = func_0x0001800840d0();
  *unaff_R14 = uVar3;
  uVar3 = func_0x0001800840d0();
  unaff_R14[1] = uVar3;
  uVar3 = func_0x0001800840d0();
  unaff_R14[2] = uVar3;
  uVar3 = func_0x0001800840d0();
  unaff_R14[3] = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(param_9 ^ (ulonglong)&stack0x00000000);
}







// 函数: void FUN_1802a4972(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802a4972(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  float *unaff_RBP;
  longlong *unaff_RSI;
  int iVar3;
  undefined8 *unaff_R14;
  ulonglong in_stack_00000048;
  
  iVar2 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  iVar3 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar3 * *unaff_RBP) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *unaff_RBP);
  }
  if ((int)((float)iVar2 * unaff_RBP[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * unaff_RBP[1]);
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *unaff_R14 = *(undefined8 *)
                (*unaff_RSI + (longlong)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 8
                );
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802a49f0(undefined8 param_1,undefined4 *param_2,longlong *param_3,float *param_4,
void FUN_1802a49f0(undefined8 param_1,undefined4 *param_2,longlong *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined8 extraout_XMM0_Qb_00;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar5 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
    if ((int)((float)iVar5 * *param_4) <= iVar5) {
      iVar5 = (int)((float)iVar5 * *param_4);
    }
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    *param_2 = *(undefined4 *)
                (*param_3 +
                (longlong)(int)(iVar6 * (uint)*(ushort *)((longlong)param_3 + 0x5c) + iVar4) * 4);
  }
  else if (param_5 == 1) {
    puVar7 = &uStack_60;
    lVar10 = 4;
    do {
      func_0x000180074f10(puVar7);
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar5 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar22 = (float)iVar5 * param_4[1];
    if (fVar22 <= 0.0) {
      fVar22 = fVar22 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
    uVar12 = (uint)uVar1;
    iVar6 = (int)fVar22;
    iVar4 = uVar1 - 1;
    fVar22 = (float)iVar4 * *param_4;
    if (fVar22 <= 0.0) {
      fVar22 = fVar22 - 0.9999999;
    }
    iVar11 = (int)fVar22;
    iVar9 = iVar11 + 1;
    if ((iVar11 < 0) || (iVar4 <= iVar11)) {
      iVar3 = iVar4;
      if (iVar11 <= iVar4) {
        iVar3 = iVar11;
      }
      iVar11 = 0;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      if (iVar9 <= iVar4) {
        iVar4 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
    }
    if ((iVar6 < 0) || (iVar4 = iVar6, iVar3 = iVar6 + 1, iVar8 = iVar6 + 1, iVar5 <= iVar6)) {
      iVar3 = iVar5;
      if (iVar6 <= iVar5) {
        iVar3 = iVar6;
      }
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar6 <= iVar5) {
        iVar5 = iVar6;
      }
      iVar6 = 0;
      iVar3 = iVar4;
      iVar8 = 0;
      if (-1 < iVar5) {
        iVar6 = iVar5;
        iVar8 = iVar5;
      }
    }
    lVar10 = *param_3;
    uStack_60 = *(undefined4 *)(lVar10 + (ulonglong)(uVar12 * iVar4 + iVar11) * 4);
    uStack_5c = *(undefined4 *)(lVar10 + (ulonglong)((uint)uVar1 * iVar6 + iVar9) * 4);
    uStack_58 = *(undefined4 *)(lVar10 + (ulonglong)(uVar12 * iVar3 + iVar11) * 4);
    uStack_54 = *(undefined4 *)(lVar10 + (ulonglong)(uVar12 * iVar8 + iVar9) * 4);
    fVar22 = (float)modff(uStack_54,auStack_68);
    fVar13 = (float)modff();
    fVar14 = (float)func_0x0001800adf40(uStack_60._2_2_);
    fVar15 = (float)func_0x0001800adf40((undefined2)uStack_60);
    fVar16 = (float)func_0x0001800adf40(uStack_58._2_2_);
    fVar17 = (float)func_0x0001800adf40((undefined2)uStack_58);
    fVar18 = (float)func_0x0001800adf40(uStack_5c._2_2_);
    fVar14 = (fVar18 - fVar14) * fVar13 + fVar14;
    fVar18 = (float)func_0x0001800adf40((undefined2)uStack_5c);
    fVar15 = (fVar18 - fVar15) * fVar13 + fVar15;
    uVar19 = func_0x0001800adf40(uStack_54._2_2_);
    auVar23._8_4_ = (int)extraout_XMM0_Qb;
    auVar23._0_8_ = uVar19;
    auVar23._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = ((((float)uVar19 - fVar16) * fVar13 + fVar16) - fVar14) * fVar22 + fVar14;
    auVar20._0_8_ = func_0x0001800adf40((undefined2)uStack_54,auVar24._0_8_);
    auVar20._8_8_ = extraout_XMM0_Qb_00;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = ((((float)auVar20._0_8_ - fVar17) * fVar13 + fVar17) - fVar15) * fVar22 + fVar15
    ;
    uVar2 = func_0x0001800840d0(auVar21._0_8_);
    *(undefined2 *)param_2 = uVar2;
    uVar2 = func_0x0001800840d0();
    *(undefined2 *)((longlong)param_2 + 2) = uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_88);
}







// 函数: void FUN_1802a4a2b(undefined8 param_1,int param_2)
void FUN_1802a4a2b(undefined8 param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_RBX;
  longlong lVar9;
  int iVar10;
  float *unaff_RBP;
  longlong *unaff_RSI;
  int iVar11;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong in_R11;
  undefined2 *unaff_R14;
  undefined8 unaff_R15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auStackX_20 [8];
  undefined2 uStack0000000000000028;
  undefined2 uStack000000000000002a;
  undefined2 uStack000000000000002c;
  undefined2 uStack000000000000002e;
  undefined2 uStack0000000000000030;
  undefined2 uStack0000000000000032;
  undefined2 uStack0000000000000034;
  undefined2 uStack0000000000000036;
  ulonglong in_stack_00000038;
  undefined8 extraout_XMM0_Qb_00;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  lVar9 = in_R11 + -0x60;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  uVar12 = (ulonglong)(param_2 + 3);
  *(undefined8 *)(in_R11 + 0x20) = unaff_R15;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  do {
    func_0x000180074f10(lVar9);
    lVar9 = lVar9 + 4;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  iVar7 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  fVar24 = (float)iVar7 * unaff_RBP[1];
  if (fVar24 <= 0.0) {
    fVar24 = fVar24 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
  uVar14 = (uint)uVar1;
  iVar8 = (int)fVar24;
  iVar6 = uVar1 - 1;
  fVar24 = (float)iVar6 * *unaff_RBP;
  if (fVar24 <= 0.0) {
    fVar24 = fVar24 - 0.9999999;
  }
  iVar13 = (int)fVar24;
  iVar11 = iVar13 + 1;
  if ((iVar13 < 0) || (iVar6 <= iVar13)) {
    iVar5 = iVar6;
    if (iVar13 <= iVar6) {
      iVar5 = iVar13;
    }
    iVar13 = 0;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar11 <= iVar6) {
      iVar6 = iVar11;
    }
    iVar11 = 0;
    if (-1 < iVar6) {
      iVar11 = iVar6;
    }
  }
  if ((iVar8 < 0) || (iVar6 = iVar8, iVar5 = iVar8 + 1, iVar10 = iVar8 + 1, iVar7 <= iVar8)) {
    iVar5 = iVar7;
    if (iVar8 <= iVar7) {
      iVar5 = iVar8;
    }
    iVar6 = 0;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar8 <= iVar7) {
      iVar7 = iVar8;
    }
    iVar8 = 0;
    iVar5 = iVar6;
    iVar10 = 0;
    if (-1 < iVar7) {
      iVar8 = iVar7;
      iVar10 = iVar7;
    }
  }
  lVar9 = *unaff_RSI;
  uVar2 = *(undefined4 *)(lVar9 + (ulonglong)(uVar14 * iVar6 + iVar13) * 4);
  _uStack000000000000002c = *(undefined4 *)(lVar9 + (ulonglong)((uint)uVar1 * iVar8 + iVar11) * 4);
  uVar3 = *(undefined4 *)(lVar9 + (ulonglong)(uVar14 * iVar5 + iVar13) * 4);
  _uStack0000000000000034 = *(undefined4 *)(lVar9 + (ulonglong)(uVar14 * iVar10 + iVar11) * 4);
  fVar24 = (float)modff(_uStack0000000000000034,auStackX_20);
  fVar15 = (float)modff();
  uStack000000000000002a = (undefined2)((uint)uVar2 >> 0x10);
  fVar16 = (float)func_0x0001800adf40(uStack000000000000002a);
  uStack0000000000000028 = (undefined2)uVar2;
  fVar17 = (float)func_0x0001800adf40(uStack0000000000000028);
  uStack0000000000000032 = (undefined2)((uint)uVar3 >> 0x10);
  fVar18 = (float)func_0x0001800adf40(uStack0000000000000032);
  uStack0000000000000030 = (undefined2)uVar3;
  fVar19 = (float)func_0x0001800adf40(uStack0000000000000030);
  fVar20 = (float)func_0x0001800adf40(uStack000000000000002e);
  fVar16 = (fVar20 - fVar16) * fVar15 + fVar16;
  fVar20 = (float)func_0x0001800adf40(uStack000000000000002c);
  fVar17 = (fVar20 - fVar17) * fVar15 + fVar17;
  uVar21 = func_0x0001800adf40(uStack0000000000000036);
  auVar25._8_4_ = (int)extraout_XMM0_Qb;
  auVar25._0_8_ = uVar21;
  auVar25._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = ((((float)uVar21 - fVar18) * fVar15 + fVar18) - fVar16) * fVar24 + fVar16;
  auVar22._0_8_ = func_0x0001800adf40(uStack0000000000000034,auVar26._0_8_);
  auVar22._8_8_ = extraout_XMM0_Qb_00;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = ((((float)auVar22._0_8_ - fVar19) * fVar15 + fVar19) - fVar17) * fVar24 + fVar17;
  uVar4 = func_0x0001800840d0(auVar23._0_8_);
  *unaff_R14 = uVar4;
  uVar4 = func_0x0001800840d0();
  unaff_R14[1] = uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}







// 函数: void FUN_1802a4c85(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802a4c85(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  float *unaff_RBP;
  longlong *unaff_RSI;
  int iVar3;
  undefined4 *unaff_R14;
  ulonglong in_stack_00000038;
  
  iVar2 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  iVar3 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar3 * *unaff_RBP) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *unaff_RBP);
  }
  if ((int)((float)iVar2 * unaff_RBP[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * unaff_RBP[1]);
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *unaff_R14 = *(undefined4 *)
                (*unaff_RSI + (longlong)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 4
                );
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}







// 函数: void FUN_1802a4d00(longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)
void FUN_1802a4d00(longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  
  iVar9 = *(ushort *)((longlong)param_1 + 0x5e) - 1;
  fVar14 = (float)iVar9 * param_2[1];
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)param_1 + 0x5c);
  iVar11 = (int)fVar14;
  iVar3 = uVar1 - 1;
  fVar14 = (float)iVar3 * *param_2;
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  iVar4 = (int)fVar14;
  iVar13 = iVar4 + 1;
  if ((iVar4 < 0) || (iVar3 <= iVar4)) {
    iVar7 = iVar3;
    if (iVar4 <= iVar3) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    if (iVar13 <= iVar3) {
      iVar3 = iVar13;
    }
    iVar13 = 0;
    if (-1 < iVar3) {
      iVar13 = iVar3;
    }
  }
  if ((iVar11 < 0) || (iVar3 = iVar11, iVar7 = iVar11 + 1, iVar5 = iVar11 + 1, iVar9 <= iVar11)) {
    iVar7 = iVar9;
    if (iVar11 <= iVar9) {
      iVar7 = iVar11;
    }
    iVar3 = 0;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    if (iVar11 <= iVar9) {
      iVar9 = iVar11;
    }
    iVar11 = 0;
    iVar7 = iVar3;
    iVar5 = 0;
    if (-1 < iVar9) {
      iVar11 = iVar9;
      iVar5 = iVar9;
    }
  }
  uVar8 = (ulonglong)(iVar7 * (uint)uVar1 + iVar4);
  uVar10 = (ulonglong)(iVar3 * (uint)uVar1 + iVar4);
  lVar2 = *param_1;
  uVar12 = (ulonglong)(iVar11 * (uint)uVar1 + iVar13);
  uVar6 = (ulonglong)(iVar5 * (uint)uVar1 + iVar13);
  *param_4 = *(undefined8 *)(lVar2 + uVar10 * 0xc);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar2 + 8 + uVar10 * 0xc);
  *(undefined8 *)((longlong)param_4 + 0xc) = *(undefined8 *)(lVar2 + uVar12 * 0xc);
  *(undefined4 *)((longlong)param_4 + 0x14) = *(undefined4 *)(lVar2 + 8 + uVar12 * 0xc);
  param_4[3] = *(undefined8 *)(lVar2 + uVar8 * 0xc);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(lVar2 + 8 + uVar8 * 0xc);
  *(undefined8 *)((longlong)param_4 + 0x24) = *(undefined8 *)(lVar2 + uVar6 * 0xc);
  *(undefined4 *)((longlong)param_4 + 0x2c) = *(undefined4 *)(lVar2 + 8 + uVar6 * 0xc);
  return;
}







// 函数: void FUN_1802a4e60(longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)
void FUN_1802a4e60(longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  iVar9 = *(ushort *)((longlong)param_1 + 0x5e) - 1;
  fVar12 = (float)iVar9 * param_2[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar2 = *(ushort *)((longlong)param_1 + 0x5c);
  iVar10 = (int)fVar12;
  iVar5 = uVar2 - 1;
  fVar12 = (float)iVar5 * *param_2;
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  iVar6 = (int)fVar12;
  iVar7 = iVar6 + 1;
  if ((iVar6 < 0) || (iVar5 <= iVar6)) {
    iVar8 = iVar5;
    if (iVar6 <= iVar5) {
      iVar8 = iVar6;
    }
    iVar6 = 0;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    if (iVar7 <= iVar5) {
      iVar5 = iVar7;
    }
    iVar7 = 0;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
  }
  if ((iVar10 < 0) || (iVar5 = iVar10, iVar8 = iVar10 + 1, iVar11 = iVar10 + 1, iVar9 <= iVar10)) {
    iVar8 = iVar9;
    if (iVar10 <= iVar9) {
      iVar8 = iVar10;
    }
    iVar5 = 0;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
    iVar10 = 0;
    iVar8 = iVar5;
    iVar11 = 0;
    if (-1 < iVar9) {
      iVar10 = iVar9;
      iVar11 = iVar9;
    }
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)(iVar6 + iVar5 * (uint)uVar2) * 0x10);
  uVar4 = puVar1[1];
  *param_4 = *puVar1;
  param_4[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)(iVar10 * (uint)uVar2 + iVar7) * 0x10);
  uVar4 = puVar1[1];
  param_4[2] = *puVar1;
  param_4[3] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)(iVar8 * (uint)uVar2 + iVar6) * 0x10);
  uVar4 = puVar1[1];
  param_4[4] = *puVar1;
  param_4[5] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)(iVar11 * (uint)uVar2 + iVar7) * 0x10);
  uVar4 = puVar1[1];
  param_4[6] = *puVar1;
  param_4[7] = uVar4;
  return;
}







