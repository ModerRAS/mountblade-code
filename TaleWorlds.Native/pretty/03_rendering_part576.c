#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part576.c - 1 个函数
// 函数: void function_582ab0(int64_t param_1,float param_2)
void function_582ab0(int64_t param_1,float param_2)
{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int8_t uVar4;
  int iVar5;
  int64_t *plVar6;
  code *pcVar7;
  char cVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  uint64_t extraout_XMM0_Qb;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t stack_array_2a8 [32];
  code *pcStack_288;
  int32_t local_var_280;
  int32_t local_var_278;
  int8_t *plocal_var_270;
  int64_t lStack_268;
  int32_t local_var_260;
  uint64_t local_var_258;
  float fStack_250;
  int32_t local_var_24c;
  int32_t local_var_248;
  int8_t local_var_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  int32_t local_var_234;
  uint64_t local_var_230;
  uint64_t local_var_228;
  int32_t local_var_20c;
  uint64_t local_var_1f8;
  int32_t local_var_1f0;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int32_t local_var_1e0;
  int16_t local_var_1dc;
  int16_t local_var_1da;
  uint64_t local_var_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int32_t local_var_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  int8_t stack_array_1a8 [192];
  int32_t local_var_e8;
  uint64_t local_var_d8;
  local_var_1d8 = 0xfffffffffffffffe;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2a8;
  local_var_248 = 0;
  fVar16 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c) +
           *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
           *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4);
  fVar20 = param_2 * param_2 * 0.0001;
  fVar24 = 1.0;
  fVar18 = param_2 * 4.0;
  if (fVar16 <= fVar20) {
    *(uint64_t *)(param_1 + 0x9c) = 0;
    *(uint64_t *)(param_1 + 0xa4) = 0;
    *(int32_t *)(param_1 + 0xac) = 0;
  }
  else {
    fVar16 = SQRT(fVar16);
    fVar12 = 1.0 / fVar16;
    fVar15 = (fVar18 + *(float *)(param_1 + 0xac)) * fVar12;
    if (fVar18 <= fVar15) {
      fVar15 = fVar18;
    }
    fVar12 = fVar12 * param_2 * 0.01;
    if (fVar15 <= fVar12) {
      fVar15 = fVar12;
    }
    *(float *)(param_1 + 0xac) = fVar15 * fVar16;
    fVar15 = 1.0 - fVar15;
    fVar12 = fVar15 * *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x9c) = fVar12;
    fVar16 = fVar15 * *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa0) = fVar16;
    fVar15 = fVar15 * *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa4) = fVar15;
    *(float *)(param_1 + 0x78) = fVar12 * param_2 + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = fVar16 * param_2 + *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x80) = fVar15 * param_2 + *(float *)(param_1 + 0x80);
  }
  fVar16 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78) +
           *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c) +
           *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80);
  if (fVar16 <= fVar20) {
    *(uint64_t *)(param_1 + 0x78) = 0;
    *(uint64_t *)(param_1 + 0x80) = 0;
    *(int32_t *)(param_1 + 0x88) = 0;
  }
  else {
    fVar16 = SQRT(fVar16);
    fVar20 = 1.0 / fVar16;
    fVar15 = (fVar18 + *(float *)(param_1 + 0x88)) * fVar20;
    if (fVar15 <= fVar18) {
      fVar18 = fVar15;
    }
    fVar20 = fVar20 * param_2 * 0.01;
    if (fVar20 <= fVar18) {
      fVar20 = fVar18;
    }
    *(float *)(param_1 + 0x88) = fVar20 * fVar16;
    fVar20 = 1.0 - fVar20;
    *(float *)(param_1 + 0x78) = fVar20 * *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = fVar20 * *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x80) = fVar20 * *(float *)(param_1 + 0x80);
  }
  if (param_2 <= 0.0) goto LAB_180583b10;
  if (((*(float *)(param_1 + 0x18) != *(float *)(param_1 + 0x58)) ||
      (*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x5c))) ||
     (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x60))) {
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    fVar20 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x298) * 8) -
                    *(int64_t *)(param_1 + 0x290)) * 1e-05;
    fVar18 = (float)fmodf(&system_error_code,0x3ca3d70a);
    fVar16 = ((fVar20 - param_2) + 0.02) - fVar18;
    fVar18 = fVar20 - param_2;
    while (fVar15 = fVar16, fVar18 < fVar20) {
      fVar16 = fVar15;
      if (fVar20 < fVar15) {
        fVar16 = fVar20;
      }
      fVar16 = fVar16 - fVar18;
      *(float *)(param_1 + 0x58) = fVar16 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x58);
      *(float *)(param_1 + 0x5c) = fVar16 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x5c);
      *(float *)(param_1 + 0x60) = fVar16 * *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x60);
      if (fVar20 < fVar15) break;
      fVar18 = *(float *)(param_1 + 0x8c);
      fVar16 = *(float *)(param_1 + 0x90);
      fVar19 = *(float *)(param_1 + 0x94) - 0.19612;
      fVar13 = fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19;
      auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar12 = auVar17._0_4_;
      fVar12 = fVar12 * 0.5 * (3.0 - fVar13 * fVar12 * fVar12);
      fVar18 = fVar18 * fVar12;
      *(float *)(param_1 + 0x8c) = fVar18;
      fVar16 = fVar12 * fVar16;
      *(float *)(param_1 + 0x90) = fVar16;
      fVar19 = fVar12 * fVar19;
      *(float *)(param_1 + 0x94) = fVar19;
      fVar12 = fVar12 * fVar13;
      fVar12 = fVar12 - fVar12 * fVar12 * *(float *)(*(int64_t *)(param_1 + 0xf0) + 0xa4) * 0.02;
      if (0.9999 <= fVar18 * *(float *)(param_1 + 0xb0) + fVar16 * *(float *)(param_1 + 0xb4) +
                    fVar19 * *(float *)(param_1 + 0xb8)) {
        *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_1 + 0x8c);
        *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0x94);
      }
      else {
        fVar25 = 1.0 / (fVar12 * 0.002 + 1.0);
        fVar13 = 1.0 - fVar25;
        fStack_238 = fVar19 * fVar13 + *(float *)(param_1 + 0xb8) * fVar25;
        fStack_23c = fVar16 * fVar13 + *(float *)(param_1 + 0xb4) * fVar25;
        fStack_240 = fVar18 * fVar13 + *(float *)(param_1 + 0xb0) * fVar25;
        local_var_234 = 0x7f7fffff;
        *(float *)(param_1 + 0xb0) = fStack_240;
        *(float *)(param_1 + 0xb4) = fStack_23c;
        *(float *)(param_1 + 0xb8) = fStack_238;
        *(int32_t *)(param_1 + 0xbc) = 0x7f7fffff;
        fVar18 = *(float *)(param_1 + 0xb4);
        fVar16 = *(float *)(param_1 + 0xb0);
        fVar19 = *(float *)(param_1 + 0xb8);
        fVar13 = fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18;
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar25 = auVar17._0_4_;
        fVar13 = fVar25 * 0.5 * (3.0 - fVar13 * fVar25 * fVar25);
        *(float *)(param_1 + 0xb0) = fVar13 * fVar16;
        *(float *)(param_1 + 0xb4) = fVar13 * fVar18;
        *(float *)(param_1 + 0xb8) = fVar13 * fVar19;
      }
      *(float *)(param_1 + 0x8c) = fVar12 * *(float *)(param_1 + 0x8c);
      *(float *)(param_1 + 0x90) = fVar12 * *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x94) = fVar12 * *(float *)(param_1 + 0x94);
      fVar16 = fVar15 + 0.02;
      fVar18 = fVar15;
    }
  }
  else {
    function_585590();
  }
  function_588680(param_1,&fStack_240);
  fVar20 = fStack_238;
  fVar16 = fStack_23c;
  fVar18 = fStack_240;
  if ((*(char *)(param_1 + 200) == '\0') && (*(char *)(param_1 + 0x3d0) == '\x01')) {
    lVar11 = *(int64_t *)(param_1 + 0x10);
    fVar19 = *(float *)(lVar11 + 0x98d984) -
             (fStack_238 * 0.23 + *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60));
    fVar15 = *(float *)(lVar11 + 0x98d980) -
             (fStack_23c * 0.23 + *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c));
    fVar12 = *(float *)(lVar11 + 0x98d97c) -
             (*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78) + fStack_240 * 0.23);
    if ((fVar15 * fStack_23c + fVar12 * fStack_240 + fVar19 * fStack_238 < 0.0) &&
       ((*(int8_t *)(param_1 + 0x3d0) = 2,
        fVar15 * fVar15 + fVar12 * fVar12 + fVar19 * fVar19 < 400.0 &&
        (iVar5 = *(int *)(*(int64_t *)(param_1 + 0xf0) + 0xc4), iVar5 != -1)))) {
      fStack_1d0 = (float)((uint)fStack_1d0 & 0xffffff00);
      fStack_1b0 = 0.0;
      (**(code **)(render_system_data_config + 0x210))
                (*(int32_t *)(lVar11 + 0x98d928),*(int32_t *)(param_1 + 0xc),&fStack_1d0);
      pcStack_288 = SystemCore_MemoryManager;
      DataStructureManager(stack_array_1a8,0x30,4,function_1c2890);
      local_var_e8 = 0;
      plocal_var_270 = (int8_t *)0x0;
      if (0.0 < fStack_1b0) {
        function_1594d0(stack_array_1a8,&fStack_1d0);
        plocal_var_270 = stack_array_1a8;
      }
      local_var_280 = *(int32_t *)(param_1 + 0x2a0);
      fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
      local_var_258 = (int64_t *)
                   CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                            *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78));
      local_var_24c = 0x7f7fffff;
      lStack_268 = param_1 + 0xd0;
      local_var_260 = 0;
      local_var_278 = 0xffffffff;
      pcStack_288 = (code *)((uint64_t)pcStack_288 & 0xffffffffffffff00);
      function_4f83f0(*(uint64_t *)(param_1 + 0x10),iVar5,&local_var_258,1);
      SystemMemoryManager(stack_array_1a8,0x30,4,SystemCore_MemoryManager);
    }
  }
  if ((*(int64_t **)(param_1 + 0xd0) != (int64_t *)0x0) &&
     (cVar8 = (**(code **)(**(int64_t **)(param_1 + 0xd0) + 0xd8))(), cVar8 != '\0')) {
    fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
    local_var_258 = (int64_t *)
                 CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                          *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x58));
    local_var_24c = 0x7f7fffff;
    (**(code **)(**(int64_t **)(param_1 + 0xd0) + 0xa8))
              (*(int64_t **)(param_1 + 0xd0),&local_var_258);
  }
  if ((*(int64_t **)(param_1 + 0xd8) != (int64_t *)0x0) &&
     (cVar8 = (**(code **)(**(int64_t **)(param_1 + 0xd8) + 0xd8))(), cVar8 != '\0')) {
    fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
    local_var_258 = (int64_t *)
                 CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                          *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78));
    local_var_24c = 0x7f7fffff;
    (**(code **)(**(int64_t **)(param_1 + 0xd8) + 0xa8))
              (*(int64_t **)(param_1 + 0xd8),&local_var_258);
    plVar6 = *(int64_t **)(param_1 + 0xd8);
    pcVar7 = *(code **)(*plVar6 + 0xe8);
    if (*(char *)(param_1 + 0x3d2) == '\0') {
      local_var_230 = *(uint64_t *)(param_1 + 0x8c);
      local_var_228 = *(uint64_t *)(param_1 + 0x94);
    }
    else {
      (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
                (*(int64_t **)(param_1 + 0xe8),&local_var_230);
    }
    (*pcVar7)(plVar6,&local_var_230);
  }
  plVar6 = *(int64_t **)(param_1 + 0x100);
  local_var_258 = plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  local_var_248 = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if ((*(byte *)(plVar6 + 0x5d) & 0xb) != 0xb) {
    fVar12 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x5c);
    fVar19 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x58);
    fVar15 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x60);
    if (-1 < *(int *)(param_1 + 0x2a0)) {
      fVar24 = *(float *)(*(int64_t *)
                           ((int64_t)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30c0 +
                           *(int64_t *)(param_1 + 0x10)) + 0x1d0) * 3.0;
    }
    lVar11 = *(int64_t *)(param_1 + 0xf0);
    if (*(int *)(lVar11 + 0x30) < 1) {
LAB_1805834b2:
      fVar13 = 1.6;
    }
    else {
      if (((*(uint *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar11 + 0xd0)
                     ) >> 9 & 1) != 0) && (*(short *)(lVar11 + 8) < 1)) goto LAB_1805834b2;
      fVar13 = (*(float *)(lVar11 + 0x48) + *(float *)(lVar11 + 0x48)) *
               *(float *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x88 +
                         *(int64_t *)(lVar11 + 0xd0));
    }
    if ((fVar24 + fVar13) * (fVar24 + fVar13) <= fVar19 * fVar19 + fVar12 * fVar12 + fVar15 * fVar15
       ) {
      RenderingSystem_UpdateCamera(plVar6,1);
    }
  }
  function_5815f0(param_1,&local_var_230,param_1 + 0x58);
  fVar24 = fStack_240;
  fVar15 = (float)local_var_228;
  if (*(int *)(param_1 + 0x2a4) != -1) {
    fVar25 = (float)local_var_230 - *(float *)(param_1 + 0x58);
    fVar13 = local_var_230._4_4_ - *(float *)(param_1 + 0x5c);
    fVar19 = (float)local_var_228 - *(float *)(param_1 + 0x60);
    fVar12 = fVar13 * fVar16 + fVar25 * fVar18 + fVar19 * fVar20;
    fVar26 = (fVar25 - fVar12 * fVar18) + *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78);
    fVar23 = (fVar13 - fVar12 * fVar16) + *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x7c);
    fVar22 = (fVar19 - fVar12 * fVar20) + *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x80);
    lVar11 = *(int64_t *)(param_1 + 0x10);
    fVar19 = *(float *)(lVar11 + 0x98d97c) - fVar26;
    fVar25 = *(float *)(lVar11 + 0x98d980) - fVar23;
    fVar13 = *(float *)(lVar11 + 0x98d984) - fVar22;
    fVar18 = fVar25 * fVar25 + fVar19 * fVar19 + fVar13 * fVar13;
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar12 = auVar17._0_4_;
    fVar18 = fVar12 * 0.5 * (3.0 - fVar18 * fVar12 * fVar12);
    fVar21 = fVar18 * fVar13 * fVar16 - fVar18 * fVar25 * fVar20;
    fVar13 = fVar18 * fVar19 * fVar20 - fVar18 * fVar13 * fStack_240;
    fVar19 = fVar18 * fVar25 * fStack_240 - fVar18 * fVar19 * fVar16;
    fVar18 = fVar13 * fVar13 + fVar21 * fVar21 + fVar19 * fVar19;
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar12 = auVar17._0_4_;
    fVar18 = fVar12 * 0.5 * (3.0 - fVar18 * fVar12 * fVar12);
    fStack_240 = fVar18 * fVar21 * 0.04;
    fStack_23c = fVar18 * fVar13 * 0.04;
    fStack_238 = fVar18 * fVar19 * 0.04;
    local_var_258 = (int64_t *)CONCAT44(fVar23 - fStack_23c,fVar26 - fStack_240);
    fStack_250 = fVar22 - fStack_238;
    local_var_24c = 0x7f7fffff;
    fStack_240 = fVar26 + fStack_240;
    fStack_23c = fStack_23c + fVar23;
    fStack_238 = fStack_238 + fVar22;
    local_var_234 = 0x7f7fffff;
    pfVar1 = (float *)(*(int64_t *)(lVar11 + 0x18) + 0x8250);
    if (0.01 < *pfVar1 || *pfVar1 == 0.01) {
      function_2e5ad0(*(int64_t *)(lVar11 + 0x18) + 0x8228,*(int *)(param_1 + 0x2a4),&local_var_258,
                    &fStack_240);
    }
  }
  if ((system_status_flag != 1) && (system_status_flag != 4)) {
    if ((-100.0 < fVar15) && (fVar15 < 2521.0)) {
      uVar9 = function_1b4cd0(*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18));
      cVar8 = function_63e7e0(uVar9,&local_var_230);
      if (cVar8 != '\0') {
        function_5817b0(param_1,&fStack_1d0);
        lVar11 = param_1 + 0x3d4;
        uVar9 = *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18);
        uVar4 = *(int8_t *)(*(int64_t *)(param_1 + 0x10) + 0x87b3b0);
        fVar18 = (float)function_1a5620(uVar9,param_1 + 0x58,uVar4);
        if (fVar18 <= -100.0) {
          fVar18 = -100.0;
        }
        fVar15 = *(float *)(param_1 + 0x60);
        auVar17._0_8_ = function_1a5620(uVar9,param_1 + 0x68,uVar4);
        auVar17._8_8_ = extraout_XMM0_Qb;
        if (fVar15 <= fVar18) {
          if ((float)auVar17._0_8_ <= -100.0) {
            auVar14._4_12_ = auVar17._4_12_;
            auVar14._0_4_ = 0xc2c80000;
            auVar17._0_8_ = auVar14._0_8_;
          }
          if ((float)auVar17._0_8_ < *(float *)(param_1 + 0x70) ||
              (float)auVar17._0_8_ == *(float *)(param_1 + 0x70)) {
            fVar18 = (fVar18 - *(float *)(param_1 + 0x60)) / fVar20;
            fVar24 = fVar18 * fVar24 + *(float *)(param_1 + 0x58);
            fVar16 = fVar18 * fVar16 + *(float *)(param_1 + 0x5c);
            local_var_230 = CONCAT44(fVar16,fVar24);
            local_var_228 = CONCAT44(0x7f7fffff,fVar18 * fVar20 + *(float *)(param_1 + 0x60));
            fVar18 = (float)function_1a5620(uVar9,&local_var_230,uVar4);
            if (fVar18 <= -100.0) {
              fVar18 = -100.0;
            }
            local_var_1e4 = 0xffffffff;
            local_var_1e0 = 0xffffffff;
            local_var_1dc = 0xff;
            local_var_1f0 = 2;
            local_var_20c = 0x7f7fffff;
            local_var_1e8 = *(int32_t *)(*(int64_t *)(render_system_data_config + 0x20) + 100);
            local_var_1f8 = 0;
            lVar10 = (int64_t)*(int *)(param_1 + 0xbd4) * 0x40;
            pfVar1 = (float *)(lVar10 + lVar11);
            *pfVar1 = fVar24;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar18;
            pfVar1[3] = 3.4028235e+38;
            puVar2 = (uint64_t *)(lVar10 + 0x10 + lVar11);
            *puVar2 = 0;
            puVar2[1] = 0x3f800000;
            puVar3 = (int32_t *)(lVar10 + 0x20 + lVar11);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 2;
            puVar3[3] = 0x7149f2ca;
            puVar2 = (uint64_t *)(lVar10 + 0x30 + lVar11);
            *puVar2 = CONCAT44(0xffffffff,local_var_1e8);
            puVar2[1] = CONCAT26(local_var_1da,0xffffffffff);
            *(int *)(param_1 + 0xbd4) = *(int *)(param_1 + 0xbd4) + 1;
          }
        }
        function_57f420(param_1,&fStack_1d0,lVar11);
        if (-1 < *(int *)(param_1 + 0x2a0)) {
          fVar12 = fStack_1c0 - *(float *)(param_1 + 0x18);
          fVar18 = fStack_1bc - *(float *)(param_1 + 0x1c);
          fVar19 = fStack_1b8 - *(float *)(param_1 + 0x20);
          fVar20 = fStack_1c0 - fStack_1d0;
          fVar24 = fStack_1bc - fStack_1cc;
          fVar15 = fStack_1b8 - fStack_1c8;
          fVar16 = fVar24 * fVar24 + fVar20 * fVar20 + fVar15 * fVar15;
          if (fVar18 * fVar18 + fVar12 * fVar12 + fVar19 * fVar19 < fVar16) {
            auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar13 = auVar17._0_4_;
            fVar13 = fVar13 * 0.5 * (3.0 - fVar16 * fVar13 * fVar13);
            fVar18 = fVar18 * fVar24 * fVar13 + fVar12 * fVar20 * fVar13 + fVar19 * fVar15 * fVar13;
            if (fVar18 < fVar16 * fVar13) {
              fStack_1d0 = fStack_1c0 - fVar20 * fVar13 * fVar18;
              fStack_1cc = fStack_1bc - fVar24 * fVar13 * fVar18;
              fStack_1c8 = fStack_1b8 - fVar15 * fVar13 * fVar18;
              local_var_1c4 = 0x7f7fffff;
            }
          }
        }
        function_5800a0(param_1,&fStack_1d0,lVar11);
        lVar10 = (int64_t)*(int *)(param_1 + 0xbd4) * 0x40;
        function_587800(lVar11,lVar10 + lVar11,lVar10 >> 6,local_var_244);
        goto LAB_180583b10;
      }
    }
    local_var_1f8 = 0;
    local_var_1e8 = 0xffffffff;
    local_var_1e4 = 0xffffffff;
    local_var_1e0 = 0xffffffff;
    local_var_1dc = 0xff;
    local_var_1f0 = 7;
    lVar11 = (int64_t)*(int *)(param_1 + 0xbd4) * 0x40;
    puVar2 = (uint64_t *)(lVar11 + 0x3d4 + param_1);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (uint64_t *)(lVar11 + 0x3e4 + param_1);
    *puVar2 = 0;
    puVar2[1] = 0x3f800000;
    puVar3 = (int32_t *)(lVar11 + 0x3f4 + param_1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 7;
    puVar3[3] = 0x7149f2ca;
    puVar2 = (uint64_t *)(lVar11 + 0x404 + param_1);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = CONCAT26(local_var_1da,0xffffffffff);
    *(int *)(param_1 + 0xbd4) = *(int *)(param_1 + 0xbd4) + 1;
  }
LAB_180583b10:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_2a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address