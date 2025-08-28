#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part253.c - 4 个函数

// 函数: void FUN_18040cf70(uint64_t *param_1,uint64_t *param_2)
void FUN_18040cf70(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_6c;
  int32_t uStack_5c;
  int32_t uStack_4c;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar2 = *(int32_t *)(param_2 + 5);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)param_1 + 0x24) = uVar1;
  *(int32_t *)(param_1 + 5) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x2c) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar2 = *(int32_t *)(param_2 + 7);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x3c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar1;
  *(int32_t *)(param_1 + 7) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0x3f800000;
  FUN_1802f5bc0();
  FUN_18063b470(&uStack_88,param_1);
  *(int32_t *)(param_1 + 8) = uStack_88;
  *(int32_t *)((int64_t)param_1 + 0x44) = uStack_84;
  *(int32_t *)(param_1 + 9) = uStack_80;
  *(int32_t *)((int64_t)param_1 + 0x4c) = uStack_7c;
  FUN_180084000();
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)param_1;
  *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)(param_1 + 2);
  *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_1 + 4);
  *(int32_t *)((int64_t)param_1 + 0xac) = uStack_6c;
  *(int32_t *)(param_1 + 0x16) = *(int32_t *)((int64_t)param_1 + 4);
  *(int32_t *)((int64_t)param_1 + 0xb4) = *(int32_t *)((int64_t)param_1 + 0x14);
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)((int64_t)param_1 + 0x24);
  *(int32_t *)((int64_t)param_1 + 0xbc) = uStack_5c;
  param_1[0x1a] = param_1[6];
  param_1[0x1b] = param_1[7];
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 1);
  *(int32_t *)((int64_t)param_1 + 0xc4) = *(int32_t *)(param_1 + 3);
  *(int32_t *)(param_1 + 0x19) = *(int32_t *)(param_1 + 5);
  *(int32_t *)((int64_t)param_1 + 0xcc) = uStack_4c;
  return;
}



int64_t FUN_18040d0c0(char *param_1,int64_t param_2)

{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  uint64_t in_stack_fffffffffffffd60;
  int32_t uVar11;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  int32_t uStack_27c;
  int32_t uStack_278;
  int32_t uStack_274;
  int32_t uStack_270;
  int32_t uStack_26c;
  int32_t uStack_268;
  int32_t uStack_264;
  int32_t uStack_260;
  int32_t uStack_25c;
  uint64_t uStack_258;
  uint64_t uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t uStack_21c;
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
  int8_t auStack_f8 [224];
  
  uVar11 = (int32_t)((uint64_t)in_stack_fffffffffffffd60 >> 0x20);
  lVar9 = *(int64_t *)(param_2 + 0x10);
  lVar8 = 0;
  lVar2 = *(int64_t *)(param_2 + 0x208);
  fVar10 = SQRT(*(float *)(lVar9 + 0x70) * *(float *)(lVar9 + 0x70) +
                *(float *)(lVar9 + 0x74) * *(float *)(lVar9 + 0x74) +
                *(float *)(lVar9 + 0x78) * *(float *)(lVar9 + 0x78));
  if (*param_1 == '\0') {
    plVar3 = (int64_t *)
             **(uint64_t **)
               ((int64_t)param_1[0x50] * 0x100 + 0xf0 + *(int64_t *)(param_2 + 0x18));
    plVar4 = (int64_t *)
             **(uint64_t **)
               ((int64_t)param_1[0x51] * 0x100 + 0xf0 + *(int64_t *)(param_2 + 0x18));
    (**(code **)(*plVar3 + 200))(plVar3,&fStack_1c8);
    (**(code **)(*plVar4 + 200))(plVar4,&fStack_208);
    lVar7 = (int64_t)param_1[0x50];
    lVar9 = *(int64_t *)(lVar2 + 0x140);
    if (param_1[0x50] == -1) {
      uStack_268 = 0x3f800000;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      uStack_250 = 0x3f80000000000000;
    }
    else {
      puVar1 = (int32_t *)(lVar7 * 0x1b0 + 0x30 + lVar9);
      uStack_278 = *puVar1;
      uStack_274 = puVar1[1];
      uStack_270 = puVar1[2];
      uStack_26c = puVar1[3];
      puVar1 = (int32_t *)(lVar7 * 0x1b0 + 0x40 + lVar9);
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
    if (*(int64_t *)(param_2 + 0xd0) != 0) {
      lVar8 = *(int64_t *)(*(int64_t *)(param_2 + 0xd0) + 0x1000);
    }
    lVar8 = (**(code **)(**(int64_t **)(lVar8 + 0x250) + 0x78))
                      (*(int64_t **)(lVar8 + 0x250),plVar3,plVar4,&fStack_188,&fStack_138,
                       CONCAT44(uVar11,*(int32_t *)(param_1 + 0x30)),
                       *(int32_t *)(param_1 + 0x34));
  }
  else if (*param_1 == '\x01') {
    puVar5 = *(uint64_t **)
              ((int64_t)param_1[0x50] * 0x100 + 0xf0 + *(int64_t *)(param_2 + 0x18));
    if ((puVar5 != (uint64_t *)0x0) &&
       (puVar6 = *(uint64_t **)
                  ((int64_t)param_1[0x51] * 0x100 + 0xf0 + *(int64_t *)(param_2 + 0x18)),
       puVar6 != (uint64_t *)0x0)) {
      plVar3 = (int64_t *)*puVar5;
      plVar4 = (int64_t *)*puVar6;
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
        lVar9 = (int64_t)param_1[0x50] * 0x1b0 + *(int64_t *)(lVar2 + 0x140);
        uStack_278 = *(int32_t *)(lVar9 + 0x30);
        uStack_274 = *(int32_t *)(lVar9 + 0x34);
        uStack_270 = *(int32_t *)(lVar9 + 0x38);
        uStack_26c = *(int32_t *)(lVar9 + 0x3c);
        uStack_288 = *(int32_t *)(lVar9 + 0x40);
        uStack_284 = *(int32_t *)(lVar9 + 0x44);
        uStack_280 = *(int32_t *)(lVar9 + 0x48);
        uStack_27c = *(int32_t *)(lVar9 + 0x4c);
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
      lVar9 = (int64_t)param_1[0x50] * 0x1b0 + *(int64_t *)(lVar2 + 0x140);
      FUN_180645340(&fStack_248,lVar9 + 0x114,lVar9 + 0x124,&uStack_288);
      fStack_218 = fStack_218 * fVar10;
      fStack_214 = fStack_214 * fVar10;
      fStack_210 = fStack_210 * fVar10;
      FUN_180084760(&fStack_248,&fStack_208);
      if (*(int64_t *)(param_2 + 0xd0) != 0) {
        lVar8 = *(int64_t *)(*(int64_t *)(param_2 + 0xd0) + 0x1000);
      }
      lVar8 = (**(code **)(**(int64_t **)(lVar8 + 0x250) + 0x70))
                        (*(int64_t **)(lVar8 + 0x250),plVar4,plVar3,&fStack_1c8,&fStack_208,
                         param_1 + 0x30);
    }
  }
  return lVar8;
}





// 函数: void FUN_18040d148(int64_t param_1)
void FUN_18040d148(int64_t param_1)

{
  int32_t *puVar1;
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
  uint64_t *puVar12;
  int64_t *plVar13;
  int64_t *plVar14;
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
  int64_t in_RAX;
  int64_t lVar27;
  int64_t lVar28;
  int64_t unaff_RBX;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int64_t unaff_R14;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM12_Dd;
  puVar12 = *(uint64_t **)(in_RAX * 0x100 + 0xf0 + param_1);
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM15_Dd;
  plVar13 = (int64_t *)*puVar12;
  plVar14 = (int64_t *)
            **(uint64_t **)((int64_t)*(char *)(unaff_RBX + 0x51) * 0x100 + 0xf0 + param_1);
  (**(code **)(*plVar13 + 200))(plVar13);
  (**(code **)(*plVar14 + 200))(plVar14,unaff_RBP + -0x10);
  lVar27 = (int64_t)*(char *)(unaff_RBX + 0x50);
  lVar28 = *(int64_t *)(unaff_R14 + 0x140);
  if (*(char *)(unaff_RBX + 0x50) == -1) {
    uStack0000000000000060 = 0x3f800000;
    uStack0000000000000064 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    _fStack0000000000000070 = 0;
    _fStack0000000000000078 = 0x3f80000000000000;
  }
  else {
    puVar1 = (int32_t *)(lVar27 * 0x1b0 + 0x30 + lVar28);
    uStack0000000000000050 = *puVar1;
    uStack0000000000000054 = puVar1[1];
    uStack0000000000000058 = puVar1[2];
    uStack000000000000005c = puVar1[3];
    puVar1 = (int32_t *)(lVar27 * 0x1b0 + 0x40 + lVar28);
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
  if (*(int64_t *)(unaff_RSI + 0xd0) != 0) {
    unaff_RDI = *(int64_t *)(*(int64_t *)(unaff_RSI + 0xd0) + 0x1000);
  }
  (**(code **)(**(int64_t **)(unaff_RDI + 0x250) + 0x78))
            (*(int64_t **)(unaff_RDI + 0x250),plVar13,plVar14,unaff_RBP + 0x10,unaff_RBP + 0x24);
  return;
}





// 函数: void FUN_18040d4aa(int64_t param_1)
void FUN_18040d4aa(int64_t param_1)

{
  int64_t unaff_RBX;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  
  uStack0000000000000030 = *(int32_t *)(unaff_RBX + 0x34);
  uStack0000000000000028 = *(int32_t *)(unaff_RBX + 0x30);
  (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1000) + 0x250) + 0x78))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * FUN_18040d750(char *param_1,char param_2)

{
  uint64_t *puVar1;
  
  *param_1 = param_2;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3,0xfffffffffffffffe);
  *(uint64_t *)((int64_t)puVar1 + 0x14) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x1c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x24) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x2c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x34) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x3c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x44) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x4c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x54) = 0;
  *(int32_t *)((int64_t)puVar1 + 0x5c) = 0;
  *puVar1 = &system_state_ptr;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[4] = &system_state_ptr;
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 6) = 0;
  puVar1[4] = &system_data_buffer_ptr;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 6) = 0;
  puVar1[8] = &system_state_ptr;
  puVar1[9] = 0;
  *(int32_t *)(puVar1 + 10) = 0;
  puVar1[8] = &system_data_buffer_ptr;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  *(int32_t *)(puVar1 + 10) = 0;
  *(uint64_t **)(param_1 + 0x58) = puVar1;
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

int64_t FUN_18040d890(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3,0xfffffffffffffffe);
  *(uint64_t *)((int64_t)puVar1 + 0x14) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x1c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x24) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x2c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x34) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x3c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x44) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x4c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x54) = 0;
  *(int32_t *)((int64_t)puVar1 + 0x5c) = 0;
  *puVar1 = &system_state_ptr;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[4] = &system_state_ptr;
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 6) = 0;
  puVar1[4] = &system_data_buffer_ptr;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 6) = 0;
  puVar1[8] = &system_state_ptr;
  puVar1[9] = 0;
  *(int32_t *)(puVar1 + 10) = 0;
  puVar1[8] = &system_data_buffer_ptr;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  *(int32_t *)(puVar1 + 10) = 0;
  *(uint64_t **)(param_1 + 0x58) = puVar1;
  FUN_18022a720(param_1,param_2);
  return param_1;
}





// 函数: void FUN_18040d990(int64_t param_1)
void FUN_18040d990(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (puVar1 == (uint64_t *)0x0) {
    *(uint64_t *)(param_1 + 0x58) = 0;
    return;
  }
  puVar1[8] = &system_data_buffer_ptr;
  if (puVar1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puVar1[9] = 0;
  *(int32_t *)(puVar1 + 0xb) = 0;
  puVar1[8] = &system_state_ptr;
  puVar1[4] = &system_data_buffer_ptr;
  if (puVar1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 7) = 0;
  puVar1[4] = &system_state_ptr;
  *puVar1 = &system_data_buffer_ptr;
  if (puVar1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 3) = 0;
  *puVar1 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar1);
}





