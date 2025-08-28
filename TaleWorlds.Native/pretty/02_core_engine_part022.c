#include "ultra_high_freq_fun_definitions.h"
/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part022.c - 4 个函数
// 函数: void function_064c00(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_064c00(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  void *puVar6;
  uint *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int8_t stack_array_138 [32];
  int64_t lStack_118;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  uint64_t *plocal_var_e0;
  uint64_t local_var_d8;
  uint64_t *plocal_var_d0;
  int8_t local_var_c8;
  uint8_t local_var_c7;
  uint64_t *plocal_var_b8;
  uint64_t local_var_b0;
  uint local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int8_t local_var_88;
  uint8_t local_var_87;
  int64_t lStack_78;
  uint64_t local_var_70;
  uint local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  local_var_e8 = 0;
  SystemCore_ConfigValidator();
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  plocal_var_b8 = (uint64_t *)0x0;
  local_var_b0 = 0xf;
  local_var_c8 = 0;
  lVar10 = -1;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (puVar6[lVar12] != '\0');
  MathCoreCalculator0(&local_var_c8);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_3 + 8);
  }
  lStack_78 = 0;
  local_var_70 = 0xf;
  local_var_88 = 0;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar6[lVar10] != '\0');
  MathCoreCalculator0(&local_var_88,puVar6,lVar10);
  lVar12 = lStack_78;
  uVar1 = local_var_a8;
  local_var_98 = 0;
  local_var_90 = 0xf;
  local_var_a8 = local_var_a8 & 0xffffff00;
  lVar10 = CONCAT71(local_var_87,local_var_88);
  uVar9 = CONCAT44(local_var_a4,uVar1) & 0xffffffffffffff00;
  puVar5 = &local_var_c8;
  if (0xf < local_var_b0) {
    puVar5 = (int8_t *)CONCAT71(local_var_c7,local_var_c8);
  }
  lStack_118 = lStack_78;
  puVar3 = (uint64_t *)function_066f90(puVar5,plocal_var_b8);
  plocal_var_e0 = puVar3;
  if (puVar3 == (uint64_t *)0xffffffffffffffff) {
    if (0xf < local_var_90) {
      uVar8 = local_var_90 + 1;
      uVar13 = uVar9;
      if (0xfff < uVar8) {
        uVar8 = local_var_90 + 0x28;
        uVar13 = *(uint64_t *)(uVar9 - 8);
        if (0x1f < (uVar9 - uVar13) - 8) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(uVar13,uVar8);
    }
    local_var_98 = 0;
    local_var_90 = 0xf;
    local_var_a8 = local_var_a8 & 0xffffff00;
    if (0xf < local_var_70) {
      uVar9 = local_var_70 + 1;
      lVar12 = lVar10;
      if (0xfff < uVar9) {
        uVar9 = local_var_70 + 0x28;
        lVar12 = *(int64_t *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar12) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar12,uVar9);
    }
    lStack_78 = 0;
    local_var_70 = 0xf;
    local_var_88 = 0;
    if (0xf < local_var_b0) {
      uVar9 = local_var_b0 + 1;
      lVar12 = CONCAT71(local_var_c7,local_var_c8);
      lVar10 = lVar12;
      if (0xfff < uVar9) {
        uVar9 = local_var_b0 + 0x28;
        lVar10 = *(int64_t *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar10) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar10,uVar9);
    }
    plocal_var_b8 = (uint64_t *)0x0;
    local_var_b0 = 0xf;
    local_var_c8 = 0;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_138);
  }
  local_var_58 = 0;
  local_var_50 = 0xf;
  local_var_68 = local_var_68 & 0xffffff00;
  puVar4 = puVar3;
  if (plocal_var_b8 < puVar3) {
    puVar4 = plocal_var_b8;
  }
  puVar5 = &local_var_c8;
  if (0xf < local_var_b0) {
    puVar5 = (int8_t *)CONCAT71(local_var_c7,local_var_c8);
  }
  MathCoreCalculator0(&local_var_68,puVar5,puVar4);
  local_var_e8 = 1;
  SystemResourceAllocator(&local_var_a8);
  uVar9 = local_var_58;
  uVar1 = local_var_68;
  local_var_a8 = local_var_68;
  local_var_a4 = local_var_64;
  local_var_a0 = local_var_60;
  local_var_9c = local_var_5c;
  local_var_90 = local_var_50;
  local_var_e8 = 0;
  local_var_58 = 0;
  local_var_50 = 0xf;
  local_var_68 = local_var_68 & 0xffffff00;
  local_var_98 = uVar9;
  if (uVar9 == 0) goto LAB_180065009;
  lVar10 = 0;
  plocal_var_108 = &system_data_buffer_ptr;
  local_var_f0 = 0;
  plocal_var_100 = (int8_t *)0x0;
  local_var_f8 = 0;
  local_var_98._0_4_ = (int)uVar9;
  iVar2 = (int)local_var_98;
  local_var_98 = uVar9;
  CoreEngineDataBufferProcessor(&plocal_var_108,uVar9 & 0xffffffff);
  if (iVar2 != 0) {
    puVar7 = &local_var_a8;
    if (0xf < local_var_90) {
      puVar7 = (uint *)CONCAT44(local_var_64,uVar1);
    }
// WARNING: Subroutine does not return
    memcpy(plocal_var_100,puVar7,uVar9 & 0xffffffff);
  }
  local_var_f8 = 0;
  if (plocal_var_100 != (int8_t *)0x0) {
    *plocal_var_100 = 0;
  }
  puVar4 = (uint64_t *)param_1[1];
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 4);
    *puVar4 = &system_state_ptr;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *puVar4 = &system_data_buffer_ptr;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    puVar4[1] = plocal_var_100;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = local_var_f0._4_4_;
    *(int32_t *)(puVar4 + 3) = (int32_t)local_var_f0;
    local_var_f8 = 0;
    plocal_var_100 = (int8_t *)0x0;
    local_var_f0 = 0;
    plocal_var_e0 = puVar4;
  }
  else {
    lVar12 = *param_1;
    lVar11 = (int64_t)puVar4 - lVar12 >> 5;
    if (lVar11 == 0) {
      lVar11 = 1;
LAB_180064eed:
      lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 << 5,(char)param_1[3]);
      puVar4 = (uint64_t *)param_1[1];
      lVar12 = *param_1;
    }
    else {
      lVar11 = lVar11 * 2;
      if (lVar11 != 0) goto LAB_180064eed;
    }
    plocal_var_d0 = (uint64_t *)SystemCore_Initializer(lVar12,puVar4,lVar10);
    *plocal_var_d0 = &system_state_ptr;
    plocal_var_d0[1] = 0;
    *(int32_t *)(plocal_var_d0 + 2) = 0;
    *plocal_var_d0 = &system_data_buffer_ptr;
    plocal_var_d0[3] = 0;
    plocal_var_d0[1] = 0;
    *(int32_t *)(plocal_var_d0 + 2) = 0;
    *(int32_t *)(plocal_var_d0 + 2) = local_var_f8;
    plocal_var_d0[1] = plocal_var_100;
    *(int32_t *)((int64_t)plocal_var_d0 + 0x1c) = local_var_f0._4_4_;
    *(int32_t *)(plocal_var_d0 + 3) = (int32_t)local_var_f0;
    local_var_f8 = 0;
    plocal_var_100 = (int8_t *)0x0;
    local_var_f0 = 0;
    puVar14 = plocal_var_d0 + 4;
    puVar3 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar3) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar3);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar4);
    }
    *param_1 = lVar10;
    param_1[1] = (int64_t)puVar14;
    param_1[2] = lVar11 * 0x20 + lVar10;
    lVar12 = lStack_78;
    puVar3 = plocal_var_e0;
  }
  plocal_var_108 = &system_data_buffer_ptr;
  if (plocal_var_100 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_100 = (int8_t *)0x0;
  local_var_f0 = local_var_f0 & 0xffffffff00000000;
  plocal_var_108 = &system_state_ptr;
LAB_180065009:
  puVar4 = (uint64_t *)(lVar12 + (int64_t)puVar3);
  if (plocal_var_b8 < (uint64_t *)(lVar12 + (int64_t)puVar3)) {
    puVar4 = plocal_var_b8;
  }
  puVar5 = &local_var_c8;
  if (0xf < local_var_b0) {
    puVar5 = (int8_t *)CONCAT71(local_var_c7,local_var_c8);
  }
  plocal_var_b8 = (uint64_t *)((int64_t)plocal_var_b8 - (int64_t)puVar4);
// WARNING: Subroutine does not return
  memmove(puVar5,puVar5 + (int64_t)puVar4,(int64_t)plocal_var_b8 + 1);
}
// WARNING: Removing unreachable block (ram,0x0001800654e7)
// WARNING: Removing unreachable block (ram,0x0001800654f0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_065160(uint64_t param_1)
void function_065160(uint64_t param_1)
{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte *pbVar13;
  int64_t lVar14;
  int iVar15;
  void *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t uVar20;
  int8_t stack_array_368 [32];
  void *plocal_var_348;
  int16_t stack_array_338 [2];
  int16_t stack_array_334 [2];
  void *plocal_var_330;
  int64_t lStack_328;
  int iStack_320;
  uint64_t local_var_318;
  int32_t local_var_310;
  void *plocal_var_308;
  void *plocal_var_300;
  int32_t local_var_2f8;
  uint64_t local_var_2f0;
  void *plocal_var_2e8;
  void *plocal_var_2e0;
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  void *plocal_var_2c0;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  uint64_t local_var_2a8;
  void *plocal_var_2a0;
  char *pcStack_298;
  int iStack_290;
  int32_t local_var_288;
  uint64_t local_var_280;
  int64_t lStack_278;
  int64_t lStack_268;
  uint64_t *plocal_var_260;
  uint64_t *plocal_var_258;
  uint64_t local_var_250;
  int32_t local_var_248;
  void *plocal_var_240;
  int64_t lStack_238;
  int32_t local_var_228;
  uint64_t *plocal_var_220;
  uint64_t *plocal_var_218;
  uint64_t local_var_210;
  int32_t local_var_208;
  void *plocal_var_200;
  void *plocal_var_1f8;
  int32_t local_var_1e8;
  void *plocal_var_1e0;
  void *plocal_var_1d8;
  int32_t local_var_1c8;
  void *plocal_var_1c0;
  void *plocal_var_1b8;
  int32_t local_var_1a8;
  void *plocal_var_1a0;
  void *plocal_var_198;
  int32_t local_var_188;
  void *plocal_var_180;
  void *plocal_var_178;
  int32_t local_var_168;
  uint64_t *plocal_var_160;
  uint64_t *plocal_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint64_t *plocal_var_140;
  uint64_t *plocal_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [16];
  void *plocal_var_f0;
  int8_t *plocal_var_e8;
  int32_t local_var_e0;
  int8_t stack_array_d8 [16];
  void *plocal_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  uint8_t stack_array_b0 [40];
  int32_t stack_array_88 [14];
  uint64_t local_var_50;
  uint64_t local_var_38;
  local_var_120 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_368;
  local_var_310 = 0;
  UtilitiesSystem_CacheManager(param_1,&plocal_var_180,&processed_var_816_ptr);
  local_var_280 = 0;
  lStack_278 = 0;
  puVar16 = &system_buffer_ptr;
  if (plocal_var_178 != (void *)0x0) {
    puVar16 = plocal_var_178;
  }
  uVar20 = SystemCore_Validator(&local_var_280,puVar16,&processed_var_572_ptr);
  plocal_var_330 = &system_data_buffer_ptr;
  local_var_318 = 0;
  lStack_328 = 0;
  iStack_320 = 0;
  function_052020(uVar20,&plocal_var_200);
  if ((system_cache_buffer == (int64_t *)0x0) ||
     (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
    puVar16 = &processed_var_832_ptr;
  }
  else {
    lVar9 = (**(code **)(core_system_data_memory + 0x30))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  CoreMemoryPoolValidator(&plocal_var_1c0,puVar16);
  if ((system_cache_buffer == (int64_t *)0x0) ||
     (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
    puVar16 = &processed_var_856_ptr;
  }
  else {
    lVar9 = (**(code **)(core_system_data_memory + 0x20))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  CoreMemoryPoolValidator(&plocal_var_1e0,puVar16);
  plocal_var_c8 = &processed_var_672_ptr;
  plocal_var_c0 = stack_array_b0;
  local_var_b8 = 0;
  stack_array_b0[0] = 0;
  local_var_310 = 4;
  function_04b860(&plocal_var_c8,&processed_var_4576_ptr,0x130a7);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_c0 != (void *)0x0) {
    plocal_var_348 = plocal_var_c0;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&ui_system_data_160_ptr);
  local_var_310 = 0;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_348 = &ui_system_data_184_ptr;
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&ui_system_data_192_ptr);
  plocal_var_348 = &system_memory_ba28;
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&processed_var_96_ptr);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_1b8 != (void *)0x0) {
    plocal_var_348 = plocal_var_1b8;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&ui_system_data_144_ptr);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_1d8 != (void *)0x0) {
    plocal_var_348 = plocal_var_1d8;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&ui_system_data_128_ptr);
  plocal_var_1e0 = &system_data_buffer_ptr;
  if (plocal_var_1d8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_1d8 = (void *)0x0;
  local_var_1c8 = 0;
  plocal_var_1e0 = &system_state_ptr;
  plocal_var_1c0 = &system_data_buffer_ptr;
  if (plocal_var_1b8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_1b8 = (void *)0x0;
  local_var_1a8 = 0;
  plocal_var_1c0 = &system_state_ptr;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  local_var_2b8 = 0;
  local_var_2b0 = 0;
  plocal_var_2e8 = &system_data_buffer_ptr;
  local_var_2d0 = 0;
  plocal_var_2e0 = (void *)0x0;
  local_var_2d8 = 0;
  plocal_var_308 = &system_data_buffer_ptr;
  local_var_2f0 = 0;
  plocal_var_300 = (void *)0x0;
  local_var_2f8 = 0;
  uVar10 = function_623ce0();
  System_DataHandler(&plocal_var_2e8,&processed_var_808_ptr,uVar10 / 0x100000 & 0xffffffff);
  stack_array_88[0] = 0x48;
  uVar11 = GetCurrentProcess();
  iVar8 = K32GetProcessMemoryInfo(uVar11,stack_array_88,0x48);
  uVar10 = 0;
  if (iVar8 != 0) {
    uVar10 = local_var_50;
  }
  System_DataHandler(&plocal_var_308,&processed_var_808_ptr,uVar10 / 0x100000 & 0xffffffff);
  plocal_var_348 = &system_buffer_ptr;
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&processed_var_896_ptr);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_2e0 != (void *)0x0) {
    plocal_var_348 = plocal_var_2e0;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&processed_var_920_ptr);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_300 != (void *)0x0) {
    plocal_var_348 = plocal_var_300;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&processed_var_936_ptr);
  lVar9 = system_main_module_state;
  plocal_var_308 = &system_data_buffer_ptr;
  if (plocal_var_300 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_300 = (void *)0x0;
  local_var_2f0 = local_var_2f0 & 0xffffffff00000000;
  plocal_var_308 = &system_state_ptr;
  plocal_var_2e8 = &system_data_buffer_ptr;
  if (plocal_var_2e0 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2e0 = (void *)0x0;
  local_var_2d0 = local_var_2d0 & 0xffffffff00000000;
  plocal_var_2e8 = &system_state_ptr;
  local_var_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  lVar14 = core_system_data_memory;
  if (core_system_data_memory == 0) {
    QueryPerformanceCounter(&lStack_268);
    lVar14 = lStack_268;
  }
  plocal_var_348 = (void *)
                ((double)(lVar14 - core_system_data_memory) * core_system_data_memory - *(double *)(lVar9 + 0x210));
  System_DataHandler(&plocal_var_330,&processed_var_968_ptr,&processed_var_48_ptr,&processed_var_952_ptr);
  plocal_var_348 = &system_buffer_ptr;
  if (plocal_var_1f8 != (void *)0x0) {
    plocal_var_348 = plocal_var_1f8;
  }
  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&processed_var_48_ptr,&ui_system_data_112_ptr);
  plocal_var_220 = (uint64_t *)0x0;
  plocal_var_218 = (uint64_t *)0x0;
  local_var_210 = 0;
  local_var_208 = 3;
  plocal_var_160 = (uint64_t *)0x0;
  plocal_var_158 = (uint64_t *)0x0;
  local_var_150 = 0;
  local_var_148 = 3;
  plocal_var_f0 = &system_config_ptr;
  plocal_var_e8 = stack_array_d8;
  stack_array_d8[0] = 0;
  local_var_e0 = 9;
  strcpy_s(stack_array_d8,0x10,&processed_var_984_ptr);
  function_064c00(&plocal_var_160,&plocal_var_200,&plocal_var_f0);
  puVar18 = plocal_var_158;
  puVar19 = plocal_var_160;
  if (1 < (uint64_t)((int64_t)plocal_var_158 - (int64_t)plocal_var_160 >> 5)) {
    plocal_var_118 = &system_config_ptr;
    plocal_var_110 = stack_array_100;
    stack_array_100[0] = 0;
    local_var_108 = 1;
    strcpy_s(stack_array_100,0x10,&system_memory_df28);
    function_064c00(&plocal_var_220,puVar19 + 4,&plocal_var_118);
    plocal_var_118 = &system_state_ptr;
  }
  plocal_var_f0 = &system_state_ptr;
  puVar4 = plocal_var_220;
  for (puVar17 = puVar19; plocal_var_220 = puVar4, puVar17 != puVar18; puVar17 = puVar17 + 4) {
    (**(code **)*puVar17)(puVar17,0);
    puVar4 = plocal_var_220;
  }
  if (puVar19 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar19);
  }
  uVar10 = (int64_t)plocal_var_218 - (int64_t)puVar4 >> 5;
  if (uVar10 != 0) {
    if ((system_cache_buffer == (int64_t *)0x0) ||
       (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
      puVar16 = &ui_system_data_1000_ptr;
    }
    else {
      lVar9 = (**(code **)(core_system_data_memory + 0x28))();
      puVar16 = &system_buffer_ptr;
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        puVar16 = *(void **)(lVar9 + 8);
      }
    }
    CoreMemoryPoolValidator(&plocal_var_240,puVar16);
    plocal_var_260 = (uint64_t *)0x0;
    plocal_var_258 = (uint64_t *)0x0;
    local_var_250 = 0;
    local_var_248 = 3;
    stack_array_338[0] = 10;
    if (lStack_238 != 0) {
      CoreSystem_DataCollector(&plocal_var_240,&plocal_var_260,stack_array_338);
    }
    uVar12 = (int64_t)plocal_var_258 - (int64_t)plocal_var_260 >> 5;
    puVar19 = plocal_var_260;
    puVar18 = plocal_var_260;
    puVar17 = plocal_var_258;
    if ((int)uVar12 != 0) {
      local_var_2c8 = uVar12 & 0xffffffff;
      do {
        plocal_var_140 = (uint64_t *)0x0;
        plocal_var_138 = (uint64_t *)0x0;
        local_var_130 = 0;
        local_var_128 = 3;
        stack_array_334[0] = 0x23;
        if (puVar19[1] != 0) {
          CoreSystem_DataCollector(puVar19,&plocal_var_140,stack_array_334);
        }
        puVar5 = plocal_var_138;
        puVar17 = plocal_var_140;
        puVar18 = plocal_var_140;
        if (((int64_t)plocal_var_138 - (int64_t)plocal_var_140 & 0xffffffffffffffe0U) == 0x40) {
          CoreEngineDataTransformer(&plocal_var_2a0,plocal_var_140);
          if (pcStack_298 != (char *)0x0) {
            iStack_290 = 0;
            lVar14 = 0;
            lVar9 = 0;
            cVar7 = *pcStack_298;
            while (cVar7 != '\0') {
              if (' ' < pcStack_298[lVar9]) {
                if (lVar14 != lVar9) {
                  pcStack_298[lVar14] = pcStack_298[lVar9];
                }
                iStack_290 = iStack_290 + 1;
                lVar14 = lVar14 + 1;
              }
              lVar9 = lVar9 + 1;
              cVar7 = pcStack_298[lVar9];
            }
            pcStack_298[lVar14] = '\0';
          }
          iVar8 = 0;
          if (uVar10 != 0) {
            puVar18 = puVar4 + 1;
            do {
              iVar2 = *(int *)(puVar18 + 1);
              iVar15 = iStack_290;
              if (iVar2 == iStack_290) {
                if (iVar2 != 0) {
                  pbVar13 = (byte *)*puVar18;
                  lVar9 = (int64_t)pcStack_298 - (int64_t)pbVar13;
                  do {
                    pbVar1 = pbVar13 + lVar9;
                    iVar15 = (uint)*pbVar13 - (uint)*pbVar1;
                    if (iVar15 != 0) break;
                    pbVar13 = pbVar13 + 1;
                  } while (*pbVar1 != 0);
                }
LAB_180065a3e:
                if (iVar15 == 0) {
                  plocal_var_348 = &system_buffer_ptr;
                  if ((void *)puVar17[5] != (void *)0x0) {
                    plocal_var_348 = (void *)puVar17[5];
                  }
                  puVar16 = &system_buffer_ptr;
                  if ((void *)puVar17[1] != (void *)0x0) {
                    puVar16 = (void *)puVar17[1];
                  }
                  System_DataHandler(&plocal_var_330,&processed_var_880_ptr,&ui_system_data_1016_ptr,puVar16);
                  break;
                }
              }
              else if (iVar2 == 0) goto LAB_180065a3e;
              iVar8 = iVar8 + 1;
              puVar18 = puVar18 + 4;
            } while ((uint64_t)(int64_t)iVar8 < uVar10);
          }
          plocal_var_2a0 = &system_data_buffer_ptr;
          if (pcStack_298 != (char *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pcStack_298 = (char *)0x0;
          local_var_288 = 0;
          plocal_var_2a0 = &system_state_ptr;
          for (puVar18 = puVar17; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        else {
          for (; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        if (puVar17 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar17);
        }
        puVar19 = puVar19 + 4;
        local_var_2c8 = local_var_2c8 - 1;
      } while (local_var_2c8 != 0);
      local_var_2c8 = 0;
      puVar19 = plocal_var_260;
      puVar18 = plocal_var_260;
      puVar17 = plocal_var_258;
    }
    for (; puVar6 = plocal_var_258, puVar5 = plocal_var_260, puVar19 != plocal_var_258; puVar19 = puVar19 + 4
        ) {
      plocal_var_260 = puVar18;
      plocal_var_258 = puVar17;
      (**(code **)*puVar19)(puVar19,0);
      puVar18 = plocal_var_260;
      puVar17 = plocal_var_258;
      plocal_var_258 = puVar6;
      plocal_var_260 = puVar5;
    }
    if (plocal_var_260 != (uint64_t *)0x0) {
      plocal_var_260 = puVar18;
      plocal_var_258 = puVar17;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    plocal_var_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
      plocal_var_260 = puVar18;
      plocal_var_258 = puVar17;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_238 = 0;
    local_var_228 = 0;
    plocal_var_240 = &system_state_ptr;
    plocal_var_260 = puVar18;
    plocal_var_258 = puVar17;
  }
  if ((core_system_data_memory == 0) || (*(int *)(system_main_module_state + 0x340) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((system_main_module_state != 0) && (*(int *)(system_main_module_state + 0x340) == 1)) && (bVar3)) {
    lVar9 = (**(code **)(core_system_data_memory + 0x18))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
    CoreMemoryPoolValidator(&plocal_var_1a0,puVar16);
    puVar16 = &system_buffer_ptr;
    if (plocal_var_198 != (void *)0x0) {
      puVar16 = plocal_var_198;
    }
    System_DataHandler(&plocal_var_330,&processed_var_552_ptr,puVar16);
    plocal_var_1a0 = &system_data_buffer_ptr;
    if (plocal_var_198 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_198 = (void *)0x0;
    local_var_188 = 0;
    plocal_var_1a0 = &system_state_ptr;
  }
  lVar9 = lStack_278;
  fwrite(lStack_328,1,(int64_t)iStack_320,lStack_278);
  puVar19 = plocal_var_218;
  puVar18 = puVar4;
  if (lVar9 != 0) {
    fclose(lVar9);
    lStack_278 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar9 = 0;
    puVar4 = plocal_var_220;
    puVar19 = plocal_var_218;
    puVar18 = plocal_var_220;
  }
  for (; puVar17 = plocal_var_218, puVar4 != plocal_var_218; puVar4 = puVar4 + 4) {
    plocal_var_218 = puVar19;
    (**(code **)*puVar4)(puVar4,0);
    puVar19 = plocal_var_218;
    plocal_var_218 = puVar17;
  }
  if (puVar18 != (uint64_t *)0x0) {
    plocal_var_218 = puVar19;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar18);
  }
  plocal_var_200 = &system_data_buffer_ptr;
  if (plocal_var_1f8 != (void *)0x0) {
    plocal_var_218 = puVar19;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_1f8 = (void *)0x0;
  local_var_1e8 = 0;
  plocal_var_200 = &system_state_ptr;
  plocal_var_330 = &system_data_buffer_ptr;
  if (lStack_328 == 0) {
    lStack_328 = 0;
    local_var_318 = local_var_318 & 0xffffffff00000000;
    plocal_var_330 = &system_state_ptr;
    plocal_var_218 = puVar19;
    if (lVar9 != 0) {
      fclose(lVar9);
      lStack_278 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    plocal_var_180 = &system_data_buffer_ptr;
    if (plocal_var_178 == (void *)0x0) {
      plocal_var_178 = (void *)0x0;
      local_var_168 = 0;
      plocal_var_180 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_368);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_218 = puVar19;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_065d50(void)
void function_065d50(void)
{
  int8_t stack_array_2c8 [104];
  uint64_t local_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  int32_t local_var_24c;
  int32_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  int32_t local_var_230;
  int8_t local_var_22c;
  int8_t stack_array_228 [512];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2c8;
  local_var_230 = 0x22657865;
  local_var_260 = 0x736172435c2e2e22;
  local_var_258 = 0x6564616f6c705568;
  local_var_22c = 0;
  local_var_240 = 0x616f6c70;
  local_var_23c = 0x2e726564;
  local_var_238 = 0x6c627550;
  local_var_234 = 0x2e687369;
  local_var_250 = 0x75502e72;
  local_var_24c = 0x73696c62;
  local_var_248 = 0x72435c68;
  local_var_244 = 0x55687361;
// WARNING: Subroutine does not return
  memset(stack_array_228,0,0x80);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_065f00(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_065f00(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plStack_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  uint local_var_98;
  void *plocal_var_88;
  int64_t lStack_80;
  int32_t local_var_70;
  void **pplocal_var_68;
  int64_t **pplStack_60;
  int32_t local_var_50;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  plStack_b0 = *(int64_t **)(core_system_data_memory + 0x18);
  CoreEngineDataTransformer(&plocal_var_a8,system_main_module_state + 0x170,param_3,param_4,0);
  iVar5 = local_var_98 + 3;
  CoreEngineDataBufferProcessor(&plocal_var_a8,iVar5);
  *(int32_t *)((uint64_t)local_var_98 + lStack_a0) = 0x706d74;
  local_var_98 = iVar5;
  cVar2 = UltraHighFreq_LogManager1(&plocal_var_a8);
  if (cVar2 == '\0') {
    SystemManager_Processor(&plocal_var_a8);
  }
  pplocal_var_68 = &plocal_var_a8;
  pplStack_60 = &plStack_b0;
  function_066140(&pplocal_var_68,SYSTEM_STATE_MANAGER,&system_memory_c7d8);
  function_066140(&pplocal_var_68,core_system_data_memory,&system_memory_cfc0);
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = CoreEngineDataTransformer(&pplocal_var_68,system_message_context + 0x28);
  (*pcVar1)(plStack_b0,uVar3);
  pplocal_var_68 = (void **)&system_data_buffer_ptr;
  if (pplStack_60 != (int64_t **)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pplStack_60 = (int64_t **)0x0;
  local_var_50 = 0;
  pplocal_var_68 = (void **)&system_state_ptr;
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = CoreEngineDataTransformer(&plocal_var_88,system_message_context + 0xe0);
  (*pcVar1)(plStack_b0,uVar3);
  plocal_var_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_80 = 0;
  local_var_70 = 0;
  plocal_var_88 = &system_state_ptr;
  if (param_2 == 0) {
    lVar4 = PerformanceOptimizer(system_context_ptr);
    (**(code **)(*plStack_b0 + 8))(plStack_b0,param_1,*(int32_t *)(lVar4 + 0x38));
  }
  else {
    pcVar1 = *(code **)(*plStack_b0 + 0x10);
    uVar3 = CoreMemoryPoolValidator(&plocal_var_88,param_2);
    (*pcVar1)(plStack_b0,param_1,uVar3);
    plocal_var_88 = &system_data_buffer_ptr;
    if (lStack_80 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_80 = 0;
    local_var_70 = 0;
    plocal_var_88 = &system_state_ptr;
  }
  function_62c470(&plocal_var_a8);
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address