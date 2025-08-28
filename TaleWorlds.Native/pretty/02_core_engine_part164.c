#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part164.c - 8 个函数
// 函数: void function_14cb90(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4)
void function_14cb90(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4)
{
  float fVar1;
  uint64_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  bool bVar13;
  bool bVar14;
  uint64_t stack_special_x_8;
  int32_t local_var_58;
  int32_t local_var_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  int32_t local_var_20;
  lVar9 = core_system_data_memory;
  uVar12 = *param_3;
  uVar7 = param_3[1];
  local_var_20 = CONCAT31(local_var_20._1_3_,param_4);
  local_var_38._0_4_ = (int32_t)param_2;
  local_var_38._4_4_ = (int32_t)((uint64_t)param_2 >> 0x20);
  local_var_30._0_4_ = (float)uVar12;
  local_var_30._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
  local_var_28._0_4_ = (float)uVar7;
  local_var_28._4_4_ = (int32_t)((uint64_t)uVar7 >> 0x20);
  local_var_58 = (int32_t)local_var_38;
  local_var_54 = local_var_38._4_4_;
  fStack_50 = (float)local_var_30;
  fStack_4c = local_var_30._4_4_;
  fStack_48 = (float)local_var_28;
  local_var_44 = local_var_28._4_4_;
  local_var_40 = local_var_20;
  stack_special_x_8 = param_1;
  local_var_38 = param_2;
  local_var_30 = uVar12;
  local_var_28 = uVar7;
  lVar10 = function_14f980(core_system_data_memory,&stack_special_x_8,&local_var_58);
  if ((char)stack_special_x_8 == '\0') {
    return;
  }
  lVar11 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(lVar9 + 0x28));
  uVar3 = *(int32_t *)param_3;
  uVar4 = *(int32_t *)((int64_t)param_3 + 4);
  uVar5 = *(int32_t *)(param_3 + 1);
  uVar6 = *(int32_t *)((int64_t)param_3 + 0xc);
  *(uint64_t *)(lVar11 + 0x20) = param_2;
  *(int32_t *)(lVar11 + 0x28) = uVar3;
  *(int32_t *)(lVar11 + 0x2c) = uVar4;
  *(int32_t *)(lVar11 + 0x30) = uVar5;
  *(int32_t *)(lVar11 + 0x34) = uVar6;
  *(int8_t *)(lVar11 + 0x38) = param_4;
  if (lVar10 != lVar9) {
    uVar2 = *(uint64_t *)(lVar10 + 0x20);
    uVar8 = CONCAT44(local_var_54,local_var_58);
    if (uVar2 <= uVar8) {
      if (uVar8 <= uVar2) {
        fVar1 = *(float *)(lVar10 + 0x28);
        if (fStack_50 == fVar1) {
          fVar1 = *(float *)(lVar10 + 0x2c);
          if (fStack_4c != fVar1) {
            bVar14 = fVar1 == fStack_4c;
            bVar13 = fVar1 < fStack_4c;
            goto LAB_18014cc76;
          }
          bVar14 = fStack_48 < *(float *)(lVar10 + 0x30);
        }
        else {
          bVar14 = fVar1 == fStack_50;
          bVar13 = fVar1 < fStack_50;
LAB_18014cc76:
          bVar14 = !bVar13 && !bVar14;
        }
        if (bVar14) goto LAB_18014ccbd;
      }
      if (uVar8 <= uVar2) {
        fVar1 = *(float *)(lVar10 + 0x28);
        if (fVar1 == fStack_50) {
          fVar1 = *(float *)(lVar10 + 0x2c);
          if (fVar1 == fStack_4c) {
            bVar14 = fStack_48 == *(float *)(lVar10 + 0x30);
            bVar13 = fStack_48 < *(float *)(lVar10 + 0x30);
          }
          else {
            bVar14 = fStack_4c == fVar1;
            bVar13 = fStack_4c < fVar1;
          }
        }
        else {
          bVar14 = fStack_50 == fVar1;
          bVar13 = fStack_50 < fVar1;
        }
        if ((bVar13 || bVar14) && ((byte)local_var_40 < *(byte *)(lVar10 + 0x38))) goto LAB_18014ccbd;
      }
      uVar12 = 1;
      goto LAB_18014ccc0;
    }
  }
LAB_18014ccbd:
  uVar12 = 0;
LAB_18014ccc0:
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar11,lVar10,lVar9,uVar12);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_14ccf0(void)
void function_14ccf0(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t in_R9;
  int aiStackX_10 [2];
  int **ppiStackX_18;
  uint64_t uVar7;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int *apiStack_98 [2];
  code *pcStack_88;
  void *plocal_var_80;
  int *apiStack_78 [2];
  void *plocal_var_68;
  void *plocal_var_60;
  int *apiStack_58 [2];
  void *plocal_var_48;
  void *plocal_var_40;
  lVar3 = core_system_data_memory;
  uVar7 = 0xfffffffffffffffe;
  aiStackX_10[0] = 0;
  lVar5 = *(int64_t *)(core_system_data_memory + 8);
  iVar2 = 0;
  while (lVar5 != lVar3) {
    iVar4 = iVar2 + 1;
    uVar1 = *(uint64_t *)(lVar5 + 0x20);
    pcStack_88 = (code *)&memory_allocator_3584_ptr;
    plocal_var_80 = &memory_allocator_3568_ptr;
    apiStack_98[0] = aiStackX_10;
    function_14a370(uVar1,0,apiStack_98,in_R9,uVar7);
    if (pcStack_88 != (code *)0x0) {
      (*pcStack_88)(apiStack_98,0,0);
    }
    if (*(char *)(lVar5 + 0x38) == '\x01') {
      iVar4 = iVar2 + 3;
      local_var_a8 = *(int32_t *)(lVar5 + 0x28);
      local_var_a4 = *(int32_t *)(lVar5 + 0x2c);
      local_var_a0 = *(int32_t *)(lVar5 + 0x30);
      local_var_9c = *(int32_t *)(lVar5 + 0x34);
      ppiStackX_18 = apiStack_78;
      plocal_var_68 = &system_param1_ptr;
      plocal_var_60 = &memory_allocator_3488_ptr;
      apiStack_78[0] = aiStackX_10;
      function_149ed0(uVar1,apiStack_78,&local_var_a8);
      ppiStackX_18 = apiStack_58;
      plocal_var_48 = &system_param1_ptr;
      plocal_var_40 = &memory_allocator_3488_ptr;
      apiStack_58[0] = aiStackX_10;
      function_149bd0(uVar1);
    }
    lVar5 = Function_7bfb2422(lVar5);
    iVar2 = iVar4;
  }
  while (uVar7 = system_context_ptr, iVar2 != aiStackX_10[0]) {
    lVar5 = PerformanceOptimizer(system_context_ptr);
    if (lVar5 != 0) {
      plVar6 = (int64_t *)PerformanceOptimizer(uVar7);
      (**(code **)(*plVar6 + 0x20))(plVar6,0);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_14ce90(int64_t *param_1,int64_t param_2)
void function_14ce90(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  uint *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int8_t stack_array_308 [32];
  int8_t local_var_2e8;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  int32_t local_var_2cc;
  int32_t local_var_2c8;
  int32_t local_var_2c4;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  void *plocal_var_2b0;
  uint64_t local_var_2a8;
  int32_t local_var_2a0;
  uint64_t local_var_298;
  void **pplocal_var_288;
  int64_t *plStack_280;
  int64_t lStack_278;
  uint64_t local_var_270;
  uint64_t local_var_48;
  local_var_270 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_308;
  uVar13 = (uint64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  plVar1 = param_1 + 4;
  uVar8 = param_1[5] - *plVar1 >> 5;
  plStack_280 = param_1;
  if (uVar8 < uVar13) {
    function_14eb80(plVar1,uVar13 - uVar8);
  }
  else {
    param_1[5] = uVar13 * 0x20 + *plVar1;
  }
  lVar11 = 0;
  if (0 < (int64_t)uVar13) {
    do {
      pplocal_var_288 = (void **)&local_var_2c0;
      local_var_2c0 = &system_data_buffer_ptr;
      local_var_2a8 = 0;
      local_var_2b8 = 0;
      plocal_var_2b0 = (void *)((uint64_t)plocal_var_2b0 & 0xffffffff00000000);
      lVar12 = *(int64_t *)(param_2 + 8);
      local_var_2d8 = *(int32_t *)(lVar12 + 4);
      local_var_2d4 = *(int32_t *)(lVar12 + 8);
      local_var_2d0 = *(int32_t *)(lVar12 + 0xc);
      local_var_2cc = *(int32_t *)(lVar12 + 0x10);
      local_var_2c8 = *(int32_t *)(lVar12 + 0x14);
      *(int64_t *)(param_2 + 8) = lVar12 + 0x18;
      function_260830(local_var_2c8,param_2,&local_var_2c4);
      uVar6 = **(uint **)(param_2 + 8);
      puVar2 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar2;
      if (uVar6 != 0) {
        (**(code **)(local_var_2c0 + 0x18))(&local_var_2c0,puVar2,uVar6);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar6;
      }
      lVar12 = *plVar1;
      *(int32_t *)(lVar11 + 0x14 + lVar12) = local_var_2c4;
      puVar3 = (int32_t *)(lVar11 + 4 + lVar12);
      *puVar3 = local_var_2d4;
      puVar3[1] = local_var_2d0;
      puVar3[2] = local_var_2cc;
      puVar3[3] = local_var_2c8;
      *(int32_t *)(lVar11 + lVar12) = local_var_2d8;
      lVar9 = core_system_data_memory;
      iVar7 = RenderingSystem_PostProcessor(core_system_data_memory,&local_var_2c0);
      if (iVar7 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (int64_t)iVar7 * 0x68 + *(int64_t *)(lVar9 + 0x38);
      }
      *(int64_t *)(lVar11 + 0x18 + lVar12) = lVar9;
      pplocal_var_288 = (void **)&local_var_2c0;
      local_var_2c0 = &system_data_buffer_ptr;
      if (local_var_2b8 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_2b8 = 0;
      local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
      local_var_2c0 = &system_state_ptr;
      lVar11 = lVar11 + 0x20;
      uVar13 = uVar13 - 1;
      param_1 = plStack_280;
    } while (uVar13 != 0);
  }
  lVar12 = 0;
  uVar13 = (uint64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  lVar11 = param_1[1] - *param_1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  uVar8 = (lVar11 >> 3) - (lVar11 >> 0x3f);
  if (uVar8 < uVar13) {
    function_14e9d0(param_1,uVar13 - uVar8);
  }
  else {
    param_1[1] = uVar13 * 0x30 + *param_1;
  }
  if (0 < (int64_t)uVar13) {
    do {
      pplocal_var_288 = &plocal_var_2b0;
      plocal_var_2b0 = &system_data_buffer_ptr;
      local_var_298 = 0;
      local_var_2a8 = 0;
      local_var_2a0 = 0;
      lVar11 = *(int64_t *)(param_2 + 8);
      local_var_2d8 = *(int32_t *)(lVar11 + 4);
      local_var_2d4 = *(int32_t *)(lVar11 + 8);
      local_var_2d0 = *(int32_t *)(lVar11 + 0xc);
      local_var_2cc = *(int32_t *)(lVar11 + 0x10);
      local_var_2c8 = *(int32_t *)(lVar11 + 0x14);
      local_var_2c4 = *(int32_t *)(lVar11 + 0x18);
      local_var_2c0 = *(void **)(lVar11 + 0x1c);
      uVar5 = *(int32_t *)(lVar11 + 0x24);
      local_var_2b8 = CONCAT44(local_var_2b8._4_4_,uVar5);
      *(int64_t *)(param_2 + 8) = lVar11 + 0x28;
      function_260830(uVar5,param_2,(int64_t)&local_var_2b8 + 4);
      uVar6 = **(uint **)(param_2 + 8);
      puVar2 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar2;
      if (uVar6 != 0) {
        (**(code **)(plocal_var_2b0 + 0x18))(&plocal_var_2b0,puVar2,uVar6);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar6;
      }
      lVar11 = *param_1;
      puVar4 = (uint64_t *)(lVar12 + 4 + lVar11);
      *puVar4 = CONCAT44(local_var_2d0,local_var_2d4);
      puVar4[1] = CONCAT44(local_var_2c8,local_var_2cc);
      puVar3 = (int32_t *)(lVar12 + 0x14 + lVar11);
      *puVar3 = local_var_2c4;
      puVar3[1] = (int32_t)local_var_2c0;
      puVar3[2] = local_var_2c0._4_4_;
      puVar3[3] = (int32_t)local_var_2b8;
      *(int32_t *)(lVar12 + lVar11) = local_var_2d8;
      *(int32_t *)(lVar12 + 0x24 + lVar11) = local_var_2b8._4_4_;
      lVar9 = core_system_data_memory;
      iVar7 = RenderingSystem_PostProcessor(core_system_data_memory,&plocal_var_2b0);
      if (iVar7 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (int64_t)iVar7 * 0x68 + *(int64_t *)(lVar9 + 0x38);
      }
      *(int64_t *)(lVar12 + 0x28 + lVar11) = lVar9;
      pplocal_var_288 = &plocal_var_2b0;
      plocal_var_2b0 = &system_data_buffer_ptr;
      if (local_var_2a8 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_2a8 = 0;
      local_var_298 = local_var_298 & 0xffffffff00000000;
      plocal_var_2b0 = &system_state_ptr;
      lVar12 = lVar12 + 0x30;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  local_var_2e8 = 1;
  lVar11 = (int64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  param_1 = param_1 + 8;
  pplocal_var_288 = (void **)param_1;
  lStack_278 = lVar11;
  function_14e330(param_1,lVar11);
  if (lVar11 < 1) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_308);
  }
  puVar4 = (uint64_t *)*param_1;
  uVar6 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  puVar4[1] = (uint64_t)uVar6;
  uVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar6,6);
  *puVar4 = uVar10;
// WARNING: Subroutine does not return
  memcpy(uVar10,*(uint64_t *)(param_2 + 8),(int64_t)(int)uVar6);
}
// 函数: void function_14d6a0(int64_t param_1)
void function_14d6a0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  return;
}
int64_t function_14d6f0(int64_t param_1,uint64_t param_2)
{
  if ((param_2 & 2) != 0) {
    SystemDataValidator(param_1,0x20,*(uint64_t *)(param_1 + -8),function_6d84a0,0xfffffffffffffffe);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8,*(int64_t *)(param_1 + -8) * 0x20 + 8);
    }
    return param_1 + -8;
  }
  function_6d84a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}
// 函数: void function_14d790(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_14d790(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  if (param_1[8] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[4] == 0) {
    uVar3 = 0xfffffffffffffffe;
    puVar1 = (uint64_t *)param_1[1];
    for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
    }
    if (*param_1 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x00018014de5c)
// WARNING: Removing unreachable block (ram,0x00018014dd9b)
// WARNING: Removing unreachable block (ram,0x00018014ddca)
// WARNING: Removing unreachable block (ram,0x00018014de09)
// WARNING: Removing unreachable block (ram,0x00018014de17)
// WARNING: Removing unreachable block (ram,0x00018014de1c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_14d7f0(int64_t *param_1,float *param_2,int64_t *param_3)
void function_14d7f0(int64_t *param_1,float *param_2,int64_t *param_3)
{
  int64_t *plVar1;
  uint *puVar2;
  int32_t uVar3;
  char cVar4;
  char *pcVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  void **ppuVar16;
  int64_t lVar17;
  int iVar18;
  uint uVar19;
  uint64_t uVar20;
  int8_t stack_array_318 [32];
  int64_t *plStack_2f8;
  void **pplocal_var_2f0;
  uint64_t local_var_2e8;
  int64_t *plStack_2e0;
  uint64_t *plocal_var_2d8;
  float *pfStack_2d0;
  uint64_t local_var_2c8;
  void *plocal_var_2b8;
  int8_t *plocal_var_2b0;
  int32_t local_var_2a8;
  int8_t stack_array_2a0 [520];
  uint64_t local_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  uint64_t local_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_2c8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_318;
  pcVar5 = (char *)param_3[1];
  cVar4 = *pcVar5;
  param_3[1] = (int64_t)(pcVar5 + 1);
  plStack_2f8 = param_1;
  pfStack_2d0 = param_2;
  if (cVar4 != '\0') {
    uVar20 = (uint64_t)*(int *)(pcVar5 + 1);
    param_3[1] = (int64_t)(pcVar5 + 5);
    plVar1 = param_1 + 4;
    uVar10 = param_1[5] - *plVar1 >> 5;
    if (uVar10 < uVar20) {
      function_14eb80(plVar1,uVar20 - uVar10);
    }
    else {
      param_1[5] = uVar20 * 0x20 + *plVar1;
    }
    lVar17 = 0;
    lVar13 = lVar17;
    if (0 < (int64_t)uVar20) {
      do {
        pplocal_var_2f0 = (void **)&local_var_80;
        local_var_80 = &system_data_buffer_ptr;
        local_var_68 = 0;
        local_var_78 = 0;
        plocal_var_70 = (void *)((uint64_t)plocal_var_70 & 0xffffffff00000000);
        param_3[1] = param_3[1] + 4;
        puVar6 = (int32_t *)param_3[1];
        local_var_98._0_4_ = *puVar6;
        param_3[1] = (int64_t)(puVar6 + 1);
        local_var_98._4_4_ = puVar6[1];
        param_3[1] = (int64_t)(puVar6 + 2);
        local_var_90 = puVar6[2];
        param_3[1] = (int64_t)(puVar6 + 3);
        local_var_8c = puVar6[3];
        param_3[1] = (int64_t)(puVar6 + 4);
        local_var_88 = puVar6[4];
        param_3[1] = (int64_t)(puVar6 + 5);
        function_260830(local_var_88,param_3,&local_var_84);
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (int64_t)puVar2;
        if (uVar19 != 0) {
          (**(code **)(local_var_80 + 0x18))(&local_var_80,puVar2,(uint64_t)uVar19);
          param_3[1] = param_3[1] + (uint64_t)uVar19;
        }
        lVar14 = *plVar1;
        *(int32_t *)(lVar13 + 0x14 + lVar14) = local_var_84;
        puVar6 = (int32_t *)(lVar13 + 4 + lVar14);
        *puVar6 = local_var_98._4_4_;
        puVar6[1] = local_var_90;
        puVar6[2] = local_var_8c;
        puVar6[3] = local_var_88;
        *(int32_t *)(lVar13 + lVar14) = (int32_t)local_var_98;
        lVar7 = core_system_data_memory;
        iVar8 = RenderingSystem_PostProcessor(core_system_data_memory,&local_var_80);
        lVar11 = lVar17;
        if (iVar8 != -1) {
          lVar11 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar7 + 0x38);
        }
        *(int64_t *)(lVar13 + 0x18 + lVar14) = lVar11;
        pplocal_var_2f0 = (void **)&local_var_80;
        local_var_80 = &system_data_buffer_ptr;
        if (local_var_78 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        local_var_78 = 0;
        local_var_68 = local_var_68 & 0xffffffff00000000;
        local_var_80 = &system_state_ptr;
        uVar20 = uVar20 - 1;
        lVar13 = lVar13 + 0x20;
        param_1 = plStack_2f8;
      } while (uVar20 != 0);
    }
    uVar20 = (uint64_t)*(int *)param_3[1];
    param_3[1] = (int64_t)((int *)param_3[1] + 1);
    lVar13 = param_1[1] - *param_1;
    lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
    uVar10 = (lVar13 >> 3) - (lVar13 >> 0x3f);
    if (uVar10 < uVar20) {
      function_14e9d0(param_1,uVar20 - uVar10);
    }
    else {
      param_1[1] = uVar20 * 0x30 + *param_1;
    }
    lVar13 = lVar17;
    if (0 < (int64_t)uVar20) {
      do {
        pplocal_var_2f0 = &plocal_var_70;
        plocal_var_70 = &system_data_buffer_ptr;
        local_var_58 = 0;
        local_var_68 = 0;
        local_var_60 = 0;
        param_3[1] = param_3[1] + 4;
        puVar6 = (int32_t *)param_3[1];
        local_var_98._0_4_ = *puVar6;
        param_3[1] = (int64_t)(puVar6 + 1);
        local_var_98._4_4_ = puVar6[1];
        param_3[1] = (int64_t)(puVar6 + 2);
        local_var_90 = puVar6[2];
        param_3[1] = (int64_t)(puVar6 + 3);
        local_var_8c = puVar6[3];
        param_3[1] = (int64_t)(puVar6 + 4);
        local_var_88 = puVar6[4];
        param_3[1] = (int64_t)(puVar6 + 5);
        local_var_84 = puVar6[5];
        param_3[1] = (int64_t)(puVar6 + 6);
        uVar3 = puVar6[6];
        param_3[1] = (int64_t)(puVar6 + 7);
        local_var_80 = (void *)CONCAT44(puVar6[7],uVar3);
        param_3[1] = (int64_t)(puVar6 + 8);
        uVar3 = puVar6[8];
        local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
        param_3[1] = (int64_t)(puVar6 + 9);
        function_260830(uVar3,param_3,(int64_t)&local_var_78 + 4);
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (int64_t)puVar2;
        if (uVar19 != 0) {
          (**(code **)(plocal_var_70 + 0x18))(&plocal_var_70,puVar2,(uint64_t)uVar19);
          param_3[1] = param_3[1] + (uint64_t)uVar19;
        }
        lVar14 = *param_1;
        puVar15 = (uint64_t *)(lVar13 + 4 + lVar14);
        *puVar15 = CONCAT44(local_var_90,local_var_98._4_4_);
        puVar15[1] = CONCAT44(local_var_88,local_var_8c);
        puVar6 = (int32_t *)(lVar13 + 0x14 + lVar14);
        *puVar6 = local_var_84;
        puVar6[1] = (int32_t)local_var_80;
        puVar6[2] = local_var_80._4_4_;
        puVar6[3] = (int32_t)local_var_78;
        *(int32_t *)(lVar13 + lVar14) = (int32_t)local_var_98;
        *(int32_t *)(lVar13 + 0x24 + lVar14) = local_var_78._4_4_;
        lVar7 = core_system_data_memory;
        iVar8 = RenderingSystem_PostProcessor(core_system_data_memory,&plocal_var_70);
        lVar11 = lVar17;
        if (iVar8 != -1) {
          lVar11 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar7 + 0x38);
        }
        *(int64_t *)(lVar13 + 0x28 + lVar14) = lVar11;
        pplocal_var_2f0 = &plocal_var_70;
        plocal_var_70 = &system_data_buffer_ptr;
        if (local_var_68 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        local_var_68 = 0;
        local_var_58 = local_var_58 & 0xffffffff00000000;
        plocal_var_70 = &system_state_ptr;
        uVar20 = uVar20 - 1;
        lVar13 = lVar13 + 0x30;
        param_1 = plStack_2f8;
      } while (uVar20 != 0);
    }
    iVar8 = *(int *)param_3[1];
    ppuVar16 = (void **)(int64_t)iVar8;
    param_3[1] = (int64_t)((int *)param_3[1] + 1);
    param_1 = param_1 + 8;
    pplocal_var_2f0 = ppuVar16;
    plStack_2e0 = param_1;
    function_14e330(param_1,ppuVar16);
    plocal_var_2b8 = &processed_var_9208_ptr;
    plocal_var_2b0 = stack_array_2a0;
    local_var_2a8 = 0;
    stack_array_2a0[0] = 0;
    if (0 < iVar8) {
      do {
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (int64_t)puVar2;
        plocal_var_2d8 = ppuVar16;
        if (uVar19 != 0) {
          (**(code **)(plocal_var_2b8 + 0x18))(&plocal_var_2b8,puVar2,(uint64_t)uVar19);
          param_3[1] = param_3[1] + (uint64_t)uVar19;
        }
        lVar13 = *param_1;
        lVar14 = *(int64_t *)(lVar17 + 0x20 + lVar13);
        lVar7 = *(int64_t *)(lVar17 + 0x18 + lVar13);
        if (lVar14 - lVar7 >> 3 == 0) {
          if (*(int64_t *)(lVar17 + 0x28 + lVar13) - lVar14 >> 3 != 0) {
// WARNING: Subroutine does not return
            memset(lVar14,0,8);
          }
          local_var_2e8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,8,*(int8_t *)(lVar17 + 0x30 + lVar13));
          lVar14 = *(int64_t *)(lVar17 + 0x20 + lVar13);
          lVar13 = *(int64_t *)(lVar17 + 0x18 + lVar13);
          if (lVar13 != lVar14) {
// WARNING: Subroutine does not return
            memmove(local_var_2e8,lVar13,lVar14 - lVar13);
          }
// WARNING: Subroutine does not return
          memset(local_var_2e8,0,8);
        }
        *(int64_t *)(lVar17 + 0x20 + lVar13) = lVar7 + 8;
        lVar13 = core_system_data_memory;
        iVar8 = RenderingSystem_PostProcessor(core_system_data_memory,&plocal_var_2b8);
        if ((iVar8 == -1) ||
           (lVar14 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar13 + 0x38), lVar14 == 0)) {
          lVar14 = *(int64_t *)(lVar13 + 0x28);
        }
        **(int64_t **)(lVar17 + 0x18 + *param_1) = lVar14;
        *(int32_t *)(lVar17 + 0x10 + *param_1) = 0;
        lVar17 = lVar17 + 0x38;
        ppuVar16 = (void **)((int64_t)ppuVar16 + -1);
      } while (ppuVar16 != (void **)0x0);
      iVar8 = (int)pplocal_var_2f0;
      plocal_var_2d8 = (uint64_t *)0x0;
      ppuVar16 = pplocal_var_2f0;
    }
    iVar9 = 2;
    if (pfStack_2d0[1] <= 0.0 && pfStack_2d0[1] != 0.0) {
      iVar9 = 0;
    }
    iVar18 = 4;
    if (*pfStack_2d0 <= 0.0 && *pfStack_2d0 != 0.0) {
      iVar18 = 0;
    }
    uVar19 = iVar18 + iVar9 + (uint)(0.0 < pfStack_2d0[2] || pfStack_2d0[2] == 0.0);
    puVar15 = (uint64_t *)param_3[1];
    local_var_98._0_4_ = (int32_t)*puVar15;
    local_var_98._4_4_ = (int32_t)((uint64_t)*puVar15 >> 0x20);
    local_var_90 = (int32_t)puVar15[1];
    local_var_8c = (int32_t)((uint64_t)puVar15[1] >> 0x20);
    local_var_88 = (int32_t)puVar15[2];
    local_var_84 = (int32_t)((uint64_t)puVar15[2] >> 0x20);
    local_var_80 = (void *)puVar15[3];
    local_var_78 = puVar15[4];
    plocal_var_70 = (void *)puVar15[5];
    local_var_68 = puVar15[6];
    local_var_60 = *(int32_t *)(puVar15 + 7);
    local_var_5c = *(int32_t *)((int64_t)puVar15 + 0x3c);
    puVar15 = puVar15 + 8;
    param_3[1] = (int64_t)puVar15;
    if (0 < iVar8) {
      uVar10 = (&local_var_98)[uVar19] + (int64_t)(int)(uVar19 * iVar8) * 4;
      if ((uint64_t)((param_3[2] - (int64_t)puVar15) + *param_3) <= uVar10) {
        System_BufferManager(param_3,(int64_t)puVar15 + (uVar10 - *param_3));
        puVar15 = (uint64_t *)param_3[1];
      }
      param_3[1] = (int64_t)puVar15 + uVar10;
      if (0 < (int64_t)ppuVar16) {
        uVar19 = *(uint *)param_3[1];
        param_3[1] = (int64_t)((uint *)param_3[1] + 1);
        *(uint64_t *)(*param_1 + 8) = (uint64_t)uVar19;
        uVar12 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar19,3);
        *(uint64_t *)*param_1 = uVar12;
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)*param_1,param_3[1],(int64_t)(int)uVar19);
      }
    }
    plocal_var_2b8 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_318);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_14e020(int64_t *param_1,uint64_t param_2,int32_t *param_3)
void function_14e020(int64_t *param_1,uint64_t param_2,int32_t *param_3)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  puVar6 = (int32_t *)param_1[1];
  puVar4 = (int32_t *)*param_1;
  uVar3 = (int64_t)puVar6 - (int64_t)puVar4 >> 2;
  if (param_2 <= uVar3) {
    param_1[1] = (int64_t)(puVar4 + param_2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (uint64_t)(param_1[2] - (int64_t)puVar6 >> 2)) {
    if (param_2 != 0) {
      uVar1 = *param_3;
      for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      puVar6 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar6 + param_2);
    return;
  }
  uVar5 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < uVar3 + param_2) {
    uVar5 = uVar3 + param_2;
  }
  if (uVar5 == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 4,(char)param_1[3]);
    puVar4 = (int32_t *)*param_1;
    puVar6 = (int32_t *)param_1[1];
  }
  if (puVar4 != puVar6) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(int64_t)puVar6 - (int64_t)puVar4);
  }
  if (param_2 != 0) {
    uVar1 = *param_3;
    puVar4 = puVar2;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (int64_t)puVar2;
  param_1[2] = (int64_t)(puVar2 + uVar5);
  param_1[1] = (int64_t)(puVar2 + param_2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_14e067(int64_t param_1,int64_t param_2)
void function_14e067(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int32_t *puVar5;
  int32_t *unaff_R15;
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (uint64_t)(param_1 + unaff_RBX)) {
    uVar4 = param_1 + unaff_RBX;
  }
  if (uVar4 == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 4,(char)unaff_RSI[3]);
    param_2 = *unaff_RSI;
    unaff_RDI = unaff_RSI[1];
  }
  if (param_2 != unaff_RDI) {
// WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RDI - param_2);
  }
  if (unaff_RBX != 0) {
    uVar1 = *unaff_R15;
    puVar5 = puVar2;
    for (lVar3 = unaff_RBX; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    }
  }
  if (*unaff_RSI != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RSI = (int64_t)puVar2;
  unaff_RSI[2] = (int64_t)(puVar2 + uVar4);
  unaff_RSI[1] = (int64_t)(puVar2 + unaff_RBX);
  return;
}