#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part485.c - 5 个函数

// 函数: void FUN_180527330(void)
void FUN_180527330(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  longlong lVar12;
  byte bVar13;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  char cVar14;
  int32_t *puVar15;
  longlong *unaff_R14;
  longlong unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float in_stack_00000028;
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
  uint8_t uStack_13e;
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
  uint32_t uStack_d4;
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
    uStack_8 = 0x1805273b4;
    func_0x00018057a770(in_R9,fVar17 * fVar17);
    bVar13 = *(byte *)(in_R9 + 0x3424) | 0x10;
    if ((*(uint *)(unaff_RSI + 8) >> 4 & 1) == 0) {
      bVar13 = *(byte *)(in_R9 + 0x3424) & 0xef;
    }
    *(byte *)(in_R9 + 0x3424) = bVar13;
    *(int32_t *)(in_R9 + 0x25cc) = *(int32_t *)(unaff_RSI + 0x88);
    *(int32_t *)(in_R9 + 0x3460) = *(int32_t *)(unaff_RSI + 0x80);
  }
  uStack_8 = 0x180527402;
  FUN_180522cf0();
  fVar17 = *(float *)(unaff_RDI + 0x668);
  if (((fVar17 <= in_stack_00000028) &&
      (*(float *)(unaff_R15 + 0x14) <= fVar17 && fVar17 != *(float *)(unaff_R15 + 0x14))) &&
     (*(float *)(unaff_RSI + 0x2c) <= unaff_XMM6_Da && unaff_XMM6_Da != *(float *)(unaff_RSI + 0x2c)
     )) {
    uStack_8 = 0x18052743e;
    FUN_18052bfa0(in_stack_00000028,10,*(int32_t *)(*(longlong *)(_DAT_180c8aa00 + 0x20) + 100));
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x20);
  fVar17 = *(float *)(lVar6 + 0xd8);
  if (unaff_XMM6_Da < fVar17) {
    if (unaff_R14 == (longlong *)0x0) {
      puVar15 = (int32_t *)(lVar6 + 0xb0);
      uStack_c0 = 0xfffffffffffffffe;
      if (*(int *)(unaff_RDI + 0x568) == 1) {
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
        lVar4 = *(longlong *)(unaff_RDI + 0x20);
        fVar16 = *(float *)(lVar4 + 0x14) + 0.01;
        uVar10 = *(int32_t *)(lVar4 + 0xc);
        uVar11 = *(int32_t *)(lVar4 + 0x10);
        uStack_138 = *(int32_t *)(lVar4 + 0xc);
        uStack_134 = *(int32_t *)(lVar4 + 0x10);
        uStack_12c = 0x7f7fffff;
        uStack_128 = *puVar15;
        uStack_124 = *(int32_t *)(lVar6 + 0xb4);
        uStack_120 = *(int32_t *)(lVar6 + 0xb8);
        uStack_11c = *(int32_t *)(lVar6 + 0xbc);
        cVar14 = *(char *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(unaff_RDI + 0x6d8) + 0x8a8) + 0x260) +
                            0x210) + 0xe6);
        _uStack_dc = CONCAT31(stack0xffffffffffffff25,cVar14);
        if (cVar14 < '\0') {
          uStack_253 = 0xff;
        }
        else if ((*(longlong *)(unaff_RDI + 0x658) == 0) ||
                (lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x658) + 0x208), lVar5 == 0)) {
          uStack_253 = 8;
        }
        else {
          uStack_253 = *(int8_t *)
                        ((longlong)cVar14 * 0x1b0 + 0x104 + *(longlong *)(lVar5 + 0x140));
        }
        uStack_d8 = 2;
        iStack_e0 = *(int *)(unaff_RDI + 0x560);
        if (iStack_e0 < 0) {
          iStack_e0 = *(int *)(unaff_RDI + 0x10);
        }
        if (-1 < *(int *)(unaff_RDI + 0x670)) {
          iStack_e0 = *(int *)(unaff_RDI + 0x670);
        }
        lVar12 = (longlong)iStack_e0;
        lVar5 = *(longlong *)(unaff_RDI + 0x8d8);
        if (*(longlong *)(lVar6 + 200) == 0) {
          uStack_24c = 0xffffffff;
        }
        else {
          uStack_24c = *(int32_t *)(*(longlong *)(lVar6 + 200) + 100);
        }
        uVar7 = *(int32_t *)(lVar4 + 0x24);
        uVar8 = *(int32_t *)(lVar4 + 0x28);
        uVar9 = *(int32_t *)(lVar4 + 0x30);
        fVar18 = -fVar17;
        fStack_130 = fVar16;
        uStack_118 = uStack_128;
        uStack_114 = uStack_124;
        uStack_110 = uStack_120;
        uStack_10c = uStack_11c;
        func_0x0001805345e0(&uStack_270);
        lVar6 = _DAT_180c8ece0;
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
        uStack_1c4 = *puVar15;
        uStack_1c0 = puVar15[1];
        uStack_1bc = puVar15[2];
        uStack_1b8 = puVar15[3];
        iVar2 = *(int *)(unaff_RDI + 0x18);
        cStack_254 = cVar14;
        fStack_228 = fVar17;
        uStack_204 = uVar10;
        uStack_200 = uVar11;
        fStack_1fc = fVar16;
        uStack_1d4 = uVar7;
        uStack_1d0 = uVar8;
        fStack_1cc = fVar18;
        uStack_1c8 = uVar9;
        if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
        }
        iVar3 = *(int *)(lVar12 * 0xa60 + lVar5 + 0x30b8);
        if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
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
        (**(code **)(lVar6 + 0x1e0))
                  (*(int32_t *)(*(longlong *)(unaff_RDI + 0x8d8) + 0x98d928),&uStack_270,
                   &uStack_b0,iVar3,iVar2);
        if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
        }
        if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
        }
      }
      return;
    }
    LOCK();
    plVar1 = unaff_R14 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    *(longlong *)(*unaff_R14 + (longlong)(int)lVar6 * 8) = unaff_RDI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052745f(uint64_t param_1,uint64_t param_2,longlong param_3,uint param_4)
void FUN_18052745f(uint64_t param_1,uint64_t param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  longlong lVar11;
  longlong unaff_RDI;
  char cVar12;
  int32_t *puVar13;
  longlong *unaff_R14;
  float fVar14;
  uint uVar15;
  uint64_t in_stack_00000050;
  uint64_t uStack0000000000000078;
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
  uint uStack_228;
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
  uint uStack_1cc;
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
  uint8_t uStack_13e;
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
  uint32_t uStack_d4;
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
  int32_t uStack_8;
  int32_t uStack_4;
  
  if (unaff_R14 == (longlong *)0x0) {
    puVar13 = (int32_t *)(param_3 + 0xb0);
    uStack_c0 = 0xfffffffffffffffe;
    uStack0000000000000078 = in_stack_00000050;
    if (*(int *)(unaff_RDI + 0x568) == 1) {
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
      lVar4 = *(longlong *)(unaff_RDI + 0x20);
      fVar14 = *(float *)(lVar4 + 0x14) + 0.01;
      uVar9 = *(int32_t *)(lVar4 + 0xc);
      uVar10 = *(int32_t *)(lVar4 + 0x10);
      uStack_138 = *(int32_t *)(lVar4 + 0xc);
      uStack_134 = *(int32_t *)(lVar4 + 0x10);
      uStack_12c = 0x7f7fffff;
      uStack_128 = *puVar13;
      uStack_124 = *(int32_t *)(param_3 + 0xb4);
      uStack_120 = *(int32_t *)(param_3 + 0xb8);
      uStack_11c = *(int32_t *)(param_3 + 0xbc);
      cVar12 = *(char *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(unaff_RDI + 0x6d8) + 0x8a8) + 0x260) +
                          0x210) + 0xe6);
      _uStack_dc = CONCAT31(stack0xffffffffffffff25,cVar12);
      if (cVar12 < '\0') {
        uStack_253 = 0xff;
      }
      else if ((*(longlong *)(unaff_RDI + 0x658) == 0) ||
              (lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x658) + 0x208), lVar5 == 0)) {
        uStack_253 = 8;
      }
      else {
        uStack_253 = *(int8_t *)
                      ((longlong)cVar12 * 0x1b0 + 0x104 + *(longlong *)(lVar5 + 0x140));
      }
      uStack_d8 = 2;
      iStack_e0 = *(int *)(unaff_RDI + 0x560);
      if (iStack_e0 < 0) {
        iStack_e0 = *(int *)(unaff_RDI + 0x10);
      }
      if (-1 < *(int *)(unaff_RDI + 0x670)) {
        iStack_e0 = *(int *)(unaff_RDI + 0x670);
      }
      lVar11 = (longlong)iStack_e0;
      lVar5 = *(longlong *)(unaff_RDI + 0x8d8);
      if (*(longlong *)(param_3 + 200) == 0) {
        uStack_24c = 0xffffffff;
      }
      else {
        uStack_24c = *(int32_t *)(*(longlong *)(param_3 + 200) + 100);
      }
      uVar6 = *(int32_t *)(lVar4 + 0x24);
      uVar7 = *(int32_t *)(lVar4 + 0x28);
      uVar8 = *(int32_t *)(lVar4 + 0x30);
      uVar15 = param_4 ^ 0x80000000;
      fStack_130 = fVar14;
      uStack_118 = uStack_128;
      uStack_114 = uStack_124;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      func_0x0001805345e0(&uStack_270);
      lVar4 = _DAT_180c8ece0;
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
      uStack_1c4 = *puVar13;
      uStack_1c0 = puVar13[1];
      uStack_1bc = puVar13[2];
      uStack_1b8 = puVar13[3];
      iVar2 = *(int *)(unaff_RDI + 0x18);
      cStack_254 = cVar12;
      uStack_228 = param_4;
      uStack_204 = uVar9;
      uStack_200 = uVar10;
      fStack_1fc = fVar14;
      uStack_1d4 = uVar6;
      uStack_1d0 = uVar7;
      uStack_1cc = uVar15;
      uStack_1c8 = uVar8;
      if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
      }
      iVar3 = *(int *)(lVar11 * 0xa60 + lVar5 + 0x30b8);
      if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
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
      uStack_8 = uStack_ec._4_4_;
      uStack_4 = uStack_e4;
      (**(code **)(lVar4 + 0x1e0))
                (*(int32_t *)(*(longlong *)(unaff_RDI + 0x8d8) + 0x98d928),&uStack_270,&uStack_b0
                 ,iVar3,iVar2);
      if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
      }
      if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
      }
    }
    return;
  }
  LOCK();
  plVar1 = unaff_R14 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *(longlong *)(*unaff_R14 + (longlong)(int)lVar4 * 8) = unaff_RDI;
  return;
}





// 函数: void FUN_1805274a0(longlong param_1)
void FUN_1805274a0(longlong param_1)

{
  float *pfVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(lVar8 + 0xc0);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x10);
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
    bVar6 = func_0x000180285f10(param_1 + 0x45c,pfVar1);
    bVar6 = bVar6 ^ 1;
    if ((bVar6 != 0) || (*(char *)(param_1 + 0x418) != '\0')) {
      *(byte *)(param_1 + 0x418) = bVar6;
      if ((bVar6 == 0) ||
         ((*(longlong *)(lVar8 + 0xc0) == 0 ||
          (*(longlong *)(*(longlong *)(lVar8 + 0xc0) + 0x10) == 0)))) {
        fVar9 = 0.0;
        fVar10 = 0.0;
        fVar11 = 0.0;
      }
      else {
        FUN_1801c13c0(extraout_XMM0_Da,&fStack_18,lVar8 + 0xc);
        lVar7 = *(longlong *)(param_1 + 0x20);
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
    FUN_18051b7e0(param_1);
  }
  return;
}





// 函数: void FUN_1805274ca(uint64_t param_1)
void FUN_1805274ca(uint64_t param_1)

{
  float *pfVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  byte bVar7;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBX;
  longlong in_R10;
  int32_t extraout_XMM0_Da;
  float fVar8;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar9;
  float fVar10;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  
  pfVar1 = (float *)(in_RCX + 0x41c);
  *pfVar1 = (float)param_1;
  *(int *)(in_RCX + 0x420) = (int)((ulonglong)param_1 >> 0x20);
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
  bVar7 = func_0x000180285f10(in_RCX + 0x45c,pfVar1);
  bVar7 = bVar7 ^ 1;
  if ((bVar7 != 0) || (*(char *)(unaff_RBX + 0x418) != '\0')) {
    *(byte *)(unaff_RBX + 0x418) = bVar7;
    if ((bVar7 == 0) ||
       ((*(longlong *)(in_R10 + 0xc0) == 0 ||
        (*(longlong *)(*(longlong *)(in_R10 + 0xc0) + 0x10) == 0)))) {
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    else {
      FUN_1801c13c0(extraout_XMM0_Da,&fStackX_20,in_R10 + 0xc);
      lVar2 = *(longlong *)(unaff_RBX + 0x20);
      fVar8 = (*(float *)(in_RCX + 0x42c) * fStackX_24 + *pfVar1 * fStackX_20 +
               *(float *)(in_RCX + 0x43c) * in_stack_00000028 + *(float *)(in_RCX + 0x44c)) -
              *(float *)(lVar2 + 0xc);
      fVar9 = (*(float *)(in_RCX + 0x430) * fStackX_24 + *(float *)(in_RCX + 0x420) * fStackX_20 +
               *(float *)(in_RCX + 0x440) * in_stack_00000028 + *(float *)(in_RCX + 0x450)) -
              *(float *)(lVar2 + 0x10);
      fVar10 = (*(float *)(in_RCX + 0x434) * fStackX_24 + *(float *)(in_RCX + 0x424) * fStackX_20 +
                *(float *)(in_RCX + 0x444) * in_stack_00000028 + *(float *)(in_RCX + 0x454)) -
               *(float *)(lVar2 + 0x14);
    }
    *(float *)(in_R10 + 0xc) = fVar8 + *(float *)(in_R10 + 0xc);
    *(float *)(in_R10 + 0x10) = fVar9 + *(float *)(in_R10 + 0x10);
    *(float *)(in_R10 + 0x14) = fVar10 + *(float *)(in_R10 + 0x14);
  }
  FUN_18051b7e0();
  return;
}





// 函数: void FUN_1805275ec(void)
void FUN_1805275ec(void)

{
  return;
}



float FUN_180527600(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar3 = *(int32_t *)(lVar2 + 0x2498);
  if (param_2 != '\0') {
    lVar1 = FUN_18058b980(lVar2,uVar3);
    lVar2 = *(longlong *)(param_1 + 0x590);
    if (lVar1 == 0) {
      uVar3 = *(int32_t *)(lVar2 + 0x2450);
    }
    else {
      uVar3 = *(int32_t *)(lVar2 + 0x2498);
    }
  }
  lVar2 = FUN_18058b980(lVar2,uVar3);
  if ((lVar2 == 0) || (fVar4 = *(float *)(lVar2 + 0x5c), fVar4 < 0.0)) {
    fVar4 = 0.1;
  }
  if (param_3 == '\0') {
    fVar4 = fVar4 * *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  }
  return fVar4;
}



ulonglong FUN_180527690(longlong param_1,uint64_t *param_2,char param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int32_t uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x590);
  uVar6 = *(int32_t *)(lVar5 + 0x2498);
  if (param_3 != '\0') {
    lVar3 = FUN_18058b980(lVar5,uVar6);
    lVar5 = *(longlong *)(param_1 + 0x590);
    if (lVar3 == 0) {
      uVar6 = *(int32_t *)(lVar5 + 0x2450);
    }
    else {
      uVar6 = *(int32_t *)(lVar5 + 0x2498);
    }
  }
  puVar4 = (uint64_t *)FUN_18058b980(lVar5,uVar6);
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
    return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}



char FUN_180527720(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_18058b980();
  if ((lVar2 == 0) || (cVar1 = *(char *)(lVar2 + 100), cVar1 < '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x590);
    if (*(longlong *)(lVar2 + 0x24a8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x24a8) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar2 + 0x24b8) | uVar3) >> 0x16 & 1) != 0) {
      return *(char *)(lVar2 + 0x25fc);
    }
    cVar1 = *(char *)(lVar2 + 0x25fb);
  }
  return cVar1;
}



int8_t FUN_1805277a0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18058b980(*(longlong *)(param_1 + 0x590),
                        *(int32_t *)
                         (*(longlong *)(param_1 + 0x590) + 0x2450 + (longlong)param_2 * 0x48));
  if (lVar1 != 0) {
    return *(int8_t *)(lVar1 + 0x65);
  }
  return 0xff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



