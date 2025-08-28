#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part128.c - 19 个函数

// 函数: void FUN_18012d840(void)
void FUN_18012d840(void)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  
  lVar4 = _DAT_180c8a9b0;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8) + 0x70);
  *piVar1 = *piVar1 + -1;
  FUN_180291a50();
  iVar3 = *(int *)(lVar4 + 0x1ba0);
  iVar6 = iVar3 + -1;
  *(int *)(lVar4 + 0x1ba0) = iVar6;
  lVar5 = _DAT_180c8a9b0;
  if (iVar6 == 0) {
    pfVar7 = *(float **)(_DAT_180c8a9b0 + 0xb0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)**(undefined8 **)(*(longlong *)(_DAT_180c8a9b0 + 0xa0) + 0x48);
    }
  }
  else {
    pfVar7 = *(float **)(*(longlong *)(lVar4 + 0x1ba8) + -0x10 + (longlong)iVar3 * 8);
  }
  pfVar2 = (float *)(_DAT_180c8a9b0 + 0xa8);
  lVar4 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  *(float **)(_DAT_180c8a9b0 + 0x19f0) = pfVar7;
  fVar8 = *pfVar2 * *pfVar7 * pfVar7[1];
  *(float *)(lVar5 + 0x19fc) = fVar8;
  if (lVar4 == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = fVar8 * *(float *)(lVar4 + 0x2d8) * *(float *)(lVar4 + 0x2dc);
  }
  *(float *)(lVar5 + 0x19f8) = fVar8;
  *(undefined8 *)(lVar5 + 0x1a00) = *(undefined8 *)(*(longlong *)(pfVar7 + 0x16) + 0x38);
  *(float *)(lVar5 + 0x1a10) = fVar8;
  *(float **)(lVar5 + 0x1a08) = pfVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d910(int param_1,undefined8 *param_2)
void FUN_18012d910(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  lVar4 = _DAT_180c8a9b0;
  puVar1 = (undefined4 *)(_DAT_180c8a9b0 + 0x16c8 + (longlong)param_1 * 0x10);
  uStack_24 = *puVar1;
  uStack_20 = puVar1[1];
  uStack_1c = puVar1[2];
  uStack_18 = puVar1[3];
  iStack_28 = param_1;
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&iStack_28);
  uVar3 = param_2[1];
  puVar2 = (undefined8 *)(lVar4 + 0x16c8 + (longlong)param_1 * 0x10);
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d9c0(int param_1,undefined4 param_2)
void FUN_18012d9c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar2 = _DAT_180c8a9b0;
  lVar3 = (longlong)param_1;
  if ((*(int *)(&UNK_18098d180 + lVar3 * 0xc) == 4) && (*(int *)(&UNK_18098d184 + lVar3 * 0xc) == 1)
     ) {
    uVar1 = *(uint *)(&UNK_18098d188 + lVar3 * 0xc);
    uStack_24 = *(undefined4 *)((ulonglong)uVar1 + 0x1628 + _DAT_180c8a9b0);
    iStack_28 = param_1;
    FUN_18013e000(_DAT_180c8a9b0 + 0x1b90,&iStack_28);
    *(undefined4 *)((ulonglong)uVar1 + 0x1628 + lVar2) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d9e7(undefined4 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18012d9e7(undefined4 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined4 unaff_XMM6_Da;
  
  lVar2 = _DAT_180c8a9b0;
  uVar1 = *(uint *)(in_RAX + 8 + param_2 * 4);
  FUN_18013e000(_DAT_180c8a9b0 + 0x1b90,&stack0x00000020,param_3,param_4,param_1);
  *(undefined4 *)((ulonglong)uVar1 + 0x1628 + lVar2) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_18012da33(void)
void FUN_18012da33(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012da40(int param_1,undefined8 *param_2)
void FUN_18012da40(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  lVar1 = _DAT_180c8a9b0;
  lVar2 = (longlong)param_1;
  if ((*(int *)(&UNK_18098d180 + lVar2 * 0xc) == 4) && (*(int *)(&UNK_18098d184 + lVar2 * 0xc) == 2)
     ) {
    uVar3 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar2 * 0xc);
    uStack_14 = *(undefined4 *)(uVar3 + 0x1628 + _DAT_180c8a9b0);
    uStack_10 = *(undefined4 *)(uVar3 + 0x162c + _DAT_180c8a9b0);
    iStack_18 = param_1;
    FUN_18013e000(_DAT_180c8a9b0 + 0x1b90,&iStack_18);
    *(undefined8 *)(uVar3 + 0x1628 + lVar1) = *param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012da66(undefined4 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)
void FUN_18012da66(undefined4 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong in_RAX;
  ulonglong uVar2;
  undefined8 *unaff_RSI;
  undefined4 uStack0000000000000028;
  
  lVar1 = _DAT_180c8a9b0;
  uVar2 = (ulonglong)*(uint *)(in_RAX + 8 + param_3 * 4);
  uStack0000000000000028 = *(undefined4 *)(uVar2 + 0x162c + _DAT_180c8a9b0);
  FUN_18013e000(_DAT_180c8a9b0 + 0x1b90,&stack0x00000020,param_3,param_4,param_1);
  *(undefined8 *)(uVar2 + 0x1628 + lVar1) = *unaff_RSI;
  return;
}





// 函数: void FUN_18012dac6(void)
void FUN_18012dac6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012dad0(int param_1)
void FUN_18012dad0(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = _DAT_180c8a9b0;
  if (3 < param_1) {
    uVar4 = (param_1 - 4U >> 2) + 1;
    uVar7 = (ulonglong)uVar4;
    param_1 = param_1 + uVar4 * -4;
    do {
      lVar5 = (longlong)*(int *)(lVar3 + 0x1b90);
      lVar2 = *(longlong *)(lVar3 + 0x1b98);
      lVar6 = (longlong)*(int *)(lVar2 + -0xc + lVar5 * 0xc);
      uVar8 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar6 * 0xc);
      if (*(int *)(&UNK_18098d180 + lVar6 * 0xc) == 4) {
        if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 1) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar2 + -8 + lVar5 * 0xc);
        }
        else if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 2) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar2 + -8 + lVar5 * 0xc);
          *(undefined4 *)(uVar8 + 0x162c + lVar3) = *(undefined4 *)(lVar2 + -4 + lVar5 * 0xc);
        }
      }
      iVar1 = *(int *)(lVar3 + 0x1b90);
      *(int *)(lVar3 + 0x1b90) = iVar1 + -1;
      lVar2 = (longlong)iVar1 + -2;
      lVar5 = *(longlong *)(lVar3 + 0x1b98);
      lVar6 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
      uVar8 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar6 * 0xc);
      if (*(int *)(&UNK_18098d180 + lVar6 * 0xc) == 4) {
        if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 1) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
        }
        else if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 2) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
          *(undefined4 *)(uVar8 + 0x162c + lVar3) = *(undefined4 *)(lVar5 + 8 + lVar2 * 0xc);
        }
      }
      iVar1 = *(int *)(lVar3 + 0x1b90);
      *(int *)(lVar3 + 0x1b90) = iVar1 + -1;
      lVar2 = (longlong)iVar1 + -2;
      lVar5 = *(longlong *)(lVar3 + 0x1b98);
      lVar6 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
      uVar8 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar6 * 0xc);
      if (*(int *)(&UNK_18098d180 + lVar6 * 0xc) == 4) {
        if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 1) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
        }
        else if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 2) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
          *(undefined4 *)(uVar8 + 0x162c + lVar3) = *(undefined4 *)(lVar5 + 8 + lVar2 * 0xc);
        }
      }
      iVar1 = *(int *)(lVar3 + 0x1b90);
      *(int *)(lVar3 + 0x1b90) = iVar1 + -1;
      lVar2 = (longlong)iVar1 + -2;
      lVar5 = *(longlong *)(lVar3 + 0x1b98);
      lVar6 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
      uVar8 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar6 * 0xc);
      if (*(int *)(&UNK_18098d180 + lVar6 * 0xc) == 4) {
        if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 1) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
        }
        else if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 2) {
          *(undefined4 *)(uVar8 + 0x1628 + lVar3) = *(undefined4 *)(lVar5 + 4 + lVar2 * 0xc);
          *(undefined4 *)(uVar8 + 0x162c + lVar3) = *(undefined4 *)(lVar5 + 8 + lVar2 * 0xc);
        }
      }
      *(int *)(lVar3 + 0x1b90) = *(int *)(lVar3 + 0x1b90) + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    lVar5 = (longlong)*(int *)(lVar3 + 0x1b90);
    lVar2 = *(longlong *)(lVar3 + 0x1b98);
    lVar6 = (longlong)*(int *)(lVar2 + -0xc + lVar5 * 0xc);
    uVar7 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar6 * 0xc);
    if (*(int *)(&UNK_18098d180 + lVar6 * 0xc) == 4) {
      if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 1) {
        *(undefined4 *)(uVar7 + 0x1628 + lVar3) = *(undefined4 *)(lVar2 + -8 + lVar5 * 0xc);
      }
      else if (*(int *)(&UNK_18098d184 + lVar6 * 0xc) == 2) {
        *(undefined4 *)(uVar7 + 0x1628 + lVar3) = *(undefined4 *)(lVar2 + -8 + lVar5 * 0xc);
        *(undefined4 *)(uVar7 + 0x162c + lVar3) = *(undefined4 *)(lVar2 + -4 + lVar5 * 0xc);
      }
    }
    *(int *)(lVar3 + 0x1b90) = *(int *)(lVar3 + 0x1b90) + -1;
  }
  return;
}





// 函数: void FUN_18012daef(int param_1,longlong param_2)
void FUN_18012daef(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint in_EAX;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  
  uVar3 = (in_EAX >> 2) + 1;
  uVar6 = (ulonglong)uVar3;
  param_1 = param_1 + uVar3 * -4;
  do {
    lVar4 = (longlong)*(int *)(param_2 + 0x1b90);
    lVar2 = *(longlong *)(param_2 + 0x1b98);
    lVar5 = (longlong)*(int *)(lVar2 + -0xc + lVar4 * 0xc);
    uVar7 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar5 * 0xc);
    if (*(int *)(unaff_RDI + lVar5 * 0xc) == 4) {
      iVar1 = *(int *)(unaff_RDI + 4 + lVar5 * 0xc);
      if (iVar1 == 1) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
        *(undefined4 *)(uVar7 + 0x162c + param_2) = *(undefined4 *)(lVar2 + -4 + lVar4 * 0xc);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1b90);
    *(int *)(param_2 + 0x1b90) = iVar1 + -1;
    lVar2 = (longlong)iVar1 + -2;
    lVar4 = *(longlong *)(param_2 + 0x1b98);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    uVar7 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar5 * 0xc);
    if (*(int *)(unaff_RDI + lVar5 * 0xc) == 4) {
      iVar1 = *(int *)(unaff_RDI + 4 + lVar5 * 0xc);
      if (iVar1 == 1) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar7 + 0x162c + param_2) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1b90);
    *(int *)(param_2 + 0x1b90) = iVar1 + -1;
    lVar2 = (longlong)iVar1 + -2;
    lVar4 = *(longlong *)(param_2 + 0x1b98);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    uVar7 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar5 * 0xc);
    if (*(int *)(unaff_RDI + lVar5 * 0xc) == 4) {
      iVar1 = *(int *)(unaff_RDI + 4 + lVar5 * 0xc);
      if (iVar1 == 1) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar7 + 0x162c + param_2) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1b90);
    *(int *)(param_2 + 0x1b90) = iVar1 + -1;
    lVar2 = (longlong)iVar1 + -2;
    lVar4 = *(longlong *)(param_2 + 0x1b98);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    uVar7 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar5 * 0xc);
    if (*(int *)(unaff_RDI + lVar5 * 0xc) == 4) {
      iVar1 = *(int *)(unaff_RDI + 4 + lVar5 * 0xc);
      if (iVar1 == 1) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(uVar7 + 0x1628 + param_2) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar7 + 0x162c + param_2) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    *(int *)(param_2 + 0x1b90) = *(int *)(param_2 + 0x1b90) + -1;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  for (; 0 < param_1; param_1 = param_1 + -1) {
    lVar4 = (longlong)*(int *)(param_2 + 0x1b90);
    lVar2 = *(longlong *)(param_2 + 0x1b98);
    lVar5 = (longlong)*(int *)(lVar2 + -0xc + lVar4 * 0xc);
    uVar6 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar5 * 0xc);
    if (*(int *)(unaff_RDI + lVar5 * 0xc) == 4) {
      iVar1 = *(int *)(unaff_RDI + 4 + lVar5 * 0xc);
      if (iVar1 == 1) {
        *(undefined4 *)(uVar6 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(uVar6 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
        *(undefined4 *)(uVar6 + 0x162c + param_2) = *(undefined4 *)(lVar2 + -4 + lVar4 * 0xc);
      }
    }
    *(int *)(param_2 + 0x1b90) = *(int *)(param_2 + 0x1b90) + -1;
  }
  return;
}





// 函数: void FUN_18012dcb6(undefined8 param_1,longlong param_2)
void FUN_18012dcb6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  int in_R10D;
  
  if (0 < in_R10D) {
    do {
      lVar3 = (longlong)*(int *)(param_2 + 0x1b90);
      lVar2 = *(longlong *)(param_2 + 0x1b98);
      lVar4 = (longlong)*(int *)(lVar2 + -0xc + lVar3 * 0xc);
      uVar5 = (ulonglong)*(uint *)(unaff_RDI + 8 + lVar4 * 0xc);
      if (*(int *)(unaff_RDI + lVar4 * 0xc) == 4) {
        iVar1 = *(int *)(unaff_RDI + 4 + lVar4 * 0xc);
        if (iVar1 == 1) {
          *(undefined4 *)(uVar5 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar3 * 0xc);
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(uVar5 + 0x1628 + param_2) = *(undefined4 *)(lVar2 + -8 + lVar3 * 0xc);
          *(undefined4 *)(uVar5 + 0x162c + param_2) = *(undefined4 *)(lVar2 + -4 + lVar3 * 0xc);
        }
      }
      *(int *)(param_2 + 0x1b90) = *(int *)(param_2 + 0x1b90) + -1;
      in_R10D = in_R10D + -1;
    } while (0 < in_R10D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18012dd30(void)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(_DAT_180c8a9b0 + 0x1b00);
  if (lVar3 == *(longlong *)(_DAT_180c8a9b0 + 0x1af8)) {
    lVar2 = _DAT_180c8a9b0;
    in_RAX = func_0x000180124000(*(undefined8 *)(_DAT_180c8a9b0 + 0x1b08),8);
    if ((char)in_RAX != '\0') {
      uVar1 = *(uint *)(lVar2 + 0x1b2c);
      in_RAX = (ulonglong)uVar1;
      if (((uVar1 == 0) || (*(char *)(lVar2 + 0x1b3d) != '\0')) ||
         (uVar1 == *(uint *)(lVar3 + 0x84))) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e060(void)
void FUN_18012e060(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = _DAT_180c8a9b0;
  lVar12 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  if ((((*(char *)(lVar12 + 0xb5) != '\0') &&
       (lVar9 = *(longlong *)(_DAT_180c8a9b0 + 0x1c98), lVar9 == *(longlong *)(lVar12 + 0x3b8))) &&
      ((*(char *)(_DAT_180c8a9b0 + 0x1d09) != '\0' || (*(int *)(_DAT_180c8a9b0 + 0x1d0c) != 0)))) &&
     (*(int *)(_DAT_180c8a9b0 + 0x1cfc) == *(int *)(lVar9 + 0x16c))) {
    cVar10 = *(char *)(_DAT_180c8a9b0 + 0x1d21);
    *(undefined1 *)(_DAT_180c8a9b0 + 0x1d09) = 0;
    *(undefined4 *)(lVar11 + 0x1d0c) = *(undefined4 *)(lVar9 + 0x144);
    fVar1 = *(float *)(lVar9 + 0x14c);
    fVar2 = *(float *)(lVar9 + 0x40);
    fVar3 = *(float *)(lVar9 + 0x150);
    fVar4 = *(float *)(lVar9 + 0x44);
    fVar5 = *(float *)(lVar9 + 0x154);
    fVar6 = *(float *)(lVar9 + 0x40);
    fVar7 = *(float *)(lVar9 + 0x158);
    fVar8 = *(float *)(lVar9 + 0x44);
    *(bool *)(lVar11 + 0x1d08) = cVar10 != '\0';
    *(float *)(lVar11 + 0x1d10) = fVar1 - fVar2;
    *(float *)(lVar11 + 0x1d14) = fVar3 - fVar4;
    *(float *)(lVar11 + 0x1d18) = fVar5 - fVar6;
    *(float *)(lVar11 + 0x1d1c) = fVar7 - fVar8;
    cVar10 = func_0x000180128350();
    if (cVar10 == '\0') {
      *(undefined1 *)(lVar12 + 0xb1) = 1;
      lVar12 = *(longlong *)(lVar11 + 0x1af8);
      fVar1 = *(float *)(lVar12 + 0x130);
      fVar2 = *(float *)(lVar12 + 0x10c);
      fVar3 = *(float *)(lVar12 + 0x44);
      *(undefined1 *)(lVar12 + 0xb1) = 1;
      lVar12 = *(longlong *)(lVar11 + 0x1af8);
      *(undefined4 *)(lVar12 + 0xa0) = 0x3f000000;
      *(float *)(lVar12 + 0x98) =
           (float)(int)((fVar2 - fVar3) + fVar1 * 0.5 + *(float *)(lVar12 + 0x90));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e1b0(undefined8 param_1)
void FUN_18012e1b0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  piVar5 = (int *)(lVar1 + 0x218);
  iVar7 = *piVar5;
  lVar6 = *(longlong *)(lVar1 + 0x220);
  uVar2 = FUN_180121250(param_1,0,*(undefined4 *)(lVar6 + -4 + (longlong)iVar7 * 4));
  iVar3 = *(int *)(lVar1 + 0x21c);
  if (iVar7 == iVar3) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar4 = iVar7 + 1;
    if (iVar7 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18011dbd0(piVar5,iVar4);
    iVar7 = *piVar5;
    lVar6 = *(longlong *)(lVar1 + 0x220);
  }
  *(undefined4 *)(lVar6 + (longlong)iVar7 * 4) = uVar2;
  *piVar5 = *piVar5 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e250(undefined8 param_1)
void FUN_18012e250(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  piVar1 = (int *)(lVar2 + 0x218);
  uVar3 = func_0x000180123d70(lVar2,param_1);
  iVar6 = *piVar1;
  iVar4 = *(int *)(lVar2 + 0x21c);
  if (iVar6 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar5 = iVar6 + 1;
    if (iVar6 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18011dbd0(piVar1,iVar5);
    iVar6 = *piVar1;
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x220) + (longlong)iVar6 * 4) = uVar3;
  *piVar1 = *piVar1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e2d0(int param_1)
void FUN_18012e2d0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  piVar1 = (int *)(lVar2 + 0x218);
  uVar3 = func_0x000180123d70(lVar2,(longlong)param_1);
  iVar6 = *piVar1;
  iVar4 = *(int *)(lVar2 + 0x21c);
  if (iVar6 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar5 = iVar6 + 1;
    if (iVar6 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18011dbd0(piVar1,iVar5);
    iVar6 = *piVar1;
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x220) + (longlong)iVar6 * 4) = uVar3;
  *piVar1 = *piVar1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e350(undefined8 param_1)
void FUN_18012e350(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = _DAT_180c8a9b0;
  iVar2 = FUN_180121250(param_1,0,
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x220) + -4 +
                         (longlong)*(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218) * 4));
  if (*(int *)(lVar1 + 0x1b2c) == iVar2) {
    *(int *)(lVar1 + 0x1b34) = iVar2;
  }
  if (*(int *)(lVar1 + 0x1b30) == iVar2) {
    *(undefined1 *)(lVar1 + 0x1b3f) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e3b0(void)
void FUN_18012e3b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar3 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1af8);
  FUN_18013db40(lVar1 + 0x1e8,*(int *)(lVar1 + 0x1e8) + 1);
  lVar4 = (longlong)*(int *)(lVar1 + 0x1e8);
  lVar2 = *(longlong *)(lVar1 + 0x1f0);
  *(undefined8 *)(lVar2 + -0x30 + lVar4 * 0x30) = *(undefined8 *)(lVar1 + 0x100);
  *(undefined8 *)(lVar2 + -0x28 + lVar4 * 0x30) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined4 *)(lVar2 + -0x20 + lVar4 * 0x30) = *(undefined4 *)(lVar1 + 0x204);
  *(undefined4 *)(lVar2 + -0x1c + lVar4 * 0x30) = *(undefined4 *)(lVar1 + 0x208);
  *(undefined8 *)(lVar2 + -0x18 + lVar4 * 0x30) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined4 *)(lVar2 + -0x10 + lVar4 * 0x30) = *(undefined4 *)(lVar1 + 0x128);
  *(undefined4 *)(lVar2 + -0xc + lVar4 * 0x30) = *(undefined4 *)(lVar1 + 0x138);
  *(undefined4 *)(lVar2 + -8 + lVar4 * 0x30) = *(undefined4 *)(lVar3 + 0x1b34);
  *(undefined1 *)(lVar2 + -4 + lVar4 * 0x30) = *(undefined1 *)(lVar3 + 0x1b3f);
  *(undefined1 *)(lVar2 + -3 + lVar4 * 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  fVar5 = (*(float *)(lVar1 + 0x100) - *(float *)(lVar1 + 0x40)) - *(float *)(lVar1 + 0x20c);
  *(float *)(lVar1 + 0x208) = fVar5;
  *(float *)(lVar1 + 0x204) = fVar5;
  *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(lVar1 + 0x100);
  *(float *)(lVar1 + 0x138) = *(float *)(lVar1 + 0x104) - 9999.0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e4e0(void)
void FUN_18012e4e0(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStackX_8;
  float fStackX_c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar10 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar9 = *(longlong *)(lVar10 + 0x1af8);
  lVar3 = *(longlong *)(lVar9 + 0x1f0);
  lVar8 = (longlong)*(int *)(lVar9 + 0x1e8);
  fVar12 = (float)*(undefined8 *)(lVar9 + 0x118);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x118) >> 0x20);
  fVar1 = *(float *)(lVar3 + -0x2c + lVar8 * 0x30);
  fVar2 = *(float *)(lVar3 + -0x30 + lVar8 * 0x30);
  fVar14 = fVar1;
  if (fVar1 <= fVar13) {
    fVar14 = fVar13;
  }
  fVar13 = fVar2;
  if (fVar2 <= fVar12) {
    fVar13 = fVar12;
  }
  *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar3 + -0x30 + lVar8 * 0x30);
  fVar12 = *(float *)(lVar3 + -0x28 + lVar8 * 0x30);
  fVar11 = *(float *)(lVar3 + -0x24 + lVar8 * 0x30);
  if (fVar11 <= *(float *)(lVar9 + 0x11c)) {
    fVar11 = *(float *)(lVar9 + 0x11c);
  }
  if (fVar12 <= *(float *)(lVar9 + 0x118)) {
    fVar12 = *(float *)(lVar9 + 0x118);
  }
  *(float *)(lVar9 + 0x11c) = fVar11;
  *(float *)(lVar9 + 0x118) = fVar12;
  *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar3 + -0x20 + lVar8 * 0x30);
  *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar3 + -0x1c + lVar8 * 0x30);
  *(undefined8 *)(lVar9 + 0x120) = *(undefined8 *)(lVar3 + -0x18 + lVar8 * 0x30);
  *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(lVar3 + -0x10 + lVar8 * 0x30);
  *(float *)(lVar9 + 0x138) = *(float *)(lVar9 + 0x104) - 9999.0;
  if (*(char *)(lVar3 + -3 + lVar8 * 0x30) != '\0') {
    fVar12 = *(float *)(lVar3 + -0x10 + lVar8 * 0x30);
    fVar11 = *(float *)(lVar9 + 0x134);
    if (*(float *)(lVar9 + 0x134) <= fVar12) {
      fVar11 = fVar12;
    }
    fStackX_8 = fVar13 - fVar2;
    *(float *)(lVar9 + 0x128) = fVar11;
    fStackX_c = fVar14 - fVar1;
    fVar12 = fVar13;
    fStack_58 = fVar2;
    fStack_54 = fVar1;
    fStack_50 = fVar13;
    fStack_4c = fVar14;
    func_0x000180124080(&fStackX_8,*(undefined4 *)(lVar3 + -0x10 + lVar8 * 0x30));
    lVar4 = *(longlong *)(lVar10 + 0x1af8);
    *(undefined8 *)(lVar4 + 0x144) = 0;
    *(float *)(lVar4 + 0x14c) = fVar2;
    *(float *)(lVar4 + 0x150) = fVar1;
    *(float *)(lVar4 + 0x154) = fVar13;
    *(float *)(lVar4 + 0x158) = fVar14;
    lVar5 = *(longlong *)(lVar10 + 0x1af8);
    if ((((((*(float *)(lVar5 + 0x22c) <= fVar14 && fVar14 != *(float *)(lVar5 + 0x22c)) &&
           (fVar1 < *(float *)(lVar5 + 0x234))) &&
          (*(float *)(lVar5 + 0x228) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x228))) &&
         (fVar2 < *(float *)(lVar5 + 0x230))) || (*(char *)(lVar10 + 0x2e38) != '\0')) &&
       (cVar6 = FUN_180128040(&fStack_58,&fStack_50,1), cVar6 != '\0')) {
      *(uint *)(lVar4 + 0x148) = *(uint *)(lVar4 + 0x148) | 1;
    }
  }
  iVar7 = *(int *)(lVar10 + 0x1b2c);
  if (((*(int *)(lVar3 + -8 + lVar8 * 0x30) == iVar7) || (*(int *)(lVar10 + 0x1b34) != iVar7)) ||
     (iVar7 == 0)) {
    if ((*(char *)(lVar3 + -4 + lVar8 * 0x30) != '\0') || (*(char *)(lVar10 + 0x1b3f) == '\0'))
    goto LAB_18012e732;
    iVar7 = *(int *)(lVar10 + 0x1b30);
  }
  *(int *)(lVar9 + 0x144) = iVar7;
LAB_18012e732:
  *(float *)(lVar9 + 0x14c) = fVar2;
  *(float *)(lVar9 + 0x150) = fVar1;
  *(float *)(lVar9 + 0x154) = fVar13;
  *(float *)(lVar9 + 0x158) = fVar14;
  *(int *)(lVar9 + 0x1e8) = *(int *)(lVar9 + 0x1e8) + -1;
  return;
}





// 函数: void FUN_18012e4f6(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)
void FUN_18012e4f6(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong in_R11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  
  *(undefined1 *)(*(longlong *)(in_R11 + 0x1af8) + 0xb1) = 1;
  lVar9 = *(longlong *)(in_R11 + 0x1af8);
  lVar3 = *(longlong *)(lVar9 + 0x1f0);
  lVar8 = (longlong)*(int *)(lVar9 + 0x1e8);
  fVar11 = (float)*(undefined8 *)(lVar9 + 0x118);
  fVar12 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x118) >> 0x20);
  fVar1 = *(float *)(lVar3 + -0x2c + lVar8 * 0x30);
  fVar2 = *(float *)(lVar3 + -0x30 + lVar8 * 0x30);
  fVar13 = fVar1;
  if (fVar1 <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = fVar2;
  if (fVar2 <= fVar11) {
    fVar12 = fVar11;
  }
  *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar3 + -0x30 + lVar8 * 0x30);
  fVar11 = *(float *)(lVar3 + -0x28 + lVar8 * 0x30);
  fVar10 = *(float *)(lVar3 + -0x24 + lVar8 * 0x30);
  if (fVar10 <= *(float *)(lVar9 + 0x11c)) {
    fVar10 = *(float *)(lVar9 + 0x11c);
  }
  if (fVar11 <= *(float *)(lVar9 + 0x118)) {
    fVar11 = *(float *)(lVar9 + 0x118);
  }
  *(float *)(lVar9 + 0x11c) = fVar10;
  *(float *)(lVar9 + 0x118) = fVar11;
  *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar3 + -0x20 + lVar8 * 0x30);
  *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar3 + -0x1c + lVar8 * 0x30);
  *(undefined8 *)(lVar9 + 0x120) = *(undefined8 *)(lVar3 + -0x18 + lVar8 * 0x30);
  *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(lVar3 + -0x10 + lVar8 * 0x30);
  *(float *)(lVar9 + 0x138) = *(float *)(lVar9 + 0x104) - 9999.0;
  if (*(char *)(lVar3 + -3 + lVar8 * 0x30) != '\0') {
    fVar11 = *(float *)(lVar3 + -0x10 + lVar8 * 0x30);
    fVar10 = *(float *)(lVar9 + 0x134);
    if (*(float *)(lVar9 + 0x134) <= fVar11) {
      fVar10 = fVar11;
    }
    fStack0000000000000080 = fVar12 - fVar2;
    *(float *)(lVar9 + 0x128) = fVar10;
    fStack0000000000000084 = fVar13 - fVar1;
    fVar11 = fVar12;
    fStack0000000000000028 = fVar12;
    fStack000000000000002c = fVar13;
    func_0x000180124080(&stack0x00000080,*(undefined4 *)(lVar3 + -0x10 + lVar8 * 0x30),param_3,
                        param_4,fVar2);
    lVar4 = *(longlong *)(in_R11 + 0x1af8);
    *(undefined8 *)(lVar4 + 0x144) = 0;
    *(float *)(lVar4 + 0x14c) = fVar2;
    *(float *)(lVar4 + 0x150) = fVar1;
    *(float *)(lVar4 + 0x154) = fVar12;
    *(float *)(lVar4 + 0x158) = fVar13;
    lVar5 = *(longlong *)(in_R11 + 0x1af8);
    if ((((((*(float *)(lVar5 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar5 + 0x22c)) &&
           (fVar1 < *(float *)(lVar5 + 0x234))) &&
          (*(float *)(lVar5 + 0x228) <= fVar11 && fVar11 != *(float *)(lVar5 + 0x228))) &&
         (fVar2 < *(float *)(lVar5 + 0x230))) || (*(char *)(in_R11 + 0x2e38) != '\0')) &&
       (cVar6 = FUN_180128040(&stack0x00000020,&stack0x00000028,1), cVar6 != '\0')) {
      *(uint *)(lVar4 + 0x148) = *(uint *)(lVar4 + 0x148) | 1;
    }
  }
  iVar7 = *(int *)(in_R11 + 0x1b2c);
  if (((*(int *)(lVar3 + -8 + lVar8 * 0x30) == iVar7) || (*(int *)(in_R11 + 0x1b34) != iVar7)) ||
     (iVar7 == 0)) {
    if ((*(char *)(lVar3 + -4 + lVar8 * 0x30) != '\0') || (*(char *)(in_R11 + 0x1b3f) == '\0'))
    goto LAB_18012e732;
    iVar7 = *(int *)(in_R11 + 0x1b30);
  }
  *(int *)(lVar9 + 0x144) = iVar7;
LAB_18012e732:
  *(float *)(lVar9 + 0x14c) = fVar2;
  *(float *)(lVar9 + 0x150) = fVar1;
  *(float *)(lVar9 + 0x154) = fVar12;
  *(float *)(lVar9 + 0x158) = fVar13;
  *(int *)(lVar9 + 0x1e8) = *(int *)(lVar9 + 0x1e8) + -1;
  return;
}





