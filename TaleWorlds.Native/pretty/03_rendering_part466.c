#include "CoreSystem_AuthenticationHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part466.c - 1 个函数
// 函数: void function_519350(int64_t param_1,int64_t param_2)
void function_519350(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  float *pfVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  uint uVar9;
  uint64_t uVar10;
  float *pfVar11;
  ushort uVar12;
  int64_t lVar13;
  char cVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  int8_t auVar21 [16];
  float fVar26;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  float fVar27;
  int8_t auVar24 [16];
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
  int8_t stack_array_268 [32];
  float *pfStack_248;
  float *pfStack_240;
  int32_t local_var_238;
  int8_t local_var_230;
  int8_t local_var_228;
  int8_t local_var_220;
  int32_t local_var_218;
  uint64_t local_var_210;
  char cStack_208;
  char cStack_207;
  char cStack_206;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
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
  int32_t local_var_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint64_t local_var_118;
  uint64_t local_var_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t local_var_e8;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  fVar39 = 1.0;
  fVar38 = 1.0;
  lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
  if (lVar17 != 0) {
    cVar3 = *(char *)(*(int64_t *)(lVar17 + 0xf8) + 0x88);
    lVar16 = *(int64_t *)(param_1 + 0x590);
    if ((cVar3 == *(char *)(lVar16 + 0x25fb)) || (cVar3 == *(char *)(lVar16 + 0x25fd))) {
      fVar39 = 1.0 / (*(float *)(lVar17 + 0x50) + 1.0);
    }
    else if ((cVar3 == *(char *)(lVar16 + 0x25fc)) || (cVar3 == *(char *)(lVar16 + 0x25fe))) {
      fVar38 = 1.0 / (*(float *)(lVar17 + 0x50) + 1.0);
    }
  }
  lVar16 = *(int64_t *)(param_1 + 0x728);
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0);
  uVar12 = *(ushort *)(lVar16 + 0x5ac) | *(ushort *)(lVar16 + 0x5aa);
  fStack_1e8 = (float)CONCAT22(fStack_1e8._2_2_,uVar12);
  if (lVar4 == 0) {
    if ((uVar12 & 0x28) != 0) {
      fVar38 = fVar39;
    }
  }
  else {
    cVar3 = *(char *)(*(int64_t *)(lVar4 + 0xf8) + 0x88);
    lVar15 = *(int64_t *)(param_1 + 0x590);
    if (cVar3 == *(char *)(lVar15 + 0x25fb)) {
      fVar39 = 1.0 / (*(float *)(lVar4 + 0x50) + 1.0);
    }
    else if ((cVar3 == *(char *)(lVar15 + 0x25fc)) || (cVar3 == *(char *)(lVar15 + 0x25fe))) {
      fVar38 = 1.0 / (*(float *)(lVar4 + 0x50) + 1.0);
    }
  }
  if ((uVar12 & 0x30) != 0) {
    fVar39 = fVar39 * 0.75;
    fVar38 = fVar38 * 0.75;
  }
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208);
  lVar15 = *(int64_t *)(param_1 + 0x590);
  cVar3 = *(char *)(lVar15 + 0x25fc);
  cStack_207 = cVar3;
  if ((uVar12 & 0x28) == 0) {
    SystemErrorHandler(param_2,cVar3,lVar4);
    pfVar11 = (float *)(param_2 + ((int64_t)cVar3 + 0x40) * 0x10);
    fStack_1a4 = *pfVar11;
    fStack_1a0 = pfVar11[1];
    fStack_1d0 = pfVar11[2];
    fStack_1cc = pfVar11[3];
    fStack_1d8 = fStack_1a4;
    fStack_1d4 = fStack_1a0;
    fStack_138 = fStack_1d0;
  }
  else {
    cVar3 = *(char *)(lVar15 + 0x25fa);
    cVar14 = '\0';
    cStack_208 = *(char *)(lVar15 + 0x2600);
    fStack_1c8 = 1.0;
    fStack_1c4 = 0.0;
    fStack_1c0 = 0.0;
    fStack_1bc = 0.0;
    fStack_1b8 = 0.0;
    fStack_1b4 = 0.0;
    fStack_1b0 = 0.0;
    fStack_1ac = 1.0;
    cStack_206 = cVar3;
    fVar37 = fStack_1c8;
    fVar29 = fStack_1c4;
    fVar32 = fStack_1c0;
    fVar35 = fStack_1bc;
    while (fStack_1c8 = fVar37, fStack_1c4 = fVar29, fStack_1c0 = fVar32, fStack_1bc = fVar35,
          -1 < cVar3) {
      if (cStack_208 <= cVar14) {
        if (-1 < cVar3) {
          pfVar11 = (float *)SystemErrorHandler(param_2,cVar3,lVar4);
          fVar38 = *pfVar11;
          fVar28 = pfVar11[1];
          local_var_118 = *(uint64_t *)pfVar11;
          fVar30 = pfVar11[2];
          fVar33 = pfVar11[3];
          local_var_110 = *(uint64_t *)(pfVar11 + 2);
          pfVar11 = (float *)(param_2 + ((int64_t)cVar3 + 0x40) * 0x10);
          fVar20 = *pfVar11;
          fVar19 = pfVar11[1];
          fVar25 = pfVar11[2];
          fStack_fc = pfVar11[3];
          fStack_108 = fVar20;
          fStack_104 = fVar19;
          fStack_100 = fVar25;
          pfVar11 = (float *)SystemFileHandler(&local_var_118,&fStack_198,&fStack_1b8);
          fStack_1f8 = fVar20 + *pfVar11;
          fStack_1f4 = fVar19 + pfVar11[1];
          fStack_1ec = 3.4028235e+38;
          fVar25 = fVar25 + pfVar11[2];
          fStack_1c4 = fVar30 * fVar35 * 1.0 + fVar38 * fVar29 * 1.0 +
                       (fVar37 * fVar28 - fVar33 * fVar32);
          fStack_1c0 = fVar33 * fVar29 * 1.0 + fVar38 * fVar32 * 1.0 +
                       (fVar37 * fVar30 - fVar28 * fVar35);
          fStack_1bc = fVar28 * fVar32 * 1.0 + fVar38 * fVar35 * 1.0 +
                       (fVar37 * fVar33 - fVar30 * fVar29);
          fStack_1c8 = fVar33 * fVar35 * -1.0 + fVar30 * fVar32 * -1.0 +
                       (fVar37 * fVar38 - fVar28 * fVar29);
          fVar38 = fVar25;
          fStack_1f0 = fVar25;
          fStack_1b8 = fStack_1f8;
          fStack_1b4 = fStack_1f4;
          fStack_1ac = fStack_1ec;
          goto LAB_180519855;
        }
        break;
      }
      lVar13 = (int64_t)cVar3;
      lVar1 = lVar13 + 0x82;
      lVar15 = lVar13 + 0xf;
      if (0.001 <= fVar38) {
        if (fVar38 <= 0.999) {
          pfVar11 = (float *)(lVar16 + lVar15 * 0x10);
          fVar28 = *pfVar11;
          fVar30 = pfVar11[1];
          fVar33 = pfVar11[2];
          fVar20 = pfVar11[3];
          pfVar11 = (float *)(param_2 + lVar1 * 0x10);
          fVar19 = pfVar11[2] * fVar33;
          fVar25 = pfVar11[3] * fVar20;
          fStack_108 = -1.0;
          fStack_104 = -1.0;
          fStack_100 = -1.0;
          fStack_fc = -1.0;
          auVar24._0_4_ = fVar19 + *pfVar11 * fVar28;
          auVar24._4_4_ = fVar25 + pfVar11[1] * fVar30;
          auVar24._8_4_ = fVar19 + fVar19;
          auVar24._12_4_ = fVar25 + fVar25;
          auVar21._4_12_ = auVar24._4_12_;
          auVar21._0_4_ = auVar24._0_4_ + auVar24._4_4_;
          local_var_118 = 0x3f8000003f800000;
          local_var_110 = 0x3f8000003f800000;
          uVar9 = movmskps((int)lVar15 * 2,auVar21);
          uVar10 = (uint64_t)(uVar9 & 1);
          fVar19 = *(float *)(&local_var_118 + uVar10 * 2);
          fVar25 = *(float *)(&local_var_110 + uVar10 * 2);
          pfVar11 = (float *)(param_2 + lVar1 * 0x10);
          fVar27 = *pfVar11;
          fVar26 = pfVar11[2];
          fVar31 = *(float *)((int64_t)&local_var_118 + uVar10 * 0x10 + 4) * pfVar11[1];
          fVar34 = *(float *)((int64_t)&local_var_110 + uVar10 * 0x10 + 4) * pfVar11[3];
          if (0.9995 < ABS(auVar21._0_4_)) {
            fVar36 = 1.0 - fVar38;
            fVar28 = fVar36 * fVar28 + fVar38 * fVar19 * fVar27;
            fVar30 = fVar36 * fVar30 + fVar38 * fVar31;
            fVar33 = fVar36 * fVar33 + fVar38 * fVar25 * fVar26;
            fVar20 = fVar36 * fVar20 + fVar38 * fVar34;
            fVar19 = fVar20 * fVar20 + fVar28 * fVar28;
            fVar25 = fVar33 * fVar33 + fVar30 * fVar30;
            fVar36 = fVar19 + fVar30 * fVar30 + fVar33 * fVar33;
            fVar40 = fVar25 + fVar28 * fVar28 + fVar20 * fVar20;
            auVar8._4_4_ = fVar19 + fVar25 + 1.1754944e-38;
            auVar8._0_4_ = fVar25 + fVar19 + 1.1754944e-38;
            auVar8._8_4_ = fVar36 + 1.1754944e-38;
            auVar8._12_4_ = fVar40 + 1.1754944e-38;
            auVar24 = rsqrtps(auVar21,auVar8);
            fVar27 = auVar24._0_4_;
            fVar26 = auVar24._4_4_;
            fVar31 = auVar24._8_4_;
            fVar34 = auVar24._12_4_;
            fVar28 = fVar28 * (3.0 - fVar27 * fVar27 * (fVar25 + fVar19)) * fVar27 * 0.5;
            fVar30 = fVar30 * (3.0 - fVar26 * fVar26 * (fVar19 + fVar25)) * fVar26 * 0.5;
            fVar33 = fVar33 * (3.0 - fVar31 * fVar31 * fVar36) * fVar31 * 0.5;
            fVar20 = fVar20 * (3.0 - fVar34 * fVar34 * fVar40) * fVar34 * 0.5;
          }
          else {
            fVar36 = (float)acosf();
            fVar40 = (float)sinf();
            fVar18 = (float)sinf(fVar36 - fVar36 * fVar38);
            fVar18 = fVar18 * (1.0 / fVar40);
            fVar36 = (float)sinf(fVar36 * fVar38);
            fVar36 = fVar36 * (1.0 / fVar40);
            fVar28 = fVar18 * fVar28 + fVar36 * fVar19 * fVar27;
            fVar30 = fVar18 * fVar30 + fVar36 * fVar31;
            fVar33 = fVar18 * fVar33 + fVar36 * fVar25 * fVar26;
            fVar20 = fVar18 * fVar20 + fVar36 * fVar34;
          }
        }
        else {
          pfVar11 = (float *)(param_2 + lVar1 * 0x10);
          fVar28 = *pfVar11;
          fVar30 = pfVar11[1];
          fVar33 = pfVar11[2];
          fVar20 = pfVar11[3];
        }
      }
      else {
        pfVar11 = (float *)(lVar16 + lVar15 * 0x10);
        fVar28 = *pfVar11;
        fVar30 = pfVar11[1];
        fVar33 = pfVar11[2];
        fVar20 = pfVar11[3];
      }
      lVar15 = lVar13 * 0x1b0 + *(int64_t *)(lVar4 + 0x140);
      fVar19 = *(float *)(lVar15 + 0x80);
      fVar25 = *(float *)(lVar15 + 0x84);
      fVar27 = *(float *)(lVar15 + 0x88);
      local_var_13c = *(int32_t *)(lVar15 + 0x8c);
      fStack_158 = fVar28;
      fStack_154 = fVar30;
      fStack_150 = fVar33;
      fStack_14c = fVar20;
      fStack_148 = fVar19;
      fStack_144 = fVar25;
      fStack_140 = fVar27;
      pfVar11 = (float *)SystemFileHandler(&fStack_158,&fStack_198,&fStack_1b8);
      fStack_1b8 = fVar19 + *pfVar11;
      fStack_1b4 = fVar25 + pfVar11[1];
      fVar31 = fVar20 * fVar29;
      fVar34 = fVar30 * fVar32;
      fVar36 = fVar20 * fVar35;
      cVar14 = cVar14 + '\x01';
      fVar19 = fVar33 * fVar32;
      fVar25 = fVar33 * fVar29;
      fVar26 = fVar30 * fVar29;
      fStack_1b0 = fVar27 + pfVar11[2];
      fStack_1ac = 3.4028235e+38;
      fVar29 = fVar33 * fVar35 * 1.0 + fVar28 * fVar29 * 1.0 + (fVar37 * fVar30 - fVar20 * fVar32);
      fVar32 = fVar31 * 1.0 + fVar28 * fVar32 * 1.0 + (fVar37 * fVar33 - fVar30 * fVar35);
      fVar35 = fVar34 * 1.0 + fVar28 * fVar35 * 1.0 + (fVar37 * fVar20 - fVar25);
      fVar37 = fVar36 * -1.0 + fVar19 * -1.0 + (fVar37 * fVar28 - fVar26);
      fStack_1f8 = fStack_1b8;
      fStack_1f4 = fStack_1b4;
      fStack_1f0 = fStack_1b0;
      fStack_1ec = fStack_1ac;
      cVar3 = *(char *)(lVar15 + 0xf0);
    }
    fStack_1b8 = fStack_1b8 + (*(float *)(param_2 + 0x1020) - *(float *)(param_2 + 0x1030));
    fStack_1b4 = fStack_1b4 + (*(float *)(param_2 + 0x1024) - *(float *)(param_2 + 0x1034));
    fVar25 = fStack_1b0 + (*(float *)(param_2 + 0x1028) - *(float *)(param_2 + 0x1038));
    fVar38 = 0.0;
LAB_180519855:
    fVar29 = fStack_1b4;
    fVar37 = fStack_1b8;
    uVar5 = *(uint64_t *)(param_1 + 0x590);
    uVar6 = *(uint64_t *)(param_1 + 0x658);
    uVar12 = *(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa);
    fStack_1b0 = fVar25;
    SystemErrorHandler(param_2,cStack_206,lVar4);
    local_var_218 = 0;
    local_var_220 = 0;
    fStack_1ec = 3.4028235e+38;
    local_var_228 = (uVar12 & 0x28) == 0;
    pfVar11 = (float *)(param_2 + ((int64_t)cStack_206 + 0x40) * 0x10);
    pfStack_240 = &fStack_1c8;
    fStack_1f8 = fVar37 - *pfVar11;
    local_var_230 = 1;
    fStack_1f4 = fVar29 - pfVar11[1];
    fStack_1f0 = fVar25 - pfVar11[2];
    local_var_238 = 0x40200000;
    pfStack_248 = &fStack_1f8;
    local_var_210 = uVar6;
    function_575540(uVar5,2,cStack_206,cStack_208);
    pfVar11 = (float *)SystemFileHandler(&fStack_1c8,&fStack_198,
                                     *(int64_t *)(lVar4 + 0x140) +
                                     (int64_t)cStack_207 * 0x1b0 + 0x80);
    fStack_138 = fVar25 + pfVar11[2];
    fStack_1a4 = fVar37 + *pfVar11;
    fStack_1a0 = fVar29 + pfVar11[1];
    fStack_134 = fVar38;
    fStack_130 = fVar38;
    fStack_12c = fVar38;
  }
  if (((uint)fStack_1e8 & 0x14) != 0) {
    cVar14 = '\0';
    fStack_1c8 = 1.0;
    fStack_1c4 = 0.0;
    fStack_1c0 = 0.0;
    fStack_1bc = 0.0;
    cVar3 = *(char *)(*(int64_t *)(param_1 + 0x590) + 0x25f9);
    cStack_208 = *(char *)(*(int64_t *)(param_1 + 0x590) + 0x2600);
    fStack_1b8 = 0.0;
    fStack_1b4 = 0.0;
    fStack_1b0 = 0.0;
    fStack_1ac = 1.0;
    cStack_207 = cVar3;
    fVar38 = fStack_1c8;
    fVar37 = fStack_1c4;
    fVar29 = fStack_1c0;
    fVar32 = fStack_1bc;
    while (fStack_1c8 = fVar38, fStack_1c4 = fVar37, fStack_1c0 = fVar29, fStack_1bc = fVar32,
          -1 < cVar3) {
      if (cStack_208 <= cVar14) {
        if (-1 < cVar3) {
          pfVar11 = (float *)SystemErrorHandler(param_2,cVar3,lVar4);
          fVar39 = *pfVar11;
          fVar35 = pfVar11[1];
          local_var_118 = *(uint64_t *)pfVar11;
          fVar28 = pfVar11[2];
          fVar30 = pfVar11[3];
          local_var_110 = *(uint64_t *)(pfVar11 + 2);
          pfVar11 = (float *)(param_2 + ((int64_t)cVar3 + 0x40) * 0x10);
          fVar33 = *pfVar11;
          fVar20 = pfVar11[1];
          fVar19 = pfVar11[2];
          fStack_fc = pfVar11[3];
          fStack_108 = fVar33;
          fStack_104 = fVar20;
          fStack_100 = fVar19;
          pfVar11 = (float *)SystemFileHandler(&local_var_118,&fStack_198,&fStack_1b8);
          fStack_1b8 = fVar33 + *pfVar11;
          fStack_1a8 = fVar20 + pfVar11[1];
          fStack_1ac = 3.4028235e+38;
          fVar19 = fVar19 + pfVar11[2];
          fStack_1c4 = fVar28 * fVar32 * 1.0 + fVar39 * fVar37 * 1.0 +
                       (fVar38 * fVar35 - fVar30 * fVar29);
          fStack_1c0 = fVar30 * fVar37 * 1.0 + fVar39 * fVar29 * 1.0 +
                       (fVar38 * fVar28 - fVar35 * fVar32);
          fStack_1bc = fVar35 * fVar29 * 1.0 + fVar39 * fVar32 * 1.0 +
                       (fVar38 * fVar30 - fVar28 * fVar37);
          fStack_1c8 = fVar30 * fVar32 * -1.0 + fVar28 * fVar29 * -1.0 +
                       (fVar38 * fVar39 - fVar35 * fVar37);
          fStack_124 = fVar19;
          goto LAB_180519e0e;
        }
        break;
      }
      lVar15 = (int64_t)cVar3;
      lVar16 = lVar15 + 0x82;
      pfVar11 = (float *)((lVar15 + 0xf) * 0x10 + *(int64_t *)(param_1 + 0x728));
      if (0.001 <= fVar39) {
        if (fVar39 <= 0.999) {
          fVar35 = *pfVar11;
          fVar28 = pfVar11[1];
          fVar30 = pfVar11[2];
          fVar33 = pfVar11[3];
          pfVar2 = (float *)(param_2 + lVar16 * 0x10);
          fVar20 = fVar30 * pfVar2[2];
          fVar19 = fVar33 * pfVar2[3];
          fStack_108 = -1.0;
          fStack_104 = -1.0;
          fStack_100 = -1.0;
          fStack_fc = -1.0;
          auVar22._0_4_ = fVar20 + fVar35 * *pfVar2;
          auVar22._4_4_ = fVar19 + fVar28 * pfVar2[1];
          auVar22._8_4_ = fVar20 + fVar20;
          auVar22._12_4_ = fVar19 + fVar19;
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = auVar22._0_4_ + auVar22._4_4_;
          local_var_118 = 0x3f8000003f800000;
          local_var_110 = 0x3f8000003f800000;
          uVar9 = movmskps((int)pfVar11,auVar23);
          uVar10 = (uint64_t)(uVar9 & 1);
          fVar20 = *(float *)(&local_var_118 + uVar10 * 2);
          fVar19 = *(float *)(&local_var_110 + uVar10 * 2);
          pfVar11 = (float *)(param_2 + lVar16 * 0x10);
          fVar25 = *pfVar11;
          fVar27 = pfVar11[2];
          fVar26 = *(float *)((int64_t)&local_var_118 + uVar10 * 0x10 + 4) * pfVar11[1];
          fVar31 = *(float *)((int64_t)&local_var_110 + uVar10 * 0x10 + 4) * pfVar11[3];
          if (0.9995 < ABS(auVar23._0_4_)) {
            fVar34 = 1.0 - fVar39;
            fVar35 = fVar34 * fVar35 + fVar39 * fVar20 * fVar25;
            fVar28 = fVar34 * fVar28 + fVar39 * fVar26;
            fVar30 = fVar34 * fVar30 + fVar39 * fVar19 * fVar27;
            fVar33 = fVar34 * fVar33 + fVar39 * fVar31;
            fVar20 = fVar33 * fVar33 + fVar35 * fVar35;
            fVar19 = fVar30 * fVar30 + fVar28 * fVar28;
            fVar34 = fVar20 + fVar28 * fVar28 + fVar30 * fVar30;
            fVar36 = fVar19 + fVar35 * fVar35 + fVar33 * fVar33;
            auVar7._4_4_ = fVar20 + fVar19 + 1.1754944e-38;
            auVar7._0_4_ = fVar19 + fVar20 + 1.1754944e-38;
            auVar7._8_4_ = fVar34 + 1.1754944e-38;
            auVar7._12_4_ = fVar36 + 1.1754944e-38;
            auVar24 = rsqrtps(auVar23,auVar7);
            fVar25 = auVar24._0_4_;
            fVar27 = auVar24._4_4_;
            fVar26 = auVar24._8_4_;
            fVar31 = auVar24._12_4_;
            fVar35 = fVar35 * (3.0 - fVar25 * fVar25 * (fVar19 + fVar20)) * fVar25 * 0.5;
            fVar28 = fVar28 * (3.0 - fVar27 * fVar27 * (fVar20 + fVar19)) * fVar27 * 0.5;
            fVar30 = fVar30 * (3.0 - fVar26 * fVar26 * fVar34) * fVar26 * 0.5;
            fVar33 = fVar33 * (3.0 - fVar31 * fVar31 * fVar36) * fVar31 * 0.5;
          }
          else {
            fVar34 = (float)acosf();
            fVar36 = (float)sinf();
            fVar40 = (float)sinf(fVar34 - fVar34 * fVar39);
            fVar40 = fVar40 * (1.0 / fVar36);
            fVar34 = (float)sinf(fVar34 * fVar39);
            fVar34 = fVar34 * (1.0 / fVar36);
            fVar35 = fVar40 * fVar35 + fVar34 * fVar20 * fVar25;
            fVar28 = fVar40 * fVar28 + fVar34 * fVar26;
            fVar30 = fVar40 * fVar30 + fVar34 * fVar19 * fVar27;
            fVar33 = fVar40 * fVar33 + fVar34 * fVar31;
          }
        }
        else {
          pfVar11 = (float *)(param_2 + lVar16 * 0x10);
          fVar35 = *pfVar11;
          fVar28 = pfVar11[1];
          fVar30 = pfVar11[2];
          fVar33 = pfVar11[3];
        }
      }
      else {
        fVar35 = *pfVar11;
        fVar28 = pfVar11[1];
        fVar30 = pfVar11[2];
        fVar33 = pfVar11[3];
      }
      lVar16 = lVar15 * 0x1b0 + *(int64_t *)(lVar4 + 0x140);
      fVar20 = *(float *)(lVar16 + 0x80);
      fVar19 = *(float *)(lVar16 + 0x84);
      fVar25 = *(float *)(lVar16 + 0x88);
      local_var_13c = *(int32_t *)(lVar16 + 0x8c);
      fStack_158 = fVar35;
      fStack_154 = fVar28;
      fStack_150 = fVar30;
      fStack_14c = fVar33;
      fStack_148 = fVar20;
      fStack_144 = fVar19;
      fStack_140 = fVar25;
      pfVar11 = (float *)SystemFileHandler(&fStack_158,&fStack_198,&fStack_1b8);
      fStack_1b8 = fVar20 + *pfVar11;
      fStack_1b4 = fVar19 + pfVar11[1];
      fVar26 = fVar33 * fVar37;
      fVar31 = fVar28 * fVar29;
      fVar34 = fVar33 * fVar32;
      cVar14 = cVar14 + '\x01';
      fVar20 = fVar30 * fVar29;
      fVar19 = fVar30 * fVar37;
      fVar27 = fVar28 * fVar37;
      fStack_1b0 = fVar25 + pfVar11[2];
      fStack_1ac = 3.4028235e+38;
      fVar37 = fVar30 * fVar32 * 1.0 + fVar35 * fVar37 * 1.0 + (fVar38 * fVar28 - fVar33 * fVar29);
      fVar29 = fVar26 * 1.0 + fVar35 * fVar29 * 1.0 + (fVar38 * fVar30 - fVar28 * fVar32);
      fVar32 = fVar31 * 1.0 + fVar35 * fVar32 * 1.0 + (fVar38 * fVar33 - fVar19);
      fVar38 = fVar34 * -1.0 + fVar20 * -1.0 + (fVar38 * fVar35 - fVar27);
      fStack_1f8 = fStack_1b8;
      fStack_1f4 = fStack_1b4;
      fStack_1f0 = fStack_1b0;
      fStack_1ec = fStack_1ac;
      cVar3 = *(char *)(lVar16 + 0xf0);
    }
    fStack_1b8 = fStack_1b8 + (*(float *)(param_2 + 0x1020) - *(float *)(param_2 + 0x1030));
    fStack_1a8 = fStack_1b4 + (*(float *)(param_2 + 0x1024) - *(float *)(param_2 + 0x1034));
    fVar19 = fStack_1b0 + (*(float *)(param_2 + 0x1028) - *(float *)(param_2 + 0x1038));
    fStack_124 = 0.0;
LAB_180519e0e:
    fStack_1f8 = fStack_1c8;
    fStack_1f4 = fStack_1c4;
    fStack_1f0 = fStack_1c0;
    fStack_1ec = fStack_1bc;
    fStack_1e8 = fStack_1b8;
    fStack_1b4 = fStack_1a8;
    fStack_1b0 = fVar19;
    fStack_128 = fVar19;
    fStack_120 = fStack_124;
    fStack_11c = fStack_124;
    if ((*(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0) == 0) && (lVar17 != 0)) {
      lVar16 = (int64_t)*(int *)(lVar17 + 0xf0) * 0xa0;
      if (((*(byte *)(lVar16 + 0x50 + *(int64_t *)(lVar17 + 0xd0)) & 0x40) != 0) &&
         (*(char *)((int64_t)*(int *)(lVar16 + 100 + *(int64_t *)(lVar17 + 0xd0)) * 0x170 + 0x135
                   + render_system_memory) != '\0')) {
        lVar16 = (int64_t)*(char *)(*(int64_t *)(param_1 + 0x590) + 0x25fb);
        SystemSecurityManager(&fStack_188,(lVar16 + 0x82) * 0x10 + param_2);
        lVar17 = *(int64_t *)(param_1 + 0x728);
        fStack_1cc = 3.4028235e+38;
        fStack_1d8 = *(float *)(lVar17 + 0xe0) - *(float *)(lVar17 + 0xd0);
        fStack_1d4 = *(float *)(lVar17 + 0xe4) - *(float *)(lVar17 + 0xd4);
        fStack_1d0 = *(float *)(lVar17 + 0xe8) - *(float *)(lVar17 + 0xd8);
        pfVar11 = (float *)SystemCore_EventHandler(lVar17 + 0xc0,&fStack_198,&fStack_1d8);
        fVar38 = *pfVar11;
        fVar39 = pfVar11[1];
        fVar37 = pfVar11[2];
        fVar29 = fVar38 * fVar38 + fVar39 * fVar39 + fVar37 * fVar37;
        auVar24 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
        fVar32 = auVar24._0_4_;
        fVar29 = fVar32 * 0.5 * (3.0 - fVar29 * fVar32 * fVar32);
        fVar38 = fVar38 * fVar29;
        fVar37 = fVar37 * fVar29;
        fVar39 = fVar39 * fVar29;
        fVar29 = fVar38 * fVar38 + fVar37 * fVar37;
        auVar24 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
        fVar32 = auVar24._0_4_;
        local_var_118 = local_var_118 & 0xffffffff;
        fVar32 = fVar32 * 0.5 * (3.0 - fVar29 * fVar32 * fVar32);
        fVar29 = fVar37 * fVar32;
        fVar32 = -(fVar38 * fVar32);
        fVar25 = fVar39 * fVar32;
        fVar35 = fVar37 * fVar29 - fVar32 * fVar38;
        fVar28 = -(fVar39 * fVar29);
        fVar30 = fVar29 * fStack_188 + fStack_178 * 0.0 + fVar32 * fStack_168;
        fVar33 = fVar29 * fStack_184 + fStack_174 * 0.0 + fVar32 * fStack_164;
        fVar20 = fVar29 * fStack_180 + fStack_170 * 0.0 + fVar32 * fStack_160;
        fVar27 = fVar25 * fStack_188 + fVar35 * fStack_178 + fVar28 * fStack_168;
        fVar26 = fVar25 * fStack_184 + fVar35 * fStack_174 + fVar28 * fStack_164;
        fVar31 = fVar25 * fStack_180 + fVar35 * fStack_170 + fVar28 * fStack_160;
        fVar34 = fVar39 * fStack_178 + fVar38 * fStack_188 + fVar37 * fStack_168;
        fVar36 = fVar39 * fStack_174 + fVar38 * fStack_184 + fVar37 * fStack_164;
        fVar40 = fVar39 * fStack_170 + fVar38 * fStack_180 + fVar37 * fStack_160;
        pfVar11 = (float *)SystemFileHandler(&fStack_1c8,&fStack_198,
                                         *(int64_t *)(lVar4 + 0x140) + lVar16 * 0x1b0 + 0x80);
        fVar35 = fStack_1e8 + *pfVar11;
        fVar29 = fStack_1a8 + pfVar11[1];
        fVar38 = pfVar11[2];
        SystemSecurityManager(&fStack_188,&fStack_1f8);
        local_var_118 = CONCAT44(fVar33,fVar33);
        local_var_110 = CONCAT44(fVar33,fVar33);
        fVar29 = fStack_1a0 - fVar29;
        fVar37 = fStack_138 - (fVar19 + fVar38);
        fVar35 = fStack_1a4 - fVar35;
        fVar19 = fVar26 * fStack_178 + fVar27 * fStack_188 + fVar31 * fStack_168;
        fVar25 = fVar26 * fStack_174 + fVar27 * fStack_184 + fVar31 * fStack_164;
        fVar28 = fVar26 * fStack_170 + fVar27 * fStack_180 + fVar31 * fStack_160;
        fVar39 = fVar29 * fVar29 + fVar35 * fVar35 + fVar37 * fVar37;
        auVar24 = rsqrtss(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39));
        fVar38 = auVar24._0_4_;
        fVar38 = fVar38 * 0.5 * (3.0 - fVar39 * fVar38 * fVar38);
        fVar29 = fVar29 * fVar38;
        fVar37 = fVar37 * fVar38;
        fVar35 = fVar35 * fVar38;
        fVar32 = fVar25 * fVar37 - fVar28 * fVar29;
        fVar28 = fVar28 * fVar35 - fVar19 * fVar37;
        fVar19 = fVar19 * fVar29 - fVar25 * fVar35;
        fVar38 = fVar28 * fVar28 + fVar32 * fVar32 + fVar19 * fVar19;
        auVar24 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
        fVar39 = auVar24._0_4_;
        fVar38 = fVar39 * 0.5 * (3.0 - fVar38 * fVar39 * fVar39);
        fVar28 = fVar28 * fVar38;
        fVar19 = fVar19 * fVar38;
        fVar32 = fVar32 * fVar38;
        fStack_1d8 = fVar29 * fVar19 - fVar37 * fVar28;
        fStack_1d4 = fVar32 * fVar37 - fVar35 * fVar19;
        fStack_1d0 = fVar35 * fVar28 - fVar32 * fVar29;
        fStack_1cc = 3.4028235e+38;
        fStack_178 = fVar26 * fStack_1d8 + fVar33 * fVar32 + fVar36 * fVar35;
        fStack_174 = fVar26 * fStack_1d4 + fVar33 * fVar28 + fVar36 * fVar29;
        fStack_170 = fVar26 * fStack_1d0 + fVar33 * fVar19 + fVar36 * fVar37;
        fStack_16c = fVar26 * 3.4028235e+38 + fVar33 * 3.4028235e+38 + fVar36 * 3.4028235e+38;
        fStack_168 = fVar31 * fStack_1d8 + fVar20 * fVar32 + fVar40 * fVar35;
        fStack_164 = fVar31 * fStack_1d4 + fVar20 * fVar28 + fVar40 * fVar29;
        fStack_160 = fVar31 * fStack_1d0 + fVar20 * fVar19 + fVar40 * fVar37;
        fStack_15c = fVar31 * 3.4028235e+38 + fVar20 * 3.4028235e+38 + fVar40 * 3.4028235e+38;
        fStack_188 = fVar27 * fStack_1d8 + fVar30 * fVar32 + fVar34 * fVar35;
        fStack_184 = fVar27 * fStack_1d4 + fVar30 * fVar28 + fVar34 * fVar29;
        fStack_180 = fVar27 * fStack_1d0 + fVar30 * fVar19 + fVar34 * fVar37;
        fStack_17c = fVar27 * 3.4028235e+38 + fVar30 * 3.4028235e+38 + fVar34 * 3.4028235e+38;
        fStack_1f8 = fVar31;
        fStack_1f4 = fVar31;
        fStack_1f0 = fVar31;
        fStack_1ec = fVar31;
        fStack_1c8 = fVar27;
        fStack_1c4 = fVar27;
        fStack_1c0 = fVar27;
        fStack_1bc = fVar27;
        fStack_198 = fVar30;
        fStack_194 = fVar30;
        fStack_190 = fVar30;
        fStack_18c = fVar30;
        fStack_158 = fVar26;
        fStack_154 = fVar26;
        fStack_150 = fVar26;
        fStack_14c = fVar26;
        AdvancedProcessor_StateManager0(&fStack_198,&fStack_188);
        fStack_1f8 = fStack_198;
        fStack_1f4 = fStack_194;
        fStack_1f0 = fStack_190;
        fStack_1ec = fStack_18c;
      }
    }
    cVar3 = cStack_207;
    uVar5 = *(uint64_t *)(param_1 + 0x590);
    uVar6 = *(uint64_t *)(param_1 + 0x658);
    lVar17 = (int64_t)cStack_207;
    uVar12 = *(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa);
    SystemErrorHandler(param_2,cStack_207,lVar4);
    local_var_228 = (uVar12 & 0x14) == 0;
    local_var_218 = 0;
    pfVar11 = (float *)(param_2 + (lVar17 + 0x40) * 0x10);
    local_var_220 = 0;
    fStack_1d8 = fStack_1e8 - *pfVar11;
    local_var_230 = 1;
    pfStack_240 = &fStack_1f8;
    fStack_1cc = 3.4028235e+38;
    fStack_1d4 = fStack_1a8 - pfVar11[1];
    fStack_1d0 = fStack_128 - pfVar11[2];
    local_var_238 = 0x40200000;
    pfStack_248 = &fStack_1d8;
    local_var_210 = uVar6;
    function_575540(uVar5,1,cVar3,cStack_208);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_268);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address