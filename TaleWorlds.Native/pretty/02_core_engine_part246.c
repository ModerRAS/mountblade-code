#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part246.c - 18 个函数

// 函数: void FUN_18020f790(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020f790(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    free(*(longlong *)(param_1 + 0x20),0x10,param_3,param_4,0xfffffffffffffffe);
  }
  uVar1 = *(uint64_t *)(param_1 + 8);
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  iVar3 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  return;
}





// 函数: void FUN_18020f7d0(longlong param_1)
void FUN_18020f7d0(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(uint64_t *)(param_1 + 8));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(puVar1,0x10);
  return;
}





// 函数: void FUN_18020f870(char *param_1)
void FUN_18020f870(char *param_1)

{
  if (*param_1 != '\0') {
    _Cnd_destroy(*(uint64_t *)(param_1 + 8));
  }
  return;
}





// 函数: void FUN_18020f8a0(char *param_1)
void FUN_18020f8a0(char *param_1)

{
  if (*param_1 != '\0') {
    _Mtx_destroy(*(uint64_t *)(param_1 + 8));
  }
  return;
}





// 函数: void FUN_18020f8d0(longlong param_1)
void FUN_18020f8d0(longlong param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  
  uVar1 = *(uint64_t *)(param_1 + 8);
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  iVar3 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  return;
}



uint64_t FUN_18020f940(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(uint64_t *)(param_1 + 8));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
  free(puVar1,0x10);
  return 0;
}



longlong FUN_18020fa10(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lStack_18;
  
  pbVar3 = &system_buffer_ptr;
  if (*(byte **)(param_2 + 8) != (byte *)0x0) {
    pbVar3 = *(byte **)(param_2 + 8);
  }
  uVar2 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (*(uint *)(param_2 + 0x10) != 0) {
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 + 1;
      uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    } while (uVar4 < *(uint *)(param_2 + 0x10));
  }
  lStack_18 = func_0x000180218bc0((ulonglong)*(uint *)(param_1 + 0x10),
                                  *(uint64_t *)
                                   (*(longlong *)(param_1 + 8) +
                                   (uVar2 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8),param_2);
  if (lStack_18 == 0) {
    lStack_18 = *(longlong *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8);
  }
  if (lStack_18 == *(longlong *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8)) {
    return 0;
  }
  return lStack_18 + 0x20;
}





// 函数: void FUN_18020fb10(void)
void FUN_18020fb10(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180211520(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180211520(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uStackX_8;
  longlong lStack_30;
  ulonglong *puStack_28;
  ulonglong *puStack_20;
  
  lStack_30 = 0;
  puStack_28 = (ulonglong *)0x0;
  puStack_20 = (ulonglong *)0x0;
  uVar6 = (ulonglong)(int)*(uint64_t *)(param_1 + 0x18);
  if (uVar6 != 0) {
    if (0x1fffffffffffffff < uVar6) {
      FUN_180189990();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180217b00(&lStack_30,uVar6,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  lVar5 = *plVar1;
  plVar4 = plVar1;
  if (lVar5 == 0) {
    plVar4 = plVar1 + 1;
    lVar5 = *plVar4;
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  lVar2 = plVar1[*(longlong *)(param_1 + 0x10)];
  while (lVar5 != lVar2) {
    uStackX_8 = lVar5 + 0x20;
    if (puStack_20 == puStack_28) {
      FUN_180218920(&lStack_30,puStack_28,&uStackX_8);
    }
    else {
      *puStack_28 = uStackX_8;
      puStack_28 = puStack_28 + 1;
    }
    lVar5 = *(longlong *)(lVar5 + 0x80);
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  FUN_180219260(lStack_30,puStack_28,(longlong)puStack_28 - lStack_30 >> 3,uStackX_8 & 0xff);
  iVar7 = 0;
  if (0 < (longlong)uVar6) {
    lVar5 = 0;
    do {
      *(int *)(*(longlong *)(lStack_30 + lVar5 * 8) + 0x54) = *(int *)(param_1 + 0x50) + iVar7;
      if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_1 + 0x40)) {
        *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) + 0x60;
        FUN_180218a80();
      }
      else {
        FUN_180219020(param_1 + 0x30,*(uint64_t *)(lStack_30 + lVar5 * 8));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar6);
  }
  if (lStack_30 != 0) {
    uVar6 = (longlong)puStack_20 - lStack_30 & 0xfffffffffffffff8;
    lVar5 = lStack_30;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lStack_30 + -8);
      if (0x1f < (lStack_30 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar5,uVar6);
  }
  return;
}





// 函数: void FUN_180211720(uint64_t *param_1)
void FUN_180211720(uint64_t *param_1)

{
  FUN_180048980();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1802117b0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  void *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  void *puVar6;
  
  lVar3 = 0;
  lVar5 = *(longlong *)(param_1 + 0x3a0) - *(longlong *)(param_1 + 0x398);
  lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
  lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  uVar1 = *(uint *)(param_1 + 0x3b0);
  *(uint *)(param_2 + 3) = uVar1;
  if (lVar5 != 0) {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x98,uVar1 & 0xff,param_4,0,0xfffffffffffffffe);
  }
  *param_2 = lVar3;
  param_2[1] = lVar3;
  param_2[2] = lVar5 * 0x98 + lVar3;
  puVar4 = (uint64_t *)*param_2;
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (*(longlong *)(param_1 + 0x398) != lVar3) {
    lVar5 = *(longlong *)(param_1 + 0x398) - (longlong)puVar4;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &unknown_var_3432_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar5 + 0x10 + (longlong)puVar4);
      puVar2 = *(void **)(lVar5 + 8 + (longlong)puVar4);
      puVar6 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar6 = puVar2;
      }
      strcpy_s(puVar4[1],0x80,puVar6);
      puVar4 = puVar4 + 0x13;
    } while (lVar5 + (longlong)puVar4 != lVar3);
  }
  param_2[1] = (longlong)puVar4;
  return param_2;
}



uint64_t * FUN_180211930(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_7872_ptr;
  FUN_18015c2b0(param_1 + 2);
  *param_1 = &unknown_var_2656_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = _guard_check_icall;
  return param_1;
}



longlong FUN_1802119c0(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
    (**(code **)(param_1 + 0xa8))(param_1 + 0x98,0,0,param_4,0xfffffffffffffffe);
  }
  FUN_180320050(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180211a30(int param_1,longlong param_2)
void FUN_180211a30(int param_1,longlong param_2)

{
  int32_t uVar1;
  uint uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *puStack_50;
  uint64_t *puStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  
  if (param_1 == 0) {
    return;
  }
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_48 = 0;
  uVar1 = FUN_18064e990(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puStack_48 = 0x726520444f4d460a;
  *(int32_t *)(puStack_48 + 1) = 0x21726f72;
  *(int16_t *)((longlong)puStack_48 + 0xc) = 0x2820;
  *(int8_t *)((longlong)puStack_48 + 0xe) = 0;
  uStack_40 = 0xe;
  FUN_180628380(&puStack_50,param_1);
  uVar2 = uStack_40;
  uVar7 = uStack_40 + 2;
  if (uVar7 != 0) {
    uVar8 = uStack_40 + 3;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar8,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar8 <= (uint)uStack_38) goto LAB_180211b66;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar8,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211b66:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2029;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uVar8 = uVar2 + 3;
  uStack_40 = uVar7;
  if (uVar8 != 0) {
    uVar7 = uVar2 + 4;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar7 <= (uint)uStack_38) goto LAB_180211be9;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar7,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211be9:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x22;
  uStack_40 = uVar8;
  if (param_2 != 0) {
    lVar6 = -1;
    do {
      lVar3 = lVar6;
      lVar6 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar9 = uVar8 + (int)lVar6;
      if (iVar9 != 0) {
        uVar2 = iVar9 + 1;
        if (puStack_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
          *(int8_t *)puStack_48 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_38) goto LAB_180211c85;
          puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
        }
        uVar1 = FUN_18064e990(puStack_48);
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      }
LAB_180211c85:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),param_2,
             (longlong)((int)lVar3 + 2));
    }
  }
  uVar7 = uVar2 + 5;
  if (uVar7 != 0) {
    uVar2 = uVar2 + 6;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211d03;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211d03:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2022;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uStack_40 = uVar7;
  lVar3 = func_0x00018021a140(param_1);
  lVar6 = -1;
  if (lVar3 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)(lVar3 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar9 = uVar7 + (int)lVar6;
      if (iVar9 != 0) {
        uVar2 = iVar9 + 1;
        if (puStack_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
          *(int8_t *)puStack_48 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_38) goto LAB_180211da7;
          puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
        }
        uVar1 = FUN_18064e990(puStack_48);
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      }
LAB_180211da7:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),lVar3,
             (longlong)((int)lVar5 + 2));
    }
  }
  iVar9 = uStack_40 + 1;
  if (iVar9 != 0) {
    uVar2 = uStack_40 + 2;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211e24;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211e24:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 10;
  puVar4 = (uint64_t *)&system_buffer_ptr;
  if (puStack_48 != (uint64_t *)0x0) {
    puVar4 = puStack_48;
  }
  uStack_40 = iVar9;
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar4);
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t FUN_180211ee0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_30;
  longlong lStack_28;
  
  if (param_2 == 8) {
    FUN_180627910(&puStack_30,param_4,param_3,param_4,0xfffffffffffffffe);
    FUN_180623fd0(param_3,&puStack_30);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180211f70(uint64_t param_1,int32_t param_2)
void FUN_180211f70(uint64_t param_1,int32_t param_2)

{
  FUN_18062b8b0(system_memory_pool_ptr,param_1,param_2,0x10,7);
  return;
}



uint64_t * FUN_180211fa0(uint64_t *param_1)

{
  uint64_t *puVar1;
  longlong *plVar2;
  
  FUN_1801566b0();
  *param_1 = &unknown_var_5528_ptr;
  _Mtx_init_in_situ(param_1 + 0x4c,0x102);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(int32_t *)(param_1 + 0x59) = 3;
  puVar1 = param_1 + 0x5a;
  param_1[0x5d] = 0;
  *(int32_t *)(param_1 + 0x5f) = 3;
  *puVar1 = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x5c] = 0;
  *(int8_t *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  _Mtx_init_in_situ(param_1 + 99,2);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(int32_t *)(param_1 + 0x72) = 3;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(int32_t *)(param_1 + 0x76) = 3;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(int32_t *)(param_1 + 0x7a) = 3;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(int32_t *)(param_1 + 0x7e) = 3;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(int32_t *)(param_1 + 0x85) = 3;
  FUN_1808fc838(param_1 + 0x87,8,9,&SUB_18005d5f0,FUN_180045af0);
  *(int32_t *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x60] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(int8_t *)(param_1 + 0x86) = 0;
  plVar2 = (longlong *)param_1[0x91];
  param_1[0x91] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x70] = param_1[0x6f];
  return param_1;
}



uint64_t FUN_180212170(uint64_t param_1,ulonglong param_2)

{
  FUN_1802121b0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x4d8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802121b0(uint64_t *param_1)
void FUN_1802121b0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  uint64_t uVar12;
  ulonglong uVar9;
  
  uVar12 = 0xfffffffffffffffe;
  if ((longlong *)param_1[0x91] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x91] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x87,8,9,FUN_180045af0,uVar12);
  plStackX_10 = param_1 + 0x82;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStackX_10 = param_1 + 0x7b;
  FUN_180048980();
  plStackX_10 = param_1 + 0x77;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStackX_10 = param_1 + 0x73;
  FUN_18006b6f0();
  plStackX_10 = param_1 + 0x6f;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStackX_10 = param_1 + 99;
  _Mtx_destroy_in_situ();
  plStackX_10 = param_1 + 0x5a;
  FUN_18004b730();
  plStackX_10 = param_1 + 0x56;
  FUN_1802185b0();
  plStackX_10 = param_1 + 0x4c;
  _Mtx_destroy_in_situ();
  *param_1 = &unknown_var_8656_ptr;
  *(int8_t *)((longlong)param_1 + 0x162) = 1;
  plVar2 = param_1 + 0x1a;
  plStackX_20 = plVar2;
  iVar5 = _Mtx_lock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_1[9] != 0) {
    do {
      uVar11 = uVar10 % (ulonglong)*(uint *)(param_1 + 8);
      iVar5 = (int)uVar9;
      for (piVar6 = *(int **)(param_1[7] + uVar11 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 4)) {
        if (iVar5 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_1801571ef;
          break;
        }
      }
      FUN_18066c220(param_1 + 10,&plStackX_10,(ulonglong)*(uint *)(param_1 + 8),
                    *(int32_t *)(param_1 + 9),1);
      piVar6 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)((longlong)param_1 + 0x5c));
      *piVar6 = iVar5;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      if ((char)plStackX_10 != '\0') {
        uVar11 = uVar10 % ((ulonglong)plStackX_10 >> 0x20);
        FUN_18015bdc0(param_1 + 6);
      }
      *(uint64_t *)(piVar6 + 4) = *(uint64_t *)(param_1[7] + uVar11 * 8);
      *(int **)(param_1[7] + uVar11 * 8) = piVar6;
      param_1[9] = param_1[9] + 1;
LAB_1801571ef:
      plStackX_18 = *(longlong **)(piVar6 + 2);
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      uVar8 = iVar5 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = (longlong)(int)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)param_1[9]);
  }
  plVar1 = param_1 + 6;
  FUN_18015b450(plVar1);
  plVar3 = param_1 + 0x2d;
  plVar4 = (longlong *)param_1[0x2e];
  plVar7 = (longlong *)*plVar3;
  if (plVar7 != plVar4) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
    plVar7 = (longlong *)*plVar3;
  }
  param_1[0x2e] = plVar7;
  iVar5 = _Mtx_unlock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_1[0x4a] != 0) {
    free();
    param_1[0x4a] = 0;
  }
  plStackX_10 = param_1 + 0x44;
  FUN_18015b4f0();
  if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d] + 0x38))();
  }
  plStackX_10 = plVar3;
  FUN_180057830(plVar3);
  plStackX_10 = param_1 + 0x28;
  FUN_180048980();
  plStackX_10 = param_1 + 0x24;
  FUN_180048980();
  plStackX_10 = plVar2;
  _Mtx_destroy_in_situ(plVar2);
  plStackX_10 = param_1 + 0x16;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStackX_10 = param_1 + 0xc;
  _Mtx_destroy_in_situ();
  plStackX_10 = plVar1;
  FUN_18015b450(plVar1);
  if ((1 < (ulonglong)param_1[8]) && (param_1[7] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  return;
}





// 函数: void FUN_1802122c0(longlong *param_1)
void FUN_1802122c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802122e0(longlong *param_1,uint64_t param_2,int param_3)
void FUN_1802122e0(longlong *param_1,uint64_t param_2,int param_3)

{
  longlong *plVar1;
  int8_t auStack_d58 [32];
  code *pcStack_d38;
  int32_t uStack_d30;
  int32_t uStack_d08;
  int32_t uStack_d04;
  uint64_t uStack_d00;
  int32_t uStack_cf8;
  uint64_t uStack_cf4;
  int32_t uStack_cec;
  uint64_t uStack_cc8;
  int8_t auStack_b98 [2896];
  ulonglong uStack_48;
  
  uStack_cc8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d58;
  *(bool *)(param_1 + 0x42) = *(int *)(SYSTEM_STATE_MANAGER + 0x1ce0) != 0;
  uStack_d30 = 0xffffffff;
  pcStack_d38 = FUN_180059ba0;
  FUN_180738730(0,0,&unknown_var_1648_ptr,FUN_180211f70);
  FUN_180840330(param_1 + 0x6d,0x20214);
  uStack_d00 = 0;
  uStack_cf4 = 0;
  uStack_cec = 0;
  uStack_d08 = 0x20;
  uStack_d04 = 0x40000;
  uStack_cf8 = 0x400000;
  FUN_180849600(param_1[0x6d],&uStack_d08);
  plVar1 = param_1 + 0x6e;
  FUN_180845520(param_1[0x6d],plVar1);
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x1a0))(param_1,param_3,4);
  }
  FUN_18073bc20(*plVar1,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x1570));
  FUN_18073bdc0(*plVar1,0x400);
                    // WARNING: Subroutine does not return
  memset(auStack_b98,0,0x68);
}





// 函数: void FUN_180212de0(longlong param_1)
void FUN_180212de0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_180211720(puVar2 + 4);
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180212e00(longlong *param_1)
void FUN_180212e00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_180211720(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180212e20(longlong param_1)
void FUN_180212e20(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_180211720(puVar2 + 4);
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



int32_t FUN_180212e40(longlong param_1)

{
  int32_t auStackX_8 [8];
  
  FUN_18073a2c0(*(uint64_t *)(param_1 + 0x370),auStackX_8);
  return auStackX_8[0];
}



int32_t FUN_180212e60(longlong param_1)

{
  int32_t auStackX_8 [8];
  
  FUN_180739ec0(*(uint64_t *)(param_1 + 0x370),auStackX_8);
  return auStackX_8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180212e80(uint64_t param_1,uint64_t param_2)
void FUN_180212e80(uint64_t param_1,uint64_t param_2)

{
  int8_t auStack_4f8 [64];
  int32_t uStack_4b8;
  uint64_t uStack_470;
  uint64_t uStack_468;
  int8_t auStack_448 [1024];
  ulonglong uStack_48;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4f8;
  uStack_4b8 = 0;
  uStack_468 = param_2;
                    // WARNING: Subroutine does not return
  memset(auStack_448,0,0x400);
}





// 函数: void FUN_1802132a0(longlong param_1)
void FUN_1802132a0(longlong param_1)

{
  int8_t auStackX_8 [32];
  
  FUN_18073bc20(*(uint64_t *)(param_1 + 0x370));
  FUN_180739ec0(*(uint64_t *)(param_1 + 0x370),auStackX_8);
  return;
}





