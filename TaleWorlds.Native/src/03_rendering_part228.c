#include "TaleWorlds.Native.Split.h"

// 03_rendering_part228.c - 19 个函数

// 函数: void FUN_180396b81(void)
void FUN_180396b81(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  if (unaff_RSI == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,unaff_RSI << 5,(char)unaff_RBX[3]);
  }
  if (unaff_R14 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  lVar1 = unaff_RSI * 0x20 + lVar1;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  *(undefined1 *)(unaff_R15 + 0x1024) = 0;
  return;
}





// 函数: void FUN_180396be4(longlong param_1)
void FUN_180396be4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  longlong unaff_R14;
  longlong unaff_R15;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 5;
  if (uVar3 < unaff_RSI) {
    lVar1 = unaff_R14 + uVar3 * 0x20;
    if (unaff_R14 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RDI - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_R14 != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  *(undefined1 *)(unaff_R15 + 0x1024) = 0;
  return;
}





// 函数: void FUN_180396c90(longlong param_1)
void FUN_180396c90(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(longlong *)(uVar3 + param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180396d20(longlong *param_1,ulonglong param_2)
void FUN_180396d20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 5) < param_2) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 << 5,(char)param_1[3]);
      lVar2 = *param_1;
    }
    if (lVar2 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar2,param_1[1] - lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x20 + lVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180396d43(longlong param_1,longlong param_2)
void FUN_180396d43(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 << 5,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  if (param_1 == unaff_RBX[1]) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = unaff_RDI * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_1,unaff_RBX[1] - param_1);
}





// 函数: void FUN_180396dc0(void)
void FUN_180396dc0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180396dd0(ulonglong *param_1,undefined8 *param_2)
void FUN_180396dd0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar8 + 4);
    uVar4 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar4;
    uVar4 = param_2[3];
    puVar8[2] = param_2[2];
    puVar8[3] = uVar4;
    return;
  }
  puVar6 = (undefined8 *)*param_1;
  lVar7 = (longlong)puVar8 - (longlong)puVar6 >> 5;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_180396e63;
    }
  }
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar7 << 5,(char)param_1[3]);
  puVar6 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
LAB_180396e63:
  if (puVar6 != puVar8) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar6,(longlong)puVar8 - (longlong)puVar6);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *puVar5 = *(undefined4 *)param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar5[4] = *(undefined4 *)(param_2 + 2);
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar5;
  param_1[2] = (ulonglong)(puVar5 + lVar7 * 8);
  param_1[1] = (ulonglong)(puVar5 + 8);
  return;
}





// 函数: void FUN_180396ed0(longlong *param_1)
void FUN_180396ed0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 8;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180396f80(ulonglong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * 0x28,0x10);
  iVar3 = 0;
  puVar2 = (undefined8 *)(lVar1 + 0x10);
  do {
    puVar2[-2] = 0;
    iVar3 = iVar3 + 1;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 5;
  } while ((ulonglong)(longlong)iVar3 < param_1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong * FUN_180396ff0(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return (ulonglong *)0x0;
  }
  puVar1 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,param_1 * 0x140 + 0x10,0x10);
  uVar2 = 0;
  *puVar1 = param_1 << 0x20 | 0x140;
  uVar4 = uVar2;
  do {
    FUN_18038ad70(puVar1 + 2 + uVar2 * 0x28);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar2 = (ulonglong)(int)uVar3;
  } while (uVar2 < param_1);
  return puVar1 + 2;
}



longlong FUN_180397080(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803970c0(longlong *param_1,ulonglong param_2)
void FUN_1803970c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar3 >> 5)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar3 + param_2 * 4);
    return;
  }
  puVar5 = (undefined8 *)*param_1;
  lVar1 = (longlong)puVar3 - (longlong)puVar5 >> 5;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar6 << 5);
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
  }
  if (puVar5 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar5,(longlong)puVar3 - (longlong)puVar5);
  }
  puVar3 = puVar2;
  uVar4 = param_2;
  if (param_2 != 0) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar4 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = (longlong)puVar2;
    param_1[2] = (longlong)(puVar2 + uVar6 * 4);
    param_1[1] = (longlong)(puVar2 + param_2 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803970f6(undefined8 param_1,longlong param_2)
void FUN_1803970f6(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = in_RAX >> 5;
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar1 + unaff_RDI)) {
    uVar4 = lVar1 + unaff_RDI;
  }
  if (uVar4 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar4 << 5);
    param_2 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RBX - param_2);
  }
  puVar3 = puVar2;
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 4;
    } while (lVar1 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (longlong)puVar2;
    unaff_RSI[2] = (longlong)(puVar2 + uVar4 * 4);
    unaff_RSI[1] = (longlong)(puVar2 + unaff_RDI * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1803971dc(void)
void FUN_1803971dc(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *unaff_RBX = 0;
      unaff_RBX[1] = 0;
      unaff_RBX[2] = 0;
      unaff_RBX[3] = 0;
      unaff_RBX = unaff_RBX + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined8 **)(unaff_RSI + 8);
  }
  *(undefined8 **)(unaff_RSI + 8) = unaff_RBX + unaff_RDI * 4;
  return;
}





// 函数: void FUN_180397230(longlong param_1,longlong param_2)
void FUN_180397230(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  float fStack_1c;
  
  uVar4 = *(undefined8 *)(param_2 + -0x18);
  uVar5 = *(undefined8 *)(param_2 + -0x10);
  uVar3 = *(undefined8 *)(param_2 + -8);
  lVar8 = (param_2 - param_1) / 0x18 + -1;
  if (0 < lVar8) {
    fStack_1c = (float)((ulonglong)uVar5 >> 0x20);
    do {
      lVar7 = lVar8 + -1 >> 1;
      if (*(float *)(param_1 + 0xc + lVar7 * 0x18) <= fStack_1c) break;
      puVar1 = (undefined8 *)(param_1 + lVar7 * 0x18);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + lVar8 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      *(undefined8 *)(param_1 + 0x10 + lVar8 * 0x18) =
           *(undefined8 *)(param_1 + 0x10 + lVar7 * 0x18);
      lVar8 = lVar7;
    } while (0 < lVar7);
  }
  puVar1 = (undefined8 *)(param_1 + lVar8 * 0x18);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + 0x10 + lVar8 * 0x18) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803972c0(longlong *param_1,undefined8 *param_2)
void FUN_1803972c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar1 = puVar4 + 1;
  if (puVar1 != (undefined8 *)param_1[8]) {
    param_1[6] = (longlong)puVar1;
    *puVar4 = *param_2;
    return;
  }
  lVar8 = *param_1;
  lVar9 = param_1[1];
  uVar5 = *param_2;
  if (lVar9 <= (param_1[9] - lVar8 >> 3) + 1) {
    lVar6 = param_1[5];
    lVar11 = param_1[9] - lVar6 >> 3;
    uVar12 = lVar6 - lVar8 >> 3;
    lVar3 = lVar11 * 8 + 8;
    if (uVar12 != 0) {
      uVar7 = uVar12 >> 1;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
                    // WARNING: Subroutine does not return
      memmove(lVar8 + (uVar12 - uVar7) * 8,lVar6,lVar3);
    }
    lVar8 = lVar9;
    if (lVar9 == 0) {
      lVar8 = 1;
    }
    lVar8 = lVar9 + 2 + lVar8;
    lVar9 = FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,(char)param_1[10]);
    plVar2 = (longlong *)(lVar9 + (param_1[5] - *param_1 >> 3) * 8);
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(plVar2,param_1[5],lVar3);
    }
    *param_1 = lVar9;
    param_1[1] = lVar8;
    param_1[5] = (longlong)plVar2;
    lVar8 = *plVar2;
    param_1[3] = lVar8;
    param_1[4] = lVar8 + 0x100;
    param_1[9] = (longlong)(plVar2 + lVar11);
    lVar8 = plVar2[lVar11];
    param_1[7] = lVar8;
    param_1[8] = lVar8 + 0x100;
  }
  uVar10 = FUN_18062b420(_DAT_180c8ed18,0x100,(char)param_1[10]);
  *(undefined8 *)(param_1[9] + 8) = uVar10;
  *(undefined8 *)param_1[6] = uVar5;
  lVar8 = param_1[9];
  param_1[9] = lVar8 + 8;
  lVar8 = *(longlong *)(lVar8 + 8);
  param_1[7] = lVar8;
  param_1[8] = lVar8 + 0x100;
  param_1[6] = lVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180397317(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_180397317(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *unaff_RBX;
  ulonglong uVar7;
  longlong in_R10;
  undefined8 unaff_R15;
  
  uVar7 = param_2 - param_4 >> 3;
  lVar2 = (param_1 >> 3) * 8 + 8;
  if (uVar7 != 0) {
    uVar3 = uVar7 >> 1;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
                    // WARNING: Subroutine does not return
    memmove(param_4 + (uVar7 - uVar3) * 8,param_2,lVar2);
  }
  lVar4 = in_R10;
  if (in_R10 == 0) {
    lVar4 = 1;
  }
  lVar4 = in_R10 + 2 + lVar4;
  lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(char)unaff_RBX[10]);
  plVar1 = (longlong *)(lVar5 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar1,unaff_RBX[5],lVar2);
  }
  *unaff_RBX = lVar5;
  unaff_RBX[1] = lVar4;
  unaff_RBX[5] = (longlong)plVar1;
  lVar2 = *plVar1;
  unaff_RBX[3] = lVar2;
  unaff_RBX[4] = lVar2 + 0x100;
  unaff_RBX[9] = (longlong)(plVar1 + (param_1 >> 3));
  lVar2 = plVar1[param_1 >> 3];
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x100;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,0x100,(char)unaff_RBX[10]);
  *(undefined8 *)(unaff_RBX[9] + 8) = uVar6;
  *(undefined8 *)unaff_RBX[6] = unaff_R15;
  lVar2 = unaff_RBX[9];
  unaff_RBX[9] = lVar2 + 8;
  lVar2 = *(longlong *)(lVar2 + 8);
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x100;
  unaff_RBX[6] = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039736a(longlong param_1)
void FUN_18039736a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  longlong unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R15;
  bool in_CF;
  
  lVar4 = in_R10;
  if (in_CF) {
    lVar4 = param_1;
  }
  lVar4 = in_R10 + 2 + lVar4;
  lVar1 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 8);
  plVar2 = (longlong *)(lVar1 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar2);
  }
  *unaff_RBX = lVar1;
  unaff_RBX[1] = lVar4;
  unaff_RBX[5] = (longlong)plVar2;
  lVar4 = *plVar2;
  unaff_RBX[3] = lVar4;
  unaff_RBX[4] = lVar4 + 0x100;
  plVar2 = (longlong *)(unaff_RSI + -8 + (longlong)plVar2);
  unaff_RBX[9] = (longlong)plVar2;
  lVar4 = *plVar2;
  unaff_RBX[7] = lVar4;
  unaff_RBX[8] = lVar4 + 0x100;
  uVar3 = FUN_18062b420(_DAT_180c8ed18,0x100,(char)unaff_RBX[10]);
  *(undefined8 *)(unaff_RBX[9] + 8) = uVar3;
  *(undefined8 *)unaff_RBX[6] = unaff_R15;
  lVar4 = unaff_RBX[9];
  unaff_RBX[9] = lVar4 + 8;
  lVar4 = *(longlong *)(lVar4 + 8);
  unaff_RBX[7] = lVar4;
  unaff_RBX[8] = lVar4 + 0x100;
  unaff_RBX[6] = lVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803973df(void)
void FUN_1803973df(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  
  *(longlong **)(unaff_RBX + 0x28) = unaff_RDI;
  lVar1 = *unaff_RDI;
  *(longlong *)(unaff_RBX + 0x18) = lVar1;
  *(longlong *)(unaff_RBX + 0x20) = lVar1 + 0x100;
  plVar2 = (longlong *)(unaff_RSI + -8 + (longlong)unaff_RDI);
  *(longlong **)(unaff_RBX + 0x48) = plVar2;
  lVar1 = *plVar2;
  *(longlong *)(unaff_RBX + 0x38) = lVar1;
  *(longlong *)(unaff_RBX + 0x40) = lVar1 + 0x100;
  uVar3 = FUN_18062b420(_DAT_180c8ed18,0x100,*(undefined1 *)(unaff_RBX + 0x50));
  *(undefined8 *)(*(longlong *)(unaff_RBX + 0x48) + 8) = uVar3;
  **(undefined8 **)(unaff_RBX + 0x30) = unaff_R15;
  plVar2 = (longlong *)(*(longlong *)(unaff_RBX + 0x48) + 8);
  *(longlong **)(unaff_RBX + 0x48) = plVar2;
  lVar1 = *plVar2;
  *(longlong *)(unaff_RBX + 0x38) = lVar1;
  *(longlong *)(unaff_RBX + 0x40) = lVar1 + 0x100;
  *(longlong *)(unaff_RBX + 0x30) = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039741a(void)
void FUN_18039741a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong unaff_RBX;
  undefined8 unaff_R15;
  
  uVar2 = FUN_18062b420(_DAT_180c8ed18,0x100,*(undefined1 *)(unaff_RBX + 0x50));
  *(undefined8 *)(*(longlong *)(unaff_RBX + 0x48) + 8) = uVar2;
  **(undefined8 **)(unaff_RBX + 0x30) = unaff_R15;
  plVar3 = (longlong *)(*(longlong *)(unaff_RBX + 0x48) + 8);
  *(longlong **)(unaff_RBX + 0x48) = plVar3;
  lVar1 = *plVar3;
  *(longlong *)(unaff_RBX + 0x38) = lVar1;
  *(longlong *)(unaff_RBX + 0x40) = lVar1 + 0x100;
  *(longlong *)(unaff_RBX + 0x30) = lVar1;
  return;
}



ulonglong FUN_180397470(float *param_1,float *param_2,float *param_3,float *param_4,
                       undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  ulonglong in_RAX;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar6 = fVar1 * param_4[1] - *param_4 * fVar2;
  if (fVar6 == 0.0) {
    return in_RAX & 0xffffffffffffff00;
  }
  fVar6 = 1.0 / fVar6;
  fVar5 = *param_3 - *param_1;
  fVar4 = param_3[1] - param_1[1];
  fVar7 = (fVar5 * param_4[1] - fVar4 * *param_4) * fVar6;
  fVar6 = (fVar5 * fVar2 - fVar4 * fVar1) * fVar6;
  if ((((-0.001 <= fVar7) && (fVar7 <= 1.001)) && (-0.001 <= fVar6)) && (fVar6 <= 1.001)) {
    fVar4 = fVar6;
    if (fVar7 <= fVar6) {
      fVar4 = fVar7;
    }
    if (fVar4 <= 1.0) {
      if (fVar6 <= fVar7) {
        fVar6 = fVar7;
      }
      if (0.0 <= fVar6) {
        bVar3 = 1;
        if (param_5 != (undefined8 *)0x0) {
          *param_5 = CONCAT44(fVar2 * fVar7 + param_1[1],fVar1 * fVar7 + *param_1);
        }
        goto LAB_180397589;
      }
    }
  }
  bVar3 = 0;
LAB_180397589:
  return (ulonglong)bVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1803975b0(void)

{
  undefined4 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d48ee8) {
    FUN_1808fcb90(&DAT_180d48ee8);
    if (_DAT_180d48ee8 == -1) {
      uVar1 = nanf(&DAT_180a089e8);
      _DAT_180d48ee0 = nanf(&DAT_180a089e8);
      _DAT_180d48ee4 = uVar1;
      FUN_1808fcb30(&DAT_180d48ee8);
      return &DAT_180d48ee0;
    }
  }
  return &DAT_180d48ee0;
}



longlong FUN_180397660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180094c20(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  lVar1 = param_1 + 0x1f0;
  lVar2 = 4;
  do {
    FUN_180094c20(lVar1);
    lVar1 = lVar1 + 0x140;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1808fc838(param_1 + 0x6f0,8,3,&SUB_18005d5f0,FUN_180045af0);
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  FUN_1803978c0(param_1,1);
  return param_1;
}





// 函数: void FUN_180397770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180397770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803978c0(param_1,1,param_3,param_4,0xfffffffffffffffe);
  if (*(longlong **)(param_1 + 0x798) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x748) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x740) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x738) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x730) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x720) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x718) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x710) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x708) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x6f0,8,3,FUN_180045af0);
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}



undefined8 FUN_1803978c0(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180397960();
  if (param_2 != '\0') {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x3f800000;
    *param_1 = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x764) = 0x7f7fffffbf800000;
    *(undefined2 *)((longlong)param_1 + 0x754) = 0;
    *(undefined4 *)(param_1 + 0xea) = 0;
    *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x774) = 0;
    *(undefined4 *)(param_1 + 0xeb) = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0xe5] = 0;
    *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x784) = 0;
    *(undefined8 *)((longlong)param_1 + 0x78c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  }
  return uVar1;
}





// 函数: void FUN_180397960(longlong param_1)
void FUN_180397960(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x700);
  *(undefined8 *)(param_1 + 0x700) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x708) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x710);
  *(undefined8 *)(param_1 + 0x710) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x718);
  *(undefined8 *)(param_1 + 0x718) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x720) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x730);
  *(undefined8 *)(param_1 + 0x730) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x738) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x740) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x748) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x798) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180397bc0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  _Mtx_init_in_situ(param_1,0x102,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 3;
  lVar2 = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 3;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(param_1 + 0xa0) = lVar2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xd;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  lVar2 = 0x8000;
  if (param_3 == '\0') {
    lVar2 = 0x40000;
  }
  *(longlong *)(param_1 + 0x70) = lVar2;
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0xffffffff;
  uVar1 = FUN_18062b420(_DAT_180c8ed18,lVar2 << 4,0xd);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return param_1;
}





