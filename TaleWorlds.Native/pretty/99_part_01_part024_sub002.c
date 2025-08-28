#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part024_sub002.c - 2 个函数

// 函数: void FUN_1800b8911(longlong param_1,uint64_t param_2,longlong *param_3)
void FUN_1800b8911(longlong param_1,uint64_t param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *in_RAX;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  
  plVar2 = (longlong *)0x0;
  lVar3 = param_1 - (longlong)in_RAX >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    plVar5 = plVar2;
    if (lVar3 == 0) goto joined_r0x0001800b8970;
  }
  plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)unaff_RDI[3]);
  param_3 = (longlong *)unaff_RDI[1];
  in_RAX = (longlong *)*unaff_RDI;
  plVar5 = plVar2;
joined_r0x0001800b8970:
  for (; in_RAX != param_3; in_RAX = in_RAX + 1) {
    *plVar2 = *in_RAX;
    plVar2 = plVar2 + 1;
    *in_RAX = 0;
  }
  plVar1 = (longlong *)*unaff_RSI;
  *plVar2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)unaff_RDI[1];
  plVar4 = (longlong *)*unaff_RDI;
  if (plVar4 != plVar1) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x38))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    plVar4 = (longlong *)*unaff_RDI;
  }
  if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar4);
  }
  *unaff_RDI = (longlong)plVar5;
  unaff_RDI[1] = (longlong)(plVar2 + 1);
  unaff_RDI[2] = (longlong)(plVar5 + lVar3);
  return;
}







// 函数: void FUN_1800b89fa(void)
void FUN_1800b89fa(void)

{
  return;
}







