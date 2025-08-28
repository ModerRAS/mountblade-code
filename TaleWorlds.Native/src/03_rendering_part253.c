#include "TaleWorlds.Native.Split.h"

// 03_rendering_part253.c - 4 个函数

// 函数: void FUN_18040cf70(undefined8 *param_1,undefined8 *param_2)
void FUN_18040cf70(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_1802f5bc0();
  FUN_18063b470(&uStack_88,param_1);
  *(undefined4 *)(param_1 + 8) = uStack_88;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_84;
  *(undefined4 *)(param_1 + 9) = uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_7c;
  FUN_180084000();
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_6c;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((longlong)param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_5c;
  param_1[0x1a] = param_1[6];
  param_1[0x1b] = param_1[7];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_4c;
  return;
}



longlong FUN_18040d0c0(char *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined8 in_stack_fffffffffffffd60;
  undefined4 uVar11;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [224];
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd60 >> 0x20);
  lVar9 = *(longlong *)(param_2 + 0x10);
  lVar8 = 0;
  lVar2 = *(longlong *)(param_2 + 0x208);
  fVar10 = SQRT(*(float *)(lVar9 + 0x70) * *(float *)(lVar9 + 0x70) +
                *(float *)(lVar9 + 0x74) * *(float *)(lVar9 + 0x74) +
                *(float *)(lVar9 + 0x78) * *(float *)(lVar9 + 0x78));
  if (*param_1 == '\0') {
    plVar3 = (longlong *)
             **(undefined8 **)
               ((longlong)param_1[0x50] * 0x100 + 0xf0 + *(longlong *)(param_2 + 0x18));
    plVar4 = (longlong *)
             **(undefined8 **)
               ((longlong)param_1[0x51] * 0x100 + 0xf0 + *(longlong *)(param_2 + 0x18));
    (**(code **)(*plVar3 + 200))(plVar3,&fStack_1c8);
    (**(code **)(*plVar4 + 200))(plVar4,&fStack_208);
    lVar7 = (longlong)param_1[0x50];
    lVar9 = *(longlong *)(lVar2 + 0x140);
    if (param_1[0x50] == -1) {
      uStack_268 = 0x3f800000;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      uStack_250 = 0x3f80000000000000;
    }
    else {
      puVar1 = (undefined4 *)(lVar7 * 0x1b0 + 0x30 + lVar9);
      uStack_278 = *puVar1;
      uStack_274 = puVar1[1];
      uStack_270 = puVar1[2];
      uStack_26c = puVar1[3];
      puVar1 = (undefined4 *)(lVar7 * 0x1b0 + 0x40 + lVar9);
      uStack_288 = *puVar1;
      uStack_284 = puVar1[1];
      uStack_280 = puVar1[2];
      uStack_27c = puVar1[3];
      FUN_180300bf0(&uStack_288,&uStack_268,param_1 + 0x10);
    }
    FUN_18063b5f0(&fStack_248,&uStack_268);
    fStack_148 = fStack_248;
    fStack_144 = fStack_248;
    fStack_140 = fStack_248;
    fStack_13c = fStack_248;
    _fStack_188 = CONCAT44(fStack_248 * fStack_1b8 + fStack_244 * fStack_1b4 +
                           fStack_240 * fStack_1b0,
                           fStack_248 * fStack_1c8 + fStack_244 * fStack_1c4 +
                           fStack_240 * fStack_1c0);
    _fStack_180 = CONCAT44(fStack_248 * fStack_19c + fStack_244 * fStack_19c +
                           fStack_240 * fStack_19c,
                           fStack_248 * fStack_1a8 + fStack_244 * fStack_1a4 +
                           fStack_240 * fStack_1a0);
    fStack_178 = fStack_238 * fStack_1c8 + fStack_234 * fStack_1c4 + fStack_230 * fStack_1c0;
    fStack_174 = fStack_238 * fStack_1b8 + fStack_234 * fStack_1b4 + fStack_230 * fStack_1b0;
    fStack_170 = fStack_238 * fStack_1a8 + fStack_234 * fStack_1a4 + fStack_230 * fStack_1a0;
    fStack_16c = fStack_238 * fStack_19c + fStack_234 * fStack_19c + fStack_230 * fStack_19c;
    fStack_168 = fStack_228 * fStack_1c8 + fStack_224 * fStack_1c4 + fStack_220 * fStack_1c0;
    fStack_164 = fStack_228 * fStack_1b8 + fStack_224 * fStack_1b4 + fStack_220 * fStack_1b0;
    fStack_160 = fStack_228 * fStack_1a8 + fStack_224 * fStack_1a4 + fStack_220 * fStack_1a0;
    fStack_15c = fStack_228 * fStack_19c + fStack_224 * fStack_19c + fStack_220 * fStack_19c;
    fStack_198 = (float)uStack_258 - fStack_198;
    fStack_194 = uStack_258._4_4_ - fStack_194;
    fStack_190 = (float)uStack_250 - fStack_190;
    fStack_158 = fStack_194 * fStack_1c4 + fStack_198 * fStack_1c8 + fStack_190 * fStack_1c0;
    fStack_154 = fStack_194 * fStack_1b4 + fStack_198 * fStack_1b8 + fStack_190 * fStack_1b0;
    fStack_150 = fStack_194 * fStack_1a4 + fStack_198 * fStack_1a8 + fStack_190 * fStack_1a0;
    fStack_14c = fStack_194 * fStack_19c + fStack_198 * fStack_19c + fStack_190 * fStack_19c;
    fStack_1d4 = uStack_258._4_4_ - fStack_1d4;
    fStack_1d8 = (float)uStack_258 - fStack_1d8;
    fStack_1d0 = (float)uStack_250 - fStack_1d0;
    fStack_138 = fStack_248 * fStack_208 + fStack_244 * fStack_204 + fStack_240 * fStack_200;
    fStack_134 = fStack_248 * fStack_1f8 + fStack_244 * fStack_1f4 + fStack_240 * fStack_1f0;
    fStack_130 = fStack_248 * fStack_1e8 + fStack_244 * fStack_1e4 + fStack_240 * fStack_1e0;
    fStack_12c = fStack_248 * fStack_1dc + fStack_244 * fStack_1dc + fStack_240 * fStack_1dc;
    fStack_128 = fStack_238 * fStack_208 + fStack_234 * fStack_204 + fStack_230 * fStack_200;
    fStack_124 = fStack_238 * fStack_1f8 + fStack_234 * fStack_1f4 + fStack_230 * fStack_1f0;
    fStack_120 = fStack_238 * fStack_1e8 + fStack_234 * fStack_1e4 + fStack_230 * fStack_1e0;
    fStack_11c = fStack_238 * fStack_1dc + fStack_234 * fStack_1dc + fStack_230 * fStack_1dc;
    lVar9 = lVar7 * 0x1b0 + lVar9;
    fStack_118 = fStack_228 * fStack_208 + fStack_224 * fStack_204 + fStack_220 * fStack_200;
    fStack_114 = fStack_228 * fStack_1f8 + fStack_224 * fStack_1f4 + fStack_220 * fStack_1f0;
    fStack_110 = fStack_228 * fStack_1e8 + fStack_224 * fStack_1e4 + fStack_220 * fStack_1e0;
    fStack_10c = fStack_228 * fStack_1dc + fStack_224 * fStack_1dc + fStack_220 * fStack_1dc;
    fStack_108 = fStack_1d4 * fStack_204 + fStack_1d8 * fStack_208 + fStack_1d0 * fStack_200;
    fStack_104 = fStack_1d4 * fStack_1f4 + fStack_1d8 * fStack_1f8 + fStack_1d0 * fStack_1f0;
    fStack_100 = fStack_1d4 * fStack_1e4 + fStack_1d8 * fStack_1e8 + fStack_1d0 * fStack_1e0;
    fStack_fc = fStack_1d4 * fStack_1dc + fStack_1d8 * fStack_1dc + fStack_1d0 * fStack_1dc;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0x3f800000;
    uStack_27c = 0x7f7fffff;
    FUN_180645340(&fStack_248,lVar9 + 0x114,lVar9 + 0x124,&uStack_288);
    FUN_180084760(&fStack_248,&fStack_188);
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x1000);
    }
    lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x250) + 0x78))
                      (*(longlong **)(lVar8 + 0x250),plVar3,plVar4,&fStack_188,&fStack_138,
                       CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x30)),
                       *(undefined4 *)(param_1 + 0x34));
  }
  else if (*param_1 == '\x01') {
    puVar5 = *(undefined8 **)
              ((longlong)param_1[0x50] * 0x100 + 0xf0 + *(longlong *)(param_2 + 0x18));
    if ((puVar5 != (undefined8 *)0x0) &&
       (puVar6 = *(undefined8 **)
                  ((longlong)param_1[0x51] * 0x100 + 0xf0 + *(longlong *)(param_2 + 0x18)),
       puVar6 != (undefined8 *)0x0)) {
      plVar3 = (longlong *)*puVar5;
      plVar4 = (longlong *)*puVar6;
      (**(code **)(*plVar3 + 200))(plVar3,&fStack_138);
      (**(code **)(*plVar4 + 200))(plVar4,auStack_f8);
      if (param_1[0x50] == -1) {
        fStack_158 = 0.0;
        fStack_154 = 0.0;
        fStack_150 = 0.0;
        fStack_14c = 1.0;
        uStack_268 = 0x3f800000;
        uStack_264 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_258 = 0;
        uStack_250 = 0x3f80000000000000;
      }
      else {
        lVar9 = (longlong)param_1[0x50] * 0x1b0 + *(longlong *)(lVar2 + 0x140);
        uStack_278 = *(undefined4 *)(lVar9 + 0x30);
        uStack_274 = *(undefined4 *)(lVar9 + 0x34);
        uStack_270 = *(undefined4 *)(lVar9 + 0x38);
        uStack_26c = *(undefined4 *)(lVar9 + 0x3c);
        uStack_288 = *(undefined4 *)(lVar9 + 0x40);
        uStack_284 = *(undefined4 *)(lVar9 + 0x44);
        uStack_280 = *(undefined4 *)(lVar9 + 0x48);
        uStack_27c = *(undefined4 *)(lVar9 + 0x4c);
        FUN_180300bf0(&uStack_288,&uStack_268,param_1 + 0x10);
        fStack_158 = (float)uStack_258;
        fStack_154 = uStack_258._4_4_;
        fStack_150 = (float)uStack_250;
        fStack_14c = (float)uStack_250._4_4_;
      }
      FUN_18063b5f0(&fStack_248,&uStack_268);
      fStack_178 = fStack_238;
      fStack_174 = fStack_234;
      fStack_170 = fStack_230;
      fStack_16c = (float)uStack_22c;
      fStack_168 = fStack_228;
      fStack_164 = fStack_224;
      fStack_160 = fStack_220;
      fStack_15c = (float)uStack_21c;
      FUN_1802f5d10(&fStack_138,&fStack_208,&fStack_188);
      FUN_1802f5d10(auStack_f8,&fStack_1c8,&fStack_188);
      fStack_198 = fStack_198 * fVar10;
      fStack_194 = fStack_194 * fVar10;
      fStack_190 = fStack_190 * fVar10;
      fStack_1d8 = fStack_1d8 * fVar10;
      fStack_1d4 = fStack_1d4 * fVar10;
      fStack_1d0 = fStack_1d0 * fVar10;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_280 = 0x3f800000;
      uStack_27c = 0x7f7fffff;
      lVar9 = (longlong)param_1[0x50] * 0x1b0 + *(longlong *)(lVar2 + 0x140);
      FUN_180645340(&fStack_248,lVar9 + 0x114,lVar9 + 0x124,&uStack_288);
      fStack_218 = fStack_218 * fVar10;
      fStack_214 = fStack_214 * fVar10;
      fStack_210 = fStack_210 * fVar10;
      FUN_180084760(&fStack_248,&fStack_208);
      if (*(longlong *)(param_2 + 0xd0) != 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x1000);
      }
      lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x250) + 0x70))
                        (*(longlong **)(lVar8 + 0x250),plVar4,plVar3,&fStack_1c8,&fStack_208,
                         param_1 + 0x30);
    }
  }
  return lVar8;
}





// 函数: void FUN_18040d148(longlong param_1)
void FUN_18040d148(longlong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong in_RAX;
  longlong lVar27;
  longlong lVar28;
  longlong unaff_RBX;
  float *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_R11 + -0x88) = unaff_XMM12_Da;
  *(undefined4 *)(in_R11 + -0x84) = unaff_XMM12_Db;
  *(undefined4 *)(in_R11 + -0x80) = unaff_XMM12_Dc;
  *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM12_Dd;
  puVar12 = *(undefined8 **)(in_RAX * 0x100 + 0xf0 + param_1);
  *(undefined4 *)(in_R11 + -0x98) = unaff_XMM13_Da;
  *(undefined4 *)(in_R11 + -0x94) = unaff_XMM13_Db;
  *(undefined4 *)(in_R11 + -0x90) = unaff_XMM13_Dc;
  *(undefined4 *)(in_R11 + -0x8c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_R11 + -0xa8) = unaff_XMM14_Da;
  *(undefined4 *)(in_R11 + -0xa4) = unaff_XMM14_Db;
  *(undefined4 *)(in_R11 + -0xa0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_R11 + -0x9c) = unaff_XMM14_Dd;
  *(undefined4 *)(in_R11 + -0xb8) = unaff_XMM15_Da;
  *(undefined4 *)(in_R11 + -0xb4) = unaff_XMM15_Db;
  *(undefined4 *)(in_R11 + -0xb0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_R11 + -0xac) = unaff_XMM15_Dd;
  plVar13 = (longlong *)*puVar12;
  plVar14 = (longlong *)
            **(undefined8 **)((longlong)*(char *)(unaff_RBX + 0x51) * 0x100 + 0xf0 + param_1);
  (**(code **)(*plVar13 + 200))(plVar13);
  (**(code **)(*plVar14 + 200))(plVar14,unaff_RBP + -0x10);
  lVar27 = (longlong)*(char *)(unaff_RBX + 0x50);
  lVar28 = *(longlong *)(unaff_R14 + 0x140);
  if (*(char *)(unaff_RBX + 0x50) == -1) {
    uStack0000000000000060 = 0x3f800000;
    uStack0000000000000064 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    _fStack0000000000000070 = 0;
    _fStack0000000000000078 = 0x3f80000000000000;
  }
  else {
    puVar1 = (undefined4 *)(lVar27 * 0x1b0 + 0x30 + lVar28);
    uStack0000000000000050 = *puVar1;
    uStack0000000000000054 = puVar1[1];
    uStack0000000000000058 = puVar1[2];
    uStack000000000000005c = puVar1[3];
    puVar1 = (undefined4 *)(lVar27 * 0x1b0 + 0x40 + lVar28);
    uStack0000000000000040 = *puVar1;
    uStack0000000000000044 = puVar1[1];
    uStack0000000000000048 = puVar1[2];
    uStack000000000000004c = puVar1[3];
    FUN_180300bf0(&stack0x00000040,&stack0x00000060,unaff_RBX + 0x10);
  }
  FUN_18063b5f0(unaff_RBP + -0x20,&stack0x00000060);
  fVar33 = unaff_RBP[8];
  fVar34 = unaff_RBP[9];
  fVar15 = unaff_RBP[10];
  fVar16 = unaff_RBP[0xb];
  fVar17 = *unaff_RBP;
  fVar18 = unaff_RBP[1];
  fVar19 = unaff_RBP[2];
  fVar2 = unaff_RBP[-0x1f];
  fVar29 = unaff_RBP[-0x20];
  fVar10 = unaff_RBP[4];
  fVar11 = unaff_RBP[5];
  fVar32 = unaff_RBP[6];
  fVar3 = unaff_RBP[-0x1b];
  fVar4 = unaff_RBP[-0x1c];
  fVar5 = unaff_RBP[-0x1a];
  fVar6 = unaff_RBP[-0x17];
  fVar7 = unaff_RBP[-0x18];
  fVar8 = unaff_RBP[-0x16];
  unaff_RBP[0x20] = fVar29;
  unaff_RBP[0x21] = fVar29;
  unaff_RBP[0x22] = fVar29;
  unaff_RBP[0x23] = fVar29;
  fVar9 = unaff_RBP[-0x1e];
  unaff_RBP[0x10] = fVar29 * fVar17 + fVar2 * fVar18 + fVar9 * fVar19;
  unaff_RBP[0x11] = fVar29 * fVar10 + fVar2 * fVar11 + fVar9 * fVar32;
  unaff_RBP[0x12] = fVar29 * fVar33 + fVar2 * fVar34 + fVar9 * fVar15;
  unaff_RBP[0x13] = fVar29 * fVar16 + fVar2 * fVar16 + fVar9 * fVar16;
  unaff_RBP[0x14] = fVar4 * fVar17 + fVar3 * fVar18 + fVar5 * fVar19;
  unaff_RBP[0x15] = fVar4 * fVar10 + fVar3 * fVar11 + fVar5 * fVar32;
  unaff_RBP[0x16] = fVar4 * fVar33 + fVar3 * fVar34 + fVar5 * fVar15;
  unaff_RBP[0x17] = fVar4 * fVar16 + fVar3 * fVar16 + fVar5 * fVar16;
  fVar29 = fStack0000000000000070 - unaff_RBP[0xc];
  unaff_RBP[0x18] = fVar7 * fVar17 + fVar6 * fVar18 + fVar8 * fVar19;
  unaff_RBP[0x19] = fVar7 * fVar10 + fVar6 * fVar11 + fVar8 * fVar32;
  unaff_RBP[0x1a] = fVar7 * fVar33 + fVar6 * fVar34 + fVar8 * fVar15;
  unaff_RBP[0x1b] = fVar7 * fVar16 + fVar6 * fVar16 + fVar8 * fVar16;
  fVar31 = fStack0000000000000074 - unaff_RBP[0xd];
  fVar20 = unaff_RBP[-0x10];
  fVar21 = unaff_RBP[-0xf];
  fVar22 = unaff_RBP[-0xe];
  fVar30 = fStack0000000000000078 - unaff_RBP[0xe];
  fVar23 = unaff_RBP[-8];
  fVar24 = unaff_RBP[-7];
  fVar25 = unaff_RBP[-6];
  fVar26 = unaff_RBP[-5];
  unaff_RBP[0x1c] = fVar31 * fVar18 + fVar29 * fVar17 + fVar30 * fVar19;
  unaff_RBP[0x1d] = fVar31 * fVar11 + fVar29 * fVar10 + fVar30 * fVar32;
  unaff_RBP[0x1e] = fVar31 * fVar34 + fVar29 * fVar33 + fVar30 * fVar15;
  unaff_RBP[0x1f] = fVar31 * fVar16 + fVar29 * fVar16 + fVar30 * fVar16;
  fVar29 = unaff_RBP[-0xc];
  fVar10 = unaff_RBP[-0xb];
  fVar11 = unaff_RBP[-10];
  fVar34 = fStack0000000000000074 - unaff_RBP[-3];
  fVar33 = fStack0000000000000070 - unaff_RBP[-4];
  fVar32 = fStack0000000000000078 - unaff_RBP[-2];
  unaff_RBP[0x24] = unaff_RBP[0x20] * fVar20 + fVar2 * fVar21 + fVar9 * fVar22;
  unaff_RBP[0x25] = unaff_RBP[0x21] * fVar29 + fVar2 * fVar10 + fVar9 * fVar11;
  unaff_RBP[0x26] = unaff_RBP[0x22] * fVar23 + fVar2 * fVar24 + fVar9 * fVar25;
  unaff_RBP[0x27] = unaff_RBP[0x23] * fVar26 + fVar2 * fVar26 + fVar9 * fVar26;
  lVar28 = lVar27 * 0x1b0 + lVar28;
  unaff_RBP[0x28] = fVar4 * fVar20 + fVar3 * fVar21 + fVar5 * fVar22;
  unaff_RBP[0x29] = fVar4 * fVar29 + fVar3 * fVar10 + fVar5 * fVar11;
  unaff_RBP[0x2a] = fVar4 * fVar23 + fVar3 * fVar24 + fVar5 * fVar25;
  unaff_RBP[0x2b] = fVar4 * fVar26 + fVar3 * fVar26 + fVar5 * fVar26;
  unaff_RBP[0x2c] = fVar7 * fVar20 + fVar6 * fVar21 + fVar8 * fVar22;
  unaff_RBP[0x2d] = fVar7 * fVar29 + fVar6 * fVar10 + fVar8 * fVar11;
  unaff_RBP[0x2e] = fVar7 * fVar23 + fVar6 * fVar24 + fVar8 * fVar25;
  unaff_RBP[0x2f] = fVar7 * fVar26 + fVar6 * fVar26 + fVar8 * fVar26;
  uStack0000000000000040 = 0;
  uStack0000000000000044 = 0;
  uStack0000000000000048 = 0x3f800000;
  uStack000000000000004c = 0x7f7fffff;
  unaff_RBP[0x30] = fVar34 * fVar21 + fVar33 * fVar20 + fVar32 * fVar22;
  unaff_RBP[0x31] = fVar34 * fVar10 + fVar33 * fVar29 + fVar32 * fVar11;
  unaff_RBP[0x32] = fVar34 * fVar24 + fVar33 * fVar23 + fVar32 * fVar25;
  unaff_RBP[0x33] = fVar34 * fVar26 + fVar33 * fVar26 + fVar32 * fVar26;
  FUN_180645340(unaff_RBP + -0x20,lVar28 + 0x114,lVar28 + 0x124,&stack0x00000040);
  FUN_180084760(unaff_RBP + -0x20,unaff_RBP + 0x10);
  if (*(longlong *)(unaff_RSI + 0xd0) != 0) {
    unaff_RDI = *(longlong *)(*(longlong *)(unaff_RSI + 0xd0) + 0x1000);
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x78))
            (*(longlong **)(unaff_RDI + 0x250),plVar13,plVar14,unaff_RBP + 0x10,unaff_RBP + 0x24);
  return;
}





// 函数: void FUN_18040d4aa(longlong param_1)
void FUN_18040d4aa(longlong param_1)

{
  longlong unaff_RBX;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = *(undefined4 *)(unaff_RBX + 0x34);
  uStack0000000000000028 = *(undefined4 *)(unaff_RBX + 0x30);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1000) + 0x250) + 0x78))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * FUN_18040d750(char *param_1,char param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,8,3,0xfffffffffffffffe);
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  *puVar1 = &UNK_18098bcb0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = &UNK_18098bcb0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = &UNK_180a3c3e0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[8] = &UNK_18098bcb0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[8] = &UNK_180a3c3e0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined8 **)(param_1 + 0x58) = puVar1;
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
      param_1[0x30] = '\x02';
      param_1[0x31] = '\x02';
      param_1[0x32] = '\x02';
      param_1[0x34] = -0x33;
      param_1[0x35] = -0x34;
      param_1[0x36] = -0x34;
      param_1[0x37] = '=';
      param_1[0x38] = '\x02';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      param_1[0x44] = '\x02';
      param_1[0x45] = '\x02';
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
      param_1[0x4c] = '\0';
      param_1[0x4d] = '\0';
      param_1[0x4e] = -0x80;
      param_1[0x4f] = '?';
      goto LAB_18040d86a;
    }
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
  }
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
LAB_18040d86a:
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = -0x80;
  param_1[0x13] = '?';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = -0x80;
  param_1[0x2f] = '?';
  param_1[0x50] = -1;
  param_1[0x51] = -1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18040d890(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,8,3,0xfffffffffffffffe);
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  *puVar1 = &UNK_18098bcb0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = &UNK_18098bcb0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = &UNK_180a3c3e0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[8] = &UNK_18098bcb0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[8] = &UNK_180a3c3e0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined8 **)(param_1 + 0x58) = puVar1;
  FUN_18022a720(param_1,param_2);
  return param_1;
}





// 函数: void FUN_18040d990(longlong param_1)
void FUN_18040d990(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    return;
  }
  puVar1[8] = &UNK_180a3c3e0;
  if (puVar1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[8] = &UNK_18098bcb0;
  puVar1[4] = &UNK_180a3c3e0;
  if (puVar1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[4] = &UNK_18098bcb0;
  *puVar1 = &UNK_180a3c3e0;
  if (puVar1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}





