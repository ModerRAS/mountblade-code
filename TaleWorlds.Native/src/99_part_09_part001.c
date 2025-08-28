#include "TaleWorlds.Native.Split.h"

// 99_part_09_part001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_09.c - 500 个函数


// 函数: void FUN_1805bcba0(longlong *param_1,longlong param_2,float param_3)
void FUN_1805bcba0(longlong *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0.0 < param_3) {
    lVar1 = *(longlong *)(param_2 + 0x20);
    lVar2 = *(longlong *)(*param_1 + 0x20);
    fVar4 = *(float *)(lVar1 + 0x10) - *(float *)(lVar2 + 0x10);
    fVar5 = *(float *)(lVar1 + 0xc) - *(float *)(lVar2 + 0xc);
    if (SQRT(fVar4 * fVar4 + fVar5 * fVar5) *
        (1.0 / (*(float *)(lVar2 + 0x84) + *(float *)(lVar1 + 0x84))) < 5.0) {
      FUN_1805be4d0(param_1,param_2);
      uVar3 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      *(uint *)(param_1 + 0x272) = uVar3 << 5 ^ uVar3;
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    *(uint *)(param_1 + 0x272) = uVar3 << 5 ^ uVar3;
  }
  return;
}






// 函数: void FUN_1805bcd40(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,
void FUN_1805bcd40(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  byte bVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar4;
  
  uVar2 = *(int *)(param_2 + 0x678) + *(int *)(param_2 + 0x67c);
  uVar4 = (ulonglong)uVar2;
  lVar1 = *(longlong *)(param_2 + 0x20);
  fVar9 = *(float *)(lVar1 + 0xc) - *param_3;
  fVar10 = *(float *)(lVar1 + 0x10) - param_3[1];
  fVar8 = *(float *)(lVar1 + 0x14) - param_3[2];
  fVar9 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar8 = fVar9;
  if (fVar9 <= 1.1754944e-38) {
    fVar8 = 1.1754944e-38;
  }
  auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar6 = auVar7._0_4_;
  fVar8 = fVar6 * 0.5 * (3.0 - fVar8 * fVar6 * fVar6);
  if (*(int *)(param_1 + 0x14b4) != *(int *)(param_2 + 0x10)) goto LAB_1805bce8b;
  iVar3 = *(int *)(param_1 + 0x14a8);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x2024) == '\0') {
LAB_1805bce62:
      if (*(char *)(param_1 + 0x21e8) != '\0') {
        iVar3 = *(int *)(param_1 + 0x21ec);
      }
      if (iVar3 == 0) {
        if (*(char *)(param_1 + 0x2024) != '\0') goto LAB_1805bce8b;
      }
      else if ((iVar3 - 1U & 0xfffffffd) != 0) goto LAB_1805bce8b;
    }
  }
  else if ((iVar3 - 2U & 0xfffffffd) != 0) goto LAB_1805bce62;
  uVar4 = (ulonglong)(uVar2 - 1);
LAB_1805bce8b:
  iVar3 = (int)uVar4;
  if ((0 < iVar3) && (*(int *)(param_1 + 0x14b4) != *(int *)(param_2 + 0x10))) {
    uVar4 = (ulonglong)(uint)(iVar3 * iVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 0x1b & 1) == 0) {
    uVar4 = **(ulonglong **)(param_1 + 8);
    bVar5 = (byte)((uint)*(undefined4 *)(uVar4 + 0x564) >> 0x1f) ^ 1;
    *(byte *)(param_1 + 0x11c) = bVar5;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x11c);
  }
  if (bVar5 != 0) {
    atan2f(uVar4,fVar10 * fVar8);
  }
  if ((uVar2 & 0x20) == 0) {
    *(undefined8 *)(param_1 + 0xa8) =
         *(undefined8 *)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 0x10) = uVar2 | 0x20;
  }
  fVar10 = (float)FUN_1805bd630(param_1,param_4,param_6,*(undefined8 *)(param_1 + 0xa8),param_2,0);
  if ((fVar8 * fVar9 < fVar10) && (bVar5 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400();
  }
  return;
}






// 函数: void FUN_1805bcd8e(ulonglong param_1,longlong param_2,float *param_3,int param_4)
void FUN_1805bcd8e(ulonglong param_1,longlong param_2,float *param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong in_RAX;
  int iVar3;
  longlong *unaff_RBX;
  byte bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 unaff_XMM15_Da;
  float fVar12;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined4 in_stack_000000d8;
  
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM15_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM15_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM15_Dd;
  lVar2 = *(longlong *)(param_2 + 0x20);
  fVar10 = *(float *)(lVar2 + 0xc) - *param_3;
  fVar11 = *(float *)(lVar2 + 0x10) - param_3[1];
  fVar9 = *(float *)(lVar2 + 0x14) - param_3[2];
  fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar10 = fVar8;
  if (fVar8 <= 1.1754944e-38) {
    fVar10 = 1.1754944e-38;
  }
  auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar12 = auVar7._0_4_;
  auVar7._0_4_ = fVar12 * fVar12;
  uVar5 = auVar7._0_8_;
  fVar10 = 3.0 - fVar10 * auVar7._0_4_;
  fVar12 = fVar12 * 0.5 * fVar10;
  fVar9 = fVar9 * fVar12;
  if (*(int *)((longlong)unaff_RBX + 0x14b4) != param_4) goto LAB_1805bce8b;
  iVar3 = (int)unaff_RBX[0x295];
  if (iVar3 == 0) {
    if (*(char *)((longlong)unaff_RBX + 0x2024) != '\0') goto LAB_1805bce89;
LAB_1805bce62:
    if ((char)unaff_RBX[0x43d] != '\0') {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x21ec);
    }
    if (iVar3 == 0) {
      if (*(char *)((longlong)unaff_RBX + 0x2024) == '\0') goto LAB_1805bce89;
    }
    else if ((iVar3 - 1U & 0xfffffffd) == 0) goto LAB_1805bce89;
  }
  else {
    if ((iVar3 - 2U & 0xfffffffd) != 0) goto LAB_1805bce62;
LAB_1805bce89:
    param_1 = (ulonglong)((int)param_1 - 1);
  }
LAB_1805bce8b:
  iVar3 = (int)param_1;
  if (0 < iVar3) {
    if (*(int *)((longlong)unaff_RBX + 0x14b4) == param_4) {
      if (iVar3 < 6) {
        fVar10 = (float)iVar3 * 2.1 - 19.0;
        uVar5 = (ulonglong)(uint)fVar10;
        fVar10 = 1.0 / fVar10 + 1.0526316;
      }
      else {
        fVar10 = (float)iVar3 - 5.59;
        fVar10 = fVar10 * fVar10 * 0.08 + 1.0;
        uVar5 = (ulonglong)(uint)fVar10;
        fVar10 = 0.91 / fVar10;
      }
    }
    else {
      param_1 = (ulonglong)(uint)(iVar3 * iVar3);
      uVar5 = (ulonglong)(uint)((float)(iVar3 * iVar3) * 0.08 + 1.0);
    }
  }
  if ((*(uint *)((longlong)unaff_RBX + 0x1484) >> 4 & 1) == 0) {
    fVar9 = ABS(fVar9);
    if (fVar9 <= 0.70710677) goto LAB_1805bcf59;
    auVar6 = ZEXT812(0x3fa00000);
  }
  else {
    if ((0.0 <= fVar9) || (fVar9 <= -0.966)) goto LAB_1805bcf59;
    auVar6 = ZEXT812(0x3f800000);
  }
  auVar6._4_8_ = auVar6._4_8_;
  auVar6._0_4_ = auVar6._0_4_ - fVar9;
  uVar5 = auVar6._0_8_;
LAB_1805bcf59:
  uVar1 = *(uint *)(unaff_RBX + 2);
  if ((uVar1 >> 0x1b & 1) == 0) {
    param_1 = *(ulonglong *)unaff_RBX[1];
    bVar4 = (byte)((uint)*(undefined4 *)(param_1 + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
  }
  else {
    bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (bVar4 != 0) {
    lVar2 = *unaff_RBX;
    fVar9 = (float)atan2f(param_1,fVar11 * fVar12);
    fVar9 = fVar9 - *(float *)(*(longlong *)(lVar2 + 0x20) + 0x34);
    if (fVar9 <= 3.1415927) {
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
    }
    else {
      fVar9 = fVar9 + -6.2831855;
    }
    fVar10 = (*(float *)(lVar2 + 0xa44) - *(float *)(lVar2 + 0xa40)) * 0.1;
    fVar9 = fVar9 - ((*(float *)(lVar2 + 0xa40) + *(float *)(lVar2 + 0xa44)) * 0.5 - fVar10);
    if (fVar9 <= 3.1415927) {
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
    }
    else {
      fVar9 = fVar9 + -6.2831855;
    }
    uVar5 = (ulonglong)(uint)(10.0 - ABS(fVar9) * 3.1830988);
  }
  if ((uVar1 & 0x20) == 0) {
    unaff_RBX[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
    *(uint *)(unaff_RBX + 2) = uVar1 | 0x20;
  }
  fVar10 = (float)FUN_1805bd630(uVar5,fVar10,in_stack_000000d8,unaff_RBX[0x15]);
  if ((fVar12 * fVar8 < fVar10) && (bVar4 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400();
  }
  return;
}



float FUN_1805bcf86(float param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  char unaff_DIL;
  float fVar3;
  float unaff_XMM6_Da;
  uint unaff_XMM13_Da;
  float unaff_XMM15_Da;
  undefined4 in_stack_000000d8;
  
  if (unaff_DIL != '\0') {
    lVar1 = *unaff_RBX;
    fVar3 = (float)atan2f(unaff_XMM13_Da ^ 0x80000000);
    fVar3 = fVar3 - *(float *)(*(longlong *)(lVar1 + 0x20) + 0x34);
    if (fVar3 <= 3.1415927) {
      if (fVar3 < -3.1415927) {
        fVar3 = fVar3 + 6.2831855;
      }
    }
    else {
      fVar3 = fVar3 + -6.2831855;
    }
    param_2 = (*(float *)(lVar1 + 0xa44) - *(float *)(lVar1 + 0xa40)) * 0.1;
    fVar3 = fVar3 - ((*(float *)(lVar1 + 0xa40) + *(float *)(lVar1 + 0xa44)) * 0.5 - param_2);
    if (fVar3 <= 3.1415927) {
      if (fVar3 < -3.1415927) {
        fVar3 = fVar3 + 6.2831855;
      }
    }
    else {
      fVar3 = fVar3 + -6.2831855;
    }
    param_1 = 10.0 - ABS(fVar3) * 3.1830988;
    unaff_XMM6_Da = unaff_XMM6_Da * param_1;
  }
  if ((char)unaff_RBX[0x438] == '\0') {
    iVar2 = *(int *)((longlong)unaff_RBX + 0x14b4);
  }
  else {
    iVar2 = *(int *)((longlong)unaff_RBX + 0x21c4);
  }
  if (iVar2 == *(int *)(unaff_RBP + 0x10)) {
    if ((int)unaff_RBX[0x2f2] == 3) {
      unaff_XMM6_Da = unaff_XMM6_Da * 1.75;
    }
    else if (((int)unaff_RBX[0x2f2] - 2U & 0xfffffffd) == 0) {
      unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
    }
  }
  if ((unaff_ESI & 0x20) == 0) {
    unaff_RBX[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
    *(uint *)(unaff_RBX + 2) = unaff_ESI | 0x20;
  }
  fVar3 = (float)FUN_1805bd630(param_1,param_2,in_stack_000000d8,unaff_RBX[0x15]);
  if (fVar3 <= unaff_XMM15_Da) {
    if ((char)unaff_RBX[0x29b] != '\0') {
      return unaff_XMM6_Da;
    }
  }
  else {
    unaff_XMM6_Da = unaff_XMM6_Da * 250.0;
    if (unaff_DIL == '\0') {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(undefined4 *)(*(longlong *)(unaff_RBP + 0x20) + 0x34));
    }
  }
  if (((-1 < *(int *)((longlong)unaff_RBX + 0x14e4)) &&
      (-1 < *(int *)((longlong)unaff_RBX + 0x201c))) &&
     (*(int *)(unaff_RBP + 0x504) == *(int *)((longlong)unaff_RBX + 0x201c))) {
    if (unaff_DIL == '\0') {
      unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM6_Da + 70000.0;
    }
    else {
      unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM6_Da + 180000.0;
    }
  }
  return unaff_XMM6_Da;
}



float FUN_1805bd0fd(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_DIL;
  float unaff_XMM6_Da;
  float fVar1;
  
  fVar1 = unaff_XMM6_Da * 250.0;
  if (unaff_DIL == '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(undefined4 *)(*(longlong *)(unaff_RBP + 0x20) + 0x34));
  }
  if (((-1 < *(int *)(unaff_RBX + 0x14e4)) && (-1 < *(int *)(unaff_RBX + 0x201c))) &&
     (*(int *)(unaff_RBP + 0x504) == *(int *)(unaff_RBX + 0x201c))) {
    if (unaff_DIL == '\0') {
      fVar1 = fVar1 + fVar1 + 70000.0;
    }
    else {
      fVar1 = fVar1 + fVar1 + 180000.0;
    }
  }
  return fVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805bd2d0(float *param_1,float *param_2,undefined4 *param_3,float param_4)
void FUN_1805bd2d0(float *param_1,float *param_2,undefined4 *param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_f8 [6];
  undefined4 uStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)afStack_f8;
  afStack_f8[0] = *param_2;
  pfVar3 = afStack_f8 + 2;
  afStack_f8[2] = param_2[2];
  afStack_f8[1] = param_2[1];
  afStack_f8[4] = (float)*param_3;
  afStack_f8[5] = (float)param_3[1];
  uStack_e0 = param_3[2];
  lVar4 = 8;
  fStack_d8 = afStack_f8[0];
  fStack_d0 = afStack_f8[2];
  fStack_c0 = afStack_f8[2];
  fStack_b8 = afStack_f8[0];
  fStack_98 = afStack_f8[0];
  fStack_80 = afStack_f8[2];
  fStack_b4 = afStack_f8[1];
  fStack_a4 = afStack_f8[1];
  fStack_84 = afStack_f8[1];
  uStack_d4 = afStack_f8[5];
  uStack_c8 = afStack_f8[4];
  uStack_c4 = afStack_f8[5];
  uStack_b0 = uStack_e0;
  uStack_a8 = afStack_f8[4];
  uStack_a0 = uStack_e0;
  uStack_94 = afStack_f8[5];
  uStack_90 = uStack_e0;
  uStack_88 = afStack_f8[4];
  fVar9 = -3.4028235e+38;
  fVar10 = -3.4028235e+38;
  fVar11 = 3.4028235e+38;
  fVar12 = 3.4028235e+38;
  do {
    pfVar1 = pfVar3 + -2;
    pfVar2 = pfVar3 + -1;
    fVar5 = *pfVar3;
    pfVar3 = pfVar3 + 4;
    fVar7 = *pfVar1 * *param_1 + *pfVar2 * param_1[4] + fVar5 * param_1[8] + param_1[0xc];
    fVar8 = *pfVar1 * param_1[2] + *pfVar2 * param_1[6] + fVar5 * param_1[10] + param_1[0xe];
    fVar5 = fVar7;
    if (fVar11 <= fVar7) {
      fVar5 = fVar11;
    }
    if (fVar7 <= fVar10) {
      fVar7 = fVar10;
    }
    fVar6 = fVar8;
    if (fVar12 <= fVar8) {
      fVar6 = fVar12;
    }
    if (fVar8 <= fVar9) {
      fVar8 = fVar9;
    }
    lVar4 = lVar4 + -1;
    fVar9 = fVar8;
    fVar10 = fVar7;
    fVar11 = fVar5;
    fVar12 = fVar6;
  } while (lVar4 != 0);
  param_4 = param_4 + param_4;
  fVar9 = ABS(fVar8 - fVar6);
  if (ABS(fVar7 - fVar5) <= ABS(fVar8 - fVar6)) {
    fVar9 = ABS(fVar7 - fVar5);
  }
  fVar9 = fVar9 * 0.5;
  if (param_4 + 1.0 < fVar9) {
    fVar9 = SQRT(fVar9 - param_4) + param_4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(fVar9);
}



undefined8 FUN_1805bd4d0(longlong *param_1,longlong param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float extraout_XMM0_Da;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db;
  
  if ((param_2 == param_4) && (*(int *)(param_2 + 0xf0) == param_3)) {
    lVar2 = *param_1;
    fVar4 = *(float *)(lVar2 + 0x3bc);
    uVar5 = 0;
    iVar1 = *(int *)((longlong)param_3 * 0xa0 + 0x70 + *(longlong *)(param_2 + 0xd0));
  }
  else {
    lVar2 = *param_1;
    lVar3 = (longlong)*(int *)((longlong)param_1 + 0x2154) * 0x1f8 + *(longlong *)(lVar2 + 0x8f8);
    iVar1 = func_0x0001805d8e60((int)param_1[0x42b]);
    iVar1 = *(int *)((longlong)iVar1 * 0xa0 + 0x70 + *(longlong *)(lVar3 + 0xd8));
    fVar4 = extraout_XMM0_Da;
    uVar5 = extraout_XMM0_Db;
  }
  fVar4 = (fVar4 + *(float *)(lVar2 + 0x364)) * 0.5;
  if (fVar4 <= 0.5 / (float)iVar1) {
    fVar4 = 0.5 / (float)iVar1;
  }
  return CONCAT44(uVar5,fVar4);
}



undefined8
FUN_1805bd570(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
             float param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar1 = (float)param_2;
  fVar2 = fVar1 * fVar1;
  if (0.0 < param_3) {
    uVar3 = 0;
    fVar2 = (SQRT(fVar2 - param_3 * -39.224) * fVar1 + fVar2) * 0.050989192;
  }
  else {
    fVar2 = fVar2 * 0.101978384;
  }
  if ((0.0001 <= param_4) && (1e-06 < param_5)) {
    fVar1 = (float)tanf(param_4);
    fVar1 = (param_5 * param_6) / fVar1;
    if (fVar1 <= fVar2) {
      uVar3 = 0;
      fVar2 = fVar1;
    }
  }
  if ((*(uint *)(param_1 + 0x209c) & 0x400) != 0) {
    fVar2 = fVar2 * 1.5;
  }
  return CONCAT44(uVar3,fVar2);
}



undefined8 FUN_1805bd57f(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  bool in_CF;
  bool in_ZF;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float in_stack_00000070;
  float in_stack_00000078;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar1 = (float)param_2;
  fVar2 = fVar1 * fVar1;
  if (in_CF || in_ZF) {
    fVar2 = fVar2 * 0.101978384;
  }
  else {
    uVar3 = 0;
    fVar2 = (SQRT(fVar2 - param_3 * -39.224) * fVar1 + fVar2) * 0.050989192;
  }
  if ((0.0001 <= param_4) && (1e-06 < in_stack_00000070)) {
    fVar1 = (float)tanf(param_4);
    fVar1 = (in_stack_00000070 * in_stack_00000078) / fVar1;
    if (fVar1 <= fVar2) {
      uVar3 = 0;
      fVar2 = fVar1;
    }
  }
  if ((*(uint *)(param_1 + 0x209c) & 0x400) != 0) {
    fVar2 = fVar2 * 1.5;
  }
  return CONCAT44(uVar3,fVar2);
}



undefined8 FUN_1805bd5cf(void)

{
  longlong unaff_RBX;
  float fVar1;
  undefined4 in_XMM3_Da;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  float in_stack_00000070;
  float in_stack_00000078;
  
  if (1e-06 < in_stack_00000070) {
    fVar1 = (float)tanf(in_XMM3_Da);
    fVar1 = (in_stack_00000070 * in_stack_00000078) / fVar1;
    if (fVar1 <= unaff_XMM6_Da) {
      unaff_XMM6_Db = 0;
      unaff_XMM6_Da = fVar1;
    }
  }
  if ((*(uint *)(unaff_RBX + 0x209c) & 0x400) != 0) {
    unaff_XMM6_Da = unaff_XMM6_Da * 1.5;
  }
  return CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
}



float FUN_1805bd602(void)

{
  longlong unaff_RBX;
  float unaff_XMM6_Da;
  
  if ((*(uint *)(unaff_RBX + 0x209c) & 0x400) != 0) {
    unaff_XMM6_Da = unaff_XMM6_Da * 1.5;
  }
  return unaff_XMM6_Da;
}



float FUN_1805bd613(void)

{
  float unaff_XMM6_Da;
  
  return unaff_XMM6_Da * 1.5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805bd630(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,
void FUN_1805bd630(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,
                  longlong param_5,char param_6)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  longlong *aplStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  lVar6 = *param_1;
  lVar7 = param_1[0x41e];
  fVar13 = 0.0;
  fVar8 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x1d0);
  if ((lVar7 == 0) ||
     ((1 < (int)param_1[0x295] - 5U &&
      (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 || ((*(byte *)(param_1 + 0x413) & 1) == 0))
      )))) {
    if ((param_5 == 0) && (cVar3 = func_0x0001805d1da0(), cVar3 != '\0')) {
      if ((char)param_1[0x438] == '\0') {
        iVar5 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar5 = *(int *)((longlong)param_1 + 0x21c4);
      }
      param_5 = param_1[0x291] + 0x30a0 + (longlong)iVar5 * 0xa60;
    }
    uVar12 = _DAT_180c9647c;
    if ((param_6 != '\0') && (param_5 != 0)) {
      if (*(int *)(param_5 + 0x564) < 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = 1.2;
      }
      fVar8 = fVar8 * *(float *)(*(longlong *)(param_5 + 0x20) + 0x1d0);
      if ((*(byte *)(param_5 + 0x51c) & 8) != 0) {
        uStack_88 = 0;
        iVar5 = 1;
        aplStack_a8[0] = (longlong *)0x0;
        FUN_1804ff330(param_1[0x291] + 0x98d230,*(longlong *)(param_5 + 0x20) + 0xc,0x40000000,
                      aplStack_a8);
        if (aplStack_a8[0] != (longlong *)0x0) {
          fVar10 = 4.0;
          iVar2 = *(int *)(param_5 + 0x10);
          do {
            lVar6 = *aplStack_a8[0];
            if (((((*(int *)(lVar6 + 0x10) != iVar2) && ((*(uint *)(lVar6 + 0x56c) & 0x800) != 0))
                 && (*(int *)(lVar6 + 0x568) == 1)) &&
                ((cVar3 = func_0x000180508390(param_5), cVar3 != '\0' &&
                 (fVar11 = *(float *)(*(longlong *)(param_5 + 0x20) + 0x20),
                 fVar1 = *(float *)(*(longlong *)(param_5 + 0x20) + 0x1c),
                 fVar1 * fVar1 + fVar11 * fVar11 < fVar10)))) && (iVar5 = iVar5 + 1, 7 < iVar5))
            break;
            FUN_1804ff550(param_1[0x291] + 0x98d230,aplStack_a8);
          } while (aplStack_a8[0] != (longlong *)0x0);
          if (1 < iVar5) {
            fVar10 = (float)(iVar5 + -1) * 0.2;
            if (fVar10 <= 1.5) {
              fVar10 = 1.5;
            }
            fVar8 = fVar8 * fVar10;
          }
        }
      }
      lVar7 = param_1[0x41e];
      lVar6 = *param_1;
      uVar12 = _DAT_180c9647c;
    }
  }
  else {
    fVar10 = *(float *)(lVar7 + 0xa0) - *(float *)(lVar6 + 0x550);
    fVar11 = *(float *)(lVar7 + 0xa4) - *(float *)(lVar6 + 0x554);
    fStack_48 = fVar11 * *(float *)(lVar6 + 0x524) + fVar10 * *(float *)(lVar6 + 0x520);
    fStack_40 = *(float *)(lVar7 + 0xa8) - *(float *)(lVar6 + 0x558);
    fStack_44 = fVar11 * *(float *)(lVar6 + 0x534) + fVar10 * *(float *)(lVar6 + 0x530);
    uStack_3c = 0x7f7fffff;
    puVar4 = (undefined8 *)FUN_180534800((float *)(lVar6 + 0x520),aplStack_a8);
    uStack_78 = *puVar4;
    uStack_70 = puVar4[1];
    uStack_68 = puVar4[2];
    uStack_60 = puVar4[3];
    uStack_58 = puVar4[4];
    uStack_50 = puVar4[5];
    fVar8 = (float)FUN_1805bd2d0(&uStack_78,*(longlong *)(lVar7 + 0x28) + 0xf8,
                                 *(longlong *)(lVar7 + 0x28) + 0x108,fVar8);
    uVar12 = 0x40000000;
  }
  if ((lVar7 == 0) ||
     ((1 < (int)param_1[0x295] - 5U &&
      (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 || ((*(byte *)(param_1 + 0x413) & 1) == 0))
      )))) {
    if (param_5 == 0) {
      lVar7 = lVar6;
      cVar3 = func_0x0001805d1da0(param_1);
      if (cVar3 != '\0') {
        if ((char)param_1[0x438] == '\0') {
          iVar5 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar5 = *(int *)((longlong)param_1 + 0x21c4);
        }
        fVar13 = *(float *)(*(longlong *)(lVar7 + 0x20) + 0x14) -
                 *(float *)(*(longlong *)((longlong)iVar5 * 0xa60 + 0x30c0 + param_1[0x291]) + 0x14)
        ;
      }
    }
    else {
      fVar13 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x14) -
               *(float *)(*(longlong *)(param_5 + 0x20) + 0x14);
    }
  }
  else {
    fVar13 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x14) - *(float *)(lVar7 + 0xa8);
  }
  uVar9 = FUN_1805bd4d0(param_1,param_2,param_3,param_4);
  FUN_1805bd570(param_1,(float)*(int *)((longlong)param_3 * 0xa0 + 0x70 +
                                       *(longlong *)(param_2 + 0xd0)) * *(float *)(lVar6 + 0x3b8),
                fVar13,uVar9,fVar8,uVar12);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805bd86d(void)
void FUN_1805bd86d(void)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *in_RAX;
  longlong *unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar6;
  undefined8 uVar7;
  float in_XMM3_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  longlong *in_stack_00000050;
  
  iVar4 = *(int *)(unaff_RDI + 0x10);
  do {
    lVar2 = *in_RAX;
    if (((*(int *)(lVar2 + 0x10) != iVar4) && ((*(uint *)(lVar2 + 0x56c) & 0x800) != 0)) &&
       (*(int *)(lVar2 + 0x568) == 1)) {
      cVar3 = func_0x000180508390();
      if (cVar3 != '\0') {
        fVar6 = *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x20);
        fVar1 = *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x1c);
        if (fVar1 * fVar1 + fVar6 * fVar6 < in_XMM3_Da) {
          unaff_ESI = unaff_ESI + 1;
          if (7 < unaff_ESI) break;
        }
      }
    }
    FUN_1804ff550(unaff_RBX[0x291] + 0x98d230,&stack0x00000050);
    in_RAX = in_stack_00000050;
  } while (in_stack_00000050 != (longlong *)0x0);
  if (1 < unaff_ESI) {
    fVar6 = (float)(unaff_ESI + -1) * 0.2;
    if (fVar6 <= 1.5) {
      fVar6 = 1.5;
    }
    unaff_XMM7_Da = unaff_XMM7_Da * fVar6;
  }
  lVar2 = *unaff_RBX;
  if ((unaff_RBX[0x41e] == 0) ||
     ((1 < (int)unaff_RBX[0x295] - 5U &&
      (((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0 ||
       ((*(byte *)(unaff_RBX + 0x413) & 1) == 0)))))) {
    if (unaff_RDI == 0) {
      lVar5 = lVar2;
      cVar3 = func_0x0001805d1da0();
      if (cVar3 != '\0') {
        if ((char)unaff_RBX[0x438] == '\0') {
          iVar4 = *(int *)((longlong)unaff_RBX + 0x14b4);
        }
        else {
          iVar4 = *(int *)((longlong)unaff_RBX + 0x21c4);
        }
        unaff_XMM6_Da =
             *(float *)(*(longlong *)(lVar5 + 0x20) + 0x14) -
             *(float *)(*(longlong *)((longlong)iVar4 * 0xa60 + 0x30c0 + unaff_RBX[0x291]) + 0x14);
      }
    }
    else {
      unaff_XMM6_Da =
           *(float *)(*(longlong *)(lVar2 + 0x20) + 0x14) -
           *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x14);
    }
  }
  else {
    unaff_XMM6_Da =
         *(float *)(*(longlong *)(lVar2 + 0x20) + 0x14) - *(float *)(unaff_RBX[0x41e] + 0xa8);
  }
  uVar7 = FUN_1805bd4d0();
  FUN_1805bd570(uVar7,(float)*(int *)(unaff_R14 * 0xa0 + 0x70 + *(longlong *)(unaff_R15 + 0xd0)) *
                      *(float *)(lVar2 + 0x3b8),unaff_XMM6_Da,(int)uVar7,unaff_XMM7_Da);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805bd8f6(void)
void FUN_1805bd8f6(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar4;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar5;
  undefined8 uVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  fVar5 = (float)(unaff_ESI + -1) * 0.2;
  if (fVar5 <= 1.5) {
    fVar5 = 1.5;
  }
  lVar1 = *unaff_RBX;
  if ((unaff_RBX[0x41e] == 0) ||
     ((1 < (int)unaff_RBX[0x295] - 5U &&
      (((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0 ||
       ((*(byte *)(unaff_RBX + 0x413) & 1) == 0)))))) {
    if (unaff_RDI == 0) {
      lVar4 = lVar1;
      cVar2 = func_0x0001805d1da0();
      if (cVar2 != '\0') {
        if ((char)unaff_RBX[0x438] == '\0') {
          iVar3 = *(int *)((longlong)unaff_RBX + 0x14b4);
        }
        else {
          iVar3 = *(int *)((longlong)unaff_RBX + 0x21c4);
        }
        unaff_XMM6_Da =
             *(float *)(*(longlong *)(lVar4 + 0x20) + 0x14) -
             *(float *)(*(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + unaff_RBX[0x291]) + 0x14);
      }
    }
    else {
      unaff_XMM6_Da =
           *(float *)(*(longlong *)(lVar1 + 0x20) + 0x14) -
           *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x14);
    }
  }
  else {
    unaff_XMM6_Da =
         *(float *)(*(longlong *)(lVar1 + 0x20) + 0x14) - *(float *)(unaff_RBX[0x41e] + 0xa8);
  }
  uVar6 = FUN_1805bd4d0();
  FUN_1805bd570(uVar6,(float)*(int *)(unaff_R14 * 0xa0 + 0x70 + *(longlong *)(unaff_R15 + 0xd0)) *
                      *(float *)(lVar1 + 0x3b8),unaff_XMM6_Da,(int)uVar6,unaff_XMM7_Da * fVar5);
  return;
}






