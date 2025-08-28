#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part255.c - 2 个函数

// 函数: void FUN_18021fbb0(int64_t param_1)
void FUN_18021fbb0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_168 [32];
  int32_t uStack_148;
  int32_t uStack_140;
  int32_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  int8_t uStack_118;
  int32_t uStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 9;
  strcpy_s(auStack_d0,0x40,&processed_var_4328_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x6d0;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(int64_t **)(param_1 + 0x1c70);
  *(uint64_t *)(param_1 + 0x1c70) = uVar1;
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xd;
  strcpy_s(auStack_70,0x40,&processed_var_4400_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x210;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(int64_t **)(param_1 + 0x1cb8);
  *(uint64_t *)(param_1 + 0x1cb8) = uVar1;
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x14;
  strcpy_s(auStack_d0,0x40,&processed_var_4416_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x1000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f8 = *(int64_t **)(param_1 + 0x1c78);
  *(uint64_t *)(param_1 + 0x1c78) = uVar1;
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  strcpy_s(auStack_70,0x40,&processed_var_4344_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x140;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cb0);
  *(uint64_t *)(param_1 + 0x1cb0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x10;
  strcpy_s(auStack_d0,0x40,&processed_var_4376_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x200;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c80);
  *(uint64_t *)(param_1 + 0x1c80) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&processed_var_4472_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x230;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c88);
  *(uint64_t *)(param_1 + 0x1c88) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xf;
  strcpy_s(auStack_d0,0x40,&processed_var_4488_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x8000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c90);
  *(uint64_t *)(param_1 + 0x1c90) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xb;
  strcpy_s(auStack_70,0x40,&processed_var_4440_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x70;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1ca0);
  *(uint64_t *)(param_1 + 0x1ca0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xe;
  strcpy_s(auStack_d0,0x40,&processed_var_4456_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x6000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c98);
  *(uint64_t *)(param_1 + 0x1c98) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 9;
  strcpy_s(auStack_70,0x40,&processed_var_4560_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x80;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1ca8);
  *(uint64_t *)(param_1 + 0x1ca8) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x16;
  strcpy_s(auStack_d0,0x40,&processed_var_4576_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x30;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cc8);
  *(uint64_t *)(param_1 + 0x1cc8) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x14;
  strcpy_s(auStack_70,0x40,&processed_var_4504_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0xe0;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cc0);
  *(uint64_t *)(param_1 + 0x1cc0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x1a;
  strcpy_s(auStack_d0,0x40,&processed_var_4528_ptr);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x1a00;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cd0);
  *(uint64_t *)(param_1 + 0x1cd0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_168);
}





// 函数: void SystemCore_Loader(void)
void SystemCore_Loader(void)

{
                    // WARNING: Subroutine does not return
  SystemEventProcessor();
}





