#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part226.c - 1 个函数

// 函数: void FUN_1807994fd(void)
void FUN_1807994fd(void)

{
  return;
}



uint64_t FUN_180799590(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x440);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x440);
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x444);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x444);
  }
  else {
    if ((param_2 != 2) || (*param_3 = *(int32_t *)(lVar1 + 0x448), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x448);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)fVar2);
}





