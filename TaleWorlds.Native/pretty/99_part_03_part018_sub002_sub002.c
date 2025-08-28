// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
// 99_part_03_part018_sub002_sub002.c - 1 个函数
// 函数: void function_1dbdc0(uint64_t param_1,uint64_t param_2)
void function_1dbdc0(uint64_t param_1,uint64_t param_2)
{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int32_t uVar13;
  int8_t stack_array_6d8 [32];
  int64_t *plStack_6b8;
  int64_t *plStack_6a8;
  uint64_t *plocal_var_6a0;
  int32_t local_var_698;
  int16_t local_var_694;
  uint64_t local_var_690;
  uint64_t local_var_688;
  int64_t *plStack_680;
  int32_t local_var_678;
  int16_t local_var_674;
  int64_t *plStack_670;
  int32_t local_var_668;
  int16_t local_var_664;
  int64_t *plStack_660;
  uint64_t local_var_658;
  int32_t local_var_650;
  int16_t local_var_64c;
  uint64_t local_var_640;
  uint local_var_638;
  int16_t local_var_634;
  uint64_t local_var_630;
  uint local_var_628;
  int16_t local_var_624;
  int64_t *plStack_620;
  uint local_var_618;
  int16_t local_var_614;
  int64_t *plStack_610;
  uint local_var_608;
  int16_t local_var_604;
  int64_t *plStack_600;
  uint local_var_5f8;
  int16_t local_var_5f4;
  uint64_t local_var_5f0;
  uint local_var_5e8;
  int16_t local_var_5e4;
  uint64_t local_var_5e0;
  uint local_var_5d8;
  int16_t local_var_5d4;
  uint64_t local_var_5d0;
  uint local_var_5c8;
  int16_t local_var_5c4;
  uint64_t local_var_5c0;
  uint64_t *plocal_var_5b8;
  uint *plocal_var_5b0;
  uint64_t local_var_5a8;
  uint stack_array_5a0 [8];
  uint64_t *plocal_var_580;
  uint *plocal_var_578;
  uint64_t local_var_570;
  uint stack_array_568 [8];
  void *plocal_var_548;
  int8_t *plocal_var_540;
  int32_t local_var_538;
  int8_t stack_array_530 [32];
  int64_t *plStack_510;
  uint *plocal_var_508;
  uint64_t local_var_500;
  uint stack_array_4f8 [8];
  uint *plocal_var_4d8;
  uint *plocal_var_4d0;
  uint64_t local_var_4c8;
  uint stack_array_4c0 [8];
  void *plocal_var_4a0;
  int8_t *plocal_var_498;
  int32_t local_var_490;
  int8_t stack_array_488 [32];
  void *plocal_var_468;
  int8_t *plocal_var_460;
  int32_t local_var_458;
  int8_t stack_array_450 [32];
  void *plocal_var_430;
  int8_t *plocal_var_428;
  int32_t local_var_420;
  int8_t stack_array_418 [32];
  void *plocal_var_3f8;
  int8_t *plocal_var_3f0;
  int32_t local_var_3e8;
  int8_t stack_array_3e0 [136];
  void *plocal_var_358;
  int8_t *plocal_var_350;
  int32_t local_var_348;
  int8_t stack_array_340 [136];
  void *plocal_var_2b8;
  int8_t *plocal_var_2b0;
  int32_t local_var_2a8;
  int8_t stack_array_2a0 [136];
  void *plocal_var_218;
  int8_t *plocal_var_210;
  int32_t local_var_208;
  int8_t stack_array_200 [136];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [136];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_5c0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_6d8;
  iVar7 = 0;
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  plocal_var_580 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_578 = stack_array_568;
  stack_array_568[0] = stack_array_568[0] & 0xffffff00;
  local_var_570 = CONCAT44((int)((uint64_t)local_var_570 >> 0x20),0xd);
  strcpy_s(stack_array_568,0x20,&processed_var_832_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_670,&plocal_var_580,1);
  plStack_6a8 = (int64_t *)*puVar2;
  SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_6a0);
  if (plStack_670 != (int64_t *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  plocal_var_580 = (uint64_t *)&system_state_ptr;
  plocal_var_2b8 = &memory_allocator_3432_ptr;
  plocal_var_2b0 = stack_array_2a0;
  stack_array_2a0[0] = 0;
  local_var_2a8 = 0x10;
  strcpy_s(stack_array_2a0,0x80,&processed_var_6880_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_6a8,&plocal_var_2b8,0);
  plVar10 = (int64_t *)*puVar2;
  plStack_670 = plVar10;
  if (plStack_6a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  plocal_var_2b8 = &system_state_ptr;
  plocal_var_580 = (uint64_t *)0x0;
  plocal_var_578 = (uint *)0x0;
  local_var_570 = 0;
  stack_array_568[0] = 3;
  plocal_var_5b8 = (uint64_t *)0x0;
  plocal_var_5b0 = (uint *)0x0;
  local_var_5a8 = 0;
  stack_array_5a0[0] = 3;
  plocal_var_3f8 = &memory_allocator_3432_ptr;
  plocal_var_3f0 = stack_array_3e0;
  stack_array_3e0[0] = 0;
  local_var_3e8 = 0xc;
  strcpy_s(stack_array_3e0,0x80,&processed_var_5624_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_3f8,0);
  SystemInitializer(&plocal_var_5b8,&plStack_6a8);
  plocal_var_3f8 = &system_state_ptr;
  plocal_var_358 = &memory_allocator_3432_ptr;
  plocal_var_350 = stack_array_340;
  stack_array_340[0] = 0;
  local_var_348 = 0xd;
  strcpy_s(stack_array_340,0x80,&processed_var_5608_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_358,0);
  SystemInitializer(&plocal_var_5b8,&plStack_6a8);
  plocal_var_358 = &system_state_ptr;
  plocal_var_218 = &memory_allocator_3432_ptr;
  plocal_var_210 = stack_array_200;
  stack_array_200[0] = 0;
  local_var_208 = 0x11;
  strcpy_s(stack_array_200,0x80,&processed_var_5664_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_218,0);
  SystemInitializer(&plocal_var_5b8,&plStack_6a8);
  plocal_var_218 = &system_state_ptr;
  plocal_var_178 = &memory_allocator_3432_ptr;
  plocal_var_170 = stack_array_160;
  stack_array_160[0] = 0;
  local_var_168 = 0x12;
  strcpy_s(stack_array_160,0x80,&processed_var_5640_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_178,0);
  SystemInitializer(&plocal_var_5b8,&plStack_6a8);
  plocal_var_178 = &system_state_ptr;
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0x19;
  strcpy_s(stack_array_c0,0x80,&processed_var_5704_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_d8,0);
  uVar13 = SystemInitializer(&plocal_var_5b8,&plStack_6a8);
  plocal_var_d8 = &system_state_ptr;
  plStack_6b8 = plVar10;
  function_1d7ad0(uVar13,0,&plocal_var_580,&plocal_var_5b8);
  puVar2 = plocal_var_580;
  uVar11 = (int64_t)plocal_var_578 - (int64_t)plocal_var_580 >> 3;
  puVar6 = plocal_var_580;
  if (uVar11 != 0) {
    do {
      plocal_var_6a0 = (uint64_t *)*puVar6;
      local_var_698 = 0;
      local_var_694 = 0;
      SystemCore_SecurityValidator(param_2,&plStack_670,&plocal_var_6a0);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while ((uint64_t)(int64_t)iVar7 < uVar11);
  }
  if (plocal_var_5b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (puVar2 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  plocal_var_580 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_578 = stack_array_568;
  stack_array_568[0] = stack_array_568[0] & 0xffffff00;
  local_var_570 = CONCAT44((int)((uint64_t)local_var_570 >> 0x20),0xd);
  strcpy_s(stack_array_568,0x20,&processed_var_4760_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_670,&plocal_var_580,1);
  plStack_6a8 = (int64_t *)*puVar2;
  SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_6a0);
  if (plStack_670 != (int64_t *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  plocal_var_580 = (uint64_t *)&system_state_ptr;
  uVar3 = function_0c0070();
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0xc;
  strcpy_s(stack_array_c0,0x80,&rendering_buffer_2520_ptr);
  uVar11 = SystemCore_LoggingSystem0(uVar3,&plocal_var_d8,0);
  plocal_var_d8 = &system_state_ptr;
  plocal_var_178 = &memory_allocator_3432_ptr;
  plocal_var_170 = stack_array_160;
  stack_array_160[0] = 0;
  local_var_168 = 0x12;
  strcpy_s(stack_array_160,0x80,&rendering_buffer_2664_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_178,0);
  plocal_var_178 = &system_state_ptr;
  iVar7 = 0;
  plocal_var_218 = &memory_allocator_3432_ptr;
  plocal_var_210 = stack_array_200;
  stack_array_200[0] = 0;
  local_var_208 = 0x12;
  strcpy_s(stack_array_200,0x80,&rendering_buffer_2688_ptr);
  plStack_660 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_218,0);
  plocal_var_218 = &system_state_ptr;
  plocal_var_2b8 = &memory_allocator_3432_ptr;
  plocal_var_2b0 = stack_array_2a0;
  stack_array_2a0[0] = 0;
  local_var_2a8 = 0x13;
  strcpy_s(stack_array_2a0,0x80,&rendering_buffer_2624_ptr);
  local_var_690 = SystemCore_LoggingSystem0(uVar3,&plocal_var_2b8,0);
  plocal_var_2b8 = &system_state_ptr;
  plocal_var_3f8 = &memory_allocator_3432_ptr;
  plocal_var_3f0 = stack_array_3e0;
  stack_array_3e0[0] = 0;
  local_var_3e8 = 0xf;
  strcpy_s(stack_array_3e0,0x80,&rendering_buffer_2648_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_3f8,0);
  plocal_var_3f8 = &system_state_ptr;
  plocal_var_358 = &memory_allocator_3432_ptr;
  plocal_var_350 = stack_array_340;
  stack_array_340[0] = 0;
  local_var_348 = 0xd;
  strcpy_s(stack_array_340,0x80,&rendering_buffer_2760_ptr);
  plStack_670 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_358,0);
  plocal_var_358 = &system_state_ptr;
  plocal_var_5b8 = (uint64_t *)0x0;
  plocal_var_5b0 = (uint *)0x0;
  local_var_5a8 = 0;
  stack_array_5a0[0] = 3;
  plStack_510 = (int64_t *)0x0;
  plocal_var_508 = (uint *)0x0;
  local_var_500 = 0;
  stack_array_4f8[0] = 3;
  SystemInitializer(&plStack_510,&plStack_6a8);
  uVar13 = SystemInitializer(&plStack_510,&plStack_670);
  plStack_6b8 = (int64_t *)uVar3;
  function_1d7ad0(uVar13,0,&plocal_var_5b8,&plStack_510);
  plocal_var_4d8 = (uint *)&processed_var_672_ptr;
  plocal_var_4d0 = stack_array_4c0;
  stack_array_4c0[0] = stack_array_4c0[0] & 0xffffff00;
  local_var_4c8 = CONCAT44(local_var_4c8._4_4_,0x10);
  strcpy_s(stack_array_4c0,0x20,&processed_var_872_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_6a8,&plocal_var_4d8,1);
  local_var_688 = *puVar2;
  if (plStack_6a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  plVar10 = plStack_660;
  plocal_var_4d8 = (uint *)&system_state_ptr;
  uVar12 = (int64_t)plocal_var_5b0 - (int64_t)plocal_var_5b8 >> 3;
  puVar5 = plocal_var_5b8;
  if (uVar12 != 0) {
    do {
      plocal_var_6a0 = (uint64_t *)(*puVar5 | uVar11);
      local_var_698 = 0;
      local_var_694 = 0;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plocal_var_6a0);
      plStack_680 = (int64_t *)(*puVar5 | uVar4);
      local_var_678 = 0;
      local_var_674 = 0;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_680);
      local_var_658 = *puVar5 | (uint64_t)plVar10;
      local_var_650 = 0;
      local_var_64c = 0;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_658);
      plStack_670 = (int64_t *)(*puVar5 | local_var_690);
      local_var_668 = 0;
      local_var_664 = 0;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_670);
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
    } while ((uint64_t)(int64_t)iVar7 < uVar12);
  }
  if (plStack_510 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (plocal_var_5b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plocal_var_5b8);
  }
  iVar7 = 0;
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  plocal_var_580 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_578 = stack_array_568;
  stack_array_568[0] = stack_array_568[0] & 0xffffff00;
  local_var_570 = CONCAT44((int)((uint64_t)local_var_570 >> 0x20),0x18);
  strcpy_s(stack_array_568,0x20,&rendering_buffer_2776_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_670,&plocal_var_580,1);
  plStack_6a8 = (int64_t *)*puVar2;
  SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_6a0);
  if (plStack_670 != (int64_t *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  plocal_var_580 = (uint64_t *)&system_state_ptr;
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  plocal_var_4d8 = (uint *)&processed_var_672_ptr;
  plocal_var_4d0 = stack_array_4c0;
  stack_array_4c0[0] = stack_array_4c0[0] & 0xffffff00;
  local_var_4c8 = CONCAT44((int)((uint64_t)local_var_4c8 >> 0x20),0x17);
  strcpy_s(stack_array_4c0,0x20,&processed_var_848_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_660,&plocal_var_4d8,1);
  plStack_6a8 = (int64_t *)*puVar2;
  SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_6a0);
  if (plStack_660 != (int64_t *)0x0) {
    (**(code **)(*plStack_660 + 0x38))();
  }
  plocal_var_4d8 = (uint *)&system_state_ptr;
  plocal_var_3f8 = &memory_allocator_3480_ptr;
  plocal_var_3f0 = stack_array_3e0;
  stack_array_3e0[0] = 0;
  local_var_3e8 = 0x17;
  strcpy_s(stack_array_3e0,0x40,&rendering_buffer_2712_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_6a8,&plocal_var_3f8,1);
  uVar3 = *puVar2;
  local_var_688 = uVar3;
  if (plStack_6a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  plocal_var_3f8 = &system_state_ptr;
  plocal_var_358 = &memory_allocator_3480_ptr;
  plocal_var_350 = stack_array_340;
  stack_array_340[0] = 0;
  local_var_348 = 0x16;
  strcpy_s(stack_array_340,0x40,&rendering_buffer_2736_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_670,&plocal_var_358,1);
  plStack_6a8 = (int64_t *)*puVar2;
  if (plStack_670 != (int64_t *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  plocal_var_358 = &system_state_ptr;
  plocal_var_580 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_578 = stack_array_568;
  stack_array_568[0] = stack_array_568[0] & 0xffffff00;
  local_var_570 = CONCAT44((int)((uint64_t)local_var_570 >> 0x20),0x10);
  strcpy_s(stack_array_568,0x20,&rendering_buffer_2856_ptr);
  puVar5 = (uint64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_580,1);
  plocal_var_580 = (uint64_t *)&system_state_ptr;
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  SystemCore_SecurityValidator(param_2,&local_var_688,&plocal_var_6a0);
  local_var_698 = 0;
  local_var_694 = 0;
  plocal_var_6a0 = puVar5;
  SystemCore_SecurityValidator(param_2,&local_var_688,&plocal_var_6a0);
  plocal_var_6a0 = (uint64_t *)0x0;
  local_var_698 = 0;
  local_var_694 = 0;
  SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_6a0);
  plocal_var_3f8 = &memory_allocator_3480_ptr;
  plocal_var_3f0 = stack_array_3e0;
  stack_array_3e0[0] = 0;
  local_var_3e8 = 0x21;
  strcpy_s(stack_array_3e0,0x40,&ui_system_data_1008_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_6a8,&plocal_var_3f8,1);
  uVar3 = *puVar2;
  local_var_688 = uVar3;
  if (plStack_6a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  plocal_var_3f8 = &system_state_ptr;
  plocal_var_5b8 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_5b0 = stack_array_5a0;
  stack_array_5a0[0] = stack_array_5a0[0] & 0xffffff00;
  local_var_5a8 = CONCAT44((int)((uint64_t)local_var_5a8 >> 0x20),0x13);
  strcpy_s(stack_array_5a0,0x20,&rendering_buffer_2880_ptr);
  uVar11 = SystemCore_LoggingSystem0(uVar3,&plocal_var_5b8,1);
  plocal_var_5b8 = (uint64_t *)&system_state_ptr;
  plStack_510 = (int64_t *)&processed_var_672_ptr;
  plocal_var_508 = stack_array_4f8;
  stack_array_4f8[0] = stack_array_4f8[0] & 0xffffff00;
  local_var_500 = CONCAT44((int)((uint64_t)local_var_500 >> 0x20),0x13);
  local_var_658 = uVar11;
  strcpy_s(stack_array_4f8,0x20,&rendering_buffer_2808_ptr);
  plStack_660 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plStack_510,1);
  plStack_510 = (int64_t *)&system_state_ptr;
  plocal_var_4a0 = &processed_var_672_ptr;
  plocal_var_498 = stack_array_488;
  stack_array_488[0] = 0;
  local_var_490 = 0x13;
  strcpy_s(stack_array_488,0x20,&rendering_buffer_2832_ptr);
  plStack_670 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_4a0,1);
  plocal_var_4a0 = &system_state_ptr;
  plocal_var_468 = &processed_var_672_ptr;
  plocal_var_460 = stack_array_450;
  stack_array_450[0] = 0;
  local_var_458 = 0x14;
  strcpy_s(stack_array_450,0x20,&rendering_buffer_2952_ptr);
  plStack_6a8 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_468,1);
  plocal_var_468 = &system_state_ptr;
  plocal_var_430 = &processed_var_672_ptr;
  plocal_var_428 = stack_array_418;
  stack_array_418[0] = 0;
  local_var_420 = 0x12;
  strcpy_s(stack_array_418,0x20,&ui_system_data_1432_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_430,1);
  plocal_var_430 = &system_state_ptr;
  plocal_var_580 = (uint64_t *)0x0;
  plocal_var_578 = (uint *)0x0;
  local_var_570 = 0;
  stack_array_568[0] = 3;
  plocal_var_4d8 = (uint *)0x0;
  plocal_var_4d0 = (uint *)0x0;
  local_var_4c8 = 0;
  stack_array_4c0[0] = 3;
  local_var_690._0_4_ = 0x80000000;
  SystemDatabaseProcessor(&plocal_var_580,&local_var_690);
  local_var_690 = CONCAT44(local_var_690._4_4_,0x200);
  uVar13 = SystemDatabaseProcessor(&plocal_var_580,&local_var_690);
  plStack_6b8 = (int64_t *)uVar3;
  function_1d7910(uVar13,0,&plocal_var_4d8,&plocal_var_580);
  uVar12 = (int64_t)plocal_var_4d0 - (int64_t)plocal_var_4d8 >> 2;
  if (uVar12 != 0) {
    local_var_690 = uVar4 | (uint64_t)plStack_660;
    plStack_680 = (int64_t *)(uVar4 | (uint64_t)plStack_670);
    plocal_var_6a0 = (uint64_t *)(uVar4 | (uint64_t)plStack_6a8);
    puVar9 = plocal_var_4d8;
    do {
      uVar1 = *puVar9;
      local_var_640 = 0;
      local_var_634 = 0;
      local_var_638 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_640);
      local_var_630 = local_var_658;
      local_var_624 = 0;
      local_var_628 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_630);
      plStack_620 = plStack_660;
      local_var_614 = 0;
      local_var_618 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_620);
      plStack_610 = plStack_670;
      local_var_604 = 0;
      local_var_608 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_610);
      plStack_600 = plStack_6a8;
      local_var_5f4 = 0;
      local_var_5f8 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_600);
      local_var_5e4 = 0;
      local_var_5f0 = uVar4;
      local_var_5e8 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_5f0);
      local_var_5d4 = 0;
      local_var_5e0 = uVar4 | uVar11;
      local_var_5d8 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_5e0);
      local_var_5d0 = local_var_690;
      local_var_5c4 = 0;
      local_var_5c8 = uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&local_var_5d0);
      plStack_510 = plStack_680;
      plocal_var_508._0_6_ = (uint6)uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plStack_510);
      plocal_var_5b8 = plocal_var_6a0;
      plocal_var_5b0._0_6_ = (uint6)uVar1;
      SystemCore_SecurityValidator(param_2,&local_var_688,&plocal_var_5b8);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 1;
    } while ((uint64_t)(int64_t)iVar7 < uVar12);
  }
  iVar7 = 0;
  if (plocal_var_4d8 != (uint *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (plocal_var_580 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStack_510 = (int64_t *)0x0;
  plocal_var_508 = (uint *)0x0;
  local_var_500 = 0;
  stack_array_4f8[0] = 3;
  plocal_var_580 = (uint64_t *)0x0;
  plocal_var_578 = (uint *)0x0;
  local_var_570 = 0;
  stack_array_568[0] = 3;
  puVar2 = (uint64_t *)function_09e9e0(0,&plocal_var_6a0,&processed_var_816_ptr);
  uVar3 = *puVar2;
  if (plocal_var_6a0 != (uint64_t *)0x0) {
    (**(code **)(*plocal_var_6a0 + 0x38))();
  }
  plocal_var_430 = &processed_var_672_ptr;
  plocal_var_428 = stack_array_418;
  stack_array_418[0] = 0;
  local_var_420 = 0x11;
  strcpy_s(stack_array_418,0x20,&memory_allocator_3056_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_430,1);
  SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_430 = &system_state_ptr;
  plocal_var_468 = &processed_var_672_ptr;
  plocal_var_460 = stack_array_450;
  stack_array_450[0] = 0;
  local_var_458 = 0x10;
  strcpy_s(stack_array_450,0x20,&memory_allocator_3120_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_468,1);
  SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_468 = &system_state_ptr;
  plocal_var_4a0 = &processed_var_672_ptr;
  plocal_var_498 = stack_array_488;
  stack_array_488[0] = 0;
  local_var_490 = 0x11;
  strcpy_s(stack_array_488,0x20,&memory_allocator_3096_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_4a0,1);
  SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_4a0 = &system_state_ptr;
  plocal_var_4d8 = (uint *)&processed_var_672_ptr;
  plocal_var_4d0 = stack_array_4c0;
  stack_array_4c0[0] = stack_array_4c0[0] & 0xffffff00;
  local_var_4c8 = CONCAT44((int)((uint64_t)local_var_4c8 >> 0x20),0x10);
  strcpy_s(stack_array_4c0,0x20,&memory_allocator_3176_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_4d8,1);
  SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_4d8 = (uint *)&system_state_ptr;
  plocal_var_5b8 = (uint64_t *)&processed_var_672_ptr;
  plocal_var_5b0 = stack_array_5a0;
  stack_array_5a0[0] = stack_array_5a0[0] & 0xffffff00;
  local_var_5a8 = CONCAT44((int)((uint64_t)local_var_5a8 >> 0x20),0xf);
  strcpy_s(stack_array_5a0,0x20,&memory_allocator_3224_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_5b8,1);
  SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_5b8 = (uint64_t *)&system_state_ptr;
  plocal_var_548 = &processed_var_672_ptr;
  plocal_var_540 = stack_array_530;
  stack_array_530[0] = 0;
  local_var_538 = 0x10;
  strcpy_s(stack_array_530,0x20,&memory_allocator_3200_ptr);
  plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_548,1);
  uVar13 = SystemInitializer(&plStack_510,&plStack_680);
  plocal_var_548 = &system_state_ptr;
  plStack_6b8 = (int64_t *)uVar3;
  function_1d7ad0(uVar13,0,&plocal_var_580,&plStack_510);
  uVar11 = (int64_t)plocal_var_578 - (int64_t)plocal_var_580 >> 3;
  puVar2 = plocal_var_580;
  iVar8 = iVar7;
  if (uVar11 != 0) {
    do {
      plocal_var_5b8 = (uint64_t *)*puVar2;
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      plocal_var_548 = &processed_var_672_ptr;
      plocal_var_540 = stack_array_530;
      stack_array_530[0] = 0;
      local_var_538 = 0xb;
      strcpy_s(stack_array_530,0x20,&processed_var_816_ptr);
      puVar6 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_680,&plocal_var_548,1);
      plocal_var_6a0 = (uint64_t *)*puVar6;
      SystemCore_SecurityValidator(param_2,&plocal_var_6a0,&plocal_var_5b8);
      if (plStack_680 != (int64_t *)0x0) {
        (**(code **)(*plStack_680 + 0x38))();
      }
      plocal_var_548 = &system_state_ptr;
      iVar8 = iVar8 + 1;
      puVar2 = puVar2 + 1;
    } while ((uint64_t)(int64_t)iVar8 < uVar11);
  }
  if (plocal_var_580 == (uint64_t *)0x0) {
    if (plStack_510 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plStack_510 = (int64_t *)0x0;
    plocal_var_508 = (uint *)0x0;
    local_var_500 = 0;
    stack_array_4f8[0] = 3;
    puVar2 = (uint64_t *)function_09e9e0(0,&plocal_var_6a0,&rendering_buffer_2976_ptr);
    uVar3 = *puVar2;
    if (plocal_var_6a0 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_6a0 + 0x38))();
    }
    plocal_var_548 = &processed_var_672_ptr;
    plocal_var_540 = stack_array_530;
    stack_array_530[0] = 0;
    local_var_538 = 0x10;
    strcpy_s(stack_array_530,0x20,&rendering_buffer_2904_ptr);
    plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_548,1);
    SystemInitializer(&plStack_510,&plStack_680);
    plocal_var_548 = &system_state_ptr;
    plocal_var_430 = &processed_var_672_ptr;
    plocal_var_428 = stack_array_418;
    stack_array_418[0] = 0;
    local_var_420 = 0x11;
    strcpy_s(stack_array_418,0x20,&rendering_buffer_2928_ptr);
    plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_430,1);
    SystemInitializer(&plStack_510,&plStack_680);
    plocal_var_430 = &system_state_ptr;
    plocal_var_468 = &processed_var_672_ptr;
    plocal_var_460 = stack_array_450;
    stack_array_450[0] = 0;
    local_var_458 = 0x1c;
    strcpy_s(stack_array_450,0x20,&memory_allocator_3048_ptr);
    plStack_680 = (int64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_468,1);
    SystemInitializer(&plStack_510,&plStack_680);
    plocal_var_468 = &system_state_ptr;
    plocal_var_4a0 = &processed_var_672_ptr;
    plocal_var_498 = stack_array_488;
    stack_array_488[0] = 0;
    local_var_490 = 0x18;
    strcpy_s(stack_array_488,0x20,&memory_allocator_3080_ptr);
    plocal_var_6a0 = (uint64_t *)SystemCore_LoggingSystem0(uVar3,&plocal_var_4a0,1);
    uVar13 = SystemInitializer(&plStack_510,&plocal_var_6a0);
    plocal_var_4a0 = &system_state_ptr;
    uVar11 = (int64_t)plocal_var_508 - (int64_t)plStack_510 >> 3;
    plVar10 = plStack_510;
    if (uVar11 != 0) {
      do {
        plocal_var_5b8 = (uint64_t *)*plVar10;
        plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
        plocal_var_548 = &processed_var_672_ptr;
        plocal_var_540 = stack_array_530;
        stack_array_530[0] = 0;
        local_var_538 = 0x18;
        strcpy_s(stack_array_530,0x20,&rendering_buffer_2976_ptr);
        puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_680,&plocal_var_548,1);
        plocal_var_6a0 = (uint64_t *)*puVar2;
        uVar13 = SystemCore_SecurityValidator(param_2,&plocal_var_6a0,&plocal_var_5b8);
        if (plStack_680 != (int64_t *)0x0) {
          uVar13 = (**(code **)(*plStack_680 + 0x38))();
        }
        plocal_var_548 = &system_state_ptr;
        iVar7 = iVar7 + 1;
        plVar10 = plVar10 + 1;
      } while ((uint64_t)(int64_t)iVar7 < uVar11);
    }
    if (plStack_510 == (int64_t *)0x0) {
      puVar5 = (uint64_t *)function_09e9e0(uVar13,&plocal_var_6a0,&memory_allocator_3008_ptr);
      uVar11 = *puVar5;
      local_var_690 = uVar11;
      if (plocal_var_6a0 != (uint64_t *)0x0) {
        (**(code **)(*plocal_var_6a0 + 0x38))();
      }
      plocal_var_548 = &processed_var_672_ptr;
      plocal_var_540 = stack_array_530;
      stack_array_530[0] = 0;
      local_var_538 = 0xe;
      strcpy_s(stack_array_530,0x20,&memory_allocator_3032_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(uVar11,&plocal_var_548,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_548 = &system_state_ptr;
      plocal_var_430 = &processed_var_672_ptr;
      plocal_var_428 = stack_array_418;
      stack_array_418[0] = 0;
      local_var_420 = 0xd;
      strcpy_s(stack_array_418,0x20,&rendering_buffer_2584_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_430,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_430 = &system_state_ptr;
      plocal_var_468 = &processed_var_672_ptr;
      plocal_var_460 = stack_array_450;
      stack_array_450[0] = 0;
      local_var_458 = 7;
      strcpy_s(stack_array_450,0x20,&rendering_buffer_2544_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_468,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_468 = &system_state_ptr;
      plocal_var_4a0 = &processed_var_672_ptr;
      plocal_var_498 = stack_array_488;
      stack_array_488[0] = 0;
      local_var_490 = 0xd;
      strcpy_s(stack_array_488,0x20,&rendering_buffer_2552_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_4a0,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_4a0 = &system_state_ptr;
      plocal_var_580 = (uint64_t *)&processed_var_672_ptr;
      plocal_var_578 = stack_array_568;
      stack_array_568[0] = stack_array_568[0] & 0xffffff00;
      local_var_570 = CONCAT44((int)((uint64_t)local_var_570 >> 0x20),8);
      strcpy_s(stack_array_568,0x20,&rendering_buffer_2512_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_580,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_580 = (uint64_t *)&system_state_ptr;
      plocal_var_4d8 = (uint *)&processed_var_672_ptr;
      plocal_var_4d0 = stack_array_4c0;
      stack_array_4c0[0] = stack_array_4c0[0] & 0xffffff00;
      local_var_4c8 = CONCAT44((int)((uint64_t)local_var_4c8 >> 0x20),8);
      strcpy_s(stack_array_4c0,0x20,&rendering_buffer_2528_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_4d8,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_4d8 = (uint *)&system_state_ptr;
      plStack_510 = (int64_t *)&processed_var_672_ptr;
      plocal_var_508 = stack_array_4f8;
      stack_array_4f8[0] = stack_array_4f8[0] & 0xffffff00;
      local_var_500 = CONCAT44((int)((uint64_t)local_var_500 >> 0x20),7);
      strcpy_s(stack_array_4f8,0x20,&rendering_buffer_2496_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plStack_510,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plStack_510 = (int64_t *)&system_state_ptr;
      plocal_var_358 = &processed_var_672_ptr;
      plocal_var_350 = stack_array_340;
      stack_array_340[0] = 0;
      local_var_348 = 7;
      strcpy_s(stack_array_340,0x20,&rendering_buffer_2504_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_358,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_358 = &system_state_ptr;
      plocal_var_3f8 = &processed_var_672_ptr;
      plocal_var_3f0 = stack_array_3e0;
      stack_array_3e0[0] = 0;
      local_var_3e8 = 0xc;
      strcpy_s(stack_array_3e0,0x20,&memory_allocator_3152_ptr);
      plocal_var_5b8 = (uint64_t *)SystemCore_LoggingSystem0(local_var_690,&plocal_var_3f8,1);
      plocal_var_5b0 = (uint *)((uint64_t)plocal_var_5b0 & 0xffff000000000000);
      SystemCore_SecurityValidator(param_2,&local_var_690,&plocal_var_5b8);
      plocal_var_3f8 = &system_state_ptr;
      plocal_var_2b8 = &memory_allocator_3480_ptr;
      plocal_var_2b0 = stack_array_2a0;
      stack_array_2a0[0] = 0;
      local_var_2a8 = 0xd;
      strcpy_s(stack_array_2a0,0x40,&memory_allocator_3168_ptr);
      puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plocal_var_6a0,&plocal_var_2b8,1);
      plVar10 = (int64_t *)*puVar2;
      plStack_6a8 = plVar10;
      if (plocal_var_6a0 != (uint64_t *)0x0) {
        (**(code **)(*plocal_var_6a0 + 0x38))();
      }
      plocal_var_2b8 = &system_state_ptr;
      plocal_var_3f8 = &processed_var_672_ptr;
      plocal_var_3f0 = stack_array_3e0;
      stack_array_3e0[0] = 0;
      local_var_3e8 = 0xd;
      strcpy_s(stack_array_3e0,0x20,&memory_allocator_3112_ptr);
      puVar5 = (uint64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_3f8,1);
      plocal_var_3f8 = &system_state_ptr;
      plocal_var_5b8 = (uint64_t *)0x0;
      plocal_var_5b0._0_6_ = 0x400000000;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
      plocal_var_5b0 = (uint *)CONCAT26(plocal_var_5b0._6_2_,0x400000000);
      plocal_var_5b8 = puVar5;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
      plocal_var_358 = &memory_allocator_3480_ptr;
      plocal_var_350 = stack_array_340;
      stack_array_340[0] = 0;
      local_var_348 = 0x16;
      strcpy_s(stack_array_340,0x40,&memory_allocator_3128_ptr);
      puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plocal_var_6a0,&plocal_var_358,1);
      plVar10 = (int64_t *)*puVar2;
      plStack_6a8 = plVar10;
      if (plocal_var_6a0 != (uint64_t *)0x0) {
        (**(code **)(*plocal_var_6a0 + 0x38))();
      }
      plocal_var_358 = &system_state_ptr;
      plocal_var_3f8 = &processed_var_672_ptr;
      plocal_var_3f0 = stack_array_3e0;
      stack_array_3e0[0] = 0;
      local_var_3e8 = 0xd;
      strcpy_s(stack_array_3e0,0x20,&memory_allocator_3112_ptr);
      puVar5 = (uint64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_3f8,1);
      plocal_var_3f8 = &system_state_ptr;
      plocal_var_5b8 = (uint64_t *)0x0;
      plocal_var_5b0._0_6_ = 0x400000000;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
      plocal_var_5b0 = (uint *)CONCAT26(plocal_var_5b0._6_2_,0x400000000);
      plocal_var_5b8 = puVar5;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
      plocal_var_2b8 = &memory_allocator_3480_ptr;
      plocal_var_2b0 = stack_array_2a0;
      stack_array_2a0[0] = 0;
      local_var_2a8 = 0x15;
      strcpy_s(stack_array_2a0,0x40,&memory_allocator_3184_ptr);
      puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plocal_var_6a0,&plocal_var_2b8,1);
      plVar10 = (int64_t *)*puVar2;
      plStack_6a8 = plVar10;
      if (plocal_var_6a0 != (uint64_t *)0x0) {
        (**(code **)(*plocal_var_6a0 + 0x38))();
      }
      plocal_var_2b8 = &system_state_ptr;
      plocal_var_3f8 = &processed_var_672_ptr;
      plocal_var_3f0 = stack_array_3e0;
      stack_array_3e0[0] = 0;
      local_var_3e8 = 0xd;
      strcpy_s(stack_array_3e0,0x20,&memory_allocator_3112_ptr);
      puVar5 = (uint64_t *)SystemCore_LoggingSystem0(plVar10,&plocal_var_3f8,1);
      plocal_var_3f8 = &system_state_ptr;
      plocal_var_5b8 = (uint64_t *)0x0;
      plocal_var_5b0._0_6_ = 0x400000000;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
      plocal_var_5b0 = (uint *)CONCAT26(plocal_var_5b0._6_2_,0x400000000);
      plocal_var_5b8 = puVar5;
      SystemCore_SecurityValidator(param_2,&plStack_6a8,&plocal_var_5b8);
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_6d8);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plStack_510);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plocal_var_580);
}
// WARNING: Removing unreachable block (ram,0x0001801de3f3)
// WARNING: Removing unreachable block (ram,0x0001801de496)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1de280(uint64_t param_1,int64_t *param_2,int64_t *param_3)
{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  byte bVar13;
  uint64_t stack_special_x_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  void **ppstack_special_x_20;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  uint64_t local_var_90;
  int8_t stack_array_88 [32];
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int64_t *plStack_58;
  local_var_b8 = 0xfffffffffffffffe;
  bVar13 = 1;
  uVar11 = 0;
  lVar9 = *param_2;
  lVar2 = param_2[1] - lVar9 >> 0x3f;
  uVar10 = uVar11;
  stack_special_x_8 = param_1;
  plStackX_18 = param_3;
  if ((param_2[1] - lVar9) / 0x18 + lVar2 != lVar2) {
    do {
      if (*(char *)(system_main_module_state + 0x1ed) == '\0') {
        uVar10 = system_main_module_state;
        if ((int64_t *)*param_3 != (int64_t *)0x0) {
          uVar10 = (**(code **)(*(int64_t *)*param_3 + 0x38))();
        }
        return uVar10 & 0xffffffffffffff00;
      }
      lVar2 = *(int64_t *)(uVar11 + lVar9);
      if (lVar2 != 0) {
        ppstack_special_x_20 = &plocal_var_f0;
        plocal_var_f0 = &system_data_buffer_ptr;
        local_var_d8 = 0;
        lStack_e8 = 0;
        local_var_e0 = 0;
        plStack_c0 = (int64_t *)0x0;
        puVar1 = (int32_t *)(uVar11 + 8 + lVar9);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        local_var_d0 = 0;
        local_var_cc = 0;
        local_var_c8 = 0;
        local_var_c4 = 0;
        plVar3 = (int64_t *)*param_3;
        if (plVar3 != (int64_t *)0x0) {
          plStackX_10 = plVar3;
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        plStackX_10 = plStack_c0;
        if (plStack_c0 != (int64_t *)0x0) {
          lVar9 = *plStack_c0;
          plStack_c0 = plVar3;
          (**(code **)(lVar9 + 0x38))();
          plVar3 = plStack_c0;
        }
        plStack_c0 = plVar3;
        uVar4 = *(uint64_t *)(lVar2 + 0x15b8);
        ppstack_special_x_20 = (void **)&lStack_b0;
        local_var_90 = 0;
        local_var_98 = 0;
        lStack_b0 = lVar2;
        local_var_a8 = uVar5;
        local_var_a4 = uVar6;
        local_var_a0 = uVar7;
        local_var_9c = uVar8;
        CoreEngineDataTransformer(stack_array_88,&plocal_var_f0);
        local_var_68 = local_var_d0;
        local_var_64 = local_var_cc;
        local_var_60 = local_var_c8;
        local_var_5c = local_var_c4;
        plStack_58 = plStack_c0;
        if (plStack_c0 != (int64_t *)0x0) {
          (**(code **)(*plStack_c0 + 0x28))();
        }
        lVar9 = UIRenderingEngine(uVar4,0,&lStack_b0,&stack_special_x_8);
        bVar13 = bVar13 & lVar9 != 0;
        if (plStack_c0 != (int64_t *)0x0) {
          (**(code **)(*plStack_c0 + 0x38))();
        }
        ppstack_special_x_20 = &plocal_var_f0;
        plocal_var_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        local_var_d8 = local_var_d8 & 0xffffffff00000000;
        lStack_e8 = 0;
        plocal_var_f0 = &system_state_ptr;
      }
      uVar12 = (int)uVar10 + 1;
      uVar11 = uVar11 + 0x18;
      lVar9 = *param_2;
      uVar10 = (uint64_t)uVar12;
    } while ((uint64_t)(int64_t)(int)uVar12 < (uint64_t)((param_2[1] - lVar9) / 0x18));
  }
  if ((int64_t *)*param_3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_3 + 0x38))();
  }
  return (uint64_t)bVar13;
}