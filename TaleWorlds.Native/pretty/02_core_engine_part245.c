#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part245.c - 14 个函数

// 函数: void FUN_18020e0e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_18020e0e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  uint64_t *puStackX_20;
  
  *param_1 = &unknown_var_2392_ptr;
  puStackX_10 = param_1 + 2;
  *puStackX_10 = &system_state_ptr;
  lVar4 = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *puStackX_10 = &system_config_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[0xc] = param_4;
  param_1[0xd] = 0;
  uStackX_18 = param_3;
  lVar3 = FUN_18005ee30(param_4,1,&puStackX_10,param_4,0xfffffffffffffffe);
  if (lVar3 != 0) {
    lVar4 = lVar3 + 8;
  }
  param_1[0xe] = lVar4;
  if (lVar4 != 0) {
    *(uint64_t **)(lVar4 + 0x10) = param_1 + 0xe;
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  LOCK();
  piVar1 = (int *)(param_4 + 0x25c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(int *)(param_1 + 0xf) = iVar2;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0xffffffff;
  puStackX_20 = param_1 + 0x13;
                    // WARNING: Subroutine does not return
  memset(puStackX_20,0,0x58);
}



uint64_t FUN_18020e370(uint64_t param_1,ulonglong param_2)

{
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x208);
  }
  return param_1;
}





// 函数: void FUN_18020e3b0(longlong *param_1)
void FUN_18020e3b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)param_1[4];
  puVar4 = (uint64_t *)param_1[5];
  if (plVar2 != (longlong *)param_1[6]) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        puVar4 = puVar4 + 1;
        plVar2 = (longlong *)*puVar4;
        plVar3 = plVar2 + 0x20;
      }
    } while (plVar2 != (longlong *)param_1[6]);
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18020e3d0(longlong *param_1)
void FUN_18020e3d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)param_1[4];
  puVar4 = (uint64_t *)param_1[5];
  if (plVar2 != (longlong *)param_1[6]) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        puVar4 = puVar4 + 1;
        plVar2 = (longlong *)*puVar4;
        plVar3 = plVar2 + 0x20;
      }
    } while (plVar2 != (longlong *)param_1[6]);
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18020e3f0(longlong *param_1)
void FUN_18020e3f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)param_1[4];
  puVar4 = (uint64_t *)param_1[5];
  if (plVar2 != (longlong *)param_1[6]) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        puVar4 = puVar4 + 1;
        plVar2 = (longlong *)*puVar4;
        plVar3 = plVar2 + 0x20;
      }
    } while (plVar2 != (longlong *)param_1[6]);
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18020e410(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18020e410(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  longlong param_5,uint64_t *param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_5;
  *param_1 = &unknown_var_2392_ptr;
  param_1[2] = &system_state_ptr;
  lVar5 = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &system_config_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[0xc] = param_5;
  param_1[0xd] = param_6;
  lVar4 = FUN_18005ee30(param_5,1,&param_5,param_4,0xfffffffffffffffe);
  if (lVar4 != 0) {
    lVar5 = lVar4 + 8;
  }
  param_1[0xe] = lVar5;
  if (lVar5 != 0) {
    *(uint64_t **)(lVar5 + 0x10) = param_1 + 0xe;
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x25c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(int *)(param_1 + 0xf) = iVar2;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0xffffffff;
  param_6 = param_1 + 0x13;
                    // WARNING: Subroutine does not return
  memset(param_6,0,0x58);
}





// 函数: void FUN_18020e6c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020e6c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2392_ptr;
  cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,0xfffffffffffffffe);
  while (cVar1 != '\0') {
    cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,uVar2);
  }
  if (param_1[1] == 0) {
    param_1[1] = 0;
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x2a);
    _Mtx_destroy_in_situ();
    FUN_18020f530();
    if (param_1[0xe] != 0) {
      *(uint64_t *)(param_1[0xe] + 0x10) = 0;
      *(int8_t *)(param_1[0xe] + 8) = 1;
    }
    param_1[2] = &system_state_ptr;
    return;
  }
  if (*(int *)(param_1[1] + 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  terminate();
}





// 函数: void FUN_18020e7b0(longlong param_1)
void FUN_18020e7b0(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  *(int8_t *)(param_1 + 0x58) = 0;
  FUN_1800466d0(param_1 + 0x150);
  puVar1 = *(uint64_t **)(param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    __Throw_Cpp_error_std__YAXH_Z(1);
    if (*(int *)(puVar1 + 1) == 0) {
      __Throw_Cpp_error_std__YAXH_Z(1);
    }
  }
  iVar2 = _Thrd_id();
  if (*(int *)(puVar1 + 1) == iVar2) {
    __Throw_Cpp_error_std__YAXH_Z(5);
  }
  uStack_18 = *(int32_t *)puVar1;
  uStack_14 = *(int32_t *)((longlong)puVar1 + 4);
  uStack_10 = *(int32_t *)(puVar1 + 1);
  uStack_c = *(int32_t *)((longlong)puVar1 + 0xc);
  iVar2 = _Thrd_join(&uStack_18,0);
  if (iVar2 != 0) {
    __Throw_Cpp_error_std__YAXH_Z(2);
  }
  *(int32_t *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020e840(longlong param_1)
void FUN_18020e840(longlong param_1)

{
  uint64_t uVar1;
  int iVar2;
  longlong *plVar3;
  
  *(int8_t *)(param_1 + 0x58) = 1;
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1808fc418(0x10);
  *plVar3 = param_1;
  plVar3[1] = (longlong)&unknown_var_1688_ptr;
  FUN_18020f620(uVar1);
  if (plVar3 != (longlong *)0x0) {
    free();
  }
  *(uint64_t *)(param_1 + 8) = uVar1;
  iVar2 = _Mtx_lock(param_1 + 0x198);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(param_1 + 0x1e8) = 0;
  iVar2 = _Mtx_unlock(param_1 + 0x198);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_18020e8e0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020e8e0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  int8_t uVar5;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = param_1 + 0xf0;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar5 = 1;
  FUN_180060fc0(param_1 + 0x98,param_2);
  LOCK();
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  UNLOCK();
  puVar1 = *(uint64_t **)(param_1 + 0x1f0);
  do {
    iVar2 = ReleaseSemaphore(*puVar1,1,0,param_4,uVar4,lVar3,uVar5);
  } while (iVar2 == 0);
  FUN_1800466d0(param_1 + 0x150);
  iVar2 = _Mtx_unlock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020e9b0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020e9b0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = GetCurrentThread();
  param_1[8] = lVar2;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0xc) =
       (int)param_1[10];
  FUN_1806279c0(&puStack_30,param_1 + 2,param_3,param_4,uVar3);
  FUN_180623fd0(param_1[8],&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &system_state_ptr;
  lVar2 = param_1[0x29];
  if ((lVar2 == 0) || (lVar2 == 1)) {
    uVar3 = 2;
  }
  else if (lVar2 - 3U < 2) {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar3 = 0;
  }
  SetThreadPriority(param_1[8],uVar3);
  uVar1 = GetThreadId(param_1[8]);
  *(int32_t *)(param_1 + 7) = uVar1;
  uVar1 = _Thrd_id();
  *(int32_t *)(param_1 + 9) = uVar1;
                    // WARNING: Could not recover jumptable at 0x00018020ea91. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}





// 函数: void FUN_18020eaa0(longlong *param_1)
void FUN_18020eaa0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[0xb];
  while (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    cVar1 = (char)param_1[0xb];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18020eae0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  char cVar2;
  uint64_t uVar3;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  plStackX_8 = (longlong *)0x0;
  WaitForSingleObject(**(uint64_t **)(param_1 + 0x1f0),1,param_3,param_4,0xfffffffffffffffe);
  cVar2 = FUN_180060e40(*(uint64_t *)(param_1 + 0x60),param_1 + 0x78,&plStackX_8);
  plVar1 = plStackX_8;
  uVar3 = system_context_ptr;
  if (cVar2 != '\0') {
    if (((ulonglong)plStackX_8[3] >> (*(ulonglong *)(param_1 + 0x50) & 0x3f) & 1) != 0) {
      (**(code **)(*plStackX_8 + 0x60))(plStackX_8);
      (**(code **)(*plVar1 + 0x70))(plVar1);
      uVar3 = 1;
      goto LAB_18020eb6e;
    }
    pplStackX_18 = &plStackX_10;
    plStackX_10 = plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    FUN_18005e110(uVar3,&plStackX_10);
  }
  uVar3 = 0;
LAB_18020eb6e:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18020eba0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong ****pppplVar6;
  longlong ****pppplVar7;
  uint64_t uVar8;
  longlong ***ppplStackX_18;
  longlong ***ppplStackX_20;
  longlong ***ppplStack_48;
  longlong ***ppplStack_40;
  uint64_t uStack_38;
  longlong lStack_30;
  int8_t uStack_28;
  
  uStack_38 = 0xfffffffffffffffe;
  ppplStackX_18 = (longlong ***)0x0;
  if ((param_2 == '\0') || (*(int *)(param_1 + 0x140) < 1)) {
    pppplVar7 = (longlong ****)0x0;
    cVar3 = FUN_18020ee40();
    if (cVar3 != '\0') {
      uVar8 = 1;
      goto LAB_18020ed62;
    }
    cVar3 = FUN_180060e40(*(uint64_t *)(param_1 + 0x60),param_1 + 0x78,&ppplStackX_18);
    pppplVar7 = (longlong ****)ppplStackX_18;
    uVar8 = system_context_ptr;
    if (cVar3 != '\0') {
      if (((ulonglong)ppplStackX_18[3] >> (*(ulonglong *)(param_1 + 0x50) & 0x3f) & 1) != 0) {
        (*(code *)(*ppplStackX_18)[0xc])(ppplStackX_18);
        (*(code *)(*pppplVar7)[0xe])(pppplVar7);
        uVar8 = 1;
        goto LAB_18020ed62;
      }
      ppplStackX_20 = (longlong ***)&ppplStack_48;
      ppplStack_48 = ppplStackX_18;
      (*(code *)(*ppplStackX_18)[5])();
      pppplVar6 = &ppplStack_48;
      goto LAB_18020ed57;
    }
  }
  else {
    lVar1 = param_1 + 0xf0;
    uStack_28 = 0;
    lStack_30 = lVar1;
    iVar4 = _Mtx_lock(lVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uStack_28 = 1;
    pppplVar7 = (longlong ****)ppplStackX_18;
    if ((*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xd0) >> 3) +
        ((*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xc0) >> 3) + -1) * 0x20 +
        (*(longlong *)(param_1 + 0xb8) - (longlong)*(longlong **)(param_1 + 0xa8) >> 3) != 0) {
      pppplVar7 = (longlong ****)**(longlong **)(param_1 + 0xa8);
      if (pppplVar7 != (longlong ****)0x0) {
        ppplStack_40 = (longlong ***)pppplVar7;
        (*(code *)(*pppplVar7)[5])(pppplVar7);
      }
      ppplStack_40 = (longlong ***)0x0;
      plVar5 = *(longlong **)(param_1 + 0xa8);
      ppplStackX_18 = (longlong ***)pppplVar7;
      if (plVar5 + 1 == *(longlong **)(param_1 + 0xb8)) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
        if (*(longlong *)(param_1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 8);
        *(longlong **)(param_1 + 0xc0) = plVar5;
        lVar2 = *plVar5;
        *(longlong *)(param_1 + 0xb0) = lVar2;
        *(longlong *)(param_1 + 0xb8) = lVar2 + 0x100;
        *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_1 + 0xb0);
      }
      else {
        *(longlong **)(param_1 + 0xa8) = plVar5 + 1;
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
      }
    }
    iVar4 = _Mtx_unlock(lVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar8 = system_context_ptr;
    if (pppplVar7 != (longlong ****)0x0) {
      if (((ulonglong)pppplVar7[3] >> (*(ulonglong *)(param_1 + 0x50) & 0x3f) & 1) != 0) {
        (*(code *)(*pppplVar7)[0xc])(pppplVar7);
        (*(code *)(*pppplVar7)[0xe])(pppplVar7);
        LOCK();
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
        UNLOCK();
        uVar8 = 1;
        pppplVar7 = (longlong ****)ppplStackX_18;
        goto LAB_18020ed62;
      }
      ppplStack_40 = (longlong ***)&ppplStackX_20;
      ppplStackX_20 = (longlong ***)pppplVar7;
      (*(code *)(*pppplVar7)[5])();
      pppplVar6 = &ppplStackX_20;
LAB_18020ed57:
      FUN_18005e110(uVar8,pppplVar6);
    }
  }
  uVar8 = 0;
LAB_18020ed62:
  if (pppplVar7 != (longlong ****)0x0) {
    (*(code *)(*pppplVar7)[7])(pppplVar7);
  }
  return uVar8;
}



ulonglong FUN_18020ee40(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar17 = (longlong *)0x0;
  plStackX_8 = (longlong *)0x0;
  puVar4 = *(uint64_t **)(param_1 + 0x68);
  plVar10 = plVar17;
  plVar6 = plStackX_18;
  if (puVar4 != (uint64_t *)0x0) {
    plVar12 = (longlong *)*puVar4;
    plVar14 = plVar17;
    plVar15 = plVar17;
    do {
      plVar13 = plVar10;
      plVar16 = plVar15;
      if (plVar12 == (longlong *)0x0) break;
      plVar9 = (longlong *)(plVar12[4] - plVar12[5]);
      if ((ulonglong)(plVar12[5] - plVar12[4]) < 0x8000000000000001) {
        plVar9 = plVar17;
      }
      if ((plVar9 != (longlong *)0x0) &&
         (plVar14 = (longlong *)((longlong)plVar14 + 1), plVar13 = plVar9, plVar16 = plVar12,
         plVar9 <= plVar10)) {
        plVar13 = plVar10;
        plVar16 = plVar15;
      }
      plVar10 = plVar12 + 1;
      plVar12 = (longlong *)(*plVar10 + -8);
      if (*plVar10 == 0) {
        plVar12 = plVar17;
      }
      plVar10 = plVar13;
      plVar15 = plVar16;
    } while (plVar14 < (longlong *)0x3);
    plVar10 = plStackX_8;
    if (plVar14 != (longlong *)0x0) {
      cVar8 = FUN_180060c60(plVar16,&plStackX_8,plVar12,plVar13,0xfffffffffffffffe);
      plVar10 = plStackX_8;
      if (cVar8 != '\0') {
LAB_18020f107:
        (**(code **)(*plVar10 + 0x60))(plVar10);
        (**(code **)(*plVar10 + 0x70))(plVar10);
        uVar11 = 1;
        goto LAB_18020f126;
      }
      plVar12 = (longlong *)*puVar4;
      plVar14 = plStackX_8;
      plVar6 = plStackX_18;
      while (plStackX_18 = plVar14, plStackX_8 = plStackX_18, plVar12 != (longlong *)0x0) {
        if (plVar12 != plVar16) {
          lVar5 = plVar12[7];
          if ((char)plVar12[9] == '\0') {
            if ((ulonglong)((plVar12[6] - lVar5) - plVar12[4]) < 0x8000000000000001)
            goto LAB_18020f0dd;
            LOCK();
            plVar10 = plVar12 + 6;
            lVar2 = *plVar10;
            *plVar10 = *plVar10 + 1;
            UNLOCK();
            if ((ulonglong)((lVar2 - plVar12[4]) - lVar5) < 0x8000000000000001) goto LAB_18020f0d2;
            LOCK();
            puVar1 = (ulonglong *)(plVar12 + 5);
            uVar11 = *puVar1;
            *puVar1 = *puVar1 + 1;
            UNLOCK();
            plVar10 = (longlong *)plVar12[0xc];
            lVar5 = *(longlong *)
                     (plVar10[3] +
                     (plVar10[1] +
                      ((uVar11 & 0xffffffffffffffe0) - **(longlong **)(plVar10[3] + plVar10[1] * 8)
                      >> 5) & *plVar10 - 1U) * 8);
            lVar2 = *(longlong *)(lVar5 + 8);
            plVar10 = (longlong *)(lVar2 + (ulonglong)((uint)uVar11 & 0x1f) * 8);
            plStackX_8 = (longlong *)*plVar10;
            *plVar10 = 0;
            if (plStackX_18 != (longlong *)0x0) {
              (**(code **)(*plStackX_18 + 0x38))();
            }
            if ((longlong *)*plVar10 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar10 + 0x38))();
            }
            LOCK();
            plVar10 = (longlong *)(lVar2 + 0x108);
            lVar3 = *plVar10;
            *plVar10 = *plVar10 + 1;
            UNLOCK();
            if (lVar3 == 0x1f) {
              *(uint64_t *)(lVar5 + 8) = 0;
              func_0x000180060c10(plVar12[10],lVar2);
            }
            bVar7 = true;
            plVar10 = plStackX_8;
          }
          else {
            if (0x8000000000000000 < (ulonglong)((plVar12[6] - lVar5) - plVar12[4])) {
              LOCK();
              plVar10 = plVar12 + 6;
              lVar2 = *plVar10;
              *plVar10 = *plVar10 + 1;
              UNLOCK();
              if (0x8000000000000000 < (ulonglong)((lVar2 - plVar12[4]) - lVar5)) {
                LOCK();
                puVar1 = (ulonglong *)(plVar12 + 5);
                uVar11 = *puVar1;
                *puVar1 = *puVar1 + 1;
                UNLOCK();
                plVar10 = (longlong *)plVar12[0xb];
                lVar5 = *(longlong *)
                         (plVar10[2] + 8 +
                         (((uVar11 & 0xffffffffffffffe0) -
                           *(longlong *)(plVar10[2] + plVar10[1] * 0x10) >> 5) + plVar10[1] &
                         *plVar10 - 1U) * 0x10);
                uVar11 = (ulonglong)((uint)uVar11 & 0x1f);
                plVar10 = *(longlong **)(lVar5 + uVar11 * 8);
                *(uint64_t *)(lVar5 + uVar11 * 8) = 0;
                plStackX_8 = plVar10;
                plStackX_10 = plStackX_18;
                if (plStackX_18 != (longlong *)0x0) {
                  lVar2 = *plStackX_18;
                  plStackX_18 = plVar6;
                  (**(code **)(lVar2 + 0x38))();
                  plVar6 = plStackX_18;
                }
                plStackX_18 = plVar6;
                plVar6 = *(longlong **)(lVar5 + uVar11 * 8);
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 0x38))();
                }
                *(int8_t *)((lVar5 - uVar11) + 0x12f) = 1;
                bVar7 = true;
                goto LAB_18020f0e4;
              }
LAB_18020f0d2:
              LOCK();
              plVar12[7] = plVar12[7] + 1;
              UNLOCK();
            }
LAB_18020f0dd:
            bVar7 = false;
            plVar10 = plStackX_18;
            plStackX_18 = plVar6;
          }
LAB_18020f0e4:
          plVar6 = plStackX_18;
          if (bVar7) goto LAB_18020f107;
        }
        plStackX_18 = plVar6;
        plVar15 = plVar12 + 1;
        plVar12 = (longlong *)(*plVar15 + -8);
        plVar14 = plStackX_8;
        plVar6 = plStackX_18;
        if (*plVar15 == 0) {
          plVar12 = plVar17;
          plVar14 = plStackX_8;
        }
      }
    }
  }
  plStackX_18 = plVar6;
  uVar11 = 0;
LAB_18020f126:
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x38))(plVar10);
  }
  return uVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020f150(uint64_t *param_1)
void FUN_18020f150(uint64_t *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int8_t auStack_f8 [32];
  longlong *plStack_d8;
  longlong **pplStack_d0;
  uint64_t uStack_c8;
  longlong *plStack_c0;
  longlong alStack_b8 [9];
  longlong alStack_70 [10];
  int8_t uStack_20;
  ulonglong uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  plStack_d8 = alStack_b8;
  _Cnd_init_in_situ(alStack_b8);
  plStack_d8 = alStack_70;
  _Mtx_init_in_situ(alStack_70,2);
  uStack_20 = 0;
  plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,200,8,3);
  plStack_d8 = plVar2;
  FUN_180049830(plVar2);
  *plVar2 = (longlong)&unknown_var_2248_ptr;
  plVar2[0x18] = (longlong)alStack_b8;
  plStack_c0 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  pcVar1 = *(code **)*param_1;
  pplStack_d0 = &plStack_d8;
  plStack_d8 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  (*pcVar1)(param_1,&plStack_d8);
  FUN_180046190(alStack_b8);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  pplStack_d0 = (longlong **)alStack_70;
  _Mtx_destroy_in_situ(alStack_70);
  pplStack_d0 = (longlong **)alStack_b8;
  _Cnd_destroy_in_situ(alStack_b8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18020f2b0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  plStackX_18 = (longlong *)0x0;
  if (param_2 == '\0') {
    cVar1 = FUN_180060e40(*(uint64_t *)(param_1 + 0x60),param_1 + 0x78,&plStackX_18);
    plVar4 = plStackX_18;
    uVar6 = system_context_ptr;
    if (cVar1 != '\0') {
      if (((ulonglong)plStackX_18[3] >> (*(ulonglong *)(param_1 + 0x50) & 0x3f) & 1) != 0) {
        (**(code **)(*plStackX_18 + 0x60))(plStackX_18);
        (**(code **)(*plVar4 + 0x70))(plVar4);
        uVar6 = 1;
        goto LAB_18020f50e;
      }
      plStackX_20 = plStackX_18;
      (**(code **)(*plStackX_18 + 0x28))();
      FUN_18005e110(uVar6,&plStackX_20);
    }
  }
  else {
    plVar4 = plStackX_18;
    if (0 < *(int *)(param_1 + 0x140)) {
      iVar2 = _Mtx_lock(param_1 + 0xf0);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      plVar4 = plStackX_18;
      if ((*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xd0) >> 3) +
          ((*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xc0) >> 3) + -1) * 0x20 +
          (*(longlong *)(param_1 + 0xb8) - (longlong)*(longlong **)(param_1 + 0xa8) >> 3) != 0) {
        plVar4 = (longlong *)**(longlong **)(param_1 + 0xa8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plVar3 = *(longlong **)(param_1 + 0xa8);
        plStackX_18 = plVar4;
        if (plVar3 + 1 == *(longlong **)(param_1 + 0xb8)) {
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x38))();
          }
          if (*(longlong *)(param_1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 8);
          *(longlong **)(param_1 + 0xc0) = plVar3;
          lVar5 = *plVar3;
          *(longlong *)(param_1 + 0xb0) = lVar5;
          *(longlong *)(param_1 + 0xb8) = lVar5 + 0x100;
          *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_1 + 0xb0);
        }
        else {
          *(longlong **)(param_1 + 0xa8) = plVar3 + 1;
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x38))();
          }
        }
      }
      iVar2 = _Mtx_unlock(param_1 + 0xf0);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      if (plVar4 != (longlong *)0x0) {
        lVar5 = system_message_buffer + 0x20;
        iVar2 = _Mtx_lock(lVar5);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        (**(code **)(*plVar4 + 0x60))(plVar4);
        (**(code **)(*plVar4 + 0x70))(plVar4);
        LOCK();
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
        UNLOCK();
        iVar2 = _Mtx_unlock(lVar5);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        uVar6 = 1;
        plVar4 = plStackX_18;
        goto LAB_18020f50e;
      }
    }
  }
  uVar6 = 0;
LAB_18020f50e:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return uVar6;
}





// 函数: void FUN_18020f530(longlong *param_1)
void FUN_18020f530(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)param_1[4];
  puVar4 = (uint64_t *)param_1[5];
  if (plVar2 != (longlong *)param_1[6]) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        puVar4 = puVar4 + 1;
        plVar2 = (longlong *)*puVar4;
        plVar3 = plVar2 + 0x20;
      }
    } while (plVar2 != (longlong *)param_1[6]);
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18020f620(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020f620(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *puStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  char cStack_18;
  longlong lStack_10;
  
  uVar3 = 0xfffffffffffffffe;
  iVar1 = _Cnd_init(&uStack_28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar5 = uStack_28;
  iVar1 = _Mtx_init(&uStack_20,1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  cStack_18 = '\0';
  uVar4 = uStack_20;
  iVar1 = _Mtx_lock(uStack_20);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puStack_30 = &unknown_var_2232_ptr;
  lStack_10 = *param_2;
  *param_2 = 0;
  iVar2 = _Thrd_start(param_1,FUN_18020f940,&puStack_30,param_4,uVar3,0,uVar4,0,uVar5);
  iVar1 = 1;
  if (iVar2 != 4) {
    iVar1 = iVar2;
  }
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  while (cStack_18 == '\0') {
    iVar1 = _Cnd_wait(uStack_28,uStack_20);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  if (lStack_10 != 0) {
    free(lStack_10,0x10);
  }
  iVar1 = _Mtx_unlock(uStack_20);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  _Mtx_destroy(uStack_20);
  _Cnd_destroy(uStack_28);
  return;
}





