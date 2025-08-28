#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part225_sub002_sub002.c - 1 个函数
// 函数: void function_19ad80(int64_t *param_1,int64_t *param_2,char param_3)
void function_19ad80(int64_t *param_1,int64_t *param_2,char param_3)
{
  float fVar1;
  float fVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  code *pcVar5;
  int iVar6;
  int32_t uVar7;
  bool bVar8;
  char cVar9;
  int8_t uVar10;
  int iVar11;
  int32_t uVar12;
  int64_t **pplVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  uint uVar18;
  int64_t *plVar19;
  int64_t lVar20;
  int64_t *plVar21;
  int64_t lVar22;
  uint64_t uVar23;
  byte bVar24;
  int64_t lVar25;
  int8_t stack_array_328 [32];
  char cStack_308;
  uint64_t local_var_300;
  float fStack_2f8;
  int32_t local_var_2f4;
  uint local_var_2f0;
  int64_t *plStack_2e8;
  int64_t *plStack_2e0;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  int32_t local_var_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  int32_t local_var_29c;
  int64_t *plStack_298;
  int64_t **pplStack_290;
  int64_t **pplStack_288;
  int64_t lStack_280;
  int64_t *plStack_278;
  int64_t *plStack_270;
  int64_t *plStack_268;
  int64_t *plStack_260;
  int64_t **pplStack_258;
  int64_t lStack_250;
  int64_t lStack_248;
  int64_t lStack_240;
  uint local_var_238;
  int64_t *plStack_230;
  int64_t *plStack_228;
  int64_t *plStack_220;
  int64_t *plStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  int64_t *plStack_1f0;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  int64_t *plStack_1c8;
  void *plocal_var_1c0;
  code *pcStack_1b8;
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  void *plocal_var_1a0;
  void *plocal_var_198;
  uint64_t local_var_190;
  int64_t alStack_188 [40];
  uint64_t local_var_48;
  local_var_190 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_328;
  if (param_1[0xc170] != 0) {
    *(int64_t *)(param_1[0x66] + 0x68) = param_1[0xc170];
  }
  plVar14 = (int64_t *)0x0;
  plStack_1d8 = param_1;
  if ((*(int *)(param_2[0x6b0] + 0x110) != 0) && ((*(byte *)(param_2 + 0x37b) & 2) != 0)) {
    function_094c20(alStack_188);
    lVar22 = 2;
    lVar20 = 2;
    plVar17 = param_2 + 6;
    plVar21 = alStack_188;
    do {
      plVar19 = plVar21;
      plVar15 = plVar17;
      lVar25 = plVar15[1];
      *plVar19 = *plVar15;
      plVar19[1] = lVar25;
      lVar25 = plVar15[3];
      plVar19[2] = plVar15[2];
      plVar19[3] = lVar25;
      lVar25 = plVar15[5];
      plVar19[4] = plVar15[4];
      plVar19[5] = lVar25;
      lVar25 = plVar15[7];
      plVar19[6] = plVar15[6];
      plVar19[7] = lVar25;
      lVar25 = plVar15[9];
      plVar19[8] = plVar15[8];
      plVar19[9] = lVar25;
      lVar25 = plVar15[0xb];
      plVar19[10] = plVar15[10];
      plVar19[0xb] = lVar25;
      lVar25 = plVar15[0xd];
      plVar19[0xc] = plVar15[0xc];
      plVar19[0xd] = lVar25;
      lVar25 = plVar15[0xf];
      plVar19[0xe] = plVar15[0xe];
      plVar19[0xf] = lVar25;
      lVar20 = lVar20 + -1;
      plVar17 = plVar15 + 0x10;
      plVar21 = plVar19 + 0x10;
    } while (lVar20 != 0);
    lVar20 = plVar15[0x11];
    plVar19[0x10] = plVar15[0x10];
    plVar19[0x11] = lVar20;
    lVar20 = plVar15[0x13];
    plVar19[0x12] = plVar15[0x12];
    plVar19[0x13] = lVar20;
    lVar20 = plVar15[0x15];
    plVar19[0x14] = plVar15[0x14];
    plVar19[0x15] = lVar20;
    uVar12 = *(int32_t *)((int64_t)plVar15 + 0xb4);
    lVar20 = plVar15[0x17];
    uVar7 = *(int32_t *)((int64_t)plVar15 + 0xbc);
    *(int *)(plVar19 + 0x16) = (int)plVar15[0x16];
    *(int32_t *)((int64_t)plVar19 + 0xb4) = uVar12;
    *(int *)(plVar19 + 0x17) = (int)lVar20;
    *(int32_t *)((int64_t)plVar19 + 0xbc) = uVar7;
    puVar3 = (uint64_t *)param_1[0x534];
    if (puVar3 != (uint64_t *)0x0) {
      if ((void *)*puVar3 == &processed_var_5144_ptr) {
        LOCK();
        *(int8_t *)(puVar3 + 2) = 0;
        UNLOCK();
        function_049550(puVar3 + 4,0);
      }
      else {
        (**(code **)((void *)*puVar3 + 0x78))();
      }
      plVar17 = (int64_t *)(param_1[0x534] + 0xc0);
      plVar21 = alStack_188;
      do {
        plVar19 = plVar21;
        plVar15 = plVar17;
        lVar20 = plVar19[1];
        *plVar15 = *plVar19;
        plVar15[1] = lVar20;
        lVar20 = plVar19[3];
        plVar15[2] = plVar19[2];
        plVar15[3] = lVar20;
        lVar20 = plVar19[5];
        plVar15[4] = plVar19[4];
        plVar15[5] = lVar20;
        lVar20 = plVar19[7];
        plVar15[6] = plVar19[6];
        plVar15[7] = lVar20;
        lVar20 = plVar19[9];
        plVar15[8] = plVar19[8];
        plVar15[9] = lVar20;
        lVar20 = plVar19[0xb];
        plVar15[10] = plVar19[10];
        plVar15[0xb] = lVar20;
        lVar20 = plVar19[0xd];
        plVar15[0xc] = plVar19[0xc];
        plVar15[0xd] = lVar20;
        lVar20 = plVar19[0xf];
        plVar15[0xe] = plVar19[0xe];
        plVar15[0xf] = lVar20;
        lVar22 = lVar22 + -1;
        plVar17 = plVar15 + 0x10;
        plVar21 = plVar19 + 0x10;
      } while (lVar22 != 0);
      lVar20 = plVar19[0x11];
      plVar15[0x10] = plVar19[0x10];
      plVar15[0x11] = lVar20;
      lVar20 = plVar19[0x13];
      plVar15[0x12] = plVar19[0x12];
      plVar15[0x13] = lVar20;
      lVar20 = plVar19[0x15];
      plVar15[0x14] = plVar19[0x14];
      plVar15[0x15] = lVar20;
      uVar12 = *(int32_t *)((int64_t)plVar19 + 0xb4);
      lVar20 = plVar19[0x17];
      uVar7 = *(int32_t *)((int64_t)plVar19 + 0xbc);
      *(int *)(plVar15 + 0x16) = (int)plVar19[0x16];
      *(int32_t *)((int64_t)plVar15 + 0xb4) = uVar12;
      *(int *)(plVar15 + 0x17) = (int)lVar20;
      *(int32_t *)((int64_t)plVar15 + 0xbc) = uVar7;
      lVar20 = system_context_ptr;
      local_var_300 = &plStack_298;
      plStack_298 = (int64_t *)param_1[0x534];
      if (plStack_298 != (int64_t *)0x0) {
        (**(code **)(*plStack_298 + 0x28))();
      }
      SystemCore_TimerManager(lVar20,&plStack_298);
    }
  }
  if ((*(char *)((int64_t)param_2 + 0x9a31) != '\0') || ((*(byte *)(param_2 + 0x37b) & 0x20) != 0))
  {
    param_1[0x79] = param_1[0x81];
    param_1[0x7a] = param_1[0x82];
    param_1[0x7b] = param_1[0x83];
    param_1[0x7c] = param_1[0x84];
    param_1[0x7d] = param_1[0x85];
    param_1[0x7e] = param_1[0x86];
    param_1[0x7f] = param_1[0x87];
    param_1[0x80] = param_1[0x88];
    lVar20 = param_2[0x1f];
    param_1[0x81] = param_2[0x1e];
    param_1[0x82] = lVar20;
    lVar20 = param_2[0x21];
    param_1[0x83] = param_2[0x20];
    param_1[0x84] = lVar20;
    lVar20 = param_2[0x23];
    param_1[0x85] = param_2[0x22];
    param_1[0x86] = lVar20;
    uVar12 = *(int32_t *)((int64_t)param_2 + 0x124);
    lVar20 = param_2[0x25];
    uVar7 = *(int32_t *)((int64_t)param_2 + 300);
    *(int *)(param_1 + 0x87) = (int)param_2[0x24];
    *(int32_t *)((int64_t)param_1 + 0x43c) = uVar12;
    *(int *)(param_1 + 0x88) = (int)lVar20;
    *(int32_t *)((int64_t)param_1 + 0x444) = uVar7;
    *(int8_t *)((int64_t)param_1 + 0x562) = 1;
  }
  *(char *)((int64_t)param_2 + 0x124c4) = (char)param_1[0x1033];
  if ((((param_3 == '\0') || (*(char *)((int64_t)param_1 + 0x3e05) == '\0')) ||
      ((*(byte *)(param_1 + 0x7c1) & 2) != 0)) ||
     ((*(int *)(SYSTEM_STATE_MANAGER + 0xc40) < 1 ||
      (cStack_308 = '\x01', *(int64_t **)(param_2[0x6b0] + 0x588) != param_1)))) {
    cStack_308 = '\0';
  }
  function_1b65d0(param_1,param_2);
  cVar9 = SystemFunction_0001802e1840(param_2[0x6b0] + 0x560,param_1);
  if (cVar9 != '\0') {
    *(int32_t *)(param_2[0x6b0] + 0x5e4) = 0xffffffff;
  }
  *(int32_t *)(param_2[0x6b0] + 0x110) = 0;
  if ((*(char *)((int64_t)param_1 + 0x563) == '\0') ||
     (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
     iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
     iVar11 == iVar6 || iVar11 - iVar6 < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  *(int32_t *)(param_1 + 0x4cd) = 0;
  *(int32_t *)(param_2[0x6b0] + 0x628) = 0xffffffff;
  if (((char)param_2[0x1347] == '\0') || (*(char *)((int64_t)param_1 + 0x3f61) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(int8_t *)(param_2 + 0x1347) = uVar10;
  lVar22 = core_system_data_config;
  lVar20 = 1;
  if (bVar8) {
    plVar17 = *(int64_t **)(core_system_data_config + 0x10408);
    plVar21 = *(int64_t **)(core_system_data_config + 0x10400);
    lVar25 = (int64_t)plVar17 - (int64_t)plVar21 >> 3;
    if (plVar17 < *(int64_t **)(core_system_data_config + 0x10410)) {
      *(int64_t **)(core_system_data_config + 0x10408) = plVar17 + 1;
      *plVar17 = (int64_t)(param_1 + 0xae);
    }
    else {
      if ((lVar25 == 0) || (lVar20 = lVar25 * 2, lVar20 != 0)) {
        plVar14 = (int64_t *)
                  CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar20 * 8,*(int8_t *)(core_system_data_config + 0x10418))
        ;
        plVar17 = *(int64_t **)(lVar22 + 0x10408);
        plVar21 = *(int64_t **)(lVar22 + 0x10400);
      }
      if (plVar21 != plVar17) {
// WARNING: Subroutine does not return
        memmove(plVar14,plVar21,(int64_t)plVar17 - (int64_t)plVar21);
      }
      *plVar14 = (int64_t)(param_1 + 0xae);
      if (*(int64_t *)(lVar22 + 0x10400) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t **)(lVar22 + 0x10400) = plVar14;
      *(int64_t **)(lVar22 + 0x10408) = plVar14 + 1;
      *(int64_t **)(lVar22 + 0x10410) = plVar14 + lVar20;
    }
    *(int *)(param_2[0x6b0] + 0x628) = (int)lVar25;
  }
  if ((int)param_1[0x4f8] < 7) {
    *(int8_t *)(param_2 + 0x38c) = 1;
    uVar10 = SystemFunction_0001800e2bf0(system_parameter_buffer,param_2);
    *(int8_t *)((int64_t)param_2 + 0x1c61) = uVar10;
    if ((int)param_2[1] == -1) {
      bVar24 = 0;
    }
    else {
      bVar24 = (byte)(int)param_2[3];
    }
    *(byte *)((int64_t)param_2 + 0x1c62) = bVar24 & 1;
    uVar12 = SystemFunction_00018024c420(param_2);
    *(int32_t *)((int64_t)param_2 + 0x1c64) = uVar12;
  }
  else {
    function_304010(param_2[0x6b0]);
  }
  pplVar13 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  local_var_300 = pplVar13;
  UltraHighFreq_PerformanceMonitor1(pplVar13);
  *pplVar13 = (int64_t *)&processed_var_6840_ptr;
  pplVar13[0x18] = param_1;
  pplVar13[0x19] = param_2;
  pplStack_290 = pplVar13;
  (*(code *)(*pplVar13)[5])(pplVar13);
  plVar14 = param_1 + 0x6c;
  PhysicsSystem_TriggersProcessor(plVar14,&pplStack_290);
  if (pplStack_290 != (int64_t **)0x0) {
    (*(code *)(*pplStack_290)[7])();
  }
  if ((param_1[0x70] != 0) && (*(char *)((int64_t)param_1 + 0x60b91) != '\0')) {
    function_19c6e0(param_1,param_2);
  }
  function_2e5be0(param_1 + 0x1045,param_2);
  if (param_1[0x75] != 0) {
    pplVar13 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
    local_var_300 = pplVar13;
    UltraHighFreq_PerformanceMonitor1(pplVar13);
    *pplVar13 = (int64_t *)&processed_var_6696_ptr;
    pplVar13[0x18] = param_1;
    pplVar13[0x19] = param_2;
    pplStack_288 = pplVar13;
    (*(code *)(*pplVar13)[5])(pplVar13);
    PhysicsSystem_TriggersProcessor(plVar14,&pplStack_288);
    if (pplStack_288 != (int64_t **)0x0) {
      (*(code *)(*pplStack_288)[7])();
    }
  }
  function_05e250(system_context_ptr,*plVar14,param_1[0x6d] - *plVar14 >> 3);
  if (((cStack_308 != '\0') && (*(char *)((int64_t)param_1 + 0x60b91) != '\0')) &&
     (1 < (int)param_1[0x4f8])) {
    *(int32_t *)(param_2[0x6b0] + 0x5b0) = *(int32_t *)((int64_t)param_1 + 0x27bc);
    *(int32_t *)((int64_t)param_2 + 0x995c) = *(int32_t *)(param_2[0x6b0] + 0x5b0);
    lStack_280 = 0;
    iVar11 = function_2e4530(param_2[0x6b0] + 0x560,param_2,&lStack_280);
    if (0 < iVar11) {
      lVar20 = 0;
      do {
        lVar25 = lStack_280;
        lVar22 = param_1[0x103e];
        if (lVar22 != 0) {
          lVar4 = *(int64_t *)(lStack_280 + lVar20 * 8);
          fVar1 = *(float *)(lVar22 + 0xc);
          fVar2 = *(float *)(lVar22 + 8);
          *(float *)(lVar4 + 0x11ccc) = fVar1 * *(float *)(lVar22 + 4);
          *(float *)(lVar4 + 0x11cd0) = fVar1 * fVar2;
        }
        function_304010(param_2[0x6b0],*(uint64_t *)(lStack_280 + lVar20 * 8));
        lVar22 = *(int64_t *)(lVar25 + lVar20 * 8);
        LOCK();
        plVar14 = param_2 + 0x2349;
        lVar25 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + 1;
        UNLOCK();
        param_2[(int64_t)(int)lVar25 + 0x1349] = lVar22;
        uVar16 = *(uint64_t *)((int64_t)param_2 + 0x9a3c);
        *(uint64_t *)(lVar22 + 0x9a34) = *(uint64_t *)((int64_t)param_2 + 0x9a34);
        *(uint64_t *)(lVar22 + 0x9a3c) = uVar16;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar11);
    }
  }
  if ((((int)param_1[0xc188] == -1) ||
      (lVar20 = *(int64_t *)(param_1[0xc184] + (int64_t)(int)param_1[0xc188] * 8), lVar20 == 0))
     || (*(int64_t *)(lVar20 + 0x40) == 0)) {
    *(int32_t *)(param_2 + 0x253e) = *(int32_t *)((int64_t)param_1 + 0x60c44);
  }
  else {
    *(int32_t *)(param_2 + 0x253e) = 0xffffffff;
  }
  *(int32_t *)((int64_t)param_2 + 0x129f4) = *(int32_t *)((int64_t)param_1 + 0x3ec4);
  if (param_1[0x103e] != 0) {
    *(float *)(param_2 + 0x253f) = *(float *)(param_1 + 0x7d9) * 0.05;
  }
  if (param_1[0xc170] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)*(uint64_t *)(param_1[0xc170] + 0x1dd0);
  }
  *(float *)((int64_t)param_2 + 0x129fc) = (float)iVar11;
  function_1acb30(param_1);
  iVar11 = (int)param_1[0x4f8];
  if (4 < iVar11) {
    function_316460(param_1 + 0xc182);
    iVar11 = (int)param_1[0x4f8];
  }
  if (6 < iVar11) {
    function_31a470(param_1 + 0xc182);
  }
  plVar14 = (int64_t *)function_0be440();
  if (plVar14 != (int64_t *)0x0) {
    plStack_230 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_230 = (int64_t *)param_2[0x1330];
  param_2[0x1330] = (int64_t)plVar14;
  if (plStack_230 != (int64_t *)0x0) {
    (**(code **)(*plStack_230 + 0x38))();
  }
  if (((1 < (int)param_1[0x4f8]) && (lVar20 = param_1[100], lVar20 != 0)) &&
     (lVar22 = *(int64_t *)(lVar20 + 0x3c8), lVar22 != 0)) {
    bVar8 = false;
    if ((*(int64_t *)(lVar22 + 0x20) - *(int64_t *)(lVar22 + 0x18) >> 4 != 0) &&
       (*(char *)(*(int64_t *)(lVar20 + 0x88) + 0x60b91) != '\0')) {
      function_460970(lVar22,param_2);
      bVar8 = true;
    }
    if (((*(char *)(*(int64_t *)(lVar20 + 0x88) + 0x60b91) != '\0') && (bVar8)) &&
       (*(int64_t *)(*(int64_t *)(lVar20 + 0x3c8) + 0x20) -
        *(int64_t *)(*(int64_t *)(lVar20 + 0x3c8) + 0x18) >> 4 == 0)) {
      function_45ff20();
    }
  }
  plVar14 = param_1 + 0x1c;
  iVar11 = 0;
  if (param_1[0x1d] - *plVar14 >> 3 != 0) {
    lVar20 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar20 + *plVar14) + 0x38))
                (*(int64_t **)(lVar20 + *plVar14),param_2,param_1);
      iVar11 = iVar11 + 1;
      lVar20 = lVar20 + 8;
    } while ((uint64_t)(int64_t)iVar11 < (uint64_t)(param_1[0x1d] - *plVar14 >> 3));
  }
  if (*(char *)((int64_t)param_2 + 0x9a31) != '\0') {
    if (((int)param_1[0x4f8] != 7) && (*(int64_t *)(param_2[0x6b0] + 0x530) != 0)) {
      *(int32_t *)(*(int64_t *)(param_2[0x6b0] + 0x530) + 0x40) = 0x41200000;
    }
    plVar17 = (int64_t *)param_2[0x6b0];
    if (plVar17[0xa6] != 0) {
      cVar9 = (**(code **)(*plVar17 + 0x78))();
      uVar18 = *(uint *)(*(int64_t *)(param_2[0x6b0] + 0x530) + 0x94);
      if (cVar9 == '\0') {
        uVar18 = uVar18 & 0x7fffffff;
      }
      else {
        uVar18 = uVar18 | 0x80000000;
      }
      *(uint *)(*(int64_t *)(param_2[0x6b0] + 0x530) + 0x94) = uVar18;
      plVar17 = (int64_t *)param_2[0x6b0];
    }
    uVar18 = 0xdfffffff;
    if (plVar17[0xa6] != 0) {
      uVar18 = *(uint *)(plVar17[0xa6] + 0x94);
    }
    if (((*(char *)((int64_t)param_1 + 0x2a63) == '\0') || ((int)plVar17[0x22] == 0)) ||
       (lVar20 = SystemOptimizer(plVar17[0x23]), lVar20 == 0)) {
      uVar18 = uVar18 & 0xfffff7ff;
    }
    else {
      uVar18 = uVar18 | 0x800;
    }
    uVar12 = SystemFunction_0001801f2a40();
    *(int32_t *)(param_2 + 0x133d) = uVar12;
    function_303b70(param_2[0x6b0],uVar18,param_2);
    plVar17 = *(int64_t **)(param_2[0x6b0] + 0x530);
    if (plVar17 != (int64_t *)0x0) {
      plStack_228 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_228 = (int64_t *)param_2[0x1337];
    param_2[0x1337] = (int64_t)plVar17;
    if (plStack_228 != (int64_t *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
    plVar17 = *(int64_t **)(param_2[0x6b0] + 0x538);
    if (plVar17 != (int64_t *)0x0) {
      plStack_220 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_220 = (int64_t *)param_2[0x1338];
    param_2[0x1338] = (int64_t)plVar17;
    if (plStack_220 != (int64_t *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    plVar17 = *(int64_t **)(param_2[0x6b0] + 0x540);
    if (plVar17 != (int64_t *)0x0) {
      plStack_218 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_218 = (int64_t *)param_2[0x1339];
    param_2[0x1339] = (int64_t)plVar17;
    if (plStack_218 != (int64_t *)0x0) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    plVar17 = *(int64_t **)(param_2[0x6b0] + 0x550);
    if (plVar17 != (int64_t *)0x0) {
      plStack_210 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_210 = (int64_t *)param_2[0x133b];
    param_2[0x133b] = (int64_t)plVar17;
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    *(int32_t *)(param_2 + 0x249b) = *(int32_t *)((int64_t)param_1 + 0x3f54);
    *(int *)(param_2 + 0x249a) = (int)param_1[0x7eb];
    *(int32_t *)((int64_t)param_2 + 0x124d4) = *(int32_t *)((int64_t)param_1 + 0x3f5c);
    *(char *)((int64_t)param_2 + 0x124dc) = (char)param_1[0x7ec];
  }
  plVar17 = *(int64_t **)(param_2[0x6b0] + 0x558);
  if (plVar17 != (int64_t *)0x0) {
    plStack_208 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_208 = (int64_t *)param_2[0x133c];
  param_2[0x133c] = (int64_t)plVar17;
  if (plStack_208 != (int64_t *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  plVar17 = *(int64_t **)(param_2[0x6b0] + 0x548);
  if (plVar17 != (int64_t *)0x0) {
    plStack_200 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_200 = (int64_t *)param_2[0x133a];
  param_2[0x133a] = (int64_t)plVar17;
  if (plStack_200 != (int64_t *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  if (param_1 == (int64_t *)0xffffffffffffc950) {
    *(int8_t *)((int64_t)param_2 + 0x11cf4) = 0;
  }
  else {
    function_1c1c40(param_2 + 0x23a0);
    *(int8_t *)((int64_t)param_2 + 0x11cf4) = 1;
  }
  lVar20 = param_1[0x103e];
  if (lVar20 != 0) {
    fVar1 = *(float *)(lVar20 + 0xc);
    fVar2 = *(float *)(lVar20 + 8);
    *(float *)((int64_t)param_2 + 0x11ccc) = fVar1 * *(float *)(lVar20 + 4);
    *(float *)(param_2 + 0x239a) = fVar1 * fVar2;
  }
  *(int32_t *)((int64_t)param_2 + 0x124e4) = *(int32_t *)((int64_t)param_1 + 0x5b9c);
  lVar20 = param_1[0xc170];
  if (lVar20 == 0) {
    *(uint64_t *)((int64_t)param_2 + 0x11cd4) = 0;
    *(uint64_t *)((int64_t)param_2 + 0x11cdc) = 0;
    plVar17 = (int64_t *)param_2[0x1332];
    param_2[0x1332] = 0;
    plStack_1f0 = plVar17;
  }
  else {
    uVar16 = *(uint64_t *)(lVar20 + 0x1c18);
    *(uint64_t *)((int64_t)param_2 + 0x11cd4) = *(uint64_t *)(lVar20 + 0x1c10);
    *(uint64_t *)((int64_t)param_2 + 0x11cdc) = uVar16;
    plVar21 = *(int64_t **)(param_1[0xc170] + 0x1c48);
    if (plVar21 != (int64_t *)0x0) {
      plStack_1f8 = plVar21;
      (**(code **)(*plVar21 + 0x28))(plVar21);
    }
    plVar17 = (int64_t *)param_2[0x1332];
    param_2[0x1332] = (int64_t)plVar21;
    plStack_1f8 = plVar17;
  }
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  plVar17 = (int64_t *)param_1[0x518];
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17,0,param_2 + 6);
  }
  uVar18 = 0;
  lVar20 = param_2[0x6b0];
  lVar22 = 0x118;
  plStack_2e8 = (int64_t *)0x118;
  if (*(int *)(lVar20 + 0x110) != 0) {
    do {
      lVar20 = *(int64_t *)(lVar22 + lVar20);
      if (((param_1[100] != 0) && ((*(byte *)(lVar20 + 0x1bd8) & 0x20) != 0)) &&
         ((*(byte *)(lVar20 + 0x1bd9) & 2) == 0)) {
        function_31e320(param_1[100],lVar20);
      }
      *(int8_t *)(lVar20 + 0x1c60) = 1;
      if (((*(int *)(lVar20 + 0x124bc) == 0) && (*(int *)(lVar20 + 0x2920) == 0)) &&
         ((*(int *)(lVar20 + 0x2108) == 0 && (*(int *)(lVar20 + 0x1fe0) == 0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((*(int *)(system_parameter_buffer + 0x12d8) == 0x12) || ((*(byte *)(lVar20 + 0x1bd8) & 0x20) == 0)
          ) || (((*(int64_t *)(lVar20 + 0x99b8) == 0 ||
                 ((*(uint *)(*(int64_t *)(lVar20 + 0x99b8) + 0x98) & 0x8000101e) == 0)) &&
                (((*(char *)(lVar20 + 0x124c4) == '\0' && (!bVar8)) &&
                 (*(int *)(lVar20 + 0x1bdc) == 0)))))) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      *(int8_t *)(lVar20 + 0x1c61) = uVar10;
      if (*(int *)(lVar20 + 8) == -1) {
        bVar24 = 0;
      }
      else {
        bVar24 = (byte)*(int32_t *)(lVar20 + 0x18);
      }
      *(byte *)(lVar20 + 0x1c62) = bVar24 & 1;
      uVar12 = SystemFunction_00018024c420(lVar20);
      *(int32_t *)(lVar20 + 0x1c64) = uVar12;
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 8;
      lVar20 = param_2[0x6b0];
    } while (uVar18 < *(uint *)(lVar20 + 0x110));
  }
  plVar17 = (int64_t *)0x118;
  lVar20 = param_1[0x1040];
  if (lVar20 != 0) {
    local_var_2d8 = *(uint64_t *)(lVar20 + 0x70);
    local_var_2d0 = *(uint64_t *)(lVar20 + 0x78);
    fStack_2f8 = *(float *)(param_2 + 0x25) - *(float *)((int64_t)param_1 + 0x3e14) * 2000.0;
    fStack_2a4 = *(float *)((int64_t)param_2 + 0x124) - *(float *)(param_1 + 0x7c2) * 2000.0;
    fStack_2a8 = *(float *)(param_2 + 0x24) - *(float *)((int64_t)param_1 + 0x3e0c) * 2000.0;
    local_var_300 = (int64_t **)CONCAT44(fStack_2a4,fStack_2a8);
    local_var_2f4 = 0x7f7fffff;
    local_var_29c = 0x7f7fffff;
    local_var_2c8 = *(uint64_t *)((int64_t)param_1 + 0x3e0c);
    local_var_2c0 = *(uint64_t *)((int64_t)param_1 + 0x3e14);
    fStack_2b8 = 0.0;
    fStack_2b4 = 0.0;
    fStack_2b0 = 1.0;
    local_var_2ac = 0x7f7fffff;
    fStack_2a0 = fStack_2f8;
    Utilities_DataValidator(&local_var_2d8);
    local_var_2d8 = CONCAT44(local_var_2d8._4_4_ * 200.0,(float)local_var_2d8 * 200.0);
    local_var_2d0 = CONCAT44(local_var_2d0._4_4_,(float)local_var_2d0 * 200.0);
    local_var_2c8 = CONCAT44(local_var_2c8._4_4_ * 200.0,(float)local_var_2c8 * 200.0);
    local_var_2c0 = CONCAT44(local_var_2c0._4_4_,(float)local_var_2c0 * 200.0);
    fStack_2b8 = fStack_2b8 * 200.0;
    fStack_2b4 = fStack_2b4 * 200.0;
    fStack_2b0 = fStack_2b0 * 200.0;
    NetworkProtocol_Transmitter(param_1[0x1040]);
    *(byte *)(param_1[0x1040] + 0x2e8) = *(byte *)(param_1[0x1040] + 0x2e8) & 0xef;
  }
  if ((param_1[0x103f] != 0) && (*(char *)(system_parameter_buffer + 0x1504) == '\x01')) {
    RenderingSystem_UpdateCamera();
  }
  if (param_1[0x89] != 0) {
    function_37c8d0();
  }
  lVar20 = system_context_ptr;
  if (*(int *)(param_2[0x6b0] + 0x110) != 0) {
    if ((*(byte *)(param_2 + 0x37b) & 2) != 0) {
      plVar21 = (int64_t *)param_1[0x534];
      if ((plVar21 != (int64_t *)0x0) && (system_context_ptr != 0)) {
        local_var_300 = &plStack_278;
        plStack_278 = plVar21;
        (**(code **)(*plVar21 + 0x28))();
        SystemCore_ErrorHandler(lVar20,&plStack_278,0);
      }
      if (*(char *)(system_operation_state + 0x162f) != '\0') {
        function_389b20(param_1 + 0x534);
      }
      if ((*(char *)(system_operation_state + 0x1630) != '\0') &&
         ((int64_t *)param_1[0x535] != (int64_t *)0x0)) {
        (**(code **)(*(int64_t *)param_1[0x535] + 0x40))();
      }
    }
    param_1[1999] = param_1[0x7ce];
    local_var_2f0 = 0;
    lVar20 = param_2[0x6b0];
    if (*(int *)(lVar20 + 0x110) != 0) {
      do {
        local_var_300 = *(int64_t ***)(lVar20 + (int64_t)plVar17);
        if ((*(uint *)((int64_t)local_var_300 + 4) & 0x8000000) == 0) {
          plVar21 = (int64_t *)param_1[1999];
          if (plVar21 < (int64_t *)param_1[2000]) {
            param_1[1999] = (int64_t)(plVar21 + 1);
            *plVar21 = (int64_t)local_var_300;
          }
          else {
            plVar17 = (int64_t *)param_1[0x7ce];
            lVar22 = (int64_t)plVar21 - (int64_t)plVar17 >> 3;
            lVar20 = 1;
            if ((lVar22 == 0) || (lVar20 = lVar22 * 2, lVar20 != 0)) {
              plVar15 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar20 * 8,(char)param_1[0x7d1]);
              plVar21 = (int64_t *)param_1[1999];
              plVar17 = (int64_t *)param_1[0x7ce];
            }
            else {
              plVar15 = (int64_t *)0x0;
            }
            if (plVar17 != plVar21) {
// WARNING: Subroutine does not return
              memmove(plVar15,plVar17,(int64_t)plVar21 - (int64_t)plVar17);
            }
            *plVar15 = (int64_t)local_var_300;
            if (param_1[0x7ce] != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            param_1[0x7ce] = (int64_t)plVar15;
            param_1[1999] = (int64_t)(plVar15 + 1);
            param_1[2000] = (int64_t)(plVar15 + lVar20);
            plVar17 = plStack_2e8;
          }
        }
        local_var_2f0 = local_var_2f0 + 1;
        plVar17 = plVar17 + 1;
        lVar20 = param_2[0x6b0];
        plStack_2e8 = plVar17;
      } while (local_var_2f0 < *(uint *)(lVar20 + 0x110));
    }
    local_var_300 = (int64_t **)&lStack_250;
    lVar20 = param_1[1999] - param_1[0x7ce] >> 3;
    local_var_238 = *(uint *)(param_1 + 0x7d1);
    if (lVar20 == 0) {
      lStack_250 = 0;
    }
    else {
      lStack_250 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar20 * 8,local_var_238 & 0xff);
    }
    lStack_240 = lStack_250 + lVar20 * 8;
    lVar20 = param_1[0x7ce];
    lStack_248 = lStack_250;
    if (lVar20 != param_1[1999]) {
// WARNING: Subroutine does not return
      memmove(lStack_250,lVar20,param_1[1999] - lVar20);
    }
    function_1c1af0(plVar14,&lStack_250);
    iVar11 = 0;
    if (param_1[0x1d] - *plVar14 >> 3 != 0) {
      lVar20 = 0;
      do {
        (**(code **)(**(int64_t **)(lVar20 + *plVar14) + 0x18))
                  (*(int64_t **)(lVar20 + *plVar14),param_1,param_2);
        iVar11 = iVar11 + 1;
        lVar20 = lVar20 + 8;
      } while ((uint64_t)(int64_t)iVar11 < (uint64_t)(param_1[0x1d] - *plVar14 >> 3));
    }
    uVar16 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    local_var_300 = &plStack_1d0;
    plocal_var_1c0 = &ui_system_data_1968_ptr;
    pcStack_1b8 = function_1bc8d0;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1d0 = param_1;
    plStack_1c8 = param_2;
    plVar14 = (int64_t *)SystemCore_ErrorHandler(uVar16,&plStack_1d0);
    if (plVar14 != (int64_t *)0x0) {
      plStack_1e8 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e8 = (int64_t *)param_1[0xc18e];
    param_1[0xc18e] = (int64_t)plVar14;
    if (plStack_1e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e8 + 0x38))();
    }
    *(uint64_t *)(param_1[0xc18e] + 0x18) = 0xfffffffffffffffc;
    lVar20 = system_context_ptr;
    plVar14 = (int64_t *)param_1[0xc18e];
    if (*(int *)(core_system_data_config + 0x380) == 0) {
      local_var_300 = &plStack_270;
      plStack_270 = plVar14;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      SystemCore_TimerManager(lVar20,&plStack_270);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (int64_t *)param_1[0xc18e];
      if (*(code **)(*plVar14 + 0x70) == (code *)&ui_system_data_1280_ptr) {
        LOCK();
        *(int8_t *)(plVar14 + 2) = 1;
        UNLOCK();
        function_0466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    uVar16 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    local_var_300 = &plStack_1b0;
    plocal_var_1a0 = &ui_system_data_1760_ptr;
    plocal_var_198 = &ui_system_data_1744_ptr;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1b0 = param_1;
    plStack_1a8 = param_2;
    plVar14 = (int64_t *)SystemCore_ErrorHandler(uVar16,&plStack_1b0);
    if (plVar14 != (int64_t *)0x0) {
      plStack_1e0 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e0 = (int64_t *)param_1[0xc18f];
    param_1[0xc18f] = (int64_t)plVar14;
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    *(uint64_t *)(param_1[0xc18f] + 0x18) = 0xfffffffffffffffe;
    lVar20 = system_context_ptr;
    plVar14 = (int64_t *)param_1[0xc18f];
    if (*(int *)(core_system_data_config + 0x380) == 0) {
      local_var_300 = &plStack_268;
      plStack_268 = plVar14;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      SystemCore_TimerManager(lVar20,&plStack_268);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (int64_t *)param_1[0xc18f];
      if (*(code **)(*plVar14 + 0x70) == (code *)&ui_system_data_1280_ptr) {
        LOCK();
        *(int8_t *)(plVar14 + 2) = 1;
        UNLOCK();
        function_0466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    if (param_1[0x89] != 0) {
      function_374f40(param_1[0x89],param_2);
    }
    if ((*(char *)((int64_t)param_1 + 0x563) != '\0') &&
       (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
       iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
       iVar11 != iVar6 && -1 < iVar11 - iVar6)) {
      pplVar13 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe8,8,3);
      bVar24 = *(byte *)(param_2 + 0x37b);
      local_var_300 = pplVar13;
      UltraHighFreq_PerformanceMonitor1(pplVar13);
      *pplVar13 = (int64_t *)&processed_var_6552_ptr;
      pplVar13[0x18] = param_1;
      pplVar13[0x19] = param_2;
      *(byte *)(pplVar13 + 0x1a) = bVar24 >> 1 & 1;
      pplVar13[0x1b] = param_1 + 0x4e3;
      pplVar13[0x1c] = param_1 + 0x4cf;
      pplStack_258 = pplVar13;
      (*(code *)(*pplVar13)[5])(pplVar13);
      pplStack_258 = (int64_t **)param_1[0x4ce];
      param_1[0x4ce] = (int64_t)pplVar13;
      if (pplStack_258 != (int64_t **)0x0) {
        (*(code *)(*pplStack_258)[7])();
      }
      lVar20 = system_context_ptr;
      plVar14 = (int64_t *)param_1[0x4ce];
      if (*(int *)(core_system_data_config + 0x380) == 0) {
        pplStack_258 = &plStack_260;
        plStack_260 = plVar14;
        if (plVar14 != (int64_t *)0x0) {
          (**(code **)(*plVar14 + 0x28))();
        }
        SystemCore_TimerManager(lVar20,&plStack_260);
      }
      else {
        (**(code **)(*plVar14 + 0x60))();
        puVar3 = (uint64_t *)param_1[0x4ce];
        if ((void *)*puVar3 == &processed_var_6552_ptr) {
          LOCK();
          *(int8_t *)(puVar3 + 2) = 1;
          UNLOCK();
          function_0466d0(puVar3 + 4);
        }
        else {
          (**(code **)((void *)*puVar3 + 0x70))();
        }
      }
    }
  }
  lVar25 = system_context_ptr;
  plVar14 = param_1 + 0x6c;
  lVar20 = param_1[0x6d];
  lVar22 = *plVar14;
  if (lVar20 - lVar22 >> 3 != 0) {
    do {
      bVar8 = false;
      uVar23 = 0;
      if (lVar20 - lVar22 >> 3 == 0) break;
      do {
        plVar17 = *(int64_t **)(lVar22 + uVar23 * 8);
        pcVar5 = *(code **)(*plVar17 + 0x68);
        if (pcVar5 == (code *)&processed_var_9696_ptr) {
          cVar9 = (char)plVar17[2] != '\0';
        }
        else {
          cVar9 = (*pcVar5)();
        }
        if (cVar9 == '\0') {
          bVar8 = true;
          plVar17 = (int64_t *)PerformanceOptimizer(lVar25);
          cVar9 = (**(code **)(*plVar17 + 0x20))(plVar17,0);
          if (cVar9 == '\0') {
            plVar17 = *(int64_t **)(*plVar14 + uVar23 * 8);
            pcVar5 = *(code **)(*plVar17 + 0x80);
            if (pcVar5 == (code *)&ui_system_data_1840_ptr) {
              function_0496b0(plVar17 + 4);
            }
            else {
              (*pcVar5)();
            }
          }
        }
        uVar23 = (uint64_t)((int)uVar23 + 1);
        lVar20 = param_1[0x6d];
        lVar22 = *plVar14;
      } while (uVar23 < (uint64_t)(lVar20 - lVar22 >> 3));
    } while (bVar8);
    SystemCore_Controller(plVar14);
    param_1 = plStack_1d8;
  }
  *(int8_t *)(param_1 + 2) = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_328);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_19c480(int64_t param_1)
{
  int32_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  lVar3 = *(int64_t *)(param_1 + 0xc0);
  lVar4 = *(int64_t *)(lVar3 + 0x3a8);
  uVar2 = *(int32_t *)(lVar3 + 0x43c);
  uVar5 = *(int32_t *)(lVar3 + 0x440);
  uVar6 = *(int32_t *)(lVar3 + 0x444);
  uVar7 = *(int32_t *)(lVar4 + 0x40);
  uVar8 = *(int32_t *)(lVar4 + 0x44);
  uVar9 = *(int32_t *)(lVar4 + 0x48);
  uVar10 = *(int32_t *)(lVar4 + 0x4c);
  *(int32_t *)(lVar4 + 0x40) = *(int32_t *)(lVar3 + 0x438);
  *(int32_t *)(lVar4 + 0x44) = uVar2;
  *(int32_t *)(lVar4 + 0x48) = uVar5;
  *(int32_t *)(lVar4 + 0x4c) = uVar6;
  *(int32_t *)(lVar4 + 0x30) = uVar7;
  *(int32_t *)(lVar4 + 0x34) = uVar8;
  *(int32_t *)(lVar4 + 0x38) = uVar9;
  *(int32_t *)(lVar4 + 0x3c) = uVar10;
  function_2c6190(*(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x3a8));
  function_19c5b0(*(int64_t *)(param_1 + 200) + 0x12678,
                *(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x3a8));
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x3a8);
  lVar4 = *(int64_t *)(param_1 + 200);
  uVar11 = *(uint64_t *)(lVar3 + 0x38);
  uVar12 = *(uint64_t *)(lVar3 + 0x40);
  uVar13 = *(uint64_t *)(lVar3 + 0x48);
  uVar14 = *(uint64_t *)(lVar3 + 0x50);
  uVar15 = *(uint64_t *)(lVar3 + 0x58);
  *(uint64_t *)(lVar4 + 0x126b0) = *(uint64_t *)(lVar3 + 0x30);
  *(uint64_t *)(lVar4 + 0x126b8) = uVar11;
  *(uint64_t *)(lVar4 + 0x126c0) = uVar12;
  *(uint64_t *)(lVar4 + 0x126c8) = uVar13;
  *(uint64_t *)(lVar4 + 0x126d0) = uVar14;
  *(uint64_t *)(lVar4 + 0x126d8) = uVar15;
  *(byte *)(*(int64_t *)(param_1 + 200) + 0x126a0) = *(byte *)(system_main_module_state + 0x224) & 1;
  *(int8_t *)(*(int64_t *)(param_1 + 200) + 0x12670) = 1;
  LOCK();
  puVar1 = (int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x3a8) + 0x1060);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}
uint64_t function_19c560(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}
int64_t * function_19c5b0(int64_t *param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[1];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[1];
  param_1[1] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[2];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[2];
  param_1[2] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[3];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[3];
  param_1[3] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[4];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[4];
  param_1[4] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(char *)(param_1 + 5) = (char)param_2[5];
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address