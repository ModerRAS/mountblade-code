#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part027.c - 14 个函数

// 函数: void FUN_18005b560(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005b560(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_8016_ptr;
  FUN_18005d580();
  FUN_18005d580();
  FUN_18005b7c0(param_1 + 0x262);
  FUN_18005b7c0(param_1 + 0x254);
  FUN_18005b7c0(param_1 + 0x246);
  FUN_18005b7c0(param_1 + 0x238);
  FUN_18005b7c0(param_1 + 0x22a);
  FUN_18005b7c0(param_1 + 0x21c);
  FUN_18005b7c0(param_1 + 0x20e);
  FUN_18005b960(param_1 + 0x1f6);
  FUN_18005b960(param_1 + 0x1de);
  FUN_18005b960(param_1 + 0x1c6);
  FUN_18005b7c0(param_1 + 0x1b8);
  FUN_18005b7c0(param_1 + 0x1aa);
  FUN_18005b7c0(param_1 + 0x19c);
  FUN_18005b960(param_1 + 0x184);
  FUN_18005b960(param_1 + 0x16c);
  FUN_18005b960(param_1 + 0x154);
  FUN_18005b960(param_1 + 0x13c);
  FUN_18005b960(param_1 + 0x124);
  FUN_18005b960(param_1 + 0x10c);
  FUN_18005b960(param_1 + 0xf4);
  FUN_18005b960(param_1 + 0xdc);
  FUN_18005b960(param_1 + 0xc4);
  FUN_18005b960(param_1 + 0xac);
  FUN_18005b960(param_1 + 0x94);
  FUN_18005b960(param_1 + 0x7c);
  FUN_18005b960(param_1 + 100);
  FUN_18005b960(param_1 + 0x4c);
  FUN_18005b960(param_1 + 0x34);
  FUN_18005b960(param_1 + 0x1c);
  *param_1 = &unknown_var_7304_ptr;
  param_1[0x18] = &system_data_buffer_ptr;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &system_state_ptr;
  FUN_18005d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



int64_t FUN_18005b730(int64_t param_1)

{
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(code **)(param_1 + 0x68) = _guard_check_icall;
  return param_1;
}





// 函数: void FUN_18005b7c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005b7c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    (**(code **)(param_1 + 0x60))(param_1 + 0x50,0,0,param_4,0xfffffffffffffffe);
  }
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}



uint64_t * FUN_18005b870(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[8] = &system_state_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[8] = &system_data_buffer_ptr;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[0xc] = &system_state_ptr;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xc] = &system_data_buffer_ptr;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0x10] = &system_state_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &system_data_buffer_ptr;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = _guard_check_icall;
  return param_1;
}





// 函数: void FUN_18005b960(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005b960(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if ((code *)param_1[0x16] != (code *)0x0) {
    (*(code *)param_1[0x16])(param_1 + 0x14,0,0,param_4,0xfffffffffffffffe);
  }
  param_1[0x10] = &system_data_buffer_ptr;
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  param_1[0x10] = &system_state_ptr;
  param_1[0xc] = &system_data_buffer_ptr;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  param_1[0xc] = &system_state_ptr;
  param_1[8] = &system_data_buffer_ptr;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[8] = &system_state_ptr;
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
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



// 函数: void FUN_18005ba80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005ba80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x6e6f632072657355;
  *(int32_t *)(puVar2 + 1) = 0x676966;
  uStack_40 = 0xb;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



uint64_t * FUN_18005c060(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0x24;
  return param_1;
}



int64_t FUN_18005c090(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  FUN_1808fc838(param_1,0x20,0x400,FUN_18005c060,FUN_180046860);
  FUN_1808fc838(param_1 + 0x8000,0x20,0x400,FUN_18005c060,FUN_180046860);
  *(uint64_t *)(param_1 + 0x10400) = 0;
  *(uint64_t *)(param_1 + 0x10408) = 0;
  *(uint64_t *)(param_1 + 0x10410) = 0;
  *(int32_t *)(param_1 + 0x10418) = 0x24;
  lVar1 = param_1 + 0x10002;
  lVar2 = 8;
  do {
    *(uint64_t *)(lVar1 + -2) = 0;
    *(uint64_t *)(lVar1 + 6) = 0;
    *(uint64_t *)(lVar1 + 0xe) = 0;
    *(uint64_t *)(lVar1 + 0x16) = 0;
    *(uint64_t *)(lVar1 + 0x1e) = 0;
    *(uint64_t *)(lVar1 + 0x26) = 0;
    *(uint64_t *)(lVar1 + 0x2e) = 0;
    *(uint64_t *)(lVar1 + 0x36) = 0;
    *(uint64_t *)(lVar1 + 0x3e) = 0;
    *(uint64_t *)(lVar1 + 0x46) = 0;
    *(uint64_t *)(lVar1 + 0x4e) = 0;
    *(uint64_t *)(lVar1 + 0x56) = 0;
    *(uint64_t *)(lVar1 + 0x5e) = 0;
    *(uint64_t *)(lVar1 + 0x66) = 0;
    *(uint64_t *)(lVar1 + 0x6e) = 0;
    *(uint64_t *)(lVar1 + 0x76) = 0;
    lVar1 = lVar1 + 0x80;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18005c1c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180627ae0(param_2,system_message_context + 0xe0,param_3,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_18005c210(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1 + 4,0,0,param_4,0xfffffffffffffffe);
  }
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}



uint64_t *
FUN_18005c2a0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &unknown_var_8168_ptr;
  puVar1 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = _guard_check_icall;
  if (puVar1 != param_2) {
    if ((code *)param_1[6] != (code *)0x0) {
      (*(code *)param_1[6])(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    pcVar2 = (code *)param_2[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1,param_2,1);
      pcVar2 = (code *)param_2[2];
    }
    param_1[6] = pcVar2;
    param_1[7] = param_2[3];
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2,0,0);
  }
  return param_1;
}





// 函数: void FUN_18005c380(int64_t param_1)
void FUN_18005c380(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x18) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x18) = &system_state_ptr;
  return;
}





// 函数: void FUN_18005c3d0(int64_t *param_1)
void FUN_18005c3d0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 == lVar1) {
    param_1[1] = lVar2;
  }
  else {
    do {
      *(uint64_t *)(lVar2 + 0x18) = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar2 + 0x20) = 0;
      *(int32_t *)(lVar2 + 0x30) = 0;
      *(uint64_t *)(lVar2 + 0x18) = &system_state_ptr;
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}



int64_t FUN_18005c4f0(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
    (**(code **)(param_1 + 0xd0))(param_1 + 0xc0,0,0,param_4,0xfffffffffffffffe);
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}





// 函数: void FUN_18005c560(int64_t param_1)
void FUN_18005c560(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  
  (**(code **)(param_1 + 0xd8))(param_1 + 0xc0);
  lVar1 = *(int64_t *)(param_1 + 0xe0);
  iVar2 = _Mtx_lock(lVar1 + 0x48);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(lVar1 + 0x98) = 1;
  iVar2 = _Cnd_broadcast(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(lVar1 + 0x48);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



uint64_t *
FUN_18005c590(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180049830();
  *param_1 = &unknown_var_8312_ptr;
  puVar1 = param_1 + 0x18;
  param_1[0x1a] = 0;
  param_1[0x1b] = _guard_check_icall;
  if (puVar1 != param_2) {
    if ((code *)param_1[0x1a] != (code *)0x0) {
      (*(code *)param_1[0x1a])(puVar1,0,0,param_4,uVar3);
    }
    pcVar2 = (code *)param_2[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1,param_2,1);
      pcVar2 = (code *)param_2[2];
    }
    param_1[0x1a] = pcVar2;
    param_1[0x1b] = param_2[3];
  }
  param_1[0x1c] = param_3;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005c650(int64_t *param_1)
void FUN_18005c650(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  code *pcVar6;
  int8_t auStack_128 [32];
  int64_t *plStack_108;
  int64_t **pplStack_100;
  int64_t alStack_f8 [2];
  code *pcStack_e8;
  code *pcStack_e0;
  uint64_t uStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t alStack_b8 [9];
  int64_t alStack_70 [10];
  int8_t uStack_20;
  uint64_t uStack_18;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  plStack_d0 = param_1;
  iVar3 = _Thrd_id();
  if (iVar3 == iVar1) {
    (*(code *)param_1[3])(param_1);
  }
  else {
    plStack_108 = alStack_b8;
    _Cnd_init_in_situ(alStack_b8);
    plStack_108 = alStack_70;
    _Mtx_init_in_situ(alStack_70,2);
    uStack_20 = 0;
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0xe8,8,3);
    plStack_108 = alStack_f8;
    pcStack_e8 = (code *)0x0;
    pcStack_e0 = _guard_check_icall;
    if (alStack_f8 != param_1) {
      pcVar6 = (code *)param_1[2];
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(alStack_f8,param_1,1);
        pcVar6 = (code *)param_1[2];
      }
      pcStack_e0 = (code *)param_1[3];
      pcStack_e8 = pcVar6;
    }
    plVar5 = (int64_t *)FUN_18005c590(uVar4,alStack_f8,alStack_b8);
    plStack_c8 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    lVar2 = system_context_ptr;
    pplStack_100 = &plStack_108;
    plStack_108 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    FUN_18005e370(lVar2,&plStack_108);
    FUN_180046190(alStack_b8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    pplStack_100 = (int64_t **)alStack_70;
    _Mtx_destroy_in_situ(alStack_70);
    pplStack_100 = (int64_t **)alStack_b8;
    _Cnd_destroy_in_situ(alStack_b8);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1,0,0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005c830(uint *param_1)
void FUN_18005c830(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  if (*(void **)*init_system_data_config == &unknown_var_424_ptr) {
    cVar2 = *(int *)(init_system_data_config + 0xe0) != 0;
  }
  else {
    cVar2 = (**(code **)(*(void **)*init_system_data_config + 0x48))();
  }
  if (cVar2 != '\0') {
    *param_1 = 0x41c6fe0c;
    return;
  }
  uVar1 = timeGetTime();
  *param_1 = uVar1 ^ 0x41c64e6d;
  return;
}



uint64_t FUN_18005c8a0(int64_t param_1,uint64_t param_2)

{
  char cVar1;
  void *puVar2;
  
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    cVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    if (cVar1 == '\0') {
      if (system_debug_flag == '\0') {
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x48) != (void *)0x0) {
          puVar2 = *(void **)(param_1 + 0x48);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar2);
      }
      FUN_180627be0(param_1,param_1 + 0x80);
      return 0;
    }
  }
  FUN_180627be0(param_1,param_2);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005c930(uint64_t *param_1,uint64_t param_2,int *param_3)
void FUN_18005c930(uint64_t *param_1,uint64_t param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 5));
  iVar1 = *param_3;
  bVar2 = true;
  *(int *)(lVar4 + 0x20) = iVar1;
  puVar5 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (uint64_t *)0x0) {
    bVar2 = iVar1 < *(int *)(puVar5 + 4);
    puVar3 = puVar5;
    if (iVar1 < *(int *)(puVar5 + 4)) {
      puVar5 = (uint64_t *)puVar5[1];
    }
    else {
      puVar5 = (uint64_t *)*puVar5;
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 == (uint64_t *)param_1[1]) goto LAB_18005c9be;
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (*(int *)(lVar4 + 0x20) <= *(int *)(puVar5 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
LAB_18005c9be:
  if ((puVar3 == param_1) || (*(int *)(lVar4 + 0x20) < *(int *)(puVar3 + 4))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar3,param_1,uVar6);
}





// 函数: void FUN_18005ca20(int64_t param_1,int32_t param_2)
void FUN_18005ca20(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1f00) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1f08))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1eb0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1ea0) = *(int32_t *)(param_1 + 0x1ee8);
    return;
  }
  *(int32_t *)(param_1 + 0x1ea0) = param_2;
  return;
}



uint64_t * FUN_18005caa0(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  param_1[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  param_1[4] = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 0x30);
  param_1[5] = *(uint64_t *)(param_2 + 0x28);
  *(int32_t *)((int64_t)param_1 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 0x38);
  *(int32_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(uint64_t *)(param_2 + 0x38) = 0;
  return param_1;
}



int64_t FUN_18005cb60(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x40) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x40) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x20) = &system_state_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005cc00(void **param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005cc00(void **param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  uint uVar2;
  int64_t lVar3;
  void **ppuVar4;
  byte *pbVar5;
  void **ppuVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void **ppuStackX_8;
  char acStackX_20 [8];
  int32_t uVar9;
  void *puStack_68;
  int64_t lStack_60;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  lVar3 = init_system_data_config;
  acStackX_20[0] = (char)param_4;
  uVar8 = 0;
  ppuVar6 = (void **)(init_system_data_config + 0x70);
  ppuStackX_8 = param_1;
  FUN_180058080(ppuVar6,&ppuStackX_8,param_2,param_4,0,0xfffffffffffffffe);
  if (ppuStackX_8 != ppuVar6) {
    FUN_180627be0(ppuStackX_8 + 8,param_3);
    return;
  }
  FUN_180627ae0(&puStack_68,param_2);
  FUN_180627ae0(&puStack_48,param_3);
  uVar9 = 1;
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x60,*(int8_t *)(lVar3 + 0x98));
  FUN_18005caa0(lVar3 + 0x20,&puStack_68);
  ppuVar4 = (void **)FUN_1800590b0(ppuVar6,acStackX_20,lVar3 + 0x20);
  if (acStackX_20[0] == '\0') {
    FUN_18005cb60(lVar3);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    ppuStackX_8 = &puStack_48;
    puStack_48 = &system_data_buffer_ptr;
    if (lStack_40 == 0) {
      lStack_40 = 0;
      uStack_30 = 0;
      puStack_48 = &system_state_ptr;
      ppuStackX_8 = &puStack_68;
      puStack_68 = &system_data_buffer_ptr;
      if (lStack_60 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (ppuVar4 == ppuVar6) goto LAB_18005ccff;
  if (*(int *)(ppuVar4 + 6) != 0) {
    if (*(int *)(lVar3 + 0x30) == 0) goto LAB_18005ccff;
    pbVar5 = ppuVar4[5];
    lVar7 = *(int64_t *)(lVar3 + 0x28) - (int64_t)pbVar5;
    do {
      bVar1 = *pbVar5;
      uVar2 = (uint)pbVar5[lVar7];
      if (bVar1 != uVar2) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar2 != 0);
    if (0 < (int)(bVar1 - uVar2)) goto LAB_18005ccff;
  }
  uVar8 = 1;
LAB_18005ccff:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,ppuVar4,ppuVar6,uVar8,uVar9);
}



uint64_t *
FUN_18005cdb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  param_1[4] = &system_state_ptr;
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x100,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_18005ce30(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &unknown_var_8464_ptr;
  puVar1 = param_1 + 4;
  *puVar1 = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *puVar1 = &unknown_var_3432_ptr;
  param_1[5] = param_1 + 7;
  *(int32_t *)(param_1 + 6) = 0;
  *(int8_t *)(param_1 + 7) = 0;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  param_1[5] = uVar2;
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  uVar2 = param_2[5];
  param_1[8] = param_2[4];
  param_1[9] = uVar2;
  uVar2 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar2;
  uVar2 = param_2[9];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xe] = param_2[10];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0x10] = param_2[0xc];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0x12] = param_2[0xe];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x14] = param_2[0x10];
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x16] = param_2[0x12];
  param_1[0x17] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x18] = param_2[0x14];
  param_1[0x19] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x1a] = param_2[0x16];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x19];
  param_1[0x1c] = param_2[0x18];
  param_1[0x1d] = uVar2;
  uVar2 = param_2[0x1b];
  param_1[0x1e] = param_2[0x1a];
  param_1[0x1f] = uVar2;
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_2 + 0x13);
  return param_1;
}



int32_t FUN_18005cf50(int64_t param_1)

{
  int iVar1;
  int32_t uVar2;
  
  iVar1 = _Mtx_lock(param_1 + 0x9f0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar2 = FUN_1800b2bd0();
  iVar1 = _Mtx_unlock(param_1 + 0x9f0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18005cfc0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = system_resource_state;
  lVar1 = system_resource_state + 0x770;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = FUN_1800b2bd0();
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(lVar2 + 0x7c0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = FUN_1800b2bd0();
  iVar5 = _Mtx_unlock(lVar2 + 0x7c0);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = FUN_18005cf50(lVar2);
  iVar6 = _Mtx_lock(lVar2 + 0x950);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  iVar6 = FUN_1800b2bd0();
  iVar7 = _Mtx_unlock(lVar2 + 0x950);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return iVar6 + iVar4 + iVar3 + iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005d0e0(uint64_t param_1,int64_t param_2)
void FUN_18005d0e0(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  double *pdStack_450;
  char acStack_438 [1024];
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  iVar7 = -1;
  iVar8 = -1;
  uVar2 = (uint)param_1;
  uVar3 = param_1 & 0xffffffff;
  while (uVar2 != 0) {
    iVar8 = iVar8 + 1;
    uVar2 = (uint)uVar3 >> 1;
    uVar3 = (uint64_t)uVar2;
  }
  uVar2 = 0x400;
  do {
    iVar7 = iVar7 + 1;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  cVar1 = (&unknown_var_8592_ptr)[iVar8 / iVar7];
  uStack_30 = 0x18005d147;
  fVar9 = (float)powf(0x44800000);
  fVar10 = (float)(int64_t)param_1;
  if ((int64_t)param_1 < 0) {
    fVar10 = fVar10 + 1.8446744e+19;
  }
  uStackX_20 = (uint64_t)(uint)(int)cVar1;
  dStackX_18 = (double)(fVar9 * fVar10);
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_478;
  puVar4 = (uint64_t *)func_0x00018004b9a0();
  lVar5 = 0;
  uStack_458 = 0;
  pdStack_450 = &dStackX_18;
  iVar8 = __stdio_common_vsprintf(*puVar4 | 1,0,0,&unknown_var_8600_ptr);
  if (iVar8 < 0) {
    iVar8 = -1;
  }
  if (iVar8 < 0x400) {
    uStack_458 = 0;
    pdStack_450 = &dStackX_18;
    __stdio_common_vsprintf(*puVar4 | 1,acStack_438,0x400,&unknown_var_8600_ptr);
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (acStack_438[lVar6 + 1] != '\0');
    iVar8 = (int)(lVar6 + 1);
    if (0 < iVar8) {
      FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + iVar8);
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),acStack_438,
             (int64_t)((int)lVar6 + 2));
    }
  }
  else {
    iVar8 = iVar8 + 1;
    if (iVar8 != 0) {
      lVar5 = FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar8,3);
    }
    FUN_18004b9b0(lVar5,(int64_t)iVar8,&unknown_var_8600_ptr,&dStackX_18);
    FUN_1806281a0(param_2,lVar5);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_478);
}



int64_t FUN_18005d190(int64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  return param_1;
}





// 函数: void FUN_18005d1f0(uint64_t param_1,int64_t param_2)
void FUN_18005d1f0(uint64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_2 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &system_state_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





