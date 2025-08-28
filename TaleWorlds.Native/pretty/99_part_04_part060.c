#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part060.c - 1 个函数
// 函数: void function_2bba20(int64_t *param_1,float param_2)
void function_2bba20(int64_t *param_1,float param_2)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint64_t *puVar11;
  uint uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t *plVar16;
  float *pfVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int64_t lVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
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
  int8_t stack_array_2d8 [32];
  int64_t *plStack_2b8;
  int64_t *plStack_2b0;
  int64_t *plStack_2a8;
  byte bStack_298;
  float fStack_288;
  int32_t local_var_284;
  int iStack_280;
  float fStack_27c;
  float fStack_278;
  uint64_t local_var_270;
  int64_t lStack_268;
  uint64_t local_var_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int64_t lStack_238;
  int64_t lStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t local_var_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t local_var_20c;
  int iStack_208;
  int iStack_204;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t local_var_1bc;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t local_var_18c;
  float fStack_188;
  uint64_t local_var_180;
  int64_t *plStack_178;
  int64_t *plStack_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  float fStack_148;
  int8_t local_var_144;
  uint64_t local_var_140;
  int8_t stack_array_138 [16];
  int8_t stack_array_128 [28];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  int32_t local_var_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int32_t local_var_f0;
  int iStack_e8;
  uint64_t local_var_d8;
  local_var_180 = 0xfffffffffffffffe;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2d8;
  lVar21 = 0;
  local_var_284 = 0;
  lVar19 = param_1[0xc];
  lVar22 = param_1[0xb];
  uVar20 = (lVar19 - lVar22) / 0x70;
  fVar32 = param_2 * param_2;
  lVar13 = *param_1;
  lVar18 = param_1[9];
  fStack_288 = fVar32;
  fStack_278 = param_2;
  local_var_270 = uVar20;
  fStack_240 = (float)SystemFunction_0001802b6b90(lVar18 + 0xb20,*(float *)(lVar13 + 0x3044) * 0.041666668);
  if (*(char *)((int64_t)param_1 + 0xa1) == '\0') {
    fVar27 = *(float *)(lVar18 + 0xfa4);
    fVar30 = *(float *)(lVar18 + 0xfa8);
    fVar23 = *(float *)(lVar18 + 4000);
    local_var_1f8 = CONCAT44(fVar23 * *(float *)((int64_t)param_1 + 0xb4) +
                          fVar27 * *(float *)((int64_t)param_1 + 0xc4) +
                          fVar30 * *(float *)((int64_t)param_1 + 0xd4),
                          fVar23 * *(float *)(param_1 + 0x16) + fVar27 * *(float *)(param_1 + 0x18)
                          + fVar30 * *(float *)(param_1 + 0x1a));
    local_var_1f0 = CONCAT44(fVar23 * *(float *)((int64_t)param_1 + 0xbc) +
                          fVar27 * *(float *)((int64_t)param_1 + 0xcc) +
                          fVar30 * *(float *)((int64_t)param_1 + 0xdc),
                          fVar23 * *(float *)(param_1 + 0x17) + fVar27 * *(float *)(param_1 + 0x19)
                          + fVar30 * *(float *)(param_1 + 0x1b));
    local_var_1e8 = *(uint64_t *)(lVar18 + 0xf90);
    local_var_1e0 = *(uint64_t *)(lVar18 + 0xf98);
  }
  else {
    local_var_1f8 = *(uint64_t *)(lVar18 + 4000);
    local_var_1f0 = *(uint64_t *)(lVar18 + 0xfa8);
    fVar34 = *(float *)((int64_t)param_1 + 0xdc);
    fVar27 = *(float *)(lVar18 + 0xf94);
    fVar30 = *(float *)(lVar18 + 0xf98);
    fVar23 = *(float *)(lVar18 + 0xf90);
    local_var_1e8 = CONCAT44(fVar23 * *(float *)(param_1 + 0x18) +
                          fVar27 * *(float *)((int64_t)param_1 + 0xc4) +
                          fVar30 * *(float *)(param_1 + 0x19),
                          fVar23 * *(float *)(param_1 + 0x16) +
                          fVar27 * *(float *)((int64_t)param_1 + 0xb4) +
                          fVar30 * *(float *)(param_1 + 0x17));
    local_var_1e0 = CONCAT44(fVar23 * fVar34 + fVar27 * fVar34 + fVar30 * fVar34,
                          fVar23 * *(float *)(param_1 + 0x1a) +
                          fVar27 * *(float *)((int64_t)param_1 + 0xd4) +
                          fVar30 * *(float *)(param_1 + 0x1b));
  }
  pfVar17 = *(float **)(lVar13 + 0x81f0);
  fVar27 = ((float)system_error_code * 1e-05 +
           ABS(*(float *)((int64_t)param_1 + 0xe4) + *(float *)(param_1 + 0x1c))) * 8.0;
  uVar9 = (uint)fVar27;
  uVar10 = uVar9 & 0x800000ff;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffff00) + 1;
  }
  uVar12 = uVar10 + 1 & 0x800000ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
  }
  fStack_248 = ((*(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar12 * 4) -
                *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar10 * 4)) *
                (fVar27 - (float)(int)uVar9) +
               *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar10 * 4)) * *pfVar17 + 1.0;
  fStack_244 = pfVar17[3] * pfVar17[2] * fStack_248;
  fStack_248 = pfVar17[3] * pfVar17[1] * fStack_248;
  iStack_280 = 0;
  lStack_230 = (int64_t)(int)uVar20;
  if (0 < (int)uVar20) {
    lStack_238 = 0;
    lVar19 = lStack_230 * 0x70;
    do {
      pfVar17 = (float *)(param_1[0xb] + lVar21);
      pfVar17[0x17] = fStack_240;
      lVar22 = param_1[9];
      fVar27 = fStack_248;
      fVar30 = fStack_244;
      fVar23 = (float)SystemFunction_0001802b6b90(lVar22 + 0xa68);
      fVar36 = (float)local_var_1f0 + 0.0 + (float)local_var_1e0;
      fVar34 = fVar30 * fVar23 * pfVar17[0x10] + local_var_1f8._4_4_ + local_var_1e8._4_4_;
      fVar30 = (float)local_var_1e8 + (float)local_var_1f8 + fVar27 * fVar23 * pfVar17[0x10];
      fStack_27c = pfVar17[3] - pfVar17[7];
      fStack_258 = fVar30;
      fVar27 = (float)SystemFunction_0001802b6b90(lVar22 + 0x340);
      fVar27 = fVar27 * pfVar17[0x12];
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      fVar24 = (float)SystemFunction_0001802b6b90(lVar22 + 0x3f8);
      fVar24 = *(float *)(lVar22 + 0x3f4) * fVar24;
      fVar24 = fVar24 * fVar24;
      fVar27 = fVar27 * fVar27 * fVar27 * fVar27;
      fVar24 = fVar24 * fVar24;
      fVar33 = 1.0 - fVar27 * fVar27;
      fVar28 = *pfVar17;
      fVar35 = fVar28 - pfVar17[4];
      fVar23 = pfVar17[1];
      fStack_250 = fVar23 - pfVar17[5];
      fVar27 = pfVar17[2];
      fStack_24c = fVar27 - pfVar17[6];
      lVar13 = *(int64_t *)(lVar22 + 0x100);
      lStack_268 = lVar13;
      fStack_254 = fVar27;
      if (lVar13 == 0) {
        pfVar17[4] = fVar28;
        pfVar17[5] = fVar23;
        pfVar17[6] = fVar27;
      }
      else {
        fVar32 = *(float *)(lVar22 + 0xcc);
        fVar30 = (float)SystemFunction_0001802b6b90(lVar22 + 0x118);
        fVar30 = fVar30 * pfVar17[0x13];
        fVar31 = 1.0 - fVar32;
        iVar2 = *(int *)(lVar13 + 0xb8);
        iVar3 = *(int *)(*(int64_t *)(lVar22 + 0x100) + 0xbc);
        iVar4 = *(int *)(*(int64_t *)(lVar22 + 0x100) + 0xc0);
        lVar13 = (int64_t)
                 (((((iVar4 + (int)((float)iVar4 *
                                   ((fVar27 - *(float *)(param_1 + 0x1d)) *
                                    *(float *)(lVar22 + 0xe0) + *(float *)(lVar22 + 0xf0))) % iVar4)
                    % iVar4) * iVar3 +
                   (iVar3 + (int)((float)iVar3 *
                                 ((pfVar17[1] - *(float *)((int64_t)param_1 + 0xe4)) *
                                  *(float *)(lVar22 + 0xdc) + *(float *)(lVar22 + 0xec))) % iVar3) %
                   iVar3) * iVar2 +
                  (iVar2 + (int)((float)iVar2 *
                                ((fVar28 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar22 + 0xd8) +
                                *(float *)(lVar22 + 0xe8))) % iVar2) % iVar2) * 3);
        lVar22 = *(int64_t *)(lStack_268 + 0xb0);
        fVar26 = *(float *)(lVar22 + 8 + lVar13 * 4) * fVar30;
        fVar29 = *(float *)(lVar22 + 4 + lVar13 * 4) * fVar30;
        fVar30 = fVar30 * *(float *)(lVar22 + lVar13 * 4);
        fVar27 = pfVar17[2];
        fVar23 = pfVar17[1];
        fVar28 = *pfVar17;
        pfVar17[4] = ((fVar28 - fVar33 * fVar30 * fStack_278) - fVar28) * fVar32 + fVar28;
        pfVar17[5] = ((fVar23 - fVar29 * fStack_278 * fVar33) - fVar23) * fVar32 + fVar23;
        pfVar17[6] = ((fVar27 - fVar26 * fStack_278 * fVar33) - fVar27) * fVar32 + fVar27;
        fVar30 = fStack_258 + fVar30 * fVar31;
        fVar34 = fVar34 + fVar29 * fVar31;
        fVar36 = fVar36 + fVar26 * fVar31;
        fVar32 = fStack_288;
      }
      fVar30 = fVar35 * fVar33 + fVar28 + fVar32 * fVar30;
      *pfVar17 = fVar30;
      pfVar17[1] = fVar33 * fStack_250 + fVar23 + fVar32 * fVar34;
      fVar27 = fVar33 * fStack_24c + fStack_254 + fVar32 * fVar36;
      pfVar17[2] = fVar27;
      pfVar17[7] = pfVar17[3];
      pfVar17[3] = (1.0 - fVar24 * fVar24) * fStack_27c + pfVar17[3];
      lVar22 = param_1[9];
      if (*(int *)(lVar22 + 0x6c) == 0) {
        fVar23 = (float)SystemFunction_0001802b6b90(lVar22 + 0x618);
        fVar23 = fVar23 * pfVar17[10];
      }
      else {
        fVar23 = (float)SystemFunction_0001802b6b90(lVar22 + 0x618);
        fVar23 = fVar23 + pfVar17[10];
      }
      pfVar17[0xb] = fVar23;
      fStack_1c4 = pfVar17[1];
      local_var_1bc = 0x7f7fffff;
      fVar36 = fVar27 - pfVar17[6];
      fStack_1d4 = fStack_1c4 - pfVar17[5];
      fStack_1d8 = fVar30 - pfVar17[4];
      local_var_1cc = 0x7f7fffff;
      fVar23 = fVar36 * fVar36 + fStack_1d4 * fStack_1d4 + fStack_1d8 * fStack_1d8;
      auVar25 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar34 = auVar25._0_4_;
      fStack_1d0 = (float)system_data_fc80 * fVar34 * (3.0 - fVar23 * fVar34 * fVar34);
      fStack_1d8 = fStack_1d0 * fStack_1d8;
      fStack_1d4 = fStack_1d0 * fStack_1d4;
      fStack_1d0 = fStack_1d0 * fVar36;
      iVar2 = *(int *)(param_1[9] + 0x1060);
      fStack_1c8 = fVar30;
      fStack_1c0 = fVar27;
      if (((iVar2 == -1) || (iVar3 = *(int *)(param_1[9] + 0x1064), iVar3 == -1)) ||
         (param_1[0x2b] - param_1[0x2a] >> 3 == 0)) {
LAB_1802bc206:
        fVar32 = -3.4028235e+38;
        lVar22 = *(int64_t *)(*param_1 + 0x2908);
        if ((lVar22 != 0) && (*(char *)(*param_1 + 0x2960) != '\0')) {
          if (*(char *)(lVar22 + 0x68) == '\0') {
            local_var_260 = 0;
            lVar22 = function_3a5130(lVar22,pfVar17,&iStack_208,&local_var_260);
            fVar32 = (float)(**(code **)(**(int64_t **)(lVar22 + 0x60) + 8))
                                      (*(int64_t **)(lVar22 + 0x60),
                                       (float)iStack_204 + local_var_260._4_4_,
                                       (float)iStack_208 + (float)local_var_260);
          }
          else {
            fVar32 = 1.0 / *(float *)(lVar22 + 0x58);
            fVar32 = (float)(**(code **)(**(int64_t **)(lVar22 + 0x50) + 8))
                                      (*(int64_t **)(lVar22 + 0x50),
                                       fVar32 * pfVar17[1] * (float)*(int *)(lVar22 + 0x60),
                                       fVar32 * *pfVar17 * (float)*(int *)(lVar22 + 0x60));
            fVar32 = fVar32 + *(float *)(lVar22 + 0x5c);
          }
        }
        bVar6 = false;
        bVar5 = false;
        if (fVar32 <= pfVar17[2]) {
          if ((((*(uint *)(param_1[9] + 0x68) & 0x8000) != 0) &&
              (*(char *)(*param_1 + 0x2901) != '\0')) && (*(char *)(*param_1 + 0x2900) == '\0')) {
            fStack_220 = pfVar17[2] - pfVar17[6];
            fStack_224 = pfVar17[1] - pfVar17[5];
            fStack_228 = *pfVar17 - pfVar17[4];
            local_var_21c = 0x7f7fffff;
            fVar32 = SQRT(fStack_228 * fStack_228 + fStack_224 * fStack_224 +
                          fStack_220 * fStack_220);
            if (0.0 < fVar32) {
              fVar27 = 1.0 / fVar32;
              fStack_228 = fStack_228 * fVar27;
              fStack_224 = fVar27 * fStack_224;
              fStack_220 = fVar27 * fStack_220;
              local_var_1a8 = *(uint64_t *)(pfVar17 + 4);
              local_var_1a0 = *(uint64_t *)(pfVar17 + 6);
              local_var_21c = 0x7f7fffff;
              local_var_18c = 0x7f7fffff;
              fStack_198 = fStack_228;
              fStack_194 = fStack_224;
              fStack_190 = fStack_220;
              fStack_188 = fVar32;
              Function_671d3b4d(&fStack_198,fStack_224);
              iStack_e8 = 0;
              local_var_168 = local_var_1a8;
              local_var_160 = local_var_1a0;
              local_var_158 = CONCAT44(fStack_194,fStack_198);
              local_var_150 = CONCAT44(local_var_18c,fStack_190);
              fStack_148 = fStack_188;
              local_var_144 = 0;
              local_var_140 = 0;
              plVar16 = *(int64_t **)(*(int64_t *)(*param_1 + 0x28f8) + 0x318);
              (**(code **)(*plVar16 + 0x118))(plVar16,&local_var_168,stack_array_128);
              if (0 < iStack_e8) {
                bVar5 = true;
                local_var_1b8 = CONCAT44(fStack_f8,fStack_fc);
                local_var_1b0 = CONCAT44(local_var_f0,fStack_f4);
                fStack_218 = fStack_10c;
                fStack_214 = fStack_108;
                fStack_210 = fStack_104;
                local_var_20c = local_var_100;
                fVar27 = fStack_104 + fStack_f4 * 0.01;
                fStack_27c = fStack_108 + fStack_f8 * 0.01;
                fVar32 = fStack_fc * 0.01 + fStack_10c;
                iVar2 = *(int *)(param_1[9] + 0xf8);
                if (iVar2 == 1) {
                  pfVar17[0x13] = 0.0;
                  *pfVar17 = fVar32;
                  pfVar17[4] = fVar32;
                  pfVar17[1] = fStack_27c;
                  pfVar17[5] = fStack_27c;
                  pfVar17[2] = fVar27;
                  pfVar17[6] = fVar27;
                  pfVar17[7] = pfVar17[3];
                }
                else if (iVar2 == 2) {
                  pfVar17[9] = 1.0;
                }
                else {
                  fVar23 = fStack_fc * (fStack_10c - pfVar17[4]) +
                           fStack_f8 * (fStack_108 - pfVar17[5]) +
                           fStack_f4 * (fStack_104 - pfVar17[6]);
                  fVar23 = fVar23 + fVar23;
                  fVar34 = fStack_fc * (*pfVar17 - fStack_10c) +
                           fStack_f8 * (pfVar17[1] - fStack_108) +
                           fStack_f4 * (pfVar17[2] - fStack_104);
                  fVar34 = fVar34 + fVar34;
                  fVar30 = 1.0 - *(float *)(param_1[9] + 0xc0);
                  pfVar17[4] = fVar32 - ((fStack_10c - pfVar17[4]) - fStack_fc * fVar23) * fVar30;
                  pfVar17[5] = fStack_27c -
                               fVar30 * ((fStack_108 - pfVar17[5]) - fStack_f8 * fVar23);
                  pfVar17[6] = fVar27 - fVar30 * ((fStack_104 - pfVar17[6]) - fStack_f4 * fVar23);
                  fVar30 = 1.0 - *(float *)(param_1[9] + 0xc0);
                  *pfVar17 = ((*pfVar17 - fStack_10c) - fStack_fc * fVar34) * fVar30 + fVar32;
                  pfVar17[1] = fVar30 * ((pfVar17[1] - fStack_108) - fStack_f8 * fVar34) +
                               fStack_27c;
                  pfVar17[2] = fVar30 * ((pfVar17[2] - fStack_104) - fStack_f4 * fVar34) + fVar27;
                  pfVar17[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar17[3] - pfVar17[7]) +
                               pfVar17[7];
                }
              }
              iStack_e8 = 0;
              bVar7 = false;
              if (bVar5) goto LAB_1802bc8a5;
            }
          }
        }
        else {
          fStack_218 = *pfVar17;
          fStack_214 = pfVar17[1];
          fStack_210 = fVar32;
          puVar11 = (uint64_t *)
                    function_3a5440(*(uint64_t *)(*param_1 + 0x2908),stack_array_138,pfVar17,0);
          local_var_1b8 = *puVar11;
          local_var_1b0 = puVar11[1];
          bVar7 = true;
          iVar2 = *(int *)(param_1[9] + 0xf8);
          if (iVar2 == 1) {
            pfVar17[0x13] = 0.0;
            pfVar17[4] = *pfVar17;
            pfVar17[5] = pfVar17[1];
            pfVar17[2] = fVar32 + 0.001;
            pfVar17[6] = fVar32 + 0.001;
            pfVar17[7] = pfVar17[3];
          }
          else if (iVar2 == 2) {
            pfVar17[9] = 1.0;
          }
          else {
            fVar27 = pfVar17[2];
            fVar30 = pfVar17[6];
            if (fVar27 - fVar30 != 0.0) {
              fVar23 = (fVar32 - fVar30) / (fVar27 - fVar30);
              fVar36 = (pfVar17[4] - *pfVar17) * fVar23 + *pfVar17;
              fVar34 = (pfVar17[5] - pfVar17[1]) * fVar23 + pfVar17[1];
              fVar27 = (fVar30 - fVar27) * fVar23 + fVar27;
              fVar30 = pfVar17[2] - fVar32;
              fVar32 = pfVar17[6] - fVar32;
              fVar23 = 1.0 - *(float *)(param_1[9] + 0xc0);
              pfVar17[4] = (pfVar17[4] - fVar36) * fVar23 + fVar36;
              pfVar17[5] = (pfVar17[5] - fVar34) * fVar23 + fVar34;
              pfVar17[6] = ((pfVar17[6] - (fVar32 + fVar32)) - fVar27) * fVar23 + fVar27;
              *pfVar17 = (*pfVar17 - fVar36) * fVar23 + fVar36;
              pfVar17[1] = fVar23 * (pfVar17[1] - fVar34) + fVar34;
              pfVar17[2] = fVar23 * ((pfVar17[2] - (fVar30 + fVar30)) - fVar27) + fVar27;
              pfVar17[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar17[3] - pfVar17[7]) +
                           pfVar17[7];
            }
          }
LAB_1802bc8a5:
          bVar6 = bVar7;
          if (param_1[0x1e] != 0) {
            function_2b0d00();
          }
        }
        cVar8 = Function_6964b931(param_1);
        uVar20 = local_var_270;
        fVar32 = fStack_288;
        if (cVar8 != '\0') {
          if (bVar6) {
            lStack_268 = *param_1;
            lVar22 = param_1[9];
            uVar9 = *(uint *)(lVar22 + 0x68);
            lVar13 = *(int64_t *)(lVar22 + 0x1020);
            lVar18 = *(int64_t *)(lVar22 + 0x1018);
            uVar10 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
            uVar10 = uVar10 >> 0x11 ^ uVar10;
            uVar10 = uVar10 << 5 ^ uVar10;
            *(uint *)(param_1 + 10) = uVar10;
            plVar16 = *(int64_t **)
                       (*(int64_t *)(lVar22 + 0x1018) +
                       ((uint64_t)(uVar10 - 1) % (lVar13 - lVar18 >> 3 & 0xffffffffU)) * 8);
            plStack_178 = plVar16;
            if (plVar16 != (int64_t *)0x0) {
              (**(code **)(*plVar16 + 0x28))(plVar16);
            }
            local_var_284 = 1;
            if (plVar16 != (int64_t *)0x0) {
              plStack_2a8 = (int64_t *)
                            (CONCAT71(plStack_2a8._1_7_,~(byte)(uVar9 >> 0xe)) & 0xffffffffffffff01)
              ;
              plStack_2b8 = (int64_t *)
                            (CONCAT71(plStack_2b8._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd))
                            & 0xffffffffffffff01);
              plStack_2b0 = plVar16;
              function_1a3f60(lStack_268,&fStack_218,param_1[9] + 0x1040);
            }
          }
          else {
            if (!bVar5) goto LAB_1802bca83;
            lStack_268 = *param_1;
            lVar22 = param_1[9];
            uVar9 = *(uint *)(lVar22 + 0x68);
            lVar13 = *(int64_t *)(lVar22 + 0x1020);
            lVar18 = *(int64_t *)(lVar22 + 0x1018);
            uVar10 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
            uVar10 = uVar10 >> 0x11 ^ uVar10;
            uVar10 = uVar10 << 5 ^ uVar10;
            *(uint *)(param_1 + 10) = uVar10;
            plVar16 = *(int64_t **)
                       (*(int64_t *)(lVar22 + 0x1018) +
                       ((uint64_t)(uVar10 - 1) % (lVar13 - lVar18 >> 3 & 0xffffffffU)) * 8);
            plStack_170 = plVar16;
            if (plVar16 != (int64_t *)0x0) {
              (**(code **)(*plVar16 + 0x28))(plVar16);
            }
            local_var_284 = 2;
            plStack_2b8 = (int64_t *)(param_1[9] + 0x1048);
            plStack_2b0 = (int64_t *)
                          (CONCAT71(plStack_2b0._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                          0xffffffffffffff01);
            plStack_2a8 = plVar16;
            bStack_298 = ~(byte)(uVar9 >> 0xe) & 1;
            function_1a48a0(lStack_268,&local_var_1b8,&fStack_218);
          }
          local_var_284 = 0;
          if (plVar16 != (int64_t *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16);
          }
          *(int8_t *)(param_1 + 0x14) = 1;
          uVar20 = local_var_270;
          fVar32 = fStack_288;
        }
      }
      else {
        uVar9 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
        uVar9 = uVar9 >> 0x11 ^ uVar9;
        uVar9 = uVar9 << 5 ^ uVar9;
        *(uint *)(param_1 + 10) = uVar9;
        plStack_2b0 = (int64_t *)CONCAT44(plStack_2b0._4_4_,0x3e800000);
        plStack_2b8 = param_1 + 0x2a;
        cVar8 = function_19fc10(*param_1,&fStack_1c8,&fStack_1d8,
                              (uVar9 - 1) % ((iVar3 - iVar2) + 1U) + iVar2);
        if (cVar8 == '\0') goto LAB_1802bc206;
      }
LAB_1802bca83:
      plVar16 = param_1 + 0xb;
      fVar27 = fStack_278 / pfVar17[8] + pfVar17[9];
      pfVar17[9] = fVar27;
      if (1.0 < fVar27) {
        if (*(short *)(pfVar17 + 0xc) != -1) {
          piVar1 = (int *)(param_1[0x26] + (int64_t)*(short *)(pfVar17 + 0xc) * 0xc);
          *piVar1 = *piVar1 + -1;
        }
        uVar20 = (uint64_t)((int)uVar20 - 1);
        lStack_230 = lStack_230 + -1;
        lVar22 = lVar19 + -0x70;
        local_var_270 = uVar20;
        if (param_1[0x1e] != 0) {
          function_2b0ad0(param_1[0x1e],(int64_t)iStack_280 * 0x70 + *plVar16);
          lVar13 = param_1[0x1e];
          lVar15 = *(int64_t *)(lVar13 + 0x38) - *(int64_t *)(lVar13 + 0x30);
          lVar18 = lVar15 >> 0x3f;
          if (lVar15 / 0x88 + lVar18 != lVar18) {
            function_2b09d0(lVar13,*(int32_t *)(lVar21 + 0x58 + *plVar16));
          }
        }
        lVar13 = *plVar16;
        *(int32_t *)(lVar21 + lVar13) = *(int32_t *)(lVar22 + lVar13);
        *(int32_t *)(lVar21 + 4 + lVar13) = *(int32_t *)(lVar19 + -0x6c + lVar13);
        *(int32_t *)(lVar21 + 8 + lVar13) = *(int32_t *)(lVar19 + -0x68 + lVar13);
        *(int32_t *)(lVar21 + 0xc + lVar13) = *(int32_t *)(lVar19 + -100 + lVar13);
        *(int32_t *)(lVar21 + 0x10 + lVar13) = *(int32_t *)(lVar19 + -0x60 + lVar13);
        *(int32_t *)(lVar21 + 0x14 + lVar13) = *(int32_t *)(lVar19 + -0x5c + lVar13);
        *(int32_t *)(lVar21 + 0x18 + lVar13) = *(int32_t *)(lVar19 + -0x58 + lVar13);
        *(int32_t *)(lVar21 + 0x1c + lVar13) = *(int32_t *)(lVar19 + -0x54 + lVar13);
        *(int32_t *)(lVar21 + 0x20 + lVar13) = *(int32_t *)(lVar19 + -0x50 + lVar13);
        *(int32_t *)(lVar21 + 0x24 + lVar13) = *(int32_t *)(lVar19 + -0x4c + lVar13);
        *(int32_t *)(lVar21 + 0x28 + lVar13) = *(int32_t *)(lVar19 + -0x48 + lVar13);
        *(int32_t *)(lVar21 + 0x2c + lVar13) = *(int32_t *)(lVar19 + -0x44 + lVar13);
        *(int16_t *)(lVar21 + 0x30 + lVar13) = *(int16_t *)(lVar19 + -0x40 + lVar13);
        *(int16_t *)(lVar21 + 0x32 + lVar13) = *(int16_t *)(lVar19 + -0x3e + lVar13);
        *(int32_t *)(lVar21 + 0x34 + lVar13) = *(int32_t *)(lVar19 + -0x3c + lVar13);
        *(int32_t *)(lVar21 + 0x38 + lVar13) = *(int32_t *)(lVar19 + -0x38 + lVar13);
        *(int32_t *)(lVar21 + 0x3c + lVar13) = *(int32_t *)(lVar19 + -0x34 + lVar13);
        *(int32_t *)(lVar21 + 0x40 + lVar13) = *(int32_t *)(lVar19 + -0x30 + lVar13);
        *(int32_t *)(lVar21 + 0x44 + lVar13) = *(int32_t *)(lVar19 + -0x2c + lVar13);
        *(int32_t *)(lVar21 + 0x48 + lVar13) = *(int32_t *)(lVar19 + -0x28 + lVar13);
        *(int32_t *)(lVar21 + 0x4c + lVar13) = *(int32_t *)(lVar19 + -0x24 + lVar13);
        *(int16_t *)(lVar21 + 0x50 + lVar13) = *(int16_t *)(lVar19 + -0x20 + lVar13);
        *(int16_t *)(lVar21 + 0x52 + lVar13) = *(int16_t *)(lVar19 + -0x1e + lVar13);
        *(int8_t *)(lVar21 + 0x54 + lVar13) = *(int8_t *)(lVar19 + -0x1c + lVar13);
        *(int8_t *)(lVar21 + 0x55 + lVar13) = *(int8_t *)(lVar19 + -0x1b + lVar13);
        *(int8_t *)(lVar21 + 0x56 + lVar13) = *(int8_t *)(lVar19 + -0x1a + lVar13);
        *(int8_t *)(lVar21 + 0x57 + lVar13) = *(int8_t *)(lVar19 + -0x19 + lVar13);
        *(int32_t *)(lVar21 + 0x58 + lVar13) = *(int32_t *)(lVar19 + -0x18 + lVar13);
        *(int32_t *)(lVar21 + 0x5c + lVar13) = *(int32_t *)(lVar19 + -0x14 + lVar13);
        *(int32_t *)(lVar21 + 0x60 + lVar13) = *(int32_t *)(lVar19 + -0x10 + lVar13);
        *(int32_t *)(lVar21 + 100 + lVar13) = *(int32_t *)(lVar19 + -0xc + lVar13);
        *(int32_t *)(lVar21 + 0x68 + lVar13) = *(int32_t *)(lVar19 + -8 + lVar13);
        *(int32_t *)(lVar21 + 0x6c + lVar13) = *(int32_t *)(lVar19 + -4 + lVar13);
      }
      else {
        iStack_280 = iStack_280 + 1;
        lStack_238 = lStack_238 + 1;
        lVar21 = lVar21 + 0x70;
        lVar22 = lVar19;
      }
      lVar19 = lVar22;
    } while (lStack_238 < lStack_230);
    lVar19 = param_1[0xc];
    lVar22 = *plVar16;
  }
  uVar14 = (uint64_t)(int)uVar20;
  uVar20 = (lVar19 - lVar22) / 0x70;
  if (uVar20 < uVar14) {
    function_2beaf0(param_1 + 0xb,uVar14 - uVar20);
  }
  else {
    param_1[0xc] = uVar14 * 0x70 + lVar22;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_2d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address