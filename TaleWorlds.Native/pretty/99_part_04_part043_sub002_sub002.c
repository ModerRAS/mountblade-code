#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_04_part043_sub002_sub002.c - 1 个函数
// 函数: void function_2aecf0(int64_t param_1,float param_2,int64_t param_3,uint64_t *param_4,float param_5
void function_2aecf0(int64_t param_1,float param_2,int64_t param_3,uint64_t *param_4,float param_5
                  )
{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  bool bVar9;
  uint uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint uVar13;
  uint uVar14;
  int32_t uVar15;
  uint uVar16;
  uint uVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  short sVar23;
  int64_t lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  int8_t auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  float fStack_220;
  uint64_t local_var_218;
  int aiStack_210 [2];
  uint64_t local_var_208;
  int32_t local_var_200;
  float fStack_1fc;
  float fStack_1f8;
  uint stack_array_1f0 [2];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t local_var_1dc;
  uint stack_array_1d8 [2];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int32_t local_var_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  int32_t local_var_1b4;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int64_t lStack_168;
  int64_t lStack_160;
  int64_t lStack_158;
  uint64_t local_var_150;
  int8_t stack_array_148 [16];
  int8_t stack_array_138 [16];
  int8_t stack_array_128 [16];
  int8_t stack_array_118 [48];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  local_var_150 = 0xfffffffffffffffe;
  local_var_200 = 0;
  lVar24 = *(int64_t *)(param_1 + 0x18);
  bVar9 = *(float *)(lVar24 + 0x84) == 0.0;
  fVar27 = *(float *)(lVar24 + 0x6cc);
  stack_array_1d8[0] = *(uint *)(lVar24 + 0x68);
  uVar14 = stack_array_1d8[0] & 1;
  uVar10 = stack_array_1d8[0] & 1;
  uVar13 = stack_array_1d8[0] & 1;
  fVar55 = (float)(stack_array_1d8[0] >> 9 & 0xffffff01);
  uVar25 = stack_array_1d8[0] >> 1;
  lStack_168 = (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88;
  local_var_238 = 0;
  fStack_220 = fVar55;
  if ((stack_array_1d8[0] >> 0x15 & 1) == 0) {
    local_var_1a8 = *param_4;
    local_var_1a0 = param_4[1];
    local_var_198 = param_4[2];
    local_var_190 = param_4[3];
    local_var_188 = param_4[4];
    local_var_180 = param_4[5];
    local_var_178._0_4_ = *(float *)(param_4 + 6);
    local_var_178._4_4_ = *(float *)((int64_t)param_4 + 0x34);
    local_var_170._0_4_ = *(float *)(param_4 + 7);
    local_var_170._4_4_ = *(float *)((int64_t)param_4 + 0x3c);
    function_2bfe50(&local_var_1a8);
    lVar24 = *(int64_t *)(param_1 + 0x18);
    fVar28 = *(float *)(lVar24 + 0xfd8);
    fVar54 = *(float *)(lVar24 + 0xfdc);
    fVar56 = *(float *)(lVar24 + 0xfd4);
    fVar53 = *(float *)(lVar24 + 0xfe8);
    fVar3 = *(float *)(lVar24 + 0xfec);
    fVar52 = *(float *)(lVar24 + 0xfe4);
    fVar49 = fVar52 * (float)local_var_1a8;
    fVar50 = fVar52 * local_var_1a8._4_4_;
    fVar51 = fVar52 * (float)local_var_1a0;
    fVar52 = fVar52 * local_var_1a0._4_4_;
    fVar38 = *(float *)(lVar24 + 0xff8);
    fVar32 = fVar38 * (float)local_var_198;
    fVar34 = fVar38 * local_var_198._4_4_;
    fVar36 = fVar38 * (float)local_var_190;
    fVar38 = fVar38 * local_var_190._4_4_;
    fVar4 = *(float *)(lVar24 + 0xffc);
    fVar48 = *(float *)(lVar24 + 0xff4);
    fVar45 = fVar48 * (float)local_var_1a8;
    fVar46 = fVar48 * local_var_1a8._4_4_;
    fVar47 = fVar48 * (float)local_var_1a0;
    fVar48 = fVar48 * local_var_1a0._4_4_;
    fVar39 = *(float *)(lVar24 + 0x1008);
    fVar33 = fVar39 * (float)local_var_198;
    fVar35 = fVar39 * local_var_198._4_4_;
    fVar37 = fVar39 * (float)local_var_190;
    fVar39 = fVar39 * local_var_190._4_4_;
    fVar31 = *(float *)(lVar24 + 0x100c);
    fVar26 = fVar31 * (float)local_var_188;
    fVar29 = fVar31 * local_var_188._4_4_;
    fVar30 = fVar31 * (float)local_var_180;
    fVar31 = fVar31 * local_var_180._4_4_;
    fVar44 = *(float *)(lVar24 + 0x1004);
    fVar40 = fVar44 * (float)local_var_1a8;
    fVar42 = fVar44 * local_var_1a8._4_4_;
    fVar43 = fVar44 * (float)local_var_1a0;
    fVar44 = fVar44 * local_var_1a0._4_4_;
    local_var_1a8 = CONCAT44(fVar56 * local_var_1a8._4_4_ + fVar28 * local_var_198._4_4_ +
                          fVar54 * local_var_188._4_4_,
                          fVar56 * (float)local_var_1a8 + fVar28 * (float)local_var_198 +
                          fVar54 * (float)local_var_188);
    local_var_1a0 = CONCAT44(fVar56 * local_var_1a0._4_4_ + fVar28 * local_var_190._4_4_ +
                          fVar54 * local_var_180._4_4_,
                          fVar56 * (float)local_var_1a0 + fVar28 * (float)local_var_190 +
                          fVar54 * (float)local_var_180);
    local_var_198 = CONCAT44(fVar50 + fVar53 * local_var_198._4_4_ + fVar3 * local_var_188._4_4_,
                          fVar49 + fVar53 * (float)local_var_198 + fVar3 * (float)local_var_188);
    local_var_190 = CONCAT44(fVar52 + fVar53 * local_var_190._4_4_ + fVar3 * local_var_180._4_4_,
                          fVar51 + fVar53 * (float)local_var_190 + fVar3 * (float)local_var_180);
    local_var_188 = CONCAT44(fVar46 + fVar34 + fVar4 * local_var_188._4_4_,
                          fVar45 + fVar32 + fVar4 * (float)local_var_188);
    local_var_180 = CONCAT44(fVar48 + fVar38 + fVar4 * local_var_180._4_4_,
                          fVar47 + fVar36 + fVar4 * (float)local_var_180);
    local_var_178 = CONCAT44(fVar42 + fVar35 + fVar29 + local_var_178._4_4_,
                          fVar40 + fVar33 + fVar26 + (float)local_var_178);
    local_var_170 = CONCAT44(fVar44 + fVar39 + fVar31 + local_var_170._4_4_,
                          fVar43 + fVar37 + fVar30 + (float)local_var_170);
  }
  else {
    local_var_1a8 = *(uint64_t *)(lVar24 + 0xfd4);
    local_var_1a0 = *(uint64_t *)(lVar24 + 0xfdc);
    local_var_198 = *(uint64_t *)(lVar24 + 0xfe4);
    local_var_190 = *(uint64_t *)(lVar24 + 0xfec);
    local_var_188 = *(uint64_t *)(lVar24 + 0xff4);
    local_var_180 = *(uint64_t *)(lVar24 + 0xffc);
    local_var_178 = *(uint64_t *)(lVar24 + 0x1004);
    local_var_170 = *(uint64_t *)(lVar24 + 0x100c);
  }
  lVar24 = *(int64_t *)(param_1 + 0x20);
  uVar7 = param_4[1];
  *(uint64_t *)(lVar24 + 0xb0) = *param_4;
  *(uint64_t *)(lVar24 + 0xb8) = uVar7;
  uVar7 = param_4[3];
  *(uint64_t *)(lVar24 + 0xc0) = param_4[2];
  *(uint64_t *)(lVar24 + 200) = uVar7;
  uVar7 = param_4[5];
  *(uint64_t *)(lVar24 + 0xd0) = param_4[4];
  *(uint64_t *)(lVar24 + 0xd8) = uVar7;
  uVar15 = *(int32_t *)((int64_t)param_4 + 0x34);
  uVar11 = *(int32_t *)(param_4 + 7);
  uVar12 = *(int32_t *)((int64_t)param_4 + 0x3c);
  *(int32_t *)(lVar24 + 0xe0) = *(int32_t *)(param_4 + 6);
  *(int32_t *)(lVar24 + 0xe4) = uVar15;
  *(int32_t *)(lVar24 + 0xe8) = uVar11;
  *(int32_t *)(lVar24 + 0xec) = uVar12;
  if ((uVar25 & 1) == 0) {
    if (bVar9) {
      param_5 = fVar27 * param_5;
      if (uVar14 == 0) {
        if (param_5 <= 0.0) {
          if (*(char *)(param_1 + 1) != '\0') {
            *(int8_t *)(param_1 + 1) = 0;
            function_2b0770(param_1);
          }
        }
        else if (*(char *)(param_1 + 1) == '\0') {
          *(int8_t *)(param_1 + 1) = 1;
          function_2b0670(param_1);
        }
      }
    }
    else {
      lVar24 = *(int64_t *)(param_1 + 0x18);
      fVar54 = *(float *)(param_1 + 0x14);
      fVar28 = *(float *)(param_1 + 4);
      if (fVar54 + *(float *)(lVar24 + 0x84) < fVar28) {
        if (*(char *)(param_1 + 1) != '\0') {
          *(int8_t *)(param_1 + 1) = 0;
          function_2b0770(param_1);
        }
        SystemFunction_0001802b05b0(param_1);
        return;
      }
      if (*(char *)(param_1 + 1) == '\0') {
        *(int8_t *)(param_1 + 1) = 1;
        SystemFunction_0001802b0640(param_1);
        function_2b0670(param_1);
        lVar24 = *(int64_t *)(param_1 + 0x18);
        fVar28 = *(float *)(param_1 + 4);
        fVar54 = *(float *)(param_1 + 0x14);
      }
      fVar28 = (float)SystemFunction_0001802b6b90(lVar24 + 0x6d0,
                                          (fVar28 - fVar54) / *(float *)(lVar24 + 0x84));
      param_5 = fVar27 * fVar28 * param_5;
    }
  }
  else {
    lVar24 = *(int64_t *)(param_1 + 0x18);
    uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
    param_5 = ((((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0) *
               *(float *)(lVar24 + 0x6c8) + *(float *)(lVar24 + 0x6cc)) * param_5;
    if (1.0 <= param_5) {
      SystemFunction_0001802b0640(param_1);
    }
  }
  if (param_5 != 0.0) {
    plVar18 = (int64_t *)function_0f8fc0(*(uint64_t *)(param_1 + 0x18),&local_var_218);
    lVar24 = *plVar18;
    lStack_160 = lVar24;
    DataCacheManager(&local_var_218);
    lVar22 = *(int64_t *)(param_1 + 0x20);
    aiStack_210[0] = *(int *)(*(int64_t *)(param_1 + 0x18) + 0x108);
    if ((*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x10) != *(int64_t *)(lVar22 + 0x120)) ||
       (*(int64_t *)(lVar22 + 0x118) != lVar24)) {
      *(int64_t *)(lVar22 + 0x118) = lVar24;
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x120) =
           *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x10);
      SystemCore_PointerManager(*(int64_t *)(param_1 + 0x20) + 0x128,0);
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x138) =
           *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x130);
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x60) =
           *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58);
      if (lVar24 != 0) {
        plVar18 = (int64_t *)function_2759e0(lVar24,stack_array_1f0,1);
        lVar22 = *(int64_t *)(param_1 + 0x20);
        local_var_208 = (int64_t *)*plVar18;
        *plVar18 = 0;
        SystemFunction_0001800865f0(&local_var_208,lVar22 + 0x128);
        DataCacheManager(&local_var_208);
        DataCacheManager(stack_array_1f0);
        uVar19 = (uint64_t)(int)(*(int64_t *)(lVar24 + 0x40) - *(int64_t *)(lVar24 + 0x38) >> 4);
        local_var_218 = uVar19;
        if (0 < (int64_t)uVar19) {
          lVar24 = 0;
          do {
            if (*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x120) != 0) {
              uVar7 = *(uint64_t *)
                       (lVar24 + *(int64_t *)
                                  (*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x128) + 0x38));
              local_var_208 = *(int64_t **)(*(int64_t *)(param_1 + 0x18) + 0x10);
              if (local_var_208 != (int64_t *)0x0) {
                (**(code **)(*local_var_208 + 0x28))();
              }
              UltraHighFreq_SecurityValidator1(uVar7,&local_var_208);
              DataCacheManager(&local_var_208);
            }
            lVar24 = lVar24 + 0x10;
            uVar19 = uVar19 - 1;
            fVar55 = fStack_220;
          } while (uVar19 != 0);
        }
        SystemFunction_0001802b6fd0(*(int64_t *)(param_1 + 0x20) + 0x130,local_var_218);
      }
    }
    fStack_1c8 = *(float *)(param_4 + 7) - *(float *)(param_3 + 0x38);
    fStack_1cc = *(float *)((int64_t)param_4 + 0x34) - *(float *)(param_3 + 0x34);
    fStack_1d0 = *(float *)(param_4 + 6) - *(float *)(param_3 + 0x30);
    local_var_1c4 = 0x7f7fffff;
    function_194940(param_3,stack_array_118,param_4);
    fStack_1c0 = 1.0 / param_2;
    fStack_1b8 = fStack_1c8 * fStack_1c0;
    fStack_1bc = fStack_1cc * fStack_1c0;
    fStack_1c0 = fStack_1c0 * fStack_1d0;
    local_var_1b4 = 0x7f7fffff;
    fVar27 = (float)SystemFunction_000180084f70(&fStack_1c0);
    fStack_220 = 0.0;
    if ((*(byte *)(*(int64_t *)(param_1 + 0x18) + 0x68) & 0x20) != 0) {
      fStack_220 = fVar27 * *(float *)(*(int64_t *)(param_1 + 0x18) + 0x90);
    }
    fVar28 = (float)SystemFunction_000180084f70(&fStack_1d0);
    if (uVar10 == 0) {
      if ((uVar25 & 1) == 0) {
        if ((SUB41(fVar55,0) == '\0') ||
           (pfVar1 = (float *)(*(int64_t *)(param_1 + 0x18) + 0xd0),
           fVar27 < *pfVar1 || fVar27 == *pfVar1)) {
          fVar27 = param_5 * param_2 + *(float *)(param_1 + 8);
          local_var_238 = (uint)fVar27;
          *(float *)(param_1 + 8) = fVar27 - (float)(int)local_var_238;
          uVar14 = local_var_238;
        }
        else {
          local_var_238 = 0;
          uVar14 = 0;
        }
      }
      else {
        local_var_238 = (int)param_5;
        SystemFunction_0001802b05b0(param_1);
        uVar14 = (int)param_5;
      }
    }
    else {
      pfVar1 = (float *)(*(int64_t *)(param_1 + 0x18) + 0xd0);
      if (fVar27 < *pfVar1 || fVar27 == *pfVar1) {
        uVar14 = local_var_238;
        if (*(char *)(param_1 + 1) == '\x01') {
          *(int8_t *)(param_1 + 1) = 0;
          function_2b0770(param_1);
          uVar14 = local_var_238;
        }
      }
      else {
        if (*(char *)(param_1 + 1) == '\0') {
          *(int8_t *)(param_1 + 1) = 1;
          function_2b0670(param_1);
        }
        fVar27 = fVar28 * param_5 + *(float *)(param_1 + 8);
        local_var_238 = (uint)fVar27;
        *(float *)(param_1 + 8) = fVar27 - (float)(int)local_var_238;
        uVar14 = local_var_238;
      }
    }
    iVar5 = *(int *)(*(int64_t *)(param_1 + 0x18) + 0x1074);
    if (iVar5 != 0) {
      uVar25 = iVar5 - (int)((*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x60) -
                             *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58)) / 0x70);
      uVar10 = uVar14;
      if ((int)uVar25 < (int)uVar14) {
        uVar10 = uVar25;
      }
      uVar14 = 0;
      local_var_238 = 0;
      if (0 < (int)uVar10) {
        uVar14 = uVar10;
        local_var_238 = uVar10;
      }
    }
    lVar24 = *(int64_t *)(param_1 + 0x50);
    local_var_208 = (int64_t *)
                 (CONCAT44(local_var_208._4_4_,*(int32_t *)(lVar24 + 0x430)) ^ 0x80000000);
    fStack_1f8 = -*(float *)(lVar24 + 0x42c);
    fStack_1fc = -*(float *)(lVar24 + 0x428);
    plVar18 = (int64_t *)function_0f8fc0(*(int64_t *)(param_1 + 0x18),stack_array_1f0);
    if (*plVar18 == 0) {
      uVar19 = 0;
    }
    else {
      plVar18 = (int64_t *)function_0f8fc0(*(uint64_t *)(param_1 + 0x18),&local_var_218);
      uVar19 = *(int64_t *)(*plVar18 + 0x40) - *(int64_t *)(*plVar18 + 0x38) >> 4;
      local_var_200 = 0;
      DataCacheManager(&local_var_218);
    }
    DataCacheManager(stack_array_1f0);
    uVar10 = stack_array_1d8[0];
    iVar5 = aiStack_210[0];
    lStack_158 = (*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x60) -
                 *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58)) / 0x70;
    if (0 < (int)uVar14) {
      stack_array_1f0[0] = stack_array_1d8[0] & 0x10;
      uVar25 = stack_array_1d8[0] & 0x10000000;
      local_var_218 = (uint64_t)uVar14;
      do {
        function_2b8b50(*(int64_t *)(param_1 + 0x20) + 0x58);
        lVar24 = *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x60);
        if (lStack_168 != 0) {
          uVar15 = SystemFunction_0001802b09a0(param_1);
          *(int32_t *)(lVar24 + -0x18) = uVar15;
        }
        plVar18 = (int64_t *)function_0f8fc0(*(uint64_t *)(param_1 + 0x18));
        lVar22 = *plVar18;
        DataCacheManager(stack_array_1d8);
        if (lVar22 == 0) {
          *(int16_t *)(lVar24 + -0x40) = 0xffff;
        }
        else {
          if ((*(uint *)(*(int64_t *)(param_1 + 0x18) + 0x68) & 0x40000) == 0) {
            sVar23 = (short)((uint64_t)*(uint *)(param_1 + 0xc) % (uVar19 & 0xffffffff));
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) + 1;
          }
          else {
            uVar20 = SystemFunction_0001800ba030(param_1 + 0x60);
            sVar23 = (short)((uVar20 & 0xffffffff) % (uVar19 & 0xffffffff));
          }
          *(short *)(lVar24 + -0x40) = sVar23;
          piVar2 = (int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x130) +
                          (int64_t)sVar23 * 0xc);
          *piVar2 = *piVar2 + 1;
        }
        if (stack_array_1f0[0] == 0) {
          if ((uVar10 >> 0xb & 1) != 0) {
            uVar14 = *(uint *)(*(int64_t *)(param_1 + 0x18) + 0xfcc);
            uVar20 = SystemFunction_0001800ba030(param_1 + 0x60);
            *(short *)(lVar24 + -0x3e) = (short)((uVar20 & 0xffffffff) % (uint64_t)uVar14);
          }
        }
        else {
          lVar22 = *(int64_t *)(param_1 + 0x18);
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          *(short *)(lVar24 + -0x3e) =
               (short)(int)(((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xbd8) +
                           *(float *)(lVar22 + 0xbdc));
        }
        iVar6 = *(int *)(*(int64_t *)(param_1 + 0x18) + 0xbec);
        if (iVar6 == 1) {
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar56 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar54 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar28 = (float)uVar14 * 2.3283064e-10 - 0.5;
          fVar27 = fVar54 * fVar54 + fVar56 * fVar56 + fVar28 * fVar28;
          auVar41 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar55 = auVar41._0_4_;
          fVar27 = fVar55 * 0.5 * (3.0 - fVar27 * fVar55 * fVar55);
          lVar22 = *(int64_t *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 4) == 0) {
            uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
            fVar55 = SQRT((float)uVar14 * 2.3283064e-10);
            lVar22 = *(int64_t *)(param_1 + 0x18);
            local_var_228._0_4_ = *(float *)(lVar22 + 0xf7c);
            local_var_230._0_4_ = fVar55 * fVar27 * fVar56 * (float)local_var_228;
            local_var_230._4_4_ = fVar55 * fVar27 * fVar54 * (float)local_var_228;
            local_var_228._0_4_ = fVar55 * fVar27 * fVar28 * (float)local_var_228;
          }
          else {
            fVar55 = *(float *)(lVar22 + 0xf8c) / *(float *)(lVar22 + 0xf7c);
            fVar55 = fVar55 * fVar55;
            uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
            lVar22 = *(int64_t *)(param_1 + 0x18);
            local_var_228._0_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10 * (1.0 - fVar55) + fVar55) *
                 *(float *)(lVar22 + 0xf7c);
            local_var_230._0_4_ = (float)local_var_228 * fVar27 * fVar56;
            local_var_230._4_4_ = (float)local_var_228 * fVar27 * fVar54;
            local_var_228._0_4_ = (float)local_var_228 * fVar27 * fVar28;
          }
        }
        else if (iVar6 == 2) {
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar54 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar28 = (float)uVar14 * 2.3283064e-10 - 0.5;
          fVar27 = fVar28 * fVar28 + fVar54 * fVar54;
          auVar41 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar55 = auVar41._0_4_;
          fVar27 = fVar55 * 0.5 * (3.0 - fVar27 * fVar55 * fVar55);
          fVar54 = fVar27 * fVar54;
          fVar27 = fVar27 * fVar28;
          lVar22 = *(int64_t *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 4) == 0) {
            uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
            lVar22 = *(int64_t *)(param_1 + 0x18);
            local_var_230._0_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10) * fVar54 * *(float *)(lVar22 + 0xf7c);
            local_var_230._4_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10) * fVar27 * *(float *)(lVar22 + 0xf7c);
          }
          else {
            fVar55 = *(float *)(lVar22 + 0xf8c) / *(float *)(lVar22 + 0xf7c);
            fVar55 = fVar55 * fVar55;
            uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
            lVar22 = *(int64_t *)(param_1 + 0x18);
            local_var_230._4_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10 * (1.0 - fVar55) + fVar55) *
                 *(float *)(lVar22 + 0xf7c);
            local_var_230._0_4_ = local_var_230._4_4_ * fVar54;
            local_var_230._4_4_ = local_var_230._4_4_ * fVar27;
          }
          local_var_228._0_4_ = 0.0;
        }
        else {
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          uVar16 = SystemFunction_0001800ba030(param_1 + 0x60);
          uVar17 = SystemFunction_0001800ba030(param_1 + 0x60);
          lVar22 = *(int64_t *)(param_1 + 0x18);
          local_var_230._0_4_ = ((float)uVar14 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf70);
          local_var_230._4_4_ = ((float)uVar16 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf74);
          local_var_228._0_4_ = ((float)uVar17 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf78);
        }
        local_var_228._4_4_ = 0x7f7fffff;
        if (uVar13 != 0) {
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar27 = (float)uVar14 * 2.3283064e-10;
          local_var_230._0_4_ = (float)local_var_230 + fVar27 * fStack_e8;
          local_var_230._4_4_ = local_var_230._4_4_ + fVar27 * fStack_e4;
          local_var_228._0_4_ = (float)local_var_228 + fVar27 * fStack_e0;
          lVar22 = *(int64_t *)(param_1 + 0x18);
        }
        if (iVar5 == 1) {
          fVar27 = (float)cosf(*(float *)(lVar22 + 200) * 0.008726646);
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar27 = (float)uVar14 * 2.3283064e-10 * (1.0 - fVar27) + fVar27;
          SystemFunction_0001800ba030(1.0 - fVar27 * fVar27);
// WARNING: Subroutine does not return
          RenderingSystem_Renderer0();
        }
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        local_var_248 = CONCAT44(local_var_248._4_4_,
                              ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x780) +
                              *(float *)(lVar22 + 0x784));
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        local_var_248 = CONCAT44(((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x838) +
                              *(float *)(lVar22 + 0x83c),(float)local_var_248);
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        local_var_240 = CONCAT44(local_var_240._4_4_,
                              ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x8f0) +
                              *(float *)(lVar22 + 0x8f4));
        if ((*(byte *)(*(int64_t *)(param_1 + 0x18) + 0x68) & 4) != 0) {
          puVar21 = (uint64_t *)SystemFunction_0001801503a0(&local_var_1a8,stack_array_148,&local_var_248);
          local_var_248 = *puVar21;
          local_var_240 = puVar21[1];
        }
        puVar21 = (uint64_t *)SystemFunction_0001800f8f10(&local_var_1a8,stack_array_138,&local_var_230);
        local_var_230 = *puVar21;
        local_var_228 = puVar21[1];
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        fVar27 = ((float)uVar14 * 8.127323e-12 - 0.017453292) * *(float *)(lVar22 + 0x9a8) +
                 *(float *)(lVar22 + 0x9ac) * 0.017453292;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        if (((*(byte *)(lVar22 + 0x21) & 2) == 0) && (uVar25 == 0)) {
          fVar55 = (float)local_var_240;
          fVar28 = local_var_248._4_4_;
          fVar54 = (float)local_var_248;
        }
        else {
          fStack_1e8 = (float)local_var_230 - (float)local_var_178;
          fStack_1e4 = local_var_230._4_4_ - local_var_178._4_4_;
          fStack_1e0 = (float)local_var_228 - (float)local_var_170;
          local_var_1dc = 0x7f7fffff;
          UtilitiesSystem_CryptoHandler(&fStack_1e8);
          lVar22 = *(int64_t *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 2) == 0) {
            fVar55 = (float)local_var_240;
            fVar28 = local_var_248._4_4_;
            fVar54 = (float)local_var_248;
          }
          else {
            uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
            fVar55 = ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xbe0) +
                     *(float *)(lVar22 + 0xbe4);
            fVar54 = (float)local_var_248 + fVar55 * fStack_1e8;
            fVar28 = local_var_248._4_4_ + fVar55 * fStack_1e4;
            local_var_248 = CONCAT44(fVar28,fVar54);
            fVar55 = (float)local_var_240 + fVar55 * fStack_1e0;
            local_var_240 = CONCAT44(local_var_240._4_4_,fVar55);
            lVar22 = *(int64_t *)(param_1 + 0x18);
          }
          if (uVar25 != 0) {
            fVar56 = 1.0 - ABS(fStack_1f8 * fStack_1e4 + fStack_1fc * fStack_1e8 +
                               (float)local_var_208 * fStack_1e0);
            if (fStack_1fc * fStack_1e4 - fStack_1f8 * fStack_1e8 <= 0.0) {
              fVar27 = -(fVar56 * fVar27);
            }
            else {
              fVar27 = fVar27 * fVar56;
            }
          }
        }
        if ((iVar5 != 1) && (*(float *)(lVar22 + 0x98) != 0.0)) {
          fVar56 = fVar28 * fVar28 + fVar54 * fVar54 + fVar55 * fVar55;
          auVar41 = rsqrtss(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
          fVar53 = auVar41._0_4_;
          fVar56 = fVar53 * 0.5 * (3.0 - fVar56 * fVar53 * fVar53);
          local_var_248 = CONCAT44(fVar28 * fVar56 * *(float *)(lVar22 + 0x98),
                                fVar54 * fVar56 * *(float *)(lVar22 + 0x98));
          local_var_240 = CONCAT44((int)((uint64_t)local_var_240 >> 0x20),
                                fVar55 * fVar56 * *(float *)(lVar22 + 0x98));
        }
        *(int32_t *)(lVar24 + -0x4c) = 0;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        fVar55 = ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x4a8) +
                 *(float *)(lVar22 + 0x4ac);
        if (fVar55 <= 0.0) {
          fVar55 = 0.0;
        }
        *(float *)(lVar24 + -0x50) = fVar55;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x48) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x560) +
             *(float *)(lVar22 + 0x564) + fStack_220;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x28) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x338) +
             *(float *)(lVar22 + 0x33c);
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x30) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xa60) +
             *(float *)(lVar22 + 0xa64);
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -100) =
             ((float)uVar14 * 8.127323e-12 - 0.017453292) * *(float *)(lVar22 + 0xbd0) +
             *(float *)(lVar22 + 0xbd4) * 0.017453292;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x24) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x110) +
             *(float *)(lVar22 + 0x114);
        if (!bVar9) {
          fVar28 = (*(float *)(param_1 + 4) - *(float *)(param_1 + 0x14)) /
                   *(float *)(*(int64_t *)(param_1 + 0x18) + 0x84);
          fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x4b0,fVar28);
          *(float *)(lVar24 + -0x50) = fVar55 * *(float *)(lVar24 + -0x50);
          fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x568,fVar28);
          *(float *)(lVar24 + -0x48) = fVar55 * *(float *)(lVar24 + -0x48);
          if (iVar5 == 1) {
            fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x288,fVar28);
            local_var_248 = CONCAT44(local_var_248._4_4_ * fVar55,(float)local_var_248 * fVar55);
            local_var_240 = CONCAT44(local_var_240._4_4_,(float)local_var_240 * fVar55);
          }
          else {
            fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x788,fVar28);
            local_var_248._0_4_ = (float)local_var_248 * fVar55;
            fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x840,fVar28);
            local_var_248 = CONCAT44(local_var_248._4_4_ * fVar55,(float)local_var_248);
            fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x8f8,fVar28);
            local_var_240 = CONCAT44(local_var_240._4_4_,(float)local_var_240 * fVar55);
          }
          fVar55 = (float)SystemFunction_0001802b6b90(*(int64_t *)(param_1 + 0x18) + 0x9b0,fVar28);
          fVar27 = fVar27 * fVar55;
        }
        lVar22 = *(int64_t *)(param_1 + 0x18);
        fVar55 = *(float *)(lVar22 + 0x94);
        fVar28 = fStack_1c0 * fVar55 + (float)local_var_248;
        local_var_248._4_4_ = fStack_1bc * fVar55 + local_var_248._4_4_;
        local_var_248 = CONCAT44(local_var_248._4_4_,fVar28);
        fVar55 = fVar55 * fStack_1b8 + (float)local_var_240;
        local_var_240 = CONCAT44(local_var_240._4_4_,fVar55);
        if ((iVar5 != 1) && (0.0 < *(float *)(lVar22 + 0xfc0))) {
          fVar53 = fVar28 * fVar28 + local_var_248._4_4_ * local_var_248._4_4_ + fVar55 * fVar55;
          auVar41 = rsqrtss(ZEXT416((uint)fVar53),ZEXT416((uint)fVar53));
          fVar54 = auVar41._0_4_;
          fVar56 = fVar54 * 0.5 * (3.0 - fVar53 * fVar54 * fVar54);
          fVar54 = fVar56 * fVar53;
          if (*(float *)(lVar22 + 0xfc0) <= fVar56 * fVar53) {
            fVar54 = *(float *)(lVar22 + 0xfc0);
          }
          local_var_248 = CONCAT44(fVar56 * local_var_248._4_4_ * fVar54,fVar54 * fVar56 * fVar28);
          local_var_240 = CONCAT44(local_var_240._4_4_,fVar56 * fVar55 * fVar54);
        }
        *(float *)(lVar24 + -0x70) = (float)local_var_230;
        *(float *)(lVar24 + -0x6c) = local_var_230._4_4_;
        *(float *)(lVar24 + -0x68) = (float)local_var_228;
        lVar22 = *(int64_t *)(param_1 + 0x18);
        if ((*(uint *)(lVar22 + 0x68) & 0x100) != 0) {
          lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + 0x2908);
          if ((lVar8 != 0) && (*(char *)(*(int64_t *)(param_1 + 0x50) + 0x2960) != '\0')) {
            fVar55 = (float)function_3a56a0(lVar8,lVar24 + -0x70,0);
            *(float *)(lVar24 + -0x68) = fVar55 + *(float *)(lVar24 + -0x48);
            lVar22 = *(int64_t *)(param_1 + 0x18);
          }
        }
        if (*(int *)(lVar22 + 0x10c) == 0) {
          *(int32_t *)(lVar24 + -0x2c) = 0xffffffff;
        }
        else {
          if (((*(uint *)(lVar22 + 0x68) & 0x10000) != 0) &&
             (lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + 0x60b80), lVar8 != 0)) {
            *(uint *)(lVar24 + -4) =
                 (int)((*(float *)(lVar24 + -0x70) / *(float *)(lVar8 + 0x20)) * 65535.0) << 0x10 |
                 (int)((*(float *)(lVar24 + -0x6c) / *(float *)(lVar8 + 0x24)) * 65535.0) & 0xffffU;
            lVar22 = *(int64_t *)(param_1 + 0x18);
          }
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          lVar22 = SystemFunction_0001802bfbb0(lVar22 + 0xbf0,stack_array_128,(float)uVar14 * 2.3283064e-10);
          SystemFunction_00018018c0e0(aiStack_210,*(int32_t *)(lVar22 + 0xc));
          *(int *)(lVar24 + -0x2c) = aiStack_210[0];
        }
        *(int32_t *)(lVar24 + -0x10) = *(int32_t *)(*(int64_t *)(param_1 + 0x18) + 0xfb0);
        *(int32_t *)(lVar24 + -0xc) = *(int32_t *)(*(int64_t *)(param_1 + 0x18) + 0xfb4);
        *(int32_t *)(lVar24 + -8) = *(int32_t *)(*(int64_t *)(param_1 + 0x18) + 0xfb8);
        if (((*(int *)(*(int64_t *)(param_1 + 0x18) + 0xbe8) == 0) || (lStack_160 != 0)) &&
           ((uVar10 >> 0x13 & 1) == 0)) {
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar53 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar56 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          uVar14 = SystemFunction_0001800ba030(param_1 + 0x60);
          fVar54 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          fVar55 = fVar56 * fVar56 + fVar53 * fVar53 + fVar54 * fVar54;
          auVar41 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
          fVar28 = auVar41._0_4_;
          fVar55 = fVar28 * 0.5 * (3.0 - fVar55 * fVar28 * fVar28);
          *(float *)(lVar24 + -0x3c) = fVar55 * fVar53;
          *(float *)(lVar24 + -0x38) = fVar55 * fVar56;
          *(float *)(lVar24 + -0x34) = fVar55 * fVar54;
        }
        *(float *)(lVar24 + -0x60) = *(float *)(lVar24 + -0x70) - (float)local_var_248 * 0.016666668;
        *(float *)(lVar24 + -0x5c) = *(float *)(lVar24 + -0x6c) - local_var_248._4_4_ * 0.016666668;
        *(float *)(lVar24 + -0x58) = *(float *)(lVar24 + -0x68) - (float)local_var_240 * 0.016666668;
        *(float *)(lVar24 + -0x54) = *(float *)(lVar24 + -100) - fVar27 * 0.016666668;
        local_var_218 = local_var_218 - 1;
      } while (local_var_218 != 0);
      if (0 < (int)local_var_238) {
        function_2b07c0(param_1,(int64_t)(int)lStack_158 * 0x70 +
                              *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58),local_var_238);
      }
    }
  }
  plVar18 = *(int64_t **)(param_1 + 0x58);
  if (plVar18 != (int64_t *)0x0) {
    (**(code **)(*plVar18 + 0xa8))(plVar18,&local_var_178);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address