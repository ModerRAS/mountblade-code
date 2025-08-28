#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part351.c - 19 个函数
// 函数: void function_4588a0(int32_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void function_4588a0(int32_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plStackX_20;
  void *plocal_var_40;
  int64_t lStack_38;
  int32_t local_var_28;
  RenderingSystem_MaterialHandler(render_system_data_memory,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  plVar2 = plStackX_20;
  if (plStackX_20 != (int64_t *)0x0) {
    pcVar1 = *(code **)(*plStackX_20 + 0x140);
    uVar3 = CoreMemoryPoolValidator(&plocal_var_40,param_2);
    (*pcVar1)(plVar2,uVar3,param_3);
    plocal_var_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_38 = 0;
    local_var_28 = 0;
    plocal_var_40 = &system_state_ptr;
  }
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t *
function_458970(int32_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t *aplStackX_8 [4];
  int8_t stack_array_30 [40];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_8,param_2,param_4,0xfffffffffffffffe);
  if (aplStackX_8[0] == (int64_t *)0x0) {
    uVar2 = 0xbf800000;
    uVar3 = 0xbf800000;
    uVar4 = 0xbf800000;
    uVar5 = 0x7f7fffff;
  }
  else {
    puVar1 = (int32_t *)(**(code **)(*aplStackX_8[0] + 0x120))(aplStackX_8[0],stack_array_30);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
  }
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4589f0(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void function_4589f0(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_18 [2];
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] != (int64_t *)0x0) {
    local_var_20 = *param_2;
    local_var_1c = param_2[1];
    local_var_18 = param_2[2];
    local_var_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xa8))(aplStackX_18[0],&local_var_20);
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458a50(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void function_458a50(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_18 [2];
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] != (int64_t *)0x0) {
    local_var_20 = *param_2;
    local_var_1c = param_2[1];
    local_var_18 = param_2[2];
    local_var_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xe8))(aplStackX_18[0],&local_var_20);
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_458ab0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x60))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458aee;
    }
  }
  uVar2 = 0;
LAB_180458aee:
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t
function_458b10(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t uVar1;
  int64_t *aplStackX_18 [2];
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] == (int64_t *)0x0) {
    uVar1 = 0;
  }
  else {
    local_var_20 = *param_2;
    local_var_1c = param_2[1];
    local_var_18 = param_2[2];
    local_var_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xa8))(aplStackX_18[0],&local_var_20);
    uVar1 = (**(code **)(*aplStackX_18[0] + 0x60))();
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458b90(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458b90(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x68))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458be0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458be0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x70))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458c30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458c30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x78))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458c80(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458c80(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *aplStackX_18 [2];
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  plVar2 = aplStackX_18[0];
  if (aplStackX_18[0] != (int64_t *)0x0) {
    pcVar1 = *(code **)(*aplStackX_18[0] + 0x158);
    uVar3 = CoreMemoryPoolValidator(&plocal_var_30,param_2);
    (*pcVar1)(plVar2,uVar3);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_28 = 0;
    local_var_18 = 0;
    plocal_var_30 = &system_state_ptr;
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458d30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458d30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plStackX_20;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  RenderingSystem_MaterialHandler(render_system_data_memory,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  plVar2 = plStackX_20;
  if (plStackX_20 != (int64_t *)0x0) {
    pcVar1 = *(code **)(*plStackX_20 + 0x150);
    uVar3 = CoreMemoryPoolValidator(&plocal_var_30,param_3);
    uVar4 = CoreMemoryPoolValidator(&plocal_var_50,param_2);
    (*pcVar1)(plVar2,uVar4,uVar3);
    plocal_var_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_28 = 0;
    local_var_18 = 0;
    plocal_var_30 = &system_state_ptr;
  }
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458e30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_458e30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x160))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_458e80(int32_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void function_458e80(int32_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
{
  int64_t *plStackX_20;
  RenderingSystem_MaterialHandler(render_system_data_memory,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x138))(plStackX_20,param_2,param_3);
  }
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_458ef0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x80))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458f31;
    }
  }
  uVar2 = 0;
LAB_180458f31:
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_458f50(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_memory,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x90))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458f91;
    }
  }
  uVar2 = 0;
LAB_180458f91:
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}
int32_t function_458fb0(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  int64_t lVar1;
  int64_t *aplStackX_10 [3];
  function_157ef0(param_1,aplStackX_10,param_1,*param_2,(int64_t)*(int *)(param_2 + 1),param_3,1);
  lVar1 = aplStackX_10[0][10];
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return (int)lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_459010(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plStackX_20;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  uVar2 = CoreMemoryPoolValidator(&plocal_var_30);
  function_1580f0(render_system_data_memory,&plStackX_20,param_1,uVar2,param_3,1,0);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_28 = 0;
  local_var_18 = 0;
  plocal_var_30 = &system_state_ptr;
  lVar1 = plStackX_20[10];
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return (int)lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4590d0(uint64_t param_1,int32_t *param_2)
void function_4590d0(uint64_t param_1,int32_t *param_2)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_2;
  local_var_14 = param_2[1];
  local_var_10 = param_2[2];
  local_var_c = param_2[3];
  (**(code **)(*render_system_data_memory + 0x48))(render_system_data_memory,param_1,&local_var_18);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4591a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4)
void function_4591a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4)
{
  code *pcVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  int8_t stack_array_198 [32];
  code *pcStack_178;
  void *plocal_var_168;
  int64_t lStack_160;
  int32_t local_var_150;
  void *plocal_var_148;
  int64_t lStack_140;
  int32_t local_var_130;
  uint64_t local_var_128;
  int64_t alStack_118 [4];
  int32_t stack_array_f8 [2];
  int8_t stack_array_f0 [152];
  int iStack_58;
  uint64_t local_var_48;
  local_var_128 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  pcStack_178 = SystemCore_MemoryManager;
  DataStructureManager(alStack_118,0x30,4,function_1c2890);
  iStack_58 = 0;
  lVar2 = CoreMemoryPoolValidator(&plocal_var_168,param_3);
  lVar4 = (int64_t)iStack_58;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(lVar2 + 8);
  }
  (**(code **)(alStack_118[lVar4 * 6] + 0x10))(alStack_118 + lVar4 * 6,puVar5);
  stack_array_f8[lVar4 * 0xc] = 0xffffffff;
  stack_array_f8[lVar4 * 0xc + 1] = param_4;
  stack_array_f0[lVar4 * 0x30] = 1;
  iStack_58 = iStack_58 + 1;
  plocal_var_168 = &system_data_buffer_ptr;
  if (lStack_160 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  local_var_150 = 0;
  pcVar1 = *(code **)(*render_system_data_memory + 0x70);
  plocal_var_168 = (void *)*param_2;
  lStack_160 = param_2[1];
  uVar3 = CoreMemoryPoolValidator(&plocal_var_148,param_1);
  (*pcVar1)(render_system_data_memory,uVar3,&plocal_var_168,alStack_118);
  plocal_var_148 = &system_data_buffer_ptr;
  if (lStack_140 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_140 = 0;
  local_var_130 = 0;
  plocal_var_148 = &system_state_ptr;
  SystemDataValidator(alStack_118,0x30,4,SystemCore_MemoryManager);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t
function_459360(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*render_system_data_memory + 0x70);
  local_var_40 = *param_2;
  local_var_3c = param_2[1];
  local_var_38 = param_2[2];
  local_var_34 = param_2[3];
  uVar3 = CoreMemoryPoolValidator(&plocal_var_30,param_1,*render_system_data_memory,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(render_system_data_memory,uVar3,&local_var_40,0);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4593f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4593f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar4 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*render_system_data_memory + 0x180);
  uVar2 = CoreMemoryPoolValidator(&plocal_var_30);
  uVar3 = CoreMemoryPoolValidator(&plocal_var_50,param_1);
  (*pcVar1)(render_system_data_memory,uVar3,uVar2,param_4,uVar4);
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_48 = 0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4594b0(uint64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
void function_4594b0(uint64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*render_system_data_memory + 0x40);
  CoreMemoryPoolValidator(&plocal_var_30,param_1,*render_system_data_memory,param_4,0xfffffffffffffffe);
  (*pcVar1)(render_system_data_memory,&plocal_var_30,param_2);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_459540(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void function_459540(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint64_t uVar2;
  void *plocal_var_40;
  int64_t lStack_38;
  pcVar1 = *(code **)(*render_system_data_memory + 0x18);
  uVar2 = CoreMemoryPoolValidator(&plocal_var_40,param_1,param_3,param_4,0xfffffffffffffffe);
  (*pcVar1)(render_system_data_memory,uVar2,param_2);
  plocal_var_40 = &system_data_buffer_ptr;
  if (lStack_38 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_4595c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*render_system_data_memory + 0xd0);
  uVar3 = CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(render_system_data_memory,uVar3);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_459640(int32_t param_1)
void function_459640(int32_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int aiStackX_8 [2];
  int32_t stack_special_x_10;
  int64_t alStack_28 [4];
  lVar1 = render_system_data_memory;
  stack_special_x_10 = param_1;
  puVar2 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  *puVar2 = 0;
  uVar3 = function_6fd3c0(*(int32_t *)(lVar1 + 0x218),*(int32_t *)(lVar1 + 0x21c),aiStackX_8);
  *puVar2 = uVar3;
  if (aiStackX_8[0] < 0) {
    SystemCore_ResourceManager0(&processed_var_7344_ptr);
    *puVar2 = 0;
  }
  function_33bd40(lVar1 + 0x220,alStack_28);
  *(uint64_t **)(alStack_28[0] + 8) = puVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4596f0(uint param_1)
void function_4596f0(uint param_1)
{
  int64_t *plVar1;
  uint *puVar2;
  for (puVar2 = *(uint **)(*(int64_t *)(render_system_data_memory + 0x228) +
                          ((uint64_t)param_1 % (uint64_t)*(uint *)(render_system_data_memory + 0x230)) * 8);
      puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 4)) {
    if (param_1 == *puVar2) goto LAB_18045974e;
  }
  puVar2 = *(uint **)(*(int64_t *)(render_system_data_memory + 0x228) +
                     *(int64_t *)(render_system_data_memory + 0x230) * 8);
LAB_18045974e:
  plVar1 = *(int64_t **)(puVar2 + 2);
  if (*plVar1 != 0) {
    free();
    *plVar1 = 0;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(plVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4598d0(uint64_t *param_1,int32_t param_2,int32_t *param_3)
void function_4598d0(uint64_t *param_1,int32_t param_2,int32_t *param_3)
{
  int32_t astack_special_x_8 [2];
  (**(code **)(*render_system_data_memory + 0x1d8))(render_system_data_memory,*param_1,param_2,astack_special_x_8);
  *param_3 = astack_special_x_8[0];
  return;
}
// 函数: void function_459930(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4,
void function_459930(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4,
                  int32_t *param_5)
{
  int32_t astack_special_x_10 [6];
  function_15af90(param_1,*param_2,param_3,*param_4,astack_special_x_10);
  *param_5 = astack_special_x_10[0];
  return;
}