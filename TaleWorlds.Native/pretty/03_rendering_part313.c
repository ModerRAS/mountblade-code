#include "TaleWorlds.Native.Split.h"

// 03_rendering_part313.c - 6 个函数

// 函数: void FUN_180434100(longlong *param_1,longlong param_2,longlong param_3)
void FUN_180434100(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int32_t uVar3;
  
  cVar2 = '\0';
  if ('\0' < *(char *)(param_2 + 0x148)) {
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,cVar2);
      lVar1 = (longlong)cVar2;
      cVar2 = cVar2 + '\x01';
      *(int32_t *)(param_3 + lVar1 * 4) = uVar3;
    } while (cVar2 < *(char *)(param_2 + 0x148));
  }
  return;
}



uint64_t * FUN_180434170(uint64_t *param_1)

{
  *param_1 = &unknown_var_1864_ptr;
  *param_1 = &unknown_var_6328_ptr;
  FUN_1808fc838(param_1 + 3,0x48,4,FUN_1804350f0,FUN_180431c60);
  FUN_180300d00(param_1 + 0x28);
  FUN_180431730(param_1);
  return param_1;
}



uint64_t * FUN_1804341e0(uint64_t *param_1,uint param_2)

{
  FUN_1808fc8a8(param_1 + 3,0x48,4,FUN_180431c60,0xfffffffffffffffe);
  *param_1 = &unknown_var_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x11b0);
  }
  return param_1;
}





// 函数: void FUN_180434250(uint64_t *param_1)
void FUN_180434250(uint64_t *param_1)

{
  FUN_1808fc8a8(param_1 + 3,0x48,4,FUN_180431c60,0xfffffffffffffffe);
  *param_1 = &unknown_var_1864_ptr;
  return;
}





// 函数: void FUN_180434290(longlong param_1,longlong *param_2)
void FUN_180434290(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  param_1 = param_1 + (longlong)*(int *)(param_1 + 0x10) * 0x48;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
      }
    }
  }
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong **)(param_1 + 8) = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}





// 函数: void FUN_180434320(void)
void FUN_180434320(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180434349(longlong *param_1)
void FUN_180434349(longlong *param_1)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = 0x40;
  lVar2 = unaff_RBP + 0x1b0;
  lVar3 = 0x40;
  do {
    func_0x000180074f10(lVar2);
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar2 = unaff_RBP + 0x9d0;
  do {
    func_0x000180074f10(lVar2);
    lVar2 = lVar2 + 0x10;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar2 = *param_1;
  *(int8_t *)(unaff_RBP + 0x11f0) = 0;
  *(uint64_t *)(unaff_RBP + 0x9c0) = 0;
  (**(code **)(lVar2 + 0x38))(param_1);
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x1b0,0,0x1050);
}





// 函数: void FUN_180434370(longlong *param_1)
void FUN_180434370(longlong *param_1)

{
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = unaff_RBX & 0xffffffff;
  do {
    func_0x000180074f10(unaff_RSI);
    unaff_RSI = unaff_RSI + 0x10;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  lVar1 = unaff_RBP + 0x9d0;
  do {
    func_0x000180074f10(lVar1);
    lVar1 = lVar1 + 0x10;
    unaff_RBX = unaff_RBX - 1;
  } while (unaff_RBX != 0);
  lVar1 = *param_1;
  *(int8_t *)(unaff_RBP + 0x11f0) = 0;
  *(uint64_t *)(unaff_RBP + 0x9c0) = 0;
  (**(code **)(lVar1 + 0x38))(param_1);
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x1b0,0,0x1050);
}





