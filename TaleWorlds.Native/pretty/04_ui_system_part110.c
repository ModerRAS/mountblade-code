#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part110.c - 13 个函数

// 函数: void FUN_18073319f(uint64_t param_1,int64_t param_2,int64_t param_3,short param_4)
void FUN_18073319f(uint64_t param_1,int64_t param_2,int64_t param_3,short param_4)

{
  uint in_ECX;
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int in_R10D;
  uint unaff_R14D;
  uint64_t uVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t in_XMM1 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t in_XMM4 [16];
  int8_t auVar20 [16];
  int iVar21;
  int32_t uStack0000000000000028;
  int iStack0000000000000030;
  uint64_t in_stack_000000a0;
  
  in_ECX = in_ECX & 0x8000000f;
  if ((int)in_ECX < 0) {
    in_ECX = (in_ECX - 1 | 0xfffffff0) + 1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  auVar3 = pmovsxwd(in_XMM4,auVar3);
  auVar20 = ZEXT416(0x10);
  do {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(uint64_t *)(&stack0x00000040 + param_2 * 2);
    in_R10D = in_R10D + 0x10;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(uint64_t *)(&stack0x00000060 + param_2 * 2);
    auVar11 = pmovsxwd(in_XMM1,auVar4);
    auVar11 = pmulld(auVar11,auVar3);
    auVar12._0_4_ = auVar11._0_4_ >> auVar20;
    auVar12._4_4_ = auVar11._4_4_ >> auVar20;
    auVar12._8_4_ = auVar11._8_4_ >> auVar20;
    auVar12._12_4_ = auVar11._12_4_ >> auVar20;
    auVar4 = pshuflw(auVar4,auVar12,0xd8);
    auVar4 = pshufhw(auVar12,auVar4,0xd8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = CONCAT44(0,unaff_R14D);
    auVar11 = psraw(auVar16,auVar11);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(uint64_t *)(&stack0x00000068 + param_2 * 2);
    *(uint64_t *)(&stack0x00000040 + param_2 * 2) =
         CONCAT26(auVar4._10_2_ + auVar11._6_2_,
                  CONCAT24(auVar4._8_2_ + auVar11._4_2_,
                           CONCAT22(auVar4._2_2_ + auVar11._2_2_,auVar4._0_2_ + auVar11._0_2_)));
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(uint64_t *)(&stack0x00000048 + param_2 * 2);
    auVar4 = pmovsxwd(auVar4,auVar5);
    auVar4 = pmulld(auVar4,auVar3);
    auVar13._0_4_ = auVar4._0_4_ >> auVar20;
    auVar13._4_4_ = auVar4._4_4_ >> auVar20;
    auVar13._8_4_ = auVar4._8_4_ >> auVar20;
    auVar13._12_4_ = auVar4._12_4_ >> auVar20;
    auVar4 = pshuflw(auVar5,auVar13,0xd8);
    auVar4 = pshufhw(auVar13,auVar4,0xd8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,unaff_R14D);
    auVar11 = psraw(auVar17,auVar6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(uint64_t *)(&stack0x00000070 + param_2 * 2);
    *(uint64_t *)(&stack0x00000048 + param_2 * 2) =
         CONCAT26(auVar4._10_2_ + auVar11._6_2_,
                  CONCAT24(auVar4._8_2_ + auVar11._4_2_,
                           CONCAT22(auVar4._2_2_ + auVar11._2_2_,auVar4._0_2_ + auVar11._0_2_)));
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(uint64_t *)(&stack0x00000050 + param_2 * 2);
    auVar4 = pmovsxwd(auVar4,auVar7);
    auVar4 = pmulld(auVar4,auVar3);
    auVar14._0_4_ = auVar4._0_4_ >> auVar20;
    auVar14._4_4_ = auVar4._4_4_ >> auVar20;
    auVar14._8_4_ = auVar4._8_4_ >> auVar20;
    auVar14._12_4_ = auVar4._12_4_ >> auVar20;
    auVar4 = pshuflw(auVar7,auVar14,0xd8);
    auVar4 = pshufhw(auVar14,auVar4,0xd8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = CONCAT44(0,unaff_R14D);
    auVar11 = psraw(auVar18,auVar8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(uint64_t *)(&stack0x00000078 + param_2 * 2);
    *(uint64_t *)(&stack0x00000050 + param_2 * 2) =
         CONCAT26(auVar4._10_2_ + auVar11._6_2_,
                  CONCAT24(auVar4._8_2_ + auVar11._4_2_,
                           CONCAT22(auVar4._2_2_ + auVar11._2_2_,auVar4._0_2_ + auVar11._0_2_)));
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(uint64_t *)(&stack0x00000058 + param_2 * 2);
    auVar4 = pmovsxwd(auVar4,auVar9);
    auVar4 = pmulld(auVar4,auVar3);
    auVar15._0_4_ = auVar4._0_4_ >> auVar20;
    auVar15._4_4_ = auVar4._4_4_ >> auVar20;
    auVar15._8_4_ = auVar4._8_4_ >> auVar20;
    auVar15._12_4_ = auVar4._12_4_ >> auVar20;
    auVar4 = pshuflw(auVar9,auVar15,0xd8);
    in_XMM1 = pshufhw(auVar15,auVar4,0xd8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT44(0,unaff_R14D);
    auVar4 = psraw(auVar19,auVar10);
    *(uint64_t *)(&stack0x00000058 + param_2 * 2) =
         CONCAT26(in_XMM1._10_2_ + auVar4._6_2_,
                  CONCAT24(in_XMM1._8_2_ + auVar4._4_2_,
                           CONCAT22(in_XMM1._2_2_ + auVar4._2_2_,in_XMM1._0_2_ + auVar4._0_2_)));
    param_2 = param_2 + 0x10;
  } while (param_2 < (int)((int)param_3 - in_ECX));
  lVar1 = (int64_t)in_R10D;
  if (lVar1 < param_3) {
    do {
      *(short *)(&stack0x00000040 + lVar1 * 2) =
           (short)((uint)((int)*(short *)(&stack0x00000060 + lVar1 * 2) * (int)param_4) >> 0x10) +
           (*(short *)(&stack0x00000040 + lVar1 * 2) >> 1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  iStack0000000000000030 = (int)*(char *)(unaff_RBX + 0x12a5);
  uStack0000000000000028 = *(int32_t *)(unaff_RBX + 0x1230);
  FUN_180737240(unaff_RBX + 0x1290,in_XMM1._0_8_,*(uint64_t *)(unaff_RBX + 0x1258),
                &stack0x00000040);
  uVar2 = FUN_18072f4d0(unaff_RBP + 0x20);
  iVar21 = *(int *)(unaff_RBX + 0x121c);
  if (unaff_R14D == 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2,unaff_RBP + 0x20,(int64_t)iVar21 * 2);
  }
  uVar2 = FUN_180736180(&stack0x00000080);
  FUN_18072f4d0(uVar2,&stack0x00000080,*(int32_t *)(unaff_RBX + 0x121c),
                *(int32_t *)(unaff_RBX + 0x13ec),iVar21);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807332e3(uint64_t param_1,uint64_t param_2,int64_t param_3,short param_4)
void FUN_1807332e3(uint64_t param_1,uint64_t param_2,int64_t param_3,short param_4)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int in_R10D;
  int unaff_R14D;
  int32_t uStack0000000000000028;
  int iStack0000000000000030;
  uint64_t in_stack_000000a0;
  
  lVar1 = (int64_t)in_R10D;
  if (lVar1 < param_3) {
    do {
      *(short *)(&stack0x00000040 + lVar1 * 2) =
           (short)((uint)((int)*(short *)(&stack0x00000060 + lVar1 * 2) * (int)param_4) >> 0x10) +
           (*(short *)(&stack0x00000040 + lVar1 * 2) >> 1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  iStack0000000000000030 = (int)*(char *)(unaff_RBX + 0x12a5);
  uStack0000000000000028 = *(int32_t *)(unaff_RBX + 0x1230);
  FUN_180737240(unaff_RBX + 0x1290);
  FUN_18072f4d0(unaff_RBP + 0x20);
  if (unaff_R14D == 0) {
                    // WARNING: Subroutine does not return
    memcpy();
  }
  FUN_180736180(&stack0x00000080);
  FUN_18072f4d0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073337d(void)
void FUN_18073337d(void)

{
  uint64_t in_stack_000000a0;
  
  FUN_180736180(&stack0x00000080);
  FUN_18072f4d0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807333f0(int64_t param_1)
void FUN_1807333f0(int64_t param_1)

{
  int8_t auStack_a8 [8];
  int64_t lStack_a0;
  int64_t lStack_88;
  int32_t uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  lStack_a0 = param_1 + 0x20;
  uStack_60 = 0;
  iStack_54 = *(int *)(param_1 + 0x11e4) >> 2;
  iStack_58 = *(int *)(param_1 + 0x11e4) >> 3;
  iStack_5c = iStack_58 + iStack_54;
  iStack_58 = iStack_5c + iStack_58;
  iStack_54 = iStack_58 + iStack_54;
  lStack_88 = param_1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180733a10(int64_t param_1,int *param_2,int64_t param_3,int16_t *param_4,int param_5)
void FUN_180733a10(int64_t param_1,int *param_2,int64_t param_3,int16_t *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int16_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  if (0 < (int64_t)param_5 >> 1) {
    lVar6 = 0;
    param_3 = param_3 - (int64_t)param_4;
    lVar7 = (int64_t)ui_system_buffer_config;
    lVar8 = (int64_t)ui_system_buffer_config;
    do {
      iVar4 = *(short *)(param_1 + lVar6 * 4) * 0x400;
      iVar1 = iVar4 - *param_2;
      iVar1 = (int)((uint64_t)(iVar1 * lVar7) >> 0x10) + iVar1;
      iVar2 = *param_2 + iVar1;
      *param_2 = iVar1 + iVar4;
      iVar5 = *(short *)(param_1 + 2 + lVar6 * 4) * 0x400;
      iVar1 = (int)((uint64_t)((iVar5 - param_2[1]) * lVar8) >> 0x10);
      iVar4 = param_2[1] + iVar1;
      param_2[1] = iVar1 + iVar5;
      iVar1 = (iVar4 + iVar2 >> 10) + 1 >> 1;
      if (iVar1 < 0x8000) {
        uVar3 = (int16_t)iVar1;
        if (iVar1 < -0x8000) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *(int16_t *)(param_3 + (int64_t)param_4) = uVar3;
      iVar2 = (iVar4 - iVar2 >> 10) + 1 >> 1;
      if (iVar2 < 0x8000) {
        uVar3 = (int16_t)iVar2;
        if (iVar2 < -0x8000) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *param_4 = uVar3;
      lVar6 = lVar6 + 1;
      param_4 = param_4 + 1;
    } while (lVar6 < (int64_t)param_5 >> 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180733a2e(void)
void FUN_180733a2e(void)

{
  int iVar1;
  int iVar2;
  int16_t uVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t unaff_RBP;
  int *unaff_RSI;
  int iVar5;
  int iVar6;
  int16_t *in_R9;
  int64_t lVar7;
  int64_t in_R11;
  int64_t lVar8;
  int64_t lVar9;
  
  lVar7 = 0;
  lVar4 = unaff_RBX - (int64_t)in_R9;
  lVar8 = (int64_t)ui_system_buffer_config;
  lVar9 = (int64_t)ui_system_buffer_config;
  do {
    iVar5 = *(short *)(unaff_RBP + lVar7 * 4) * 0x400;
    iVar1 = iVar5 - *unaff_RSI;
    iVar1 = (int)((uint64_t)(iVar1 * lVar8) >> 0x10) + iVar1;
    iVar2 = *unaff_RSI + iVar1;
    *unaff_RSI = iVar1 + iVar5;
    iVar6 = *(short *)(unaff_RBP + 2 + lVar7 * 4) * 0x400;
    iVar1 = (int)((uint64_t)((iVar6 - unaff_RSI[1]) * lVar9) >> 0x10);
    iVar5 = unaff_RSI[1] + iVar1;
    unaff_RSI[1] = iVar1 + iVar6;
    iVar1 = (iVar5 + iVar2 >> 10) + 1 >> 1;
    if (iVar1 < 0x8000) {
      uVar3 = (int16_t)iVar1;
      if (iVar1 < -0x8000) {
        uVar3 = 0x8000;
      }
    }
    else {
      uVar3 = 0x7fff;
    }
    *(int16_t *)(lVar4 + (int64_t)in_R9) = uVar3;
    iVar2 = (iVar5 - iVar2 >> 10) + 1 >> 1;
    if (iVar2 < 0x8000) {
      uVar3 = (int16_t)iVar2;
      if (iVar2 < -0x8000) {
        uVar3 = 0x8000;
      }
    }
    else {
      uVar3 = 0x7fff;
    }
    *in_R9 = uVar3;
    lVar7 = lVar7 + 1;
    in_R9 = in_R9 + 1;
  } while (lVar7 < in_R11);
  return;
}





// 函数: void FUN_180733b18(void)
void FUN_180733b18(void)

{
  return;
}





// 函数: void FUN_180733ba0(int64_t param_1,int64_t param_2,short *param_3,int param_4,int param_5)
void FUN_180733ba0(int64_t param_1,int64_t param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  int64_t lVar2;
  int16_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  
  lVar5 = (int64_t)param_5;
  if (lVar5 < param_4) {
    psVar10 = (short *)(param_2 + (lVar5 + -6) * 2);
    lVar6 = param_4 - lVar5;
    do {
      uVar7 = 6;
      iVar9 = (int)psVar10[4] * (int)param_3[1] + (int)psVar10[3] * (int)param_3[2] +
              (int)psVar10[2] * (int)param_3[3] + (int)param_3[5] * (int)*psVar10 +
              (int)psVar10[1] * (int)param_3[4] + (int)*param_3 * (int)psVar10[5];
      if (6 < lVar5) {
        psVar8 = psVar10 + -1;
        do {
          psVar1 = param_3 + uVar7;
          uVar4 = ~uVar7;
          lVar2 = uVar7 + 1;
          uVar7 = uVar7 + 2;
          iVar9 = iVar9 + (int)*psVar1 * (int)*psVar8 +
                  (int)psVar10[uVar4 + 5] * (int)param_3[lVar2];
          psVar8 = psVar8 + -2;
        } while ((int64_t)uVar7 < lVar5);
      }
      iVar9 = (psVar10[6] * 0x1000 - iVar9 >> 0xb) + 1 >> 1;
      if (iVar9 < 0x8000) {
        uVar3 = (int16_t)iVar9;
        if (iVar9 < -0x8000) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *(int16_t *)((int64_t)psVar10 + (param_1 - param_2) + 0xc) = uVar3;
      psVar10 = psVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memset(param_1,0,lVar5 * 2);
  return;
}





// 函数: void FUN_180733bc4(int64_t param_1,int64_t param_2)
void FUN_180733bc4(int64_t param_1,int64_t param_2)

{
  short *psVar1;
  int64_t lVar2;
  int16_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar5;
  short *unaff_RDI;
  uint64_t uVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  
  psVar9 = (short *)(param_2 + (unaff_RBX + -6) * 2);
  lVar5 = unaff_RSI - unaff_RBX;
  do {
    uVar6 = 6;
    iVar8 = (int)psVar9[4] * (int)unaff_RDI[1] + (int)psVar9[3] * (int)unaff_RDI[2] +
            (int)psVar9[2] * (int)unaff_RDI[3] + (int)unaff_RDI[5] * (int)*psVar9 +
            (int)psVar9[1] * (int)unaff_RDI[4] + (int)*unaff_RDI * (int)psVar9[5];
    if (6 < unaff_RBX) {
      psVar7 = psVar9 + -1;
      do {
        psVar1 = unaff_RDI + uVar6;
        uVar4 = ~uVar6;
        lVar2 = uVar6 + 1;
        uVar6 = uVar6 + 2;
        iVar8 = iVar8 + (int)*psVar1 * (int)*psVar7 + (int)psVar9[uVar4 + 5] * (int)unaff_RDI[lVar2]
        ;
        psVar7 = psVar7 + -2;
      } while ((int64_t)uVar6 < unaff_RBX);
    }
    iVar8 = (psVar9[6] * 0x1000 - iVar8 >> 0xb) + 1 >> 1;
    if (iVar8 < 0x8000) {
      uVar3 = (int16_t)iVar8;
      if (iVar8 < -0x8000) {
        uVar3 = 0x8000;
      }
    }
    else {
      uVar3 = 0x7fff;
    }
    *(int16_t *)((int64_t)psVar9 + (param_1 - param_2) + 0xc) = uVar3;
    psVar9 = psVar9 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memset();
  return;
}





// 函数: void FUN_180733cdf(void)
void FUN_180733cdf(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memset();
  return;
}



int FUN_180733d70(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int64_t lVar14;
  int iVar15;
  int iStackX_10;
  int iStackX_18;
  
  iStackX_10 = param_2 + -1;
  iVar15 = 0x40000000;
  if (0 < iStackX_10) {
    puVar13 = (uint *)(param_1 + iStackX_10);
    iStackX_18 = param_2;
    do {
      if (0x1ffdf3c < *puVar13 + 0xffef9e) goto LAB_18073414c;
      lVar14 = (int64_t)(int)(*puVar13 * -0x80);
      uVar9 = 0x40000000 - (int)((uint64_t)(lVar14 * lVar14) >> 0x20);
      iVar15 = (int)((uint64_t)((int64_t)iVar15 * (int64_t)(int)uVar9) >> 0x20) * 4;
      if (iVar15 < 0x1a36e) goto LAB_18073414c;
      uVar1 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      if (uVar1 == 0) {
        iVar3 = -0x20;
      }
      else {
        iVar3 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = iVar3 + -0x1f;
      }
      iVar3 = iVar3 + 0x20;
      if (uVar1 == 0) {
        iVar12 = 0x1f;
      }
      else {
        iVar12 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        iVar12 = 0x1e - iVar12;
      }
      iVar10 = uVar9 << ((byte)iVar12 & 0x1f);
      lVar7 = 0x1fffffff / (int64_t)(iVar10 >> 0x10);
      iVar11 = (int)lVar7;
      iVar11 = (int)((uint64_t)
                     ((int64_t)
                      ((int)((uint64_t)((int64_t)iVar10 * (int64_t)(short)lVar7) >> 0x10) * -8) *
                     (int64_t)iVar11) >> 0x10) + iVar11 * 0x10000;
      iVar12 = (0x1f - iVar12) - iVar3;
      if (iVar12 < 1) {
        bVar2 = -(byte)iVar12;
        iVar10 = -0x80000000 >> (bVar2 & 0x1f);
        iVar12 = 0x7fffffff >> (bVar2 & 0x1f);
        if (iVar12 < iVar10) {
          iVar6 = iVar10;
          if (iVar10 < iVar11) {
LAB_180733ebd:
            iVar11 = iVar6 << (bVar2 & 0x1f);
          }
          else {
            if (iVar11 < iVar12) {
              iVar11 = iVar12;
            }
            iVar11 = iVar11 << (bVar2 & 0x1f);
          }
        }
        else {
          if (iVar11 <= iVar12) {
            iVar6 = iVar11;
            if (iVar11 < iVar10) {
              iVar6 = iVar10;
            }
            goto LAB_180733ebd;
          }
          iVar11 = iVar12 << (bVar2 & 0x1f);
        }
      }
      else if (iVar12 < 0x20) {
        iVar11 = iVar11 >> ((byte)iVar12 & 0x1f);
      }
      else {
        iVar11 = 0;
      }
      lVar7 = 0;
      if (0 < iStackX_18 >> 1) {
        puVar8 = puVar13;
        do {
          puVar8 = puVar8 + -1;
          uVar9 = *puVar8;
          uVar1 = param_1[lVar7];
          uVar4 = (uint)(((int)uVar9 * lVar14 >> 0x1e) + 1 >> 1);
          iVar12 = uVar1 - uVar4;
          if (iVar3 == 1) {
            if (iVar12 < 0) {
              if ((int)(uVar4 & ~uVar1) < 0) {
                iVar10 = 0x7fffffff;
              }
              else {
                iVar10 = uVar1 - uVar4;
              }
            }
            else {
              iVar10 = iVar12;
              if ((int)(uVar1 & ~uVar4) < 0) {
                iVar10 = -0x80000000;
              }
            }
            if (iVar12 < 0) {
              if ((int)(uVar4 & ~uVar1) < 0) {
                iVar12 = 0x7fffffff;
              }
              else {
                iVar12 = uVar1 - uVar4;
              }
            }
            else if ((int)(uVar1 & ~uVar4) < 0) {
              iVar12 = 0;
            }
            lVar5 = (uint64_t)(iVar12 * iVar11 & 1) + ((int64_t)iVar10 * (int64_t)iVar11 >> 1);
          }
          else {
            if (iVar12 < 0) {
              uVar4 = uVar4 & ~uVar1;
              iVar10 = 0x7fffffff;
            }
            else {
              iVar10 = -0x80000000;
              uVar4 = uVar1 & ~uVar4;
            }
            if ((int)uVar4 < 0) {
              iVar12 = iVar10;
            }
            lVar5 = ((int64_t)iVar12 * (int64_t)iVar11 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          }
          if (0xffffffff < lVar5 + 0x80000000U) goto LAB_18073414c;
          param_1[lVar7] = (int)lVar5;
          uVar1 = (uint)(((int)uVar1 * lVar14 >> 0x1e) + 1 >> 1);
          iVar12 = uVar9 - uVar1;
          if (iVar3 == 1) {
            if (iVar12 < 0) {
              if ((int)(uVar1 & ~uVar9) < 0) {
                iVar10 = 0x7fffffff;
              }
              else {
                iVar10 = uVar9 - uVar1;
              }
            }
            else {
              iVar10 = iVar12;
              if ((int)(uVar9 & ~uVar1) < 0) {
                iVar10 = -0x80000000;
              }
            }
            if (iVar12 < 0) {
              if ((int)(~uVar9 & uVar1) < 0) {
                iVar12 = 0x7fffffff;
              }
              else {
                iVar12 = uVar9 - uVar1;
              }
            }
            else if ((int)(uVar9 & ~uVar1) < 0) {
              iVar12 = 0;
            }
            lVar5 = (uint64_t)(iVar12 * iVar11 & 1) + ((int64_t)iVar10 * (int64_t)iVar11 >> 1);
          }
          else {
            if (iVar12 < 0) {
              iVar10 = 0x7fffffff;
              uVar9 = uVar1 & ~uVar9;
            }
            else {
              iVar10 = -0x80000000;
              uVar9 = uVar9 & ~uVar1;
            }
            if ((int)uVar9 < 0) {
              iVar12 = iVar10;
            }
            lVar5 = ((int64_t)iVar12 * (int64_t)iVar11 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          }
          if (0xffffffff < lVar5 + 0x80000000U) goto LAB_18073414c;
          *puVar8 = (uint)lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStackX_18 >> 1);
      }
      iStackX_18 = iStackX_18 + -1;
      iStackX_10 = iStackX_10 + -1;
      puVar13 = puVar13 + -1;
    } while (0 < iStackX_10);
  }
  if ((0x1ffdf3c < param_1[iStackX_10] + 0xffef9eU) ||
     (iVar15 = (int)((uint64_t)
                     ((int64_t)
                      (0x40000000 -
                      (int)((uint64_t)((int64_t)(*param_1 * -0x80) * (int64_t)(*param_1 * -0x80))
                           >> 0x20)) * (int64_t)iVar15) >> 0x20) * 4, iVar15 < 0x1a36e)) {
LAB_18073414c:
    iVar15 = 0;
  }
  return iVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180734160(uint64_t *param_1,uint param_2)
void FUN_180734160(uint64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  uint uVar5;
  int *piVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar22;
  int iVar23;
  int8_t auVar18 [16];
  int iVar27;
  int iVar28;
  int8_t auVar24 [16];
  int8_t auStack_98 [32];
  int aiStack_78 [24];
  uint64_t uStack_18;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int16_t uVar21;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  iVar22 = 0;
  iVar8 = 0;
  if ((0 < (int)param_2) && (iVar8 = 0, 7 < param_2)) {
    uVar5 = param_2 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    iVar10 = 0;
    iVar12 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar11 = 0;
    iVar13 = 0;
    iVar15 = 0;
    iVar17 = 0;
    piVar6 = aiStack_78;
    puVar9 = param_1;
    iVar8 = iVar22;
    do {
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      puVar9 = puVar9 + 2;
      uVar21 = (int16_t)(uVar1 >> 0x30);
      auVar20._8_4_ = 0;
      auVar20._0_8_ = uVar1;
      auVar20._12_2_ = uVar21;
      auVar20._14_2_ = uVar21;
      uVar21 = (int16_t)(uVar1 >> 0x20);
      auVar19._12_4_ = auVar20._12_4_;
      auVar19._8_2_ = 0;
      auVar19._0_8_ = uVar1;
      auVar19._10_2_ = uVar21;
      auVar18._10_6_ = auVar19._10_6_;
      auVar18._8_2_ = uVar21;
      auVar18._0_8_ = uVar1;
      uVar21 = (int16_t)(uVar1 >> 0x10);
      auVar3._4_8_ = auVar18._8_8_;
      auVar3._2_2_ = uVar21;
      auVar3._0_2_ = uVar21;
      iVar8 = iVar8 + 8;
      iVar22 = auVar3._0_4_ >> 0x10;
      iVar23 = auVar18._8_4_ >> 0x10;
      uVar21 = (int16_t)(uVar2 >> 0x30);
      auVar26._8_4_ = 0;
      auVar26._0_8_ = uVar2;
      auVar26._12_2_ = uVar21;
      auVar26._14_2_ = uVar21;
      uVar21 = (int16_t)(uVar2 >> 0x20);
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._8_2_ = 0;
      auVar25._0_8_ = uVar2;
      auVar25._10_2_ = uVar21;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = uVar21;
      auVar24._0_8_ = uVar2;
      uVar21 = (int16_t)(uVar2 >> 0x10);
      auVar4._4_8_ = auVar24._8_8_;
      auVar4._2_2_ = uVar21;
      auVar4._0_2_ = uVar21;
      iVar27 = auVar4._0_4_ >> 0x10;
      iVar28 = auVar24._8_4_ >> 0x10;
      iVar10 = (short)uVar1 + iVar10;
      iVar12 = iVar22 + iVar12;
      iVar14 = iVar23 + iVar14;
      iVar16 = (auVar19._12_4_ >> 0x10) + iVar16;
      iVar11 = (short)uVar2 + iVar11;
      iVar13 = iVar27 + iVar13;
      iVar15 = iVar28 + iVar15;
      iVar17 = (auVar25._12_4_ >> 0x10) + iVar17;
      *piVar6 = (int)(short)uVar1 << 0xc;
      piVar6[1] = iVar22;
      piVar6[2] = iVar23;
      piVar6[3] = auVar19._12_4_ >> 0x10;
      piVar6[4] = (int)(short)uVar2 << 0xc;
      piVar6[5] = iVar27;
      piVar6[6] = iVar28;
      piVar6[7] = auVar25._12_4_ >> 0x10;
      piVar6 = piVar6 + 8;
    } while (iVar8 < (int)(param_2 - uVar5));
    iVar22 = iVar11 + iVar10 + iVar15 + iVar14 + iVar13 + iVar12 + iVar17 + iVar16;
  }
  for (lVar7 = (int64_t)iVar8; lVar7 < (int)param_2; lVar7 = lVar7 + 1) {
    iVar8 = (int)*(short *)((int64_t)param_1 + lVar7 * 2);
    iVar22 = iVar22 + iVar8;
    aiStack_78[lVar7] = iVar8 << 0xc;
  }
  if (iVar22 < 0x1000) {
    FUN_180733d70(aiStack_78,param_2);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_98);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_98);
}





// 函数: void FUN_1807342b0(short param_1,char param_2,int *param_3,int param_4,uint param_5)
void FUN_1807342b0(short param_1,char param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *puVar6;
  char *pcVar7;
  uint64_t uVar8;
  int64_t lVar9;
  
  uVar8 = (uint64_t)param_5;
  if (param_4 == 8) {
    puVar6 = &processed_var_4064_ptr;
    if (param_5 != 4) {
      puVar6 = &processed_var_4272_ptr;
    }
    lVar9 = 0xb;
    if (param_5 != 4) {
      lVar9 = 3;
    }
  }
  else if (param_5 == 4) {
    puVar6 = &processed_var_4112_ptr;
    lVar9 = 0x22;
  }
  else {
    puVar6 = &processed_var_4280_ptr;
    lVar9 = 0xc;
  }
  iVar3 = (int)(short)param_4;
  iVar2 = iVar3 * 2;
  iVar1 = iVar3 * 0x12;
  if (0 < (int)param_5) {
    pcVar7 = puVar6 + param_2;
    do {
      iVar4 = (int)*pcVar7 + param_1 + iVar2;
      if (iVar1 < iVar2) {
        iVar5 = iVar2;
        if ((iVar4 == iVar2 || SBORROW4(iVar4,iVar2) != iVar4 + iVar3 * -2 < 0) &&
           (iVar5 = iVar4, iVar4 < iVar1)) {
          iVar5 = iVar1;
        }
      }
      else {
        iVar5 = iVar1;
        if ((iVar4 <= iVar1) && (iVar5 = iVar4, SBORROW4(iVar4,iVar2) != iVar4 + iVar3 * -2 < 0)) {
          iVar5 = iVar2;
        }
      }
      *param_3 = iVar5;
      pcVar7 = pcVar7 + lVar9;
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180734390(int64_t param_1,char *param_2,int64_t param_3)
void FUN_180734390(int64_t param_1,char *param_2,int64_t param_3)

{
  short sVar1;
  int16_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  short *psVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  short sVar11;
  int8_t auStack_a8 [31];
  byte abStack_89 [17];
  short asStack_78 [16];
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  FUN_1807248c0(auStack_58,abStack_89 + 1,param_3,(int)*param_2);
  sVar11 = *(short *)(param_3 + 2);
  iVar4 = 0;
  iVar8 = sVar11 + -1;
  lVar6 = (int64_t)iVar8;
  if (-1 < iVar8) {
    sVar1 = *(short *)(param_3 + 4);
    pcVar9 = param_2 + lVar6 + 1;
    do {
      pbVar10 = (byte *)(pcVar9 + (int64_t)(abStack_89 + -(int64_t)param_2));
      iVar3 = *pcVar9 * 0x400;
      iVar8 = (int)*pcVar9 << 10;
      if (iVar8 < 1) {
        if (iVar8 < 0) {
          iVar3 = iVar3 + 0x66;
        }
      }
      else {
        iVar3 = iVar3 + -0x66;
      }
      pcVar9 = pcVar9 + -1;
      iVar4 = (int)((uint64_t)((int64_t)iVar3 * (int64_t)sVar1) >> 0x10) +
              ((int)((uint)*pbVar10 * (int)(short)iVar4) >> 8);
      asStack_78[lVar6] = (short)iVar4;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar8 = 0;
  lVar6 = (int64_t)((int)*param_2 * (int)sVar11);
  pbVar10 = (byte *)(*(int64_t *)(param_3 + 8) + lVar6);
  psVar7 = (short *)(*(int64_t *)(param_3 + 0x10) + lVar6 * 2);
  if (0 < sVar11) {
    lVar5 = (int64_t)asStack_78 - (int64_t)psVar7;
    lVar6 = param_1 - (int64_t)psVar7;
    do {
      iVar4 = ((int)*(short *)(lVar5 + (int64_t)psVar7) << 0xe) / (int)*psVar7 +
              (uint)*pbVar10 * 0x80;
      if (iVar4 < 0x8000) {
        uVar2 = (int16_t)iVar4;
        if (iVar4 < 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0x7fff;
      }
      *(int16_t *)(lVar6 + (int64_t)psVar7) = uVar2;
      iVar8 = iVar8 + 1;
      sVar11 = *(short *)(param_3 + 2);
      psVar7 = psVar7 + 1;
      pbVar10 = pbVar10 + 1;
    } while (iVar8 < sVar11);
  }
  FUN_1807376c0(param_1,*(uint64_t *)(param_3 + 0x40),(int)sVar11);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_a8);
}





