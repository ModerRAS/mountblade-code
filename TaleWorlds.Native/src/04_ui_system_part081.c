#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part081.c - 5 个函数

// 函数: void FUN_180713126(undefined8 param_1,undefined8 param_2,float param_3,int *param_4)
void FUN_180713126(undefined8 param_1,undefined8 param_2,float param_3,int *param_4)

{
  float fVar1;
  float *pfVar2;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong lVar3;
  int iVar4;
  int in_R10D;
  longlong lVar5;
  longlong unaff_R14;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  pfVar2 = (float *)(unaff_R14 + 4);
  lVar3 = (unaff_RSI * 4 - unaff_R14) + unaff_RBX;
  lVar5 = unaff_RBX - unaff_R14;
  iVar4 = 2;
  do {
    fVar6 = pfVar2[-1];
    if ((unaff_XMM8_Da < fVar6) &&
       (fVar6 = fVar6 * fVar6 * unaff_XMM9_Da, in_XMM4_Da * param_3 < in_XMM5_Da * fVar6)) {
      if (unaff_XMM7_Da * fVar6 <= unaff_XMM6_Da * param_3) {
        param_4[1] = in_R10D;
        in_XMM4_Da = fVar6;
        in_XMM5_Da = param_3;
      }
      else {
        param_4[1] = *param_4;
        *param_4 = in_R10D;
        in_XMM4_Da = unaff_XMM6_Da;
        in_XMM5_Da = unaff_XMM7_Da;
        unaff_XMM6_Da = fVar6;
        unaff_XMM7_Da = param_3;
      }
    }
    fVar6 = *(float *)((longlong)pfVar2 + lVar3 + -4);
    fVar1 = *(float *)((longlong)pfVar2 + lVar5 + -4);
    param_3 = (fVar6 * fVar6 - fVar1 * fVar1) + param_3;
    fVar6 = *pfVar2;
    if (param_3 <= unaff_XMM10_Da) {
      param_3 = unaff_XMM10_Da;
    }
    if ((unaff_XMM8_Da < fVar6) &&
       (fVar6 = fVar6 * fVar6 * unaff_XMM9_Da, in_XMM4_Da * param_3 < fVar6 * in_XMM5_Da)) {
      if (fVar6 * unaff_XMM7_Da <= unaff_XMM6_Da * param_3) {
        param_4[1] = iVar4 + -1;
        in_XMM4_Da = fVar6;
        in_XMM5_Da = param_3;
      }
      else {
        param_4[1] = *param_4;
        *param_4 = iVar4 + -1;
        in_XMM4_Da = unaff_XMM6_Da;
        in_XMM5_Da = unaff_XMM7_Da;
        unaff_XMM6_Da = fVar6;
        unaff_XMM7_Da = param_3;
      }
    }
    param_3 = (*(float *)((longlong)pfVar2 + lVar3) * *(float *)((longlong)pfVar2 + lVar3) -
              *(float *)((longlong)pfVar2 + lVar5) * *(float *)((longlong)pfVar2 + lVar5)) + param_3
    ;
    fVar6 = pfVar2[1];
    if (param_3 <= unaff_XMM10_Da) {
      param_3 = unaff_XMM10_Da;
    }
    if ((unaff_XMM8_Da < fVar6) &&
       (fVar6 = fVar6 * fVar6 * unaff_XMM9_Da, in_XMM4_Da * param_3 < in_XMM5_Da * fVar6)) {
      if (unaff_XMM7_Da * fVar6 <= unaff_XMM6_Da * param_3) {
        param_4[1] = iVar4;
        in_XMM4_Da = fVar6;
        in_XMM5_Da = param_3;
      }
      else {
        param_4[1] = *param_4;
        *param_4 = iVar4;
        in_XMM4_Da = unaff_XMM6_Da;
        in_XMM5_Da = unaff_XMM7_Da;
        unaff_XMM6_Da = fVar6;
        unaff_XMM7_Da = param_3;
      }
    }
    fVar6 = *(float *)((longlong)pfVar2 + lVar3 + 4);
    fVar1 = *(float *)((longlong)pfVar2 + lVar5 + 4);
    param_3 = (fVar6 * fVar6 - fVar1 * fVar1) + param_3;
    fVar6 = pfVar2[2];
    if (param_3 <= unaff_XMM10_Da) {
      param_3 = unaff_XMM10_Da;
    }
    if ((unaff_XMM8_Da < fVar6) &&
       (fVar6 = fVar6 * fVar6 * unaff_XMM9_Da, in_XMM4_Da * param_3 < fVar6 * in_XMM5_Da)) {
      if (fVar6 * unaff_XMM7_Da <= unaff_XMM6_Da * param_3) {
        param_4[1] = iVar4 + 1;
        in_XMM4_Da = fVar6;
        in_XMM5_Da = param_3;
      }
      else {
        param_4[1] = *param_4;
        *param_4 = iVar4 + 1;
        in_XMM4_Da = unaff_XMM6_Da;
        in_XMM5_Da = unaff_XMM7_Da;
        unaff_XMM6_Da = fVar6;
        unaff_XMM7_Da = param_3;
      }
    }
    fVar6 = *(float *)((longlong)pfVar2 + ((unaff_RSI * 4 + 8) - unaff_R14) + unaff_RBX);
    in_R10D = in_R10D + 4;
    fVar1 = *(float *)((longlong)pfVar2 + lVar5 + 8);
    iVar4 = iVar4 + 4;
    pfVar2 = pfVar2 + 4;
    param_3 = (fVar6 * fVar6 - fVar1 * fVar1) + param_3;
    if (param_3 <= unaff_XMM10_Da) {
      param_3 = unaff_XMM10_Da;
    }
  } while (in_R10D < unaff_EBP + -3);
  if (in_R10D < unaff_EBP) {
    pfVar2 = (float *)(unaff_R14 + (longlong)in_R10D * 4);
    do {
      fVar6 = *pfVar2;
      if ((unaff_XMM8_Da < fVar6) &&
         (fVar6 = fVar6 * fVar6 * unaff_XMM9_Da, in_XMM4_Da * param_3 < fVar6 * in_XMM5_Da)) {
        if (fVar6 * unaff_XMM7_Da <= unaff_XMM6_Da * param_3) {
          param_4[1] = in_R10D;
          in_XMM4_Da = fVar6;
          in_XMM5_Da = param_3;
        }
        else {
          param_4[1] = *param_4;
          *param_4 = in_R10D;
          in_XMM4_Da = unaff_XMM6_Da;
          in_XMM5_Da = unaff_XMM7_Da;
          unaff_XMM6_Da = fVar6;
          unaff_XMM7_Da = param_3;
        }
      }
      fVar6 = *(float *)((longlong)pfVar2 + (unaff_RSI * 4 - unaff_R14) + unaff_RBX);
      in_R10D = in_R10D + 1;
      fVar1 = *(float *)((longlong)pfVar2 + (unaff_RBX - unaff_R14));
      pfVar2 = pfVar2 + 1;
      param_3 = (fVar6 * fVar6 - fVar1 * fVar1) + param_3;
      if (param_3 <= unaff_XMM10_Da) {
        param_3 = unaff_XMM10_Da;
      }
    } while (in_R10D < unaff_EBP);
  }
  return;
}





// 函数: void FUN_180713394(undefined8 param_1,undefined8 param_2,float param_3,int *param_4)
void FUN_180713394(undefined8 param_1,undefined8 param_2,float param_3,int *param_4)

{
  float fVar1;
  float *pfVar2;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  int in_R10D;
  longlong unaff_R14;
  float fVar3;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if (in_R10D < unaff_EBP) {
    pfVar2 = (float *)(unaff_R14 + (longlong)in_R10D * 4);
    do {
      fVar3 = *pfVar2;
      if ((unaff_XMM8_Da < fVar3) &&
         (fVar3 = fVar3 * fVar3 * unaff_XMM9_Da, in_XMM4_Da * param_3 < fVar3 * in_XMM5_Da)) {
        if (fVar3 * unaff_XMM7_Da <= unaff_XMM6_Da * param_3) {
          param_4[1] = in_R10D;
          in_XMM4_Da = fVar3;
          in_XMM5_Da = param_3;
        }
        else {
          param_4[1] = *param_4;
          *param_4 = in_R10D;
          in_XMM4_Da = unaff_XMM6_Da;
          in_XMM5_Da = unaff_XMM7_Da;
          unaff_XMM6_Da = fVar3;
          unaff_XMM7_Da = param_3;
        }
      }
      fVar3 = *(float *)((longlong)pfVar2 + (unaff_RSI * 4 - unaff_R14) + unaff_RBX);
      in_R10D = in_R10D + 1;
      fVar1 = *(float *)((longlong)pfVar2 + (unaff_RBX - unaff_R14));
      pfVar2 = pfVar2 + 1;
      param_3 = (fVar3 * fVar3 - fVar1 * fVar1) + param_3;
      if (param_3 <= unaff_XMM10_Da) {
        param_3 = unaff_XMM10_Da;
      }
    } while (in_R10D < unaff_EBP);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180713470(longlong *param_1,float *param_2,int param_3,int param_4,undefined4 param_5)
void FUN_180713470(longlong *param_1,float *param_2,int param_3,int param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  int iStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  param_3 = param_3 >> 1;
  lVar11 = (longlong)param_3;
  lVar9 = 1;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (1 < lVar11) {
    lVar10 = 1;
    if (4 < lVar11) {
      pfVar7 = (float *)(*param_1 + 0xc);
      pfVar8 = param_2 + 3;
      lVar12 = (lVar11 - 5U >> 2) + 1;
      lVar10 = lVar12 * 4 + 1;
      do {
        fVar2 = pfVar7[2];
        fVar3 = *pfVar7;
        fVar4 = pfVar7[1];
        pfVar8[-2] = pfVar7[-2] * 0.25 + fVar3 * 0.25 + pfVar7[-1] * 0.5;
        fVar5 = pfVar7[4];
        fVar6 = pfVar7[3];
        pfVar8[-1] = fVar2 * 0.25 + fVar3 * 0.25 + fVar4 * 0.5;
        fVar3 = pfVar7[6];
        fVar4 = pfVar7[5];
        pfVar7 = pfVar7 + 8;
        *pfVar8 = fVar5 * 0.25 + fVar2 * 0.25 + fVar6 * 0.5;
        pfVar8[1] = fVar3 * 0.25 + fVar5 * 0.25 + fVar4 * 0.5;
        pfVar8 = pfVar8 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (lVar10 < lVar11) {
      pfVar7 = (float *)(*param_1 + 4 + lVar10 * 8);
      do {
        pfVar8 = pfVar7 + -2;
        fVar2 = *pfVar7;
        pfVar1 = pfVar7 + -1;
        pfVar7 = pfVar7 + 2;
        param_2[lVar10] = (*pfVar8 + fVar2) * 0.25 + *pfVar1 * 0.5;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar11);
    }
  }
  *param_2 = ((float *)*param_1)[1] * 0.25 + *(float *)*param_1 * 0.5;
  if (param_4 == 2) {
    if (1 < lVar11) {
      if (4 < lVar11) {
        pfVar8 = (float *)(param_1[1] + 0xc);
        lVar10 = (lVar11 - 5U >> 2) + 1;
        pfVar7 = param_2 + 3;
        lVar9 = lVar10 * 4 + 1;
        do {
          fVar2 = pfVar8[2];
          fVar3 = *pfVar8;
          fVar4 = pfVar8[4];
          pfVar7[-2] = pfVar8[-2] * 0.25 + fVar3 * 0.25 + pfVar8[-1] * 0.5 + pfVar7[-2];
          fVar5 = pfVar8[3];
          pfVar7[-1] = pfVar8[1] * 0.5 + fVar2 * 0.25 + fVar3 * 0.25 + pfVar7[-1];
          fVar3 = pfVar8[6];
          fVar6 = pfVar8[5];
          pfVar8 = pfVar8 + 8;
          *pfVar7 = fVar4 * 0.25 + fVar2 * 0.25 + fVar5 * 0.5 + *pfVar7;
          pfVar7[1] = fVar3 * 0.25 + fVar4 * 0.25 + fVar6 * 0.5 + pfVar7[1];
          pfVar7 = pfVar7 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar9 < lVar11) {
        pfVar7 = (float *)(param_1[1] + 4 + lVar9 * 8);
        do {
          pfVar8 = pfVar7 + -2;
          fVar2 = *pfVar7;
          pfVar1 = pfVar7 + -1;
          pfVar7 = pfVar7 + 2;
          param_2[lVar9] = (*pfVar8 + fVar2) * 0.25 + *pfVar1 * 0.5 + param_2[lVar9];
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar11);
      }
    }
    *param_2 = ((float *)param_1[1])[1] * 0.25 + *(float *)param_1[1] * 0.5 + *param_2;
  }
  uStack_68 = param_5;
  puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,4);
  iStack_70 = param_3;
  FUN_180720430(param_2,&fStack_40,0,0);
  fStack_40 = fStack_40 * 1.0001;
  fStack_3c = fStack_3c - fStack_3c * 0.008 * 0.008;
  fStack_38 = fStack_38 - fStack_38 * 0.016 * 0.016;
  fStack_34 = fStack_34 - fStack_34 * 0.024 * 0.024;
  fStack_30 = fStack_30 - fStack_30 * 0.032 * 0.032;
  FUN_1807207d0(&fStack_28,&fStack_40,4);
  puStack_78 = &uStack_58;
  fStack_40 = fStack_28 * 0.9 + 0.8;
  fStack_3c = fStack_28 * 0.9 * 0.8 + fStack_24 * 0.80999994;
  fStack_38 = fStack_24 * 0.80999994 * 0.8 + fStack_20 * 0.7289999;
  fStack_34 = fStack_20 * 0.7289999 * 0.8 + fStack_1c * 0.6560999;
  fStack_30 = fStack_1c * 0.6560999 * 0.8;
  FUN_180712c50(param_2,&fStack_40,param_2,param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180713890(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
void FUN_180713890(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  int aiStack_a8 [2];
  undefined8 uStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  ulonglong uStack_60;
  
  uStack_60 = _DAT_180bf00a8 ^ (ulonglong)aiStack_a8;
  uStack_78 = param_5;
  aiStack_a8[0] = param_3 >> 2;
  uStack_a0 = 0;
  uVar1 = (longlong)aiStack_a8[0] * 4 + 0xf;
  if (uVar1 <= (ulonglong)((longlong)aiStack_a8[0] * 4)) {
    uVar1 = 0xffffffffffffff0;
  }
  iStack_94 = param_3;
  uStack_90 = param_2;
  uStack_88 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar1 & 0xfffffffffffffff0,0xffffffffffffff0,param_3,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180713c60(undefined8 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
void FUN_180713c60(undefined8 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
                  int param_6)

{
  ulonglong uVar1;
  undefined1 auStack_118 [8];
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  ulonglong uStack_e0;
  
  uStack_e0 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  piStack_f8 = param_5;
  iStack_108 = param_2 / 2;
  iStack_10c = *param_5 / 2;
  *param_5 = iStack_10c;
  iStack_100 = param_6 / 2;
  iStack_110 = param_4 / 2;
  if (iStack_108 <= iStack_10c) {
    iStack_10c = iStack_108 + -1;
    *param_5 = iStack_10c;
  }
  uVar1 = (longlong)iStack_108 * 4 + 0x13;
  if (uVar1 <= (longlong)iStack_108 * 4 + 4U) {
    uVar1 = 0xffffffffffffff0;
  }
  uStack_fc = param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar1 & 0xfffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



