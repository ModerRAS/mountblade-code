#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_04_part059_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802ba410(int64_t *param_1,float param_2)
void FUN_1802ba410(int64_t *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  float *pfVar15;
  uint64_t uVar16;
  char cVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auStack_2f8 [32];
  uint64_t uStack_2d8;
  int64_t *plStack_2d0;
  int64_t *plStack_2c8;
  int8_t uStack_2b8;
  char cStack_2a8;
  float fStack_2a4;
  int32_t uStack_2a0;
  float fStack_29c;
  int iStack_298;
  uint64_t uStack_290;
  float fStack_288;
  int32_t uStack_284;
  uint64_t uStack_280;
  float fStack_278;
  int32_t uStack_274;
  float fStack_270;
  int64_t lStack_268;
  uint64_t uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  uint64_t uStack_238;
  int64_t lStack_230;
  int64_t lStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  int32_t uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  int iStack_200;
  int iStack_1fc;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
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
  uint64_t uStack_d8;
  
  uStack_1a0 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  lVar19 = 0;
  uStack_2a0 = 0;
  uVar16 = (param_1[0xc] - param_1[0xb]) / 0x70;
  fStack_24c = param_2 * param_2;
  param_1[2] = 0x4cbebc204cbebc20;
  param_1[3] = 0x7f7fffff4cbebc20;
  param_1[4] = -0x334143df334143e0;
  param_1[5] = 0x7f7fffffccbebc20;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0x7f7fffff00000000;
  fVar28 = 0.0;
  fVar35 = 0.0;
  fStack_29c = 0.0;
  lVar20 = *param_1;
  lVar10 = param_1[9];
  fStack_270 = param_2;
  uStack_238 = uVar16;
  fStack_240 = (float)func_0x0001802b6b90(lVar10 + 0xb20,*(float *)(lVar20 + 0x3044) * 0.041666668);
  cVar17 = *(char *)((int64_t)param_1 + 0xa1);
  if (cVar17 == '\0') {
    fVar25 = *(float *)(lVar10 + 0xfa4);
    fVar29 = *(float *)(lVar10 + 0xfa8);
    fVar21 = *(float *)(lVar10 + 4000);
    uStack_1f8 = CONCAT44(fVar21 * *(float *)((int64_t)param_1 + 0xb4) +
                          fVar25 * *(float *)((int64_t)param_1 + 0xc4) +
                          fVar29 * *(float *)((int64_t)param_1 + 0xd4),
                          fVar21 * *(float *)(param_1 + 0x16) + fVar25 * *(float *)(param_1 + 0x18)
                          + fVar29 * *(float *)(param_1 + 0x1a));
    uStack_1f0 = CONCAT44(fVar21 * *(float *)((int64_t)param_1 + 0xbc) +
                          fVar25 * *(float *)((int64_t)param_1 + 0xcc) +
                          fVar29 * *(float *)((int64_t)param_1 + 0xdc),
                          fVar21 * *(float *)(param_1 + 0x17) + fVar25 * *(float *)(param_1 + 0x19)
                          + fVar29 * *(float *)(param_1 + 0x1b));
    uStack_1e8 = *(uint64_t *)(lVar10 + 0xf90);
    uStack_1e0 = *(uint64_t *)(lVar10 + 0xf98);
  }
  else {
    uStack_1f8 = *(uint64_t *)(lVar10 + 4000);
    uStack_1f0 = *(uint64_t *)(lVar10 + 0xfa8);
    fVar21 = *(float *)((int64_t)param_1 + 0xdc);
    fVar28 = *(float *)(lVar10 + 0xf94);
    fVar25 = *(float *)(lVar10 + 0xf98);
    fVar29 = *(float *)(lVar10 + 0xf90);
    uStack_1e8 = CONCAT44(fVar29 * *(float *)(param_1 + 0x18) +
                          fVar28 * *(float *)((int64_t)param_1 + 0xc4) +
                          fVar25 * *(float *)(param_1 + 0x19),
                          fVar29 * *(float *)(param_1 + 0x16) +
                          fVar28 * *(float *)((int64_t)param_1 + 0xb4) +
                          fVar25 * *(float *)(param_1 + 0x17));
    uStack_1e0 = CONCAT44(fVar29 * fVar21 + fVar28 * fVar21 + fVar25 * fVar21,
                          fVar29 * *(float *)(param_1 + 0x1a) +
                          fVar28 * *(float *)((int64_t)param_1 + 0xd4) +
                          fVar25 * *(float *)(param_1 + 0x1b));
    fVar28 = 0.0;
  }
  pfVar15 = *(float **)(lVar20 + 0x81f0);
  fVar25 = ((float)system_error_code * 1e-05 +
           ABS(*(float *)((int64_t)param_1 + 0xe4) + *(float *)(param_1 + 0x1c))) * 8.0;
  uVar8 = (uint)fVar25;
  uVar9 = uVar8 & 0x800000ff;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
  }
  uVar12 = uVar9 + 1 & 0x800000ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
  }
  fStack_248 = ((*(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar12 * 4) -
                *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar9 * 4)) *
                (fVar25 - (float)(int)uVar8) + *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar9 * 4)
               ) * *pfVar15 + 1.0;
  fStack_244 = pfVar15[3] * pfVar15[2] * fStack_248;
  fStack_248 = pfVar15[3] * pfVar15[1] * fStack_248;
  iStack_298 = 0;
  lStack_228 = (int64_t)(int)uVar16;
  if (0 < (int)uVar16) {
    lStack_230 = 0;
    lVar20 = lStack_228 * 0x70;
    do {
      fVar29 = fStack_244;
      fVar25 = fStack_248;
      pfVar15 = (float *)(param_1[0xb] + lVar19);
      pfVar15[0x17] = fStack_240;
      lVar10 = param_1[9];
      fVar21 = (float)func_0x0001802b6b90(lVar10 + 0xa68);
      fVar36 = fVar28 + (float)uStack_1f0 + (float)uStack_1e0;
      fVar28 = fVar29 * fVar21 * pfVar15[0x10] + uStack_1f8._4_4_ + uStack_1e8._4_4_;
      fVar29 = (float)uStack_1e8 + fVar25 * fVar21 * pfVar15[0x10] + (float)uStack_1f8;
      fStack_2a4 = pfVar15[3] - pfVar15[7];
      fStack_254 = fVar29;
      fVar25 = (float)func_0x0001802b6b90(lVar10 + 0x340);
      fVar25 = fVar25 * pfVar15[0x12];
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
      fVar22 = (float)func_0x0001802b6b90(lVar10 + 0x3f8);
      fVar22 = *(float *)(lVar10 + 0x3f4) * fVar22;
      fVar22 = fVar22 * fVar22;
      fVar25 = fVar25 * fVar25 * fVar25 * fVar25;
      fVar22 = fVar22 * fVar22;
      fVar33 = 1.0 - fVar25 * fVar25;
      fVar21 = *pfVar15;
      fVar30 = fVar21 - pfVar15[4];
      fVar25 = pfVar15[1];
      fVar31 = fVar25 - pfVar15[5];
      fVar34 = pfVar15[2];
      fVar32 = fVar34 - pfVar15[6];
      lVar5 = *(int64_t *)(lVar10 + 0x100);
      if (lVar5 == 0) {
        pfVar15[4] = fVar21;
        pfVar15[5] = fVar25;
        pfVar15[6] = fVar34;
      }
      else {
        fVar29 = *(float *)(lVar10 + 0xcc);
        fVar23 = (float)func_0x0001802b6b90(lVar10 + 0x118);
        fVar23 = fVar23 * pfVar15[0x13];
        fVar27 = 1.0 - fVar29;
        iVar2 = *(int *)(lVar5 + 0xb8);
        iVar3 = *(int *)(lVar5 + 0xbc);
        iVar4 = *(int *)(lVar5 + 0xc0);
        lVar13 = (int64_t)
                 (((((iVar4 + (int)((float)iVar4 *
                                   ((pfVar15[2] - *(float *)(param_1 + 0x1d)) *
                                    *(float *)(lVar10 + 0xe0) + *(float *)(lVar10 + 0xf0))) % iVar4)
                    % iVar4) * iVar3 +
                   (iVar3 + (int)((float)iVar3 *
                                 ((pfVar15[1] - *(float *)((int64_t)param_1 + 0xe4)) *
                                  *(float *)(lVar10 + 0xdc) + *(float *)(lVar10 + 0xec))) % iVar3) %
                   iVar3) * iVar2 +
                  (iVar2 + (int)((float)iVar2 *
                                ((*pfVar15 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar10 + 0xd8)
                                + *(float *)(lVar10 + 0xe8))) % iVar2) % iVar2) * 3);
        lVar10 = *(int64_t *)(lVar5 + 0xb0);
        fVar24 = *(float *)(lVar10 + 8 + lVar13 * 4) * fVar23;
        fVar26 = *(float *)(lVar10 + 4 + lVar13 * 4) * fVar23;
        fVar23 = fVar23 * *(float *)(lVar10 + lVar13 * 4);
        fStack_258 = fVar23 * fVar27;
        fStack_250 = fVar26 * fVar27;
        fVar27 = fVar24 * fVar27;
        lStack_268 = CONCAT44(lStack_268._4_4_,fVar27);
        fVar25 = pfVar15[1];
        fVar21 = *pfVar15;
        fVar34 = pfVar15[2];
        pfVar15[4] = ((fVar21 - fVar23 * fStack_270 * fVar33) - fVar21) * fVar29 + fVar21;
        pfVar15[5] = ((fVar25 - fVar26 * fStack_270 * fVar33) - fVar25) * fVar29 + fVar25;
        pfVar15[6] = ((pfVar15[2] - fVar24 * fStack_270 * fVar33) - fVar34) * fVar29 + fVar34;
        fVar29 = fStack_258 + fStack_254;
        fVar28 = fStack_250 + fVar28;
        fVar36 = fVar27 + fVar36;
      }
      fVar29 = fVar30 * fVar33 + fVar21 + fStack_24c * fVar29;
      *pfVar15 = fVar29;
      fVar28 = fVar31 * fVar33 + fVar25 + fStack_24c * fVar28;
      pfVar15[1] = fVar28;
      pfVar15[2] = fVar32 * fVar33 + fVar34 + fStack_24c * fVar36;
      pfVar15[7] = pfVar15[3];
      pfVar15[3] = (1.0 - fVar22 * fVar22) * fStack_2a4 + pfVar15[3];
      lVar10 = param_1[9];
      if (*(int *)(lVar10 + 0x6c) == 0) {
        fVar25 = (float)func_0x0001802b6b90(lVar10 + 0x618);
        fVar25 = fVar25 * pfVar15[10];
      }
      else {
        fVar25 = (float)func_0x0001802b6b90(lVar10 + 0x618);
        fVar25 = fVar25 + pfVar15[10];
      }
      pfVar15[0xb] = fVar25;
      fVar25 = -3.4028235e+38;
      lVar10 = *(int64_t *)(*param_1 + 0x2908);
      if ((lVar10 != 0) && (*(char *)(*param_1 + 0x2960) != '\0')) {
        if (*(char *)(lVar10 + 0x68) == '\0') {
          uStack_260 = 0;
          lVar10 = FUN_1803a5130(lVar10,pfVar15,&iStack_200,&uStack_260);
          fVar25 = (float)(**(code **)(**(int64_t **)(lVar10 + 0x60) + 8))
                                    (*(int64_t **)(lVar10 + 0x60),
                                     (float)iStack_1fc + uStack_260._4_4_,
                                     (float)iStack_200 + (float)uStack_260);
        }
        else {
          fVar25 = 1.0 / *(float *)(lVar10 + 0x58);
          fVar25 = (float)(**(code **)(**(int64_t **)(lVar10 + 0x50) + 8))
                                    (*(int64_t **)(lVar10 + 0x50),
                                     fVar25 * fVar28 * (float)*(int *)(lVar10 + 0x60),
                                     fVar25 * fVar29 * (float)*(int *)(lVar10 + 0x60));
          fVar25 = fVar25 + *(float *)(lVar10 + 0x5c);
        }
      }
      cStack_2a8 = '\0';
      bVar6 = false;
      if (fVar25 <= pfVar15[2]) {
        if ((((*(uint *)(param_1[9] + 0x68) & 0x8000) != 0) &&
            (*(char *)(*param_1 + 0x2901) != '\0')) && (*(char *)(*param_1 + 0x2900) == '\0')) {
          fStack_218 = pfVar15[2] - pfVar15[6];
          fStack_21c = pfVar15[1] - pfVar15[5];
          fStack_220 = *pfVar15 - pfVar15[4];
          uStack_214 = 0x7f7fffff;
          fVar28 = SQRT(fStack_21c * fStack_21c + fStack_220 * fStack_220 + fStack_218 * fStack_218)
          ;
          if (0.0 < fVar28) {
            fVar25 = 1.0 / fVar28;
            fStack_220 = fStack_220 * fVar25;
            fStack_21c = fVar25 * fStack_21c;
            fStack_218 = fVar25 * fStack_218;
            uStack_1c8 = *(uint64_t *)(pfVar15 + 4);
            uStack_1c0 = *(uint64_t *)(pfVar15 + 6);
            uStack_214 = 0x7f7fffff;
            uStack_1ac = 0x7f7fffff;
            fStack_1b8 = fStack_220;
            fStack_1b4 = fStack_21c;
            fStack_1b0 = fStack_218;
            fStack_1a8 = fVar28;
            func_0x00018023a1e0(&fStack_1b8,fStack_21c);
            fStack_118 = 0.0;
            uStack_198 = uStack_1c8;
            uStack_190 = uStack_1c0;
            uStack_188 = CONCAT44(fStack_1b4,fStack_1b8);
            uStack_180 = CONCAT44(uStack_1ac,fStack_1b0);
            fStack_178 = fStack_1a8;
            uStack_174 = 0;
            uStack_170 = 0;
            plVar14 = *(int64_t **)(*(int64_t *)(*param_1 + 0x28f8) + 0x318);
            (**(code **)(*plVar14 + 0x118))(plVar14,&uStack_198,afStack_158);
            if (0 < (int)fStack_118) {
              bVar6 = true;
              uStack_1d8 = CONCAT44(fStack_128,fStack_12c);
              uStack_1d0 = CONCAT44(fStack_120,fStack_124);
              fStack_210 = afStack_158[7];
              fStack_20c = afStack_158[8];
              fStack_208 = afStack_158[9];
              fStack_204 = afStack_158[10];
              fVar25 = afStack_158[9] + fStack_124 * 0.01;
              fStack_2a4 = afStack_158[8] + fStack_128 * 0.01;
              fVar28 = fStack_12c * 0.01 + afStack_158[7];
              iVar2 = *(int *)(param_1[9] + 0xf8);
              fVar35 = fStack_29c;
              if (iVar2 == 1) {
                pfVar15[0x13] = 0.0;
                *pfVar15 = fVar28;
                pfVar15[4] = fVar28;
                pfVar15[1] = fStack_2a4;
                pfVar15[5] = fStack_2a4;
                pfVar15[2] = fVar25;
                pfVar15[6] = fVar25;
                pfVar15[7] = pfVar15[3];
              }
              else if (iVar2 == 2) {
                pfVar15[9] = 1.0;
              }
              else {
                fVar21 = fStack_12c * (afStack_158[7] - pfVar15[4]) +
                         fStack_128 * (afStack_158[8] - pfVar15[5]) +
                         fStack_124 * (afStack_158[9] - pfVar15[6]);
                fVar21 = fVar21 + fVar21;
                fVar36 = (*pfVar15 - afStack_158[7]) * fStack_12c +
                         fStack_128 * (pfVar15[1] - afStack_158[8]) +
                         fStack_124 * (pfVar15[2] - afStack_158[9]);
                fVar36 = fVar36 + fVar36;
                fVar29 = 1.0 - *(float *)(param_1[9] + 0xc0);
                pfVar15[4] = fVar28 - ((afStack_158[7] - pfVar15[4]) - fStack_12c * fVar21) * fVar29
                ;
                pfVar15[5] = fStack_2a4 -
                             fVar29 * ((afStack_158[8] - pfVar15[5]) - fStack_128 * fVar21);
                pfVar15[6] = fVar25 - fVar29 * ((afStack_158[9] - pfVar15[6]) - fStack_124 * fVar21)
                ;
                fVar29 = 1.0 - *(float *)(param_1[9] + 0xc0);
                *pfVar15 = ((*pfVar15 - afStack_158[7]) - fStack_12c * fVar36) * fVar29 + fVar28;
                pfVar15[1] = fVar29 * ((pfVar15[1] - afStack_158[8]) - fStack_128 * fVar36) +
                             fStack_2a4;
                pfVar15[2] = fVar29 * ((pfVar15[2] - afStack_158[9]) - fStack_124 * fVar36) + fVar25
                ;
                pfVar15[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar15[3] - pfVar15[7]) +
                             pfVar15[7];
              }
            }
            fStack_118 = 0.0;
            if (bVar6) goto LAB_1802bb175;
          }
        }
      }
      else {
        fStack_210 = *pfVar15;
        fStack_20c = pfVar15[1];
        fStack_208 = fVar25;
        puVar11 = (uint64_t *)
                  FUN_1803a5440(*(uint64_t *)(*param_1 + 0x2908),auStack_168,pfVar15,0);
        uStack_1d8 = *puVar11;
        uStack_1d0 = puVar11[1];
        cStack_2a8 = '\x01';
        iVar2 = *(int *)(param_1[9] + 0xf8);
        if (iVar2 == 1) {
          pfVar15[0x13] = 0.0;
          pfVar15[4] = *pfVar15;
          pfVar15[5] = pfVar15[1];
          pfVar15[2] = fVar25 + 0.001;
          pfVar15[6] = fVar25 + 0.001;
          pfVar15[7] = pfVar15[3];
        }
        else if (iVar2 == 2) {
          pfVar15[9] = 1.0;
        }
        else {
          fVar28 = pfVar15[2];
          fVar29 = pfVar15[6];
          if (fVar28 - fVar29 != 0.0) {
            fVar21 = (fVar25 - fVar29) / (fVar28 - fVar29);
            fVar34 = (pfVar15[4] - *pfVar15) * fVar21 + *pfVar15;
            fVar36 = (pfVar15[5] - pfVar15[1]) * fVar21 + pfVar15[1];
            fVar28 = (fVar29 - fVar28) * fVar21 + fVar28;
            fVar29 = pfVar15[2] - fVar25;
            fVar25 = pfVar15[6] - fVar25;
            fVar21 = 1.0 - *(float *)(param_1[9] + 0xc0);
            pfVar15[4] = (pfVar15[4] - fVar34) * fVar21 + fVar34;
            pfVar15[5] = fVar36 + fVar21 * (pfVar15[5] - fVar36);
            pfVar15[6] = fVar28 + fVar21 * ((pfVar15[6] - (fVar25 + fVar25)) - fVar28);
            *pfVar15 = (*pfVar15 - fVar34) * fVar21 + fVar34;
            pfVar15[1] = fVar36 + fVar21 * (pfVar15[1] - fVar36);
            pfVar15[2] = fVar28 + fVar21 * ((pfVar15[2] - (fVar29 + fVar29)) - fVar28);
            pfVar15[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar15[3] - pfVar15[7]) +
                         pfVar15[7];
          }
        }
LAB_1802bb175:
        if (param_1[0x1e] != 0) {
          FUN_1802b0d00();
        }
      }
      cVar17 = cStack_2a8;
      cVar7 = func_0x0001802bf470(param_1);
      if (cVar7 != '\0') {
        if (cVar17 == '\0') {
          if (!bVar6) goto LAB_1802bb355;
          lStack_268 = *param_1;
          lVar10 = param_1[9];
          fStack_2a4 = (float)(CONCAT31((uint3)(*(uint *)(lVar10 + 0x68) >> 0x16),
                                        ~(byte)(*(uint *)(lVar10 + 0x68) >> 0xe)) & 0xffffff01);
          lVar5 = *(int64_t *)(lVar10 + 0x1020);
          lVar13 = *(int64_t *)(lVar10 + 0x1018);
          uVar8 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
          uVar8 = uVar8 >> 0x11 ^ uVar8;
          uVar8 = uVar8 << 5 ^ uVar8;
          *(uint *)(param_1 + 10) = uVar8;
          plVar14 = *(int64_t **)
                     (*(int64_t *)(lVar10 + 0x1018) +
                     ((uint64_t)(uVar8 - 1) % (lVar5 - lVar13 >> 3 & 0xffffffffU)) * 8);
          uStack_280 = plVar14;
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          uStack_2a0 = 2;
          uStack_2d8 = param_1[9] + 0x1048;
          uStack_2b8 = SUB41(fStack_2a4,0);
          plStack_2d0 = (int64_t *)
                        (CONCAT71(plStack_2d0._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                        0xffffffffffffff01);
          plStack_2c8 = plVar14;
          FUN_1801a48a0(lStack_268,&uStack_1d8);
        }
        else {
          lStack_268 = *param_1;
          lVar10 = param_1[9];
          fStack_2a4 = (float)(CONCAT31((uint3)(*(uint *)(lVar10 + 0x68) >> 0x16),
                                        ~(byte)(*(uint *)(lVar10 + 0x68) >> 0xe)) & 0xffffff01);
          lVar5 = *(int64_t *)(lVar10 + 0x1020);
          lVar13 = *(int64_t *)(lVar10 + 0x1018);
          uVar8 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
          uVar8 = uVar8 >> 0x11 ^ uVar8;
          uVar8 = uVar8 << 5 ^ uVar8;
          *(uint *)(param_1 + 10) = uVar8;
          plVar14 = *(int64_t **)
                     (*(int64_t *)(lVar10 + 0x1018) +
                     ((uint64_t)(uVar8 - 1) % (lVar5 - lVar13 >> 3 & 0xffffffffU)) * 8);
          uStack_290 = plVar14;
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          uStack_2a0 = 1;
          if (plVar14 != (int64_t *)0x0) {
            plStack_2c8 = (int64_t *)CONCAT71(plStack_2c8._1_7_,SUB41(fStack_2a4,0));
            uStack_2d8 = CONCAT71(uStack_2d8._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                         0xffffffffffffff01;
            plStack_2d0 = plVar14;
            FUN_1801a3f60(lStack_268,&fStack_210);
          }
        }
        uStack_2a0 = 0;
        if (plVar14 != (int64_t *)0x0) {
          (**(code **)(*plVar14 + 0x38))(plVar14);
        }
        *(int8_t *)(param_1 + 0x14) = 1;
      }
LAB_1802bb355:
      pfVar15[9] = fStack_270 / pfVar15[8] + pfVar15[9];
      fVar28 = *(float *)(param_1 + 2);
      if (*pfVar15 <= *(float *)(param_1 + 2)) {
        fVar28 = *pfVar15;
      }
      *(float *)(param_1 + 2) = fVar28;
      fVar28 = *(float *)((int64_t)param_1 + 0x14);
      if (pfVar15[1] <= *(float *)((int64_t)param_1 + 0x14)) {
        fVar28 = pfVar15[1];
      }
      *(float *)((int64_t)param_1 + 0x14) = fVar28;
      fVar28 = *(float *)(param_1 + 3);
      if (pfVar15[2] <= *(float *)(param_1 + 3)) {
        fVar28 = pfVar15[2];
      }
      *(float *)(param_1 + 3) = fVar28;
      fVar28 = *pfVar15;
      if (*pfVar15 <= *(float *)(param_1 + 4)) {
        fVar28 = *(float *)(param_1 + 4);
      }
      *(float *)(param_1 + 4) = fVar28;
      fVar28 = *(float *)((int64_t)param_1 + 0x24);
      if (*(float *)((int64_t)param_1 + 0x24) <= pfVar15[1]) {
        fVar28 = pfVar15[1];
      }
      *(float *)((int64_t)param_1 + 0x24) = fVar28;
      fVar28 = *(float *)(param_1 + 5);
      if (*(float *)(param_1 + 5) <= pfVar15[2]) {
        fVar28 = pfVar15[2];
      }
      *(float *)(param_1 + 5) = fVar28;
      if (fVar35 <= pfVar15[0xb]) {
        fVar35 = pfVar15[0xb];
      }
      fStack_29c = fVar35;
      if (1.0 < pfVar15[9]) {
        if (*(short *)(pfVar15 + 0xc) != -1) {
          piVar1 = (int *)(param_1[0x26] + (int64_t)*(short *)(pfVar15 + 0xc) * 0xc);
          *piVar1 = *piVar1 + -1;
        }
        uVar16 = (uint64_t)((int)uStack_238 - 1);
        lStack_228 = lStack_228 + -1;
        lVar20 = lVar20 + -0x70;
        plVar14 = param_1 + 0xb;
        uStack_238 = uVar16;
        if (param_1[0x1e] != 0) {
          FUN_1802b0ad0(param_1[0x1e],(int64_t)iStack_298 * 0x70 + *plVar14);
          lVar10 = param_1[0x1e];
          lVar13 = *(int64_t *)(lVar10 + 0x38) - *(int64_t *)(lVar10 + 0x30);
          lVar5 = lVar13 >> 0x3f;
          if (lVar13 / 0x88 + lVar5 != lVar5) {
            FUN_1802b09d0(lVar10,*(int32_t *)(lVar19 + 0x58 + *plVar14));
          }
        }
        lVar10 = *plVar14;
        *(int32_t *)(lVar10 + lVar19) = *(int32_t *)(lVar10 + lVar20);
        *(int32_t *)(lVar10 + 4 + lVar19) = *(int32_t *)(lVar10 + 4 + lVar20);
        *(int32_t *)(lVar10 + 8 + lVar19) = *(int32_t *)(lVar10 + 8 + lVar20);
        *(int32_t *)(lVar10 + 0xc + lVar19) = *(int32_t *)(lVar10 + 0xc + lVar20);
        *(int32_t *)(lVar10 + 0x10 + lVar19) = *(int32_t *)(lVar10 + 0x10 + lVar20);
        *(int32_t *)(lVar10 + 0x14 + lVar19) = *(int32_t *)(lVar10 + 0x14 + lVar20);
        *(int32_t *)(lVar10 + 0x18 + lVar19) = *(int32_t *)(lVar10 + 0x18 + lVar20);
        *(int32_t *)(lVar10 + 0x1c + lVar19) = *(int32_t *)(lVar10 + 0x1c + lVar20);
        *(int32_t *)(lVar10 + 0x20 + lVar19) = *(int32_t *)(lVar10 + 0x20 + lVar20);
        *(int32_t *)(lVar10 + 0x24 + lVar19) = *(int32_t *)(lVar10 + 0x24 + lVar20);
        *(int32_t *)(lVar10 + 0x28 + lVar19) = *(int32_t *)(lVar10 + 0x28 + lVar20);
        *(int32_t *)(lVar10 + 0x2c + lVar19) = *(int32_t *)(lVar10 + 0x2c + lVar20);
        *(int16_t *)(lVar10 + 0x30 + lVar19) = *(int16_t *)(lVar10 + 0x30 + lVar20);
        *(int16_t *)(lVar10 + 0x32 + lVar19) = *(int16_t *)(lVar10 + 0x32 + lVar20);
        *(int32_t *)(lVar10 + 0x34 + lVar19) = *(int32_t *)(lVar10 + 0x34 + lVar20);
        *(int32_t *)(lVar10 + 0x38 + lVar19) = *(int32_t *)(lVar10 + 0x38 + lVar20);
        *(int32_t *)(lVar10 + 0x3c + lVar19) = *(int32_t *)(lVar10 + 0x3c + lVar20);
        *(int32_t *)(lVar10 + 0x40 + lVar19) = *(int32_t *)(lVar10 + 0x40 + lVar20);
        *(int32_t *)(lVar10 + 0x44 + lVar19) = *(int32_t *)(lVar10 + 0x44 + lVar20);
        *(int32_t *)(lVar10 + 0x48 + lVar19) = *(int32_t *)(lVar10 + 0x48 + lVar20);
        *(int32_t *)(lVar10 + 0x4c + lVar19) = *(int32_t *)(lVar10 + 0x4c + lVar20);
        *(int16_t *)(lVar10 + 0x50 + lVar19) = *(int16_t *)(lVar10 + 0x50 + lVar20);
        *(int16_t *)(lVar10 + 0x52 + lVar19) = *(int16_t *)(lVar10 + 0x52 + lVar20);
        *(int8_t *)(lVar10 + 0x54 + lVar19) = *(int8_t *)(lVar10 + 0x54 + lVar20);
        *(int8_t *)(lVar10 + 0x55 + lVar19) = *(int8_t *)(lVar10 + 0x55 + lVar20);
        *(int8_t *)(lVar10 + 0x56 + lVar19) = *(int8_t *)(lVar10 + 0x56 + lVar20);
        *(int8_t *)(lVar10 + 0x57 + lVar19) = *(int8_t *)(lVar10 + 0x57 + lVar20);
        *(int32_t *)(lVar10 + 0x58 + lVar19) = *(int32_t *)(lVar10 + 0x58 + lVar20);
        *(int32_t *)(lVar10 + 0x5c + lVar19) = *(int32_t *)(lVar10 + 0x5c + lVar20);
        *(int32_t *)(lVar10 + 0x60 + lVar19) = *(int32_t *)(lVar10 + 0x60 + lVar20);
        *(int32_t *)(lVar10 + 100 + lVar19) = *(int32_t *)(lVar10 + 100 + lVar20);
        *(int32_t *)(lVar10 + 0x68 + lVar19) = *(int32_t *)(lVar10 + 0x68 + lVar20);
        *(int32_t *)(lVar10 + 0x6c + lVar19) = *(int32_t *)(lVar10 + 0x6c + lVar20);
      }
      else {
        iStack_298 = iStack_298 + 1;
        lStack_230 = lStack_230 + 1;
        lVar19 = lVar19 + 0x70;
        uVar16 = uStack_238;
      }
      fVar28 = 0.0;
    } while (lStack_230 < lStack_228);
    cVar17 = *(char *)((int64_t)param_1 + 0xa1);
  }
  fVar35 = fVar35 * 0.5;
  fVar28 = *(float *)(param_1 + 2) - fVar35;
  *(float *)(param_1 + 2) = fVar28;
  fVar25 = *(float *)((int64_t)param_1 + 0x14) - fVar35;
  *(float *)((int64_t)param_1 + 0x14) = fVar25;
  fVar29 = *(float *)(param_1 + 3) - fVar35;
  *(float *)(param_1 + 3) = fVar29;
  fVar21 = fVar35 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar21;
  fVar36 = fVar35 + *(float *)((int64_t)param_1 + 0x24);
  *(float *)((int64_t)param_1 + 0x24) = fVar36;
  fVar35 = fVar35 + *(float *)(param_1 + 5);
  *(float *)(param_1 + 5) = fVar35;
  if (cVar17 != '\0') {
    afStack_158[0] = fVar28;
    afStack_158[1] = fVar25;
    afStack_158[2] = fVar29;
    afStack_158[4] = fVar21;
    afStack_158[5] = fVar36;
    afStack_158[6] = fVar35;
    afStack_158[8] = fVar28;
    afStack_158[9] = fVar36;
    afStack_158[10] = fVar29;
    fStack_128 = fVar21;
    fStack_124 = fVar36;
    fStack_120 = fVar29;
    fStack_118 = fVar28;
    fStack_114 = fVar25;
    fStack_110 = fVar35;
    fStack_108 = fVar21;
    fStack_104 = fVar25;
    fStack_100 = fVar35;
    fStack_f8 = fVar28;
    fStack_f4 = fVar36;
    fStack_f0 = fVar35;
    fStack_e8 = fVar21;
    fStack_e4 = fVar25;
    fStack_e0 = fVar29;
    param_1[2] = 0x4cbebc204cbebc20;
    param_1[3] = 0x7f7fffff4cbebc20;
    param_1[4] = -0x334143df334143e0;
    param_1[5] = 0x7f7fffffccbebc20;
    *(int32_t *)(param_1 + 8) = 0;
    param_1[6] = 0;
    param_1[7] = 0x7f7fffff00000000;
    pfVar15 = afStack_158 + 6;
    lVar20 = 4;
    do {
      fVar29 = *(float *)((int64_t)param_1 + 0xb4);
      fVar21 = *(float *)(param_1 + 0x17);
      fVar36 = *(float *)((int64_t)param_1 + 0xbc);
      fVar35 = pfVar15[-6];
      fVar34 = *(float *)((int64_t)param_1 + 0xc4);
      fVar22 = *(float *)(param_1 + 0x19);
      fVar30 = *(float *)((int64_t)param_1 + 0xcc);
      fVar28 = pfVar15[-5];
      fVar31 = *(float *)((int64_t)param_1 + 0xd4);
      fVar32 = *(float *)(param_1 + 0x1b);
      fVar33 = *(float *)((int64_t)param_1 + 0xdc);
      fVar25 = pfVar15[-4];
      fVar23 = *(float *)((int64_t)param_1 + 0xe4);
      fVar24 = *(float *)(param_1 + 0x1d);
      fVar27 = *(float *)((int64_t)param_1 + 0xec);
      fVar26 = *(float *)(param_1 + 0x16) * fVar35 + *(float *)(param_1 + 0x18) * fVar28 +
               *(float *)(param_1 + 0x1a) * fVar25 + *(float *)(param_1 + 0x1c);
      pfVar15[-6] = fVar26;
      pfVar15[-5] = fVar29 * fVar35 + fVar34 * fVar28 + fVar31 * fVar25 + fVar23;
      pfVar15[-4] = fVar21 * fVar35 + fVar22 * fVar28 + fVar32 * fVar25 + fVar24;
      pfVar15[-3] = fVar36 * fVar35 + fVar30 * fVar28 + fVar33 * fVar25 + fVar27;
      fVar35 = fVar26;
      if (fVar26 < *(float *)(param_1 + 4)) {
        fVar35 = *(float *)(param_1 + 4);
      }
      fVar25 = pfVar15[-5];
      fVar28 = fVar25;
      if (fVar25 < *(float *)((int64_t)param_1 + 0x24)) {
        fVar28 = *(float *)((int64_t)param_1 + 0x24);
      }
      uStack_280 = (int64_t *)CONCAT44(fVar28,fVar35);
      fStack_288 = pfVar15[-4];
      fStack_278 = fStack_288;
      if (fStack_288 < *(float *)(param_1 + 5)) {
        fStack_278 = *(float *)(param_1 + 5);
      }
      param_1[4] = (int64_t)uStack_280;
      param_1[5] = CONCAT44(uStack_274,fStack_278);
      if (*(float *)(param_1 + 2) < fVar26) {
        fVar26 = *(float *)(param_1 + 2);
      }
      if (*(float *)((int64_t)param_1 + 0x14) < fVar25) {
        fVar25 = *(float *)((int64_t)param_1 + 0x14);
      }
      uStack_290 = (int64_t *)CONCAT44(fVar25,fVar26);
      if (*(float *)(param_1 + 3) < fStack_288) {
        fStack_288 = *(float *)(param_1 + 3);
      }
      param_1[2] = (int64_t)uStack_290;
      param_1[3] = CONCAT44(uStack_284,fStack_288);
      fVar29 = *(float *)((int64_t)param_1 + 0xb4);
      fVar21 = *(float *)(param_1 + 0x17);
      fVar36 = *(float *)((int64_t)param_1 + 0xbc);
      fVar35 = pfVar15[-2];
      fVar34 = *(float *)((int64_t)param_1 + 0xc4);
      fVar22 = *(float *)(param_1 + 0x19);
      fVar30 = *(float *)((int64_t)param_1 + 0xcc);
      fVar28 = pfVar15[-1];
      fVar31 = *(float *)((int64_t)param_1 + 0xd4);
      fVar32 = *(float *)(param_1 + 0x1b);
      fVar33 = *(float *)((int64_t)param_1 + 0xdc);
      fVar25 = *pfVar15;
      fVar23 = *(float *)((int64_t)param_1 + 0xe4);
      fVar24 = *(float *)(param_1 + 0x1d);
      fVar27 = *(float *)((int64_t)param_1 + 0xec);
      fVar26 = *(float *)(param_1 + 0x16) * fVar35 + *(float *)(param_1 + 0x18) * fVar28 +
               *(float *)(param_1 + 0x1a) * fVar25 + *(float *)(param_1 + 0x1c);
      pfVar15[-2] = fVar26;
      pfVar15[-1] = fVar29 * fVar35 + fVar34 * fVar28 + fVar31 * fVar25 + fVar23;
      *pfVar15 = fVar21 * fVar35 + fVar22 * fVar28 + fVar32 * fVar25 + fVar24;
      pfVar15[1] = fVar36 * fVar35 + fVar30 * fVar28 + fVar33 * fVar25 + fVar27;
      fVar35 = fVar26;
      if (fVar26 < *(float *)(param_1 + 4)) {
        fVar35 = *(float *)(param_1 + 4);
      }
      fVar25 = pfVar15[-1];
      fVar28 = fVar25;
      if (fVar25 < *(float *)((int64_t)param_1 + 0x24)) {
        fVar28 = *(float *)((int64_t)param_1 + 0x24);
      }
      uStack_280 = (int64_t *)CONCAT44(fVar28,fVar35);
      fStack_288 = *pfVar15;
      fStack_278 = fStack_288;
      if (fStack_288 < *(float *)(param_1 + 5)) {
        fStack_278 = *(float *)(param_1 + 5);
      }
      param_1[4] = (int64_t)uStack_280;
      param_1[5] = CONCAT44(uStack_274,fStack_278);
      if (*(float *)(param_1 + 2) < fVar26) {
        fVar26 = *(float *)(param_1 + 2);
      }
      if (*(float *)((int64_t)param_1 + 0x14) < fVar25) {
        fVar25 = *(float *)((int64_t)param_1 + 0x14);
      }
      uStack_290 = (int64_t *)CONCAT44(fVar25,fVar26);
      if (*(float *)(param_1 + 3) < fStack_288) {
        fStack_288 = *(float *)(param_1 + 3);
      }
      param_1[2] = (int64_t)uStack_290;
      param_1[3] = CONCAT44(uStack_284,fStack_288);
      pfVar15 = pfVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  SystemCore_Parser(param_1 + 2);
  uVar18 = (uint64_t)(int)uVar16;
  lVar20 = param_1[0xb];
  uVar16 = (param_1[0xc] - lVar20) / 0x70;
  if (uVar16 < uVar18) {
    FUN_1802beaf0(param_1 + 0xb,uVar18 - uVar16);
  }
  else {
    param_1[0xc] = uVar18 * 0x70 + lVar20;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_2f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






