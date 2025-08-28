#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part579_sub001_sub001.c - 5 个函数
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part579_sub001.c - 6 个函数
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part579.c - 6 个函数
// 函数: void function_585e40(int64_t param_1,int param_2,uint64_t *param_3)
void function_585e40(int64_t param_1,int param_2,uint64_t *param_3)
{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int32_t uVar8;
  uint64_t local_var_210;
  uint64_t local_var_208;
  int iStack_200;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  int32_t local_var_1c8;
  uint64_t local_var_1c0;
  int32_t local_var_1b8;
  int8_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int16_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  int32_t local_var_158;
  uint64_t local_var_154;
  int32_t local_var_14c;
  int32_t local_var_148;
  int16_t local_var_144;
  int32_t local_var_140;
  int16_t local_var_13c;
  int8_t local_var_13a;
  int32_t local_var_138;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int8_t local_var_118;
  int16_t local_var_117;
  int8_t local_var_115;
  int16_t local_var_114;
  int8_t local_var_112;
  int8_t local_var_111;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int iStack_104;
  int32_t local_var_100;
  int8_t local_var_fc;
  int8_t local_var_fb;
  int8_t local_var_fa;
  uint64_t local_var_f8;
  int8_t local_var_f0;
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
  uint64_t local_var_8c;
  uint64_t local_var_84;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  uint local_var_6c;
  uint local_var_68;
  uint local_var_64;
  int32_t local_var_60;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  iVar5 = 0;
  iVar7 = 0;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    local_var_210 = *(uint64_t *)(param_1 + 0x8c);
    local_var_208 = *(uint64_t *)(param_1 + 0x94);
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
              (*(int64_t **)(param_1 + 0xe8),&local_var_210);
  }
  if ((float)local_var_210 * (float)local_var_210 + local_var_210._4_4_ * local_var_210._4_4_ +
      (float)local_var_208 * (float)local_var_208 <= 16.0) {
    return;
  }
  local_var_1f8 = 0;
  local_var_1f0 = 0;
  local_var_1e8 = 0;
  local_var_1e0 = 0;
  local_var_1d8 = 0;
  local_var_1d0 = 0;
  local_var_1c8 = 0;
  local_var_1c0 = 0;
  local_var_1b8 = 0;
  local_var_1b4 = 0xff;
  local_var_1b0 = 0xffffffff;
  local_var_1ac = 0;
  local_var_1a8 = 0;
  local_var_1a0 = 0;
  local_var_198 = 0;
  local_var_190 = 0x3f800000;
  local_var_188 = 0;
  local_var_180 = 0x3f800000;
  local_var_178 = 0;
  local_var_170 = 0;
  local_var_168 = 0;
  local_var_160 = 0;
  local_var_158 = 0;
  local_var_154 = 1;
  local_var_144 = 0xff00;
  local_var_140 = 0;
  local_var_13c = 0;
  local_var_13a = 0;
  local_var_138 = 0;
  local_var_14c = 0x10;
  local_var_148 = *(int32_t *)(param_1 + 0x2a0);
  puVar2 = (uint64_t *)function_588680(param_1,0);
  local_var_190 = *puVar2;
  local_var_188 = puVar2[1];
  local_var_1a0 = *param_3;
  local_var_198 = param_3[1];
  local_var_144 = CONCAT11(local_var_144._1_1_,0xff);
  local_var_154 = CONCAT44(local_var_154._4_4_,1);
  local_var_1b4 = 0xff;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    local_var_1b4 = *(int8_t *)(*(int64_t *)(lVar3 + 0xf8) + 0x88);
  }
  local_var_1b0 = *(int32_t *)(param_1 + 0xc);
  local_var_1f8 = *(uint64_t *)(param_1 + 0x18);
  local_var_1f0 = *(uint64_t *)(param_1 + 0x20);
  local_var_1e8 = *(uint64_t *)(param_1 + 0x58);
  local_var_1e0 = *(uint64_t *)(param_1 + 0x60);
  local_var_1d8 = *(uint64_t *)(param_1 + 0x8c);
  local_var_1d0 = *(uint64_t *)(param_1 + 0x94);
  local_var_1c8 = *(int32_t *)
                ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(lVar3 + 0xd0));
  local_var_1c0 = *(uint64_t *)
                ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0));
  local_var_1b8 = *(int32_t *)
                ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x5c + *(int64_t *)(lVar3 + 0xd0));
  local_var_1ac = *(int32_t *)(lVar3 + 0xbc);
  local_var_1a8 = 1;
  local_var_140 = *(int32_t *)
                ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + *(int64_t *)(lVar3 + 0xd0) + 0x98);
  iStack_200 = 0;
  local_var_180 = local_var_190;
  local_var_178 = local_var_188;
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    iVar4 = *(int *)((int64_t)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30b8 +
                    *(int64_t *)(param_1 + 0x10));
    if ((iVar4 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar4);
    }
    uVar8 = 0;
    iStack_200 = iVar4;
  }
  iVar1 = iStack_200;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  iVar4 = iRam00000000000000f0;
  if (lVar3 != 0) {
    iVar4 = *(int *)(lVar3 + 0xf0);
    lVar6 = *(int64_t *)(lVar3 + 0xd0);
    if (*(int *)((int64_t)iVar4 * 0xa0 + 0x5c + lVar6) == 0x13) goto LAB_180586134;
  }
  iVar5 = 1;
  lVar6 = *(int64_t *)(lVar3 + 0xd0);
LAB_180586134:
  if (iVar5 == 0) {
    local_var_100 = *(int32_t *)((int64_t)iVar4 * 0xa0 + 0x9c + lVar6);
  }
  else {
    local_var_100 = *(int32_t *)((int64_t)iVar4 * 0xa0 + 0x98 + lVar6);
  }
  lVar3 = system_cache_buffer;
  SystemFunction_0001805345e0(&local_var_118);
  local_var_117 = 0;
  local_var_114 = 0x100;
  local_var_110 = 0;
  local_var_f8 = 0xffffffffffffffff;
  local_var_f0 = 0;
  local_var_ec = 0xffc00000;
  local_var_e8 = 0xffc00000;
  local_var_e4 = 0xffc00000;
  local_var_e0 = 0xffc00000;
  local_var_d4 = 0xffc00000;
  local_var_d0 = 0xffc00000;
  local_var_cc = 0x7fc00000;
  local_var_c8 = 0x7fc00000;
  local_var_c4 = 0x7fc00000;
  local_var_c0 = 0x7fc00000;
  local_var_7c = 0x7fc00000;
  local_var_78 = 0x7fc00000;
  local_var_74 = 0x7fc00000;
  local_var_70 = 0x7fc00000;
  local_var_118 = 0;
  local_var_115 = 1;
  local_var_112 = 0;
  local_var_111 = *(int8_t *)(param_1 + 0x3d1);
  local_var_10c = 1;
  local_var_108 = *(int32_t *)(param_1 + 0xc);
  local_var_fc = (int8_t)local_var_144;
  local_var_fa = *(int8_t *)(param_1 + 0x380);
  local_var_fb = 0xff;
  local_var_dc = *(int32_t *)(param_1 + 0x288);
  local_var_d8 = *(int32_t *)(param_1 + 0xc4);
  local_var_bc = 0x7fc00000;
  local_var_b8 = 0x7fc00000;
  local_var_b4 = 0x7fc00000;
  local_var_b0 = 0x7fc00000;
  local_var_ac = (int32_t)local_var_1a0;
  local_var_a8 = local_var_1a0._4_4_;
  local_var_a4 = (int32_t)local_var_198;
  local_var_a0 = local_var_198._4_4_;
  iStack_104 = iVar5;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    local_var_128 = *(int32_t *)(param_1 + 0x8c);
    local_var_124 = *(int32_t *)(param_1 + 0x90);
    local_var_120 = *(int32_t *)(param_1 + 0x94);
    local_var_11c = *(int32_t *)(param_1 + 0x98);
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
              (*(int64_t **)(param_1 + 0xe8),&local_var_128);
    lVar3 = system_cache_buffer;
  }
  local_var_8c = *(uint64_t *)(param_1 + 0x18);
  local_var_84 = *(uint64_t *)(param_1 + 0x20);
  local_var_64 = (uint)local_var_188 ^ 0x80000000;
  local_var_6c = (uint)local_var_190 ^ 0x80000000;
  local_var_68 = local_var_190._4_4_ ^ 0x80000000;
  local_var_60 = 0x7f7fffff;
  iVar5 = iVar7;
  local_var_9c = local_var_128;
  local_var_98 = local_var_124;
  local_var_94 = local_var_120;
  local_var_90 = local_var_11c;
  if (-1 < param_2) {
    iVar5 = *(int *)((int64_t)param_2 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x10));
    if ((iVar5 != 0) && (lVar3 != 0)) {
      (**(code **)(lVar3 + 0x30))(iVar5);
      lVar3 = system_cache_buffer;
    }
    uVar8 = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    iVar7 = *(int *)((int64_t)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30b8 +
                    *(int64_t *)(param_1 + 0x10));
    if ((iVar7 != 0) && (lVar3 != 0)) {
      (**(code **)(lVar3 + 0x30))(iVar7);
    }
    uVar8 = 0;
  }
  (**(code **)(render_system_data_memory + 0x208))
            (*(int32_t *)(*(int64_t *)(param_1 + 0x10) + 0x98d928),&local_var_118,&local_var_1f8,iVar5
             ,iVar7,(byte)(*(uint64_t *)
                            ((int64_t)*(int *)(*(int64_t *)(param_1 + 0xf0) + 0xf0) * 0xa0 + 0x50
                            + *(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0xd0)) >> 0xe) & 1,uVar8
            );
  if ((iVar7 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar7);
  }
  if ((iVar5 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar5);
  }
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_586470(int64_t param_1,uint64_t *param_2,int32_t param_3,int param_4,char param_5)
void function_586470(int64_t param_1,uint64_t *param_2,int32_t param_3,int param_4,char param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  float *pfVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint *puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  int8_t stack_array_378 [32];
  int64_t **pplStack_358;
  int32_t local_var_350;
  int32_t local_var_348;
  uint64_t local_var_340;
  float fStack_338;
  int32_t local_var_334;
  int32_t local_var_324;
  int32_t local_var_314;
  int32_t local_var_304;
  uint local_var_300;
  uint local_var_2fc;
  uint local_var_2f8;
  int32_t local_var_2f4;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  uint local_var_2cc;
  int64_t *plStack_2c8;
  int64_t *plStack_2c0;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int32_t local_var_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t local_var_258;
  int32_t local_var_254;
  int32_t local_var_250;
  int32_t local_var_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t local_var_23c;
  uint64_t local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  int32_t local_var_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  int32_t local_var_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  int32_t local_var_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  int32_t local_var_1e4;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  int8_t stack_array_198 [16];
  int8_t stack_array_188 [64];
  int8_t stack_array_148 [48];
  uint64_t local_var_118;
  uint64_t local_var_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint64_t local_var_f8;
  local_var_228 = 0xfffffffffffffffe;
  local_var_f8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_378;
  fVar1 = *(float *)(render_system_memory + 0x20);
  local_var_348 = param_3;
  if ((0 < (int)fVar1) || (((system_status_flag - 2U & 0xfffffffc) == 0 && (system_status_flag != 4)))) {
    local_var_238 = *param_2;
    local_var_230 = param_2[1];
    pfVar10 = (float *)function_588680(param_1,&fStack_278);
    fStack_338 = -pfVar10[2];
    fVar19 = -pfVar10[1];
    fVar20 = -*pfVar10;
    local_var_340 = (int64_t *)CONCAT44(fVar19,fVar20);
    local_var_334 = 0x7f7fffff;
    local_var_23c = 0x7f7fffff;
    local_var_258 = 0;
    local_var_254 = 0;
    local_var_250 = 0x3f800000;
    local_var_24c = 0;
    fStack_268 = fStack_338 * 0.0 - fVar19 * 1.0;
    fStack_264 = fVar20 * 1.0 - fStack_338 * 0.0;
    fStack_260 = fVar19 * 0.0 - fVar20 * 0.0;
    auVar17._0_4_ = fStack_260 * fStack_260 + fStack_264 * fStack_264 + fStack_268 * fStack_268;
    auVar17._4_8_ = SUB128(ZEXT412(0x3f800000) << 0x40,4);
    auVar17._12_4_ = 0;
    auVar18 = rsqrtss(auVar17,ZEXT416((uint)auVar17._0_4_));
    fVar19 = auVar18._0_4_;
    fVar19 = fVar19 * 0.5 * (3.0 - auVar17._0_4_ * fVar19 * fVar19);
    fStack_268 = fStack_268 * fVar19;
    fStack_264 = fStack_264 * fVar19;
    fStack_260 = fStack_260 * fVar19;
    fStack_248 = fStack_264 * 1.0 - fStack_260 * 0.0;
    fStack_244 = fStack_260 * 0.0 - fStack_268 * 1.0;
    fStack_240 = fStack_268 * 0.0 - fStack_264 * 0.0;
    lVar14 = (int64_t)param_4 * 0xa60;
    lVar4 = *(int64_t *)(param_1 + 0x10);
    lVar16 = *(int64_t *)(*(int64_t *)(lVar14 + 0x3778 + lVar4) + 0x8a8);
    puVar13 = (uint *)((int64_t)param_5 * 0x100 +
                      *(int64_t *)(*(int64_t *)(lVar14 + 0x36f8 + lVar4) + 0x18));
    do {
      LOCK();
      uVar12 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar12 & 1) != 0);
    local_var_2e8 = *(uint64_t *)(puVar13 + 1);
    local_var_2e0 = *(uint64_t *)(puVar13 + 3);
    fVar6 = (float)puVar13[5];
    fVar7 = (float)puVar13[6];
    fVar19 = (float)puVar13[7];
    local_var_2cc = puVar13[8];
    *puVar13 = 0;
    fStack_2d8 = fVar6;
    fStack_2d4 = fVar7;
    fStack_2d0 = fVar19;
    local_var_118 = local_var_2e8;
    local_var_110 = local_var_2e0;
    fStack_108 = fVar6;
    fStack_104 = fVar7;
    fStack_100 = fVar19;
    local_var_fc = local_var_2cc;
    SystemSecurityManager(&fStack_2a8,&local_var_2e8);
    fStack_218 = *(float *)(lVar16 + 0x98);
    fStack_270 = fVar19 * fStack_218 + *(float *)(lVar16 + 0xa8);
    fVar19 = *(float *)(lVar16 + 0x84);
    fVar20 = *(float *)(lVar16 + 0x74);
    fStack_274 = fVar6 * fVar20 + fVar7 * fVar19 + *(float *)(lVar16 + 0xa4);
    fVar2 = *(float *)(lVar16 + 0x80);
    fVar3 = *(float *)(lVar16 + 0x70);
    fStack_278 = fVar6 * fVar3 + fVar7 * fVar2 + *(float *)(lVar16 + 0xa0);
    local_var_2e0 = CONCAT44(0x7f7fffff,(int32_t)local_var_2e0);
    local_var_26c = 0x7f7fffff;
    local_var_1e4 = 0x7f7fffff;
    fStack_1f8 = fStack_280 * fStack_218;
    fStack_1fc = fStack_288 * fVar20 + fStack_284 * fVar19;
    fStack_200 = fStack_288 * fVar3 + fStack_284 * fVar2;
    local_var_304 = 0x7f7fffff;
    fStack_208 = fStack_290 * fStack_218;
    fStack_20c = fStack_298 * fVar20 + fStack_294 * fVar19;
    fStack_210 = fStack_298 * fVar3 + fStack_294 * fVar2;
    local_var_314 = 0x7f7fffff;
    fStack_218 = fStack_2a0 * fStack_218;
    fStack_21c = fStack_2a8 * fVar20 + fStack_2a4 * fVar19;
    fStack_220 = fStack_2a8 * fVar3 + fStack_2a4 * fVar2;
    local_var_324 = 0x7f7fffff;
    local_var_214 = 0x7f7fffff;
    local_var_204 = 0x7f7fffff;
    local_var_1f4 = 0x7f7fffff;
    fStack_1f0 = fStack_278;
    fStack_1ec = fStack_274;
    fStack_1e8 = fStack_270;
    puVar11 = (uint64_t *)
              function_535610(&fStack_220,stack_array_148,
                            *(int32_t *)(*(int64_t *)(lVar14 + 0x3778 + lVar4) + 0x8c0));
    local_var_1d8 = *puVar11;
    local_var_1d0 = puVar11[1];
    local_var_1c8 = puVar11[2];
    local_var_1c0 = puVar11[3];
    local_var_1b8 = puVar11[4];
    local_var_1b0 = puVar11[5];
    fStack_1a8 = fStack_278;
    fStack_1a4 = fStack_274;
    fStack_1a0 = fStack_270;
    local_var_19c = local_var_26c;
    function_2f5d10(&local_var_1d8,stack_array_188,&fStack_268);
    local_var_350 = CONCAT31(local_var_350._1_3_,1);
    pplStack_358 = (int64_t **)CONCAT71(pplStack_358._1_7_,param_5);
    function_4ebef0(*(uint64_t *)(param_1 + 0x10),local_var_348,stack_array_188,param_4);
    if (0 < (int)fVar1) {
      plStack_2c8 = (int64_t *)0x0;
      plStack_2c0 = (int64_t *)0x0;
      local_var_2b8 = 0;
      local_var_2b0 = 3;
      local_var_340 = *(int64_t **)(*(int64_t *)(lVar14 + 0x3778 + lVar4) + 0x8a8);
      if (local_var_340 != (int64_t *)0x0) {
        (**(code **)(*local_var_340 + 0x28))();
      }
      function_0b87c0(&plStack_2c8,&local_var_340);
      if (local_var_340 != (int64_t *)0x0) {
        (**(code **)(*local_var_340 + 0x38))();
      }
      uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18);
      uVar12 = *(uint *)(lVar14 + 0x37e8 + lVar4);
      uVar12 = uVar12 << 0xd ^ uVar12;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      *(uint *)(lVar14 + 0x37e8 + lVar4) = uVar12;
      puVar13 = (uint *)function_588680(param_1,stack_array_198);
      local_var_2f8 = puVar13[2] ^ 0x80000000;
      local_var_2fc = puVar13[1] ^ 0x80000000;
      local_var_300 = *puVar13 ^ 0x80000000;
      local_var_2f4 = 0x7f7fffff;
      local_var_350 = 0x3e800000;
      pplStack_358 = &plStack_2c8;
      function_19fc10(uVar5,param_2,&local_var_300,(uVar12 - 1 & 7) + 2);
      plVar9 = plStack_2c0;
      plVar8 = plStack_2c8;
      for (plVar15 = plStack_2c8; plVar15 != plVar9; plVar15 = plVar15 + 1) {
        if ((int64_t *)*plVar15 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar15 + 0x38))();
        }
      }
      if (plVar8 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar8);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_f8 ^ (uint64_t)stack_array_378);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_586ae0(int64_t param_1,float *param_2)
void function_586ae0(int64_t param_1,float *param_2)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  int8_t stack_array_478 [32];
  int8_t local_var_458;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  int32_t local_var_43c;
  uint64_t local_var_438;
  float fStack_430;
  int32_t local_var_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  int32_t local_var_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t local_var_40c;
  int32_t local_var_3fc;
  int32_t local_var_3ec;
  int32_t local_var_3dc;
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  uint64_t local_var_358;
  uint local_var_348;
  uint local_var_344;
  uint local_var_340;
  uint local_var_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  uint local_var_32c;
  uint local_var_328;
  uint local_var_324;
  uint local_var_320;
  uint local_var_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  uint local_var_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int32_t local_var_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  int32_t local_var_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  int32_t local_var_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  int32_t local_var_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  int32_t local_var_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  int32_t local_var_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  int32_t local_var_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  int32_t local_var_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  int32_t local_var_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int32_t local_var_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t local_var_25c;
  int8_t stack_array_258 [16];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t local_var_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t local_var_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t local_var_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  uint local_var_20c;
  int8_t stack_array_208 [64];
  int64_t alStack_1c8 [17];
  int64_t alStack_140 [5];
  uint local_var_118;
  uint local_var_114;
  uint local_var_110;
  uint local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint local_var_f8;
  uint local_var_f4;
  uint local_var_f0;
  uint local_var_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_dc;
  uint64_t local_var_d8;
  local_var_358 = 0xfffffffffffffffe;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_478;
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  local_var_3d8 = *(uint64_t *)param_2;
  local_var_3d0 = *(uint64_t *)(param_2 + 2);
  fStack_3c8 = param_2[4];
  fStack_3c4 = param_2[5];
  fStack_3c0 = param_2[6];
  fStack_3bc = param_2[7];
  fStack_3b8 = param_2[8];
  pfVar11 = *(float **)(*(int64_t *)(param_1 + 0x6d8) + 0x860);
  puVar4 = *(uint **)(*(int64_t *)(param_1 + 0x658) + 0x18);
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_348 = puVar4[1];
  local_var_344 = puVar4[2];
  local_var_340 = puVar4[3];
  local_var_33c = puVar4[4];
  fVar14 = (float)puVar4[5];
  fVar13 = (float)puVar4[6];
  fVar8 = (float)puVar4[7];
  uVar1 = puVar4[8];
  *puVar4 = 0;
  fStack_338 = fVar14;
  fStack_334 = fVar13;
  fStack_330 = fVar8;
  local_var_32c = uVar1;
  local_var_118 = local_var_348;
  local_var_114 = local_var_344;
  local_var_110 = local_var_340;
  local_var_10c = local_var_33c;
  fStack_108 = fVar14;
  fStack_104 = fVar13;
  fStack_100 = fVar8;
  local_var_fc = uVar1;
  SystemSecurityManager(&fStack_288,&local_var_348);
  fStack_248 = fStack_288;
  fStack_244 = fStack_284;
  fStack_240 = fStack_280;
  local_var_23c = local_var_27c;
  fStack_238 = fStack_278;
  fStack_234 = fStack_274;
  fStack_230 = fStack_270;
  local_var_22c = local_var_26c;
  fStack_228 = fStack_268;
  fStack_224 = fStack_264;
  fStack_220 = fStack_260;
  local_var_21c = local_var_25c;
  fStack_420 = *(float *)(lVar3 + 0x98);
  fStack_430 = fVar8 * fStack_420 + *(float *)(lVar3 + 0xa8);
  fVar12 = *(float *)(lVar3 + 0x84);
  fVar18 = *(float *)(lVar3 + 0x74);
  fStack_2d4 = fVar14 * fVar18 + fVar13 * fVar12 + *(float *)(lVar3 + 0xa4);
  fVar17 = *(float *)(lVar3 + 0x80);
  fVar15 = *(float *)(lVar3 + 0x70);
  fStack_2d8 = fVar14 * fVar15 + fVar13 * fVar17 + *(float *)(lVar3 + 0xa0);
  local_var_438 = (int64_t *)CONCAT44(fStack_2d4,fStack_2d8);
  local_var_42c = 0x7f7fffff;
  local_var_2cc = 0x7f7fffff;
  fStack_440 = fStack_260 * fStack_420;
  fStack_444 = fStack_268 * fVar18 + fStack_264 * fVar12;
  fStack_448 = fStack_268 * fVar15 + fStack_264 * fVar17;
  fStack_410 = fStack_270 * fStack_420;
  fStack_414 = fStack_278 * fVar18 + fStack_274 * fVar12;
  fStack_418 = fStack_278 * fVar15 + fStack_274 * fVar17;
  fStack_420 = fStack_280 * fStack_420;
  fStack_424 = fStack_288 * fVar18 + fStack_284 * fVar12;
  fStack_428 = fStack_288 * fVar15 + fStack_284 * fVar17;
  local_var_41c = 0x7f7fffff;
  local_var_40c = 0x7f7fffff;
  local_var_43c = 0x7f7fffff;
  local_var_2fc = 0x7f7fffff;
  local_var_2ec = 0x7f7fffff;
  local_var_2dc = 0x7f7fffff;
  fStack_308 = fStack_428;
  fStack_304 = fStack_424;
  fStack_300 = fStack_420;
  fStack_2f8 = fStack_418;
  fStack_2f4 = fStack_414;
  fStack_2f0 = fStack_410;
  fStack_2e8 = fStack_448;
  fStack_2e4 = fStack_444;
  fStack_2e0 = fStack_440;
  fStack_2d0 = fStack_430;
  fStack_218 = fVar14;
  fStack_214 = fVar13;
  fStack_210 = fVar8;
  local_var_20c = uVar1;
  fVar12 = (float)SystemFunction_000180285a90(&fStack_308,0x3f800000);
  function_5067a0(&local_var_3d8,&fStack_308);
  fStack_3b8 = param_2[8] / fVar12;
  fVar12 = (float)local_var_3d0;
  if (fStack_3c0 <= (float)local_var_3d0) {
    fVar12 = fStack_3c0;
  }
  fVar18 = local_var_3d8._4_4_;
  if (fStack_3c4 <= local_var_3d8._4_4_) {
    fVar18 = fStack_3c4;
  }
  fVar17 = (float)local_var_3d8;
  if (fStack_3c8 <= (float)local_var_3d8) {
    fVar17 = fStack_3c8;
  }
  fVar15 = (float)local_var_3d0;
  if ((float)local_var_3d0 <= fStack_3c0) {
    fVar15 = fStack_3c0;
  }
  fVar14 = local_var_3d8._4_4_;
  if (local_var_3d8._4_4_ <= fStack_3c4) {
    fVar14 = fStack_3c4;
  }
  fVar13 = (float)local_var_3d8;
  if ((float)local_var_3d8 <= fStack_3c8) {
    fVar13 = fStack_3c8;
  }
  if ((((fVar13 + fStack_3b8 < *pfVar11) ||
       (pfVar11[4] <= fVar17 - fStack_3b8 && fVar17 - fStack_3b8 != pfVar11[4])) ||
      (fVar14 + fStack_3b8 < pfVar11[1])) ||
     (((pfVar11[5] <= fVar18 - fStack_3b8 && fVar18 - fStack_3b8 != pfVar11[5] ||
       (fVar15 + fStack_3b8 < pfVar11[2])) ||
      (pfVar11[6] <= fVar12 - fStack_3b8 && fVar12 - fStack_3b8 != pfVar11[6])))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((*(uint *)(param_1 + 0x56c) & 0x4000) != 0) &&
      (lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0), lVar5 != 0)) &&
     ((0 < *(int *)(lVar5 + 0x30) &&
      (((uVar6 = *(uint64_t *)
                  ((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar5 + 0xd0)),
        (uVar6 >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))) && ((uVar6 >> 0x1c & 1) != 0)))))) {
    function_50aea0(param_1);
    uVar7 = *(uint64_t *)(lVar5 + 0x40);
    function_508f50(param_1,stack_array_208,1);
    iVar2 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
    if ((iVar2 == -1) || (*(int *)((int64_t)iVar2 * 0x68 + 0x58 + render_system_memory) != 2)) {
      uVar16 = 0x3d4ccccd;
    }
    else {
      uVar16 = *(int32_t *)(param_1 + 0x3e0);
    }
    function_4efc30(alStack_1c8,uVar7);
    function_6593b0(alStack_1c8,uVar16);
    local_var_458 = 0;
    cVar10 = function_658a60(alStack_1c8,stack_array_208,param_2,stack_array_258);
    if (cVar10 != '\0') {
      local_var_438 = alStack_140;
      if (alStack_140[0] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_438 = alStack_1c8;
      if (alStack_1c8[0] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      goto LAB_180587319;
    }
    local_var_438 = alStack_140;
    if (alStack_140[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    local_var_438 = alStack_1c8;
    if (alStack_1c8[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (bVar9) {
    function_50aea0(param_1);
    puVar4 = *(uint **)(*(int64_t *)(param_1 + 0x658) + 0x18);
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_328 = puVar4[1];
    local_var_324 = puVar4[2];
    local_var_320 = puVar4[3];
    local_var_31c = puVar4[4];
    fVar14 = (float)puVar4[5];
    fVar13 = (float)puVar4[6];
    fVar8 = (float)puVar4[7];
    local_var_30c = puVar4[8];
    *puVar4 = 0;
    fStack_318 = fVar14;
    fStack_314 = fVar13;
    fStack_310 = fVar8;
    local_var_f8 = local_var_328;
    local_var_f4 = local_var_324;
    local_var_f0 = local_var_320;
    local_var_ec = local_var_31c;
    fStack_e8 = fVar14;
    fStack_e4 = fVar13;
    fStack_e0 = fVar8;
    local_var_dc = local_var_30c;
    SystemSecurityManager(&fStack_388,&local_var_328);
    fVar12 = *(float *)(lVar3 + 0x80);
    fVar18 = *(float *)(lVar3 + 0x70);
    fStack_298 = fVar14 * fVar18 + fVar13 * fVar12 + *(float *)(lVar3 + 0xa0);
    fVar17 = *(float *)(lVar3 + 0x84);
    fVar15 = *(float *)(lVar3 + 0x74);
    fStack_294 = fVar14 * fVar15 + fVar13 * fVar17 + *(float *)(lVar3 + 0xa4);
    fStack_2c0 = *(float *)(lVar3 + 0x98);
    fStack_290 = fVar8 * fStack_2c0 + *(float *)(lVar3 + 0xa8);
    local_var_43c = 0x7f7fffff;
    local_var_28c = 0x7f7fffff;
    fStack_2a8 = fStack_368 * fVar18 + fStack_364 * fVar12;
    fStack_2a4 = fStack_368 * fVar15 + fStack_364 * fVar17;
    fStack_2a0 = fStack_360 * fStack_2c0;
    local_var_3dc = 0x7f7fffff;
    fStack_2b8 = fStack_378 * fVar18 + fStack_374 * fVar12;
    fStack_2b4 = fStack_378 * fVar15 + fStack_374 * fVar17;
    fStack_2b0 = fStack_370 * fStack_2c0;
    local_var_3ec = 0x7f7fffff;
    fStack_2c8 = fStack_388 * fVar18 + fStack_384 * fVar12;
    fStack_2c4 = fStack_388 * fVar15 + fStack_384 * fVar17;
    fStack_2c0 = fStack_2c0 * fStack_380;
    local_var_3fc = 0x7f7fffff;
    local_var_2bc = 0x7f7fffff;
    local_var_2ac = 0x7f7fffff;
    local_var_29c = 0x7f7fffff;
    fStack_3b0 = *param_2;
    fStack_3ac = param_2[1];
    fStack_3a8 = param_2[2];
    fStack_3a4 = param_2[3];
    fStack_3a0 = param_2[4];
    fStack_39c = param_2[5];
    fStack_398 = param_2[6];
    fStack_394 = param_2[7];
    fStack_390 = param_2[8];
    function_5067a0(&fStack_3b0,&fStack_2c8);
    SystemFunction_000180285a90(&fStack_2c8,0x3f800000);
  }
LAB_180587319:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_478);
}
// 函数: void function_587380(int64_t param_1,int64_t param_2)
void function_587380(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0xb) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
// WARNING: Could not recover jumptable at 0x0001805873b7. Too many branches
// WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0xb);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,0xb,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}