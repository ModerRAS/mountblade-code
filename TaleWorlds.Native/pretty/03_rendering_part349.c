#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part349.c - 16 个函数
// 函数: void UISystem_565b0(int64_t *param_1,float *param_2,float *param_3,float param_4,float *param_5,
void UISystem_565b0(int64_t *param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  uint64_t *param_6,int64_t *param_7,int32_t param_8)
{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int8_t stack_array_168 [32];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  void *plocal_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int8_t local_var_100;
  uint64_t local_var_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int8_t local_var_cc;
  void **pplocal_var_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  float fStack_9c;
  void **pplocal_var_98;
  int64_t alStack_88 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int32_t local_var_60;
  int iStack_48;
  uint64_t local_var_38;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (*(code **)(*param_1 + 0xb8) == (code *)&ui_system_data_128_ptr) {
    lVar2 = param_1[0xda];
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0xb8))();
  }
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    *param_7 = 0;
    fStack_130 = param_3[2] - param_2[2];
    fStack_134 = param_3[1] - param_2[1];
    fStack_138 = *param_3 - *param_2;
    iStack_48 = 0;
    plocal_var_110 = &processed_var_6432_ptr;
    local_var_104 = param_8;
    local_var_108 = 2;
    local_var_100 = 0;
    fStack_148 = *param_2;
    fStack_144 = param_2[1];
    fStack_140 = param_2[2];
    fStack_13c = param_2[3];
    local_var_12c = 0x7f7fffff;
    local_var_128 = SystemFunction_00018023a1e0(&fStack_138);
    if (0.011 < param_4) {
      fStack_c0 = fStack_148;
      fStack_bc = fStack_144;
      fStack_b8 = fStack_140;
      fStack_b4 = fStack_13c;
      fStack_b0 = fStack_138;
      fStack_ac = fStack_134;
      fStack_a8 = fStack_130;
      local_var_a4 = local_var_12c;
      pplocal_var_98 = &plocal_var_110;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x28f8) + 0x318);
      local_var_a0 = local_var_128;
      fStack_9c = param_4;
      (**(code **)(*plVar1 + 0x148))(plVar1,&fStack_c0,alStack_88);
    }
    else {
      fStack_f0 = fStack_148;
      fStack_ec = fStack_144;
      fStack_e8 = fStack_140;
      fStack_e4 = fStack_13c;
      fStack_e0 = fStack_138;
      fStack_dc = fStack_134;
      fStack_d8 = fStack_130;
      local_var_d4 = local_var_12c;
      local_var_cc = 0;
      pplocal_var_c8 = &plocal_var_110;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x28f8) + 0x318);
      local_var_d0 = local_var_128;
      (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_f0);
    }
    bVar3 = 0 < iStack_48;
    if (0 < iStack_48) {
      *param_5 = SQRT((*param_2 - fStack_6c) * (*param_2 - fStack_6c) +
                      (param_2[1] - fStack_68) * (param_2[1] - fStack_68) +
                      (param_2[2] - fStack_64) * (param_2[2] - fStack_64));
      *param_6 = CONCAT44(fStack_68,fStack_6c);
      param_6[1] = CONCAT44(local_var_60,fStack_64);
      if ((alStack_88[0] != 0) && (*(int64_t *)(alStack_88[0] + 0x10) != 0)) {
        *param_7 = *(int64_t *)(alStack_88[0] + 0x10);
      }
    }
    iStack_48 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168,bVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_56820(void)
void UISystem_56820(void)
{
  int iVar1;
  iVar1 = (int)((*(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x20) -
                *(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x18)) / 0x70);
  if ((1 < iVar1) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) < iVar1)) {
    return;
  }
  GetSystemMetrics(0);
  GetSystemMetrics(1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_568c0(void)
void UISystem_568c0(void)
{
  int iVar1;
  iVar1 = (int)((*(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x20) -
                *(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x18)) / 0x70);
  if ((1 < iVar1) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) < iVar1)) {
    return;
  }
  GetSystemMetrics(0);
  GetSystemMetrics(1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int UISystem_569a0(int64_t param_1)
{
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar1);
  }
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar1);
  }
  return iVar1;
}
// 函数: void UISystem_56a10(void)
void UISystem_56a10(void)
{
  void *plocal_var_30;
  int64_t lStack_28;
  CoreMemoryPoolValidator(&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180456b15)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * UISystem_56a60(uint64_t *param_1)
{
  int64_t *plStackX_8;
  int64_t *plStack_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  void *plocal_var_28;
  int64_t lStack_20;
  CoreMemoryPoolValidator(&plocal_var_28);
  SystemCore_EncryptionManager(system_resource_state,&plStackX_8,&plocal_var_28,1);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_38 = (int64_t *)0x0;
    local_var_30 = 0xffffffff;
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    local_var_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(local_var_2c,local_var_30);
  return param_1;
}
uint64_t
UISystem_56b70(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&plocal_var_30);
  uVar1 = SystemCore_LoggingSystem0(param_1,&plocal_var_30,param_3,param_4,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_56bf0(int32_t *param_1,int64_t param_2)
void UISystem_56bf0(int32_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  int8_t stack_array_e8 [40];
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  int64_t *plStack_a0;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
  plVar3 = (int64_t *)DataStructure_fb490(uVar2);
  uVar6 = extraout_XMM0_Da;
  plStack_a0 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  local_var_88 = 0;
  stack_array_80[0] = 0;
  if (param_2 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    local_var_88 = (int32_t)lVar4;
    uVar6 = strcpy_s(stack_array_80,0x40,param_2);
  }
  puVar5 = (uint64_t *)GenericFunction_1800b3970(uVar6,&plStack_c0,&plocal_var_98,1);
  uVar2 = *puVar5;
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  plocal_var_98 = &system_state_ptr;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
  *puVar5 = &ui_system_data_1864_ptr;
  *puVar5 = &ui_system_data_1608_ptr;
  puVar5[9] = 0;
  puVar5[10] = 0;
  *puVar5 = &ui_system_data_1912_ptr;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xb] = 0;
  local_var_b8 = puVar5;
  DataStructure_f8a10(puVar5,uVar2);
  DataStructure_fa090(plVar3,uVar2,puVar5);
  plVar1 = plVar3;
  local_var_b0 = 0xffffffff;
  if (plVar3 != (int64_t *)0x0) {
    local_var_b0 = (**(code **)(*plVar3 + 8))(plVar3);
    local_var_b8 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = local_var_b8;
  }
  local_var_b8 = plVar1;
  *param_1 = (int32_t)local_var_b8;
  param_1[1] = local_var_b8._4_4_;
  param_1[2] = local_var_b0;
  param_1[3] = local_var_ac;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_56de0(int32_t param_1,int64_t param_2,int64_t param_3,int32_t param_4)
void UISystem_56de0(int32_t param_1,int64_t param_2,int64_t param_3,int32_t param_4)
{
  int32_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *in_RCX;
  char cVar6;
  int8_t stack_array_f8 [32];
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  local_var_98 = 0;
  stack_array_90[0] = 0;
  if (param_3 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
    local_var_98 = (int32_t)lVar3;
    param_1 = strcpy_s(stack_array_90,0x40);
  }
  puVar4 = (uint64_t *)GenericFunction_1800b3970(param_1,&plStack_c0,&plocal_var_a8,1);
  uVar5 = *puVar4;
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  plocal_var_a8 = &system_state_ptr;
  local_var_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3);
  *local_var_d8 = (int64_t)&ui_system_data_1864_ptr;
  *local_var_d8 = (int64_t)&ui_system_data_1608_ptr;
  local_var_d8[9] = 0;
  local_var_d8[10] = 0;
  *local_var_d8 = (int64_t)&processed_var_7088_ptr;
  DataStructure_ec3d0(param_2,uVar5,local_var_d8);
  plVar2 = *(int64_t **)(param_2 + 0x260);
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  lVar3 = UISystem_35440(uVar5);
  cVar6 = '\0';
  if ('\0' < (char)plVar2[4]) {
    local_var_d8 = (int64_t *)CONCAT44(param_4,param_4);
    do {
      puVar1 = (int32_t *)(*(int64_t *)(lVar3 + 0x18) + (int64_t)cVar6 * 0x10);
      *puVar1 = param_4;
      puVar1[1] = param_4;
      puVar1[2] = param_4;
      puVar1[3] = param_4;
      cVar6 = cVar6 + '\x01';
      local_var_d0 = param_4;
      local_var_cc = param_4;
    } while (cVar6 < (char)plVar2[4]);
  }
  plVar2[0x1b] = lVar3;
  cVar6 = '\0';
  if ('\0' < (char)plVar2[4]) {
    do {
      local_var_d8 = (int64_t *)CONCAT44(param_4,param_4);
      local_var_d0 = param_4;
      local_var_cc = param_4;
      DataStructure_ffe10(plVar2,cVar6,&local_var_d8);
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < (char)plVar2[4]);
  }
  DataStructure_fbb40(*(uint64_t *)(param_2 + 0x260));
  DataStructure_fbc50(*(uint64_t *)(param_2 + 0x260));
  local_var_d0 = (**(code **)(*plVar2 + 8))(plVar2);
  local_var_d8 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  *in_RCX = (int32_t)local_var_d8;
  in_RCX[1] = local_var_d8._4_4_;
  in_RCX[2] = local_var_d0;
  in_RCX[3] = local_var_cc;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// 函数: void UISystem_56ff0(int64_t param_1,uint64_t param_2,int64_t param_3)
void UISystem_56ff0(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t local_var_18;
  uint64_t local_var_10;
  if (param_1 != 0) {
    lVar3 = AdvancedProcessor_StateManager0(&local_var_18,param_3);
    uVar1 = *(uint64_t *)(param_3 + 0x30);
    uVar2 = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t *)(lVar3 + 0x30) = local_var_18;
    *(uint64_t *)(lVar3 + 0x38) = local_var_10;
    *(uint64_t *)(lVar3 + 0x40) = uVar1;
    *(uint64_t *)(lVar3 + 0x48) = uVar2;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_57040(int64_t param_1,char param_2,uint64_t *param_3)
void UISystem_57040(int64_t param_1,char param_2,uint64_t *param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((int64_t)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      SystemCore_FileSystem(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    puVar4 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_a8 = puVar4[1];
    local_var_a4 = puVar4[2];
    local_var_a0 = puVar4[3];
    local_var_9c = puVar4[4];
    uVar2 = *(uint64_t *)(puVar4 + 5);
    uVar3 = *(uint64_t *)(puVar4 + 7);
    *puVar4 = 0;
    local_var_98 = uVar2;
    local_var_90 = uVar3;
    local_var_58 = local_var_a8;
    local_var_54 = local_var_a4;
    local_var_50 = local_var_a0;
    local_var_4c = local_var_9c;
    local_var_48 = uVar2;
    local_var_40 = uVar3;
    SystemSecurityManager(&local_var_88,&local_var_a8);
    *(int32_t *)param_3 = local_var_88;
    *(int32_t *)((int64_t)param_3 + 4) = local_var_84;
    *(int32_t *)(param_3 + 1) = local_var_80;
    *(int32_t *)((int64_t)param_3 + 0xc) = local_var_7c;
    *(int32_t *)(param_3 + 2) = local_var_78;
    *(int32_t *)((int64_t)param_3 + 0x14) = local_var_74;
    *(int32_t *)(param_3 + 3) = local_var_70;
    *(int32_t *)((int64_t)param_3 + 0x1c) = local_var_6c;
    *(int32_t *)(param_3 + 4) = local_var_68;
    *(int32_t *)((int64_t)param_3 + 0x24) = local_var_64;
    *(int32_t *)(param_3 + 5) = local_var_60;
    *(int32_t *)((int64_t)param_3 + 0x2c) = local_var_5c;
    param_3[6] = uVar2;
    param_3[7] = uVar3;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_c8);
}
// 函数: void UISystem_57076(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_57076(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint *puVar3;
  int64_t unaff_RBX;
  char unaff_SIL;
  int32_t *unaff_RDI;
  bool in_ZF;
  uint uVar4;
  uint local_buffer_2c;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  uint local_buffer_70;
  uint local_buffer_74;
  uint local_buffer_78;
  uint local_buffer_7c;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  if (in_ZF) {
    SystemCore_FileSystem(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000);
  }
  puVar3 = (uint *)((int64_t)unaff_SIL * 0x100 + *(int64_t *)(unaff_RBX + 0x18));
  do {
    LOCK();
    uVar4 = *puVar3;
    *puVar3 = *puVar3 | 1;
    UNLOCK();
  } while ((uVar4 & 1) != 0);
  uVar4 = puVar3[1];
  local_buffer_74 = puVar3[2];
  local_buffer_78 = puVar3[3];
  local_buffer_2c = puVar3[4];
  uVar1 = *(uint64_t *)(puVar3 + 5);
  uVar2 = *(uint64_t *)(puVar3 + 7);
  *puVar3 = 0;
  local_buffer_70 = uVar4;
  local_buffer_7c = local_buffer_2c;
  local_buffer_80 = uVar1;
  local_buffer_88 = uVar2;
  SystemSecurityManager(&local_buffer_00000040,&local_buffer_00000020);
  *unaff_RDI = local_var_40;
  unaff_RDI[1] = local_buffer_44;
  unaff_RDI[2] = local_var_48;
  unaff_RDI[3] = local_buffer_4c;
  unaff_RDI[4] = local_buffer_50;
  unaff_RDI[5] = local_buffer_54;
  unaff_RDI[6] = local_buffer_58;
  unaff_RDI[7] = local_buffer_5c;
  unaff_RDI[8] = local_buffer_60;
  unaff_RDI[9] = local_buffer_64;
  unaff_RDI[10] = local_buffer_68;
  unaff_RDI[0xb] = local_buffer_6c;
  *(uint64_t *)(unaff_RDI + 0xc) = uVar1;
  *(uint64_t *)(unaff_RDI + 0xe) = uVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_90 ^ (uint64_t)&local_buffer_00000000,local_buffer_50,
                local_buffer_60,param_4,uVar4);
}
// 函数: void UISystem_57104(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_57104(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t local_buffer_90;
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((int64_t)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((int64_t)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_90 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_57150(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_57150(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint uVar1;
  void *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  void *puVar6;
  uint *puVar7;
  void *puVar8;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  void *plocal_var_d0;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  CoreMemoryPoolValidator(&plocal_var_d8);
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((int64_t)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    cVar5 = UISystem_0b330(*(uint64_t *)(param_1 + 0x208),&plocal_var_d8,1);
    if (cVar5 == -1) {
      puVar8 = &system_buffer_ptr;
      if (plocal_var_d0 != (void *)0x0) {
        puVar8 = plocal_var_d0;
      }
      puVar2 = *(void **)(*(int64_t *)(param_1 + 0x10) + 0x290);
      puVar6 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar6 = puVar2;
      }
      SystemDataInitializer(&processed_var_9728_ptr,puVar6,puVar8);
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((int64_t)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
      param_3[6] = 0;
      param_3[7] = 0x3f80000000000000;
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      SystemCore_FileSystem(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    puVar7 = (uint *)((int64_t)cVar5 * 0x100 + *(int64_t *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar7;
      *puVar7 = *puVar7 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_a8 = puVar7[1];
    local_var_a4 = puVar7[2];
    local_var_a0 = puVar7[3];
    local_var_9c = puVar7[4];
    uVar3 = *(uint64_t *)(puVar7 + 5);
    uVar4 = *(uint64_t *)(puVar7 + 7);
    *puVar7 = 0;
    local_var_98 = uVar3;
    local_var_90 = uVar4;
    local_var_58 = local_var_a8;
    local_var_54 = local_var_a4;
    local_var_50 = local_var_a0;
    local_var_4c = local_var_9c;
    local_var_48 = uVar3;
    local_var_40 = uVar4;
    SystemSecurityManager(&local_var_88,&local_var_a8);
    *(int32_t *)param_3 = local_var_88;
    *(int32_t *)((int64_t)param_3 + 4) = local_var_84;
    *(int32_t *)(param_3 + 1) = local_var_80;
    *(int32_t *)((int64_t)param_3 + 0xc) = local_var_7c;
    *(int32_t *)(param_3 + 2) = local_var_78;
    *(int32_t *)((int64_t)param_3 + 0x14) = local_var_74;
    *(int32_t *)(param_3 + 3) = local_var_70;
    *(int32_t *)((int64_t)param_3 + 0x1c) = local_var_6c;
    param_3[4] = local_var_68;
    param_3[5] = local_var_60;
    param_3[6] = uVar3;
    param_3[7] = uVar4;
  }
  plocal_var_d8 = &system_data_buffer_ptr;
  if (plocal_var_d0 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_d0 = (void *)0x0;
  local_var_c0 = 0;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
bool UISystem_57330(uint64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plStackX_10;
  void *plocal_var_28;
  int64_t lStack_20;
  CoreMemoryPoolValidator(&plocal_var_28,param_1);
  plVar2 = (int64_t *)GenericFunction_1800b3970();
  lVar1 = *plVar2;
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  plocal_var_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return lVar1 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_573f0(uint64_t param_1,int64_t *param_2,int8_t param_3)
void UISystem_573f0(uint64_t param_1,int64_t *param_2,int8_t param_3)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  if (param_2 != (int64_t *)0x0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
    plVar2 = (int64_t *)RenderingSystem_ShaderManager(uVar1);
    plStackX_10 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    DataStructure_75cf0(plVar2,0,&plStackX_8,1);
    DataStructure_fbf30(param_1,param_3,plVar2,&system_data_0300);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_57570(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void UISystem_57570(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = CoreMemoryPoolValidator(&plocal_var_30);
    uVar1 = DataStructure_0bef0(render_system_data_memory,uVar1);
    DataStructure_ffb00(param_1,uVar1,param_3,param_4,uVar2);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// 函数: void UISystem_57610(uint64_t param_1)
void UISystem_57610(uint64_t param_1)
{
  int64_t lVar1;
  DataStructure_feaf0(param_1,1);
  lVar1 = RenderingSystem_009f0(param_1);
  *(uint64_t *)(lVar1 + 0x1008) = 0;
  *(uint64_t *)(lVar1 + 0x1010) = 0;
  *(uint64_t *)(lVar1 + 0x1018) = 0;
  *(uint64_t *)(lVar1 + 0x1020) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_57650(uint64_t param_1,int64_t *param_2)
void UISystem_57650(uint64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
  plVar2 = (int64_t *)RenderingSystem_ShaderManager(uVar1);
  plStackX_10 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  pplStackX_18 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  DataStructure_75cf0(plVar2,0,&plStackX_8,1);
  plStackX_8 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  pplStackX_18 = &plStackX_8;
  DataStructure_fc0f0(param_1,plStackX_8);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}
int64_t * UISystem_577e0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStack_20;
  int32_t local_var_18;
  int32_t local_var_14;
  if (param_2 != 0) {
    plStack_20 = (int64_t *)DataStructure_fc690(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
    plStack_20 = (int64_t *)*plStack_20;
    plStackX_10 = plStack_20;
    if (plStack_20 != (int64_t *)0x0) {
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStack_20 != (int64_t *)0x0) {
      local_var_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
      (**(code **)(*plStack_20 + 0x38))(plStack_20);
      goto LAB_180457871;
    }
  }
  plStack_20 = (int64_t *)0x0;
  local_var_18 = 0xffffffff;
LAB_180457871:
  *param_1 = (int64_t)plStack_20;
  param_1[1] = CONCAT44(local_var_14,local_var_18);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_57890(int64_t param_1,char param_2,int32_t *param_3)
void UISystem_57890(int64_t param_1,char param_2,int32_t *param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int8_t stack_array_b8 [32];
  uint local_var_98;
  uint local_var_94;
  uint local_var_90;
  uint local_var_8c;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  if (param_1 != 0) {
    local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
    puVar4 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_98 = puVar4[1];
    local_var_94 = puVar4[2];
    local_var_90 = puVar4[3];
    local_var_8c = puVar4[4];
    uVar2 = *(uint64_t *)(puVar4 + 5);
    uVar3 = *(uint64_t *)(puVar4 + 7);
    *puVar4 = 0;
    local_var_88 = uVar2;
    local_var_80 = uVar3;
    local_var_48 = local_var_98;
    local_var_44 = local_var_94;
    local_var_40 = local_var_90;
    local_var_3c = local_var_8c;
    local_var_38 = uVar2;
    local_var_30 = uVar3;
    SystemSecurityManager(&local_var_78,&local_var_98);
    *param_3 = local_var_78;
    param_3[1] = local_var_74;
    param_3[2] = local_var_70;
    param_3[3] = local_var_6c;
    param_3[4] = local_var_68;
    param_3[5] = local_var_64;
    param_3[6] = local_var_60;
    param_3[7] = local_var_5c;
    param_3[8] = local_var_58;
    param_3[9] = local_var_54;
    param_3[10] = local_var_50;
    param_3[0xb] = local_var_4c;
    *(uint64_t *)(param_3 + 0xc) = uVar2;
    *(uint64_t *)(param_3 + 0xe) = uVar3;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_b8);
  }
  return;
}