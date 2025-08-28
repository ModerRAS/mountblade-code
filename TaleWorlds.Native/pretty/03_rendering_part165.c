#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part165.c - 15 个函数
// 函数: void RenderingSystem_6e730(int64_t param_1)
void RenderingSystem_6e730(int64_t param_1)
{
  int64_t *plVar1;
  if (*(int64_t *)(param_1 + 0x70) != 0) {
    DataStructure_ee610(*(uint64_t *)(param_1 + 0x18));
    plVar1 = *(int64_t **)(param_1 + 0x78);
    *(uint64_t *)(param_1 + 0x78) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = *(int64_t **)(param_1 + 0x70);
    *(uint64_t *)(param_1 + 0x70) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}
int64_t RenderingSystem_6e7a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0x80) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x80) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x78) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x70) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x70) + 0x38))();
  }
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * RenderingSystem_6e820(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3,0xfffffffffffffffe);
  SystemCore_SyncController(puVar1,param_2,param_1);
  *puVar1 = &rendering_buffer_2888_ptr;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return puVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_6e890(int64_t param_1)
void RenderingSystem_6e890(int64_t param_1)
{
  uint *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int8_t stack_array_98 [32];
  int32_t local_var_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int64_t *plStack_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int8_t *plocal_var_48;
  int32_t local_var_40;
  int8_t stack_array_38 [32];
  uint64_t local_var_18;
  local_var_58 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_78 = 0;
  puVar4 = (uint64_t *)GenericFunction_1800be9a0(render_system_data_config,&plStack_60,0);
  local_var_78 = 1;
  puVar4 = (uint64_t *)DataStructure_2cb40(*puVar4,&plStack_68);
  uVar2 = *puVar4;
  *puVar4 = 0;
  plStack_70 = *(int64_t **)(param_1 + 0x80);
  *(uint64_t *)(param_1 + 0x80) = uVar2;
  if (plStack_70 != (int64_t *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  local_var_78 = 0;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x38))();
  }
  plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x80) + 0x10);
  (**(code **)(*plVar6 + 0x10))(plVar6,&rendering_buffer_2816_ptr);
  lVar3 = *(int64_t *)(param_1 + 0x80);
  plocal_var_50 = &processed_var_672_ptr;
  plocal_var_48 = stack_array_38;
  stack_array_38[0] = 0;
  local_var_40 = 0x11;
  strcpy_s(stack_array_38,0x20,&rendering_buffer_2856_ptr);
  uVar5 = SystemCore_LoggingSystem0(*(uint64_t *)(lVar3 + 0x1e0),&plocal_var_50,0);
  *(uint64_t *)(lVar3 + 0x140) = *(uint64_t *)(lVar3 + 0x140) | uVar5;
  DataStructure_2dd60(lVar3);
  *(int16_t *)(lVar3 + 0x3c0) = 0xffff;
  plocal_var_50 = &system_state_ptr;
  *(int8_t *)(*(int64_t *)(param_1 + 0x80) + 0x13c) = 1;
  puVar1 = (uint *)(*(int64_t *)(param_1 + 0x80) + 0x138);
  *puVar1 = *puVar1 | 0x20100008;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_98);
}
// 函数: void RenderingSystem_6ea40(int64_t param_1)
void RenderingSystem_6ea40(int64_t param_1)
{
  int64_t *plVar1;
  RenderingSystem_6e730();
  if (*(int64_t *)(param_1 + 0x80) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x80);
    *(uint64_t *)(param_1 + 0x80) = 0;
    if (plVar1 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018036ea88. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_6eaa0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void RenderingSystem_6eaa0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6)
{
  uint *puVar1;
  void *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *puVar5;
  int64_t *plStackX_8;
  RenderingSystem_6e730();
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
  plVar4 = (int64_t *)FileSystem_Operator(uVar3,1);
  if (plVar4 != (int64_t *)0x0) {
    plStackX_8 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x78);
  *(int64_t **)(param_1 + 0x78) = plVar4;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x78) != 0) {
    plVar4 = (int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
    (**(code **)(*plVar4 + 0x10))(plVar4,&rendering_buffer_2832_ptr);
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x78) + 0x100);
    *puVar1 = *puVar1 | 8;
    UltraHighFreq_SecurityValidator1(*(uint64_t *)(param_1 + 0x78),param_1 + 0x80);
    RenderingSystem_6ecf0(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,3);
    plVar4 = (int64_t *)RenderingSystem_ShaderManager(uVar3);
    if (plVar4 != (int64_t *)0x0) {
      plStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x70);
    *(int64_t **)(param_1 + 0x70) = plVar4;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x70) != 0) {
      plVar4 = (int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x1f0);
      puVar2 = *(void **)(*(int64_t *)(param_1 + 0x78) + 0x18);
      puVar5 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar5 = puVar2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar5);
      uVar3 = *(uint64_t *)(param_1 + 0x70);
      plStackX_8 = *(int64_t **)(param_1 + 0x78);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      DataStructure_75cf0(uVar3,0,&plStackX_8,1);
      uVar3 = *(uint64_t *)(param_1 + 0x18);
      plStackX_8 = *(int64_t **)(param_1 + 0x70);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      PhysicsSystem_TerrainCollider(uVar3,plStackX_8,1);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_6ecf0(int64_t param_1,int32_t param_2,float param_3,float param_4,float param_5)
void RenderingSystem_6ecf0(int64_t param_1,int32_t param_2,float param_3,float param_4,float param_5)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  float fVar4;
  int8_t stack_array_238 [64];
  int32_t local_var_1f8;
  float fStack_1f0;
  int32_t local_var_1ec;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int64_t *plStack_1d0;
  int64_t *plStack_1c8;
  int8_t stack_array_1c0 [8];
  int64_t *plStack_1b8;
  int32_t local_var_1b0;
  int64_t *plStack_1a8;
  int16_t local_var_1a0;
  int8_t local_var_19e;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  int64_t lStack_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  uint64_t local_var_140;
  int64_t lStack_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_e8;
  local_var_140 = 0xfffffffffffffffe;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  if ((lVar1 == 0) || (lVar1 = *(int64_t *)(lVar1 + 0x60b80), lVar1 == 0)) {
    fStack_1f0 = 20.0;
  }
  else {
    fStack_1f0 = *(float *)(*(int64_t *)(param_1 + 0x18) + 0xa8) - *(float *)(lVar1 + 0x154);
  }
  if (50.0 <= fStack_1f0) {
    fStack_1f0 = 50.0;
  }
  if (89.999 <= param_3) {
    param_3 = 89.999;
  }
  fStack_194 = param_3 * 0.017453292;
  if (param_4 <= -89.999) {
    param_4 = -89.999;
  }
  fStack_190 = param_4 * 0.017453292;
  fVar4 = param_5 * 0.008726646;
  fStack_18c = (fStack_194 - fStack_190) * 0.005586592;
  local_var_180 = 0;
  local_var_178 = 0;
  local_var_170 = 0;
  local_var_168 = 3;
  local_var_1ec = 0;
  local_var_1f8 = param_2;
  plStack_1e0 = (int64_t *)param_1;
  fStack_198 = fVar4;
  if (fStack_190 < fStack_194) {
    fVar4 = fStack_18c * 0.0 + fStack_190;
    if (fStack_194 <= fVar4) {
      fVar4 = fStack_194;
    }
    lStack_188 = CONCAT44(lStack_188._4_4_,fVar4);
// WARNING: Subroutine does not return
    RenderingSystem_Renderer0(fVar4);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  local_var_128 = 0;
  local_var_120 = 3;
  local_var_108 = 0;
  local_var_100 = 0;
  local_var_f8 = 0;
  plStack_1e8 = &lStack_138;
  UtilitiesSystem_40330(0,0);
  UtilitiesSystem_3efb0(&lStack_138,&local_var_180,0,0);
  lStack_188 = lStack_130 - lStack_138 >> 3;
  plStack_1d0 = (int64_t *)0x0;
  plStack_1c8 = (int64_t *)0x0;
  plStack_1e8 = (int64_t *)stack_array_1c0;
  plStack_1a8 = (int64_t *)0x0;
  plStack_1b8 = (int64_t *)0x0;
  stack_array_1c0[0] = 0;
  plVar2 = *(int64_t **)((int64_t)plStack_1e0 + 0x78);
  if (plVar2 != (int64_t *)0x0) {
    plStack_1e0 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_1e0 = plStack_1d0;
  plVar3 = plVar2;
  if (plStack_1d0 != (int64_t *)0x0) {
    lVar1 = *plStack_1d0;
    plStack_1d0 = plVar2;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_1d0;
  }
  plStack_1d0 = plVar3;
  local_var_1b0 = 0;
  plStack_1b8 = plVar2;
  CoreEngine_07F4C0(stack_array_1c0);
  plVar2 = plStack_1a8;
  plStack_1e0 = plStack_1a8;
  if (plStack_1a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a8 + 0x28))(plStack_1a8);
  }
  plVar3 = plStack_1c8;
  plStack_1e0 = plStack_1c8;
  plStack_1c8 = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  local_var_1a0 = 0;
  local_var_19e = 0;
  fStack_1f0 = 0.0;
  fStack_198 = fVar4 - param_5 * -0.008726646;
// WARNING: Subroutine does not return
  RenderingSystem_Renderer0(fStack_198 * 0.0 * 0.05 + param_5 * -0.008726646);
}
// 函数: void RenderingSystem_6f9c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5,
void RenderingSystem_6f9c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5,
                  int param_6,char param_7)
{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint64_t astack_special_x_18 [2];
  uint64_t local_var_48;
  uint64_t local_var_40;
  bVar1 = false;
  astack_special_x_18[0] = 0;
  param_6 = param_5 * param_6;
  local_var_48 = 0;
  local_var_40 = 0x7f7fffff3f800000;
  iVar7 = param_6 + param_4 + 1;
  iVar5 = param_4 + 1;
  iVar6 = param_4 + -1;
  while( true ) {
    while( true ) {
      iVar8 = iVar6;
      uVar2 = SystemCore_Decoder(param_2,param_6 + param_4,astack_special_x_18,&memory_allocator_3248_ptr,&local_var_48);
      iVar6 = iVar7;
      if (param_7 == '\0') {
        iVar6 = param_6 + iVar8;
      }
      uVar3 = SystemCore_Decoder(param_2,iVar6,astack_special_x_18,&memory_allocator_3248_ptr,&local_var_48);
      iVar6 = param_6 + iVar8;
      if (param_7 == '\0') {
        iVar6 = iVar7;
      }
      uVar4 = SystemCore_Decoder(param_2,iVar6,astack_special_x_18,&memory_allocator_3248_ptr,&local_var_48);
      SystemCore_RenderFrame(param_2,uVar2,uVar3,uVar4);
      iVar6 = iVar8;
      param_4 = iVar5;
      if (iVar8 == 0) break;
      if ((iVar5 == param_5 + -1) || (!bVar1)) {
        bVar1 = true;
        iVar6 = iVar8 + -1;
        param_4 = iVar8;
      }
      else {
        iVar7 = iVar7 + 1;
        bVar1 = false;
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 == param_5 + -1) break;
    iVar7 = iVar7 + 1;
    bVar1 = false;
    iVar5 = iVar5 + 1;
  }
  return;
}
// 函数: void RenderingSystem_6fb40(void)
void RenderingSystem_6fb40(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_70550(uint64_t *param_1)
void RenderingSystem_70550(uint64_t *param_1)
{
  uint64_t *puVar1;
  char cVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int8_t stack_array_228 [80];
  void *plocal_var_1d8;
  int32_t *plocal_var_1d0;
  int32_t local_var_1c8;
  uint64_t local_var_1c0;
  int32_t local_var_1b8;
  uint64_t *plocal_var_1b0;
  uint64_t *plocal_var_1a8;
  uint64_t ***ppplocal_var_170;
  uint64_t ***ppplocal_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint64_t *plocal_var_130;
  uint64_t *plocal_var_120;
  uint64_t local_var_118;
  uint64_t *plocal_var_110;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_118 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  local_var_1b8 = 0;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  plocal_var_130 = param_1 + 4;
  *plocal_var_130 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  puVar1 = param_1 + 8;
  *puVar1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  plocal_var_120 = param_1 + 0xc;
  *plocal_var_120 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 3;
  param_1[0x10] = &system_state_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &system_data_buffer_ptr;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  plocal_var_1a8 = param_1 + 0x14;
  *plocal_var_1a8 = &system_state_ptr;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  *plocal_var_1a8 = &system_data_buffer_ptr;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  local_var_148 = 3;
  ppplocal_var_170 = &ppplocal_var_170;
  ppplocal_var_168 = &ppplocal_var_170;
  local_var_160 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  plocal_var_1b0 = param_1;
  plocal_var_110 = param_1;
  cVar2 = RenderingSystem_6fb40(&system_data_buffer_ptr,&ppplocal_var_170,puVar1);
  if (cVar2 == '\0') {
    GenericFunction_18005d260(&ppplocal_var_170,local_var_160);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_228);
  }
  plocal_var_1d8 = &system_data_buffer_ptr;
  local_var_1c0 = 0;
  plocal_var_1d0 = (int32_t *)0x0;
  local_var_1c8 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1b,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_1d0 = puVar4;
  uVar3 = CoreEngineSystemCleanup(puVar4);
  local_var_1c0 = CONCAT44(local_var_1c0._4_4_,uVar3);
  *puVar4 = 0x746f6870;
  puVar4[1] = 0x6f6d5f6f;
  puVar4[2] = 0x665f6564;
  puVar4[3] = 0x65746c69;
  *(uint64_t *)(puVar4 + 4) = 0x69746e6564695f72;
  *(int16_t *)(puVar4 + 6) = 0x7974;
  *(int8_t *)((int64_t)puVar4 + 0x1a) = 0;
  local_var_1c8 = 0x1a;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0x1a;
  strcpy_s(stack_array_80,0x40,puVar4);
  RenderingSystem_71910(puVar1,&plocal_var_98);
  plocal_var_98 = &system_state_ptr;
  plocal_var_1d8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
int RenderingSystem_71910(int64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  lVar4 = *param_1;
  iVar10 = 0;
  lVar5 = param_1[1] - lVar4 >> 0x3f;
  lVar8 = (param_1[1] - lVar4) / 0x58 + lVar5;
  if (lVar8 != lVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar11 = 0;
    do {
      iVar3 = *(int *)(lVar11 + 0x10 + lVar4);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(lVar11 + 8 + lVar4);
          lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar9;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18037198e:
        if (iVar7 == 0) {
          return iVar10;
        }
      }
      else if (iVar3 == 0) goto LAB_18037198e;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x58;
    } while ((uint64_t)(int64_t)iVar10 < (uint64_t)(lVar8 - lVar5));
  }
  return -1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_719d0(int64_t param_1)
void RenderingSystem_719d0(int64_t param_1)
{
  char cVar1;
  int8_t uVar2;
  cVar1 = *(char *)(system_main_module_state + 0x1ed);
  while ((cVar1 != '\0' && (**(char **)(param_1 + 0xc0) == '\0'))) {
    uVar2 = GenericFunction_18017ef40();
    **(int8_t **)(param_1 + 0xc0) = uVar2;
    cVar1 = *(char *)(system_main_module_state + 0x1ed);
  }
  return;
}
// 函数: void RenderingSystem_71a20(int64_t param_1,int *param_2,uint64_t param_3,int *param_4)
void RenderingSystem_71a20(int64_t param_1,int *param_2,uint64_t param_3,int *param_4)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int *piVar5;
  int iVar6;
  uint64_t uVar7;
  int *piVar8;
  uVar7 = 0;
  *param_4 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  piVar5 = param_2;
  piVar8 = param_4;
  if (0 < iVar2) {
    do {
      iVar3 = *param_4;
      iVar6 = (int)uVar7;
      if (0x7fff < iVar3) {
        SystemDataInitializer(&memory_allocator_3448_ptr,piVar5,uVar7,piVar8);
        return;
      }
      lVar4 = *(int64_t *)(param_1 + 8);
      bVar1 = *(byte *)(uVar7 + lVar4);
      if (((byte)(bVar1 + 0x10) < 5) && ((int)(iVar6 + 3U) < iVar2)) {
        piVar5 = (int *)0x4;
        param_2[iVar3] =
             (((int)*(char *)((uint64_t)(iVar6 + 1) + lVar4) & 0x3fU | ((int)(char)bVar1 & 7U) << 6
              ) << 6 | (int)*(char *)((uint64_t)(iVar6 + 2) + lVar4) & 0x3fU) << 6 |
             (int)*(char *)((uint64_t)(iVar6 + 3U) + lVar4) & 0x3fU;
        *param_4 = *param_4 + 1;
      }
      else if (((byte)(bVar1 + 0x20) < 0x10) && ((int)(iVar6 + 2U) < iVar2)) {
        piVar5 = (int *)0x3;
        param_2[iVar3] =
             ((int)*(char *)((uint64_t)(iVar6 + 1) + lVar4) & 0x3fU |
             ((int)(char)bVar1 & 0xfU) << 6) << 6 |
             (int)*(char *)((uint64_t)(iVar6 + 2U) + lVar4) & 0x3fU;
        *param_4 = *param_4 + 1;
      }
      else if (((byte)(bVar1 + 0x3e) < 0x1e) && ((int)(iVar6 + 1U) < iVar2)) {
        piVar5 = (int *)0x2;
        param_2[iVar3] =
             (int)*(char *)((uint64_t)(iVar6 + 1U) + lVar4) & 0x3fU |
             ((int)(char)bVar1 & 0x1fU) << 6;
        *param_4 = *param_4 + 1;
      }
      else if (bVar1 < 0x80) {
        piVar5 = (int *)0x1;
        param_2[iVar3] = (int)(char)bVar1;
        *param_4 = *param_4 + 1;
      }
      else {
        piVar5 = (int *)0x1;
      }
      uVar7 = (uint64_t)(uint)(iVar6 + (int)piVar5);
      piVar8 = piVar5;
    } while (iVar6 + (int)piVar5 < iVar2);
  }
  return;
}
// 函数: void RenderingSystem_71a4c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_71a4c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  byte bVar1;
  int64_t lVar2;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar3;
  int iVar4;
  int in_R10D;
  int64_t unaff_R14;
  do {
    lVar3 = (int64_t)*unaff_RBX;
    iVar4 = (int)param_3;
    if (0x7fff < *unaff_RBX) {
      SystemDataInitializer(&memory_allocator_3448_ptr,param_2,param_3,param_4);
      return;
    }
    lVar2 = *(int64_t *)(unaff_RBP + 8);
    bVar1 = *(byte *)(param_3 + lVar2);
    if (((byte)(bVar1 + 0x10) < 5) && ((int)(iVar4 + 3U) < in_R10D)) {
      param_2 = 4;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           (((int)*(char *)((uint64_t)(iVar4 + 1) + lVar2) & 0x3fU | ((int)(char)bVar1 & 7U) << 6)
            << 6 | (int)*(char *)((uint64_t)(iVar4 + 2) + lVar2) & 0x3fU) << 6 |
           (int)*(char *)((uint64_t)(iVar4 + 3U) + lVar2) & 0x3fU;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (((byte)(bVar1 + 0x20) < 0x10) && ((int)(iVar4 + 2U) < in_R10D)) {
      param_2 = 3;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           ((int)*(char *)((uint64_t)(iVar4 + 1) + lVar2) & 0x3fU | ((int)(char)bVar1 & 0xfU) << 6)
           << 6 | (int)*(char *)((uint64_t)(iVar4 + 2U) + lVar2) & 0x3fU;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (((byte)(bVar1 + 0x3e) < 0x1e) && ((int)(iVar4 + 1U) < in_R10D)) {
      param_2 = 2;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           (int)*(char *)((uint64_t)(iVar4 + 1U) + lVar2) & 0x3fU | ((int)(char)bVar1 & 0x1fU) << 6
      ;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (bVar1 < 0x80) {
      param_2 = 1;
      *(int *)(unaff_R14 + lVar3 * 4) = (int)(char)bVar1;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else {
      param_2 = 1;
    }
    param_3 = (uint64_t)(uint)(iVar4 + (int)param_2);
    param_4 = param_2;
  } while (iVar4 + (int)param_2 < in_R10D);
  return;
}
// 函数: void RenderingSystem_71b85(void)
void RenderingSystem_71b85(void)
{
  return;
}
// 函数: void RenderingSystem_71c60(void)
void RenderingSystem_71c60(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
int32_t * SystemCore_SignalHandler(int32_t *param_1,uint64_t param_2)
{
  int32_t *puVar1;
  *param_1 = 0xe;
  *(uint64_t *)(param_1 + 2) = param_2;
  param_1[0x12] = 0;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x13) = 0;
  *(uint64_t *)(param_1 + 0x15) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x17) = 0;
  *(uint64_t *)(param_1 + 0x19) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x1b) = 0;
  *(uint64_t *)(param_1 + 0x1d) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x3f) = 0;
  *(uint64_t *)(param_1 + 0x1f) = 0;
  *(uint64_t *)(param_1 + 0x21) = 0;
  *(uint64_t *)(param_1 + 0x23) = 0;
  *(uint64_t *)(param_1 + 0x25) = 0;
  *(uint64_t *)(param_1 + 0x27) = 0;
  *(uint64_t *)(param_1 + 0x29) = 0;
  *(uint64_t *)(param_1 + 0x2b) = 0;
  *(uint64_t *)(param_1 + 0x2d) = 0;
  *(uint64_t *)(param_1 + 0x2f) = 0;
  *(uint64_t *)(param_1 + 0x31) = 0;
  *(uint64_t *)(param_1 + 0x33) = 0;
  *(uint64_t *)(param_1 + 0x35) = 0;
  *(uint64_t *)(param_1 + 0x37) = 0;
  *(uint64_t *)(param_1 + 0x39) = 0;
  *(uint64_t *)(param_1 + 0x3b) = 0;
  *(uint64_t *)(param_1 + 0x3d) = 0;
  puVar1 = param_1 + 0x46;
  *(uint64_t *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0xe;
  *(int32_t **)puVar1 = puVar1;
  *(int32_t **)(param_1 + 0x48) = puVar1;
  *(uint64_t *)(param_1 + 0x4a) = 0;
  *(int8_t *)(param_1 + 0x4c) = 0;
  *(uint64_t *)(param_1 + 0x4e) = 0;
  puVar1 = param_1 + 0x52;
  *(uint64_t *)(param_1 + 0x58) = 0;
  param_1[0x5c] = 0xe;
  *(int32_t **)puVar1 = puVar1;
  *(int32_t **)(param_1 + 0x54) = puVar1;
  *(uint64_t *)(param_1 + 0x56) = 0;
  *(int8_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x5a) = 0;
  *(uint64_t *)(param_1 + 0x42) = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[0x44] = 0;
  return param_1;
}
uint64_t SystemCore_SecurityManager(int64_t param_1,int param_2,int param_3)
{
  int *piVar1;
  param_3 = *(int *)(param_1 + 0x58) * param_2 + param_3;
  for (piVar1 = *(int **)(*(int64_t *)(param_1 + 0x110) +
                         ((uint64_t)(int64_t)param_3 % (uint64_t)*(uint *)(param_1 + 0x118)) * 8)
      ; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
    if (param_3 == *piVar1) goto LAB_1803725b4;
  }
  piVar1 = (int *)0x0;
LAB_1803725b4:
  if (piVar1 == (int *)0x0) {
    return *(uint64_t *)
            (*(int64_t *)(*(int64_t *)(param_1 + 0x110) + *(int64_t *)(param_1 + 0x118) * 8) + 8)
    ;
  }
  return *(uint64_t *)(piVar1 + 2);
}
int64_t RenderingSystem_72600(int64_t param_1,uint64_t param_2)
{
  _Mtx_init_in_situ();
  *(uint64_t *)(param_1 + 0x68) = param_2;
  *(int32_t *)(param_1 + 0x70) = 0xe;
  *(uint64_t *)(param_1 + 0x78) = param_2;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0x98) = 0xe;
  *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0xe;
  *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(int32_t *)(param_1 + 0xe8) = 3;
  *(int32_t *)(param_1 + 0x128) = 0x3f800000;
  *(uint64_t *)(param_1 + 300) = 0x40000000;
  *(int32_t *)(param_1 + 0x134) = 0xe;
  *(uint64_t *)(param_1 + 0x118) = 1;
  *(void **)(param_1 + 0x110) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(int32_t *)(param_1 + 0x130) = 0;
  *(int32_t *)(param_1 + 0x50) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x54) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  *(int16_t *)(param_1 + 0x140) = 1;
  *(uint64_t *)(param_1 + 0x148) = 0;
  return param_1;
}
// 函数: void RenderingSystem_72730(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_72730(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  plVar1 = *(int64_t **)(param_1 + 0x110);
  lVar4 = *plVar1;
  plVar5 = plVar1;
  if (lVar4 == 0) {
    plVar5 = plVar1 + 1;
    lVar4 = *plVar5;
    while (lVar4 == 0) {
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
    }
  }
  while (lVar4 != plVar1[*(int64_t *)(param_1 + 0x118)]) {
    lVar3 = *(int64_t *)(lVar4 + 8);
    if (lVar3 != 0) {
      puVar2 = *(uint64_t **)(lVar3 + 0x158);
      if (puVar2 != (uint64_t *)0x0) {
        GenericFunction_180179f00(lVar3 + 0x148,*puVar2,param_3,param_4,0xfffffffffffffffe);
        if (puVar2[5] != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar2);
      }
      puVar2 = *(uint64_t **)(lVar3 + 0x128);
      if (puVar2 == (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar3);
      }
      GenericFunction_180179f00(lVar3 + 0x118,*puVar2,param_3,param_4,0xfffffffffffffffe);
      if (puVar2[5] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar2);
    }
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
    }
  }
  RenderingSystem_CameraController0(param_1 + 0x108);
  RenderingSystem_7f130(*(uint64_t *)(param_1 + 0x138));
  *(uint64_t *)(param_1 + 0x138) = 0;
  RenderingSystem_CameraController0(param_1 + 0x108);
  if ((1 < *(uint64_t *)(param_1 + 0x118)) && (*(int64_t *)(param_1 + 0x110) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xd0) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xa8) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x80) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}
// 函数: void RenderingSystem_72980(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_72980(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if ((0 < *(int *)(param_1 + 0x54)) && (0 < *(int *)(param_1 + 0x58))) {
    plVar1 = *(int64_t **)(param_1 + 0x110);
    puVar5 = (uint64_t *)*plVar1;
    plVar4 = plVar1;
    if (puVar5 == (uint64_t *)0x0) {
      plVar4 = plVar1 + 1;
      puVar5 = (uint64_t *)*plVar4;
      while (puVar5 == (uint64_t *)0x0) {
        plVar4 = plVar4 + 1;
        puVar5 = (uint64_t *)*plVar4;
      }
    }
    while (puVar5 != (uint64_t *)plVar1[*(int64_t *)(param_1 + 0x118)]) {
      lVar2 = puVar5[1];
      if (lVar2 != 0) {
        GenericFunction_180179f00(lVar2 + 0x148,*(uint64_t *)(lVar2 + 0x158),param_3,param_4,uVar6,*puVar5,
                      lVar2);
        GenericFunction_180179f00(lVar2 + 0x118,*(uint64_t *)(lVar2 + 0x128));
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      puVar5 = (uint64_t *)puVar5[2];
      while (puVar5 == (uint64_t *)0x0) {
        plVar4 = plVar4 + 1;
        puVar5 = (uint64_t *)*plVar4;
      }
    }
    RenderingSystem_CameraController0(param_1 + 0x108);
    RenderingSystem_7f130(*(uint64_t *)(param_1 + 0x138));
    *(uint64_t *)(param_1 + 0x138) = 0;
  }
  *(uint64_t *)(param_1 + 0x54) = 0;
  iVar3 = _Mtx_unlock(param_1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address