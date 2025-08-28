#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part005.c - 4 个函数
// 函数: void function_3feb90(int64_t param_1,int64_t param_2)
void function_3feb90(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  void *puVar9;
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  int64_t *plStack_160;
  int64_t *plStack_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_134 [8];
  uint64_t local_var_12c;
  int16_t local_var_124;
  int8_t local_var_122;
  int32_t local_var_121;
  int16_t local_var_11d;
  int32_t local_var_118;
  int8_t local_var_114;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  uint local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  int64_t lVar8;
  local_var_150 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  local_var_168 = 0;
  uVar1 = *(int32_t *)(param_2 + 0x3588);
  *(int32_t *)(param_1 + 0x460) = uVar1;
  uVar2 = *(int32_t *)(param_2 + 0x358c);
  *(int32_t *)(param_1 + 0x464) = uVar2;
  stack_array_134 = (int8_t  [8])0x0;
  local_var_12c = 0x3f80000000000000;
  local_var_124 = 0x100;
  local_var_121 = 0;
  local_var_11d = 0;
  local_var_118 = 0xffffffff;
  local_var_114 = 0;
  local_var_148 = (void *)CONCAT44(uVar2,uVar1);
  plocal_var_140 = (int8_t *)0x100000001;
  local_var_138 = 0x1e;
  local_var_122 = 1;
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = *(uint *)(param_1 + 0x20);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar9 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(stack_array_d0,0x80,puVar9);
  uVar5 = (uint64_t)local_var_d8;
  uVar6 = local_var_d8 + 1;
  if (uVar6 < 0x7f) {
    *(int16_t *)(plocal_var_e0 + uVar5) = 0x5f;
    uVar5 = (uint64_t)uVar6;
    local_var_d8 = uVar6;
  }
  lVar7 = -1;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 0x3528);
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (puVar9[lVar7] != '\0');
  if ((0 < (int)lVar7) && ((uint)((int)uVar5 + (int)lVar7) < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_e0 + uVar5,puVar9,(int64_t)((int)lVar8 + 2));
  }
  puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_158,&plocal_var_e8,&local_var_148);
  local_var_168 = 1;
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_160 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar4;
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  local_var_168 = 0;
  if (plStack_158 != (int64_t *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  *(int *)(param_1 + 0x480) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x3588) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x484) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x358c) * *(double *)(param_1 + 0x60));
  *(int *)(param_1 + 0x478) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x3590) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x47c) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x3594) * *(double *)(param_1 + 0x60));
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  local_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_134 + 4;
  stack_array_134[4] = 0;
  local_var_138 = 0xd;
  strcpy_s(stack_array_134 + 4,0x40,&memory_allocator_3112_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar4,&local_var_148,1);
  *(uint64_t *)(param_1 + 0x4d0) = uVar4;
  local_var_148 = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fee70(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void function_3fee70(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t stack_array_148 [32];
  int32_t local_var_128;
  int32_t local_var_120;
  int64_t lStack_118;
  void **pplocal_var_108;
  int8_t stack_array_100 [4];
  int8_t stack_array_fc [4];
  int8_t stack_array_f8 [32];
  uint64_t local_var_d8;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [72];
  uint64_t local_var_68;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  SystemData_Processor(stack_array_100,&processed_var_5904_ptr);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar4 = (void *)param_1[3];
  }
  pplocal_var_108 = &plocal_var_c8;
  lVar3 = 0;
  plocal_var_c8 = &memory_allocator_3480_ptr;
  plocal_var_c0 = stack_array_b0;
  local_var_b8 = 0;
  stack_array_b0[0] = 0;
  if (puVar4 != (void *)0x0) {
    DataStructureManager0(&plocal_var_c8);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_c8);
  }
  if ((int)param_1[9] < 1) {
    *(int *)(param_1 + 0x8e) =
         (int)(int64_t)((double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb]);
    *(int *)((int64_t)param_1 + 0x474) =
         (int)(int64_t)((double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc]);
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_f8,stack_array_fc);
    fVar6 = (float)*(uint *)(param_1 + 0x8e);
    fVar7 = (float)*(uint *)((int64_t)param_1 + 0x474);
    fVar8 = 1.0 / (float)*(uint *)(param_1 + 0x8f);
    *(float *)(param_1 + 0x99) = fVar8 * fVar6 - fVar8;
    fVar9 = 1.0 / (float)*(uint *)((int64_t)param_1 + 0x47c);
    *(float *)((int64_t)param_1 + 0x4cc) = fVar9 * fVar7 - fVar9;
    *(float *)(param_1 + 0x91) = (1.0 / (float)*(uint *)(param_1 + 0x90)) * fVar6;
    fVar5 = 1.0 / (float)*(uint *)((int64_t)param_1 + 0x484);
    *(float *)((int64_t)param_1 + 0x48c) = fVar5 * fVar7;
    *(float *)(param_1 + 0x92) = fVar6 * 0.5 * (1.0 / (float)*(uint *)(param_1 + 0x90)) - 0.5;
    *(float *)((int64_t)param_1 + 0x494) = fVar7 * 0.5 * fVar5 - 0.5;
    *(float *)(param_1 + 0x93) = fVar8;
    *(float *)((int64_t)param_1 + 0x49c) = fVar9;
    *(float *)(param_1 + 0x94) = fVar8;
    *(float *)((int64_t)param_1 + 0x4a4) = -fVar9;
    *(float *)(param_1 + 0x95) = -fVar8;
    *(float *)((int64_t)param_1 + 0x4ac) = fVar9 + fVar9;
    *(float *)(param_1 + 0x96) = fVar8;
    *(float *)((int64_t)param_1 + 0x4b4) = fVar9 + fVar9;
    *(int32_t *)(param_1 + 0x97) = 0;
    pplocal_var_108 = (void **)CONCAT44(pplocal_var_108._4_4_,fVar9 * 4.0);
    *(float *)((int64_t)param_1 + 0x4bc) = fVar9 * 4.0;
    param_1[0x98] = 0;
    lVar2 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar2 + 0x1cd8) + 0x83e8) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar2 + 0x1cd8),7);
    lVar2 = param_1[0x8c];
    iVar1 = *(int *)((int64_t)param_1 + 0x464);
    *(float *)(param_3 + 0x11c18) = (float)(int)*(float *)(param_3 + 0x11c18);
    *(float *)(param_3 + 0x11c1c) = (float)(int)*(float *)(param_3 + 0x11c1c);
    *(float *)(param_3 + 0x11c20) = (float)(int)lVar2;
    *(float *)(param_3 + 0x11c24) = (float)iVar1;
    *(uint64_t *)(param_3 + 0x11c28) = 0x3f80000000000000;
    if (*(char *)((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xca +
                 *(int64_t *)(system_message_buffer + 0x1d20)) != '\0') {
      lVar3 = param_1[0x9a];
    }
    local_var_120 = param_5;
    local_var_128 = param_4;
    lStack_118 = lVar3;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
    *(uint64_t *)(param_3 + 0x3598) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35a0) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35a8) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35b0) = 0x3f8000003f800000;
    lVar3 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1790) = 0x3f8000003f800000;
    pplocal_var_108 = (void **)0x3f8000003f800000;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x17c0) = 0x3f8000003f800000;
    lVar3 = SystemOptimizer(param_3);
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar3 + 0x32c);
    lVar3 = SystemOptimizer(param_3);
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar3 + 0x32e);
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_f8,stack_array_fc);
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c70),
                  *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1100,0x6d0);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  SystemCore_Synchronizer(&plocal_var_c8);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_148);
}
int64_t function_3ff450(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0x458) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x38))();
  }
  function_1f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x4c0,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ff5c0(int64_t param_1,int64_t param_2)
void function_3ff5c0(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  void *puVar9;
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  int64_t *plStack_160;
  int64_t *plStack_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint *plocal_var_140;
  int32_t local_var_138;
  int32_t local_var_134;
  uint stack_array_130 [3];
  int16_t local_var_124;
  int8_t local_var_122;
  int32_t local_var_121;
  int16_t local_var_11d;
  int32_t local_var_118;
  int8_t local_var_114;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  uint local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  int64_t lVar8;
  local_var_150 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  local_var_168 = 0;
  uVar1 = *(int32_t *)(param_2 + 0x3588);
  *(int32_t *)(param_1 + 0x460) = uVar1;
  uVar2 = *(int32_t *)(param_2 + 0x358c);
  *(int32_t *)(param_1 + 0x464) = uVar2;
  local_var_134 = 0;
  stack_array_130[0] = 0;
  stack_array_130[1] = 0;
  stack_array_130[2] = 0x3f800000;
  local_var_124 = 0x100;
  local_var_121 = 0;
  local_var_11d = 0;
  local_var_118 = 0xffffffff;
  local_var_114 = 0;
  local_var_148 = (void *)CONCAT44(uVar2,uVar1);
  plocal_var_140 = (uint *)0x100000001;
  local_var_138 = 0x1e;
  local_var_122 = 1;
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = *(uint *)(param_1 + 0x20);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar9 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(stack_array_d0,0x80,puVar9);
  uVar5 = (uint64_t)local_var_d8;
  uVar6 = local_var_d8 + 1;
  if (uVar6 < 0x7f) {
    *(int16_t *)(plocal_var_e0 + uVar5) = 0x5f;
    uVar5 = (uint64_t)uVar6;
    local_var_d8 = uVar6;
  }
  lVar7 = -1;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 0x3528);
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (puVar9[lVar7] != '\0');
  if ((0 < (int)lVar7) && ((uint)((int)uVar5 + (int)lVar7) < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_e0 + uVar5,puVar9,(int64_t)((int)lVar8 + 2));
  }
  puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_158,&plocal_var_e8,&local_var_148);
  local_var_168 = 1;
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_160 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar4;
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  local_var_168 = 0;
  if (plStack_158 != (int64_t *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  local_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = stack_array_130[0] & 0xffffff00;
  local_var_138 = 0xd;
  strcpy_s(stack_array_130,0x40,&memory_allocator_3112_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar4,&local_var_148,1);
  *(uint64_t *)(param_1 + 0x4b8) = uVar4;
  local_var_148 = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ff820(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void function_3ff820(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t lVar1;
  void *puVar2;
  int64_t lVar3;
  float fVar4;
  uint uVar5;
  int8_t stack_array_e8 [32];
  int32_t local_var_c8;
  int32_t local_var_c0;
  int64_t lStack_b8;
  int8_t stack_array_a8 [8];
  void **pplocal_var_a0;
  int8_t stack_array_98 [4];
  int8_t stack_array_94 [4];
  uint64_t local_var_90;
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_90 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  SystemData_Processor(stack_array_a8,&processed_var_6032_ptr);
  puVar2 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar2 = (void *)param_1[3];
  }
  pplocal_var_a0 = &plocal_var_88;
  lVar3 = 0;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  local_var_78 = 0;
  stack_array_70[0] = 0;
  if (puVar2 != (void *)0x0) {
    DataStructureManager0(&plocal_var_88);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_88);
  }
  if ((int)param_1[9] < 1) {
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_94,stack_array_98);
    fVar4 = 1.0 - *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1d54);
    fVar4 = fVar4 + fVar4;
    *(float *)(param_1 + 0x8e) = fVar4;
    uVar5 = exp2f(-fVar4);
    *(uint *)((int64_t)param_1 + 0x474) = uVar5;
    pplocal_var_a0 = (void **)CONCAT44(pplocal_var_a0._4_4_,uVar5);
    *(uint *)(param_1 + 0x8f) =
         (((uVar5 & 0x7fffff) >> ((&processed_var_4368_ptr)[uVar5 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&processed_var_4880_ptr + (uint64_t)(uVar5 >> 0x17) * 2)) * 0x10000 +
         ((uVar5 & 0x7fffff) >> ((&processed_var_4368_ptr)[uVar5 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&processed_var_4880_ptr + (uint64_t)(uVar5 >> 0x17) * 2);
    *(uint64_t *)((int64_t)param_1 + 0x47c) = 0;
    lVar1 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83e8) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar1 + 0x1cd8),7);
    if (*(char *)((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xca +
                 *(int64_t *)(system_message_buffer + 0x1d20)) != '\0') {
      lVar3 = param_1[0x97];
    }
    local_var_c0 = param_5;
    local_var_c8 = param_4;
    lStack_b8 = lVar3;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  SystemCore_Synchronizer(&plocal_var_88);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_e8);
}
uint64_t *
function_3ffaf0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6168_ptr;
  function_1f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x458,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address