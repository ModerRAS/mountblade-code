#include "TaleWorlds.Native.Split.h"

// 99_part_03_part073.c - 2 个函数

// 函数: void FUN_18023e4f0(longlong *param_1)
void FUN_18023e4f0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  param_1 = (longlong *)*param_1;
  if ((*(longlong *)(*param_1 + 0x348) != 0) && (*(int *)(*param_1 + 0x350) != -1)) {
    uVar6 = FUN_1801781f0();
    *(undefined8 *)(*param_1 + 0x1f0) = uVar6;
    plVar2 = (longlong *)*param_1;
    lVar3 = plVar2[0x3e];
    if (lVar3 != 0) {
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar4 = *(longlong **)(lVar3 + 0x10);
      *(longlong **)(lVar3 + 0x10) = plVar2;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = *param_1;
      iVar1 = *(int *)(_DAT_180c86870 + 0x224);
      *(longlong *)(lVar3 + 0x340) = (longlong)iVar1;
      LOCK();
      *(undefined4 *)(lVar3 + 0x380) = 2;
      UNLOCK();
      LOCK();
      *(undefined1 *)(lVar3 + 900) = 1;
      UNLOCK();
      if (param_1[3] != 0) {
        (*(code *)param_1[4])(CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),*param_1,param_1 + 1);
      }
    }
  }
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    lVar5 = param_1[5];
    uVar6 = FUN_1800c0100();
    FUN_1800a5810(_DAT_180c86938,uVar6,1,0,lVar3,(int)lVar5,uVar7);
    if (param_1[3] != 0) {
      (*(code *)param_1[4])(0,*param_1,param_1 + 1);
    }
  }
                    // WARNING: Could not recover jumptable at 0x00018023e617. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023e620(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c03ec0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc);
      FUN_18023c3b0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023e750(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c03d80;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc);
      FUN_18023c3b0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023e880(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c03d40;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
        (**(code **)(lVar1 + 0x20))(lVar1 + 0x10,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x60,8,DAT_180bf65bc);
      FUN_18023c2e0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023eac0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)
void FUN_18023eac0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_4[1];
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *param_4;
  uVar9 = *(undefined8 *)(lVar1 + 0x2ec);
  *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(lVar1 + 0x2e4);
  *(undefined8 *)(lVar3 + 0x1c) = uVar9;
  uVar9 = *(undefined8 *)(lVar1 + 0x2fc);
  *(undefined8 *)(lVar3 + 0x24) = *(undefined8 *)(lVar1 + 0x2f4);
  *(undefined8 *)(lVar3 + 0x2c) = uVar9;
  uVar9 = *(undefined8 *)(lVar1 + 0x30c);
  *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(lVar1 + 0x304);
  *(undefined8 *)(lVar3 + 0x3c) = uVar9;
  uVar9 = *(undefined8 *)(lVar1 + 0x31c);
  *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)(lVar1 + 0x314);
  *(undefined8 *)(lVar3 + 0x4c) = uVar9;
  uVar6 = *(undefined4 *)(lVar1 + 0x328);
  uVar7 = *(undefined4 *)(lVar1 + 0x32c);
  uVar8 = *(undefined4 *)(lVar1 + 0x330);
  *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(lVar1 + 0x324);
  *(undefined4 *)(lVar3 + 0x58) = uVar6;
  *(undefined4 *)(lVar3 + 0x5c) = uVar7;
  *(undefined4 *)(lVar3 + 0x60) = uVar8;
  *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar1 + 0x334);
  plVar4 = (longlong *)*param_4;
  if ((((char)plVar4[2] == '\0') && (*(char *)((longlong)plVar4 + 0x11) == '\0')) && (*plVar4 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined2 *)(plVar4 + 2) = 1;
  *plVar4 = lVar2;
  plVar4[1] = param_2;
  puVar5 = (undefined8 *)*param_4;
  if ((*(char *)((longlong)puVar5 + 0x66) == '\0') && (*(char *)(puVar5 + 2) != '\0')) {
    uVar9 = FUN_18062b420(_DAT_180c8ed18,puVar5[1],3);
                    // WARNING: Subroutine does not return
    memcpy(uVar9,*puVar5,puVar5[1]);
  }
  return;
}



undefined8 *
FUN_18023ec00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 9;
  strcpy_s(param_2[1],0x80,&UNK_180a140f8,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




