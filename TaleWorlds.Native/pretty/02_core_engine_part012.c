#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part012.c - 22 个函数

// 函数: void FUN_1800497d0(void)
void FUN_1800497d0(void)

{
  _Mtx_destroy_in_situ();
  return;
}





// 函数: void FUN_1800497f0(uint64_t param_1)
void FUN_1800497f0(uint64_t param_1)

{
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1);
  return;
}



uint64_t *
FUN_180049830(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &unknown_var_3280_ptr;
  _Cnd_init_in_situ(param_1 + 4);
  _Mtx_init_in_situ(param_1 + 0xd,2,param_3,param_4,uVar1);
  *(int8_t *)(param_1 + 0x17) = 0;
  return param_1;
}



uint64_t *
FUN_1800498d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x98,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049910(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180049910(int64_t param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x80) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049931(void)
void FUN_180049931(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049956(int8_t *param_1)
void FUN_180049956(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



uint64_t * FUN_180049970(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3432_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800499c0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1800499c0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_118 [32];
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_118);
}



uint64_t *
FUN_180049b30(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3432_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x80,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



uint64_t *
FUN_180049bb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049bf0(int64_t param_1,int64_t param_2)
void FUN_180049bf0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x40) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180049c27. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x40);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,0x40,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180049c70(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180049c70(int64_t param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x40) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049c8f(void)
void FUN_180049c8f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049cb4(int8_t *param_1)
void FUN_180049cb4(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



uint64_t * FUN_180049cd0(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180049d20(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180049d20(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_a0,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_a8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_d8);
}



uint64_t *
FUN_180049eb0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x40,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049f30(uint64_t *param_1)
void FUN_180049f30(uint64_t *param_1)

{
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





// 函数: void FUN_180049fd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180049fd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180049fd0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[8] = &system_data_buffer_ptr;
  if (param_2[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[9] = 0;
  *(int32_t *)(param_2 + 0xb) = 0;
  param_2[8] = &system_state_ptr;
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180050b00(void)
void FUN_180050b00(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int16_t *puVar10;
  uint uVar11;
  uint64_t uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  int64_t **pplStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t lStackX_20;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t ***ppplStack_70;
  uint64_t uStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  uint64_t uVar12;
  
  lVar8 = core_system_data_config;
  lVar6 = system_main_module_state;
  if (system_debug_flag != '\0') {
    FUN_180050b30();
    return;
  }
  uStack_68 = 0xfffffffffffffffe;
  *(uint64_t *)(core_system_data_config + 0x2038) = *(uint64_t *)(core_system_data_config + 0x2030);
  puVar10 = (int16_t *)(lVar8 + 0x14);
  lVar8 = 0x100;
  uVar12 = 0;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 0xc;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18004be90(core_system_data_config + 0x48);
  core_system_data_config = 0;
  core_system_control_config = 0;
  if (system_counter_2851 != '\0') {
    plVar1 = *(int64_t **)(lVar6 + 8);
    pplVar9 = (int64_t **)FUN_18062b1e0(system_memory_pool_ptr,0x48,8,3);
    *pplVar9 = (int64_t *)&system_handler1_ptr;
    *pplVar9 = (int64_t *)&system_handler2_ptr;
    *(int32_t *)(pplVar9 + 1) = 0;
    *pplVar9 = (int64_t *)&unknown_var_1000_ptr;
    LOCK();
    *(int8_t *)(pplVar9 + 2) = 0;
    UNLOCK();
    pplVar9[3] = (int64_t *)0xffffffffffffffff;
    *pplVar9 = (int64_t *)&unknown_var_2640_ptr;
    *(int32_t *)(pplVar9 + 5) = 4;
    pplVar9[4] = plVar1;
    ppplStack_70 = (int64_t ***)pplVar9;
    pplStack_60 = pplVar9;
    (*(code *)(*pplVar9)[5])(pplVar9);
    puVar2 = (uint64_t *)plVar1[0x28];
    pcVar3 = *(code **)*puVar2;
    ppplStack_70 = &pplStackX_8;
    pplStackX_8 = pplVar9;
    (*(code *)(*pplVar9)[5])(pplVar9);
    (*pcVar3)(puVar2,&pplStackX_8);
    FUN_18020f150(plVar1[0x28]);
    (*(code *)(*pplVar9)[7])(pplVar9);
  }
  lVar8 = *(int64_t *)(system_operation_state + 0x18) - *(int64_t *)(system_operation_state + 0x10);
  uVar13 = uVar12;
  if (lVar8 / 0x1c != 0) {
    do {
      FUN_1801edeb0(lVar8,uVar13 * 0x1c + *(int64_t *)(system_operation_state + 0x10));
      uVar11 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar11;
      lVar8 = *(int64_t *)(system_operation_state + 0x18) - *(int64_t *)(system_operation_state + 0x10);
      uVar13 = (int64_t)(int)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 < (uint64_t)(lVar8 / 0x1c));
  }
  *(uint64_t *)(system_operation_state + 0x18) = *(uint64_t *)(system_operation_state + 0x10);
  *(int8_t *)(*(int64_t *)(*(int64_t *)(lVar6 + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(lVar6 + 0x3c8) != '\0') {
    FUN_18004e5f0(lVar6);
    LOCK();
    *(int8_t *)(lVar6 + 0x3c8) = 0;
    UNLOCK();
  }
  lVar8 = core_system_data_config;
  *(uint64_t *)(core_system_data_config + 4) = 0;
  *(uint64_t *)(lVar8 + 0xc) = 0;
  *(uint64_t *)(lVar8 + 0x14) = 0;
  FUN_1800572d0(lVar8 + 0x20);
  FUN_1800572d0(lVar8 + 0x50);
  LOCK();
  *(int32_t *)(lVar8 + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(lVar8 + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(lVar8 + 0x88) = 0;
  UNLOCK();
  lVar8 = core_system_data_config;
  if (core_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar8 = lStackX_20;
  }
  *(double *)(lVar6 + 0x68) = (double)(lVar8 - core_system_data_config) * core_system_data_config;
  if (system_counter_2863 != '\0') {
    uStack_58 = 0x180c91288;
    iVar7 = _Mtx_lock(0x180c91288);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }


// 函数: void FUN_180050b30(int64_t param_1)
void FUN_180050b30(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int16_t *puVar9;
  uint uVar10;
  uint64_t uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  int64_t **pplStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t lStackX_20;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t ***ppplStack_70;
  uint64_t uStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  uint64_t uVar11;
  
  lVar7 = core_system_data_config;
  uStack_68 = 0xfffffffffffffffe;
  *(uint64_t *)(core_system_data_config + 0x2038) = *(uint64_t *)(core_system_data_config + 0x2030);
  puVar9 = (int16_t *)(lVar7 + 0x14);
  lVar7 = 0x100;
  uVar11 = 0;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 0xc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_18004be90(core_system_data_config + 0x48);
  core_system_data_config = 0;
  core_system_control_config = 0;
  if (system_counter_2851 != '\0') {
    plVar1 = *(int64_t **)(param_1 + 8);
    pplVar8 = (int64_t **)FUN_18062b1e0(system_memory_pool_ptr,0x48,8,3);
    *pplVar8 = (int64_t *)&system_handler1_ptr;
    *pplVar8 = (int64_t *)&system_handler2_ptr;
    *(int32_t *)(pplVar8 + 1) = 0;
    *pplVar8 = (int64_t *)&unknown_var_1000_ptr;
    LOCK();
    *(int8_t *)(pplVar8 + 2) = 0;
    UNLOCK();
    pplVar8[3] = (int64_t *)0xffffffffffffffff;
    *pplVar8 = (int64_t *)&unknown_var_2640_ptr;
    *(int32_t *)(pplVar8 + 5) = 4;
    pplVar8[4] = plVar1;
    ppplStack_70 = (int64_t ***)pplVar8;
    pplStack_60 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    puVar2 = (uint64_t *)plVar1[0x28];
    pcVar3 = *(code **)*puVar2;
    ppplStack_70 = &pplStackX_8;
    pplStackX_8 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    (*pcVar3)(puVar2,&pplStackX_8);
    FUN_18020f150(plVar1[0x28]);
    (*(code *)(*pplVar8)[7])(pplVar8);
  }
  lVar7 = *(int64_t *)(system_operation_state + 0x18) - *(int64_t *)(system_operation_state + 0x10);
  uVar12 = uVar11;
  if (lVar7 / 0x1c != 0) {
    do {
      FUN_1801edeb0(lVar7,uVar12 * 0x1c + *(int64_t *)(system_operation_state + 0x10));
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      lVar7 = *(int64_t *)(system_operation_state + 0x18) - *(int64_t *)(system_operation_state + 0x10);
      uVar12 = (int64_t)(int)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 < (uint64_t)(lVar7 / 0x1c));
  }
  *(uint64_t *)(system_operation_state + 0x18) = *(uint64_t *)(system_operation_state + 0x10);
  *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    FUN_18004e5f0(param_1);
    LOCK();
    *(int8_t *)(param_1 + 0x3c8) = 0;
    UNLOCK();
  }
  lVar7 = core_system_data_config;
  *(uint64_t *)(core_system_data_config + 4) = 0;
  *(uint64_t *)(lVar7 + 0xc) = 0;
  *(uint64_t *)(lVar7 + 0x14) = 0;
  FUN_1800572d0(lVar7 + 0x20);
  FUN_1800572d0(lVar7 + 0x50);
  LOCK();
  *(int32_t *)(lVar7 + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(lVar7 + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(lVar7 + 0x88) = 0;
  UNLOCK();
  lVar7 = core_system_data_config;
  if (core_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar7 = lStackX_20;
  }
  *(double *)(param_1 + 0x68) = (double)(lVar7 - core_system_data_config) * core_system_data_config;
  if (system_counter_2863 != '\0') {
    uStack_58 = 0x180c91288;
    iVar6 = _Mtx_lock(0x180c91288);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }


// 函数: void FUN_180051150(int64_t param_1,uint64_t param_2)
void FUN_180051150(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int32_t uVar5;
  int8_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  float fVar15;
  uint64_t uVar16;
  float fVar17;
  int8_t auStack_348 [32];
  int64_t **pplStack_328;
  void *puStack_320;
  int32_t uStack_318;
  uint64_t uStack_308;
  char cStack_300;
  char acStack_2ff [7];
  int64_t *plStack_2f8;
  int32_t uStack_2f0;
  void *puStack_2e8;
  uint64_t *puStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  int32_t auStack_2c8 [2];
  int64_t *plStack_2c0;
  uint64_t uStack_2b8;
  uint64_t auStack_2a8 [67];
  int64_t alStack_90 [3];
  int32_t uStack_78;
  uint64_t uStack_68;
  uint64_t uVar11;
  
  uStack_2b8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_348;
  fVar15 = (float)param_2;
  system_stack_size = (int64_t)(fVar15 * 100000.0);
  system_error_code = system_error_code + system_stack_size;
  core_system_control_config = fVar15;
  uVar16 = FUN_180091020();
  uVar16 = FUN_1801ed510(uVar16,param_2);
  cVar2 = FUN_180160500(uVar16,0x52);
  cVar3 = FUN_180160500(1,0x51);
  lVar12 = 0xe0;
  if (cVar3 == '\0') {
    if (cVar2 == '\0') goto LAB_18005122d;
  }
  else {


// 函数: void FUN_180051d00(int64_t param_1)
void FUN_180051d00(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 0x218);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180051d40(uint64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int8_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  puVar7 = (int8_t *)((int64_t)param_1 + 0xf);
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int8_t *)((int64_t)param_1 + 0xc) = *(int8_t *)((int64_t)param_2 + 0xc);
  *(int8_t *)((int64_t)param_1 + 0xd) = *(int8_t *)((int64_t)param_2 + 0xd);
  *(int8_t *)((int64_t)param_1 + 0xe) = *(int8_t *)((int64_t)param_2 + 0xe);
  lVar6 = 0x100;
  do {
    *puVar7 = puVar7[(int64_t)param_2 - (int64_t)param_1];
    puVar7[1] = puVar7[((int64_t)param_2 - (int64_t)param_1) + 1];
    puVar7 = puVar7 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(int8_t *)((int64_t)param_1 + 0x20f) = *(int8_t *)((int64_t)param_2 + 0x20f);
  plVar1 = param_1 + 0x43;
  *(int8_t *)(param_1 + 0x42) = *(int8_t *)(param_2 + 0x42);
  *(int8_t *)((int64_t)param_1 + 0x211) = *(int8_t *)((int64_t)param_2 + 0x211);
  if (plVar1 != param_2 + 0x43) {
    lVar6 = *plVar1;
    lVar2 = param_2[0x44];
    lVar3 = param_2[0x43];
    lVar8 = lVar2 - lVar3;
    uVar9 = lVar8 >> 2;
    if ((uint64_t)(param_1[0x45] - lVar6 >> 2) < uVar9) {
      if (uVar9 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_18062b420(system_memory_pool_ptr,uVar9 * 4,*(int8_t *)(param_1 + 0x46));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar3,lVar8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar2 = lVar6 + uVar9 * 4;
      *plVar1 = lVar6;
      param_1[0x44] = lVar2;
      param_1[0x45] = lVar2;
    }
    else {
      lVar4 = param_1[0x44];
      uVar5 = lVar4 - lVar6 >> 2;
      if (uVar5 < uVar9) {
        lVar8 = uVar5 * 4 + lVar3;
        if (lVar3 != lVar8) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar3);
        }
        if (lVar8 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar8,lVar2 - lVar8);
        }
        param_1[0x44] = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar3,lVar8);
        }
        param_1[0x44] = lVar6;
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180051de4(int64_t param_1)
void FUN_180051de4(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar5;
  uint64_t uVar6;
  
  lVar1 = unaff_RSI[1];
  lVar2 = *unaff_RSI;
  lVar5 = lVar1 - lVar2;
  uVar6 = lVar5 >> 2;
  if ((uint64_t)(in_RAX - param_1 >> 2) < uVar6) {
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 4,(char)unaff_RDI[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar5);
    }
    if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar3 + uVar6 * 4;
    *unaff_RDI = lVar3;
    unaff_RDI[1] = lVar1;
    unaff_RDI[2] = lVar1;
  }
  else {
    lVar3 = unaff_RDI[1];
    uVar4 = lVar3 - param_1 >> 2;
    if (uVar4 < uVar6) {
      lVar5 = uVar4 * 4 + lVar2;
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar5 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar5,lVar1 - lVar5);
      }
      unaff_RDI[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar5);
      }
      unaff_RDI[1] = param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180051e13(void)
void FUN_180051e13(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  
  if (unaff_R14 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,unaff_R14 * 4,(char)unaff_RDI[3]);
  }
  if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_R14 * 4;
  *unaff_RDI = lVar2;
  unaff_RDI[1] = lVar1;
  unaff_RDI[2] = lVar1;
  return;
}





// 函数: void FUN_180051e74(int64_t param_1)
void FUN_180051e74(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  
  lVar2 = *(int64_t *)(unaff_RDI + 8);
  uVar3 = lVar2 - param_1 >> 2;
  if (uVar3 < unaff_R14) {
    lVar1 = uVar3 * 4 + unaff_RSI;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RBP - lVar1);
    }
    *(int64_t *)(unaff_RDI + 8) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RDI + 8) = param_1;
  }
  return;
}





// 函数: void FUN_180051eef(void)
void FUN_180051eef(void)

{
  return;
}



bool FUN_180051f00(int64_t param_1)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  void *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  puVar1 = (uint64_t *)(param_1 + 0x2e0);
  FUN_1806279c0(&puStack_30);
  puVar8 = *(uint64_t **)(param_1 + 0x2f0);
  puVar11 = puVar1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar9 = (uint64_t *)puVar8[1];
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar8[5] - (int64_t)pbStack_28];
            iVar6 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar3 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar9 = (uint64_t *)puVar8[1];
            goto LAB_180051f8b;
          }
        }
        puVar9 = (uint64_t *)*puVar8;
      }
LAB_180051f8b:
      puVar10 = puVar8;
      if (bVar3) {
        puVar10 = puVar11;
      }
      puVar8 = puVar9;
      puVar11 = puVar10;
    } while (puVar9 != (uint64_t *)0x0);
    if (puVar10 != puVar1) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_180051fc9;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar7 = (int64_t)pbStack_28 - (int64_t)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar7];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar2 - uVar5) < 1) goto LAB_180051fc9;
      }
    }
  }
  puVar10 = puVar1;
LAB_180051fc9:
  puStack_30 = &system_data_buffer_ptr;
  if (pbStack_28 == (byte *)0x0) {
    return puVar10 != puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180052020(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180627ae0(param_2,system_main_module_state + 0x2c0,param_3,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180052070(int64_t param_1)
void FUN_180052070(int64_t param_1)

{
  uint64_t *puVar1;
  int iVar2;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  int8_t auStack_a8 [128];
  uint64_t uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uStack_e8 = 0;
  lStack_b0 = param_1;
  FUN_180627ae0(param_1,system_main_module_state + 0x170);
  uStack_e8 = 1;
  iVar2 = *(int *)(param_1 + 0x10) + 8;
  FUN_1806277c0(param_1,iVar2);
  puVar1 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8));
  *puVar1 = 0x2f73656873617263;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
                    // WARNING: Subroutine does not return
  memset(auStack_a8,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



