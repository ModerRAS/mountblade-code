#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part047_sub001.c - 4 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_02_part047.c - 4 个函数


// 函数: void FUN_1801b8770(int64_t param_1,uint64_t param_2,uint param_3)
void FUN_1801b8770(int64_t param_1,uint64_t param_2,uint param_3)

{
  double dVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  dVar1 = (double)log2((double)param_3);
  if (9.223372036854776e+18 <= dVar1) {
    dVar1 = dVar1 - 9.223372036854776e+18;
  }
  FUN_180627ae0(&puStack_30,param_2);
  FUN_18005d190(param_1 + 8 + (int64_t)dVar1 * 0x20,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1801b8840(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
                 char param_5,int32_t param_6)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int64_t lVar13;
  int64_t lVar14;
  int8_t *puVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  
  if ((*(byte *)(param_3 + 0x2e8) & 0xb) == 0xb) {
    if (((((*(int64_t *)(param_3 + 0x260) == 0) &&
          (*(int64_t *)(param_3 + 0x1c0) == *(int64_t *)(param_3 + 0x1c8))) &&
         (*(int64_t *)(param_3 + 0xf0) == *(int64_t *)(param_3 + 0xf8))) &&
        (*(int64_t *)(param_3 + 0x200) == *(int64_t *)(param_3 + 0x208))) ||
       ((param_5 != '\0' && ((*(byte *)(param_3 + 0x2c4) & 4) != 0)))) {
      return 0;
    }
    if (*(int *)(param_2 + 0x178) == 0) {
      *(int32_t *)(param_3 + 0x2e0) = 0x1010101;
    }
    lVar13 = *(int64_t *)(param_3 + 0x28);
    FUN_1801c0d90(param_3);
    fVar22 = *(float *)(param_3 + 0x2cc);
    lVar14 = *(int64_t *)(param_3 + 0x28);
    if ((fVar22 <= 0.0) ||
       (fVar23 = *(float *)(param_3 + 0xa4) - *(float *)(param_2 + 0x124),
       fVar20 = *(float *)(param_3 + 0xa0) - *(float *)(param_2 + 0x120),
       fVar17 = *(float *)(param_3 + 0xa8) - *(float *)(param_2 + 0x128),
       fVar23 * fVar23 + fVar20 * fVar20 + fVar17 * fVar17 < fVar22 * fVar22)) {
      iVar12 = FUN_1801b8ce0(param_1,param_2 + 0x30,lVar14,lVar13 + 0xf8,param_3 + 0x70,param_6,1,
                             param_4);
      iVar2 = *(int *)(param_2 + 0x178);
      if (iVar2 != 3) {
        if (iVar12 == 0) {
          return 0;
        }
        if (iVar2 < 0) {
          return iVar12;
        }
        if (*(char *)((int64_t)iVar2 + 0x2e0 + param_3) != '\0') {
          fVar23 = *(float *)(param_2 + 0x110);
          fVar3 = *(float *)(param_2 + 0x114);
          fVar4 = *(float *)(param_2 + 0x118);
          fVar5 = *(float *)(param_2 + 0x11c);
          pfVar16 = (float *)(lVar14 + 0x38);
          lVar13 = 2;
          fVar6 = *(float *)(param_2 + 0x100);
          fVar7 = *(float *)(param_2 + 0x104);
          fVar8 = *(float *)(param_2 + 0x108);
          fVar9 = *(float *)(param_2 + 0xf0);
          fVar10 = *(float *)(param_2 + 0xf4);
          fVar11 = *(float *)(param_2 + 0xf8);
          fVar22 = *(float *)(param_2 + 0x120);
          fVar17 = *(float *)(param_2 + 0x124);
          fVar20 = *(float *)(param_2 + 0x128);
          auVar24 = system_system_config;
          auVar25 = system_system_config;
          do {
            fVar26 = pfVar16[-2] - fVar22;
            fVar18 = pfVar16[-1] - fVar17;
            fVar21 = *pfVar16 - fVar20;
            fVar19 = pfVar16[3] - fVar17;
            auVar27._0_8_ =
                 CONCAT44(fVar26 * fVar6 + fVar18 * fVar7 + fVar21 * fVar8,
                          fVar26 * fVar9 + fVar18 * fVar10 + fVar21 * fVar11);
            auVar27._8_4_ = fVar26 * fVar23 + fVar18 * fVar3 + fVar21 * fVar4;
            auVar27._12_4_ = fVar26 * fVar5 + fVar18 * fVar5 + fVar21 * fVar5;
            fVar21 = pfVar16[4] - fVar20;
            auVar31._8_4_ = auVar27._8_4_;
            auVar31._0_8_ = auVar27._0_8_;
            auVar31._12_4_ = auVar27._12_4_;
            auVar28 = maxps(auVar27,auVar24);
            auVar24 = minps(auVar31,auVar25);
            fVar26 = pfVar16[2] - fVar22;
            fVar18 = pfVar16[7] - fVar17;
            auVar30._0_8_ =
                 CONCAT44(fVar26 * fVar6 + fVar19 * fVar7 + fVar21 * fVar8,
                          fVar26 * fVar9 + fVar19 * fVar10 + fVar21 * fVar11);
            auVar30._8_4_ = fVar26 * fVar23 + fVar19 * fVar3 + fVar21 * fVar4;
            auVar30._12_4_ = fVar26 * fVar5 + fVar19 * fVar5 + fVar21 * fVar5;
            fVar21 = pfVar16[8] - fVar20;
            auVar25._8_4_ = auVar30._8_4_;
            auVar25._0_8_ = auVar30._0_8_;
            auVar25._12_4_ = auVar30._12_4_;
            auVar31 = maxps(auVar30,auVar28);
            auVar25 = minps(auVar25,auVar24);
            fVar26 = pfVar16[6] - fVar22;
            fVar19 = pfVar16[0xb] - fVar17;
            auVar29._0_8_ =
                 CONCAT44(fVar26 * fVar6 + fVar18 * fVar7 + fVar21 * fVar8,
                          fVar26 * fVar9 + fVar18 * fVar10 + fVar21 * fVar11);
            auVar29._8_4_ = fVar26 * fVar23 + fVar18 * fVar3 + fVar21 * fVar4;
            auVar29._12_4_ = fVar26 * fVar5 + fVar18 * fVar5 + fVar21 * fVar5;
            fVar18 = pfVar16[0xc] - fVar20;
            auVar24._8_4_ = auVar29._8_4_;
            auVar24._0_8_ = auVar29._0_8_;
            auVar24._12_4_ = auVar29._12_4_;
            auVar24 = minps(auVar24,auVar25);
            pfVar1 = pfVar16 + 10;
            pfVar16 = pfVar16 + 0x10;
            fVar21 = *pfVar1 - fVar22;
            auVar31 = maxps(auVar29,auVar31);
            auVar28._0_8_ =
                 CONCAT44(fVar21 * fVar6 + fVar19 * fVar7 + fVar18 * fVar8,
                          fVar21 * fVar9 + fVar19 * fVar10 + fVar18 * fVar11);
            auVar28._8_4_ = fVar21 * fVar23 + fVar19 * fVar3 + fVar18 * fVar4;
            auVar28._12_4_ = fVar21 * fVar5 + fVar19 * fVar5 + fVar18 * fVar5;
            auVar32._8_4_ = auVar28._8_4_;
            auVar32._0_8_ = auVar28._0_8_;
            auVar32._12_4_ = auVar28._12_4_;
            auVar25 = minps(auVar32,auVar24);
            auVar24 = maxps(auVar28,auVar31);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          fVar23 = *(float *)(param_2 + 0x993c) * 0.8;
          fVar20 = *(float *)(param_2 + 0x994c) * 0.8;
          fVar22 = *(float *)(param_2 + 0x9950) * 0.8;
          fVar17 = *(float *)(param_2 + 0x9940) * 0.8;
          fStack_c8 = auVar25._0_4_;
          if (fVar20 < fStack_c8 || fStack_c8 < fVar23) {
            return iVar12;
          }
          fStack_c4 = auVar25._4_4_;
          if (fVar22 < fStack_c4 || fStack_c4 < fVar17) {
            return iVar12;
          }
          fStack_b8 = auVar24._0_4_;
          if (fStack_b8 <= fVar20 && fVar23 <= fStack_b8) {
            fStack_b4 = auVar24._4_4_;
            if (fStack_b4 < fVar17 || fVar22 < fStack_b4) {
              return iVar12;
            }
            lVar13 = (int64_t)(iVar2 + 1);
            if (lVar13 < 4) {
              puVar15 = (int8_t *)(param_3 + 0x2e0 + lVar13);
              for (lVar14 = 4 - lVar13; lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + 1;
              }
              return iVar12;
            }
            return iVar12;
          }
          return iVar12;
        }
      }
    }
  }
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801b88cb(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  float *pfVar1;
  int iVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar27;
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint64_t in_stack_00000110;
  
  if (*(int *)(param_2 + 0x178) == (int)unaff_RBX) {
    *(int32_t *)(param_3 + 0x2e0) = 0x1010101;
  }
  lVar14 = *(int64_t *)(param_3 + 0x28);
  FUN_1801c0d90();
  fVar23 = *(float *)(unaff_RDI + 0x2cc);
  lVar15 = *(int64_t *)(unaff_RDI + 0x28);
  if ((0.0 < fVar23) &&
     (fVar24 = *(float *)(param_3 + 0xa4) - *(float *)(unaff_RSI + 0x124),
     fVar21 = *(float *)(param_3 + 0xa0) - *(float *)(unaff_RSI + 0x120),
     fVar18 = *(float *)(param_3 + 0xa8) - *(float *)(unaff_RSI + 0x128),
     fVar23 * fVar23 <= fVar24 * fVar24 + fVar21 * fVar21 + fVar18 * fVar18)) goto LAB_1801b8cab;
  uVar13 = FUN_1801b8ce0(in_stack_00000110,unaff_RSI + 0x30,lVar15,lVar14 + 0xf8,param_3 + 0x70);
  iVar2 = *(int *)(unaff_RSI + 0x178);
  unaff_RBP = (uint64_t)uVar13;
  if (iVar2 != 3) {
    if ((uVar13 == 0) || (iVar2 < 0)) goto LAB_1801b8cab;
    if (*(char *)((int64_t)iVar2 + 0x2e0 + unaff_RDI) != (char)unaff_RBX) {
      fVar24 = *(float *)(unaff_RSI + 0x110);
      fVar4 = *(float *)(unaff_RSI + 0x114);
      fVar5 = *(float *)(unaff_RSI + 0x118);
      fVar6 = *(float *)(unaff_RSI + 0x11c);
      pfVar17 = (float *)(lVar15 + 0x38);
      lVar14 = 2;
      fVar7 = *(float *)(unaff_RSI + 0x100);
      fVar8 = *(float *)(unaff_RSI + 0x104);
      fVar9 = *(float *)(unaff_RSI + 0x108);
      fVar10 = *(float *)(unaff_RSI + 0xf0);
      fVar11 = *(float *)(unaff_RSI + 0xf4);
      fVar12 = *(float *)(unaff_RSI + 0xf8);
      fVar23 = *(float *)(unaff_RSI + 0x120);
      fVar18 = *(float *)(unaff_RSI + 0x124);
      fVar21 = *(float *)(unaff_RSI + 0x128);
      auVar25 = system_system_config;
      auVar26 = system_system_config;
      do {
        fVar27 = pfVar17[-2] - fVar23;
        fVar19 = pfVar17[-1] - fVar18;
        fVar22 = *pfVar17 - fVar21;
        fVar20 = pfVar17[3] - fVar18;
        auVar28._0_8_ =
             CONCAT44(fVar27 * fVar7 + fVar19 * fVar8 + fVar22 * fVar9,
                      fVar27 * fVar10 + fVar19 * fVar11 + fVar22 * fVar12);
        auVar28._8_4_ = fVar27 * fVar24 + fVar19 * fVar4 + fVar22 * fVar5;
        auVar28._12_4_ = fVar27 * fVar6 + fVar19 * fVar6 + fVar22 * fVar6;
        fVar22 = pfVar17[4] - fVar21;
        auVar32._8_4_ = auVar28._8_4_;
        auVar32._0_8_ = auVar28._0_8_;
        auVar32._12_4_ = auVar28._12_4_;
        auVar29 = maxps(auVar28,auVar25);
        auVar25 = minps(auVar32,auVar26);
        fVar27 = pfVar17[2] - fVar23;
        fVar19 = pfVar17[7] - fVar18;
        auVar31._0_8_ =
             CONCAT44(fVar27 * fVar7 + fVar20 * fVar8 + fVar22 * fVar9,
                      fVar27 * fVar10 + fVar20 * fVar11 + fVar22 * fVar12);
        auVar31._8_4_ = fVar27 * fVar24 + fVar20 * fVar4 + fVar22 * fVar5;
        auVar31._12_4_ = fVar27 * fVar6 + fVar20 * fVar6 + fVar22 * fVar6;
        fVar22 = pfVar17[8] - fVar21;
        auVar26._8_4_ = auVar31._8_4_;
        auVar26._0_8_ = auVar31._0_8_;
        auVar26._12_4_ = auVar31._12_4_;
        auVar32 = maxps(auVar31,auVar29);
        auVar26 = minps(auVar26,auVar25);
        fVar27 = pfVar17[6] - fVar23;
        fVar20 = pfVar17[0xb] - fVar18;
        auVar30._0_8_ =
             CONCAT44(fVar27 * fVar7 + fVar19 * fVar8 + fVar22 * fVar9,
                      fVar27 * fVar10 + fVar19 * fVar11 + fVar22 * fVar12);
        auVar30._8_4_ = fVar27 * fVar24 + fVar19 * fVar4 + fVar22 * fVar5;
        auVar30._12_4_ = fVar27 * fVar6 + fVar19 * fVar6 + fVar22 * fVar6;
        fVar19 = pfVar17[0xc] - fVar21;
        auVar25._8_4_ = auVar30._8_4_;
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = auVar30._12_4_;
        auVar25 = minps(auVar25,auVar26);
        pfVar1 = pfVar17 + 10;
        pfVar17 = pfVar17 + 0x10;
        fVar22 = *pfVar1 - fVar23;
        auVar32 = maxps(auVar30,auVar32);
        auVar29._0_8_ =
             CONCAT44(fVar22 * fVar7 + fVar20 * fVar8 + fVar19 * fVar9,
                      fVar22 * fVar10 + fVar20 * fVar11 + fVar19 * fVar12);
        auVar29._8_4_ = fVar22 * fVar24 + fVar20 * fVar4 + fVar19 * fVar5;
        auVar29._12_4_ = fVar22 * fVar6 + fVar20 * fVar6 + fVar19 * fVar6;
        auVar33._8_4_ = auVar29._8_4_;
        auVar33._0_8_ = auVar29._0_8_;
        auVar33._12_4_ = auVar29._12_4_;
        auVar26 = minps(auVar33,auVar25);
        auVar25 = maxps(auVar29,auVar32);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar3 = (uint8_t)(unaff_RBX >> 8);
      fVar24 = *(float *)(unaff_RSI + 0x993c) * 0.8;
      fVar21 = *(float *)(unaff_RSI + 0x994c) * 0.8;
      fVar23 = *(float *)(unaff_RSI + 0x9950) * 0.8;
      fVar18 = *(float *)(unaff_RSI + 0x9940) * 0.8;
      fStack0000000000000040 = auVar26._0_4_;
      if ((((((uint)CONCAT71(uVar3,fStack0000000000000040 <= fVar21) &
             (uint)CONCAT71(uVar3,fVar24 <= fStack0000000000000040)) != 0) &&
           (fStack0000000000000044 = auVar26._4_4_,
           ((uint)CONCAT71(uVar3,fStack0000000000000044 <= fVar23) &
           (uint)CONCAT71(uVar3,fVar18 <= fStack0000000000000044)) != 0)) &&
          (fStack0000000000000050 = auVar25._0_4_,
          ((uint)CONCAT71(uVar3,fStack0000000000000050 <= fVar21) &
          (uint)CONCAT71(uVar3,fVar24 <= fStack0000000000000050)) != 0)) &&
         ((fStack0000000000000054 = auVar25._4_4_,
          ((uint)CONCAT71(uVar3,fVar18 <= fStack0000000000000054) &
          (uint)CONCAT71(uVar3,fStack0000000000000054 <= fVar23)) != 0 &&
          (lVar14 = (int64_t)(iVar2 + 1), lVar14 < 4)))) {
        puVar16 = (int8_t *)(unaff_RDI + 0x2e0 + lVar14);
        for (lVar15 = 4 - lVar14; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
      }
      goto LAB_1801b8cab;
    }
  }
  unaff_RBP = unaff_RBX & 0xffffffff;
LAB_1801b8cab:
  return unaff_RBP & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1801b89fa(uint64_t param_1,int param_2)

{
  float *pfVar1;
  uint8_t uVar2;
  float fVar3;
  float fVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t *puVar7;
  float *unaff_R13;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_XMM0_Dc;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t in_XMM1_Qa;
  float fVar15;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  int8_t in_XMM4 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float fVar22;
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  fVar15 = (float)((uint64_t)in_XMM1_Qa >> 0x20);
  fVar12 = (float)in_XMM1_Qa;
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  fVar8 = (float)param_1;
  fVar19 = *(float *)(unaff_RSI + 0xf0);
  fVar3 = *(float *)(unaff_RSI + 0xf4);
  fVar4 = *(float *)(unaff_RSI + 0xf8);
  fVar14 = *(float *)(unaff_RSI + 0x120);
  fVar16 = *(float *)(unaff_RSI + 0x124);
  fVar17 = *(float *)(unaff_RSI + 0x128);
  auVar18 = system_system_config;
  do {
    fVar22 = unaff_R13[-2] - fVar14;
    fVar9 = unaff_R13[-1] - fVar16;
    fVar13 = *unaff_R13 - fVar17;
    fVar10 = unaff_R13[3] - fVar16;
    auVar23._0_8_ =
         CONCAT44(fVar22 * fVar8 + fVar9 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar22 * fVar19 + fVar9 * fVar3 + fVar13 * fVar4);
    auVar23._8_4_ = fVar22 * fVar12 + fVar9 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar23._12_4_ = fVar22 * in_XMM1_Dd + fVar9 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar13 = unaff_R13[4] - fVar17;
    auVar21._8_4_ = auVar23._8_4_;
    auVar21._0_8_ = auVar23._0_8_;
    auVar21._12_4_ = auVar23._12_4_;
    auVar24 = maxps(auVar23,in_XMM4);
    auVar18 = minps(auVar21,auVar18);
    fVar22 = unaff_R13[2] - fVar14;
    fVar9 = unaff_R13[7] - fVar16;
    auVar26._0_8_ =
         CONCAT44(fVar22 * fVar8 + fVar10 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar22 * fVar19 + fVar10 * fVar3 + fVar13 * fVar4);
    auVar26._8_4_ = fVar22 * fVar12 + fVar10 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar26._12_4_ = fVar22 * in_XMM1_Dd + fVar10 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar13 = unaff_R13[8] - fVar17;
    auVar20._8_4_ = auVar26._8_4_;
    auVar20._0_8_ = auVar26._0_8_;
    auVar20._12_4_ = auVar26._12_4_;
    auVar24 = maxps(auVar26,auVar24);
    auVar21 = minps(auVar20,auVar18);
    fVar22 = unaff_R13[6] - fVar14;
    fVar10 = unaff_R13[0xb] - fVar16;
    auVar25._0_8_ =
         CONCAT44(fVar22 * fVar8 + fVar9 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar22 * fVar19 + fVar9 * fVar3 + fVar13 * fVar4);
    auVar25._8_4_ = fVar22 * fVar12 + fVar9 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar25._12_4_ = fVar22 * in_XMM1_Dd + fVar9 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar9 = unaff_R13[0xc] - fVar17;
    auVar18._8_4_ = auVar25._8_4_;
    auVar18._0_8_ = auVar25._0_8_;
    auVar18._12_4_ = auVar25._12_4_;
    auVar18 = minps(auVar18,auVar21);
    pfVar1 = unaff_R13 + 10;
    unaff_R13 = unaff_R13 + 0x10;
    fVar13 = *pfVar1 - fVar14;
    auVar21 = maxps(auVar25,auVar24);
    auVar24._0_8_ =
         CONCAT44(fVar13 * fVar8 + fVar10 * fVar11 + fVar9 * in_XMM0_Dc,
                  fVar13 * fVar19 + fVar10 * fVar3 + fVar9 * fVar4);
    auVar24._8_4_ = fVar13 * fVar12 + fVar10 * fVar15 + fVar9 * in_XMM1_Dc;
    auVar24._12_4_ = fVar13 * in_XMM1_Dd + fVar10 * in_XMM1_Dd + fVar9 * in_XMM1_Dd;
    auVar27._8_4_ = auVar24._8_4_;
    auVar27._0_8_ = auVar24._0_8_;
    auVar27._12_4_ = auVar24._12_4_;
    auVar18 = minps(auVar27,auVar18);
    in_XMM4 = maxps(auVar24,auVar21);
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  uVar2 = (uint8_t)((uint64_t)unaff_RBX >> 8);
  fVar19 = *(float *)(unaff_RSI + 0x993c) * 0.8;
  fVar17 = *(float *)(unaff_RSI + 0x994c) * 0.8;
  fVar14 = *(float *)(unaff_RSI + 0x9950) * 0.8;
  fVar16 = *(float *)(unaff_RSI + 0x9940) * 0.8;
  fStack0000000000000040 = auVar18._0_4_;
  if ((((((uint)CONCAT71(uVar2,fStack0000000000000040 <= fVar17) &
         (uint)CONCAT71(uVar2,fVar19 <= fStack0000000000000040)) != 0) &&
       (fStack0000000000000044 = auVar18._4_4_,
       ((uint)CONCAT71(uVar2,fStack0000000000000044 <= fVar14) &
       (uint)CONCAT71(uVar2,fVar16 <= fStack0000000000000044)) != 0)) &&
      (fStack0000000000000050 = in_XMM4._0_4_,
      ((uint)CONCAT71(uVar2,fStack0000000000000050 <= fVar17) &
      (uint)CONCAT71(uVar2,fVar19 <= fStack0000000000000050)) != 0)) &&
     ((fStack0000000000000054 = in_XMM4._4_4_,
      ((uint)CONCAT71(uVar2,fVar16 <= fStack0000000000000054) &
      (uint)CONCAT71(uVar2,fStack0000000000000054 <= fVar14)) != 0 &&
      (lVar6 = (int64_t)(param_2 + 1), lVar6 < 4)))) {
    puVar7 = (int8_t *)(unaff_RDI + 0x2e0 + lVar6);
    for (lVar5 = 4 - lVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  return unaff_EBP;
}



int32_t FUN_1801b8c3d(uint64_t param_1,int param_2,float param_3,float param_4)

{
  uint8_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  int8_t *puVar4;
  float in_XMM1_Da;
  float in_XMM4_Da;
  uint64_t in_stack_00000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  uVar1 = (uint8_t)((uint64_t)unaff_RBX >> 8);
  if ((((((uint)CONCAT71(uVar1,in_stack_00000040._4_4_ <= in_XMM1_Da) &
         (uint)CONCAT71(uVar1,param_3 <= in_stack_00000040._4_4_)) != 0) &&
       (((uint)CONCAT71(uVar1,fStack0000000000000050 <= param_4) &
        (uint)CONCAT71(uVar1,in_XMM4_Da <= fStack0000000000000050)) != 0)) &&
      (((uint)CONCAT71(uVar1,param_3 <= fStack0000000000000054) &
       (uint)CONCAT71(uVar1,fStack0000000000000054 <= in_XMM1_Da)) != 0)) &&
     (lVar3 = (int64_t)(param_2 + 1), lVar3 < 4)) {
    puVar4 = (int8_t *)(unaff_RDI + 0x2e0 + lVar3);
    for (lVar2 = 4 - lVar3; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return unaff_EBP;
}



int32_t FUN_1801b8ccb(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



uint64_t FUN_1801b8ce0(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                       uint64_t param_5,float param_6,char param_7,char param_8)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  float fVar5;
  
  uVar4 = 1;
  if (param_3 == 0) {
    if (param_7 != '\0') {
      uVar3 = FUN_18063bd90(param_2,param_4,param_5);
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        return 0;
      }
    }
    if (param_8 == '\0') {
      return uVar4;
    }
    plVar1 = *(int64_t **)(param_1 + 0x10);
    if (plVar1 == (int64_t *)0x0) {
      return uVar4;
    }
    fVar5 = *(float *)(param_4 + 0x30);
  }
  else {
    fVar5 = *(float *)(param_3 + 0xb4);
    if (fVar5 <= 0.0) {
      fVar5 = *(float *)(param_3 + 0xb0);
    }
    if ((0.0 < param_6) && (fVar5 < param_6)) {
      return 0;
    }
    if (param_7 != '\0') {
      uVar4 = 0;
      if (*(float *)(param_3 + 0xb0) <= 2.0) {
        cVar2 = func_0x0001801be000(param_2,param_3 + 0x20);
        uVar4 = uVar4 & 0xffffffff;
        if (cVar2 != '\0') {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = FUN_18063c930(param_2,param_3);
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 == 0) {
        return 0;
      }
    }
    if (param_8 == '\0') {
      return uVar4;
    }
    plVar1 = *(int64_t **)(param_1 + 0x10);
    if (plVar1 == (int64_t *)0x0) {
      return uVar4;
    }
    if (param_4 == 0) {
      if (100.0 < *(float *)(param_3 + 0xb0)) {
        return uVar4;
      }
      cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3,0);
      goto LAB_1801b8e17;
    }
    fVar5 = *(float *)(param_4 + 0x30);
  }
  if (100.0 < fVar5) {
    return uVar4;
  }
  cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_4,param_5,0);
LAB_1801b8e17:
  if (cVar2 == '\0') {
    return 0;
  }
  return uVar4;
}



uint64_t *
FUN_1801b8e40(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  switch(*(int32_t *)(param_1 + 0x27c0)) {
  case 0:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x5f676e6974696177;
    puVar1[1] = 0x656d61675f726f66;
    puVar1[2] = 0x676f6c5f79616c70;
    *(int32_t *)(puVar1 + 3) = 0x736369;
    *(int32_t *)(param_2 + 2) = 0x1b;
    break;
  case 1:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xf,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x65725f6b63656863;
    puVar1[1] = 0x73656372756f73;
    *(int32_t *)(param_2 + 2) = 0xf;
    break;
  case 2:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xd,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x735f636974617473;
    *(int32_t *)(puVar1 + 1) = 0x6f646168;
    *(int16_t *)((int64_t)puVar1 + 0xc) = 0x77;
    *(int32_t *)(param_2 + 2) = 0xd;
    break;
  case 3:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x13,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x735f7265746c6966;
    puVar1[1] = 0x75715f776f646168;
    *(int32_t *)(puVar1 + 2) = 0x797265;
    *(int32_t *)(param_2 + 2) = 0x13;
    break;
  case 4:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x11,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x5f6e696172726574;
    puVar1[1] = 0x7461645f656b6162;
    *(int16_t *)(puVar1 + 2) = 0x61;
    *(int32_t *)(param_2 + 2) = 0x11;
    break;
  case 5:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xd,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x725f70616d766e65;
    *(int32_t *)(puVar1 + 1) = 0x65646e65;
    *(int16_t *)((int64_t)puVar1 + 0xc) = 0x72;
    *(int32_t *)(param_2 + 2) = 0xd;
    break;
  default:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x10,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x5f676e6964616f6c;
    puVar1[1] = 0x64656873696e6966;
    *(int8_t *)(puVar1 + 2) = 0;
    *(int32_t *)(param_2 + 2) = 0x10;
    break;
  case 7:
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x10,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x5f676e6964616f6c;
    puVar1[1] = 0x64656873696e6966;
    *(int8_t *)(puVar1 + 2) = 0;
    *(int32_t *)(param_2 + 2) = 0x10;
  }
  return param_2;
}







// 函数: void FUN_1801b9190(void)
void FUN_1801b9190(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}







// 函数: void FUN_1801b9690(int64_t param_1)
void FUN_1801b9690(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x20);
  return;
}







