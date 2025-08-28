#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager



// 03_rendering_part486.c - 5 个函数

// 函数: void FUN_1805277e0(int64_t param_1,float param_2,float param_3,float *param_4,float *param_5)
void FUN_1805277e0(int64_t param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(int64_t *)(param_1 + 0x6d8) == 0) {
    return;
  }
  if (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) == '\0') {
    return;
  }
  fVar4 = *(float *)(param_1 + 0x550) - *param_4;
  fVar3 = *(float *)(param_1 + 0x554) - param_4[1];
  fVar6 = *(float *)(param_1 + 0x558) - param_4[2];
  fVar7 = 0.0;
  fVar5 = fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6;
  if ((100.0 < fVar5) && (fVar3 * param_5[1] + fVar4 * *param_5 + fVar6 * param_5[2] < 0.0)) {
    fVar3 = 7.0;
    goto LAB_1805278f8;
  }
  iVar2 = 0;
  if (fVar5 < *(float *)(system_main_module_state + 0x38c) || fVar5 == *(float *)(system_main_module_state + 0x38c)) {
LAB_1805278d2:
    fVar3 = 0.0;
  }
  else {
    pfVar1 = (float *)(system_main_module_state + 0x38c);
    do {
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 1;
    } while (*pfVar1 <= fVar5 && fVar5 != *pfVar1);
    if (iVar2 < 1) goto LAB_1805278d2;
    fVar3 = *(float *)(system_main_module_state + 0x388 + (int64_t)iVar2 * 4);
  }
  fVar3 = (fVar5 - fVar3) / (*(float *)(system_main_module_state + 0x38c + (int64_t)iVar2 * 4) - fVar3) +
          (float)iVar2;
LAB_1805278f8:
  fVar4 = param_2 - 0.25;
  fVar5 = param_3 - 0.25;
  if (fVar3 <= param_2) {
    fVar6 = 1.0;
    if (fVar3 <= fVar4) {
      if (fVar3 <= param_3) {
        fVar7 = 1.0;
        if (fVar3 <= fVar5) {
          fVar4 = 1.0;
        }
        else {
          fVar7 = 1.0 - (fVar3 - fVar5) / (param_3 - fVar5);
          fVar4 = 2.0;
        }
      }
      else {
        fVar4 = 3.0;
      }
    }
    else {
      fVar6 = 1.0 - (fVar3 - fVar4) / (param_2 - fVar4);
      fVar4 = 4.0;
    }
  }
  else {
    fVar4 = 5.0;
    fVar6 = 0.0;
  }
  if (((fVar4 != *(float *)(param_1 + 0xa58)) || (fVar4 == 2.0)) || (fVar4 == 4.0)) {
    *(float *)(param_1 + 0xa54) = fVar3;
    *(float *)(param_1 + 0xa58) = fVar4;
    (**(code **)(**(int64_t **)(param_1 + 0x590) + 0x150))
              (*(int64_t **)(param_1 + 0x590),fVar3,fVar7,fVar6);
    FUN_180543820(*(uint64_t *)(param_1 + 0x6d8),fVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180527841(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180527841(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int64_t unaff_RBX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float *in_stack_00000080;
  
  fVar7 = 0.0;
  fVar6 = param_3 * param_3 + param_4 * param_4 + in_XMM5_Da * in_XMM5_Da;
  if ((100.0 < fVar6) &&
     (param_3 * in_stack_00000080[1] + param_4 * *in_stack_00000080 +
      in_XMM5_Da * in_stack_00000080[2] < 0.0)) {
    fVar6 = 7.0;
    goto LAB_1805278f8;
  }
  iVar2 = 0;
  if (fVar6 < *(float *)(system_main_module_state + 0x38c) || fVar6 == *(float *)(system_main_module_state + 0x38c)) {
LAB_1805278d2:
    fVar3 = 0.0;
  }
  else {
    pfVar1 = (float *)(system_main_module_state + 0x38c);
    do {
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 1;
    } while (*pfVar1 <= fVar6 && fVar6 != *pfVar1);
    if (iVar2 < 1) goto LAB_1805278d2;
    fVar3 = *(float *)(system_main_module_state + 0x388 + (int64_t)iVar2 * 4);
  }
  fVar6 = (fVar6 - fVar3) / (*(float *)(system_main_module_state + 0x38c + (int64_t)iVar2 * 4) - fVar3) +
          (float)iVar2;
LAB_1805278f8:
  fVar3 = unaff_XMM8_Da - 0.25;
  fVar4 = unaff_XMM7_Da - 0.25;
  if (fVar6 <= unaff_XMM8_Da) {
    fVar5 = 1.0;
    if (fVar6 <= fVar3) {
      if (fVar6 <= unaff_XMM7_Da) {
        fVar7 = 1.0;
        if (fVar6 <= fVar4) {
          fVar3 = 1.0;
        }
        else {
          fVar7 = 1.0 - (fVar6 - fVar4) / (unaff_XMM7_Da - fVar4);
          fVar3 = 2.0;
        }
      }
      else {
        fVar3 = 3.0;
      }
    }
    else {
      fVar5 = 1.0 - (fVar6 - fVar3) / (unaff_XMM8_Da - fVar3);
      fVar3 = 4.0;
    }
  }
  else {
    fVar3 = 5.0;
    fVar5 = 0.0;
  }
  if (((fVar3 != *(float *)(unaff_RBX + 0xa58)) || (fVar3 == 2.0)) || (fVar3 == 4.0)) {
    *(float *)(unaff_RBX + 0xa54) = fVar6;
    *(float *)(unaff_RBX + 0xa58) = fVar3;
    (**(code **)(**(int64_t **)(unaff_RBX + 0x590) + 0x150))
              (*(int64_t **)(unaff_RBX + 0x590),fVar6,fVar7,fVar5);
    FUN_180543820(*(uint64_t *)(unaff_RBX + 0x6d8),fVar7);
  }
  return;
}





// 函数: void FUN_1805279d9(void)
void FUN_1805279d9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805279f0(int64_t param_1,float *param_2,int64_t param_3,int8_t param_4 [8])
void FUN_1805279f0(int64_t param_1,float *param_2,int64_t param_3,int8_t param_4 [8])

{
  int *piVar1;
  int64_t lVar2;
  int8_t uVar3;
  uint64_t uVar4;
  int8_t auVar5 [16];
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  int iVar13;
  int32_t uVar14;
  uint uVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  float *pfVar18;
  int64_t lVar19;
  int64_t lVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int8_t auStack_3b8 [32];
  uint64_t uStack_398;
  int8_t *puStack_390;
  int8_t uStack_388;
  int8_t uStack_387;
  int8_t uStack_386;
  int8_t uStack_385;
  float fStack_378;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  int32_t uStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  int32_t uStack_34c;
  int32_t uStack_33c;
  uint64_t uStack_338;
  uint64_t uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  int32_t uStack_31c;
  int8_t auStack_318 [16];
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int8_t auStack_2f8 [8];
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  char cStack_2b8;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  int32_t uStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  uint64_t uStack_278;
  int64_t lStack_270;
  char cStack_268;
  uint64_t uStack_260;
  int64_t lStack_258;
  char cStack_250;
  uint64_t uStack_248;
  int64_t lStack_240;
  char cStack_238;
  uint64_t uStack_230;
  int8_t auStack_228 [16];
  uint64_t uStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  int32_t uStack_204;
  int32_t uStack_200;
  int32_t uStack_1fc;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int8_t auStack_1b8 [16];
  int8_t auStack_1a8 [16];
  int8_t auStack_198 [16];
  int8_t auStack_188 [16];
  int8_t auStack_178 [32];
  int8_t auStack_158 [32];
  float afStack_138 [8];
  int8_t auStack_118 [8];
  float afStack_110 [6];
  uint64_t uStack_f8;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_f8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3b8;
  uStack_2f0 = auStack_2f8;
  auStack_2f8 = param_4;
  fVar27 = *(float *)(param_3 + 0x34);
  fStack_378 = *(float *)(param_1 + 0x890);
  if (fVar27 != fStack_378) {
    uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208);
    lVar19 = *(int64_t *)(param_1 + 0x590);
    uVar3 = *(int8_t *)(lVar19 + 0xdf);
    uStack_386 = *(int8_t *)(lVar19 + 0xe0);
    uStack_385 = *(int8_t *)(lVar19 + 0xe1);
    if ((*(uint64_t *)
          ((int64_t)*(int *)((int64_t)param_4 + 0xf0) * 0xa0 + 0x50 +
          *(int64_t *)((int64_t)param_4 + 0xd0)) & 0x100000000) == 0) {
      uStack_387 = *(int8_t *)(lVar19 + 0xde);
    }
    else {
      uStack_387 = *(int8_t *)(lVar19 + 0x25fb);
    }
    iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(lVar19 + 0xac),fVar27);
    iVar13 = *(int *)(render_system_memory + (int64_t)iVar13 * 4);
    if (iVar13 == -1) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(int64_t *)(render_system_memory + (int64_t)iVar13 * 8);
    }
    fVar38 = ((float)*(int *)(lVar19 + 400) - (float)*(int *)(lVar19 + 0x18c)) *
             *(float *)(lVar19 + 0x1d8) + (float)*(int *)(lVar19 + 0x18c);
    uStack_388 = 1;
    FUN_180405240(&fStack_2c8,lVar19);
    puStack_390 = &uStack_388;
    uStack_398 = uVar4;
    FUN_180533830(CONCAT44(fStack_2c4,fStack_2c8),&uStack_218,uVar3,fVar38);
    if ((cStack_2b8 == '\0') && (*(char *)(CONCAT44(fStack_2bc,fStack_2c0) + 0x194) != '\0')) {
      LOCK();
      piVar1 = (int *)(CONCAT44(fStack_2bc,fStack_2c0) + 0xd8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    *(uint64_t *)(param_1 + 0x7f0) = uStack_218;
    *(uint64_t *)(param_1 + 0x7f8) = uStack_210;
    *(int32_t *)(param_1 + 0x800) = uStack_208;
    *(int32_t *)(param_1 + 0x804) = uStack_204;
    *(int32_t *)(param_1 + 0x808) = uStack_200;
    *(int32_t *)(param_1 + 0x80c) = uStack_1fc;
    FUN_180405240(&uStack_278,lVar19);
    puStack_390 = &uStack_388;
    uStack_398 = uVar4;
    FUN_180533830(uStack_278,&uStack_1f8,uStack_386,fVar38);
    if ((cStack_268 == '\0') && (*(char *)(lStack_270 + 0x194) != '\0')) {
      LOCK();
      *(int *)(lStack_270 + 0xd8) = *(int *)(lStack_270 + 0xd8) + -1;
      UNLOCK();
    }
    *(uint64_t *)(param_1 + 0x810) = uStack_1f8;
    *(uint64_t *)(param_1 + 0x818) = uStack_1f0;
    *(int32_t *)(param_1 + 0x820) = uStack_1e8;
    *(int32_t *)(param_1 + 0x824) = uStack_1e4;
    *(int32_t *)(param_1 + 0x828) = uStack_1e0;
    *(int32_t *)(param_1 + 0x82c) = uStack_1dc;
    FUN_180405240(&uStack_260,lVar19);
    puStack_390 = &uStack_388;
    uStack_398 = uVar4;
    FUN_180533830(uStack_260,&uStack_1d8,uStack_385,fVar38);
    if ((cStack_250 == '\0') && (*(char *)(lStack_258 + 0x194) != '\0')) {
      LOCK();
      *(int *)(lStack_258 + 0xd8) = *(int *)(lStack_258 + 0xd8) + -1;
      UNLOCK();
    }
    *(uint64_t *)(param_1 + 0x830) = uStack_1d8;
    *(uint64_t *)(param_1 + 0x838) = uStack_1d0;
    *(int32_t *)(param_1 + 0x840) = uStack_1c8;
    *(int32_t *)(param_1 + 0x844) = uStack_1c4;
    *(int32_t *)(param_1 + 0x848) = uStack_1c0;
    *(int32_t *)(param_1 + 0x84c) = uStack_1bc;
    FUN_180405240(&uStack_248,lVar19);
    puStack_390 = &uStack_388;
    uStack_398 = uVar4;
    FUN_180533830(uStack_248,auStack_178,uStack_387,fVar38);
    if ((cStack_238 == '\0') && (*(char *)(lStack_240 + 0x194) != '\0')) {
      LOCK();
      *(int *)(lStack_240 + 0xd8) = *(int *)(lStack_240 + 0xd8) + -1;
      UNLOCK();
    }
    puVar16 = (uint64_t *)FUN_180300b10(param_1 + 0x830,auStack_158,auStack_178);
    uVar4 = puVar16[1];
    *(uint64_t *)(param_1 + 0x850) = *puVar16;
    *(uint64_t *)(param_1 + 0x858) = uVar4;
    uVar14 = *(int32_t *)((int64_t)puVar16 + 0x14);
    uVar6 = *(int32_t *)(puVar16 + 3);
    uVar7 = *(int32_t *)((int64_t)puVar16 + 0x1c);
    *(int32_t *)(param_1 + 0x860) = *(int32_t *)(puVar16 + 2);
    *(int32_t *)(param_1 + 0x864) = uVar14;
    *(int32_t *)(param_1 + 0x868) = uVar6;
    *(int32_t *)(param_1 + 0x86c) = uVar7;
    *(float *)(param_1 + 0x890) = fVar27;
    param_4 = auStack_2f8;
  }
  lVar19 = *(int64_t *)(param_1 + 0x6d8);
  fVar38 = *(float *)(lVar19 + 0x8c0);
  if (fVar27 == fStack_378) {
    lVar20 = *(int64_t *)(param_1 + 0x590);
    if (0.99939084 <=
        *(float *)(param_1 + 0x874) * *(float *)(lVar20 + 0x256c) +
        *(float *)(param_1 + 0x870) * *(float *)(lVar20 + 0x2568) +
        *(float *)(param_1 + 0x878) * *(float *)(lVar20 + 0x2570)) goto LAB_180528445;
  }
  lVar20 = *(int64_t *)(param_1 + 0x590);
  uVar14 = FUN_18063b8c0(&fStack_2d8,lVar20 + 0x2568);
  fVar11 = fStack_2cc;
  fVar10 = fStack_2d0;
  fVar9 = fStack_2d4;
  fVar8 = fStack_2d8;
  fVar27 = *(float *)(param_1 + 0x7f0);
  fVar21 = *(float *)(param_1 + 0x7f4);
  fVar39 = *(float *)(param_1 + 0x7f8);
  fVar29 = *(float *)(param_1 + 0x7fc);
  auVar12._4_4_ = fStack_2d4;
  auVar12._0_4_ = fStack_2d8;
  auVar12._8_4_ = fStack_2d0;
  auVar12._12_4_ = fStack_2cc;
  fStack_2c8 = fStack_2d8;
  fStack_2bc = fStack_2d0;
  uStack_2f0._0_4_ = fStack_2d4;
  auStack_2f8 = (int8_t  [8])auVar12._8_8_;
  uStack_2f0._4_4_ = fStack_2cc;
  fStack_2d8 = fStack_2cc;
  auVar30._0_4_ = fVar39 * fStack_2cc;
  auVar30._4_4_ = fVar29 * fStack_2d4;
  auVar30._8_4_ = fVar21 * fStack_2d0;
  auVar30._12_4_ = fVar21 * fStack_2d4;
  fVar32 = fVar21 * fVar8 * 1.0 + fVar29 * fStack_2d0 * 1.0 + (fVar27 * fStack_2d4 - auVar30._0_4_);
  fVar33 = fVar39 * fVar8 * 1.0 + fVar21 * fStack_2cc * 1.0 + (fVar27 * fStack_2d0 - auVar30._4_4_);
  fVar34 = fVar29 * fVar8 * 1.0 + fVar39 * fStack_2d4 * 1.0 + (fVar27 * fStack_2cc - auVar30._8_4_);
  fVar36 = fVar39 * fStack_2d0 * -1.0 + fVar29 * fStack_2cc * -1.0 +
           (fVar27 * fVar8 - auVar30._12_4_);
  fVar24 = fVar33 * fVar39;
  fVar25 = fVar34 * fVar29;
  fVar28 = fVar25 + fVar32 * fVar21;
  fVar26 = fVar24 + fVar36 * fVar27 + fVar28;
  afStack_138[0] = 1.0;
  afStack_138[1] = 1.0;
  afStack_138[2] = 1.0;
  afStack_138[3] = 1.0;
  afStack_138[4] = -1.0;
  afStack_138[5] = -1.0;
  afStack_138[6] = -1.0;
  afStack_138[7] = -1.0;
  auVar31._4_4_ = fVar28;
  auVar31._0_4_ = fVar26;
  auVar31._8_4_ = fVar24 + fVar24;
  auVar31._12_4_ = fVar25 + fVar25;
  uVar15 = movmskps(uVar14,auVar31);
  uVar17 = (uint64_t)(uVar15 & 1);
  fVar36 = afStack_138[uVar17 * 4] * fVar36;
  fVar32 = afStack_138[uVar17 * 4 + 1] * fVar32;
  fVar33 = afStack_138[uVar17 * 4 + 2] * fVar33;
  fVar34 = afStack_138[uVar17 * 4 + 3] * fVar34;
  fStack_2cc = fStack_2d4;
  fStack_2c4 = fStack_2c8;
  fStack_2c0 = fStack_2c8;
  if (0.9995 < ABS(fVar26)) {
    fStack_2a8 = fVar36 * 0.33 + fVar27 * 0.66999996;
    fStack_2a4 = fVar32 * 0.33 + fVar21 * 0.66999996;
    fStack_2a0 = fVar33 * 0.33 + fVar39 * 0.66999996;
    fStack_29c = fVar34 * 0.33 + fVar29 * 0.66999996;
    fVar27 = fStack_29c * fStack_29c + fStack_2a8 * fStack_2a8;
    fVar21 = fStack_2a0 * fStack_2a0 + fStack_2a4 * fStack_2a4;
    fVar26 = fVar27 + fStack_2a4 * fStack_2a4 + fStack_2a0 * fStack_2a0;
    fVar28 = fVar21 + fStack_2a8 * fStack_2a8 + fStack_29c * fStack_29c;
    auVar22._0_4_ = fVar21 + fVar27 + 1.1754944e-38;
    auVar22._4_4_ = fVar27 + fVar21 + 1.1754944e-38;
    auVar22._8_4_ = fVar26 + 1.1754944e-38;
    auVar22._12_4_ = fVar28 + 1.1754944e-38;
    auVar31 = rsqrtps(auVar30,auVar22);
    fVar39 = auVar31._0_4_;
    fVar29 = auVar31._4_4_;
    fVar24 = auVar31._8_4_;
    fVar25 = auVar31._12_4_;
    fStack_2a8 = fStack_2a8 * (3.0 - fVar39 * fVar39 * (fVar21 + fVar27)) * fVar39 * 0.5;
    fStack_2a4 = fStack_2a4 * (3.0 - fVar29 * fVar29 * (fVar27 + fVar21)) * fVar29 * 0.5;
    fStack_2a0 = fStack_2a0 * (3.0 - fVar24 * fVar24 * fVar26) * fVar24 * 0.5;
    fStack_29c = fStack_29c * (3.0 - fVar25 * fVar25 * fVar28) * fVar25 * 0.5;
  }
  else {
    acosf();
    fVar24 = (float)sinf();
    fVar25 = (float)sinf();
    fVar25 = fVar25 * (1.0 / fVar24);
    fVar26 = (float)sinf();
    fVar26 = fVar26 * (1.0 / fVar24);
    fStack_2a8 = fVar25 * fVar27 + fVar26 * fVar36;
    fStack_2a4 = fVar25 * fVar21 + fVar26 * fVar32;
    fStack_2a0 = fVar25 * fVar39 + fVar26 * fVar33;
    fStack_29c = fVar25 * fVar29 + fVar26 * fVar34;
  }
  fVar27 = *(float *)(param_1 + 0x800);
  fVar21 = *(float *)(param_1 + 0x804);
  fVar39 = *(float *)(param_1 + 0x808);
  uStack_28c = *(int32_t *)(param_1 + 0x80c);
  fStack_368 = *(float *)(param_1 + 0x820) - *(float *)(param_1 + 0x800);
  fStack_364 = *(float *)(param_1 + 0x824) - *(float *)(param_1 + 0x804);
  fStack_360 = *(float *)(param_1 + 0x828) - *(float *)(param_1 + 0x808);
  uStack_35c = 0x7f7fffff;
  fStack_298 = fVar27;
  fStack_294 = fVar21;
  fStack_290 = fVar39;
  SystemCore_EventHandler(param_1 + 0x7f0,&fStack_288,&fStack_368);
  pfVar18 = (float *)SystemFileHandler(&fStack_2a8,auStack_1b8,&fStack_288);
  fStack_378 = fVar27 + *pfVar18;
  fStack_294 = fVar21 + pfVar18[1];
  fVar39 = fVar39 + pfVar18[2];
  uStack_35c = 0x7f7fffff;
  uStack_28c = 0x7f7fffff;
  fVar27 = *(float *)(param_1 + 0x810);
  fVar29 = *(float *)(param_1 + 0x814);
  fVar24 = *(float *)(param_1 + 0x818);
  fVar25 = *(float *)(param_1 + 0x81c);
  fVar34 = fVar25 * (float)auStack_2f8._0_4_ * 1.0 + fVar29 * fStack_2c8 * 1.0 +
           (fVar27 * fVar9 - fVar24 * fStack_2d8);
  fVar36 = fVar29 * (float)auStack_2f8._4_4_ * 1.0 + fVar24 * fStack_2c4 * 1.0 +
           (fVar27 * fVar10 - fVar25 * fStack_2d4);
  fVar35 = fVar24 * (float)uStack_2f0 * 1.0 + fVar25 * fStack_2c0 * 1.0 +
           (fVar27 * fVar11 - fVar29 * fStack_2d0);
  fVar37 = fVar25 * uStack_2f0._4_4_ * -1.0 + fVar24 * fStack_2bc * -1.0 +
           (fVar27 * fVar8 - fVar29 * fStack_2cc);
  fVar26 = fVar36 * fVar24;
  fVar28 = fVar35 * fVar25;
  fVar33 = fVar28 + fVar34 * fVar29;
  fVar32 = fVar26 + fVar37 * fVar27 + fVar33;
  _auStack_118 = render_system_memory;
  afStack_110[2] = -1.0;
  afStack_110[3] = -1.0;
  afStack_110[4] = -1.0;
  afStack_110[5] = -1.0;
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar26 + fVar26;
  auVar5._12_4_ = fVar28 + fVar28;
  uVar15 = movmskps((int)pfVar18,auVar5);
  lVar2 = (uint64_t)(uVar15 & 1) * 0x10;
  fVar37 = *(float *)(auStack_118 + lVar2) * fVar37;
  fVar34 = *(float *)(auStack_118 + lVar2 + 4) * fVar34;
  fVar36 = *(float *)(auStack_118 + lVar2 + 8) * fVar36;
  fVar35 = *(float *)(auStack_118 + lVar2 + 0xc) * fVar35;
  fStack_298 = fStack_378;
  fStack_290 = fVar39;
  fStack_288 = fStack_294;
  fStack_284 = fVar21;
  fStack_280 = fVar21;
  fStack_27c = fVar21;
  if (0.9995 < ABS(fVar32)) {
    fStack_2a8 = fVar27 * 0.33999997 + fVar37 * 0.66;
    fStack_2a4 = fVar29 * 0.33999997 + fVar34 * 0.66;
    fStack_2a0 = fVar24 * 0.33999997 + fVar36 * 0.66;
    fStack_29c = fVar25 * 0.33999997 + fVar35 * 0.66;
    fVar27 = fStack_29c * fStack_29c + fStack_2a8 * fStack_2a8;
    fVar21 = fStack_2a0 * fStack_2a0 + fStack_2a4 * fStack_2a4;
    fVar28 = fVar27 + fStack_2a4 * fStack_2a4 + fStack_2a0 * fStack_2a0;
    fVar32 = fVar21 + fStack_2a8 * fStack_2a8 + fStack_29c * fStack_29c;
    auVar23._0_4_ = fVar21 + fVar27 + 1.1754944e-38;
    auVar23._4_4_ = fVar27 + fVar21 + 1.1754944e-38;
    auVar23._8_4_ = fVar28 + 1.1754944e-38;
    auVar23._12_4_ = fVar32 + 1.1754944e-38;
    auVar31 = rsqrtps(render_system_memory,auVar23);
    fVar29 = auVar31._0_4_;
    fVar24 = auVar31._4_4_;
    fVar25 = auVar31._8_4_;
    fVar26 = auVar31._12_4_;
    fStack_2a8 = fStack_2a8 * (3.0 - fVar29 * fVar29 * (fVar21 + fVar27)) * fVar29 * 0.5;
    fStack_2a4 = fStack_2a4 * (3.0 - fVar24 * fVar24 * (fVar27 + fVar21)) * fVar24 * 0.5;
    fStack_2a0 = fStack_2a0 * (3.0 - fVar25 * fVar25 * fVar28) * fVar25 * 0.5;
    fStack_29c = fStack_29c * (3.0 - fVar26 * fVar26 * fVar32) * fVar26 * 0.5;
  }
  else {
    acosf();
    fVar21 = (float)sinf();
    fVar26 = (float)sinf();
    fVar26 = fVar26 * (1.0 / fVar21);
    fVar28 = (float)sinf();
    fVar28 = fVar28 * (1.0 / fVar21);
    fStack_2a8 = fVar26 * fVar27 + fVar28 * fVar37;
    fStack_2a4 = fVar26 * fVar29 + fVar28 * fVar34;
    fStack_2a0 = fVar26 * fVar24 + fVar28 * fVar36;
    fStack_29c = fVar26 * fVar25 + fVar28 * fVar35;
  }
  fVar21 = fStack_288;
  fVar27 = fStack_378;
  fStack_358 = *(float *)(param_1 + 0x840) - *(float *)(param_1 + 0x820);
  fStack_354 = *(float *)(param_1 + 0x844) - *(float *)(param_1 + 0x824);
  fStack_350 = *(float *)(param_1 + 0x848) - *(float *)(param_1 + 0x828);
  uStack_34c = 0x7f7fffff;
  SystemCore_EventHandler(param_1 + 0x810,auStack_228,&fStack_358);
  pfVar18 = (float *)SystemFileHandler(&fStack_2a8,auStack_1a8,auStack_228);
  fStack_298 = fVar27 + *pfVar18;
  fStack_294 = fVar21 + pfVar18[1];
  fStack_290 = fVar39 + pfVar18[2];
  uStack_34c = 0x7f7fffff;
  uStack_28c = 0x7f7fffff;
  fVar27 = *(float *)(param_1 + 0x830);
  fVar21 = *(float *)(param_1 + 0x834);
  fVar39 = *(float *)(param_1 + 0x838);
  fVar29 = *(float *)(param_1 + 0x83c);
  fStack_2a4 = fVar29 * (float)auStack_2f8._0_4_ * 1.0 + fVar21 * fStack_2c8 * 1.0 +
               (fVar27 * fVar9 - fVar39 * fStack_2d8);
  fStack_2a0 = fVar21 * (float)auStack_2f8._4_4_ * 1.0 + fVar39 * fStack_2c4 * 1.0 +
               (fVar27 * fVar10 - fVar29 * fStack_2d4);
  fStack_29c = fVar39 * (float)uStack_2f0 * 1.0 + fVar29 * fStack_2c0 * 1.0 +
               (fVar27 * fVar11 - fVar21 * fStack_2d0);
  fStack_2a8 = fVar29 * uStack_2f0._4_4_ * -1.0 + fVar39 * fStack_2bc * -1.0 +
               (fVar27 * fVar8 - fVar21 * fStack_2cc);
  UltraHighFreq_FileSystem1(&fStack_2a8,auStack_318,param_1 + 0x850);
  if ((*(uint64_t *)
        ((int64_t)*(int *)((int64_t)param_4 + 0xf0) * 0xa0 + 0x50 +
        *(int64_t *)((int64_t)param_4 + 0xd0)) & 0x100000000) == 0) {
    pfVar18 = (float *)SystemFileHandler(auStack_318,auStack_188,param_1 + 0x8a0);
    fStack_308 = fStack_308 + *pfVar18;
    fStack_304 = fStack_304 + pfVar18[1];
    fStack_300 = fStack_300 + pfVar18[2];
  }
  else {
    lVar19 = *(int64_t *)((int64_t)param_4 + 0xf8) + 0x9c;
    AdvancedProcessor_StateManager0(&uStack_2e8);
    uStack_338 = uStack_2e8;
    uStack_330 = uStack_2e0;
    uStack_31c = *(int32_t *)(lVar19 + 0x3c);
    fStack_320 = 1.0 / fVar38;
    fStack_328 = *(float *)(lVar19 + 0x30) * fStack_320;
    fStack_324 = *(float *)(lVar19 + 0x34) * fStack_320;
    fStack_320 = *(float *)(lVar19 + 0x38) * fStack_320;
    pfVar18 = (float *)SystemFileHandler(auStack_318,auStack_198,&fStack_328);
    fStack_308 = fStack_308 + *pfVar18;
    fStack_304 = fStack_304 + pfVar18[1];
    fStack_300 = fStack_300 + pfVar18[2];
    lVar20 = *(int64_t *)(param_1 + 0x590);
    lVar19 = *(int64_t *)(param_1 + 0x6d8);
  }
  uStack_33c = 0x7f7fffff;
  uVar4 = *(uint64_t *)(lVar20 + 0x2570);
  *(uint64_t *)(param_1 + 0x870) = *(uint64_t *)(lVar20 + 0x2568);
  *(uint64_t *)(param_1 + 0x878) = uVar4;
  *(float *)(param_1 + 0x880) = fStack_308;
  *(float *)(param_1 + 0x884) = fStack_304;
  *(float *)(param_1 + 0x888) = fStack_300;
  *(int32_t *)(param_1 + 0x88c) = 0x7f7fffff;
LAB_180528445:
  lVar19 = *(int64_t *)(lVar19 + 0x8a8);
  fVar29 = *(float *)(lVar19 + 0x84);
  fVar8 = *(float *)(lVar19 + 0x88);
  fVar9 = *(float *)(lVar19 + 0x8c);
  fVar27 = *(float *)(param_1 + 0x884);
  fVar10 = *(float *)(lVar19 + 0x74);
  fVar11 = *(float *)(lVar19 + 0x78);
  fVar24 = *(float *)(lVar19 + 0x7c);
  fVar21 = *(float *)(param_1 + 0x880);
  fVar25 = *(float *)(lVar19 + 0x94);
  fVar26 = *(float *)(lVar19 + 0x98);
  fVar28 = *(float *)(lVar19 + 0x9c);
  fVar39 = *(float *)(param_1 + 0x888);
  fVar32 = *(float *)(lVar19 + 0xa4);
  fVar33 = *(float *)(lVar19 + 0xa8);
  fVar34 = *(float *)(lVar19 + 0xac);
  *param_2 = *(float *)(lVar19 + 0x80) * fVar27 + *(float *)(lVar19 + 0x70) * fVar21 +
             *(float *)(lVar19 + 0x90) * fVar39 + *(float *)(lVar19 + 0xa0);
  param_2[1] = fVar29 * fVar27 + fVar10 * fVar21 + fVar25 * fVar39 + fVar32;
  param_2[2] = fVar8 * fVar27 + fVar11 * fVar21 + fVar26 * fVar39 + fVar33;
  param_2[3] = fVar9 * fVar27 + fVar24 * fVar21 + fVar28 * fVar39 + fVar34;
  if (*(int *)(param_1 + 0x564) != -1) {
    param_2[2] = (*(float *)(param_1 + 0x8c0) - *(float *)(param_1 + 0x8c8)) * fVar38 + param_2[2];
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_f8 ^ (uint64_t)auStack_3b8);
}





// 函数: void FUN_180528530(int64_t param_1,float *param_2,float *param_3,float *param_4)
void FUN_180528530(int64_t param_1,float *param_2,float *param_3,float *param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  int8_t auStack_78 [16];
  int8_t auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  if (((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
    if ((lVar1 == 0) ||
       ((*(byte *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar1 + 0xd0)) >>
         1 & 1) == 0)) {
      FUN_18050a770(param_1,auStack_68);
      fVar5 = *(float *)(lVar4 + 0x84);
      fVar6 = *(float *)(lVar4 + 0x74);
      fVar10 = *(float *)(lVar4 + 0x98);
      fVar7 = *(float *)(lVar4 + 0xa4);
      fVar8 = *(float *)(lVar4 + 0xa8);
      *param_2 = fStack_34 * *(float *)(lVar4 + 0x80) + fStack_38 * *(float *)(lVar4 + 0x70) +
                 *(float *)(lVar4 + 0xa0);
      param_2[1] = fStack_38 * fVar6 + fStack_34 * fVar5 + fVar7;
      param_2[2] = fStack_30 * fVar10 + fVar8;
      param_2[3] = 3.4028235e+38;
      fVar5 = fStack_58 * fStack_58 + fStack_54 * fStack_54 + fStack_50 * fStack_50;
      auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar9._0_4_;
      fVar10 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar5 = *(float *)(param_1 + 0x534);
      fVar6 = *(float *)(param_1 + 0x524);
      *param_3 = fStack_54 * fVar10 * *(float *)(param_1 + 0x530) +
                 fStack_58 * fVar10 * *(float *)(param_1 + 0x520);
      param_3[1] = fStack_54 * fVar10 * fVar5 + fStack_58 * fVar10 * fVar6;
      param_3[2] = fStack_50 * fVar10;
      param_3[3] = 3.4028235e+38;
    }
    else {
      puVar3 = (uint64_t *)FUN_180510780(param_1,auStack_78);
      uVar2 = puVar3[1];
      *(uint64_t *)param_2 = *puVar3;
      *(uint64_t *)(param_2 + 2) = uVar2;
      lVar4 = *(int64_t *)(param_1 + 0x590);
      fVar5 = *(float *)(lVar4 + 0x258c);
      fVar6 = *(float *)(lVar4 + 0x2588);
      fVar10 = *(float *)(param_1 + 0x524);
      fVar7 = *(float *)(param_1 + 0x534);
      fVar8 = *(float *)(lVar4 + 0x2590);
      *param_3 = fVar5 * *(float *)(param_1 + 0x530) + fVar6 * *(float *)(param_1 + 0x520);
      param_3[1] = fVar6 * fVar10 + fVar5 * fVar7;
      param_3[2] = fVar8;
      param_3[3] = 3.4028235e+38;
    }
  }
  else {
    puVar3 = (uint64_t *)FUN_18050a660(0,auStack_78);
    uVar2 = puVar3[1];
    *(uint64_t *)param_2 = *puVar3;
    *(uint64_t *)(param_2 + 2) = uVar2;
    fVar5 = param_4[1];
    fVar6 = param_2[1];
    fVar10 = param_4[2];
    fVar7 = param_2[2];
    *param_3 = *param_4 - *param_2;
    param_3[1] = fVar5 - fVar6;
    param_3[2] = fVar10 - fVar7;
    param_3[3] = 3.4028235e+38;
  }
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar10 = *param_3;
  fVar7 = fVar10 * fVar10 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
  param_3[1] = fVar5 * fVar7;
  param_3[2] = fVar6 * fVar7;
  *param_3 = fVar10 * fVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



