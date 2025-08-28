#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
// 99_part_03_part082.c - 2 个函数
// 函数: void function_247f60(int64_t param_1)
void function_247f60(int64_t param_1)
{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t stack_array_108 [32];
  int iStack_e8;
  int iStack_e0;
  int8_t stack_array_d8 [8];
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  uint64_t local_var_b0;
  void **pplocal_var_a8;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  SystemData_Processor(stack_array_d8,&processed_var_408_ptr);
  pplocal_var_a8 = &plocal_var_98;
  iVar5 = 0;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  local_var_88 = 0;
  stack_array_80[0] = 0;
  DataStructureManager0(&plocal_var_98,&processed_var_408_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_98);
  uVar2 = *(ushort *)(*(int64_t *)(param_1 + 0x1b0) + 0x332);
  bVar1 = *(byte *)(*(int64_t *)(param_1 + 0x1b0) + 0x335);
  local_var_d0 = 0;
  local_var_c8 = 0;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = _guard_check_icall;
  SystemCore_DecryptionManager(*(uint64_t *)(param_1 + 0x1a0),1,*(int32_t *)(param_1 + 0x1bd4),&local_var_d0);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&local_var_d0,0,0);
  }
  local_var_d0 = 0;
  local_var_c8 = 0;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = _guard_check_icall;
  SystemCore_DecryptionManager(*(uint64_t *)(param_1 + 0x1a8),1,*(int32_t *)(param_1 + 0x1bd4),&local_var_d0);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&local_var_d0,0,0);
  }
  iVar3 = iVar5;
  if (bVar1 != 0) {
    do {
      uVar6 = (uint)uVar2;
      iVar4 = iVar5;
      if (uVar2 != 0) {
        do {
          iStack_e8 = iVar3;
          iStack_e0 = iVar4;
          function_2481a0(param_1,*(uint64_t *)(param_1 + 0x1a0),*(uint64_t *)(param_1 + 0x1a8),
                        *(uint64_t *)(param_1 + 0x1b0));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
      iVar4 = iVar5;
      if (uVar6 != 0) {
        do {
          iStack_e8 = iVar3;
          iStack_e0 = iVar4;
          function_2481a0(param_1,*(uint64_t *)(param_1 + 0x188),*(uint64_t *)(param_1 + 400),
                        *(uint64_t *)(param_1 + 0x198));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)bVar1);
  }
  SystemCore_Synchronizer(&plocal_var_98);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2481a0(int64_t **param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5
void function_2481a0(int64_t **param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5
                  ,int param_6)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int iVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  int8_t stack_array_248 [32];
  int32_t local_var_228;
  int8_t stack_array_218 [4];
  int iStack_214;
  int64_t *plStack_210;
  uint64_t local_var_208;
  int8_t local_var_200;
  int16_t local_var_1ff;
  int8_t local_var_1fd;
  int32_t local_var_1fc;
  int32_t local_var_1f8;
  uint64_t local_var_1f4;
  uint64_t local_var_1ec;
  uint64_t local_var_1e4;
  uint64_t local_var_1dc;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int64_t *plStack_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  int64_t *plStack_1a8;
  int64_t *plStack_1a0;
  int64_t lStack_198;
  int32_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int64_t *plStack_170;
  uint64_t local_var_168;
  int64_t *plStack_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [32];
  uint64_t local_var_118;
  uint64_t local_var_110;
  int64_t *plStack_108;
  uint64_t local_var_100;
  float fStack_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int64_t **pplStack_e8;
  int iStack_e0;
  int iStack_dc;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  uint64_t local_var_78;
  lVar4 = system_message_buffer;
  local_var_168 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  iStack_214 = param_5;
  plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
  pplStack_e8 = param_1;
  if (*(int64_t *)(param_4 + 0x1d8) == 0) {
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (system_main_module_state != 0) {
      *(int64_t *)(param_4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar5 = (int64_t *)
             ((int64_t)(int)((uint)*(byte *)(param_4 + 0x335) * param_6 + param_5) * 0x10 +
             *(int64_t *)(param_4 + 0x1d8));
    if ((plVar5 != (int64_t *)0x0) && (*plVar5 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar5,1);
      lVar4 = system_message_buffer;
    }
  }
  plVar1[0x1077] = (int64_t)plVar5;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),1);
  lVar4 = system_message_buffer;
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1ce0) =
       *(int32_t *)(pplStack_e8 + 0x30);
  fStack_f8 = (float)(0x80 >> ((byte)param_5 & 0x1f));
  fVar14 = 1.0;
  fVar8 = 1.0 / fStack_f8;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1be0) = fVar8 * 0.5;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1be4) = fVar8 * 0.5;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1be8) = fVar8;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1bec) = fVar8;
  iVar6 = (int)fStack_f8;
  lVar4 = *(int64_t *)(lVar4 + 0x1cd8);
  fVar8 = 0.0;
  local_var_100 = 0;
  local_var_f0 = 0;
  local_var_ec = 0x3f800000;
  plVar1 = *(int64_t **)(lVar4 + 0x8400);
  local_var_f4 = fStack_f8;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&local_var_100);
  pplStack_e8 = (int64_t **)0x0;
  plVar1 = *(int64_t **)(lVar4 + 0x8400);
  iStack_e0 = iVar6;
  iStack_dc = iVar6;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_e8);
  lVar4 = system_message_buffer;
  switch(param_6) {
  case 0:
    uVar7 = 0x3f800000;
    fVar9 = 1.0;
    fVar11 = 1.0;
    uVar12 = 0;
    fVar10 = -1.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = 0.0;
    fVar8 = -1.0;
    break;
  case 1:
    uVar7 = 0xbf800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0;
    fVar10 = 1.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = 0.0;
    fVar8 = -1.0;
    break;
  case 2:
    uVar7 = 0xbf800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    break;
  case 3:
    uVar7 = 0xbf800000;
    fVar9 = 1.0;
    fVar11 = -1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = fVar11;
    break;
  case 4:
    uVar7 = 0xbf800000;
    fVar9 = 1.0;
    fVar11 = 1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar8 = -1.0;
    fVar14 = 0.0;
    break;
  case 5:
    uVar7 = 0x3f800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0xbf800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar8 = -1.0;
    fVar14 = 0.0;
    break;
  default:
    fVar9 = local_var_100._4_4_;
    fVar11 = fStack_f8;
    uVar12 = (int32_t)local_var_100;
    fVar13 = fStack_f8;
    fVar8 = fStack_f8;
    fVar14 = local_var_100._4_4_;
    uVar15 = (int32_t)local_var_100;
    uVar7 = (int32_t)local_var_100;
    fVar10 = local_var_100._4_4_;
  }
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1bf0) = uVar7;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1bf4) = fVar9;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1bf8) = fVar11;
  *(int32_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1bfc) = 0x3f800000;
  *(int32_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c10) = uVar12;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c14) = fVar10;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c18) = fVar13;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c1c) = (float)iStack_214;
  *(int32_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c20) = uVar15;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c24) = fVar14;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c28) = fVar8;
  *(int32_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1c2c) = 0x3f800000;
  UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar4 + 0x1cd8),*(uint64_t *)(lVar4 + 0x1c88),
                *(int64_t *)(lVar4 + 0x1cd8) + 0x1be0,0x230);
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0xd;
  strcpy_s(stack_array_c0,0x40,&processed_var_568_ptr);
  function_0b4910(system_resource_state,&plStack_210,&plocal_var_d8);
  plocal_var_d8 = &system_state_ptr;
  local_var_100 = 0;
  fStack_f8 = 0.0;
  local_var_f4._0_2_ = 4;
  plStack_1a8 = (int64_t *)0x0;
  plStack_1a0 = (int64_t *)&system_data_buffer_ptr;
  local_var_188 = 0;
  lStack_198 = 0;
  local_var_190 = 0;
  plStack_170 = (int64_t *)0x0;
  plStack_1c8 = plStack_210;
  local_var_1b8 = CONCAT26(local_var_f4._2_2_,0x400000000);
  local_var_1c0 = 0;
  local_var_1b0 = 2;
  local_var_180 = 0;
  local_var_17c = 0;
  local_var_178 = 0;
  local_var_174 = 0;
  lVar4 = plStack_210[0x2b7];
  pplStack_e8 = &plStack_160;
  plStack_160 = plStack_210;
  local_var_158 = 0;
  local_var_148 = 2;
  local_var_140 = 0;
  local_var_150 = local_var_1b8;
  CoreEngineDataTransformer(stack_array_138,&plStack_1a0);
  local_var_118 = CONCAT44(local_var_17c,local_var_180);
  local_var_110 = CONCAT44(local_var_174,local_var_178);
  plStack_108 = plStack_170;
  if (plStack_170 != (int64_t *)0x0) {
    (**(code **)(*plStack_170 + 0x28))();
  }
  local_var_208 = UIRenderingEngine(lVar4,0,&plStack_160,stack_array_218);
  local_var_1ff = 0x601;
  local_var_1fc = 0xff000000;
  local_var_1f8 = 0xff;
  local_var_1e4 = 0;
  local_var_1dc = 0;
  local_var_1d4 = 0;
  local_var_1d0 = 0x400;
  local_var_1f4 = 0x4000300;
  local_var_200 = 1;
  local_var_1fd = 1;
  local_var_1cc = 1;
  local_var_1ec = (uint64_t)*(uint *)(param_4 + 0x324);
  uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(param_2 + 900) == '\0') {
    param_2 = function_0bde30();
  }
  local_var_228 = 0xffffffff;
  RenderingEngineCore0(uVar2,5,param_2);
  uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(param_3 + 900) == '\0') {
    param_3 = function_0bde30();
  }
  local_var_228 = 0xffffffff;
  RenderingEngineCore0(uVar2,0x1e,param_3);
  function_29d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
  InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&local_var_208);
  lVar4 = system_message_buffer;
  lVar3 = strnlen(&memory_allocator_352_ptr,0x3f);
  strncpy(lVar4 + 0x1ce0,&memory_allocator_352_ptr,lVar3);
  *(int8_t *)(lVar3 + 0x1ce0 + lVar4) = 0;
  function_29e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  if (plStack_170 != (int64_t *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  pplStack_e8 = &plStack_1a0;
  plStack_1a0 = (int64_t *)&system_data_buffer_ptr;
  if (lStack_198 == 0) {
    lStack_198 = 0;
    local_var_188 = local_var_188 & 0xffffffff00000000;
    plStack_1a0 = (int64_t *)&system_state_ptr;
    if (plStack_1a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_248);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address