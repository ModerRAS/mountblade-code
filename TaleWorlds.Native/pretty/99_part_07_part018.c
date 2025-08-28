#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part018.c - 12 个函数

// 函数: void FUN_1804ac640(void)
void FUN_1804ac640(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)0x180c96248;
  lVar4 = 5;
  do {
    plVar1 = (longlong *)plVar3[-5];
    plVar3[-5] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (*plVar3 != 0) {
      FUN_1801a2ea0();
      plVar1 = (longlong *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    plVar1 = (longlong *)plVar3[5];
    if (plVar1 != (longlong *)0x0) {
      lVar2 = __RTCastToVoid(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    plVar3[5] = 0;
    plVar1 = (longlong *)plVar3[10];
    plVar3[10] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}






// 函数: void FUN_1804ac720(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
void FUN_1804ac720(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  int32_t param_5)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  int iVar4;
  void *puVar5;
  longlong *plStack_70;
  longlong *plStack_68;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  ulonglong uStack_48;
  int32_t uStack_40;
  
  iVar4 = _Mtx_lock(param_1 + 0xa0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plStack_70 = (longlong *)0x0;
  plStack_68 = (longlong *)0x0;
  puStack_60 = &unknown_var_3456_ptr;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_70 != (longlong *)0x0) {
    lVar1 = *plStack_70;
    plStack_70 = param_2;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_70;
  }
  plStack_70 = plVar3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plVar3 = param_3;
  if (plStack_68 != (longlong *)0x0) {
    lVar1 = *plStack_68;
    plStack_68 = param_3;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_68;
  }
  plStack_68 = plVar3;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_4 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_4 + 8);
  }
  (**(code **)(puStack_60 + 0x10))(&puStack_60,puVar5);
  uStack_40 = param_5;
  puVar2 = *(uint64_t **)(param_1 + 0xf8);
  if (puVar2 < *(uint64_t **)(param_1 + 0x100)) {
    *(uint64_t **)(param_1 + 0xf8) = puVar2 + 7;
    *puVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x28))();
    }
    puVar2[1] = plStack_68;
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x28))();
    }
    FUN_180627ae0(puVar2 + 2,&puStack_60);
    *(int32_t *)(puVar2 + 6) = uStack_40;
  }
  else {
    FUN_1804accc0(param_1 + 0xf0,&plStack_70);
  }
  puStack_60 = &unknown_var_3456_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  puStack_60 = &unknown_var_720_ptr;
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  iVar4 = _Mtx_unlock(param_1 + 0xa0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ac910(uint64_t param_1,int32_t param_2,longlong param_3,longlong *param_4,
void FUN_1804ac910(uint64_t param_1,int32_t param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,int32_t param_6)

{
  longlong lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  longlong *plVar4;
  void *puVar5;
  int32_t auStack_58 [2];
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  longlong *plStack_30;
  longlong *plStack_28;
  int32_t uStack_20;
  
  puStack_50 = &unknown_var_3456_ptr;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  plStack_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_3 + 8);
  }
  auStack_58[0] = param_2;
  FUN_180627c50(&puStack_50,puVar5,FUN_180627c50,param_4,0xfffffffffffffffe);
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x28))(param_4);
  }
  plVar4 = param_4;
  if (plStack_30 != (longlong *)0x0) {
    lVar1 = *plStack_30;
    plStack_30 = param_4;
    (**(code **)(lVar1 + 0x38))();
    plVar4 = plStack_30;
  }
  plStack_30 = plVar4;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))(param_5);
  }
  plVar4 = plStack_28;
  plStack_28 = param_5;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  puVar2 = _DAT_180c96338;
  uStack_20 = param_6;
  if (_DAT_180c96338 < _DAT_180c96340) {
    puVar3 = _DAT_180c96338 + 0x10;
    *_DAT_180c96338 = auStack_58[0];
    _DAT_180c96338 = puVar3;
    FUN_180627ae0(puVar2 + 2,&puStack_50);
    *(longlong **)(puVar2 + 10) = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x28))();
    }
    *(longlong **)(puVar2 + 0xc) = plStack_28;
    if (plStack_28 != (longlong *)0x0) {
      (**(code **)(*plStack_28 + 0x28))();
    }
    puVar2[0xe] = uStack_20;
  }
  else {
    FUN_1804ace60(&system_data_6330,auStack_58);
  }
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x38))();
  }
  puStack_50 = &unknown_var_3456_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804acad0(uint64_t param_1,int32_t param_2,longlong *param_3,longlong *param_4,
void FUN_1804acad0(uint64_t param_1,int32_t param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,uint64_t param_6,int param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  longlong *plStack_48;
  int32_t uStack_40;
  longlong *plStack_38;
  int32_t uStack_30;
  
  plVar1 = (longlong *)*param_4;
  uVar3 = 0xffffffff;
  if (plVar1 == (longlong *)0x0) {
    uStack_40 = 0xffffffff;
  }
  else {
    uStack_40 = (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar2 = *(longlong **)((longlong)param_7 * 8 + 0x180c96248);
  plStack_48 = plVar1;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  }
  plStack_38 = plVar2;
  uStack_30 = uVar3;
  (**(code **)(_DAT_180c8ece0 + 0xf0))(param_2,&plStack_38,&plStack_48);
  if ((*param_5 != 0) && (*param_4 != 0)) {
    FUN_1804ac720(&system_data_6220,*param_4,*param_5,param_6,param_7);
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  if ((longlong *)*param_5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_5 + 0x38))();
  }
  return;
}






// 函数: void FUN_1804acc00(longlong *param_1)
void FUN_1804acc00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_1804ac5c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804acc60(longlong *param_1)
void FUN_1804acc60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_1804ac4d0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804accc0(longlong *param_1,uint64_t param_2)
void FUN_1804accc0(longlong *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar7 = (lVar6 - lVar5) / 0x38;
  puVar1 = (uint64_t *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_1804acd40;
  }
  puVar1 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x38,(char)param_1[3],lVar5,0xfffffffffffffffe);
  lVar6 = param_1[1];
  lVar5 = *param_1;
LAB_1804acd40:
  puVar4 = puVar1;
  if (lVar5 != lVar6) {
    lVar5 = lVar5 - (longlong)puVar1;
    puVar3 = puVar1 + 3;
    do {
      *puVar4 = *(uint64_t *)(lVar5 + -0x18 + (longlong)puVar3);
      *(uint64_t *)(lVar5 + -0x18 + (longlong)puVar3) = 0;
      puVar3[-2] = *(uint64_t *)(lVar5 + -0x10 + (longlong)puVar3);
      *(uint64_t *)(lVar5 + -0x10 + (longlong)puVar3) = 0;
      puVar3[-1] = &unknown_var_720_ptr;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[-1] = &unknown_var_3456_ptr;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(lVar5 + 8 + (longlong)puVar3);
      *puVar3 = *(uint64_t *)(lVar5 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + 0x14) = *(int32_t *)(lVar5 + 0x14 + (longlong)puVar3);
      *(int32_t *)(puVar3 + 2) = *(int32_t *)(lVar5 + 0x10 + (longlong)puVar3);
      *(int32_t *)(lVar5 + 8 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar5 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar5 + 0x10 + (longlong)puVar3) = 0;
      *(int32_t *)(puVar3 + 3) = *(int32_t *)(lVar5 + 0x18 + (longlong)puVar3);
      puVar4 = puVar4 + 7;
      lVar2 = (longlong)puVar3 + lVar5 + 0x20;
      puVar3 = puVar3 + 7;
    } while (lVar2 != lVar6);
  }
  FUN_1804ac550(puVar4,param_2);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar6) {
    do {
      FUN_1804ac5c0(lVar5);
      lVar5 = lVar5 + 0x38;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar4 + 7);
    param_1[2] = (longlong)(puVar1 + lVar7 * 7);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ace60(longlong *param_1,uint64_t param_2)
void FUN_1804ace60(longlong *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar5 = lVar7 - lVar6 >> 6;
  puVar1 = (int32_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_1804aceca;
  }
  puVar1 = (int32_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 << 6,(char)param_1[3],lVar7,0xfffffffffffffffe);
  lVar7 = param_1[1];
  lVar6 = *param_1;
LAB_1804aceca:
  puVar4 = puVar1;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 - (longlong)puVar1;
    puVar3 = (uint64_t *)(puVar1 + 4);
    do {
      *puVar4 = *(int32_t *)(lVar6 + -0x10 + (longlong)puVar3);
      puVar3[-1] = &unknown_var_720_ptr;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[-1] = &unknown_var_3456_ptr;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(lVar6 + 8 + (longlong)puVar3);
      *puVar3 = *(uint64_t *)(lVar6 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + 0x14) = *(int32_t *)(lVar6 + 0x14 + (longlong)puVar3);
      *(int32_t *)(puVar3 + 2) = *(int32_t *)(lVar6 + 0x10 + (longlong)puVar3);
      *(int32_t *)(lVar6 + 8 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + 0x10 + (longlong)puVar3) = 0;
      puVar3[3] = *(uint64_t *)(lVar6 + 0x18 + (longlong)puVar3);
      *(uint64_t *)(lVar6 + 0x18 + (longlong)puVar3) = 0;
      puVar3[4] = *(uint64_t *)(lVar6 + 0x20 + (longlong)puVar3);
      *(uint64_t *)(lVar6 + 0x20 + (longlong)puVar3) = 0;
      *(int32_t *)(puVar3 + 5) = *(int32_t *)(lVar6 + 0x28 + (longlong)puVar3);
      puVar4 = puVar4 + 0x10;
      lVar2 = (longlong)puVar3 + lVar6 + 0x30;
      puVar3 = puVar3 + 8;
    } while (lVar2 != lVar7);
  }
  FUN_1804ac460(puVar4,param_2);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar7) {
    do {
      FUN_1804ac4d0(lVar6);
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != lVar7);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar4 + 0x10);
    param_1[2] = (longlong)(puVar1 + lVar5 * 0x10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804acff0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804acff0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  
  (**(code **)(_DAT_180c8f008 + 0xe8))
            (&system_data_e0f8,&system_data_cc08,*(code **)(_DAT_180c8f008 + 0xe8),param_4,
             0xfffffffffffffffe);
  (**(code **)(_DAT_180c8f008 + 0xf8))(&unknown_var_5356_ptr,FUN_1804ad200);
  FUN_1805698e0(param_1);
  (**(code **)(param_1 + 0x108))();
  *(longlong *)(param_1 + 0x20) = param_1;
  iVar1 = (**(code **)(param_1 + 0x2c8))();
  if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  *(int *)(param_1 + 0x10) = iVar1;
  (**(code **)(param_1 + 0x2e8))(*(int32_t *)(param_1 + 0x10));
  (**(code **)(_DAT_180c8a9c0 + 0xb0))();
  *(int8_t *)(param_1 + 0xc) = 1;
  return;
}



uint64_t *
FUN_1804ad0d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x18,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6c726f57656c6154;
  puVar1[1] = 0x746e756f4d2e7364;
  puVar1[2] = 0x6564616c42646e41;
  *(int8_t *)(puVar1 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x18;
  return param_2;
}



uint64_t *
FUN_1804ad160(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x24,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6c726f57656c6154;
  puVar1[1] = 0x746e756f4d2e7364;
  puVar1[2] = 0x6564616c42646e41;
  puVar1[3] = 0x6e614d65726f432e;
  *(int32_t *)(puVar1 + 4) = 0x64656761;
  *(int8_t *)((longlong)puVar1 + 0x24) = 0;
  *(int32_t *)(param_2 + 2) = 0x24;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ad200(uint64_t param_1)
void FUN_1804ad200(uint64_t param_1)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c8ece0;
  func_0x00018056c550(_DAT_180c8ece0 + 0x18,*(int32_t *)(_DAT_180c8ece0 + 8),param_1);
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  return;
}



uint64_t * FUN_1804ad240(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_5408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x350);
  }
  return param_1;
}






// 函数: void FUN_1804ad2f0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804ad2f0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 == (uint64_t *)0x0) {
    *param_1 = 0;
    return;
  }
  lVar2 = __RTCastToVoid(puVar1);
  (**(code **)*puVar1)(puVar1,0,(uint64_t *)*puVar1,param_4,uVar3);
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  *param_1 = 0;
  return;
}






// 函数: void FUN_1804ad370(longlong param_1,longlong param_2)
void FUN_1804ad370(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  void *puVar6;
  char *pcVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  uint64_t *puVar11;
  char *pcVar12;
  char *pcVar13;
  int32_t uVar14;
  void *puStack_60;
  void *puStack_58;
  int iStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  byte *pbStack_38;
  int iStack_30;
  ulonglong uStack_28;
  
  pcVar7 = (char *)0x0;
  uVar14 = 0;
  puStack_60 = &unknown_var_3456_ptr;
  uStack_48 = 0;
  puStack_58 = (void *)0x0;
  iStack_50 = 0;
  pcVar12 = "bone_type";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(uint64_t **)(param_2 + 0x40); puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar3 = pcVar7;
    }
    else {
      pcVar3 = (char *)puVar11[2];
    }
    if (pcVar3 == pcVar13 + -0x180a2e167) {
      pcVar3 = pcVar3 + (longlong)pcVar12;
      if (pcVar3 <= pcVar12) {
LAB_1804ad428:
        lVar5 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar5 = puVar11[1];
        }
        FUN_180627c50(&puStack_60,lVar5,pcVar3,puVar11,0xfffffffffffffffe);
        break;
      }
      lVar5 = (longlong)&unknown_var_5480_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar5]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1804ad428;
      }
    }
  }
  if (iStack_50 == 0) {
    FUN_180626f80(&unknown_var_8296_ptr);
  }
  else {
    uVar10 = 0;
    lVar5 = func_0x0001800464d0(&puStack_60);
    do {
      cVar9 = (char)uVar10;
      pcVar12 = *(char **)(&unknown_var_6704_ptr + (longlong)cVar9 * 8);
      lVar8 = lVar5 - (longlong)pcVar12;
      do {
        cVar1 = *pcVar12;
        cVar2 = pcVar12[lVar8];
        if (cVar1 != cVar2) break;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_1804ad4c8;
      uVar10 = (ulonglong)(byte)(cVar9 + 1U);
    } while ((char)(cVar9 + 1U) < '\x1c');
    puVar6 = &system_buffer_ptr;
    if (puStack_58 != (void *)0x0) {
      puVar6 = puStack_58;
    }
    FUN_180626f80(&unknown_var_8320_ptr,puVar6,&unknown_var_8396_ptr);
  }
  cVar9 = -1;
LAB_1804ad4c8:
  *(char *)(param_1 + 0xc) = cVar9;
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  pbStack_38 = (byte *)0x0;
  iStack_30 = 0;
  pcVar12 = "axis";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(uint64_t **)(param_2 + 0x40); puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar3 = pcVar7;
    }
    else {
      pcVar3 = (char *)puVar11[2];
    }
    if (pcVar3 == pcVar13 + -0x180a2e15f) {
      pcVar3 = pcVar3 + (longlong)pcVar12;
      if (pcVar3 <= pcVar12) {
LAB_1804ad540:
        lVar5 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar5 = puVar11[1];
        }
        FUN_180627c50(&puStack_40,lVar5);
        break;
      }
      lVar5 = (longlong)&unknown_var_5472_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar5]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1804ad540;
      }
    }
  }
  *(int32_t *)(param_1 + 8) = 0;
  if (iStack_30 == 1) {
    if ((*pbStack_38 == 0x79) && (pbStack_38[1] == 0)) {
      *(int32_t *)(param_1 + 8) = 1;
    }
    else {
      uVar4 = *pbStack_38 - 0x7a;
      if (uVar4 == 0) {
        uVar4 = (uint)pbStack_38[1];
      }
      if (uVar4 == 0) {
        uVar14 = 2;
      }
      *(int32_t *)(param_1 + 8) = uVar14;
    }
  }
  pcVar12 = "key_min";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(uint64_t **)(param_2 + 0x40); puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar3 = pcVar7;
    }
    else {
      pcVar3 = (char *)puVar11[2];
    }
    if (pcVar3 == pcVar13 + -0x180a2e157) {
      pcVar3 = pcVar3 + (longlong)pcVar12;
      if (pcVar3 <= pcVar12) {
LAB_1804ad612:
        lVar5 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar5 = puVar11[1];
        }
        FUN_18010cbc0(lVar5,&system_data_6430,param_1);
        break;
      }
      lVar5 = (longlong)&unknown_var_5464_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar5]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1804ad612;
      }
    }
  }
  pcVar12 = "key_max";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar11 == (uint64_t *)0x0) {
LAB_1804ad6ac:
      if ((param_1 + 4 != 0) && (pcVar7 != (char *)0x0)) {
        FUN_18010cbc0(pcVar7,&system_data_6430,param_1 + 4);
      }
      puStack_40 = &unknown_var_3456_ptr;
      if (pbStack_38 == (byte *)0x0) {
        pbStack_38 = (byte *)0x0;
        uStack_28 = uStack_28 & 0xffffffff00000000;
        puStack_40 = &unknown_var_720_ptr;
        puStack_60 = &unknown_var_3456_ptr;
        if (puStack_58 == (void *)0x0) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar3 = pcVar7;
    }
    else {
      pcVar3 = (char *)puVar11[2];
    }
    if (pcVar3 == pcVar13 + -0x180a2e14f) {
      pcVar3 = pcVar3 + (longlong)pcVar12;
      if (pcVar3 <= pcVar12) {
LAB_1804ad696:
        pcVar7 = (char *)0x180d48d24;
        if ((char *)puVar11[1] != (char *)0x0) {
          pcVar7 = (char *)puVar11[1];
        }
        goto LAB_1804ad6ac;
      }
      lVar5 = (longlong)&unknown_var_5456_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar5]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1804ad696;
      }
    }
    puVar11 = (uint64_t *)puVar11[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




