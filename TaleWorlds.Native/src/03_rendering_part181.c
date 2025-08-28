#include "TaleWorlds.Native.Split.h"

// 03_rendering_part181.c - 1 个函数

// 函数: void FUN_1803769d0(longlong param_1)
void FUN_1803769d0(longlong param_1)

{
  longlong lVar1;
  int aiStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined4 **ppuStackX_18;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *apuStack_28 [2];
  code *pcStack_18;
  code *pcStack_10;
  
  uVar2 = 0xfffffffffffffffe;
  auStackX_10[0] = 0;
  aiStackX_8[0] = *(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054);
  ppuStackX_18 = apuStack_28;
  pcStack_18 = FUN_180380430;
  pcStack_10 = FUN_1803802e0;
  apuStack_28[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
  uStack_40 = (undefined4)param_1;
  uStack_3c = (undefined4)((ulonglong)param_1 >> 0x20);
  *apuStack_28[0] = uStack_40;
  apuStack_28[0][1] = uStack_3c;
  *(int **)(apuStack_28[0] + 2) = aiStackX_8;
  *(undefined4 **)(apuStack_28[0] + 4) = auStackX_10;
  lVar1 = ((longlong)aiStackX_8[0] + 0x10b) * 0x20;
  FUN_18015b810(uStack_40,0,*(longlong *)(lVar1 + 8 + param_1) - *(longlong *)(lVar1 + param_1) >> 3
                ,0x10,0xffffffffffffffff,apuStack_28,uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



