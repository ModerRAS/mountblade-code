#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part366.c - 4 个函数

// 函数: void FUN_180468070(longlong param_1,char param_2,char param_3)
void FUN_180468070(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  char cVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  float fVar20;
  int8_t auStack_2c8 [32];
  float *pfStack_2a8;
  float fStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  float fStack_28c;
  int32_t uStack_288;
  float fStack_280;
  int32_t uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int32_t uStack_26c;
  int32_t uStack_268;
  int32_t uStack_264;
  float fStack_260;
  int32_t uStack_25c;
  float fStack_258;
  int32_t uStack_254;
  int32_t uStack_250;
  int32_t uStack_24c;
  float fStack_248;
  int32_t uStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int32_t uStack_22c;
  float fStack_228;
  int32_t uStack_224;
  uint64_t uStack_220;
  float fStack_218;
  int32_t uStack_214;
  int8_t uStack_210;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t *puStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int iStack_e8;
  ulonglong uStack_d8;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2c8;
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  lVar2 = *(longlong *)(lVar1 + 0x2908);
  iVar13 = 0;
  if ((param_2 != '\0') &&
     (lVar12 = *(longlong *)(param_1 + 0xd0), *(longlong *)(param_1 + 0xd8) - lVar12 >> 3 != 0)) {
    do {
      fStack_298 = (float)iVar13;
      fVar15 = fStack_298;
      if (9.223372e+18 <= fStack_298) {
        fVar15 = fStack_298 - 9.223372e+18;
      }
      lVar14 = (longlong)fVar15;
      puVar9 = *(uint64_t **)(lVar12 + lVar14 * 8);
      uStack_1f8 = *puVar9;
      uStack_1f0 = puVar9[1];
      uStack_1e8 = puVar9[2];
      uStack_1e0 = puVar9[3];
      uStack_1d8 = puVar9[4];
      puStack_1d0 = (uint64_t *)puVar9[5];
      uStack_1c8 = *(int32_t *)(puVar9 + 6);
      uStack_1c4 = *(int32_t *)((longlong)puVar9 + 0x34);
      fStack_1c0 = *(float *)(puVar9 + 7);
      uStack_1bc = *(int32_t *)((longlong)puVar9 + 0x3c);
      if (lVar2 != 0) {
        fStack_248 = fStack_1c0 + 10.0;
        uStack_244 = 0x7f7fffff;
        pfStack_2a8 = &fStack_278;
        uStack_268 = uStack_1c8;
        uStack_264 = uStack_1c4;
        fStack_260 = fStack_1c0;
        uStack_25c = uStack_1bc;
        uStack_250 = uStack_1c8;
        uStack_24c = uStack_1c4;
        cVar8 = FUN_1801a9e90(lVar1,&uStack_250,uStack_1c8,&uStack_268);
        if (cVar8 != '\0') {
          FUN_180085020(&uStack_1f8,&uStack_220);
          fVar15 = fStack_270 * fStack_270 + fStack_274 * fStack_274 + fStack_278 * fStack_278;
          auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar20 = auVar16._0_4_;
          fStack_190 = fVar20 * 0.5 * (3.0 - fVar15 * fVar20 * fVar20);
          fStack_198 = fStack_190 * fStack_278;
          fStack_194 = fStack_190 * fStack_274;
          fStack_190 = fStack_190 * fStack_270;
          fStack_1b0 = fStack_194 * (float)uStack_1e8 - fStack_198 * uStack_1e8._4_4_;
          fStack_1b4 = fStack_198 * (float)uStack_1e0 - fStack_190 * (float)uStack_1e8;
          fStack_1b8 = fStack_190 * uStack_1e8._4_4_ - fStack_194 * (float)uStack_1e0;
          auVar16._4_4_ = 0x3f000000;
          auVar16._0_4_ = fStack_1b0;
          auVar16._8_4_ = 0x3f000000;
          auVar16._12_4_ = 0x3f000000;
          auVar17._4_12_ = auVar16._4_12_;
          auVar17._0_4_ =
               fStack_1b0 * fStack_1b0 + fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4;
          auVar16 = rsqrtss(auVar17,ZEXT416((uint)auVar17._0_4_));
          fVar15 = auVar16._0_4_;
          fVar15 = fVar15 * 0.5 * (3.0 - auVar17._0_4_ * fVar15 * fVar15);
          fStack_1b8 = fVar15 * fStack_1b8;
          fStack_1b4 = fStack_1b4 * fVar15;
          fStack_1b0 = fStack_1b0 * fVar15;
          fVar20 = fStack_1b4 * fStack_198 - fStack_194 * fStack_1b8;
          fStack_23c = fStack_190 * fStack_1b8 - fStack_1b0 * fStack_198;
          fStack_240 = fStack_194 * fStack_1b0 - fStack_1b4 * fStack_190;
          auVar18._4_4_ = 0x3f000000;
          auVar18._0_4_ = fVar20;
          auVar18._8_4_ = 0x3f000000;
          auVar18._12_4_ = 0x3f000000;
          auVar19._4_12_ = auVar18._4_12_;
          auVar19._0_4_ = fVar20 * fVar20 + fStack_23c * fStack_23c + fStack_240 * fStack_240;
          auVar16 = rsqrtss(auVar19,ZEXT416((uint)auVar19._0_4_));
          fVar15 = auVar16._0_4_;
          fStack_238 = fVar15 * 0.5 * (3.0 - auVar19._0_4_ * fVar15 * fVar15);
          fStack_240 = fStack_240 * fStack_238;
          fStack_23c = fStack_238 * fStack_23c;
          fStack_238 = fStack_238 * fVar20;
          uStack_234 = 0x7f7fffff;
          uStack_19c = 0x7f7fffff;
          uStack_18c = uStack_26c;
          uStack_1ac = 0x7f7fffff;
          uStack_188 = CONCAT44(uStack_264,uStack_268);
          uStack_180 = CONCAT44(uStack_25c,fStack_260);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          fStack_1a8 = fStack_240;
          fStack_1a4 = fStack_23c;
          fStack_1a0 = fStack_238;
          FUN_180464e90(*(uint64_t *)(*(longlong *)(param_1 + 0xd0) + lVar14 * 8),&fStack_1b8,0);
          fVar15 = fStack_298;
          fStack_258 = fStack_298;
          uStack_254 = 0x3f800000;
          puVar9 = (uint64_t *)func_0x0001804662e0(param_1,CONCAT44(0x3f800000,fStack_298));
          uStack_168 = *puVar9;
          uStack_160 = puVar9[1];
          uStack_158 = puVar9[2];
          uStack_150 = puVar9[3];
          uStack_148 = puVar9[4];
          uStack_140 = puVar9[5];
          uStack_230 = *(int32_t *)(puVar9 + 6);
          uStack_22c = *(int32_t *)((longlong)puVar9 + 0x34);
          fStack_228 = *(float *)(puVar9 + 7) + 10.0;
          uStack_224 = 0x7f7fffff;
          pfStack_2a8 = &fStack_278;
          FUN_1801a9e90(lVar1,&uStack_230,fStack_228,&uStack_268);
          uStack_138 = CONCAT44(uStack_264,uStack_268);
          uStack_130 = CONCAT44(uStack_25c,fStack_260);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_180464e90(*(uint64_t *)(*(longlong *)(param_1 + 0xd0) + lVar14 * 8),&uStack_168,1);
          fStack_280 = fVar15;
          uStack_27c = 0x40000000;
          puVar9 = (uint64_t *)func_0x0001804662e0(param_1,CONCAT44(0x40000000,fVar15));
          uStack_128 = *puVar9;
          uStack_120 = puVar9[1];
          uStack_118 = puVar9[2];
          uStack_110 = puVar9[3];
          uStack_108 = puVar9[4];
          uStack_100 = puVar9[5];
          uStack_294 = *(int32_t *)(puVar9 + 6);
          uStack_290 = *(int32_t *)((longlong)puVar9 + 0x34);
          fStack_28c = *(float *)(puVar9 + 7) + 10.0;
          uStack_288 = 0x7f7fffff;
          pfStack_2a8 = &fStack_278;
          FUN_1801a9e90(lVar1,&uStack_294,fStack_28c,&uStack_268);
          uStack_f8 = CONCAT44(uStack_264,uStack_268);
          uStack_f0 = CONCAT44(uStack_25c,fStack_260);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_180464e90(*(uint64_t *)(*(longlong *)(param_1 + 0xd0) + lVar14 * 8),&uStack_128);
        }
      }
      iVar13 = iVar13 + 1;
      lVar12 = *(longlong *)(param_1 + 0xd0);
    } while ((ulonglong)(longlong)iVar13 < (ulonglong)(*(longlong *)(param_1 + 0xd8) - lVar12 >> 3))
    ;
  }
  if ((param_3 != '\0') &&
     (fStack_298 = 0.0, *(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3 != 0)) {
    puVar9 = (uint64_t *)(param_1 + 0x180);
    do {
      fVar15 = fStack_298;
      puVar10 = puVar9;
      puVar11 = *(uint64_t **)(param_1 + 400);
      while (puVar11 != (uint64_t *)0x0) {
        if (*(int *)(puVar11 + 4) < (int)fStack_298) {
          puVar11 = (uint64_t *)*puVar11;
        }
        else {
          puVar10 = puVar11;
          puVar11 = (uint64_t *)puVar11[1];
        }
      }
      if ((puVar10 == puVar9) || ((int)fStack_298 < *(int *)(puVar10 + 4))) {
        pfStack_2a8 = &fStack_298;
        puVar10 = (uint64_t *)FUN_1804695d0(puVar9,&fStack_280,0,puVar10);
        puVar10 = (uint64_t *)*puVar10;
      }
      puVar11 = (uint64_t *)puVar10[6];
      uVar5 = uStack_294;
      uVar6 = uStack_290;
      uVar7 = uStack_1f8;
      while (puVar11 != puVar10 + 5) {
        uStack_294 = *(int32_t *)((longlong)puVar11 + 0x54);
        uStack_290 = *(int32_t *)(puVar11 + 0xb);
        uStack_1f8 = *(uint64_t *)((longlong)puVar11 + 0x54);
        fVar20 = *(float *)((longlong)puVar11 + 0x5c);
        iStack_e8 = 0;
        uStack_220 = &unknown_var_6432_ptr;
        uStack_214 = 0x39b189;
        fStack_218 = 2.8026e-45;
        uStack_210 = 0;
        plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x28f8) + 0x318);
        if (plVar3 != (longlong *)0x0) {
          fStack_28c = fVar20 + 10.0 + 1.5;
          uStack_288 = 0x7f7fffff;
          fStack_198 = 10000.0;
          uStack_1f0 = CONCAT44(0x7f7fffff,fStack_28c);
          uStack_1e8 = 0;
          uStack_1e0 = 0x7f7fffffbf800000;
          uVar4 = (ulonglong)uStack_1d8 >> 0x28;
          uStack_1d8 = CONCAT35((int3)uVar4,0x461c4000);
          puStack_1d0 = &uStack_220;
          (**(code **)(*plVar3 + 0x118))(plVar3,&uStack_1f8);
          uVar5 = uStack_294;
          uVar6 = uStack_290;
          uVar7 = uStack_1f8;
        }
        uStack_1f8 = uVar7;
        uStack_290 = uVar6;
        uStack_294 = uVar5;
        if (0 < iStack_e8) {
          uStack_220 = (void *)CONCAT44((int32_t)uStack_108,uStack_110._4_4_);
          fStack_218 = uStack_108._4_4_;
          uStack_214 = (int32_t)uStack_100;
          fVar20 = uStack_108._4_4_;
        }
        iStack_e8 = 0;
        *(float *)((longlong)puVar11 + 0x5c) = fVar20;
        puVar11 = (uint64_t *)func_0x00018066bd70(puVar11);
        uVar5 = uStack_294;
        uVar6 = uStack_290;
        uVar7 = uStack_1f8;
      }
      fStack_298 = (float)((int)fVar15 + 1);
      uStack_294 = uVar5;
      uStack_290 = uVar6;
      uStack_1f8 = uVar7;
    } while ((ulonglong)(longlong)(int)fStack_298 <
             (ulonglong)(*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_2c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180468810(longlong param_1)
void FUN_180468810(longlong param_1)

{
  uint64_t uVar1;
  longlong *plVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong *aplStackX_10 [3];
  void *puStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  puStack_80 = &unknown_var_3456_ptr;
  uStack_68 = 0;
  puStack_78 = (uint64_t *)0x0;
  uStack_70 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_78 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
  *puVar4 = 0x635f726f74696465;
  *(int32_t *)(puVar4 + 1) = 0x656275;
  uStack_70 = 0xb;
  puVar5 = (uint64_t *)FUN_1800b32c0(_DAT_180c86930,aplStackX_10,&puStack_80,1,&unknown_var_1640_ptr);
  uVar1 = *puVar5;
  *puVar5 = 0;
  plVar2 = *(longlong **)(param_1 + 0x138);
  *(uint64_t *)(param_1 + 0x138) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  puStack_80 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180469000(longlong param_1,longlong param_2)
void FUN_180469000(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t uVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  uint64_t *puVar13;
  char *pcVar14;
  uint *puVar15;
  uint auStackX_18 [2];
  uint64_t uVar16;
  void *puStack_50;
  longlong lStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  uVar16 = 0xfffffffffffffffe;
  pcVar12 = "flags";
  do {
    pcVar14 = pcVar12;
    pcVar12 = pcVar14 + 1;
  } while (*pcVar12 != '\0');
  pcVar11 = (char *)0x0;
  for (pcVar12 = *(char **)(param_2 + 0x30); pcVar8 = pcVar11, pcVar12 != (char *)0x0;
      pcVar12 = *(char **)(pcVar12 + 0x58)) {
    pcVar7 = *(char **)pcVar12;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar5 = pcVar11;
    }
    else {
      pcVar5 = *(char **)(pcVar12 + 0x10);
    }
    if (pcVar5 == pcVar14 + -0x180a06b77) {
      pcVar5 = pcVar5 + (longlong)pcVar7;
      pcVar8 = pcVar12;
      if (pcVar5 <= pcVar7) break;
      lVar10 = (longlong)&unknown_var_4216_ptr - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar10]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar5 <= pcVar7) goto LAB_180469096;
      }
    }
  }
LAB_180469096:
  auStackX_18[0] = 1;
  auStackX_18[1] = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49d0c) && (FUN_1808fcb90(&system_flag_9d0c), _DAT_180d49d0c == -1)) {
    _DAT_180d49d10 = &unknown_var_3456_ptr;
    _DAT_180d49d28 = 0;
    _DAT_180d49d18 = (uint64_t *)0x0;
    _DAT_180d49d20 = 0;
    _DAT_180d49d18 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)_DAT_180d49d18 = 0;
    uVar4 = FUN_18064e990(_DAT_180d49d18);
    puVar13 = _DAT_180d49d18;
    _DAT_180d49d28 = CONCAT44(DAT_180d49d28_4,uVar4);
    *_DAT_180d49d18 = 0x6e61745f6f747561;
    *(int32_t *)(puVar13 + 1) = 0x746e6567;
    *(int8_t *)((longlong)puVar13 + 0xc) = 0;
    _DAT_180d49d20 = 0xc;
    _DAT_180d49d30 = &unknown_var_3456_ptr;
    _DAT_180d49d48 = 0;
    _DAT_180d49d38 = (int32_t *)0x0;
    _DAT_180d49d40 = 0;
    _DAT_180d49d38 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)_DAT_180d49d38 = 0;
    uVar4 = FUN_18064e990(_DAT_180d49d38);
    puVar3 = _DAT_180d49d38;
    _DAT_180d49d48 = CONCAT44(DAT_180d49d48_4,uVar4);
    *_DAT_180d49d38 = 0x70616e73;
    puVar3[1] = 0x5f6f745f;
    puVar3[2] = 0x72726574;
    puVar3[3] = 0x6e6961;
    _DAT_180d49d40 = 0xf;
    FUN_1808fc820(&unknown_var_624_ptr);
    FUN_1808fcb30(&system_flag_9d0c);
  }
  if (pcVar8 != (char *)0x0) {
    pcVar12 = "flag";
    do {
      pcVar14 = pcVar12;
      pcVar12 = pcVar14 + 1;
    } while (*pcVar12 != '\0');
    for (pcVar12 = *(char **)(pcVar8 + 0x30); pcVar12 != (char *)0x0;
        pcVar12 = *(char **)(pcVar12 + 0x58)) {
      pcVar8 = *(char **)pcVar12;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x180d48d24;
        pcVar7 = pcVar11;
      }
      else {
        pcVar7 = *(char **)(pcVar12 + 0x10);
      }
      if (pcVar7 == pcVar14 + -0x180a06ba3) {
        pcVar7 = pcVar8 + (longlong)pcVar7;
        if (pcVar7 <= pcVar8) {
LAB_180469160:
          do {
            puStack_50 = &unknown_var_3456_ptr;
            uStack_38 = 0;
            lStack_48 = 0;
            iStack_40 = 0;
            pcVar14 = "name";
            do {
              pcVar8 = pcVar14;
              pcVar14 = pcVar8 + 1;
            } while (*pcVar14 != '\0');
            for (puVar13 = *(uint64_t **)(pcVar12 + 0x40); puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar14 = (char *)*puVar13;
              if (pcVar14 == (char *)0x0) {
                pcVar14 = (char *)0x180d48d24;
                pcVar7 = pcVar11;
              }
              else {
                pcVar7 = (char *)puVar13[2];
              }
              if (pcVar7 == pcVar8 + -0x180a03a83) {
                pcVar7 = pcVar7 + (longlong)pcVar14;
                if (pcVar7 <= pcVar14) {
LAB_1804691e0:
                  lVar10 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar10 = puVar13[1];
                  }
                  FUN_180627c50(&puStack_50,lVar10,pcVar7,puVar13,uVar16);
                  break;
                }
                lVar10 = (longlong)&system_flag_3a84 - (longlong)pcVar14;
                while (*pcVar14 == pcVar14[lVar10]) {
                  pcVar14 = pcVar14 + 1;
                  if (pcVar7 <= pcVar14) goto LAB_1804691e0;
                }
              }
            }
            puVar15 = auStackX_18;
            pcVar14 = pcVar11;
            do {
              iVar2 = *(int *)(pcVar14 + 0x180d49d20);
              iVar9 = iStack_40;
              if (iVar2 == iStack_40) {
                if (iVar2 != 0) {
                  pbVar6 = *(byte **)(pcVar14 + 0x180d49d18);
                  lVar10 = lStack_48 - (longlong)pbVar6;
                  do {
                    pbVar1 = pbVar6 + lVar10;
                    iVar9 = (uint)*pbVar6 - (uint)*pbVar1;
                    if (iVar9 != 0) break;
                    pbVar6 = pbVar6 + 1;
                  } while (*pbVar1 != 0);
                }
LAB_180469257:
                if (iVar9 == 0) {
                  *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | *puVar15;
                  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
                }
              }
              else if (iVar2 == 0) goto LAB_180469257;
              pcVar14 = pcVar14 + 0x20;
              puVar15 = puVar15 + 1;
            } while ((longlong)pcVar14 < 0x40);
            pcVar14 = "flag";
            do {
              pcVar8 = pcVar14;
              pcVar14 = pcVar8 + 1;
            } while (*pcVar14 != '\0');
            for (pcVar14 = *(char **)(pcVar12 + 0x58); pcVar12 = pcVar11, pcVar14 != (char *)0x0;
                pcVar14 = *(char **)(pcVar14 + 0x58)) {
              pcVar7 = *(char **)pcVar14;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)0x180d48d24;
                pcVar5 = pcVar11;
              }
              else {
                pcVar5 = *(char **)(pcVar14 + 0x10);
              }
              if (pcVar5 == pcVar8 + -0x180a06ba3) {
                pcVar5 = pcVar5 + (longlong)pcVar7;
                pcVar12 = pcVar14;
                if (pcVar5 <= pcVar7) break;
                lVar10 = (longlong)&unknown_var_4260_ptr - (longlong)pcVar7;
                while (*pcVar7 == pcVar7[lVar10]) {
                  pcVar7 = pcVar7 + 1;
                  if (pcVar5 <= pcVar7) goto LAB_1804692d6;
                }
              }
            }
LAB_1804692d6:
            puStack_50 = &unknown_var_3456_ptr;
            if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            if (pcVar12 == (char *)0x0) {
              return;
            }
          } while( true );
        }
        lVar10 = (longlong)&unknown_var_4260_ptr - (longlong)pcVar8;
        while (*pcVar8 == pcVar8[lVar10]) {
          pcVar8 = pcVar8 + 1;
          if (pcVar7 <= pcVar8) goto LAB_180469160;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180469480(longlong *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (uint64_t *)param_1[1];
  lVar4 = (longlong)param_2 - *param_1 >> 3;
  if (puVar1 != (uint64_t *)param_1[2]) {
    if (param_2 != puVar1) {
      *puVar1 = puVar1[-1];
                    // WARNING: Subroutine does not return
      memmove(param_1[1] - ((param_1[1] + -8) - (longlong)param_2 & 0xfffffffffffffff8U));
    }
    *puVar1 = *param_3;
    param_1[1] = param_1[1] + 8;
    goto FUN_1804695b8;
  }
  lVar3 = (longlong)puVar1 - *param_1 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_18046951e:
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)param_1[3]);
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_18046951e;
    lVar2 = 0;
  }
  *(uint64_t *)(lVar2 + lVar4 * 8) = *param_3;
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,puVar1,(longlong)param_2 - (longlong)puVar1);
  }
  if (param_2 != (uint64_t *)param_1[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + 8,param_2,param_1[1] - (longlong)param_2);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar2;
  param_1[1] = lVar2 + 8;
  param_1[2] = lVar2 + lVar3 * 8;
FUN_1804695b8:
  return *param_1 + lVar4 * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804694f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *unaff_RBX;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  if (param_1 >> 3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = (param_1 >> 3) * 2;
    if (lVar3 == 0) {
      lVar2 = 0;
      goto LAB_18046953a;
    }
  }
  lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)unaff_RDI[3]);
LAB_18046953a:
  *(uint64_t *)(lVar2 + unaff_R15 * 8) = *unaff_RBX;
  lVar1 = *unaff_RDI;
  if (lVar1 != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar1,unaff_R14 - lVar1);
  }
  if (unaff_R14 != unaff_RDI[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + 8);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar2;
  unaff_RDI[1] = lVar2 + 8;
  unaff_RDI[2] = lVar2 + lVar3 * 8;
  return *unaff_RDI + unaff_R15 * 8;
}



longlong FUN_1804695b8(void)

{
  longlong *unaff_RDI;
  longlong unaff_R15;
  
  return *unaff_RDI + unaff_R15 * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804695d0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  plVar3 = (longlong *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_18046963f:
      uVar7 = 0;
      goto LAB_180469642;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_18046963f;
      uVar7 = 1;
      param_4 = plVar3;
LAB_180469642:
      if (param_4 != (longlong *)0x0) {
        FUN_1804699e0(param_1,param_2,param_4,uVar7,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (longlong *)plVar3[1];
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
    } while (plVar4 != (longlong *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (longlong *)param_1[1]) {
      iVar2 = *param_5;
      goto LAB_1804696aa;
    }
    plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
LAB_1804696aa:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x58,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  lVar6 = lVar5 + 0x28;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(int32_t *)(lVar5 + 0x50) = 3;
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar5 + 0x30) = lVar6;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(int8_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x48) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180469740(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  
  puVar6 = (uint64_t *)FUN_180469ab0();
  if (*param_2 != 0) {
    uVar7 = FUN_180469740(param_1,*param_2,puVar6);
    *puVar6 = uVar7;
  }
  puVar4 = puVar6;
  for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x78,*(int8_t *)(param_1 + 0x28));
    lVar5 = plVar1[5];
    puVar8[4] = plVar1[4];
    puVar8[5] = lVar5;
    lVar5 = plVar1[7];
    puVar8[6] = plVar1[6];
    puVar8[7] = lVar5;
    lVar5 = plVar1[9];
    puVar8[8] = plVar1[8];
    puVar8[9] = lVar5;
    uVar2 = *(int32_t *)((longlong)plVar1 + 0x54);
    lVar5 = plVar1[0xb];
    uVar3 = *(int32_t *)((longlong)plVar1 + 0x5c);
    *(int *)(puVar8 + 10) = (int)plVar1[10];
    *(int32_t *)((longlong)puVar8 + 0x54) = uVar2;
    *(int *)(puVar8 + 0xb) = (int)lVar5;
    *(int32_t *)((longlong)puVar8 + 0x5c) = uVar3;
    uVar2 = *(int32_t *)((longlong)plVar1 + 100);
    lVar5 = plVar1[0xd];
    uVar3 = *(int32_t *)((longlong)plVar1 + 0x6c);
    *(int *)(puVar8 + 0xc) = (int)plVar1[0xc];
    *(int32_t *)((longlong)puVar8 + 100) = uVar2;
    *(int *)(puVar8 + 0xd) = (int)lVar5;
    *(int32_t *)((longlong)puVar8 + 0x6c) = uVar3;
    *(int *)(puVar8 + 0xe) = (int)plVar1[0xe];
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar4;
    *(char *)(puVar8 + 3) = (char)plVar1[3];
    puVar4[1] = puVar8;
    if (*plVar1 != 0) {
      uVar7 = FUN_180469740(param_1,*plVar1,puVar8);
      *puVar8 = uVar7;
    }
    puVar4 = puVar8;
  }
  return puVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180469781(void)
void FUN_180469781(void)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  
  do {
    puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x78,*(int8_t *)(unaff_RBP + 0x28));
    lVar3 = unaff_RBX[5];
    puVar5[4] = unaff_RBX[4];
    puVar5[5] = lVar3;
    lVar3 = unaff_RBX[7];
    puVar5[6] = unaff_RBX[6];
    puVar5[7] = lVar3;
    lVar3 = unaff_RBX[9];
    puVar5[8] = unaff_RBX[8];
    puVar5[9] = lVar3;
    uVar1 = *(int32_t *)((longlong)unaff_RBX + 0x54);
    lVar3 = unaff_RBX[0xb];
    uVar2 = *(int32_t *)((longlong)unaff_RBX + 0x5c);
    *(int *)(puVar5 + 10) = (int)unaff_RBX[10];
    *(int32_t *)((longlong)puVar5 + 0x54) = uVar1;
    *(int *)(puVar5 + 0xb) = (int)lVar3;
    *(int32_t *)((longlong)puVar5 + 0x5c) = uVar2;
    lVar3 = unaff_RBX[0xc];
    uVar1 = *(int32_t *)((longlong)unaff_RBX + 100);
    lVar4 = unaff_RBX[0xd];
    uVar2 = *(int32_t *)((longlong)unaff_RBX + 0x6c);
    *(int *)(puVar5 + 0xc) = (int)lVar3;
    *(int32_t *)((longlong)puVar5 + 100) = uVar1;
    *(int *)(puVar5 + 0xd) = (int)lVar4;
    *(int32_t *)((longlong)puVar5 + 0x6c) = uVar2;
    *(int *)(puVar5 + 0xe) = (int)unaff_RBX[0xe];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = unaff_RSI;
    *(char *)(puVar5 + 3) = (char)unaff_RBX[3];
    unaff_RSI[1] = puVar5;
    if (*unaff_RBX != 0) {
      uVar6 = FUN_180469740((int)lVar3,*unaff_RBX,puVar5);
      *puVar5 = uVar6;
    }
    unaff_RBX = (longlong *)unaff_RBX[1];
    unaff_RSI = puVar5;
  } while (unaff_RBX != (longlong *)0x0);
  return;
}





