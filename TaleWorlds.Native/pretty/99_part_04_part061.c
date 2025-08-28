#include "TaleWorlds.Native.Split.h"

// 99_part_04_part061.c - 4 个函数

// 函数: void FUN_1802bcd60(longlong *param_1,float param_2)
void FUN_1802bcd60(longlong *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint64_t *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  char cVar19;
  longlong lVar20;
  longlong lVar21;
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
  int8_t auStack_2b8 [32];
  ulonglong uStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  byte bStack_278;
  char cStack_268;
  int32_t uStack_264;
  int iStack_260;
  longlong lStack_258;
  float fStack_250;
  uint64_t uStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  ulonglong uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  uint64_t uStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  float fStack_148;
  int8_t uStack_144;
  uint64_t uStack_140;
  int8_t auStack_138 [16];
  int8_t auStack_128 [28];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  int32_t uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int32_t uStack_f0;
  int iStack_e8;
  ulonglong uStack_d8;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  lVar17 = 0;
  uStack_264 = 0;
  lVar20 = param_1[0xc];
  lVar21 = param_1[0xb];
  uVar16 = (lVar20 - lVar21) / 0x70;
  fStack_234 = param_2 * param_2;
  lVar5 = *param_1;
  lVar12 = param_1[9];
  fStack_250 = param_2;
  uStack_220 = uVar16;
  fStack_228 = (float)func_0x0001802b6b90(lVar12 + 0xb20,*(float *)(lVar5 + 0x3044) * 0.041666668);
  if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
    fVar26 = *(float *)(lVar12 + 0xfa4);
    fVar23 = *(float *)(lVar12 + 0xfa8);
    fVar22 = *(float *)(lVar12 + 4000);
    uStack_1d8 = CONCAT44(fVar22 * *(float *)((longlong)param_1 + 0xb4) +
                          fVar26 * *(float *)((longlong)param_1 + 0xc4) +
                          fVar23 * *(float *)((longlong)param_1 + 0xd4),
                          fVar22 * *(float *)(param_1 + 0x16) + fVar26 * *(float *)(param_1 + 0x18)
                          + fVar23 * *(float *)(param_1 + 0x1a));
    uStack_1d0 = CONCAT44(fVar22 * *(float *)((longlong)param_1 + 0xbc) +
                          fVar26 * *(float *)((longlong)param_1 + 0xcc) +
                          fVar23 * *(float *)((longlong)param_1 + 0xdc),
                          fVar22 * *(float *)(param_1 + 0x17) + fVar26 * *(float *)(param_1 + 0x19)
                          + fVar23 * *(float *)(param_1 + 0x1b));
    uStack_1c8 = *(uint64_t *)(lVar12 + 0xf90);
    uStack_1c0 = *(uint64_t *)(lVar12 + 0xf98);
  }
  else {
    uStack_1d8 = *(uint64_t *)(lVar12 + 4000);
    uStack_1d0 = *(uint64_t *)(lVar12 + 0xfa8);
    fVar29 = *(float *)((longlong)param_1 + 0xdc);
    fVar26 = *(float *)(lVar12 + 0xf94);
    fVar23 = *(float *)(lVar12 + 0xf98);
    fVar22 = *(float *)(lVar12 + 0xf90);
    uStack_1c8 = CONCAT44(fVar22 * *(float *)(param_1 + 0x18) +
                          fVar26 * *(float *)((longlong)param_1 + 0xc4) +
                          fVar23 * *(float *)(param_1 + 0x19),
                          fVar22 * *(float *)(param_1 + 0x16) +
                          fVar26 * *(float *)((longlong)param_1 + 0xb4) +
                          fVar23 * *(float *)(param_1 + 0x17));
    uStack_1c0 = CONCAT44(fVar22 * fVar29 + fVar26 * fVar29 + fVar23 * fVar29,
                          fVar22 * *(float *)(param_1 + 0x1a) +
                          fVar26 * *(float *)((longlong)param_1 + 0xd4) +
                          fVar23 * *(float *)(param_1 + 0x1b));
  }
  pfVar18 = *(float **)(lVar5 + 0x81f0);
  fVar26 = ((float)_DAT_180c8ed30 * 1e-05 +
           ABS(*(float *)((longlong)param_1 + 0xe4) + *(float *)(param_1 + 0x1c))) * 8.0;
  uVar8 = (uint)fVar26;
  uVar9 = uVar8 & 0x800000ff;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
  }
  uVar11 = uVar9 + 1 & 0x800000ff;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
  }
  fStack_230 = ((*(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar11 * 4) -
                *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar9 * 4)) *
                (fVar26 - (float)(int)uVar8) + *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar9 * 4)
               ) * *pfVar18 + 1.0;
  fStack_22c = pfVar18[3] * pfVar18[2] * fStack_230;
  fStack_230 = pfVar18[3] * pfVar18[1] * fStack_230;
  iStack_260 = 0;
  lStack_210 = (longlong)(int)uVar16;
  if (0 < (int)uVar16) {
    lStack_218 = 0;
    lVar20 = lStack_210 * 0x70;
    do {
      fVar26 = fStack_22c;
      pfVar18 = (float *)(param_1[0xb] + lVar17);
      pfVar18[0x17] = fStack_228;
      lVar21 = param_1[9];
      fVar23 = fStack_230;
      fVar22 = (float)func_0x0001802b6b90(lVar21 + 0xa68);
      fVar29 = (float)uStack_1d0 + 0.0 + (float)uStack_1c0;
      fVar26 = fVar26 * fVar22 * pfVar18[0x10] + uStack_1d8._4_4_ + uStack_1c8._4_4_;
      fVar22 = (float)uStack_1c8 + (float)uStack_1d8 + fVar23 * fVar22 * pfVar18[0x10];
      lStack_258 = CONCAT44(lStack_258._4_4_,pfVar18[3] - pfVar18[7]);
      fStack_240 = fVar22;
      fStack_238 = fVar29;
      fVar23 = (float)func_0x0001802b6b90(lVar21 + 0x340);
      fVar23 = fVar23 * pfVar18[0x12];
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      fVar24 = (float)func_0x0001802b6b90(lVar21 + 0x3f8);
      fVar24 = *(float *)(lVar21 + 0x3f4) * fVar24;
      fVar24 = fVar24 * fVar24;
      fVar23 = fVar23 * fVar23 * fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar34 = 1.0 - fVar23 * fVar23;
      fVar27 = *pfVar18;
      fVar30 = fVar27 - pfVar18[4];
      fVar33 = pfVar18[1];
      fVar31 = fVar33 - pfVar18[5];
      fVar23 = pfVar18[2];
      fVar32 = pfVar18[6];
      lVar5 = *(longlong *)(lVar21 + 0x100);
      if (lVar5 == 0) {
        pfVar18[4] = fVar27;
        pfVar18[5] = fVar33;
        pfVar18[6] = fVar23;
      }
      else {
        fVar22 = *(float *)(lVar21 + 0xcc);
        fVar29 = (float)func_0x0001802b6b90(lVar21 + 0x118);
        fVar29 = fVar29 * pfVar18[0x13];
        fVar35 = 1.0 - fVar22;
        iVar2 = *(int *)(lVar5 + 0xb8);
        iVar3 = *(int *)(lVar5 + 0xbc);
        iVar4 = *(int *)(lVar5 + 0xc0);
        lVar12 = (longlong)
                 (((((iVar4 + (int)((float)iVar4 *
                                   ((fVar23 - *(float *)(param_1 + 0x1d)) *
                                    *(float *)(lVar21 + 0xe0) + *(float *)(lVar21 + 0xf0))) % iVar4)
                    % iVar4) * iVar3 +
                   (iVar3 + (int)((float)iVar3 *
                                 ((pfVar18[1] - *(float *)((longlong)param_1 + 0xe4)) *
                                  *(float *)(lVar21 + 0xdc) + *(float *)(lVar21 + 0xec))) % iVar3) %
                   iVar3) * iVar2 +
                  (iVar2 + (int)((float)iVar2 *
                                ((fVar27 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar21 + 0xd8) +
                                *(float *)(lVar21 + 0xe8))) % iVar2) % iVar2) * 3);
        lVar21 = *(longlong *)(lVar5 + 0xb0);
        fVar25 = *(float *)(lVar21 + 8 + lVar12 * 4) * fVar29;
        fVar28 = *(float *)(lVar21 + 4 + lVar12 * 4) * fVar29;
        fVar29 = fVar29 * *(float *)(lVar21 + lVar12 * 4);
        fStack_23c = fVar35 * fVar28;
        fVar33 = pfVar18[1];
        fVar27 = *pfVar18;
        pfVar18[4] = ((fVar27 - fVar34 * fVar29 * fStack_250) - fVar27) * fVar22 + fVar27;
        pfVar18[5] = ((fVar33 - fVar28 * fStack_250 * fVar34) - fVar33) * fVar22 + fVar33;
        pfVar18[6] = ((pfVar18[2] - fVar25 * fStack_250 * fVar34) - pfVar18[2]) * fVar22 +
                     pfVar18[2];
        fVar22 = fVar35 * fVar29 + fStack_240;
        fVar26 = fStack_23c + fVar26;
        fVar29 = fVar35 * fVar25 + fStack_238;
      }
      fVar22 = fVar30 * fVar34 + fVar27 + fVar22 * fStack_234;
      *pfVar18 = fVar22;
      fVar26 = fVar31 * fVar34 + fVar33 + fVar26 * fStack_234;
      pfVar18[1] = fVar26;
      pfVar18[2] = (fVar23 - fVar32) * fVar34 + pfVar18[2] + fVar29 * fStack_234;
      pfVar18[7] = pfVar18[3];
      pfVar18[3] = (1.0 - fVar24 * fVar24) * (float)lStack_258 + pfVar18[3];
      lVar21 = param_1[9];
      if (*(int *)(lVar21 + 0x6c) == 0) {
        fVar23 = (float)func_0x0001802b6b90(lVar21 + 0x618);
        fVar23 = fVar23 * pfVar18[10];
      }
      else {
        fVar23 = (float)func_0x0001802b6b90(lVar21 + 0x618);
        fVar23 = fVar23 + pfVar18[10];
      }
      pfVar18[0xb] = fVar23;
      fVar23 = -3.4028235e+38;
      lVar21 = *(longlong *)(*param_1 + 0x2908);
      if ((lVar21 != 0) && (*(char *)(*param_1 + 0x2960) != '\0')) {
        if (*(char *)(lVar21 + 0x68) == '\0') {
          uStack_248 = 0;
          lVar21 = FUN_1803a5130(lVar21,pfVar18,&iStack_1e8,&uStack_248);
          fVar23 = (float)(**(code **)(**(longlong **)(lVar21 + 0x60) + 8))
                                    (*(longlong **)(lVar21 + 0x60),
                                     (float)iStack_1e4 + uStack_248._4_4_,
                                     (float)iStack_1e8 + (float)uStack_248);
        }
        else {
          fVar23 = 1.0 / *(float *)(lVar21 + 0x58);
          fVar23 = (float)(**(code **)(**(longlong **)(lVar21 + 0x50) + 8))
                                    (*(longlong **)(lVar21 + 0x50),
                                     fVar23 * fVar26 * (float)*(int *)(lVar21 + 0x60),
                                     fVar23 * fVar22 * (float)*(int *)(lVar21 + 0x60));
          fVar23 = fVar23 + *(float *)(lVar21 + 0x5c);
        }
      }
      cStack_268 = '\0';
      bVar6 = false;
      if (fVar23 <= pfVar18[2]) {
        if ((((*(uint *)(param_1[9] + 0x68) & 0x8000) != 0) &&
            (*(char *)(*param_1 + 0x2901) != '\0')) && (*(char *)(*param_1 + 0x2900) == '\0')) {
          fStack_200 = pfVar18[2] - pfVar18[6];
          fStack_204 = pfVar18[1] - pfVar18[5];
          fStack_208 = *pfVar18 - pfVar18[4];
          uStack_1fc = 0x7f7fffff;
          fVar26 = SQRT(fStack_208 * fStack_208 + fStack_204 * fStack_204 + fStack_200 * fStack_200)
          ;
          if (0.0 < fVar26) {
            fVar23 = 1.0 / fVar26;
            fStack_208 = fVar23 * fStack_208;
            fStack_204 = fVar23 * fStack_204;
            fStack_200 = fVar23 * fStack_200;
            uStack_1a8 = *(uint64_t *)(pfVar18 + 4);
            uStack_1a0 = *(uint64_t *)(pfVar18 + 6);
            uStack_1fc = 0x7f7fffff;
            uStack_18c = 0x7f7fffff;
            fStack_198 = fStack_208;
            fStack_194 = fStack_204;
            fStack_190 = fStack_200;
            fStack_188 = fVar26;
            func_0x00018023a1e0();
            iStack_e8 = 0;
            uStack_168 = uStack_1a8;
            uStack_160 = uStack_1a0;
            uStack_158 = CONCAT44(fStack_194,fStack_198);
            uStack_150 = CONCAT44(uStack_18c,fStack_190);
            fStack_148 = fStack_188;
            uStack_144 = 0;
            uStack_140 = 0;
            plVar15 = *(longlong **)(*(longlong *)(*param_1 + 0x28f8) + 0x318);
            (**(code **)(*plVar15 + 0x118))(plVar15,&uStack_168,auStack_128);
            if (0 < iStack_e8) {
              bVar6 = true;
              uStack_1b8 = CONCAT44(fStack_f8,fStack_fc);
              uStack_1b0 = CONCAT44(uStack_f0,fStack_f4);
              fStack_1f8 = fStack_10c;
              fStack_1f4 = fStack_108;
              fStack_1f0 = fStack_104;
              uStack_1ec = uStack_100;
              fVar22 = fStack_104 + fStack_f4 * 0.01;
              fVar26 = fStack_108 + fStack_f8 * 0.01;
              lStack_258 = CONCAT44(lStack_258._4_4_,fVar26);
              fVar23 = fStack_fc * 0.01 + fStack_10c;
              iVar2 = *(int *)(param_1[9] + 0xf8);
              if (iVar2 == 1) {
                pfVar18[0x13] = 0.0;
                *pfVar18 = fVar23;
                pfVar18[4] = fVar23;
                pfVar18[1] = fVar26;
                pfVar18[5] = fVar26;
                pfVar18[2] = fVar22;
                pfVar18[6] = fVar22;
                pfVar18[7] = pfVar18[3];
              }
              else if (iVar2 == 2) {
                pfVar18[9] = 1.0;
              }
              else {
                fVar32 = (fStack_10c - pfVar18[4]) * fStack_fc +
                         (fStack_108 - pfVar18[5]) * fStack_f8 +
                         (fStack_104 - pfVar18[6]) * fStack_f4;
                fVar32 = fVar32 + fVar32;
                fVar33 = fStack_fc * (*pfVar18 - fStack_10c) + fStack_f8 * (pfVar18[1] - fStack_108)
                         + fStack_f4 * (pfVar18[2] - fStack_104);
                fVar33 = fVar33 + fVar33;
                fVar29 = 1.0 - *(float *)(param_1[9] + 0xc0);
                pfVar18[4] = fVar23 - ((fStack_10c - pfVar18[4]) - fStack_fc * fVar32) * fVar29;
                pfVar18[5] = fVar26 - fVar29 * ((fStack_108 - pfVar18[5]) - fStack_f8 * fVar32);
                pfVar18[6] = fVar22 - fVar29 * ((fStack_104 - pfVar18[6]) - fStack_f4 * fVar32);
                fVar29 = 1.0 - *(float *)(param_1[9] + 0xc0);
                *pfVar18 = ((*pfVar18 - fStack_10c) - fStack_fc * fVar33) * fVar29 + fVar23;
                pfVar18[1] = fVar29 * ((pfVar18[1] - fStack_108) - fStack_f8 * fVar33) + fVar26;
                pfVar18[2] = fVar29 * ((pfVar18[2] - fStack_104) - fStack_f4 * fVar33) + fVar22;
                pfVar18[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar18[3] - pfVar18[7]) +
                             pfVar18[7];
              }
            }
            iStack_e8 = 0;
            if (bVar6) goto LAB_1802bda85;
          }
        }
      }
      else {
        fStack_1f8 = *pfVar18;
        fStack_1f4 = pfVar18[1];
        fStack_1f0 = fVar23;
        puVar10 = (uint64_t *)
                  FUN_1803a5440(*(uint64_t *)(*param_1 + 0x2908),auStack_138,pfVar18,0);
        uStack_1b8 = *puVar10;
        uStack_1b0 = puVar10[1];
        cStack_268 = '\x01';
        iVar2 = *(int *)(param_1[9] + 0xf8);
        if (iVar2 == 1) {
          pfVar18[0x13] = 0.0;
          pfVar18[4] = *pfVar18;
          pfVar18[5] = pfVar18[1];
          pfVar18[2] = fVar23 + 0.001;
          pfVar18[6] = fVar23 + 0.001;
          pfVar18[7] = pfVar18[3];
        }
        else if (iVar2 == 2) {
          pfVar18[9] = 1.0;
        }
        else {
          fVar26 = pfVar18[2];
          fVar22 = pfVar18[6];
          if (fVar26 - fVar22 != 0.0) {
            fVar29 = (fVar23 - fVar22) / (fVar26 - fVar22);
            fVar33 = (pfVar18[4] - *pfVar18) * fVar29 + *pfVar18;
            fVar32 = (pfVar18[5] - pfVar18[1]) * fVar29 + pfVar18[1];
            fVar26 = (fVar22 - fVar26) * fVar29 + fVar26;
            fVar22 = pfVar18[2] - fVar23;
            fVar23 = pfVar18[6] - fVar23;
            fVar29 = 1.0 - *(float *)(param_1[9] + 0xc0);
            pfVar18[4] = (pfVar18[4] - fVar33) * fVar29 + fVar33;
            pfVar18[5] = fVar32 + fVar29 * (pfVar18[5] - fVar32);
            pfVar18[6] = fVar26 + fVar29 * ((pfVar18[6] - (fVar23 + fVar23)) - fVar26);
            *pfVar18 = (*pfVar18 - fVar33) * fVar29 + fVar33;
            pfVar18[1] = (pfVar18[1] - fVar32) * fVar29 + fVar32;
            pfVar18[2] = ((pfVar18[2] - (fVar22 + fVar22)) - fVar26) * fVar29 + fVar26;
            pfVar18[3] = (1.0 - *(float *)(param_1[9] + 0xc4)) * (pfVar18[3] - pfVar18[7]) +
                         pfVar18[7];
          }
        }
LAB_1802bda85:
        if (param_1[0x1e] != 0) {
          FUN_1802b0d00();
        }
      }
      cVar19 = cStack_268;
      cVar7 = func_0x0001802bf470(param_1);
      if (cVar7 != '\0') {
        if (cVar19 == '\0') {
          if (!bVar6) goto LAB_1802bdc64;
          lStack_258 = *param_1;
          lVar21 = param_1[9];
          uVar8 = *(uint *)(lVar21 + 0x68);
          lVar5 = *(longlong *)(lVar21 + 0x1020);
          lVar12 = *(longlong *)(lVar21 + 0x1018);
          uVar9 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
          uVar9 = uVar9 >> 0x11 ^ uVar9;
          uVar9 = uVar9 << 5 ^ uVar9;
          *(uint *)(param_1 + 10) = uVar9;
          plVar15 = *(longlong **)
                     (*(longlong *)(lVar21 + 0x1018) +
                     ((ulonglong)(uVar9 - 1) % (lVar5 - lVar12 >> 3 & 0xffffffffU)) * 8);
          plStack_170 = plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x28))(plVar15);
          }
          uStack_264 = 2;
          uStack_298 = param_1[9] + 0x1048;
          plStack_290 = (longlong *)
                        (CONCAT71(plStack_290._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                        0xffffffffffffff01);
          plStack_288 = plVar15;
          bStack_278 = ~(byte)(uVar8 >> 0xe) & 1;
          FUN_1801a48a0(lStack_258,&uStack_1b8);
        }
        else {
          lStack_258 = *param_1;
          lVar21 = param_1[9];
          uVar8 = *(uint *)(lVar21 + 0x68);
          lVar5 = *(longlong *)(lVar21 + 0x1020);
          lVar12 = *(longlong *)(lVar21 + 0x1018);
          uVar9 = (int)param_1[10] << 0xd ^ *(uint *)(param_1 + 10);
          uVar9 = uVar9 >> 0x11 ^ uVar9;
          uVar9 = uVar9 << 5 ^ uVar9;
          *(uint *)(param_1 + 10) = uVar9;
          plVar15 = *(longlong **)
                     (*(longlong *)(lVar21 + 0x1018) +
                     ((ulonglong)(uVar9 - 1) % (lVar5 - lVar12 >> 3 & 0xffffffffU)) * 8);
          plStack_178 = plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x28))(plVar15);
          }
          uStack_264 = 1;
          if (plVar15 != (longlong *)0x0) {
            plStack_288 = (longlong *)
                          (CONCAT71(plStack_288._1_7_,~(byte)(uVar8 >> 0xe)) & 0xffffffffffffff01);
            uStack_298 = CONCAT71(uStack_298._1_7_,(char)(*(uint *)(param_1[9] + 0x68) >> 0xd)) &
                         0xffffffffffffff01;
            plStack_290 = plVar15;
            FUN_1801a3f60(lStack_258,&fStack_1f8);
          }
        }
        uStack_264 = 0;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x38))(plVar15);
        }
        *(int8_t *)(param_1 + 0x14) = 1;
      }
LAB_1802bdc64:
      plVar15 = param_1 + 0xb;
      fVar26 = fStack_250 / pfVar18[8] + pfVar18[9];
      pfVar18[9] = fVar26;
      if (1.0 < fVar26) {
        if (*(short *)(pfVar18 + 0xc) != -1) {
          piVar1 = (int *)(param_1[0x26] + (longlong)*(short *)(pfVar18 + 0xc) * 0xc);
          *piVar1 = *piVar1 + -1;
        }
        uVar16 = (ulonglong)((int)uStack_220 - 1);
        lStack_210 = lStack_210 + -1;
        lVar21 = lVar20 + -0x70;
        uStack_220 = uVar16;
        if (param_1[0x1e] != 0) {
          FUN_1802b0ad0(param_1[0x1e],(longlong)iStack_260 * 0x70 + *plVar15);
          lVar5 = param_1[0x1e];
          lVar14 = *(longlong *)(lVar5 + 0x38) - *(longlong *)(lVar5 + 0x30);
          lVar12 = lVar14 >> 0x3f;
          if (lVar14 / 0x88 + lVar12 != lVar12) {
            FUN_1802b09d0(lVar5,*(int32_t *)(lVar17 + 0x58 + *plVar15));
          }
        }
        lVar5 = *plVar15;
        *(int32_t *)(lVar17 + lVar5) = *(int32_t *)(lVar21 + lVar5);
        *(int32_t *)(lVar17 + 4 + lVar5) = *(int32_t *)(lVar20 + -0x6c + lVar5);
        *(int32_t *)(lVar17 + 8 + lVar5) = *(int32_t *)(lVar20 + -0x68 + lVar5);
        *(int32_t *)(lVar17 + 0xc + lVar5) = *(int32_t *)(lVar20 + -100 + lVar5);
        *(int32_t *)(lVar17 + 0x10 + lVar5) = *(int32_t *)(lVar20 + -0x60 + lVar5);
        *(int32_t *)(lVar17 + 0x14 + lVar5) = *(int32_t *)(lVar20 + -0x5c + lVar5);
        *(int32_t *)(lVar17 + 0x18 + lVar5) = *(int32_t *)(lVar20 + -0x58 + lVar5);
        *(int32_t *)(lVar17 + 0x1c + lVar5) = *(int32_t *)(lVar20 + -0x54 + lVar5);
        *(int32_t *)(lVar17 + 0x20 + lVar5) = *(int32_t *)(lVar20 + -0x50 + lVar5);
        *(int32_t *)(lVar17 + 0x24 + lVar5) = *(int32_t *)(lVar20 + -0x4c + lVar5);
        *(int32_t *)(lVar17 + 0x28 + lVar5) = *(int32_t *)(lVar20 + -0x48 + lVar5);
        *(int32_t *)(lVar17 + 0x2c + lVar5) = *(int32_t *)(lVar20 + -0x44 + lVar5);
        *(int16_t *)(lVar17 + 0x30 + lVar5) = *(int16_t *)(lVar20 + -0x40 + lVar5);
        *(int16_t *)(lVar17 + 0x32 + lVar5) = *(int16_t *)(lVar20 + -0x3e + lVar5);
        *(int32_t *)(lVar17 + 0x34 + lVar5) = *(int32_t *)(lVar20 + -0x3c + lVar5);
        *(int32_t *)(lVar17 + 0x38 + lVar5) = *(int32_t *)(lVar20 + -0x38 + lVar5);
        *(int32_t *)(lVar17 + 0x3c + lVar5) = *(int32_t *)(lVar20 + -0x34 + lVar5);
        *(int32_t *)(lVar17 + 0x40 + lVar5) = *(int32_t *)(lVar20 + -0x30 + lVar5);
        *(int32_t *)(lVar17 + 0x44 + lVar5) = *(int32_t *)(lVar20 + -0x2c + lVar5);
        *(int32_t *)(lVar17 + 0x48 + lVar5) = *(int32_t *)(lVar20 + -0x28 + lVar5);
        *(int32_t *)(lVar17 + 0x4c + lVar5) = *(int32_t *)(lVar20 + -0x24 + lVar5);
        *(int16_t *)(lVar17 + 0x50 + lVar5) = *(int16_t *)(lVar20 + -0x20 + lVar5);
        *(int16_t *)(lVar17 + 0x52 + lVar5) = *(int16_t *)(lVar20 + -0x1e + lVar5);
        *(int8_t *)(lVar17 + 0x54 + lVar5) = *(int8_t *)(lVar20 + -0x1c + lVar5);
        *(int8_t *)(lVar17 + 0x55 + lVar5) = *(int8_t *)(lVar20 + -0x1b + lVar5);
        *(int8_t *)(lVar17 + 0x56 + lVar5) = *(int8_t *)(lVar20 + -0x1a + lVar5);
        *(int8_t *)(lVar17 + 0x57 + lVar5) = *(int8_t *)(lVar20 + -0x19 + lVar5);
        *(int32_t *)(lVar17 + 0x58 + lVar5) = *(int32_t *)(lVar20 + -0x18 + lVar5);
        *(int32_t *)(lVar17 + 0x5c + lVar5) = *(int32_t *)(lVar20 + -0x14 + lVar5);
        *(int32_t *)(lVar17 + 0x60 + lVar5) = *(int32_t *)(lVar20 + -0x10 + lVar5);
        *(int32_t *)(lVar17 + 100 + lVar5) = *(int32_t *)(lVar20 + -0xc + lVar5);
        *(int32_t *)(lVar17 + 0x68 + lVar5) = *(int32_t *)(lVar20 + -8 + lVar5);
        *(int32_t *)(lVar17 + 0x6c + lVar5) = *(int32_t *)(lVar20 + -4 + lVar5);
      }
      else {
        iStack_260 = iStack_260 + 1;
        lStack_218 = lStack_218 + 1;
        lVar17 = lVar17 + 0x70;
        uVar16 = uStack_220;
        lVar21 = lVar20;
      }
      lVar20 = lVar21;
    } while (lStack_218 < lStack_210);
    lVar20 = param_1[0xc];
    lVar21 = *plVar15;
  }
  uVar13 = (ulonglong)(int)uVar16;
  uVar16 = (lVar20 - lVar21) / 0x70;
  if (uVar16 < uVar13) {
    FUN_1802beaf0(param_1 + 0xb,uVar13 - uVar16);
  }
  else {
    param_1[0xc] = uVar13 * 0x70 + lVar21;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802bdf30(longlong *param_1,ulonglong param_2)
void FUN_1802bdf30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  
  puVar4 = (int32_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar4) / 0xc) < param_2) {
    puVar5 = (int32_t *)*param_1;
    lVar1 = ((longlong)puVar4 - (longlong)puVar5) / 0xc;
    uVar6 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < lVar1 + param_2) {
      uVar6 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar6 != 0) {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0xc,(char)param_1[3]);
      puVar5 = (int32_t *)*param_1;
      puVar4 = (int32_t *)param_1[1];
    }
    if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,puVar5,(longlong)puVar4 - (longlong)puVar5);
    }
    if (param_2 != 0) {
      lVar2 = lVar1 + 8;
      uVar3 = param_2;
      do {
        *(int32_t *)(lVar2 + -8) = 0;
        *(uint64_t *)(lVar2 + -4) = 0xffffffffffffffff;
        lVar2 = lVar2 + 0xc;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[2] = lVar1 + uVar6 * 0xc;
    param_1[1] = lVar1 + param_2 * 0xc;
  }
  else {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = 0;
        *(uint64_t *)(puVar4 + 1) = 0xffffffffffffffff;
        puVar4 = puVar4 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar4 = (int32_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar4 + param_2 * 3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802bdf82(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1802bdf82(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_R14;
  ulonglong uVar4;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar3 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  uVar4 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar3 + unaff_R14)) {
    uVar4 = lVar3 + unaff_R14;
  }
  lVar3 = 0;
  if (uVar4 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0xc,(char)unaff_RSI[3]);
    param_4 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_4 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_4,unaff_RBX - param_4);
  }
  if (unaff_R14 != 0) {
    lVar1 = lVar3 + 8;
    lVar2 = unaff_R14;
    do {
      *(int32_t *)(lVar1 + -8) = 0;
      *(uint64_t *)(lVar1 + -4) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar3;
    unaff_RSI[2] = lVar3 + uVar4 * 0xc;
    unaff_RSI[1] = lVar3 + unaff_R14 * 0xc;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802be079(longlong param_1)
void FUN_1802be079(longlong param_1)

{
  longlong lVar1;
  int32_t *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_R14;
  if (unaff_R14 != 0) {
    do {
      *unaff_RBX = 0;
      *(uint64_t *)(unaff_RBX + 1) = 0xffffffffffffffff;
      unaff_RBX = unaff_RBX + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(int32_t **)(param_1 + 8);
  }
  *(int32_t **)(unaff_RSI + 8) = unaff_RBX + unaff_R14 * 3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




