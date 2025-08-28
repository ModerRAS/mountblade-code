#include "TaleWorlds.Native.Split.h"

// 03_rendering_part463_sub002.c - 1 个函数

// 函数: void FUN_180516bd0(longlong param_1,ushort param_2,int16_t param_3)
void FUN_180516bd0(longlong param_1,ushort param_2,int16_t param_3)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
  *puVar1 = *puVar1 | param_2;
  FUN_180516e40(param_1,param_3);
  if ((param_2 & 0x33ff) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x590);
    *(code **)(lVar3 + 0x3448) = FUN_180516cb0;
    *(longlong *)(lVar3 + 0x3440) = param_1;
  }
  if ((param_2 & 0x2000) != 0) {
    lVar3 = *(longlong *)
             ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3778 + *(longlong *)(param_1 + 0x8d8))
    ;
    if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x8be) == '\0')) ||
        (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x8a8) + 0x1c0),
        *(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x1c8) - (longlong)plVar2 >> 3 == 0)) ||
       ((lVar3 = *(longlong *)(*plVar2 + 0x260), lVar3 == 0 ||
        (lVar3 = *(longlong *)(lVar3 + 0x210), lVar3 == 0)))) {
      lVar3 = 0;
    }
    FUN_1805778d0(*(uint64_t *)(param_1 + 0x590),lVar3);
  }
  return;
}






