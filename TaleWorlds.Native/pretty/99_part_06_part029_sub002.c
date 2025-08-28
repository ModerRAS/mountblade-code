#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029_sub002.c - 1 个函数

// 函数: void FUN_1803c19c1(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803c19c1(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t unaff_RBX;
  int64_t in_stack_00000080;
  
  if ((*(int64_t *)(unaff_RBX + 0x30) != 0) || (*(int64_t *)(unaff_RBX + 0x40) != 0)) {
    if (*(int64_t *)(in_stack_00000080 + 0x30) != 0) {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(int64_t *)(*(int64_t *)(in_stack_00000080 + 0x38) + 0x58) = unaff_RBX;
      *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
      *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
      *(uint64_t *)(unaff_RBX + 0x58) = param_3;
      return;
    }
    *(uint64_t *)(unaff_RBX + 0x50) = param_3;
    *(int64_t *)(in_stack_00000080 + 0x30) = unaff_RBX;
    *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
    *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
    *(uint64_t *)(unaff_RBX + 0x58) = param_3;
  }
  return;
}







