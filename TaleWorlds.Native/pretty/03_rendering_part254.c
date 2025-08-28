#include "TaleWorlds.Native.Split.h"

// 03_rendering_part254.c - 6 个函数

// 函数: void FUN_18040da70(longlong param_1)
void FUN_18040da70(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar4 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      lVar3 = uVar4 + param_1;
      if (*(longlong *)(lVar3 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar3 + 0xf8) = 0;
      if (*(uint64_t **)(lVar3 + 0x180) != (uint64_t *)0x0) {
        **(uint64_t **)(lVar3 + 0x180) = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar3 + 0x180) = 0;
      *(uint64_t *)(lVar3 + 0x188) = &unknown_var_3456_ptr;
      if (*(longlong *)(lVar3 + 400) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar3 + 400) = 0;
      *(int32_t *)(lVar3 + 0x1a0) = 0;
      *(uint64_t *)(lVar3 + 0x188) = &unknown_var_720_ptr;
      uVar4 = (ulonglong)(uint)((int)uVar4 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900((ulonglong *)(param_1 + -0x10));
}



uint64_t FUN_18040db80(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 0x198);
  iVar2 = 0;
  do {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(*(longlong *)*plVar3 + 0x18))();
      if (iVar1 == 0) {
        return *(uint64_t *)(param_1 + 0x198 + (longlong)iVar2 * 8);
      }
    }
    iVar2 = iVar2 + 1;
    plVar3 = plVar3 + 1;
  } while (iVar2 < 2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040dbf0(longlong *param_1,float *param_2,char param_3,float param_4,longlong param_5,
void FUN_18040dbf0(longlong *param_1,float *param_2,char param_3,float param_4,longlong param_5,
                  char *param_6)

{
  uint64_t *puVar1;
  byte bVar2;
  char cVar3;
  int32_t uVar4;
  uint uVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float fVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
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
  int8_t auStack_1d8 [32];
  char cStack_1b8;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  float fStack_170;
  float fStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  float fStack_150;
  float fStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  float afStack_128 [4];
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  float afStack_100 [2];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  ulonglong uStack_e8;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1d8;
  uVar14 = (ulonglong)param_3;
  lVar8 = uVar14 * 0x4a;
  lVar15 = *param_1 + lVar8;
  fVar17 = (float)FUN_18040f3a0(lVar15);
  fVar18 = (float)FUN_18040e640(lVar15);
  if (*param_6 == '\0') {
    iVar10 = (int)param_4;
    iVar10 = (iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3;
    if (fVar18 <= (float)iVar10) {
      iVar10 = iVar10 + -3;
    }
    if (fVar17 <= (float)iVar10) {
      iVar11 = iVar10 + 3;
    }
    else {
      iVar10 = (int)fVar17;
      iVar11 = iVar10 + 1;
      if (iVar11 != (iVar11 / 3 + (iVar11 >> 0x1f) +
                    (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * 3) {
        iVar11 = iVar10 + 4;
        iVar11 = (iVar11 / 3 + (iVar11 >> 0x1f) +
                 (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 3;
      }
    }
    if (fVar18 < (float)iVar11) goto LAB_18040dd37;
  }
  else {
    iVar10 = (int)param_4;
    iVar11 = iVar10 + 1;
    if (fVar18 < (float)iVar11) {
      iVar10 = iVar10 + -1;
LAB_18040dd37:
      iVar11 = (int)fVar18;
    }
  }
  fVar17 = (float)iVar10;
  plVar9 = param_1 + 8;
  fStack_150 = (float)CONCAT31(fStack_150._1_3_,1);
  uStack_158 = plVar9;
  AcquireSRWLockShared(plVar9);
  lVar12 = *param_1;
  plVar7 = (longlong *)(lVar12 + 0x26 + lVar8);
  iVar10 = func_0x00018040e6d0(plVar7);
  bVar16 = iVar10 == -1;
  if (bVar16) {
    fVar18 = (float)uStack_178;
    fVar33 = uStack_178._4_4_;
  }
  else {
    pfVar6 = (float *)(*plVar7 + (longlong)iVar10 * 0x10);
    uStack_178 = *(longlong **)pfVar6;
    fStack_170 = pfVar6[2];
    fStack_16c = pfVar6[3];
    puVar1 = (uint64_t *)(*(longlong *)(lVar8 + 0x38 + lVar12) + (longlong)iVar10 * 0x10);
    uStack_168 = *puVar1;
    uStack_160 = puVar1[1];
    fVar18 = *pfVar6;
    fVar33 = pfVar6[1];
  }
  fVar23 = fStack_16c;
  fVar34 = fStack_170;
  iVar10 = func_0x00018040e6d0(lVar12 + 0x26 + lVar8);
  cStack_1b8 = iVar10 != -1;
  if ((bool)cStack_1b8) {
    pfVar6 = (float *)(*(longlong *)(lVar8 + 0x26 + lVar12) + (longlong)iVar10 * 0x10);
    fStack_198 = *pfVar6;
    fStack_194 = pfVar6[1];
    fStack_190 = pfVar6[2];
    fStack_18c = pfVar6[3];
    puVar1 = (uint64_t *)(*(longlong *)(lVar8 + 0x38 + lVar12) + (longlong)iVar10 * 0x10);
    uStack_188 = *puVar1;
    uStack_180 = puVar1[1];
  }
  fVar36 = fStack_18c;
  fVar31 = fStack_190;
  fVar29 = fStack_194;
  fVar28 = fStack_198;
  uVar4 = ReleaseSRWLockShared(plVar9);
  if ((bVar16) || (cStack_1b8 == '\0')) {
    fStack_150 = (float)((uint)fStack_150 & 0xffffff00);
    uStack_158 = plVar9;
    AcquireSRWLockExclusive(plVar9);
    fStack_150 = (float)CONCAT31(fStack_150._1_3_,1);
    if ((bVar16) && (iVar10 = func_0x00018040e6d0(lVar15 + 0x26), iVar10 == -1)) {
      fVar18 = 1.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar23 = 0.0;
      afStack_128[0] = 1.0;
      afStack_128[1] = 0.0;
      afStack_128[2] = 0.0;
      afStack_128[3] = 0.0;
      uStack_118 = 0;
      uStack_110 = 0x3f80000000000000;
      if (-1 < param_3) {
        fStack_19c = 3.4028235e+38;
        cVar3 = param_3;
        do {
          FUN_18040edc0((longlong)cVar3 * 0x4a + *param_1,&uStack_178);
          fVar19 = fStack_16c;
          fVar22 = fStack_170;
          fVar36 = (float)uStack_178;
          fVar35 = uStack_178._4_4_;
          uStack_108 = uStack_178;
          afStack_100[1] = fStack_16c;
          afStack_100[0] = fStack_170;
          lVar13 = (longlong)cVar3 * 0x1b0;
          lVar12 = *(longlong *)(param_5 + 0x140);
          pfVar6 = (float *)(lVar13 + 0x80 + lVar12);
          fVar28 = *pfVar6;
          fVar29 = pfVar6[1];
          uStack_f8 = *(uint64_t *)pfVar6;
          fVar31 = pfVar6[2];
          uStack_f0 = *(uint64_t *)(pfVar6 + 2);
          pfVar6 = (float *)FUN_1801c0fb0(&uStack_108,&fStack_198,&uStack_118);
          fStack_1a0 = fVar31 + pfVar6[2];
          fStack_1a4 = fVar29 + pfVar6[1];
          fStack_1a8 = fVar28 + *pfVar6;
          fVar31 = fVar33 * fVar19;
          fVar30 = fVar34 * fVar35;
          fVar32 = fVar23 * fVar19;
          fVar37 = fVar34 * fVar22;
          fVar28 = fVar33 * fVar22;
          fVar29 = fVar33 * fVar35;
          fVar33 = fVar33 * fVar36 * 1.0 + fVar23 * fVar22 * 1.0 +
                   (fVar18 * fVar35 - fVar34 * fVar19);
          fVar34 = fVar34 * fVar36 * 1.0 + fVar31 * 1.0 + (fVar18 * fVar22 - fVar23 * fVar35);
          fVar23 = fVar23 * fVar36 * 1.0 + fVar30 * 1.0 + (fVar18 * fVar19 - fVar28);
          fVar18 = fVar37 * -1.0 + fVar32 * -1.0 + (fVar18 * fVar36 - fVar29);
          afStack_128[1] = fVar33;
          afStack_128[0] = fVar18;
          afStack_128[3] = fVar23;
          afStack_128[2] = fVar34;
          uStack_118 = CONCAT44(fStack_1a4,fStack_1a8);
          uStack_110 = CONCAT44(fStack_19c,fStack_1a0);
          cVar3 = *(char *)(lVar13 + 0xf0 + lVar12);
        } while (-1 < cVar3);
      }
      FUN_180084000(afStack_128);
      FUN_18040e930(lVar15 + 0x26);
      FUN_18040e790(lVar15 + 0x38);
    }
    if ((cStack_1b8 == '\0') && (iVar10 = func_0x00018040e6d0(lVar15 + 0x26), iVar10 == -1)) {
      fVar18 = 1.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar23 = 0.0;
      afStack_128[0] = 1.0;
      afStack_128[1] = 0.0;
      afStack_128[2] = 0.0;
      afStack_128[3] = 0.0;
      uStack_118 = 0;
      uStack_110 = 0x3f80000000000000;
      if (-1 < param_3) {
        fStack_19c = 3.4028235e+38;
        do {
          FUN_18040edc0((longlong)(char)uVar14 * 0x4a + *param_1,&uStack_178);
          fVar19 = fStack_16c;
          fVar22 = fStack_170;
          fVar36 = (float)uStack_178;
          fVar35 = uStack_178._4_4_;
          uStack_108 = uStack_178;
          afStack_100[1] = fStack_16c;
          afStack_100[0] = fStack_170;
          lVar13 = (longlong)(char)uVar14 * 0x1b0;
          lVar12 = *(longlong *)(param_5 + 0x140);
          pfVar6 = (float *)(lVar13 + 0x80 + lVar12);
          fVar28 = *pfVar6;
          fVar29 = pfVar6[1];
          uStack_f8 = *(uint64_t *)pfVar6;
          fVar31 = pfVar6[2];
          uStack_f0 = *(uint64_t *)(pfVar6 + 2);
          pfVar6 = (float *)FUN_1801c0fb0(&uStack_108,&fStack_198,&uStack_118);
          fStack_1a0 = fVar31 + pfVar6[2];
          fStack_1a4 = fVar29 + pfVar6[1];
          fStack_1a8 = fVar28 + *pfVar6;
          fVar31 = fVar33 * fVar19;
          fVar30 = fVar34 * fVar35;
          fVar32 = fVar23 * fVar19;
          fVar37 = fVar34 * fVar22;
          fVar28 = fVar33 * fVar22;
          fVar29 = fVar33 * fVar35;
          fVar33 = fVar33 * fVar36 * 1.0 + fVar23 * fVar22 * 1.0 +
                   (fVar18 * fVar35 - fVar34 * fVar19);
          fVar34 = fVar34 * fVar36 * 1.0 + fVar31 * 1.0 + (fVar18 * fVar22 - fVar23 * fVar35);
          fVar23 = fVar23 * fVar36 * 1.0 + fVar30 * 1.0 + (fVar18 * fVar19 - fVar28);
          fVar18 = fVar37 * -1.0 + fVar32 * -1.0 + (fVar18 * fVar36 - fVar29);
          afStack_128[1] = fVar33;
          afStack_128[0] = fVar18;
          afStack_128[3] = fVar23;
          afStack_128[2] = fVar34;
          uStack_118 = CONCAT44(fStack_1a4,fStack_1a8);
          uStack_110 = CONCAT44(fStack_19c,fStack_1a0);
          bVar2 = *(byte *)(lVar13 + 0xf0 + lVar12);
          uVar14 = (ulonglong)bVar2;
        } while (-1 < (char)bVar2);
      }
      FUN_180084000(afStack_128);
      FUN_18040e930(lVar15 + 0x26);
      FUN_18040e790(lVar15 + 0x38);
    }
    plVar9 = param_1 + 8;
    ReleaseSRWLockExclusive(plVar9);
    fStack_170 = (float)CONCAT31(fStack_170._1_3_,1);
    uStack_178 = plVar9;
    AcquireSRWLockShared(plVar9);
    lVar12 = *param_1;
    lVar15 = lVar8 + lVar12;
    iVar10 = func_0x00018040e6d0(lVar15 + 0x26);
    if (iVar10 == -1) {
      fVar18 = (float)uStack_158;
      fVar33 = uStack_158._4_4_;
    }
    else {
      pfVar6 = (float *)(*(longlong *)(lVar15 + 0x26) + (longlong)iVar10 * 0x10);
      uStack_158 = *(longlong **)pfVar6;
      fStack_150 = pfVar6[2];
      fStack_14c = pfVar6[3];
      puVar1 = (uint64_t *)(*(longlong *)(lVar8 + 0x38 + lVar12) + (longlong)iVar10 * 0x10);
      uStack_148 = *puVar1;
      uStack_140 = puVar1[1];
      fVar18 = *pfVar6;
      fVar33 = pfVar6[1];
    }
    fVar23 = fStack_14c;
    fVar34 = fStack_150;
    lVar15 = lVar8 + lVar12;
    iVar10 = func_0x00018040e6d0(lVar15 + 0x26);
    if (iVar10 != -1) {
      pfVar6 = (float *)(*(longlong *)(lVar15 + 0x26) + (longlong)iVar10 * 0x10);
      fStack_198 = *pfVar6;
      fStack_194 = pfVar6[1];
      fStack_190 = pfVar6[2];
      fStack_18c = pfVar6[3];
      puVar1 = (uint64_t *)(*(longlong *)(lVar8 + 0x38 + lVar12) + (longlong)iVar10 * 0x10);
      uStack_188 = *puVar1;
      uStack_180 = puVar1[1];
    }
    fVar36 = fStack_18c;
    fVar31 = fStack_190;
    fVar29 = fStack_194;
    fVar28 = fStack_198;
    uVar4 = ReleaseSRWLockShared(plVar9);
    fVar35 = (param_4 - fVar17) / ((float)iVar11 - fVar17);
    fVar17 = 0.0;
    if (fVar35 < 0.0) {
LAB_18040e420:
      fVar35 = fVar17;
      fStack_1a8 = (float)uStack_158;
      fStack_1a4 = uStack_158._4_4_;
      fStack_1a0 = fStack_150;
      fStack_19c = fStack_14c;
      fVar17 = (float)uStack_158;
      fVar18 = uStack_158._4_4_;
      fVar33 = fStack_150;
      fVar34 = fStack_14c;
    }
    else {
      if (1.0 <= fVar35) {
        fVar35 = 1.0;
      }
      fVar17 = fVar35;
      if (fVar35 < 0.001) goto LAB_18040e420;
      if (fVar35 <= 0.999) {
        fVar17 = fVar34 * fVar31;
        fVar22 = fVar23 * fVar36;
        auVar26._0_4_ = fVar17 + fVar18 * fVar28;
        auVar26._4_4_ = fVar22 + fVar33 * fVar29;
        auVar26._8_4_ = fVar17 + fVar17;
        auVar26._12_4_ = fVar22 + fVar22;
        auVar27._4_12_ = auVar26._4_12_;
        auVar27._0_4_ = auVar26._0_4_ + auVar26._4_4_;
        uStack_108 = (longlong *)0x3f8000003f800000;
        afStack_100[0] = 1.0;
        afStack_100[1] = 1.0;
        uStack_f8 = 0xbf800000bf800000;
        uStack_f0 = 0xbf800000bf800000;
        uVar5 = movmskps(uVar4,auVar27);
        uVar14 = (ulonglong)(uVar5 & 1);
        fVar28 = *(float *)(&uStack_108 + uVar14 * 2) * fVar28;
        fVar29 = *(float *)((longlong)&uStack_108 + uVar14 * 0x10 + 4) * fVar29;
        fVar31 = afStack_100[uVar14 * 4] * fVar31;
        fVar36 = afStack_100[uVar14 * 4 + 1] * fVar36;
        if (0.9995 < ABS(auVar27._0_4_)) {
          fVar22 = 1.0 - fVar35;
          fVar17 = fVar22 * fVar18 + fVar35 * fVar28;
          fVar18 = fVar22 * fVar33 + fVar35 * fVar29;
          fVar33 = fVar22 * fVar34 + fVar35 * fVar31;
          fVar34 = fVar22 * fVar23 + fVar35 * fVar36;
          fVar23 = fVar34 * fVar34 + fVar17 * fVar17;
          fVar28 = fVar33 * fVar33 + fVar18 * fVar18;
          fVar19 = fVar23 + fVar18 * fVar18 + fVar33 * fVar33;
          fVar30 = fVar28 + fVar17 * fVar17 + fVar34 * fVar34;
          auVar21._0_4_ = fVar28 + fVar23 + 1.1754944e-38;
          auVar21._4_4_ = fVar23 + fVar28 + 1.1754944e-38;
          auVar21._8_4_ = fVar19 + 1.1754944e-38;
          auVar21._12_4_ = fVar30 + 1.1754944e-38;
          auVar26 = rsqrtps(auVar27,auVar21);
          fVar29 = auVar26._0_4_;
          fVar31 = auVar26._4_4_;
          fVar36 = auVar26._8_4_;
          fVar22 = auVar26._12_4_;
          fVar17 = fVar17 * (3.0 - fVar29 * fVar29 * (fVar28 + fVar23)) * fVar29 * 0.5;
          fVar18 = fVar18 * (3.0 - fVar31 * fVar31 * (fVar23 + fVar28)) * fVar31 * 0.5;
          fVar33 = fVar33 * (3.0 - fVar36 * fVar36 * fVar19) * fVar36 * 0.5;
          fVar34 = fVar34 * (3.0 - fVar22 * fVar22 * fVar30) * fVar22 * 0.5;
        }
        else {
          acosf();
          fVar17 = (float)sinf();
          fVar22 = (float)sinf();
          fVar22 = fVar22 * (1.0 / fVar17);
          fVar19 = (float)sinf();
          fVar19 = fVar19 * (1.0 / fVar17);
          fVar17 = fVar22 * fVar18 + fVar19 * fVar28;
          fVar18 = fVar22 * fVar33 + fVar19 * fVar29;
          fVar33 = fVar22 * fVar34 + fVar19 * fVar31;
          fVar34 = fVar22 * fVar23 + fVar19 * fVar36;
        }
      }
      else {
        fStack_1a8 = fStack_198;
        fStack_1a4 = fStack_194;
        fStack_1a0 = fStack_190;
        fStack_19c = fStack_18c;
        fVar17 = fStack_198;
        fVar18 = fStack_194;
        fVar33 = fStack_190;
        fVar34 = fStack_18c;
      }
    }
    fVar31 = ((float)uStack_188 - (float)uStack_148) * fVar35 + (float)uStack_148;
    fVar29 = (uStack_188._4_4_ - uStack_148._4_4_) * fVar35 + uStack_148._4_4_;
    fVar28 = ((float)uStack_180 - (float)uStack_140) * fVar35 + (float)uStack_140;
    fVar23 = (uStack_180._4_4_ - uStack_140._4_4_) * fVar35 + uStack_140._4_4_;
    goto LAB_18040e5b5;
  }
  fVar35 = (param_4 - fVar17) / ((float)iVar11 - fVar17);
  fVar17 = 0.0;
  if (fVar35 < 0.0) {
LAB_18040de50:
    fVar35 = fVar17;
    fStack_1a8 = (float)uStack_178;
    fStack_1a4 = uStack_178._4_4_;
    fStack_1a0 = fStack_170;
    fStack_19c = fStack_16c;
    fVar17 = (float)uStack_178;
    fVar18 = uStack_178._4_4_;
    fVar33 = fStack_170;
    fVar34 = fStack_16c;
  }
  else {
    if (1.0 <= fVar35) {
      fVar35 = 1.0;
    }
    fVar17 = fVar35;
    if (fVar35 < 0.001) goto LAB_18040de50;
    if (fVar35 <= 0.999) {
      fVar17 = fVar34 * fVar31;
      fVar22 = fVar23 * fVar36;
      auVar24._0_4_ = fVar17 + fVar18 * fVar28;
      auVar24._4_4_ = fVar22 + fVar33 * fVar29;
      auVar24._8_4_ = fVar17 + fVar17;
      auVar24._12_4_ = fVar22 + fVar22;
      auVar25._4_12_ = auVar24._4_12_;
      auVar25._0_4_ = auVar24._0_4_ + auVar24._4_4_;
      afStack_128[0] = 1.0;
      afStack_128[1] = 1.0;
      afStack_128[2] = 1.0;
      afStack_128[3] = 1.0;
      uStack_118 = 0xbf800000bf800000;
      uStack_110 = 0xbf800000bf800000;
      uVar5 = movmskps(uVar4,auVar25);
      uVar14 = (ulonglong)(uVar5 & 1);
      fVar28 = afStack_128[uVar14 * 4] * fVar28;
      fVar29 = afStack_128[uVar14 * 4 + 1] * fVar29;
      fVar31 = afStack_128[uVar14 * 4 + 2] * fVar31;
      fVar36 = afStack_128[uVar14 * 4 + 3] * fVar36;
      if (0.9995 < ABS(auVar25._0_4_)) {
        fVar22 = 1.0 - fVar35;
        fVar17 = fVar22 * fVar18 + fVar35 * fVar28;
        fVar18 = fVar22 * fVar33 + fVar35 * fVar29;
        fVar33 = fVar22 * fVar34 + fVar35 * fVar31;
        fVar34 = fVar22 * fVar23 + fVar35 * fVar36;
        fVar23 = fVar34 * fVar34 + fVar17 * fVar17;
        fVar28 = fVar33 * fVar33 + fVar18 * fVar18;
        fVar19 = fVar23 + fVar18 * fVar18 + fVar33 * fVar33;
        fVar30 = fVar28 + fVar17 * fVar17 + fVar34 * fVar34;
        auVar20._0_4_ = fVar28 + fVar23 + 1.1754944e-38;
        auVar20._4_4_ = fVar23 + fVar28 + 1.1754944e-38;
        auVar20._8_4_ = fVar19 + 1.1754944e-38;
        auVar20._12_4_ = fVar30 + 1.1754944e-38;
        auVar26 = rsqrtps(auVar25,auVar20);
        fVar29 = auVar26._0_4_;
        fVar31 = auVar26._4_4_;
        fVar36 = auVar26._8_4_;
        fVar22 = auVar26._12_4_;
        fVar17 = fVar17 * (3.0 - fVar29 * fVar29 * (fVar28 + fVar23)) * fVar29 * 0.5;
        fVar18 = fVar18 * (3.0 - fVar31 * fVar31 * (fVar23 + fVar28)) * fVar31 * 0.5;
        fVar33 = fVar33 * (3.0 - fVar36 * fVar36 * fVar19) * fVar36 * 0.5;
        fVar34 = fVar34 * (3.0 - fVar22 * fVar22 * fVar30) * fVar22 * 0.5;
      }
      else {
        acosf();
        fVar17 = (float)sinf();
        fVar22 = (float)sinf();
        fVar22 = fVar22 * (1.0 / fVar17);
        fVar19 = (float)sinf();
        fVar19 = fVar19 * (1.0 / fVar17);
        fVar17 = fVar22 * fVar18 + fVar19 * fVar28;
        fVar18 = fVar22 * fVar33 + fVar19 * fVar29;
        fVar33 = fVar22 * fVar34 + fVar19 * fVar31;
        fVar34 = fVar22 * fVar23 + fVar19 * fVar36;
      }
    }
    else {
      fStack_1a8 = fStack_198;
      fStack_1a4 = fStack_194;
      fStack_1a0 = fStack_190;
      fStack_19c = fStack_18c;
      fVar17 = fStack_198;
      fVar18 = fStack_194;
      fVar33 = fStack_190;
      fVar34 = fStack_18c;
    }
  }
  fVar31 = ((float)uStack_188 - (float)uStack_168) * fVar35 + (float)uStack_168;
  fVar29 = (uStack_188._4_4_ - uStack_168._4_4_) * fVar35 + uStack_168._4_4_;
  fVar28 = ((float)uStack_180 - (float)uStack_160) * fVar35 + (float)uStack_160;
  fVar23 = (uStack_180._4_4_ - uStack_160._4_4_) * fVar35 + uStack_160._4_4_;
LAB_18040e5b5:
  *param_2 = fVar17;
  param_2[1] = fVar18;
  param_2[2] = fVar33;
  param_2[3] = fVar34;
  param_2[4] = fVar31;
  param_2[5] = fVar29;
  param_2[6] = fVar28;
  param_2[7] = fVar23;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_1d8);
}





// 函数: void FUN_18040e640(uint64_t *param_1)
void FUN_18040e640(uint64_t *param_1)

{
  int aiStackX_8 [8];
  int8_t auStack_28 [32];
  
  aiStackX_8[0] =
       ((*(byte *)((longlong)param_1 + 0x12) + 1) * 3 + (uint)*(byte *)((longlong)param_1 + 0x13)) *
       (*(ushort *)(param_1 + 2) - 1);
  FUN_18040f060(param_1,*param_1,aiStackX_8,auStack_28,*(byte *)((longlong)param_1 + 0x12));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040e790(longlong *param_1,float param_2,int32_t *param_3)
void FUN_18040e790(longlong *param_1,float param_2,int32_t *param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  ushort uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  
  uVar3 = *(ushort *)(param_1 + 2);
  iVar14 = 0;
  if (uVar3 != 0) {
    pfVar8 = (float *)param_1[1];
    do {
      if (param_2 < *pfVar8) break;
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar8 + 1;
    } while (iVar14 < (int)(uint)uVar3);
  }
  uVar16 = uVar3 + 1;
  lVar9 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar16 * 4,4);
  lVar10 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar16 << 4,4);
  lVar13 = (longlong)iVar14;
  if (0 < iVar14) {
    lVar11 = 0;
    lVar15 = lVar13;
    do {
      uVar7 = ((uint64_t *)(lVar11 + *param_1))[1];
      *(uint64_t *)(lVar11 + lVar10) = *(uint64_t *)(lVar11 + *param_1);
      ((uint64_t *)(lVar11 + lVar10))[1] = uVar7;
      lVar15 = lVar15 + -1;
      lVar11 = lVar11 + 0x10;
    } while (lVar15 != 0);
  }
  if (iVar14 < (int)(uint)*(ushort *)(param_1 + 2)) {
    lVar11 = lVar13 << 4;
    iVar12 = iVar14;
    do {
      iVar12 = iVar12 + 1;
      uVar7 = ((uint64_t *)(lVar11 + *param_1))[1];
      puVar1 = (uint64_t *)(lVar10 + lVar11 + 0x10);
      *puVar1 = *(uint64_t *)(lVar11 + *param_1);
      puVar1[1] = uVar7;
      lVar11 = lVar11 + 0x10;
    } while (iVar12 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar2 = (int32_t *)(lVar10 + lVar13 * 0x10);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (0 < iVar14) {
                    // WARNING: Subroutine does not return
    memcpy(lVar9,param_1[1],lVar13 * 4);
  }
  if (iVar14 < (int)(uint)*(ushort *)(param_1 + 2)) {
                    // WARNING: Subroutine does not return
    memcpy(lVar9 + (longlong)(iVar14 + 1) * 4,param_1[1] + lVar13 * 4,
           (longlong)(int)((uint)*(ushort *)(param_1 + 2) - iVar14) << 2);
  }
  *(float *)(lVar9 + lVar13 * 4) = param_2;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar10;
  param_1[1] = lVar9;
  *(short *)(param_1 + 2) = (short)uVar16;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040e930(longlong *param_1,float param_2,int32_t *param_3)
void FUN_18040e930(longlong *param_1,float param_2,int32_t *param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  ushort uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  
  uVar3 = *(ushort *)(param_1 + 2);
  iVar14 = 0;
  if (uVar3 != 0) {
    pfVar8 = (float *)param_1[1];
    do {
      if (param_2 < *pfVar8) break;
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar8 + 1;
    } while (iVar14 < (int)(uint)uVar3);
  }
  uVar16 = uVar3 + 1;
  lVar9 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar16 * 4,4);
  lVar10 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar16 << 4,4);
  lVar13 = (longlong)iVar14;
  if (0 < iVar14) {
    lVar11 = 0;
    lVar15 = lVar13;
    do {
      uVar7 = ((uint64_t *)(lVar11 + *param_1))[1];
      *(uint64_t *)(lVar11 + lVar10) = *(uint64_t *)(lVar11 + *param_1);
      ((uint64_t *)(lVar11 + lVar10))[1] = uVar7;
      lVar15 = lVar15 + -1;
      lVar11 = lVar11 + 0x10;
    } while (lVar15 != 0);
  }
  if (iVar14 < (int)(uint)*(ushort *)(param_1 + 2)) {
    lVar11 = lVar13 << 4;
    iVar12 = iVar14;
    do {
      iVar12 = iVar12 + 1;
      uVar7 = ((uint64_t *)(lVar11 + *param_1))[1];
      puVar1 = (uint64_t *)(lVar10 + lVar11 + 0x10);
      *puVar1 = *(uint64_t *)(lVar11 + *param_1);
      puVar1[1] = uVar7;
      lVar11 = lVar11 + 0x10;
    } while (iVar12 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar2 = (int32_t *)(lVar10 + lVar13 * 0x10);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (0 < iVar14) {
                    // WARNING: Subroutine does not return
    memcpy(lVar9,param_1[1],lVar13 * 4);
  }
  if (iVar14 < (int)(uint)*(ushort *)(param_1 + 2)) {
                    // WARNING: Subroutine does not return
    memcpy(lVar9 + (longlong)(iVar14 + 1) * 4,param_1[1] + lVar13 * 4,
           (longlong)(int)((uint)*(ushort *)(param_1 + 2) - iVar14) << 2);
  }
  *(float *)(lVar9 + lVar13 * 4) = param_2;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar10;
  param_1[1] = lVar9;
  *(short *)(param_1 + 2) = (short)uVar16;
  return;
}





// 函数: void FUN_18040eab0(longlong *param_1,int param_2,longlong param_3,longlong param_4)
void FUN_18040eab0(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int aiStackX_10 [2];
  
  aiStackX_10[0] =
       ((*(byte *)((longlong)param_1 + 0x12) + 1) * 3 + (uint)*(byte *)((longlong)param_1 + 0x13)) *
       param_2;
  FUN_18040f060(param_1,*param_1,aiStackX_10,param_3,*(byte *)((longlong)param_1 + 0x12));
  bVar1 = *(byte *)((longlong)param_1 + 0x13);
  uVar3 = aiStackX_10[0] >> 0x1f & 0xf;
  iVar2 = aiStackX_10[0] + uVar3;
  *(float *)(param_3 + 0x10) =
       (float)(ushort)((ushort)(*(uint *)(*param_1 + (longlong)(iVar2 >> 4) * 2) >>
                               (((byte)iVar2 & 0xf) - (char)uVar3 & 0x1f)) &
                      (1 << (bVar1 & 0x1f)) - 1U);
  aiStackX_10[0] = aiStackX_10[0] + (uint)bVar1;
  FUN_18040f060(param_1,*param_1,aiStackX_10,param_4,*(int8_t *)((longlong)param_1 + 0x12));
  uVar3 = aiStackX_10[0] >> 0x1f & 0xf;
  aiStackX_10[0] = aiStackX_10[0] + uVar3;
  *(float *)(param_4 + 0x10) =
       (float)(ushort)((ushort)(*(uint *)(*param_1 + (longlong)(aiStackX_10[0] >> 4) * 2) >>
                               (((byte)aiStackX_10[0] & 0xf) - (char)uVar3 & 0x1f)) &
                      (1 << (*(byte *)((longlong)param_1 + 0x13) & 0x1f)) - 1U);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



