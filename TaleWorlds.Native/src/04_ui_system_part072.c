#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part072.c - 8 个函数

// 函数: void FUN_18070737d(float *param_1,float *param_2,longlong param_3)
void FUN_18070737d(float *param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong in_R10;
  longlong in_R11;
  
  pfVar5 = (float *)(unaff_RDI + 4 + in_R10 * 4);
  lVar7 = in_R11 - unaff_RDI;
  lVar6 = unaff_RBX - unaff_RDI;
  lVar8 = ((param_3 - in_R10) - 4U >> 2) + 1;
  lVar1 = in_R10 + lVar8 * 4;
  do {
    *param_1 = *(float *)((longlong)pfVar5 + lVar7 + -4) * pfVar5[-1] + *param_1;
    *param_2 = *(float *)((longlong)pfVar5 + lVar6 + -4) * pfVar5[-1] + *param_2;
    *param_1 = *(float *)(lVar7 + (longlong)pfVar5) * *pfVar5 + *param_1;
    *param_2 = *(float *)((longlong)pfVar5 + lVar6) * *pfVar5 + *param_2;
    *param_1 = *(float *)((longlong)pfVar5 + lVar7 + 4) * pfVar5[1] + *param_1;
    *param_2 = *(float *)((longlong)pfVar5 + lVar6 + 4) * pfVar5[1] + *param_2;
    *param_1 = *(float *)((longlong)pfVar5 + lVar7 + 8) * pfVar5[2] + *param_1;
    pfVar3 = (float *)((longlong)pfVar5 + lVar6 + 8);
    pfVar2 = pfVar5 + 2;
    pfVar5 = pfVar5 + 4;
    *param_2 = *pfVar3 * *pfVar2 + *param_2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (lVar1 < param_3) {
    pfVar5 = (float *)(unaff_RDI + lVar1 * 4);
    param_3 = param_3 - lVar1;
    do {
      *param_1 = *(float *)((in_R11 - unaff_RDI) + (longlong)pfVar5) * *pfVar5 + *param_1;
      pfVar2 = (float *)((longlong)pfVar5 + (unaff_RBX - unaff_RDI));
      fVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      *param_2 = *pfVar2 * fVar4 + *param_2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_180707457(float *param_1,float *param_2,longlong param_3)
void FUN_180707457(float *param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  
  if (in_R10 < param_3) {
    pfVar3 = (float *)(unaff_RDI + in_R10 * 4);
    param_3 = param_3 - in_R10;
    do {
      *param_1 = *(float *)((in_R11 - unaff_RDI) + (longlong)pfVar3) * *pfVar3 + *param_1;
      pfVar1 = (float *)((longlong)pfVar3 + (unaff_RBX - unaff_RDI));
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *param_2 = *pfVar1 * fVar2 + *param_2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_1807074b0(float *param_1,longlong param_2,float *param_3,int param_4)
void FUN_1807074b0(float *param_1,longlong param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar17 = param_3[3];
  iVar11 = 0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (0 < param_4 + -3) {
    uVar9 = (param_4 - 4U >> 2) + 1;
    uVar12 = (ulonglong)uVar9;
    iVar11 = uVar9 * 4;
    pfVar13 = param_1;
    do {
      fVar3 = *pfVar13;
      fVar4 = pfVar13[1];
      fVar5 = pfVar13[2];
      fVar6 = pfVar13[3];
      pfVar1 = (float *)((param_2 - (longlong)param_1) + (longlong)pfVar13);
      fVar7 = pfVar1[2];
      pfVar2 = (float *)((param_2 - (longlong)param_1) + 0xc + (longlong)pfVar13);
      fVar8 = pfVar2[1];
      pfVar13 = pfVar13 + 4;
      fVar14 = fVar14 + fVar3 * *pfVar1 + fVar7 * fVar5;
      fVar15 = fVar15 + fVar3 * pfVar1[1] + pfVar1[3] * fVar5;
      fVar16 = fVar16 + fVar3 * fVar7 + fVar8 * fVar5;
      fVar17 = fVar17 + fVar3 * pfVar1[3] + pfVar2[2] * fVar5;
      fVar18 = fVar18 + pfVar1[1] * fVar4 + fVar6 * *pfVar2;
      fVar19 = fVar19 + fVar7 * fVar4 + fVar6 * fVar8;
      fVar20 = fVar20 + *pfVar2 * fVar4 + fVar6 * pfVar2[2];
      fVar21 = fVar21 + fVar8 * fVar4 + fVar6 * pfVar2[3];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (iVar11 < param_4) {
    iVar10 = iVar11 + 1;
    fVar3 = param_1[iVar11];
    pfVar13 = (float *)(param_2 + (longlong)iVar11 * 4);
    fVar14 = fVar14 + fVar3 * *pfVar13;
    fVar15 = fVar15 + fVar3 * pfVar13[1];
    fVar16 = fVar16 + fVar3 * pfVar13[2];
    fVar17 = fVar17 + fVar3 * pfVar13[3];
    if (iVar10 < param_4) {
      iVar11 = iVar11 + 2;
      fVar3 = param_1[iVar10];
      pfVar13 = (float *)(param_2 + (longlong)iVar10 * 4);
      fVar18 = fVar18 + fVar3 * *pfVar13;
      fVar19 = fVar19 + fVar3 * pfVar13[1];
      fVar20 = fVar20 + fVar3 * pfVar13[2];
      fVar21 = fVar21 + fVar3 * pfVar13[3];
      if (iVar11 < param_4) {
        fVar3 = param_1[iVar11];
        pfVar13 = (float *)(param_2 + (longlong)iVar11 * 4);
        fVar14 = fVar14 + fVar3 * *pfVar13;
        fVar15 = fVar15 + fVar3 * pfVar13[1];
        fVar16 = fVar16 + fVar3 * pfVar13[2];
        fVar17 = fVar17 + fVar3 * pfVar13[3];
      }
    }
  }
  *param_3 = fVar18 + fVar14;
  param_3[1] = fVar19 + fVar15;
  param_3[2] = fVar20 + fVar16;
  param_3[3] = fVar21 + fVar17;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807075c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1807075c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  int in_stack_00000050;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)&uStack_68;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_1;
  if (param_5 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(0);
  }
  if (in_stack_00000050 == 48000) {
    param_5 = param_5 * 2;
    param_6 = param_6 * 2;
  }
  else if (in_stack_00000050 == 16000) {
    param_5 = (param_5 * 2) / 3;
    param_6 = param_6 * 2;
    param_6 = param_6 / 3 + (param_6 >> 0x1f) +
              (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  }
  lStack_50 = (longlong)param_5 * 4;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(lStack_50,param_6,0xffffffffffffff0);
}





// 函数: void FUN_180707950(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
void FUN_180707950(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 *param_12)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar15;
  
  if (param_3 != 0) {
    iVar16 = *(int *)(param_1 + 0x1d1c);
    uVar14 = (param_9 * 0x5f) / 0x32;
    if ((int)(param_4 & 0xfffffffe) <= (int)uVar14) {
      uVar14 = param_4 & 0xfffffffe;
    }
    iVar9 = uVar14 - iVar16;
    if (0 < iVar9) {
      param_9 = param_9 / 0x32;
      do {
        iVar11 = param_9;
        if (iVar9 <= param_9) {
          iVar11 = iVar9;
        }
        FUN_180707df0(param_1,param_2,param_3,iVar11,iVar16,param_6,param_7,param_8,param_10,
                      param_11);
        iVar16 = iVar16 + param_9;
        iVar9 = iVar9 - param_9;
      } while (0 < iVar9);
    }
    *(uint *)(param_1 + 0x1d1c) = uVar14 - param_5;
  }
  *(undefined4 *)param_12 = 0;
  iVar16 = *(int *)(param_1 + 0x2054);
  iVar9 = *(int *)(param_1 + 0x2050);
  iVar4 = iVar9 - iVar16;
  iVar11 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar11 = iVar4;
  }
  uVar13 = 0;
  iVar4 = 0;
  if (((*(int *)(param_1 + 8) / 0x32 < param_5) && (iVar16 != iVar9)) &&
     (iVar16 = iVar16 + 1, iVar16 == 100)) {
    iVar16 = 0;
  }
  iVar10 = 1;
  iVar12 = iVar16 + -1;
  if (iVar16 != iVar9) {
    iVar12 = iVar16;
  }
  if (iVar12 < 0) {
    iVar12 = 99;
  }
  uVar8 = (ulonglong)iVar12;
  lVar5 = uVar8 * 0x38;
  puVar2 = (undefined8 *)(lVar5 + 0x206c + param_1);
  uVar3 = puVar2[1];
  *param_12 = *puVar2;
  param_12[1] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x207c + param_1);
  uVar3 = puVar2[1];
  param_12[2] = *puVar2;
  param_12[3] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x208c + param_1);
  uVar3 = puVar2[1];
  param_12[4] = *puVar2;
  param_12[5] = uVar3;
  param_12[6] = *(undefined8 *)(lVar5 + 0x209c + param_1);
  fVar20 = *(float *)((longlong)param_12 + 4);
  uVar15 = uVar13;
  fVar18 = fVar20;
  do {
    bVar17 = uVar8 != 99;
    uVar1 = uVar8 + 1;
    uVar8 = uVar13;
    if (bVar17) {
      uVar8 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar8 == (longlong)*(int *)(param_1 + 0x2050)) break;
    iVar10 = iVar10 + 1;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    fVar19 = *(float *)(uVar8 * 0x38 + 0x2070 + param_1);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar14 < 3);
  fVar18 = fVar20 / (float)iVar10;
  if (fVar20 / (float)iVar10 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)param_12 + 4) = fVar18;
  *(int *)(param_1 + 0x2058) = *(int *)(param_1 + 0x2058) + param_5 / (*(int *)(param_1 + 8) / 400);
  iVar16 = *(int *)(param_1 + 0x2058);
  iVar9 = *(int *)(param_1 + 0x2054);
  if (7 < iVar16) {
    do {
      iVar16 = iVar16 + -8;
      iVar9 = iVar9 + 1;
    } while (7 < iVar16);
    *(int *)(param_1 + 0x2054) = iVar9;
    *(int *)(param_1 + 0x2058) = iVar16;
  }
  if (99 < iVar9) {
    *(int *)(param_1 + 0x2054) = iVar9 + -100;
  }
  fVar20 = 0.0;
  iVar16 = iVar11 + -1;
  if (iVar11 + -1 < 1) {
    iVar16 = iVar4;
  }
  lVar5 = (longlong)(100 - iVar16);
  if (3 < lVar5) {
    pfVar7 = (float *)(param_1 + 0x1eb4);
    lVar6 = (lVar5 - 4U >> 2) + 1;
    iVar4 = (int)lVar6 * 4;
    uVar13 = lVar6 * 4;
    do {
      fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar13 < lVar5) {
    lVar5 = lVar5 - uVar13;
    pfVar7 = (float *)(param_1 + 0x1eb0 + uVar13 * 4);
    iVar4 = iVar4 + (int)lVar5;
    do {
      fVar20 = fVar20 + *pfVar7;
      pfVar7 = pfVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = (longlong)iVar4;
  if (lVar5 < 100) {
    if (3 < 100 - lVar5) {
      pfVar7 = (float *)(param_1 + 0x1d24 + lVar5 * 4);
      lVar6 = (0x60U - lVar5 >> 2) + 1;
      lVar5 = lVar5 + lVar6 * 4;
      do {
        fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
        pfVar7 = pfVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 < 100) {
      lVar6 = 100 - lVar5;
      pfVar7 = (float *)(param_1 + 0x1d20 + lVar5 * 4);
      do {
        fVar20 = fVar20 + *pfVar7;
        pfVar7 = pfVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *(float *)((longlong)param_12 + 0x14) =
       (1.0 - fVar20) * *(float *)(param_1 + 0x2040) + fVar20 * *(float *)(param_1 + 0x2044);
  return;
}





// 函数: void FUN_180707988(int param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_180707988(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int in_EAX;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int iVar11;
  int iVar12;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong in_R11;
  int unaff_R12D;
  undefined8 unaff_R14;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  int in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  iVar11 = (int)((ulonglong)((longlong)in_EAX * (longlong)(param_1 * 0x5f)) >> 0x20);
  iVar11 = (iVar11 >> 4) - (iVar11 >> 0x1f);
  if (param_4 <= iVar11) {
    iVar11 = param_4;
  }
  iVar9 = iVar11 - *(int *)(unaff_RBP + 0x1d1c);
  if (0 < iVar9) {
    *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
    do {
      uStack0000000000000048 = in_stack_000000d0;
      uStack0000000000000040 = in_stack_000000c8;
      uStack0000000000000038 = in_stack_000000b8;
      uStack0000000000000030 = in_stack_000000b0;
      uStack0000000000000028 = in_stack_000000a8;
      FUN_180707df0();
      iVar9 = iVar9 - param_1 / 0x32;
      unaff_R12D = in_stack_000000a0;
    } while (0 < iVar9);
  }
  *(int *)(unaff_RBP + 0x1d1c) = iVar11 - unaff_R12D;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar11 = *(int *)(unaff_RBP + 0x2054);
  iVar9 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar9 - iVar11;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < unaff_R12D) && (iVar11 != iVar9)) &&
     (iVar11 = iVar11 + 1, iVar11 == 100)) {
    iVar11 = 0;
  }
  iVar10 = 1;
  iVar13 = iVar11 + -1;
  if (iVar11 != iVar9) {
    iVar13 = iVar11;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar8 = (ulonglong)iVar13;
  lVar5 = uVar8 * 0x38;
  puVar2 = (undefined8 *)(lVar5 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar5 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar8 != 99;
    uVar1 = uVar8 + 1;
    uVar8 = uVar14;
    if (bVar17) {
      uVar8 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar8 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar10 = iVar10 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar8 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar10;
  if (fVar20 / (float)iVar10 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + unaff_R12D / (*(int *)(unaff_RBP + 8) / 400);
  iVar11 = *(int *)(unaff_RBP + 0x2058);
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar11) {
    do {
      iVar11 = iVar11 + -8;
      iVar9 = iVar9 + 1;
    } while (7 < iVar11);
    *(int *)(unaff_RBP + 0x2054) = iVar9;
    *(int *)(unaff_RBP + 0x2058) = iVar11;
  }
  if (99 < iVar9) {
    *(int *)(unaff_RBP + 0x2054) = iVar9 + -100;
  }
  fVar20 = 0.0;
  iVar11 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar11 = iVar4;
  }
  lVar5 = (longlong)(100 - iVar11);
  if (3 < lVar5) {
    pfVar7 = (float *)(unaff_RBP + 0x1eb4);
    lVar6 = (lVar5 - 4U >> 2) + 1;
    iVar4 = (int)lVar6 * 4;
    uVar14 = lVar6 * 4;
    do {
      fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar14 < lVar5) {
    lVar5 = lVar5 - uVar14;
    pfVar7 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar5;
    do {
      fVar20 = fVar20 + *pfVar7;
      pfVar7 = pfVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = (longlong)iVar4;
  if (lVar5 < 100) {
    if (3 < 100 - lVar5) {
      pfVar7 = (float *)(unaff_RBP + 0x1d24 + lVar5 * 4);
      lVar6 = (0x60U - lVar5 >> 2) + 1;
      lVar5 = lVar5 + lVar6 * 4;
      do {
        fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
        pfVar7 = pfVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 < 100) {
      lVar6 = 100 - lVar5;
      pfVar7 = (float *)(unaff_RBP + 0x1d20 + lVar5 * 4);
      do {
        fVar20 = fVar20 + *pfVar7;
        pfVar7 = pfVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





// 函数: void FUN_1807079df(undefined8 param_1,int param_2)
void FUN_1807079df(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int unaff_EBX;
  int iVar11;
  longlong unaff_RBP;
  int iVar12;
  undefined8 unaff_RDI;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong in_R11;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  int in_stack_00000098;
  int in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  do {
    uStack0000000000000038 = in_stack_000000b8;
    uStack0000000000000030 = in_stack_000000b0;
    uStack0000000000000028 = in_stack_000000a8;
    FUN_180707df0();
    unaff_EBX = unaff_EBX - ((param_2 >> 4) - (param_2 >> 0x1f));
  } while (0 < unaff_EBX);
  *(int *)(unaff_RBP + 0x1d1c) = in_stack_00000098 - in_stack_000000a0;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  iVar5 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < in_stack_000000a0) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (ulonglong)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (undefined8 *)(lVar6 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar6 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + in_stack_000000a0 / (*(int *)(unaff_RBP + 8) / 400);
  iVar9 = *(int *)(unaff_RBP + 0x2058);
  iVar5 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(unaff_RBP + 0x2054) = iVar5;
    *(int *)(unaff_RBP + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(unaff_RBP + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (longlong)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(unaff_RBP + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((longlong)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (longlong)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(unaff_RBP + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(unaff_RBP + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





// 函数: void FUN_180707a56(void)
void FUN_180707a56(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int unaff_R12D;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(int *)(unaff_RBP + 0x1d1c) = unaff_ESI - unaff_R12D;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  iVar5 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < unaff_R12D) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (ulonglong)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (undefined8 *)(lVar6 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar6 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + unaff_R12D / (*(int *)(unaff_RBP + 8) / 400);
  iVar9 = *(int *)(unaff_RBP + 0x2058);
  iVar5 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(unaff_RBP + 0x2054) = iVar5;
    *(int *)(unaff_RBP + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(unaff_RBP + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (longlong)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(unaff_RBP + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((longlong)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (longlong)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(unaff_RBP + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(unaff_RBP + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





