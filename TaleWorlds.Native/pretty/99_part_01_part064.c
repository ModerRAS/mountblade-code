/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part064.c - 3 个函数
// 函数: void function_0e2c60(uint64_t param_1,int64_t param_2)
void function_0e2c60(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int8_t stack_array_238 [32];
  int32_t local_var_218;
  int8_t stack_array_208 [8];
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  int32_t local_var_1e0;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  int64_t lStack_1c8;
  int32_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  int64_t *plStack_1a0;
  uint64_t local_var_198;
  int64_t *plStack_190;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  uint64_t local_var_170;
  int8_t stack_array_168 [32];
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int64_t *plStack_138;
  int64_t **pplStack_130;
  int iStack_128;
  int iStack_124;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_104 [8];
  uint64_t local_var_fc;
  uint64_t local_var_f4;
  uint64_t local_var_ec;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  uint64_t local_var_b8;
  float fStack_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int64_t *plStack_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_198 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  pplStack_130 = &plStack_98;
  plStack_98 = (int64_t *)&memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  local_var_88 = 0;
  stack_array_80[0] = 0;
  DataStructureManager0(&plStack_98,&processed_var_4624_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plStack_98);
  lVar3 = system_message_buffer;
  plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
  lVar2 = *(int64_t *)(*(int64_t *)(param_2 + 0x9718) + 0x48);
  plVar5 = *(int64_t **)(lVar2 + 0x1d8);
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar5 != 0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar5,1);
      lVar3 = system_message_buffer;
    }
  }
  plVar1[0x1077] = (int64_t)plVar5;
  *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
  lVar2 = *(int64_t *)(*(int64_t *)(param_2 + 0x9718) + 0x48);
  fStack_b0 = (float)*(ushort *)(lVar2 + 0x32c);
  local_var_ac = (float)*(ushort *)(lVar2 + 0x32e);
  iVar4 = (int)local_var_ac;
  iVar6 = (int)fStack_b0;
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  local_var_b8 = 0;
  local_var_a8 = 0;
  local_var_a4 = 0x3f800000;
  plVar1 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&local_var_b8);
  pplStack_130 = (int64_t **)0x0;
  plVar1 = *(int64_t **)(lVar2 + 0x8400);
  iStack_128 = iVar6;
  iStack_124 = iVar4;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_130);
  plocal_var_118 = &memory_allocator_3480_ptr;
  plocal_var_110 = stack_array_104 + 4;
  stack_array_104[4] = 0;
  local_var_108 = 0x12;
  strcpy_s(stack_array_104 + 4,0x40,&processed_var_4688_ptr);
  function_0b4910(system_resource_state,&plStack_200,&plocal_var_118);
  plocal_var_118 = &system_state_ptr;
  local_var_b8 = 0;
  fStack_b0 = 0.0;
  local_var_ac._0_2_ = 4;
  plStack_1d8 = (int64_t *)0x0;
  plStack_1d0 = (int64_t *)&system_data_buffer_ptr;
  local_var_1b8 = 0;
  lStack_1c8 = 0;
  local_var_1c0 = 0;
  plStack_1a0 = (int64_t *)0x0;
  plStack_1f8 = plStack_200;
  local_var_1f0 = 0;
  local_var_1e0 = 2;
  local_var_1b0 = 0;
  local_var_1a8 = 0;
  lVar2 = plStack_200[0x2b7];
  pplStack_130 = &plStack_190;
  plStack_190 = plStack_200;
  local_var_1e8._4_4_ = (int32_t)(CONCAT26(local_var_ac._2_2_,0x400000000) >> 0x20);
  local_var_188 = 0;
  local_var_184 = 0;
  local_var_180 = 0;
  local_var_17c = local_var_1e8._4_4_;
  local_var_178 = 2;
  local_var_170 = 0;
  local_var_1e8 = CONCAT26(local_var_ac._2_2_,0x400000000);
  SystemCore_NetworkHandler0(stack_array_168,&plStack_1d0);
  local_var_148 = (int32_t)local_var_1b0;
  local_var_144 = local_var_1b0._4_4_;
  local_var_140 = (int32_t)local_var_1a8;
  local_var_13c = local_var_1a8._4_4_;
  plStack_138 = plStack_1a0;
  if (plStack_1a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a0 + 0x28))();
  }
  plocal_var_118 = (void *)UIRenderingEngine(lVar2,param_2,&plStack_190,stack_array_208);
  local_var_108 = 0xff;
  stack_array_104 = (int8_t  [8])0x4000300;
  local_var_f4 = 0;
  local_var_ec = 0;
  local_var_e4 = 0;
  local_var_e0 = 0x400;
  plocal_var_110 = (int8_t *)0xff00000001060101;
  local_var_dc = 1;
  local_var_fc = (uint64_t)*(uint *)(*(int64_t *)(*(int64_t *)(param_2 + 0x9718) + 0x48) + 0x324);
  local_var_218 = 0xffffffff;
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0,
                *(uint64_t *)(*(int64_t *)(param_2 + 0x9718) + 0x40),0x10);
  local_var_218 = 0xffffffff;
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,
                *(uint64_t *)(*(int64_t *)(param_2 + 0x9718) + 0x38));
  function_29d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
  InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_118);
  lVar2 = system_message_buffer;
  lVar3 = strnlen(&processed_var_4624_ptr,0x3f);
  strncpy(lVar2 + 0x1ce0,&processed_var_4624_ptr,lVar3);
  *(int8_t *)(lVar3 + 0x1ce0 + lVar2) = 0;
  function_29e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  if (plStack_1a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  pplStack_130 = &plStack_1d0;
  plStack_1d0 = (int64_t *)&system_data_buffer_ptr;
  if (lStack_1c8 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_1c8 = 0;
  local_var_1b8 = local_var_1b8 & 0xffffffff00000000;
  plStack_1d0 = (int64_t *)&system_state_ptr;
  if (plStack_1d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1d8 + 0x38))();
  }
  if (plStack_200 != (int64_t *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  SystemCore_Synchronizer(&plStack_98);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_238);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0e31a0(uint64_t param_1,int64_t *param_2,int64_t **param_3)
void function_0e31a0(uint64_t param_1,int64_t *param_2,int64_t **param_3)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t stack_array_2b8 [32];
  code *pcStack_298;
  int8_t *plocal_var_290;
  int64_t *plStack_288;
  int64_t **pplStack_280;
  int64_t lStack_278;
  int64_t lStack_270;
  int64_t lStack_268;
  uint64_t local_var_260;
  int64_t *plStack_258;
  int64_t lStack_250;
  int32_t local_var_248;
  int16_t local_var_244;
  void *plocal_var_240;
  int8_t *plocal_var_238;
  int32_t local_var_230;
  int8_t stack_array_228 [16];
  int8_t stack_array_218 [16];
  int64_t alStack_208 [14];
  int8_t stack_array_198 [336];
  uint64_t local_var_48;
  local_var_260 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  lVar4 = *param_2;
  plVar2 = param_3[3];
  pplStack_280 = param_3;
  plStack_258 = param_2;
  if (plVar2 != (int64_t *)0x0) {
    if ((((*(char *)(lVar4 + 0x15) == '\x01') &&
         (*(char *)((int64_t)plVar2 + 0x181) == *(char *)(lVar4 + 0x14))) &&
        (*(int *)((int64_t)plVar2 + 0x184) == *(int *)(lVar4 + 0x10))) &&
       ((char)plVar2[0x30] == '\x01')) {
      lStack_250 = 0x101010101010101;
      local_var_248 = 0x1010101;
      local_var_244 = 0x101;
      pcStack_298 = DataCacheManager;
      DataStructureManager(stack_array_218,8,0x10,&SUB_18005d5f0);
      plocal_var_290 = stack_array_198;
      function_206da0();
      plVar2 = alStack_208;
      plStack_288 = (int64_t *)(0x40 - (int64_t)alStack_208);
      lStack_278 = 0x30 - (int64_t)alStack_208;
      lStack_268 = 0x48 - (int64_t)alStack_208;
      lStack_270 = 0x38 - (int64_t)alStack_208;
      plVar3 = alStack_208;
      lStack_250 = 0x50 - (int64_t)plVar3;
      lVar4 = 2;
      do {
        if (plVar2[-2] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)
                   ((int64_t)plVar3 + (0x18 - (int64_t)alStack_208) + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[-2] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[-1] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)
                   ((int64_t)plVar3 + (0x20 - (int64_t)alStack_208) + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[-1] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (*plVar2 != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)
                   ((int64_t)plVar3 + (int64_t)plVar2 + (0x28 - (int64_t)alStack_208));
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(*plVar2 + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[1] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)((int64_t)plVar3 + lStack_278 + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[1] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[2] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)((int64_t)plVar3 + lStack_270 + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[2] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[3] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)((int64_t)plVar3 + (int64_t)plStack_288 + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[3] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[4] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)((int64_t)plVar3 + lStack_268 + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[4] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[5] != 0) {
          plVar3 = (int64_t *)*param_2;
          lVar1 = *(int64_t *)((int64_t)plVar3 + lStack_250 + (int64_t)plVar2);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(plVar2[5] + 0x10),*(uint64_t *)(lVar1 + 0x10),
                   (int64_t)*(int *)(lVar1 + 0x1c));
          }
        }
        plVar2 = plVar2 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      function_207110(plVar3,pplStack_280[3],stack_array_218);
      SystemDataValidator(stack_array_218,8,0x10,DataCacheManager);
      goto LAB_1800e353e;
    }
    function_205470();
  }
  plocal_var_240 = &system_config_ptr;
  plocal_var_238 = stack_array_228;
  stack_array_228[0] = 0;
  local_var_230 = 0;
  strcpy_s(stack_array_228,0x10,&system_buffer_ptr);
  pplStack_280 = &plStack_288;
  plStack_288 = (int64_t *)*param_2;
  if (plStack_288 != (int64_t *)0x0) {
    (**(code **)(*plStack_288 + 0x28))();
  }
  plVar2 = (int64_t *)function_204f70();
  param_3[3] = plVar2;
  plocal_var_240 = &system_state_ptr;
LAB_1800e353e:
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0e3580(uint64_t param_1,int64_t *param_2,int64_t param_3)
void function_0e3580(uint64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  int8_t stack_array_98 [32];
  void **pplocal_var_78;
  int64_t *plStack_68;
  uint64_t local_var_60;
  int64_t *plStack_58;
  int64_t **pplStack_50;
  void *plocal_var_48;
  int8_t *plocal_var_40;
  int32_t local_var_38;
  int8_t stack_array_30 [16];
  uint64_t local_var_20;
  local_var_60 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  lVar1 = *param_2;
  piVar2 = *(int **)(param_3 + 0x18);
  plStack_58 = param_2;
  if (piVar2 != (int *)0x0) {
    if ((((*(char *)(lVar1 + 0x18) == '\x01') && ((char)piVar2[8] == '\x01')) &&
        (*piVar2 == *(int *)(lVar1 + 0x10))) &&
       ((bool)(*(byte *)(piVar2 + 1) & 1) == (*(int *)(lVar1 + 0x14) == 4))) {
      plStack_68 = (int64_t *)0x0;
      pplocal_var_78 = &plocal_var_48;
      function_2072b0(*(byte *)(piVar2 + 1) & 1,*(uint64_t *)(param_3 + 0x18),&plStack_68);
// WARNING: Subroutine does not return
      memcpy(plStack_68[2],*(uint64_t *)(*(int64_t *)(*param_2 + 0x20) + 0x10),
             (int64_t)*(int *)(*(int64_t *)(*param_2 + 0x20) + 0x1c));
    }
    function_206cb0();
  }
  plocal_var_48 = &system_config_ptr;
  plocal_var_40 = stack_array_30;
  stack_array_30[0] = 0;
  local_var_38 = 0xc;
  strcpy_s(stack_array_30,0x10,&processed_var_4672_ptr);
  pplStack_50 = &plStack_68;
  plStack_68 = (int64_t *)*param_2;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  uVar3 = function_206950();
  *(uint64_t *)(param_3 + 0x18) = uVar3;
  plocal_var_48 = &system_state_ptr;
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address