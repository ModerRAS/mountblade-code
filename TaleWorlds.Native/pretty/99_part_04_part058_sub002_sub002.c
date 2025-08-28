#include "TaleWorlds.Native.Split.h"

// 99_part_04_part058_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802b8cb0(longlong *param_1,float param_2)
void FUN_1802b8cb0(longlong *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint64_t *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auVar27 [16];
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
  int8_t auStack_328 [32];
  longlong *plStack_308;
  longlong *plStack_300;
  longlong *plStack_2f8;
  int8_t uStack_2e8;
  char cStack_2d8;
  float fStack_2d4;
  int32_t uStack_2d0;
  float fStack_2cc;
  int iStack_2c8;
  uint64_t uStack_2c0;
  float fStack_2b8;
  int32_t uStack_2b4;
  uint64_t uStack_2b0;
  float fStack_2a8;
  int32_t uStack_2a4;
  float fStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  uint64_t uStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  ulonglong uStack_268;
  longlong lStack_260;
  longlong lStack_258;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  int iStack_228;
  int iStack_224;
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t uStack_208;
  uint64_t uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t uStack_1dc;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  float fStack_178;
  int8_t uStack_174;
  uint64_t uStack_170;
  int8_t auStack_168 [16];
  float afStack_158 [11];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong uStack_d8;
  
  uStack_1a0 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_328;
  lVar22 = 0;
  uStack_2d0 = 0;
  uVar20 = (param_1[0xc] - param_1[0xb]) / 0x70;
  fStack_278 = param_2 * param_2;
  param_1[2] = 0x4cbebc204cbebc20;
  param_1[3] = 0x7f7fffff4cbebc20;
  param_1[4] = -0x334143df334143e0;
  param_1[5] = 0x7f7fffffccbebc20;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0x7f7fffff00000000;
  fVar32 = 0.0;
  fVar37 = 0.0;
  fStack_2cc = 0.0;
  lVar16 = *param_1;
  lVar23 = param_1[9];
  fStack_2a0 = param_2;
  uStack_268 = uVar20;
  fStack_26c = (float)func_0x0001802b6b90(lVar23 + 0xb20,*(float *)(lVar16 + 0x3044) * 0.041666668);
  cVar9 = *(char *)((longlong)param_1 + 0xa1);
  if (cVar9 == '\0') {
    fVar28 = *(float *)(lVar23 + 0xfa4);
    fVar34 = *(float *)(lVar23 + 0xfa8);
    fVar24 = *(float *)(lVar23 + 4000);
    uStack_218 = CONCAT44(fVar24 * *(float *)((longlong)param_1 + 0xb4) +
                          fVar28 * *(float *)((longlong)param_1 + 0xc4) +
                          fVar34 * *(float *)((longlong)param_1 + 0xd4),
                          fVar24 * *(float *)(param_1 + 0x16) + fVar28 * *(float *)(param_1 + 0x18)
                          + fVar34 * *(float *)(param_1 + 0x1a));
    uStack_210 = CONCAT44(fVar24 * *(float *)((longlong)param_1 + 0xbc) +
                          fVar28 * *(float *)((longlong)param_1 + 0xcc) +
                          fVar34 * *(float *)((longlong)param_1 + 0xdc),
                          fVar24 * *(float *)(param_1 + 0x17) + fVar28 * *(float *)(param_1 + 0x19)
                          + fVar34 * *(float *)(param_1 + 0x1b));
    uStack_208 = *(uint64_t *)(lVar23 + 0xf90);
    uStack_200 = *(uint64_t *)(lVar23 + 0xf98);
  }
  else {
    uStack_218 = *(uint64_t *)(lVar23 + 4000);
    uStack_210 = *(uint64_t *)(lVar23 + 0xfa8);
    fVar24 = *(float *)((longlong)param_1 + 0xdc);
    fVar32 = *(float *)(lVar23 + 0xf94);
    fVar28 = *(float *)(lVar23 + 0xf98);
    fVar34 = *(float *)(lVar23 + 0xf90);
    uStack_208 = CONCAT44(fVar34 * *(float *)(param_1 + 0x18) +
                          fVar32 * *(float *)((longlong)param_1 + 0xc4) +
                          fVar28 * *(float *)(param_1 + 0x19),
                          fVar34 * *(float *)(param_1 + 0x16) +
                          fVar32 * *(float *)((longlong)param_1 + 0xb4) +
                          fVar28 * *(float *)(param_1 + 0x17));
    uStack_200 = CONCAT44(fVar34 * fVar24 + fVar32 * fVar24 + fVar28 * fVar24,
                          fVar34 * *(float *)(param_1 + 0x1a) +
                          fVar32 * *(float *)((longlong)param_1 + 0xd4) +
                          fVar28 * *(float *)(param_1 + 0x1b));
    fVar32 = 0.0;
  }
  pfVar19 = *(float **)(lVar16 + 0x81f0);
  fVar28 = ((float)_DAT_180c8ed30 * 1e-05 +
           ABS(*(float *)((longlong)param_1 + 0xe4) + *(float *)(param_1 + 0x1c))) * 8.0;
  uVar11 = (uint)fVar28;
  uVar12 = uVar11 & 0x800000ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
  }
  uVar14 = uVar12 + 1 & 0x800000ff;
  if ((int)uVar14 < 0) {
    uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
  }
  fStack_274 = ((*(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar14 * 4) -
                *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar12 * 4)) *
                (fVar28 - (float)(int)uVar11) +
               *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar12 * 4)) * *pfVar19 + 1.0;
  fStack_270 = pfVar19[3] * pfVar19[2] * fStack_274;
  fStack_274 = pfVar19[3] * pfVar19[1] * fStack_274;
  iStack_2c8 = 0;
  lStack_258 = (longlong)(int)uVar20;
  if (0 < (int)uVar20) {
    lStack_260 = 0;
    lVar16 = lStack_258 * 0x70;
    do {
      fVar34 = fStack_270;
      fVar28 = fStack_274;
      pfVar19 = (float *)(param_1[0xb] + lVar22);
      pfVar19[0x17] = fStack_26c;
      lVar23 = param_1[9];
      fVar24 = (float)func_0x0001802b6b90(lVar23 + 0xa68);
      fVar36 = fVar32 + (float)uStack_210 + (float)uStack_200;
      fVar35 = fVar34 * fVar24 * pfVar19[0x10] + uStack_218._4_4_ + uStack_208._4_4_;
      fVar34 = (float)uStack_208 + (float)uStack_218 + fVar28 * fVar24 * pfVar19[0x10];
      fStack_2d4 = pfVar19[3] - pfVar19[7];
      fStack_250 = fVar34;
      fVar28 = (float)func_0x0001802b6b90(lVar23 + 0x340);
      fVar32 = fVar28 * pfVar19[0x12];
      if (1.0 <= fVar28 * pfVar19[0x12]) {
        fVar32 = 1.0;
      }
      fVar25 = (float)func_0x0001802b6b90(lVar23 + 0x3f8);
      fVar25 = *(float *)(lVar23 + 0x3f4) * fVar25;
      fVar25 = fVar25 * fVar25;
      fVar32 = fVar32 * fVar32 * fVar32 * fVar32;
      fVar25 = fVar25 * fVar25;
      fVar38 = 1.0 - fVar32 * fVar32;
      fVar33 = *pfVar19;
      fStack_27c = fVar33 - pfVar19[4];
      fVar32 = pfVar19[1];
      lStack_298 = CONCAT44(lStack_298._4_4_,fVar32 - pfVar19[5]);
      fVar28 = pfVar19[2];
      fVar24 = pfVar19[6];
      lVar15 = *(longlong *)(lVar23 + 0x100);
      fStack_280 = fVar28;
      fStack_24c = fVar32;
      if (lVar15 == 0) {
        pfVar19[4] = fVar33;
        pfVar19[5] = fVar32;
        pfVar19[6] = fVar28;
        lStack_290 = 0;
      }
      else {
        fVar2 = *(float *)(lVar23 + 0xcc);
        lStack_290 = lVar15;
        fVar26 = (float)func_0x0001802b6b90(lVar23 + 0x118);
        fVar26 = fVar26 * pfVar19[0x13];
        fVar31 = 1.0 - fVar2;
        iVar3 = *(int *)(lVar15 + 0xb8);
        iVar4 = *(int *)(lVar15 + 0xbc);
        iVar5 = *(int *)(lStack_290 + 0xc0);
        lVar15 = (longlong)
                 (((iVar4 * ((iVar5 + (int)((float)iVar5 *
                                           ((fVar28 - *(float *)(param_1 + 0x1d)) *
                                            *(float *)(lVar23 + 0xe0) + *(float *)(lVar23 + 0xf0)))
                                      % iVar5) % iVar5) +
                   (iVar4 + (int)((float)iVar4 *
                                 ((fVar32 - *(float *)((longlong)param_1 + 0xe4)) *
                                  *(float *)(lVar23 + 0xdc) + *(float *)(lVar23 + 0xec))) % iVar4) %
                   iVar4) * iVar3 +
                  (iVar3 + (int)((float)iVar3 *
                                ((*pfVar19 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar23 + 0xd8)
                                + *(float *)(lVar23 + 0xe8))) % iVar3) % iVar3) * 3);
        lVar23 = *(longlong *)(lStack_290 + 0xb0);
        fVar32 = fVar26 * *(float *)(lVar23 + 8 + lVar15 * 4);
        fVar29 = fVar26 * *(float *)(lVar23 + 4 + lVar15 * 4);
        fVar26 = fVar26 * *(float *)(lVar23 + lVar15 * 4);
        fVar34 = fVar26 * fVar31;
        lStack_290 = CONCAT44(lStack_290._4_4_,fVar34);
        fVar33 = *pfVar19;
        pfVar19[4] = ((fVar33 - fVar38 * fVar26 * fStack_2a0) - fVar33) * fVar2 + fVar33;
        pfVar19[5] = ((pfVar19[1] - fVar38 * fVar29 * fStack_2a0) - pfVar19[1]) * fVar2 + pfVar19[1]
        ;
        pfVar19[6] = ((pfVar19[2] - fVar38 * fVar32 * fStack_2a0) - pfVar19[2]) * fVar2 + pfVar19[2]
        ;
        fVar34 = fVar34 + fStack_250;
        fVar35 = fVar35 + fVar29 * fVar31;
        fVar36 = fVar36 + fVar32 * fVar31;
      }
      *pfVar19 = fVar38 * fStack_27c + fVar33 + fStack_278 * fVar34;
      pfVar19[1] = fVar38 * (float)lStack_298 + fStack_24c + fVar35 * fStack_278;
      fVar32 = (fVar28 - fVar24) * fVar38 + fStack_280 + fVar36 * fStack_278;
      pfVar19[2] = fVar32;
      pfVar19[7] = pfVar19[3];
      pfVar19[3] = (1.0 - fVar25 * fVar25) * fStack_2d4 + pfVar19[3];
      lVar23 = param_1[9];
      if (*(int *)(lVar23 + 0x6c) == 0) {
        fVar28 = (float)func_0x0001802b6b90(lVar23 + 0x618);
        fVar28 = fVar28 * pfVar19[10];
      }
      else {
        fVar28 = (float)func_0x0001802b6b90(lVar23 + 0x618);
        fVar28 = fVar28 + pfVar19[10];
      }
      pfVar19[0xb] = fVar28;
      fStack_1e4 = pfVar19[1];
      fStack_1e8 = *pfVar19;
      uStack_1dc = 0x7f7fffff;
      fStack_1f0 = fVar32 - pfVar19[6];
      fStack_1f4 = fStack_1e4 - pfVar19[5];
      fStack_1f8 = fStack_1e8 - pfVar19[4];
      uStack_1ec = 0x7f7fffff;
      fVar28 = fStack_1f0 * fStack_1f0 + fStack_1f4 * fStack_1f4 + fStack_1f8 * fStack_1f8;
      auVar27 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
      fVar34 = auVar27._0_4_;
      fVar28 = (float)system_data_fc80 * fVar34 * ((float)system_data_01f0 - fVar28 * fVar34 * fVar34);
      fStack_1f8 = fStack_1f8 * fVar28;
      fStack_1f4 = fStack_1f4 * fVar28;
      fStack_1f0 = fStack_1f0 * fVar28;
      iVar3 = *(int *)(param_1[9] + 0x1060);
      fStack_1e0 = fVar32;
      if (((iVar3 == -1) || (iVar4 = *(int *)(param_1[9] + 0x1064), iVar4 == -1)) ||
         (param_1[0x2b] - param_1[0x2a] >> 3 == 0)) {
LAB_1802b94af:
        fVar32 = -3.4028235e+38;
        lVar23 = *(longlong *)(*param_1 + 0x2908);
        if ((lVar23 != 0) && (*(char *)(*param_1 + 0x2960) != '\0')) {
          if (*(char *)(lVar23 + 0x68) == '\0') {
            uStack_288 = 0;
            lVar23 = FUN_1803a5130(lVar23,pfVar19,&iStack_228,&uStack_288);
            fVar32 = (float)(**(code **)(**(longlong **)(lVar23 + 0x60) + 8))
                                      (*(longlong **)(lVar23 + 0x60),
                                       (float)iStack_224 + uStack_288._4_4_,
                                       (float)iStack_228 + (float)uStack_288);
          }
          else {
            fVar32 = 1.0 / *(float *)(lVar23 + 0x58);
            fVar32 = (float)(**(code **)(**(longlong **)(lVar23 + 0x50) + 8))
                                      (*(longlong **)(lVar23 + 0x50),
                                       fVar32 * pfVar19[1] * (float)*(int *)(lVar23 + 0x60),
                                       fVar32 * *pfVar19 * (float)*(int *)(lVar23 + 0x60));
            fVar32 = fVar32 + *(float *)(lVar23 + 0x5c);
          }
        }
        cStack_2d8 = '\0';
        bVar8 = false;
        if (fVar32 <= pfVar19[2]) {
          if ((((*(uint *)(param_1[9] + 0x68) & 0x8000) != 0) &&
              (*(char *)(*param_1 + 0x2901) != '\0')) && (*(char *)(*param_1 + 0x2900) == '\0')) {
            fStack_240 = pfVar19[2] - pfVar19[6];
            fStack_244 = pfVar19[1] - pfVar19[5];
            fStack_248 = *pfVar19 - pfVar19[4];
            uStack_23c = 0x7f7fffff;
            fVar32 = SQRT(fStack_244 * fStack_244 + fStack_248 * fStack_248 +
                          fStack_240 * fStack_240);
            if (0.0 < fVar32) {
              fVar28 = 1.0 / fVar32;
              fStack_248 = fVar28 * fStack_248;
              fStack_244 = fVar28 * fStack_244;
              fStack_240 = fVar28 * fStack_240;
              uStack_1c8 = *(uint64_t *)(pfVar19 + 4);
              uStack_1c0 = *(uint64_t *)(pfVar19 + 6);
              uStack_23c = 0x7f7fffff;
              uStack_1ac = 0x7f7fffff;
              fStack_1b8 = fStack_248;
              fStack_1b4 = fStack_244;
              fStack_1b0 = fStack_240;
              fStack_1a8 = fVar32;
              func_0x00018023a1e0();
              fStack_118 = 0.0;
              uStack_198 = uStack_1c8;
              uStack_190 = uStack_1c0;
              uStack_188 = CONCAT44(fStack_1b4,fStack_1b8);
              uStack_180 = CONCAT44(uStack_1ac,fStack_1b0);
              fStack_178 = fStack_1a8;
              uStack_174 = 0;
              uStack_170 = 0;
              plVar18 = *(longlong **)(*(longlong *)(*param_1 + 0x28f8) + 0x318);
              (**(code **)(*plVar18 + 0x118))(plVar18,&uStack_198,afStack_158);
              if (0 < (int)fStack_118) {
                bVar8 = true;
                uStack_1d8 = CONCAT44(fStack_128,fStack_12c);
                uStack_1d0 = CONCAT44(fStack_120,fStack_124);
                fStack_238 = afStack_158[7];
                fStack_234 = afStack_158[8];
                fStack_230 = afStack_158[9];
                fStack_22c = afStack_158[10];
                fVar28 = afStack_158[9] + fStack_124 * 0.01;
                fStack_2d4 = afStack_158[8] + fStack_128 * 0.01;
                fVar32 = fStack_12c * 0.01 + afStack_158[7];
                iVar3 = *(int *)(param_1[9] + 0xf8);
                fVar37 = fStack_2cc;
                if (iVar3 == 1) {
                  pfVar19[0x13] = 0.0;
                  *pfVar19 = fVar32;
                  pfVar19[4] = fVar32;
                  pfVar19[1] = fStack_2d4;
                  pfVar19[5] = fStack_2d4;
                  pfVar19[2] = fVar28;
                  pfVar19[6] = fVar28;
                  pfVar19[7] = pfVar19[3];
                }
                else if (iVar3 == 2) {
                  pfVar19[9] = 1.0;
                }
                else {
                  fVar24 = (afStack_158[7] - pfVar19[4]) * fStack_12c +
                           (afStack_158[8] - pfVar19[5]) * fStack_128 +
                           (afStack_158[9] - pfVar19[6]) * fStack_124;
                  fVar24 = fVar24 + fVar24;
                  fVar35 = fStack_12c * (*pfVar19 - afStack_158[7]) +
                           fStack_128 * (pfVar19[1] - afStack_158[8]) +
                           fStack_124 * (pfVar19[2] - afStack_158[9]);
                  fVar35 = fVar35 + fVar35;
                  fVar34 = 1.0 - *(float *)(param_1[9] + 0xc0);
                  pfVar19[4] = fVar32 - ((afStack_158[7] - pfVar19[4]) - fStack_12c * fVar24) *
                                        fVar34;
                  pfVar19[5] = fStack_2d4 -
                               fVar34 * ((afStack_158[8] - pfVar19[5]) - fStack_128 * fVar24);
                  pfVar19[6] = fVar28 - fVar34 * ((afStack_158[9] - pfVar19[6]) -
                                                 fStack_124 * fVar24);
                  fVar34 = 1.0 - *(float *)(param_1[9] + 0xc0);
                  *pfVar19 = ((*pfVar19 - afStack_158[7]) - fStack_12c * fVar35) * fVar34 + fVar32;
                  pfVar19[1] = fVar34 * ((pfVar19[1] - afStack_158[8]) - fStack_128 * fVar35) +
                               fStack_2d4;
                  pfVar19[2] = fVar34 * ((pfVar19[2] - afStack_158[9]) - fStack_124 * fVar35) +
                               fVar28;
                  pfVar19[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar19[3] - pfVar19[7]) +
                               pfVar19[7];
                }
              }
              fStack_118 = 0.0;
              if (bVar8) goto LAB_1802b9b71;
            }
          }
        }
        else {
          fStack_238 = *pfVar19;
          fStack_234 = pfVar19[1];
          fStack_230 = fVar32;
          puVar13 = (uint64_t *)
                    FUN_1803a5440(*(uint64_t *)(*param_1 + 0x2908),auStack_168,pfVar19,0);
          uStack_1d8 = *puVar13;
          uStack_1d0 = puVar13[1];
          cStack_2d8 = '\x01';
          iVar3 = *(int *)(param_1[9] + 0xf8);
          if (iVar3 == 1) {
            pfVar19[0x13] = 0.0;
            pfVar19[4] = *pfVar19;
            pfVar19[5] = pfVar19[1];
            pfVar19[2] = fVar32 + 0.001;
            pfVar19[6] = fVar32 + 0.001;
            pfVar19[7] = pfVar19[3];
          }
          else if (iVar3 == 2) {
            pfVar19[9] = 1.0;
          }
          else {
            fVar28 = pfVar19[2];
            fVar34 = pfVar19[6];
            if (fVar28 - fVar34 != 0.0) {
              fVar24 = (fVar32 - fVar34) / (fVar28 - fVar34);
              fVar36 = (pfVar19[4] - *pfVar19) * fVar24 + *pfVar19;
              fVar35 = (pfVar19[5] - pfVar19[1]) * fVar24 + pfVar19[1];
              fVar28 = (fVar34 - fVar28) * fVar24 + fVar28;
              fVar34 = pfVar19[2] - fVar32;
              fVar32 = pfVar19[6] - fVar32;
              fVar24 = 1.0 - *(float *)(param_1[9] + 0xc0);
              pfVar19[4] = (pfVar19[4] - fVar36) * fVar24 + fVar36;
              pfVar19[5] = fVar35 + (pfVar19[5] - fVar35) * fVar24;
              pfVar19[6] = fVar28 + ((pfVar19[6] - (fVar32 + fVar32)) - fVar28) * fVar24;
              *pfVar19 = (*pfVar19 - fVar36) * fVar24 + fVar36;
              pfVar19[1] = fVar35 + (pfVar19[1] - fVar35) * fVar24;
              pfVar19[2] = fVar28 + ((pfVar19[2] - (fVar34 + fVar34)) - fVar28) * fVar24;
              pfVar19[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar19[3] - pfVar19[7]) +
                           pfVar19[7];
            }
          }
LAB_1802b9b71:
          if (param_1[0x1e] != 0) {
            FUN_1802b0d00();
          }
        }
        cVar9 = cStack_2d8;
        cVar10 = func_0x0001802bf470(param_1);
        if (cVar10 != '\0') {
          if (cVar9 == '\0') {
            if (!bVar8) goto LAB_1802b9d55;
            lStack_298 = *param_1;
            lVar23 = param_1[9];
            fStack_2d4 = (float)(CONCAT31((uint3)(*(uint *)(lVar23 + 0x68) >> 0x16),
                                          ~(byte)(*(uint *)(lVar23 + 0x68) >> 0xe)) & 0xffffff01);
            lVar15 = *(longlong *)(lVar23 + 0x1020);
            lVar6 = *(longlong *)(lVar23 + 0x1018);
            uVar11 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
            uVar11 = uVar11 >> 0x11 ^ uVar11;
            uVar11 = uVar11 << 5 ^ uVar11;
            *(uint *)(param_1 + 10) = uVar11;
            plVar18 = *(longlong **)
                       (*(longlong *)(lVar23 + 0x1018) +
                       ((ulonglong)(uVar11 - 1) % (lVar15 - lVar6 >> 3 & 0xffffffffU)) * 8);
            uStack_2b0 = plVar18;
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x28))(plVar18);
            }
            uStack_2d0 = 2;
            plStack_308 = (longlong *)(param_1[9] + 0x1048);
            uStack_2e8 = SUB41(fStack_2d4,0);
            plStack_300 = (longlong *)
                          (CONCAT71(plStack_300._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                          0xffffffffffffff01);
            plStack_2f8 = plVar18;
            FUN_1801a48a0(lStack_298,&uStack_1d8);
          }
          else {
            lStack_298 = *param_1;
            lVar23 = param_1[9];
            fStack_2d4 = (float)(CONCAT31((uint3)(*(uint *)(lVar23 + 0x68) >> 0x16),
                                          ~(byte)(*(uint *)(lVar23 + 0x68) >> 0xe)) & 0xffffff01);
            lVar15 = *(longlong *)(lVar23 + 0x1020);
            lVar6 = *(longlong *)(lVar23 + 0x1018);
            uVar11 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
            uVar11 = uVar11 >> 0x11 ^ uVar11;
            uVar11 = uVar11 << 5 ^ uVar11;
            *(uint *)(param_1 + 10) = uVar11;
            plVar18 = *(longlong **)
                       (*(longlong *)(lVar23 + 0x1018) +
                       ((ulonglong)(uVar11 - 1) % (lVar15 - lVar6 >> 3 & 0xffffffffU)) * 8);
            uStack_2c0 = plVar18;
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x28))(plVar18);
            }
            uStack_2d0 = 1;
            if (plVar18 != (longlong *)0x0) {
              plStack_2f8 = (longlong *)CONCAT71(plStack_2f8._1_7_,SUB41(fStack_2d4,0));
              plStack_308 = (longlong *)
                            (CONCAT71(plStack_308._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd))
                            & 0xffffffffffffff01);
              plStack_300 = plVar18;
              FUN_1801a3f60(lStack_298,&fStack_238);
            }
          }
          uStack_2d0 = 0;
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x38))(plVar18);
          }
          *(int8_t *)(param_1 + 0x14) = 1;
        }
      }
      else {
        uVar11 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
        uVar11 = uVar11 >> 0x11 ^ uVar11;
        uVar11 = uVar11 << 5 ^ uVar11;
        *(uint *)(param_1 + 10) = uVar11;
        plStack_300 = (longlong *)CONCAT44(plStack_300._4_4_,0x3e800000);
        plStack_308 = param_1 + 0x2a;
        cVar9 = FUN_18019fc10(*param_1,&fStack_1e8,&fStack_1f8,
                              (uVar11 - 1) % ((iVar4 - iVar3) + 1U) + iVar3);
        if (cVar9 == '\0') goto LAB_1802b94af;
      }
LAB_1802b9d55:
      plVar18 = param_1 + 0xb;
      pfVar19[9] = fStack_2a0 / pfVar19[8] + pfVar19[9];
      fVar32 = *(float *)(param_1 + 2);
      if (*pfVar19 <= *(float *)(param_1 + 2)) {
        fVar32 = *pfVar19;
      }
      *(float *)(param_1 + 2) = fVar32;
      fVar32 = *(float *)((longlong)param_1 + 0x14);
      if (pfVar19[1] <= *(float *)((longlong)param_1 + 0x14)) {
        fVar32 = pfVar19[1];
      }
      *(float *)((longlong)param_1 + 0x14) = fVar32;
      fVar32 = pfVar19[2];
      if (*(float *)(param_1 + 3) <= pfVar19[2]) {
        fVar32 = *(float *)(param_1 + 3);
      }
      *(float *)(param_1 + 3) = fVar32;
      fVar32 = *(float *)(param_1 + 4);
      if (*(float *)(param_1 + 4) <= *pfVar19) {
        fVar32 = *pfVar19;
      }
      *(float *)(param_1 + 4) = fVar32;
      fVar32 = *(float *)((longlong)param_1 + 0x24);
      if (*(float *)((longlong)param_1 + 0x24) <= pfVar19[1]) {
        fVar32 = pfVar19[1];
      }
      *(float *)((longlong)param_1 + 0x24) = fVar32;
      fVar32 = pfVar19[2];
      if (pfVar19[2] <= *(float *)(param_1 + 5)) {
        fVar32 = *(float *)(param_1 + 5);
      }
      *(float *)(param_1 + 5) = fVar32;
      if (fVar37 <= pfVar19[0xb]) {
        fVar37 = pfVar19[0xb];
      }
      fStack_2cc = fVar37;
      if (1.0 < pfVar19[9]) {
        if (*(short *)(pfVar19 + 0xc) != -1) {
          piVar1 = (int *)(param_1[0x26] + (longlong)*(short *)(pfVar19 + 0xc) * 0xc);
          *piVar1 = *piVar1 + -1;
        }
        uVar20 = (ulonglong)((int)uStack_268 - 1);
        lStack_258 = lStack_258 + -1;
        lVar23 = lVar16 + -0x70;
        uStack_268 = uVar20;
        if (param_1[0x1e] != 0) {
          FUN_1802b0ad0(param_1[0x1e],(longlong)iStack_2c8 * 0x70 + *plVar18);
          lVar15 = param_1[0x1e];
          lVar17 = *(longlong *)(lVar15 + 0x38) - *(longlong *)(lVar15 + 0x30);
          lVar6 = lVar17 >> 0x3f;
          if (lVar17 / 0x88 + lVar6 != lVar6) {
            FUN_1802b09d0(lVar15,*(int32_t *)(lVar22 + 0x58 + *plVar18));
          }
        }
        lVar15 = *plVar18;
        *(int32_t *)(lVar22 + lVar15) = *(int32_t *)(lVar23 + lVar15);
        *(int32_t *)(lVar22 + 4 + lVar15) = *(int32_t *)(lVar16 + -0x6c + lVar15);
        *(int32_t *)(lVar22 + 8 + lVar15) = *(int32_t *)(lVar16 + -0x68 + lVar15);
        *(int32_t *)(lVar22 + 0xc + lVar15) = *(int32_t *)(lVar16 + -100 + lVar15);
        *(int32_t *)(lVar22 + 0x10 + lVar15) = *(int32_t *)(lVar16 + -0x60 + lVar15);
        *(int32_t *)(lVar22 + 0x14 + lVar15) = *(int32_t *)(lVar16 + -0x5c + lVar15);
        *(int32_t *)(lVar22 + 0x18 + lVar15) = *(int32_t *)(lVar16 + -0x58 + lVar15);
        *(int32_t *)(lVar22 + 0x1c + lVar15) = *(int32_t *)(lVar16 + -0x54 + lVar15);
        *(int32_t *)(lVar22 + 0x20 + lVar15) = *(int32_t *)(lVar16 + -0x50 + lVar15);
        *(int32_t *)(lVar22 + 0x24 + lVar15) = *(int32_t *)(lVar16 + -0x4c + lVar15);
        *(int32_t *)(lVar22 + 0x28 + lVar15) = *(int32_t *)(lVar16 + -0x48 + lVar15);
        *(int32_t *)(lVar22 + 0x2c + lVar15) = *(int32_t *)(lVar16 + -0x44 + lVar15);
        *(int16_t *)(lVar22 + 0x30 + lVar15) = *(int16_t *)(lVar16 + -0x40 + lVar15);
        *(int16_t *)(lVar22 + 0x32 + lVar15) = *(int16_t *)(lVar16 + -0x3e + lVar15);
        *(int32_t *)(lVar22 + 0x34 + lVar15) = *(int32_t *)(lVar16 + -0x3c + lVar15);
        *(int32_t *)(lVar22 + 0x38 + lVar15) = *(int32_t *)(lVar16 + -0x38 + lVar15);
        *(int32_t *)(lVar22 + 0x3c + lVar15) = *(int32_t *)(lVar16 + -0x34 + lVar15);
        *(int32_t *)(lVar22 + 0x40 + lVar15) = *(int32_t *)(lVar16 + -0x30 + lVar15);
        *(int32_t *)(lVar22 + 0x44 + lVar15) = *(int32_t *)(lVar16 + -0x2c + lVar15);
        *(int32_t *)(lVar22 + 0x48 + lVar15) = *(int32_t *)(lVar16 + -0x28 + lVar15);
        *(int32_t *)(lVar22 + 0x4c + lVar15) = *(int32_t *)(lVar16 + -0x24 + lVar15);
        *(int16_t *)(lVar22 + 0x50 + lVar15) = *(int16_t *)(lVar16 + -0x20 + lVar15);
        *(int16_t *)(lVar22 + 0x52 + lVar15) = *(int16_t *)(lVar16 + -0x1e + lVar15);
        *(int8_t *)(lVar22 + 0x54 + lVar15) = *(int8_t *)(lVar16 + -0x1c + lVar15);
        *(int8_t *)(lVar22 + 0x55 + lVar15) = *(int8_t *)(lVar16 + -0x1b + lVar15);
        *(int8_t *)(lVar22 + 0x56 + lVar15) = *(int8_t *)(lVar16 + -0x1a + lVar15);
        *(int8_t *)(lVar22 + 0x57 + lVar15) = *(int8_t *)(lVar16 + -0x19 + lVar15);
        *(int32_t *)(lVar22 + 0x58 + lVar15) = *(int32_t *)(lVar16 + -0x18 + lVar15);
        *(int32_t *)(lVar22 + 0x5c + lVar15) = *(int32_t *)(lVar16 + -0x14 + lVar15);
        *(int32_t *)(lVar22 + 0x60 + lVar15) = *(int32_t *)(lVar16 + -0x10 + lVar15);
        *(int32_t *)(lVar22 + 100 + lVar15) = *(int32_t *)(lVar16 + -0xc + lVar15);
        *(int32_t *)(lVar22 + 0x68 + lVar15) = *(int32_t *)(lVar16 + -8 + lVar15);
        *(int32_t *)(lVar22 + 0x6c + lVar15) = *(int32_t *)(lVar16 + -4 + lVar15);
      }
      else {
        iStack_2c8 = iStack_2c8 + 1;
        lStack_260 = lStack_260 + 1;
        lVar22 = lVar22 + 0x70;
        uVar20 = uStack_268;
        lVar23 = lVar16;
      }
      fVar32 = 0.0;
      lVar16 = lVar23;
    } while (lStack_260 < lStack_258);
    cVar9 = *(char *)((longlong)param_1 + 0xa1);
  }
  fVar37 = fVar37 * 0.5;
  fVar32 = *(float *)(param_1 + 2) - fVar37;
  *(float *)(param_1 + 2) = fVar32;
  fVar28 = *(float *)((longlong)param_1 + 0x14) - fVar37;
  *(float *)((longlong)param_1 + 0x14) = fVar28;
  fVar34 = *(float *)(param_1 + 3) - fVar37;
  *(float *)(param_1 + 3) = fVar34;
  fVar24 = fVar37 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar24;
  fVar35 = fVar37 + *(float *)((longlong)param_1 + 0x24);
  *(float *)((longlong)param_1 + 0x24) = fVar35;
  fVar37 = fVar37 + *(float *)(param_1 + 5);
  *(float *)(param_1 + 5) = fVar37;
  if (cVar9 != '\0') {
    afStack_158[0] = fVar32;
    afStack_158[1] = fVar28;
    afStack_158[2] = fVar34;
    afStack_158[4] = fVar24;
    afStack_158[5] = fVar35;
    afStack_158[6] = fVar37;
    afStack_158[8] = fVar32;
    afStack_158[9] = fVar35;
    afStack_158[10] = fVar34;
    fStack_128 = fVar24;
    fStack_124 = fVar35;
    fStack_120 = fVar34;
    fStack_118 = fVar32;
    fStack_114 = fVar28;
    fStack_110 = fVar37;
    fStack_108 = fVar24;
    fStack_104 = fVar28;
    fStack_100 = fVar37;
    fStack_f8 = fVar32;
    fStack_f4 = fVar35;
    fStack_f0 = fVar37;
    fStack_e8 = fVar24;
    fStack_e4 = fVar28;
    fStack_e0 = fVar34;
    param_1[2] = 0x4cbebc204cbebc20;
    param_1[3] = 0x7f7fffff4cbebc20;
    param_1[4] = -0x334143df334143e0;
    param_1[5] = 0x7f7fffffccbebc20;
    *(int32_t *)(param_1 + 8) = 0;
    param_1[6] = 0;
    param_1[7] = 0x7f7fffff00000000;
    pfVar19 = afStack_158 + 6;
    lVar16 = 4;
    do {
      fVar34 = *(float *)((longlong)param_1 + 0xc4);
      fVar24 = *(float *)(param_1 + 0x19);
      fVar35 = *(float *)((longlong)param_1 + 0xcc);
      fVar37 = pfVar19[-5];
      fVar36 = *(float *)((longlong)param_1 + 0xb4);
      fVar33 = *(float *)(param_1 + 0x17);
      fVar25 = *(float *)((longlong)param_1 + 0xbc);
      fVar32 = pfVar19[-6];
      fVar38 = *(float *)((longlong)param_1 + 0xd4);
      fVar2 = *(float *)(param_1 + 0x1b);
      fVar26 = *(float *)((longlong)param_1 + 0xdc);
      fVar28 = pfVar19[-4];
      fVar29 = *(float *)((longlong)param_1 + 0xe4);
      fVar31 = *(float *)(param_1 + 0x1d);
      fVar7 = *(float *)((longlong)param_1 + 0xec);
      fVar30 = *(float *)(param_1 + 0x18) * fVar37 + *(float *)(param_1 + 0x16) * fVar32 +
               *(float *)(param_1 + 0x1a) * fVar28 + *(float *)(param_1 + 0x1c);
      pfVar19[-6] = fVar30;
      pfVar19[-5] = fVar34 * fVar37 + fVar36 * fVar32 + fVar38 * fVar28 + fVar29;
      pfVar19[-4] = fVar24 * fVar37 + fVar33 * fVar32 + fVar2 * fVar28 + fVar31;
      pfVar19[-3] = fVar35 * fVar37 + fVar25 * fVar32 + fVar26 * fVar28 + fVar7;
      fVar37 = fVar30;
      if (fVar30 < *(float *)(param_1 + 4)) {
        fVar37 = *(float *)(param_1 + 4);
      }
      fVar28 = pfVar19[-5];
      fVar32 = fVar28;
      if (fVar28 < *(float *)((longlong)param_1 + 0x24)) {
        fVar32 = *(float *)((longlong)param_1 + 0x24);
      }
      uStack_2b0 = (longlong *)CONCAT44(fVar32,fVar37);
      fStack_2b8 = pfVar19[-4];
      fStack_2a8 = fStack_2b8;
      if (fStack_2b8 < *(float *)(param_1 + 5)) {
        fStack_2a8 = *(float *)(param_1 + 5);
      }
      param_1[4] = (longlong)uStack_2b0;
      param_1[5] = CONCAT44(uStack_2a4,fStack_2a8);
      if (*(float *)(param_1 + 2) < fVar30) {
        fVar30 = *(float *)(param_1 + 2);
      }
      if (*(float *)((longlong)param_1 + 0x14) < fVar28) {
        fVar28 = *(float *)((longlong)param_1 + 0x14);
      }
      uStack_2c0 = (longlong *)CONCAT44(fVar28,fVar30);
      if (*(float *)(param_1 + 3) < fStack_2b8) {
        fStack_2b8 = *(float *)(param_1 + 3);
      }
      param_1[2] = (longlong)uStack_2c0;
      param_1[3] = CONCAT44(uStack_2b4,fStack_2b8);
      fVar34 = *(float *)((longlong)param_1 + 0xc4);
      fVar24 = *(float *)(param_1 + 0x19);
      fVar35 = *(float *)((longlong)param_1 + 0xcc);
      fVar37 = pfVar19[-1];
      fVar36 = *(float *)((longlong)param_1 + 0xb4);
      fVar33 = *(float *)(param_1 + 0x17);
      fVar25 = *(float *)((longlong)param_1 + 0xbc);
      fVar32 = pfVar19[-2];
      fVar38 = *(float *)((longlong)param_1 + 0xd4);
      fVar2 = *(float *)(param_1 + 0x1b);
      fVar26 = *(float *)((longlong)param_1 + 0xdc);
      fVar28 = *pfVar19;
      fVar29 = *(float *)((longlong)param_1 + 0xe4);
      fVar31 = *(float *)(param_1 + 0x1d);
      fVar7 = *(float *)((longlong)param_1 + 0xec);
      fVar30 = *(float *)(param_1 + 0x18) * fVar37 + *(float *)(param_1 + 0x16) * fVar32 +
               *(float *)(param_1 + 0x1a) * fVar28 + *(float *)(param_1 + 0x1c);
      pfVar19[-2] = fVar30;
      pfVar19[-1] = fVar34 * fVar37 + fVar36 * fVar32 + fVar38 * fVar28 + fVar29;
      *pfVar19 = fVar24 * fVar37 + fVar33 * fVar32 + fVar2 * fVar28 + fVar31;
      pfVar19[1] = fVar35 * fVar37 + fVar25 * fVar32 + fVar26 * fVar28 + fVar7;
      fVar37 = fVar30;
      if (fVar30 < *(float *)(param_1 + 4)) {
        fVar37 = *(float *)(param_1 + 4);
      }
      fVar28 = pfVar19[-1];
      fVar32 = fVar28;
      if (fVar28 < *(float *)((longlong)param_1 + 0x24)) {
        fVar32 = *(float *)((longlong)param_1 + 0x24);
      }
      uStack_2b0 = (longlong *)CONCAT44(fVar32,fVar37);
      fStack_2b8 = *pfVar19;
      fStack_2a8 = fStack_2b8;
      if (fStack_2b8 < *(float *)(param_1 + 5)) {
        fStack_2a8 = *(float *)(param_1 + 5);
      }
      param_1[4] = (longlong)uStack_2b0;
      param_1[5] = CONCAT44(uStack_2a4,fStack_2a8);
      if (*(float *)(param_1 + 2) < fVar30) {
        fVar30 = *(float *)(param_1 + 2);
      }
      if (*(float *)((longlong)param_1 + 0x14) < fVar28) {
        fVar28 = *(float *)((longlong)param_1 + 0x14);
      }
      uStack_2c0 = (longlong *)CONCAT44(fVar28,fVar30);
      if (*(float *)(param_1 + 3) < fStack_2b8) {
        fStack_2b8 = *(float *)(param_1 + 3);
      }
      param_1[2] = (longlong)uStack_2c0;
      param_1[3] = CONCAT44(uStack_2b4,fStack_2b8);
      pfVar19 = pfVar19 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  FUN_1800b9f60(param_1 + 2);
  uVar21 = (ulonglong)(int)uVar20;
  lVar16 = param_1[0xb];
  uVar20 = (param_1[0xc] - lVar16) / 0x70;
  if (uVar20 < uVar21) {
    FUN_1802beaf0(param_1 + 0xb,uVar21 - uVar20);
  }
  else {
    param_1[0xc] = uVar21 * 0x70 + lVar16;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






