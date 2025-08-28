#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part052.c - 5 个函数
// 函数: void NetworkSystem_ad200(int64_t *param_1)
void NetworkSystem_ad200(int64_t *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t stack_array_d48 [32];
  int64_t lStack_d28;
  float *pfStack_d20;
  float *pfStack_d18;
  float *pfStack_d10;
  float fStack_d08;
  float fStack_d04;
  float afStack_d00 [5];
  int32_t local_var_cec;
  float fStack_ce8;
  float fStack_ce4;
  float fStack_ce0;
  int32_t local_var_cdc;
  float fStack_cd8;
  float fStack_cd4;
  float fStack_cd0;
  int32_t local_var_ccc;
  float fStack_cc8;
  int8_t local_var_cb8;
  char cStack_cb7;
  int64_t lStack_b0;
  uint64_t local_var_a8;
  local_var_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d48;
  lStack_b0 = *param_1;
  lVar6 = param_1[1];
  local_var_cb8 = 0;
  if ((*(float *)(lVar6 + 0xf0) <= -1e+30) || (-1e+30 < *(float *)(lVar6 + 0xb0))) {
    if (((*(int *)(lStack_b0 + 0x10) < 0) ||
        (((*(int *)(lVar6 + 0x10) < 0 || (*(int64_t *)(lStack_b0 + 0x6d8) == 0)) ||
         (*(char *)(*(int64_t *)(lStack_b0 + 0x6d8) + 0x8be) == '\0')))) ||
       ((*(int64_t *)(lVar6 + 0x658) == 0 || (*(char *)(lVar6 + 0x100) == -1)))) {
      *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) & 0xdf;
    }
    else {
      bVar5 = *(byte *)((int64_t)param_1 + 0x41);
      *(byte *)((int64_t)param_1 + 0x41) = bVar5 & 0xfd;
      lVar7 = *(int64_t *)(*(int64_t *)(lStack_b0 + 0x6d8) + 0x8a8);
      if (lVar6 == 0) {
        fVar14 = 0.15;
        afStack_d00[0] = 0.0;
        fStack_d08 = 0.1;
      }
      else {
        pfStack_d10 = &fStack_d08;
        pfStack_d18 = &fStack_d04;
        pfStack_d20 = afStack_d00;
        lStack_d28 = CONCAT71(lStack_d28._1_7_,1);
        NetworkSystem_2fc60(lVar6,~(bVar5 >> 3) & 1,0,0);
        fVar14 = fStack_d04;
      }
      fVar1 = *(float *)(lVar6 + 0xf0);
      fVar2 = *(float *)(lVar6 + 0xf4);
      fVar3 = *(float *)(lVar6 + 0xe0);
      fVar4 = *(float *)(lVar6 + 0xe4);
      local_var_cec = 0x7f7fffff;
      fVar13 = *(float *)(lVar6 + 0xe8) * afStack_d00[0] + *(float *)(lVar6 + 0xf8);
      fVar12 = *(float *)(lVar6 + 0xe8) * fVar14 + *(float *)(lVar6 + 0xf8);
      fVar11 = fVar13;
      if (fVar13 <= fVar12) {
        fVar11 = fVar12;
      }
      fVar10 = fVar13;
      if (fVar12 <= fVar13) {
        fVar10 = fVar12;
      }
      NetworkSystem_afe90(&local_var_cb8,fVar10 - fStack_d08,fVar11 + fStack_d08);
      local_var_cdc = 0x7f7fffff;
      local_var_ccc = local_var_cec;
      fStack_ce8 = fVar3 * fVar14 + fVar1;
      fStack_ce4 = fVar4 * fVar14 + fVar2;
      fStack_ce0 = fVar12;
      fStack_cd8 = fVar3 * afStack_d00[0] + fVar1;
      fStack_cd4 = fVar4 * afStack_d00[0] + fVar2;
      fStack_cd0 = fVar13;
      NetworkSystem_353a0(&fStack_ce8,lVar7 + 0x70);
      cVar9 = '\0';
      fStack_cc8 = fStack_d08 / *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8c0);
      if ('\0' < cStack_cb7) {
        pfVar8 = (float *)(param_1 + 0xe);
        do {
          if (*(char *)pfVar8 != '\x02') {
            pfStack_d20 = (float *)CONCAT44(pfStack_d20._4_4_,fVar14);
            lStack_d28 = lVar6 + 0x28;
            pfStack_d18 = pfVar8;
            NetworkSystem_abd60(param_1,&local_var_cb8,&fStack_ce8,cVar9);
          }
          cVar9 = cVar9 + '\x01';
          pfVar8 = (float *)((int64_t)pfVar8 + 1);
        } while (cVar9 < cStack_cb7);
      }
    }
  }
  NetworkSystem_ad560(param_1,&local_var_cb8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_a8 ^ (uint64_t)stack_array_d48);
}
// 函数: void NetworkSystem_ad2c7(int64_t param_1,uint64_t param_2)
void NetworkSystem_ad2c7(int64_t param_1,uint64_t param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int64_t lVar6;
  int64_t in_RAX;
  byte bVar7;
  int64_t *plVar8;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  char cVar9;
  int64_t unaff_R14;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float local_var_48;
  int32_t local_buffer_5c;
  float local_var_60;
  float fStack0000000000000064;
  float local_var_68;
  int32_t local_buffer_6c;
  float local_var_70;
  float fStack0000000000000074;
  float local_var_78;
  int32_t local_buffer_7c;
  bVar7 = (byte)(param_2 & 0xfffffffffffffffd);
  *(byte *)((int64_t)unaff_RSI + 0x41) = bVar7;
  lVar6 = *(int64_t *)(*(int64_t *)(in_RAX + 0x6d8) + 0x8a8);
  if (param_1 == 0) {
    fStack0000000000000044 = 0.15;
    local_var_48 = 0.0;
    fStack0000000000000040 = 0.1;
  }
  else {
    NetworkSystem_2fc60(param_1,CONCAT71((int7)((param_2 & 0xfffffffffffffffd) >> 8),~(bVar7 >> 3)) &
                          0xffffffffffffff01,0,0,1);
  }
  fVar1 = *(float *)(unaff_R14 + 200);
  fVar2 = *(float *)(unaff_R14 + 0xcc);
  fVar3 = *(float *)(unaff_R14 + 0xb8);
  fVar4 = *(float *)(unaff_R14 + 0xbc);
  local_buffer_5c = 0x7f7fffff;
  fVar14 = *(float *)(unaff_R14 + 0xc0) * local_var_48 + *(float *)(unaff_R14 + 0xd0);
  fVar13 = *(float *)(unaff_R14 + 0xc0) * fStack0000000000000044 + *(float *)(unaff_R14 + 0xd0);
  fVar12 = fVar14;
  if (fVar14 <= fVar13) {
    fVar12 = fVar13;
  }
  fVar11 = fVar14;
  if (fVar13 <= fVar14) {
    fVar11 = fVar13;
  }
  NetworkSystem_afe90(unaff_RBP + -0x70,fVar11 - fStack0000000000000040,fVar12 + fStack0000000000000040);
  local_buffer_6c = 0x7f7fffff;
  local_buffer_7c = local_buffer_5c;
  local_var_60 = fVar3 * fStack0000000000000044 + fVar1;
  fStack0000000000000064 = fVar4 * fStack0000000000000044 + fVar2;
  local_var_68 = fVar13;
  local_var_70 = fVar3 * local_var_48 + fVar1;
  fStack0000000000000074 = fVar4 * local_var_48 + fVar2;
  local_var_78 = fVar14;
  uVar10 = NetworkSystem_353a0(&local_buffer_00000060,lVar6 + 0x70);
  cVar9 = '\0';
  cVar5 = *(char *)(unaff_RBP + -0x6f);
  *(float *)(unaff_RBP + -0x80) =
       fStack0000000000000040 / *(float *)(*(int64_t *)(*unaff_RSI + 0x6d8) + 0x8c0);
  if ('\0' < cVar5) {
    plVar8 = unaff_RSI + 0xe;
    do {
      if ((char)*plVar8 != '\x02') {
        uVar10 = NetworkSystem_abd60(uVar10,unaff_RBP + -0x70,&local_buffer_00000060,cVar9);
      }
      cVar9 = cVar9 + '\x01';
      plVar8 = (int64_t *)((int64_t)plVar8 + 1);
    } while (cVar9 < cVar5);
  }
  NetworkSystem_ad560(uVar10,unaff_RBP + -0x70);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xba0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_ad4d6(void)
void NetworkSystem_ad4d6(void)
{
  char *pcVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  char unaff_DIL;
  char unaff_R15B;
  pcVar1 = (char *)(unaff_RSI + 0x70);
  do {
    if (*pcVar1 != '\x02') {
      NetworkSystem_abd60();
    }
    unaff_DIL = unaff_DIL + '\x01';
    pcVar1 = pcVar1 + 1;
  } while (unaff_DIL < unaff_R15B);
  NetworkSystem_ad560();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xba0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_ad560(int64_t *param_1,char *param_2)
void NetworkSystem_ad560(int64_t *param_1,char *param_2)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  int8_t stack_array_2c8 [32];
  float *pfStack_2a8;
  float *pfStack_2a0;
  int32_t local_var_298;
  int64_t *plStack_290;
  uint64_t local_var_288;
  int32_t local_var_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t local_var_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t local_var_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t local_var_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t local_var_22c;
  int32_t local_var_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t local_var_20c;
  uint local_var_208;
  uint local_var_204;
  uint local_var_200;
  uint local_var_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint local_var_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t local_var_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t local_var_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t local_var_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t local_var_17c;
  uint local_var_178;
  uint local_var_174;
  uint local_var_170;
  uint local_var_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint local_var_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t local_var_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint local_var_11c;
  uint local_var_118;
  uint local_var_114;
  uint local_var_110;
  uint local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_dc;
  uint64_t local_var_d8;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2c8;
  if ((*(byte *)((int64_t)param_1 + 0x41) & 1) == 0) {
    *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) | 1;
    lVar5 = *param_1;
    if ((((-1 < *(int *)(lVar5 + 0x10)) && (-1 < *(int *)(param_1[1] + 0x10))) &&
        (lVar12 = *(int64_t *)(lVar5 + 0x6d8), lVar12 != 0)) &&
       ((*(char *)(lVar12 + 0x8be) != '\0' && (*(int64_t *)(param_1[1] + 0x658) != 0)))) {
      lVar12 = *(int64_t *)(lVar12 + 0x8a8);
      puVar10 = (uint *)((int64_t)(char)param_1[8] * 0x100 +
                        *(int64_t *)(*(int64_t *)(lVar5 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_208 = puVar10[1];
      local_var_204 = puVar10[2];
      local_var_200 = puVar10[3];
      local_var_1fc = puVar10[4];
      fVar6 = (float)puVar10[5];
      fVar7 = (float)puVar10[6];
      fVar8 = (float)puVar10[7];
      uVar1 = puVar10[8];
      plVar11 = (int64_t *)0x0;
      *puVar10 = 0;
      fStack_1f8 = fVar6;
      fStack_1f4 = fVar7;
      fStack_1f0 = fVar8;
      local_var_1ec = uVar1;
      local_var_178 = local_var_208;
      local_var_174 = local_var_204;
      local_var_170 = local_var_200;
      local_var_16c = local_var_1fc;
      fStack_168 = fVar6;
      fStack_164 = fVar7;
      fStack_160 = fVar8;
      local_var_15c = uVar1;
      local_var_118 = local_var_208;
      local_var_114 = local_var_204;
      local_var_110 = local_var_200;
      local_var_10c = local_var_1fc;
      fStack_108 = fVar6;
      fStack_104 = fVar7;
      fStack_100 = fVar8;
      local_var_fc = uVar1;
      SystemSecurityManager(&fStack_1e8,&local_var_208);
      fVar13 = *(float *)(lVar12 + 0x70);
      fVar14 = *(float *)(lVar12 + 0x80);
      fVar2 = *(float *)(lVar12 + 0x84);
      fVar3 = *(float *)(lVar12 + 0x74);
      fStack_250 = *(float *)(lVar12 + 0x98);
      fStack_138 = fStack_1c8;
      fStack_134 = fStack_1c4;
      fStack_130 = fStack_1c0;
      local_var_12c = local_var_1bc;
      fStack_218 = fVar6 * fVar13 + fVar7 * fVar14 + *(float *)(lVar12 + 0xa0);
      fStack_214 = fVar6 * fVar3 + fVar7 * fVar2 + *(float *)(lVar12 + 0xa4);
      fStack_210 = fVar8 * fStack_250 + *(float *)(lVar12 + 0xa8);
      fStack_148 = fStack_1d8;
      fStack_144 = fStack_1d4;
      fStack_140 = fStack_1d0;
      local_var_13c = local_var_1cc;
      local_var_20c = 0x7f7fffff;
      local_var_17c = 0x7f7fffff;
      fStack_234 = fStack_1c8 * fVar3 + fStack_1c4 * fVar2;
      fStack_230 = fStack_1c0 * fStack_250;
      fStack_238 = fStack_1c8 * fVar13 + fStack_1c4 * fVar14;
      fStack_244 = fStack_1d8 * fVar3 + fStack_1d4 * fVar2;
      fStack_240 = fStack_1d0 * fStack_250;
      fStack_248 = fStack_1d8 * fVar13 + fStack_1d4 * fVar14;
      fStack_158 = fStack_1e8;
      fStack_154 = fStack_1e4;
      fStack_150 = fStack_1e0;
      local_var_14c = local_var_1dc;
      fStack_258 = fStack_1e8 * fVar13 + fStack_1e4 * fVar14;
      fStack_254 = fStack_1e8 * fVar3 + fStack_1e4 * fVar2;
      fStack_250 = fStack_1e0 * fStack_250;
      local_var_23c = 0x7f7fffff;
      local_var_19c = 0x7f7fffff;
      local_var_1ac = 0x7f7fffff;
      fVar13 = *(float *)((int64_t)param_1 + 0x34);
      fVar14 = *(float *)(param_1 + 6);
      local_var_24c = 0x7f7fffff;
      fVar2 = *(float *)(param_1 + 7);
      local_var_18c = 0x7f7fffff;
      local_var_22c = 0x7f7fffff;
      fStack_278 = fVar13 * fStack_248 + fStack_258 * fVar14 + fVar2 * fStack_238 + fStack_218;
      fStack_274 = fVar13 * fStack_244 + fStack_254 * fVar14 + fVar2 * fStack_234 + fStack_214;
      fStack_270 = fVar13 * fStack_240 + fStack_250 * fVar14 + fVar2 * fStack_230 + fStack_210;
      fStack_26c = fVar13 * 3.4028235e+38 + fVar14 * 3.4028235e+38 + fVar2 * 3.4028235e+38 +
                   3.4028235e+38;
      fStack_1b8 = fStack_258;
      fStack_1b4 = fStack_254;
      fStack_1b0 = fStack_250;
      fStack_1a8 = fStack_248;
      fStack_1a4 = fStack_244;
      fStack_1a0 = fStack_240;
      fStack_198 = fStack_238;
      fStack_194 = fStack_234;
      fStack_190 = fStack_230;
      fStack_188 = fStack_218;
      fStack_184 = fStack_214;
      fStack_180 = fStack_210;
      fStack_128 = fVar6;
      fStack_124 = fVar7;
      fStack_120 = fVar8;
      local_var_11c = uVar1;
      cVar9 = NetworkSystem_27720(param_1[1],*(byte *)((int64_t)param_1 + 0x41) >> 4 & 1);
      puVar10 = (uint *)((int64_t)cVar9 * 0x100 +
                        *(int64_t *)(*(int64_t *)(param_1[1] + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_f8 = *(uint64_t *)(puVar10 + 1);
      local_var_f0 = *(uint64_t *)(puVar10 + 3);
      fStack_e8 = (float)puVar10[5];
      fStack_e4 = (float)puVar10[6];
      fStack_e0 = (float)puVar10[7];
      local_var_dc = puVar10[8];
      fStack_268 = fStack_e8 - fStack_278;
      *puVar10 = 0;
      bVar4 = *(byte *)(param_1 + 5);
      local_var_21c = 0x7f7fffff;
      fStack_264 = fStack_e4 - fStack_274;
      fStack_260 = fStack_e0 - fStack_270;
      local_var_25c = 0x7f7fffff;
      fVar13 = fStack_268 * fStack_268 + fStack_264 * fStack_264 + fStack_260 * fStack_260;
      auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar14 = auVar15._0_4_;
      fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
      fStack_268 = fStack_268 * fVar13;
      fStack_264 = fStack_264 * fVar13;
      fStack_260 = fStack_260 * fVar13;
      if ((bVar4 & 1) != 0) {
        plVar11 = param_1 + 9;
        NetworkSystem_ab6a0(plVar11,*param_1);
      }
      lVar5 = *param_1;
      if (*(int *)(lVar5 + 0x568) != 1) {
        local_var_298 = *(int32_t *)(lVar5 + 0x10);
        local_var_280 = 0;
        local_var_288 = 0;
        plStack_290 = (int64_t *)0x0;
        pfStack_2a0 = (float *)CONCAT44(pfStack_2a0._4_4_,*(int32_t *)(param_1[1] + 0x10));
        pfStack_2a8 = (float *)((uint64_t)pfStack_2a8 & 0xffffffffffffff00);
        UISystem_f83f0(*(uint64_t *)(lVar5 + 0x8d8),system_system_memory,&fStack_278,1);
      }
      local_var_298 = CONCAT31(local_var_298._1_3_,(char)param_1[8]);
      pfStack_2a0 = &fStack_1b8;
      pfStack_2a8 = &fStack_268;
      plStack_290 = plVar11;
      NetworkSystem_ac830(param_1,param_1[2],bVar4 & 1,&fStack_278);
      if (*param_2 == '\0') {
        NetworkSystem_afe90(param_2,0xff7fffff);
      }
      cVar9 = '\0';
      if ('\0' < param_2[1]) {
        do {
          if (param_2[((int64_t)cVar9 + 1) * 0x30] == (char)param_1[8]) {
            *(int8_t *)((int64_t)param_1 + (int64_t)cVar9 + 0x70) = 1;
            break;
          }
          cVar9 = cVar9 + '\x01';
        } while (cVar9 < param_2[1]);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_2c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_ad5f5(uint64_t param_1,int64_t param_2,int64_t param_3)
void NetworkSystem_ad5f5(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  uint uVar1;
  float fVar2;
  byte bVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  char cVar10;
  int64_t in_RAX;
  uint *puVar11;
  int64_t *unaff_RBX;
  float *unaff_RBP;
  uint64_t unaff_RSI;
  char *unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  float fVar21;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar22;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar23;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  uint64_t local_var_20;
  float local_buffer_50;
  float fStack0000000000000054;
  float local_var_58;
  float fStack000000000000005c;
  float local_var_60;
  float fStack0000000000000064;
  float local_var_68;
  float fStack000000000000006c;
  float local_var_70;
  float fStack0000000000000074;
  float local_var_78;
  int32_t local_buffer_7c;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  puVar11 = (uint *)(param_2 * 0x100 + *(int64_t *)(in_RAX + 0x18));
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fVar15 = (float)puVar11[1];
  fVar13 = (float)puVar11[2];
  fVar17 = (float)puVar11[3];
  fVar2 = (float)puVar11[4];
  fVar12 = (float)puVar11[5];
  fVar21 = (float)puVar11[6];
  fVar19 = (float)puVar11[7];
  fVar20 = (float)puVar11[8];
  unaff_RBP[0x2c] = fVar15;
  unaff_RBP[0x2d] = fVar13;
  unaff_RBP[0x2e] = fVar17;
  unaff_RBP[0x2f] = fVar2;
  unaff_RBP[0x30] = fVar12;
  unaff_RBP[0x31] = fVar21;
  unaff_RBP[0x32] = fVar19;
  unaff_RBP[0x33] = fVar20;
  unaff_RBP[0x14] = fVar15;
  unaff_RBP[0x15] = fVar13;
  unaff_RBP[0x16] = fVar17;
  unaff_RBP[0x17] = fVar2;
  *puVar11 = 0;
  unaff_RBP[0x18] = fVar12;
  unaff_RBP[0x19] = fVar21;
  unaff_RBP[0x1a] = fVar19;
  unaff_RBP[0x1b] = fVar20;
  unaff_RBP[-0x10] = fVar15;
  unaff_RBP[-0xf] = fVar13;
  unaff_RBP[-0xe] = fVar17;
  unaff_RBP[-0xd] = fVar2;
  unaff_RBP[-0xc] = fVar12;
  unaff_RBP[-0xb] = fVar21;
  unaff_RBP[-10] = fVar19;
  unaff_RBP[-9] = fVar20;
  SystemSecurityManager(unaff_RBP + -8,unaff_RBP + -0x10);
  fVar22 = *unaff_RBP;
  fVar23 = unaff_RBP[1];
  fVar5 = unaff_RBP[-4];
  fVar6 = unaff_RBP[-3];
  unaff_RBP[-0x19] = 3.4028235e+38;
  fVar15 = *(float *)(param_3 + 0x70);
  fVar13 = *(float *)(param_3 + 0x80);
  fVar17 = *(float *)(param_3 + 0x84);
  fVar2 = *(float *)(param_3 + 0x74);
  local_var_78 = *(float *)(param_3 + 0x98);
  fVar7 = unaff_RBP[-8];
  fVar8 = unaff_RBP[-7];
  unaff_RBP[-0x1d] = 3.4028235e+38;
  unaff_RBP[0x24] = fVar22;
  unaff_RBP[0x25] = fVar23;
  unaff_RBP[0x26] = unaff_RBP[2];
  unaff_RBP[0x27] = unaff_RBP[3];
  fVar16 = fVar12 * fVar15 + fVar21 * fVar13 + *(float *)(param_3 + 0xa0);
  unaff_RBP[0x28] = fVar12;
  unaff_RBP[0x29] = fVar21;
  unaff_RBP[0x2a] = fVar19;
  unaff_RBP[0x2b] = fVar20;
  fVar12 = fVar12 * fVar2 + fVar21 * fVar17 + *(float *)(param_3 + 0xa4);
  fVar21 = fVar19 * local_var_78 + *(float *)(param_3 + 0xa8);
  unaff_RBP[0x20] = fVar5;
  unaff_RBP[0x21] = fVar6;
  unaff_RBP[0x22] = unaff_RBP[-2];
  unaff_RBP[0x23] = unaff_RBP[-1];
  unaff_RBP[-0x14] = fVar16;
  unaff_RBP[-0x13] = fVar12;
  unaff_RBP[-0x12] = fVar21;
  unaff_RBP[-0x11] = 3.4028235e+38;
  unaff_RBP[0x10] = fVar16;
  unaff_RBP[0x11] = fVar12;
  unaff_RBP[0x12] = fVar21;
  unaff_RBP[0x13] = 3.4028235e+38;
  fVar16 = fVar22 * fVar2 + fVar23 * fVar17;
  fVar21 = unaff_RBP[2] * local_var_78;
  fVar22 = fVar22 * fVar15 + fVar23 * fVar13;
  fVar19 = fVar5 * fVar2 + fVar6 * fVar17;
  fVar23 = unaff_RBP[-2] * local_var_78;
  fVar20 = fVar5 * fVar15 + fVar6 * fVar13;
  unaff_RBP[0x1c] = fVar7;
  unaff_RBP[0x1d] = fVar8;
  unaff_RBP[0x1e] = unaff_RBP[-6];
  unaff_RBP[0x1f] = unaff_RBP[-5];
  bVar3 = *(byte *)((int64_t)unaff_RBX + 0x41);
  lVar4 = unaff_RBX[1];
  local_var_70 = fVar7 * fVar15 + fVar8 * fVar13;
  fVar12 = unaff_RBP[-0x1d];
  fStack0000000000000074 = fVar7 * fVar2 + fVar8 * fVar17;
  local_var_78 = unaff_RBP[-6] * local_var_78;
  fVar2 = unaff_RBP[-0x19];
  unaff_RBP[-0x20] = fVar20;
  unaff_RBP[-0x1f] = fVar19;
  unaff_RBP[-0x1e] = fVar23;
  unaff_RBP[-0x1d] = fVar12;
  unaff_RBP[8] = fVar20;
  unaff_RBP[9] = fVar19;
  unaff_RBP[10] = fVar23;
  unaff_RBP[0xb] = fVar12;
  unaff_RBP[4] = local_var_70;
  unaff_RBP[5] = fStack0000000000000074;
  unaff_RBP[6] = local_var_78;
  unaff_RBP[7] = 3.4028235e+38;
  fVar15 = *(float *)((int64_t)unaff_RBX + 0x34);
  fVar13 = *(float *)(unaff_RBX + 6);
  local_buffer_7c = 0x7f7fffff;
  fVar17 = *(float *)(unaff_RBX + 7);
  unaff_RBP[0xc] = fVar22;
  unaff_RBP[0xd] = fVar16;
  unaff_RBP[0xe] = fVar21;
  unaff_RBP[0xf] = fVar2;
  unaff_RBP[-0x1c] = fVar22;
  unaff_RBP[-0x1b] = fVar16;
  unaff_RBP[-0x1a] = fVar21;
  unaff_RBP[-0x19] = fVar2;
  local_buffer_50 =
       fVar15 * fVar20 + local_var_70 * fVar13 + fVar17 * fVar22 + unaff_RBP[-0x14];
  fStack0000000000000054 =
       fVar15 * fVar19 + fStack0000000000000074 * fVar13 + fVar17 * fVar16 + unaff_RBP[-0x13];
  local_var_58 =
       fVar15 * fVar23 + local_var_78 * fVar13 + fVar17 * fVar21 + unaff_RBP[-0x12];
  fStack000000000000005c =
       fVar15 * fVar12 + fVar13 * 3.4028235e+38 + fVar17 * fVar2 + unaff_RBP[-0x11];
  cVar10 = NetworkSystem_27720(lVar4,bVar3 >> 4 & 1);
  puVar11 = (uint *)((int64_t)cVar10 * 0x100 +
                    *(int64_t *)(*(int64_t *)(unaff_RBX[1] + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uVar9 = *(uint64_t *)(puVar11 + 3);
  local_var_60 = (float)puVar11[5];
  fVar15 = (float)puVar11[6];
  local_var_68 = (float)puVar11[7];
  fVar13 = (float)puVar11[8];
  *(uint64_t *)(unaff_RBP + 0x34) = *(uint64_t *)(puVar11 + 1);
  *(uint64_t *)(unaff_RBP + 0x36) = uVar9;
  unaff_RBP[0x38] = local_var_60;
  unaff_RBP[0x39] = fVar15;
  unaff_RBP[0x3a] = local_var_68;
  unaff_RBP[0x3b] = fVar13;
  local_var_60 = local_var_60 - local_buffer_50;
  *puVar11 = 0;
  bVar3 = *(byte *)(unaff_RBX + 5);
  unaff_RBP[-0x15] = 3.4028235e+38;
  fStack000000000000006c = unaff_RBP[-0x15];
  fVar15 = fVar15 - fStack0000000000000054;
  local_var_68 = local_var_68 - local_var_58;
  fVar13 = local_var_60 * local_var_60 + fVar15 * fVar15 +
           local_var_68 * local_var_68;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar17 = auVar18._0_4_;
  fVar13 = fVar17 * 0.5 * (3.0 - fVar13 * fVar17 * fVar17);
  local_var_60 = local_var_60 * fVar13;
  fVar15 = fVar15 * fVar13;
  local_var_68 = local_var_68 * fVar13;
  fStack0000000000000064 = fVar15;
  if ((bVar3 & 1) != 0) {
    fVar15 = (float)NetworkSystem_ab6a0(unaff_RBX + 9,*unaff_RBX);
  }
  if (*(int *)(*unaff_RBX + 0x568) != 1) {
    fVar15 = (float)UISystem_f83f0(*(uint64_t *)(*unaff_RBX + 0x8d8),system_system_memory,
                                  &local_buffer_00000050,1,local_var_20 & 0xffffffffffffff00);
  }
  uVar14 = NetworkSystem_ac830(fVar15,unaff_RBX[2],bVar3 & 1,&local_buffer_00000050,&local_buffer_00000060);
  if (*unaff_RDI == '\0') {
    NetworkSystem_afe90(uVar14,0xff7fffff);
  }
  cVar10 = '\0';
  if ('\0' < unaff_RDI[1]) {
    do {
      if (unaff_RDI[((int64_t)cVar10 + 1) * 0x30] == (char)unaff_RBX[8]) {
        *(int8_t *)((int64_t)unaff_RBX + (int64_t)cVar10 + 0x70) = 1;
        break;
      }
      cVar10 = cVar10 + '\x01';
    } while (cVar10 < unaff_RDI[1]);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x3c) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address