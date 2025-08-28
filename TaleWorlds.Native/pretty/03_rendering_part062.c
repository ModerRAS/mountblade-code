#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part062.c - 15 个函数
// 函数: void function_29e3e0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_29e3e0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar2;
  int64_t lVar3;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
  lVar3 = SystemCore_Scheduler(param_2);
  uVar2 = *(uint64_t *)(lVar3 + 8);
  lVar3 = SystemCore_Scheduler(param_3);
// WARNING: Could not recover jumptable at 0x00018029e43f. Too many branches
// WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(uint64_t *)(lVar3 + 8),uVar2);
  return;
}
// 函数: void function_29e450(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
void function_29e450(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
                  uint64_t param_6,int param_7,int param_8,int param_9)
{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  int64_t lVar4;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  lVar4 = SystemCore_Scheduler(param_6);
  uVar3 = *(uint64_t *)(lVar4 + 8);
  lVar4 = SystemCore_Scheduler();
  (*pcVar2)(plVar1,*(uint64_t *)(lVar4 + 8),param_3 + param_4 * param_5,0,0,0,uVar3,
            param_8 * param_9 + param_7,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29e500(int64_t param_1,int64_t param_2,int64_t param_3)
void function_29e500(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  int64_t lVar4;
  lVar4 = system_main_module_state;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  uVar3 = *(uint64_t *)(param_3 + 0x10);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,0,0,0,uVar3,0,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29e570(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,int32_t param_5
void function_29e570(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,int32_t param_5
                  ,int param_6)
{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  int8_t stack_array_78 [32];
  int32_t local_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int *piStack_38;
  int aiStack_28 [4];
  int32_t local_var_18;
  int32_t local_var_14;
  uint64_t local_var_10;
  lVar3 = system_main_module_state;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  aiStack_28[3] = param_6 + param_4;
  local_var_48 = *(uint64_t *)(param_3 + 0x10);
  aiStack_28[1] = 0;
  aiStack_28[2] = 0;
  local_var_18 = 1;
  local_var_14 = 1;
  pcVar2 = *(code **)(*plVar1 + 0x170);
  *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
  piStack_38 = aiStack_28;
  local_var_40 = 0;
  local_var_50 = 0;
  local_var_58 = 0;
  aiStack_28[0] = param_4;
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,param_5);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_78);
}
// 函数: void function_29e630(int64_t param_1,int64_t param_2,int param_3,int param_4,int32_t param_5,
void function_29e630(int64_t param_1,int64_t param_2,int param_3,int param_4,int32_t param_5,
                  int64_t param_6)
{
  byte bVar1;
  uint uVar2;
  int64_t *plVar3;
  code *pcVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  plVar3 = *(int64_t **)(param_1 + 0x8400);
  bVar1 = *(byte *)(param_2 + 0x335);
  uVar2 = *(uint *)(param_2 + 0x35c);
  pcVar4 = *(code **)(*plVar3 + 0x180);
  uVar5 = *(uint64_t *)(param_6 + 0x10);
  lVar6 = SystemCore_Scheduler(param_2);
  uVar7 = (uint)bVar1;
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar7 = uVar2;
  }
  (*pcVar4)(plVar3,*(uint64_t *)(lVar6 + 8),uVar7 * param_4 + param_3,0,uVar5,param_5,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29e6e0(uint64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
void function_29e6e0(uint64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
                  int64_t *param_5)
{
  uint uVar1;
  uint uVar2;
  void *puVar3;
  int8_t stack_array_1b8 [32];
  uint local_var_198;
  int64_t *plStack_190;
  int32_t local_var_188;
  int32_t local_var_180;
  uint local_var_178;
  uint local_var_168;
  uint local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  uint64_t local_var_154;
  int32_t local_var_14c;
  int32_t local_var_148;
  int64_t *plStack_140;
  int32_t local_var_138;
  int8_t local_var_134;
  int64_t *plStack_130;
  uint64_t local_var_128;
  int64_t *plStack_120;
  uint64_t local_var_118;
  void *plocal_var_110;
  void *plocal_var_108;
  int32_t local_var_100;
  uint8_t stack_array_f8 [16];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  uVar1 = (uint)(*(ushort *)(param_2 + 0x32c) >> ((byte)param_4 & 0x1f));
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  local_var_160 = 1;
  local_var_154 = 0;
  local_var_128 = 0;
  plStack_140 = (int64_t *)0x0;
  local_var_138 = 0xffffffff;
  local_var_134 = 0;
  _local_var_168 = CONCAT44(uVar2,uVar2);
  _local_var_15c = CONCAT44(*(int32_t *)(param_2 + 0x324),1);
  local_var_14c = 2;
  local_var_148 = 0x100;
  plStack_120 = param_5;
  if (param_5 != (int64_t *)0x0) {
    (**(code **)(*param_5 + 0x28))(param_5);
  }
  plStack_120 = (int64_t *)0x0;
  plStack_140 = param_5;
  plocal_var_110 = &system_config_ptr;
  plocal_var_108 = stack_array_f8;
  stack_array_f8[0] = 0;
  local_var_100 = 9;
  strcpy_s(stack_array_f8,0x10,&ui_system_data_1832_ptr);
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = local_var_100;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_108 != (void *)0x0) {
    puVar3 = plocal_var_108;
  }
  strcpy_s(stack_array_d0,0x80,puVar3);
  function_0b2450();
  plocal_var_e8 = &system_state_ptr;
  plocal_var_110 = &system_state_ptr;
  local_var_178 = (uint)*(byte *)((int64_t)plStack_130 + 0x335);
  if ((int)*(uint *)((int64_t)plStack_130 + 0x35c) <
      (int)(uint)*(byte *)((int64_t)plStack_130 + 0x335)) {
    local_var_178 = *(uint *)((int64_t)plStack_130 + 0x35c);
  }
  local_var_198 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    local_var_198 = *(uint *)(param_2 + 0x35c);
  }
  local_var_180 = 0;
  local_var_188 = 0;
  plStack_190 = plStack_130;
  function_29e450(param_1,param_2,param_4,param_3);
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1b8);
}
// 函数: void function_29e910(int64_t param_1,int64_t param_2,int param_3,int param_4,int param_5,
void function_29e910(int64_t param_1,int64_t param_2,int param_3,int param_4,int param_5,
                  int64_t param_6)
{
  byte bVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint64_t local_var_28;
  int iStack_20;
  bVar1 = *(byte *)(param_2 + 0x335);
  uVar2 = *(uint *)(param_2 + 0x35c);
  uVar5 = 1;
  if (1 < *(ushort *)(param_2 + 0x32e)) {
    uVar5 = (uint)*(ushort *)(param_2 + 0x32e);
  }
  lVar4 = SystemCore_Scheduler(param_2);
  uVar3 = *(uint64_t *)(lVar4 + 8);
  uVar6 = (uint)bVar1;
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar6 = uVar2;
  }
  param_3 = uVar6 * param_4 + param_3;
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
            (*(int64_t **)(param_1 + 0x8400),uVar3,param_3,4,0,&local_var_28);
  if (iStack_20 == param_5) {
// WARNING: Subroutine does not return
    memcpy(local_var_28,*(uint64_t *)(param_6 + 0x10),(int64_t)(int)(uVar5 * param_5));
  }
  if (uVar5 != 0) {
// WARNING: Subroutine does not return
    memcpy(local_var_28,*(uint64_t *)(param_6 + 0x10),(int64_t)param_5);
  }
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x78))
            (*(int64_t **)(param_1 + 0x8400),uVar3,param_3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29ea30(int64_t param_1,int64_t param_2,int param_3,uint64_t param_4,int param_5)
void function_29ea30(int64_t param_1,int64_t param_2,int param_3,uint64_t param_4,int param_5)
{
  int64_t *plVar1;
  code *pcVar2;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_38;
  int aiStack_28 [4];
  int32_t local_var_18;
  int32_t local_var_14;
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  aiStack_28[3] = param_5 + param_3;
  local_var_38 = 0;
  aiStack_28[1] = 0;
  aiStack_28[2] = 0;
  local_var_40 = 0;
  local_var_18 = 1;
  local_var_14 = 1;
  pcVar2 = *(code **)(*plVar1 + 0x180);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  local_var_48 = param_4;
  aiStack_28[0] = param_3;
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,aiStack_28);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29ead0(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4)
void function_29ead0(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4)
{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t stack_array_18 [2];
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,4,0,stack_array_18);
// WARNING: Subroutine does not return
  memcpy(stack_array_18[0],param_3,(int64_t)param_4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29eb90(int64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t *param_5,
void function_29eb90(int64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t *param_5,
                  int *param_6)
{
  int64_t *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void *puVar8;
  uint uVar9;
  int8_t stack_array_1f8 [32];
  int32_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  int iStack_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1a8;
  int iStack_1a0;
  uint local_var_198;
  uint local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  uint64_t local_var_184;
  int32_t local_var_17c;
  int32_t local_var_178;
  int64_t *plStack_170;
  int32_t local_var_168;
  int8_t local_var_164;
  int64_t *plStack_160;
  int64_t lStack_158;
  uint64_t *plocal_var_150;
  uint64_t stack_array_148 [2];
  uint64_t local_var_138;
  void *plocal_var_130;
  void *plocal_var_128;
  int32_t local_var_120;
  uint8_t stack_array_118 [32];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [136];
  uint64_t local_var_58;
  local_var_138 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1f8;
  plocal_var_150 = param_5;
  lStack_158 = param_1;
  if (*(char *)(param_2 + 900) == '\0') {
    function_23ab60(param_2,param_2,*(int32_t *)(param_2 + 0x1e8));
  }
  uVar3 = (uint)(*(ushort *)(param_2 + 0x32c) >> ((byte)param_4 & 0x1f));
  uVar9 = 1;
  if (1 < uVar3) {
    uVar9 = uVar3;
  }
  uVar4 = (uint)(*(ushort *)(param_2 + 0x32e) >> ((byte)param_4 & 0x1f));
  uVar3 = 1;
  if (1 < uVar4) {
    uVar3 = uVar4;
  }
  local_var_190 = 1;
  local_var_184 = 0;
  local_var_1a8 = 0;
  plStack_170 = (int64_t *)0x0;
  local_var_168 = 0xffffffff;
  local_var_164 = 0;
  _local_var_198 = CONCAT44(uVar3,uVar9);
  _local_var_18c = CONCAT44(*(int32_t *)(param_2 + 0x324),1);
  local_var_17c = 2;
  local_var_178 = 0x100;
  plocal_var_130 = &processed_var_672_ptr;
  plocal_var_128 = stack_array_118;
  stack_array_118[0] = 0;
  local_var_120 = 0xf;
  strcpy_s(stack_array_118,0x20,&ui_system_data_1920_ptr);
  plocal_var_f8 = &memory_allocator_3432_ptr;
  plocal_var_f0 = stack_array_e0;
  stack_array_e0[0] = 0;
  local_var_e8 = local_var_120;
  puVar8 = &system_buffer_ptr;
  if (plocal_var_128 != (void *)0x0) {
    puVar8 = plocal_var_128;
  }
  strcpy_s(stack_array_e0,0x80,puVar8);
  function_0b2450();
  plocal_var_f8 = &system_state_ptr;
  plocal_var_130 = &system_state_ptr;
  lVar6 = SystemCore_Scheduler(plStack_160);
  local_var_1a8 = *(uint64_t *)(lVar6 + 8);
  uVar4 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    uVar4 = *(uint *)(param_2 + 0x35c);
  }
  iStack_1a0 = param_3 * uVar4 + param_4;
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  lVar6 = SystemCore_Scheduler();
  local_var_1c8 = *(uint64_t *)(lVar6 + 8);
  local_var_1b8 = 0;
  iStack_1c0 = iStack_1a0;
  local_var_1d0 = (uint64_t *)((uint64_t)local_var_1d0._4_4_ << 0x20);
  local_var_1d8 = 0;
  (*pcVar2)(plVar1,local_var_1a8,0,0);
  local_var_1d0 = stack_array_148;
  local_var_1d8 = 0;
  iVar5 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                    (*(int64_t **)(param_1 + 0x8400),local_var_1a8,0,1);
  if (iVar5 < 0) {
    SystemCore_Loader(iVar5,&ui_system_data_1936_ptr);
  }
  else {
    iVar5 = SystemFunction_000180225d90(*(int32_t *)(param_2 + 0x324));
    iVar5 = iVar5 * uVar3 * uVar9;
    uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar5,0x10,3);
    if (param_6 != (int *)0x0) {
      *param_6 = iVar5;
    }
    iVar5 = SystemFunction_000180225d90(*(int32_t *)(param_2 + 0x324));
    if (uVar3 != 0) {
// WARNING: Subroutine does not return
      memcpy(uVar7,stack_array_148[0],(int64_t)(int)(iVar5 * uVar9));
    }
    (**(code **)(**(int64_t **)(lStack_158 + 0x8400) + 0x78))
              (*(int64_t **)(lStack_158 + 0x8400),local_var_1a8,0);
    *plocal_var_150 = uVar7;
  }
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  if (plStack_170 != (int64_t *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29ef00(int64_t param_1,int64_t param_2)
void function_29ef00(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  code *pcVar3;
  int64_t lVar4;
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [8];
  int32_t local_var_50;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  lVar4 = SystemCore_Scheduler(param_2);
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  plVar2 = *(int64_t **)(lVar4 + 8);
  pcVar3 = *(code **)(*plVar1 + 0x1b0);
  lVar4 = SystemCore_Scheduler(param_2);
  (*pcVar3)(plVar1,*(uint64_t *)(lVar4 + 0x10));
  (**(code **)(*plVar2 + 0x50))(plVar2,stack_array_58);
  *(int32_t *)(param_2 + 0x35c) = local_var_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_78);
}
uint64_t function_29efd0(int64_t param_1,uint64_t *param_2)
{
  int iVar1;
  uint64_t stack_special_x_10;
  if (*(char *)((int64_t)param_2 + 0xc) != '\0') {
    iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*param_2,&stack_special_x_10,8,0);
    while (iVar1 != 0) {
      Sleep(1);
      iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                        (*(int64_t **)(param_1 + 0x8400),*param_2,&stack_special_x_10,8,0);
    }
    return stack_special_x_10;
  }
  return 0xffffffffffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29f070(int64_t param_1,int64_t param_2)
void function_29f070(int64_t param_1,int64_t param_2)
{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void *puVar5;
  void *puVar6;
  float fVar7;
  float fVar8;
  int8_t stack_array_478 [32];
  int32_t local_var_458;
  float fStack_448;
  int32_t local_var_444;
  int64_t lStack_440;
  int64_t lStack_438;
  uint64_t local_var_430;
  int64_t lStack_428;
  int iStack_420;
  void *plocal_var_418;
  int8_t *plocal_var_410;
  int32_t local_var_408;
  int8_t stack_array_400 [264];
  int8_t stack_array_2f8 [40];
  int64_t lStack_2d0;
  int64_t lStack_2c8;
  int64_t lStack_2c0;
  void *plocal_var_298;
  int8_t *plocal_var_290;
  int32_t local_var_288;
  int8_t stack_array_280 [264];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [264];
  uint64_t local_var_58;
  local_var_430 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_478;
  local_var_458 = 0;
  iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x68),&lStack_428,
                     0x10);
  while (iVar2 != 0) {
    Sleep(1);
    local_var_458 = 0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x68),&lStack_428,
                       0x10);
  }
  lStack_438 = 0;
  local_var_458 = 0;
  iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x70),&lStack_438,8)
  ;
  while (iVar2 != 0) {
    Sleep(1);
    local_var_458 = 0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x70),&lStack_438,
                       8);
  }
  lStack_440 = 0;
  local_var_458 = 0;
  iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x78),&lStack_440,8)
  ;
  while (iVar2 != 0) {
    Sleep(1);
    local_var_458 = 0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x78),&lStack_440,
                       8);
  }
  if (*(int64_t *)(param_2 + 0x88) != 0) {
    local_var_458 = 0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*(int64_t *)(param_2 + 0x88),stack_array_2f8,
                       0x58);
    while (iVar2 != 0) {
      Sleep(1);
      local_var_458 = 0;
      iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                        (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x88),
                         stack_array_2f8,0x58);
    }
    plocal_var_298 = &rendering_buffer_2008_ptr;
    plocal_var_290 = stack_array_280;
    stack_array_280[0] = 0;
    local_var_288 = *(int32_t *)(*(int64_t *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(int64_t *)(param_2 + 0x58) + 0x28);
    puVar5 = &system_buffer_ptr;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(stack_array_280,0x100,puVar5);
    lVar3 = function_29fcf0(param_1 + 0x8208,&plocal_var_298);
    *(int64_t *)(lVar3 + 8) = *(int64_t *)(lVar3 + 8) + lStack_2c0;
    plocal_var_298 = &system_state_ptr;
    plocal_var_178 = &rendering_buffer_2008_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = *(int32_t *)(*(int64_t *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(int64_t *)(param_2 + 0x58) + 0x28);
    puVar5 = &system_buffer_ptr;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(stack_array_160,0x100,puVar5);
    lVar3 = function_29fcf0(param_1 + 0x8208,&plocal_var_178);
    *(int64_t *)(lVar3 + 0x18) = *(int64_t *)(lVar3 + 0x18) + lStack_2c8;
    plocal_var_178 = &system_state_ptr;
    plocal_var_418 = &rendering_buffer_2008_ptr;
    plocal_var_410 = stack_array_400;
    stack_array_400[0] = 0;
    local_var_408 = *(int32_t *)(*(int64_t *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(int64_t *)(param_2 + 0x58) + 0x28);
    puVar5 = &system_buffer_ptr;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(stack_array_400,0x100,puVar5);
    lVar3 = function_29fcf0(param_1 + 0x8208,&plocal_var_418);
    *(int64_t *)(lVar3 + 0x10) = *(int64_t *)(lVar3 + 0x10) + lStack_2d0;
    plocal_var_418 = &system_state_ptr;
  }
  if (*(int64_t *)(param_2 + 0x80) != 0) {
    local_var_458 = 0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                      (*(int64_t **)(param_1 + 0x8400),*(int64_t *)(param_2 + 0x80),&fStack_448,8)
    ;
    while (iVar2 != 0) {
      Sleep(1);
      local_var_458 = 0;
      iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xe8))
                        (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x80),
                         &fStack_448,8);
    }
    lVar3 = CONCAT44(local_var_444,fStack_448);
    plocal_var_418 = &rendering_buffer_2008_ptr;
    plocal_var_410 = stack_array_400;
    stack_array_400[0] = 0;
    local_var_408 = *(int32_t *)(param_2 + 0x10);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_2 + 8);
    }
    strcpy_s(stack_array_400,0x100,puVar6);
    plVar4 = (int64_t *)function_29fcf0(param_1 + 0x8208,&plocal_var_418);
    *plVar4 = *plVar4 + lVar3;
    plocal_var_418 = &system_state_ptr;
  }
  if (iStack_420 == 0) {
    fVar8 = (float)(lStack_440 - lStack_438);
    if (lStack_440 - lStack_438 < 0) {
      fVar8 = fVar8 + 1.8446744e+19;
    }
    fVar7 = (float)lStack_428;
    if (lStack_428 < 0) {
      fVar7 = fVar7 + 1.8446744e+19;
    }
    fStack_448 = fVar8 / fVar7;
    sVar1 = _fdtest(&fStack_448);
    lVar3 = *(int64_t *)(param_2 + 0x58);
    if (sVar1 != 2) {
      *(double *)(lVar3 + 0x40) = (double)(fVar8 / fVar7);
      goto LAB_18029f52c;
    }
  }
  else {
    lVar3 = *(int64_t *)(param_2 + 0x58);
  }
  *(uint64_t *)(lVar3 + 0x40) = 0;
LAB_18029f52c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_478);
}
// 函数: void function_29f560(int64_t param_1,uint64_t *param_2,char param_3,char param_4)
void function_29f560(int64_t param_1,uint64_t *param_2,char param_3,char param_4)
{
  int *piVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  piVar1 = (int *)*param_2;
  uVar4 = 0xffffffffffffffff;
  if (piVar1 == (int *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (uint64_t)*piVar1;
  }
  if ((int *)param_2[3] == (int *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (uint64_t)*(int *)param_2[3];
  }
  if ((int *)param_2[4] == (int *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = (uint64_t)*(int *)param_2[4];
  }
  if ((int *)param_2[5] == (int *)0x0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (uint64_t)*(int *)param_2[5];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    uVar4 = (uint64_t)*(int *)param_2[1];
  }
  if (param_3 != '\0') {
    uVar7 = uVar7 | 0x1000000000000;
    uVar8 = uVar8 | 0x1000000000000;
    uVar5 = uVar5 | 0x1000000000000;
    uVar6 = uVar6 | 0x1000000000000;
    uVar4 = uVar4 | 0x1000000000000;
  }
  uVar3 = 0;
  if (*(uint64_t *)(param_1 + 0x8278) != uVar7) {
    uVar2 = uVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint64_t *)(piVar1 + 6);
    }
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x58))
              (*(int64_t **)(param_1 + 0x8400),uVar2,0,0);
    *(uint64_t *)(param_1 + 0x8278) = uVar7;
  }
  if (*(uint64_t *)(param_1 + 0x8280) != uVar8) {
    uVar2 = uVar3;
    if (param_2[3] != 0) {
      uVar2 = *(uint64_t *)(param_2[3] + 0x18);
    }
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1e0))
              (*(int64_t **)(param_1 + 0x8400),uVar2,0,0);
    *(uint64_t *)(param_1 + 0x8280) = uVar8;
  }
  if (*(uint64_t *)(param_1 + 0x8288) != uVar5) {
    uVar2 = uVar3;
    if (param_2[4] != 0) {
      uVar2 = *(uint64_t *)(param_2[4] + 0x18);
    }
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x200))
              (*(int64_t **)(param_1 + 0x8400),uVar2,0,0);
    *(uint64_t *)(param_1 + 0x8288) = uVar5;
  }
  if (*(uint64_t *)(param_1 + 0x8290) != uVar6) {
    if (param_2[5] != 0) {
      uVar3 = *(uint64_t *)(param_2[5] + 0x18);
    }
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xb8))
              (*(int64_t **)(param_1 + 0x8400),uVar3,0,0);
    *(uint64_t *)(param_1 + 0x8290) = uVar6;
  }
  if (param_4 == '\0') {
    if (*(uint64_t *)(param_1 + 0x8298) != uVar4) {
      (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x48))
                (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2[1] + 0x18),0,0);
      *(uint64_t *)(param_1 + 0x8298) = uVar4;
    }
  }
  else if (*(uint64_t *)(param_1 + 0x8298) != 0xfffffffffffffffe) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x48))(*(int64_t **)(param_1 + 0x8400),0,0,0);
    *(uint64_t *)(param_1 + 0x8298) = 0xfffffffffffffffe;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29f830(int64_t param_1,uint param_2,uint param_3)
void function_29f830(int64_t param_1,uint param_2,uint param_3)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar5;
  uint uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t *aplocal_var_18 [2];
  uVar13 = (uint64_t)param_2;
  uVar15 = (uint64_t)param_3;
  lVar14 = *(int64_t *)(system_message_buffer + 0x1c90);
  *(int32_t *)(lVar14 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  iVar11 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                     (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(lVar14 + 0x10),0,4,0,
                      aplocal_var_18);
  if (iVar11 < 0) {
    SystemCore_Loader(iVar11,&ui_system_data_1768_ptr);
  }
  uVar6 = param_2 >> 0xe;
  lVar14 = (int64_t)*(int *)(system_parameter_buffer + 0x1538) * 0x488 + system_parameter_buffer + 0x1a18;
  if (uVar6 != param_2 + param_3 >> 0xe) {
    if (param_3 != 0) {
      do {
        iVar11 = (int)uVar13;
        uVar5 = uVar13 >> 0xe;
        uVar13 = (uint64_t)(iVar11 + 1);
        lVar3 = *(int64_t *)(lVar14 + 8 + uVar5 * 8);
        lVar12 = (uint64_t)(uint)(iVar11 + (int)uVar5 * -0x4000) * 0x40;
        uVar10 = ((uint64_t *)(lVar3 + lVar12))[1];
        *aplocal_var_18[0] = *(uint64_t *)(lVar3 + lVar12);
        aplocal_var_18[0][1] = uVar10;
        puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar12);
        uVar10 = puVar1[1];
        aplocal_var_18[0][2] = *puVar1;
        aplocal_var_18[0][3] = uVar10;
        puVar2 = (int32_t *)(lVar3 + 0x20 + lVar12);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        *(int32_t *)(aplocal_var_18[0] + 4) = *puVar2;
        *(int32_t *)((int64_t)aplocal_var_18[0] + 0x24) = uVar7;
        *(int32_t *)(aplocal_var_18[0] + 5) = uVar8;
        *(int32_t *)((int64_t)aplocal_var_18[0] + 0x2c) = uVar9;
        puVar1 = (uint64_t *)(lVar3 + 0x30 + lVar12);
        uVar10 = puVar1[1];
        aplocal_var_18[0][6] = *puVar1;
        aplocal_var_18[0][7] = uVar10;
        uVar15 = uVar15 - 1;
        aplocal_var_18[0] = aplocal_var_18[0] + 8;
      } while (uVar15 != 0);
    }
    plVar4 = *(int64_t **)(param_1 + 0x8400);
    lVar14 = *(int64_t *)(system_message_buffer + 0x1c90);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x78);
    *(int32_t *)(lVar14 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
// WARNING: Could not recover jumptable at 0x00018029f9a3. Too many branches
// WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(plVar4,*(uint64_t *)(lVar14 + 0x10),0,UNRECOVERED_JUMPTABLE);
    return;
  }
// WARNING: Subroutine does not return
  memcpy(aplocal_var_18[0],
         *(int64_t *)(lVar14 + 8 + (uint64_t)uVar6 * 8) +
         (uint64_t)(param_2 + uVar6 * -0x4000) * 0x40,uVar15 << 6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_29f9b0(int64_t param_1,uint64_t param_2,int param_3)
void function_29f9b0(int64_t param_1,uint64_t param_2,int param_3)
{
  int64_t lVar1;
  int iVar2;
  uint64_t stack_array_18 [2];
  lVar1 = *(int64_t *)(system_message_buffer + 0x1c90);
  *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(lVar1 + 0x10),0,4,0,stack_array_18
                    );
  if (iVar2 < 0) {
    SystemCore_Loader(iVar2,&ui_system_data_1768_ptr);
  }
// WARNING: Subroutine does not return
  memcpy(stack_array_18[0],param_2,(int64_t)param_3 << 5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address