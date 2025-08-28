/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part204.c - 17 个函数
// 函数: void function_186430(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_186430(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  plVar1 = (int64_t *)(param_1 + 0x28);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar5 = *(int64_t **)(lVar2 + 8);
  if (*(char *)((int64_t)*(int64_t **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      function_1885a0(plVar1,plVar5[2],param_3,param_4,uVar6);
      plVar3 = (int64_t *)*plVar5;
      free(plVar5,0x28);
      plVar5 = plVar3;
    } while (*(char *)((int64_t)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(int64_t *)(lVar4 + 8) = lVar2;
  *(int64_t *)*plVar1 = lVar2;
  *(int64_t *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x30) = 0;
  free(*plVar1,0x28);
  SystemResourceAllocator(param_1 + 8);
  return;
}
// 函数: void function_1864e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1864e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1865a0(uint64_t param_1,uint64_t *param_2)
void function_1865a0(uint64_t param_1,uint64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t stack_array_c8 [32];
  int64_t **pplStack_a8;
  uint64_t local_var_a0;
  uint64_t *plocal_var_98;
  int8_t stack_array_90 [16];
  uint64_t local_var_80;
  uint64_t local_var_78;
  int64_t *plStack_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  int64_t lStack_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  void **pplocal_var_28;
  uint64_t local_var_20;
  lVar2 = core_system_data_memory;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  plocal_var_98 = param_2;
  if (*(int64_t *)(core_system_data_memory + 8) == 0) {
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
  }
  else {
    local_var_80 = 0;
    local_var_78 = 0xf;
    stack_array_90[0] = 0;
    pplStack_a8 = &plStack_70;
    plStack_70 = (int64_t *)0x0;
    local_var_68 = 0;
    plStack_70 = (int64_t *)function_188490();
    puVar4 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar4 = (void *)param_2[1];
    }
    lVar6 = -1;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (puVar4[lVar7] != '\0');
    MathCoreCalculator0(stack_array_90);
    puVar4 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar4 = (void *)param_2[1];
    }
    local_var_50 = 0;
    local_var_48 = 0xf;
    plocal_var_60 = (void *)((uint64_t)plocal_var_60 & 0xffffffffffffff00);
    MathCoreCalculator0(&plocal_var_60,&rendering_buffer_276_ptr,5);
    uVar3 = function_187f00(&plStack_70,&plocal_var_60);
    do {
      lVar6 = lVar6 + 1;
    } while (puVar4[lVar6] != '\0');
    MathCoreCalculator0(uVar3,puVar4,lVar6);
    if (0xf < local_var_48) {
      uVar5 = local_var_48 + 1;
      puVar4 = plocal_var_60;
      if (0xfff < uVar5) {
        uVar5 = local_var_48 + 0x28;
        puVar4 = *(void **)(plocal_var_60 + -8);
        if ((void *)0x1f < plocal_var_60 + (-8 - (int64_t)puVar4)) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(puVar4,uVar5);
    }
    local_var_50 = 0;
    local_var_48 = 0xf;
    plVar1 = *(int64_t **)(lVar2 + 8);
    pplStack_a8 = (int64_t **)&plocal_var_60;
    plocal_var_60 = &processed_var_704_ptr;
    lStack_58 = lVar2;
    pplocal_var_28 = &plocal_var_60;
    (**(code **)(*plVar1 + 0x18))(plVar1,stack_array_90,&plocal_var_60,0);
    plVar1 = plStack_70;
    pplStack_a8 = &plStack_70;
    function_1884d0(&plStack_70,plStack_70[1]);
    plStack_70[1] = (int64_t)plVar1;
    *plStack_70 = (int64_t)plVar1;
    plStack_70[2] = (int64_t)plVar1;
    local_var_68 = 0;
    free(plStack_70,0x60);
    SystemResourceAllocator(stack_array_90);
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
  }
  *param_2 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_c8);
}
// 函数: void function_186800(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_186800(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  plVar1 = (int64_t *)(param_1 + 0x20);
  lVar2 = *plVar1;
  function_1884d0(plVar1,*(uint64_t *)(lVar2 + 8),param_3,param_4,0xfffffffffffffffe);
  *(int64_t *)(*plVar1 + 8) = lVar2;
  *(int64_t *)*plVar1 = lVar2;
  *(int64_t *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x28) = 0;
  free(*plVar1,0x60);
  SystemResourceAllocator(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_186880(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
void function_186880(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  void *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t stack_array_e8 [32];
  uint64_t local_var_c8;
  uint64_t *plocal_var_c0;
  uint64_t *plocal_var_b8;
  void **pplocal_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  void **pplocal_var_70;
  int8_t stack_array_68 [16];
  uint64_t local_var_58;
  uint64_t local_var_50;
  int8_t stack_array_48 [16];
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  lVar2 = core_system_data_memory;
  local_var_c8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  plocal_var_c0 = param_2;
  plocal_var_b8 = param_3;
  if (*(int64_t *)(core_system_data_memory + 8) == 0) {
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    *param_3 = &system_data_buffer_ptr;
    if (param_3[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  else {
    local_var_58 = 0;
    local_var_50 = 0xf;
    stack_array_68[0] = 0;
    local_var_38 = 0;
    local_var_30 = 0xf;
    stack_array_48[0] = 0;
    puVar3 = &system_buffer_ptr;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar3 = (void *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    MathCoreCalculator0(stack_array_68);
    puVar3 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar3 = (void *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    MathCoreCalculator0(stack_array_48,puVar3,lVar4);
    plVar1 = *(int64_t **)(lVar2 + 8);
    pplocal_var_b0 = &plocal_var_a8;
    plocal_var_a8 = &processed_var_592_ptr;
    lStack_a0 = lVar2;
    pplocal_var_70 = &plocal_var_a8;
    (**(code **)(*plVar1 + 0x28))(plVar1,stack_array_68,&plocal_var_a8,0);
    SystemResourceAllocator(stack_array_48);
    SystemResourceAllocator(stack_array_68);
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    *param_3 = &system_data_buffer_ptr;
    if (param_3[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  *param_3 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_e8);
}
// 函数: void function_186a90(int64_t param_1)
void function_186a90(int64_t param_1)
{
  SystemResourceAllocator(param_1 + 0x20);
  SystemResourceAllocator(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_186ac0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
void function_186ac0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t *plVar1;
  int64_t lVar2;
  void *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  uint64_t *plocal_var_e0;
  uint64_t *plocal_var_d8;
  void **pplocal_var_d0;
  void *plocal_var_c8;
  int64_t lStack_c0;
  void **pplocal_var_90;
  int8_t stack_array_88 [16];
  uint64_t local_var_78;
  uint64_t local_var_70;
  int8_t stack_array_68 [16];
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  uint64_t local_var_38;
  lVar2 = core_system_data_memory;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  plocal_var_e0 = param_2;
  plocal_var_d8 = param_3;
  if (*(int64_t *)(core_system_data_memory + 8) == 0) {
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    *param_3 = &system_data_buffer_ptr;
    if (param_3[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  else {
    local_var_78 = 0;
    local_var_70 = 0xf;
    stack_array_88[0] = 0;
    local_var_58 = 0;
    local_var_50 = 0xf;
    stack_array_68[0] = 0;
    local_var_44 = param_5;
    puVar3 = &system_buffer_ptr;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar3 = (void *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    local_var_48 = param_4;
    MathCoreCalculator0(stack_array_88);
    puVar3 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar3 = (void *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    MathCoreCalculator0(stack_array_68,puVar3,lVar4);
    plVar1 = *(int64_t **)(lVar2 + 8);
    pplocal_var_d0 = &plocal_var_c8;
    plocal_var_c8 = &processed_var_648_ptr;
    lStack_c0 = lVar2;
    pplocal_var_90 = &plocal_var_c8;
    (**(code **)(*plVar1 + 0x30))(plVar1,stack_array_88,&plocal_var_c8,0);
    SystemResourceAllocator(stack_array_68);
    SystemResourceAllocator(stack_array_88);
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    *param_3 = &system_data_buffer_ptr;
    if (param_3[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  *param_3 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_186ca0(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_186ca0(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  void **ppuVar3;
  void **ppuVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int8_t stack_array_b8 [32];
  void **pplocal_var_98;
  void **pplocal_var_90;
  void **pplocal_var_88;
  void **pplocal_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  int64_t lStack_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  void **pplocal_var_38;
  uint64_t local_var_30;
  lVar2 = core_system_data_memory;
  local_var_78 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(int64_t *)(core_system_data_memory + 8) != 0) {
    pplocal_var_98 = (void **)0x0;
    pplocal_var_90 = (void **)0x0;
    uVar5 = 0;
    pplocal_var_88 = (void **)0x0;
    if (param_3 != 0) {
      do {
        local_var_60 = 0;
        local_var_58 = 0xf;
        plocal_var_70 = (void *)((uint64_t)plocal_var_70 & 0xffffffffffffff00);
        local_var_50 = 0;
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*(int64_t *)(param_2 + uVar5 * 8) + lVar6) != '\0');
        MathCoreCalculator0(&plocal_var_70);
        ppuVar4 = pplocal_var_90;
        if (pplocal_var_88 == pplocal_var_90) {
          function_188f60(&pplocal_var_98,pplocal_var_90,&plocal_var_70);
        }
        else {
          pplocal_var_80 = pplocal_var_90;
          function_18b350(pplocal_var_90,&plocal_var_70);
          *(int32_t *)(ppuVar4 + 4) = (int32_t)local_var_50;
          *(int32_t *)((int64_t)ppuVar4 + 0x24) = local_var_50._4_4_;
          pplocal_var_90 = pplocal_var_90 + 5;
        }
        SystemResourceAllocator(&plocal_var_70);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    plVar1 = *(int64_t **)(lVar2 + 8);
    pplocal_var_80 = &plocal_var_70;
    plocal_var_70 = &processed_var_480_ptr;
    lStack_68 = lVar2;
    pplocal_var_38 = &plocal_var_70;
    (**(code **)(*plVar1 + 0x38))(plVar1,&pplocal_var_98,&plocal_var_70,0);
    ppuVar3 = pplocal_var_90;
    ppuVar4 = pplocal_var_98;
    if (pplocal_var_98 != (void **)0x0) {
      for (; pplocal_var_80 = ppuVar4, ppuVar4 != ppuVar3; ppuVar4 = ppuVar4 + 5) {
        SystemResourceAllocator(ppuVar4);
      }
      uVar5 = (((int64_t)pplocal_var_88 - (int64_t)pplocal_var_98) / 0x28) * 0x28;
      ppuVar4 = pplocal_var_98;
      if (0xfff < uVar5) {
        uVar5 = uVar5 + 0x27;
        ppuVar4 = (void **)pplocal_var_98[-1];
        if (0x1f < (uint64_t)((int64_t)pplocal_var_98 + (-8 - (int64_t)ppuVar4))) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(ppuVar4,uVar5);
      pplocal_var_98 = (void **)0x0;
      pplocal_var_90 = (void **)0x0;
      pplocal_var_88 = (void **)0x0;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_186eb0(void)
void function_186eb0(void)
{
  int64_t lVar1;
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3,0xfffffffffffffffe);
// WARNING: Subroutine does not return
  memset(lVar1 + 0x14,0,0x74);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1871f0(uint64_t param_1,uint64_t *param_2)
void function_1871f0(uint64_t param_1,uint64_t *param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  byte *pbVar7;
  int iVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  lVar6 = core_system_data_memory;
  puVar9 = *(uint64_t **)(core_system_data_memory + 0x18);
  if (puVar9 != *(uint64_t **)(core_system_data_memory + 0x20)) {
    iVar2 = *(int *)(param_2 + 2);
    do {
      puVar4 = (uint64_t *)*puVar9;
      iVar3 = *(int *)(puVar4 + 2);
      iVar8 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar7 = (byte *)puVar4[1];
          lVar10 = param_2[1] - (int64_t)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar10;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18018728e:
        if (iVar8 == 0) {
          if (puVar4 != (uint64_t *)0x0) {
            if (puVar4[0xd] != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puVar4[4] = &system_data_buffer_ptr;
            if (puVar4[5] == 0) {
              puVar4[5] = 0;
              *(int32_t *)(puVar4 + 7) = 0;
              puVar4[4] = &system_state_ptr;
              *puVar4 = &system_data_buffer_ptr;
              if (puVar4[1] == 0) {
                puVar4[1] = 0;
                *(int32_t *)(puVar4 + 3) = 0;
                *puVar4 = &system_state_ptr;
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puVar4);
              }
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *puVar9 = 0;
          puVar4 = puVar9 + 1;
          puVar5 = *(uint64_t **)(lVar6 + 0x20);
          if (puVar4 < puVar5) {
// WARNING: Subroutine does not return
            memmove(puVar9,puVar4,(int64_t)puVar5 - (int64_t)puVar4,iVar2,0xfffffffffffffffe);
          }
          *(uint64_t **)(lVar6 + 0x20) = puVar5 + -1;
          break;
        }
      }
      else if (iVar3 == 0) goto LAB_18018728e;
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(uint64_t **)(core_system_data_memory + 0x20));
  }
  function_187390(lVar6,&rendering_buffer_276_ptr);
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_187390(void **param_1,int64_t param_2)
void function_187390(void **param_1,int64_t param_2)
{
  uint64_t uVar1;
  int8_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t **ppuVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int8_t stack_array_148 [32];
  uint64_t local_var_128;
  uint64_t **pplocal_var_118;
  uint64_t **pplocal_var_110;
  uint64_t local_var_108;
  uint64_t *plocal_var_100;
  void **pplocal_var_f8;
  int8_t *plocal_var_f0;
  int64_t lStack_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  void **pplocal_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int8_t local_var_b8;
  uint64_t local_var_b4;
  uint64_t *plocal_var_a8;
  void **pplocal_var_a0;
  int8_t local_var_98;
  uint8_t local_var_97;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int8_t stack_array_60 [16];
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  puVar9 = (uint64_t *)*param_1;
  pplocal_var_f8 = param_1;
  lStack_e8 = param_2;
  if ((puVar9 != (uint64_t *)0x0) &&
     (((int64_t)param_1[4] - (int64_t)param_1[3] & 0xfffffffffffffff8U) != 0)) {
    puVar4 = (uint64_t *)SystemRenderer(0x10);
    *puVar4 = &processed_var_872_ptr;
    *puVar4 = &processed_var_952_ptr;
    uVar5 = 0;
    plocal_var_100 = puVar4;
    if (puVar9 != (uint64_t *)0x0) {
      if ((void *)*puVar9 == &ui_system_data_1032_ptr) {
        uVar5 = puVar9[1];
      }
      else {
        uVar5 = (**(code **)((void *)*puVar9 + 0x20))(puVar9);
      }
    }
    puVar4[1] = uVar5;
    puVar9 = (uint64_t *)param_1[1];
    param_1[1] = (void *)puVar4;
    if (puVar9 != (uint64_t *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    local_var_50 = 0;
    local_var_48 = 0xf;
    stack_array_60[0] = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(param_2 + lVar11) != '\0');
    MathCoreCalculator0(stack_array_60,param_2);
    for (ppuVar10 = (uint64_t **)param_1[3]; pplocal_var_110 = ppuVar10,
        ppuVar10 != (uint64_t **)param_1[4]; ppuVar10 = (uint64_t **)((int64_t *)ppuVar10 + 1))
    {
      local_var_c8 = 0;
      local_var_c0 = 0xf;
      plocal_var_d8 = (void *)((uint64_t)plocal_var_d8 & 0xffffffffffffff00);
      local_var_b8 = 1;
      local_var_b4 = 0;
      pplocal_var_118 = &plocal_var_a8;
      plocal_var_a8 = (uint64_t *)0x0;
      pplocal_var_a0 = (void **)0x0;
      plocal_var_a8 = (uint64_t *)function_188490();
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(*(int64_t *)((int64_t)*ppuVar10 + 0x40) + lVar11) != '\0');
      MathCoreCalculator0(&plocal_var_d8);
      lVar11 = (int64_t)*ppuVar10;
      local_var_b8 = *(int8_t *)(lVar11 + 0x48);
      local_var_b4 = *(uint64_t *)(lVar11 + 0x4c);
      local_var_108 = 0;
      if (*(int64_t *)(lVar11 + 0x60) != 0) {
        pplocal_var_118 = (uint64_t **)0x0;
        do {
          lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x58) + 8 + (int64_t)pplocal_var_118);
          local_var_88 = 0;
          local_var_80 = 0xf;
          local_var_98 = 0;
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(param_2 + lVar12) != '\0');
          MathCoreCalculator0(&local_var_98,param_2);
          uVar14 = local_var_80;
          uVar8 = local_var_88;
          puVar9 = plocal_var_a8;
          if (*(char *)((int64_t)plocal_var_a8[1] + 0x19) == '\0') {
            puVar2 = (int8_t *)CONCAT71(local_var_97,local_var_98);
            puVar4 = (uint64_t *)plocal_var_a8[1];
            do {
              puVar6 = puVar4 + 4;
              puVar7 = &local_var_98;
              if (0xf < uVar14) {
                puVar7 = puVar2;
              }
              uVar1 = puVar4[6];
              if (0xf < (uint64_t)puVar4[7]) {
                puVar6 = (uint64_t *)*puVar6;
              }
              uVar13 = uVar1;
              if (uVar8 < uVar1) {
                uVar13 = uVar8;
              }
              iVar3 = memcmp(puVar6,puVar7,uVar13);
              if (iVar3 == 0) {
                if (uVar1 < uVar8) goto LAB_180187642;
LAB_1801875f6:
                puVar6 = (uint64_t *)*puVar4;
                puVar9 = puVar4;
              }
              else {
                if (-1 < iVar3) goto LAB_1801875f6;
LAB_180187642:
                puVar6 = (uint64_t *)puVar4[2];
              }
              puVar4 = puVar6;
            } while (*(char *)((int64_t)puVar6 + 0x19) == '\0');
            if (puVar9 == plocal_var_a8) goto LAB_18018764a;
            puVar4 = puVar9 + 4;
            uVar1 = puVar9[6];
            if (0xf < (uint64_t)puVar9[7]) {
              puVar4 = (uint64_t *)*puVar4;
            }
            puVar7 = &local_var_98;
            if (0xf < uVar14) {
              puVar7 = puVar2;
            }
            uVar14 = uVar8;
            if (uVar1 < uVar8) {
              uVar14 = uVar1;
            }
            iVar3 = memcmp(puVar7,puVar4,uVar14);
            if (iVar3 == 0) {
              if (uVar8 < uVar1) goto LAB_18018764a;
            }
            else if (iVar3 < 0) goto LAB_18018764a;
          }
          else {
LAB_18018764a:
            plocal_var_f0 = &local_var_98;
            local_var_128 = function_18a130(&plocal_var_a8);
            function_18a1c0(&plocal_var_a8,&plocal_var_100,puVar9);
            puVar9 = plocal_var_100;
          }
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(lVar12 + lVar11) != '\0');
          MathCoreCalculator0(puVar9 + 8,lVar11);
          if (0xf < local_var_80) {
            if (0xfff < local_var_80 + 1) {
              lVar11 = *(int64_t *)(CONCAT71(local_var_97,local_var_98) + -8);
              if (0x1f < (CONCAT71(local_var_97,local_var_98) - lVar11) - 8U) {
// WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn(lVar11,local_var_80 + 0x28);
              }
            }
            free();
          }
          local_var_88 = 0;
          local_var_80 = 0xf;
          local_var_98 = 0;
          local_var_108 = local_var_108 + 1;
          pplocal_var_118 = pplocal_var_118 + 2;
          lVar11 = (int64_t)*pplocal_var_110;
          param_2 = lStack_e8;
          ppuVar10 = pplocal_var_110;
          param_1 = pplocal_var_f8;
        } while (local_var_108 < *(uint64_t *)(lVar11 + 0x60));
      }
      if (lStack_68 == lStack_70) {
        function_1891f0(&lStack_78,lStack_70,&plocal_var_d8);
      }
      else {
        function_189190();
        lStack_70 = lStack_70 + 0x40;
      }
      puVar9 = plocal_var_a8;
      pplocal_var_110 = &plocal_var_a8;
      function_1884d0(&plocal_var_a8,plocal_var_a8[1]);
      plocal_var_a8[1] = puVar9;
      *plocal_var_a8 = puVar9;
      plocal_var_a8[2] = puVar9;
      pplocal_var_a0 = (void **)0x0;
      free(plocal_var_a8,0x60);
      SystemResourceAllocator(&plocal_var_d8);
    }
    pplocal_var_f8 = &plocal_var_d8;
    plocal_var_d8 = &processed_var_536_ptr;
    pplocal_var_a0 = &plocal_var_d8;
    pplocal_var_d0 = param_1;
    (**(code **)(*(int64_t *)param_1[1] + 8))(param_1[1],&lStack_78,&plocal_var_d8,0);
    SystemResourceAllocator(stack_array_60);
    lVar12 = lStack_70;
    lVar11 = lStack_78;
    if (lStack_78 != 0) {
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x40) {
        function_187950(lVar11);
      }
      uVar8 = lStack_68 - lStack_78 & 0xffffffffffffffc0;
      lVar11 = lStack_78;
      if (0xfff < uVar8) {
        uVar8 = uVar8 + 0x27;
        lVar11 = *(int64_t *)(lStack_78 + -8);
        if (0x1f < (lStack_78 - lVar11) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar8);
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_68 = 0;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_148);
}
// 函数: void function_1878a0(int64_t *param_1)
void function_1878a0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  SystemResourceAllocator(param_1 + 3);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        function_187950(lVar1);
        lVar1 = lVar1 + 0x40;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffc0U)) &&
       (lVar2 = *(int64_t *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
// WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
// 函数: void function_187950(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_187950(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  plVar1 = (int64_t *)(param_1 + 0x30);
  lVar2 = *plVar1;
  function_1884d0(plVar1,*(uint64_t *)(lVar2 + 8),param_3,param_4,0xfffffffffffffffe);
  *(int64_t *)(*plVar1 + 8) = lVar2;
  *(int64_t *)*plVar1 = lVar2;
  *(int64_t *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x38) = 0;
  free(*plVar1,0x60);
  SystemResourceAllocator(param_1);
  return;
}
// 函数: void function_1879d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1879d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  param_1 = (int64_t *)*param_1;
  if (param_1 != (int64_t *)0x0) {
    plVar1 = (int64_t *)param_1[7];
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
      param_1[7] = 0;
    }
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
    free(param_1,0x48);
    return;
  }
  return;
}
// 函数: void function_187a30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_187a30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
// 函数: void function_187aa0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_187aa0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  if (*param_1 != 0) {
    function_189900(*param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
// 函数: void function_187b40(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_187b40(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x28) * 0x28;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}