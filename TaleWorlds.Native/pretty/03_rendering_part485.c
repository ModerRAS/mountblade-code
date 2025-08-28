#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part485.c - 5 个函数
// 函数: void NetworkSystem_27330(void)
void NetworkSystem_27330(void)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int64_t lVar12;
  byte bVar13;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  char cVar14;
  int32_t *puVar15;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float local_var_28;
  uint64_t local_var_270;
  int32_t local_var_268;
  int32_t local_var_264;
  uint64_t local_var_260;
  int32_t local_var_258;
  char cStack_254;
  int8_t local_var_253;
  int8_t local_var_252;
  int32_t local_var_250;
  int32_t local_var_24c;
  int8_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  int32_t local_var_230;
  int32_t local_var_22c;
  float fStack_228;
  uint64_t local_var_224;
  uint64_t local_var_21c;
  uint64_t local_var_214;
  uint64_t local_var_20c;
  int32_t local_var_204;
  int32_t local_var_200;
  float fStack_1fc;
  int32_t local_var_1f8;
  uint64_t local_var_1f4;
  uint64_t local_var_1ec;
  uint64_t local_var_1e4;
  uint64_t local_var_1dc;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  float fStack_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_15c;
  uint64_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int16_t local_var_140;
  uint8_t local_var_13e;
  int32_t local_var_138;
  int32_t local_var_134;
  float fStack_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  uint64_t local_var_ec;
  int32_t local_var_e4;
  int iStack_e0;
  int16_t local_var_dc;
  int16_t local_var_da;
  int32_t local_var_d8;
  uint32_t local_var_d4;
  int8_t local_var_d1;
  int32_t local_var_d0;
  uint64_t local_var_c0;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  int32_t local_var_10;
  int32_t local_var_c;
  uint64_t local_var_8;
  if ((*(uint *)(unaff_RDI + 0x56c) >> 0xb & 1) != 0) {
    bVar13 = *(byte *)(in_R9 + 0x3424) | 8;
    if ((*(uint *)(unaff_RSI + 8) >> 2 & 1) == 0) {
      bVar13 = *(byte *)(in_R9 + 0x3424) & 0xf7;
    }
    *(byte *)(in_R9 + 0x3424) = bVar13;
    fVar17 = *(float *)(unaff_RSI + 0x38);
    fVar16 = *(float *)(unaff_RSI + 0x3c);
    if ((fVar17 == unaff_XMM6_Da) && (fVar16 == unaff_XMM6_Da)) {
      fVar17 = 1.0;
    }
    else {
      fVar17 = SQRT(fVar17 * fVar17 + fVar16 * fVar16);
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
    }
    fVar17 = fVar17 * *(float *)(unaff_RSI + 0x54);
    local_var_8 = 0x1805273b4;
    SystemFunction_00018057a770(in_R9,fVar17 * fVar17);
    bVar13 = *(byte *)(in_R9 + 0x3424) | 0x10;
    if ((*(uint *)(unaff_RSI + 8) >> 4 & 1) == 0) {
      bVar13 = *(byte *)(in_R9 + 0x3424) & 0xef;
    }
    *(byte *)(in_R9 + 0x3424) = bVar13;
    *(int32_t *)(in_R9 + 0x25cc) = *(int32_t *)(unaff_RSI + 0x88);
    *(int32_t *)(in_R9 + 0x3460) = *(int32_t *)(unaff_RSI + 0x80);
  }
  local_var_8 = 0x180527402;
  NetworkSystem_22cf0();
  fVar17 = *(float *)(unaff_RDI + 0x668);
  if (((fVar17 <= local_var_28) &&
      (*(float *)(unaff_R15 + 0x14) <= fVar17 && fVar17 != *(float *)(unaff_R15 + 0x14))) &&
     (*(float *)(unaff_RSI + 0x2c) <= unaff_XMM6_Da && unaff_XMM6_Da != *(float *)(unaff_RSI + 0x2c)
     )) {
    local_var_8 = 0x18052743e;
    NetworkSystem_2bfa0(local_var_28,10,*(int32_t *)(*(int64_t *)(render_system_data_memory + 0x20) + 100));
  }
  lVar6 = *(int64_t *)(unaff_RDI + 0x20);
  fVar17 = *(float *)(lVar6 + 0xd8);
  if (unaff_XMM6_Da < fVar17) {
    if (unaff_R14 == (int64_t *)0x0) {
      puVar15 = (int32_t *)(lVar6 + 0xb0);
      local_var_c0 = 0xfffffffffffffffe;
      if (*(int *)(unaff_RDI + 0x568) == 1) {
        local_var_190 = 0;
        local_var_188 = 0;
        local_var_180 = 0;
        local_var_178 = 0;
        local_var_170 = 0;
        local_var_168 = 0;
        local_var_160 = 0;
        local_var_158 = 0;
        local_var_150 = 0;
        local_var_14c = CONCAT31(local_var_14c._1_3_,0xff);
        local_var_148 = 0xffffffff;
        local_var_144 = 0;
        local_var_140 = 0;
        local_var_108 = 0;
        local_var_100 = 0;
        local_var_f8 = 0;
        local_var_f0 = 0;
        local_var_ec = 1;
        _local_var_dc = CONCAT22(local_var_da,0xff00);
        local_var_d0 = 0;
        _local_var_d4 = CONCAT13(local_var_d1,0x10000);
        local_var_e4 = 0;
        lVar4 = *(int64_t *)(unaff_RDI + 0x20);
        fVar16 = *(float *)(lVar4 + 0x14) + 0.01;
        uVar10 = *(int32_t *)(lVar4 + 0xc);
        uVar11 = *(int32_t *)(lVar4 + 0x10);
        local_var_138 = *(int32_t *)(lVar4 + 0xc);
        local_var_134 = *(int32_t *)(lVar4 + 0x10);
        local_var_12c = 0x7f7fffff;
        local_var_128 = *puVar15;
        local_var_124 = *(int32_t *)(lVar6 + 0xb4);
        local_var_120 = *(int32_t *)(lVar6 + 0xb8);
        local_var_11c = *(int32_t *)(lVar6 + 0xbc);
        cVar14 = *(char *)(*(int64_t *)
                            (*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        _local_var_dc = CONCAT31(local_buffer_ffffffffffffff25,cVar14);
        if (cVar14 < '\0') {
          local_var_253 = 0xff;
        }
        else if ((*(int64_t *)(unaff_RDI + 0x658) == 0) ||
                (lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x658) + 0x208), lVar5 == 0)) {
          local_var_253 = 8;
        }
        else {
          local_var_253 = *(int8_t *)
                        ((int64_t)cVar14 * 0x1b0 + 0x104 + *(int64_t *)(lVar5 + 0x140));
        }
        local_var_d8 = 2;
        iStack_e0 = *(int *)(unaff_RDI + 0x560);
        if (iStack_e0 < 0) {
          iStack_e0 = *(int *)(unaff_RDI + 0x10);
        }
        if (-1 < *(int *)(unaff_RDI + 0x670)) {
          iStack_e0 = *(int *)(unaff_RDI + 0x670);
        }
        lVar12 = (int64_t)iStack_e0;
        lVar5 = *(int64_t *)(unaff_RDI + 0x8d8);
        if (*(int64_t *)(lVar6 + 200) == 0) {
          local_var_24c = 0xffffffff;
        }
        else {
          local_var_24c = *(int32_t *)(*(int64_t *)(lVar6 + 200) + 100);
        }
        uVar7 = *(int32_t *)(lVar4 + 0x24);
        uVar8 = *(int32_t *)(lVar4 + 0x28);
        uVar9 = *(int32_t *)(lVar4 + 0x30);
        fVar18 = -fVar17;
        fStack_130 = fVar16;
        local_var_118 = local_var_128;
        local_var_114 = local_var_124;
        local_var_110 = local_var_120;
        local_var_10c = local_var_11c;
        SystemFunction_0001805345e0(&local_var_270);
        lVar6 = render_system_data_memory;
        local_var_270 = 0x1000000;
        local_var_268 = 0;
        local_var_248 = 0;
        local_var_260 = 0xffffffffffffffff;
        local_var_252 = 0xff;
        local_var_250 = 0xffffffff;
        local_var_244 = 0xffc00000;
        local_var_240 = 0xffc00000;
        local_var_23c = 0xffc00000;
        local_var_238 = 0xffc00000;
        local_var_234 = 0xffc00000;
        local_var_230 = 0xffc00000;
        local_var_22c = 0xffc00000;
        local_var_224 = 0x7fc000007fc00000;
        local_var_21c = 0x7fc000007fc00000;
        local_var_214 = 0x7fc000007fc00000;
        local_var_20c = 0x7fc000007fc00000;
        local_var_1f4 = 0x7fc000007fc00000;
        local_var_1ec = 0x7fc000007fc00000;
        local_var_1e4 = 0x7fc000007fc00000;
        local_var_1dc = 0x7fc000007fc00000;
        local_var_264 = 1;
        local_var_258 = 2;
        local_var_1f8 = 0x7f7fffff;
        local_var_1c4 = *puVar15;
        local_var_1c0 = puVar15[1];
        local_var_1bc = puVar15[2];
        local_var_1b8 = puVar15[3];
        iVar2 = *(int *)(unaff_RDI + 0x18);
        cStack_254 = cVar14;
        fStack_228 = fVar17;
        local_var_204 = uVar10;
        local_var_200 = uVar11;
        fStack_1fc = fVar16;
        local_var_1d4 = uVar7;
        local_var_1d0 = uVar8;
        fStack_1cc = fVar18;
        local_var_1c8 = uVar9;
        if ((iVar2 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar2);
        }
        iVar3 = *(int *)(lVar12 * 0xa60 + lVar5 + 0x30b8);
        if ((iVar3 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar3);
        }
        local_var_b0 = local_var_190;
        local_var_a8 = local_var_188;
        local_var_a0 = local_var_180;
        local_var_98 = local_var_178;
        local_var_90 = local_var_170;
        local_var_88 = local_var_168;
        local_var_80 = CONCAT44(local_var_15c,local_var_160);
        local_var_78 = local_var_158;
        local_var_70 = CONCAT44(local_var_14c,local_var_150);
        local_var_68 = CONCAT44(local_var_144,local_var_148);
        local_var_60 = CONCAT62(local_var_13e,local_var_140);
        local_var_58 = CONCAT44(local_var_134,local_var_138);
        local_var_50 = CONCAT44(local_var_12c,fStack_130);
        local_var_48 = CONCAT44(local_var_124,local_var_128);
        local_var_40 = CONCAT44(local_var_11c,local_var_120);
        local_var_38 = CONCAT44(local_var_114,local_var_118);
        local_var_30 = CONCAT44(local_var_10c,local_var_110);
        local_var_28 = local_var_108;
        local_var_20 = local_var_100;
        local_var_18 = local_var_f8;
        local_var_10 = local_var_f0;
        local_var_c = (int32_t)local_var_ec;
        local_var_8 = CONCAT44(local_var_e4,local_var_ec._4_4_);
        (**(code **)(lVar6 + 0x1e0))
                  (*(int32_t *)(*(int64_t *)(unaff_RDI + 0x8d8) + 0x98d928),&local_var_270,
                   &local_var_b0,iVar3,iVar2);
        if ((iVar3 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar3);
        }
        if ((iVar2 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar2);
        }
      }
      return;
    }
    LOCK();
    plVar1 = unaff_R14 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    *(int64_t *)(*unaff_R14 + (int64_t)(int)lVar6 * 8) = unaff_RDI;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_2745f(uint64_t param_1,uint64_t param_2,int64_t param_3,uint param_4)
void NetworkSystem_2745f(uint64_t param_1,uint64_t param_2,int64_t param_3,uint param_4)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int64_t lVar11;
  int64_t unaff_RDI;
  char cVar12;
  int32_t *puVar13;
  int64_t *unaff_R14;
  float fVar14;
  uint uVar15;
  uint64_t local_buffer_50;
  uint64_t local_buffer_78;
  uint64_t local_var_270;
  int32_t local_var_268;
  int32_t local_var_264;
  uint64_t local_var_260;
  int32_t local_var_258;
  char cStack_254;
  int8_t local_var_253;
  int8_t local_var_252;
  int32_t local_var_250;
  int32_t local_var_24c;
  int8_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  int32_t local_var_230;
  int32_t local_var_22c;
  uint local_var_228;
  uint64_t local_var_224;
  uint64_t local_var_21c;
  uint64_t local_var_214;
  uint64_t local_var_20c;
  int32_t local_var_204;
  int32_t local_var_200;
  float fStack_1fc;
  int32_t local_var_1f8;
  uint64_t local_var_1f4;
  uint64_t local_var_1ec;
  uint64_t local_var_1e4;
  uint64_t local_var_1dc;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  uint local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_15c;
  uint64_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int16_t local_var_140;
  uint8_t local_var_13e;
  int32_t local_var_138;
  int32_t local_var_134;
  float fStack_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  uint64_t local_var_ec;
  int32_t local_var_e4;
  int iStack_e0;
  int16_t local_var_dc;
  int16_t local_var_da;
  int32_t local_var_d8;
  uint32_t local_var_d4;
  int8_t local_var_d1;
  int32_t local_var_d0;
  uint64_t local_var_c0;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  int32_t local_var_10;
  int32_t local_var_c;
  int32_t local_var_8;
  int32_t local_var_4;
  if (unaff_R14 == (int64_t *)0x0) {
    puVar13 = (int32_t *)(param_3 + 0xb0);
    local_var_c0 = 0xfffffffffffffffe;
    local_buffer_78 = local_buffer_50;
    if (*(int *)(unaff_RDI + 0x568) == 1) {
      local_var_190 = 0;
      local_var_188 = 0;
      local_var_180 = 0;
      local_var_178 = 0;
      local_var_170 = 0;
      local_var_168 = 0;
      local_var_160 = 0;
      local_var_158 = 0;
      local_var_150 = 0;
      local_var_14c = CONCAT31(local_var_14c._1_3_,0xff);
      local_var_148 = 0xffffffff;
      local_var_144 = 0;
      local_var_140 = 0;
      local_var_108 = 0;
      local_var_100 = 0;
      local_var_f8 = 0;
      local_var_f0 = 0;
      local_var_ec = 1;
      _local_var_dc = CONCAT22(local_var_da,0xff00);
      local_var_d0 = 0;
      _local_var_d4 = CONCAT13(local_var_d1,0x10000);
      local_var_e4 = 0;
      lVar4 = *(int64_t *)(unaff_RDI + 0x20);
      fVar14 = *(float *)(lVar4 + 0x14) + 0.01;
      uVar9 = *(int32_t *)(lVar4 + 0xc);
      uVar10 = *(int32_t *)(lVar4 + 0x10);
      local_var_138 = *(int32_t *)(lVar4 + 0xc);
      local_var_134 = *(int32_t *)(lVar4 + 0x10);
      local_var_12c = 0x7f7fffff;
      local_var_128 = *puVar13;
      local_var_124 = *(int32_t *)(param_3 + 0xb4);
      local_var_120 = *(int32_t *)(param_3 + 0xb8);
      local_var_11c = *(int32_t *)(param_3 + 0xbc);
      cVar12 = *(char *)(*(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8) + 0x260) +
                          0x210) + 0xe6);
      _local_var_dc = CONCAT31(local_buffer_ffffffffffffff25,cVar12);
      if (cVar12 < '\0') {
        local_var_253 = 0xff;
      }
      else if ((*(int64_t *)(unaff_RDI + 0x658) == 0) ||
              (lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x658) + 0x208), lVar5 == 0)) {
        local_var_253 = 8;
      }
      else {
        local_var_253 = *(int8_t *)
                      ((int64_t)cVar12 * 0x1b0 + 0x104 + *(int64_t *)(lVar5 + 0x140));
      }
      local_var_d8 = 2;
      iStack_e0 = *(int *)(unaff_RDI + 0x560);
      if (iStack_e0 < 0) {
        iStack_e0 = *(int *)(unaff_RDI + 0x10);
      }
      if (-1 < *(int *)(unaff_RDI + 0x670)) {
        iStack_e0 = *(int *)(unaff_RDI + 0x670);
      }
      lVar11 = (int64_t)iStack_e0;
      lVar5 = *(int64_t *)(unaff_RDI + 0x8d8);
      if (*(int64_t *)(param_3 + 200) == 0) {
        local_var_24c = 0xffffffff;
      }
      else {
        local_var_24c = *(int32_t *)(*(int64_t *)(param_3 + 200) + 100);
      }
      uVar6 = *(int32_t *)(lVar4 + 0x24);
      uVar7 = *(int32_t *)(lVar4 + 0x28);
      uVar8 = *(int32_t *)(lVar4 + 0x30);
      uVar15 = param_4 ^ 0x80000000;
      fStack_130 = fVar14;
      local_var_118 = local_var_128;
      local_var_114 = local_var_124;
      local_var_110 = local_var_120;
      local_var_10c = local_var_11c;
      SystemFunction_0001805345e0(&local_var_270);
      lVar4 = render_system_data_memory;
      local_var_270 = 0x1000000;
      local_var_268 = 0;
      local_var_248 = 0;
      local_var_260 = 0xffffffffffffffff;
      local_var_252 = 0xff;
      local_var_250 = 0xffffffff;
      local_var_244 = 0xffc00000;
      local_var_240 = 0xffc00000;
      local_var_23c = 0xffc00000;
      local_var_238 = 0xffc00000;
      local_var_234 = 0xffc00000;
      local_var_230 = 0xffc00000;
      local_var_22c = 0xffc00000;
      local_var_224 = 0x7fc000007fc00000;
      local_var_21c = 0x7fc000007fc00000;
      local_var_214 = 0x7fc000007fc00000;
      local_var_20c = 0x7fc000007fc00000;
      local_var_1f4 = 0x7fc000007fc00000;
      local_var_1ec = 0x7fc000007fc00000;
      local_var_1e4 = 0x7fc000007fc00000;
      local_var_1dc = 0x7fc000007fc00000;
      local_var_264 = 1;
      local_var_258 = 2;
      local_var_1f8 = 0x7f7fffff;
      local_var_1c4 = *puVar13;
      local_var_1c0 = puVar13[1];
      local_var_1bc = puVar13[2];
      local_var_1b8 = puVar13[3];
      iVar2 = *(int *)(unaff_RDI + 0x18);
      cStack_254 = cVar12;
      local_var_228 = param_4;
      local_var_204 = uVar9;
      local_var_200 = uVar10;
      fStack_1fc = fVar14;
      local_var_1d4 = uVar6;
      local_var_1d0 = uVar7;
      local_var_1cc = uVar15;
      local_var_1c8 = uVar8;
      if ((iVar2 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar2);
      }
      iVar3 = *(int *)(lVar11 * 0xa60 + lVar5 + 0x30b8);
      if ((iVar3 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar3);
      }
      local_var_b0 = local_var_190;
      local_var_a8 = local_var_188;
      local_var_a0 = local_var_180;
      local_var_98 = local_var_178;
      local_var_90 = local_var_170;
      local_var_88 = local_var_168;
      local_var_80 = CONCAT44(local_var_15c,local_var_160);
      local_var_78 = local_var_158;
      local_var_70 = CONCAT44(local_var_14c,local_var_150);
      local_var_68 = CONCAT44(local_var_144,local_var_148);
      local_var_60 = CONCAT62(local_var_13e,local_var_140);
      local_var_58 = CONCAT44(local_var_134,local_var_138);
      local_var_50 = CONCAT44(local_var_12c,fStack_130);
      local_var_48 = CONCAT44(local_var_124,local_var_128);
      local_var_40 = CONCAT44(local_var_11c,local_var_120);
      local_var_38 = CONCAT44(local_var_114,local_var_118);
      local_var_30 = CONCAT44(local_var_10c,local_var_110);
      local_var_28 = local_var_108;
      local_var_20 = local_var_100;
      local_var_18 = local_var_f8;
      local_var_10 = local_var_f0;
      local_var_c = (int32_t)local_var_ec;
      local_var_8 = local_var_ec._4_4_;
      local_var_4 = local_var_e4;
      (**(code **)(lVar4 + 0x1e0))
                (*(int32_t *)(*(int64_t *)(unaff_RDI + 0x8d8) + 0x98d928),&local_var_270,&local_var_b0
                 ,iVar3,iVar2);
      if ((iVar3 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar3);
      }
      if ((iVar2 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar2);
      }
    }
    return;
  }
  LOCK();
  plVar1 = unaff_R14 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *(int64_t *)(*unaff_R14 + (int64_t)(int)lVar4 * 8) = unaff_RDI;
  return;
}
// 函数: void NetworkSystem_274a0(int64_t param_1)
void NetworkSystem_274a0(int64_t param_1)
{
  float *pfVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  byte bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  lVar8 = *(int64_t *)(param_1 + 0x20);
  lVar7 = *(int64_t *)(lVar8 + 0xc0);
  if (lVar7 != 0) {
    lVar7 = *(int64_t *)(lVar7 + 0x10);
  }
  if (lVar7 != 0) {
    uVar5 = *(uint64_t *)(lVar7 + 0x78);
    pfVar1 = (float *)(param_1 + 0x41c);
    *(uint64_t *)pfVar1 = *(uint64_t *)(lVar7 + 0x70);
    *(uint64_t *)(param_1 + 0x424) = uVar5;
    uVar5 = *(uint64_t *)(lVar7 + 0x88);
    *(uint64_t *)(param_1 + 0x42c) = *(uint64_t *)(lVar7 + 0x80);
    *(uint64_t *)(param_1 + 0x434) = uVar5;
    uVar2 = *(int32_t *)(lVar7 + 0x94);
    uVar3 = *(int32_t *)(lVar7 + 0x98);
    uVar4 = *(int32_t *)(lVar7 + 0x9c);
    *(int32_t *)(param_1 + 0x43c) = *(int32_t *)(lVar7 + 0x90);
    *(int32_t *)(param_1 + 0x440) = uVar2;
    *(int32_t *)(param_1 + 0x444) = uVar3;
    *(int32_t *)(param_1 + 0x448) = uVar4;
    uVar2 = *(int32_t *)(lVar7 + 0xa4);
    uVar3 = *(int32_t *)(lVar7 + 0xa8);
    uVar4 = *(int32_t *)(lVar7 + 0xac);
    *(int32_t *)(param_1 + 0x44c) = *(int32_t *)(lVar7 + 0xa0);
    *(int32_t *)(param_1 + 0x450) = uVar2;
    *(int32_t *)(param_1 + 0x454) = uVar3;
    *(int32_t *)(param_1 + 0x458) = uVar4;
    bVar6 = SystemFunction_000180285f10(param_1 + 0x45c,pfVar1);
    bVar6 = bVar6 ^ 1;
    if ((bVar6 != 0) || (*(char *)(param_1 + 0x418) != '\0')) {
      *(byte *)(param_1 + 0x418) = bVar6;
      if ((bVar6 == 0) ||
         ((*(int64_t *)(lVar8 + 0xc0) == 0 ||
          (*(int64_t *)(*(int64_t *)(lVar8 + 0xc0) + 0x10) == 0)))) {
        fVar9 = 0.0;
        fVar10 = 0.0;
        fVar11 = 0.0;
      }
      else {
        GenericFunction_1801c13c0(extraout_XMM0_Da,&fStack_18,lVar8 + 0xc);
        lVar7 = *(int64_t *)(param_1 + 0x20);
        fVar9 = (*(float *)(param_1 + 0x42c) * fStack_14 + *pfVar1 * fStack_18 +
                 *(float *)(param_1 + 0x43c) * fStack_10 + *(float *)(param_1 + 0x44c)) -
                *(float *)(lVar7 + 0xc);
        fVar10 = (*(float *)(param_1 + 0x430) * fStack_14 + *(float *)(param_1 + 0x420) * fStack_18
                  + *(float *)(param_1 + 0x440) * fStack_10 + *(float *)(param_1 + 0x450)) -
                 *(float *)(lVar7 + 0x10);
        fVar11 = (*(float *)(param_1 + 0x434) * fStack_14 + *(float *)(param_1 + 0x424) * fStack_18
                  + *(float *)(param_1 + 0x444) * fStack_10 + *(float *)(param_1 + 0x454)) -
                 *(float *)(lVar7 + 0x14);
      }
      *(float *)(lVar8 + 0xc) = fVar9 + *(float *)(lVar8 + 0xc);
      *(float *)(lVar8 + 0x10) = fVar10 + *(float *)(lVar8 + 0x10);
      *(float *)(lVar8 + 0x14) = fVar11 + *(float *)(lVar8 + 0x14);
    }
    NetworkSystem_1b7e0(param_1);
  }
  return;
}
// 函数: void NetworkSystem_274ca(uint64_t param_1)
void NetworkSystem_274ca(uint64_t param_1)
{
  float *pfVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  byte bVar7;
  int64_t in_RAX;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t in_R10;
  int32_t extraout_XMM0_Da;
  float fVar8;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar9;
  float fVar10;
  float fStackX_20;
  float fStackX_24;
  float local_var_28;
  pfVar1 = (float *)(in_RCX + 0x41c);
  *pfVar1 = (float)param_1;
  *(int *)(in_RCX + 0x420) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(in_RCX + 0x424) = in_XMM0_Dc;
  *(int32_t *)(in_RCX + 0x428) = in_XMM0_Dd;
  uVar6 = *(uint64_t *)(in_RAX + 0x88);
  *(uint64_t *)(in_RCX + 0x42c) = *(uint64_t *)(in_RAX + 0x80);
  *(uint64_t *)(in_RCX + 0x434) = uVar6;
  uVar3 = *(int32_t *)(in_RAX + 0x94);
  uVar4 = *(int32_t *)(in_RAX + 0x98);
  uVar5 = *(int32_t *)(in_RAX + 0x9c);
  *(int32_t *)(in_RCX + 0x43c) = *(int32_t *)(in_RAX + 0x90);
  *(int32_t *)(in_RCX + 0x440) = uVar3;
  *(int32_t *)(in_RCX + 0x444) = uVar4;
  *(int32_t *)(in_RCX + 0x448) = uVar5;
  uVar3 = *(int32_t *)(in_RAX + 0xa4);
  uVar4 = *(int32_t *)(in_RAX + 0xa8);
  uVar5 = *(int32_t *)(in_RAX + 0xac);
  *(int32_t *)(in_RCX + 0x44c) = *(int32_t *)(in_RAX + 0xa0);
  *(int32_t *)(in_RCX + 0x450) = uVar3;
  *(int32_t *)(in_RCX + 0x454) = uVar4;
  *(int32_t *)(in_RCX + 0x458) = uVar5;
  bVar7 = SystemFunction_000180285f10(in_RCX + 0x45c,pfVar1);
  bVar7 = bVar7 ^ 1;
  if ((bVar7 != 0) || (*(char *)(unaff_RBX + 0x418) != '\0')) {
    *(byte *)(unaff_RBX + 0x418) = bVar7;
    if ((bVar7 == 0) ||
       ((*(int64_t *)(in_R10 + 0xc0) == 0 ||
        (*(int64_t *)(*(int64_t *)(in_R10 + 0xc0) + 0x10) == 0)))) {
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    else {
      GenericFunction_1801c13c0(extraout_XMM0_Da,&fStackX_20,in_R10 + 0xc);
      lVar2 = *(int64_t *)(unaff_RBX + 0x20);
      fVar8 = (*(float *)(in_RCX + 0x42c) * fStackX_24 + *pfVar1 * fStackX_20 +
               *(float *)(in_RCX + 0x43c) * local_var_28 + *(float *)(in_RCX + 0x44c)) -
              *(float *)(lVar2 + 0xc);
      fVar9 = (*(float *)(in_RCX + 0x430) * fStackX_24 + *(float *)(in_RCX + 0x420) * fStackX_20 +
               *(float *)(in_RCX + 0x440) * local_var_28 + *(float *)(in_RCX + 0x450)) -
              *(float *)(lVar2 + 0x10);
      fVar10 = (*(float *)(in_RCX + 0x434) * fStackX_24 + *(float *)(in_RCX + 0x424) * fStackX_20 +
                *(float *)(in_RCX + 0x444) * local_var_28 + *(float *)(in_RCX + 0x454)) -
               *(float *)(lVar2 + 0x14);
    }
    *(float *)(in_R10 + 0xc) = fVar8 + *(float *)(in_R10 + 0xc);
    *(float *)(in_R10 + 0x10) = fVar9 + *(float *)(in_R10 + 0x10);
    *(float *)(in_R10 + 0x14) = fVar10 + *(float *)(in_R10 + 0x14);
  }
  NetworkSystem_1b7e0();
  return;
}
// 函数: void NetworkSystem_275ec(void)
void NetworkSystem_275ec(void)
{
  return;
}
float NetworkSystem_27600(int64_t param_1,char param_2,char param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  float fVar4;
  lVar2 = *(int64_t *)(param_1 + 0x590);
  uVar3 = *(int32_t *)(lVar2 + 0x2498);
  if (param_2 != '\0') {
    lVar1 = NetworkSystem_8b980(lVar2,uVar3);
    lVar2 = *(int64_t *)(param_1 + 0x590);
    if (lVar1 == 0) {
      uVar3 = *(int32_t *)(lVar2 + 0x2450);
    }
    else {
      uVar3 = *(int32_t *)(lVar2 + 0x2498);
    }
  }
  lVar2 = NetworkSystem_8b980(lVar2,uVar3);
  if ((lVar2 == 0) || (fVar4 = *(float *)(lVar2 + 0x5c), fVar4 < 0.0)) {
    fVar4 = 0.1;
  }
  if (param_3 == '\0') {
    fVar4 = fVar4 * *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
  }
  return fVar4;
}
uint64_t NetworkSystem_27690(int64_t param_1,uint64_t *param_2,char param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t uVar6;
  lVar5 = *(int64_t *)(param_1 + 0x590);
  uVar6 = *(int32_t *)(lVar5 + 0x2498);
  if (param_3 != '\0') {
    lVar3 = NetworkSystem_8b980(lVar5,uVar6);
    lVar5 = *(int64_t *)(param_1 + 0x590);
    if (lVar3 == 0) {
      uVar6 = *(int32_t *)(lVar5 + 0x2450);
    }
    else {
      uVar6 = *(int32_t *)(lVar5 + 0x2498);
    }
  }
  puVar4 = (uint64_t *)NetworkSystem_8b980(lVar5,uVar6);
  if ((puVar4 != (uint64_t *)0x0) &&
     (puVar4 = (uint64_t *)puVar4[2], puVar4 != (uint64_t *)0x0)) {
    uVar1 = puVar4[1];
    uVar6 = *(int32_t *)(puVar4 + 4);
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    uVar1 = puVar4[2];
    uVar2 = puVar4[3];
    *(int32_t *)(param_2 + 4) = uVar6;
    param_2[2] = uVar1;
    param_2[3] = uVar2;
    return CONCAT71((int7)((uint64_t)puVar4 >> 8),1);
  }
  return (uint64_t)puVar4 & 0xffffffffffffff00;
}
char NetworkSystem_27720(int64_t param_1)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar2 = NetworkSystem_8b980();
  if ((lVar2 == 0) || (cVar1 = *(char *)(lVar2 + 100), cVar1 < '\0')) {
    lVar2 = *(int64_t *)(param_1 + 0x590);
    if (*(int64_t *)(lVar2 + 0x24a8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint64_t *)(*(int64_t *)(lVar2 + 0x24a8) + 0x1d0);
    }
    if (((*(uint64_t *)(lVar2 + 0x24b8) | uVar3) >> 0x16 & 1) != 0) {
      return *(char *)(lVar2 + 0x25fc);
    }
    cVar1 = *(char *)(lVar2 + 0x25fb);
  }
  return cVar1;
}
int8_t NetworkSystem_277a0(int64_t param_1,int param_2)
{
  int64_t lVar1;
  lVar1 = NetworkSystem_8b980(*(int64_t *)(param_1 + 0x590),
                        *(int32_t *)
                         (*(int64_t *)(param_1 + 0x590) + 0x2450 + (int64_t)param_2 * 0x48));
  if (lVar1 != 0) {
    return *(int8_t *)(lVar1 + 0x65);
  }
  return 0xff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address