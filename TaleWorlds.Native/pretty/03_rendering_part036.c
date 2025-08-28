#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_GarbageCollector
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 03_rendering_part036.c - 1 个函数
// 函数: void function_288040(uint64_t *param_1)
void function_288040(uint64_t *param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint uVar10;
  uint64_t *puVar11;
  int32_t uVar12;
  int32_t extraout_XMM0_Da;
  int8_t stack_array_1e8 [32];
  uint local_var_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int iStack_198;
  int32_t local_var_194;
  int64_t *plStack_190;
  int64_t *plStack_188;
  void *plocal_var_180;
  int64_t lStack_178;
  int32_t local_var_168;
  uint64_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  int16_t local_var_148;
  int8_t local_var_146;
  int32_t local_var_144;
  int8_t local_var_140;
  uint64_t local_var_138;
  int64_t alStack_130 [3];
  int32_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t *plocal_var_100;
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int8_t stack_array_e0 [8];
  uint64_t local_var_d8;
  int64_t alStack_d0 [3];
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_108 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  local_var_1c8 = 0;
  plocal_var_100 = param_1;
  function_244190();
  *param_1 = &rendering_ripple_ptr;
  plVar1 = param_1 + 0x1f;
  *plVar1 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 3;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  plVar9 = param_1 + 0x27;
  *plVar9 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(int32_t *)(param_1 + 0x2a) = 3;
  *(int8_t *)((int64_t)param_1 + 0x11c) = 1;
  *(int8_t *)(param_1 + 0x1e) = 0;
  *(int32_t *)(param_1 + 0x23) = 0;
  uVar6 = system_resource_state;
  plocal_var_f8 = &memory_allocator_3480_ptr;
  plocal_var_f0 = stack_array_e0;
  stack_array_e0[0] = 0;
  local_var_e8 = 0x23;
  plStack_1a8 = plVar9;
  strcpy_s(stack_array_e0,0x40,&processed_var_9992_ptr);
  SystemCore_PerformanceMonitor(uVar6,&plStack_1b0,&plocal_var_f8,1);
  local_var_1c8 = 1;
  plocal_var_f8 = &system_state_ptr;
  uVar12 = function_22cb40(plStack_1b0,&plStack_1b8);
  uVar10 = 0;
  local_var_1c8 = 0;
  if (plStack_1b0 != (int64_t *)0x0) {
    uVar12 = (**(code **)(*plStack_1b0 + 0x38))();
  }
  puVar2 = (uint64_t *)function_0bf050(uVar12,&plStack_188);
  puVar2 = (uint64_t *)SystemCore_BufferManager(*puVar2,&plStack_190);
  uVar6 = *puVar2;
  *puVar2 = 0;
  plStack_1c0 = (int64_t *)param_1[0x24];
  param_1[0x24] = uVar6;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  if (plStack_190 != (int64_t *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if ((param_1[0x24] != 0) && (plStack_1b8 != (int64_t *)0x0)) {
    function_288f30(param_1,&plStack_1b0);
    *(uint *)(plStack_1b0 + 0x65) = *(uint *)(plStack_1b0 + 0x65) | 0x20000000;
    if (plStack_1b0 != (int64_t *)0x0) {
      function_22cd30(plStack_1b8,0);
    }
    *(uint *)(plStack_1b8 + 0x27) = *(uint *)(plStack_1b8 + 0x27) | 0x20;
    UltraHighFreq_SecurityValidator1(param_1[0x24],&plStack_1b8);
    plVar9 = (int64_t *)(param_1[0x28] - *plVar9 >> 5);
    iStack_198 = 0;
    plStack_1a8 = plVar9;
    if (0 < (int)plVar9) {
      do {
        iVar7 = iStack_198;
        puVar3 = (uint64_t *)0x0;
        CoreEngineDataTransformer(&plocal_var_180,(int64_t)iStack_198 * 0x20 + param_1[0x27]);
        SystemCore_GarbageCollector(system_resource_state,&plStack_1c0,&plocal_var_180,1);
        *(uint *)(plStack_1c0 + 0x65) = *(uint *)(plStack_1c0 + 0x65) | 0x20000000;
        puVar2 = (uint64_t *)param_1[0x20];
        if (puVar2 < (uint64_t *)param_1[0x21]) {
          param_1[0x20] = puVar2 + 1;
          *puVar2 = plStack_1c0;
          if (plStack_1c0 != (int64_t *)0x0) {
            (**(code **)(*plStack_1c0 + 0x28))(plStack_1c0);
          }
        }
        else {
          puVar4 = (uint64_t *)*plVar1;
          lVar5 = (int64_t)puVar2 - (int64_t)puVar4 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_18028834f:
            puVar3 = (uint64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(param_1 + 0x22));
            puVar2 = (uint64_t *)param_1[0x20];
            puVar4 = (uint64_t *)*plVar1;
            puVar11 = puVar3;
          }
          else {
            lVar5 = lVar5 * 2;
            puVar11 = puVar3;
            if (lVar5 != 0) goto LAB_18028834f;
          }
          for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
            *puVar3 = *puVar4;
            *puVar4 = 0;
            puVar3 = puVar3 + 1;
          }
          *puVar3 = plStack_1c0;
          if (plStack_1c0 != (int64_t *)0x0) {
            (**(code **)(*plStack_1c0 + 0x28))(plStack_1c0);
          }
          plVar9 = (int64_t *)param_1[0x20];
          plVar8 = (int64_t *)*plVar1;
          if (plVar8 != plVar9) {
            do {
              if ((int64_t *)*plVar8 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar8 + 0x38))();
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar9);
            plVar8 = (int64_t *)*plVar1;
          }
          if (plVar8 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plVar8);
          }
          *plVar1 = (int64_t)puVar11;
          param_1[0x20] = puVar3 + 1;
          param_1[0x21] = puVar11 + lVar5;
          plVar9 = plStack_1a8;
          iVar7 = iStack_198;
        }
        if (iVar7 == 0) {
          if (plStack_1c0 != (int64_t *)0x0) {
            uVar6 = 0;
LAB_18028843a:
            function_22cd30(*(uint64_t *)(param_1[0x24] + 0x1b8),uVar6);
          }
        }
        else if ((iVar7 == 1) && (plStack_1c0 != (int64_t *)0x0)) {
          uVar6 = 1;
          goto LAB_18028843a;
        }
        if (((int)plVar9 == 1) && (plStack_1c0 != (int64_t *)0x0)) {
          function_22cd30(*(uint64_t *)(param_1[0x24] + 0x1b8),(uint64_t)plVar9 & 0xffffffff);
        }
        if (plStack_1c0 != (int64_t *)0x0) {
          (**(code **)(*plStack_1c0 + 0x38))();
        }
        plocal_var_180 = &system_data_buffer_ptr;
        if (lStack_178 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_178 = 0;
        local_var_168 = 0;
        plocal_var_180 = &system_state_ptr;
        iStack_198 = iVar7 + 1;
        uVar10 = local_var_1c8;
      } while (iStack_198 < (int)plVar9);
    }
    plocal_var_f8 = (void *)0x0;
    plocal_var_f0 = (int8_t *)0xffffffff00000000;
    local_var_e8 = CONCAT13(local_var_e8._3_1_,1);
    local_var_e4 = 0xffffffff;
    stack_array_e0[0] = 1;
    local_var_d8 = 0;
    plStack_1a8 = alStack_d0;
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    alStack_d0[2] = 0;
    local_var_b8 = 3;
    local_var_b0 = 0;
    function_076c50(param_1[0x24],&plocal_var_f8);
    plStack_1a8 = alStack_d0;
    if (alStack_d0[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plStack_1b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
  }
  uVar6 = system_resource_state;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0xb;
  strcpy_s(stack_array_80,0x40,&processed_var_9928_ptr);
  SystemCore_PerformanceMonitor(uVar6,&plStack_1c0,&plocal_var_98,1);
  local_var_1c8 = uVar10 & 0xffffffef | 8;
  plocal_var_98 = &system_state_ptr;
  puVar2 = (uint64_t *)function_22cb40(plStack_1c0,&iStack_198);
  plVar1 = (int64_t *)*puVar2;
  *puVar2 = 0;
  plStack_1a8 = plStack_1b8;
  uVar12 = extraout_XMM0_Da;
  if (plStack_1b8 != (int64_t *)0x0) {
    lVar5 = *plStack_1b8;
    plStack_1b8 = plVar1;
    uVar12 = (**(code **)(lVar5 + 0x38))();
    plVar1 = plStack_1b8;
  }
  plStack_1b8 = plVar1;
  if ((int64_t *)CONCAT44(local_var_194,iStack_198) != (int64_t *)0x0) {
    uVar12 = (**(code **)(*(int64_t *)CONCAT44(local_var_194,iStack_198) + 0x38))();
  }
  local_var_1c8 = uVar10 & 0xffffffe7;
  if (plStack_1c0 != (int64_t *)0x0) {
    uVar12 = (**(code **)(*plStack_1c0 + 0x38))();
  }
  puVar2 = (uint64_t *)function_0bf6c0(uVar12,&plStack_190);
  puVar2 = (uint64_t *)SystemCore_BufferManager(*puVar2,&plStack_188);
  uVar6 = *puVar2;
  *puVar2 = 0;
  plStack_1a8 = (int64_t *)param_1[0x25];
  param_1[0x25] = uVar6;
  if (plStack_1a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a8 + 0x38))();
  }
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_190 != (int64_t *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
  UltraHighFreq_SecurityValidator1(param_1[0x25],&plStack_1b8);
  local_var_158 = 0;
  local_var_150 = 0;
  local_var_14c = 0xffffffff;
  local_var_148 = 1;
  local_var_146 = 0;
  local_var_144 = 0xffffffff;
  local_var_140 = 1;
  local_var_138 = 0;
  plStack_1a8 = alStack_130;
  alStack_130[0] = 0;
  alStack_130[1] = 0;
  alStack_130[2] = 0;
  local_var_118 = 3;
  local_var_110 = 0;
  function_076c50(param_1[0x25],&local_var_158);
  plStack_1a8 = (int64_t *)0x3dcccccd00000000;
  local_var_1a0 = 0;
  local_var_19c = 0x7f7fffff;
  function_0c12e0(param_1[0x25],&plStack_1a8);
  function_0b6620();
  *(int32_t *)((int64_t)param_1 + 0x15c) = 0xc0a00000;
  plStack_1a8 = alStack_130;
  if (alStack_130[0] == 0) {
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1e8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t * function_288790(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  *param_1 = &rendering_ripple_ptr;
  plVar1 = (int64_t *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  DataSerializationEngine();
  if ((int64_t *)param_1[0x25] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x25] + 0x38))();
  }
  if ((int64_t *)param_1[0x24] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x24] + 0x38))();
  }
  DataTransformer0();
  function_244780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x160);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_288880(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int8_t uVar12;
  uint uVar13;
  int32_t uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint64_t local_var_218;
  int32_t local_var_210;
  int32_t local_var_20c;
  int16_t local_var_208;
  int8_t local_var_206;
  int32_t local_var_204;
  int8_t local_var_200;
  uint64_t local_var_1f8;
  int64_t lStack_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  int32_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int16_t local_var_1b8;
  int8_t local_var_1b6;
  int32_t local_var_1b4;
  int8_t local_var_1b0;
  uint64_t local_var_1a8;
  int64_t lStack_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  int32_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  int32_t local_var_170;
  int16_t local_var_16c;
  uint64_t local_var_168;
  uint64_t local_var_160;
  int32_t local_var_158;
  int8_t local_var_154;
  int32_t local_var_150;
  uint64_t local_var_14c;
  int16_t local_var_144;
  uint64_t local_var_140;
  int32_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  int8_t local_var_124;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  local_var_108 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x11c) != '\0') {
    *(int8_t *)(param_1 + 0x11c) = 0;
    *(float *)(param_1 + 0x15c) = (float)system_error_code * 1e-05;
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    function_289f50();
  }
  local_var_1c8 = 0;
  bVar19 = 0;
  local_var_1c0 = 0;
  local_var_1bc = 0xffffffff;
  local_var_1b8 = 1;
  local_var_1b6 = 0;
  local_var_1b4 = 0xffffffff;
  local_var_1b0 = 1;
  local_var_1a8 = 0;
  lStack_1a0 = 0;
  local_var_198 = 0;
  local_var_190 = 0;
  local_var_188 = 3;
  local_var_180 = 0;
  local_var_218 = 0;
  local_var_210 = 0;
  local_var_20c = 0xffffffff;
  local_var_208 = 1;
  local_var_206 = 0;
  local_var_204 = 0xffffffff;
  local_var_200 = 1;
  local_var_1f8 = 0;
  lStack_1f0 = 0;
  local_var_1e8 = 0;
  local_var_1e0 = 0;
  local_var_1d8 = 3;
  local_var_1d0 = 0;
  function_076c50(*(uint64_t *)(param_1 + 0x120),&local_var_1c8);
  function_076c50(*(uint64_t *)(param_1 + 0x128),&local_var_218);
  function_0b6620();
  lVar15 = function_0daa50();
  SystemCore_NetworkHandler(lVar15,&system_data_6c50);
  plVar4 = *(int64_t **)(system_message_buffer + 0x121e0);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar5 = *(int64_t **)(lVar15 + 0x9690);
  *(int64_t **)(lVar15 + 0x9690) = plVar4;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  plVar4 = *(int64_t **)(lVar15 + 0x96a8);
  *(uint64_t *)(lVar15 + 0x96a8) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  uVar8 = *(uint64_t *)(param_1 + 0x24);
  *(uint64_t *)(lVar15 + 0x11c18) = *(uint64_t *)(param_1 + 0x1c);
  *(uint64_t *)(lVar15 + 0x11c20) = uVar8;
  *(uint64_t *)(lVar15 + 0x11c28) = *(uint64_t *)(param_1 + 0x2c);
  lVar9 = system_operation_state;
  fVar2 = *(float *)(system_operation_state + 0x17ec);
  fVar20 = fVar2 / *(float *)(system_operation_state + 0x17f0);
  fVar22 = 0.0;
  fVar21 = 1.0;
  fVar24 = 0.0;
  fVar23 = 1.0;
  if (fVar20 <= 1.7777778) {
    fVar20 = 0.5625 / (1.0 / fVar20);
    fVar23 = (fVar20 + 1.0) * 0.5;
    fVar24 = (1.0 - fVar20) * 0.5;
  }
  else {
    fVar21 = (1.7777778 / fVar20 + 1.0) * 0.5;
    fVar22 = (1.0 - 1.7777778 / fVar20) * 0.5;
  }
  fVar20 = *(float *)(system_operation_state + 0x17f0);
  fVar24 = fVar24 * *(float *)(system_operation_state + 0x17f0);
  *(float *)(lVar15 + 0x11c18) = fVar22 * fVar2;
  *(float *)(lVar15 + 0x11c1c) = fVar24;
  *(float *)(lVar15 + 0x11c20) = fVar21 * fVar2 - fVar22 * fVar2;
  *(float *)(lVar15 + 0x11c24) = fVar23 * fVar20 - fVar24;
  *(int32_t *)(lVar15 + 0x11cf0) = 0x1000000;
  *(int16_t *)(lVar15 + 0x11c36) = 0x100;
  *(int8_t *)(lVar15 + 0x9a31) = 0;
  uVar13 = *(uint *)(param_1 + 0xcc);
  *(uint *)(lVar15 + 4) = uVar13 | 0x10010082;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    uVar13 = uVar13 | 0x10010083;
  }
  else {
    uVar13 = uVar13 & 0xfffffffe | 0x10010082;
  }
  *(uint *)(lVar15 + 4) = uVar13;
  *(float *)(lVar15 + 0x124e4) = (float)(system_error_code % 1000000000) * 1e-05;
  lVar18 = 2;
  puVar10 = (uint64_t *)(lVar9 + 0x16a0);
  puVar11 = (uint64_t *)(lVar15 + 0x30);
  do {
    puVar17 = puVar11;
    puVar16 = puVar10;
    uVar8 = puVar16[1];
    *puVar17 = *puVar16;
    puVar17[1] = uVar8;
    uVar8 = puVar16[3];
    puVar17[2] = puVar16[2];
    puVar17[3] = uVar8;
    uVar8 = puVar16[5];
    puVar17[4] = puVar16[4];
    puVar17[5] = uVar8;
    uVar8 = puVar16[7];
    puVar17[6] = puVar16[6];
    puVar17[7] = uVar8;
    uVar8 = puVar16[9];
    puVar17[8] = puVar16[8];
    puVar17[9] = uVar8;
    uVar8 = puVar16[0xb];
    puVar17[10] = puVar16[10];
    puVar17[0xb] = uVar8;
    uVar8 = puVar16[0xd];
    puVar17[0xc] = puVar16[0xc];
    puVar17[0xd] = uVar8;
    uVar8 = puVar16[0xf];
    puVar17[0xe] = puVar16[0xe];
    puVar17[0xf] = uVar8;
    lVar18 = lVar18 + -1;
    puVar10 = puVar16 + 0x10;
    puVar11 = puVar17 + 0x10;
  } while (lVar18 != 0);
  uVar8 = puVar16[0x11];
  puVar17[0x10] = puVar16[0x10];
  puVar17[0x11] = uVar8;
  uVar8 = puVar16[0x13];
  puVar17[0x12] = puVar16[0x12];
  puVar17[0x13] = uVar8;
  uVar14 = *(int32_t *)((int64_t)puVar16 + 0xa4);
  uVar6 = *(int32_t *)(puVar16 + 0x15);
  uVar7 = *(int32_t *)((int64_t)puVar16 + 0xac);
  *(int32_t *)(puVar17 + 0x14) = *(int32_t *)(puVar16 + 0x14);
  *(int32_t *)((int64_t)puVar17 + 0xa4) = uVar14;
  *(int32_t *)(puVar17 + 0x15) = uVar6;
  *(int32_t *)((int64_t)puVar17 + 0xac) = uVar7;
  uVar14 = *(int32_t *)((int64_t)puVar16 + 0xb4);
  uVar6 = *(int32_t *)(puVar16 + 0x17);
  uVar7 = *(int32_t *)((int64_t)puVar16 + 0xbc);
  *(int32_t *)(puVar17 + 0x16) = *(int32_t *)(puVar16 + 0x16);
  *(int32_t *)((int64_t)puVar17 + 0xb4) = uVar14;
  *(int32_t *)(puVar17 + 0x17) = uVar6;
  *(int32_t *)((int64_t)puVar17 + 0xbc) = uVar7;
  function_24b8d0(lVar15);
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(uint *)(lVar15 + 4) = *(uint *)(lVar15 + 4) | 0x40000;
  }
  *(int32_t *)(lVar15 + 0x9a2c) = 10000;
  local_var_b8 = 0x3f800000;
  local_var_b4 = 0;
  local_var_b0 = 0;
  local_var_ac = 0;
  local_var_a8 = 0;
  local_var_a4 = 0x3f800000;
  local_var_a0 = 0;
  local_var_9c = 0;
  local_var_98 = 0;
  local_var_94 = 0;
  local_var_90 = 0x3f800000;
  local_var_8c = 0;
  local_var_88 = 0;
  local_var_80 = 0x3f80000000000000;
  local_var_f8 = 0x3d377777;
  local_var_f4 = 0;
  local_var_f0 = 0;
  local_var_ec = 0;
  local_var_e8 = 0;
  local_var_e4 = 0x3da314dc;
  local_var_e0 = 0;
  local_var_dc = 0;
  local_var_d8 = 0;
  local_var_d4 = 0;
  local_var_d0 = 0x3f800000;
  local_var_cc = 0;
  local_var_c8 = 0x3f5c28f6;
  local_var_c4 = 0x3e000000;
  local_var_c0 = 0;
  local_var_bc = 0x7f7fffff;
  *(int8_t *)(lVar15 + 0x1c60) = 1;
  local_var_78 = local_var_f8;
  local_var_74 = local_var_f4;
  local_var_70 = local_var_f0;
  local_var_6c = local_var_ec;
  local_var_68 = local_var_e8;
  local_var_64 = local_var_e4;
  local_var_60 = local_var_e0;
  local_var_5c = local_var_dc;
  local_var_58 = local_var_d8;
  local_var_54 = local_var_d4;
  local_var_50 = local_var_d0;
  local_var_4c = local_var_cc;
  uVar12 = Function_00f52384(system_parameter_buffer,lVar15);
  *(int8_t *)(lVar15 + 0x1c61) = uVar12;
  if (*(int *)(lVar15 + 8) != -1) {
    bVar19 = (byte)*(int32_t *)(lVar15 + 0x18);
  }
  *(byte *)(lVar15 + 0x1c62) = bVar19 & 1;
  uVar14 = Function_bbe7a86f(lVar15);
  *(int32_t *)(lVar15 + 0x1c64) = uVar14;
  local_var_178 = 0;
  local_var_170 = 0xffffffff;
  local_var_16c = 0xff00;
  local_var_168 = 0;
  local_var_160 = 0xffffffffffffffff;
  local_var_158 = 0xffffffff;
  local_var_154 = 0xff;
  local_var_150 = 0xffffffff;
  local_var_14c = 0;
  local_var_144 = 0x400;
  local_var_140 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  local_var_128 = 0;
  local_var_124 = 0;
  local_var_110 = 0;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    SystemHealthMonitor(*(uint64_t *)(param_1 + 0x120),lVar15,&local_var_b8,0,&local_var_178);
  }
  SystemHealthMonitor(*(uint64_t *)(param_1 + 0x128),lVar15,&local_var_f8,0,&local_var_178);
  LOCK();
  piVar1 = (int *)(param_2 + 0x11a48);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar3 * 8) = lVar15;
  uVar14 = *(int32_t *)(param_2 + 0x9a38);
  uVar6 = *(int32_t *)(param_2 + 0x9a3c);
  uVar7 = *(int32_t *)(param_2 + 0x9a40);
  *(int32_t *)(lVar15 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
  *(int32_t *)(lVar15 + 0x9a38) = uVar14;
  *(int32_t *)(lVar15 + 0x9a3c) = uVar6;
  *(int32_t *)(lVar15 + 0x9a40) = uVar7;
  if (lStack_1f0 == 0) {
    if (lStack_1a0 == 0) {
      return lVar15;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t *
function_288e60(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x16,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6964616f4c6c6772;
  puVar1[1] = 0x65657263735f676e;
  *(int32_t *)(puVar1 + 2) = 0x69765f6e;
  *(int16_t *)((int64_t)puVar1 + 0x14) = 0x7765;
  *(int8_t *)((int64_t)puVar1 + 0x16) = 0;
  *(int32_t *)(param_2 + 2) = 0x16;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_288f00(int64_t param_1)
{
  int *piVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  function_077040(*(uint64_t *)(param_1 + 0x120));
  lVar4 = *(int64_t *)(param_1 + 0x128);
  if (*(int64_t *)(lVar4 + 0x1b8) != 0) {
    lVar7 = 0xb8;
    lVar6 = system_main_module_state;
    do {
      lVar3 = *(int64_t *)(lVar7 + *(int64_t *)(lVar4 + 0x1b8));
      if ((((lVar3 != 0) && (*(int64_t *)(*(int64_t *)(lVar4 + 0x1b8) + 0x328 + lVar7) == 0)) &&
          ((*(uint *)(lVar3 + 0x328) & 0x20000000) == 0)) && (*(int64_t *)(lVar3 + 0x370) == 0)) {
        if (*(int64_t *)(lVar3 + 0x1d8) == 0) {
          SystemCore_NetworkHandler(lVar3,0);
          lVar6 = system_main_module_state;
          piVar1 = (int *)(*(int64_t *)(lVar7 + *(int64_t *)(lVar4 + 0x1b8)) + 0x3a8);
          *piVar1 = *piVar1 + 1;
        }
        else if (lVar6 != 0) {
          *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(lVar6 + 0x224);
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 < 0x138);
  }
  bVar2 = *(byte *)(lVar4 + 0xf9);
  if (bVar2 != 0) {
    if (*(int64_t *)(lVar4 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar4 + 0x1d8) = 0;
    LOCK();
    bVar2 = *(byte *)(lVar4 + 0xf9);
    *(byte *)(lVar4 + 0xf9) = 0;
    UNLOCK();
  }
  uVar5 = (uint64_t)bVar2;
  if (*(int64_t *)(lVar4 + 0x1e8) != 0) {
    function_080060();
    uVar5 = *(uint64_t *)(lVar4 + 0x1f0);
    *(uint64_t *)(lVar4 + 0x1e8) = 0;
    if (uVar5 != 0) {
      *(byte *)(uVar5 + 0xfe) = *(byte *)(uVar5 + 0xfe) & 0xfb;
    }
  }
  return uVar5;
}
// WARNING: Removing unreachable block (ram,0x000180289429)
// WARNING: Removing unreachable block (ram,0x00018028942e)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address