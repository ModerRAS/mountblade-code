#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part194_sub002.c - 1 个函数

// 函数: void FUN_18077ed00(int64_t *param_1)
void FUN_18077ed00(int64_t *param_1)

{
                    // WARNING: Subroutine does not return
  memset(*param_1 + 0x22c,0,0x100);
}



uint64_t FUN_18077ed40(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if ((*(int64_t *)(lVar1 + 0x350) == 0) &&
     (uVar2 = (**(code **)(*(int64_t *)(lVar1 + 0xd8) + 0x40))
                        (lVar1 + 0xb0,(int64_t *)(lVar1 + 0x350),0,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 6;
}



uint64_t FUN_18077edf0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x360);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x360);
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x364);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x364);
  }
  else if (param_2 == 2) {
    *param_3 = *(int32_t *)(lVar1 + 0x35c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x35c);
  }
  else if (param_2 == 3) {
    *param_3 = *(int32_t *)(lVar1 + 0x368);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x368);
  }
  else {
    if (param_2 != 4) {
      return 0x1f;
    }
    *param_3 = *(int32_t *)(lVar1 + 0x36c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x36c);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)fVar2);
}



uint64_t FUN_18077eef0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  void *puVar2;
  
  if (param_2 != 6) {
    return 0x1f;
  }
  lVar1 = *param_1;
  *param_3 = *(int32_t *)(lVar1 + 0x370);
  if (param_4 != 0) {
    puVar2 = &unknown_var_8208_ptr;
    if (*(int *)(lVar1 + 0x370) != 0) {
      puVar2 = &unknown_var_8200_ptr;
    }
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_552_ptr,puVar2);
  }
  return 0;
}



uint64_t
FUN_18077ef70(int64_t *param_1,int param_2,uint64_t *param_3,int32_t *param_4,int64_t param_5
             )

{
  int64_t lVar1;
  void *puVar2;
  
  if (param_2 == 5) {
    lVar1 = *param_1;
    *param_3 = (int *)(lVar1 + 0x358);
    *param_4 = 4;
    if (param_5 != 0) {
      puVar2 = &unknown_var_2336_ptr;
      if (*(int *)(lVar1 + 0x358) != 0) {
        puVar2 = &unknown_var_2328_ptr;
      }
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_5,0x20,&unknown_var_552_ptr,puVar2);
    }
  }
  return 0;
}






