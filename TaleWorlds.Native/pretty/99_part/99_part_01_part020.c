#include "TaleWorlds.Native.Split.h"

// 99_part_01_part020.c - 12 个函数

// 函数: void FUN_1800b3a40(void)
void FUN_1800b3a40(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = _DAT_180c86930;
  plVar3 = *(longlong **)(_DAT_180c86930 + 0xa0);
  if (plVar3 != *(longlong **)(_DAT_180c86930 + 0xa8)) {
    do {
      lVar1 = *plVar3;
      if ((*(int *)(lVar1 + 0x160) == 0) && ((*(byte *)(lVar1 + 0x328) & 2) == 0)) {
        FUN_18023b050(lVar1,0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != *(longlong **)(lVar2 + 0xa8));
  }
  return;
}






// 函数: void FUN_1800b3cc0(longlong param_1)
void FUN_1800b3cc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStackX_8 [8];
  longlong *plStackX_10;
  undefined1 auStackX_18 [8];
  longlong *plStackX_20;
  undefined1 auStack_90 [8];
  longlong *plStack_88;
  undefined1 auStack_80 [8];
  longlong *plStack_78;
  undefined1 auStack_70 [8];
  longlong *plStack_68;
  undefined1 auStack_60 [8];
  longlong *plStack_58;
  undefined1 auStack_50 [8];
  longlong *plStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar4 = *(longlong **)(param_1 + 0x138);
  if (plVar4 != *(longlong **)(param_1 + 0x140)) {
    do {
      lVar1 = *plVar4;
      if (*(int *)(lVar1 + 0x1718) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStackX_8,lVar1 + 0x1708);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStackX_10 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStackX_10 = *(longlong **)(lVar1 + 0x1678);
        *(longlong **)(lVar1 + 0x1678) = plVar2;
        if (plStackX_10 != (longlong *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 6000) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStackX_18,lVar1 + 0x1760);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStackX_20 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStackX_20 = *(longlong **)(lVar1 + 0x1680);
        *(longlong **)(lVar1 + 0x1680) = plVar2;
        if (plStackX_20 != (longlong *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x17c8) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStack_90,lVar1 + 0x17b8);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStack_88 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_88 = *(longlong **)(lVar1 + 0x1688);
        *(longlong **)(lVar1 + 0x1688) = plVar2;
        if (plStack_88 != (longlong *)0x0) {
          (**(code **)(*plStack_88 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1820) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStack_80,lVar1 + 0x1810);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStack_78 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_78 = *(longlong **)(lVar1 + 0x1690);
        *(longlong **)(lVar1 + 0x1690) = plVar2;
        if (plStack_78 != (longlong *)0x0) {
          (**(code **)(*plStack_78 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1878) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStack_70,lVar1 + 0x1868);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStack_68 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_68 = *(longlong **)(lVar1 + 0x1698);
        *(longlong **)(lVar1 + 0x1698) = plVar2;
        if (plStack_68 != (longlong *)0x0) {
          (**(code **)(*plStack_68 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x18d0) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStack_60,lVar1 + 0x18c0);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStack_58 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_58 = *(longlong **)(lVar1 + 0x16a0);
        *(longlong **)(lVar1 + 0x16a0) = plVar2;
        if (plStack_58 != (longlong *)0x0) {
          (**(code **)(*plStack_58 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1928) != 0) {
        plVar3 = (longlong *)FUN_1800b4910(param_1,auStack_50,lVar1 + 0x1918);
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          plStack_48 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_48 = *(longlong **)(lVar1 + 0x16a8);
        *(longlong **)(lVar1 + 0x16a8) = plVar2;
        if (plStack_48 != (longlong *)0x0) {
          (**(code **)(*plStack_48 + 0x38))();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != *(longlong **)(param_1 + 0x140));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b3fe0(longlong *param_1)
void FUN_1800b3fe0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  iVar4 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
  iVar3 = _Thrd_id();
  uVar2 = _DAT_180c9105c;
  uVar9 = 0;
  if (iVar3 != iVar4) {
    _DAT_180c9105c = _Thrd_id();
    uVar9 = uVar2;
  }
  iVar4 = _Mtx_lock(param_1 + 0xee);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8500(param_1 + 0xd8);
  iVar4 = _Mtx_unlock(param_1 + 0xee);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0xf8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8500(param_1 + 0xdc);
  iVar4 = _Mtx_unlock(param_1 + 0xf8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0x102);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar6 = param_1 + 0xe8;
  FUN_1800b9030(plVar6,param_1[0xea]);
  *plVar6 = (longlong)plVar6;
  param_1[0xe9] = (longlong)plVar6;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  iVar4 = _Mtx_unlock(param_1 + 0x102);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0x116);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8a90(param_1 + 0x152);
  iVar4 = _Mtx_unlock(param_1 + 0x116);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar6 = param_1 + 0x181;
  lVar8 = 10;
  do {
    plVar7 = (longlong *)*plVar6;
    *plVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_1800b8500(param_1 + 0xe0);
  FUN_1800b8500(param_1 + 0xe4);
  plVar6 = param_1 + 0x18c;
  lVar8 = 0x14;
  do {
    plVar7 = (longlong *)*plVar6;
    *plVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar6 = (longlong *)param_1[0x18b];
  param_1[0x18b] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  plVar6 = (longlong *)param_1[0x1a1];
  plVar7 = (longlong *)param_1[0x1a0];
  if (plVar7 != plVar6) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
    plVar7 = (longlong *)param_1[0x1a0];
  }
  param_1[0x1a1] = (longlong)plVar7;
  iVar4 = _Mtx_lock(param_1 + 0x160);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  param_1[0x159] = param_1[0x158];
  param_1[0x15d] = param_1[0x15c];
  *(undefined1 *)(param_1 + 0x16a) = 0;
  iVar4 = _Mtx_unlock(param_1 + 0x160);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar8 = _DAT_180c86898;
  if (_DAT_180c86898 != 0) {
    FUN_1800bc4a0(_DAT_180c86898);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar8);
  }
  _DAT_180c86898 = 0;
  lVar10 = 8;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x470,8,3);
  _DAT_180c86898 = FUN_1800bc180(uVar5);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    _Mtx_destroy_in_situ();
    _Mtx_destroy_in_situ(lVar8);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar8);
  }
  *param_1 = 0;
  lVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
  _Mtx_init_in_situ(lVar8,2);
  _Mtx_init_in_situ(lVar8 + 0x50,2);
  *param_1 = lVar8;
  plVar6 = (longlong *)param_1[0x27];
  if (plVar6 != (longlong *)param_1[0x28]) {
    do {
      plVar7 = (longlong *)(*plVar6 + 0x1678);
      lVar8 = 7;
      do {
        plVar1 = (longlong *)*plVar7;
        *plVar7 = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      plVar6 = plVar6 + 1;
    } while (plVar6 != (longlong *)param_1[0x28]);
  }
  param_1 = param_1 + 0xa1;
  do {
    if (param_1[-7] - param_1[-8] >> 3 != 0) {
      FUN_18020f150(*(undefined8 *)(*(longlong *)(_DAT_180c82868 + 8) + 8));
      lVar8 = _DAT_180c86938 + 0x20;
      iVar4 = _Mtx_lock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_unlock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      if (_DAT_180c86948 != 0) {
        FUN_18006eb30();
      }
      FUN_18020f150(*(undefined8 *)(*(longlong *)(_DAT_180c82868 + 8) + 8));
      lVar8 = _DAT_180c86938 + 0x20;
      iVar4 = _Mtx_lock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_unlock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_lock(param_1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      plVar6 = (longlong *)param_1[-7];
      plVar7 = (longlong *)param_1[-8];
      if (plVar7 != plVar6) {
        do {
          if ((longlong *)*plVar7 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = (longlong *)param_1[-8];
      }
      param_1[-7] = (longlong)plVar7;
      param_1[-3] = param_1[-4];
      *(undefined1 *)(param_1 + 10) = 0;
      iVar4 = _Mtx_unlock(param_1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
    }
    param_1 = param_1 + -0x13;
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  iVar4 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 != iVar4) {
    _DAT_180c9105c = uVar9;
  }
  return;
}






// 函数: void FUN_1800b4550(longlong param_1)
void FUN_1800b4550(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1800b3fe0();
  FUN_180057830();
  FUN_1808fc8a8(param_1 + 0xc60,8,0x14,FUN_180045af0,uVar1);
  if (*(longlong **)(param_1 + 0xc58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc58) + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0xc08,8,10,FUN_180045af0,uVar1);
  FUN_180058370(param_1 + 0xbd8,*(undefined8 *)(param_1 + 0xbe8));
  FUN_1800b9270(param_1 + 0xba8,*(undefined8 *)(param_1 + 3000));
  _Mtx_destroy_in_situ();
  FUN_1802ab320(param_1 + 0xac0);
  FUN_1800b8a30();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  FUN_1800b9030(param_1 + 0x740,*(undefined8 *)(param_1 + 0x750));
  FUN_180057830();
  FUN_180057830();
  FUN_180057830();
  FUN_180057830();
  FUN_1808fc8a8(param_1 + 0x5a0,0x20,9,FUN_18004c030);
  FUN_180057830();
  *(undefined8 *)(param_1 + 0x560) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x568) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x560) = &UNK_18098bcb0;
  FUN_1808fc8a8(param_1 + 8,0x98,9,FUN_1802ab7f0);
  return;
}






// 函数: void FUN_1800b47e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b47e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800b9030(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b4810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800b9210(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1800b4830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b4830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800b9270(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4860(undefined8 param_1)
void FUN_1800b4860(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,8,10,FUN_180045af0,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b4890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800b9030(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b48c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b48c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800b9210(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1800b48e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b48e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800b9270(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b4910(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong *plStackX_20;
  
  FUN_1800b31f0();
  if (*param_2 == 0) {
    if (*(longlong *)(param_1 + 0xc58) == 0) {
      FUN_1800be9a0(_DAT_180c86898,&plStackX_20,0);
      lVar1 = plStackX_20[0x3c];
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      FUN_180056f10(param_1 + 0xc58,lVar1);
    }
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_3 + 8);
    }
    FUN_1806272a0(&UNK_180a02b98,puVar3);
    plVar2 = *(longlong **)(param_1 + 0xc58);
    if (plVar2 != (longlong *)0x0) {
      plStackX_20 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_20 = (longlong *)*param_2;
    *param_2 = (longlong)plVar2;
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
  }
  return param_2;
}



undefined8 FUN_1800b4a00(undefined8 param_1,undefined8 param_2)

{
  FUN_1800b30d0();
  return param_2;
}



undefined8 * FUN_1800b4a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1808fc838(param_1 + 1,0x98,9,FUN_1802ab780,FUN_1802ab7f0);
  param_1[0xac] = &UNK_18098bcb0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xac] = &UNK_180a3c3e0;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 3;
  FUN_1808fc838(param_1 + 0xb4,0x20,9,FUN_180056e10,FUN_18004c030);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 3;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 3;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 3;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 3;
  puVar1 = param_1 + 0xe8;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xed) = 3;
  *puVar1 = puVar1;
  param_1[0xe9] = puVar1;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  _Mtx_init_in_situ(param_1 + 0xee,0x102);
  _Mtx_init_in_situ(param_1 + 0xf8,0x102);
  _Mtx_init_in_situ(param_1 + 0x102,0x102);
  _Mtx_init_in_situ(param_1 + 0x10c,0x102);
  _Mtx_init_in_situ(param_1 + 0x116,0x102);
  _Mtx_init_in_situ(param_1 + 0x120,0x102);
  _Mtx_init_in_situ(param_1 + 0x12a,0x102);
  _Mtx_init_in_situ(param_1 + 0x134,0x102);
  _Mtx_init_in_situ(param_1 + 0x13e,0x102);
  _Mtx_init_in_situ(param_1 + 0x148,2);
  puVar1 = param_1 + 0x152;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x157) = 0x1a;
  *puVar1 = puVar1;
  param_1[0x153] = puVar1;
  param_1[0x154] = 0;
  *(undefined1 *)(param_1 + 0x155) = 0;
  param_1[0x156] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  *(undefined4 *)(param_1 + 0x15b) = 3;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined4 *)(param_1 + 0x15f) = 3;
  _Mtx_init_in_situ(param_1 + 0x160,0x102);
  *(undefined1 *)(param_1 + 0x16a) = 1;
  _Mtx_init_in_situ(param_1 + 0x16b,2);
  puVar1 = param_1 + 0x175;
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x17a) = 3;
  *puVar1 = puVar1;
  param_1[0x176] = puVar1;
  param_1[0x177] = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  param_1[0x179] = 0;
  puVar1 = param_1 + 0x17b;
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x180) = 3;
  *puVar1 = puVar1;
  param_1[0x17c] = puVar1;
  param_1[0x17d] = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  param_1[0x17f] = 0;
  FUN_1808fc838(param_1 + 0x181,8,10,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x18b] = 0;
  FUN_1808fc838(param_1 + 0x18c,8,0x14,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  *(undefined4 *)(param_1 + 0x1a3) = 3;
  *param_1 = 0;
  FUN_1800b3fe0(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b4e00(undefined8 param_1,longlong *param_2,undefined4 param_3)
void FUN_1800b4e00(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  uVar9 = 0xfffffffffffffffe;
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  lVar6 = _DAT_180c8a9b8;
  if (iVar4 == 1) {
    uStack_30 = 0;
    uStack_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    FUN_18023c450(param_2,1,param_3,&uStack_30,uVar9);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  else {
    if (iVar4 == 4) {
      lVar1 = _DAT_180c8a9b8 + 0x38;
      iVar4 = _Mtx_lock(lVar1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      if ((param_2[0x15] != 0) && (param_2[0x17] == 0)) {
        uStack_30 = 0;
        uStack_28 = 0;
        iVar4 = 0;
        pcStack_20 = (code *)0x0;
        pcStack_18 = _guard_check_icall;
        FUN_18014a370(param_2,1,&uStack_30);
        if (pcStack_20 != (code *)0x0) {
          (*pcStack_20)(&uStack_30,0,0);
        }
        plVar5 = (longlong *)param_2[0x17];
        lVar8 = ((plVar5[1] - *plVar5) / 0x30) * 0x30 +
                (plVar5[5] - plVar5[4] & 0xffffffffffffffe0U);
        lVar7 = plVar5[9] - plVar5[8];
        lVar2 = lVar7 >> 0x3f;
        lVar7 = lVar7 / 0x88 + lVar2;
        if (lVar7 != lVar2) {
          plVar5 = (longlong *)(plVar5[8] + 0x30);
          do {
            lVar8 = lVar8 + (*plVar5 - plVar5[-1] >> 4) * 0x14 +
                            ((plVar5[8] - plVar5[7]) / 0x18) * 0x18;
            iVar4 = iVar4 + 1;
            plVar5 = plVar5 + 0x11;
          } while ((ulonglong)(longlong)iVar4 < (ulonglong)(lVar7 - lVar2));
        }
        *(longlong *)(lVar6 + 0x30) = *(longlong *)(lVar6 + 0x30) + lVar8;
      }
      iVar4 = _Mtx_unlock(lVar1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      return;
    }
    if (iVar4 == 8) {
      plVar5 = param_2;
      if ((*(byte *)((longlong)param_2 + 0xfd) & 0x20) == 0) {
        uStack_30 = 0x18007c88a;
        plVar5 = (longlong *)func_0x000180085de0(param_2[0x36],1);
      }
      if (0 < (int)plVar5[0x40]) {
        lVar6 = param_2[0x37];
        cVar3 = *(char *)(lVar6 + 0x38c);
        if (cVar3 == '\t') {
          uStack_30 = 0x18007c8aa;
          cVar3 = func_0x00018022d300();
          *(char *)(lVar6 + 0x38c) = cVar3;
        }
        uStack_30 = 0x18007c8c7;
        cVar3 = FUN_18007b240(param_2,param_2 + 0x3d,cVar3,1);
        if (cVar3 == '\0') {
          *(byte *)((longlong)param_2 + 0xfe) = *(byte *)((longlong)param_2 + 0xfe) & 0xfb;
        }
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




