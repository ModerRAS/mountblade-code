#include "TaleWorlds.Native.Split.h"
// 99_part_08_part040.c - 3 个函数
// 函数: void function_5a18b2(void)
void function_5a18b2(void)
{
  int64_t unaff_RBP;
  int64_t unaff_R13;
  *(int32_t *)(unaff_R13 + 0x44) = *(int32_t *)(unaff_RBP + -0x7c);
  function_5a0af0();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x700) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_5a18db(void)
void function_5a18db(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x700) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_5a18e3(void)
void function_5a18e3(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x700) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address