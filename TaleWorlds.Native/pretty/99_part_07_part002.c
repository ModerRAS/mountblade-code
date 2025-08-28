#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
// 99_part_07_part002.c - 6 个函数
// 函数: void function_3fad40(int64_t *param_1,int64_t param_2)
void function_3fad40(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int8_t stack_array_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  uint64_t local_var_19c;
  uint64_t local_var_194;
  uint64_t local_var_18c;
  int8_t local_var_184;
  int32_t local_var_180;
  int8_t local_var_17c;
  uint64_t local_var_178;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [136];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_178 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  function_1f9270();
  local_var_19c = 0;
  local_var_194 = 0x3f80000000000000;
  local_var_18c = 0x100;
  local_var_184 = 0;
  local_var_17c = 0;
  local_var_1a8 = 1;
  local_var_1a0 = 7;
  local_var_1a4 = 1;
  local_var_180 = *(int32_t *)(param_2 + 0x1bd4);
  iVar3 = (int)((float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3588) *
               *(float *)(param_2 + 0x3598));
  iStack_1b0 = 4;
  if (4 < iVar3) {
    iStack_1b0 = iVar3;
  }
  iVar3 = (int)((float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x358c) *
               *(float *)(param_2 + 0x359c));
  iStack_1ac = 4;
  if (4 < iVar3) {
    iStack_1ac = iVar3;
  }
  plocal_var_168 = &memory_allocator_3432_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0x18;
  strcpy_s(stack_array_150,0x80,&memory_allocator_3056_ptr);
  plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1c0,&plocal_var_168,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c8 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = lVar1;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  plocal_var_168 = &system_state_ptr;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = 0x18;
  strcpy_s(stack_array_b0,0x80,&memory_allocator_3088_ptr);
  plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1b8,&plocal_var_c8,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c8 = (int64_t *)param_1[0x8c];
  param_1[0x8c] = lVar1;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  if (plStack_1b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
  plocal_var_c8 = &system_state_ptr;
  plocal_var_168 = &memory_allocator_3432_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0x18;
  strcpy_s(stack_array_150,0x80,&memory_allocator_3120_ptr);
  plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1c8,&plocal_var_168,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c0 = (int64_t *)param_1[0x8d];
  param_1[0x8d] = lVar1;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  plocal_var_168 = &system_state_ptr;
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1b8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1e8);
}
// 函数: void function_3fb050(int64_t param_1)
void function_3fb050(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  plVar1 = *(int64_t **)(param_1 + 0x458 + (int64_t)*(int *)(param_1 + 0x450) * 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  iVar3 = *(int *)(param_1 + 0x450) + 1;
  *(int *)(param_1 + 0x450) =
       iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
               (int)(((int64_t)iVar3 / 3 + ((int64_t)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fb0e0(uint64_t *param_1,uint64_t param_2,void **param_3,int32_t param_4,
void function_3fb0e0(uint64_t *param_1,uint64_t param_2,void **param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  int64_t *plVar11;
  int *piVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  int32_t local_var_290;
  char acStack_288 [8];
  void **pplocal_var_280;
  void **pplocal_var_278;
  int32_t local_var_270;
  int16_t local_var_26c;
  int16_t local_var_26a;
  void *plocal_var_268;
  void **pplocal_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  int64_t *plStack_248;
  void *plocal_var_240;
  int64_t lStack_238;
  int32_t local_var_230;
  uint64_t local_var_228;
  int32_t local_var_220;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int64_t *plStack_210;
  uint64_t local_var_208;
  void *plocal_var_200;
  void **pplocal_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  uint64_t local_var_1e0;
  int8_t stack_array_1d8 [32];
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  int64_t *plStack_1a8;
  void **pplocal_var_1a0;
  int iStack_198;
  int iStack_194;
  uint64_t local_var_190;
  float fStack_188;
  float fStack_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [72];
  void *plocal_var_118;
  void *plocal_var_110;
  uint local_var_108;
  uint8_t stack_array_100 [136];
  uint64_t local_var_78;
  local_var_208 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  pplocal_var_278 = (void **)CONCAT44(pplocal_var_278._4_4_,param_4);
  plVar11 = (int64_t *)0x0;
  uVar10 = 0;
  plocal_var_118 = &memory_allocator_3432_ptr;
  plocal_var_110 = stack_array_100;
  stack_array_100[0] = 0;
  local_var_108 = 0xc;
  pplocal_var_280 = param_3;
  strcpy_s(stack_array_100,0x80,&system_data_eb68);
  puVar5 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar5 = (void *)param_1[3];
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar5[lVar3] != '\0');
  iVar2 = (int)lVar3;
  if ((0 < iVar2) && (iVar2 + local_var_108 < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_110 + local_var_108,puVar5,(int64_t)(iVar2 + 1));
  }
  puVar5 = &system_buffer_ptr;
  if (plocal_var_110 != (void *)0x0) {
    puVar5 = plocal_var_110;
  }
  SystemData_Processor(acStack_288,puVar5);
  puVar5 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar5 = (void *)param_1[3];
  }
  pplocal_var_1a0 = &plocal_var_178;
  plocal_var_178 = &memory_allocator_3480_ptr;
  plocal_var_170 = stack_array_160;
  local_var_168 = 0;
  stack_array_160[0] = 0;
  if (puVar5 != (void *)0x0) {
    DataStructureManager0(&plocal_var_178);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_178);
  }
  lVar3 = system_main_module_state;
  if (*(int *)(param_1 + 9) < 1) {
    lVar8 = param_1[0x85];
    if ((lVar8 == 0) || (lVar9 = *(int64_t *)(lVar8 + 0x1d8), lVar9 == 0)) {
      lVar9 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    lVar8 = param_1[0x89];
    plVar7 = plVar11;
    if ((lVar8 != 0) && (*(int64_t *)(lVar8 + 0x1e0) != 0)) {
      if (lVar3 != 0) {
        *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
      }
      plVar7 = (int64_t *)(*(int64_t *)(lVar8 + 0x1e0) + 0x10);
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar9);
    plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar7 != (int64_t *)0x0) && (*plVar7 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar7,4);
    }
    lVar3 = system_message_buffer;
    plVar1[0x107e] = (int64_t)plVar7;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
    fVar14 = (float)*(ushort *)(param_1[0x85] + 0x32c);
    fVar15 = (float)*(ushort *)(param_1[0x85] + 0x32e);
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_190 = 0;
    local_var_180 = 0;
    local_var_17c = 0x3f800000;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    fStack_188 = fVar14;
    fStack_184 = fVar15;
    (**(code **)(*plVar7 + 0x160))(plVar7,1,&local_var_190);
    pplocal_var_1a0 = (void **)0x0;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    iStack_198 = (int)fVar14;
    iStack_194 = (int)fVar15;
    (**(code **)(*plVar7 + 0x168))(plVar7,1,&pplocal_var_1a0);
    if (*(char *)((int64_t)param_1 + 0x4e) != '\0') {
      uVar6 = 3;
      if (param_1[0x89] == 0) {
        uVar6 = 1;
      }
      local_var_290 = 0;
      local_var_298 = 0;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar6,0,0x3f800000);
    }
    lVar8 = system_message_buffer;
    *(void **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) = param_3[0x6b5];
    *(void **)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1df8) = param_3[0x6b6];
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be0) = 0.5 / fVar14;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be4) = 0.5 / fVar15;
    plVar7 = param_1 + 0x27;
    lVar3 = *plVar7;
    if (lVar3 == 0) {
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    lVar3 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c78) =
           *(int32_t *)(system_parameter_buffer + 0x1304);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar3 + 0x12fc);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar3 + 0x1300);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar3 + 0x1308);
    }
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar8 + 0x1cd8),*(uint64_t *)(lVar8 + 0x1c88),
                  *(int64_t *)(lVar8 + 0x1cd8) + 0x1be0,0x230);
    pplocal_var_1a0 = (void **)0x0;
    local_var_298 = param_5;
    function_1f7d20(param_1,param_3,&pplocal_var_278,&pplocal_var_1a0);
    pplocal_var_278 = pplocal_var_1a0;
    local_var_270 = 0;
    local_var_26c = 4;
    plocal_var_268 = (void *)param_1[6];
    plStack_248 = (int64_t *)0x0;
    plocal_var_240 = &system_data_buffer_ptr;
    local_var_228 = 0;
    lStack_238 = 0;
    local_var_230 = 0;
    plStack_210 = (int64_t *)0x0;
    local_var_258 = CONCAT26(local_var_26a,0x400000000);
    pplocal_var_260 = pplocal_var_1a0;
    local_var_250 = 2;
    local_var_220 = 0;
    local_var_21c = 0;
    local_var_218 = 0;
    local_var_214 = 0;
    uVar6 = *(uint64_t *)(param_1[6] + 0x15b8);
    pplocal_var_1f8 = pplocal_var_1a0;
    local_var_1e8 = 2;
    local_var_1e0 = 0;
    plocal_var_200 = plocal_var_268;
    local_var_1f0 = local_var_258;
    pplocal_var_1a0 = &plocal_var_200;
    SystemCore_NetworkHandler0(stack_array_1d8,&plocal_var_240);
    local_var_1b8 = CONCAT44(local_var_21c,local_var_220);
    local_var_1b0 = CONCAT44(local_var_214,local_var_218);
    plStack_1a8 = plStack_210;
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x28))();
    }
    uVar6 = UIRenderingEngine(uVar6,param_3,&plocal_var_200,acStack_288);
    if (acStack_288[0] == '\0') {
      param_1[0x1f] = uVar6;
      *(int8_t *)((int64_t)param_1 + 0x132) = 0;
      *(int32_t *)((int64_t)param_1 + 0x134) = 1;
      *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
      if (param_1[0x89] != 0) {
        uVar10 = *(int32_t *)(param_1[0x89] + 0x324);
      }
      *(int32_t *)(param_1 + 0x22) = uVar10;
      piVar12 = (int *)((int64_t)param_1 + 0x74);
      do {
        if (*plVar7 != 0) {
          local_var_298 = 0xffffffff;
          RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),plVar11,*plVar7,0x10);
        }
        if (*piVar12 == -0x12) {
          lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
          lVar8 = *plVar7;
          if (lVar8 != 0) {
            *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
            lVar8 = lVar8 + 0x1a0;
          }
          if ((((*(int64_t *)(lVar3 + 0x8540) != lVar8) || (*(int *)(lVar3 + 0x88bc) != -1)) ||
              (*(int *)(lVar3 + 0x8abc) != 0x10)) &&
             (((lVar8 == 0 || (*(int64_t *)(lVar8 + 8) != 0)) || (*(int64_t *)(lVar8 + 0x10) != 0)
              ))) {
            pplocal_var_1a0 = (void **)0x0;
            if (lVar8 != 0) {
              pplocal_var_1a0 = *(void ***)(lVar8 + 0x10);
            }
            (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                      (*(int64_t **)(lVar3 + 0x8400),0x21,1,&pplocal_var_1a0);
            *(int64_t *)(lVar3 + 0x8540) = lVar8;
            *(int32_t *)(lVar3 + 0x88bc) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x8abc) = 0x10;
            *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
          }
        }
        uVar13 = (int)plVar11 + 1;
        plVar11 = (int64_t *)(uint64_t)uVar13;
        piVar12 = piVar12 + 1;
        plVar7 = plVar7 + 1;
      } while ((int)uVar13 < 0x10);
      if (*(int *)(param_1 + 4) == 0x19) {
        iVar2 = strcmp(param_1[3],&processed_var_7136_ptr);
        if (iVar2 == 0) {
          uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          puVar4 = (uint64_t *)function_2c8e90(pplocal_var_280[0x1337],&pplocal_var_278);
          local_var_298 = 0xffffffff;
          RenderingEngineCore0(uVar6,1,*puVar4);
          if (pplocal_var_278 != (void **)0x0) {
            (**(code **)(*pplocal_var_278 + 0x38))();
          }
        }
      }
      DataStructure_UpdateNode(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      DataStructure_ProcessLinkedList(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
      lVar3 = system_message_buffer;
      puVar5 = &system_buffer_ptr;
      if (plocal_var_110 != (void *)0x0) {
        puVar5 = plocal_var_110;
      }
      if (puVar5 != (void *)0x0) {
        lVar8 = strnlen(puVar5,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar5,lVar8);
        *(int8_t *)(lVar8 + 0x1ce0 + lVar3) = 0;
      }
      DataStructure_ValidateTree(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if ((void *)*param_1 != &processed_var_7888_ptr) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      iVar2 = 0;
      lVar8 = 0x8a38;
      lVar3 = 0x8438;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar3 + -0x8300) != 0) &&
           (((lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar9 + lVar3) != 0 ||
             (*(int *)(lVar8 + -0x200 + lVar9) != -1)) || (*(int *)(lVar9 + lVar8) != 0x10)))) {
          pplocal_var_280 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar9 + 0x8400),iVar2,1,&pplocal_var_280);
          *(uint64_t *)(lVar9 + lVar3) = 0;
          *(int32_t *)(lVar8 + -0x200 + lVar9) = 0xffffffff;
          *(int32_t *)(lVar9 + lVar8) = 0x10;
          *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 4;
      } while (iVar2 < 0x10);
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    pplocal_var_280 = &plocal_var_240;
    plocal_var_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_238 = 0;
    local_var_228 = local_var_228 & 0xffffffff00000000;
    plocal_var_240 = &system_state_ptr;
    if (plStack_248 != (int64_t *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  SystemCore_Synchronizer(&plocal_var_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  plocal_var_118 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fbab0(int64_t param_1,int64_t param_2)
void function_3fbab0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int8_t auVar8 [16];
  double dVar9;
  int8_t stack_array_168 [32];
  int64_t *plStack_148;
  int64_t *plStack_140;
  uint64_t local_var_138;
  void *plocal_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int8_t stack_array_114 [8];
  uint64_t local_var_10c;
  int8_t local_var_104;
  uint64_t local_var_103;
  int32_t local_var_f8;
  int8_t local_var_f4;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_138 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  *(double *)(param_1 + 0x58) = (double)*(int *)(param_2 + 0x3590);
  *(double *)(param_1 + 0x60) = (double)*(int *)(param_2 + 0x3594);
  function_1f9270();
  plocal_var_128 = &memory_allocator_3480_ptr;
  local_var_120 = stack_array_114 + 4;
  stack_array_114[4] = 0;
  local_var_118 = 0xb;
  strcpy_s(stack_array_114 + 4,0x40,&processed_var_4032_ptr);
  puVar4 = (uint64_t *)function_0b4910(system_resource_state,&plStack_140,&plocal_var_128);
  uVar1 = *puVar4;
  *puVar4 = 0;
  plStack_148 = *(int64_t **)(param_1 + 0x450);
  *(uint64_t *)(param_1 + 0x450) = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  plocal_var_128 = &system_state_ptr;
  iVar5 = (int)*(double *)(param_1 + 0x60);
  iVar7 = (int)*(double *)(param_1 + 0x58);
  if (iVar5 < iVar7) {
    iVar2 = 1;
    if (1 < iVar7) {
      iVar2 = iVar7;
    }
  }
  else {
    iVar2 = 1;
    if (1 < iVar5) {
      iVar2 = iVar5;
    }
  }
  auVar8._0_8_ = (double)log2((double)iVar2);
  lVar6 = (int64_t)auVar8._0_8_;
  dVar9 = 0.0;
  if ((lVar6 != -0x8000000000000000) && (dVar9 = (double)lVar6, dVar9 != auVar8._0_8_)) {
    auVar8._8_8_ = auVar8._0_8_;
    uVar3 = movmskpd(0,auVar8);
    auVar8._0_8_ = (double)(int64_t)(lVar6 - (uint64_t)(uVar3 & 1));
  }
  stack_array_114 = (int8_t  [8])0x0;
  local_var_10c = 0x3f80000000000000;
  local_var_103 = 1;
  local_var_104 = 0;
  local_var_f8 = 0xffffffff;
  local_var_f4 = 0;
  plocal_var_128 = (void *)
                CONCAT44((int)(int64_t)*(double *)(param_1 + 0x60),
                         (int)(int64_t)*(double *)(param_1 + 0x58));
  local_var_120 = (int8_t *)CONCAT44((int)(auVar8._0_8_ + 1.0),1);
  local_var_118 = 0xd;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = 7;
  strcpy_s(stack_array_b0,dVar9,&processed_var_4048_ptr);
  puVar4 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_148,&plocal_var_c8,&plocal_var_128);
  uVar1 = *puVar4;
  *puVar4 = 0;
  plStack_140 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar1;
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fbd40(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_3fbd40(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int8_t stack_array_1b8 [32];
  int iStack_198;
  char acStack_188 [4];
  int iStack_184;
  void **pplocal_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int64_t *plStack_158;
  void *plocal_var_150;
  int64_t lStack_148;
  int32_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int64_t *plStack_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  int8_t stack_array_e8 [32];
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int64_t *plStack_b8;
  uint64_t local_var_b0;
  int iStack_a8;
  int16_t local_var_a4;
  int16_t local_var_a2;
  uint64_t local_var_a0;
  float fStack_98;
  float fStack_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  local_var_118 = 0xfffffffffffffffe;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  *(int16_t *)(param_1 + 0x100) = 0x101;
  *(int8_t *)(param_1 + 0x103) = 1;
  local_var_a4 = 4;
  iVar9 = 0;
  iStack_a8 = 0;
  local_var_b0 = 0;
  local_var_178 = *(uint64_t *)(param_1 + 0x450);
  plStack_158 = (int64_t *)0x0;
  plocal_var_150 = &system_data_buffer_ptr;
  local_var_138 = 0;
  lStack_148 = 0;
  local_var_140 = 0;
  plStack_120 = (int64_t *)0x0;
  local_var_168 = CONCAT26(local_var_a2,0x400000000);
  local_var_170 = 0;
  local_var_160 = 2;
  local_var_130 = 0;
  local_var_12c = 0;
  local_var_128 = 0;
  local_var_124 = 0;
  uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x450) + 0x15b8);
  pplocal_var_180 = (void **)&local_var_110;
  local_var_108 = 0;
  local_var_f8 = 2;
  local_var_f0 = 0;
  local_var_110 = local_var_178;
  local_var_100 = local_var_168;
  SystemCore_NetworkHandler0(stack_array_e8,&plocal_var_150);
  local_var_c8 = CONCAT44(local_var_12c,local_var_130);
  local_var_c0 = CONCAT44(local_var_124,local_var_128);
  plStack_b8 = plStack_120;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x28))();
  }
  uVar4 = UIRenderingEngine(uVar4,param_3,&local_var_110,acStack_188);
  *(uint64_t *)(param_1 + 0x458) = uVar4;
  if (acStack_188[0] == '\0') {
    *(uint64_t *)(param_1 + 0xf8) = uVar4;
    lVar7 = system_message_buffer;
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x428) + 0x35c);
    uVar10 = (uint)*(byte *)(*(int64_t *)(param_1 + 0x428) + 0x335);
    if ((int)uVar1 < (int)uVar10) {
      uVar10 = uVar1;
    }
    pplocal_var_180 = (void **)CONCAT44(pplocal_var_180._4_4_,(int)*(double *)(param_1 + 0x58));
    iStack_184 = (int)*(double *)(param_1 + 0x60);
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    if (0 < (int)uVar10) {
      do {
        plVar2 = *(int64_t **)(lVar7 + 0x1cd8);
        lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x428) + 0x1d8);
        if (lVar6 == 0) {
          plVar8 = (int64_t *)0x0;
        }
        else {
          if (system_main_module_state != 0) {
            *(int64_t *)(*(int64_t *)(param_1 + 0x428) + 0x340) =
                 (int64_t)*(int *)(system_main_module_state + 0x224);
          }
          plVar8 = (int64_t *)((int64_t)iVar9 * 0x10 + lVar6);
          if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
            (**(code **)(*plVar2 + 0x70))(plVar2,*plVar8,1);
            lVar7 = system_message_buffer;
          }
        }
        plVar2[0x1077] = (int64_t)plVar8;
        SystemCore_ProcessorEx(*(uint64_t *)(lVar7 + 0x1cd8),1);
        if (iVar9 == 0) {
          uVar4 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          uVar5 = SystemLog_Manager(param_3);
          iStack_198 = -1;
        }
        else {
          uVar4 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          iStack_198 = iVar9 + -1;
          uVar5 = *(uint64_t *)(param_1 + 0x428);
        }
        RenderingEngineCore0(uVar4,0,uVar5,0x10);
        iVar3 = (int)pplocal_var_180;
        fVar11 = (float)(int)pplocal_var_180;
        fVar12 = (float)iStack_184;
        lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
        local_var_a0 = 0;
        local_var_90 = 0;
        local_var_8c = 0x3f800000;
        plVar2 = *(int64_t **)(lVar7 + 0x8400);
        fStack_98 = fVar11;
        fStack_94 = fVar12;
        (**(code **)(*plVar2 + 0x160))(plVar2,1,&local_var_a0);
        local_var_a4 = (int16_t)iStack_184;
        local_var_a2 = (int16_t)((uint)iStack_184 >> 0x10);
        local_var_b0 = 0;
        iStack_a8 = iVar3;
        plVar2 = *(int64_t **)(lVar7 + 0x8400);
        (**(code **)(*plVar2 + 0x168))(plVar2,1,&local_var_b0);
        lVar7 = system_message_buffer;
        fVar11 = 1.0 / fVar11;
        *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) = fVar11 * 0.5;
        fVar12 = 1.0 / fVar12;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be4) = fVar12 * 0.5;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be8) = fVar11;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1bec) = fVar12;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1c70) = (float)iVar9;
        UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar7 + 0x1cd8),*(uint64_t *)(lVar7 + 0x1c88),
                      *(int64_t *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
        DataStructure_ProcessLinkedList(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xf8);
        lVar7 = system_message_buffer;
        lVar6 = strnlen(&processed_var_4056_ptr,0x3f);
        strncpy(lVar7 + 0x1ce0,&processed_var_4056_ptr,lVar6);
        *(int8_t *)(lVar6 + 0x1ce0 + lVar7) = 0;
        DataStructure_ValidateTree(*(uint64_t *)(system_message_buffer + 0x1cd8));
        iVar3 = 1;
        if (1 < (int)pplocal_var_180 / 2) {
          iVar3 = (int)pplocal_var_180 / 2;
        }
        pplocal_var_180 = (void **)CONCAT44(pplocal_var_180._4_4_,iVar3);
        iVar3 = iStack_184 / 2;
        iStack_184 = 1;
        if (1 < iVar3) {
          iStack_184 = iVar3;
        }
        iVar9 = iVar9 + 1;
        lVar7 = system_message_buffer;
      } while (iVar9 < (int)uVar10);
    }
  }
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  pplocal_var_180 = &plocal_var_150;
  plocal_var_150 = &system_data_buffer_ptr;
  if (lStack_148 == 0) {
    lStack_148 = 0;
    local_var_138 = local_var_138 & 0xffffffff00000000;
    plocal_var_150 = &system_state_ptr;
    if (plStack_158 != (int64_t *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_88 ^ (uint64_t)stack_array_1b8);
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fc260(uint64_t *param_1,int32_t param_2,int32_t param_3)
void function_3fc260(uint64_t *param_1,int32_t param_2,int32_t param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_168 [32];
  int64_t *plStack_148;
  int64_t *aplStack_140 [2];
  int64_t *plStack_130;
  uint64_t local_var_128;
  uint64_t *plocal_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [24];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_128 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  plocal_var_120 = param_1;
  SystemCore_ConfigValidator();
  *param_1 = &processed_var_7976_ptr;
  *(int32_t *)(param_1 + 0x8a) = param_2;
  *(int32_t *)((int64_t)param_1 + 0x454) = param_3;
  *param_1 = &processed_var_4152_ptr;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  plocal_var_118 = &system_config_ptr;
  plocal_var_110 = stack_array_100;
  stack_array_100[0] = 0;
  local_var_108 = 0xe;
  strcpy_s(stack_array_100,0x10,&ui_system_data_1984_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,aplStack_140,&plocal_var_118,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_148 = (int64_t *)param_1[0x8d];
  param_1[0x8d] = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (aplStack_140[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_140[0] + 0x38))();
  }
  plocal_var_118 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x14;
  strcpy_s(stack_array_d0,0x40,&rendering_buffer_2176_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_130,&plocal_var_e8,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_148 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x14;
  strcpy_s(stack_array_70,0x40,&rendering_buffer_2200_ptr);
  puVar2 = (uint64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_148,&plocal_var_88,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  aplStack_140[0] = (int64_t *)param_1[0x8c];
  param_1[0x8c] = uVar1;
  if (aplStack_140[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_140[0] + 0x38))();
  }
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
int64_t function_3fc4f0(int64_t param_1,uint64_t param_2)
{
  if (*(int64_t **)(param_1 + 0x470) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x470) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x468) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x468) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x460) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x460) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x458) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x38))();
  }
  function_1f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x490);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address