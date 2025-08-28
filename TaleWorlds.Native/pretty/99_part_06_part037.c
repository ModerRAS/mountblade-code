#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part037.c - 1 个函数
// 函数: void function_3c9620(void **param_1,uint64_t *param_2,int64_t param_3,uint param_4,int param_5
void function_3c9620(void **param_1,uint64_t *param_2,int64_t param_3,uint param_4,int param_5
                  ,float param_6,float param_7,int32_t param_8,int32_t *param_9)
{
  byte *pbVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  float fVar15;
  int8_t stack_array_1c8 [32];
  uint64_t *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int8_t stack_array_198 [8];
  uint64_t *plocal_var_190;
  uint64_t local_var_188;
  int64_t *plStack_180;
  void **pplocal_var_178;
  uint local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int iStack_158;
  uint local_var_154;
  int32_t local_var_150;
  int32_t local_var_148;
  int64_t lStack_140;
  int32_t local_var_138;
  int16_t local_var_134;
  uint64_t local_var_130;
  uint64_t *plocal_var_128;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int64_t *plStack_d8;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int32_t local_var_b8;
  int32_t stack_array_78 [2];
  uint64_t *plocal_var_70;
  float fStack_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint64_t local_var_58;
  local_var_130 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  uVar14 = (uint64_t)param_4;
  local_var_16c = 0;
  fVar15 = (param_7 - param_6) * 3.0517578e-05;
  plocal_var_190 = param_2;
  pplocal_var_178 = param_1;
  local_var_170 = param_4;
  plocal_var_128 = param_2;
  lVar3 = function_3ceee0((int64_t)(int)(param_5 * param_4));
  if (0 < (int)param_4) {
    iVar13 = 0;
    iVar12 = (param_4 - 1) * param_5;
    lVar9 = lVar3 + 3;
    do {
      lVar8 = lVar9;
      lVar11 = (int64_t)param_5;
      iVar10 = iVar13;
      if (0 < param_5) {
        do {
          *(int16_t *)(lVar8 + -3) = *(int16_t *)(param_3 + (int64_t)(iVar12 + iVar10) * 2);
          *(int16_t *)(lVar8 + -1) = 0;
          pbVar1 = (byte *)(lVar3 + 2 + (int64_t)iVar10 * 4);
          *pbVar1 = *pbVar1 | 0x80;
          lVar11 = lVar11 + -1;
          lVar8 = lVar8 + 4;
          iVar10 = iVar10 + 1;
        } while (lVar11 != 0);
      }
      iVar13 = iVar13 + param_5;
      lVar9 = lVar9 + (int64_t)param_5 * 4;
      iVar12 = iVar12 + param_5 * -2;
      uVar14 = uVar14 - 1;
      param_1 = pplocal_var_178;
      param_2 = plocal_var_190;
      param_4 = local_var_170;
    } while (uVar14 != 0);
  }
  local_var_138 = 0;
  local_var_134 = 0;
  local_var_150 = 1;
  iStack_158 = param_5;
  local_var_148 = 4;
  plVar7 = *(int64_t **)(system_system_data_memory + 0x28);
  pcVar2 = *(code **)(*plVar7 + 0x60);
  local_var_154 = param_4;
  lStack_140 = lVar3;
  uVar4 = (**(code **)(**(int64_t **)(system_system_data_memory + 0x20) + 0x120))();
  puVar5 = (uint64_t *)(*pcVar2)(plVar7,&iStack_158,uVar4);
  if (lVar3 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar3);
  }
  puVar6 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  *puVar6 = &processed_var_4096_ptr;
  *puVar6 = &processed_var_4064_ptr;
  *(float *)(puVar6 + 2) = fVar15;
  puVar6[1] = 0;
  puVar6[1] = puVar5;
  stack_array_78[0] = 6;
  local_var_64 = param_8;
  local_var_60 = param_8;
  local_var_5c = 0;
  pplocal_var_178 = *(void ***)(system_system_data_memory + 200);
  stack_array_198[0] = 0xb;
  plocal_var_1a0 = stack_array_198;
  plocal_var_1a8 = (uint64_t *)CONCAT71(plocal_var_1a8._1_7_,1);
  plocal_var_70 = puVar5;
  fStack_68 = fVar15;
  plVar7 = (int64_t *)
           (**(code **)(*(int64_t *)param_1[0x19] + 0xb8))(param_1[0x19],stack_array_78,&pplocal_var_178);
  local_var_15c = 0;
  local_var_168 = 4;
  local_var_164 = 10;
  local_var_160 = 0xffffffff;
  (**(code **)(*plVar7 + 0xa0))(plVar7,&local_var_168);
  plocal_var_190 = (uint64_t *)0x400000;
  local_var_188 = 0;
  (**(code **)(*plVar7 + 0xb0))(plVar7,&plocal_var_190);
  if (puVar5 != (uint64_t *)0x0) {
    (**(code **)*puVar5)(puVar5);
  }
  uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  uVar4 = function_3c5c50(uVar4,plVar7);
  local_var_118 = 0x3f800000;
  local_var_110 = 0;
  local_var_108 = 0x3f80000000000000;
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_f0 = 0x3f800000;
  local_var_e8 = 0;
  local_var_e4 = 0;
  local_var_e0 = 0;
  local_var_dc = 0x3f800000;
  plocal_var_190 = (uint64_t *)0x3f800000;
  local_var_188 = 0x7f7fffff00000000;
  function_3cf380(&local_var_118,0,&plocal_var_190);
  plocal_var_190 = (uint64_t *)0x3f80000000000000;
  local_var_188 = 0x7f7fffff00000000;
  function_3cf380(&local_var_118);
  local_var_e8 = *param_9;
  local_var_e4 = param_9[1];
  local_var_e0 = param_9[2];
  local_var_dc = 0x7f7fffff;
  function_2f5e40(&plStack_d8);
  plocal_var_1a8 = &local_var_118;
  (**(code **)(*param_1 + 200))(param_1,&plStack_180,&plStack_d8,uVar4);
  (**(code **)*plVar7)(plVar7);
  plStack_180[2] = 0;
  *(int32_t *)(plStack_180 + 3) = 0x2000000;
  (**(code **)(*plStack_180 + 0x138))(plStack_180,uVar4);
  (**(code **)(*plStack_180 + 0x80))();
  *param_2 = plStack_180;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x28))();
  }
  param_2[1] = puVar6;
  local_var_16c = 1;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  pplocal_var_178 = &plocal_var_d0;
  plocal_var_d0 = &system_data_buffer_ptr;
  if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_c8 = 0;
  local_var_b8 = 0;
  plocal_var_d0 = &system_state_ptr;
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
function_3c9a90(int64_t *param_1,int64_t *param_2,int64_t param_3,float param_4,int param_5,
             int param_6)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int64_t *plStack_b8;
  void *plocal_var_b0;
  int64_t lStack_a8;
  int32_t local_var_98;
  local_var_100 = 0xfffffffffffffffe;
  puVar3 = *(uint64_t **)(param_3 + 0x60);
  if (puVar3 != (uint64_t *)0x0) {
    lVar1 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar1);
    }
    *(uint64_t *)(param_3 + 0x60) = 0;
  }
  uVar2 = function_3ca950(param_1,param_3);
  puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  lVar1 = param_1[0x46];
  *puVar3 = &processed_var_4096_ptr;
  *puVar3 = &processed_var_4064_ptr;
  *(int *)(puVar3 + 2) = (int)lVar1;
  puVar3[1] = 0;
  puVar3[1] = uVar2;
  *(uint64_t **)(param_3 + 0x60) = puVar3;
  uVar2 = function_3cafa0(param_1,param_3,uVar2);
  local_var_f8 = 0x3f800000;
  local_var_f0 = 0;
  local_var_e8 = 0x3f80000000000000;
  local_var_e0 = 0;
  local_var_d8 = 0;
  local_var_d0 = 0x3f800000;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  local_var_c0 = 0;
  local_var_bc = 0x3f800000;
  local_var_114 = 0x3f800000;
  local_var_110 = 0;
  local_var_10c = 0;
  local_var_108 = 0x7f7fffff;
  function_3cf380(&local_var_f8,0,&local_var_114);
  local_var_114 = 0;
  local_var_110 = 0x3f800000;
  local_var_10c = 0;
  local_var_108 = 0x7f7fffff;
  function_3cf380(&local_var_f8);
  local_var_c0 = 0;
  local_var_bc = 0x7f7fffff;
  fStack_c8 = (float)param_5 * param_4;
  fStack_c4 = (float)param_6 * param_4;
  function_2f5e40(0);
  (**(code **)(*param_1 + 200))(param_1,param_2,&plStack_b8,uVar2,&local_var_f8);
  *(uint64_t *)(*param_2 + 0x10) = 0;
  *(int32_t *)(*param_2 + 0x18) = 0x2000000;
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,uVar2);
  (**(code **)(*(int64_t *)*param_2 + 0x80))();
  plocal_var_b0 = &system_data_buffer_ptr;
  if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_a8 = 0;
  local_var_98 = 0;
  plocal_var_b0 = &system_state_ptr;
  if (plStack_b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_b8 + 0x38))();
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
function_3c9d00(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t param_4,
             uint64_t *param_5)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  void *puVar9;
  uint uVar10;
  float fVar12;
  int32_t uVar13;
  int64_t *plStackX_20;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
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
  uint64_t local_var_58;
  uint64_t uVar11;
  local_var_58 = 0xfffffffffffffffe;
  uVar8 = 0;
  *param_2 = 0;
  local_var_98 = *param_5;
  local_var_90 = param_5[1];
  local_var_88 = param_5[2];
  local_var_80 = param_5[3];
  local_var_78 = *(int32_t *)(param_5 + 4);
  local_var_74 = *(int32_t *)((int64_t)param_5 + 0x24);
  local_var_70 = *(int32_t *)(param_5 + 5);
  local_var_6c = *(int32_t *)((int64_t)param_5 + 0x2c);
  local_var_68 = *(int32_t *)(param_5 + 6);
  local_var_64 = *(int32_t *)((int64_t)param_5 + 0x34);
  local_var_60 = *(int32_t *)(param_5 + 7);
  local_var_5c = *(int32_t *)((int64_t)param_5 + 0x3c);
  Utilities_DataValidator(&local_var_98,local_var_68,param_3,param_4,1);
  uVar6 = *(uint64_t *)(param_1 + 200);
  lVar4 = AdvancedProcessor_StateManager0(&local_var_c8,&local_var_98);
  local_var_b8 = local_var_c4;
  local_var_b4 = local_var_c0;
  local_var_b0 = local_var_bc;
  local_var_ac = local_var_c8;
  local_var_a8 = local_var_68;
  local_var_a4 = local_var_64;
  local_var_a0 = local_var_60;
  plVar5 = (int64_t *)(**(code **)(lVar4 + 0xa8))(uVar6,&local_var_b8);
  uVar11 = uVar8;
  plStackX_20 = plVar5;
  if (0 < (int)(*(int64_t *)(param_4 + 0x10) - *(int64_t *)(param_4 + 8) >> 3)) {
    do {
      (**(code **)(*plVar5 + 0xa0))(plVar5,*(uint64_t *)(uVar8 + *(int64_t *)(param_4 + 8)));
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      uVar8 = uVar8 + 8;
    } while ((int)uVar10 < (int)(*(int64_t *)(param_4 + 0x10) - *(int64_t *)(param_4 + 8) >> 3));
  }
  fVar12 = *(float *)((int64_t)param_3 + 0x3c);
  if (fVar12 < 0.01) {
    puVar9 = &system_buffer_ptr;
    if (*(void **)(*param_3 + 0x18) != (void *)0x0) {
      puVar9 = *(void **)(*param_3 + 0x18);
    }
    SystemCore_ResourceManager0(&processed_var_4896_ptr,(double)fVar12,puVar9);
    fVar12 = 1.0;
  }
  local_var_d8 = (int32_t)param_3[9];
  local_var_dc = *(int32_t *)((int64_t)param_3 + 0x44);
  local_var_e0 = (int32_t)param_3[8];
  cVar2 = function_6b7380(plVar5,fVar12,&local_var_e0,0);
  if (cVar2 == '\0') {
    SystemCore_ResourceManager0(&memory_allocator_3192_ptr);
  }
  (**(code **)(*plVar5 + 0x100))(plVar5,&fStack_f0);
  if (fStack_f0 <= 0.1) {
    fStack_f0 = 0.1;
  }
  if (fStack_ec <= 0.1) {
    fStack_ec = 0.1;
  }
  if (fStack_e8 <= 0.1) {
    fStack_e8 = 0.1;
  }
  (**(code **)(*plVar5 + 0xf8))(plVar5,&fStack_f0);
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x50))(*(int64_t **)(param_1 + 0xb8),plVar5,0);
  uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,6,3);
  plVar7 = (int64_t *)function_3c6190(uVar6,plVar5);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar1 = (int64_t *)*param_2;
  *param_2 = (int64_t)plVar7;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int *)(*param_2 + 0x18) = (int)param_3[7];
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,param_4);
  lVar4 = system_system_data_memory;
  iVar3 = RenderingSystem_PostProcessor(system_system_data_memory,param_3 + 1);
  if ((iVar3 == -1) || (lVar4 = (int64_t)iVar3 * 0x68 + *(int64_t *)(lVar4 + 0x38), lVar4 == 0)) {
    lVar4 = *(int64_t *)(param_4 + 0x28);
    if (lVar4 == 0) goto LAB_1803ca01a;
    (**(code **)(*plVar5 + 0x120))(plVar5,*(int32_t *)(lVar4 + 0x60));
    uVar13 = *(int32_t *)(lVar4 + 0x5c);
  }
  else {
    (**(code **)(*plVar5 + 0x120))(plVar5,*(int32_t *)(lVar4 + 0x60));
    uVar13 = *(int32_t *)(lVar4 + 0x5c);
  }
  (**(code **)(*plVar5 + 0x110))(plVar5,uVar13);
LAB_1803ca01a:
  (**(code **)(*plVar5 + 0x1c0))(plVar5,0x40800000);
  (**(code **)(*plVar5 + 600))(plVar5,6,1);
  (**(code **)(*plVar5 + 0x198))(plVar5,4,1);
  SystemSecurity_Manager(param_1 + 0x1b0,&plStackX_20);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
function_3ca080(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4,
             uint64_t *param_5)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar6;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  uint64_t uVar5;
  local_var_48 = 0xfffffffffffffffe;
  uVar5 = 0;
  *param_2 = 0;
  local_var_88 = *param_5;
  local_var_80 = param_5[1];
  local_var_78 = param_5[2];
  local_var_70 = param_5[3];
  local_var_68 = *(int32_t *)(param_5 + 4);
  local_var_64 = *(int32_t *)((int64_t)param_5 + 0x24);
  local_var_60 = *(int32_t *)(param_5 + 5);
  local_var_5c = *(int32_t *)((int64_t)param_5 + 0x2c);
  local_var_58 = *(int32_t *)(param_5 + 6);
  local_var_54 = *(int32_t *)((int64_t)param_5 + 0x34);
  local_var_50 = *(int32_t *)(param_5 + 7);
  local_var_4c = *(int32_t *)((int64_t)param_5 + 0x3c);
  Utilities_DataValidator(&local_var_88,local_var_58,param_3,(char)param_4,1);
  AdvancedProcessor_StateManager0(&local_var_b8,&local_var_88);
  local_var_a8 = local_var_b4;
  local_var_a4 = local_var_b0;
  local_var_a0 = local_var_ac;
  local_var_9c = local_var_b8;
  local_var_98 = local_var_58;
  local_var_94 = local_var_54;
  local_var_90 = local_var_50;
  plVar2 = (int64_t *)
           (**(code **)(**(int64_t **)(param_1 + 200) + 0xa0))
                     (*(int64_t **)(param_1 + 200),&local_var_a8);
  uVar6 = uVar5;
  if (0 < (int)(*(int64_t *)(param_4 + 0x10) - *(int64_t *)(param_4 + 8) >> 3)) {
    do {
      (**(code **)(*plVar2 + 0xa0))(plVar2,*(uint64_t *)(uVar6 + *(int64_t *)(param_4 + 8)));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < (int)(*(int64_t *)(param_4 + 0x10) - *(int64_t *)(param_4 + 8) >> 3));
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x50))(*(int64_t **)(param_1 + 0xb8),plVar2,0);
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,6,3);
  plVar2 = (int64_t *)function_3c6190(uVar3,plVar2);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar1 = (int64_t *)*param_2;
  *param_2 = (int64_t)plVar2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(*param_2 + 0x18) = *(int32_t *)(param_3 + 0x38);
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,param_4);
  return param_2;
}
int function_3ca260(int64_t param_1)
{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  lVar3 = *(int64_t *)(param_1 + 0x1b0);
  iVar4 = 0;
  iVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b8) - lVar3 >> 3 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(int64_t **)(lVar6 + lVar3);
      lVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
      if ((lVar3 == 0) && (cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1), cVar2 == '\0')) {
        iVar4 = iVar4 + 1;
      }
      lVar3 = *(int64_t *)(param_1 + 0x1b0);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(*(int64_t *)(param_1 + 0x1b8) - lVar3 >> 3));
  }
  return iVar4;
}
uint function_3ca291(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t uVar4;
  int64_t unaff_R14;
  uVar4 = (uint64_t)unaff_EBX;
  do {
    plVar1 = *(int64_t **)(uVar4 + param_3);
    lVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (lVar3 == 0) {
      cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1);
      if (cVar2 == '\0') {
        unaff_EBX = unaff_EBX + 1;
      }
    }
    param_3 = *(int64_t *)(unaff_R14 + 0x1b0);
    unaff_EBP = unaff_EBP + 1;
    uVar4 = uVar4 + 8;
  } while ((uint64_t)(int64_t)unaff_EBP <
           (uint64_t)(*(int64_t *)(unaff_R14 + 0x1b8) - param_3 >> 3));
  return unaff_EBX;
}
int32_t function_3ca2f4(void)
{
  int32_t unaff_EBX;
  return unaff_EBX;
}
bool function_3ca310(int64_t param_1)
{
  int64_t lVar1;
  lVar1 = function_3c7600(param_1 + 0x130);
  return lVar1 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address