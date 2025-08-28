#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part099.c - 5 个函数

// 函数: void FUN_180726c40(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
void FUN_180726c40(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int16_t *puVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int16_t *puVar11;
  longlong lVar12;
  uint auStack_6a4 [4];
  int aiStack_694 [4];
  int aiStack_684 [105];
  uint64_t uStack_4e0;
  int8_t auStack_4d8 [32];
  uint64_t uStack_4b8;
  int16_t *puStack_4b0;
  int16_t *puStack_4a8;
  int16_t *puStack_4a0;
  int8_t *puStack_498;
  int8_t *puStack_490;
  int8_t *puStack_488;
  int *piStack_480;
  longlong lStack_478;
  int iStack_470;
  int iStack_468;
  uint64_t uStack_450;
  uint64_t uStack_448;
  int aiStack_440 [4];
  int8_t auStack_430 [16];
  int8_t auStack_420 [16];
  int8_t auStack_410 [16];
  int16_t auStack_400 [20];
  int16_t auStack_3d8 [32];
  int16_t auStack_398 [96];
  int16_t auStack_2d8 [320];
  ulonglong uStack_58;
  
  puStack_4b0 = auStack_3d8;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4d8;
  iVar3 = *(int *)(param_1 + 0x11e0);
  lVar8 = (longlong)iVar3;
  uStack_450 = param_5;
  uStack_448 = param_4;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x1218);
    puVar11 = auStack_398;
    pfVar6 = (float *)(param_2 + 0xf4);
    lVar12 = lVar8;
    do {
      puVar5 = puVar11;
      pfVar7 = pfVar6;
      lVar9 = (longlong)iVar4;
      if (0 < (longlong)iVar4) {
        do {
          *puVar5 = (short)(int)ROUND(*pfVar7 * 8192.0);
          lVar9 = lVar9 + -1;
          puVar5 = puVar5 + 1;
          pfVar7 = pfVar7 + 1;
        } while (lVar9 != 0);
      }
      puVar11 = puVar11 + 0x18;
      pfVar6 = pfVar6 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar12 = lVar8;
    pfVar6 = (float *)(param_2 + 0x274);
    do {
      fVar1 = pfVar6[8];
      *(uint *)((longlong)pfVar6 + ((longlong)auStack_6a4 - param_2)) =
           (int)ROUND(pfVar6[4] * 16384.0) << 0x10 | (int)ROUND(*pfVar6 * 16384.0) & 0xffffU;
      fVar2 = pfVar6[0xc];
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_694 - param_2)) = (int)ROUND(fVar1 * 16384.0);
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_684 - param_2)) = (int)ROUND(fVar2 * 16384.0);
      lVar12 = lVar12 + -1;
      pfVar6 = pfVar6 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = 0;
  iStack_470 = (int)ROUND(*(float *)(param_2 + 0x2b4) * 1024.0);
  iStack_468 = 0;
  if (0 < iVar3 * 5) {
    pfVar6 = (float *)(param_2 + 0x90);
    lVar9 = lVar12;
    do {
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      auStack_400[lVar9] = (short)(int)ROUND(fVar1 * 16384.0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar3 * 5);
  }
  iVar3 = *(int *)(param_1 + 0x121c);
  pfVar6 = (float *)(param_2 + 0x10);
  lVar9 = 2;
  puVar11 = puStack_4b0;
  do {
    puVar5 = puVar11;
    pfVar7 = pfVar6;
    lVar10 = (longlong)iVar3;
    if (0 < (longlong)iVar3) {
      do {
        *puVar5 = (short)(int)ROUND(*pfVar7 * 4096.0);
        lVar10 = lVar10 + -1;
        puVar5 = puVar5 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar10 != 0);
    }
    puVar11 = puVar11 + 0x10;
    pfVar6 = pfVar6 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar9 = lVar12;
  if (0 < lVar8) {
    do {
      aiStack_440[lVar9] = (int)ROUND(*(float *)(param_2 + lVar9 * 4) * 65536.0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  if (*(char *)(param_3 + 0x1d) == '\x02') {
    iStack_468 = (int)*(short *)(&unknown_var_9600_ptr + (longlong)*(char *)(param_3 + 0x21) * 2);
  }
  iVar3 = *(int *)(param_1 + 0x11e4);
  if (0 < (longlong)iVar3) {
    do {
      auStack_2d8[lVar12] = (short)(int)ROUND(*(float *)(param_6 + lVar12 * 4));
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar3);
  }
  if ((*(int *)(param_1 + 0x1210) < 2) && (*(int *)(param_1 + 0x123c) < 1)) {
    lStack_478 = param_2 + 0xe4;
    piStack_480 = aiStack_440;
    puStack_488 = auStack_430;
    puStack_490 = auStack_420;
    puStack_498 = auStack_410;
    puStack_4a0 = auStack_398;
    puStack_4a8 = auStack_400;
    uStack_4b8 = uStack_450;
    uStack_4e0 = 0x180726f33;
    FUN_18072fba0(param_1,uStack_448,param_3,auStack_2d8);
  }
  else {
    lStack_478 = param_2 + 0xe4;
    piStack_480 = aiStack_440;
    puStack_488 = auStack_430;
    puStack_490 = auStack_420;
    puStack_498 = auStack_410;
    puStack_4a0 = auStack_398;
    puStack_4a8 = auStack_400;
    uStack_4b8 = uStack_450;
    uStack_4e0 = 0x180726fa9;
    FUN_180730e60(param_1,uStack_448,param_3,auStack_2d8);
  }
                    // WARNING: Subroutine does not return
  uStack_4e0 = 0x180726fb8;
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_4d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180726fd0(longlong param_1,float *param_2)
void FUN_180726fd0(longlong param_1,float *param_2)

{
  short sVar1;
  float *pfVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int8_t auStack_88 [32];
  short asStack_68 [16];
  short asStack_48 [16];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  FUN_180733080(param_1,asStack_68);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x121c)) {
    psVar3 = asStack_68;
    pfVar2 = param_2;
    iVar5 = iVar4;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
      iVar5 = iVar5 + 1;
      *pfVar2 = (float)(int)sVar1 * 0.00024414063;
      pfVar2 = pfVar2 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x121c));
    if (0 < *(int *)(param_1 + 0x121c)) {
      psVar3 = asStack_48;
      pfVar2 = param_2 + 0x10;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        iVar4 = iVar4 + 1;
        *pfVar2 = (float)(int)sVar1 * 0.00024414063;
        pfVar2 = pfVar2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x121c));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807270a0(ulonglong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1807270a0(ulonglong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  float *param_5,longlong param_6,longlong param_7,int32_t param_8,int param_9,
                  int32_t param_10)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int8_t auVar7 [12];
  int8_t auVar8 [12];
  int8_t auVar9 [12];
  int8_t auVar10 [12];
  uint uVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int8_t auVar17 [16];
  int8_t auVar21 [16];
  int8_t auVar24 [16];
  int8_t auVar27 [16];
  int8_t auStack_2a8 [32];
  float *pfStack_288;
  int *piStack_280;
  int *piStack_278;
  int32_t uStack_270;
  int iStack_268;
  int32_t uStack_260;
  float afStack_258 [4];
  int aiStack_248 [20];
  int aiStack_1f8 [100];
  uint64_t uStack_68;
  ulonglong auStack_60 [5];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int16_t uVar20;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  
  auStack_60[4] = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2a8;
  uVar16 = 0;
  uVar13 = uVar16;
  if (0 < param_9 * 0x19) {
    do {
      afStack_258[0] = *(float *)(param_6 + uVar13 * 4) * 131072.0;
      aiStack_1f8[uVar13] = (int)ROUND(afStack_258[0]);
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)(param_9 * 0x19));
  }
  uVar6 = param_9 * 5;
  lVar15 = (longlong)(int)uVar6;
  uVar13 = uVar16;
  if (0 < (int)uVar6) {
    do {
      afStack_258[0] = *(float *)(param_7 + uVar13 * 4) * 131072.0;
      aiStack_248[uVar13] = (int)ROUND(afStack_258[0]);
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < lVar15);
  }
  uStack_260 = param_10;
  iStack_268 = param_9;
  uStack_270 = param_8;
  piStack_278 = aiStack_248;
  piStack_280 = aiStack_1f8;
  pfStack_288 = afStack_258;
  FUN_18072f890(&uStack_68,param_2,param_3,param_4);
  uVar13 = uVar16;
  if (((0 < (int)uVar6) && (uVar13 = 0, 0xf < uVar6)) &&
     (((ulonglong)((longlong)&uStack_68 + (longlong)(int)(uVar6 - 1) * 2) < param_1 ||
      ((uint64_t *)(param_1 + (longlong)(int)(uVar6 - 1) * 4) < &uStack_68)))) {
    uVar11 = uVar6 & 0x8000000f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
    }
    pfVar12 = (float *)(param_1 + 0x20);
    uVar13 = uVar16;
    do {
      uVar1 = *(ulonglong *)((longlong)&uStack_68 + uVar16 * 2);
      uVar2 = *(ulonglong *)((longlong)auStack_60 + uVar16 * 2);
      uVar13 = (ulonglong)((int)uVar13 + 0x10);
      uVar20 = (int16_t)(uVar1 >> 0x30);
      auVar19._8_4_ = 0;
      auVar19._0_8_ = uVar1;
      auVar19._12_2_ = uVar20;
      auVar19._14_2_ = uVar20;
      uVar20 = (int16_t)(uVar1 >> 0x20);
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar1;
      auVar18._10_2_ = uVar20;
      auVar17._10_6_ = auVar18._10_6_;
      auVar17._8_2_ = uVar20;
      auVar17._0_8_ = uVar1;
      uVar20 = (int16_t)(uVar1 >> 0x10);
      auVar7._4_8_ = auVar17._8_8_;
      auVar7._2_2_ = uVar20;
      auVar7._0_2_ = uVar20;
      uVar20 = (int16_t)(uVar2 >> 0x30);
      auVar23._8_4_ = 0;
      auVar23._0_8_ = uVar2;
      auVar23._12_2_ = uVar20;
      auVar23._14_2_ = uVar20;
      uVar20 = (int16_t)(uVar2 >> 0x20);
      auVar22._12_4_ = auVar23._12_4_;
      auVar22._8_2_ = 0;
      auVar22._0_8_ = uVar2;
      auVar22._10_2_ = uVar20;
      auVar21._10_6_ = auVar22._10_6_;
      auVar21._8_2_ = uVar20;
      auVar21._0_8_ = uVar2;
      uVar20 = (int16_t)(uVar2 >> 0x10);
      auVar8._4_8_ = auVar21._8_8_;
      auVar8._2_2_ = uVar20;
      auVar8._0_2_ = uVar20;
      pfVar12[-8] = (float)(int)(short)uVar1 * 6.1035156e-05;
      pfVar12[-7] = (float)(auVar7._0_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[-6] = (float)(auVar17._8_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[-5] = (float)(auVar18._12_4_ >> 0x10) * 6.1035156e-05;
      uVar1 = *(ulonglong *)((longlong)auStack_60 + uVar16 * 2 + 8);
      uVar20 = (int16_t)(uVar1 >> 0x30);
      auVar26._8_4_ = 0;
      auVar26._0_8_ = uVar1;
      auVar26._12_2_ = uVar20;
      auVar26._14_2_ = uVar20;
      uVar20 = (int16_t)(uVar1 >> 0x20);
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._8_2_ = 0;
      auVar25._0_8_ = uVar1;
      auVar25._10_2_ = uVar20;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = uVar20;
      auVar24._0_8_ = uVar1;
      uVar20 = (int16_t)(uVar1 >> 0x10);
      auVar9._4_8_ = auVar24._8_8_;
      auVar9._2_2_ = uVar20;
      auVar9._0_2_ = uVar20;
      pfVar12[-4] = (float)(int)(short)uVar2 * 6.1035156e-05;
      pfVar12[-3] = (float)(auVar8._0_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[-2] = (float)(auVar21._8_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[-1] = (float)(auVar22._12_4_ >> 0x10) * 6.1035156e-05;
      uVar2 = *(ulonglong *)((longlong)auStack_60 + uVar16 * 2 + 0x10);
      uVar16 = uVar16 + 0x10;
      uVar20 = (int16_t)(uVar2 >> 0x30);
      auVar29._8_4_ = 0;
      auVar29._0_8_ = uVar2;
      auVar29._12_2_ = uVar20;
      auVar29._14_2_ = uVar20;
      uVar20 = (int16_t)(uVar2 >> 0x20);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._8_2_ = 0;
      auVar28._0_8_ = uVar2;
      auVar28._10_2_ = uVar20;
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._8_2_ = uVar20;
      auVar27._0_8_ = uVar2;
      uVar20 = (int16_t)(uVar2 >> 0x10);
      auVar10._4_8_ = auVar27._8_8_;
      auVar10._2_2_ = uVar20;
      auVar10._0_2_ = uVar20;
      *pfVar12 = (float)(int)(short)uVar1 * 6.1035156e-05;
      pfVar12[1] = (float)(auVar9._0_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[2] = (float)(auVar24._8_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[3] = (float)(auVar25._12_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[4] = (float)(int)(short)uVar2 * 6.1035156e-05;
      pfVar12[5] = (float)(auVar10._0_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[6] = (float)(auVar27._8_4_ >> 0x10) * 6.1035156e-05;
      pfVar12[7] = (float)(auVar28._12_4_ >> 0x10) * 6.1035156e-05;
      pfVar12 = pfVar12 + 0x10;
    } while ((longlong)uVar16 < (longlong)(int)(uVar6 - uVar11));
  }
  lVar14 = (longlong)(int)uVar13;
  if (lVar14 < lVar15) {
    if (3 < lVar15 - lVar14) {
      pfVar12 = (float *)(param_1 + 8 + lVar14 * 4);
      do {
        sVar3 = *(short *)((longlong)&uStack_68 + lVar14 * 2 + 2);
        sVar4 = *(short *)((longlong)&uStack_68 + lVar14 * 2 + 4);
        pfVar12[-2] = (float)(int)*(short *)((longlong)&uStack_68 + lVar14 * 2) * 6.1035156e-05;
        sVar5 = *(short *)((longlong)&uStack_68 + lVar14 * 2 + 6);
        lVar14 = lVar14 + 4;
        pfVar12[-1] = (float)(int)sVar3 * 6.1035156e-05;
        *pfVar12 = (float)(int)sVar4 * 6.1035156e-05;
        pfVar12[1] = (float)(int)sVar5 * 6.1035156e-05;
        pfVar12 = pfVar12 + 4;
      } while (lVar14 < lVar15 + -3);
    }
    for (; lVar14 < lVar15; lVar14 = lVar14 + 1) {
      *(float *)(param_1 + lVar14 * 4) =
           (float)(int)*(short *)((longlong)&uStack_68 + lVar14 * 2) * 6.1035156e-05;
    }
  }
  *param_5 = (float)(int)afStack_258[0] * 0.0078125;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(auStack_60[4] ^ (ulonglong)auStack_2a8);
}





// 函数: void FUN_1807273a0(int *param_1,longlong param_2)
void FUN_1807273a0(int *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_2 + 0x6c) < 1000) {
    uVar8 = 0x7fff / (longlong)((*(int *)(param_2 + 0x6c) >> 4) + 1) & 0xffffffff;
  }
  else {
    uVar8 = 0;
  }
  iVar5 = *(int *)(param_2 + 0x5c) + *param_1;
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar5 < 0) {
    iVar5 = 0x7fffffff;
  }
  iVar4 = (int)(0x7fffffff / (longlong)iVar5);
  iVar6 = 0x80;
  if (iVar3 * 8 < iVar5) {
    iVar3 = 0x80;
  }
  else if (iVar5 < iVar3) {
    iVar3 = 0x400;
  }
  else {
    iVar3 = (int)((ulonglong)
                  ((longlong)(int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x10) << 0xb)
                 >> 0x10);
  }
  iVar5 = (int)uVar8;
  sVar7 = (short)uVar8;
  sVar1 = sVar7;
  if (iVar5 < iVar3) {
    sVar1 = (short)iVar3;
  }
  iVar3 = (int)((ulonglong)((longlong)sVar1 * (longlong)(iVar4 - *(int *)(param_2 + 0x4c))) >> 0x10)
          + *(int *)(param_2 + 0x4c);
  *(int *)(param_2 + 0x4c) = iVar3;
  iVar4 = (int)(0x7fffffff / (longlong)iVar3);
  iVar3 = 0xffffff;
  if (iVar4 < 0xffffff) {
    iVar3 = iVar4;
  }
  *(int *)(param_2 + 0x3c) = iVar3;
  iVar4 = *(int *)(param_2 + 0x60) + param_1[1];
  iVar3 = *(int *)(param_2 + 0x40);
  if (iVar4 < 0) {
    iVar4 = 0x7fffffff;
  }
  iVar2 = (int)(0x7fffffff / (longlong)iVar4);
  if (iVar3 * 8 < iVar4) {
    iVar3 = 0x80;
  }
  else if (iVar4 < iVar3) {
    iVar3 = 0x400;
  }
  else {
    iVar3 = (int)((ulonglong)
                  ((longlong)(int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x10) << 0xb)
                 >> 0x10);
  }
  sVar1 = sVar7;
  if (iVar5 < iVar3) {
    sVar1 = (short)iVar3;
  }
  iVar3 = (int)((ulonglong)((longlong)sVar1 * (longlong)(iVar2 - *(int *)(param_2 + 0x50))) >> 0x10)
          + *(int *)(param_2 + 0x50);
  *(int *)(param_2 + 0x50) = iVar3;
  iVar4 = (int)(0x7fffffff / (longlong)iVar3);
  iVar3 = 0xffffff;
  if (iVar4 < 0xffffff) {
    iVar3 = iVar4;
  }
  *(int *)(param_2 + 0x40) = iVar3;
  iVar4 = *(int *)(param_2 + 100) + param_1[2];
  iVar3 = *(int *)(param_2 + 0x44);
  if (iVar4 < 0) {
    iVar4 = 0x7fffffff;
  }
  iVar2 = (int)(0x7fffffff / (longlong)iVar4);
  if (iVar3 * 8 < iVar4) {
    iVar3 = 0x80;
  }
  else if (iVar4 < iVar3) {
    iVar3 = 0x400;
  }
  else {
    iVar3 = (int)((ulonglong)
                  ((longlong)(int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x10) << 0xb)
                 >> 0x10);
  }
  if (iVar5 < iVar3) {
    sVar7 = (short)iVar3;
  }
  iVar3 = (int)((ulonglong)((longlong)sVar7 * (longlong)(iVar2 - *(int *)(param_2 + 0x54))) >> 0x10)
          + *(int *)(param_2 + 0x54);
  *(int *)(param_2 + 0x54) = iVar3;
  iVar4 = (int)(0x7fffffff / (longlong)iVar3);
  iVar3 = 0xffffff;
  if (iVar4 < 0xffffff) {
    iVar3 = iVar4;
  }
  *(int *)(param_2 + 0x44) = iVar3;
  iVar4 = param_1[3] + *(int *)(param_2 + 0x68);
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar4 < 0) {
    iVar4 = 0x7fffffff;
  }
  iVar2 = (int)(0x7fffffff / (longlong)iVar4);
  if (iVar4 <= iVar3 * 8) {
    if (iVar4 < iVar3) {
      iVar6 = 0x400;
    }
    else {
      iVar6 = (int)((ulonglong)
                    ((longlong)(int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x10) << 0xb)
                   >> 0x10);
    }
  }
  if (iVar5 < iVar6) {
    uVar8 = (ulonglong)(ushort)iVar6;
  }
  iVar3 = (int)((ulonglong)((longlong)(iVar2 - *(int *)(param_2 + 0x58)) * (longlong)(short)uVar8)
               >> 0x10) + *(int *)(param_2 + 0x58);
  *(int *)(param_2 + 0x58) = iVar3;
  iVar5 = (int)(0x7fffffff / (longlong)iVar3);
  iVar3 = 0xffffff;
  if (iVar5 < 0xffffff) {
    iVar3 = iVar5;
  }
  *(int *)(param_2 + 0x48) = iVar3;
  *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180727610(longlong param_1,uint64_t param_2)
void FUN_180727610(longlong param_1,uint64_t param_2)

{
  int8_t auStack_b8 [8];
  longlong lStack_b0;
  uint64_t uStack_a8;
  longlong lStack_90;
  int32_t uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  lStack_b0 = param_1 + 0x20;
  uStack_68 = 0;
  iStack_5c = *(int *)(param_1 + 0x11e4) >> 2;
  iStack_60 = *(int *)(param_1 + 0x11e4) >> 3;
  iStack_64 = iStack_60 + iStack_5c;
  iStack_60 = iStack_64 + iStack_60;
  iStack_5c = iStack_5c + iStack_60;
  uStack_a8 = param_2;
  lStack_90 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





