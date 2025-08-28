#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part148.c - 5 个函数

// 函数: void FUN_180137a89(float param_1)
void FUN_180137a89(float param_1)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 uVar9;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined8 *puVar10;
  longlong unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((((*(longlong *)(unaff_RDI + 8) == unaff_R14) && (unaff_RSI != 0)) &&
      ((*(byte *)(unaff_RDI + 4) & 0x40) != 0)) &&
     (((unaff_R15 != 0 && (*(longlong *)(unaff_R15 + 0x10) == unaff_R14)) &&
      (*(int *)(unaff_R15 + 0x20) == (int)unaff_R14)))) {
    puVar10 = (undefined8 *)(unaff_RBX + 0x1de0);
    bVar4 = true;
    if (*(char *)(unaff_RBX + 0x1dd0) == '\0') {
      puVar10 = (undefined8 *)0x0;
    }
    if ((puVar10 == (undefined8 *)0x0) || (*(int *)((longlong)puVar10 + 0x14) == -1)) {
LAB_180137b1b:
      fVar15 = *(float *)(unaff_R15 + 0x38) - -4.0;
      fVar14 = *(float *)(unaff_R15 + 0x3c) - -4.0;
      fVar12 = (*(float *)(unaff_R15 + 0x38) + *(float *)(unaff_R15 + 0x40)) - 4.0;
      fVar11 = (*(float *)(unaff_R15 + 0x3c) + *(float *)(unaff_R15 + 0x44)) - 4.0;
      if ((fVar15 <= fVar12) && (fVar14 <= fVar11)) {
        lVar2 = *(longlong *)(unaff_RSI + 0x398);
        param_1 = fVar15 - *(float *)(unaff_RSI + 0x40);
        uVar8 = (undefined2)(int)(fVar11 - fVar14);
        *(undefined2 *)(unaff_RBP + -0x57) = uVar8;
        fVar11 = *(float *)(unaff_RSI + 0x44);
        uVar9 = (undefined2)(int)(fVar12 - fVar15);
        *(undefined2 *)(unaff_RBP + -0x59) = uVar9;
        *(undefined4 *)(unaff_RSI + 0x268) = *(undefined4 *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)param_1;
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar14 - fVar11);
        *(undefined4 *)(unaff_RSI + 0x26c) = *(undefined4 *)(unaff_RBP + -0x59);
        fVar11 = *(float *)(lVar2 + 0x40);
        fVar12 = *(float *)(lVar2 + 0x44);
        *(undefined2 *)(unaff_RBP + -0x59) = uVar9;
        *(undefined2 *)(unaff_RBP + -0x57) = uVar8;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)(fVar15 - fVar11);
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar14 - fVar12);
        *(undefined4 *)(lVar2 + 0x26c) = *(undefined4 *)(unaff_RBP + -0x59);
      }
    }
    else {
      iVar6 = strcmp(&UNK_180a06400,puVar10 + 3);
      param_1 = extraout_XMM0_Da;
      if (iVar6 != 0) goto LAB_180137b1b;
      cVar5 = FUN_180138ed0(extraout_XMM0_Da,*(undefined8 *)*puVar10);
      param_1 = extraout_XMM0_Da_00;
      if (cVar5 == '\0') goto LAB_180137b1b;
    }
    unaff_R14 = 0;
  }
  else {
    bVar4 = false;
  }
  if (*(longlong *)(unaff_RDI + 8) == 0) {
    if (unaff_RSI == 0) goto LAB_180137cc2;
    FUN_18013a5e0(param_1,*(undefined8 *)(unaff_RSI + 0x40),*(undefined8 *)(unaff_RSI + 0x48));
    FUN_18013a920();
    unaff_RBX = _DAT_180c8a9b0;
  }
  if ((((unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 0x10) == 0)) &&
      (*(int *)(unaff_RDI + 0x20) == 0)) &&
     (((*(byte *)(unaff_RDI + 0xa0) & 4) != 0 && ((*(byte *)(unaff_RDI + 4) & 0x40) == 0)))) {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x193c);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x1940);
    fVar15 = *(float *)(unaff_RBX + 0x1944);
    fVar11 = *(float *)(unaff_RDI + 0x3c);
    fVar12 = *(float *)(unaff_RDI + 0x44);
    *(undefined4 *)(unaff_RBP + -0x29) = *(undefined4 *)(unaff_RBX + 0x1938);
    *(undefined4 *)(unaff_RBP + -0x25) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x21) = uVar3;
    *(float *)(unaff_RBP + -0x1d) = fVar15;
    fVar14 = *(float *)(unaff_RBX + 0x1628);
    *(float *)(unaff_RBP + -0x55) = fVar11 + fVar12;
    *(float *)(unaff_RBP + -0x1d) = fVar15 * fVar14;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RDI + 0x38) + *(float *)(unaff_RDI + 0x40);
    uVar7 = func_0x000180121e20(unaff_RBP + -0x29);
    FUN_180293f50(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RDI + 0x38,unaff_RBP + -0x59,uVar7,0);
    unaff_RBX = _DAT_180c8a9b0;
  }
LAB_180137cc2:
  if ((*(char *)(unaff_RBP + -0x69) != '\0') && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) {
    func_0x000180292160(*(undefined8 *)(unaff_RSI + 0x2e8),0);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x16ec);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x16f0);
    fVar11 = *(float *)(unaff_RBX + 0x16f4);
    *(undefined4 *)(unaff_RBP + -0x29) = *(undefined4 *)(unaff_RBX + 0x16e8);
    *(undefined4 *)(unaff_RBP + -0x25) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x21) = uVar3;
    *(float *)(unaff_RBP + -0x1d) = fVar11;
    *(float *)(unaff_RBP + -0x1d) = fVar11 * *(float *)(unaff_RBX + 0x1628);
    if (bVar4) {
      pfVar1 = (float *)(unaff_R15 + 0x38);
      fVar14 = *pfVar1;
      uVar3 = *(undefined4 *)(unaff_R15 + 0x3c);
      uVar7 = *(undefined4 *)(unaff_R15 + 0x3c);
      fVar11 = *(float *)(unaff_RDI + 0x3c);
      fVar15 = *pfVar1 + *(float *)(unaff_R15 + 0x40);
      fVar13 = *(float *)(unaff_R15 + 0x3c) + *(float *)(unaff_R15 + 0x44);
      fVar12 = *(float *)(unaff_RDI + 0x38);
      fVar17 = fVar11 + *(float *)(unaff_RDI + 0x44);
      fVar16 = fVar12 + *(float *)(unaff_RDI + 0x40);
      *(float *)(unaff_RBP + -0x49) = *pfVar1;
      *(undefined4 *)(unaff_RBP + -0x45) = uVar7;
      *(float *)(unaff_RBP + -0x41) = fVar15;
      *(float *)(unaff_RBP + -0x3d) = fVar13;
      *(float *)(unaff_RBP + -0x59) = fVar14;
      *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
      *(float *)(unaff_RBP + -0x51) = fVar15;
      *(float *)(unaff_RBP + -0x4d) = fVar13;
      *(float *)(unaff_RBP + -0x59) = fVar12;
      *(float *)(unaff_RBP + -0x55) = fVar11;
      *(float *)(unaff_RBP + -0x51) = fVar16;
      *(float *)(unaff_RBP + -0x4d) = fVar17;
      *(float *)(unaff_RBP + -0x59) = fVar12;
      *(float *)(unaff_RBP + -0x55) = fVar11;
      *(float *)(unaff_RBP + -0x51) = fVar16;
      *(float *)(unaff_RBP + -0x4d) = fVar17;
      uVar7 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180298890(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RBP + -0x59,unaff_RBP + -0x49,uVar7,0);
    }
    else {
      fVar11 = *(float *)(unaff_RDI + 0x3c);
      fVar12 = *(float *)(unaff_RDI + 0x44);
      *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RDI + 0x38) + *(float *)(unaff_RDI + 0x40);
      *(float *)(unaff_RBP + -0x55) = fVar11 + fVar12;
      uVar7 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180293f50(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RDI + 0x38,unaff_RBP + -0x59,uVar7,0);
    }
    FUN_180291f60(*(undefined8 *)(unaff_RSI + 0x2e8));
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RDI + 0x20) < 1)) {
    *(byte *)(unaff_RDI + 0xa1) = *(byte *)(unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0xa0) = *(byte *)(unaff_RDI + 0xa0) & 0xf7;
    *(int *)(unaff_RDI + 0x9c) = (int)unaff_R14;
    if (0 < *(int *)(unaff_RDI + 0x20)) {
      *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(**(longlong **)(unaff_RDI + 0x28) + 8);
    }
  }
  else {
    FUN_180137f90();
    iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x30) + 0x14);
    if (iVar6 != 0) {
      *(int *)(unaff_RDI + 0x98) = iVar6;
    }
  }
  if ((((unaff_RSI != 0) && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 8) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(longlong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != unaff_RSI)))) {
    FUN_18013baf0();
  }
  *(undefined4 *)(unaff_RDI + 0x8c) = *(undefined4 *)(unaff_R13 + 0x1a90);
  if (unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180137d3b(undefined4 param_1,undefined8 param_2,undefined4 param_3,float param_4)
void FUN_180137d3b(undefined4 param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined4 unaff_R14D;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM4_Db;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(unaff_RDI + 0x38);
  fVar5 = param_4 + *(float *)(unaff_RDI + 0x44);
  fVar4 = fVar1 + *(float *)(unaff_RDI + 0x40);
  *(undefined4 *)(unaff_RBP + -0x49) = in_XMM4_Db;
  *(undefined4 *)(unaff_RBP + -0x45) = in_XMM4_Da;
  *(undefined4 *)(unaff_RBP + -0x41) = param_1;
  *(undefined4 *)(unaff_RBP + -0x3d) = param_3;
  *(undefined4 *)(unaff_RBP + -0x59) = in_XMM4_Db;
  *(undefined4 *)(unaff_RBP + -0x55) = in_XMM4_Da;
  *(undefined4 *)(unaff_RBP + -0x51) = param_1;
  *(undefined4 *)(unaff_RBP + -0x4d) = param_3;
  *(float *)(unaff_RBP + -0x59) = fVar1;
  *(float *)(unaff_RBP + -0x55) = param_4;
  *(float *)(unaff_RBP + -0x51) = fVar4;
  *(float *)(unaff_RBP + -0x4d) = fVar5;
  *(float *)(unaff_RBP + -0x59) = fVar1;
  *(float *)(unaff_RBP + -0x55) = param_4;
  *(float *)(unaff_RBP + -0x51) = fVar4;
  *(float *)(unaff_RBP + -0x4d) = fVar5;
  uVar3 = func_0x000180121e20();
  FUN_180298890(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RBP + -0x59,unaff_RBP + -0x49,uVar3);
  FUN_180291f60(*(undefined8 *)(unaff_RSI + 0x2e8));
  if ((unaff_RSI == 0) || (*(int *)(unaff_RDI + 0x20) < 1)) {
    *(byte *)(unaff_RDI + 0xa1) = *(byte *)(unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0xa0) = *(byte *)(unaff_RDI + 0xa0) & 0xf7;
    *(undefined4 *)(unaff_RDI + 0x9c) = unaff_R14D;
    if (0 < *(int *)(unaff_RDI + 0x20)) {
      *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(**(longlong **)(unaff_RDI + 0x28) + 8);
    }
  }
  else {
    FUN_180137f90();
    iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x30) + 0x14);
    if (iVar2 != 0) {
      *(int *)(unaff_RDI + 0x98) = iVar2;
    }
  }
  if ((((unaff_RSI != 0) && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 8) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(longlong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != unaff_RSI)))) {
    FUN_18013baf0();
  }
  *(undefined4 *)(unaff_RDI + 0x8c) = *(undefined4 *)(unaff_R13 + 0x1a90);
  if (unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x000180137d0c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180137dd7(undefined4 param_1)
void FUN_180137dd7(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined4 unaff_R14D;
  
  if (*(longlong *)(unaff_RDI + 8) == 0) {
    if (unaff_RSI == 0) goto LAB_180137cc2;
    FUN_18013a5e0(param_1,*(undefined8 *)(unaff_RSI + 0x40),*(undefined8 *)(unaff_RSI + 0x48));
    FUN_18013a920();
    unaff_RBX = _DAT_180c8a9b0;
  }
  if ((((unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 0x10) == 0)) &&
      (*(int *)(unaff_RDI + 0x20) == 0)) &&
     (((*(byte *)(unaff_RDI + 0xa0) & 4) != 0 && ((*(byte *)(unaff_RDI + 4) & 0x40) == 0)))) {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x193c);
    uVar5 = *(undefined4 *)(unaff_RBX + 0x1940);
    fVar6 = *(float *)(unaff_RBX + 0x1944);
    fVar1 = *(float *)(unaff_RDI + 0x3c);
    fVar2 = *(float *)(unaff_RDI + 0x44);
    *(undefined4 *)(unaff_RBP + -0x29) = *(undefined4 *)(unaff_RBX + 0x1938);
    *(undefined4 *)(unaff_RBP + -0x25) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x21) = uVar5;
    *(float *)(unaff_RBP + -0x1d) = fVar6;
    fVar3 = *(float *)(unaff_RBX + 0x1628);
    *(float *)(unaff_RBP + -0x55) = fVar1 + fVar2;
    *(float *)(unaff_RBP + -0x1d) = fVar6 * fVar3;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RDI + 0x38) + *(float *)(unaff_RDI + 0x40);
    uVar7 = func_0x000180121e20(unaff_RBP + -0x29);
    FUN_180293f50(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RDI + 0x38,unaff_RBP + -0x59,uVar7,0);
    unaff_RBX = _DAT_180c8a9b0;
  }
LAB_180137cc2:
  if ((*(char *)(unaff_RBP + -0x69) != '\0') && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) {
    func_0x000180292160(*(undefined8 *)(unaff_RSI + 0x2e8),0);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x16ec);
    uVar5 = *(undefined4 *)(unaff_RBX + 0x16f0);
    fVar1 = *(float *)(unaff_RBX + 0x16f4);
    *(undefined4 *)(unaff_RBP + -0x29) = *(undefined4 *)(unaff_RBX + 0x16e8);
    *(undefined4 *)(unaff_RBP + -0x25) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x21) = uVar5;
    *(float *)(unaff_RBP + -0x1d) = fVar1;
    *(float *)(unaff_RBP + -0x1d) = fVar1 * *(float *)(unaff_RBX + 0x1628);
    fVar1 = *(float *)(unaff_RDI + 0x3c);
    fVar2 = *(float *)(unaff_RDI + 0x44);
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RDI + 0x38) + *(float *)(unaff_RDI + 0x40);
    *(float *)(unaff_RBP + -0x55) = fVar1 + fVar2;
    uVar7 = func_0x000180121e20(unaff_RBP + -0x29);
    FUN_180293f50(*(undefined8 *)(unaff_RSI + 0x2e8),unaff_RDI + 0x38,unaff_RBP + -0x59,uVar7,0);
    FUN_180291f60(*(undefined8 *)(unaff_RSI + 0x2e8));
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RDI + 0x20) < 1)) {
    *(byte *)(unaff_RDI + 0xa1) = *(byte *)(unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0xa0) = *(byte *)(unaff_RDI + 0xa0) & 0xf7;
    *(undefined4 *)(unaff_RDI + 0x9c) = unaff_R14D;
    if (0 < *(int *)(unaff_RDI + 0x20)) {
      *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(**(longlong **)(unaff_RDI + 0x28) + 8);
    }
  }
  else {
    FUN_180137f90();
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x30) + 0x14);
    if (iVar4 != 0) {
      *(int *)(unaff_RDI + 0x98) = iVar4;
    }
  }
  if ((((unaff_RSI != 0) && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 8) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(longlong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != unaff_RSI)))) {
    FUN_18013baf0();
  }
  *(undefined4 *)(unaff_RDI + 0x8c) = *(undefined4 *)(unaff_R13 + 0x1a90);
  if (unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180137e56(void)
void FUN_180137e56(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined4 unaff_R14D;
  
  if (*(int *)(unaff_RDI + 0x20) < 1) {
    *(byte *)(unaff_RDI + 0xa1) = *(byte *)(unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0xa0) = *(byte *)(unaff_RDI + 0xa0) & 0xf7;
    *(undefined4 *)(unaff_RDI + 0x9c) = unaff_R14D;
    if (0 < *(int *)(unaff_RDI + 0x20)) {
      *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(**(longlong **)(unaff_RDI + 0x28) + 8);
    }
  }
  else {
    FUN_180137f90();
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x30) + 0x14);
    if (iVar1 != 0) {
      *(int *)(unaff_RDI + 0x98) = iVar1;
    }
  }
  if ((((unaff_RSI != 0) && ((*(byte *)(unaff_RDI + 0xa0) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 8) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(longlong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != unaff_RSI)))) {
    FUN_18013baf0();
  }
  *(undefined4 *)(unaff_RDI + 0x8c) = *(undefined4 *)(unaff_R13 + 0x1a90);
  if (unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180137ef1(void)
void FUN_180137ef1(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    FUN_1801373f0();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_1801373f0();
  }
  if (*(char *)(unaff_RBP + -0x68) != '\0') {
    FUN_18012cfe0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



