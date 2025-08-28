#include "TaleWorlds.Native.Split.h"

// 99_part_01_part009.c - 5 个函数

// 函数: void FUN_1800a62f7(void)
void FUN_1800a62f7(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a6320(undefined8 param_1,longlong param_2)
void FUN_1800a6320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined2 auStack_48 [2];
  undefined2 uStack_44;
  undefined1 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  uint uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_2 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,auStack_48);
    *(undefined2 *)(param_2 + 0x332) = uStack_3c;
    *(undefined2 *)(param_2 + 0x330) = 1;
    if ((uStack_20 & 4) != 0) {
      *(uint *)(param_2 + 0x328) = *(uint *)(param_2 + 0x328) | 0x2000;
    }
    *(byte *)(param_2 + 0x355) = (byte)uStack_20 & 1;
    uVar2 = func_0x0001800aada0(uStack_38);
    *(undefined4 *)(param_2 + 0x324) = uVar2;
    *(undefined2 *)(param_2 + 0x32e) = uStack_44;
    *(undefined1 *)(param_2 + 0x335) = uStack_40;
    *(undefined2 *)(param_2 + 0x32c) = auStack_48[0];
    *(undefined1 *)(param_2 + 0x334) = 2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1800a63d0(undefined8 param_1,undefined8 param_2)
void FUN_1800a63d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  undefined8 **ppuStackX_18;
  undefined8 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  ppuStackX_18 = apuStack_30;
  puStack_20 = &UNK_1800adc10;
  pcStack_18 = FUN_1800adba0;
  apuStack_30[0] = &uStackX_10;
  uStackX_10 = param_2;
  FUN_18005c650(apuStack_30);
  return;
}






// 函数: void FUN_1800a6420(void)
void FUN_1800a6420(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1800a73c0(longlong *param_1)
void FUN_1800a73c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_1800adb30(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




