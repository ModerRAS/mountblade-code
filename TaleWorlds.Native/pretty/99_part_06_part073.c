#include "ultra_high_freq_fun_definitions.h"
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_06_part073.c - 4 个函数
// 函数: void function_3ee170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3ee170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
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
// WARNING: Removing unreachable block (ram,0x0001803eec0e)
// WARNING: Removing unreachable block (ram,0x0001803eeb81)
// WARNING: Removing unreachable block (ram,0x0001803eec5c)
// WARNING: Removing unreachable block (ram,0x0001803eec67)
// WARNING: Removing unreachable block (ram,0x0001803eec6b)
// WARNING: Removing unreachable block (ram,0x0001803eec9e)
// WARNING: Removing unreachable block (ram,0x0001803eedda)
// WARNING: Removing unreachable block (ram,0x0001803eeda1)
// WARNING: Removing unreachable block (ram,0x0001803eed68)
// WARNING: Removing unreachable block (ram,0x0001803eed2c)
// WARNING: Removing unreachable block (ram,0x0001803eecf0)
// WARNING: Removing unreachable block (ram,0x0001803eecb4)
// WARNING: Removing unreachable block (ram,0x0001803eee12)
// WARNING: Removing unreachable block (ram,0x0001803eee23)
// WARNING: Removing unreachable block (ram,0x0001803eee2b)
// WARNING: Removing unreachable block (ram,0x0001803eee5b)
// WARNING: Removing unreachable block (ram,0x0001803eee60)
// WARNING: Removing unreachable block (ram,0x0001803eee79)
// WARNING: Removing unreachable block (ram,0x0001803eee7e)
// WARNING: Removing unreachable block (ram,0x0001803eee97)
// WARNING: Removing unreachable block (ram,0x0001803eee9c)
// WARNING: Recovered jumptable eliminated as dead code
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ee190(int64_t param_1,int64_t param_2)
void function_3ee190(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  void *puVar13;
  char *pcVar14;
  int iVar15;
  int64_t *plVar16;
  void *puVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int8_t stack_array_4f8 [32];
  int64_t *plStack_4d8;
  uint64_t *plocal_var_4d0;
  int32_t *plocal_var_4c8;
  int64_t **pplStack_4c0;
  int32_t stack_array_4b8 [2];
  uint64_t local_var_4b0;
  uint64_t local_var_4a8;
  void *plocal_var_4a0;
  int32_t *plocal_var_498;
  int32_t local_var_490;
  uint64_t local_var_488;
  int iStack_480;
  uint64_t local_var_478;
  int32_t local_var_470;
  int16_t stack_array_46c [2];
  int8_t local_var_468;
  int32_t local_var_464;
  void *plocal_var_460;
  uint64_t local_var_458;
  int32_t local_var_450;
  uint64_t local_var_448;
  void *plocal_var_440;
  uint64_t local_var_438;
  int32_t local_var_430;
  uint64_t local_var_428;
  void *plocal_var_420;
  void *plocal_var_418;
  int32_t local_var_410;
  uint64_t local_var_408;
  void *plocal_var_400;
  int64_t lStack_3f8;
  int32_t local_var_3f0;
  uint64_t local_var_3e8;
  void *plocal_var_3e0;
  int64_t lStack_3d8;
  int32_t local_var_3d0;
  uint64_t local_var_3c8;
  int64_t *aplStack_3c0 [2];
  int64_t lStack_3b0;
  int64_t lStack_3a8;
  int64_t *plStack_3a0;
  int64_t *plStack_398;
  int64_t *plStack_390;
  int64_t lStack_388;
  void *plocal_var_380;
  void *plocal_var_378;
  int32_t local_var_368;
  uint64_t *plocal_var_360;
  uint64_t *plocal_var_358;
  uint64_t local_var_350;
  int32_t local_var_348;
  void *plocal_var_340;
  int64_t lStack_338;
  int32_t local_var_328;
  uint64_t local_var_320;
  int64_t lStack_318;
  int8_t local_var_310;
  void *plocal_var_308;
  int64_t lStack_300;
  int32_t local_var_2f0;
  uint64_t local_var_2e8;
  int64_t lStack_2d8;
  uint64_t local_var_2d0;
  int32_t local_var_2c8;
  int16_t local_var_2c4;
  int64_t *plStack_2b8;
  int8_t *plocal_var_270;
  uint local_var_260;
  int64_t alStack_258 [6];
  int iStack_228;
  int32_t local_var_224;
  int32_t local_var_220;
  int32_t local_var_21c;
  int16_t local_var_218;
  int8_t local_var_216;
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [136];
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [264];
  uint64_t local_var_48;
  local_var_2e8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4f8;
  plocal_var_420 = &system_data_buffer_ptr;
  local_var_408 = 0;
  plocal_var_418 = (void *)0x0;
  local_var_410 = 0;
  pcVar14 = "";
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  plVar10 = (int64_t *)(param_1 + 0x440);
  plVar16 = plVar10;
  if (0xf < *(uint64_t *)(param_1 + 0x458)) {
    plVar16 = (int64_t *)*plVar10;
  }
  lStack_3b0 = param_1;
  lStack_3a8 = param_2;
  System_DataHandler(&plocal_var_420,&ui_system_data_1488_ptr,plVar16,puVar13);
  puVar13 = &system_buffer_ptr;
  if (plocal_var_418 != (void *)0x0) {
    puVar13 = plocal_var_418;
  }
  local_var_320 = 0;
  local_var_310 = 0;
  SystemCore_Validator(&local_var_320,puVar13,&processed_var_4880_ptr);
  if (lStack_318 == 0) {
    if (*(char **)(param_2 + 8) != (char *)0x0) {
      pcVar14 = *(char **)(param_2 + 8);
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&memory_allocator_3272_ptr,pcVar14);
  }
  uVar7 = _ftelli64(lStack_318);
  _fseeki64(lStack_318,0,2);
  uVar8 = _ftelli64(lStack_318);
  local_var_4a8 = uVar8;
  _fseeki64(lStack_318,uVar7,0);
  iVar15 = (int)uVar8;
  if (iVar15 == 0) {
    local_var_4b0 = 0;
  }
  else {
    local_var_4b0 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,3);
  }
  fread(local_var_4b0,(int64_t)iVar15,1,lStack_318);
  fclose(lStack_318);
  uVar12 = 0;
  lStack_318 = 0;
  LOCK();
  SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
  UNLOCK();
  function_62da70(&plocal_var_420);
  plocal_var_440 = &system_data_buffer_ptr;
  local_var_428 = 0;
  local_var_438 = 0;
  local_var_430 = 0;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  System_DataHandler(&plocal_var_440,&ui_system_data_1324_ptr,puVar13);
  plocal_var_460 = &system_data_buffer_ptr;
  local_var_448 = 0;
  local_var_458 = 0;
  local_var_450 = 0;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  if (0xf < *(uint64_t *)(param_1 + 0x458)) {
    plVar10 = (int64_t *)*plVar10;
  }
  System_DataHandler(&plocal_var_460,&ui_system_data_1332_ptr,plVar10,puVar13);
  cVar5 = RenderingSystem_RenderQueue(&plocal_var_440);
  if (cVar5 == '\0') {
    cVar5 = UltraHighFreq_LogManager1(&plocal_var_460);
    if (cVar5 != '\0') {
      plocal_var_360 = (uint64_t *)0x0;
      plocal_var_358 = (uint64_t *)0x0;
      local_var_350 = 0;
      local_var_348 = 3;
      plocal_var_168 = &rendering_buffer_2008_ptr;
      plocal_var_160 = stack_array_150;
      stack_array_150[0] = 0;
      local_var_158 = 4;
      strcpy_s(stack_array_150,0x100,&ui_system_data_1548_ptr);
      function_62cb00(&plocal_var_460,&plocal_var_360,&plocal_var_168);
      puVar3 = plocal_var_360;
      lVar18 = lStack_3b0;
      plocal_var_168 = &system_state_ptr;
      uVar20 = (int64_t)plocal_var_358 - (int64_t)plocal_var_360 >> 5;
      puVar1 = puVar3;
      puVar2 = plocal_var_358;
      if (uVar20 != 0) {
        plVar10 = plocal_var_360 + 1;
        uVar19 = uVar12;
        do {
          iVar15 = (int)plVar10[1] + -1;
          if (-1 < iVar15) {
            lVar9 = (int64_t)iVar15;
            do {
              if (*(char *)(*plVar10 + lVar9) == '/') goto LAB_1803ee585;
              iVar15 = iVar15 + -1;
              lVar9 = lVar9 + -1;
            } while (-1 < lVar9);
          }
          iVar15 = -1;
LAB_1803ee585:
          NetworkSystem_ProtocolParser(puVar3 + uVar12 * 4,&plocal_var_380,iVar15 + 1,0xffffffff);
          plocal_var_3e0 = &system_data_buffer_ptr;
          local_var_3c8 = 0;
          lStack_3d8 = 0;
          local_var_3d0 = 0;
          puVar13 = &system_buffer_ptr;
          if (plocal_var_378 != (void *)0x0) {
            puVar13 = plocal_var_378;
          }
          puVar17 = &system_buffer_ptr;
          if (*(void **)(lVar18 + 0x508) != (void *)0x0) {
            puVar17 = *(void **)(lVar18 + 0x508);
          }
          System_DataHandler(&plocal_var_3e0,&ui_system_data_1332_ptr,puVar17,puVar13);
          function_62dce0(puVar3 + uVar12 * 4,&plocal_var_3e0);
          plocal_var_3e0 = &system_data_buffer_ptr;
          if (lStack_3d8 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_3d8 = 0;
          local_var_3c8 = local_var_3c8 & 0xffffffff00000000;
          plocal_var_3e0 = &system_state_ptr;
          plocal_var_380 = &system_data_buffer_ptr;
          if (plocal_var_378 != (void *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plocal_var_378 = (void *)0x0;
          local_var_368 = 0;
          plocal_var_380 = &system_state_ptr;
          uVar6 = (int)uVar19 + 1;
          uVar19 = (uint64_t)uVar6;
          plVar10 = plVar10 + 4;
          uVar12 = (uint64_t)(int)uVar6;
          puVar2 = plocal_var_358;
          param_2 = lStack_3a8;
        } while (uVar12 < uVar20);
      }
      for (; puVar4 = plocal_var_358, puVar1 != plocal_var_358; puVar1 = puVar1 + 4) {
        plocal_var_358 = puVar2;
        (**(code **)*puVar1)(puVar1,0);
        puVar2 = plocal_var_358;
        plocal_var_358 = puVar4;
      }
      plocal_var_358 = puVar2;
      if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar3);
      }
    }
  }
  else {
    plocal_var_400 = &system_data_buffer_ptr;
    local_var_3e8 = 0;
    lStack_3f8 = 0;
    local_var_3f0 = 0;
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar13 = *(void **)(param_2 + 8);
    }
    puVar17 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x508) != (void *)0x0) {
      puVar17 = *(void **)(param_1 + 0x508);
    }
    System_DataHandler(&plocal_var_400,&ui_system_data_1344_ptr,puVar17,puVar13);
    cVar5 = function_62dce0(&plocal_var_440,&plocal_var_400);
    if (cVar5 == '\0') {
      puVar13 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar13 = *(void **)(param_2 + 8);
      }
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&ui_system_data_1360_ptr,puVar13);
    }
    plocal_var_400 = &system_data_buffer_ptr;
    if (lStack_3f8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_3f8 = 0;
    local_var_3e8 = local_var_3e8 & 0xffffffff00000000;
    plocal_var_400 = &system_state_ptr;
  }
  lVar18 = 0;
  function_1eb9b0(&lStack_2d8);
  local_var_478 = 0xffffffffffffffff;
  local_var_470 = 0xffffffff;
  stack_array_46c[0] = 0xffff;
  aplStack_3c0[0] = (int64_t *)0x0;
  if (*(uint *)(param_2 + 0x10) < 2) {
LAB_1803ee8e0:
    uVar7 = NetworkSystem_ProtocolParser(param_2,&plocal_var_308,2);
    plocal_var_4d0 = &local_var_2d0;
    plStack_4d8 = &lStack_388;
    function_1c85f0(plStack_4d8,uVar7);
    plVar10 = plStack_2b8;
    plocal_var_308 = &system_data_buffer_ptr;
    if (lStack_300 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_300 = 0;
    local_var_2f0 = 0;
    plocal_var_308 = &system_state_ptr;
    plStack_390 = plStack_2b8;
    plStack_2b8 = (int64_t *)0x0;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x38))();
    }
    lStack_2d8 = lStack_388;
    if (*(char **)(lStack_388 + 0x18) != (char *)0x0) {
      pcVar14 = *(char **)(lStack_388 + 0x18);
    }
    iStack_228 = 0x1505;
    cVar5 = *pcVar14;
    while (cVar5 != '\0') {
      pcVar14 = pcVar14 + 1;
      iStack_228 = iStack_228 * 0x21 + (int)cVar5;
      cVar5 = *pcVar14;
    }
    local_var_224 = (int32_t)((uint64_t)local_var_2d0 >> 0x20);
    local_var_220 = (int32_t)local_var_2d0;
    local_var_21c = local_var_2c8;
    local_var_218 = local_var_2c4;
    local_var_216 = (int8_t)stack_array_4b8[0];
    lVar18 = lStack_388;
  }
  else {
    do {
      if ((&ui_system_data_1492_ptr + lVar18)[*(int64_t *)(param_2 + 8) + -0x180a0d604] !=
          (&ui_system_data_1492_ptr)[lVar18]) goto LAB_1803ee8e0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < 2);
    NetworkSystem_ProtocolParser(param_2,&plocal_var_340,2);
    plocal_var_208 = &memory_allocator_3432_ptr;
    plocal_var_200 = stack_array_1f0;
    local_var_1f8 = 0;
    stack_array_1f0[0] = 0;
    pplStack_4c0 = aplStack_3c0;
    plocal_var_4c8 = &local_var_464;
    plocal_var_4d0 = (uint64_t *)stack_array_46c;
    plStack_4d8 = (int64_t *)&local_var_470;
    function_1d0890(&plocal_var_340,stack_array_4b8,&plocal_var_208,&local_var_478);
    local_var_468 = (int8_t)stack_array_4b8[0];
    plVar10 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_3a0,&plocal_var_208,1);
    lVar18 = *plVar10;
    if (plStack_3a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_3a0 + 0x38))();
    }
    plVar10 = aplStack_3c0[0];
    if (*(char **)(lVar18 + 0x18) != (char *)0x0) {
      pcVar14 = *(char **)(lVar18 + 0x18);
    }
    iStack_480 = 0x1505;
    cVar5 = *pcVar14;
    while (cVar5 != '\0') {
      pcVar14 = pcVar14 + 1;
      iStack_480 = iStack_480 * 0x21 + (int)cVar5;
      cVar5 = *pcVar14;
    }
    local_var_2c4 = stack_array_46c[0];
    local_var_2c8 = local_var_470;
    local_var_2d0 = local_var_478;
    plStack_398 = aplStack_3c0[0];
    lStack_2d8 = lVar18;
    if (aplStack_3c0[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_3c0[0] + 0x28))(aplStack_3c0[0]);
    }
    plVar16 = plStack_2b8;
    plStack_398 = plStack_2b8;
    plStack_2b8 = plVar10;
    if (plVar16 != (int64_t *)0x0) {
      (**(code **)(*plVar16 + 0x38))();
    }
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    function_3d1790(&lStack_2d8,local_var_464);
    plocal_var_208 = &system_state_ptr;
    plocal_var_340 = &system_data_buffer_ptr;
    if (lStack_338 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_338 = 0;
    local_var_328 = 0;
    plocal_var_340 = &system_state_ptr;
  }
  switch(stack_array_4b8[0]) {
  case 0:
    puVar13 = &processed_var_632_ptr;
    break;
  case 1:
    puVar13 = &processed_var_688_ptr;
    break;
  case 2:
    puVar13 = &processed_var_616_ptr;
    break;
  case 3:
  case 4:
    puVar13 = &processed_var_640_ptr;
    break;
  case 5:
    puVar13 = &processed_var_624_ptr;
    break;
  default:
    goto LAB_1803eea49;
  }
  (**(code **)(alStack_258[0] + 0x10))(alStack_258,puVar13);
LAB_1803eea49:
  plocal_var_4a0 = &system_data_buffer_ptr;
  local_var_488 = 0;
  plocal_var_498 = (int32_t *)0x0;
  local_var_490 = 0;
  puVar11 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puVar11 = 0;
  plocal_var_498 = puVar11;
  uVar6 = CoreEngineSystemCleanup(puVar11);
  *puVar11 = 0x2e2f2e2e;
  puVar11[1] = 0x68532f2e;
  puVar11[2] = 0x72656461;
  puVar11[3] = 0x6f532f73;
  puVar11[4] = 0x65637275;
  *(int16_t *)(puVar11 + 5) = 0x2f73;
  *(int8_t *)((int64_t)puVar11 + 0x16) = 0;
  local_var_490 = 0x16;
  iVar15 = *(int *)(lVar18 + 0x16c0);
  local_var_488._0_4_ = uVar6;
  if (0 < iVar15) {
    if ((iVar15 != -0x16) && (uVar6 < iVar15 + 0x17U)) {
      plStack_4d8 = (int64_t *)CONCAT71(plStack_4d8._1_7_,0x13);
      puVar11 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar11,iVar15 + 0x17U,0x10);
      plocal_var_498 = puVar11;
      local_var_488._0_4_ = CoreEngineSystemCleanup(puVar11);
      iVar15 = *(int *)(lVar18 + 0x16c0);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar11 + 0x16),*(uint64_t *)(lVar18 + 0x16b8),
           (int64_t)(iVar15 + 1));
  }
  if (puVar11 == (int32_t *)0x0) {
    puVar11 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
    *(int8_t *)puVar11 = 0;
LAB_1803eeb9e:
    plocal_var_498 = puVar11;
    local_var_488._0_4_ = CoreEngineSystemCleanup(puVar11);
  }
  else if (uVar6 < 0x1a) {
    plStack_4d8 = (int64_t *)CONCAT71(plStack_4d8._1_7_,0x13);
    puVar11 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar11,0x1a,0x10);
    goto LAB_1803eeb9e;
  }
  *(int32_t *)((int64_t)puVar11 + 0x16) = 0x73722e;
  local_var_490 = 0x19;
  if (puVar11 != (int32_t *)0x0) {
    if (plocal_var_270 == (int8_t *)0x0) {
      plocal_var_270 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
      *plocal_var_270 = 0;
    }
    else {
      if (0x19 < local_var_260) goto LAB_1803eec46;
      plStack_4d8 = (int64_t *)CONCAT71(plStack_4d8._1_7_,0x13);
      plocal_var_270 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_270,0x1a,0x10);
    }
    local_var_260 = CoreEngineSystemCleanup(plocal_var_270);
  }
LAB_1803eec46:
// WARNING: Subroutine does not return
  memcpy(plocal_var_270,puVar11,0x19);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3eef10(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_3eef10(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  void *puVar2;
  void *puVar3;
  int8_t stack_array_158 [32];
  void *plocal_var_138;
  void *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int8_t *plocal_var_110;
  void *plocal_var_108;
  int64_t alStack_100 [4];
  int32_t local_var_e0;
  int8_t local_var_d4;
  int8_t stack_array_b0 [80];
  uint64_t *plocal_var_60;
  int16_t local_var_58;
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  plocal_var_138 = &system_data_buffer_ptr;
  local_var_120 = 0;
  plocal_var_130 = (void *)0x0;
  local_var_128 = 0;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x4e8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 0x4e8);
  }
  System_DataHandler(&plocal_var_138,&ui_system_data_1560_ptr,puVar3,puVar2);
  function_637560(&plocal_var_108);
  local_var_58 = 1;
  local_var_e0 = 0;
  local_var_d4 = 0;
  plocal_var_108 = &rendering_buffer_264_ptr;
  puVar2 = &system_buffer_ptr;
  if (plocal_var_130 != (void *)0x0) {
    puVar2 = plocal_var_130;
  }
  (**(code **)(alStack_100[0] + 0x10))(alStack_100,puVar2);
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  *puVar1 = 0;
  *(int8_t *)(puVar1 + 2) = 0;
  SystemCore_Validator(puVar1,puVar2,&system_data_c7ec);
  plocal_var_60 = puVar1;
  if (puVar1[1] != 0) {
    local_var_58 = 0x100;
    (**(code **)(plocal_var_108 + 0x78))(&plocal_var_108,param_3);
    plocal_var_108 = &processed_var_6384_ptr;
    if (local_var_58._1_1_ != '\0') {
      function_639250(&plocal_var_108);
    }
    plocal_var_110 = stack_array_b0;
    _Mtx_destroy_in_situ(stack_array_b0);
    function_5065c0(&plocal_var_108);
    plocal_var_138 = &system_data_buffer_ptr;
    if (plocal_var_130 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_130 = (void *)0x0;
    local_var_120 = local_var_120 & 0xffffffff00000000;
    plocal_var_138 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_158);
  }
  local_var_58 = CONCAT11(local_var_58._1_1_,1);
  puVar2 = &system_buffer_ptr;
  if (plocal_var_130 != (void *)0x0) {
    puVar2 = plocal_var_130;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&ui_system_data_1576_ptr,puVar2);
}
void * function_3ef110(int64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  iVar2 = *(int *)(param_1 + 0x4d0);
  if (iVar2 == 5) {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      if (*(char *)(*(int64_t *)(param_1 + 0x4c8) + lVar3) != (&system_pattern1_ptr)[lVar3])
      goto LAB_1803ef1c9;
      lVar3 = lVar4;
    } while (lVar4 != 6);
    switch(param_2) {
    case 0:
      return &processed_var_5408_ptr;
    case 1:
      return &processed_var_5448_ptr;
    case 2:
      return &processed_var_5464_ptr;
    case 3:
      return &processed_var_5480_ptr;
    case 4:
      return &processed_var_5520_ptr;
    case 5:
      return &processed_var_5432_ptr;
    }
  }
  else {
LAB_1803ef1c9:
    if ((iVar2 == 8) &&
       (iVar1 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&system_string2_ptr), iVar1 == 0)) {
      switch(param_2) {
      case 0:
        return &processed_var_5496_ptr;
      case 1:
        return &processed_var_5552_ptr;
      case 2:
        return &processed_var_5568_ptr;
      case 3:
        return &processed_var_5592_ptr;
      case 4:
        return &processed_var_5624_ptr;
      case 5:
        return &processed_var_5536_ptr;
      }
    }
    else if (iVar2 == 7) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 + 1;
        if (*(char *)(*(int64_t *)(param_1 + 0x4c8) + lVar3) != (&system_pattern2_ptr)[lVar3])
        goto LAB_1803ef2d7;
        lVar3 = lVar4;
      } while (lVar4 != 8);
      switch(param_2) {
      case 0:
        return &processed_var_5112_ptr;
      case 1:
        return &processed_var_5104_ptr;
      case 2:
        return &processed_var_5144_ptr;
      case 3:
        return &processed_var_5120_ptr;
      case 4:
        return &processed_var_5136_ptr;
      case 5:
        return &processed_var_5128_ptr;
      }
    }
    else {
LAB_1803ef2d7:
      if ((iVar2 == 8) &&
         (iVar2 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&system_string1_ptr), iVar2 == 0)) {
        switch(param_2) {
        case 0:
          return &processed_var_5064_ptr;
        case 1:
          return &processed_var_5056_ptr;
        case 2:
          return &processed_var_5096_ptr;
        case 3:
          return &processed_var_5072_ptr;
        case 4:
          return &processed_var_5088_ptr;
        case 5:
          return &processed_var_5080_ptr;
        }
      }
      else {
        switch(param_2) {
        case 0:
          return &processed_var_4132_ptr;
        case 1:
          return &processed_var_4124_ptr;
        case 2:
          return &processed_var_4164_ptr;
        case 3:
          return &processed_var_4140_ptr;
        case 4:
          return &processed_var_4156_ptr;
        case 5:
          return &processed_var_4148_ptr;
        }
      }
    }
  }
  return &system_data_5d28;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ef430(int64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
void function_3ef430(int64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
                  int64_t *param_5)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t *puVar7;
  void *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint uVar13;
  int8_t stack_array_348 [32];
  char cStack_328;
  int32_t local_var_324;
  void *plocal_var_320;
  void *plocal_var_318;
  int iStack_310;
  uint64_t local_var_308;
  int64_t *plStack_300;
  int64_t lStack_2f8;
  int64_t lStack_2f0;
  void **pplocal_var_2e8;
  uint64_t local_var_2e0;
  int8_t local_var_2d8;
  uint8_t local_var_2d7;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  int8_t local_var_298;
  uint8_t local_var_297;
  uint64_t local_var_288;
  uint64_t local_var_280;
  void *aplocal_var_278 [68];
  uint64_t local_var_58;
  local_var_2e0 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_348;
  uVar11 = 0;
  local_var_324 = 0;
  pplocal_var_2e8 = &plocal_var_320;
  plocal_var_320 = &system_data_buffer_ptr;
  local_var_308 = 0;
  plocal_var_318 = (void *)0x0;
  iStack_310 = 0;
  plStack_300 = param_1;
  lStack_2f8 = param_4;
  lStack_2f0 = param_2;
  cStack_328 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&plocal_var_320);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[0x41] != (void *)0x0) {
    puVar4 = (void *)param_1[0x41];
  }
  (**(code **)(*param_5 + 0x10))(param_5,puVar4);
  function_627f00(param_5,&ui_system_data_1496_ptr);
  uVar2 = function_3ef110(param_1,*(int32_t *)(param_2 + 0xa4));
  function_627f00(param_5,uVar2);
  function_627f00(param_5,&system_data_5cb4);
  function_627f00(param_5,&system_data_22f0);
  function_627e90(param_5,param_2 + 0x80);
  lVar10 = *param_3;
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
          (param_3[1] - lVar10);
  uVar6 = uVar11;
  if (lVar5 >> 6 != lVar5 >> 0x3f) {
    do {
      if ((*(int *)(uVar11 + 0x10 + lVar10) == 0xd) &&
         (iVar1 = strcmp(*(uint64_t *)(uVar11 + 8 + lVar10),&processed_var_5240_ptr), iVar1 == 0)) {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        System_DataHandler(param_5,&ui_system_data_1520_ptr,puVar8);
      }
      else {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        puVar4 = *(void **)(uVar11 + 8 + lVar10);
        puVar9 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar9 = puVar4;
        }
        System_DataHandler(param_5,&ui_system_data_1536_ptr,puVar9,puVar8);
      }
      uVar13 = (int)uVar6 + 1;
      uVar11 = uVar11 + 0x78;
      lVar10 = *param_3;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
              (param_3[1] - lVar10);
      param_1 = plStack_300;
      uVar6 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)((lVar5 >> 6) - (lVar5 >> 0x3f)));
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lStack_2f8 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lStack_2f8 + 8);
  }
  plVar12 = param_1 + 0x88;
  local_var_2c8 = 0;
  local_var_2c0 = 0xf;
  local_var_2d8 = 0;
  local_var_324 = 1;
  function_3f45e0(&local_var_2d8,param_1[0x8a] + 1);
  if (0xf < (uint64_t)param_1[0x8b]) {
    plVar12 = (int64_t *)*plVar12;
  }
  function_3f5400(&local_var_2d8,plVar12,param_1[0x8a]);
  function_3f5400(&local_var_2d8,&system_data_cfb8,1);
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar4[lVar10] != '\0');
  puVar3 = (uint64_t *)function_3f5400(&local_var_2d8,puVar4);
  local_var_2b8 = *puVar3;
  local_var_2b0 = puVar3[1];
  local_var_2a8 = puVar3[2];
  local_var_2a0 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(int8_t *)puVar3 = 0;
  local_var_324 = 3;
  function_3f3a40(&local_var_298,&local_var_2b8,&system_data_209c);
  local_var_324 = 1;
  if (0xf < local_var_2a0) {
    uVar6 = local_var_2a0 + 1;
    uVar11 = local_var_2b8;
    if (0xfff < uVar6) {
      uVar6 = local_var_2a0 + 0x28;
      uVar11 = *(uint64_t *)(local_var_2b8 - 8);
      if (0x1f < (local_var_2b8 - uVar11) - 8) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar11,uVar6);
  }
  local_var_2a8 = 0;
  local_var_2a0 = 0xf;
  local_var_2b8 = local_var_2b8 & 0xffffffffffffff00;
  local_var_324 = 0;
  if (0xf < local_var_2c0) {
    uVar11 = local_var_2c0 + 1;
    if ((0xfff < uVar11) &&
       (uVar11 = local_var_2c0 + 0x28,
       0x1f < (CONCAT71(local_var_2d7,local_var_2d8) - *(int64_t *)(CONCAT71(local_var_2d7,local_var_2d8) + -8)
              ) - 8U)) {
// WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar11);
  }
  local_var_2c8 = 0;
  local_var_2c0 = 0xf;
  local_var_2d8 = 0;
  if ((char)param_1[0xaf] != '\0') {
    puVar4 = &system_buffer_ptr;
    if ((void *)param_1[0xa1] != (void *)0x0) {
      puVar4 = (void *)param_1[0xa1];
    }
    System_DataHandler(param_5,&ui_system_data_1704_ptr,puVar4);
  }
  if ((cStack_328 != '\0') && (iStack_310 != 0)) {
    puVar4 = &system_buffer_ptr;
    if (plocal_var_318 != (void *)0x0) {
      puVar4 = plocal_var_318;
    }
    System_DataHandler(param_5,&ui_system_data_1728_ptr,puVar4);
  }
  function_627f00(param_5,&ui_system_data_1736_ptr);
  function_627f00(param_5,&system_data_2320);
  puVar7 = &local_var_298;
  if (0xf < local_var_280) {
    puVar7 = (int8_t *)CONCAT71(local_var_297,local_var_298);
  }
  function_627f00(param_5,puVar7);
  function_627f00(param_5,&system_data_c8e4);
  lVar10 = SystemCore_EncryptionEngine(aplocal_var_278,lStack_2f0 + 0x60);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar10 + 8);
  }
  function_627f00(param_5,puVar4);
  aplocal_var_278[0] = &system_state_ptr;
  if (0xf < local_var_280) {
    uVar11 = local_var_280 + 1;
    lVar5 = CONCAT71(local_var_297,local_var_298);
    lVar10 = lVar5;
    if (0xfff < uVar11) {
      uVar11 = local_var_280 + 0x28;
      lVar10 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar11);
  }
  local_var_288 = 0;
  local_var_280 = 0xf;
  local_var_298 = 0;
  pplocal_var_2e8 = &plocal_var_320;
  plocal_var_320 = &system_data_buffer_ptr;
  if (plocal_var_318 == (void *)0x0) {
    plocal_var_318 = (void *)0x0;
    local_var_308 = local_var_308 & 0xffffffff00000000;
    plocal_var_320 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_348);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address