#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part403.c - 2 个函数

// 函数: void FUN_180490f80(uint64_t *param_1)
void FUN_180490f80(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = &unknown_var_8856_ptr;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = 0;
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x13] = 0;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x14] = 0;
  if (param_1[0x46] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x46] = 0;
  if (param_1[0x47] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x47] = 0;
  if (param_1[0x36] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x36] = 0;
  if (param_1[0x37] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x37] = 0;
  if (param_1[0x3a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3a] = 0;
  if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3b] = 0;
  if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3c] = 0;
  if (param_1[0x3d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3d] = 0;
  if (param_1[0x3e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3e] = 0;
  if (param_1[0x3f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3f] = 0;
  if (param_1[0x4c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x4c] = 0;
  if (param_1[0x4d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x4d] = 0;
  if (param_1[0x40] == 0) {
    param_1[0x40] = 0;
    if (param_1[0x41] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[0x41] = 0;
    plVar1 = param_1 + 0xd;
    iVar3 = (int)(param_1[0xe] - *plVar1 >> 3);
    if (0 < iVar3) {
      do {
        plVar2 = *(longlong **)(*plVar1 + lVar4 * 8);
        if (plVar2 != (longlong *)0x0) {
          FUN_180490c90(plVar2[0x16]);
          plVar2[0x16] = 0;
          if (plVar2[10] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plVar2[10] = 0;
          if (plVar2[0xb] == 0) {
            plVar2[0xb] = 0;
            if (plVar2[0xc] == 0) {
              plVar2[0xc] = 0;
              if ((longlong *)*plVar2 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar2 + 0x38))();
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar2);
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(*plVar1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    if (*plVar1 == 0) {
      if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 0x38))();
      }
      _Mtx_destroy_in_situ();
      *param_1 = &unknown_var_9360_ptr;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180491260(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStackX_18;
  longlong **pplStackX_20;
  
  plStackX_10 = param_2;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0xd0,8,3,0xfffffffffffffffe);
  uVar3 = FUN_180490790(uVar3);
  pplStackX_20 = &plStackX_8;
  plStackX_8 = (longlong *)*param_2;
  uStackX_18 = uVar3;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180490840(uVar3,&plStackX_8);
  *(int8_t *)(param_1 + 0x60) = 1;
  lVar1 = param_1 + 8;
  pplStackX_20 = (longlong **)lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_18005ea90(param_1 + 0x68,&uStackX_18);
  iVar2 = _Mtx_unlock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return uVar3;
}





// 函数: void FUN_180491340(longlong param_1,longlong param_2)
void FUN_180491340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z();
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  iVar4 = 0;
  iVar2 = (int)(*(longlong *)(param_1 + 0x70) - lVar1 >> 3);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (param_2 == *(longlong *)(lVar1 + lVar3 * 8)) {
        lVar3 = (longlong)iVar4 * 8;
        FUN_1804903f0(*(uint64_t *)(lVar3 + lVar1));
        *(uint64_t *)(lVar3 + *(longlong *)(param_1 + 0x68)) = 0;
        *(uint64_t *)(*(longlong *)(param_1 + 0x68) + lVar3) =
             *(uint64_t *)(*(longlong *)(param_1 + 0x68) + ((longlong)iVar2 + -1) * 8);
        FUN_180057340(param_1 + 0x68);
        *(int8_t *)(param_1 + 0x60) = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = _Mtx_unlock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



