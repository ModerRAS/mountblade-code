/* 原始函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_PointerManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
// 99_part_06_part069.c - 3 个函数
// 函数: void function_3e8ff0(int64_t *param_1)
void function_3e8ff0(int64_t *param_1)
{
  code *pcVar1;
  char cVar2;
  int16_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint64_t *****pppppuVar14;
  uint64_t uVar15;
  void *puVar16;
  uint64_t *puVar17;
  int8_t stack_array_3c8 [32];
  int64_t **pplStack_3a8;
  int32_t local_var_398;
  int64_t *plStack_390;
  int64_t **pplStack_388;
  int64_t lStack_380;
  void *plocal_var_378;
  int32_t *plocal_var_370;
  int32_t local_var_368;
  uint64_t local_var_360;
  uint *plocal_var_358;
  int64_t lStack_350;
  int64_t *plStack_348;
  int64_t lStack_340;
  void *plocal_var_338;
  void *plocal_var_330;
  int32_t local_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  uint64_t local_var_308;
  uint *plocal_var_300;
  int64_t lStack_2f8;
  uint64_t local_var_2f0;
  uint local_var_2e8;
  int32_t local_var_2e4;
  int32_t local_var_2e0;
  int32_t local_var_2dc;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  int64_t *plStack_2c8;
  uint64_t *plocal_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  int64_t lStack_288;
  int64_t lStack_280;
  uint64_t local_var_278;
  uint64_t local_var_270;
  uint64_t ****apppplocal_var_268 [2];
  uint64_t local_var_258;
  uint64_t local_var_250;
  int8_t stack_array_248 [16];
  uint64_t local_var_238;
  uint64_t local_var_230;
  int8_t stack_array_228 [16];
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t ****apppplocal_var_208 [2];
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  char acStack_1e8 [8];
  int64_t *plStack_1e0;
  uint64_t ****apppplocal_var_1d8 [3];
  uint64_t local_var_1c0;
  char acStack_1b8 [8];
  int64_t *plStack_1b0;
  uint64_t ****apppplocal_var_1a8 [3];
  uint64_t local_var_190;
  char acStack_188 [8];
  int64_t *plStack_180;
  uint64_t ****apppplocal_var_178 [3];
  uint64_t local_var_160;
  void *aplocal_var_158 [2];
  uint64_t local_var_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [16];
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t ***ppplocal_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [16];
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t ***ppplocal_var_d8;
  uint64_t ***ppplocal_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int8_t stack_array_b8 [128];
  uint64_t local_var_38;
  local_var_2f0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3c8;
  local_var_398 = 0;
  plVar8 = param_1 + 0x88;
  plVar12 = plVar8;
  if (0xf < (uint64_t)param_1[0x8b]) {
    plVar12 = (int64_t *)*plVar8;
  }
  uVar7 = CoreMemoryPoolValidator(&plStack_2c8,plVar12);
  cVar2 = UltraHighFreq_LogManager1(uVar7);
  plStack_2c8 = (int64_t *)&system_data_buffer_ptr;
  if (plocal_var_2c0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2c0 = (uint64_t *)0x0;
  local_var_2b0 = (uint64_t)local_var_2b0._4_4_ << 0x20;
  plStack_2c8 = (int64_t *)&system_state_ptr;
  if (cVar2 != '\0') {
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9688_ptr);
  }
  if (0xf < (uint64_t)param_1[0x8b]) {
    plVar8 = (int64_t *)*plVar8;
  }
  uVar7 = CoreMemoryPoolValidator(&plStack_2c8,plVar8);
  cVar2 = UltraHighFreq_LogManager1(uVar7);
  if (cVar2 == '\0') {
    SystemManager_Processor(uVar7);
  }
  plStack_2c8 = (int64_t *)&system_data_buffer_ptr;
  if (plocal_var_2c0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2c0 = (uint64_t *)0x0;
  local_var_2b0 = local_var_2b0 & 0xffffffff00000000;
  plStack_2c8 = (int64_t *)&system_state_ptr;
  uVar4 = GetCurrentProcessId();
  function_3f5570(apppplocal_var_268,uVar4);
  local_var_278 = 0;
  local_var_270 = 0xf;
  lStack_288._0_1_ = 0;
  local_var_398 = 4;
  function_3f45e0(&lStack_288,local_var_258 + 7);
  function_3f5400(&lStack_288,&processed_var_9728_ptr,7);
  pppppuVar14 = apppplocal_var_268;
  if (0xf < local_var_250) {
    pppppuVar14 = (uint64_t *****)apppplocal_var_268[0];
  }
  function_3f5400(&lStack_288,pppppuVar14,local_var_258);
  function_3f3a40(apppplocal_var_208,&lStack_288,&processed_var_9716_ptr);
  local_var_398 = 0;
  if (0xf < local_var_270) {
    uVar15 = local_var_270 + 1;
    lVar11 = CONCAT71(lStack_288._1_7_,(int8_t)lStack_288);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = local_var_270 + 0x28;
      lVar10 = *(int64_t *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  local_var_278 = 0;
  local_var_270 = 0xf;
  lStack_288._0_1_ = 0;
  local_var_148 = 0;
  local_var_140 = 0xf;
  aplocal_var_158[0] = (void *)((uint64_t)aplocal_var_158[0] & 0xffffffffffffff00);
  MathCoreCalculator0(aplocal_var_158,&processed_var_9736_ptr,10);
  local_var_128 = 0;
  local_var_120 = 0xf;
  stack_array_138[0] = 0;
  MathCoreCalculator0(stack_array_138,&processed_var_9960_ptr,0x10);
  local_var_108 = 0;
  local_var_100 = 0;
  pppppuVar14 = apppplocal_var_208;
  if (0xf < local_var_1f0) {
    pppppuVar14 = (uint64_t *****)apppplocal_var_208[0];
  }
  if (0xf < local_var_1f8) {
    uVar15 = local_var_1f8 | 0xf;
    if (0x7fffffffffffffff < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    ppplocal_var_118 = (uint64_t ***)SystemCore_SyscallHandler(uVar15 + 1);
// WARNING: Subroutine does not return
    memcpy(ppplocal_var_118,pppppuVar14,local_var_1f8 + 1);
  }
  ppplocal_var_118 = *pppppuVar14;
  local_var_110 = *(int32_t *)(pppppuVar14 + 1);
  local_var_10c = *(int32_t *)((int64_t)pppppuVar14 + 0xc);
  local_var_100 = 0xf;
  local_var_108 = local_var_1f8;
  local_var_e8 = 0;
  local_var_e0 = 0xf;
  stack_array_f8[0] = 0;
  MathCoreCalculator0(stack_array_f8,&processed_var_9984_ptr,7);
  local_var_c8 = 0;
  local_var_c0 = 0;
  pppppuVar14 = apppplocal_var_268;
  if (0xf < local_var_250) {
    pppppuVar14 = (uint64_t *****)apppplocal_var_268[0];
  }
  if (0xf < local_var_258) {
    uVar15 = local_var_258 | 0xf;
    if (0x7fffffffffffffff < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    ppplocal_var_d8 = (uint64_t ***)SystemCore_SyscallHandler(uVar15 + 1);
// WARNING: Subroutine does not return
    memcpy(ppplocal_var_d8,pppppuVar14,local_var_258 + 1);
  }
  ppplocal_var_d8 = *pppppuVar14;
  ppplocal_var_d0 = pppppuVar14[1];
  local_var_c0 = 0xf;
  local_var_c8 = local_var_258;
  local_var_318 = 0;
  local_var_310 = 0;
  local_var_308 = 0;
  function_3f4370(&local_var_318,aplocal_var_158,stack_array_b8);
  SystemMemoryManager(aplocal_var_158,0x20,5,function_0670d0);
  plVar8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  plocal_var_300 = &local_var_2e8;
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  plStack_390 = plVar8;
  MathCoreCalculator0(&local_var_2e8,&system_buffer_ptr,0);
  plocal_var_358 = &local_var_2e8;
  plStack_348 = &lStack_288;
  pplVar9 = (int64_t **)function_3f3000(&lStack_288,&local_var_318);
  pplStack_388 = pplVar9;
  plStack_348 = (int64_t *)SystemRenderer(0x48);
  *plStack_348 = 0;
  plStack_348[1] = 0;
  plStack_348[2] = 0;
  *plStack_348 = (int64_t)*pplVar9;
  plStack_348[1] = (int64_t)pplVar9[1];
  plStack_348[2] = (int64_t)pplVar9[2];
  *pplVar9 = (int64_t *)0x0;
  pplVar9[1] = (int64_t *)0x0;
  pplVar9[2] = (int64_t *)0x0;
  plStack_348[5] = 0;
  plStack_348[6] = 0;
  *(uint *)(plStack_348 + 3) = local_var_2e8;
  *(int32_t *)((int64_t)plStack_348 + 0x1c) = local_var_2e4;
  *(int32_t *)(plStack_348 + 4) = local_var_2e0;
  *(int32_t *)((int64_t)plStack_348 + 0x24) = local_var_2dc;
  *(int32_t *)(plStack_348 + 5) = (int32_t)local_var_2d8;
  *(int32_t *)((int64_t)plStack_348 + 0x2c) = local_var_2d8._4_4_;
  *(int32_t *)(plStack_348 + 6) = (int32_t)local_var_2d0;
  *(int32_t *)((int64_t)plStack_348 + 0x34) = local_var_2d0._4_4_;
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  plStack_348[7] = 0;
  plStack_348[8] = 0;
  local_var_398 = 0x70;
  *plVar8 = (int64_t)plStack_348;
  function_3f32c0(pplVar9);
  SystemPerformanceOptimizer(&local_var_2e8);
  param_1[0x2f] = (int64_t)plVar8;
  function_481b70(plVar8,acStack_188);
  if (acStack_188[0] != '\0') {
    pppppuVar14 = apppplocal_var_178;
    if (0xf < local_var_160) {
      pppppuVar14 = (uint64_t *****)apppplocal_var_178[0];
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9992_ptr,pppppuVar14);
  }
  uVar3 = function_3e87c0(apppplocal_var_208,param_1[0x2f]);
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  MathCoreCalculator0(&local_var_2e8,&rendering_buffer_24_ptr,9);
  lVar10 = function_482310(uVar7,&local_var_2e8,uVar3);
  param_1[0x30] = lVar10;
  if (0xf < local_var_2d0) {
    uVar15 = local_var_2d0 + 1;
    lVar11 = CONCAT44(local_var_2e4,local_var_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = local_var_2d0 + 0x28;
      lVar10 = *(int64_t *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  function_482450(param_1[0x30],acStack_1b8);
  if (acStack_1b8[0] != '\0') {
    pppppuVar14 = apppplocal_var_1a8;
    if (0xf < local_var_190) {
      pppppuVar14 = (uint64_t *****)apppplocal_var_1a8[0];
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9992_ptr,pppppuVar14);
  }
  plVar8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  *plVar8 = param_1[0x30];
  param_1[0x31] = (int64_t)plVar8;
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  MathCoreCalculator0(&local_var_2e8,&rendering_buffer_24_ptr,9);
  lVar10 = function_482310(uVar7,&local_var_2e8,uVar3);
  param_1[0x32] = lVar10;
  if (0xf < local_var_2d0) {
    uVar15 = local_var_2d0 + 1;
    lVar11 = CONCAT44(local_var_2e4,local_var_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = local_var_2d0 + 0x28;
      lVar10 = *(int64_t *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  function_482450(param_1[0x32],acStack_1e8);
  if (acStack_1e8[0] != '\0') {
    pppppuVar14 = apppplocal_var_1d8;
    if (0xf < local_var_1c0) {
      pppppuVar14 = (uint64_t *****)apppplocal_var_1d8[0];
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9992_ptr,pppppuVar14);
  }
  plVar8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  *plVar8 = param_1[0x32];
  param_1[0x33] = (int64_t)plVar8;
  plStack_348 = (int64_t *)0x0;
  lStack_340 = 0;
  pplStack_388 = &plStack_2c8;
  function_3f2eb0(&plStack_2c8);
  function_4724f0(&plocal_var_358,&plStack_2c8);
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  MathCoreCalculator0(&local_var_2e8,&processed_var_9912_ptr,8);
  pplStack_3a8 = &plStack_348;
  function_3e8510(param_1[0x33],0,&local_var_2e8,&plocal_var_358);
  if (0xf < local_var_2d0) {
    uVar15 = local_var_2d0 + 1;
    lVar11 = CONCAT44(local_var_2e4,local_var_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = local_var_2d0 + 0x28;
      lVar10 = *(int64_t *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  if (lStack_350 != 0) {
    function_3f53b0();
  }
  plStack_390 = (int64_t *)
                SystemCore_Synchronizer(_cout_std__3V__basic_ostream_DU__char_traits_D_std___1_A_exref,
                              &memory_allocator_336_ptr);
  local_var_2b8 = 0;
  local_var_2b0 = 0xf;
  plStack_2c8 = (int64_t *)((uint64_t)plStack_2c8 & 0xffffffffffffff00);
  MathCoreCalculator0(&plStack_2c8,&processed_var_9952_ptr,3);
  plVar8 = plStack_348;
  lVar10 = 0x180d49d50;
  if ((plStack_348 != (int64_t *)0x0) &&
     (lVar11 = (**(code **)(*plStack_348 + 8))(plStack_348,0x180d48ef0), lVar11 != 0)) {
    lVar10 = lVar11;
  }
  uVar7 = function_472900(lVar10,&lStack_288,&plStack_2c8);
  local_var_398 = 0xf0;
  local_var_218 = 0;
  local_var_210 = 0xf;
  stack_array_228[0] = 0;
  MathCoreCalculator0(stack_array_228,&memory_allocator_3436_ptr,6);
  plVar12 = (int64_t *)function_472640(uVar7,&plocal_var_300,stack_array_228);
  plVar12 = (int64_t *)*plVar12;
  puVar17 = (uint64_t *)&system_data_c170;
  if ((plVar12 != (int64_t *)0x0) &&
     (puVar13 = (uint64_t *)(**(code **)(*plVar12 + 8))(plVar12,0x180d48ef4),
     puVar13 != (uint64_t *)0x0)) {
    puVar17 = puVar13;
  }
  puVar13 = puVar17 + 2;
  if (0xf < (uint64_t)puVar17[3]) {
    puVar17 = (uint64_t *)*puVar17;
  }
  uVar7 = function_3f4790(plStack_390,puVar17,*puVar13);
  plStack_390 = (int64_t *)SystemCore_Synchronizer(uVar7,&processed_var_9936_ptr);
  local_var_238 = 0;
  local_var_230 = 0xf;
  stack_array_248[0] = 0;
  MathCoreCalculator0(stack_array_248,&processed_var_9928_ptr,7);
  lVar10 = 0x180d49d50;
  if ((plVar8 != (int64_t *)0x0) &&
     (lVar11 = (**(code **)(*plVar8 + 8))(plVar8,0x180d48ef0), lVar11 != 0)) {
    lVar10 = lVar11;
  }
  uVar7 = function_472900(lVar10,&plocal_var_358,stack_array_248);
  local_var_398 = 0x1f0;
  local_var_2d8 = 0;
  local_var_2d0 = 0xf;
  local_var_2e8 = local_var_2e8 & 0xffffff00;
  MathCoreCalculator0(&local_var_2e8,&memory_allocator_3436_ptr,6);
  plVar8 = (int64_t *)function_472640(uVar7,&pplStack_388,&local_var_2e8);
  plVar8 = (int64_t *)*plVar8;
  puVar17 = (uint64_t *)&system_data_c170;
  if ((plVar8 != (int64_t *)0x0) &&
     (puVar13 = (uint64_t *)(**(code **)(*plVar8 + 8))(plVar8,0x180d48ef4),
     puVar13 != (uint64_t *)0x0)) {
    puVar17 = puVar13;
  }
  puVar13 = puVar17 + 2;
  if (0xf < (uint64_t)puVar17[3]) {
    puVar17 = (uint64_t *)*puVar17;
  }
  uVar7 = function_3f4790(plStack_390,puVar17,*puVar13);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
            (uVar7,function_1e7680);
  if (lStack_380 != 0) {
    function_3f53b0();
  }
  SystemPerformanceOptimizer(&local_var_2e8);
  local_var_398 = 0xf0;
  if (lStack_350 != 0) {
    function_3f53b0();
  }
  SystemPerformanceOptimizer(stack_array_248);
  if (lStack_2f8 != 0) {
    function_3f53b0();
  }
  SystemPerformanceOptimizer(stack_array_228);
  local_var_398 = 0x70;
  if (lStack_280 != 0) {
    function_3f53b0();
  }
  SystemPerformanceOptimizer(&plStack_2c8);
  plocal_var_378 = &system_data_buffer_ptr;
  local_var_360 = 0;
  plocal_var_370 = (int32_t *)0x0;
  local_var_368 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_378,6);
  *plocal_var_370 = 0x64616853;
  *(int16_t *)(plocal_var_370 + 1) = 0x7265;
  *(int8_t *)((int64_t)plocal_var_370 + 6) = 0;
  local_var_368 = 6;
  plocal_var_338 = &system_data_buffer_ptr;
  local_var_320 = 0;
  plocal_var_330 = (void *)0x0;
  local_var_328 = 0;
  cVar2 = function_624be0(&plocal_var_338);
  if (cVar2 != '\0') {
    puVar16 = &system_buffer_ptr;
    if (plocal_var_330 != (void *)0x0) {
      puVar16 = plocal_var_330;
    }
    System_DataHandler(&plocal_var_378,&memory_allocator_352_ptr,puVar16);
  }
  if ((int)param_1[0x9a] != 0) {
    puVar16 = &system_buffer_ptr;
    if ((void *)param_1[0x99] != (void *)0x0) {
      puVar16 = (void *)param_1[0x99];
    }
    System_DataHandler(&plocal_var_378,&memory_allocator_352_ptr,puVar16);
  }
  lVar10 = function_6240a0(aplocal_var_158);
  plVar8 = param_1 + 0x40;
  *(int32_t *)(param_1 + 0x42) = *(int32_t *)(lVar10 + 0x10);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  strcpy_s(param_1[0x41],0x100,puVar16);
  aplocal_var_158[0] = &system_state_ptr;
  SystemFunction_000180629c90(plVar8);
  iVar6 = (int)param_1[0x9a];
  if (iVar6 == 5) {
    lVar10 = 0;
    do {
      lVar11 = lVar10 + 1;
      if (*(char *)(param_1[0x99] + lVar10) != (&system_pattern1_ptr)[lVar10]) goto LAB_1803e9ce0;
      lVar10 = lVar11;
    } while (lVar11 != 6);
    puVar16 = &memory_allocator_368_ptr;
  }
  else {
LAB_1803e9ce0:
    if ((iVar6 == 8) && (iVar5 = strcmp(param_1[0x99],&system_string2_ptr), iVar5 == 0)) {
      puVar16 = &processed_var_448_ptr;
    }
    else if (iVar6 == 7) {
      lVar10 = 0;
      do {
        lVar11 = lVar10 + 1;
        if (*(char *)(param_1[0x99] + lVar10) != (&system_pattern2_ptr)[lVar10]) goto LAB_1803e9d62;
        lVar10 = lVar11;
      } while (lVar11 != 8);
      SystemFunction_0001800696a0(param_1 + 99,plVar8);
      function_3f31b0(plVar8,&processed_var_40_ptr);
      puVar16 = &ui_system_data_112_ptr;
      plVar8 = param_1 + 99;
    }
    else {
LAB_1803e9d62:
      if ((iVar6 == 8) && (iVar6 = strcmp(param_1[0x99],&system_string1_ptr), iVar6 == 0)) {
        SystemFunction_0001800696a0(param_1 + 99,plVar8);
        function_3f31b0(plVar8,&ui_system_data_192_ptr);
        puVar16 = &rendering_buffer_256_ptr;
        plVar8 = param_1 + 99;
      }
      else {
        puVar16 = &processed_var_592_ptr;
      }
    }
  }
  function_3f31b0(plVar8,puVar16);
  uVar7 = system_context_ptr;
  plStack_2c8 = (int64_t *)&system_config_ptr;
  plocal_var_2c0 = &local_var_2b0;
  local_var_2b0 = local_var_2b0 & 0xffffffffffffff00;
  local_var_2b8 = CONCAT44((int)((uint64_t)local_var_2b8 >> 0x20),10);
  strcpy_s(&local_var_2b0,0x10,&processed_var_656_ptr);
  lVar10 = function_05e4d0(uVar7,&plStack_2c8);
  param_1[0x96] = lVar10;
  plStack_2c8 = (int64_t *)&system_state_ptr;
  pplVar9 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
  plVar8 = (int64_t *)param_1[0x96];
  pplStack_388 = pplVar9;
  UltraHighFreq_PerformanceMonitor1(pplVar9);
  *pplVar9 = (int64_t *)&rendering_buffer_2232_ptr;
  pplVar9[0x18] = plVar8;
  *(int8_t *)(pplVar9 + 0x1a) = 0;
  pplVar9[0x19] = param_1;
  SystemCore_PointerManager(param_1 + 0x97,pplVar9);
  puVar17 = (uint64_t *)param_1[0x96];
  pcVar1 = *(code **)*puVar17;
  pplStack_388 = &plStack_390;
  plStack_390 = (int64_t *)param_1[0x97];
  if (plStack_390 != (int64_t *)0x0) {
    (**(code **)(*plStack_390 + 0x28))();
  }
  (*pcVar1)(puVar17,&plStack_390);
  lVar10 = function_04b100(&plStack_2c8);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  System_DataHandler(param_1 + 0x9c,&processed_var_672_ptr,puVar16);
  SystemValidator(&plStack_2c8);
  ResourceManager_Allocate(param_1 + 0x9c,1);
  lVar10 = function_04b100(&plStack_2c8);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  System_DataHandler(param_1 + 0xa0,&processed_var_688_ptr,puVar16);
  SystemValidator(&plStack_2c8);
  ResourceManager_Allocate(param_1 + 0xa0,1);
  SystemValidator(&plocal_var_338);
  SystemValidator(&plocal_var_378);
  if (lStack_340 != 0) {
    function_3f53b0();
  }
  if (acStack_1e8[0] != '\0') {
    pplStack_388 = &plStack_1e0;
    SystemPerformanceOptimizer(apppplocal_var_1d8);
  }
  if (acStack_1b8[0] != '\0') {
    pplStack_388 = &plStack_1b0;
    SystemPerformanceOptimizer(apppplocal_var_1a8);
  }
  if (acStack_188[0] != '\0') {
    pplStack_388 = &plStack_180;
    SystemPerformanceOptimizer(apppplocal_var_178);
  }
  function_3f32c0(&local_var_318);
  SystemPerformanceOptimizer(apppplocal_var_208);
  SystemPerformanceOptimizer(apppplocal_var_268);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_3c8);
}
// 函数: void function_3ea020(int64_t param_1)
void function_3ea020(int64_t param_1)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  plVar4 = *(int64_t **)(param_1 + 8);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}
// 函数: void function_3ea080(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3ea080(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = (*(int64_t *)(param_1 + 0x28) - lVar2 >> 3) * 8;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar2 - lVar3,uVar1 + 0x27,lVar3,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar3);
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  function_3f33b0((uint64_t *)(param_1 + 8));
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(*(uint64_t *)(param_1 + 8),0x40);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address