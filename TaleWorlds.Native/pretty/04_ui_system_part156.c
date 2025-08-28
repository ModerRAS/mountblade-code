#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part156.c - 1 个函数

// 函数: void FUN_18075f090(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
void FUN_18075f090(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                  longlong param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 *puStack_78;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puVar3 = (undefined1 *)0x0;
  uStack_60 = 0;
  auStack_68[0] = 0;
  if ((((-1 < param_2) && (lVar1 = *(longlong *)(param_1 + 0xe8), lVar1 != 0)) &&
      (param_2 < *(int *)(lVar1 + 0x60))) &&
     ((*(longlong *)(lVar1 + 0xa8) != 0 &&
      (**(int **)(*(longlong *)(lVar1 + 0x68) + (longlong)param_2 * 8) == 3)))) {
    auStack_58[0] = 0;
    *(longlong *)(param_1 + 0xb0) = param_1;
    if ((param_5 != 0) || (*(int *)(param_1 + 0x100) == 0)) {
      puVar3 = auStack_58;
    }
    puStack_78 = puVar3;
    iVar2 = (**(code **)(lVar1 + 0xa8))((longlong *)(param_1 + 0xb0),param_2,&uStack_60,auStack_68);
    if (iVar2 == 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uStack_60;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = auStack_68[0];
      }
      if (param_5 != 0) {
        func_0x00018076b450(param_5,puVar3,param_6);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



