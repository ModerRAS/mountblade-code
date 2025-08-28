#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part162.c - 3 个函数

// 函数: void FUN_18014b19e(int param_1,ulonglong param_2,float *param_3)
void FUN_18014b19e(int param_1,ulonglong param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  do {
    fVar13 = *param_3;
    fVar16 = param_3[1];
    fVar12 = param_3[5];
    fVar14 = param_3[3];
    fVar11 = fVar16;
    if (fVar12 <= fVar16) {
      fVar11 = fVar12;
    }
    fVar15 = param_3[2];
    fVar22 = param_3[7];
    fVar1 = param_3[6];
    fVar21 = fVar14;
    if (fVar22 <= fVar14) {
      fVar21 = fVar22;
    }
    fVar10 = fVar15;
    if (fVar1 <= fVar15) {
      fVar10 = fVar1;
    }
    if (*(float *)(unaff_RBP + -0x79) <= fVar11 - fVar13) {
      *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
    }
    else {
      *(float *)(unaff_RBP + -0x49) = fVar11 - fVar13;
    }
    if (*(float *)(unaff_RBP + -0x75) <= fVar10 - fVar13) {
      *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
    }
    else {
      *(float *)(unaff_RBP + -0x45) = fVar10 - fVar13;
    }
    if (*(float *)(unaff_RBP + -0x71) <= fVar21 - fVar13) {
      *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
    }
    else {
      *(float *)(unaff_RBP + -0x41) = fVar21 - fVar13;
    }
    if (fVar16 <= fVar12) {
      fVar16 = fVar12;
    }
    if (fVar14 <= fVar22) {
      fVar14 = fVar22;
    }
    *(undefined8 *)(unaff_RBP + -0x79) = *(undefined8 *)(unaff_RBP + -0x49);
    *(undefined8 *)(unaff_RBP + -0x71) = *(undefined8 *)(unaff_RBP + -0x41);
    if (fVar15 <= fVar1) {
      fVar15 = fVar1;
    }
    if (fVar16 + fVar13 <= *(float *)(unaff_RBP + -0x69)) {
      *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
    }
    else {
      *(float *)(unaff_RBP + -0x59) = fVar16 + fVar13;
    }
    if (fVar15 + fVar13 <= *(float *)(unaff_RBP + -0x65)) {
      *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
    }
    else {
      *(float *)(unaff_RBP + -0x55) = fVar15 + fVar13;
    }
    if (fVar14 + fVar13 <= *(float *)(unaff_RBP + -0x61)) {
      *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
    }
    else {
      *(float *)(unaff_RBP + -0x51) = fVar14 + fVar13;
    }
    uVar17 = *(undefined4 *)(unaff_RBP + -0x59);
    uVar18 = *(undefined4 *)(unaff_RBP + -0x55);
    uVar19 = *(undefined4 *)(unaff_RBP + -0x51);
    uVar20 = *(undefined4 *)(unaff_RBP + -0x4d);
    param_1 = param_1 + 1;
    param_3 = param_3 + 0xc;
    *(undefined4 *)(unaff_RBP + -0x69) = uVar17;
    *(undefined4 *)(unaff_RBP + -0x65) = uVar18;
    *(undefined4 *)(unaff_RBP + -0x61) = uVar19;
    *(undefined4 *)(unaff_RBP + -0x5d) = uVar20;
  } while ((ulonglong)(longlong)param_1 < param_2);
  lVar2 = *(longlong *)(unaff_RSI + 0x20);
  uVar7 = *(longlong *)(unaff_RSI + 0x28) - lVar2 >> 5;
  uVar9 = in_R11;
  if (uVar7 != 0) {
    do {
      fVar13 = *(float *)(lVar2 + in_R11);
      fVar16 = *(float *)(lVar2 + 4 + in_R11);
      fVar12 = *(float *)(lVar2 + 8 + in_R11);
      fVar14 = *(float *)(lVar2 + 0xc + in_R11);
      fVar22 = fVar16 - fVar13;
      fVar11 = fVar12 - fVar13;
      fVar15 = fVar14 - fVar13;
      if (*(float *)(unaff_RBP + -0x79) <= fVar22) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar22;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar11) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar11;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar15) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar15;
      }
      fVar16 = fVar13 + fVar16;
      *(undefined8 *)(unaff_RBP + -0x79) = *(undefined8 *)(unaff_RBP + -0x49);
      *(undefined8 *)(unaff_RBP + -0x71) = *(undefined8 *)(unaff_RBP + -0x41);
      if (fVar16 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar16;
      }
      fVar12 = fVar13 + fVar12;
      fVar13 = fVar13 + fVar14;
      if (fVar12 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar12;
      }
      if (fVar13 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar13;
      }
      uVar17 = *(undefined4 *)(unaff_RBP + -0x59);
      uVar18 = *(undefined4 *)(unaff_RBP + -0x55);
      uVar19 = *(undefined4 *)(unaff_RBP + -0x51);
      uVar20 = *(undefined4 *)(unaff_RBP + -0x4d);
      uVar8 = (int)uVar9 + 1;
      in_R11 = in_R11 + 0x20;
      *(undefined4 *)(unaff_RBP + -0x69) = uVar17;
      *(undefined4 *)(unaff_RBP + -0x65) = uVar18;
      *(undefined4 *)(unaff_RBP + -0x61) = uVar19;
      *(undefined4 *)(unaff_RBP + -0x5d) = uVar20;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < uVar7);
  }
  *(undefined4 *)(unaff_RBP + -0x39) = *(undefined4 *)(unaff_RBP + -0x79);
  *(undefined4 *)(unaff_RBP + -0x35) = *(undefined4 *)(unaff_RBP + -0x75);
  *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(unaff_RBP + -0x71);
  *(undefined4 *)(unaff_RBP + -0x2d) = *(undefined4 *)(unaff_RBP + -0x6d);
  *(undefined4 *)(unaff_RBP + -0x29) = uVar17;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar18;
  *(undefined4 *)(unaff_RBP + -0x21) = uVar19;
  *(undefined4 *)(unaff_RBP + -0x1d) = uVar20;
  FUN_1800b9f60(unaff_RBP + -0x39);
  uVar3 = *(undefined8 *)(unaff_RBP + -0x31);
  uVar17 = *(undefined4 *)(unaff_RBP + -9);
  uVar4 = *(undefined8 *)(unaff_RBP + -0x29);
  uVar5 = *(undefined8 *)(unaff_RBP + -0x21);
  *(undefined8 *)(unaff_RSI + 0xf8) = *(undefined8 *)(unaff_RBP + -0x39);
  *(undefined8 *)(unaff_RSI + 0x100) = uVar3;
  uVar3 = *(undefined8 *)(unaff_RBP + -0x19);
  uVar6 = *(undefined8 *)(unaff_RBP + -0x11);
  *(undefined8 *)(unaff_RSI + 0x108) = uVar4;
  *(undefined8 *)(unaff_RSI + 0x110) = uVar5;
  *(undefined8 *)(unaff_RSI + 0x118) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x120) = uVar6;
  *(undefined4 *)(unaff_RSI + 0x128) = uVar17;
  return;
}





// 函数: void FUN_18014b2f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18014b2f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar17;
  
  uVar16 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar15 = (undefined4)param_3;
  lVar2 = *(longlong *)(unaff_RSI + 0x20);
  uVar7 = *(longlong *)(unaff_RSI + 0x28) - lVar2 >> 5;
  uVar9 = in_R11;
  if (uVar7 != 0) {
    do {
      fVar12 = *(float *)(lVar2 + in_R11);
      fVar14 = *(float *)(lVar2 + 4 + in_R11);
      fVar11 = *(float *)(lVar2 + 8 + in_R11);
      fVar1 = *(float *)(lVar2 + 0xc + in_R11);
      fVar17 = fVar14 - fVar12;
      fVar10 = fVar11 - fVar12;
      fVar13 = fVar1 - fVar12;
      if (*(float *)(unaff_RBP + -0x79) <= fVar17) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar17;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar10) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar10;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar13) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar13;
      }
      fVar14 = fVar12 + fVar14;
      *(undefined8 *)(unaff_RBP + -0x79) = *(undefined8 *)(unaff_RBP + -0x49);
      *(undefined8 *)(unaff_RBP + -0x71) = *(undefined8 *)(unaff_RBP + -0x41);
      if (fVar14 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar14;
      }
      fVar11 = fVar12 + fVar11;
      fVar12 = fVar12 + fVar1;
      if (fVar11 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar11;
      }
      if (fVar12 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar12;
      }
      uVar15 = *(undefined4 *)(unaff_RBP + -0x59);
      uVar16 = *(undefined4 *)(unaff_RBP + -0x55);
      in_XMM2_Dc = *(undefined4 *)(unaff_RBP + -0x51);
      in_XMM2_Dd = *(undefined4 *)(unaff_RBP + -0x4d);
      uVar8 = (int)uVar9 + 1;
      in_R11 = in_R11 + 0x20;
      *(undefined4 *)(unaff_RBP + -0x69) = uVar15;
      *(undefined4 *)(unaff_RBP + -0x65) = uVar16;
      *(undefined4 *)(unaff_RBP + -0x61) = in_XMM2_Dc;
      *(undefined4 *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < uVar7);
  }
  *(undefined4 *)(unaff_RBP + -0x39) = *(undefined4 *)(unaff_RBP + -0x79);
  *(undefined4 *)(unaff_RBP + -0x35) = *(undefined4 *)(unaff_RBP + -0x75);
  *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(unaff_RBP + -0x71);
  *(undefined4 *)(unaff_RBP + -0x2d) = *(undefined4 *)(unaff_RBP + -0x6d);
  *(undefined4 *)(unaff_RBP + -0x29) = uVar15;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar16;
  *(undefined4 *)(unaff_RBP + -0x21) = in_XMM2_Dc;
  *(undefined4 *)(unaff_RBP + -0x1d) = in_XMM2_Dd;
  FUN_1800b9f60(unaff_RBP + -0x39);
  uVar3 = *(undefined8 *)(unaff_RBP + -0x31);
  uVar15 = *(undefined4 *)(unaff_RBP + -9);
  uVar4 = *(undefined8 *)(unaff_RBP + -0x29);
  uVar5 = *(undefined8 *)(unaff_RBP + -0x21);
  *(undefined8 *)(unaff_RSI + 0xf8) = *(undefined8 *)(unaff_RBP + -0x39);
  *(undefined8 *)(unaff_RSI + 0x100) = uVar3;
  uVar3 = *(undefined8 *)(unaff_RBP + -0x19);
  uVar6 = *(undefined8 *)(unaff_RBP + -0x11);
  *(undefined8 *)(unaff_RSI + 0x108) = uVar4;
  *(undefined8 *)(unaff_RSI + 0x110) = uVar5;
  *(undefined8 *)(unaff_RSI + 0x118) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x120) = uVar6;
  *(undefined4 *)(unaff_RSI + 0x128) = uVar15;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014b470(longlong *param_1,undefined8 *param_2)
void FUN_18014b470(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  
  lVar5 = *param_1;
  iVar10 = 0;
  lVar8 = param_1[1] - lVar5 >> 0x3f;
  if ((param_1[1] - lVar5) / 0x30 + lVar8 != lVar8) {
    lVar8 = 0;
    do {
      uVar2 = *(ulonglong *)(lVar5 + 0x28 + lVar8);
      bVar11 = true;
      puVar4 = (undefined8 *)param_2[2];
      puVar3 = param_2;
      while (puVar4 != (undefined8 *)0x0) {
        bVar11 = uVar2 < (ulonglong)puVar4[4];
        puVar3 = puVar4;
        if (bVar11) {
          puVar4 = (undefined8 *)puVar4[1];
        }
        else {
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      puVar4 = puVar3;
      if (bVar11) {
        if (puVar3 == (undefined8 *)param_2[1]) goto LAB_18014b52a;
        puVar4 = (undefined8 *)func_0x00018066b9a0(puVar3);
      }
      if ((ulonglong)puVar4[4] < uVar2) {
LAB_18014b52a:
        lVar5 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(param_2 + 5));
        *(ulonglong *)(lVar5 + 0x20) = uVar2;
        if ((puVar3 == param_2) || (uVar2 < (ulonglong)puVar3[4])) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar5,puVar3,param_2,uVar9);
      }
      lVar5 = *param_1;
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)((param_1[1] - lVar5) / 0x30));
  }
  lVar5 = param_1[4];
  iVar10 = 0;
  if (param_1[5] - lVar5 >> 5 != 0) {
    lVar8 = 0;
    do {
      bVar11 = true;
      uVar2 = *(ulonglong *)(lVar5 + 0x18 + lVar8);
      puVar4 = (undefined8 *)param_2[2];
      puVar3 = param_2;
      while (puVar4 != (undefined8 *)0x0) {
        bVar11 = uVar2 < (ulonglong)puVar4[4];
        puVar3 = puVar4;
        if (bVar11) {
          puVar4 = (undefined8 *)puVar4[1];
        }
        else {
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      puVar4 = puVar3;
      if (bVar11) {
        if (puVar3 == (undefined8 *)param_2[1]) goto LAB_18014b61a;
        puVar4 = (undefined8 *)func_0x00018066b9a0(puVar3);
      }
      if ((ulonglong)puVar4[4] < uVar2) {
LAB_18014b61a:
        lVar5 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(param_2 + 5));
        *(ulonglong *)(lVar5 + 0x20) = uVar2;
        if ((puVar3 == param_2) || (uVar2 < (ulonglong)puVar3[4])) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar5,puVar3,param_2,uVar9);
      }
      lVar5 = param_1[4];
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)(param_1[5] - lVar5 >> 5));
  }
  lVar5 = param_1[8];
  iVar10 = 0;
  lVar8 = param_1[9] - lVar5 >> 0x3f;
  if ((param_1[9] - lVar5) / 0x88 + lVar8 != lVar8) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(lVar8 + lVar5);
      plVar1 = (longlong *)(lVar8 + lVar5);
      iVar7 = 0;
      if (plVar1[1] - lVar6 >> 3 != 0) {
        lVar5 = 0;
        do {
          bVar11 = true;
          uVar2 = *(ulonglong *)(lVar5 + lVar6);
          puVar4 = (undefined8 *)param_2[2];
          puVar3 = param_2;
          while (puVar4 != (undefined8 *)0x0) {
            bVar11 = uVar2 < (ulonglong)puVar4[4];
            puVar3 = puVar4;
            if (bVar11) {
              puVar4 = (undefined8 *)puVar4[1];
            }
            else {
              puVar4 = (undefined8 *)*puVar4;
            }
          }
          puVar4 = puVar3;
          if (bVar11) {
            if (puVar3 == (undefined8 *)param_2[1]) goto LAB_18014b72a;
            puVar4 = (undefined8 *)func_0x00018066b9a0(puVar3);
          }
          if ((ulonglong)puVar4[4] < uVar2) {
LAB_18014b72a:
            lVar5 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(param_2 + 5));
            *(ulonglong *)(lVar5 + 0x20) = uVar2;
            if ((puVar3 == param_2) || (uVar2 < (ulonglong)puVar3[4])) {
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
                    // WARNING: Subroutine does not return
            FUN_18066bdc0(lVar5,puVar3,param_2,uVar9);
          }
          lVar6 = *plVar1;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 8;
        } while ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar1[1] - lVar6 >> 3));
      }
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 0x88;
      lVar5 = param_1[8];
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)((param_1[9] - lVar5) / 0x88));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



