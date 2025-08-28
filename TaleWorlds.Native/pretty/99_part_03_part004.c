#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part004.c - 3 个函数
// 函数: void GenericFunction_1801c79a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t *param_4,
void GenericFunction_1801c79a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t *param_4,
                  int64_t param_5)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t *plVar5;
  char *pcVar6;
  uint uVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  int iVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  void *plocal_var_60;
  void *plocal_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  lVar1 = param_3 + 0x60;
  puVar2 = (uint64_t *)DataPipelineManager(lVar1,0x38,param_3,param_4,0xfffffffffffffffe);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar6 = "version";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &rendering_buffer_2256_ptr;
  puVar2[2] = pcVar4 + -0x180a015af;
  pcVar6 = "1.0";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  puVar2[1] = &rendering_buffer_2236_ptr;
  puVar2[3] = pcVar4 + -0x180a0159b;
  if (*(int64_t *)(param_2 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_2 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_2 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x48) = puVar2;
  puVar2[4] = param_2;
  puVar2[6] = 0;
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_5 + 0x18) != (void *)0x0) {
    puVar10 = *(void **)(param_5 + 0x18);
  }
  SystemAllocationProcessor(param_3,param_2,&rendering_buffer_248_ptr,puVar10);
  UtilitiesSystem_2f640(param_3,param_2,&ui_system_data_176_ptr,*(int32_t *)(param_4 + 0x14));
  puVar2 = (uint64_t *)DataPipelineManager(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "system_flags";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &rendering_buffer_208_ptr;
  puVar2[2] = pcVar4 + -0x180a0d0ff;
  uVar7 = 1;
  puVar12 = (uint64_t *)&system_flag_6758;
  lVar13 = 0x20;
  do {
    if ((*(uint *)(param_4 + 2) & uVar7) != 0) {
      puVar3 = (uint64_t *)DataPipelineManager(lVar1,0x60);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 1;
      puVar3[6] = 0;
      puVar3[8] = 0;
      pcVar6 = "system_flag";
      do {
        pcVar4 = pcVar6;
        pcVar6 = pcVar4 + 1;
      } while (*pcVar6 != '\0');
      *puVar3 = &rendering_buffer_288_ptr;
      puVar3[2] = pcVar4 + -0x180a0d14f;
      puVar10 = &system_buffer_ptr;
      if ((void *)*puVar12 != (void *)0x0) {
        puVar10 = (void *)*puVar12;
      }
      SystemAllocationProcessor(param_3,puVar3,&system_flag_3a84,puVar10);
      if (puVar2[6] == 0) {
        puVar3[10] = 0;
        puVar2[6] = puVar3;
      }
      else {
        puVar3[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar3;
      }
      puVar2[7] = puVar3;
      puVar3[4] = puVar2;
      puVar3[0xb] = 0;
    }
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    puVar12 = puVar12 + 0xb;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (*(int64_t *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  puVar2 = (uint64_t *)DataPipelineManager(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "material_flags";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &memory_allocator_304_ptr;
  puVar2[2] = pcVar4 + -0x180a0d15f;
  plVar5 = (int64_t *)DataStructure_40a60(*param_4);
  iVar11 = 0;
  lVar13 = *plVar5;
  lVar14 = plVar5[1] - lVar13 >> 0x3f;
  if ((plVar5[1] - lVar13) / 0x60 + lVar14 != lVar14) {
    uVar8 = 1;
    lVar14 = 0;
    do {
      if ((param_4[1] & uVar8) != 0) {
        puVar12 = (uint64_t *)DataPipelineManager(lVar1,0x60);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[4] = 0;
        *(int32_t *)(puVar12 + 5) = 1;
        puVar12[6] = 0;
        puVar12[8] = 0;
        pcVar6 = "material_flag";
        do {
          pcVar4 = pcVar6;
          pcVar6 = pcVar4 + 1;
        } while (*pcVar6 != '\0');
        *puVar12 = &rendering_buffer_264_ptr;
        puVar12[2] = pcVar4 + -0x180a0d137;
        puVar10 = *(void **)(lVar14 + 8 + *plVar5);
        puVar9 = &system_buffer_ptr;
        if (puVar10 != (void *)0x0) {
          puVar9 = puVar10;
        }
        SystemAllocationProcessor(param_3,puVar12,&system_flag_3a84,puVar9);
        if (puVar2[6] == 0) {
          puVar12[10] = 0;
          puVar2[6] = puVar12;
        }
        else {
          puVar12[10] = puVar2[7];
          *(uint64_t **)(puVar2[7] + 0x58) = puVar12;
        }
        puVar2[7] = puVar12;
        puVar12[4] = puVar2;
        puVar12[0xb] = 0;
        lVar13 = *plVar5;
      }
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 << 1 | (uint64_t)((int64_t)uVar8 < 0);
      lVar14 = lVar14 + 0x60;
    } while ((uint64_t)(int64_t)iVar11 < (uint64_t)((plVar5[1] - lVar13) / 0x60));
  }
  if (*(int64_t *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  puVar2 = (uint64_t *)DataPipelineManager(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "vdecl";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &rendering_buffer_280_ptr;
  puVar2[2] = pcVar4 + -0x180a0d147;
  local_var_50 = 0;
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (void *)0x0;
  if (*(ushort *)((int64_t)param_4 + 0x14) < 0xc) {
    SystemFunction_0001801c7f00();
  }
  else {
    CoreSystem_ConfigValidator0(&plocal_var_60,&memory_allocator_352_ptr);
  }
  puVar10 = &system_buffer_ptr;
  if (plocal_var_58 != (void *)0x0) {
    puVar10 = plocal_var_58;
  }
  SystemAllocationProcessor(param_3,puVar2,&system_flag_3a84,puVar10);
  if (*(int64_t *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  plocal_var_60 = &system_data_buffer_ptr;
  if (plocal_var_58 == (void *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_1801c7fd0(void)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *plocal_var_148;
  int64_t lStack_140;
  uint local_var_138;
  uint64_t local_var_130;
  void *plocal_var_128;
  int32_t *plocal_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  void *plocal_var_108;
  int32_t *plocal_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  int32_t *plocal_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  int32_t *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int32_t *plocal_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  uint64_t *plocal_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  int32_t local_var_30;
  uint64_t local_var_28;
  lVar1 = system_global_data_ptr;
  local_var_28 = 0xfffffffffffffffe;
  lVar6 = 0;
  lVar7 = 6;
  do {
    GenericFunction_1801de530(*(int64_t *)(lVar1 + 0x50) + 0x10 + lVar6);
    lVar6 = lVar6 + 0x70;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x50) + 0x310);
  LOCK();
  *(uint64_t *)(lVar6 + 8) = 0;
  UNLOCK();
  *(int32_t *)(lVar6 + 0x10) = 0;
  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x50) + 0x318);
  *(int64_t *)lVar6 = lVar6;
  *(int64_t *)(lVar6 + 8) = lVar6;
  *(uint64_t *)(lVar6 + 0x10) = 0;
  *(int8_t *)(lVar6 + 0x18) = 0;
  *(uint64_t *)(lVar6 + 0x20) = 0;
  CoreEngine_0572D0(*(int64_t *)(lVar1 + 0x50) + 0x328);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0x10);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0x80);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0x1d0);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0x240);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0xf0);
  GenericFunction_1801eca80(*(int64_t *)(lVar1 + 0x50) + 0x160);
  plocal_var_148 = &system_data_buffer_ptr;
  local_var_130 = 0;
  lStack_140 = 0;
  local_var_138 = 0;
  lVar6 = GenericFunction_1800baa80(&plocal_var_48);
  local_var_138 = *(uint *)(lVar6 + 0x10);
  lStack_140 = *(int64_t *)(lVar6 + 8);
  local_var_130 = *(uint64_t *)(lVar6 + 0x18);
  *(int32_t *)(lVar6 + 0x10) = 0;
  *(uint64_t *)(lVar6 + 8) = 0;
  *(uint64_t *)(lVar6 + 0x18) = 0;
  plocal_var_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_40 = 0;
  local_var_30 = 0;
  plocal_var_48 = &system_state_ptr;
  iVar5 = local_var_138 + 0x12;
  CoreEngineDataBufferProcessor(&plocal_var_148,iVar5);
  puVar4 = (int32_t *)((uint64_t)local_var_138 + lStack_140);
  *puVar4 = 0x65726f43;
  puVar4[1] = 0x64616853;
  puVar4[2] = 0x2f737265;
  puVar4[3] = 0x31443344;
  *(int16_t *)(puVar4 + 4) = 0x2f31;
  *(int8_t *)((int64_t)puVar4 + 0x12) = 0;
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  lStack_60 = 0;
  local_var_58 = 0;
  local_var_138 = iVar5;
  GenericFunction_1801c5700(&plocal_var_68,0);
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  plocal_var_120 = (int32_t *)0x0;
  local_var_118 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_120 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x78;
  local_var_118 = 5;
  local_var_110._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_148,&plocal_var_128);
  plocal_var_128 = &system_data_buffer_ptr;
  if (plocal_var_120 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_120 = (int32_t *)0x0;
  local_var_110 = (uint64_t)local_var_110._4_4_ << 0x20;
  plocal_var_128 = &system_state_ptr;
  plocal_var_108 = &system_data_buffer_ptr;
  local_var_f0 = 0;
  plocal_var_100 = (int32_t *)0x0;
  local_var_f8 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_100 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x7478742e;
  *(int8_t *)(puVar4 + 1) = 0;
  local_var_f8 = 4;
  local_var_f0._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_148,&plocal_var_108);
  plocal_var_108 = &system_data_buffer_ptr;
  if (plocal_var_100 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_100 = (int32_t *)0x0;
  local_var_f0 = (uint64_t)local_var_f0._4_4_ << 0x20;
  plocal_var_108 = &system_state_ptr;
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  plocal_var_e0 = (int32_t *)0x0;
  local_var_d8 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_e0 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x6b;
  local_var_d8 = 5;
  local_var_d0._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_148,&plocal_var_e8);
  plocal_var_e8 = &system_data_buffer_ptr;
  if (plocal_var_e0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_e0 = (int32_t *)0x0;
  local_var_d0 = (uint64_t)local_var_d0._4_4_ << 0x20;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  plocal_var_c0 = (int32_t *)0x0;
  local_var_b8 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_c0 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x6e69622e;
  *(int8_t *)(puVar4 + 1) = 0;
  local_var_b8 = 4;
  local_var_b0._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_148,&plocal_var_c8);
  plocal_var_c8 = &system_data_buffer_ptr;
  if (plocal_var_c0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_c0 = (int32_t *)0x0;
  local_var_b0 = (uint64_t)local_var_b0._4_4_ << 0x20;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_a8 = &system_data_buffer_ptr;
  local_var_90 = 0;
  plocal_var_a0 = (int32_t *)0x0;
  local_var_98 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_a0 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x6b;
  local_var_98 = 5;
  local_var_90._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_68,&plocal_var_a8);
  plocal_var_a8 = &system_data_buffer_ptr;
  if (plocal_var_a0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_a0 = (int32_t *)0x0;
  local_var_90 = (uint64_t)local_var_90._4_4_ << 0x20;
  plocal_var_a8 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  plocal_var_80 = (uint64_t *)0x0;
  local_var_78 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_80 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x7365676e6168632e;
  *(int16_t *)(puVar3 + 1) = 0x7465;
  *(int8_t *)((int64_t)puVar3 + 10) = 0;
  local_var_78 = 10;
  local_var_70._0_4_ = uVar2;
  UISystem_EventDispatcher(&plocal_var_148,&plocal_var_88);
  plocal_var_88 = &system_data_buffer_ptr;
  if (plocal_var_80 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_80 = (uint64_t *)0x0;
  local_var_70 = (uint64_t)local_var_70._4_4_ << 0x20;
  plocal_var_88 = &system_state_ptr;
  *(int32_t *)(*(int64_t *)(lVar1 + 0x50) + 0x78) = 0xffffffff;
  *(int32_t *)(*(int64_t *)(lVar1 + 0x50) + 0xe8) = 0xffffffff;
  *(int32_t *)(*(int64_t *)(lVar1 + 0x50) + 0x2a8) = 0xffffffff;
  *(int32_t *)(*(int64_t *)(lVar1 + 0x50) + 0x238) = 0xffffffff;
  *(int32_t *)(*(int64_t *)(lVar1 + 0x50) + 0x158) = 0xffffffff;
  lVar1 = *(int64_t *)(lVar1 + 0x50);
  *(int32_t *)(lVar1 + 0x1c8) = 0xffffffff;
  plocal_var_68 = &system_data_buffer_ptr;
  if (lStack_60 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_60 = 0;
  local_var_50 = local_var_50 & 0xffffffff00000000;
  plocal_var_68 = &system_state_ptr;
  plocal_var_148 = &system_data_buffer_ptr;
  if (lStack_140 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t GenericFunction_1801c85f0(void)
{
  int8_t auVar1 [16];
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *local_var_28;
  int8_t (*local_var_30) [16];
  int8_t (*pauVar6) [16];
  uint64_t uVar7;
  short sStack_5c;
  int64_t alStack_58 [3];
  void *plocal_var_40;
  int64_t lStack_38;
  uVar7 = 0xfffffffffffffffe;
  plVar5 = local_var_28;
  pauVar6 = local_var_30;
  GenericFunction_1801c8840();
  lVar4 = *local_var_28;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    SystemCore_EncryptionEngine0(&plocal_var_40,lVar4 + 0x10);
    lVar2 = DataStructure_aaef0(system_resource_state + 0xac0);
    if (lVar2 == 0) {
      lVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,0x10,3,plVar5,pauVar6,uVar7);
      *(int32_t *)(lVar2 + 0x20) = 0x3f800000;
      *(uint64_t *)(lVar2 + 0x24) = 0x40000000;
      *(int32_t *)(lVar2 + 0x2c) = 3;
      *(uint64_t *)(lVar2 + 0x10) = 1;
      *(void **)(lVar2 + 8) = &system_flag_0000;
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(int32_t *)(lVar2 + 0x28) = 0;
      SystemCore_EncryptionEngine0(lVar2 + 0x30,&plocal_var_40);
      *(int64_t *)(lVar4 + 0x15b8) = lVar2;
      DataStructure_ab0c0(system_resource_state + 0xac0);
    }
    AcquireSRWLockExclusive(0x180c91dc8);
    auVar1 = *local_var_30;
    lVar4 = *(int64_t *)(lVar2 + 8);
    plVar5 = *(int64_t **)
              (lVar4 + (((uint64_t)auVar1._8_4_ + auVar1._0_8_) %
                       (uint64_t)*(uint *)(lVar2 + 0x10)) * 8);
    if (plVar5 != (int64_t *)0x0) {
      sStack_5c = auVar1._12_2_;
      do {
        if (((*plVar5 == auVar1._0_8_) && (*(uint *)(plVar5 + 1) == auVar1._8_4_)) &&
           (*(short *)((int64_t)plVar5 + 0xc) == sStack_5c)) {
          lVar3 = *(int64_t *)(lVar2 + 0x10);
          goto LAB_1801c8782;
        }
        plVar5 = (int64_t *)plVar5[3];
      } while (plVar5 != (int64_t *)0x0);
    }
    lVar3 = *(int64_t *)(lVar2 + 0x10);
    plVar5 = *(int64_t **)(lVar4 + lVar3 * 8);
LAB_1801c8782:
    if (plVar5 == *(int64_t **)(lVar4 + lVar3 * 8)) {
      uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x120,8,CONCAT71(auVar1._1_7_,0x11));
      lVar4 = DataStructure_9a3c0(uVar7);
      DataStructure_9a870(lVar2,alStack_58);
      *(int64_t *)(alStack_58[0] + 0x10) = lVar4;
    }
    else {
      lVar4 = plVar5[2];
    }
    ReleaseSRWLockExclusive(0x180c91dc8);
    plocal_var_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return lVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801c8840(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
void GenericFunction_1801c8840(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
                  int64_t *param_5,uint64_t *param_6)
{
  uint64_t *puVar1;
  void *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  void *puVar7;
  int32_t uVar8;
  uint64_t stack_special_x_8;
  uint64_t astack_special_x_18 [2];
  void *plocal_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  int iStack_98;
  uint64_t local_var_88;
  void *plocal_var_80;
  char *pcStack_78;
  int iStack_70;
  int32_t local_var_68;
  uint64_t *plocal_var_60;
  uint64_t *plocal_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  stack_special_x_8 = param_1;
  astack_special_x_18[0] = param_3;
  uVar8 = SystemCore_EncryptionEngine0(&plocal_var_a8);
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  plocal_var_c0 = (void *)0x0;
  local_var_b8 = 0;
  iVar5 = GenericFunction_1801d9b10(uVar8,&plocal_var_a8,&plocal_var_c8);
  NetworkSystem_ProtocolParser(&plocal_var_a8,&plocal_var_80,iVar5,iVar5 + 2);
  if (iStack_70 == 2) {
    if (((*pcStack_78 == 'v') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 0;
    }
    if (((*pcStack_78 == 'p') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 1;
    }
    if (((*pcStack_78 == 'h') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 3;
    }
    if (((*pcStack_78 == 'd') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 2;
    }
    if (((*pcStack_78 == 'c') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 4;
    }
  }
  UtilitiesSystem_289a0(&plocal_var_a8);
  puVar2 = plocal_var_c0;
  if (iStack_98 != 0) {
    plocal_var_60 = (uint64_t *)0x0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    local_var_48 = 3;
    if (lStack_a0 != 0) {
      CoreSystem_DataCollector(&plocal_var_a8,&plocal_var_60,&system_flag_ccb0);
    }
    puVar4 = plocal_var_58;
    puVar3 = plocal_var_60;
    puVar1 = puVar3;
    if (((int64_t)plocal_var_58 - (int64_t)plocal_var_60 & 0xffffffffffffffe0U) == 0x60) {
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      lVar6 = DataStructure_abc50(system_resource_state + 0x138,puVar7);
      if (lVar6 != 0) {
        *param_5 = lVar6;
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[1] != (void *)0x0) {
          puVar7 = (void *)puVar3[1];
        }
        AdvancedSystemOptimizer(puVar7,&rendering_buffer_2208_ptr,&stack_special_x_8);
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[5] != (void *)0x0) {
          puVar7 = (void *)puVar3[5];
        }
        AdvancedSystemOptimizer(puVar7,&processed_var_7284_ptr,&local_var_88);
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[9] != (void *)0x0) {
          puVar7 = (void *)puVar3[9];
        }
        AdvancedSystemOptimizer(puVar7,&processed_var_4576_ptr,astack_special_x_18);
        *(int16_t *)((int64_t)param_6 + 0xc) = (int16_t)astack_special_x_18[0];
        *param_6 = local_var_88;
        *(int32_t *)(param_6 + 1) = (int32_t)stack_special_x_8;
      }
    }
    for (; puVar1 != puVar4; puVar1 = puVar1 + 4) {
      (**(code **)*puVar1)(puVar1,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar3);
    }
  }
  plocal_var_80 = &system_data_buffer_ptr;
  if (pcStack_78 != (char *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pcStack_78 = (char *)0x0;
  local_var_68 = 0;
  plocal_var_80 = &system_state_ptr;
  plocal_var_c8 = &system_data_buffer_ptr;
  if (puVar2 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  plocal_var_c0 = (void *)0x0;
  local_var_b0 = local_var_b0 & 0xffffffff00000000;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801c8b50(uint64_t param_1,int64_t *param_2,int64_t *param_3)
void GenericFunction_1801c8b50(uint64_t param_1,int64_t *param_2,int64_t *param_3)
{
  int32_t uVar1;
  int iVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  void *puVar8;
  bool bVar9;
  int8_t stack_array_598 [32];
  int32_t local_var_578;
  void *plocal_var_570;
  int32_t *plocal_var_568;
  int32_t local_var_560;
  uint64_t local_var_558;
  uint64_t local_var_550;
  int64_t *plStack_548;
  int8_t stack_array_538 [96];
  int8_t stack_array_4d8 [32];
  int64_t alStack_4b8 [4];
  int32_t local_var_498;
  int32_t local_var_494;
  int32_t local_var_490;
  int8_t stack_array_488 [96];
  int8_t stack_array_428 [32];
  int64_t alStack_408 [4];
  int32_t local_var_3e8;
  int32_t local_var_3e4;
  int32_t local_var_3e0;
  int8_t stack_array_3d8 [96];
  int8_t stack_array_378 [32];
  int64_t alStack_358 [4];
  int32_t local_var_338;
  int32_t local_var_334;
  int32_t local_var_330;
  int8_t stack_array_328 [96];
  int8_t stack_array_2c8 [32];
  int64_t alStack_2a8 [4];
  int32_t local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  int8_t stack_array_278 [96];
  int8_t stack_array_218 [32];
  int64_t alStack_1f8 [4];
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int8_t stack_array_1c8 [96];
  int8_t stack_array_168 [32];
  int64_t alStack_148 [4];
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  void *plocal_var_118;
  void *plocal_var_110;
  uint local_var_108;
  uint8_t stack_array_100 [24];
  void *plocal_var_e8;
  void *plocal_var_e0;
  uint local_var_d8;
  uint8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_550 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_598;
  local_var_578 = 0;
  plocal_var_570 = &system_data_buffer_ptr;
  local_var_558 = 0;
  plocal_var_568 = (int32_t *)0x0;
  local_var_560 = 0;
  plStack_548 = param_3;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_568 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_558 = CONCAT44(local_var_558._4_4_,uVar1);
  *puVar3 = 0x6e69616d;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_560 = 4;
  plocal_var_118 = &system_config_ptr;
  plocal_var_110 = stack_array_100;
  stack_array_100[0] = 0;
  local_var_108 = 6;
  strcpy_s(stack_array_100,0x10,&rendering_buffer_2588_ptr);
  local_var_578 = 1;
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = local_var_108;
  puVar8 = &system_buffer_ptr;
  if (plocal_var_110 != (void *)0x0) {
    puVar8 = plocal_var_110;
  }
  strcpy_s(stack_array_d0,0x80,puVar8);
  local_var_578 = 0;
  plocal_var_118 = &system_state_ptr;
  uVar6 = (uint64_t)local_var_d8;
  uVar7 = local_var_d8 + 0x10;
  if (uVar7 < 0x7f) {
    puVar5 = (int32_t *)(plocal_var_e0 + uVar6);
    *puVar5 = 0x64616853;
    puVar5[1] = 0x2f737265;
    puVar5[2] = 0x72756f53;
    puVar5[3] = 0x2f736563;
    *(int8_t *)(puVar5 + 4) = 0;
    uVar6 = (uint64_t)uVar7;
    local_var_d8 = uVar7;
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(*param_3 + 0x16b8) != (void *)0x0) {
    puVar8 = *(void **)(*param_3 + 0x16b8);
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (puVar8[lVar4] != '\0');
  iVar2 = (int)lVar4;
  if ((0 < iVar2) && ((uint)((int)uVar6 + iVar2) < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_e0 + uVar6,puVar8,(int64_t)(iVar2 + 1));
  }
  uVar7 = (int)uVar6 + 3;
  if (uVar7 < 0x7f) {
    *(int32_t *)(plocal_var_e0 + uVar6) = 0x73722e;
    local_var_d8 = uVar7;
  }
  puVar8 = &system_buffer_ptr;
  if (plocal_var_e0 != (void *)0x0) {
    puVar8 = plocal_var_e0;
  }
  (**(code **)(param_3[0xc] + 0x10))(param_3 + 0xc,puVar8);
  uVar7 = *(uint *)(param_3 + 0x15);
  if ((uVar7 & 1) != 0) {
    GenericFunction_18009e8e0(stack_array_538,param_3);
    CoreEngineDataTransformer(stack_array_4d8,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_4b8,param_3 + 0x10);
    local_var_498 = (int32_t)param_3[0x14];
    local_var_494 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_490 = (int32_t)param_3[0x15];
    (**(code **)(alStack_4b8[0] + 0x10))(alStack_4b8,&processed_var_632_ptr);
    local_var_494 = 0;
    GenericFunction_1801ec9f0(param_2);
    GenericFunction_1801e14f0(param_2,stack_array_538);
    GenericFunction_1801c92a0(stack_array_538);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 4) != 0) {
    GenericFunction_18009e8e0(stack_array_488,param_3);
    CoreEngineDataTransformer(stack_array_428,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_408,param_3 + 0x10);
    local_var_3e8 = (int32_t)param_3[0x14];
    local_var_3e4 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_3e0 = (int32_t)param_3[0x15];
    (**(code **)(alStack_408[0] + 0x10))(alStack_408,&processed_var_640_ptr);
    local_var_3e4 = 3;
    GenericFunction_1801ec960(param_2);
    GenericFunction_1801e1fd0(param_2,stack_array_488);
    GenericFunction_1801c92a0(stack_array_488);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 2) != 0) {
    GenericFunction_18009e8e0(stack_array_3d8,param_3);
    CoreEngineDataTransformer(stack_array_378,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_358,param_3 + 0x10);
    local_var_338 = (int32_t)param_3[0x14];
    local_var_334 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_330 = (int32_t)param_3[0x15];
    (**(code **)(alStack_358[0] + 0x10))(alStack_358,&processed_var_616_ptr);
    local_var_334 = 2;
    GenericFunction_1801ec8d0(param_2);
    GenericFunction_1801e35b0(param_2,stack_array_3d8);
    GenericFunction_1801c92a0(stack_array_3d8);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 8) != 0) {
    GenericFunction_18009e8e0(stack_array_328,param_3);
    CoreEngineDataTransformer(stack_array_2c8,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_2a8,param_3 + 0x10);
    local_var_288 = (int32_t)param_3[0x14];
    local_var_284 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_280 = (int32_t)param_3[0x15];
    (**(code **)(alStack_2a8[0] + 0x10))(alStack_2a8,&processed_var_624_ptr);
    local_var_284 = 5;
    GenericFunction_1801ec840(param_2);
    GenericFunction_1801e2ac0(param_2,stack_array_328);
    GenericFunction_1801c92a0(stack_array_328);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 0x10) != 0) {
    GenericFunction_18009e8e0(stack_array_278,param_3);
    CoreEngineDataTransformer(stack_array_218,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_1f8,param_3 + 0x10);
    local_var_1d8 = (int32_t)param_3[0x14];
    local_var_1d4 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_1d0 = (int32_t)param_3[0x15];
    (**(code **)(alStack_1f8[0] + 0x10))(alStack_1f8,&processed_var_688_ptr);
    local_var_1d4 = 1;
    GenericFunction_1801ec7b0(param_2);
    GenericFunction_1801e40a0(param_2,stack_array_278);
    GenericFunction_1801c92a0(stack_array_278);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 0x20) != 0) {
    GenericFunction_18009e8e0(stack_array_1c8,param_3);
    CoreEngineDataTransformer(stack_array_168,param_3 + 0xc);
    CoreEngineDataTransformer(alStack_148,param_3 + 0x10);
    local_var_128 = (int32_t)param_3[0x14];
    local_var_124 = *(int32_t *)((int64_t)param_3 + 0xa4);
    local_var_120 = (int32_t)param_3[0x15];
    (**(code **)(alStack_148[0] + 0x10))(alStack_148,&processed_var_696_ptr);
    local_var_124 = 4;
    GenericFunction_1801ec720(param_2);
    GenericFunction_1801e6b90(param_2,stack_array_1c8);
    GenericFunction_1801c92a0(stack_array_1c8);
  }
  if ((*(char *)(system_main_module_state + 0x60) == '\0') && (*(char *)(system_global_data_ptr + 9) == '\0')) {
    if ((char)param_2[0x10] == '\0') {
      if ((((*(uint *)(param_3 + 0x15) & 1) == 0) || (*(int64_t *)(*param_2 + 0x18) != 0)) &&
         (((*(uint *)(param_3 + 0x15) & 0x10) == 0 || (*(int64_t *)(param_2[1] + 0x18) != 0)))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      bVar9 = *(int64_t *)(param_2[2] + 0x18) != 0;
    }
    *(bool *)((int64_t)param_2 + 0x81) = bVar9;
    plocal_var_e8 = &system_state_ptr;
    plocal_var_570 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_570 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}