#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part627.c - 14 个函数
// 函数: void function_617ed0(uint param_1,uint64_t param_2,int32_t param_3,uint64_t *param_4)
void function_617ed0(uint param_1,uint64_t param_2,int32_t param_3,uint64_t *param_4)
{
  uint uVar1;
  void *puVar2;
  int8_t stack_array_1b8 [32];
  code *pcStack_198;
  uint64_t local_var_190;
  int32_t local_var_188;
  int64_t *plStack_180;
  uint64_t local_var_178;
  int8_t local_var_170;
  uint local_var_168;
  uint64_t local_var_164;
  uint64_t local_var_15c;
  int32_t local_var_154;
  code *pcStack_150;
  uint64_t local_var_148;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  void *plocal_var_130;
  void *plocal_var_128;
  int32_t local_var_118;
  uint64_t local_var_110;
  int64_t alStack_108 [4];
  int32_t local_var_e8;
  int32_t local_var_e4;
  int8_t local_var_e0;
  int iStack_48;
  uint64_t local_var_38;
  local_var_110 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  SystemCore_CacheManager(&plocal_var_130);
  pcStack_198 = SystemCore_MemoryManager;
  DataStructureManager(alStack_108,0x30,4,function_1c2890);
  iStack_48 = 0;
  puVar2 = &system_buffer_ptr;
  if (plocal_var_128 != (void *)0x0) {
    puVar2 = plocal_var_128;
  }
  (**(code **)(alStack_108[0] + 0x10))(alStack_108,puVar2);
  local_var_e8 = 0xffffffff;
  local_var_e0 = 1;
  iStack_48 = iStack_48 + 1;
  local_var_164 = *param_4;
  local_var_15c = param_4[1];
  local_var_154 = 1;
  pcStack_150 = (code *)0x0;
  local_var_148 = 0;
  local_var_140 = 0;
  local_var_13c = 0x3f800000;
  local_var_138 = 0;
  local_var_168 = param_1;
  local_var_e4 = param_3;
  if ((-1 < (int)param_1) && (uVar1 = (**(code **)(*render_system_data_memory + 0xe8))(), local_var_168 < uVar1))
  {
    if (((char)local_var_154 == '\0') &&
       (((system_status_flag - 2U & 0xfffffffc) == 0 && (system_status_flag != 4)))) {
      local_var_188 = CONCAT31(local_var_188._1_3_,local_var_154._1_1_);
      local_var_190 = local_var_148;
      pcStack_198 = pcStack_150;
      function_5458e0(&system_data_6110,local_var_168,alStack_108,&local_var_164);
    }
    local_var_170 = local_var_154._2_1_;
    local_var_178 = 0;
    plStack_180 = alStack_108;
    local_var_188 = local_var_138;
    local_var_190 = CONCAT44(local_var_190._4_4_,local_var_13c);
    pcStack_198 = (code *)CONCAT44(pcStack_198._4_4_,local_var_140);
    function_545230(&system_data_6110,local_var_168,&local_var_164,local_var_154._3_1_);
  }
  SystemDataValidator(alStack_108,0x30,4,SystemCore_MemoryManager);
  plocal_var_130 = &system_data_buffer_ptr;
  if (plocal_var_128 == (void *)0x0) {
    plocal_var_128 = (void *)0x0;
    local_var_118 = 0;
    plocal_var_130 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1b8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_618110(uint param_1,uint64_t param_2,uint64_t *param_3)
void function_618110(uint param_1,uint64_t param_2,uint64_t *param_3)
{
  uint uVar1;
  int8_t stack_array_188 [32];
  code *pcStack_168;
  uint64_t local_var_160;
  int32_t local_var_158;
  int8_t *plocal_var_150;
  uint64_t local_var_148;
  int8_t local_var_140;
  uint local_var_138;
  uint64_t local_var_134;
  uint64_t local_var_12c;
  int32_t local_var_124;
  code *pcStack_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [192];
  int32_t local_var_38;
  uint64_t local_var_28;
  local_var_100 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  pcStack_168 = SystemCore_MemoryManager;
  DataStructureManager(stack_array_f8,0x30,4,function_1c2890);
  local_var_38 = 0;
  function_1594d0(stack_array_f8,param_2);
  local_var_134 = *param_3;
  local_var_12c = param_3[1];
  local_var_124 = 1;
  pcStack_120 = (code *)0x0;
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_10c = 0x3f800000;
  local_var_108 = 0;
  local_var_138 = param_1;
  if ((-1 < (int)param_1) && (uVar1 = (**(code **)(*render_system_data_memory + 0xe8))(), local_var_138 < uVar1))
  {
    if (((char)local_var_124 == '\0') &&
       (((system_status_flag - 2U & 0xfffffffc) == 0 && (system_status_flag != 4)))) {
      local_var_158 = CONCAT31(local_var_158._1_3_,local_var_124._1_1_);
      local_var_160 = local_var_118;
      pcStack_168 = pcStack_120;
      function_5458e0(&system_data_6110,local_var_138,stack_array_f8,&local_var_134);
    }
    local_var_140 = local_var_124._2_1_;
    local_var_148 = 0;
    plocal_var_150 = stack_array_f8;
    local_var_158 = local_var_108;
    local_var_160 = CONCAT44(local_var_160._4_4_,local_var_10c);
    pcStack_168 = (code *)CONCAT44(pcStack_168._4_4_,local_var_110);
    function_545230(&system_data_6110,local_var_138,&local_var_134,local_var_124._3_1_);
  }
  SystemDataValidator(stack_array_f8,0x30,4,SystemCore_MemoryManager);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6182d0(int64_t param_1,int param_2,int param_3)
void function_6182d0(int64_t param_1,int param_2,int param_3)
{
  void *puVar1;
  int8_t stack_array_238 [32];
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x87b760) <= param_2)) {
    puVar1 = &ui_system_data_1696_ptr;
  }
  else {
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x87b760))) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_238);
    }
    puVar1 = &ui_system_data_1640_ptr;
  }
  SystemCore_CacheManager(stack_array_218,0x200,&ui_system_data_1952_ptr,puVar1);
  function_61c7a0(stack_array_218);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_238);
}
// 函数: void function_6183a0(int64_t param_1,uint64_t param_2,uint param_3,char param_4)
void function_6183a0(int64_t param_1,uint64_t param_2,uint param_3,char param_4)
{
  bool bVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  uint64_t uVar6;
  bVar5 = *(byte *)((int64_t)
                    (int)((*(int *)(param_1 + 0x87b770) >> 3) * (uint)param_2 + ((int)param_3 >> 3))
                   + *(int64_t *)(param_1 + 0x87b768)) & (&processed_var_6480_ptr)[param_3 & 7];
  if ((bVar5 != 0) != (bool)param_4) {
    function_5b31e0((int64_t *)(param_1 + 0x87b768),param_2,param_3,param_4);
    if (bVar5 != 0) {
      if (*(char *)(param_1 + 0x87a93c) == '\0') {
        uVar2 = (uint)(*(int64_t *)(param_1 + 0x87a920) - *(int64_t *)(param_1 + 0x87a918) >> 3);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x87a938);
      }
      if (0 < (int)uVar2) {
        lVar4 = 0;
        uVar6 = (uint64_t)uVar2;
        do {
          lVar3 = param_1 + 0x876958;
          if (*(char *)(param_1 + 0x87a93c) == '\0') {
            lVar3 = *(int64_t *)(param_1 + 0x87a918);
          }
          lVar3 = *(int64_t *)(lVar4 + lVar3);
          if ((*(uint *)(lVar3 + 0x980) == (uint)param_2) || (*(uint *)(lVar3 + 0x980) == param_3))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (((*(int *)(lVar3 + 0x568) == 1) && (bVar1)) && (*(int *)(lVar3 + 0x570) == 1)) {
            lVar3 = *(int64_t *)(lVar3 + 0x6e0);
            *(int32_t *)(lVar3 + 0x1b6c) = 0;
            *(int8_t *)(lVar3 + 0x17a8) = 0;
            *(uint64_t *)(lVar3 + 0x1798) =
                 *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar3 + 0x17a0) * 8);
            *(int32_t *)(lVar3 + 0x1c0c) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x1c14) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x1c1c) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x1c24) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x1c2c) = 0;
            *(int32_t *)(lVar3 + 0x200c) = 0;
            *(int8_t *)(lVar3 + 0x1c48) = 0;
            *(uint64_t *)(lVar3 + 0x1c38) =
                 *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar3 + 0x1c40) * 8);
          }
          lVar4 = lVar4 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_618570(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4,
void function_618570(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int8_t stack_array_c8 [12];
  int32_t local_var_bc;
  int32_t local_var_ac;
  int32_t local_var_9c;
  int32_t local_var_8c;
  int8_t stack_array_88 [64];
  int8_t stack_array_48 [64];
  lVar1 = system_operation_state;
  local_var_d8 = *param_2;
  local_var_d4 = param_2[1];
  local_var_d0 = param_2[2];
  local_var_cc = param_2[3];
  lVar3 = param_1 + 0x10;
  function_287b30(param_1 + 0xd0,stack_array_c8);
  local_var_8c = 0x3f800000;
  local_var_bc = 0;
  local_var_ac = 0;
  local_var_9c = 0;
  uVar2 = function_286010(lVar3,stack_array_48,0);
  ErrorRecoverySystem(stack_array_c8,stack_array_88,uVar2);
  function_0929a0(stack_array_88,&local_var_d8,param_3,param_4,(int)*(float *)(lVar1 + 0x17ec),
                (int)*(float *)(lVar1 + 0x17f0),param_5);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_618650(int64_t param_1,float *param_2,uint64_t *param_3,uint64_t param_4,
void function_618650(int64_t param_1,float *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  float fVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  int8_t stack_array_2c8 [32];
  int iStack_2a8;
  int iStack_2a0;
  uint64_t local_var_298;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  int32_t local_var_27c;
  int32_t local_var_278;
  int32_t local_var_274;
  int32_t local_var_270;
  int32_t local_var_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  uint64_t local_var_258;
  uint64_t local_var_250;
  int8_t stack_array_248 [12];
  int32_t local_var_23c;
  int32_t local_var_22c;
  int32_t local_var_21c;
  int32_t local_var_20c;
  int8_t stack_array_208 [64];
  int8_t stack_array_1c8 [64];
  uint64_t stack_array_188 [24];
  int8_t stack_array_c8 [128];
  uint64_t local_var_48;
  lVar4 = system_operation_state;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2c8;
  local_var_258 = *param_3;
  local_var_250 = param_3[1];
  puVar11 = (uint64_t *)(param_1 + 0x10);
  fVar15 = -*(float *)(param_1 + 0xf0);
  fVar16 = -*(float *)(param_1 + 0xf4);
  fStack_268 = *param_2;
  fStack_264 = param_2[1];
  fStack_280 = param_2[2];
  fStack_25c = param_2[3];
  lVar10 = 2;
  fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
  auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar13 = auVar14._0_4_;
  fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
  puVar5 = puVar11;
  puVar6 = stack_array_188;
  do {
    puVar9 = puVar6;
    puVar7 = puVar5;
    uVar8 = puVar7[1];
    uVar1 = puVar7[2];
    uVar2 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar8;
    uVar8 = puVar7[4];
    uVar3 = puVar7[5];
    puVar9[2] = uVar1;
    puVar9[3] = uVar2;
    uVar1 = puVar7[6];
    uVar2 = puVar7[7];
    puVar9[4] = uVar8;
    puVar9[5] = uVar3;
    uVar8 = puVar7[8];
    uVar3 = puVar7[9];
    puVar9[6] = uVar1;
    puVar9[7] = uVar2;
    uVar1 = puVar7[10];
    uVar2 = puVar7[0xb];
    puVar9[8] = uVar8;
    puVar9[9] = uVar3;
    uVar8 = puVar7[0xc];
    uVar3 = puVar7[0xd];
    puVar9[10] = uVar1;
    puVar9[0xb] = uVar2;
    uVar1 = puVar7[0xe];
    uVar2 = puVar7[0xf];
    puVar9[0xc] = uVar8;
    puVar9[0xd] = uVar3;
    puVar9[0xe] = uVar1;
    puVar9[0xf] = uVar2;
    lVar10 = lVar10 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar9 + 0x10;
  } while (lVar10 != 0);
  uVar8 = puVar7[0x11];
  uVar1 = puVar7[0x12];
  uVar2 = puVar7[0x13];
  fStack_288 = fVar15 * fVar12 + fStack_268;
  puVar9[0x10] = puVar7[0x10];
  puVar9[0x11] = uVar8;
  uVar8 = puVar7[0x14];
  uVar3 = puVar7[0x15];
  puVar9[0x12] = uVar1;
  puVar9[0x13] = uVar2;
  uVar1 = puVar7[0x16];
  uVar2 = puVar7[0x17];
  puVar9[0x14] = uVar8;
  puVar9[0x15] = uVar3;
  puVar9[0x16] = uVar1;
  puVar9[0x17] = uVar2;
  fStack_284 = fVar16 * fVar12 + fStack_264;
  local_var_278 = 0;
  local_var_274 = 0;
  local_var_270 = 0x3f800000;
  local_var_26c = 0;
  local_var_27c = 0x7f7fffff;
  fStack_260 = fStack_280;
  function_287020(stack_array_188,&fStack_268,&fStack_288,&local_var_278);
  function_287b30(stack_array_c8,stack_array_248);
  local_var_20c = 0x3f800000;
  local_var_23c = 0;
  local_var_22c = 0;
  local_var_21c = 0;
  uVar8 = function_286010(puVar11,stack_array_1c8,0);
  ErrorRecoverySystem(stack_array_248,stack_array_208,uVar8);
  iStack_2a0 = (int)*(float *)(lVar4 + 0x17f0);
  local_var_298 = param_6;
  iStack_2a8 = (int)*(float *)(lVar4 + 0x17ec);
  function_0929a0(stack_array_208,&local_var_258,param_4,param_5);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6188d0(int64_t param_1,float param_2,float param_3,float param_4,float *param_5)
void function_6188d0(int64_t param_1,float param_2,float param_3,float param_4,float *param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  int8_t stack_array_c8 [64];
  int8_t stack_array_88 [128];
  lVar1 = system_operation_state;
  lVar3 = param_1 + 0x10;
  function_287b30(param_1 + 0xd0,&fStack_118);
  fStack_10c = 0.0;
  fStack_fc = 0.0;
  fStack_ec = 0.0;
  fStack_dc = 1.0;
  uVar2 = function_286010(lVar3,stack_array_88,0);
  ErrorRecoverySystem(&fStack_118,stack_array_c8,uVar2);
  function_094120(stack_array_c8,&fStack_118);
  param_2 = param_2 / *(float *)(lVar1 + 0x17ec);
  fVar6 = (param_3 / *(float *)(lVar1 + 0x17f0) - 0.5) * -2.0;
  fVar4 = ((param_2 - 0.5) + param_2) - 0.5;
  fStack_dc = fVar4 * fStack_10c + fVar6 * fStack_fc + fStack_ec * param_4 + fStack_dc;
  fVar5 = 1.0 / fStack_dc;
  *param_5 = (fVar6 * fStack_108 + fVar4 * fStack_118 + fStack_f8 * param_4 + fStack_e8) * fVar5;
  param_5[1] = (fVar6 * fStack_104 + fVar4 * fStack_114 + fStack_f4 * param_4 + fStack_e4) * fVar5;
  param_5[2] = (fVar6 * fStack_100 + fVar4 * fStack_110 + fStack_f0 * param_4 + fStack_e0) * fVar5;
  param_5[3] = fStack_dc;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_618b20(void)
{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t in_R9;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void *plocal_var_50;
  int64_t lStack_48;
  uint local_var_40;
  uint64_t local_var_38;
  uVar10 = 0xfffffffffffffffe;
  lVar7 = system_operation_state + 0x860;
  iVar2 = _Mtx_lock(lVar7);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = system_operation_state;
  uVar5 = 0;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  lStack_48 = 0;
  local_var_40 = 0;
  lVar6 = *(int64_t *)(system_operation_state + 0x3b8);
  uVar9 = uVar5;
  if (*(int64_t *)(system_operation_state + 0x3c0) - lVar6 >> 5 != 0) {
    do {
      iVar2 = *(int *)(uVar5 + 0x10 + lVar6);
      if (0 < iVar2) {
        CoreEngineDataBufferProcessor(&plocal_var_50,local_var_40 + iVar2);
// WARNING: Subroutine does not return
        memcpy((uint64_t)local_var_40 + lStack_48,*(uint64_t *)(uVar5 + 8 + lVar6),
               (int64_t)(*(int *)(uVar5 + 0x10 + lVar6) + 1),in_R9,uVar10);
      }
      uVar4 = local_var_40 + 1;
      CoreEngineDataBufferProcessor(&plocal_var_50,uVar4);
      *(int16_t *)((uint64_t)local_var_40 + lStack_48) = 10;
      uVar8 = (int)uVar9 + 1;
      uVar5 = uVar5 + 0x20;
      lVar6 = *(int64_t *)(lVar1 + 0x3b8);
      uVar9 = (uint64_t)uVar8;
      local_var_40 = uVar4;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(lVar1 + 0x3c0) - lVar6 >> 5));
  }
  uVar3 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_50);
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 == 0) {
    lStack_48 = 0;
    local_var_38 = local_var_38 & 0xffffffff00000000;
    plocal_var_50 = &system_state_ptr;
    iVar2 = _Mtx_unlock(lVar7);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return uVar3;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_618ce0(int64_t *param_1,int64_t param_2)
void function_618ce0(int64_t *param_1,int64_t param_2)
{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_638 [32];
  uint64_t local_var_618;
  int8_t stack_array_608 [1416];
  uint64_t local_var_80;
  int32_t local_var_78;
  int8_t *plocal_var_70;
  uint64_t local_var_68;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_28;
  local_var_618 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_638;
  iVar5 = -1;
  lVar3 = *param_1;
  lVar2 = (param_1[1] - lVar3) / 0x5d8;
  iVar4 = (int)lVar2;
  if (lVar2 != 0) {
    iVar6 = iVar4 + -1;
    lVar2 = (int64_t)iVar4 * 0x5d8;
    if (((*(int *)(lVar2 + -8 + lVar3) < 0xff) &&
        (*(int *)(lVar2 + -0x10 + lVar3) + *(int *)(param_2 + 0x5c8) + 8 < 0x2ba9)) &&
       (iVar5 = -1, iVar6 != -1)) {
      iVar5 = iVar6;
    }
  }
  if (iVar5 == -1) {
    local_var_80 = 0;
    local_var_68 = render_system_memory;
    local_var_48 = 0;
    plocal_var_70 = stack_array_608;
    local_var_78 = 0x2c40;
    local_var_40 = 0;
// WARNING: Subroutine does not return
    memset(stack_array_608,0,0x588);
  }
  lVar3 = (int64_t)iVar5 * 0x5d8 + lVar3;
  piVar1 = (int *)(lVar3 + 0x5d0);
  *piVar1 = *piVar1 + 1;
  function_646200(lVar3,param_2,*(int32_t *)(param_2 + 0x5c8));
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_638);
}
bool function_618ea0(int64_t *param_1,int64_t param_2,int param_3,int64_t param_4)
{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uVar5 = 0;
  iVar6 = -1;
  iVar7 = iVar6;
  if ((char)param_4 == '\0') {
    uVar2 = *(int *)(param_2 + 0x5c4) + 8U & 7;
    iVar10 = 8 - uVar2;
    if (uVar2 == 0) {
      iVar10 = 0;
    }
    iVar10 = (0x2bb8 - iVar10) - *(int *)(param_2 + 0x5c4);
    if (param_3 + -8 < iVar10) {
      iVar10 = param_3 + -8;
    }
    lVar9 = *param_1;
    iVar1 = (int)((param_1[1] - lVar9) / 0x5d8);
    if (0 < iVar1) {
      piVar3 = (int *)(lVar9 + 0x5c8);
      uVar8 = uVar5;
      do {
        iVar7 = (int)uVar8;
        if (*piVar3 <= iVar10) break;
        uVar8 = (uint64_t)((int)uVar8 + 1);
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x176;
        iVar7 = iVar6;
      } while ((int64_t)uVar5 < (int64_t)iVar1);
    }
  }
  else {
    uVar2 = *(int *)(param_2 + 0x5c4) + 8U & 7;
    iVar10 = 8 - uVar2;
    if (uVar2 == 0) {
      iVar10 = 0;
    }
    iVar10 = (0x2bb8 - iVar10) - *(int *)(param_2 + 0x5c4);
    if (param_3 + -8 < iVar10) {
      iVar10 = param_3 + -8;
    }
    lVar9 = *param_1;
    iVar1 = (int)((param_1[1] - lVar9) / 0x5d8);
    param_4 = (int64_t)iVar1;
    if (0 < iVar1) {
      puVar4 = (uint *)(lVar9 + 0x5c8);
      uVar8 = uVar5;
      do {
        uVar2 = *puVar4;
        if (((int)uVar2 <= iVar10) && ((int)uVar8 < (int)uVar2)) {
          uVar8 = (uint64_t)uVar2;
          iVar6 = (int)uVar5;
        }
        uVar5 = (uint64_t)((int)uVar5 + 1);
        puVar4 = puVar4 + 0x176;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      param_4 = 0;
      iVar7 = iVar6;
    }
  }
  if (iVar7 == -1) {
    SystemBufferProcessor(param_2,0,&processed_var_6336_ptr,param_4,0xfffffffffffffffe);
    function_569670(param_2);
  }
  else {
    lVar9 = lVar9 + (int64_t)iVar7 * 0x5d8;
    SystemBufferProcessor(param_2,*(int32_t *)(lVar9 + 0x5d0),&processed_var_6336_ptr,param_4,0xfffffffffffffffe);
    function_569670(param_2);
    function_55f4e0(param_2,*(int *)(param_2 + 0x5c8) + *(int *)(lVar9 + 0x5c8));
    *(int32_t *)(lVar9 + 0x5c4) = 0;
    function_646200(param_2,lVar9,*(int32_t *)(lVar9 + 0x5c8));
    uVar8 = *param_1 + 0x5d8 + (int64_t)iVar7 * 0x5d8;
    uVar5 = param_1[1];
    if ((uVar8 < uVar5) && (lVar9 = (int64_t)(uVar5 - uVar8) / 0x5d8, 0 < lVar9)) {
      do {
        function_55f100(uVar8 - 0x5d8,uVar8);
        *(int32_t *)(uVar8 - 8) = *(int32_t *)(uVar8 + 0x5d0);
        lVar9 = lVar9 + -1;
        uVar8 = uVar8 + 0x5d8;
      } while (0 < lVar9);
      uVar5 = param_1[1];
    }
    param_1[1] = uVar5 - 0x5d8;
    if (*(int64_t *)(uVar5 - 0x50) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(uVar5 - 0x50) = 0;
  }
  return iVar7 != -1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_619120(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_619120(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lStackX_8;
  uVar5 = param_1[1];
  if (uVar5 < param_1[2]) {
    param_1[1] = uVar5 + 0x5d8;
    function_55f1d0(uVar5);
    *(int32_t *)(uVar5 + 0x5d0) = *(int32_t *)(param_2 + 0x5d0);
    return;
  }
  uVar6 = *param_1;
  lStackX_8 = (int64_t)(uVar5 - uVar6) / 0x5d8;
  uVar2 = 0;
  if (lStackX_8 == 0) {
    lStackX_8 = 1;
  }
  else {
    lStackX_8 = lStackX_8 * 2;
    if (lStackX_8 == 0) goto LAB_1806191e1;
  }
  uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_8 * 0x5d8,(char)param_1[3],param_4,0xfffffffffffffffe
                       );
  uVar5 = param_1[1];
  uVar6 = *param_1;
LAB_1806191e1:
  uVar3 = uVar2;
  if (uVar6 != uVar5) {
    lVar4 = uVar6 - uVar2;
    lVar7 = uVar2 - uVar6;
    do {
      function_55f1d0(uVar3,uVar6);
      puVar1 = (int32_t *)(lVar7 + 0x5d0 + uVar6);
      *puVar1 = *(int32_t *)((int64_t)puVar1 + lVar4);
      uVar3 = uVar3 + 0x5d8;
      uVar6 = uVar6 + 0x5d8;
    } while (uVar6 != uVar5);
  }
  function_55f1d0(uVar3,param_2);
  *(int32_t *)(uVar3 + 0x5d0) = *(int32_t *)(param_2 + 0x5d0);
  uVar5 = param_1[1];
  uVar6 = *param_1;
  if (uVar6 != uVar5) {
    do {
      if (*(int64_t *)(uVar6 + 0x588) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(uVar6 + 0x588) = 0;
      uVar6 = uVar6 + 0x5d8;
    } while (uVar6 != uVar5);
    uVar6 = *param_1;
  }
  if (uVar6 == 0) {
    *param_1 = uVar2;
    param_1[1] = uVar3 + 0x5d8;
    param_1[2] = lStackX_8 * 0x5d8 + uVar2;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(uVar6);
}
// 函数: void function_6192e0(int64_t param_1,uint *param_2)
void function_6192e0(int64_t param_1,uint *param_2)
{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int aiStackX_10 [2];
  *param_2 = 0;
  bVar5 = 0;
  bVar1 = true;
  do {
    uVar6 = 0;
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0x5c4);
      iVar7 = iVar3 + 4;
      if (*(int *)(param_1 + 0x5c8) < iVar7) goto LAB_18061934e;
      bVar4 = (byte)iVar3 & 0x1f;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x1f;
        bVar4 = bVar4 - 0x20;
      }
      bVar1 = true;
      uVar6 = (uint)(*(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar3 >> 5) * 4) >>
                    (bVar4 & 0x3f)) & 0xf;
      *(int *)(param_1 + 0x5c4) = iVar7;
    }
    else {
LAB_18061934e:
      bVar1 = false;
    }
    bVar8 = false;
    *param_2 = *param_2 | uVar6 << (bVar5 & 0x1f);
    if (bVar1) {
      aiStackX_10[0] = 0;
      cVar2 = SystemSynchronizationProcessor(param_1,aiStackX_10,&processed_var_6560_ptr);
      bVar8 = aiStackX_10[0] != 0;
      if (cVar2 == '\0') goto LAB_180619385;
      bVar1 = true;
    }
    else {
LAB_180619385:
      bVar1 = false;
    }
    bVar5 = bVar5 + 4;
    if ((!bVar8) || (!bVar1)) {
      return;
    }
  } while( true );
}
// 函数: void function_6193b0(uint64_t param_1,uint param_2)
void function_6193b0(uint64_t param_1,uint param_2)
{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint local_var_18;
  int iStack_14;
  int32_t local_var_10;
  piVar2 = (int *)&processed_var_6480_ptr;
  iVar5 = 0;
  do {
    if ((int)param_2 < *piVar2) {
      local_var_10 = *(int32_t *)(&processed_var_6496_ptr + (int64_t)iVar5 * 4);
      goto LAB_1806193ee;
    }
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
  } while ((int64_t)piVar2 < 0x1809fb110);
  local_var_10 = 0x19;
LAB_1806193ee:
  uVar6 = 0;
  bVar3 = 0;
  do {
    local_var_18 = (int)param_2 >> 4;
    bVar1 = bVar3 & 0x1f;
    bVar4 = bVar3 + 4;
    bVar3 = bVar3 + 5;
    uVar6 = uVar6 | (param_2 & 0xf) << bVar1 | (uint)(local_var_18 != 0) << (bVar4 & 0x1f);
    param_2 = local_var_18;
  } while (local_var_18 != 0);
  iStack_14 = (1 << ((byte)local_var_10 & 0x1f)) + -1;
  SystemBufferProcessor(param_1,uVar6,&local_var_18);
  return;
}
char function_619450(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  iVar3 = 0;
  while (((plVar1 = *(int64_t **)
                     (param_1 + (int64_t)(((*(int *)(param_1 + 0x50) - iVar3) + 9) % 10) * 8),
          plVar1 == (int64_t *)0x0 ||
          (((plVar1[2] != 0 && ((*(byte *)(plVar1[2] + 0x2e8) & 0xb) != 0xb)) ||
           ((*(uint *)(plVar1 + 3) & 0x31b789) != 0)))) ||
         (iVar2 = (**(code **)(*plVar1 + 0x160))(plVar1,param_2), iVar2 == 0))) {
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      return '\x04';
    }
  }
  return (iVar2 == 3) + '\x02';
}
// 函数: void function_619540(void)
void function_619540(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
uint64_t function_61a6a0(int64_t param_1,int param_2)
{
  int64_t lVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  fVar2 = (float)SystemFunction_0001805b7780(*(uint64_t *)(param_1 + 8));
  SystemFunction_0001805b7780(*(uint64_t *)(param_1 + 8));
  lVar1 = *(int64_t *)(param_1 + 8);
  fVar2 = fVar2 * extraout_XMM0_Da * 4.0;
  if ((*(int *)(lVar1 + 0x14e4) < 0) || (*(char *)(lVar1 + 0x14d8) == '\0')) {
    return 0;
  }
  SystemFunction_000180507ac0(lVar1 + 0x1a0);
  if (fVar2 <= extraout_XMM0_Da_00) {
    if ((param_2 == 8) &&
       (SystemFunction_000180507ac0(*(int64_t *)(param_1 + 8) + 0x1a0), extraout_XMM0_Da_01 < fVar2 * 9.0))
    {
      return 1;
    }
    if (*(int *)(*(int64_t *)(param_1 + 8) + 0x210) == 0) {
      return 0;
    }
  }
  return 1;
}
// 函数: void function_61a730(void)
void function_61a730(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void function_61c570(uint64_t param_1,int32_t param_2,float *param_3,int32_t param_4,
void function_61c570(uint64_t param_1,int32_t param_2,float *param_3,int32_t param_4,
                  float param_5)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t local_var_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int8_t stack_array_78 [112];
  fVar10 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fStack_7c = param_3[3];
  fVar4 = fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar7 = fVar7 * fVar4;
  fVar10 = fVar4 * fVar10;
  fVar8 = fVar8 * fVar4;
  fStack_88 = fVar10;
  fStack_84 = fVar7;
  fStack_80 = fVar8;
  function_5a6ff0(&fStack_98,param_2,auVar6._0_8_,param_4);
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar1 = param_3[2];
  fVar9 = fVar5 * fVar7 + fVar4 * fVar10 + fVar1 * fVar8;
  if (fVar9 < 0.9998477) {
    fStack_94 = fVar4 * fVar8 - fVar1 * fVar10;
    fStack_98 = fVar1 * fVar7 - fVar5 * fVar8;
    fStack_90 = fVar5 * fVar10 - fVar4 * fVar7;
    local_var_8c = 0x7f7fffff;
    fVar4 = fStack_94 * fStack_94 + fStack_98 * fStack_98 + fStack_90 * fStack_90;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    fStack_98 = fStack_98 * fVar4;
    fStack_94 = fStack_94 * fVar4;
    fStack_90 = fStack_90 * fVar4;
    fVar4 = (float)acosf(fVar9);
    puVar3 = (uint64_t *)SystemCore_ConfigManager(&fStack_88,stack_array_78,&fStack_98,fVar4 * (param_5 + 1.0));
    uVar2 = puVar3[1];
    *(uint64_t *)param_3 = *puVar3;
    *(uint64_t *)(param_3 + 2) = uVar2;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address