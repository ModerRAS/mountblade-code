#include "TaleWorlds.Native.Split.h"

// 03_rendering_part003.c - 6 个函数

// 函数: void FUN_1802700ba(undefined8 param_1,undefined8 *param_2)
void FUN_1802700ba(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    lVar1 = (longlong)param_2 + 0x1c;
    lVar2 = unaff_RDI;
    do {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2 = param_2 + 4;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
    param_2 = *(undefined8 **)(unaff_RSI + 8);
  }
  *(undefined8 **)(unaff_RSI + 8) = param_2 + unaff_RDI * 4;
  return;
}





// 函数: void FUN_180270120(longlong param_1,undefined8 param_2,longlong param_3)
void FUN_180270120(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)(param_3 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar8 + 4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar8 + 8);
  *(int **)(param_3 + 8) = (int *)(lVar8 + 0xc);
  uVar6 = (ulonglong)*(int *)(lVar8 + 0xc);
  *(longlong *)(param_3 + 8) = lVar8 + 0x10;
  uVar5 = *(longlong *)(param_1 + 0x10) - *plVar1 >> 5;
  if (uVar5 < uVar6) {
    FUN_18026ff90(plVar1,uVar6 - uVar5);
  }
  else {
    *(ulonglong *)(param_1 + 0x10) = uVar6 * 0x20 + *plVar1;
  }
  lVar8 = 0;
  if (3 < (longlong)uVar6) {
    lVar9 = (uVar6 - 4 >> 2) + 1;
    lVar8 = lVar9 * 4;
    lVar7 = 0;
    do {
      lVar3 = *plVar1;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar7 + lVar3) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar7 + 4 + lVar3) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar7 + 8 + lVar3) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar7 + 0xc + lVar3) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar7 + 8 + lVar3) = *(float *)(lVar7 + 8 + lVar3) * 29.0;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar7 + 0x10 + lVar3) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar7 + 0x14 + lVar3) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar7 + 0x18 + lVar3) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar7 + 0x1c + lVar3) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar7 + 0x18 + lVar3) = *(float *)(lVar7 + 0x18 + lVar3) * 29.0;
      lVar3 = *plVar1;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar3 + 0x20 + lVar7) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar3 + 0x24 + lVar7) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar3 + 0x28 + lVar7) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar3 + 0x2c + lVar7) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar3 + 0x28 + lVar7) = *(float *)(lVar3 + 0x28 + lVar7) * 29.0;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar3 + 0x30 + lVar7) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar3 + 0x34 + lVar7) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar3 + 0x38 + lVar7) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar3 + 0x3c + lVar7) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar3 + 0x38 + lVar7) = *(float *)(lVar3 + 0x38 + lVar7) * 29.0;
      lVar3 = *plVar1;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar3 + 0x40 + lVar7) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar3 + 0x44 + lVar7) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar3 + 0x48 + lVar7) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar3 + 0x4c + lVar7) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar3 + 0x48 + lVar7) = *(float *)(lVar3 + 0x48 + lVar7) * 29.0;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar3 + 0x50 + lVar7) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar3 + 0x54 + lVar7) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar3 + 0x58 + lVar7) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar3 + 0x5c + lVar7) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar3 + 0x58 + lVar7) = *(float *)(lVar3 + 0x58 + lVar7) * 29.0;
      lVar3 = *plVar1;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar7 + 0x60 + lVar3) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar7 + 100 + lVar3) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar7 + 0x68 + lVar3) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar7 + 0x6c + lVar3) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar7 + 0x68 + lVar3) = *(float *)(lVar7 + 0x68 + lVar3) * 29.0;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar7 + 0x70 + lVar3) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar7 + 0x74 + lVar3) = **(undefined4 **)(param_3 + 8);
      lVar4 = *(longlong *)(param_3 + 8);
      *(undefined4 *)(lVar7 + 0x78 + lVar3) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(lVar7 + 0x7c + lVar3) = *(undefined4 *)(lVar4 + 8);
      *(longlong *)(param_3 + 8) = lVar4 + 0xc;
      *(float *)(lVar7 + 0x78 + lVar3) = *(float *)(lVar7 + 0x78 + lVar3) * 29.0;
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + 0x80;
    } while (lVar9 != 0);
  }
  if (lVar8 < (longlong)uVar6) {
    lVar7 = uVar6 - lVar8;
    lVar8 = lVar8 << 5;
    do {
      lVar9 = *plVar1;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar8 + lVar9) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar8 + 4 + lVar9) = **(undefined4 **)(param_3 + 8);
      lVar3 = *(longlong *)(param_3 + 8);
      fVar2 = *(float *)(lVar3 + 4);
      *(float *)(lVar8 + 8 + lVar9) = fVar2;
      *(undefined4 *)(lVar8 + 0xc + lVar9) = *(undefined4 *)(lVar3 + 8);
      *(longlong *)(param_3 + 8) = lVar3 + 0xc;
      *(float *)(lVar8 + 8 + lVar9) = fVar2 * 29.0;
      fVar2 = **(float **)(param_3 + 8);
      *(float **)(param_3 + 8) = *(float **)(param_3 + 8) + 1;
      *(int *)(lVar8 + 0x10 + lVar9) = (int)(fVar2 * 29.0);
      *(undefined4 *)(lVar8 + 0x14 + lVar9) = **(undefined4 **)(param_3 + 8);
      lVar3 = *(longlong *)(param_3 + 8);
      fVar2 = *(float *)(lVar3 + 4);
      *(float *)(lVar8 + 0x18 + lVar9) = fVar2;
      *(undefined4 *)(lVar8 + 0x1c + lVar9) = *(undefined4 *)(lVar3 + 8);
      *(longlong *)(param_3 + 8) = lVar3 + 0xc;
      *(float *)(lVar8 + 0x18 + lVar9) = fVar2 * 29.0;
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x20;
    } while (lVar7 != 0);
  }
  return;
}





// 函数: void FUN_180270570(undefined8 *param_1)
void FUN_180270570(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



undefined8 * FUN_1802705c0(undefined8 *param_1)

{
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 3;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 3;
  *param_1 = 0x3f8000003f800000;
  param_1[1] = 0x3f8000003f800000;
  param_1[2] = 0x3f8000003f800000;
  param_1[3] = 0x3f8000003f800000;
  param_1[4] = 0x3f8000003f800000;
  param_1[5] = 0x3f8000003f800000;
  param_1[6] = 0x3f8000003f800000;
  param_1[7] = 0x3f8000003f800000;
  param_1[8] = 0x3f8000003f800000;
  param_1[9] = 0x3f8000003f800000;
  param_1[10] = 0x3f8000003f800000;
  param_1[0xb] = 0x3f8000003f800000;
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xd] = 0x3f8000003f800000;
  param_1[0xe] = 0x3f8000003f800000;
  param_1[0xf] = 0x3f8000003f800000;
  param_1[0x10] = 0x3f8000003f800000;
  param_1[0x11] = 0x3f8000003f800000;
  param_1[0x12] = 0x3f8000003f800000;
  param_1[0x13] = 0x3f8000003f800000;
  param_1[0x14] = 0x3f8000003f800000;
  param_1[0x15] = 0x3f8000003f800000;
  param_1[0x16] = 0x3f8000003f800000;
  param_1[0x17] = 0x3f8000003f800000;
  param_1[0x18] = 0x3f8000003f800000;
  param_1[0x19] = 0x3f8000003f800000;
  param_1[0x1a] = 0x3f8000003f800000;
  param_1[0x1b] = 0x3f8000003f800000;
  param_1[0x1c] = 0x3f8000003f800000;
  param_1[0x1d] = 0x3f8000003f800000;
  param_1[0x1e] = 0x3f8000003f800000;
  param_1[0x1f] = 0x3f8000003f800000;
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x22] = 0x3f8000003f800000;
  param_1[0x23] = 0x3f8000003f800000;
  param_1[0x24] = 0x3f8000003f800000;
  param_1[0x25] = 0x3f8000003f800000;
  param_1[0x26] = 0x3f8000003f800000;
  param_1[0x27] = 0x3f8000003f800000;
  param_1[0x28] = 0x3f8000003f800000;
  param_1[0x29] = 0x3f8000003f800000;
  param_1[0x2a] = 0x3f8000003f800000;
  param_1[0x2b] = 0x3f8000003f800000;
  param_1[0x2c] = 0x3f8000003f800000;
  param_1[0x2d] = 0x3f8000003f800000;
  param_1[0x2e] = 0x3f8000003f800000;
  param_1[0x2f] = 0x3f8000003f800000;
  param_1[0x30] = 0x3f8000003f800000;
  param_1[0x31] = 0x3f8000003f800000;
  param_1[0x32] = 0x3f8000003f800000;
  param_1[0x33] = 0x3f8000003f800000;
  param_1[0x34] = 0x3f8000003f800000;
  param_1[0x35] = 0x3f8000003f800000;
  param_1[0x36] = 0x3f8000003f800000;
  param_1[0x37] = 0x3f8000003f800000;
  param_1[0x38] = 0x3f8000003f800000;
  param_1[0x39] = 0x3f8000003f800000;
  param_1[0x3a] = 0x3f8000003f800000;
  param_1[0x3b] = 0x3f8000003f800000;
  param_1[0x3c] = 0x3f8000003f800000;
  param_1[0x3d] = 0x3f8000003f800000;
  param_1[0x3e] = 0x3f8000003f800000;
  param_1[0x3f] = 0x3f8000003f800000;
  param_1[0x40] = 0x3f8000003f800000;
  param_1[0x41] = 0x3f8000003f800000;
  param_1[0x42] = 0x3f8000003f800000;
  param_1[0x43] = 0x3f8000003f800000;
  param_1[0x44] = 0x3f8000003f800000;
  param_1[0x45] = 0x3f8000003f800000;
  param_1[0x46] = 0x3f8000003f800000;
  param_1[0x47] = 0x3f8000003f800000;
  param_1[0x48] = 0x3f8000003f800000;
  param_1[0x49] = 0x3f8000003f800000;
  param_1[0x4a] = 0x3f8000003f800000;
  param_1[0x4b] = 0x3f8000003f800000;
  param_1[0x4c] = 0x3f8000003f800000;
  param_1[0x4d] = 0x3f8000003f800000;
  param_1[0x4e] = 0x3f8000003f800000;
  param_1[0x4f] = 0x3f8000003f800000;
  param_1[0x50] = 0x3f8000003f800000;
  param_1[0x51] = 0x3f8000003f800000;
  param_1[0x52] = 0x3f8000003f800000;
  param_1[0x53] = 0x3f8000003f800000;
  param_1[0x54] = 0x3f8000003f800000;
  param_1[0x55] = 0x3f8000003f800000;
  param_1[0x56] = 0x3f8000003f800000;
  param_1[0x57] = 0x3f8000003f800000;
  param_1[0x58] = 0x3f8000003f800000;
  param_1[0x59] = 0x3f8000003f800000;
  param_1[0x5a] = 0x3f8000003f800000;
  param_1[0x5b] = 0x3f8000003f800000;
  param_1[0x5c] = 0x3f8000003f800000;
  param_1[0x5d] = 0x3f8000003f800000;
  param_1[0x5e] = 0x3f8000003f800000;
  param_1[0x5f] = 0x3f8000003f800000;
  param_1[0x60] = 0x3f8000003f800000;
  param_1[0x61] = 0x3f8000003f800000;
  param_1[0x62] = 0x3f8000003f800000;
  param_1[99] = 0x3f8000003f800000;
  return param_1;
}



undefined8 *
FUN_180270770(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



undefined8 *
FUN_180270830(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_1802708b0(ulonglong *param_1)
void FUN_1802708b0(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180270920(undefined8 *param_1)
void FUN_180270920(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180270970(undefined8 *param_1)
void FUN_180270970(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



ulonglong FUN_1802709c0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  
  pfVar1 = *(float **)(param_1 + 0x328);
  pfVar3 = *(float **)(param_1 + 800);
  pfVar2 = (float *)-((longlong)pfVar1 - (longlong)pfVar3 >> 0x3f);
  if (((longlong)pfVar1 - (longlong)pfVar3) / 0x14 ==
      (*(longlong *)(param_2 + 0x328) - *(longlong *)(param_2 + 800)) / 0x14) {
    if (pfVar3 != pfVar1) {
      pfVar2 = (float *)(*(longlong *)(param_2 + 800) + 8);
      do {
        if ((((pfVar2[-2] != *pfVar3) || (pfVar2[-1] != pfVar3[1])) || (*pfVar2 != pfVar3[2])) ||
           (pfVar2[1] != pfVar3[3])) goto LAB_180270af4;
        pfVar3 = pfVar3 + 5;
        pfVar2 = pfVar2 + 5;
      } while (pfVar3 != pfVar1);
    }
    pfVar1 = *(float **)(param_1 + 0x348);
    pfVar3 = *(float **)(param_1 + 0x340);
    pfVar2 = (float *)((longlong)pfVar1 - (longlong)pfVar3);
    if (((*(longlong *)(param_2 + 0x348) - *(longlong *)(param_2 + 0x340) ^ (ulonglong)pfVar2) &
        0xfffffffffffffff8) == 0) {
      if (pfVar3 != pfVar1) {
        lVar4 = *(longlong *)(param_2 + 0x340) - (longlong)pfVar3;
        do {
          if ((*(float *)(lVar4 + (longlong)pfVar3) != *pfVar3) ||
             (*(float *)(lVar4 + 4 + (longlong)pfVar3) != pfVar3[1])) goto LAB_180270af4;
          pfVar3 = pfVar3 + 2;
        } while (pfVar3 != pfVar1);
      }
      return CONCAT71((int7)((ulonglong)pfVar2 >> 8),1);
    }
  }
LAB_180270af4:
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



undefined1 FUN_180270b10(float *param_1,float *param_2)

{
  char cVar1;
  
  if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
    cVar1 = func_0x000180417730(param_2 + 2,param_1 + 2);
    if (cVar1 != '\0') {
      cVar1 = func_0x000180417730(param_2 + 0xe,param_1 + 0xe);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





