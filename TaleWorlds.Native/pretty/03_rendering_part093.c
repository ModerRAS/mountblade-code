#include "TaleWorlds.Native.Split.h"

// 03_rendering_part093.c - 23 个函数

// 函数: void FUN_180320050(undefined8 *param_1)
void FUN_180320050(undefined8 *param_1)

{
  *param_1 = &UNK_180a079c0;
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a1afe8);
  }
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[3] = &UNK_180a3c3e0;
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}





// 函数: void FUN_180320130(longlong *param_1,longlong param_2)
void FUN_180320130(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, 0 < *(int *)(param_2 + 0xc0))) {
    puVar1 = (undefined4 *)(param_2 + 0x24);
    do {
      if ((int)puVar1[-1] < 0) {
        (**(code **)(*param_1 + 0x140))(param_1,puVar1 + -9);
      }
      else {
        (**(code **)(*param_1 + 0x138))(param_1,puVar1[-1],*puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0xc0));
  }
  return;
}





// 函数: void FUN_18032013f(longlong *param_1,longlong param_2)
void FUN_18032013f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc0)) {
    puVar1 = (undefined4 *)(param_2 + 0x24);
    do {
      if ((int)puVar1[-1] < 0) {
        (**(code **)(*param_1 + 0x140))(param_1,puVar1 + -9);
      }
      else {
        (**(code **)(*param_1 + 0x138))(param_1,puVar1[-1],*puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0xc0));
  }
  return;
}





// 函数: void FUN_180320154(undefined8 param_1,longlong param_2)
void FUN_180320154(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int unaff_EDI;
  
  param_2 = param_2 + 0x24;
  do {
    if (*(int *)(param_2 + -4) < 0) {
      (**(code **)(*unaff_RSI + 0x140))();
    }
    else {
      (**(code **)(*unaff_RSI + 0x138))();
    }
    unaff_EDI = unaff_EDI + 1;
    param_2 = param_2 + 0x30;
  } while (unaff_EDI < *(int *)(unaff_RBP + 0xc0));
  return;
}





// 函数: void FUN_180320196(void)
void FUN_180320196(void)

{
  return;
}





// 函数: void FUN_1803201a5(void)
void FUN_1803201a5(void)

{
  return;
}



int FUN_1803201b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x178))();
    FUN_1801592f0();
  }
  return iVar3;
}



undefined4 * FUN_1803201f0(undefined4 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 6);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  FUN_1808fc838(param_1 + 0xe,0x30,4,FUN_1801c2890,FUN_18004a130);
  param_1[0x3e] = 0;
  *param_1 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0x7f7fffff00000000;
  return param_1;
}



undefined4 *
FUN_1803202a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x12);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  return param_1;
}



undefined4 *
FUN_180320330(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x22);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0x3f80000000000000;
  return param_1;
}



undefined4 *
FUN_1803203f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 10);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  return param_1;
}



undefined8 * FUN_180320470(undefined8 *param_1)

{
  *param_1 = &UNK_180a1b4b0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720();
  return param_1;
}





// 函数: void FUN_1803204f0(undefined8 *param_1)
void FUN_1803204f0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar1 = param_1 + 0x12;
  FUN_180284720(plVar1);
  lVar2 = param_1[0x13];
  for (lVar3 = *plVar1; lVar3 != lVar2; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_180320550(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(param_1 + 0x12);
  FUN_18033aa70(param_1 + 0x12);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_1803205e0(longlong *param_1)
void FUN_1803205e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x1a0) {
    FUN_180281e80(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180320600(undefined8 *param_1)
void FUN_180320600(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b430;
  FUN_180339080();
  param_1[0x2c] = &UNK_18098bcb0;
  param_1[0x21] = &UNK_18098bcb0;
  param_1[0x16] = &UNK_18098bcb0;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_1803206a0(undefined8 param_1,ulonglong param_2)

{
  FUN_180320600();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c8);
  }
  return param_1;
}





// 函数: void FUN_1803206e0(undefined8 *param_1)
void FUN_1803206e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b470;
  FUN_180339860();
  param_1[0x35] = &UNK_18098bcb0;
  param_1[0x2a] = &UNK_18098bcb0;
  param_1[0x1f] = &UNK_18098bcb0;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_180320780(undefined8 param_1,ulonglong param_2)

{
  FUN_1803206e0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x200);
  }
  return param_1;
}





// 函数: void FUN_1803207c0(longlong *param_1)
void FUN_1803207c0(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  (**(code **)(param_1[10] + 0x10))(param_1 + 10,&DAT_18098bc73);
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  return;
}



undefined4 * FUN_180320830(undefined4 *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0xffffffff;
  plVar1 = *(longlong **)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}





// 函数: void FUN_180320880(undefined8 *param_1)
void FUN_180320880(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b3b0;
  FUN_18033a110();
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_180320900(undefined8 param_1,ulonglong param_2)

{
  FUN_180320880();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}



undefined8 *
FUN_180320960(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  puVar1 = param_1 + 0x12;
  FUN_180284720(puVar1);
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(puVar1);
  FUN_18033aa70(puVar1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar2);
  }
  return param_1;
}





// 函数: void FUN_180320a20(undefined4 *param_1)
void FUN_180320a20(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x22);
  uVar3 = *(longlong *)(param_1 + 0x24) - *plVar1 >> 3;
  lVar5 = 0;
  if ((int)uVar3 != 0) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      puVar2 = *(undefined8 **)(lVar5 + *plVar1);
      if (puVar2 != (undefined8 *)0x0) {
        lVar4 = __RTCastToVoid(puVar2);
        (**(code **)*puVar2)(puVar2,0);
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
      }
      *(undefined8 *)(lVar5 + *plVar1) = 0;
      lVar5 = lVar5 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(longlong *)(param_1 + 0x24) = *plVar1;
  param_1[0x10] = 0;
  **(undefined1 **)(param_1 + 0xe) = 0;
  param_1[4] = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  *param_1 = 0;
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined **)(param_1 + 0xc) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180320b20(undefined8 *param_1)
void FUN_180320b20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = param_1 + 0x11;
  uVar4 = param_1[0x12] - *plVar2 >> 3;
  lVar6 = 0;
  if ((int)uVar4 != 0) {
    uVar4 = uVar4 & 0xffffffff;
    do {
      puVar3 = *(undefined8 **)(lVar6 + *plVar2);
      if (puVar3 != (undefined8 *)0x0) {
        lVar5 = __RTCastToVoid(puVar3);
        (**(code **)*puVar3)(puVar3,0);
        if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar5);
        }
      }
      *(undefined8 *)(lVar6 + *plVar2) = 0;
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_1[0x12] = *plVar2;
  plVar1 = param_1 + 0xd;
  lVar6 = param_1[0xe];
  lVar5 = *plVar1;
  if (lVar5 != lVar6) {
    do {
      FUN_180320a20(lVar5);
      lVar5 = lVar5 + 0xb0;
    } while (lVar5 != lVar6);
    lVar5 = *plVar1;
  }
  param_1[0xe] = lVar5;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)param_1[3] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033aae0(plVar1);
  param_1[2] = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180320c60(longlong *param_1)
void FUN_180320c60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    FUN_180320a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined4 * FUN_180320c80(undefined4 *param_1)

{
  *(undefined **)(param_1 + 0x14) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined **)(param_1 + 0x14) = &UNK_1809fcc58;
  *(undefined4 **)(param_1 + 0x16) = param_1 + 0x1a;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined **)(param_1 + 0x34) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined **)(param_1 + 0x34) = &UNK_1809fcc58;
  *(undefined4 **)(param_1 + 0x36) = param_1 + 0x3a;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 3;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 3;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  param_1[0x6a] = 3;
  *param_1 = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}





// 函数: void FUN_180320da0(longlong param_1)
void FUN_180320da0(longlong param_1)

{
  FUN_180320e20();
  if (*(longlong *)(param_1 + 400) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180320b20(param_1 + 0xc0);
  *(undefined **)(param_1 + 0x50) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180320e20(undefined4 *param_1)
void FUN_180320e20(undefined4 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  uVar2 = *(longlong *)(param_1 + 0x66) - *(longlong *)(param_1 + 100) >> 3;
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      puVar1 = *(undefined8 **)(lVar4 + *(longlong *)(param_1 + 100));
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 100)) = 0;
      lVar4 = lVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_1 + 0x5c);
  param_1[0x18] = 0;
  **(undefined1 **)(param_1 + 0x16) = 0;
  *param_1 = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  return;
}





// 函数: void FUN_180320e44(void)
void FUN_180320e44(void)

{
  undefined8 *puVar1;
  uint in_EAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *unaff_RDI;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong unaff_R15;
  
  uVar6 = (undefined4)unaff_R15;
  uVar3 = unaff_R15 & 0xffffffff;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar1 = *(undefined8 **)(uVar3 + *(longlong *)(unaff_RDI + 100));
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    *(ulonglong *)(uVar3 + *(longlong *)(unaff_RDI + 100)) = unaff_R15;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(undefined8 *)(unaff_RDI + 0x66) = *(undefined8 *)(unaff_RDI + 100);
  *(undefined8 *)(unaff_RDI + 0x5e) = *(undefined8 *)(unaff_RDI + 0x5c);
  unaff_RDI[0x18] = uVar6;
  uVar5 = (undefined1)unaff_R15;
  **(undefined1 **)(unaff_RDI + 0x16) = uVar5;
  *unaff_RDI = uVar6;
  unaff_RDI[0x2a] = uVar6;
  *(ulonglong *)(unaff_RDI + 0x11) = unaff_R15;
  *(undefined1 *)(unaff_RDI + 0x2c) = uVar5;
  *(undefined1 *)(unaff_RDI + 0x13) = uVar5;
  *(undefined8 *)(unaff_RDI + 1) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 3) = 0;
  *(undefined8 *)(unaff_RDI + 5) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 7) = 0;
  *(undefined8 *)(unaff_RDI + 9) = 0;
  *(undefined8 *)(unaff_RDI + 0xb) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 0xd) = 0;
  *(undefined8 *)(unaff_RDI + 0xf) = 0x3f80000000000000;
  *(ulonglong *)(unaff_RDI + 0x2d) = unaff_R15;
  return;
}





// 函数: void FUN_180320ebc(void)
void FUN_180320ebc(void)

{
  undefined4 *unaff_RDI;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RDI + 0x66) = *(undefined8 *)(unaff_RDI + 100);
  *(undefined8 *)(unaff_RDI + 0x5e) = *(undefined8 *)(unaff_RDI + 0x5c);
  uVar2 = (undefined4)unaff_R15;
  unaff_RDI[0x18] = uVar2;
  uVar1 = (undefined1)unaff_R15;
  **(undefined1 **)(unaff_RDI + 0x16) = uVar1;
  *unaff_RDI = uVar2;
  unaff_RDI[0x2a] = uVar2;
  *(undefined8 *)(unaff_RDI + 0x11) = unaff_R15;
  *(undefined1 *)(unaff_RDI + 0x2c) = uVar1;
  *(undefined1 *)(unaff_RDI + 0x13) = uVar1;
  *(undefined8 *)(unaff_RDI + 1) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 3) = 0;
  *(undefined8 *)(unaff_RDI + 5) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 7) = 0;
  *(undefined8 *)(unaff_RDI + 9) = 0;
  *(undefined8 *)(unaff_RDI + 0xb) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 0xd) = 0;
  *(undefined8 *)(unaff_RDI + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 0x2d) = unaff_R15;
  return;
}



undefined8 *
FUN_180320f40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0xd,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x655679616c706552;
  *(undefined4 *)(puVar1 + 1) = 0x6f697372;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x6e;
  *(undefined4 *)(param_2 + 2) = 0xd;
  return param_2;
}





// 函数: void FUN_180320fd0(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
void FUN_180320fd0(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *aplStackX_18 [2];
  uint in_stack_ffffffffffffff80;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (param_3 != (longlong *)0x0) {
    uVar3 = 0;
    if ((param_4 & 2) != 0) {
      if (param_2 == 0) {
        iVar1 = _Mtx_lock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
        aplStackX_18[0] = param_3;
        (**(code **)(*param_3 + 0x28))(param_3);
        FUN_180198b90(param_1,aplStackX_18,0,1,0,in_stack_ffffffffffffff80 & 0xffffff00,0);
        iVar1 = _Mtx_unlock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
      }
      else {
        FUN_1802e8a50(param_2,param_3,0,1);
      }
    }
    if ((param_4 & 4) != 0) {
      lStack_48 = 0;
      lStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 3;
      FUN_1802e9180(param_3,&lStack_48,1,0xffffffff);
      uVar4 = uVar3;
      if (lStack_40 - lStack_48 >> 3 != 0) {
        do {
          FUN_180325830(param_5,*(undefined8 *)(uVar4 + lStack_48));
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar4 = uVar4 + 8;
        } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(lStack_40 - lStack_48 >> 3));
      }
      if (param_2 == 0) {
        iVar1 = _Mtx_lock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
        aplStackX_18[0] = param_3;
        (**(code **)(*param_3 + 0x28))(param_3);
        FUN_180198980(param_1,aplStackX_18[0]);
        if (aplStackX_18[0] != (longlong *)0x0) {
          (**(code **)(*aplStackX_18[0] + 0x38))();
        }
        iVar1 = _Mtx_unlock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
      }
      else {
        FUN_1802eb9a0(param_2,param_3,1,0,1,0x15);
      }
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803211e0(longlong param_1)
void FUN_1803211e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_8f8 [32];
  undefined4 auStack_8d8 [6];
  undefined8 uStack_8c0;
  longlong lStack_8b8;
  undefined8 uStack_8a8;
  undefined1 auStack_458 [1024];
  ulonglong uStack_58;
  
  uStack_8a8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_8f8;
  uStack_8c0 = 0;
  lStack_8b8 = 0;
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 8);
  }
  FUN_18062dee0(&uStack_8c0,puVar3,&UNK_1809fcfbc);
  lVar1 = lStack_8b8;
  if (lStack_8b8 == 0) {
    FUN_180627160(&UNK_180a1b038);
  }
  else {
    auStack_8d8[0] = 0;
    iVar2 = fread(auStack_8d8,4,1,lStack_8b8);
    if (iVar2 == 1) {
                    // WARNING: Subroutine does not return
      memset(auStack_458,0,0x400);
    }
    FUN_180627160(&UNK_180a1b090);
    fclose(lVar1);
    lStack_8b8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_8f8);
}





// 函数: void FUN_1803214c0(longlong param_1)
void FUN_1803214c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x758);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18033b120(param_1 + 0x738);
  iVar1 = _Mtx_unlock(param_1 + 0x758);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_lock(param_1 + 0x7c8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18033b120(param_1 + 0x7a8);
  iVar1 = _Mtx_unlock(param_1 + 0x7c8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180321570(longlong param_1,undefined4 *param_2,longlong param_3)
void FUN_180321570(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar12 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(_DAT_180c86870 + 0x3d8);
  iVar7 = _Mtx_lock(lVar10 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3,uVar12);
  puVar9 = (undefined4 *)FUN_1803201f0(uVar12);
  uVar8 = FUN_18032b4a0(lVar10,puVar9);
  *puVar9 = uVar8;
  puVar11 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    puVar11 = *(undefined **)(param_1 + 8);
  }
  (**(code **)(*(longlong *)(puVar9 + 6) + 0x10))(puVar9 + 6,puVar11);
  uVar8 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar9[1] = *param_2;
  puVar9[2] = uVar8;
  puVar9[3] = uVar3;
  puVar9[4] = uVar4;
  if (param_3 == 0) {
    puVar9[0x3e] = 0;
  }
  else {
    FUN_18033dc50(puVar9 + 0xe,param_3);
  }
  puVar1 = (undefined8 *)(lVar10 + 0x818);
  uVar2 = *(uint *)(lVar10 + 0x150);
  puVar5 = puVar1;
  puVar6 = *(undefined8 **)(lVar10 + 0x828);
  while (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6;
    if (uVar2 < *(uint *)(puVar6 + 4)) {
      puVar6 = (undefined8 *)puVar6[1];
    }
    else {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  lVar10 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(lVar10 + 0x840));
  uStack_28 = SUB84(puVar9,0);
  uStack_24 = (undefined4)((ulonglong)puVar9 >> 0x20);
  *(uint *)(lVar10 + 0x20) = uVar2;
  *(undefined4 *)(lVar10 + 0x24) = uStack_2c;
  *(undefined4 *)(lVar10 + 0x28) = uStack_28;
  *(undefined4 *)(lVar10 + 0x2c) = uStack_24;
  uVar8 = 0;
  if ((puVar5 != puVar1) && (uVar8 = 0, *(uint *)(puVar5 + 4) <= uVar2)) {
    uVar8 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar10,puVar5,puVar1,uVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



