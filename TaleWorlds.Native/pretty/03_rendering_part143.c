// $fun 的语义化别名
#define $alias_name $fun
/* SystemScheduler - RenderingSystem_ResourceBinder */
#define RenderingSystem_ResourceBinder SystemScheduler
// 03_rendering_part143.c - 6 个函数
// 函数: void function_35548e(void)
void function_35548e(void)
{
  int64_t lVar1;
  uint64_t in_RAX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int64_t local_buffer_88;
  if ((1 < in_RAX) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(local_buffer_88 + 0x28) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R15 * 8) = local_buffer_88;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = local_buffer_88;
  unaff_R14[1] = lVar1 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}
// 函数: void function_3554b1(void)
void function_3554b1(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int64_t local_buffer_80;
  int64_t local_buffer_88;
  *(uint64_t *)(local_buffer_88 + 0x28) =
       *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + local_buffer_80 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + local_buffer_80 * 8) = local_buffer_88;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = local_buffer_88;
  unaff_R14[1] = lVar1 + local_buffer_80 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_355500(uint64_t *param_1)
void function_355500(uint64_t *param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  void *plocal_var_2e8;
  uint64_t *plocal_var_2e0;
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  puVar5 = param_1;
  SystemCore_SyncController();
  *puVar5 = &memory_allocator_3136_ptr;
  puVar4 = puVar5 + 0xe;
  *puVar4 = &system_state_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *puVar4 = &system_data_buffer_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  plocal_var_2e8 = &system_data_buffer_ptr;
  local_var_2d0 = 0;
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d8 = 0;
  plocal_var_48 = puVar4;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_2e0 = (uint64_t *)puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x74736554;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_2d8 = 4;
  local_var_2d0._0_4_ = uVar2;
  RenderingSystem_ResourceBinder(puVar4);
  plocal_var_2e8 = &system_data_buffer_ptr;
  if (plocal_var_2e0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d0 = (uint64_t)local_var_2d0._4_4_ << 0x20;
  plocal_var_2e8 = &system_state_ptr;
  param_1[0x12] = 0;
  param_1[0x13] = 0x403e000000000000;
  param_1[0x14] = 0x4008000000000000;
  param_1[0x17] = 0;
  plVar1 = (int64_t *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x16] = 0x3ff0000000000000;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  plocal_var_2e8 = &system_data_buffer_ptr;
  local_var_2d0 = 0;
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d8 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_2e0 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_2d0 = CONCAT44(local_var_2d0._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  local_var_2d8 = 9;
  SystemNetwork_Processor(param_1,&plocal_var_2e8,plocal_var_48,0);
  plocal_var_2e8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
uint64_t * function_356600(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  *param_1 = &memory_allocator_3136_ptr;
  plVar1 = (int64_t *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x23] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x23] + 0x38))();
  }
  if ((int64_t *)param_1[0x22] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x22] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x148);
  }
  return param_1;
}
// 函数: void function_356720(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_356720(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t *aplStackX_8 [4];
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  function_35a770();
  puVar3 = (uint64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,uVar5);
  *(uint64_t *)(param_1 + 0x108) = *puVar3;
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  plVar4 = (int64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar4;
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  lVar2 = *(int64_t *)(param_1 + 0x108);
  if (lVar1 != lVar2) {
    *(int32_t *)(param_1 + 0x124) = 0xffffffff;
  }
  if ((lVar1 != 0) &&
     ((lVar1 != lVar2 || ((lVar2 != 0 && (*(int *)(param_1 + 0x124) < *(int *)(lVar2 + 0x70))))))) {
    *(int64_t *)(param_1 + 0x108) = lVar1;
    if (*(char *)(param_1 + 0xcb) == '\0') {
      function_35bbd0(param_1);
    }
    else {
      if (((*(int64_t *)(param_1 + 0xd0) == 0) && (*(int64_t *)(param_1 + 0xd8) == 0)) &&
         (*(int64_t *)(param_1 + 0xe0) == 0)) {
        return;
      }
      function_35b330(param_1);
    }
    *(int32_t *)(param_1 + 0x124) = *(int32_t *)(*(int64_t *)(param_1 + 0x108) + 0x70);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_356780(int64_t param_1)
void function_356780(int64_t param_1)
{
  uint64_t *puVar1;
  int8_t stack_array_708 [32];
  int64_t *plStack_6e8;
  uint64_t local_var_6e0;
  void *plocal_var_6d8;
  int8_t *plocal_var_6d0;
  int32_t local_var_6c8;
  int8_t stack_array_6c0 [72];
  void *plocal_var_678;
  int8_t *plocal_var_670;
  int32_t local_var_668;
  int8_t stack_array_660 [72];
  void *plocal_var_618;
  int8_t *plocal_var_610;
  int32_t local_var_608;
  int8_t stack_array_600 [72];
  void *plocal_var_5b8;
  int8_t *plocal_var_5b0;
  int32_t local_var_5a8;
  int8_t stack_array_5a0 [72];
  void *plocal_var_558;
  int8_t *plocal_var_550;
  int32_t local_var_548;
  int8_t stack_array_540 [72];
  void *plocal_var_4f8;
  int8_t *plocal_var_4f0;
  int32_t local_var_4e8;
  int8_t stack_array_4e0 [72];
  void *plocal_var_498;
  int8_t *plocal_var_490;
  int32_t local_var_488;
  int8_t stack_array_480 [72];
  void *plocal_var_438;
  int8_t *plocal_var_430;
  int32_t local_var_428;
  int8_t stack_array_420 [72];
  void *plocal_var_3d8;
  int8_t *plocal_var_3d0;
  int32_t local_var_3c8;
  int8_t stack_array_3c0 [72];
  void *plocal_var_378;
  int8_t *plocal_var_370;
  int32_t local_var_368;
  int8_t stack_array_360 [72];
  void *plocal_var_318;
  int8_t *plocal_var_310;
  int32_t local_var_308;
  int8_t stack_array_300 [72];
  void *plocal_var_2b8;
  int8_t *plocal_var_2b0;
  int32_t local_var_2a8;
  int8_t stack_array_2a0 [72];
  void *plocal_var_258;
  int8_t *plocal_var_250;
  int32_t local_var_248;
  int8_t stack_array_240 [72];
  void *plocal_var_1f8;
  int8_t *plocal_var_1f0;
  int32_t local_var_1e8;
  int8_t stack_array_1e0 [72];
  void *plocal_var_198;
  int8_t *plocal_var_190;
  int32_t local_var_188;
  int8_t stack_array_180 [72];
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  int8_t stack_array_120 [72];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_6e0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_708;
  function_35a770();
  puVar1 = (uint64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_6e8,
                         param_1 + 0x70);
  *(uint64_t *)(param_1 + 0x108) = *puVar1;
  if (plStack_6e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_6e8 + 0x38))();
  }
  function_358a50(param_1);
  if (*(char *)(param_1 + 0xcb) == '\0') {
    if (*(char *)(param_1 + 0xc9) == '\0') {
      plocal_var_78 = &memory_allocator_3480_ptr;
      plocal_var_70 = stack_array_60;
      stack_array_60[0] = 0;
      local_var_68 = 0x13;
      strcpy_s(stack_array_60,0x40,&memory_allocator_3024_ptr);
      plocal_var_78 = &system_state_ptr;
      plocal_var_d8 = &memory_allocator_3480_ptr;
      plocal_var_d0 = stack_array_c0;
      stack_array_c0[0] = 0;
      local_var_c8 = 0x17;
      strcpy_s(stack_array_c0,0x40,&memory_allocator_3000_ptr);
      plocal_var_d8 = &system_state_ptr;
      plocal_var_138 = &memory_allocator_3480_ptr;
      plocal_var_130 = stack_array_120;
      stack_array_120[0] = 0;
      local_var_128 = 0x23;
      strcpy_s(stack_array_120,0x40,&system_data_eba8);
      plocal_var_138 = &system_state_ptr;
      plocal_var_198 = &memory_allocator_3480_ptr;
      plocal_var_190 = stack_array_180;
      stack_array_180[0] = 0;
      local_var_188 = 0x12;
      strcpy_s(stack_array_180,0x40,&system_data_eb60);
      plocal_var_198 = &system_state_ptr;
      plocal_var_1f8 = &memory_allocator_3480_ptr;
      plocal_var_1f0 = stack_array_1e0;
      stack_array_1e0[0] = 0;
      local_var_1e8 = 0x13;
      strcpy_s(stack_array_1e0,0x40,&system_data_eb48);
      plocal_var_1f8 = &system_state_ptr;
      plocal_var_258 = &memory_allocator_3480_ptr;
      plocal_var_250 = stack_array_240;
      stack_array_240[0] = 0;
      local_var_248 = 0x11;
      strcpy_s(stack_array_240,0x40,&memory_allocator_3048_ptr);
      plocal_var_258 = &system_state_ptr;
      plocal_var_2b8 = &memory_allocator_3480_ptr;
      plocal_var_2b0 = stack_array_2a0;
      stack_array_2a0[0] = 0;
      local_var_2a8 = 9;
      strcpy_s(stack_array_2a0,0x40,&system_data_eb88);
      plocal_var_2b8 = &system_state_ptr;
      plocal_var_318 = &memory_allocator_3480_ptr;
      plocal_var_310 = stack_array_300;
      stack_array_300[0] = 0;
      local_var_308 = 0x23;
      strcpy_s(stack_array_300,0x40,&system_data_eba8);
      plocal_var_318 = &system_state_ptr;
      plocal_var_378 = &memory_allocator_3480_ptr;
      plocal_var_370 = stack_array_360;
      stack_array_360[0] = 0;
      local_var_368 = 0x22;
      strcpy_s(stack_array_360,0x40,&system_data_ec30);
      plocal_var_378 = &system_state_ptr;
      plocal_var_3d8 = &memory_allocator_3480_ptr;
      plocal_var_3d0 = stack_array_3c0;
      stack_array_3c0[0] = 0;
      local_var_3c8 = 0x15;
      strcpy_s(stack_array_3c0,0x40,&system_data_ec18);
      plocal_var_3d8 = &system_state_ptr;
      plocal_var_438 = &memory_allocator_3480_ptr;
      plocal_var_430 = stack_array_420;
      stack_array_420[0] = 0;
      local_var_428 = 0x15;
      strcpy_s(stack_array_420,0x40,&system_data_ec58);
      plocal_var_438 = &system_state_ptr;
      plocal_var_498 = &memory_allocator_3480_ptr;
      plocal_var_490 = stack_array_480;
      stack_array_480[0] = 0;
      local_var_488 = 0x15;
      strcpy_s(stack_array_480,0x40,&system_data_ecb8);
      plocal_var_498 = &system_state_ptr;
      plocal_var_4f8 = &memory_allocator_3480_ptr;
      plocal_var_4f0 = stack_array_4e0;
      stack_array_4e0[0] = 0;
      local_var_4e8 = 0x15;
      strcpy_s(stack_array_4e0,0x40,&system_data_eca0);
      plocal_var_4f8 = &system_state_ptr;
      plocal_var_558 = &memory_allocator_3480_ptr;
      plocal_var_550 = stack_array_540;
      stack_array_540[0] = 0;
      local_var_548 = 0x15;
      strcpy_s(stack_array_540,0x40,&system_data_ec88);
      plocal_var_558 = &system_state_ptr;
      plocal_var_5b8 = &memory_allocator_3480_ptr;
      plocal_var_5b0 = stack_array_5a0;
      stack_array_5a0[0] = 0;
      local_var_5a8 = 0x15;
      strcpy_s(stack_array_5a0,0x40,&system_data_ec70);
      plocal_var_5b8 = &system_state_ptr;
      plocal_var_618 = &memory_allocator_3480_ptr;
      plocal_var_610 = stack_array_600;
      stack_array_600[0] = 0;
      local_var_608 = 0x15;
      strcpy_s(stack_array_600,0x40,&system_data_ed30);
      plocal_var_618 = &system_state_ptr;
      plocal_var_678 = &memory_allocator_3480_ptr;
      plocal_var_670 = stack_array_660;
      stack_array_660[0] = 0;
      local_var_668 = 0x15;
      strcpy_s(stack_array_660,0x40,&system_data_ed18);
      plocal_var_678 = &system_state_ptr;
      plocal_var_6d8 = &memory_allocator_3480_ptr;
      plocal_var_6d0 = stack_array_6c0;
      stack_array_6c0[0] = 0;
      local_var_6c8 = 0x1a;
      strcpy_s(stack_array_6c0,0x40,&system_data_ecf8);
      plocal_var_6d8 = &system_state_ptr;
    }
    else {
      plocal_var_d8 = &memory_allocator_3480_ptr;
      plocal_var_d0 = stack_array_c0;
      stack_array_c0[0] = 0;
      local_var_c8 = 9;
      strcpy_s(stack_array_c0,0x40,&system_data_eb88);
      plocal_var_d8 = &system_state_ptr;
      plocal_var_138 = &memory_allocator_3480_ptr;
      plocal_var_130 = stack_array_120;
      stack_array_120[0] = 0;
      local_var_128 = 0x13;
      strcpy_s(stack_array_120,0x40,&memory_allocator_3024_ptr);
      plocal_var_138 = &system_state_ptr;
      plocal_var_198 = &memory_allocator_3480_ptr;
      plocal_var_190 = stack_array_180;
      stack_array_180[0] = 0;
      local_var_188 = 0x17;
      strcpy_s(stack_array_180,0x40,&memory_allocator_3000_ptr);
      plocal_var_198 = &system_state_ptr;
      plocal_var_1f8 = &memory_allocator_3480_ptr;
      plocal_var_1f0 = stack_array_1e0;
      stack_array_1e0[0] = 0;
      local_var_1e8 = 0x23;
      strcpy_s(stack_array_1e0,0x40,&system_data_eba8);
      plocal_var_1f8 = &system_state_ptr;
      plocal_var_258 = &memory_allocator_3480_ptr;
      plocal_var_250 = stack_array_240;
      stack_array_240[0] = 0;
      local_var_248 = 0x12;
      strcpy_s(stack_array_240,0x40,&system_data_eb60);
      plocal_var_258 = &system_state_ptr;
      plocal_var_2b8 = &memory_allocator_3480_ptr;
      plocal_var_2b0 = stack_array_2a0;
      stack_array_2a0[0] = 0;
      local_var_2a8 = 0x13;
      strcpy_s(stack_array_2a0,0x40,&system_data_eb48);
      plocal_var_2b8 = &system_state_ptr;
      plocal_var_318 = &memory_allocator_3480_ptr;
      plocal_var_310 = stack_array_300;
      stack_array_300[0] = 0;
      local_var_308 = 0x11;
      strcpy_s(stack_array_300,0x40,&memory_allocator_3048_ptr);
      plocal_var_318 = &system_state_ptr;
      plocal_var_378 = &memory_allocator_3480_ptr;
      plocal_var_370 = stack_array_360;
      stack_array_360[0] = 0;
      local_var_368 = 0x23;
      strcpy_s(stack_array_360,0x40,&system_data_eba8);
      plocal_var_378 = &system_state_ptr;
      plocal_var_3d8 = &memory_allocator_3480_ptr;
      plocal_var_3d0 = stack_array_3c0;
      stack_array_3c0[0] = 0;
      local_var_3c8 = 0x22;
      strcpy_s(stack_array_3c0,0x40,&system_data_ec30);
      plocal_var_3d8 = &system_state_ptr;
      plocal_var_438 = &memory_allocator_3480_ptr;
      plocal_var_430 = stack_array_420;
      stack_array_420[0] = 0;
      local_var_428 = 0x15;
      strcpy_s(stack_array_420,0x40,&system_data_ec18);
      plocal_var_438 = &system_state_ptr;
      plocal_var_498 = &memory_allocator_3480_ptr;
      plocal_var_490 = stack_array_480;
      stack_array_480[0] = 0;
      local_var_488 = 0x15;
      strcpy_s(stack_array_480,0x40,&system_data_ec58);
      plocal_var_498 = &system_state_ptr;
      plocal_var_4f8 = &memory_allocator_3480_ptr;
      plocal_var_4f0 = stack_array_4e0;
      stack_array_4e0[0] = 0;
      local_var_4e8 = 0x15;
      strcpy_s(stack_array_4e0,0x40,&system_data_ecb8);
      plocal_var_4f8 = &system_state_ptr;
      plocal_var_558 = &memory_allocator_3480_ptr;
      plocal_var_550 = stack_array_540;
      stack_array_540[0] = 0;
      local_var_548 = 0x15;
      strcpy_s(stack_array_540,0x40,&system_data_eca0);
      plocal_var_558 = &system_state_ptr;
      plocal_var_5b8 = &memory_allocator_3480_ptr;
      plocal_var_5b0 = stack_array_5a0;
      stack_array_5a0[0] = 0;
      local_var_5a8 = 0x15;
      strcpy_s(stack_array_5a0,0x40,&system_data_ec88);
      plocal_var_5b8 = &system_state_ptr;
      plocal_var_618 = &memory_allocator_3480_ptr;
      plocal_var_610 = stack_array_600;
      stack_array_600[0] = 0;
      local_var_608 = 0x15;
      strcpy_s(stack_array_600,0x40,&system_data_ec70);
      plocal_var_618 = &system_state_ptr;
      plocal_var_678 = &memory_allocator_3480_ptr;
      plocal_var_670 = stack_array_660;
      stack_array_660[0] = 0;
      local_var_668 = 0x15;
      strcpy_s(stack_array_660,0x40,&system_data_ed30);
      plocal_var_678 = &system_state_ptr;
      plocal_var_6d8 = &memory_allocator_3480_ptr;
      plocal_var_6d0 = stack_array_6c0;
      stack_array_6c0[0] = 0;
      local_var_6c8 = 0x15;
      strcpy_s(stack_array_6c0,0x40,&system_data_ed18);
      plocal_var_6d8 = &system_state_ptr;
      plocal_var_78 = &memory_allocator_3480_ptr;
      plocal_var_70 = stack_array_60;
      stack_array_60[0] = 0;
      local_var_68 = 0x1a;
      strcpy_s(stack_array_60,0x40,&system_data_ecf8);
      plocal_var_78 = &system_state_ptr;
    }
  }
  else {
    plocal_var_6d8 = &memory_allocator_3480_ptr;
    plocal_var_6d0 = stack_array_6c0;
    stack_array_6c0[0] = 0;
    local_var_6c8 = 0x12;
    strcpy_s(stack_array_6c0,0x40,&system_data_eb60);
    plocal_var_6d8 = &system_state_ptr;
    plocal_var_678 = &memory_allocator_3480_ptr;
    plocal_var_670 = stack_array_660;
    stack_array_660[0] = 0;
    local_var_668 = 0x13;
    strcpy_s(stack_array_660,0x40,&system_data_eb48);
    plocal_var_678 = &system_state_ptr;
    plocal_var_618 = &memory_allocator_3480_ptr;
    plocal_var_610 = stack_array_600;
    stack_array_600[0] = 0;
    local_var_608 = 0x11;
    strcpy_s(stack_array_600,0x40,&memory_allocator_3048_ptr);
    plocal_var_618 = &system_state_ptr;
    plocal_var_5b8 = &memory_allocator_3480_ptr;
    plocal_var_5b0 = stack_array_5a0;
    stack_array_5a0[0] = 0;
    local_var_5a8 = 9;
    strcpy_s(stack_array_5a0,0x40,&system_data_eb88);
    plocal_var_5b8 = &system_state_ptr;
    plocal_var_558 = &memory_allocator_3480_ptr;
    plocal_var_550 = stack_array_540;
    stack_array_540[0] = 0;
    local_var_548 = 0x13;
    strcpy_s(stack_array_540,0x40,&memory_allocator_3024_ptr);
    plocal_var_558 = &system_state_ptr;
    plocal_var_4f8 = &memory_allocator_3480_ptr;
    plocal_var_4f0 = stack_array_4e0;
    stack_array_4e0[0] = 0;
    local_var_4e8 = 0x17;
    strcpy_s(stack_array_4e0,0x40,&memory_allocator_3000_ptr);
    plocal_var_4f8 = &system_state_ptr;
    plocal_var_498 = &memory_allocator_3480_ptr;
    plocal_var_490 = stack_array_480;
    stack_array_480[0] = 0;
    local_var_488 = 0x23;
    strcpy_s(stack_array_480,0x40,&system_data_eba8);
    plocal_var_498 = &system_state_ptr;
    plocal_var_438 = &memory_allocator_3480_ptr;
    plocal_var_430 = stack_array_420;
    stack_array_420[0] = 0;
    local_var_428 = 0x22;
    strcpy_s(stack_array_420,0x40,&system_data_ec30);
    plocal_var_438 = &system_state_ptr;
    plocal_var_3d8 = &memory_allocator_3480_ptr;
    plocal_var_3d0 = stack_array_3c0;
    stack_array_3c0[0] = 0;
    local_var_3c8 = 0x15;
    strcpy_s(stack_array_3c0,0x40,&system_data_ec18);
    plocal_var_3d8 = &system_state_ptr;
    plocal_var_378 = &memory_allocator_3480_ptr;
    plocal_var_370 = stack_array_360;
    stack_array_360[0] = 0;
    local_var_368 = 0x15;
    strcpy_s(stack_array_360,0x40,&system_data_ec58);
    plocal_var_378 = &system_state_ptr;
    plocal_var_318 = &memory_allocator_3480_ptr;
    plocal_var_310 = stack_array_300;
    stack_array_300[0] = 0;
    local_var_308 = 0x15;
    strcpy_s(stack_array_300,0x40,&system_data_ecb8);
    plocal_var_318 = &system_state_ptr;
    plocal_var_2b8 = &memory_allocator_3480_ptr;
    plocal_var_2b0 = stack_array_2a0;
    stack_array_2a0[0] = 0;
    local_var_2a8 = 0x15;
    strcpy_s(stack_array_2a0,0x40,&system_data_eca0);
    plocal_var_2b8 = &system_state_ptr;
    plocal_var_258 = &memory_allocator_3480_ptr;
    plocal_var_250 = stack_array_240;
    stack_array_240[0] = 0;
    local_var_248 = 0x15;
    strcpy_s(stack_array_240,0x40,&system_data_ec88);
    plocal_var_258 = &system_state_ptr;
    plocal_var_1f8 = &memory_allocator_3480_ptr;
    plocal_var_1f0 = stack_array_1e0;
    stack_array_1e0[0] = 0;
    local_var_1e8 = 0x15;
    strcpy_s(stack_array_1e0,0x40,&system_data_ec70);
    plocal_var_1f8 = &system_state_ptr;
    plocal_var_198 = &memory_allocator_3480_ptr;
    plocal_var_190 = stack_array_180;
    stack_array_180[0] = 0;
    local_var_188 = 0x15;
    strcpy_s(stack_array_180,0x40,&system_data_ed30);
    plocal_var_198 = &system_state_ptr;
    plocal_var_138 = &memory_allocator_3480_ptr;
    plocal_var_130 = stack_array_120;
    stack_array_120[0] = 0;
    local_var_128 = 0x15;
    strcpy_s(stack_array_120,0x40,&system_data_ed18);
    plocal_var_138 = &system_state_ptr;
    plocal_var_d8 = &memory_allocator_3480_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = 0x1a;
    strcpy_s(stack_array_c0,0x40,&system_data_ecf8);
    plocal_var_d8 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_708);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_357a80(uint64_t param_1,uint64_t param_2)
void function_357a80(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  void *plocal_var_2e8;
  uint64_t *plocal_var_2e0;
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x148,8,3);
  local_var_40 = 0xfffffffffffffffe;
  puVar6 = puVar5;
  SystemCore_SyncController(puVar5,param_2,param_1);
  *puVar6 = &memory_allocator_3136_ptr;
  puVar4 = puVar6 + 0xe;
  *puVar4 = &system_state_ptr;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  *puVar4 = &system_data_buffer_ptr;
  puVar6[0x11] = 0;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  puVar6[0x22] = 0;
  puVar6[0x23] = 0;
  plocal_var_2e8 = &system_data_buffer_ptr;
  local_var_2d0 = 0;
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d8 = 0;
  plocal_var_48 = puVar4;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_2e0 = (uint64_t *)puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x74736554;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_2d8 = 4;
  local_var_2d0._0_4_ = uVar2;
  RenderingSystem_ResourceBinder(puVar4);
  plocal_var_2e8 = &system_data_buffer_ptr;
  if (plocal_var_2e0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d0 = (uint64_t)local_var_2d0._4_4_ << 0x20;
  plocal_var_2e8 = &system_state_ptr;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0x403e000000000000;
  puVar5[0x14] = 0x4008000000000000;
  puVar5[0x17] = 0;
  plVar1 = (int64_t *)puVar5[0x22];
  puVar5[0x22] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar5[0x15] = 0x3ff0000000000000;
  puVar5[0x16] = 0x3ff0000000000000;
  *(int32_t *)(puVar5 + 0x19) = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x18] = 0x3ff0000000000000;
  plocal_var_2e8 = &system_data_buffer_ptr;
  local_var_2d0 = 0;
  plocal_var_2e0 = (uint64_t *)0x0;
  local_var_2d8 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_2e0 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_2d0 = CONCAT44(local_var_2d0._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  local_var_2d8 = 9;
  SystemNetwork_Processor(puVar5,&plocal_var_2e8,plocal_var_48,0);
  plocal_var_2e8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address