#include "TaleWorlds.Native.Split.h"

// 03_rendering_part023.c - 2 个函数

// 函数: void FUN_18027d880(undefined8 *param_1,undefined8 *param_2)
void FUN_18027d880(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_2;
  cVar3 = func_0x000180285980(param_1 + 0x66);
  if (cVar3 != '\0') {
    uVar4 = func_0x00018023a100(puVar5);
    *(undefined1 *)(param_1 + 100) = uVar4;
    if ((undefined *)*param_1 == &UNK_180a169b8) {
      FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
    }
    else {
      (**(code **)((undefined *)*param_1 + 0x160))(param_1);
    }
    lVar1 = param_1[5];
    if (lVar1 != 0) {
      *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
      if (*(longlong *)(lVar1 + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
    uVar2 = param_2[1];
    param_1[0x66] = *param_2;
    param_1[0x67] = uVar2;
    uVar2 = param_2[3];
    param_1[0x68] = param_2[2];
    param_1[0x69] = uVar2;
    uVar2 = param_2[5];
    param_1[0x6a] = param_2[4];
    param_1[0x6b] = uVar2;
    uVar2 = param_2[7];
    param_1[0x6c] = param_2[6];
    param_1[0x6d] = uVar2;
  }
  return;
}



int FUN_18027da30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  iVar5 = 0;
  iVar1 = (int)(*(longlong *)(param_1 + 0x40) - (longlong)plVar3 >> 4);
  lVar4 = (longlong)iVar1;
  if (0 < iVar1) {
    do {
      lVar2 = *plVar3;
      if ((*(byte *)(lVar2 + 0xfd) & 0x20) == 0) {
        lVar2 = func_0x000180085de0(*(undefined8 *)(lVar2 + 0x1b0));
      }
      iVar5 = iVar5 + *(int *)(lVar2 + 0x1fc);
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar5;
}



int FUN_18027daa0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  plVar2 = *(longlong **)(param_1 + 0x38);
  uVar3 = *(longlong *)(param_1 + 0x40) - (longlong)plVar2 >> 4;
  if (uVar3 != 0) {
    do {
      if ((*(uint *)(plVar2 + 1) & 1 << (param_2 & 0x1f)) != 0) {
        lVar1 = *plVar2;
        if ((*(byte *)(lVar1 + 0xfd) & 0x20) == 0) {
          lVar1 = func_0x000180085de0(*(undefined8 *)(lVar1 + 0x1b0));
        }
        iVar4 = iVar4 + *(int *)(lVar1 + 0x1fc);
      }
      iVar5 = iVar5 + 1;
      plVar2 = plVar2 + 2;
    } while ((ulonglong)(longlong)iVar5 < uVar3);
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18027db30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16,0,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_180275090(uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_180275a60(param_1,plVar2,1);
  *param_2 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return param_2;
}





// 函数: void FUN_18027dc40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18027dc40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if ((0 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 0x58) < *(int *)(param_2 + 0x58))) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
    FUN_180278270(param_1);
  }
  if ((0 < *(int *)(param_2 + 0x58)) && (*(int *)(param_2 + 0x58) < *(int *)(param_1 + 0x58))) {
    *(int *)(param_2 + 0x58) = *(int *)(param_1 + 0x58);
    FUN_180278270(param_2);
  }
  FUN_180280ad0(param_1,param_2,param_3,param_4,uVar4);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
    if (*(longlong *)(lVar1 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x3c8) + 0x20);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = *(longlong **)(lVar1 + 0x20);
    *(longlong **)(lVar1 + 0x20) = plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x3c8) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = *(longlong **)(lVar1 + 0x18);
    *(longlong **)(lVar1 + 0x18) = plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



