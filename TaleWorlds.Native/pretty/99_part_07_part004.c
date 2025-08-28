#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part004.c - 5 个函数
// 函数: void function_3fdcd0(int64_t *param_1,int64_t param_2,int64_t param_3,int32_t param_4,
void function_3fdcd0(int64_t *param_1,int64_t param_2,int64_t param_3,int32_t param_4,
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
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  int32_t local_var_290;
  char acStack_288 [8];
  int32_t local_var_280;
  int32_t local_var_27c;
  void *plocal_var_278;
  void **pplocal_var_270;
  uint64_t local_var_268;
  int32_t local_var_260;
  int64_t *plStack_258;
  void *plocal_var_250;
  int64_t lStack_248;
  int32_t local_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  int32_t local_var_22c;
  int32_t local_var_228;
  int32_t local_var_224;
  int64_t *plStack_220;
  int8_t stack_array_218 [4];
  int8_t stack_array_214 [4];
  uint64_t local_var_210;
  void *plocal_var_208;
  void **pplocal_var_200;
  uint64_t local_var_1f8;
  int32_t local_var_1f0;
  uint64_t local_var_1e8;
  int8_t stack_array_1e0 [32];
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int64_t *plStack_1b0;
  void **pplocal_var_1a8;
  int iStack_1a0;
  int iStack_19c;
  uint64_t local_var_198;
  float fStack_190;
  int16_t local_var_18c;
  int16_t local_var_18a;
  int32_t local_var_188;
  int32_t local_var_184;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [72];
  void *plocal_var_118;
  void *plocal_var_110;
  uint local_var_108;
  uint8_t stack_array_100 [136];
  uint64_t local_var_78;
  uint64_t local_var_60;
  plVar11 = *(int64_t **)(param_2 + 0x448);
  if (plVar11 != (int64_t *)0x0) {
    local_var_60 = 0x1803fdd12;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plVar7 = (int64_t *)param_1[0x89];
  param_1[0x89] = (int64_t)plVar11;
  if (plVar7 != (int64_t *)0x0) {
    local_var_60 = 0x1803fdd31;
    (**(code **)(*plVar7 + 0x38))();
  }
  *(int16_t *)(param_1 + 0x20) = 0x101;
  *(int32_t *)((int64_t)param_1 + 0x103) = 0x200;
  *(int8_t *)((int64_t)param_1 + 0x107) = 1;
  *(int16_t *)((int64_t)param_1 + 0x4e) = 0x101;
  local_var_210 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  plVar11 = (int64_t *)0x0;
  uVar10 = 0;
  plocal_var_118 = &memory_allocator_3432_ptr;
  plocal_var_110 = stack_array_100;
  stack_array_100[0] = 0;
  local_var_108 = 0xc;
  local_var_280 = param_4;
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
  if ((0 < iVar2) && (local_var_108 + iVar2 < 0x7f)) {
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
  pplocal_var_1a8 = &plocal_var_178;
  plocal_var_178 = &memory_allocator_3480_ptr;
  plocal_var_170 = stack_array_160;
  local_var_168 = 0;
  stack_array_160[0] = 0;
  if (puVar5 != (void *)0x0) {
    DataStructureManager0(&plocal_var_178);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_178);
  }
  if (*(code **)(*param_1 + 0x30) != _guard_check_icall) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  lVar3 = system_main_module_state;
  if ((int)param_1[9] < 1) {
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
    RenderingSystem_TextureLoader(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar9);
    plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar7 != (int64_t *)0x0) && (*plVar7 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar7,4);
    }
    lVar3 = system_message_buffer;
    plVar1[0x107e] = (int64_t)plVar7;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
    fVar18 = 0.0;
    if (*(char *)((int64_t)param_1 + 0x4d) == '\0') {
      fVar18 = (float)(int)*(float *)(param_3 + 0x11c18);
      fVar19 = (float)(int)*(float *)(param_3 + 0x11c1c);
      if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
        fVar21 = (float)(double)param_1[0xb];
        fVar20 = (float)(double)param_1[0xc];
      }
      else {
        iVar2 = (int)*(float *)(param_3 + 0x11c20);
        auVar14._0_8_ = (double)iVar2 * (double)param_1[0xb];
        lVar3 = (int64_t)auVar14._0_8_;
        if (auVar14._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar15._8_8_ = auVar14._0_8_;
            auVar15._0_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar15);
            auVar14._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ - 1e-08;
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar14._8_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar14);
            auVar14._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ + 1e-08;
        }
        fVar21 = (float)(int64_t)auVar14._0_8_;
        iVar2 = (int)*(float *)(param_3 + 0x11c24);
        auVar16._0_8_ = (double)iVar2 * (double)param_1[0xc];
        lVar3 = (int64_t)auVar16._0_8_;
        if (auVar16._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar17._8_8_ = auVar16._0_8_;
            auVar17._0_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar17);
            auVar16._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(int64_t)(auVar16._0_8_ - 1e-08);
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar16._8_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar16);
            auVar16._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(int64_t)(auVar16._0_8_ + 1e-08);
        }
      }
    }
    else {
      fVar19 = 0.0;
      fVar21 = (float)*(int *)(param_3 + 0x3588);
      fVar20 = (float)*(int *)(param_3 + 0x358c);
    }
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_198 = (void **)CONCAT44(fVar19,fVar18);
    local_var_18c = SUB42(fVar20,0);
    local_var_18a = (int16_t)((uint)fVar20 >> 0x10);
    local_var_188 = 0;
    local_var_184 = 0x3f800000;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    fStack_190 = fVar21;
    (**(code **)(*plVar7 + 0x160))(plVar7,1,&local_var_198);
    pplocal_var_1a8 = (void **)0x0;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    iStack_1a0 = (int)fVar21;
    iStack_19c = (int)fVar20;
    (**(code **)(*plVar7 + 0x168))(plVar7,1,&pplocal_var_1a8);
    if ((*(char *)((int64_t)param_1 + 0x4e) != '\0') ||
       ((param_1[0x85] != 0 && (*(char *)(param_1[0x85] + 0xc9) != '\0')))) {
      uVar6 = 1;
      if ((param_1[0x89] != 0) && (uVar6 = 1, *(char *)((int64_t)param_1 + 0x4f) == '\0')) {
        uVar6 = 3;
      }
      local_var_290 = 0;
      local_var_298 = 0;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar6,0);
    }
    lVar8 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be0) = 0.5 / fVar21;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be4) = 0.5 / fVar20;
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
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_214,stack_array_218);
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                  *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
    pplocal_var_1a8 = (void **)0x0;
    local_var_298 = param_5;
    function_1f7d20(param_1,param_3,&local_var_280,&pplocal_var_1a8);
    local_var_198 = pplocal_var_1a8;
    fStack_190 = (float)local_var_280;
    local_var_18c = 4;
    plocal_var_278 = (void *)param_1[6];
    plStack_258 = (int64_t *)0x0;
    plocal_var_250 = &system_data_buffer_ptr;
    local_var_238 = 0;
    lStack_248 = 0;
    local_var_240 = 0;
    plStack_220 = (int64_t *)0x0;
    local_var_268 = CONCAT26(local_var_18a,CONCAT24(4,local_var_280));
    pplocal_var_270 = pplocal_var_1a8;
    local_var_260 = 2;
    local_var_230 = 0;
    local_var_22c = 0;
    local_var_228 = 0;
    local_var_224 = 0;
    uVar6 = *(uint64_t *)(param_1[6] + 0x15b8);
    pplocal_var_200 = pplocal_var_1a8;
    local_var_1f0 = 2;
    local_var_1e8 = 0;
    plocal_var_208 = plocal_var_278;
    local_var_1f8 = local_var_268;
    pplocal_var_1a8 = &plocal_var_208;
    SystemCore_NetworkHandler0(stack_array_1e0,&plocal_var_250);
    local_var_1c0 = CONCAT44(local_var_22c,local_var_230);
    local_var_1b8 = CONCAT44(local_var_224,local_var_228);
    plStack_1b0 = plStack_220;
    if (plStack_220 != (int64_t *)0x0) {
      (**(code **)(*plStack_220 + 0x28))();
    }
    lVar3 = UIRenderingEngine(uVar6,param_3,&plocal_var_208,acStack_288);
    if (acStack_288[0] == '\0') {
      param_1[0x1f] = lVar3;
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
            pplocal_var_1a8 = (void **)0x0;
            if (lVar8 != 0) {
              pplocal_var_1a8 = *(void ***)(lVar8 + 0x10);
            }
            (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                      (*(int64_t **)(lVar3 + 0x8400),0x21,1,&pplocal_var_1a8);
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
      if ((int)param_1[4] == 0x19) {
        iVar2 = strcmp(param_1[3],&processed_var_7136_ptr);
        if (iVar2 == 0) {
          uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          puVar4 = (uint64_t *)function_2c8e90(*(uint64_t *)(param_3 + 0x99b8),&local_var_280);
          local_var_298 = 0xffffffff;
          RenderingEngineCore0(uVar6,1,*puVar4);
          if ((int64_t *)CONCAT44(local_var_27c,local_var_280) != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)CONCAT44(local_var_27c,local_var_280) + 0x38))();
          }
        }
      }
      function_29d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
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
      function_29e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if (*(code **)(*param_1 + 0x28) != _guard_check_icall) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      iVar2 = 0;
      lVar8 = 0x8a38;
      lVar3 = 0x8438;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar3 + -0x8300) != 0) &&
           (((lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar3 + lVar9) != 0 ||
             (*(int *)(lVar9 + -0x200 + lVar8) != -1)) || (*(int *)(lVar8 + lVar9) != 0x10)))) {
          pplocal_var_1a8 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar9 + 0x8400),iVar2,1,&pplocal_var_1a8);
          *(uint64_t *)(lVar3 + lVar9) = 0;
          *(int32_t *)(lVar9 + -0x200 + lVar8) = 0xffffffff;
          *(int32_t *)(lVar8 + lVar9) = 0x10;
          *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 4;
      } while (iVar2 < 0x10);
    }
    if (plStack_220 != (int64_t *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    pplocal_var_1a8 = &plocal_var_250;
    plocal_var_250 = &system_data_buffer_ptr;
    if (lStack_248 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_248 = 0;
    local_var_238 = local_var_238 & 0xffffffff00000000;
    plocal_var_250 = &system_state_ptr;
    if (plStack_258 != (int64_t *)0x0) {
      (**(code **)(*plStack_258 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  SystemCore_Synchronizer(&plocal_var_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  plocal_var_118 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fdd80(int64_t param_1,int *param_2,int64_t param_3)
void function_3fdd80(int64_t param_1,int *param_2,int64_t param_3)
{
  int64_t lVar1;
  int iVar3;
  void *puVar4;
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  uint local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  int64_t lVar2;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  *(int8_t *)((int64_t)param_2 + 0x26) = 1;
  function_1f9270(param_1,param_3);
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = *(uint *)(param_1 + 0x20);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(stack_array_c0,0x80,puVar4);
  if (local_var_c8 + 1 < 0x7f) {
    *(int16_t *)(plocal_var_d0 + local_var_c8) = 0x5f;
    local_var_c8 = local_var_c8 + 1;
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_3 + 0x3528) != (void *)0x0) {
    puVar4 = *(void **)(param_3 + 0x3528);
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (puVar4[lVar1] != '\0');
  if ((0 < (int)lVar1) && (local_var_c8 + (int)lVar1 < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_d0 + local_var_c8,puVar4,(int64_t)((int)lVar2 + 2));
  }
  iVar3 = (((int)((*param_2 + -1 >> 0x1f & 0x3fU) + *param_2 + -1) >> 6) + 1) * 0x40;
  *(int *)(param_1 + 0x458) = iVar3;
  *(int *)(param_1 + 0x45c) =
       (((int)(param_2[1] + -1 + (param_2[1] + -1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
  *param_2 = iVar3;
  param_2[1] = *(int *)(param_1 + 0x45c);
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fdfc0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void function_3fdfc0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t lVar1;
  lVar1 = system_message_buffer;
  if (0 < (int)param_1[9]) {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
    return;
  }
  *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83d8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83e0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar1 + 0x1cd8) + 0x83e8) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar1 + 0x1cd8),7);
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],*(int32_t *)((int64_t)param_1 + 0x454),param_4,
             param_5,0);
  return;
}
uint64_t function_3fe0c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  function_1f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x4a8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fe1f0(int64_t param_1,int64_t param_2)
void function_3fe1f0(int64_t param_1,int64_t param_2)
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
  int64_t *plStack_168;
  int64_t *plStack_160;
  uint64_t local_var_158;
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
  local_var_158 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  uVar1 = *(int32_t *)(param_2 + 0x3588);
  *(int32_t *)(param_1 + 0x458) = uVar1;
  uVar2 = *(int32_t *)(param_2 + 0x358c);
  *(int32_t *)(param_1 + 0x45c) = uVar2;
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
  puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_160,&plocal_var_e8,&local_var_148);
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_168 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar4;
  if (plStack_168 != (int64_t *)0x0) {
    (**(code **)(*plStack_168 + 0x38))();
  }
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  *(int *)(param_1 + 0x474) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x3588) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x478) =
       (int)(int64_t)((double)*(int *)(param_2 + 0x358c) * *(double *)(param_1 + 0x60));
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  local_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_134 + 4;
  stack_array_134[4] = 0;
  local_var_138 = 0xd;
  strcpy_s(stack_array_134 + 4,0x40,&memory_allocator_3112_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar4,&local_var_148,1);
  *(uint64_t *)(param_1 + 0x4a0) = uVar4;
  local_var_148 = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fe480(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void function_3fe480(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  void *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t stack_array_158 [32];
  int32_t local_var_138;
  int32_t local_var_130;
  int64_t lStack_128;
  void **pplocal_var_118;
  int8_t stack_array_110 [4];
  int8_t stack_array_10c [4];
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  uint64_t local_var_78;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  SystemData_Processor(stack_array_110,&processed_var_4240_ptr);
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  pplocal_var_118 = &plocal_var_d8;
  lVar4 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  local_var_c8 = 0;
  stack_array_c0[0] = 0;
  if (puVar6 != (void *)0x0) {
    DataStructureManager0(&plocal_var_d8);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_d8);
  }
  if ((int)param_1[9] < 1) {
    *(int *)((int64_t)param_1 + 0x46c) =
         (int)(int64_t)((double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb]);
    *(int *)(param_1 + 0x8e) =
         (int)(int64_t)((double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc]);
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_108,stack_array_10c);
    lVar3 = system_message_buffer;
    fVar10 = *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1d54);
    if (*(int *)((int64_t)param_1 + 0x49c) == 1) {
      uVar5 = *(uint *)(param_1 + 0x8e);
      uVar7 = *(uint *)((int64_t)param_1 + 0x474);
      uVar1 = *(uint *)(param_1 + 0x8f);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x8e);
      uVar7 = *(uint *)((int64_t)param_1 + 0x46c);
      uVar1 = uVar5;
    }
    *(float *)(param_1 + 0x8d) = fVar10;
    fVar9 = (float)*(uint *)((int64_t)param_1 + 0x46c);
    fVar8 = 1.0 / (float)uVar7;
    *(float *)((int64_t)param_1 + 0x47c) = fVar8 * fVar9;
    *(float *)(param_1 + 0x90) = (1.0 / (float)uVar1) * (float)uVar5;
    *(float *)((int64_t)param_1 + 0x484) = fVar9 * 0.5 * fVar8 - 0.5;
    *(float *)(param_1 + 0x91) = (float)uVar5 * 0.5 * (1.0 / (float)uVar1) - 0.5;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    fVar10 = -1.0 / ((8.0 - fVar10 * 8.0) + fVar10 * 5.0);
    *(float *)((int64_t)param_1 + 0x48c) = fVar10;
    *(uint *)(param_1 + 0x92) =
         (((uint)fVar10 & 0x7fffff) >> ((&processed_var_4368_ptr)[(uint)fVar10 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&processed_var_4880_ptr + (uint64_t)((uint)fVar10 >> 0x17) * 2);
    fVar8 = fVar9 * 8.0 * fVar8;
    pplocal_var_118 = (void **)CONCAT44(pplocal_var_118._4_4_,fVar8);
    *(float *)((int64_t)param_1 + 0x494) = fVar8;
    *(int32_t *)(param_1 + 0x93) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83e8) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),7);
    lVar3 = param_1[0x8b];
    iVar2 = *(int *)((int64_t)param_1 + 0x45c);
    *(float *)(param_3 + 0x11c18) = (float)(int)*(float *)(param_3 + 0x11c18);
    *(float *)(param_3 + 0x11c1c) = (float)(int)*(float *)(param_3 + 0x11c1c);
    *(float *)(param_3 + 0x11c20) = (float)(int)lVar3;
    *(float *)(param_3 + 0x11c24) = (float)iVar2;
    *(uint64_t *)(param_3 + 0x11c28) = 0x3f80000000000000;
    if (*(char *)((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xca +
                 *(int64_t *)(system_message_buffer + 0x1d20)) != '\0') {
      lVar4 = param_1[0x94];
    }
    local_var_130 = param_5;
    local_var_138 = param_4;
    lStack_128 = lVar4;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
    *(uint64_t *)(param_3 + 0x3598) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35a0) = 0x3f8000003f800000;
    lVar4 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1790) = 0x3f8000003f800000;
    pplocal_var_118 = (void **)0x3f8000003f800000;
    *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x17c0) = 0x3f8000003f800000;
    lVar4 = SystemOptimizer(param_3);
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar4 + 0x32c);
    lVar4 = SystemOptimizer(param_3);
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar4 + 0x32e);
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_108,stack_array_10c);
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c70),
                  *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1100,0x6d0);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  SystemCore_Synchronizer(&plocal_var_d8);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_158);
}
int64_t function_3fea00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0x458) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x38))();
  }
  function_1f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x4d8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address