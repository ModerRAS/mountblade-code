#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part023.c - 7 个函数

// 函数: void FUN_1806673f0(void)
void FUN_1806673f0(void)

{
  uint in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  FUN_1808fd400(in_stack_00000070 ^ 0x80000000);
}





// 函数: void FUN_1806677e7(void)
void FUN_1806677e7(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(longlong *)(unaff_RBP + 0x18) = unaff_RSI;
  lVar1 = unaff_RBP + -0x28;
  do {
    func_0x00018005d390(lVar1);
    lVar1 = lVar1 + 8;
    unaff_RSI = unaff_RSI + -1;
  } while (unaff_RSI != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}





// 函数: void FUN_1806687d4(void)
void FUN_1806687d4(void)

{
  return;
}



uint64_t FUN_180669700(longlong param_1,uint64_t param_2)

{
  FUN_18065f210(*(uint64_t *)(param_1 + 0x1258));
  return param_2;
}



uint64_t *
FUN_1806699e0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180669a20(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
void FUN_180669a20(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
                  char param_5,int8_t param_6,char param_7,float param_8,char param_9,
                  float param_10)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auStack_248 [32];
  int32_t uStack_228;
  int8_t uStack_220;
  char cStack_218;
  char cStack_217;
  char cStack_216;
  int8_t uStack_215;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  longlong lStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  uint64_t uStack_1b0;
  int8_t auStack_1a8 [16];
  uint64_t uStack_198;
  int32_t uStack_190;
  int8_t auStack_188 [16];
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  float fStack_158;
  int8_t uStack_154;
  uint64_t uStack_150;
  int8_t auStack_148 [16];
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  float fStack_118;
  int8_t uStack_114;
  uint64_t uStack_110;
  uint64_t uStack_108;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  ulonglong uStack_f0;
  ulonglong uVar8;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_f0 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  uStack_215 = param_6;
  cStack_218 = param_7;
  lVar1 = *(longlong *)(param_3 + 0x10);
  lStack_1d0 = *(longlong *)(lVar1 + 0x20);
  if ((lStack_1d0 == 0) || (*(char *)(lStack_1d0 + 0x2900) != '\0')) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  lVar2 = *(longlong *)(param_3 + 0x208);
  uStack_1b0 = param_4;
  if (((param_5 < '\x01') || (param_8 <= 0.0)) || (!bVar12)) {
    fVar14 = *(float *)(param_3 + 0x38);
    fVar20 = fVar14;
    if (0.0 < *(float *)(param_1 + 0x24)) {
      fVar20 = fVar14 / *(float *)(param_1 + 0x24);
    }
    fVar22 = -*(float *)(param_1 + 8);
    fVar13 = -fVar20;
    if ((-fVar20 <= fVar22) && (fVar13 = fVar22, fVar20 <= fVar22)) {
      fVar13 = fVar20;
    }
    fVar13 = fVar13 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 8) = fVar13;
    fVar22 = -*(float *)(param_1 + 0x14);
    fVar20 = fVar14 * -2.0;
    if ((fVar14 * -2.0 <= fVar22) && (fVar20 = fVar14 + fVar14, fVar22 <= fVar14 + fVar14)) {
      fVar20 = fVar22;
    }
    fVar20 = fVar20 + *(float *)(param_1 + 0x14);
    *(int32_t *)(param_1 + 0xc) = 0;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x38);
    fVar20 = *(float *)(lVar1 + 0x88) * fVar14 + *(float *)(lVar1 + 0xa8);
    fStack_1f4 = *(float *)(lVar1 + 0x84) * fVar14 + *(float *)(lVar1 + 0xa4);
    fStack_1f8 = *(float *)(lVar1 + 0x80) * fVar14 + *(float *)(lVar1 + 0xa0);
    uStack_1ec = 0x7f7fffff;
    fVar14 = *(float *)(param_1 + 0x3c);
    fStack_1e0 = fVar14 * *(float *)(lVar1 + 0x88) + *(float *)(lVar1 + 0xa8);
    fStack_1e4 = fVar14 * *(float *)(lVar1 + 0x84) + *(float *)(lVar1 + 0xa4);
    fStack_1e8 = fVar14 * *(float *)(lVar1 + 0x80) + *(float *)(lVar1 + 0xa0);
    uStack_1dc = 0x7f7fffff;
    fVar14 = *(float *)(param_3 + 0x38);
    fVar13 = *(float *)(param_1 + 0x20) - fVar14;
    *(float *)(param_1 + 0x20) = fVar13;
    uVar6 = 0;
    if (fVar13 < 0.0) {
      *(float *)(param_1 + 0x20) = (1.0 - param_10) * 0.3;
      uStack_154 = 0;
      uStack_178 = 0;
      uStack_170 = 0x7f7fffff3f800000;
      fStack_158 = 0.0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_220 = 0;
      uStack_228 = 0x51b189;
      fStack_1f0 = fVar20;
      FUN_1801aa0f0(lStack_1d0,&fStack_1f8,param_3,auStack_188);
      fVar20 = fStack_1f0;
      *(float *)(param_1 + 0x28) = fStack_158 - fStack_1f0;
      fVar13 = ABS(fStack_158 - fStack_1f0);
      if (*(float *)(param_1 + 0x24) <= fVar13 && fVar13 != *(float *)(param_1 + 0x24)) {
        *(int32_t *)(param_1 + 0x28) = 0;
      }
      uStack_220 = 0;
      uStack_228 = 0x51b189;
      FUN_1801aa0f0();
      *(float *)(param_1 + 0x30) = fStack_158 - fStack_1e0;
      fVar13 = ABS(fStack_158 - fStack_1e0);
      if (*(float *)(param_1 + 0x24) <= fVar13 && fVar13 != *(float *)(param_1 + 0x24)) {
        *(int32_t *)(param_1 + 0x30) = 0;
      }
    }
    fStack_1f0 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x2c);
    fVar23 = fVar14 + fVar14;
    fVar22 = fVar14 * 6.0;
    if (fVar23 <= ABS(fStack_1f0)) {
      fVar13 = fVar22;
      if (1.0 <= fVar22) {
        fVar13 = 1.0;
      }
      fStack_1f0 = fStack_1f0 * (1.0 - fVar13);
    }
    else {
      fStack_1f0 = 0.0;
    }
    fStack_1f0 = *(float *)(param_1 + 0x28) - fStack_1f0;
    *(float *)(param_1 + 0x2c) = fStack_1f0;
    fVar13 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x34);
    if (fVar23 <= ABS(fVar13)) {
      fVar16 = fVar22;
      if (1.0 <= fVar22) {
        fVar16 = 1.0;
      }
      fVar13 = fVar13 * (1.0 - fVar16);
    }
    else {
      fVar13 = 0.0;
    }
    fVar13 = *(float *)(param_1 + 0x30) - fVar13;
    *(float *)(param_1 + 0x34) = fVar13;
    fStack_1f0 = fVar20 + fStack_1f0;
    fStack_1e0 = fStack_1e0 + fVar13;
    fVar20 = fStack_1f0 - fStack_1e0;
    fStack_1d8 = fStack_1f4 - fStack_1e4;
    fStack_1d4 = fStack_1f8 - fStack_1e8;
    fVar13 = fStack_1d4 * fStack_1d4 + fStack_1d8 * fStack_1d8;
    fStack_1b8 = fVar20 / SQRT(fVar20 * fVar20 + fVar13);
    if (param_9 != '\0') {
      fVar18 = -(fStack_1d4 * fVar20);
      fVar17 = -(fStack_1d8 * fVar20);
      fVar20 = fVar13 * fVar13 + fVar17 * fVar17 + fVar18 * fVar18;
      auVar15 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
      fVar16 = auVar15._0_4_;
      fVar19 = fVar16 * 0.5 * (3.0 - fVar20 * fVar16 * fVar16);
      fVar18 = fVar19 * fVar18;
      fVar17 = fVar19 * fVar17;
      fVar19 = fVar19 * fVar13;
      auStack_1a8 = ZEXT416(0);
      uStack_198 = 0;
      uStack_190 = 3;
      FUN_1802e9180(*(uint64_t *)(param_3 + 0x10),auStack_1a8,1,0xffffffff);
      uVar11 = (longlong)(auStack_1a8._8_8_ - auStack_1a8._0_8_) >> 3;
      lVar10 = *(longlong *)(param_3 + 0x10);
      fVar20 = *(float *)(lVar10 + 0xa8);
      fVar13 = *(float *)(lVar10 + 0xa4);
      fVar16 = *(float *)(lVar10 + 0xa0);
      uStack_1fc = 0x7f7fffff;
      uVar8 = uVar6;
      if (uVar11 != 0) {
        do {
          lVar10 = *(longlong *)(auStack_1a8._0_8_ + uVar6);
          *(float *)(lVar10 + 200) = fVar18 * 0.15 + fVar16;
          *(float *)(lVar10 + 0xcc) = fVar17 * 0.15 + fVar13;
          *(float *)(lVar10 + 0xd0) = fVar19 * 0.15 + fVar20;
          *(int32_t *)(lVar10 + 0xd4) = 0x7f7fffff;
          *(float *)(lVar10 + 0xd8) = fVar18;
          *(float *)(lVar10 + 0xdc) = fVar17;
          *(float *)(lVar10 + 0xe0) = fVar19;
          *(int32_t *)(lVar10 + 0xe4) = 0x7f7fffff;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar6 = uVar6 + 8;
        } while ((ulonglong)(longlong)(int)uVar7 < uVar11);
      }
      fStack_208 = fVar18;
      fStack_204 = fVar17;
      fStack_200 = fVar19;
      if (auStack_1a8._0_8_ != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    fVar17 = fStack_1b8;
    fVar16 = fStack_1d4;
    fVar20 = fStack_1d8;
    fVar19 = SQRT(*(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x70) +
                  *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x74) +
                  *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x78));
    fVar13 = (float)asinf();
    fVar18 = -(fVar13 * param_8);
    fVar13 = -0.6;
    if ((-0.6 <= fVar18) && (fVar13 = fVar18, 0.6 <= fVar18)) {
      fVar13 = 0.6;
    }
    *(float *)(param_1 + 8) = fVar13;
    fVar17 = fVar19 * fVar17;
    *(float *)(param_1 + 0xc) =
         (((*(float *)(param_1 + 0x34) - fVar17 * *(float *)(param_1 + 0x3c)) +
          (*(float *)(param_1 + 0x2c) - fVar17 * *(float *)(param_1 + 0x38))) * 0.5 * param_8) /
         fVar19;
    if (param_7 < '\0') {
      fVar22 = -*(float *)(param_1 + 0x14);
      fVar20 = fVar14 * -2.0;
      if ((fVar14 * -2.0 <= fVar22) && (fVar20 = fVar22, fVar23 <= fVar22)) {
        fVar20 = fVar23;
      }
      fVar20 = fVar20 + *(float *)(param_1 + 0x14);
    }
    else {
      lVar10 = (longlong)param_7 * 0x1b0;
      lVar2 = *(longlong *)(lVar2 + 0x140);
      puVar9 = (uint *)((longlong)param_7 * 0x100 + *(longlong *)(param_3 + 0x18));
      do {
        LOCK();
        bVar12 = (*puVar9 & 1) != 0;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while (bVar12);
      uStack_110 = *(uint64_t *)(puVar9 + 1);
      uStack_108 = *(uint64_t *)(puVar9 + 3);
      fStack_100 = (float)puVar9[5];
      fStack_fc = (float)puVar9[6];
      uStack_f8 = puVar9[7];
      uStack_f4 = puVar9[8];
      *puVar9 = 0;
      fVar14 = *(float *)(lVar10 + 0x34 + lVar2);
      fVar13 = *(float *)(lVar10 + 0x30 + lVar2);
      fVar23 = *(float *)(lVar10 + 0x38 + lVar2);
      fVar23 = fVar23 * fVar23;
      if ((fStack_100 - fVar13) * (fStack_100 - fVar13) +
          (fStack_fc - fVar14) * (fStack_fc - fVar14) < fVar23 * 0.25) {
        fVar14 = 0.0;
      }
      else {
        fVar17 = fStack_100 * fStack_100 + fStack_fc * fStack_fc;
        auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar18 = auVar15._0_4_;
        fVar17 = fVar18 * 0.5 * (3.0 - fVar17 * fVar18 * fVar18);
        fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar23);
        fVar13 = fStack_100 * fVar17 * fVar14;
        fVar14 = fStack_fc * fVar17 * fVar14;
        fStack_1c8 = *(float *)(lVar1 + 0x80) * fVar14 + *(float *)(lVar1 + 0x70) * fVar13 +
                     *(float *)(lVar1 + 0x90) * 0.0 + *(float *)(lVar1 + 0xa0);
        fStack_1c4 = *(float *)(lVar1 + 0x84) * fVar14 + *(float *)(lVar1 + 0x74) * fVar13 +
                     *(float *)(lVar1 + 0x94) * 0.0 + *(float *)(lVar1 + 0xa4);
        fStack_1c0 = *(float *)(lVar1 + 0x88) * fVar14 + *(float *)(lVar1 + 0x78) * fVar13 +
                     *(float *)(lVar1 + 0x98) * 0.0 + *(float *)(lVar1 + 0xa8);
        fStack_1bc = *(float *)(lVar1 + 0x8c) * fVar14 + *(float *)(lVar1 + 0x7c) * fVar13 +
                     *(float *)(lVar1 + 0x9c) * 0.0 + *(float *)(lVar1 + 0xac);
        uStack_138 = 0;
        uStack_130 = 0x7f7fffff3f800000;
        fStack_118 = 0.0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_228 = 0x51b189;
        uStack_220 = bVar12;
        uStack_114 = bVar12;
        FUN_1801aa0f0(lStack_1d0,&fStack_1c8,lVar10,auStack_148);
        fStack_200 = fStack_1f0 - fStack_1e0;
        uStack_1fc = 0x7f7fffff;
        fVar13 = fVar20 * fVar20 + fVar16 * fVar16 + fStack_200 * fStack_200;
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar15._0_4_;
        fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
        fVar19 = fVar13 * fVar16;
        fVar18 = fVar13 * fVar20;
        fVar17 = (fStack_1e8 + fStack_1f8) * 0.5 - fStack_1c8;
        fVar23 = (fStack_1e4 + fStack_1f4) * 0.5 - fStack_1c4;
        fVar21 = (fStack_1e0 + fStack_1f0) * 0.5 - fStack_118;
        fVar14 = fVar18 * fVar23 + fVar19 * fVar17 + fVar21 * fVar13 * fStack_200;
        fVar17 = fVar17 - fVar14 * fVar19;
        fVar23 = fVar23 - fVar14 * fVar18;
        fVar21 = fVar21 - fVar14 * fVar13 * fStack_200;
        fVar14 = fVar23 * fVar23 + fVar17 * fVar17 + fVar21 * fVar21;
        auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar13 = auVar15._0_4_;
        fVar13 = fVar13 * 0.5 * ((float)system_data_01f0 - fVar14 * fVar13 * fVar13);
        fStack_208 = fVar16;
        fStack_204 = fVar20;
        fVar14 = (float)asinf();
        iVar4 = -1;
        if (fVar17 * fVar13 * fVar18 - fVar23 * fVar13 * fVar19 < 0.0) {
          iVar4 = 1;
        }
        param_8 = fVar14 * (float)iVar4 * param_8;
        fVar14 = -1.0471976;
        if ((-1.0471976 <= param_8) && (fVar14 = param_8, 1.0471976 <= param_8)) {
          fVar14 = 1.0471976;
        }
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      fVar20 = (fVar14 - *(float *)(param_1 + 0x14)) * fVar22 + *(float *)(param_1 + 0x14);
      fVar13 = *(float *)(param_1 + 8);
    }
  }
  *(float *)(param_1 + 0x14) = fVar20;
  if ((fVar13 < -0.0001) || (0.0001 <= fVar13)) {
    cStack_217 = '\x01';
  }
  else {
    cStack_217 = '\0';
  }
  if ((*(float *)(param_1 + 0x10) < -0.0001) || (0.0001 <= *(float *)(param_1 + 0x10))) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if ((fVar20 < -0.0001) || (0.0001 <= fVar20)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(float *)(param_1 + 0x18) < -0.0001) || (0.0001 <= *(float *)(param_1 + 0x18))) {
    cStack_216 = '\x01';
  }
  else {
    cStack_216 = '\0';
  }
  fVar14 = *(float *)(param_1 + 0xc);
  if ((fVar14 < -0.0001) || (0.0001 <= fVar14)) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  if ((((cStack_217 != '\0') || (bVar12)) || (cStack_216 != '\0')) || (bVar3)) {
    if (cVar5 == '\0') goto LAB_18066a567;
  }
  else if (cVar5 == '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_f0 ^ (ulonglong)auStack_248);
  }
  fStack_1c8 = *(float *)(param_2 + 0x1020);
  fStack_1c4 = *(float *)(param_2 + 0x1024);
  fStack_1bc = *(float *)(param_2 + 0x102c);
  fStack_1c0 = *(float *)(param_2 + 0x1028) + fVar14;
  *(ulonglong *)(param_2 + 0x800) =
       *(ulonglong *)(param_2 + 0x800) | *(ulonglong *)(param_2 + 0x810);
  *(float *)(param_2 + 0x1020) = fStack_1c8;
  *(float *)(param_2 + 0x1024) = fStack_1c4;
  *(float *)(param_2 + 0x1028) = fStack_1c0;
  *(float *)(param_2 + 0x102c) = fStack_1bc;
LAB_18066a567:
                    // WARNING: Subroutine does not return
  FUN_1808fd400(cVar5,*(float *)(param_1 + 8) * -0.5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066ae20(longlong param_1,longlong param_2,float *param_3,float *param_4,char param_5,
void FUN_18066ae20(longlong param_1,longlong param_2,float *param_3,float *param_4,char param_5,
                  int32_t *param_6,byte param_7,int32_t param_8)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float afStackX_8 [2];
  longlong lStackX_10;
  uint64_t uVar7;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  char cStack_54;
  
  uVar7 = 0xfffffffffffffffe;
  lStackX_10 = param_1;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  fStack_a8 = *param_3;
  fStack_a4 = param_3[1];
  fStack_a0 = param_3[2];
  fStack_9c = param_3[3];
  fVar4 = param_3[2] + param_4[2];
  fVar6 = param_3[1] + param_4[1];
  fVar5 = *param_3 + *param_4;
  fStack_8c = 3.4028235e+38;
  fStack_98 = fVar5;
  fStack_94 = fVar6;
  if (param_2 != 0) {
    afStackX_8[0] = 0.0;
    if (*(longlong *)(param_2 + 0x2908) == 0) {
      FUN_1801a9fd0(param_2,&fStack_a8,0x31b189,afStackX_8);
      fStack_90 = afStackX_8[0] + 0.01;
      FUN_1801a9fd0(param_2,&fStack_98,0x31b189,afStackX_8);
      fVar4 = afStackX_8[0];
    }
    else {
      cStack_54 = '\0';
      uStack_78 = 0;
      uStack_70 = 0x7f7fffff3f800000;
      fStack_58 = 0.0;
      uStack_68 = 0;
      uStack_60 = 0;
      fStack_98 = fStack_a8;
      fStack_94 = fStack_a4;
      fStack_90 = fStack_a0;
      fStack_8c = fStack_9c;
      FUN_1801aa0f0(param_2,&fStack_98,0,&fStack_88,0,1,uVar7);
      if (cStack_54 == '\0') {
        fStack_58 = 0.0;
      }
      fStack_90 = fStack_58 + 0.01;
      cStack_54 = '\0';
      uStack_78 = 0;
      uStack_70 = 0x7f7fffff3f800000;
      fStack_58 = 0.0;
      uStack_68 = 0;
      uStack_60 = 0;
      fStack_8c = 3.4028235e+38;
      fStack_98 = fVar5;
      fStack_94 = fVar6;
      FUN_1801aa0f0(param_2,&fStack_98,0,&fStack_88,0,1,uVar7);
      fVar4 = 0.0;
      if (cStack_54 != '\0') {
        fVar4 = fStack_58;
      }
    }
    fVar4 = fVar4 + 0.01;
  }
  fStack_8c = 3.4028235e+38;
  fStack_88 = fStack_a8;
  fStack_84 = fStack_a4;
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  uStack_78 = CONCAT44(fVar6 - fStack_a4,fVar5 - fStack_a8);
  uStack_70 = CONCAT44(0x7f7fffff,fVar4 - fStack_a0);
  uStack_68 = CONCAT44(*param_6,*param_6);
  uStack_60 = CONCAT44(param_8,(float)_DAT_180c8ed30 * 1e-05);
  if (param_5 == '\0') {
    lVar3 = 0x98;
    if (param_7 != 0) {
      lVar3 = 0xb8;
    }
  }
  else {
    lVar3 = (ulonglong)param_7 * 0x20 + 0x58;
  }
  plVar1 = (longlong *)(lVar3 + param_1);
  if ((plVar1 != (longlong *)0x0) && ((ulonglong)((plVar1[1] - *plVar1) / 0x30) < 10000)) {
    FUN_180093bf0(plVar1,&fStack_88);
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066b100(ulonglong param_1,longlong param_2,float *param_3,uint64_t param_4,
void FUN_18066b100(ulonglong param_1,longlong param_2,float *param_3,uint64_t param_4,
                  float param_5,float param_6,float param_7,int32_t param_8,uint64_t param_9,
                  uint64_t param_10,int8_t param_11,char param_12)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t *puVar8;
  longlong lVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  uint64_t extraout_XMM0_Qb;
  int32_t uVar18;
  uint64_t extraout_XMM0_Qb_00;
  int32_t uVar19;
  int8_t auVar13 [16];
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
  int32_t uVar31;
  int32_t uVar32;
  int8_t auStack_3a8 [32];
  int32_t uStack_388;
  int32_t uStack_380;
  uint64_t uStack_378;
  float fStack_370;
  int32_t uStack_36c;
  uint64_t uStack_368;
  uint64_t uStack_360;
  int8_t auStack_358 [16];
  uint64_t uStack_348;
  uint64_t uStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  float fStack_328;
  char cStack_324;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  ulonglong uStack_2f0;
  float afStack_2e8 [2];
  uint64_t uStack_2e0;
  ulonglong uStack_e8;
  
  uStack_2f8 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_3a8;
  uStack_378 = param_1;
  uStack_2f0 = param_1;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (system_data_913c == '\0') {
      iVar2 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      puVar8 = (int32_t *)0x180d4a0c0;
      lVar6 = 0;
      uVar31 = 0;
      uVar32 = 0;
      do {
        uVar12 = thunk_FUN_1808fd8e0();
        uVar10 = (int32_t)uVar12;
        uVar14 = (int32_t)((ulonglong)uVar12 >> 0x20);
        uVar16 = (int32_t)extraout_XMM0_Qb;
        uVar18 = (int32_t)((ulonglong)extraout_XMM0_Qb >> 0x20);
        uVar12 = thunk_FUN_1808fe1a0();
        uVar11 = (int32_t)uVar12;
        puVar8[-8] = uVar10;
        puVar8[-4] = uVar14;
        *puVar8 = uVar16;
        puVar8[4] = uVar18;
        puVar8[-7] = uVar11;
        uVar15 = (int32_t)((ulonglong)uVar12 >> 0x20);
        uVar17 = (int32_t)extraout_XMM0_Qb_00;
        uVar19 = (int32_t)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        puVar8[-3] = uVar15;
        puVar8[1] = uVar17;
        puVar8[5] = uVar19;
        puVar8[-6] = 0;
        puVar8[-2] = 0;
        puVar8[2] = 0;
        puVar8[6] = uVar32;
        *(int32_t *)(lVar6 + 0x180d4a2a0) = 0;
        *(int32_t *)(lVar6 + 0x180d4a2b0) = 0;
        *(int32_t *)(lVar6 + 0x180d4a2c0) = uVar31;
        *(int32_t *)(lVar6 + 0x180d4a2d0) = (int32_t)uStack_318;
        *(int32_t *)(lVar6 + 0x180d4a2a4) = uVar11;
        *(int32_t *)(lVar6 + 0x180d4a2b4) = uVar15;
        *(int32_t *)(lVar6 + 0x180d4a2c4) = uVar17;
        *(int32_t *)(lVar6 + 0x180d4a2d4) = uVar19;
        *(int32_t *)(lVar6 + 0x180d4a2a8) = uVar10;
        *(int32_t *)(lVar6 + 0x180d4a2b8) = uVar14;
        *(int32_t *)(lVar6 + 0x180d4a2c8) = uVar16;
        *(int32_t *)(lVar6 + 0x180d4a2d8) = uVar18;
        *(int32_t *)(lVar6 + 0x180d4a4a0) = uVar10;
        *(int32_t *)(lVar6 + 0x180d4a4b0) = uVar14;
        *(int32_t *)(lVar6 + 0x180d4a4c0) = uVar16;
        *(int32_t *)(lVar6 + 0x180d4a4d0) = uVar18;
        *(int32_t *)(lVar6 + 0x180d4a4a4) = 0;
        *(int32_t *)(lVar6 + 0x180d4a4b4) = 0;
        *(int32_t *)(lVar6 + 0x180d4a4c4) = (int32_t)uStack_308;
        *(int32_t *)(lVar6 + 0x180d4a4d4) = (int32_t)uStack_318;
        *(int32_t *)(lVar6 + 0x180d4a4a8) = uVar11;
        *(int32_t *)(lVar6 + 0x180d4a4b8) = uVar15;
        *(int32_t *)(lVar6 + 0x180d4a4c8) = uVar17;
        *(int32_t *)(lVar6 + 0x180d4a4d8) = uVar19;
        iVar2 = iVar2 + 4;
        lVar6 = lVar6 + 0x40;
        puVar8 = puVar8 + 0x10;
        uVar31 = (int32_t)uStack_308;
        uVar32 = (int32_t)uStack_368;
      } while (iVar2 < 0x20);


// 函数: void FUN_18066ba00(longlong *param_1,longlong *param_2)
void FUN_18066ba00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)param_1[1];
  plVar7 = param_1;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)*param_1;
  }
  else {
    plVar1 = (longlong *)*param_1;
    plVar6 = plVar4;
    if (plVar1 != (longlong *)0x0) {
      for (plVar7 = (longlong *)plVar1[1]; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]
          ) {
        plVar1 = plVar7;
      }
      plVar6 = (longlong *)*plVar1;
      plVar7 = plVar1;
      if (plVar1 != param_1) {
        plVar4[2] = (longlong)plVar1;
        plVar1[1] = param_1[1];
        plVar4 = plVar1;
        if (plVar1 != (longlong *)*param_1) {
          plVar4 = (longlong *)plVar1[2];
          if (plVar6 != (longlong *)0x0) {
            plVar6[2] = (longlong)plVar4;
          }
          plVar4[1] = (longlong)plVar6;
          *plVar1 = *param_1;
          *(longlong **)(*param_1 + 0x10) = plVar1;
        }
        if (param_1 == (longlong *)param_2[2]) {
          param_2[2] = (longlong)plVar1;
        }
        else {
          puVar2 = (uint64_t *)param_1[2];
          if (param_1 == (longlong *)puVar2[1]) {
            puVar2[1] = plVar1;
          }
          else {
            *puVar2 = plVar1;
          }
        }
        plVar1[2] = param_1[2];
        lVar3 = plVar1[3];
        *(char *)(plVar1 + 3) = (char)param_1[3];
        *(char *)(param_1 + 3) = (char)lVar3;
        goto LAB_18066bb69;
      }
    }
  }
  plVar4 = (longlong *)plVar7[2];
  if (plVar6 != (longlong *)0x0) {
    plVar6[2] = (longlong)plVar4;
  }
  if (param_1 == (longlong *)param_2[2]) {
    param_2[2] = (longlong)plVar6;
  }
  else {
    puVar2 = (uint64_t *)param_1[2];
    if (param_1 == (longlong *)puVar2[1]) {
      puVar2[1] = plVar6;
    }
    else {
      *puVar2 = plVar6;
    }
  }
  if (param_1 == (longlong *)param_2[1]) {
    if ((*param_1 == 0) || (plVar6 == (longlong *)0x0)) {
      param_2[1] = param_1[2];
    }
    else {
      plVar1 = (longlong *)plVar6[1];
      plVar7 = plVar6;
      while (plVar5 = plVar1, plVar5 != (longlong *)0x0) {
        plVar7 = plVar5;
        plVar1 = (longlong *)plVar5[1];
      }
      param_2[1] = (longlong)plVar7;
    }
  }
  if (param_1 == (longlong *)*param_2) {
    if ((param_1[1] == 0) || (plVar6 == (longlong *)0x0)) {
      *param_2 = param_1[2];
    }
    else {
      plVar1 = (longlong *)*plVar6;
      plVar7 = plVar6;
      while (plVar5 = plVar1, plVar5 != (longlong *)0x0) {
        plVar7 = plVar5;
        plVar1 = (longlong *)*plVar5;
      }
      *param_2 = (longlong)plVar7;
    }
  }
LAB_18066bb69:
  if ((char)param_1[3] == '\x01') {
    if (plVar6 != (longlong *)param_2[2]) {
      do {
        plVar7 = plVar4;
        if ((plVar6 != (longlong *)0x0) && ((char)plVar6[3] != '\x01')) break;
        plVar4 = (longlong *)plVar7[1];
        if (plVar6 == plVar4) {
          plVar4 = (longlong *)*plVar7;
          if ((char)plVar4[3] == '\0') {
            *(int8_t *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)*plVar7;
            *(int8_t *)(plVar7 + 3) = 0;
            plVar1 = (longlong *)param_2[2];
            *plVar7 = plVar4[1];
            if (plVar4[1] != 0) {
              *(longlong **)(plVar4[1] + 0x10) = plVar7;
            }
            plVar4[2] = plVar7[2];
            plVar5 = plVar4;
            if (plVar7 != plVar1) {
              puVar2 = (uint64_t *)plVar7[2];
              plVar5 = plVar1;
              if (plVar7 == (longlong *)puVar2[1]) {
                puVar2[1] = plVar4;
              }
              else {
                *puVar2 = plVar4;
              }
            }
            plVar4[1] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar4;
            param_2[2] = (longlong)plVar5;
            plVar4 = (longlong *)*plVar7;
          }
          lVar3 = plVar4[1];
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x18) != '\x01')) ||
             ((*plVar4 != 0 && (*(char *)(*plVar4 + 0x18) != '\x01')))) {
            if ((*plVar4 == 0) || (*(char *)(*plVar4 + 0x18) == '\x01')) {
              *(int8_t *)(lVar3 + 0x18) = 1;
              *(int8_t *)(plVar4 + 3) = 0;
              lVar3 = func_0x00018066c060(plVar4,param_2[2]);
              param_2[2] = lVar3;
              plVar4 = (longlong *)*plVar7;
            }
            *(char *)(plVar4 + 3) = (char)plVar7[3];
            *(int8_t *)(plVar7 + 3) = 1;
            if (*plVar4 != 0) {
              *(int8_t *)(*plVar4 + 0x18) = 1;
            }
            lVar3 = func_0x00018066c000(plVar7,param_2[2]);
LAB_18066bd4e:
            param_2[2] = lVar3;
            break;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(int8_t *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)plVar7[1];
            *(int8_t *)(plVar7 + 3) = 0;
            plVar1 = (longlong *)param_2[2];
            plVar7[1] = *plVar4;
            if (*plVar4 != 0) {
              *(longlong **)(*plVar4 + 0x10) = plVar7;
            }
            plVar4[2] = plVar7[2];
            plVar5 = plVar4;
            if (plVar7 != plVar1) {
              puVar2 = (uint64_t *)plVar7[2];
              plVar5 = plVar1;
              if (plVar7 == (longlong *)*puVar2) {
                *puVar2 = plVar4;
              }
              else {
                puVar2[1] = plVar4;
              }
            }
            *plVar4 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar4;
            param_2[2] = (longlong)plVar5;
            plVar4 = (longlong *)plVar7[1];
          }
          lVar3 = *plVar4;
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x18) != '\x01')) ||
             ((plVar4[1] != 0 && (*(char *)(plVar4[1] + 0x18) != '\x01')))) {
            if ((plVar4[1] == 0) || (*(char *)(plVar4[1] + 0x18) == '\x01')) {
              *(int8_t *)(lVar3 + 0x18) = 1;
              *(int8_t *)(plVar4 + 3) = 0;
              lVar3 = func_0x00018066c000(plVar4,param_2[2]);
              param_2[2] = lVar3;
              plVar4 = (longlong *)plVar7[1];
            }
            *(char *)(plVar4 + 3) = (char)plVar7[3];
            *(int8_t *)(plVar7 + 3) = 1;
            if (plVar4[1] != 0) {
              *(int8_t *)(plVar4[1] + 0x18) = 1;
            }
            lVar3 = func_0x00018066c060(plVar7,param_2[2]);
            goto LAB_18066bd4e;
          }
        }
        *(int8_t *)(plVar4 + 3) = 0;
        plVar4 = (longlong *)plVar7[2];
        plVar6 = plVar7;
      } while (plVar7 != (longlong *)param_2[2]);
    }
    if (plVar6 != (longlong *)0x0) {
      *(int8_t *)(plVar6 + 3) = 1;
    }
  }
  return;
}





