#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part076.c - 13 个函数

// 函数: void FUN_1807fdbd0(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
void FUN_1807fdbd0(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8,int64_t param_9,float param_10
                  ,float param_11,float param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint64_t uVar15;
  int64_t lVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  pfVar12 = *(float **)(param_6 + 8);
  pfVar5 = *(float **)(param_8 + 8);
  fVar1 = pfVar5[4];
  fVar2 = pfVar12[4];
  pfVar6 = *(float **)(param_7 + 8);
  fVar3 = pfVar6[4];
  fVar7 = *pfVar6;
  fVar8 = pfVar6[1];
  fVar9 = pfVar6[2];
  fVar10 = pfVar6[3];
  lVar11 = (int64_t)param_5 * 0x10;
  fVar20 = *(float *)(lVar11 + param_7);
  fVar27 = ((float *)(lVar11 + param_7))[1];
  pfVar14 = (float *)(param_6 + lVar11);
  lVar16 = (int64_t)param_4;
  pfVar13 = (float *)(param_8 + lVar11);
  fVar28 = *(float *)(lVar11 + param_9);
  fVar24 = ((float *)(lVar11 + param_9))[1];
  fVar30 = *pfVar14;
  pfVar6 = *(float **)(param_9 + 8);
  fVar32 = *pfVar13;
  fVar4 = pfVar6[4];
  fVar19 = *param_2;
  fVar17 = fVar30 * *pfVar12 + pfVar14[1] * pfVar12[1] + fVar19;
  fVar18 = fVar32 * *pfVar5 + pfVar13[1] * pfVar5[1] + fVar19;
  fVar19 = fVar28 * *pfVar6 + fVar24 * pfVar6[1] + fVar19;
  fVar21 = fVar30 * pfVar12[2] + pfVar14[1] * pfVar12[3] + fVar17 * fVar2;
  fVar23 = fVar32 * pfVar5[2] + pfVar13[1] * pfVar5[3] + fVar18 * fVar1;
  fVar24 = fVar28 * pfVar6[2] + fVar24 * pfVar6[3] + fVar19 * fVar4;
  if (1 < param_3) {
    fStack_d8 = (float)*(uint64_t *)pfVar12;
    fStack_d4 = (float)((uint64_t)*(uint64_t *)pfVar12 >> 0x20);
    fStack_d0 = (float)*(uint64_t *)(pfVar12 + 2);
    fStack_cc = (float)((uint64_t)*(uint64_t *)(pfVar12 + 2) >> 0x20);
    pfVar12 = param_2 + lVar16;
    uVar15 = (uint64_t)(param_3 - 1);
    fVar22 = fVar21;
    fVar25 = fVar24;
    fVar26 = fVar27;
    fVar29 = fVar28;
    fVar31 = fVar30;
    fVar33 = fVar32;
    do {
      fVar32 = fVar18;
      fVar30 = fVar17;
      fVar28 = fVar19;
      fVar27 = fVar20;
      fVar19 = *pfVar12;
      fVar20 = fVar23 + fVar27 * fVar7 + fVar26 * fVar8;
      fVar17 = fVar19 + fVar30 * fStack_d8 + fVar31 * fStack_d4;
      fVar18 = fVar19 + fVar32 * *pfVar5 + fVar33 * pfVar5[1];
      fVar19 = fVar19 + fVar28 * *pfVar6 + fVar29 * pfVar6[1];
      fVar21 = fVar30 * fStack_d0 + fVar31 * fStack_cc + fVar17 * fVar2;
      fVar23 = fVar32 * pfVar5[2] + fVar33 * pfVar5[3] + fVar18 * fVar1;
      fVar24 = fVar28 * pfVar6[2] + fVar29 * pfVar6[3] + fVar19 * fVar4;
      *(float *)(((param_1 + lVar16 * -4) - (int64_t)param_2) + (int64_t)pfVar12) =
           (fVar22 * param_10 - (fVar27 * fVar9 + fVar26 * fVar10 + fVar20 * fVar3) * param_11) +
           fVar25 * param_12;
      pfVar12 = pfVar12 + lVar16;
      uVar15 = uVar15 - 1;
      fVar22 = fVar21;
      fVar25 = fVar24;
      fVar26 = fVar27;
      fVar29 = fVar28;
      fVar31 = fVar30;
      fVar33 = fVar32;
    } while (uVar15 != 0);
  }
  *(uint64_t *)pfVar14 = CONCAT44(fVar30,fVar17);
  *(uint64_t *)pfVar13 = CONCAT44(fVar32,fVar18);
  *(uint64_t *)(lVar11 + param_9) = CONCAT44(fVar28,fVar19);
  *(float *)(param_1 + (int64_t)((param_3 + -1) * param_4) * 4) =
       (fVar21 * param_10 - (fVar20 * fVar9 + fVar27 * fVar10 + fVar3 * fVar20) * param_11) +
       fVar24 * param_12;
  *(uint64_t *)(lVar11 + param_7) = CONCAT44(fVar20,fVar20 * fVar7 + fVar27 * fVar8 + fVar23);
  return;
}






// 函数: void FUN_1807fdf00(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
void FUN_1807fdf00(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8,int64_t param_9,float param_10
                  ,float param_11,float param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint64_t uVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  pfVar5 = *(float **)(param_6 + 8);
  pfVar6 = *(float **)(param_8 + 8);
  pfVar7 = *(float **)(param_7 + 8);
  fVar20 = pfVar5[4];
  fVar2 = pfVar6[4];
  fVar3 = pfVar7[4];
  pfVar8 = *(float **)(param_9 + 8);
  lVar15 = (int64_t)param_5 * 0x10;
  fVar19 = *(float *)(lVar15 + param_7);
  fVar35 = ((float *)(lVar15 + param_7))[1];
  pfVar1 = (float *)(lVar15 + param_6);
  fVar4 = pfVar8[4];
  fVar42 = *pfVar1;
  fVar22 = pfVar1[1];
  pfVar13 = (float *)(param_6 + 0x200 + lVar15);
  fVar38 = *(float *)(lVar15 + param_9);
  fVar23 = ((float *)(lVar15 + param_9))[1];
  pfVar9 = (float *)(lVar15 + 0x200 + param_8);
  fVar27 = *pfVar9;
  fVar44 = pfVar9[1];
  fVar25 = *pfVar13;
  lVar14 = (int64_t)param_4;
  pfVar9 = (float *)(param_9 + 0x200 + lVar15);
  fVar40 = *pfVar9;
  pfVar10 = (float *)(param_7 + 0x200 + lVar15);
  fVar24 = *pfVar10;
  fVar37 = pfVar10[1];
  fVar18 = *param_2;
  fVar16 = fVar42 * *pfVar5 + fVar22 * pfVar5[1] + fVar18;
  fVar17 = fVar42 * *pfVar6 + fVar22 * pfVar6[1] + fVar18;
  fVar18 = fVar38 * *pfVar8 + fVar23 * pfVar8[1] + fVar18;
  fVar21 = fVar42 * pfVar5[2] + fVar22 * pfVar5[3] + fVar16 * fVar20 +
           fVar25 * *pfVar5 + pfVar13[1] * pfVar5[1];
  fVar22 = fVar42 * pfVar6[2] + fVar22 * pfVar6[3] + fVar17 * fVar2 +
           fVar27 * *pfVar6 + fVar44 * pfVar6[1];
  fVar23 = fVar38 * pfVar8[2] + fVar23 * pfVar8[3] + fVar18 * fVar4 +
           fVar40 * *pfVar8 + pfVar9[1] * pfVar8[1];
  fVar29 = fVar25 * pfVar5[2] + pfVar13[1] * pfVar5[3] + fVar21 * fVar20;
  fVar31 = fVar27 * pfVar6[2] + fVar44 * pfVar6[3] + fVar22 * fVar2;
  fVar32 = fVar40 * pfVar8[2] + pfVar9[1] * pfVar8[3] + fVar23 * fVar4;
  fVar44 = fVar42;
  if (1 < param_3) {
    pfVar11 = param_2 + lVar14;
    uVar12 = (uint64_t)(param_3 - 1);
    fVar26 = fVar25;
    fVar28 = fVar27;
    fVar30 = fVar29;
    fVar33 = fVar32;
    fVar34 = fVar35;
    fVar36 = fVar37;
    fVar39 = fVar38;
    fVar41 = fVar40;
    fVar43 = fVar42;
    fVar45 = fVar42;
    do {
      fVar44 = fVar17;
      fVar42 = fVar16;
      fVar40 = fVar23;
      fVar38 = fVar18;
      fVar37 = fVar24;
      fVar35 = fVar19;
      fVar27 = fVar22;
      fVar25 = fVar21;
      fVar18 = *pfVar11;
      fVar19 = fVar31 + fVar35 * *pfVar7 + fVar34 * pfVar7[1];
      fVar16 = fVar18 + fVar42 * *pfVar5 + fVar43 * pfVar5[1];
      fVar17 = fVar18 + fVar44 * *pfVar6 + fVar45 * pfVar6[1];
      fVar18 = fVar18 + fVar38 * *pfVar8 + fVar39 * pfVar8[1];
      fVar24 = fVar35 * pfVar7[2] + fVar34 * pfVar7[3] + fVar19 * fVar3 +
               fVar37 * *pfVar7 + fVar36 * pfVar7[1];
      fVar21 = fVar42 * pfVar5[2] + fVar43 * pfVar5[3] + fVar16 * fVar20 +
               fVar25 * *pfVar5 + fVar26 * pfVar5[1];
      fVar22 = fVar44 * pfVar6[2] + fVar45 * pfVar6[3] + fVar17 * fVar2 +
               fVar27 * *pfVar6 + fVar28 * pfVar6[1];
      fVar23 = fVar38 * pfVar8[2] + fVar39 * pfVar8[3] + fVar18 * fVar4 +
               fVar40 * *pfVar8 + fVar41 * pfVar8[1];
      fVar29 = fVar25 * pfVar5[2] + fVar26 * pfVar5[3] + fVar21 * fVar20;
      fVar31 = fVar27 * pfVar6[2] + fVar28 * pfVar6[3] + fVar22 * fVar2;
      fVar32 = fVar40 * pfVar8[2] + fVar41 * pfVar8[3] + fVar23 * fVar4;
      *(float *)(((param_1 + lVar14 * -4) - (int64_t)param_2) + (int64_t)pfVar11) =
           (fVar37 * pfVar7[2] + fVar36 * pfVar7[3] + fVar24 * fVar3) * param_11 + fVar30 * param_10
           + fVar33 * param_12;
      pfVar11 = pfVar11 + lVar14;
      uVar12 = uVar12 - 1;
      fVar26 = fVar25;
      fVar28 = fVar27;
      fVar30 = fVar29;
      fVar33 = fVar32;
      fVar34 = fVar35;
      fVar36 = fVar37;
      fVar39 = fVar38;
      fVar41 = fVar40;
      fVar43 = fVar42;
      fVar45 = fVar44;
    } while (uVar12 != 0);
  }
  fVar20 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar4 = pfVar7[2];
  fVar26 = pfVar7[3];
  fVar28 = *pfVar7;
  fVar30 = pfVar7[1];
  fVar33 = pfVar7[2];
  fVar34 = pfVar7[3];
  *(uint64_t *)pfVar1 = CONCAT44(fVar42,fVar16);
  *(uint64_t *)(lVar15 + param_8) = CONCAT44(fVar44,fVar17);
  fVar31 = fVar19 * fVar20 + fVar35 * fVar2 + fVar31;
  *(uint64_t *)(lVar15 + param_9) = CONCAT44(fVar38,fVar18);
  *(uint64_t *)pfVar13 = CONCAT44(fVar25,fVar21);
  *(uint64_t *)(lVar15 + 0x200 + param_8) = CONCAT44(fVar27,fVar22);
  fVar20 = fVar24 * fVar28 + fVar37 * fVar30 + fVar19 * fVar4 + fVar35 * fVar26 + fVar3 * fVar31;
  *(float *)(param_1 + (int64_t)((param_3 + -1) * param_4) * 4) =
       (fVar24 * fVar33 + fVar37 * fVar34 + fVar3 * fVar20) * param_11 + fVar29 * param_10 +
       fVar32 * param_12;
  *(uint64_t *)pfVar9 = CONCAT44(fVar40,fVar23);
  *(uint64_t *)(lVar15 + param_7) = CONCAT44(fVar19,fVar31);
  *(uint64_t *)pfVar10 = CONCAT44(fVar24,fVar20);
  return;
}






// 函数: void FUN_1807fe410(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
void FUN_1807fe410(int64_t param_1,float *param_2,int param_3,int param_4,int param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8,int64_t param_9,float param_10
                  ,float param_11,float param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int64_t lVar14;
  float *pfVar15;
  float *pfVar16;
  uint64_t uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  int64_t lVar29;
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
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
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
  
  pfVar6 = *(float **)(param_6 + 8);
  pfVar7 = *(float **)(param_8 + 8);
  pfVar8 = *(float **)(param_7 + 8);
  pfVar9 = *(float **)(param_9 + 8);
  fVar32 = pfVar6[4];
  fVar34 = pfVar7[4];
  fVar1 = pfVar8[4];
  pfVar10 = *(float **)(param_7 + 0x408);
  pfVar11 = *(float **)(param_8 + 0x408);
  pfVar12 = *(float **)(param_9 + 0x408);
  lVar14 = (int64_t)param_5 * 0x10;
  fStack_1a4 = *(float *)(lVar14 + param_8);
  fVar35 = ((float *)(lVar14 + param_8))[1];
  fVar53 = *(float *)(lVar14 + param_9);
  fVar33 = ((float *)(lVar14 + param_9))[1];
  fVar37 = pfVar9[4];
  fVar2 = *(float *)(*(int64_t *)(param_6 + 0x408) + 0x10);
  pfVar18 = (float *)(param_6 + 0x200 + lVar14);
  fVar3 = pfVar11[4];
  fStack_194 = *pfVar18;
  fVar4 = pfVar10[4];
  pfVar19 = (float *)(param_8 + 0x200 + lVar14);
  fVar5 = pfVar12[4];
  fStack_274 = *pfVar19;
  pfVar20 = (float *)(param_9 + 0x200 + lVar14);
  fVar55 = *pfVar20;
  fStack_1b4 = *(float *)(lVar14 + param_6);
  fVar40 = ((float *)(lVar14 + param_6))[1];
  pfVar21 = (float *)(param_6 + 0x400 + lVar14);
  fStack_264 = *pfVar21;
  pfVar22 = (float *)(param_8 + 0x400 + lVar14);
  fStack_294 = *pfVar22;
  pfVar23 = (float *)(param_9 + 0x400 + lVar14);
  fStack_184 = *pfVar23;
  pfVar24 = (float *)(param_6 + 0x600 + lVar14);
  fStack_174 = *pfVar24;
  pfVar25 = (float *)(param_8 + 0x600 + lVar14);
  fStack_244 = *pfVar25;
  fVar31 = *(float *)(lVar14 + param_7);
  fVar46 = ((float *)(lVar14 + param_7))[1];
  pfVar26 = (float *)(param_9 + 0x600 + lVar14);
  fStack_230 = *pfVar26;
  pfVar27 = (float *)(param_7 + 0x200 + lVar14);
  fVar38 = *pfVar27;
  fVar48 = pfVar27[1];
  pfVar28 = (float *)(param_7 + 0x400 + lVar14);
  pfVar15 = (float *)(lVar14 + 0x600 + param_7);
  fVar39 = *pfVar28;
  fVar50 = pfVar28[1];
  fVar36 = *pfVar15;
  fVar52 = pfVar15[1];
  fVar30 = *param_2;
  fStack_1b8 = fStack_1b4 * *pfVar6 + fVar40 * pfVar6[1] + fVar30;
  fStack_1a8 = fStack_1a4 * *pfVar7 + fVar35 * pfVar7[1] + fVar30;
  fVar30 = fVar53 * *pfVar9 + fVar33 * pfVar9[1] + fVar30;
  pfVar13 = *(float **)(param_6 + 0x408);
  fStack_198 = fStack_1b4 * pfVar6[2] + fVar40 * pfVar6[3] + fStack_1b8 * fVar32 +
               fStack_194 * *pfVar6 + pfVar18[1] * pfVar6[1];
  fStack_278 = fStack_1a4 * pfVar7[2] + fVar35 * pfVar7[3] + fStack_1a8 * fVar34 +
               fStack_274 * *pfVar7 + pfVar19[1] * pfVar7[1];
  fVar35 = fVar53 * pfVar9[2] + fVar33 * pfVar9[3] + fVar30 * fVar37 +
           fVar55 * *pfVar9 + pfVar20[1] * pfVar9[1];
  fStack_268 = fStack_194 * pfVar6[2] + pfVar18[1] * pfVar6[3] + fStack_198 * fVar32 +
               fStack_264 * *pfVar13 + pfVar21[1] * pfVar13[1];
  fStack_298 = fStack_274 * pfVar7[2] + pfVar19[1] * pfVar7[3] + fStack_278 * fVar34 +
               fStack_294 * *pfVar11 + pfVar22[1] * pfVar11[1];
  fStack_188 = fVar55 * pfVar9[2] + pfVar20[1] * pfVar9[3] + fVar35 * fVar37 +
               fStack_184 * *pfVar12 + pfVar23[1] * pfVar12[1];
  fStack_178 = fStack_264 * pfVar13[2] + pfVar21[1] * pfVar13[3] + fStack_268 * fVar2 +
               fStack_174 * *pfVar13 + pfVar24[1] * pfVar13[1];
  fStack_248 = fStack_294 * pfVar11[2] + pfVar22[1] * pfVar11[3] + fStack_298 * fVar3 +
               fStack_244 * *pfVar11 + pfVar25[1] * pfVar11[1];
  fVar33 = fStack_184 * pfVar12[2] + pfVar23[1] * pfVar12[3] + fStack_188 * fVar5 +
           fStack_230 * *pfVar12 + pfVar26[1] * pfVar12[1];
  fVar40 = fStack_174 * pfVar13[2] + pfVar24[1] * pfVar13[3] + fStack_178 * fVar2;
  fVar42 = fStack_244 * pfVar11[2] + pfVar25[1] * pfVar11[3] + fStack_248 * fVar3;
  fVar43 = fStack_230 * pfVar12[2] + pfVar26[1] * pfVar12[3] + fVar33 * fVar5;
  if (1 < param_3) {
    lVar29 = (int64_t)param_4;
    uVar17 = (uint64_t)(param_3 - 1);
    pfVar16 = param_2 + lVar29;
    fVar41 = fVar40;
    fVar44 = fVar43;
    fVar45 = fVar46;
    fVar47 = fVar48;
    fVar49 = fVar50;
    fVar51 = fVar52;
    fVar54 = fVar53;
    fVar56 = fVar55;
    fStack_290 = fStack_298;
    fStack_28c = fStack_294;
    fStack_270 = fStack_278;
    fStack_26c = fStack_274;
    fStack_260 = fStack_268;
    fStack_25c = fStack_264;
    fStack_240 = fStack_248;
    fStack_23c = fStack_244;
    fStack_22c = fStack_230;
    fStack_1b0 = fStack_1b8;
    fStack_1ac = fStack_1b4;
    fStack_1a0 = fStack_1a8;
    fStack_19c = fStack_1a4;
    fStack_190 = fStack_198;
    fStack_18c = fStack_194;
    fStack_180 = fStack_188;
    fStack_17c = fStack_184;
    fStack_170 = fStack_178;
    fStack_16c = fStack_174;
    do {
      fStack_230 = fVar33;
      fVar55 = fVar35;
      fVar53 = fVar30;
      fVar52 = fVar36;
      fVar50 = fVar39;
      fVar48 = fVar38;
      fVar46 = fVar31;
      fVar30 = *pfVar16;
      fVar35 = fStack_1ac * pfVar6[3];
      fVar40 = fStack_19c * pfVar7[3];
      fVar31 = fVar42 + fVar46 * *pfVar8 + fVar45 * pfVar8[1];
      fStack_1b8 = fVar30 + fStack_1b0 * *pfVar6 + fStack_1ac * pfVar6[1];
      fStack_1a8 = fVar30 + fStack_1a0 * *pfVar7 + fStack_19c * pfVar7[1];
      fVar30 = fVar30 + fVar53 * *pfVar9 + fVar54 * pfVar9[1];
      fStack_1b4 = fStack_1b0;
      fStack_1ac = fStack_1b0;
      fVar36 = fStack_26c * pfVar7[3];
      fVar33 = fStack_18c * pfVar6[3];
      fStack_1a4 = fStack_1a0;
      fStack_19c = fStack_1a0;
      fVar38 = fVar46 * pfVar8[2] + fVar45 * pfVar8[3] + fVar31 * fVar1 +
               fVar48 * *pfVar8 + fVar47 * pfVar8[1];
      fStack_198 = fStack_1b0 * pfVar6[2] + fVar35 + fStack_1b8 * fVar32 +
                   fStack_190 * *pfVar6 + fStack_18c * pfVar6[1];
      fStack_278 = fStack_1a0 * pfVar7[2] + fVar40 + fStack_1a8 * fVar34 +
                   fStack_270 * *pfVar7 + fStack_26c * pfVar7[1];
      fVar35 = fVar53 * pfVar9[2] + fVar54 * pfVar9[3] + fVar30 * fVar37 +
               fVar55 * *pfVar9 + fVar56 * pfVar9[1];
      fStack_194 = fStack_190;
      fStack_18c = fStack_190;
      fVar43 = fStack_28c * pfVar11[3];
      fVar40 = fStack_25c * pfVar13[3];
      fStack_274 = fStack_270;
      fStack_26c = fStack_270;
      fVar42 = fStack_17c * pfVar12[3];
      fVar39 = fVar48 * pfVar8[2] + fVar47 * pfVar8[3] + fVar38 * fVar1 +
               fVar50 * *pfVar10 + fVar49 * pfVar10[1];
      fStack_268 = fStack_190 * pfVar6[2] + fVar33 + fStack_198 * fVar32 +
                   fStack_260 * *pfVar13 + fStack_25c * pfVar13[1];
      fStack_298 = fStack_270 * pfVar7[2] + fVar36 + fStack_278 * fVar34 +
                   fStack_290 * *pfVar11 + fStack_28c * pfVar11[1];
      fStack_188 = fVar55 * pfVar9[2] + fVar56 * pfVar9[3] + fVar35 * fVar37 +
                   fStack_180 * *pfVar12 + fStack_17c * pfVar12[1];
      fStack_184 = fStack_180;
      fStack_17c = fStack_180;
      fStack_294 = fStack_290;
      fStack_28c = fStack_290;
      fStack_264 = fStack_260;
      fStack_25c = fStack_260;
      fVar36 = fVar50 * pfVar10[2] + fVar49 * pfVar10[3] + fVar39 * fVar4 +
               fVar52 * *pfVar10 + fVar51 * pfVar10[1];
      fStack_178 = fStack_260 * pfVar13[2] + fVar40 + fStack_268 * fVar2 +
                   fStack_170 * *pfVar13 + fStack_16c * pfVar13[1];
      fStack_248 = fStack_290 * pfVar11[2] + fVar43 + fStack_298 * fVar3 +
                   fStack_240 * *pfVar11 + fStack_23c * pfVar11[1];
      fVar33 = fStack_180 * pfVar12[2] + fVar42 + fStack_188 * fVar5 +
               fStack_230 * *pfVar12 + fStack_22c * pfVar12[1];
      fVar40 = fStack_170 * pfVar13[2] + fStack_16c * pfVar13[3] + fStack_178 * fVar2;
      fVar42 = fStack_240 * pfVar11[2] + fStack_23c * pfVar11[3] + fStack_248 * fVar3;
      fVar43 = fStack_230 * pfVar12[2] + fStack_22c * pfVar12[3] + fVar33 * fVar5;
      fStack_174 = fStack_170;
      fStack_16c = fStack_170;
      fStack_244 = fStack_240;
      fStack_23c = fStack_240;
      fStack_22c = fStack_230;
      *(float *)((int64_t)pfVar16 + ((param_1 + lVar29 * -4) - (int64_t)param_2)) =
           (fVar52 * pfVar10[2] + fVar51 * pfVar10[3] + fVar36 * fVar4) * param_11 +
           fVar41 * param_10 + fVar44 * param_12;
      pfVar16 = pfVar16 + lVar29;
      uVar17 = uVar17 - 1;
      fVar41 = fVar40;
      fVar44 = fVar43;
      fVar45 = fVar46;
      fVar47 = fVar48;
      fVar49 = fVar50;
      fVar51 = fVar52;
      fVar54 = fVar53;
      fVar56 = fVar55;
      fStack_290 = fStack_298;
      fStack_270 = fStack_278;
      fStack_260 = fStack_268;
      fStack_240 = fStack_248;
      fStack_1b0 = fStack_1b8;
      fStack_1a0 = fStack_1a8;
      fStack_190 = fStack_198;
      fStack_180 = fStack_188;
      fStack_170 = fStack_178;
    } while (uVar17 != 0);
  }
  fVar42 = fVar31 * *pfVar8 + fVar46 * pfVar8[1] + fVar42;
  fVar37 = fVar38 * *pfVar8 + fVar48 * pfVar8[1] +
           fVar31 * pfVar8[2] + fVar46 * pfVar8[3] + fVar1 * fVar42;
  fVar34 = fVar39 * *pfVar10 + fVar50 * pfVar10[1] +
           fVar38 * pfVar8[2] + fVar48 * pfVar8[3] + fVar1 * fVar37;
  fVar32 = fVar36 * *pfVar10 + fVar52 * pfVar10[1] +
           fVar39 * pfVar10[2] + fVar50 * pfVar10[3] + fVar4 * fVar34;
  *(float *)(param_1 + (int64_t)((param_3 + -1) * param_4) * 4) =
       (fVar36 * pfVar10[2] + fVar52 * pfVar10[3] + fVar4 * fVar32) * param_11 + fVar40 * param_10 +
       fVar43 * param_12;
  *(uint64_t *)(lVar14 + param_6) = CONCAT44(fStack_1b4,fStack_1b8);
  *(uint64_t *)(lVar14 + param_8) = CONCAT44(fStack_1a4,fStack_1a8);
  *(uint64_t *)(lVar14 + param_9) = CONCAT44(fVar53,fVar30);
  *(uint64_t *)pfVar18 = CONCAT44(fStack_194,fStack_198);
  *(uint64_t *)pfVar19 = CONCAT44(fStack_274,fStack_278);
  *(uint64_t *)pfVar20 = CONCAT44(fVar55,fVar35);
  *(uint64_t *)pfVar21 = CONCAT44(fStack_264,fStack_268);
  *(uint64_t *)pfVar22 = CONCAT44(fStack_294,fStack_298);
  *(uint64_t *)pfVar23 = CONCAT44(fStack_184,fStack_188);
  *(uint64_t *)pfVar24 = CONCAT44(fStack_174,fStack_178);
  *(uint64_t *)pfVar25 = CONCAT44(fStack_244,fStack_248);
  *(uint64_t *)pfVar26 = CONCAT44(fStack_230,fVar33);
  *(uint64_t *)(lVar14 + param_7) = CONCAT44(fVar31,fVar42);
  *(uint64_t *)pfVar27 = CONCAT44(fVar38,fVar37);
  *(uint64_t *)pfVar28 = CONCAT44(fVar39,fVar34);
  *(uint64_t *)pfVar15 = CONCAT44(fVar36,fVar32);
  return;
}






// 函数: void FUN_1807fee60(float *param_1,float param_2)
void FUN_1807fee60(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_1[0x10];
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  param_1[0xc] = param_2;
  if (param_2 == 0.0) {
    param_1[8] = param_1[0x11];
    param_1[7] = fVar1;
    param_1[5] = fVar3;
    param_1[6] = fVar4;
    param_1[4] = fVar2;
    *param_1 = -fVar1;
    param_1[1] = -param_1[8];
    param_1[2] = param_1[5];
    param_1[3] = param_1[6];
  }
  else {
    fVar5 = 1.0 / (float)(int)param_2;
    param_1[0x18] = param_1[5] - fVar3;
    param_1[0x13] = (fVar3 - param_1[5]) * fVar5;
    param_1[0x17] = param_1[4] - fVar2;
    param_1[0x12] = (fVar2 - param_1[4]) * fVar5;
    param_1[0x1a] = param_1[7] - fVar1;
    param_1[0x15] = (fVar1 - param_1[7]) * fVar5;
    param_1[0x19] = param_1[6] - fVar4;
    param_1[0x14] = (fVar4 - param_1[6]) * fVar5;
    param_1[0x1b] = param_1[8] - param_1[0x11];
    param_1[0x16] = (param_1[0x11] - param_1[8]) * fVar5;
  }
  return;
}






// 函数: void FUN_1807fef06(float param_1,float param_2,float param_3,float param_4)
void FUN_1807fef06(float param_1,float param_2,float param_3,float param_4)

{
  int64_t in_RCX;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  
  param_1 = 1.0 / param_1;
  *(float *)(in_RCX + 0x60) = *(float *)(in_RCX + 0x14) - unaff_XMM11_Da;
  *(float *)(in_RCX + 0x4c) = (param_2 - *(float *)(in_RCX + 0x14)) * param_1;
  *(float *)(in_RCX + 0x5c) = *(float *)(in_RCX + 0x10) - unaff_XMM10_Da;
  *(float *)(in_RCX + 0x48) = (unaff_XMM10_Da - *(float *)(in_RCX + 0x10)) * param_1;
  *(float *)(in_RCX + 0x68) = in_XMM4_Da - unaff_XMM9_Da;
  *(float *)(in_RCX + 0x54) = (unaff_XMM9_Da - in_XMM4_Da) * param_1;
  *(float *)(in_RCX + 100) = in_XMM5_Da - unaff_XMM12_Da;
  *(float *)(in_RCX + 0x50) = (unaff_XMM12_Da - in_XMM5_Da) * param_1;
  *(float *)(in_RCX + 0x6c) = param_4 - param_3;
  *(float *)(in_RCX + 0x58) = (param_3 - param_4) * param_1;
  return;
}






// 函数: void FUN_1807fefc0(void)
void FUN_1807fefc0(void)

{
  return;
}






// 函数: void FUN_1807fefe0(uint64_t param_1,float param_2,float param_3)
void FUN_1807fefe0(uint64_t param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 <= 10.0) {
    param_3 = 10.0;
  }
  fVar2 = param_2 * 0.49;
  fVar1 = param_3;
  if (22000.0 <= param_3) {
    fVar1 = 22000.0;
  }
  if ((fVar1 < fVar2) && (fVar2 = param_3, 22000.0 <= param_3)) {
    fVar2 = 22000.0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400((fVar2 * 6.2831855) / param_2);
}






// 函数: void FUN_1807ff0d0(uint64_t param_1,float param_2,float param_3)
void FUN_1807ff0d0(uint64_t param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 <= 10.0) {
    param_3 = 10.0;
  }
  fVar2 = param_2 * 0.49;
  fVar1 = param_3;
  if (22000.0 <= param_3) {
    fVar1 = 22000.0;
  }
  if ((fVar1 < fVar2) && (fVar2 = param_3, 22000.0 <= param_3)) {
    fVar2 = 22000.0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400((fVar2 * 6.2831855) / param_2);
}



uint64_t FUN_1807ff1d0(uint64_t param_1,int8_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = accept(param_1,0,0);
  if (lVar2 == -1) {
    iVar1 = WSAGetLastError();
    uVar3 = 0x2b;
    if (iVar1 == 0x2733) {
      uVar3 = 0x2d;
    }
    return uVar3;
  }
  uVar3 = FUN_1807ff700(lVar2,param_2);
  if ((int)uVar3 == 0) {
    *param_3 = lVar2;
    return uVar3;
  }
  return uVar3;
}



uint64_t FUN_1807ff260(int64_t param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    shutdown(param_1,2);
    iVar1 = closesocket(param_1);
    if (iVar1 == -1) {
      return 0x2b;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ff2a0(uint64_t param_1,int16_t param_2)
void FUN_1807ff2a0(uint64_t param_1,int16_t param_2)

{
  int8_t auStack_2d8 [64];
  uint64_t uStack_298;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  uint64_t uStack_27c;
  uint64_t uStack_274;
  uint64_t uStack_26c;
  uint64_t uStack_264;
  int32_t uStack_25c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2d8;
  uStack_298 = 0;
  uStack_25c = 0;
  uStack_284 = 0;
  uStack_280 = 1;
  uStack_288 = 8;
  uStack_27c = 0;
  uStack_274 = 0;
  uStack_48 = 0;
  uStack_26c = 0;
  uStack_264 = 0;
                    // WARNING: Subroutine does not return
  FUN_18076b390(&uStack_48,8,&unknown_var_4576_ptr,param_2);
}






// 函数: void FUN_1807ff2c6(uint64_t param_1,int16_t param_2)
void FUN_1807ff2c6(uint64_t param_1,int16_t param_2)

{
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int32_t unaff_00000034;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000058;
  uint64_t uStack000000000000005c;
  uint64_t uStack0000000000000064;
  uint64_t uStack000000000000006c;
  uint64_t uStack0000000000000074;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  uStack0000000000000058 = 1;
  uStack0000000000000050 = 8;
  uStack000000000000005c = 0;
  uStack0000000000000064 = 0;
  *(uint64_t *)(unaff_RBP + 400) = CONCAT44(unaff_00000034,unaff_ESI);
  uStack000000000000006c = 0;
  uStack0000000000000074 = 0;
                    // WARNING: Subroutine does not return
  FUN_18076b390(unaff_RBP + 400,unaff_ESI + 8,&unknown_var_4576_ptr,param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ff354(void)
void FUN_1807ff354(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t lVar4;
  byte unaff_R14B;
  int64_t *unaff_R15;
  int iStack0000000000000030;
  int32_t uStack0000000000000034;
  uint in_stack_00000038;
  int64_t in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  
  lVar4 = in_stack_00000040;
  if (in_stack_00000040 != 0) {
    do {
      lVar3 = socket(*(int32_t *)(lVar4 + 4),*(int32_t *)(lVar4 + 8),
                     *(int32_t *)(lVar4 + 0xc));
      if (lVar3 != -1) {
        iVar2 = FUN_1807ff700(lVar3,1);
        if ((iVar2 == 0) &&
           (((iVar2 = connect(lVar3,*(uint64_t *)(lVar4 + 0x20),*(int32_t *)(lVar4 + 0x10)),
             iVar2 != -1 || (iVar2 = WSAGetLastError(), iVar2 == 0x2733)) ||
            (iVar2 = WSAGetLastError(), iVar2 == 0x2734)))) {
          iVar2 = system_system_buffer_memory;
          *(int64_t *)(unaff_RBP + -0x78) = lVar3;
          *(int32_t *)(unaff_RBP + -0x80) = 1;
          iStack0000000000000048 = iVar2 / 1000;
          iStack000000000000004c = (iVar2 % 1000) * 1000;
          iVar2 = select(0,0,unaff_RBP + -0x80,unaff_RBP + -0x80,&stack0x00000048);
          if (1 < iVar2 + 1U) {
            uStack0000000000000034 = 4;
            iStack0000000000000030 = unaff_ESI;
            iVar2 = getsockopt(lVar3,0xffff,0x1007,&stack0x00000030,(int64_t)&stack0x00000030 + 4);
            if ((iVar2 != -1) && (iStack0000000000000030 == unaff_ESI)) {
              in_stack_00000038 = (uint)unaff_R14B;
              iVar2 = ioctlsocket(lVar3,0x8004667e,&stack0x00000038);
              if (iVar2 != -1) {
                *unaff_R15 = lVar3;
                break;
              }
            }
          }
        }
        closesocket(lVar3);
      }
      plVar1 = (int64_t *)(lVar4 + 0x28);
      lVar4 = *plVar1;
    } while (*plVar1 != 0);
  }
  if (in_stack_00000040 != 0) {
    freeaddrinfo();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x198) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807ff4ab(void)
void FUN_1807ff4ab(void)

{
  int64_t unaff_RBP;
  int64_t in_stack_00000040;
  
  if (in_stack_00000040 != 0) {
    freeaddrinfo();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x198) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807ff4cd(void)
void FUN_1807ff4cd(void)

{
  int64_t unaff_RBP;
  
  freeaddrinfo();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x198) ^ (uint64_t)&stack0x00000000);
}






