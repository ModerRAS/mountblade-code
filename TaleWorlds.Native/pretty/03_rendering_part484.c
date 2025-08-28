#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part484.c - 2 个函数
// 函数: void NetworkSystem_271f0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void NetworkSystem_271f0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  float *pfVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  byte bVar15;
  int64_t lVar16;
  int64_t lVar17;
  int32_t *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int64_t lStackX_8;
  uint64_t local_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  char cStack_2ac;
  int8_t local_var_2ab;
  int8_t local_var_2aa;
  int32_t local_var_2a8;
  int32_t local_var_2a4;
  int8_t local_var_2a0;
  int32_t local_var_29c;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  int32_t local_var_288;
  int32_t local_var_284;
  float fStack_280;
  uint64_t local_var_27c;
  uint64_t local_var_274;
  uint64_t local_var_26c;
  uint64_t local_var_264;
  int32_t local_var_25c;
  int32_t local_var_258;
  float fStack_254;
  int32_t local_var_250;
  uint64_t local_var_24c;
  uint64_t local_var_244;
  uint64_t local_var_23c;
  uint64_t local_var_234;
  int32_t local_var_22c;
  int32_t local_var_228;
  float fStack_224;
  int32_t local_var_220;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  uint64_t local_var_1b0;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int16_t local_var_198;
  uint8_t local_var_196;
  int32_t local_var_190;
  int32_t local_var_18c;
  float fStack_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint64_t local_var_144;
  int32_t local_var_13c;
  int iStack_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  uint64_t local_var_118;
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
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  uint64_t local_var_60;
  int iStack_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_38;
  int32_t local_var_34;
  float fStack_30;
  int32_t local_var_2c;
  lVar16 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x20);
  lVar17 = lVar16;
  if (*(int64_t *)(lVar5 + 0xc0) != 0) {
    lVar17 = *(int64_t *)(*(int64_t *)(lVar5 + 0xc0) + 0x10);
  }
  local_var_38 = *(int32_t *)(lVar5 + 0xc);
  local_var_34 = *(int32_t *)(lVar5 + 0x10);
  fStack_30 = *(float *)(lVar5 + 0x14);
  local_var_2c = *(int32_t *)(lVar5 + 0x18);
  local_var_60 = 0x18052724d;
  NetworkSystem_92060(lVar5,param_2,*(uint64_t *)(param_1 + 0x8d8),param_3);
  if (*(int64_t *)(lVar5 + 0xc0) != 0) {
    lVar16 = *(int64_t *)(*(int64_t *)(lVar5 + 0xc0) + 0x10);
  }
  lVar14 = *(int64_t *)(param_1 + 0x20);
  if (lVar16 != 0) {
    puVar3 = (uint64_t *)(param_1 + 0x41c);
    *(uint64_t *)(param_1 + 0x45c) = *puVar3;
    *(uint64_t *)(param_1 + 0x464) = *(uint64_t *)(param_1 + 0x424);
    *(uint64_t *)(param_1 + 0x46c) = *(uint64_t *)(param_1 + 0x42c);
    *(uint64_t *)(param_1 + 0x474) = *(uint64_t *)(param_1 + 0x434);
    *(uint64_t *)(param_1 + 0x47c) = *(uint64_t *)(param_1 + 0x43c);
    *(uint64_t *)(param_1 + 0x484) = *(uint64_t *)(param_1 + 0x444);
    *(uint64_t *)(param_1 + 0x48c) = *(uint64_t *)(param_1 + 0x44c);
    *(uint64_t *)(param_1 + 0x494) = *(uint64_t *)(param_1 + 0x454);
    uVar11 = *(uint64_t *)(lVar16 + 0x78);
    *puVar3 = *(uint64_t *)(lVar16 + 0x70);
    *(uint64_t *)(param_1 + 0x424) = uVar11;
    uVar11 = *(uint64_t *)(lVar16 + 0x88);
    *(uint64_t *)(param_1 + 0x42c) = *(uint64_t *)(lVar16 + 0x80);
    *(uint64_t *)(param_1 + 0x434) = uVar11;
    uVar9 = *(int32_t *)(lVar16 + 0x94);
    uVar10 = *(int32_t *)(lVar16 + 0x98);
    uVar6 = *(int32_t *)(lVar16 + 0x9c);
    *(int32_t *)(param_1 + 0x43c) = *(int32_t *)(lVar16 + 0x90);
    *(int32_t *)(param_1 + 0x440) = uVar9;
    *(int32_t *)(param_1 + 0x444) = uVar10;
    *(int32_t *)(param_1 + 0x448) = uVar6;
    uVar9 = *(int32_t *)(lVar16 + 0xa4);
    uVar10 = *(int32_t *)(lVar16 + 0xa8);
    uVar6 = *(int32_t *)(lVar16 + 0xac);
    *(int32_t *)(param_1 + 0x44c) = *(int32_t *)(lVar16 + 0xa0);
    *(int32_t *)(param_1 + 0x450) = uVar9;
    *(int32_t *)(param_1 + 0x454) = uVar10;
    *(int32_t *)(param_1 + 0x458) = uVar6;
    if (lVar17 == lVar16) {
      local_var_60 = 0x1805272d0;
      cVar12 = Function_9bed5989((uint64_t *)(param_1 + 0x45c),puVar3,0x38d1b717);
      if ((cVar12 == '\0') || (*(char *)(param_1 + 0x418) != '\0')) {
        lVar16 = *(int64_t *)(param_1 + 0x8d8);
        local_var_60 = 0x1805272fa;
        lStackX_8 = param_1;
        NetworkSystem_32ba0(lVar16 + 0x87b3b8,&lStackX_8);
        local_var_60 = 0x180527307;
        iVar13 = _Cnd_signal(lVar16 + 0x87b620);
        if (iVar13 != 0) {
          local_var_60 = 0x180527313;
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
      }
    }
  }
  lVar16 = *(int64_t *)(param_1 + 0x590);
  if ((lVar16 != 0) && ((*(uint *)(param_1 + 0x56c) >> 0xb & 1) != 0)) {
    bVar15 = *(byte *)(lVar16 + 0x3424) | 8;
    if ((*(uint *)(lVar5 + 8) >> 2 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xf7;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    fVar20 = *(float *)(lVar5 + 0x38);
    fVar19 = *(float *)(lVar5 + 0x3c);
    if ((fVar20 == 0.0) && (fVar19 == 0.0)) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = SQRT(fVar20 * fVar20 + fVar19 * fVar19);
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
    }
    fVar20 = fVar20 * *(float *)(lVar5 + 0x54);
    local_var_60 = 0x1805273b4;
    Function_5a10a6f4(lVar16,fVar20 * fVar20);
    bVar15 = *(byte *)(lVar16 + 0x3424) | 0x10;
    if ((*(uint *)(lVar5 + 8) >> 4 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xef;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    *(int32_t *)(lVar16 + 0x25cc) = *(int32_t *)(lVar5 + 0x88);
    *(int32_t *)(lVar16 + 0x3460) = *(int32_t *)(lVar5 + 0x80);
  }
  local_var_60 = 0x180527402;
  NetworkSystem_22cf0(param_1);
  fVar20 = *(float *)(param_1 + 0x668);
  if (((fVar20 <= fStack_30) &&
      (pfVar1 = (float *)(lVar14 + 0x14), *pfVar1 <= fVar20 && fVar20 != *pfVar1)) &&
     (*(float *)(lVar5 + 0x2c) <= 0.0 && *(float *)(lVar5 + 0x2c) != 0.0)) {
    local_var_60 = 0x18052743e;
    NetworkSystem_2bfa0(param_1,10,*(int32_t *)(*(int64_t *)(render_system_data_memory + 0x20) + 100));
  }
  lVar5 = *(int64_t *)(param_1 + 0x20);
  fVar20 = *(float *)(lVar5 + 0xd8);
  if (0.0 < fVar20) {
    if (param_4 == (int64_t *)0x0) {
      puVar18 = (int32_t *)(lVar5 + 0xb0);
      local_var_118 = 0xfffffffffffffffe;
      if (*(int *)(param_1 + 0x568) == 1) {
        local_var_1e8 = 0;
        local_var_1e0 = 0;
        local_var_1d8 = 0;
        local_var_1d0 = 0;
        local_var_1c8 = 0;
        local_var_1c0 = 0;
        local_var_1b8 = 0;
        local_var_1b0 = 0;
        local_var_1a8 = 0;
        local_var_1a4 = CONCAT31(local_var_1a4._1_3_,0xff);
        local_var_1a0 = 0xffffffff;
        local_var_19c = 0;
        local_var_198 = 0;
        local_var_160 = 0;
        local_var_158 = 0;
        local_var_150 = 0;
        local_var_148 = 0;
        local_var_144 = 1;
        local_var_134 = CONCAT22(local_var_134._2_2_,0xff00);
        local_var_128 = 0;
        local_var_12c = CONCAT13(local_var_12c._3_1_,0x10000);
        local_var_13c = 0;
        lVar16 = *(int64_t *)(param_1 + 0x20);
        fVar19 = *(float *)(lVar16 + 0x14) + 0.01;
        uVar9 = *(int32_t *)(lVar16 + 0xc);
        uVar10 = *(int32_t *)(lVar16 + 0x10);
        local_var_190 = *(int32_t *)(lVar16 + 0xc);
        local_var_18c = *(int32_t *)(lVar16 + 0x10);
        local_var_184 = 0x7f7fffff;
        local_var_180 = *puVar18;
        local_var_17c = *(int32_t *)(lVar5 + 0xb4);
        local_var_178 = *(int32_t *)(lVar5 + 0xb8);
        local_var_174 = *(int32_t *)(lVar5 + 0xbc);
        cVar12 = *(char *)(*(int64_t *)
                            (*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        local_var_134 = CONCAT31(local_var_134._1_3_,cVar12);
        if (cVar12 < '\0') {
          local_var_2ab = 0xff;
        }
        else if ((*(int64_t *)(param_1 + 0x658) == 0) ||
                (lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208), lVar17 == 0)) {
          local_var_2ab = 8;
        }
        else {
          local_var_2ab = *(int8_t *)
                        ((int64_t)cVar12 * 0x1b0 + 0x104 + *(int64_t *)(lVar17 + 0x140));
        }
        local_var_130 = 2;
        iStack_138 = *(int *)(param_1 + 0x560);
        if (iStack_138 < 0) {
          iStack_138 = *(int *)(param_1 + 0x10);
        }
        if (-1 < *(int *)(param_1 + 0x670)) {
          iStack_138 = *(int *)(param_1 + 0x670);
        }
        lVar14 = (int64_t)iStack_138;
        lVar17 = *(int64_t *)(param_1 + 0x8d8);
        if (*(int64_t *)(lVar5 + 200) == 0) {
          local_var_2a4 = 0xffffffff;
        }
        else {
          local_var_2a4 = *(int32_t *)(*(int64_t *)(lVar5 + 200) + 100);
        }
        uVar6 = *(int32_t *)(lVar16 + 0x24);
        uVar7 = *(int32_t *)(lVar16 + 0x28);
        uVar8 = *(int32_t *)(lVar16 + 0x30);
        fVar21 = -fVar20;
        fStack_188 = fVar19;
        local_var_170 = local_var_180;
        local_var_16c = local_var_17c;
        local_var_168 = local_var_178;
        local_var_164 = local_var_174;
        Function_4593c2d0(&local_var_2c8);
        lVar5 = render_system_data_memory;
        local_var_2c8 = 0x1000000;
        local_var_2c0 = 0;
        local_var_2a0 = 0;
        local_var_2b8 = 0xffffffffffffffff;
        local_var_2aa = 0xff;
        local_var_2a8 = 0xffffffff;
        local_var_29c = 0xffc00000;
        local_var_298 = 0xffc00000;
        local_var_294 = 0xffc00000;
        local_var_290 = 0xffc00000;
        local_var_28c = 0xffc00000;
        local_var_288 = 0xffc00000;
        local_var_284 = 0xffc00000;
        local_var_27c = 0x7fc000007fc00000;
        local_var_274 = 0x7fc000007fc00000;
        local_var_26c = 0x7fc000007fc00000;
        local_var_264 = 0x7fc000007fc00000;
        local_var_24c = 0x7fc000007fc00000;
        local_var_244 = 0x7fc000007fc00000;
        local_var_23c = 0x7fc000007fc00000;
        local_var_234 = 0x7fc000007fc00000;
        local_var_2bc = 1;
        local_var_2b0 = 2;
        local_var_250 = 0x7f7fffff;
        local_var_21c = *puVar18;
        local_var_218 = puVar18[1];
        local_var_214 = puVar18[2];
        local_var_210 = puVar18[3];
        iVar13 = *(int *)(param_1 + 0x18);
        lStackX_8 = CONCAT44(lStackX_8._4_4_,iVar13);
        cStack_2ac = cVar12;
        fStack_280 = fVar20;
        local_var_25c = uVar9;
        local_var_258 = uVar10;
        fStack_254 = fVar19;
        local_var_22c = uVar6;
        local_var_228 = uVar7;
        fStack_224 = fVar21;
        local_var_220 = uVar8;
        if ((iVar13 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar13);
        }
        iVar4 = *(int *)(lVar14 * 0xa60 + lVar17 + 0x30b8);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar4);
        }
        local_var_108 = local_var_1e8;
        local_var_100 = local_var_1e0;
        local_var_f8 = local_var_1d8;
        local_var_f0 = local_var_1d0;
        local_var_e8 = local_var_1c8;
        local_var_e0 = local_var_1c0;
        local_var_d8 = CONCAT44(local_var_1b4,local_var_1b8);
        local_var_d0 = local_var_1b0;
        local_var_c8 = CONCAT44(local_var_1a4,local_var_1a8);
        local_var_c0 = CONCAT44(local_var_19c,local_var_1a0);
        local_var_b8 = CONCAT62(local_var_196,local_var_198);
        local_var_b0 = CONCAT44(local_var_18c,local_var_190);
        local_var_a8 = CONCAT44(local_var_184,fStack_188);
        local_var_a0 = CONCAT44(local_var_17c,local_var_180);
        local_var_98 = CONCAT44(local_var_174,local_var_178);
        local_var_90 = CONCAT44(local_var_16c,local_var_170);
        local_var_88 = CONCAT44(local_var_164,local_var_168);
        local_var_80 = local_var_160;
        local_var_78 = local_var_158;
        local_var_70 = local_var_150;
        local_var_68 = local_var_148;
        local_var_64 = (int32_t)local_var_144;
        local_var_60 = CONCAT44(local_var_13c,local_var_144._4_4_);
        iStack_58 = iStack_138;
        local_var_54 = local_var_134;
        local_var_50 = local_var_130;
        local_var_4c = local_var_12c;
        local_var_48 = CONCAT44(local_var_124,local_var_128);
        (**(code **)(lVar5 + 0x1e0))
                  (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),&local_var_2c8,
                   &local_var_108,iVar4,iVar13);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar4);
        }
        if ((iVar13 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar13);
        }
      }
      return;
    }
    LOCK();
    plVar2 = param_4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    *(int64_t *)(*param_4 + (int64_t)(int)lVar5 * 8) = param_1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_271f8(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void NetworkSystem_271f8(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  float *pfVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  byte bVar15;
  int64_t lVar16;
  int64_t lVar17;
  int32_t *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  int64_t local_buffer_60;
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
  lVar16 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x20);
  lVar17 = lVar16;
  if (*(int64_t *)(lVar5 + 0xc0) != 0) {
    lVar17 = *(int64_t *)(*(int64_t *)(lVar5 + 0xc0) + 0x10);
  }
  fStack0000000000000028 = *(float *)(lVar5 + 0x14);
  local_buffer_2c = *(int32_t *)(lVar5 + 0x18);
  local_var_8 = 0x18052724d;
  NetworkSystem_92060(lVar5,param_2,*(uint64_t *)(param_1 + 0x8d8),param_3,*(int32_t *)(lVar5 + 0xc))
  ;
  if (*(int64_t *)(lVar5 + 0xc0) != 0) {
    lVar16 = *(int64_t *)(*(int64_t *)(lVar5 + 0xc0) + 0x10);
  }
  lVar14 = *(int64_t *)(param_1 + 0x20);
  if (lVar16 != 0) {
    puVar3 = (uint64_t *)(param_1 + 0x41c);
    *(uint64_t *)(param_1 + 0x45c) = *puVar3;
    *(uint64_t *)(param_1 + 0x464) = *(uint64_t *)(param_1 + 0x424);
    *(uint64_t *)(param_1 + 0x46c) = *(uint64_t *)(param_1 + 0x42c);
    *(uint64_t *)(param_1 + 0x474) = *(uint64_t *)(param_1 + 0x434);
    *(uint64_t *)(param_1 + 0x47c) = *(uint64_t *)(param_1 + 0x43c);
    *(uint64_t *)(param_1 + 0x484) = *(uint64_t *)(param_1 + 0x444);
    *(uint64_t *)(param_1 + 0x48c) = *(uint64_t *)(param_1 + 0x44c);
    *(uint64_t *)(param_1 + 0x494) = *(uint64_t *)(param_1 + 0x454);
    uVar11 = *(uint64_t *)(lVar16 + 0x78);
    *puVar3 = *(uint64_t *)(lVar16 + 0x70);
    *(uint64_t *)(param_1 + 0x424) = uVar11;
    uVar11 = *(uint64_t *)(lVar16 + 0x88);
    *(uint64_t *)(param_1 + 0x42c) = *(uint64_t *)(lVar16 + 0x80);
    *(uint64_t *)(param_1 + 0x434) = uVar11;
    uVar9 = *(int32_t *)(lVar16 + 0x94);
    uVar10 = *(int32_t *)(lVar16 + 0x98);
    uVar6 = *(int32_t *)(lVar16 + 0x9c);
    *(int32_t *)(param_1 + 0x43c) = *(int32_t *)(lVar16 + 0x90);
    *(int32_t *)(param_1 + 0x440) = uVar9;
    *(int32_t *)(param_1 + 0x444) = uVar10;
    *(int32_t *)(param_1 + 0x448) = uVar6;
    uVar9 = *(int32_t *)(lVar16 + 0xa4);
    uVar10 = *(int32_t *)(lVar16 + 0xa8);
    uVar6 = *(int32_t *)(lVar16 + 0xac);
    *(int32_t *)(param_1 + 0x44c) = *(int32_t *)(lVar16 + 0xa0);
    *(int32_t *)(param_1 + 0x450) = uVar9;
    *(int32_t *)(param_1 + 0x454) = uVar10;
    *(int32_t *)(param_1 + 0x458) = uVar6;
    if (lVar17 == lVar16) {
      local_var_8 = 0x1805272d0;
      cVar12 = Function_9bed5989((uint64_t *)(param_1 + 0x45c),puVar3,0x38d1b717);
      if ((cVar12 == '\0') || (*(char *)(param_1 + 0x418) != '\0')) {
        lVar16 = *(int64_t *)(param_1 + 0x8d8);
        local_var_8 = 0x1805272fa;
        local_buffer_60 = param_1;
        NetworkSystem_32ba0(lVar16 + 0x87b3b8,&local_buffer_00000060);
        local_var_8 = 0x180527307;
        iVar13 = _Cnd_signal(lVar16 + 0x87b620);
        if (iVar13 != 0) {
          local_var_8 = 0x180527313;
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
      }
    }
  }
  lVar16 = *(int64_t *)(param_1 + 0x590);
  if ((lVar16 != 0) && ((*(uint *)(param_1 + 0x56c) >> 0xb & 1) != 0)) {
    bVar15 = *(byte *)(lVar16 + 0x3424) | 8;
    if ((*(uint *)(lVar5 + 8) >> 2 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xf7;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    fVar20 = *(float *)(lVar5 + 0x38);
    fVar19 = *(float *)(lVar5 + 0x3c);
    if ((fVar20 == 0.0) && (fVar19 == 0.0)) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = SQRT(fVar20 * fVar20 + fVar19 * fVar19);
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
    }
    fVar20 = fVar20 * *(float *)(lVar5 + 0x54);
    local_var_8 = 0x1805273b4;
    Function_5a10a6f4(lVar16,fVar20 * fVar20);
    bVar15 = *(byte *)(lVar16 + 0x3424) | 0x10;
    if ((*(uint *)(lVar5 + 8) >> 4 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xef;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    *(int32_t *)(lVar16 + 0x25cc) = *(int32_t *)(lVar5 + 0x88);
    *(int32_t *)(lVar16 + 0x3460) = *(int32_t *)(lVar5 + 0x80);
  }
  local_var_8 = 0x180527402;
  NetworkSystem_22cf0(param_1);
  fVar20 = *(float *)(param_1 + 0x668);
  if (((fVar20 <= fStack0000000000000028) &&
      (pfVar1 = (float *)(lVar14 + 0x14), *pfVar1 <= fVar20 && fVar20 != *pfVar1)) &&
     (*(float *)(lVar5 + 0x2c) <= 0.0 && *(float *)(lVar5 + 0x2c) != 0.0)) {
    local_var_8 = 0x18052743e;
    NetworkSystem_2bfa0(param_1,10,*(int32_t *)(*(int64_t *)(render_system_data_memory + 0x20) + 100));
  }
  lVar5 = *(int64_t *)(param_1 + 0x20);
  fVar20 = *(float *)(lVar5 + 0xd8);
  if (0.0 < fVar20) {
    if (param_4 == (int64_t *)0x0) {
      puVar18 = (int32_t *)(lVar5 + 0xb0);
      local_var_c0 = 0xfffffffffffffffe;
      if (*(int *)(param_1 + 0x568) == 1) {
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
        lVar16 = *(int64_t *)(param_1 + 0x20);
        fVar19 = *(float *)(lVar16 + 0x14) + 0.01;
        uVar9 = *(int32_t *)(lVar16 + 0xc);
        uVar10 = *(int32_t *)(lVar16 + 0x10);
        local_var_138 = *(int32_t *)(lVar16 + 0xc);
        local_var_134 = *(int32_t *)(lVar16 + 0x10);
        local_var_12c = 0x7f7fffff;
        local_var_128 = *puVar18;
        local_var_124 = *(int32_t *)(lVar5 + 0xb4);
        local_var_120 = *(int32_t *)(lVar5 + 0xb8);
        local_var_11c = *(int32_t *)(lVar5 + 0xbc);
        cVar12 = *(char *)(*(int64_t *)
                            (*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        _local_var_dc = CONCAT31(local_buffer_ffffffffffffff25,cVar12);
        if (cVar12 < '\0') {
          local_var_253 = 0xff;
        }
        else if ((*(int64_t *)(param_1 + 0x658) == 0) ||
                (lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208), lVar17 == 0)) {
          local_var_253 = 8;
        }
        else {
          local_var_253 = *(int8_t *)
                        ((int64_t)cVar12 * 0x1b0 + 0x104 + *(int64_t *)(lVar17 + 0x140));
        }
        local_var_d8 = 2;
        iStack_e0 = *(int *)(param_1 + 0x560);
        if (iStack_e0 < 0) {
          iStack_e0 = *(int *)(param_1 + 0x10);
        }
        if (-1 < *(int *)(param_1 + 0x670)) {
          iStack_e0 = *(int *)(param_1 + 0x670);
        }
        lVar14 = (int64_t)iStack_e0;
        lVar17 = *(int64_t *)(param_1 + 0x8d8);
        if (*(int64_t *)(lVar5 + 200) == 0) {
          local_var_24c = 0xffffffff;
        }
        else {
          local_var_24c = *(int32_t *)(*(int64_t *)(lVar5 + 200) + 100);
        }
        uVar6 = *(int32_t *)(lVar16 + 0x24);
        uVar7 = *(int32_t *)(lVar16 + 0x28);
        uVar8 = *(int32_t *)(lVar16 + 0x30);
        fVar21 = -fVar20;
        fStack_130 = fVar19;
        local_var_118 = local_var_128;
        local_var_114 = local_var_124;
        local_var_110 = local_var_120;
        local_var_10c = local_var_11c;
        Function_4593c2d0(&local_var_270);
        lVar5 = render_system_data_memory;
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
        local_var_1c4 = *puVar18;
        local_var_1c0 = puVar18[1];
        local_var_1bc = puVar18[2];
        local_var_1b8 = puVar18[3];
        iVar13 = *(int *)(param_1 + 0x18);
        local_buffer_60 = CONCAT44(local_buffer_60._4_4_,iVar13);
        cStack_254 = cVar12;
        fStack_228 = fVar20;
        local_var_204 = uVar9;
        local_var_200 = uVar10;
        fStack_1fc = fVar19;
        local_var_1d4 = uVar6;
        local_var_1d0 = uVar7;
        fStack_1cc = fVar21;
        local_var_1c8 = uVar8;
        if ((iVar13 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar13);
        }
        iVar4 = *(int *)(lVar14 * 0xa60 + lVar17 + 0x30b8);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar4);
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
        (**(code **)(lVar5 + 0x1e0))
                  (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),&local_var_270,&local_var_b0
                   ,iVar4,iVar13);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar4);
        }
        if ((iVar13 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar13);
        }
      }
      return;
    }
    LOCK();
    plVar2 = param_4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    *(int64_t *)(*param_4 + (int64_t)(int)lVar5 * 8) = param_1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address