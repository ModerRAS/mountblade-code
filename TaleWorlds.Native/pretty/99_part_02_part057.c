#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part057.c - 2 个函数

// 函数: void FUN_1801c2d00(uint64_t param_1,uint64_t param_2)
void FUN_1801c2d00(uint64_t param_1,uint64_t param_2)

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
  int8_t auStack_168 [32];
  void *puStack_148;
  uint64_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  int64_t lStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  int64_t lStack_100;
  uint uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int64_t lStack_e0;
  uint uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int32_t *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puStack_e8 = &system_data_buffer_ptr;
  uStack_d0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  FUN_1801c5870(&puStack_e8);
  iVar12 = uStack_d8 + 0x12;
  CoreMemoryPoolProcessor(&puStack_e8,iVar12);
  puVar11 = (int32_t *)((uint64_t)uStack_d8 + lStack_e0);
  *puVar11 = 0x64616873;
  puVar11[1] = 0x6d5f7265;
  puVar11[2] = 0x69707061;
  puVar11[3] = 0x622e676e;
  *(int16_t *)(puVar11 + 4) = 0x6e69;
  *(int8_t *)((int64_t)puVar11 + 0x12) = 0;
  puStack_108 = &system_data_buffer_ptr;
  uStack_f0 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_d8 = iVar12;
  FUN_1801c5700(&puStack_108,param_2);
  iVar12 = uStack_f8 + 0x1c;
  CoreMemoryPoolProcessor(&puStack_108,iVar12);
  puVar11 = (int32_t *)((uint64_t)uStack_f8 + lStack_100);
  *puVar11 = 0x706d6f63;
  puVar11[1] = 0x73736572;
  puVar11[2] = 0x735f6465;
  puVar11[3] = 0x65646168;
  *(uint64_t *)(puVar11 + 4) = 0x2e65686361635f72;
  puVar11[6] = 0x6b636173;
  *(int8_t *)(puVar11 + 7) = 0;
  uStack_f8 = iVar12;
  cVar3 = FUN_180624af0(&puStack_108);
  cVar4 = FUN_180624af0(&puStack_e8);
  bVar1 = false;
  if ((system_debug_flag != '\0') || (*(int *)(system_module_state + 0x620) != 0)) {
    lVar8 = FUN_1801d7560();
    bVar1 = false;
    if (cVar3 != '\0') {
      lVar9 = FUN_18062d860(&puStack_108);
      bVar1 = false;
      if (lVar9 < lVar8) {
        bVar1 = true;
      }
    }
    if ((cVar4 != '\0') && (lVar9 = FUN_18062d860(&puStack_e8), lVar9 < lVar8)) {
      bVar1 = true;
    }
  }
  if ((*(int *)(system_module_state + 0x620) == 0) || (!bVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x11;
  strcpy_s(auStack_80,0x40,&unknown_var_9480_ptr);
  cVar5 = FUN_180051f00(system_main_module_state,&puStack_98);
  puStack_98 = &system_state_ptr;
  cVar6 = FUN_1801c4eb0(param_2);
  if (((bVar2) || (cVar6 == '\0')) || (cVar5 != '\0')) {
    puStack_128 = &system_data_buffer_ptr;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    FUN_1801c5700(&puStack_128,param_2);
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (uint64_t *)0x0;
    uStack_138 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    puStack_140 = (uint64_t *)puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6361732e;
    *(int16_t *)(puVar11 + 1) = 0x6b;
    uStack_138 = 5;
    uStack_130._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &system_data_buffer_ptr;
    if (puStack_140 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puStack_140 = (uint64_t *)0x0;
    uStack_130 = (uint64_t)uStack_130._4_4_ << 0x20;
    puStack_148 = &system_state_ptr;
    cVar3 = '\0';
    puStack_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &system_state_ptr;
  }
  cVar5 = FUN_1801c5160(param_2);
  if ((bVar2) || (uVar7 = extraout_XMM0_Da, cVar5 == '\0')) {
    puStack_128 = &system_data_buffer_ptr;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    FUN_1801c5870(&puStack_128,param_2);
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (uint64_t *)0x0;
    uStack_138 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    puStack_140 = (uint64_t *)puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6361732e;
    *(int16_t *)(puVar11 + 1) = 0x78;
    uStack_138 = 5;
    uStack_130._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &system_data_buffer_ptr;
    if (puStack_140 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puStack_140 = (uint64_t *)0x0;
    uStack_130 = (uint64_t)uStack_130._4_4_ << 0x20;
    puStack_148 = &system_state_ptr;
    puStack_c8 = &system_data_buffer_ptr;
    uStack_b0 = 0;
    puStack_c0 = (int32_t *)0x0;
    uStack_b8 = 0;
    puVar11 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    puStack_c0 = puVar11;
    uVar7 = CoreMemoryPoolCleaner(puVar11);
    *puVar11 = 0x6e69622e;
    *(int8_t *)(puVar11 + 1) = 0;
    uStack_b8 = 4;
    uStack_b0._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_c8);
    puStack_c8 = &system_data_buffer_ptr;
    if (puStack_c0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puStack_c0 = (int32_t *)0x0;
    uStack_b0 = (uint64_t)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &system_state_ptr;
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (uint64_t *)0x0;
    uStack_138 = 0;
    puVar10 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar10 = 0;
    puStack_140 = puVar10;
    uVar7 = CoreMemoryPoolCleaner(puVar10);
    *puVar10 = 0x7365676e6168632e;
    *(int16_t *)(puVar10 + 1) = 0x7465;
    *(int8_t *)((int64_t)puVar10 + 10) = 0;
    uStack_138 = 10;
    uStack_130._0_4_ = uVar7;
    uVar7 = FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &system_data_buffer_ptr;
    if (puStack_140 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puStack_140 = (uint64_t *)0x0;
    uStack_130 = (uint64_t)uStack_130._4_4_ << 0x20;
    puStack_148 = &system_state_ptr;
    cVar4 = '\0';
    puStack_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &system_state_ptr;
  }
  if (((cVar3 == '\0') || (bVar1)) || (cVar4 == '\0')) {
    FUN_1801c5450(uVar7,param_2);
  }
  puStack_108 = &system_data_buffer_ptr;
  if (lStack_100 == 0) {
    lStack_100 = 0;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    puStack_108 = &system_state_ptr;
    puStack_e8 = &system_data_buffer_ptr;
    if (lStack_e0 == 0) {
      lStack_e0 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c3340(void)
void FUN_1801c3340(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *puStack_e8;
  int32_t *puStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = FUN_1800bfec0();
  puStack_e8 = &system_data_buffer_ptr;
  uStack_d0 = 0;
  puStack_e0 = (int32_t *)0x0;
  uStack_d8 = 0;
  puVar3 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x14,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_e0 = puVar3;
  uVar2 = CoreMemoryPoolCleaner(puVar3);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
  *puVar3 = 0x5f657375;
  puVar3[1] = 0x74736976;
  puVar3[2] = 0x6f6e5f61;
  puVar3[3] = 0x6c616d72;
  puVar3[4] = 0x70616d;
  uStack_d8 = 0x13;
  SystemCore_LoggingSystem0(uVar1,&puStack_e8,1);
  puStack_e8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




