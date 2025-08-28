#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part565_sub002_sub002.c - 1 个函数

// 函数: void FUN_180579974(void)
void FUN_180579974(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int32_t unaff_R15D;
  int32_t uVar1;
  float unaff_XMM7_Da;
  
  uVar1 = *(int32_t *)(unaff_RBX + 0xa608);
  *(int32_t *)(unaff_RBX + 0xa608) = uVar1;
  *(int32_t *)(unaff_RBX + 0xa604) = unaff_R15D;
  if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa) & 0x1000) == 0) {
    uVar1 = *(int32_t *)(unaff_RBX + 43000);
    *(int32_t *)(unaff_RBX + 43000) = uVar1;
    *(int32_t *)(unaff_RBX + 0xa7f4) = unaff_R15D;
  }
  if ((*(float *)(unaff_RBX + 0xa600) <= unaff_XMM7_Da) &&
     (unaff_XMM7_Da == *(float *)(unaff_RBX + 0xa604))) {
    uVar1 = FUN_180516e40(uVar1,0xc7d5);
  }
  if ((*(float *)(unaff_RBX + 0xa7f0) <= unaff_XMM7_Da) &&
     (unaff_XMM7_Da == *(float *)(unaff_RBX + 0xa7f4))) {
    FUN_180516e40(uVar1,0x382a);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x110) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180579c90(uint64_t param_1,longlong param_2,float *param_3,char param_4,int param_5,
                 float *param_6,float *param_7,float *param_8,longlong param_9,int8_t *param_10,
                 float *param_11)

{
  float *pfVar1;
  int8_t uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int8_t auVar14 [16];
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStackX_20;
  float fStack_e8;
  float fStack_e4;
  int32_t uStack_e0;
  float fStack_dc;
  
  lVar10 = 0;
  uVar15 = 0x3f000000;
  uVar16 = 0x3f000000;
  uVar17 = 0x3f000000;
  fVar22 = *(float *)(param_2 + 0x20);
  fVar24 = param_7[1] - param_3[1];
  fVar25 = *param_7 - *param_3;
  fVar19 = fVar24 * fVar24 + fVar25 * fVar25;
  fVar19 = fVar19 + (float)(fVar19 <= 1.1754944e-38) * 1.1754944e-38;
  auVar18 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
  fVar23 = auVar18._0_4_;
  fVar23 = fVar23 * 0.5 * (3.0 - fVar19 * fVar23 * fVar23);
  fVar19 = fVar23 * fVar19;
  if ((param_4 != '\0') && (fVar19 <= fVar22 + fVar22)) {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    fVar19 = fVar22 + fVar22;
  }
  auVar18._4_4_ = uVar15;
  auVar18._0_4_ = fVar19;
  auVar18._8_4_ = uVar16;
  auVar18._12_4_ = uVar17;
  fVar22 = fVar22 * 0.33333334 + 0.00033333336;
  auVar14._4_12_ = auVar18._4_12_;
  auVar14._0_4_ = fVar19 / (fVar22 - 0.001);
  if ((float)(param_5 + -1) < auVar14._0_4_) {
    fVar22 = fVar19 / (float)(param_5 + -1) + 0.001;
  }
  cVar3 = *(char *)(param_6 + 0xd);
  if ((cVar3 == '\0') ||
     (fVar20 = param_3[1] - param_6[1], fVar21 = *param_3 - *param_6,
     0.0004 < fVar20 * fVar20 + fVar21 * fVar21)) {
    FUN_1801aa0f0(auVar14._0_8_,param_3,param_3,param_6,0x51b189,1);
    cVar3 = *(char *)(param_6 + 0xd);
  }
  if (cVar3 == '\0') {
    *param_8 = -10000.0;
  }
  else {
    *param_8 = param_6[0xc];
    uVar5 = 0;
    if (*(char *)(param_6 + 0xd) == '\x02') {
      uVar5 = *(uint *)(*(longlong *)(param_6 + 8) + 0x18);
    }
    if (((uVar5 >> 0xb & 1) != 0) && (0.95 < param_6[6])) {
      uVar2 = 1;
      goto LAB_180579e93;
    }
  }
  uVar2 = 0;
LAB_180579e93:
  iStackX_20 = 1;
  *param_10 = uVar2;
  *param_11 = 0.0;
  fVar20 = *(float *)(param_2 + 0x3c);
  fVar21 = 0.0;
  if (0.0 < fVar19) {
    param_6 = param_6 + 0x16;
    lVar6 = (longlong)param_11 - (longlong)param_8;
    lVar11 = lVar10;
    pfVar7 = param_8;
    do {
      pfVar7 = pfVar7 + 1;
      param_10 = param_10 + 1;
      fVar21 = fVar21 + fVar22;
      fVar13 = fVar21;
      if (fVar19 <= fVar21) {
        param_7[2] = *(float *)(lVar11 + (longlong)param_8);
        cVar3 = *(char *)(param_6 + 5);
        if ((cVar3 == '\0') ||
           (0.0004 < (param_7[1] - param_6[-7]) * (param_7[1] - param_6[-7]) +
                     (*param_7 - param_6[-8]) * (*param_7 - param_6[-8]))) {
          FUN_1801aa0f0(param_1,param_7);
          cVar3 = *(char *)(param_6 + 5);
        }
        fVar13 = fVar19;
        if ((cVar3 != '\0') && ((cVar3 != '\x01' || (render_system_config < param_6[-2])))) {
          fVar12 = fVar22 * 4.0;
          if (fVar22 * 4.0 <= fVar20) {
            fVar12 = fVar20;
          }
          if (ABS(param_6[4] - *(float *)(lVar11 + (longlong)param_8)) < fVar12) {
            param_7[2] = param_6[4];
          }
        }
      }
      *(float *)(lVar6 + (longlong)pfVar7) = fVar13;
      fStack_dc = param_3[3];
      fStack_e8 = fVar25 * fVar23 * *(float *)(lVar6 + (longlong)pfVar7) + *param_3;
      fStack_e4 = fVar24 * fVar23 * *(float *)(lVar6 + (longlong)pfVar7) + param_3[1];
      uStack_e0 = *(int32_t *)(lVar11 + (longlong)param_8);
      if ((*(char *)(param_6 + 5) == '\0') ||
         (0.0004 < (fStack_e4 - param_6[-7]) * (fStack_e4 - param_6[-7]) +
                   (fStack_e8 - param_6[-8]) * (fStack_e8 - param_6[-8]))) {
        FUN_1801aa0f0(param_1,&fStack_e8);
      }
      if (*(char *)(param_6 + 5) == '\0') {
        *pfVar7 = -10000.0;
        *param_10 = 0;
      }
      else {
        *pfVar7 = param_6[4];
        uVar5 = 0;
        if (*(char *)(param_6 + 5) == '\x02') {
          uVar5 = *(uint *)(*(longlong *)param_6 + 0x18);
        }
        if (((uVar5 >> 0xb & 1) == 0) || (param_6[-2] <= 0.95)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *param_10 = uVar2;
        fVar13 = fVar22 * 4.0;
        if (fVar22 * 4.0 <= fVar20) {
          fVar13 = fVar20;
        }
        if ((ABS(*pfVar7 - *(float *)(lVar11 + (longlong)param_8)) < fVar13) &&
           ((*(char *)(param_6 + 5) != '\x01' || (render_system_config < param_6[-2])))) {
          lVar11 = (longlong)pfVar7 - (longlong)param_8;
        }
      }
      param_6 = param_6 + 0xe;
      iStackX_20 = iStackX_20 + 1;
    } while (fVar21 < fVar19);
  }
  fVar22 = param_7[2];
  fVar23 = *param_8;
  if (0 < iStackX_20) {
    lVar6 = (longlong)param_8 - (longlong)param_11;
    pfVar7 = param_11;
    lVar11 = lVar10;
    do {
      pfVar1 = param_11 + lVar10;
      fVar24 = ((*pfVar7 - *pfVar1) * (fVar22 - fVar23)) / (fVar19 - *pfVar1) + fVar23;
      *(float *)((longlong)pfVar7 + (param_9 - (longlong)param_11)) = fVar24;
      if ((*pfVar7 <= fVar19 && fVar19 != *pfVar7) &&
         (fVar24 < *(float *)(lVar6 + (longlong)pfVar7))) {
        *(float *)((longlong)pfVar7 + (param_9 - (longlong)param_11)) =
             *(float *)(lVar6 + (longlong)pfVar7);
        if (lVar10 < lVar11) {
          if (3 < lVar11 - lVar10) {
            pfVar8 = (float *)(param_9 + 4 + lVar10 * 4);
            lVar9 = (longlong)param_11 - param_9;
            lVar4 = ((lVar11 - lVar10) - 4U >> 2) + 1;
            lVar10 = lVar10 + lVar4 * 4;
            do {
              pfVar8[-1] = ((*(float *)(lVar9 + -4 + (longlong)pfVar8) - *pfVar1) *
                           (*(float *)(lVar6 + (longlong)pfVar7) - fVar23)) / (*pfVar7 - *pfVar1) +
                           fVar23;
              *pfVar8 = ((*(float *)(lVar9 + (longlong)pfVar8) - *pfVar1) *
                        (*(float *)(lVar6 + (longlong)pfVar7) - fVar23)) / (*pfVar7 - *pfVar1) +
                        fVar23;
              pfVar8[1] = ((*(float *)(lVar9 + 4 + (longlong)pfVar8) - *pfVar1) *
                          (*(float *)(lVar6 + (longlong)pfVar7) - fVar23)) / (*pfVar7 - *pfVar1) +
                          fVar23;
              pfVar8[2] = ((*(float *)(lVar9 + 8 + (longlong)pfVar8) - *pfVar1) *
                          (*(float *)(lVar6 + (longlong)pfVar7) - fVar23)) / (*pfVar7 - *pfVar1) +
                          fVar23;
              pfVar8 = pfVar8 + 4;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          if (lVar10 < lVar11) {
            pfVar8 = (float *)(param_9 + lVar10 * 4);
            lVar10 = lVar11 - lVar10;
            do {
              *pfVar8 = ((*(float *)((longlong)pfVar8 + ((longlong)param_11 - param_9)) - *pfVar1) *
                        (*(float *)(lVar6 + (longlong)pfVar7) - fVar23)) / (*pfVar7 - *pfVar1) +
                        fVar23;
              pfVar8 = pfVar8 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        fVar23 = *(float *)(lVar6 + (longlong)pfVar7);
        lVar10 = lVar11;
      }
      lVar11 = lVar11 + 1;
      pfVar7 = pfVar7 + 1;
    } while (lVar11 < iStackX_20);
  }
  return iStackX_20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180579cdc(uint64_t param_1,longlong param_2,uint64_t param_3,char param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  float *pfVar1;
  longlong in_RAX;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *unaff_RBX;
  char cVar8;
  float fVar9;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar10;
  uint64_t in_R10;
  uint64_t unaff_R13;
  longlong lVar11;
  float fVar12;
  int8_t auVar13 [16];
  float in_XMM1_Da;
  int8_t auVar14 [16];
  float fVar15;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar16;
  int32_t unaff_XMM7_Da;
  float fVar17;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float fVar18;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fVar19;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  uint64_t in_stack_00000120;
  float *in_stack_00000130;
  int iStack0000000000000138;
  int in_stack_00000140;
  float *in_stack_00000148;
  float *in_stack_00000150;
  float fStack0000000000000158;
  longlong in_stack_00000160;
  char *in_stack_00000168;
  float *in_stack_00000170;
  
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  fVar17 = *(float *)(param_2 + 0x20);
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  fStack0000000000000158 = in_stack_00000150[1];
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM10_Dd;
  fStack0000000000000158 = fStack0000000000000158 - in_XMM5_Da;
  fVar9 = (float)unaff_RSI;
  fVar19 = *in_stack_00000150 - unaff_XMM6_Da;
  fVar15 = fStack0000000000000158 * fStack0000000000000158 + fVar19 * fVar19;
  fVar15 = fVar15 + (float)(int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),fVar15 <= in_XMM1_Da) *
                    in_XMM1_Da;
  auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
  fVar18 = auVar14._0_4_;
  fVar18 = unaff_XMM8_Da * fVar18 * (3.0 - fVar15 * fVar18 * fVar18);
  fStack0000000000000158 = fStack0000000000000158 * fVar18;
  fVar15 = fVar18 * fVar15;
  if ((param_4 != '\0') && (fVar15 <= fVar17 + fVar17)) {
    unaff_XMM8_Db = 0;
    unaff_XMM8_Dc = 0;
    unaff_XMM8_Dd = 0;
    fVar15 = fVar17 + fVar17;
  }
  auVar14._4_4_ = unaff_XMM8_Db;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = unaff_XMM8_Dc;
  auVar14._12_4_ = unaff_XMM8_Dd;
  fVar17 = fVar17 * 0.33333334 + 0.00033333336;
  auVar13._4_12_ = auVar14._4_12_;
  auVar13._0_4_ = fVar15 / (fVar17 - 0.001);
  if ((float)(in_stack_00000140 + -1) < auVar13._0_4_) {
    fVar17 = fVar15 / (float)(in_stack_00000140 + -1) + 0.001;
  }
  cVar8 = *(char *)(in_stack_00000148 + 0xd);
  if ((cVar8 == '\0') ||
     (0.0004 < (in_XMM5_Da - in_stack_00000148[1]) * (in_XMM5_Da - in_stack_00000148[1]) +
               (unaff_XMM6_Da - *in_stack_00000148) * (unaff_XMM6_Da - *in_stack_00000148))) {
    param_5._0_1_ = 1;
    FUN_1801aa0f0(auVar13._0_8_,param_3,param_3,in_stack_00000148,0x51b189);
    cVar8 = *(char *)(in_stack_00000148 + 0xd);
    in_R10 = in_stack_00000120;
  }
  if (cVar8 == '\0') {
    *unaff_RBX = -10000.0;
  }
  else {
    *unaff_RBX = in_stack_00000148[0xc];
    fVar3 = fVar9;
    if (*(char *)(in_stack_00000148 + 0xd) == '\x02') {
      fVar3 = *(float *)(*(longlong *)(in_stack_00000148 + 8) + 0x18);
    }
    if ((((uint)fVar3 >> 0xb & 1) != 0) && (0.95 < in_stack_00000148[6])) {
      cVar8 = '\x01';
      goto LAB_180579e93;
    }
  }
  cVar8 = '\0';
LAB_180579e93:
  iStack0000000000000138 = 1;
  *in_stack_00000168 = cVar8;
  *in_stack_00000170 = fVar9;
  fVar3 = *(float *)(unaff_RDI + 0x3c);
  fVar16 = 0.0;
  if (0.0 < fVar15) {
    pfVar6 = unaff_RBX + 1;
    in_stack_00000148 = in_stack_00000148 + 0x16;
    lVar5 = (longlong)in_stack_00000170 - (longlong)unaff_RBX;
    lVar11 = unaff_RSI;
    do {
      in_stack_00000168 = in_stack_00000168 + 1;
      fVar16 = fVar16 + fVar17;
      fVar4 = fVar16;
      if (fVar15 <= fVar16) {
        in_stack_00000150[2] = *(float *)(lVar11 + (longlong)unaff_RBX);
        cVar8 = *(char *)(in_stack_00000148 + 5);
        if ((cVar8 == '\0') ||
           (0.0004 < (in_stack_00000150[1] - in_stack_00000148[-7]) *
                     (in_stack_00000150[1] - in_stack_00000148[-7]) +
                     (*in_stack_00000150 - in_stack_00000148[-8]) *
                     (*in_stack_00000150 - in_stack_00000148[-8]))) {
          param_5._0_1_ = 1;
          FUN_1801aa0f0(in_R10,in_stack_00000150);
          cVar8 = *(char *)(in_stack_00000148 + 5);
        }
        fVar4 = fVar15;
        if ((cVar8 != '\0') && ((cVar8 != '\x01' || (render_system_config < in_stack_00000148[-2])))) {
          fVar12 = fVar17 * 4.0;
          if (fVar17 * 4.0 <= fVar3) {
            fVar12 = fVar3;
          }
          if (ABS(in_stack_00000148[4] - *(float *)(lVar11 + (longlong)unaff_RBX)) < fVar12) {
            in_stack_00000150[2] = in_stack_00000148[4];
          }
        }
      }
      *(float *)(lVar5 + (longlong)pfVar6) = fVar4;
      param_7._4_4_ = in_stack_00000130[3];
      param_6._0_4_ = fVar19 * fVar18 * *(float *)(lVar5 + (longlong)pfVar6) + *in_stack_00000130;
      param_6._4_4_ =
           fStack0000000000000158 * *(float *)(lVar5 + (longlong)pfVar6) + in_stack_00000130[1];
      param_7._0_4_ = *(int32_t *)(lVar11 + (longlong)unaff_RBX);
      cVar8 = (char)unaff_RSI;
      if ((*(char *)(in_stack_00000148 + 5) == cVar8) ||
         (0.0004 < (param_6._4_4_ - in_stack_00000148[-7]) * (param_6._4_4_ - in_stack_00000148[-7])
                   + ((float)param_6 - in_stack_00000148[-8]) *
                     ((float)param_6 - in_stack_00000148[-8]))) {
        param_5._0_1_ = 1;
        FUN_1801aa0f0(in_stack_00000120,&param_6);
      }
      if (*(char *)(in_stack_00000148 + 5) == cVar8) {
        *pfVar6 = -10000.0;
        *in_stack_00000168 = cVar8;
      }
      else {
        *pfVar6 = in_stack_00000148[4];
        fVar4 = fVar9;
        if (*(char *)(in_stack_00000148 + 5) == '\x02') {
          fVar4 = *(float *)(*(longlong *)in_stack_00000148 + 0x18);
        }
        if ((((uint)fVar4 >> 0xb & 1) == 0) || (in_stack_00000148[-2] <= 0.95)) {
          cVar8 = '\0';
        }
        else {
          cVar8 = '\x01';
        }
        *in_stack_00000168 = cVar8;
        fVar4 = fVar17 * 4.0;
        if (fVar17 * 4.0 <= fVar3) {
          fVar4 = fVar3;
        }
        if ((ABS(*pfVar6 - *(float *)(lVar11 + (longlong)unaff_RBX)) < fVar4) &&
           ((*(char *)(in_stack_00000148 + 5) != '\x01' || (render_system_config < in_stack_00000148[-2]))
           )) {
          lVar11 = (longlong)pfVar6 - (longlong)unaff_RBX;
        }
      }
      in_stack_00000148 = in_stack_00000148 + 0xe;
      iStack0000000000000138 = iStack0000000000000138 + 1;
      pfVar6 = pfVar6 + 1;
      in_R10 = in_stack_00000120;
    } while (fVar16 < fVar15);
  }
  fVar17 = in_stack_00000150[2];
  fVar9 = *unaff_RBX;
  if (0 < iStack0000000000000138) {
    lVar5 = (longlong)unaff_RBX - (longlong)in_stack_00000170;
    pfVar6 = in_stack_00000170;
    lVar11 = unaff_RSI;
    do {
      pfVar1 = in_stack_00000170 + unaff_RSI;
      fVar18 = ((*pfVar6 - *pfVar1) * (fVar17 - fVar9)) / (fVar15 - *pfVar1) + fVar9;
      *(float *)((longlong)pfVar6 + (in_stack_00000160 - (longlong)in_stack_00000170)) = fVar18;
      if ((*pfVar6 <= fVar15 && fVar15 != *pfVar6) &&
         (fVar18 < *(float *)(lVar5 + (longlong)pfVar6))) {
        *(float *)((longlong)pfVar6 + (in_stack_00000160 - (longlong)in_stack_00000170)) =
             *(float *)(lVar5 + (longlong)pfVar6);
        if (unaff_RSI < lVar11) {
          if (3 < lVar11 - unaff_RSI) {
            pfVar7 = (float *)(in_stack_00000160 + 4 + unaff_RSI * 4);
            lVar10 = (longlong)in_stack_00000170 - in_stack_00000160;
            lVar2 = ((lVar11 - unaff_RSI) - 4U >> 2) + 1;
            unaff_RSI = unaff_RSI + lVar2 * 4;
            do {
              pfVar7[-1] = ((*(float *)(lVar10 + -4 + (longlong)pfVar7) - *pfVar1) *
                           (*(float *)(lVar5 + (longlong)pfVar6) - fVar9)) / (*pfVar6 - *pfVar1) +
                           fVar9;
              *pfVar7 = ((*(float *)(lVar10 + (longlong)pfVar7) - *pfVar1) *
                        (*(float *)(lVar5 + (longlong)pfVar6) - fVar9)) / (*pfVar6 - *pfVar1) +
                        fVar9;
              pfVar7[1] = ((*(float *)(lVar10 + 4 + (longlong)pfVar7) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)pfVar6) - fVar9)) / (*pfVar6 - *pfVar1) +
                          fVar9;
              pfVar7[2] = ((*(float *)(lVar10 + 8 + (longlong)pfVar7) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)pfVar6) - fVar9)) / (*pfVar6 - *pfVar1) +
                          fVar9;
              pfVar7 = pfVar7 + 4;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
          if (unaff_RSI < lVar11) {
            pfVar7 = (float *)(in_stack_00000160 + unaff_RSI * 4);
            lVar2 = lVar11 - unaff_RSI;
            do {
              *pfVar7 = ((*(float *)((longlong)pfVar7 +
                                    ((longlong)in_stack_00000170 - in_stack_00000160)) - *pfVar1) *
                        (*(float *)(lVar5 + (longlong)pfVar6) - fVar9)) / (*pfVar6 - *pfVar1) +
                        fVar9;
              pfVar7 = pfVar7 + 1;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
        }
        fVar9 = *(float *)(lVar5 + (longlong)pfVar6);
        unaff_RSI = lVar11;
      }
      lVar11 = lVar11 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar11 < iStack0000000000000138);
  }
  return iStack0000000000000138;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180579ec7(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *unaff_RBX;
  longlong lVar5;
  longlong unaff_RBP;
  char cVar6;
  uint uVar7;
  longlong unaff_RSI;
  longlong *plVar8;
  longlong lVar9;
  uint64_t in_R10;
  char *pcVar10;
  float *unaff_R13;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_00000120;
  float *in_stack_00000130;
  int in_stack_00000138;
  longlong lStack0000000000000150;
  float in_stack_00000158;
  longlong in_stack_00000160;
  float *in_stack_00000170;
  
  pfVar3 = unaff_RBX + 1;
  pcVar10 = (char *)(param_1 + 1);
  plVar8 = (longlong *)(unaff_RBP + 0x58);
  lStack0000000000000150 = param_3 - (longlong)unaff_RBX;
  lVar11 = unaff_RSI;
  do {
    unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM7_Da;
    fVar12 = unaff_XMM6_Da;
    if (unaff_XMM8_Da <= unaff_XMM6_Da) {
      unaff_R13[2] = *(float *)(lVar11 + (longlong)unaff_RBX);
      cVar6 = *(char *)((longlong)plVar8 + 0x14);
      if ((cVar6 == '\0') ||
         (fVar12 = unaff_R13[1] - *(float *)((longlong)plVar8 + -0x1c),
         unaff_XMM13_Da <
         fVar12 * fVar12 +
         (*unaff_R13 - *(float *)(plVar8 + -4)) * (*unaff_R13 - *(float *)(plVar8 + -4)))) {
        param_5._0_1_ = 1;
        FUN_1801aa0f0(in_R10);
        cVar6 = *(char *)((longlong)plVar8 + 0x14);
      }
      fVar12 = unaff_XMM8_Da;
      if ((cVar6 != '\0') && ((cVar6 != '\x01' || (render_system_config < *(float *)(plVar8 + -1))))) {
        fVar13 = unaff_XMM7_Da * 4.0;
        if (unaff_XMM7_Da * 4.0 <= unaff_XMM10_Da) {
          fVar13 = unaff_XMM10_Da;
        }
        if (ABS(*(float *)(plVar8 + 2) - *(float *)(lVar11 + (longlong)unaff_RBX)) < fVar13) {
          unaff_R13[2] = *(float *)(plVar8 + 2);
        }
      }
    }
    *(float *)(lStack0000000000000150 + (longlong)pfVar3) = fVar12;
    param_7._4_4_ = in_stack_00000130[3];
    param_6._0_4_ =
         unaff_XMM15_Da * *(float *)(lStack0000000000000150 + (longlong)pfVar3) + *in_stack_00000130
    ;
    param_6._4_4_ =
         in_stack_00000158 * *(float *)(lStack0000000000000150 + (longlong)pfVar3) +
         in_stack_00000130[1];
    param_7._0_4_ = *(int32_t *)(lVar11 + (longlong)unaff_RBX);
    cVar6 = (char)unaff_RSI;
    if ((*(char *)((longlong)plVar8 + 0x14) == cVar6) ||
       (fVar12 = param_6._4_4_ - *(float *)((longlong)plVar8 + -0x1c),
       unaff_XMM13_Da <
       fVar12 * fVar12 +
       ((float)param_6 - *(float *)(plVar8 + -4)) * ((float)param_6 - *(float *)(plVar8 + -4)))) {
      param_5._0_1_ = 1;
      FUN_1801aa0f0(in_stack_00000120,&param_6);
    }
    if (*(char *)((longlong)plVar8 + 0x14) == cVar6) {
      *pfVar3 = -10000.0;
      *pcVar10 = cVar6;
    }
    else {
      *pfVar3 = *(float *)(plVar8 + 2);
      if (*(char *)((longlong)plVar8 + 0x14) == '\x02') {
        uVar7 = *(uint *)(*plVar8 + 0x18);
      }
      else {
        uVar7 = (uint)unaff_RSI;
      }
      if (((uVar7 >> 0xb & 1) == 0) || (*(float *)(plVar8 + -1) <= unaff_XMM14_Da)) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x01';
      }
      *pcVar10 = cVar6;
      fVar12 = unaff_XMM7_Da * 4.0;
      if (unaff_XMM7_Da * 4.0 <= unaff_XMM10_Da) {
        fVar12 = unaff_XMM10_Da;
      }
      if ((ABS(*pfVar3 - *(float *)(lVar11 + (longlong)unaff_RBX)) < fVar12) &&
         ((*(char *)((longlong)plVar8 + 0x14) != '\x01' ||
          (render_system_config < *(float *)(plVar8 + -1))))) {
        lVar11 = (longlong)pfVar3 - (longlong)unaff_RBX;
      }
    }
    plVar8 = plVar8 + 7;
    in_stack_00000138 = in_stack_00000138 + 1;
    pfVar3 = pfVar3 + 1;
    pcVar10 = pcVar10 + 1;
    in_R10 = in_stack_00000120;
  } while (unaff_XMM6_Da < unaff_XMM8_Da);
  fVar12 = unaff_R13[2];
  fVar13 = *unaff_RBX;
  if (0 < in_stack_00000138) {
    lVar5 = (longlong)unaff_RBX - (longlong)in_stack_00000170;
    pfVar3 = in_stack_00000170;
    lVar11 = unaff_RSI;
    do {
      pfVar1 = in_stack_00000170 + unaff_RSI;
      fVar14 = ((*pfVar3 - *pfVar1) * (fVar12 - fVar13)) / (unaff_XMM8_Da - *pfVar1) + fVar13;
      *(float *)((longlong)pfVar3 + (in_stack_00000160 - (longlong)in_stack_00000170)) = fVar14;
      if ((*pfVar3 <= unaff_XMM8_Da && unaff_XMM8_Da != *pfVar3) &&
         (fVar14 < *(float *)(lVar5 + (longlong)pfVar3))) {
        *(float *)((longlong)pfVar3 + (in_stack_00000160 - (longlong)in_stack_00000170)) =
             *(float *)(lVar5 + (longlong)pfVar3);
        if (unaff_RSI < lVar11) {
          if (3 < lVar11 - unaff_RSI) {
            pfVar4 = (float *)(in_stack_00000160 + 4 + unaff_RSI * 4);
            lVar9 = (longlong)in_stack_00000170 - in_stack_00000160;
            lVar2 = ((lVar11 - unaff_RSI) - 4U >> 2) + 1;
            unaff_RSI = unaff_RSI + lVar2 * 4;
            do {
              pfVar4[-1] = ((*(float *)(lVar9 + -4 + (longlong)pfVar4) - *pfVar1) *
                           (*(float *)(lVar5 + (longlong)pfVar3) - fVar13)) / (*pfVar3 - *pfVar1) +
                           fVar13;
              *pfVar4 = ((*(float *)(lVar9 + (longlong)pfVar4) - *pfVar1) *
                        (*(float *)(lVar5 + (longlong)pfVar3) - fVar13)) / (*pfVar3 - *pfVar1) +
                        fVar13;
              pfVar4[1] = ((*(float *)(lVar9 + 4 + (longlong)pfVar4) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)pfVar3) - fVar13)) / (*pfVar3 - *pfVar1) +
                          fVar13;
              pfVar4[2] = ((*(float *)(lVar9 + 8 + (longlong)pfVar4) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)pfVar3) - fVar13)) / (*pfVar3 - *pfVar1) +
                          fVar13;
              pfVar4 = pfVar4 + 4;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
          if (unaff_RSI < lVar11) {
            pfVar4 = (float *)(in_stack_00000160 + unaff_RSI * 4);
            lVar2 = lVar11 - unaff_RSI;
            do {
              *pfVar4 = ((*(float *)((longlong)pfVar4 +
                                    ((longlong)in_stack_00000170 - in_stack_00000160)) - *pfVar1) *
                        (*(float *)(lVar5 + (longlong)pfVar3) - fVar13)) / (*pfVar3 - *pfVar1) +
                        fVar13;
              pfVar4 = pfVar4 + 1;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
        }
        fVar13 = *(float *)(lVar5 + (longlong)pfVar3);
        unaff_RSI = lVar11;
      }
      lVar11 = lVar11 + 1;
      pfVar3 = pfVar3 + 1;
    } while (lVar11 < in_stack_00000138);
  }
  return in_stack_00000138;
}



int FUN_18057a15f(uint64_t param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *unaff_RBX;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong unaff_R13;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM8_Da;
  int in_stack_00000138;
  longlong in_stack_00000160;
  float *in_stack_00000170;
  
  fVar2 = *(float *)(unaff_R13 + 8);
  fVar12 = *unaff_RBX;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    lVar6 = in_stack_00000160 - (longlong)param_3;
    lVar5 = (longlong)unaff_RBX - (longlong)param_3;
    pfVar8 = param_3;
    lVar9 = unaff_RSI;
    do {
      pfVar1 = pfVar8 + unaff_RSI;
      fVar11 = ((*param_3 - *pfVar1) * (fVar2 - fVar12)) / (unaff_XMM8_Da - *pfVar1) + fVar12;
      *(float *)((longlong)param_3 + lVar6) = fVar11;
      if ((*param_3 <= unaff_XMM8_Da && unaff_XMM8_Da != *param_3) &&
         (fVar11 < *(float *)(lVar5 + (longlong)param_3))) {
        *(float *)((longlong)param_3 + lVar6) = *(float *)(lVar5 + (longlong)param_3);
        if (unaff_RSI < lVar9) {
          if (3 < lVar9 - unaff_RSI) {
            pfVar4 = (float *)(in_stack_00000160 + 4 + unaff_RSI * 4);
            lVar7 = (longlong)pfVar8 - in_stack_00000160;
            lVar3 = ((lVar9 - unaff_RSI) - 4U >> 2) + 1;
            unaff_RSI = unaff_RSI + lVar3 * 4;
            do {
              pfVar4[-1] = ((*(float *)(lVar7 + -4 + (longlong)pfVar4) - *pfVar1) *
                           (*(float *)(lVar5 + (longlong)param_3) - fVar12)) / (*param_3 - *pfVar1)
                           + fVar12;
              *pfVar4 = ((*(float *)(lVar7 + (longlong)pfVar4) - *pfVar1) *
                        (*(float *)(lVar5 + (longlong)param_3) - fVar12)) / (*param_3 - *pfVar1) +
                        fVar12;
              pfVar4[1] = ((*(float *)(lVar7 + 4 + (longlong)pfVar4) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)param_3) - fVar12)) / (*param_3 - *pfVar1) +
                          fVar12;
              pfVar4[2] = ((*(float *)(lVar7 + 8 + (longlong)pfVar4) - *pfVar1) *
                          (*(float *)(lVar5 + (longlong)param_3) - fVar12)) / (*param_3 - *pfVar1) +
                          fVar12;
              pfVar4 = pfVar4 + 4;
              lVar3 = lVar3 + -1;
              pfVar8 = in_stack_00000170;
            } while (lVar3 != 0);
          }
          if (unaff_RSI < lVar9) {
            pfVar4 = (float *)(in_stack_00000160 + unaff_RSI * 4);
            lVar3 = lVar9 - unaff_RSI;
            do {
              *pfVar4 = ((*(float *)((longlong)pfVar4 + ((longlong)pfVar8 - in_stack_00000160)) -
                         *pfVar1) * (*(float *)(lVar5 + (longlong)param_3) - fVar12)) /
                        (*param_3 - *pfVar1) + fVar12;
              pfVar4 = pfVar4 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
        }
        fVar12 = *(float *)(lVar5 + (longlong)param_3);
        unaff_RSI = lVar9;
        pfVar8 = in_stack_00000170;
      }
      lVar9 = lVar9 + 1;
      param_3 = param_3 + 1;
      param_2 = in_stack_00000138;
    } while (lVar9 < lVar10);
  }
  return param_2;
}



int32_t FUN_18057a1a8(uint64_t param_1,uint64_t param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong unaff_R14;
  float fVar9;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  int32_t in_stack_00000138;
  longlong in_stack_00000160;
  float *in_stack_00000170;
  
  lVar5 = in_stack_00000160 - (longlong)param_3;
  lVar4 = unaff_RBX - (longlong)param_3;
  pfVar7 = param_3;
  lVar8 = unaff_RSI;
  do {
    pfVar1 = pfVar7 + unaff_RSI;
    fVar9 = ((*param_3 - *pfVar1) * (unaff_XMM6_Da - in_XMM5_Da)) / (unaff_XMM8_Da - *pfVar1) +
            in_XMM5_Da;
    *(float *)((longlong)param_3 + lVar5) = fVar9;
    if ((*param_3 <= unaff_XMM8_Da && unaff_XMM8_Da != *param_3) &&
       (fVar9 < *(float *)(lVar4 + (longlong)param_3))) {
      *(float *)((longlong)param_3 + lVar5) = *(float *)(lVar4 + (longlong)param_3);
      if (unaff_RSI < lVar8) {
        if (3 < lVar8 - unaff_RSI) {
          pfVar3 = (float *)(in_stack_00000160 + 4 + unaff_RSI * 4);
          lVar6 = (longlong)pfVar7 - in_stack_00000160;
          lVar2 = ((lVar8 - unaff_RSI) - 4U >> 2) + 1;
          unaff_RSI = unaff_RSI + lVar2 * 4;
          do {
            pfVar3[-1] = ((*(float *)(lVar6 + -4 + (longlong)pfVar3) - *pfVar1) *
                         (*(float *)(lVar4 + (longlong)param_3) - in_XMM5_Da)) /
                         (*param_3 - *pfVar1) + in_XMM5_Da;
            *pfVar3 = ((*(float *)(lVar6 + (longlong)pfVar3) - *pfVar1) *
                      (*(float *)(lVar4 + (longlong)param_3) - in_XMM5_Da)) / (*param_3 - *pfVar1) +
                      in_XMM5_Da;
            pfVar3[1] = ((*(float *)(lVar6 + 4 + (longlong)pfVar3) - *pfVar1) *
                        (*(float *)(lVar4 + (longlong)param_3) - in_XMM5_Da)) / (*param_3 - *pfVar1)
                        + in_XMM5_Da;
            pfVar3[2] = ((*(float *)(lVar6 + 8 + (longlong)pfVar3) - *pfVar1) *
                        (*(float *)(lVar4 + (longlong)param_3) - in_XMM5_Da)) / (*param_3 - *pfVar1)
                        + in_XMM5_Da;
            pfVar3 = pfVar3 + 4;
            lVar2 = lVar2 + -1;
            pfVar7 = in_stack_00000170;
          } while (lVar2 != 0);
        }
        if (unaff_RSI < lVar8) {
          pfVar3 = (float *)(in_stack_00000160 + unaff_RSI * 4);
          lVar2 = lVar8 - unaff_RSI;
          do {
            *pfVar3 = ((*(float *)((longlong)pfVar3 + ((longlong)pfVar7 - in_stack_00000160)) -
                       *pfVar1) * (*(float *)(lVar4 + (longlong)param_3) - in_XMM5_Da)) /
                      (*param_3 - *pfVar1) + in_XMM5_Da;
            pfVar3 = pfVar3 + 1;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
        }
      }
      in_XMM5_Da = *(float *)(lVar4 + (longlong)param_3);
      unaff_RSI = lVar8;
      pfVar7 = in_stack_00000170;
    }
    lVar8 = lVar8 + 1;
    param_3 = param_3 + 1;
  } while (lVar8 < unaff_R14);
  return in_stack_00000138;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





