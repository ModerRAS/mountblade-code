#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part024_sub002.c - 2 个函数

// 函数: void FUN_1800b8911(int64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_1800b8911(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *in_RAX;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t *plVar5;
  
  plVar2 = (int64_t *)0x0;
  lVar3 = param_1 - (int64_t)in_RAX >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    plVar5 = plVar2;
    if (lVar3 == 0) goto joined_r0x0001800b8970;
  }
  plVar2 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar3 * 8,(char)unaff_RDI[3]);
  param_3 = (int64_t *)unaff_RDI[1];
  in_RAX = (int64_t *)*unaff_RDI;
  plVar5 = plVar2;
joined_r0x0001800b8970:
  for (; in_RAX != param_3; in_RAX = in_RAX + 1) {
    *plVar2 = *in_RAX;
    plVar2 = plVar2 + 1;
    *in_RAX = 0;
  }
  plVar1 = (int64_t *)*unaff_RSI;
  *plVar2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)unaff_RDI[1];
  plVar4 = (int64_t *)*unaff_RDI;
  if (plVar4 != plVar1) {
    do {
      if ((int64_t *)*plVar4 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar4 + 0x38))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    plVar4 = (int64_t *)*unaff_RDI;
  }
  if (plVar4 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar4);
  }
  *unaff_RDI = (int64_t)plVar5;
  unaff_RDI[1] = (int64_t)(plVar2 + 1);
  unaff_RDI[2] = (int64_t)(plVar5 + lVar3);
  return;
}







// 函数: void FUN_1800b89fa(void)
void FUN_1800b89fa(void)

{
  return;
}







