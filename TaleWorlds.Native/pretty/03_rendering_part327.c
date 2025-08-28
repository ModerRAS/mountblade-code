#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part327.c - 18 个函数
// 函数: void function_43bff0(uint64_t param_1)
void function_43bff0(uint64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(**(code **)(*render_system_data_memory + 0x70))(render_system_data_memory,&system_data_cc18);
// WARNING: Could not recover jumptable at 0x00018043c01b. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c020(int32_t *param_1,int32_t *param_2,int32_t param_3,int8_t param_4)
void function_43c020(int32_t *param_1,int32_t *param_2,int32_t param_3,int8_t param_4)
{
  int32_t astack_special_x_18 [4];
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_1;
  local_var_14 = param_1[1];
  local_var_10 = param_1[2];
  local_var_c = param_1[3];
  local_var_28 = *param_2;
  local_var_24 = param_2[1];
  local_var_20 = param_2[2];
  local_var_1c = param_2[3];
  if (*(char *)(render_system_data_memory + 0x50) != '\0') {
    astack_special_x_18[0] = param_3;
    function_636790(render_system_data_memory,&local_var_18,&local_var_28,astack_special_x_18,param_4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c060(int32_t *param_1,uint64_t *param_2,int32_t param_3,int8_t param_4,
void function_43c060(int32_t *param_1,uint64_t *param_2,int32_t param_3,int8_t param_4,
                  int32_t param_5)
{
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_28 = *param_2;
  local_var_20 = param_2[1];
  local_var_18 = *param_1;
  local_var_14 = param_1[1];
  local_var_10 = param_1[2];
  local_var_c = param_1[3];
  RenderingSystem_VertexBuffer(render_system_data_memory,&local_var_18,&local_var_28,param_3,param_4,param_5);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c0b0(int32_t *param_1,int32_t param_2,int32_t param_3,int8_t param_4,
void function_43c0b0(int32_t *param_1,int32_t param_2,int32_t param_3,int8_t param_4,
                  int32_t param_5)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_1;
  local_var_14 = param_1[1];
  local_var_10 = param_1[2];
  local_var_c = param_1[3];
  function_6345f0(render_system_data_memory,&local_var_18,param_2,param_3,param_4,param_5);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c0f0(int32_t *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4,
void function_43c0f0(int32_t *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4,
                  int8_t param_5,int32_t param_6)
{
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_28 = *param_2;
  local_var_20 = param_2[1];
  local_var_18 = *param_1;
  local_var_14 = param_1[1];
  local_var_10 = param_1[2];
  local_var_c = param_1[3];
  function_6336a0(render_system_data_memory,&local_var_18,&local_var_28,param_3,param_4,param_5,param_6);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c160(int32_t *param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void function_43c160(int32_t *param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6)
{
  int32_t stack_special_x_8;
  int32_t stack_special_x_c;
  uint64_t uVar1;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&plocal_var_30);
  stack_special_x_c = param_5;
  local_var_40 = *param_1;
  local_var_3c = param_1[1];
  local_var_38 = param_1[2];
  local_var_34 = param_1[3];
  stack_special_x_8 = param_4;
  function_632d00(render_system_data_memory,&local_var_40,&plocal_var_30,param_3,&stack_special_x_8,param_6,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// 函数: void function_43c230(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_43c230(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  CoreMemoryPoolValidator(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c290(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)
void function_43c290(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  local_var_18 = 0x22663399;
  local_var_28 = param_1;
  local_var_24 = param_2;
  local_var_20 = param_3;
  local_var_1c = param_4;
  function_6371f0(render_system_data_memory + 0x158,&local_var_28);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c2e0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void function_43c2e0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  local_var_18 = param_5;
  local_var_28 = param_1;
  local_var_24 = param_2;
  local_var_20 = param_3;
  local_var_1c = param_4;
  function_6371f0(render_system_data_memory + 0x158,&local_var_28);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c350(void)
void function_43c350(void)
{
  code *pcVar1;
  Function_0a253824(system_message_context);
  function_055f70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void function_43c370(int param_1)
void function_43c370(int param_1)
{
  uint64_t uVar1;
  uVar1 = function_623ce0();
  if ((uint64_t)(int64_t)param_1 < uVar1 >> 0x14) {
// WARNING: Subroutine does not return
    SystemCore_MemoryManager0();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c3b0(int32_t *param_1,int32_t *param_2,int32_t param_3,int8_t param_4,
void function_43c3b0(int32_t *param_1,int32_t *param_2,int32_t param_3,int8_t param_4,
                  int32_t param_5)
{
  int64_t lVar1;
  int iVar2;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  uint64_t local_var_18;
  lVar1 = render_system_data_memory;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_b8 = *param_2;
  local_var_b4 = param_2[1];
  local_var_b0 = param_2[2];
  local_var_ac = param_2[3];
  local_var_c8 = *param_1;
  local_var_c4 = param_1[1];
  local_var_c0 = param_1[2];
  local_var_bc = param_1[3];
  if (*(char *)(render_system_data_memory + 0x50) != '\0') {
    lStack_a0 = render_system_data_memory;
    iVar2 = _Mtx_lock(render_system_data_memory);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    local_var_98 = local_var_c8;
    local_var_94 = local_var_c4;
    local_var_90 = local_var_c0;
    local_var_88 = local_var_b8;
    local_var_84 = local_var_b4;
    local_var_80 = local_var_b0;
    local_var_78 = local_var_c8;
    local_var_74 = local_var_b4;
    local_var_70 = local_var_c0;
    local_var_68 = local_var_b8;
    local_var_64 = local_var_b4;
    local_var_60 = local_var_c0;
    local_var_58 = local_var_c8;
    local_var_54 = local_var_c4;
    local_var_50 = local_var_b0;
    local_var_48 = local_var_b8;
    local_var_44 = local_var_c4;
    local_var_40 = local_var_b0;
    local_var_38 = local_var_c8;
    local_var_34 = local_var_b4;
    local_var_30 = local_var_b0;
    local_var_28 = local_var_b8;
    local_var_24 = local_var_c4;
    local_var_20 = local_var_c0;
    local_var_d8 = param_5;
    function_633220(lVar1,&local_var_98,param_3,param_4);
    iVar2 = _Mtx_unlock(lVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c510(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
void function_43c510(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
                  int8_t param_5,int32_t param_6)
{
  int64_t lVar1;
  int iVar2;
  int8_t stack_array_138 [32];
  int32_t local_var_118;
  uint64_t local_var_108;
  int64_t lStack_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int8_t stack_array_98 [128];
  uint64_t local_var_18;
  lVar1 = render_system_data_memory;
  local_var_108 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  local_var_f8 = *param_2;
  local_var_f0 = param_2[1];
  local_var_e8 = *param_1;
  local_var_e0 = param_1[1];
  local_var_d8 = *param_3;
  local_var_d0 = param_3[1];
  local_var_c8 = param_3[2];
  local_var_c0 = param_3[3];
  local_var_b8 = *(int32_t *)(param_3 + 4);
  local_var_b4 = *(int32_t *)((int64_t)param_3 + 0x24);
  local_var_b0 = *(int32_t *)(param_3 + 5);
  local_var_ac = *(int32_t *)((int64_t)param_3 + 0x2c);
  local_var_a8 = *(int32_t *)(param_3 + 6);
  local_var_a4 = *(int32_t *)((int64_t)param_3 + 0x34);
  local_var_a0 = *(int32_t *)(param_3 + 7);
  local_var_9c = *(int32_t *)((int64_t)param_3 + 0x3c);
  if (*(char *)(render_system_data_memory + 0x50) != '\0') {
    lStack_100 = render_system_data_memory;
    iVar2 = _Mtx_lock(render_system_data_memory);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    Function_dd627547(stack_array_98,&local_var_e8,&local_var_f8,&local_var_d8);
    local_var_118 = param_6;
    function_633220(lVar1,stack_array_98,param_4,param_5);
    iVar2 = _Mtx_unlock(lVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c6b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void function_43c6b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  (**(code **)(*(int64_t *)*render_system_data_memory + 0x20))
            ((int64_t *)*render_system_data_memory,param_2,param_4,param_1,0,1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_43c6e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void function_43c6e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int8_t param_5)
{
  (**(code **)(*(int64_t *)*render_system_data_memory + 0x28))
            ((int64_t *)*render_system_data_memory,param_2,param_4,param_1,param_5,1);
  return;
}
// 函数: void function_43c740(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_43c740(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  function_16ae30();
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
int64_t * function_43c7a0(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t local_var_c;
  plVar1 = *(int64_t **)(param_2 + 0x158);
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(local_var_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_c,0xffffffff);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_43c820(int32_t *param_1,int64_t param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x298,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_2f5f70(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  if (param_2 != 0) {
    function_2f8640(plVar3,param_2);
  }
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  local_var_20 = SUB84(plVar3,0);
  local_var_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}
uint function_43c8e0(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x288);
    fVar2 = *(float *)(param_1 + 0x28c);
    fVar3 = *(float *)(param_1 + 0x290);
    dVar9 = (double)pow((double)*(float *)(param_1 + 0x284),0x3fdd1745d1745d17);
    dVar10 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar6 = (uint)(int64_t)(fVar3 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar7 = (uint)(int64_t)((float)dVar9 * 256.0);
    uVar6 = 0xff;
    if (uVar7 < 0xff) {
      uVar6 = uVar7;
    }
    uVar5 = (uint)(int64_t)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar5 < 0xff) {
      uVar7 = uVar5;
    }
    uVar4 = (uint)(int64_t)((float)dVar11 * 256.0);
    uVar5 = 0xff;
    if (uVar4 < 0xff) {
      uVar5 = uVar4;
    }
    return ((uVar6 | uVar8 << 8) << 8 | uVar7) << 8 | uVar5;
  }
  return 0;
}
uint function_43c8f5(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  fVar1 = *(float *)(param_1 + 0x288);
  fVar2 = *(float *)(param_1 + 0x28c);
  fVar3 = *(float *)(param_1 + 0x290);
  dVar9 = (double)pow((double)*(float *)(param_1 + 0x284));
  dVar10 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar6 = (uint)(int64_t)(fVar3 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar7 = (uint)(int64_t)((float)dVar9 * 256.0);
  uVar6 = 0xff;
  if (uVar7 < 0xff) {
    uVar6 = uVar7;
  }
  uVar5 = (uint)(int64_t)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar5 < 0xff) {
    uVar7 = uVar5;
  }
  uVar4 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar5 = 0xff;
  if (uVar4 < 0xff) {
    uVar5 = uVar4;
  }
  return ((uVar6 | uVar8 << 8) << 8 | uVar7) << 8 | uVar5;
}
uint64_t function_43c9fc(void)
{
  return 0;
}
// 函数: void function_43ca10(int64_t *param_1,uint param_2)
void function_43ca10(int64_t *param_1,uint param_2)
{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  if (param_1 != (int64_t *)0x0) {
    fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
    fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
    (**(code **)(*param_1 + 0x108))(fStack_10,&fStack_18);
  }
  return;
}
// 函数: void function_43caa0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void function_43caa0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)
{
  if (param_1 != 0) {
    *(int32_t *)(param_1 + 0x60) = param_2;
    *(int32_t *)(param_1 + 100) = param_3;
    *(int32_t *)(param_1 + 0x68) = param_4;
    *(int32_t *)(param_1 + 0x6c) = param_5;
  }
  return;
}