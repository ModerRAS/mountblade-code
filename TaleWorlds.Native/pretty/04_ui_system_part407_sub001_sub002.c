#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part407_sub001_sub002.c - 1 个函数
// 函数: void function_892011(void)
void function_892011(void)
{
  int iVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t local_var_30;
  iVar1 = SystemFunction_0001808c8710(local_var_30);
  if (iVar1 < 1) {
    iVar1 = SystemFunction_0001808c8700(local_var_30);
    *(uint *)(unaff_RSI + 0x18) = (uint)(iVar1 < 1);
  }
  else {
    iVar1 = SystemFunction_0001808c8700(local_var_30);
    if (iVar1 < 1) {
      *(int32_t *)(unaff_RSI + 0x18) = 2;
    }
    else {
      iVar1 = function_8c7f30(local_var_30,unaff_RSI + 0x18);
      if (iVar1 != 0) {
        return;
      }
    }
  }
  RenderingSystem_TextureManager(*(uint64_t *)(unaff_RBP + 0x98));
  return;
}