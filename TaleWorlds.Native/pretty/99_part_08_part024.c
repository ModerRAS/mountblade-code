#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_08_part024.c - 13 个函数
// 函数: void function_4f77d0(uint64_t *param_1,int param_2,int param_3)
void function_4f77d0(uint64_t *param_1,int param_2,int param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int32_t *puVar4;
  int64_t *plVar5;
  int iVar6;
  uint64_t uVar7;
  float *pfVar8;
  int iVar9;
  uint64_t uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t stack_array_278 [32];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t local_var_24c;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  int32_t local_var_224;
  int32_t local_var_220;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  int32_t local_var_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t local_var_1fc;
  int32_t local_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int32_t local_var_1e0;
  int32_t local_var_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int8_t local_var_1c4;
  uint64_t local_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int8_t local_var_194;
  uint64_t local_var_190;
  int8_t stack_array_188 [64];
  int iStack_148;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_78;
  uint64_t local_var_68;
  local_var_1f0 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  uVar10 = (uint64_t)param_2;
  if (param_2 < param_3) {
    local_var_24c = 0x7f7fffff;
    pfVar8 = (float *)((int64_t)&local_var_138 + uVar10 * 8 + 4);
    do {
      local_var_138 = 0x3e348f1000000000;
      local_var_130 = 0x3dffca12be394994;
      local_var_128 = 0xbdbfe0e5be7cf891;
      local_var_120 = 0xbe8876f83e71cb61;
      local_var_118 = 0x3d4779b03ecd5a6a;
      local_var_110 = 0x3ecda6793e57ddfb;
      local_var_108 = 0x3ee5015cbe7061f4;
      local_var_100 = 0x3d89f6f4bf0e07c9;
      local_var_f8 = 0xbf27a8153e254b73;
      local_var_f0 = 0x3ee9d94e3f2964e7;
      local_var_e8 = 0x3f601c6fb4a45a63;
      local_var_e0 = 0x3f0a7c63bf48a1b0;
      local_var_d8 = 0xbf8bfb07be8a0219;
      local_var_d0 = 0x3e24fe0c3fa9da86;
      local_var_c8 = 0x3fa586cd3f2dbff8;
      local_var_c0 = 0x3fb56118bf3e63ff;
      pfVar1 = (float *)param_1[1];
      fVar13 = *(float *)*param_1 * pfVar8[-1];
      pfVar2 = (float *)param_1[2];
      fVar12 = *(float *)*param_1 * *pfVar8;
      pfVar3 = (float *)param_1[3];
      fVar14 = fVar13 * *pfVar1 + fVar12 * *pfVar2 + *pfVar3;
      fVar15 = fVar12 * pfVar2[1] + fVar13 * pfVar1[1] + pfVar3[1];
      fVar12 = fVar12 * pfVar2[2] + fVar13 * pfVar1[2] + pfVar3[2];
      pfVar1 = (float *)param_1[4];
      fStack_250 = fVar12 - pfVar1[2];
      fStack_254 = fVar15 - pfVar1[1];
      fStack_258 = fVar14 - *pfVar1;
      iVar9 = (int)uVar10;
      if (iVar9 < *(int *)param_1[5]) {
        iStack_148 = 0;
        uVar7 = param_1[7];
        puVar4 = (int32_t *)param_1[4];
        local_var_240 = *puVar4;
        local_var_23c = puVar4[1];
        local_var_238 = puVar4[2];
        local_var_234 = puVar4[3];
        local_var_224 = local_var_24c;
        fStack_230 = fStack_258;
        fStack_22c = fStack_254;
        fStack_228 = fStack_250;
        local_var_220 = SystemFunction_00018023a1e0(&fStack_230);
        local_var_1e8 = local_var_240;
        local_var_1e4 = local_var_23c;
        local_var_1e0 = local_var_238;
        local_var_1dc = local_var_234;
        fStack_1d8 = fStack_230;
        fStack_1d4 = fStack_22c;
        fStack_1d0 = fStack_228;
        local_var_1cc = local_var_224;
        local_var_1c4 = 0;
        plVar5 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1[6] + 0x18) + 0x28f8) + 0x318);
        local_var_1c8 = local_var_220;
        local_var_1c0 = uVar7;
        (**(code **)(*plVar5 + 0x118))(plVar5,&local_var_1e8,stack_array_188);
        if (iStack_148 < 1) {
          iStack_148 = 0;
          local_var_78 = 0;
          pfVar1 = (float *)param_1[8];
          fStack_250 = fVar12 - pfVar1[2];
          fStack_254 = fVar15 - pfVar1[1];
          fStack_258 = fVar14 - *pfVar1;
          if (iVar9 < *(int *)param_1[5]) {
            uVar7 = param_1[7];
            puVar4 = (int32_t *)param_1[8];
            local_var_218 = *puVar4;
            local_var_214 = puVar4[1];
            local_var_210 = puVar4[2];
            local_var_20c = puVar4[3];
            local_var_1fc = local_var_24c;
            fStack_208 = fStack_258;
            fStack_204 = fStack_254;
            fStack_200 = fStack_250;
            local_var_1f8 = SystemFunction_00018023a1e0(&fStack_208);
            local_var_1b8 = local_var_218;
            local_var_1b4 = local_var_214;
            local_var_1b0 = local_var_210;
            local_var_1ac = local_var_20c;
            fStack_1a8 = fStack_208;
            fStack_1a4 = fStack_204;
            fStack_1a0 = fStack_200;
            local_var_19c = local_var_1fc;
            local_var_194 = 0;
            plVar5 = *(int64_t **)
                      (*(int64_t *)(*(int64_t *)(param_1[6] + 0x18) + 0x28f8) + 0x318);
            local_var_198 = local_var_1f8;
            local_var_190 = uVar7;
            (**(code **)(*plVar5 + 0x118))(plVar5,&local_var_1b8,stack_array_188);
            if ((iStack_148 < 1) && (iVar6 = *(int *)param_1[5], iVar9 < iVar6)) {
              do {
                LOCK();
                bVar11 = iVar6 == *(int *)param_1[5];
                if (bVar11) {
                  *(int *)param_1[5] = iVar9;
                }
                UNLOCK();
              } while ((!bVar11) && (iVar6 = *(int *)param_1[5], iVar9 <= iVar6));
            }
          }
        }
        iStack_148 = 0;
      }
      uVar10 = (uint64_t)(iVar9 + 1U);
      pfVar8 = pfVar8 + 2;
    } while ((int)(iVar9 + 1U) < param_3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_278);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_4f7af0(int64_t param_1,int param_2,char param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *plStackX_8;
  uVar11 = (uint64_t)param_2;
  lVar9 = 0;
  if ((((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) && (param_3 != '\0')) {
    iVar6 = _Mtx_lock(0x180c95528);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    cVar5 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
    if ((cVar5 != '\0') && (cVar5 = SystemBufferProcessor(0x180c95578,0xf,&memory_allocator_3472_ptr), cVar5 != '\0')) {
      SystemBufferProcessor(0x180c95578,param_2,&memory_allocator_3344_ptr);
    }
    system_system_memory = system_system_memory & 0xffffffff00000000;
    iVar6 = (int)(system_system_memory - system_system_memory >> 3);
    lVar8 = system_system_memory;
    if (0 < iVar6) {
      do {
        lVar2 = *(int64_t *)(lVar8 + lVar9 * 8);
        if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          NetworkSystem_SecurityManager(lVar2,0x180c95578);
          lVar8 = system_system_memory;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar6);
    }
    if (system_system_memory != 0) {
      SystemCore_DatabaseHandler(system_system_memory,0x180c95578);
    }
    system_system_memory = 0;
// WARNING: Subroutine does not return
    memset(system_system_memory,0,(int64_t)(system_system_memory >> 3));
  }
  uVar12 = *(uint64_t *)(param_1 + 0x87bd10);
  lVar9 = *(int64_t *)(param_1 + 0x87bd08);
  if ((uint64_t)((int64_t)(uVar12 - lVar9) / 0x18) <= uVar11) {
    return 0;
  }
  plVar3 = *(int64_t **)(lVar9 + uVar11 * 0x18);
  if ((plVar3 != (int64_t *)0x0) && (plVar3[4] == *(int64_t *)(param_1 + 0x18))) {
    function_2e8db0(plVar3);
    uVar7 = function_4fb7c0(param_1 + 0x87bd28);
    lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x87bd50) + (uint64_t)(uVar7 >> 4) * 8);
    plStackX_8 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    function_5ae000((uint64_t)(uVar7 & 0xf) * 0x40 + lVar9,param_1,&plStackX_8,0x3f000000,1);
    function_4cb300(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x3c0) + 0x2d30,
                  *(int32_t *)(*(int64_t *)(param_1 + 0x87bd08) + 0x10 + uVar11 * 0x18));
    lVar9 = *(int64_t *)(param_1 + 0x87bd08);
    uVar12 = *(uint64_t *)(param_1 + 0x87bd10);
  }
  uVar1 = lVar9 + (uVar11 * 3 + 3) * 8;
  if (uVar1 < uVar12) {
    lVar8 = uVar12 - uVar1;
    lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
    lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
    if (0 < lVar8) {
      puVar10 = (uint64_t *)(lVar9 + (uVar11 * 3 + 4) * 8);
      do {
        uVar4 = puVar10[-1];
        puVar10[-1] = 0;
        plStackX_8 = (int64_t *)puVar10[-4];
        puVar10[-4] = uVar4;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        uVar4 = *puVar10;
        *puVar10 = 0;
        plVar3 = (int64_t *)puVar10[-3];
        puVar10[-3] = uVar4;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        *(int32_t *)(puVar10 + -2) = *(int32_t *)(puVar10 + 1);
        *(int32_t *)((int64_t)puVar10 + -0xc) = *(int32_t *)((int64_t)puVar10 + 0xc);
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (0 < lVar8);
      uVar12 = *(uint64_t *)(param_1 + 0x87bd10);
    }
  }
  plVar3 = (int64_t *)(uVar12 - 0x18);
  *(int64_t **)(param_1 + 0x87bd10) = plVar3;
  plStackX_8 = plVar3;
  if (*(int64_t **)(uVar12 - 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(uVar12 - 0x10) + 0x38))();
  }
  if ((int64_t *)*plVar3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*plVar3 + 0x38))();
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4f7e50(int64_t param_1,char param_2)
void function_4f7e50(int64_t param_1,char param_2)
{
  int iVar1;
  int64_t lVar2;
  if ((system_status_flag != 1) && (system_status_flag != 4)) {
    iVar1 = SystemFunction_0001804ca2d0(&system_data_5fc8);
    if ((param_2 != '\0') && (0 < iVar1)) {
      iVar1 = iVar1 + -1;
    }
    lVar2 = *(int64_t *)(param_1 + 0x87bd10) - *(int64_t *)(param_1 + 0x87bd08);
    while ((uint64_t)(int64_t)iVar1 < (uint64_t)(lVar2 / 0x18)) {
      function_4f7af0(param_1,0,1);
      lVar2 = *(int64_t *)(param_1 + 0x87bd10) - *(int64_t *)(param_1 + 0x87bd08);
    }
  }
  return;
}
// 函数: void function_4f7e75(uint64_t param_1,uint64_t param_2,char param_3)
void function_4f7e75(uint64_t param_1,uint64_t param_2,char param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  iVar1 = SystemFunction_0001804ca2d0(&system_data_5fc8);
  if ((param_3 != '\0') && (0 < iVar1)) {
    iVar1 = iVar1 + -1;
  }
  lVar2 = *(int64_t *)(unaff_RBX + 0x87bd10) - *(int64_t *)(unaff_RBX + 0x87bd08);
  while ((uint64_t)(int64_t)iVar1 < (uint64_t)(lVar2 / 0x18)) {
    function_4f7af0();
    lVar2 = *(int64_t *)(unaff_RBX + 0x87bd10) - *(int64_t *)(unaff_RBX + 0x87bd08);
  }
  return;
}
// 函数: void function_4f7f0e(void)
void function_4f7f0e(void)
{
  return;
}
bool function_4f7f20(int64_t param_1,int64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  float afStackX_8 [2];
  function_3a52d0(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x2908),param_2 + 0x10,afStackX_8,
                param_3,param_3 + 0x28);
  uVar1 = *(uint64_t *)(param_2 + 0x18);
  *(uint64_t *)(param_3 + 0x10) = *(uint64_t *)(param_2 + 0x10);
  *(uint64_t *)(param_3 + 0x18) = uVar1;
  *(float *)(param_3 + 0x18) = afStackX_8[0];
  afStackX_8[0] = afStackX_8[0] - (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x20));
  *(float *)(param_3 + 0x20) = afStackX_8[0];
  return 0.0 <= afStackX_8[0];
}
// 函数: void function_4f7fa0(int64_t param_1,int param_2,int param_3,float *param_4,int32_t *param_5,
void function_4f7fa0(int64_t param_1,int param_2,int param_3,float *param_4,int32_t *param_5,
                  uint64_t *param_6,uint64_t *param_7,int8_t *param_8)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uVar4 = 0;
  lVar5 = (int64_t)param_2;
  *param_5 = 0;
  uVar6 = uVar4;
  if (param_2 >= 0) {
    uVar6 = *(uint64_t *)(lVar5 * 0xa60 + 0x3988 + param_1);
  }
  *param_6 = uVar6;
  lVar7 = (int64_t)param_3;
  bVar8 = -1 < param_3;
  if (bVar8) {
    uVar4 = *(uint64_t *)(lVar7 * 0xa60 + 0x3988 + param_1);
  }
  *param_7 = uVar4;
  if (param_2 < 0) {
    if (bVar8) {
      *param_5 = *(int32_t *)(lVar7 * 0xa60 + 0x36e8 + param_1);
    }
  }
  else {
    if (bVar8) {
      lVar2 = *(int64_t *)(lVar5 * 0xa60 + 0x30c0 + param_1);
      fVar11 = *(float *)(lVar2 + 0x10) - param_4[1];
      fVar10 = *(float *)(lVar2 + 0xc) - *param_4;
      lVar3 = *(int64_t *)(lVar7 * 0xa60 + 0x30c0 + param_1);
      fVar9 = *(float *)(lVar2 + 0x14) - param_4[2];
      fVar14 = *(float *)(lVar3 + 0xc) - *param_4;
      fVar13 = *(float *)(lVar3 + 0x14) - param_4[2];
      fVar12 = *(float *)(lVar3 + 0x10) - param_4[1];
      if (fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13 <
          fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) {
        *param_5 = *(int32_t *)(lVar7 * 0xa60 + 0x36e8 + param_1);
        goto LAB_1804f810d;
      }
    }
    *param_5 = *(int32_t *)(lVar5 * 0xa60 + 0x36e8 + param_1);
  }
LAB_1804f810d:
  iVar1 = *(int *)(param_1 + 0x98d930);
  if (iVar1 < 0) {
    *param_8 = 0;
    return;
  }
  if ((iVar1 != param_2) && (iVar1 != param_3)) {
    *param_8 = 0;
    iVar1 = *(int *)((int64_t)*(int *)(param_1 + 0x98d930) * 0xa60 + 0x3604 + param_1);
    if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
      *param_8 = 0;
      return;
    }
  }
  *param_8 = 1;
  return;
}
// 函数: void function_4f7fae(uint64_t param_1,int param_2,int param_3,float *param_4)
void function_4f7fae(uint64_t param_1,int param_2,int param_3,float *param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t *unaff_RBX;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t in_R10;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t *local_buffer_50;
  uint64_t *local_buffer_58;
  uint64_t *local_buffer_60;
  uVar4 = 0;
  lVar5 = (int64_t)param_2;
  *local_buffer_50 = 0;
  uVar6 = uVar4;
  if (param_2 >= 0) {
    uVar6 = *(uint64_t *)(lVar5 * 0xa60 + 0x3988 + in_R10);
  }
  *local_buffer_58 = uVar6;
  lVar7 = (int64_t)param_3;
  bVar8 = -1 < param_3;
  if (bVar8) {
    uVar4 = *(uint64_t *)(lVar7 * 0xa60 + 0x3988 + in_R10);
  }
  *local_buffer_60 = uVar4;
  if (param_2 < 0) {
    if (bVar8) {
      *local_buffer_50 = *(int32_t *)(lVar7 * 0xa60 + 0x36e8 + in_R10);
    }
  }
  else {
    if (bVar8) {
      lVar2 = *(int64_t *)(lVar5 * 0xa60 + 0x30c0 + in_R10);
      fVar11 = *(float *)(lVar2 + 0x10) - param_4[1];
      fVar10 = *(float *)(lVar2 + 0xc) - *param_4;
      lVar3 = *(int64_t *)(lVar7 * 0xa60 + 0x30c0 + in_R10);
      fVar9 = *(float *)(lVar2 + 0x14) - param_4[2];
      fVar14 = *(float *)(lVar3 + 0xc) - *param_4;
      fVar13 = *(float *)(lVar3 + 0x14) - param_4[2];
      fVar12 = *(float *)(lVar3 + 0x10) - param_4[1];
      if (fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13 <
          fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) {
        *local_buffer_50 = *(int32_t *)(lVar7 * 0xa60 + 0x36e8 + in_R10);
        goto LAB_1804f810d;
      }
    }
    *local_buffer_50 = *(int32_t *)(lVar5 * 0xa60 + 0x36e8 + in_R10);
  }
LAB_1804f810d:
  iVar1 = *(int *)(in_R10 + 0x98d930);
  if (iVar1 < 0) {
    *unaff_RBX = 0;
    return;
  }
  if ((iVar1 != param_2) && (iVar1 != param_3)) {
    *unaff_RBX = 0;
    iVar1 = *(int *)((int64_t)*(int *)(in_R10 + 0x98d930) * 0xa60 + 0x3604 + in_R10);
    if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
      *unaff_RBX = 0;
      return;
    }
  }
  *unaff_RBX = 1;
  return;
}
// 函数: void function_4f802a(uint64_t param_1,int param_2,int param_3,int64_t param_4)
void function_4f802a(uint64_t param_1,int param_2,int param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t *unaff_RBX;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  int64_t in_R10;
  char in_R11B;
  float *unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  if (in_R11B != '\0') {
    lVar2 = *(int64_t *)(unaff_RSI * 0xa60 + 0x30c0 + in_R10);
    fVar6 = *(float *)(lVar2 + 0x10) - unaff_R14[1];
    fVar5 = *(float *)(lVar2 + 0xc) - *unaff_R14;
    lVar3 = *(int64_t *)(param_4 * 0xa60 + 0x30c0 + in_R10);
    fVar4 = *(float *)(lVar2 + 0x14) - unaff_R14[2];
    fVar9 = *(float *)(lVar3 + 0xc) - *unaff_R14;
    fVar8 = *(float *)(lVar3 + 0x14) - unaff_R14[2];
    fVar7 = *(float *)(lVar3 + 0x10) - unaff_R14[1];
    if (fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 <
        fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) {
      *unaff_RDI = *(int32_t *)(param_4 * 0xa60 + 0x36e8 + in_R10);
      goto LAB_1804f810d;
    }
  }
  *unaff_RDI = *(int32_t *)(unaff_RSI * 0xa60 + 0x36e8 + in_R10);
LAB_1804f810d:
  iVar1 = *(int *)(in_R10 + 0x98d930);
  if (iVar1 < 0) {
    *unaff_RBX = 0;
    return;
  }
  if ((iVar1 != param_2) && (iVar1 != param_3)) {
    *unaff_RBX = 0;
    iVar1 = *(int *)((int64_t)*(int *)(in_R10 + 0x98d930) * 0xa60 + 0x3604 + in_R10);
    if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
      *unaff_RBX = 0;
      return;
    }
  }
  *unaff_RBX = 1;
  return;
}
// 函数: void function_4f8033(uint64_t param_1,int param_2,int param_3,int64_t param_4)
void function_4f8033(uint64_t param_1,int param_2,int param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t *unaff_RBX;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  int64_t in_R10;
  float *unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  lVar2 = *(int64_t *)(unaff_RSI * 0xa60 + 0x30c0 + in_R10);
  fVar6 = *(float *)(lVar2 + 0x10) - unaff_R14[1];
  fVar5 = *(float *)(lVar2 + 0xc) - *unaff_R14;
  lVar3 = *(int64_t *)(param_4 * 0xa60 + 0x30c0 + in_R10);
  fVar4 = *(float *)(lVar2 + 0x14) - unaff_R14[2];
  fVar9 = *(float *)(lVar3 + 0xc) - *unaff_R14;
  fVar8 = *(float *)(lVar3 + 0x14) - unaff_R14[2];
  fVar7 = *(float *)(lVar3 + 0x10) - unaff_R14[1];
  if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <= fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8
     ) {
    *unaff_RDI = *(int32_t *)(unaff_RSI * 0xa60 + 0x36e8 + in_R10);
  }
  else {
    *unaff_RDI = *(int32_t *)(param_4 * 0xa60 + 0x36e8 + in_R10);
  }
  iVar1 = *(int *)(in_R10 + 0x98d930);
  if (-1 < iVar1) {
    if ((iVar1 != param_2) && (iVar1 != param_3)) {
      *unaff_RBX = 0;
      iVar1 = *(int *)((int64_t)*(int *)(in_R10 + 0x98d930) * 0xa60 + 0x3604 + in_R10);
      if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
        *unaff_RBX = 0;
        return;
      }
    }
    *unaff_RBX = 1;
    return;
  }
  *unaff_RBX = 0;
  return;
}
// 函数: void function_4f80d0(uint64_t param_1,int param_2,int param_3)
void function_4f80d0(uint64_t param_1,int param_2,int param_3)
{
  int iVar1;
  int8_t *unaff_RBX;
  int32_t *unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  *unaff_RDI = *(int32_t *)(in_R11 + 0x36e8 + in_R10);
  iVar1 = *(int *)(in_R10 + 0x98d930);
  if (iVar1 < 0) {
    *unaff_RBX = 0;
    return;
  }
  if ((iVar1 != param_2) && (iVar1 != param_3)) {
    *unaff_RBX = 0;
    iVar1 = *(int *)((int64_t)*(int *)(in_R10 + 0x98d930) * 0xa60 + 0x3604 + in_R10);
    if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
      *unaff_RBX = 0;
      return;
    }
  }
  *unaff_RBX = 1;
  return;
}
// 函数: void function_4f8127(uint64_t param_1,int param_2,int param_3)
void function_4f8127(uint64_t param_1,int param_2,int param_3)
{
  int iVar1;
  int in_EAX;
  int8_t *unaff_RBX;
  int64_t in_R10;
  if ((in_EAX != param_2) && (in_EAX != param_3)) {
    *unaff_RBX = 0;
    iVar1 = *(int *)((int64_t)*(int *)(in_R10 + 0x98d930) * 0xa60 + 0x3604 + in_R10);
    if ((iVar1 < 0) || ((iVar1 != param_2 && (iVar1 != param_3)))) {
      *unaff_RBX = 0;
      return;
    }
  }
  *unaff_RBX = 1;
  return;
}
// 函数: void function_4f8180(int64_t param_1)
void function_4f8180(int64_t param_1)
{
  SystemDataValidator(param_1 + 0x38,0x30,4,SystemCore_MemoryManager,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4f81c0(int64_t param_1,int32_t param_2,int32_t param_3,uint64_t *param_4,
void function_4f81c0(int64_t param_1,int32_t param_2,int32_t param_3,uint64_t *param_4,
                  uint64_t param_5,uint64_t param_6,int32_t param_7,int32_t param_8,
                  int64_t param_9)
{
  uint64_t uVar1;
  int8_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int8_t stack_array_208 [32];
  code *pcStack_1e8;
  uint64_t *plocal_var_1e0;
  int8_t **pplocal_var_1d8;
  byte *pbStack_1d0;
  byte abStack_1c8 [4];
  int32_t local_var_1c4;
  int8_t *plocal_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int iStack_1a4;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_188;
  int32_t local_var_184;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  int iStack_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  int8_t stack_array_100 [192];
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_140 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  pbStack_1d0 = abStack_1c8;
  pplocal_var_1d8 = &plocal_var_1c0;
  plocal_var_1e0 = &local_var_180;
  pcStack_1e8 = (code *)&local_var_1c4;
  function_4f7fa0(param_1,param_7,param_8);
  local_var_1b8 = function_545d20(&system_data_6110,param_2,param_3);
  local_var_1b4 = (int32_t)*param_4;
  local_var_1b0 = (int32_t)((uint64_t)*param_4 >> 0x20);
  local_var_1ac = (int32_t)param_4[1];
  local_var_1a8 = (int32_t)((uint64_t)param_4[1] >> 0x20);
  iStack_1a4 = (uint)abStack_1c8[0] << 0x18;
  local_var_1a0 = local_var_180;
  uVar1 = local_var_1a0;
  local_var_198 = plocal_var_1c0;
  puVar2 = local_var_198;
  local_var_178 = CONCAT44(local_var_1b4,local_var_1b8);
  local_var_170 = CONCAT44(local_var_1ac,local_var_1b0);
  local_var_1a0._0_4_ = (int32_t)local_var_180;
  local_var_1a0._4_4_ = (int32_t)((uint64_t)local_var_180 >> 0x20);
  local_var_168 = local_var_1a8;
  iStack_164 = iStack_1a4;
  local_var_160 = (int32_t)local_var_1a0;
  local_var_15c = local_var_1a0._4_4_;
  local_var_198._0_4_ = SUB84(plocal_var_1c0,0);
  local_var_198._4_4_ = (int32_t)((uint64_t)plocal_var_1c0 >> 0x20);
  local_var_158 = (int32_t)local_var_198;
  local_var_154 = local_var_198._4_4_;
  local_var_150 = 0;
  local_var_14c = 0x3f800000;
  local_var_148 = CONCAT44(local_var_184,local_var_1c4);
  local_var_1a0 = uVar1;
  local_var_198 = puVar2;
  cVar3 = function_04b390();
  if (cVar3 == '\0') {
    local_var_138 = local_var_178;
    local_var_130 = local_var_170;
    local_var_128 = CONCAT44(iStack_164,local_var_168);
    local_var_120 = CONCAT44(local_var_15c,local_var_160);
    local_var_118 = local_var_158;
    local_var_114 = local_var_154;
    local_var_110 = local_var_150;
    local_var_10c = local_var_14c;
    local_var_108 = local_var_148;
    plocal_var_1c0 = stack_array_100;
    pcStack_1e8 = SystemCore_MemoryManager;
    DataStructureManager(stack_array_100,0x30,4,function_1c2890);
    local_var_40 = 0;
    if (param_9 != 0) {
      function_33dc50(stack_array_100,param_9);
    }
    lVar5 = function_500420(param_1 + 0x98d2d8);
    if (lVar5 != 0) {
      function_501770(lVar5,&local_var_138);
    }
    iVar4 = _Cnd_signal(param_1 + 0x98d540);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    plocal_var_1c0 = stack_array_100;
    SystemDataValidator(stack_array_100,0x30,4,SystemCore_MemoryManager);
  }
  else if (-1 < (int)local_var_178) {
    function_545140(&system_data_6110,&local_var_178,param_9,0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_208);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4f83f0(int64_t param_1,int32_t param_2,uint64_t *param_3,int8_t param_4,
void function_4f83f0(int64_t param_1,int32_t param_2,uint64_t *param_3,int8_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7,int64_t param_8,
                  int64_t param_9,int32_t param_10)
{
  uint64_t uVar1;
  int8_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int8_t stack_array_208 [32];
  code *pcStack_1e8;
  uint64_t *plocal_var_1e0;
  int8_t **pplocal_var_1d8;
  int8_t *plocal_var_1d0;
  int8_t stack_array_1c8 [4];
  int32_t local_var_1c4;
  int8_t *plocal_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int8_t stack_array_1a4 [3];
  int8_t local_var_1a1;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_188;
  int32_t local_var_184;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  int8_t stack_array_100 [192];
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_140 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  plocal_var_1d0 = stack_array_1c8;
  pplocal_var_1d8 = &plocal_var_1c0;
  plocal_var_1e0 = &local_var_180;
  pcStack_1e8 = (code *)&local_var_1c4;
  function_4f7fa0(param_1,param_6,param_7,param_3);
  local_var_1b4 = (int32_t)*param_3;
  local_var_1b0 = (int32_t)((uint64_t)*param_3 >> 0x20);
  local_var_1ac = (int32_t)param_3[1];
  local_var_1a8 = (int32_t)((uint64_t)param_3[1] >> 0x20);
  _stack_array_1a4 = CONCAT13(stack_array_1c8[0],CONCAT12(0,CONCAT11(param_5,param_4)));
  local_var_1a0 = local_var_180;
  uVar1 = local_var_1a0;
  local_var_198 = plocal_var_1c0;
  puVar2 = local_var_198;
  local_var_178 = CONCAT44(local_var_1b4,param_2);
  local_var_170 = CONCAT44(local_var_1ac,local_var_1b0);
  local_var_1a0._0_4_ = (int32_t)local_var_180;
  local_var_1a0._4_4_ = (int32_t)((uint64_t)local_var_180 >> 0x20);
  local_var_168 = local_var_1a8;
  local_var_164 = _stack_array_1a4;
  local_var_160 = (int32_t)local_var_1a0;
  local_var_15c = local_var_1a0._4_4_;
  local_var_198._0_4_ = SUB84(plocal_var_1c0,0);
  local_var_198._4_4_ = (int32_t)((uint64_t)plocal_var_1c0 >> 0x20);
  local_var_158 = (int32_t)local_var_198;
  local_var_154 = local_var_198._4_4_;
  local_var_150 = param_10;
  local_var_14c = 0x3f800000;
  local_var_148 = CONCAT44(local_var_184,local_var_1c4);
  local_var_1b8 = param_2;
  local_var_1a0 = uVar1;
  local_var_198 = puVar2;
  if (param_9 == 0) {
    cVar3 = function_04b390();
    if (cVar3 == '\0') {
      local_var_138 = local_var_178;
      local_var_130 = local_var_170;
      local_var_128 = CONCAT44(local_var_164,local_var_168);
      local_var_120 = CONCAT44(local_var_15c,local_var_160);
      local_var_118 = local_var_158;
      local_var_114 = local_var_154;
      local_var_110 = local_var_150;
      local_var_10c = local_var_14c;
      local_var_108 = local_var_148;
      plocal_var_1c0 = stack_array_100;
      pcStack_1e8 = SystemCore_MemoryManager;
      DataStructureManager(stack_array_100,0x30,4,function_1c2890);
      local_var_40 = 0;
      if (param_8 != 0) {
        function_33dc50(stack_array_100,param_8);
      }
      lVar5 = function_500420(param_1 + 0x98d2d8);
      if (lVar5 != 0) {
        function_501770(lVar5,&local_var_138);
      }
      iVar4 = _Cnd_signal(param_1 + 0x98d540);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      plocal_var_1c0 = stack_array_100;
      SystemDataValidator(stack_array_100,0x30,4,SystemCore_MemoryManager);
      goto LAB_1804f8602;
    }
  }
  if (-1 < (int)local_var_178) {
    function_545140(&system_data_6110,&local_var_178,param_8,param_9);
  }
LAB_1804f8602:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_208);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address