#include "TaleWorlds.Native.Split.h"

// 99_part_06_part002.c - 5 个函数

// 函数: void FUN_1803a52d0(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,
void FUN_1803a52d0(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStackX_8;
  int iStackX_18;
  int iStackX_1c;
  undefined1 auStack_28 [16];
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    uStackX_8 = 0;
    lVar1 = FUN_1803a5130(param_1,param_2,&iStackX_18,&uStackX_8);
    fVar4 = (float)(**(code **)(**(longlong **)(lVar1 + 0x60) + 8))
                             (*(longlong **)(lVar1 + 0x60),(float)iStackX_1c + uStackX_8._4_4_,
                              (float)iStackX_18 + (float)uStackX_8);
  }
  else {
    fVar4 = 1.0 / *(float *)(param_1 + 0x58);
    fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))
                             (*(longlong **)(param_1 + 0x50),
                              fVar4 * param_2[1] * (float)*(int *)(param_1 + 0x60),
                              fVar4 * *param_2 * (float)*(int *)(param_1 + 0x60));
    fVar4 = fVar4 + *(float *)(param_1 + 0x5c);
  }
  *param_3 = fVar4;
  puVar2 = (undefined8 *)FUN_1803a5440(param_1,auStack_28,param_2,0);
  uVar3 = puVar2[1];
  *param_4 = *puVar2;
  param_4[1] = uVar3;
  uVar3 = FUN_1803a53b0(param_1,param_2);
  *param_5 = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1803a53b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iStackX_8;
  int iStackX_c;
  undefined1 auStackX_18 [16];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    return *(undefined8 *)(_DAT_180c8aa00 + 0x28);
  }
  lVar2 = FUN_1803a5130(param_1,param_2,&iStackX_8,auStackX_18);
  if ((*(longlong *)(lVar2 + 0x20) != 0) &&
     ((*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) & 0xfffffffffffffff8U) != 0)) {
    iVar3 = *(int *)(lVar2 + 0xc);
    iStackX_c = iVar3 * iStackX_8 + iStackX_c;
    iVar1 = iVar3 * iVar3 + -1;
    if (iStackX_c < iVar3 * iVar3) {
      iVar1 = iStackX_c;
    }
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    return *(undefined8 *)
            (*(longlong *)(lVar2 + 0x38) +
            (ulonglong)*(byte *)((longlong)iVar3 + *(longlong *)(lVar2 + 0x20)) * 8);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1803a5440(longlong param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_74;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    uStack_88 = 0;
    lVar1 = FUN_1803a5130(param_1,param_3,&iStack_80,&uStack_88);
    if (param_4 != (undefined8 *)0x0) {
      if ((*(longlong *)(lVar1 + 0x20) == 0) ||
         ((*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) & 0xfffffffffffffff8U) == 0)) {
        uVar6 = 0;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0xc);
        iStack_7c = iVar5 * iStack_80 + iStack_7c;
        iVar2 = iVar5 * iVar5 + -1;
        if (iStack_7c < iVar5 * iVar5) {
          iVar2 = iStack_7c;
        }
        iVar5 = 0;
        if (-1 < iVar2) {
          iVar5 = iVar2;
        }
        uVar6 = *(undefined8 *)
                 (*(longlong *)(lVar1 + 0x38) +
                 (ulonglong)*(byte *)((longlong)iVar5 + *(longlong *)(lVar1 + 0x20)) * 8);
      }
      *param_4 = uVar6;
    }
    FUN_1803a4fa0(lVar1,param_2,&iStack_80,&uStack_88);
    return param_2;
  }
  fVar8 = 1.0 / *(float *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x60);
  fVar9 = (float)iVar5;
  fVar12 = *(float *)(param_1 + 0x58) / fVar9;
  iVar2 = (int)(fVar8 * param_3[1] * fVar9);
  if (iVar2 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar5 + -2;
    if (iVar2 < iVar5 + -1) {
      iVar4 = iVar2;
    }
  }
  iVar3 = (int)(fVar8 * *param_3 * fVar9);
  iVar2 = 0;
  if ((-1 < iVar3) && (iVar2 = iVar5 + -2, iVar3 < iVar5 + -1)) {
    iVar2 = iVar3;
  }
  fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                           (*(longlong **)(param_1 + 0x50),iVar4,iVar2);
  fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                           (*(longlong **)(param_1 + 0x50),iVar4 + 1,iVar2 + 1);
  fVar7 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                           (*(longlong **)(param_1 + 0x50),iVar4 + 1,iVar2);
  fVar11 = (fVar9 - fVar7) * -fVar12;
  fVar7 = (fVar8 - fVar7) * fVar12;
  fVar12 = -(-fVar12 * fVar12);
  fVar8 = fVar11 * fVar11 + fVar7 * fVar7 + fVar12 * fVar12;
  auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar9 = auVar10._0_4_;
  fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(_DAT_180c8aa00 + 0x28);
  }
  *param_2 = CONCAT44(fVar7 * fVar8,fVar11 * fVar8);
  param_2[1] = CONCAT44(uStack_74,fVar12 * fVar8);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a5474(longlong param_1,float param_2,float *param_3,undefined8 param_4,
void FUN_1803a5474(longlong param_1,float param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong in_RAX;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  int unaff_EDI;
  undefined8 *unaff_R14;
  float in_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar8;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar9;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  
  *(undefined8 *)(in_RAX + -0x28) = unaff_RBX;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  iVar1 = *(int *)(param_1 + 0x60);
  fVar6 = (float)iVar1;
  fVar9 = in_XMM0_Da / fVar6;
  iVar2 = (int)((param_2 / in_XMM0_Da) * param_3[1] * fVar6);
  iVar3 = unaff_EDI;
  if ((-1 < iVar2) && (iVar3 = iVar1 + -2, iVar2 < iVar1 + -1)) {
    iVar3 = iVar2;
  }
  iVar2 = (int)((param_2 / in_XMM0_Da) * *param_3 * fVar6);
  if ((-1 < iVar2) && (unaff_EDI = iVar1 + -2, iVar2 < iVar1 + -1)) {
    unaff_EDI = iVar2;
  }
  fVar6 = (float)(**(code **)(**(longlong **)(unaff_RBP + 0x50) + 0x10))
                           (*(longlong **)(unaff_RBP + 0x50),iVar3,unaff_EDI);
  fVar4 = (float)(**(code **)(**(longlong **)(unaff_RBP + 0x50) + 0x10))
                           (*(longlong **)(unaff_RBP + 0x50),iVar3 + 1,unaff_EDI + 1);
  fVar5 = (float)(**(code **)(**(longlong **)(unaff_RBP + 0x50) + 0x10))
                           (*(longlong **)(unaff_RBP + 0x50),iVar3 + 1,unaff_EDI);
  fVar4 = (fVar4 - fVar5) * -fVar9;
  fVar8 = (fVar6 - fVar5) * fVar9;
  fVar5 = -(-fVar9 * fVar9);
  fVar6 = fVar4 * fVar4 + fVar8 * fVar8 + fVar5 * fVar5;
  auVar7 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar9 = auVar7._0_4_;
  fVar6 = fVar9 * 0.5 * (3.0 - fVar6 * fVar9 * fVar9);
  if (unaff_R14 != (undefined8 *)0x0) {
    *unaff_R14 = *(undefined8 *)(_DAT_180c8aa00 + 0x28);
  }
  *unaff_RSI = CONCAT44(fVar8 * fVar6,fVar4 * fVar6);
  unaff_RSI[1] = CONCAT44(param_6._4_4_,fVar5 * fVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a55dd(void)
void FUN_1803a55dd(void)

{
  undefined8 *unaff_RSI;
  undefined8 *unaff_R14;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *unaff_R14 = *(undefined8 *)(_DAT_180c8aa00 + 0x28);
  *unaff_RSI = in_stack_00000028;
  unaff_RSI[1] = in_stack_00000030;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1803a56a0(longlong param_1,float *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uStackX_8;
  int iStackX_20;
  int iStackX_24;
  undefined8 extraout_XMM0_Qb;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(_DAT_180c8aa00 + 0x28);
    }
    fVar8 = 1.0 / *(float *)(param_1 + 0x58);
    auVar6._0_8_ = (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
                             (*(longlong **)(param_1 + 0x50),
                              fVar8 * param_2[1] * (float)*(int *)(param_1 + 0x60),
                              fVar8 * *param_2 * (float)*(int *)(param_1 + 0x60));
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = (float)auVar6._0_8_ + *(float *)(param_1 + 0x5c);
    return auVar7._0_8_;
  }
  uStackX_8 = 0;
  lVar3 = FUN_1803a5130(param_1,param_2,&iStackX_20,&uStackX_8);
  if (param_3 != (undefined8 *)0x0) {
    if ((*(longlong *)(lVar3 + 0x20) == 0) ||
       ((*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) & 0xfffffffffffffff8U) == 0)) {
      uVar5 = 0;
    }
    else {
      iVar1 = *(int *)(lVar3 + 0xc);
      iVar4 = iVar1 * iStackX_20 + iStackX_24;
      iVar2 = iVar1 * iVar1 + -1;
      if (iVar4 < iVar1 * iVar1) {
        iVar2 = iVar4;
      }
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      uVar5 = *(undefined8 *)
               (*(longlong *)(lVar3 + 0x38) +
               (ulonglong)*(byte *)((longlong)iVar4 + *(longlong *)(lVar3 + 0x20)) * 8);
    }
    *param_3 = uVar5;
  }
                    // WARNING: Could not recover jumptable at 0x0001803a57b1. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar5 = (**(code **)(**(longlong **)(lVar3 + 0x60) + 8))
                    (*(longlong **)(lVar3 + 0x60),(float)iStackX_24 + uStackX_8._4_4_,
                     (float)iStackX_20 + (float)uStackX_8);
  return uVar5;
}






// 函数: void FUN_1803a57c0(float *param_1,float *param_2,float *param_3,float param_4,int *param_5,
void FUN_1803a57c0(float *param_1,float *param_2,float *param_3,float param_4,int *param_5,
                  longlong param_6,longlong param_7)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  float fStack_d4;
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [80];
  
  piVar2 = param_5;
  *param_5 = 0;
  fVar16 = 1.0 / param_1[1];
  fVar10 = param_1[7];
  fVar18 = fVar16 * *param_2;
  fVar19 = fVar16 * *param_3;
  fVar17 = fVar16 * param_3[1];
  fVar16 = fVar16 * param_2[1];
  if (fVar18 <= 0.0) {
    fVar18 = fVar18 - 0.9999999;
  }
  fVar18 = (float)(int)fVar18;
  if ((int)fVar18 < 0) {
    fVar18 = 0.0;
  }
  else if ((int)fVar10 + 1 <= (int)fVar18) {
    fVar18 = fVar10;
  }
  fVar13 = param_1[8];
  if (fVar16 <= 0.0) {
    fVar16 = fVar16 - 0.9999999;
  }
  fVar16 = (float)(int)fVar16;
  if ((int)fVar16 < 0) {
    fVar16 = 0.0;
  }
  else if ((int)fVar13 + 1 <= (int)fVar16) {
    fVar16 = fVar13;
  }
  if (fVar19 <= 0.0) {
    fVar19 = fVar19 - 0.9999999;
  }
  fVar19 = (float)(int)fVar19;
  if ((int)fVar19 < 0) {
    fVar19 = 0.0;
  }
  else if ((int)fVar10 + 1 <= (int)fVar19) {
    fVar19 = fVar10;
  }
  if (fVar17 <= 0.0) {
    fVar17 = fVar17 - 0.9999999;
  }
  fVar10 = (float)(int)fVar17;
  if ((int)fVar10 < 0) {
    fVar10 = 0.0;
  }
  else if ((int)fVar13 + 1 <= (int)fVar10) {
    fVar10 = fVar13;
  }
  fVar17 = param_1[3];
  bVar6 = SUB41(param_1[2],0);
  param_5._0_4_ = (float)((int)fVar18 >> (bVar6 & 0x1f));
  fVar13 = (float)((int)fVar16 >> (bVar6 & 0x1f));
  if (param_5._0_4_ == fVar17) {
    param_5._0_4_ = (float)((int)fVar17 + -1);
  }
  fVar1 = param_1[4];
  if (fVar13 == fVar1) {
    fVar13 = (float)((int)fVar1 + -1);
  }
  fVar11 = (float)((int)fVar10 >> (bVar6 & 0x1f));
  fVar3 = (float)((int)fVar19 >> (bVar6 & 0x1f));
  fVar7 = (float)((int)fVar17 + -1);
  if (fVar3 != fVar17) {
    fVar7 = fVar3;
  }
  if ((int)param_5._0_4_ <= (int)fVar7) {
    fStack_d4 = (float)((int)fVar1 + -1);
    if (fVar11 != fVar1) {
      fStack_d4 = fVar11;
    }
    lVar9 = (longlong)(int)fVar13;
    lStack_d0 = (longlong)(int)param_5._0_4_ * 8;
    lStack_a0 = lVar9;
    do {
      if ((int)fVar13 <= (int)fStack_d4) {
        lStack_a8 = lVar9 * 0x68;
        fVar17 = fVar13;
        do {
          lVar9 = *(longlong *)(lStack_d0 + *(longlong *)(param_1 + 0x10)) + lStack_a8;
          bVar6 = SUB41(param_1[2],0);
          iVar4 = -((int)fVar17 << (bVar6 & 0x1f));
          iStack_d8 = -((int)param_5._0_4_ << (bVar6 & 0x1f));
          iVar15 = (int)fVar18 + iStack_d8;
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          iVar14 = (int)fVar16 + iVar4;
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          iVar4 = (int)fVar10 + iVar4;
          iStack_d8 = (int)fVar19 + iStack_d8;
          iVar8 = 1 << (bVar6 & 0x1f);
          if (iVar8 <= iStack_d8) {
            iStack_d8 = iVar8 + -1;
          }
          if (iVar8 <= iVar4) {
            iVar4 = iVar8 + -1;
          }
          bVar6 = bVar6 - (char)*(undefined4 *)(lVar9 + 8);
          iStack_d8 = iStack_d8 >> (bVar6 & 0x1f);
          iVar12 = iStack_d8 + 1;
          iVar4 = iVar4 >> (bVar6 & 0x1f);
          iVar15 = iVar15 >> (bVar6 & 0x1f);
          fVar3 = (float)(int)param_5._0_4_ * *param_1;
          iVar14 = iVar14 >> (bVar6 & 0x1f);
          iVar8 = iVar4 + 1;
          fVar11 = (float)(int)fVar17 * *param_1;
          fVar1 = (float)((int)fVar7 + 1);
          if (iVar12 < *(int *)(lVar9 + 0xc)) {
            iStack_d8 = iVar12;
            fVar1 = fVar7;
          }
          fVar7 = fVar1;
          fVar1 = (float)((int)fStack_d4 + 1);
          if (iVar8 < *(int *)(lVar9 + 0xc)) {
            iVar4 = iVar8;
            fVar1 = fStack_d4;
          }
          fStack_d4 = fVar1;
          iVar8 = iVar14;
          iVar12 = iStack_d8;
          if (iVar15 < iStack_d8) {
            do {
              for (; iVar8 < iVar4; iVar8 = iVar8 + 1) {
                if (*piVar2 + 6 < 0xff) {
                  uStack_c8 = 0;
                  uStack_c4 = 0x3f000000;
                  iStack_e0 = iVar15;
                  iStack_dc = iVar8;
                  lVar5 = FUN_1803a4fa0(lVar9,auStack_98,&iStack_e0,&uStack_c8);
                  if (*(float *)(lVar5 + 8) <= param_4) {
                    iVar12 = *piVar2;
                    uStack_c0 = 0;
                    uStack_bc = 0x3f000000;
                    FUN_1803a4cc0(lVar9,&iStack_e0,&uStack_c0,(longlong)iVar12 * 0x10 + param_6,
                                  (longlong)(iVar12 + 1) * 0x10 + param_6,
                                  (longlong)(iVar12 + 2) * 0x10 + param_6,
                                  param_7 + (longlong)iVar12 * 8,
                                  param_7 + (longlong)(iVar12 + 1) * 8,
                                  param_7 + (longlong)(iVar12 + 2) * 8);
                    *(float *)(param_6 + (longlong)*piVar2 * 0x10) =
                         fVar3 + *(float *)(param_6 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + 4 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 4 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + ((longlong)*piVar2 + 1) * 0x10) =
                         fVar3 + *(float *)(param_6 + ((longlong)*piVar2 + 1) * 0x10);
                    *(float *)(param_6 + 0x14 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 0x14 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + ((longlong)*piVar2 + 2) * 0x10) =
                         fVar3 + *(float *)(param_6 + ((longlong)*piVar2 + 2) * 0x10);
                    *(float *)(param_6 + 0x24 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 0x24 + (longlong)*piVar2 * 0x10);
                    *piVar2 = *piVar2 + 3;
                  }
                  uStack_b8 = 0x3f800000;
                  uStack_b4 = 0x3f000000;
                  lVar5 = FUN_1803a4fa0(lVar9,auStack_88,&iStack_e0,&uStack_b8);
                  if (*(float *)(lVar5 + 8) <= param_4) {
                    iVar12 = *piVar2;
                    uStack_b0 = 0x3f800000;
                    uStack_ac = 0x3f000000;
                    FUN_1803a4cc0(lVar9,&iStack_e0,&uStack_b0,(longlong)iVar12 * 0x10 + param_6,
                                  (longlong)(iVar12 + 1) * 0x10 + param_6,
                                  (longlong)(iVar12 + 2) * 0x10 + param_6,
                                  param_7 + (longlong)iVar12 * 8,
                                  param_7 + (longlong)(iVar12 + 1) * 8,
                                  param_7 + (longlong)(iVar12 + 2) * 8);
                    *(float *)(param_6 + (longlong)*piVar2 * 0x10) =
                         fVar3 + *(float *)(param_6 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + 4 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 4 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + ((longlong)*piVar2 + 1) * 0x10) =
                         fVar3 + *(float *)(param_6 + ((longlong)*piVar2 + 1) * 0x10);
                    *(float *)(param_6 + 0x14 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 0x14 + (longlong)*piVar2 * 0x10);
                    *(float *)(param_6 + ((longlong)*piVar2 + 2) * 0x10) =
                         fVar3 + *(float *)(param_6 + ((longlong)*piVar2 + 2) * 0x10);
                    *(float *)(param_6 + 0x24 + (longlong)*piVar2 * 0x10) =
                         fVar11 + *(float *)(param_6 + 0x24 + (longlong)*piVar2 * 0x10);
                    *piVar2 = *piVar2 + 3;
                  }
                }
                iVar12 = iStack_d8;
              }
              iVar15 = iVar15 + 1;
              iVar8 = iVar14;
            } while (iVar15 < iVar12);
          }
          fVar17 = (float)((int)fVar17 + 1);
          lStack_a8 = lStack_a8 + 0x68;
          lVar9 = lStack_a0;
        } while ((int)fVar17 <= (int)fStack_d4);
      }
      param_5._0_4_ = (float)((int)param_5._0_4_ + 1);
      lStack_d0 = lStack_d0 + 8;
    } while ((int)param_5._0_4_ <= (int)fVar7);
  }
  return;
}






// 函数: void FUN_1803a5934(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_1803a5934(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RBX;
  int *unaff_RDI;
  int iVar7;
  int in_R10D;
  int in_R11D;
  int unaff_R12D;
  int iVar8;
  float *unaff_R13;
  int unaff_R15D;
  int iVar9;
  bool in_ZF;
  float fVar10;
  float fVar11;
  float unaff_XMM8_Da;
  float fVar12;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int in_stack_00000058;
  int iStack000000000000005c;
  int in_stack_00000060;
  int iStack0000000000000068;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  longlong lStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  longlong lStack00000000000000a0;
  longlong lStack00000000000000a8;
  float *in_stack_00000150;
  int in_stack_00000158;
  int in_stack_00000160;
  int in_stack_00000170;
  
  iStack0000000000000074 = in_R10D;
  if (!in_ZF) {
    iStack0000000000000074 = param_3;
  }
  lVar6 = (longlong)in_R11D;
  lStack0000000000000078 = (longlong)unaff_R15D * 8;
  lStack00000000000000a8 = lVar6;
  do {
    if (in_R11D <= iStack0000000000000074) {
      lStack00000000000000a0 = lVar6 * 0x68;
      fVar12 = (float)unaff_R15D;
      iStack000000000000005c = in_R11D;
      do {
        lVar6 = *(longlong *)(lStack0000000000000078 + *(longlong *)(unaff_R13 + 0x10)) +
                lStack00000000000000a0;
        bVar4 = SUB41(unaff_R13[2],0);
        iVar2 = -(iStack000000000000005c << (bVar4 & 0x1f));
        iStack0000000000000070 = -(unaff_R15D << (bVar4 & 0x1f));
        iVar9 = iStack0000000000000050 + iStack0000000000000070;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        iVar8 = unaff_R12D + iVar2;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar2 = iStack0000000000000054 + iVar2;
        iStack0000000000000070 = in_stack_00000058 + iStack0000000000000070;
        iVar5 = 1 << (bVar4 & 0x1f);
        if (iVar5 <= iStack0000000000000070) {
          iStack0000000000000070 = iVar5 + -1;
        }
        if (iVar5 <= iVar2) {
          iVar2 = iVar5 + -1;
        }
        bVar4 = bVar4 - (char)*(undefined4 *)(lVar6 + 8);
        iStack0000000000000070 = iStack0000000000000070 >> (bVar4 & 0x1f);
        iVar7 = iStack0000000000000070 + 1;
        iVar2 = iVar2 >> (bVar4 & 0x1f);
        iVar9 = iVar9 >> (bVar4 & 0x1f);
        fVar10 = fVar12 * *in_stack_00000150;
        iVar8 = iVar8 >> (bVar4 & 0x1f);
        iVar5 = iVar2 + 1;
        fVar11 = (float)iStack000000000000005c * *in_stack_00000150;
        iVar1 = in_stack_00000158 + 1;
        if (iVar7 < *(int *)(lVar6 + 0xc)) {
          iStack0000000000000070 = iVar7;
          iVar1 = in_stack_00000158;
        }
        in_stack_00000158 = iVar1;
        iVar1 = iStack0000000000000074 + 1;
        if (iVar5 < *(int *)(lVar6 + 0xc)) {
          iVar2 = iVar5;
          iVar1 = iStack0000000000000074;
        }
        iStack0000000000000074 = iVar1;
        iVar5 = iVar8;
        iVar1 = iStack0000000000000070;
        if (iVar9 < iStack0000000000000070) {
          do {
            for (; iVar5 < iVar2; iVar5 = iVar5 + 1) {
              if (*unaff_RDI + 6 < 0xff) {
                uStack0000000000000080 = 0;
                uStack0000000000000084 = 0x3f000000;
                iStack0000000000000068 = iVar9;
                iStack000000000000006c = iVar5;
                lVar3 = FUN_1803a4fa0(lVar6,&stack0x000000b0,&stack0x00000068,&stack0x00000080);
                if (*(float *)(lVar3 + 8) <= unaff_XMM8_Da) {
                  uStack0000000000000088 = 0;
                  uStack000000000000008c = 0x3f000000;
                  FUN_1803a4cc0(lVar6,&stack0x00000068,&stack0x00000088,
                                (longlong)*unaff_RDI * 0x10 + unaff_RBX,
                                (longlong)(*unaff_RDI + 1) * 0x10 + unaff_RBX);
                  *(float *)(unaff_RBX + (longlong)*unaff_RDI * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + 4 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 4 + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 1) * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 1) * 0x10);
                  *(float *)(unaff_RBX + 0x14 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 0x14 + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 2) * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 2) * 0x10);
                  *(float *)(unaff_RBX + 0x24 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 0x24 + (longlong)*unaff_RDI * 0x10);
                  *unaff_RDI = *unaff_RDI + 3;
                }
                uStack0000000000000090 = 0x3f800000;
                uStack0000000000000094 = 0x3f000000;
                lVar3 = FUN_1803a4fa0(lVar6,&stack0x000000c0,&stack0x00000068,&stack0x00000090);
                if (*(float *)(lVar3 + 8) <= unaff_XMM8_Da) {
                  uStack0000000000000098 = 0x3f800000;
                  uStack000000000000009c = 0x3f000000;
                  FUN_1803a4cc0(lVar6,&stack0x00000068,&stack0x00000098,
                                (longlong)*unaff_RDI * 0x10 + unaff_RBX,
                                (longlong)(*unaff_RDI + 1) * 0x10 + unaff_RBX);
                  *(float *)(unaff_RBX + (longlong)*unaff_RDI * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + 4 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 4 + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 1) * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 1) * 0x10);
                  *(float *)(unaff_RBX + 0x14 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 0x14 + (longlong)*unaff_RDI * 0x10);
                  *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 2) * 0x10) =
                       fVar10 + *(float *)(unaff_RBX + ((longlong)*unaff_RDI + 2) * 0x10);
                  *(float *)(unaff_RBX + 0x24 + (longlong)*unaff_RDI * 0x10) =
                       fVar11 + *(float *)(unaff_RBX + 0x24 + (longlong)*unaff_RDI * 0x10);
                  *unaff_RDI = *unaff_RDI + 3;
                }
              }
              iVar1 = iStack0000000000000070;
            }
            iVar9 = iVar9 + 1;
            iVar5 = iVar8;
          } while (iVar9 < iVar1);
        }
        iStack000000000000005c = iStack000000000000005c + 1;
        lStack00000000000000a0 = lStack00000000000000a0 + 0x68;
        lVar6 = lStack00000000000000a8;
        unaff_R13 = in_stack_00000150;
        unaff_R15D = in_stack_00000170;
        in_R11D = in_stack_00000060;
        unaff_R12D = in_stack_00000160;
      } while (iStack000000000000005c <= iStack0000000000000074);
    }
    unaff_R15D = unaff_R15D + 1;
    lStack0000000000000078 = lStack0000000000000078 + 8;
    in_stack_00000170 = unaff_R15D;
  } while (unaff_R15D <= in_stack_00000158);
  return;
}






