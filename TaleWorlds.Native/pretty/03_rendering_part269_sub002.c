#include "TaleWorlds.Native.Split.h"

// 03_rendering_part269_sub002.c - 1 个函数

// 函数: void FUN_180417830(longlong *param_1,float param_2,longlong param_3)
void FUN_180417830(longlong *param_1,float param_2,longlong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  plVar3 = (longlong *)param_1[2];
  plVar5 = param_1;
  while (plVar2 = plVar3, plVar2 != (longlong *)0x0) {
    if (*(float *)(plVar2 + 4) < param_2) {
      plVar3 = (longlong *)*plVar2;
    }
    else {
      plVar3 = (longlong *)plVar2[1];
      plVar5 = plVar2;
    }
  }
  if ((plVar5 != param_1) && (*(float *)(plVar5 + 4) <= param_2)) goto LAB_180417a52;
  plVar3 = (longlong *)*param_1;
  if ((plVar5 == plVar3) || (plVar5 == param_1)) {
    if ((param_1[4] != 0) &&
       (plVar5 = plVar3, *(float *)(plVar3 + 4) <= param_2 && param_2 != *(float *)(plVar3 + 4))) {
LAB_1804178f7:
      bVar1 = false;
      plVar3 = plVar5;
      goto LAB_1804178f9;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(plVar5);
    if ((*(float *)(plVar5 + 4) <= param_2 && param_2 != *(float *)(plVar5 + 4)) &&
       (param_2 < *(float *)(plVar3 + 4))) {
      if (*plVar5 == 0) goto LAB_1804178f7;
      bVar1 = true;
LAB_1804178f9:
      if (plVar3 != (longlong *)0x0) {
        if (((bVar1) || (plVar3 == param_1)) || (uVar7 = 1, param_2 < *(float *)(plVar3 + 4))) {
          uVar7 = 0;
        }
        lVar4 = FUN_18062b420(_DAT_180c8ed18,0x80,(char)param_1[5]);
        *(float *)(lVar4 + 0x20) = param_2;
        *(undefined8 *)(lVar4 + 0x28) = &UNK_18098bcb0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined4 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x28) = &UNK_1809fcc58;
        *(undefined1 **)(lVar4 + 0x30) = (undefined1 *)(lVar4 + 0x40);
        *(undefined4 *)(lVar4 + 0x38) = 0;
        *(undefined1 *)(lVar4 + 0x40) = 0;
        goto LAB_180417a3d;
      }
    }
  }
  bVar1 = true;
  plVar5 = (longlong *)param_1[2];
  plVar3 = param_1;
  while (plVar5 != (longlong *)0x0) {
    bVar1 = param_2 < *(float *)(plVar5 + 4);
    plVar3 = plVar5;
    if (bVar1) {
      plVar5 = (longlong *)plVar5[1];
    }
    else {
      plVar5 = (longlong *)*plVar5;
    }
  }
  plVar5 = plVar3;
  if (bVar1) {
    if (plVar3 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar3);
      goto LAB_1804179c4;
    }
  }
  else {
LAB_1804179c4:
    if (param_2 < *(float *)(plVar5 + 4) || param_2 == *(float *)(plVar5 + 4)) {
LAB_180417a52:
      UNRECOVERED_JUMPTABLE = *(code **)(plVar5[5] + 0x10);
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_3 + 8);
      }
                    // WARNING: Could not recover jumptable at 0x000180417a84. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(plVar5 + 5,puVar6,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  if ((plVar3 == param_1) || (uVar7 = 1, param_2 < *(float *)(plVar3 + 4))) {
    uVar7 = 0;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x80,(char)param_1[5]);
  *(float *)(lVar4 + 0x20) = param_2;
  *(undefined8 *)(lVar4 + 0x28) = &UNK_18098bcb0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x28) = &UNK_1809fcc58;
  *(undefined1 **)(lVar4 + 0x30) = (undefined1 *)(lVar4 + 0x40);
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(undefined1 *)(lVar4 + 0x40) = 0;
LAB_180417a3d:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar3,param_1,uVar7,uVar8);
}



undefined8 * FUN_180417a90(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      if (*(float *)(puVar1 + 4) <= param_3) {
        puVar1 = (undefined8 *)*puVar1;
      }
      else {
        puVar3 = puVar1;
        puVar1 = (undefined8 *)puVar1[1];
      }
    } while (puVar1 != (undefined8 *)0x0);
    if (puVar3 != param_1) {
      if (puVar3 == (undefined8 *)param_1[1]) {
        FUN_1800b8300(param_2,(undefined8 *)param_1[1] + 5);
        return param_2;
      }
      lVar2 = func_0x00018066b9a0();
      FUN_1800b8300(param_2,lVar2 + 0x28);
      return param_2;
    }
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc58;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  strcpy_s(param_2[1],0x40,&DAT_18098bc73,0,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 * FUN_180417b70(undefined8 *param_1,undefined8 *param_2,float param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1[4] == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_1809fcc58;
    param_2[1] = param_2 + 3;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    strcpy_s(param_2[1],0x40,&DAT_18098bc73,param_4,0,0xfffffffffffffffe);
  }
  else {
    lVar3 = func_0x00018066b9a0(param_1);
    if (param_3 < *(float *)(lVar3 + 0x20) || param_3 == *(float *)(lVar3 + 0x20)) {
      puVar2 = (undefined8 *)param_1[2];
      while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
        if (*(float *)(puVar1 + 4) <= param_3) {
          puVar2 = (undefined8 *)*puVar1;
        }
        else {
          puVar2 = (undefined8 *)puVar1[1];
          param_1 = puVar1;
        }
      }
    }
    else {
      param_1 = (undefined8 *)param_1[1];
    }
    FUN_1800b8300(param_2,param_1 + 5);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




