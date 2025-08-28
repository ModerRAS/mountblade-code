#include "TaleWorlds.Native.Split.h"
// 03_rendering_part313.c - 6 个函数
// 函数: void function_434100(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_434100(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  cVar2 = '\0';
  if ('\0' < *(char *)(param_2 + 0x148)) {
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,cVar2);
      lVar1 = (int64_t)cVar2;
      cVar2 = cVar2 + '\x01';
      *(int32_t *)(param_3 + lVar1 * 4) = uVar3;
    } while (cVar2 < *(char *)(param_2 + 0x148));
  }
  return;
}
uint64_t * function_434170(uint64_t *param_1)
{
  *param_1 = &ui_system_data_1864_ptr;
  *param_1 = &processed_var_6328_ptr;
  DataStructureManager(param_1 + 3,0x48,4,function_4350f0,function_431c60);
  function_300d00(param_1 + 0x28);
  RenderingSystem_GeometryProcessor0(param_1);
  return param_1;
}
uint64_t * function_4341e0(uint64_t *param_1,uint param_2)
{
  SystemDataValidator(param_1 + 3,0x48,4,function_431c60,0xfffffffffffffffe);
  *param_1 = &ui_system_data_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x11b0);
  }
  return param_1;
}
// 函数: void function_434250(uint64_t *param_1)
void function_434250(uint64_t *param_1)
{
  SystemDataValidator(param_1 + 3,0x48,4,function_431c60,0xfffffffffffffffe);
  *param_1 = &ui_system_data_1864_ptr;
  return;
}
// 函数: void function_434290(int64_t param_1,int64_t *param_2)
void function_434290(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  char cVar2;
  param_1 = param_1 + (int64_t)*(int *)(param_1 + 0x10) * 0x48;
  if (*(int64_t **)(param_1 + 8) != (int64_t *)0x0) {
    cVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 0xd8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x80))();
      if (cVar2 != '\0') {
        (**(code **)(**(int64_t **)(param_1 + 8) + 0x68))();
      }
    }
  }
  param_2 = (int64_t *)*param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 8);
  *(int64_t **)(param_1 + 8) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}
// 函数: void function_434320(void)
void function_434320(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void function_434349(int64_t *param_1)
void function_434349(int64_t *param_1)
{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t lVar2;
  int64_t lVar3;
  lVar1 = 0x40;
  lVar2 = unaff_RBP + 0x1b0;
  lVar3 = 0x40;
  do {
    Function_3e2a2a4f(lVar2);
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar2 = unaff_RBP + 0x9d0;
  do {
    Function_3e2a2a4f(lVar2);
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
// 函数: void function_434370(int64_t *param_1)
void function_434370(int64_t *param_1)
{
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar1;
  uint64_t uVar2;
  uVar2 = unaff_RBX & 0xffffffff;
  do {
    Function_3e2a2a4f(unaff_RSI);
    unaff_RSI = unaff_RSI + 0x10;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  lVar1 = unaff_RBP + 0x9d0;
  do {
    Function_3e2a2a4f(lVar1);
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