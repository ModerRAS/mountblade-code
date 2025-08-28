#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part194_sub002.c - 1 个函数

// 函数: void FUN_18077ed00(longlong *param_1)
void FUN_18077ed00(longlong *param_1)

{
                    // WARNING: Subroutine does not return
  memset(*param_1 + 0x22c,0,0x100);
}



undefined8 FUN_18077ed40(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x350) == 0) &&
     (uVar2 = (**(code **)(*(longlong *)(lVar1 + 0xd8) + 0x40))
                        (lVar1 + 0xb0,(longlong *)(lVar1 + 0x350),0,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 6;
}



undefined8 FUN_18077edf0(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x360);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x360);
  }
  else if (param_2 == 1) {
    *param_3 = *(undefined4 *)(lVar1 + 0x364);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x364);
  }
  else if (param_2 == 2) {
    *param_3 = *(undefined4 *)(lVar1 + 0x35c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x35c);
  }
  else if (param_2 == 3) {
    *param_3 = *(undefined4 *)(lVar1 + 0x368);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x368);
  }
  else {
    if (param_2 != 4) {
      return 0x1f;
    }
    *param_3 = *(undefined4 *)(lVar1 + 0x36c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x36c);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)fVar2);
}



undefined8 FUN_18077eef0(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (param_2 != 6) {
    return 0x1f;
  }
  lVar1 = *param_1;
  *param_3 = *(undefined4 *)(lVar1 + 0x370);
  if (param_4 != 0) {
    puVar2 = &UNK_18095a5a0;
    if (*(int *)(lVar1 + 0x370) != 0) {
      puVar2 = &UNK_18095a598;
    }
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&UNK_1809fe7f8,puVar2);
  }
  return 0;
}



undefined8
FUN_18077ef70(longlong *param_1,int param_2,undefined8 *param_3,undefined4 *param_4,longlong param_5
             )

{
  longlong lVar1;
  undefined *puVar2;
  
  if (param_2 == 5) {
    lVar1 = *param_1;
    *param_3 = (int *)(lVar1 + 0x358);
    *param_4 = 4;
    if (param_5 != 0) {
      puVar2 = &UNK_180a06420;
      if (*(int *)(lVar1 + 0x358) != 0) {
        puVar2 = &UNK_180a06418;
      }
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_5,0x20,&UNK_1809fe7f8,puVar2);
    }
  }
  return 0;
}






