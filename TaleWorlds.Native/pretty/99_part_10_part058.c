#include "TaleWorlds.Native.Split.h"
// 99_part_10_part058.c - 1 个函数
// 函数: void function_6d3d20(uint64_t param_1,int64_t *param_2,int64_t *param_3)
void function_6d3d20(uint64_t param_1,int64_t *param_2,int64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  plVar4 = (int64_t *)PxGetFoundation();
  plVar4 = (int64_t *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (int64_t *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&ui_system_data_1304_ptr,&ui_system_data_1240_ptr,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(int32_t *)((int64_t)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(int32_t *)((int64_t)plVar5 + 0x5c) = uVar2;
  uVar1 = *(int32_t *)((int64_t)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((int64_t)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((int64_t)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x130))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
// WARNING: Could not recover jumptable at 0x0001806d3de8. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}
uint64_t *
function_6d3e50(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &processed_var_9248_ptr;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &system_buffer_ptr;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
uint64_t *
function_6d3f00(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &processed_var_9264_ptr;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &system_buffer_ptr;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
uint64_t *
function_6d3fb0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &processed_var_9112_ptr;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &system_buffer_ptr;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
uint64_t *
function_6d4060(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &processed_var_7216_ptr;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &system_buffer_ptr;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
uint64_t *
function_6d4110(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &processed_var_9208_ptr;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &system_buffer_ptr;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
// WARNING: Removing unreachable block (ram,0x0001806d4257)
// WARNING: Removing unreachable block (ram,0x0001806d425b)
// WARNING: Removing unreachable block (ram,0x0001806d423e)
// WARNING: Removing unreachable block (ram,0x0001806d4230)
// WARNING: Removing unreachable block (ram,0x0001806d4234)
// WARNING: Removing unreachable block (ram,0x0001806d4265)
uint64_t function_6d41c0(void)
{
  int64_t *in_R9;
  int8_t stack_array_78 [120];
  (**(code **)(*in_R9 + 0x18))();
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(stack_array_78);
  return 1;
}
bool function_6d4280(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t stack_special_x_10;
  uint64_t *plocal_var_298;
  int64_t lStack_290;
  uint64_t local_var_288;
  uint64_t *plocal_var_280;
  int64_t lStack_278;
  uint64_t local_var_270;
  uint64_t **pplocal_var_268;
  uint64_t **pplocal_var_260;
  uint64_t local_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  int64_t *plStack_230;
  uint64_t local_var_228;
  int8_t local_var_220;
  uint64_t *plocal_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  int8_t stack_array_1f8 [480];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  stack_special_x_10 = (**(code **)(*param_4 + 0x18))();
  plocal_var_280 = &stack_special_x_10;
  lStack_278 = 0;
  plocal_var_298 = &stack_special_x_10;
  local_var_270 = 0;
  lStack_290 = 0;
  local_var_288 = 0;
  __0PxArticulationGeneratedInfo_physx__QEAA_XZ(stack_array_1f8);
  uVar4 = param_6;
  pplocal_var_268 = &plocal_var_280;
  pplocal_var_260 = &plocal_var_298;
  param_5._0_1_ = '\0';
  plocal_var_218 = &param_5;
  local_var_228 = param_6;
  local_var_220 = 1;
  local_var_210 = 0;
  local_var_208 = 0;
  local_var_258 = uVar2;
  local_var_250 = uVar3;
  local_var_248 = uVar1;
  local_var_240 = param_3;
  local_var_238 = param_2;
  plStack_230 = param_4;
  function_6c52c0(stack_array_1f8,&pplocal_var_268,0);
  pplocal_var_268 = &plocal_var_280;
  pplocal_var_260 = &plocal_var_298;
  plocal_var_218 = &param_5;
  local_var_228 = uVar4;
  local_var_220 = 1;
  local_var_210 = 0;
  local_var_208 = 0;
  local_var_258 = uVar2;
  local_var_250 = uVar3;
  local_var_248 = uVar1;
  local_var_240 = param_3;
  local_var_238 = param_2;
  plStack_230 = param_4;
  function_6c55d0(stack_array_1f8,&pplocal_var_268,0);
  bVar5 = (char)param_5 == '\0';
  if ((((local_var_288 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_298 + 0x10))();
  }
  if ((((local_var_270 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_280 + 0x10))();
  }
  return bVar5;
}