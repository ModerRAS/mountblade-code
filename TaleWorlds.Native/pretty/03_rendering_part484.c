#include "TaleWorlds.Native.Split.h"

// 03_rendering_part484.c - 2 个函数

// 函数: void FUN_1805271f0(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_1805271f0(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  int32_t *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lStackX_8;
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  char cStack_2ac;
  int8_t uStack_2ab;
  int8_t uStack_2aa;
  int32_t uStack_2a8;
  int32_t uStack_2a4;
  int8_t uStack_2a0;
  int32_t uStack_29c;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  int32_t uStack_288;
  int32_t uStack_284;
  float fStack_280;
  uint64_t uStack_27c;
  uint64_t uStack_274;
  uint64_t uStack_26c;
  uint64_t uStack_264;
  int32_t uStack_25c;
  int32_t uStack_258;
  float fStack_254;
  int32_t uStack_250;
  uint64_t uStack_24c;
  uint64_t uStack_244;
  uint64_t uStack_23c;
  uint64_t uStack_234;
  int32_t uStack_22c;
  int32_t uStack_228;
  float fStack_224;
  int32_t uStack_220;
  int32_t uStack_21c;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int16_t uStack_198;
  undefined6 uStack_196;
  int32_t uStack_190;
  int32_t uStack_18c;
  float fStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t uStack_144;
  int32_t uStack_13c;
  int iStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  uint64_t uStack_118;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  int iStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_38;
  int32_t uStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  lVar16 = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar17 = lVar16;
  if (*(longlong *)(lVar5 + 0xc0) != 0) {
    lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x10);
  }
  uStack_38 = *(int32_t *)(lVar5 + 0xc);
  uStack_34 = *(int32_t *)(lVar5 + 0x10);
  fStack_30 = *(float *)(lVar5 + 0x14);
  uStack_2c = *(int32_t *)(lVar5 + 0x18);
  uStack_60 = 0x18052724d;
  FUN_180592060(lVar5,param_2,*(uint64_t *)(param_1 + 0x8d8),param_3);
  if (*(longlong *)(lVar5 + 0xc0) != 0) {
    lVar16 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x10);
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
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
      uStack_60 = 0x1805272d0;
      cVar12 = func_0x000180285f10((uint64_t *)(param_1 + 0x45c),puVar3,0x38d1b717);
      if ((cVar12 == '\0') || (*(char *)(param_1 + 0x418) != '\0')) {
        lVar16 = *(longlong *)(param_1 + 0x8d8);
        uStack_60 = 0x1805272fa;
        lStackX_8 = param_1;
        FUN_180532ba0(lVar16 + 0x87b3b8,&lStackX_8);
        uStack_60 = 0x180527307;
        iVar13 = _Cnd_signal(lVar16 + 0x87b620);
        if (iVar13 != 0) {
          uStack_60 = 0x180527313;
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
      }
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x590);
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
    uStack_60 = 0x1805273b4;
    func_0x00018057a770(lVar16,fVar20 * fVar20);
    bVar15 = *(byte *)(lVar16 + 0x3424) | 0x10;
    if ((*(uint *)(lVar5 + 8) >> 4 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xef;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    *(int32_t *)(lVar16 + 0x25cc) = *(int32_t *)(lVar5 + 0x88);
    *(int32_t *)(lVar16 + 0x3460) = *(int32_t *)(lVar5 + 0x80);
  }
  uStack_60 = 0x180527402;
  FUN_180522cf0(param_1);
  fVar20 = *(float *)(param_1 + 0x668);
  if (((fVar20 <= fStack_30) &&
      (pfVar1 = (float *)(lVar14 + 0x14), *pfVar1 <= fVar20 && fVar20 != *pfVar1)) &&
     (*(float *)(lVar5 + 0x2c) <= 0.0 && *(float *)(lVar5 + 0x2c) != 0.0)) {
    uStack_60 = 0x18052743e;
    FUN_18052bfa0(param_1,10,*(int32_t *)(*(longlong *)(_DAT_180c8aa00 + 0x20) + 100));
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  fVar20 = *(float *)(lVar5 + 0xd8);
  if (0.0 < fVar20) {
    if (param_4 == (longlong *)0x0) {
      puVar18 = (int32_t *)(lVar5 + 0xb0);
      uStack_118 = 0xfffffffffffffffe;
      if (*(int *)(param_1 + 0x568) == 1) {
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = CONCAT31(uStack_1a4._1_3_,0xff);
        uStack_1a0 = 0xffffffff;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_144 = 1;
        uStack_134 = CONCAT22(uStack_134._2_2_,0xff00);
        uStack_128 = 0;
        uStack_12c = CONCAT13(uStack_12c._3_1_,0x10000);
        uStack_13c = 0;
        lVar16 = *(longlong *)(param_1 + 0x20);
        fVar19 = *(float *)(lVar16 + 0x14) + 0.01;
        uVar9 = *(int32_t *)(lVar16 + 0xc);
        uVar10 = *(int32_t *)(lVar16 + 0x10);
        uStack_190 = *(int32_t *)(lVar16 + 0xc);
        uStack_18c = *(int32_t *)(lVar16 + 0x10);
        uStack_184 = 0x7f7fffff;
        uStack_180 = *puVar18;
        uStack_17c = *(int32_t *)(lVar5 + 0xb4);
        uStack_178 = *(int32_t *)(lVar5 + 0xb8);
        uStack_174 = *(int32_t *)(lVar5 + 0xbc);
        cVar12 = *(char *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        uStack_134 = CONCAT31(uStack_134._1_3_,cVar12);
        if (cVar12 < '\0') {
          uStack_2ab = 0xff;
        }
        else if ((*(longlong *)(param_1 + 0x658) == 0) ||
                (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208), lVar17 == 0)) {
          uStack_2ab = 8;
        }
        else {
          uStack_2ab = *(int8_t *)
                        ((longlong)cVar12 * 0x1b0 + 0x104 + *(longlong *)(lVar17 + 0x140));
        }
        uStack_130 = 2;
        iStack_138 = *(int *)(param_1 + 0x560);
        if (iStack_138 < 0) {
          iStack_138 = *(int *)(param_1 + 0x10);
        }
        if (-1 < *(int *)(param_1 + 0x670)) {
          iStack_138 = *(int *)(param_1 + 0x670);
        }
        lVar14 = (longlong)iStack_138;
        lVar17 = *(longlong *)(param_1 + 0x8d8);
        if (*(longlong *)(lVar5 + 200) == 0) {
          uStack_2a4 = 0xffffffff;
        }
        else {
          uStack_2a4 = *(int32_t *)(*(longlong *)(lVar5 + 200) + 100);
        }
        uVar6 = *(int32_t *)(lVar16 + 0x24);
        uVar7 = *(int32_t *)(lVar16 + 0x28);
        uVar8 = *(int32_t *)(lVar16 + 0x30);
        fVar21 = -fVar20;
        fStack_188 = fVar19;
        uStack_170 = uStack_180;
        uStack_16c = uStack_17c;
        uStack_168 = uStack_178;
        uStack_164 = uStack_174;
        func_0x0001805345e0(&uStack_2c8);
        lVar5 = _DAT_180c8ece0;
        uStack_2c8 = 0x1000000;
        uStack_2c0 = 0;
        uStack_2a0 = 0;
        uStack_2b8 = 0xffffffffffffffff;
        uStack_2aa = 0xff;
        uStack_2a8 = 0xffffffff;
        uStack_29c = 0xffc00000;
        uStack_298 = 0xffc00000;
        uStack_294 = 0xffc00000;
        uStack_290 = 0xffc00000;
        uStack_28c = 0xffc00000;
        uStack_288 = 0xffc00000;
        uStack_284 = 0xffc00000;
        uStack_27c = 0x7fc000007fc00000;
        uStack_274 = 0x7fc000007fc00000;
        uStack_26c = 0x7fc000007fc00000;
        uStack_264 = 0x7fc000007fc00000;
        uStack_24c = 0x7fc000007fc00000;
        uStack_244 = 0x7fc000007fc00000;
        uStack_23c = 0x7fc000007fc00000;
        uStack_234 = 0x7fc000007fc00000;
        uStack_2bc = 1;
        uStack_2b0 = 2;
        uStack_250 = 0x7f7fffff;
        uStack_21c = *puVar18;
        uStack_218 = puVar18[1];
        uStack_214 = puVar18[2];
        uStack_210 = puVar18[3];
        iVar13 = *(int *)(param_1 + 0x18);
        lStackX_8 = CONCAT44(lStackX_8._4_4_,iVar13);
        cStack_2ac = cVar12;
        fStack_280 = fVar20;
        uStack_25c = uVar9;
        uStack_258 = uVar10;
        fStack_254 = fVar19;
        uStack_22c = uVar6;
        uStack_228 = uVar7;
        fStack_224 = fVar21;
        uStack_220 = uVar8;
        if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar13);
        }
        iVar4 = *(int *)(lVar14 * 0xa60 + lVar17 + 0x30b8);
        if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar4);
        }
        uStack_108 = uStack_1e8;
        uStack_100 = uStack_1e0;
        uStack_f8 = uStack_1d8;
        uStack_f0 = uStack_1d0;
        uStack_e8 = uStack_1c8;
        uStack_e0 = uStack_1c0;
        uStack_d8 = CONCAT44(uStack_1b4,uStack_1b8);
        uStack_d0 = uStack_1b0;
        uStack_c8 = CONCAT44(uStack_1a4,uStack_1a8);
        uStack_c0 = CONCAT44(uStack_19c,uStack_1a0);
        uStack_b8 = CONCAT62(uStack_196,uStack_198);
        uStack_b0 = CONCAT44(uStack_18c,uStack_190);
        uStack_a8 = CONCAT44(uStack_184,fStack_188);
        uStack_a0 = CONCAT44(uStack_17c,uStack_180);
        uStack_98 = CONCAT44(uStack_174,uStack_178);
        uStack_90 = CONCAT44(uStack_16c,uStack_170);
        uStack_88 = CONCAT44(uStack_164,uStack_168);
        uStack_80 = uStack_160;
        uStack_78 = uStack_158;
        uStack_70 = uStack_150;
        uStack_68 = uStack_148;
        uStack_64 = (int32_t)uStack_144;
        uStack_60 = CONCAT44(uStack_13c,uStack_144._4_4_);
        iStack_58 = iStack_138;
        uStack_54 = uStack_134;
        uStack_50 = uStack_130;
        uStack_4c = uStack_12c;
        uStack_48 = CONCAT44(uStack_124,uStack_128);
        (**(code **)(lVar5 + 0x1e0))
                  (*(int32_t *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),&uStack_2c8,
                   &uStack_108,iVar4,iVar13);
        if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar4);
        }
        if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar13);
        }
      }
      return;
    }
    LOCK();
    plVar2 = param_4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    *(longlong *)(*param_4 + (longlong)(int)lVar5 * 8) = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805271f8(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_1805271f8(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  int32_t *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  longlong in_stack_00000060;
  uint64_t uStack_270;
  int32_t uStack_268;
  int32_t uStack_264;
  uint64_t uStack_260;
  int32_t uStack_258;
  char cStack_254;
  int8_t uStack_253;
  int8_t uStack_252;
  int32_t uStack_250;
  int32_t uStack_24c;
  int8_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int32_t uStack_22c;
  float fStack_228;
  uint64_t uStack_224;
  uint64_t uStack_21c;
  uint64_t uStack_214;
  uint64_t uStack_20c;
  int32_t uStack_204;
  int32_t uStack_200;
  float fStack_1fc;
  int32_t uStack_1f8;
  uint64_t uStack_1f4;
  uint64_t uStack_1ec;
  uint64_t uStack_1e4;
  uint64_t uStack_1dc;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  float fStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_15c;
  uint64_t uStack_158;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int16_t uStack_140;
  undefined6 uStack_13e;
  int32_t uStack_138;
  int32_t uStack_134;
  float fStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  uint64_t uStack_ec;
  int32_t uStack_e4;
  int iStack_e0;
  int16_t uStack_dc;
  int16_t uStack_da;
  int32_t uStack_d8;
  undefined3 uStack_d4;
  int8_t uStack_d1;
  int32_t uStack_d0;
  uint64_t uStack_c0;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  uint64_t uStack_8;
  
  lVar16 = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar17 = lVar16;
  if (*(longlong *)(lVar5 + 0xc0) != 0) {
    lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x10);
  }
  fStack0000000000000028 = *(float *)(lVar5 + 0x14);
  uStack000000000000002c = *(int32_t *)(lVar5 + 0x18);
  uStack_8 = 0x18052724d;
  FUN_180592060(lVar5,param_2,*(uint64_t *)(param_1 + 0x8d8),param_3,*(int32_t *)(lVar5 + 0xc))
  ;
  if (*(longlong *)(lVar5 + 0xc0) != 0) {
    lVar16 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x10);
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
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
      uStack_8 = 0x1805272d0;
      cVar12 = func_0x000180285f10((uint64_t *)(param_1 + 0x45c),puVar3,0x38d1b717);
      if ((cVar12 == '\0') || (*(char *)(param_1 + 0x418) != '\0')) {
        lVar16 = *(longlong *)(param_1 + 0x8d8);
        uStack_8 = 0x1805272fa;
        in_stack_00000060 = param_1;
        FUN_180532ba0(lVar16 + 0x87b3b8,&stack0x00000060);
        uStack_8 = 0x180527307;
        iVar13 = _Cnd_signal(lVar16 + 0x87b620);
        if (iVar13 != 0) {
          uStack_8 = 0x180527313;
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
      }
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x590);
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
    uStack_8 = 0x1805273b4;
    func_0x00018057a770(lVar16,fVar20 * fVar20);
    bVar15 = *(byte *)(lVar16 + 0x3424) | 0x10;
    if ((*(uint *)(lVar5 + 8) >> 4 & 1) == 0) {
      bVar15 = *(byte *)(lVar16 + 0x3424) & 0xef;
    }
    *(byte *)(lVar16 + 0x3424) = bVar15;
    *(int32_t *)(lVar16 + 0x25cc) = *(int32_t *)(lVar5 + 0x88);
    *(int32_t *)(lVar16 + 0x3460) = *(int32_t *)(lVar5 + 0x80);
  }
  uStack_8 = 0x180527402;
  FUN_180522cf0(param_1);
  fVar20 = *(float *)(param_1 + 0x668);
  if (((fVar20 <= fStack0000000000000028) &&
      (pfVar1 = (float *)(lVar14 + 0x14), *pfVar1 <= fVar20 && fVar20 != *pfVar1)) &&
     (*(float *)(lVar5 + 0x2c) <= 0.0 && *(float *)(lVar5 + 0x2c) != 0.0)) {
    uStack_8 = 0x18052743e;
    FUN_18052bfa0(param_1,10,*(int32_t *)(*(longlong *)(_DAT_180c8aa00 + 0x20) + 100));
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  fVar20 = *(float *)(lVar5 + 0xd8);
  if (0.0 < fVar20) {
    if (param_4 == (longlong *)0x0) {
      puVar18 = (int32_t *)(lVar5 + 0xb0);
      uStack_c0 = 0xfffffffffffffffe;
      if (*(int *)(param_1 + 0x568) == 1) {
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_14c = CONCAT31(uStack_14c._1_3_,0xff);
        uStack_148 = 0xffffffff;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_ec = 1;
        _uStack_dc = CONCAT22(uStack_da,0xff00);
        uStack_d0 = 0;
        _uStack_d4 = CONCAT13(uStack_d1,0x10000);
        uStack_e4 = 0;
        lVar16 = *(longlong *)(param_1 + 0x20);
        fVar19 = *(float *)(lVar16 + 0x14) + 0.01;
        uVar9 = *(int32_t *)(lVar16 + 0xc);
        uVar10 = *(int32_t *)(lVar16 + 0x10);
        uStack_138 = *(int32_t *)(lVar16 + 0xc);
        uStack_134 = *(int32_t *)(lVar16 + 0x10);
        uStack_12c = 0x7f7fffff;
        uStack_128 = *puVar18;
        uStack_124 = *(int32_t *)(lVar5 + 0xb4);
        uStack_120 = *(int32_t *)(lVar5 + 0xb8);
        uStack_11c = *(int32_t *)(lVar5 + 0xbc);
        cVar12 = *(char *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        _uStack_dc = CONCAT31(stack0xffffffffffffff25,cVar12);
        if (cVar12 < '\0') {
          uStack_253 = 0xff;
        }
        else if ((*(longlong *)(param_1 + 0x658) == 0) ||
                (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208), lVar17 == 0)) {
          uStack_253 = 8;
        }
        else {
          uStack_253 = *(int8_t *)
                        ((longlong)cVar12 * 0x1b0 + 0x104 + *(longlong *)(lVar17 + 0x140));
        }
        uStack_d8 = 2;
        iStack_e0 = *(int *)(param_1 + 0x560);
        if (iStack_e0 < 0) {
          iStack_e0 = *(int *)(param_1 + 0x10);
        }
        if (-1 < *(int *)(param_1 + 0x670)) {
          iStack_e0 = *(int *)(param_1 + 0x670);
        }
        lVar14 = (longlong)iStack_e0;
        lVar17 = *(longlong *)(param_1 + 0x8d8);
        if (*(longlong *)(lVar5 + 200) == 0) {
          uStack_24c = 0xffffffff;
        }
        else {
          uStack_24c = *(int32_t *)(*(longlong *)(lVar5 + 200) + 100);
        }
        uVar6 = *(int32_t *)(lVar16 + 0x24);
        uVar7 = *(int32_t *)(lVar16 + 0x28);
        uVar8 = *(int32_t *)(lVar16 + 0x30);
        fVar21 = -fVar20;
        fStack_130 = fVar19;
        uStack_118 = uStack_128;
        uStack_114 = uStack_124;
        uStack_110 = uStack_120;
        uStack_10c = uStack_11c;
        func_0x0001805345e0(&uStack_270);
        lVar5 = _DAT_180c8ece0;
        uStack_270 = 0x1000000;
        uStack_268 = 0;
        uStack_248 = 0;
        uStack_260 = 0xffffffffffffffff;
        uStack_252 = 0xff;
        uStack_250 = 0xffffffff;
        uStack_244 = 0xffc00000;
        uStack_240 = 0xffc00000;
        uStack_23c = 0xffc00000;
        uStack_238 = 0xffc00000;
        uStack_234 = 0xffc00000;
        uStack_230 = 0xffc00000;
        uStack_22c = 0xffc00000;
        uStack_224 = 0x7fc000007fc00000;
        uStack_21c = 0x7fc000007fc00000;
        uStack_214 = 0x7fc000007fc00000;
        uStack_20c = 0x7fc000007fc00000;
        uStack_1f4 = 0x7fc000007fc00000;
        uStack_1ec = 0x7fc000007fc00000;
        uStack_1e4 = 0x7fc000007fc00000;
        uStack_1dc = 0x7fc000007fc00000;
        uStack_264 = 1;
        uStack_258 = 2;
        uStack_1f8 = 0x7f7fffff;
        uStack_1c4 = *puVar18;
        uStack_1c0 = puVar18[1];
        uStack_1bc = puVar18[2];
        uStack_1b8 = puVar18[3];
        iVar13 = *(int *)(param_1 + 0x18);
        in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,iVar13);
        cStack_254 = cVar12;
        fStack_228 = fVar20;
        uStack_204 = uVar9;
        uStack_200 = uVar10;
        fStack_1fc = fVar19;
        uStack_1d4 = uVar6;
        uStack_1d0 = uVar7;
        fStack_1cc = fVar21;
        uStack_1c8 = uVar8;
        if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar13);
        }
        iVar4 = *(int *)(lVar14 * 0xa60 + lVar17 + 0x30b8);
        if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar4);
        }
        uStack_b0 = uStack_190;
        uStack_a8 = uStack_188;
        uStack_a0 = uStack_180;
        uStack_98 = uStack_178;
        uStack_90 = uStack_170;
        uStack_88 = uStack_168;
        uStack_80 = CONCAT44(uStack_15c,uStack_160);
        uStack_78 = uStack_158;
        uStack_70 = CONCAT44(uStack_14c,uStack_150);
        uStack_68 = CONCAT44(uStack_144,uStack_148);
        uStack_60 = CONCAT62(uStack_13e,uStack_140);
        uStack_58 = CONCAT44(uStack_134,uStack_138);
        uStack_50 = CONCAT44(uStack_12c,fStack_130);
        uStack_48 = CONCAT44(uStack_124,uStack_128);
        uStack_40 = CONCAT44(uStack_11c,uStack_120);
        uStack_38 = CONCAT44(uStack_114,uStack_118);
        uStack_30 = CONCAT44(uStack_10c,uStack_110);
        uStack_28 = uStack_108;
        uStack_20 = uStack_100;
        uStack_18 = uStack_f8;
        uStack_10 = uStack_f0;
        uStack_c = (int32_t)uStack_ec;
        uStack_8 = CONCAT44(uStack_e4,uStack_ec._4_4_);
        (**(code **)(lVar5 + 0x1e0))
                  (*(int32_t *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),&uStack_270,&uStack_b0
                   ,iVar4,iVar13);
        if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar4);
        }
        if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar13);
        }
      }
      return;
    }
    LOCK();
    plVar2 = param_4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    *(longlong *)(*param_4 + (longlong)(int)lVar5 * 8) = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



