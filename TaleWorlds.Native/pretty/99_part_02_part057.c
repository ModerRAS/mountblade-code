#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part057.c - 2 个函数
// 函数: void function_1c2d00(uint64_t param_1,uint64_t param_2)
void function_1c2d00(uint64_t param_1,uint64_t param_2)
{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  int iVar12;
  int32_t extraout_XMM0_Da;
  int8_t stack_array_168 [32];
  void *plocal_var_148;
  uint64_t *plocal_var_140;
  int32_t local_var_138;
  uint64_t local_var_130;
  void *plocal_var_128;
  int64_t lStack_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  void *plocal_var_108;
  int64_t lStack_100;
  uint local_var_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  int64_t lStack_e0;
  uint local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  int32_t *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  lStack_e0 = 0;
  local_var_d8 = 0;
  function_1c5870(&plocal_var_e8);
  iVar12 = local_var_d8 + 0x12;
  CoreMemoryPoolProcessor(&plocal_var_e8,iVar12);
  puVar11 = (int32_t *)((uint64_t)local_var_d8 + lStack_e0);
  *puVar11 = 0x64616873;
  puVar11[1] = 0x6d5f7265;
  puVar11[2] = 0x69707061;
  puVar11[3] = 0x622e676e;
  *(int16_t *)(puVar11 + 4) = 0x6e69;
  *(int8_t *)((int64_t)puVar11 + 0x12) = 0;
  plocal_var_108 = &system_data_buffer_ptr;
  local_var_f0 = 0;
  lStack_100 = 0;
  local_var_f8 = 0;
  local_var_d8 = iVar12;
  function_1c5700(&plocal_var_108,param_2);
  iVar12 = local_var_f8 + 0x1c;
  CoreMemoryPoolProcessor(&plocal_var_108,iVar12);
  puVar11 = (int32_t *)((uint64_t)local_var_f8 + lStack_100);
  *puVar11 = 0x706d6f63;
  puVar11[1] = 0x73736572;
  puVar11[2] = 0x735f6465;
  puVar11[3] = 0x65646168;
  *(uint64_t *)(puVar11 + 4) = 0x2e65686361635f72;
  puVar11[6] = 0x6b636173;
  *(int8_t *)(puVar11 + 7) = 0;
  local_var_f8 = iVar12;
  cVar3 = RenderingSystem_RenderQueue(&plocal_var_108);
  cVar4 = RenderingSystem_RenderQueue(&plocal_var_e8);
  bVar1 = false;
  if ((system_debug_flag != '\0') || (*(int *)(system_module_state + 0x620) != 0)) {
    lVar8 = function_1d7560();
    bVar1 = false;
    if (cVar3 != '\0') {
      lVar9 = function_62d860(&plocal_var_108);
      bVar1 = false;
      if (lVar9 < lVar8) {
        bVar1 = true;
      }
    }
    if ((cVar4 != '\0') && (lVar9 = function_62d860(&plocal_var_e8), lVar9 < lVar8)) {
      bVar1 = true;
    }
  }
  if ((*(int *)(system_module_state + 0x620) == 0) || (!bVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0x11;
  strcpy_s(stack_array_80,0x40,&processed_var_9480_ptr);
  cVar5 = function_051f00(system_main_module_state,&plocal_var_98);
  plocal_var_98 = &system_state_ptr;
  cVar6 = function_1c4eb0(param_2);
  if (((bVar2) || (cVar6 == '\0')) || (cVar5 != '\0')) {
    plocal_var_128 = &system_data_buffer_ptr;
    local_var_110 = 0;
    lStack_120 = 0;
    local_var_118 = 0;
    function_1c5700(&plocal_var_128,param_2);
    plocal_var_148 = &system_data_buffer_ptr;
    local_var_130 = 0;
    plocal_var_140 = (uint64_t *)0x0;
    local_var_138 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    plocal_var_140 = (uint64_t *)puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6361732e;
    *(int16_t *)(puVar11 + 1) = 0x6b;
    local_var_138 = 5;
    local_var_130._0_4_ = uVar7;
    UISystem_EventDispatcher(&plocal_var_128,&plocal_var_148);
    plocal_var_148 = &system_data_buffer_ptr;
    if (plocal_var_140 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_140 = (uint64_t *)0x0;
    local_var_130 = (uint64_t)local_var_130._4_4_ << 0x20;
    plocal_var_148 = &system_state_ptr;
    cVar3 = '\0';
    plocal_var_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_120 = 0;
    local_var_110 = local_var_110 & 0xffffffff00000000;
    plocal_var_128 = &system_state_ptr;
  }
  cVar5 = function_1c5160(param_2);
  if ((bVar2) || (uVar7 = extraout_XMM0_Da, cVar5 == '\0')) {
    plocal_var_128 = &system_data_buffer_ptr;
    local_var_110 = 0;
    lStack_120 = 0;
    local_var_118 = 0;
    function_1c5870(&plocal_var_128,param_2);
    plocal_var_148 = &system_data_buffer_ptr;
    local_var_130 = 0;
    plocal_var_140 = (uint64_t *)0x0;
    local_var_138 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    plocal_var_140 = (uint64_t *)puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6361732e;
    *(int16_t *)(puVar11 + 1) = 0x78;
    local_var_138 = 5;
    local_var_130._0_4_ = uVar7;
    UISystem_EventDispatcher(&plocal_var_128,&plocal_var_148);
    plocal_var_148 = &system_data_buffer_ptr;
    if (plocal_var_140 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_140 = (uint64_t *)0x0;
    local_var_130 = (uint64_t)local_var_130._4_4_ << 0x20;
    plocal_var_148 = &system_state_ptr;
    plocal_var_c8 = &system_data_buffer_ptr;
    local_var_b0 = 0;
    plocal_var_c0 = (int32_t *)0x0;
    local_var_b8 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    plocal_var_c0 = puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6e69622e;
    *(int8_t *)(puVar11 + 1) = 0;
    local_var_b8 = 4;
    local_var_b0._0_4_ = uVar7;
    UISystem_EventDispatcher(&plocal_var_128,&plocal_var_c8);
    plocal_var_c8 = &system_data_buffer_ptr;
    if (plocal_var_c0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_c0 = (int32_t *)0x0;
    local_var_b0 = (uint64_t)local_var_b0._4_4_ << 0x20;
    plocal_var_c8 = &system_state_ptr;
    plocal_var_148 = &system_data_buffer_ptr;
    local_var_130 = 0;
    plocal_var_140 = (uint64_t *)0x0;
    local_var_138 = 0;
    puVar10 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar10 = 0;
    plocal_var_140 = puVar10;
    uVar7 = CoreMemoryPoolCleaner(puVar10);
    *puVar10 = 0x7365676e6168632e;
    *(int16_t *)(puVar10 + 1) = 0x7465;
    *(int8_t *)((int64_t)puVar10 + 10) = 0;
    local_var_138 = 10;
    local_var_130._0_4_ = uVar7;
    uVar7 = UISystem_EventDispatcher(&plocal_var_128,&plocal_var_148);
    plocal_var_148 = &system_data_buffer_ptr;
    if (plocal_var_140 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_140 = (uint64_t *)0x0;
    local_var_130 = (uint64_t)local_var_130._4_4_ << 0x20;
    plocal_var_148 = &system_state_ptr;
    cVar4 = '\0';
    plocal_var_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_120 = 0;
    local_var_110 = local_var_110 & 0xffffffff00000000;
    plocal_var_128 = &system_state_ptr;
  }
  if (((cVar3 == '\0') || (bVar1)) || (cVar4 == '\0')) {
    function_1c5450(uVar7,param_2);
  }
  plocal_var_108 = &system_data_buffer_ptr;
  if (lStack_100 == 0) {
    lStack_100 = 0;
    local_var_f0 = local_var_f0 & 0xffffffff00000000;
    plocal_var_108 = &system_state_ptr;
    plocal_var_e8 = &system_data_buffer_ptr;
    if (lStack_e0 == 0) {
      lStack_e0 = 0;
      local_var_d0 = local_var_d0 & 0xffffffff00000000;
      plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1c3340(void)
void function_1c3340(void)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *plocal_var_e8;
  int32_t *plocal_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  uVar1 = function_0bfec0();
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  plocal_var_e0 = (int32_t *)0x0;
  local_var_d8 = 0;
  puVar3 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x14,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_e0 = puVar3;
  uVar2 = CoreMemoryPoolCleaner(puVar3);
  local_var_d0 = CONCAT44(local_var_d0._4_4_,uVar2);
  *puVar3 = 0x5f657375;
  puVar3[1] = 0x74736976;
  puVar3[2] = 0x6f6e5f61;
  puVar3[3] = 0x6c616d72;
  puVar3[4] = 0x70616d;
  local_var_d8 = 0x13;
  SystemCore_LoggingSystem0(uVar1,&plocal_var_e8,1);
  plocal_var_e8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address