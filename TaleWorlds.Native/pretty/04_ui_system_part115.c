#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part115.c - 14 个函数

// 函数: void FUN_180736e4a(int param_1,int param_2,int64_t param_3,int param_4)
void FUN_180736e4a(int param_1,int param_2,int64_t param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int in_R10D;
  int iStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  char *pcStack0000000000000038;
  int8_t *in_stack_00000090;
  int *in_stack_00000098;
  int *in_stack_000000a0;
  uint *in_stack_000000a8;
  int *in_stack_000000b0;
  int in_stack_000000b8;
  int64_t in_stack_000000c0;
  int64_t lStack00000000000000c8;
  byte *in_stack_000000d0;
  short in_stack_000000d8;
  int in_stack_000000e0;
  int in_stack_000000e8;
  
  iStack0000000000000030 = in_R10D * 2;
  iStack0000000000000028 = param_1 * 2;
  iStack000000000000002c = param_2 * 2;
  pcStack0000000000000038 = (char *)(in_stack_000000c0 + 3);
  lStack00000000000000c8 = param_3 - (int64_t)in_stack_000000d0;
  do {
    bVar1 = in_stack_000000d0[lStack00000000000000c8];
    cVar2 = *pcStack0000000000000038;
    cVar3 = pcStack0000000000000038[1];
    cVar4 = pcStack0000000000000038[-2];
    cVar5 = pcStack0000000000000038[-1];
    iVar7 = (uint)bVar1 - in_stack_000000e0;
    iVar8 = (int)((uint64_t)
                  ((int64_t)cVar3 *
                  (int64_t)((int)cVar3 * in_stack_000000b0[0x18] + iStack000000000000002c)) >> 0x10
                 ) + (int)((uint64_t)
                           ((int64_t)
                            ((int)pcStack0000000000000038[-3] * *in_stack_000000b0 +
                            (int)cVar4 * in_stack_000000b0[1] * 2 + iStack0000000000000030 +
                            (int)cVar5 * in_stack_000000b0[2] * 2 +
                            (int)cVar3 * in_stack_000000b0[4] * 2 +
                            in_stack_000000b0[3] * (int)cVar2 * 2) *
                           (int64_t)pcStack0000000000000038[-3]) >> 0x10) +
                     (int)((uint64_t)
                           ((int64_t)
                            ((int)cVar4 * in_stack_000000b0[6] +
                            in_EAX + (int)cVar5 * in_stack_000000b0[7] * 2 +
                            (int)cVar3 * in_stack_000000b0[9] * 2 +
                            (int)cVar2 * in_stack_000000b0[8] * 2) * (int64_t)cVar4) >> 0x10) +
                     (int)((uint64_t)
                           ((int64_t)
                            ((int)cVar5 * in_stack_000000b0[0xc] +
                            param_4 * 2 + (int)cVar2 * in_stack_000000b0[0xd] * 2 +
                            (int)cVar3 * in_stack_000000b0[0xe] * 2) * (int64_t)cVar5) >> 0x10) +
                     0x8021 + (int)((uint64_t)
                                    ((int64_t)
                                     (in_stack_000000b0[0x12] * (int)cVar2 + iStack0000000000000028
                                     + (int)cVar3 * in_stack_000000b0[0x13] * 2) * (int64_t)cVar2)
                                   >> 0x10);
    if (-1 < iVar8) {
      if (iVar7 < 1) {
        iVar7 = 0;
      }
      iVar8 = iVar7 * 0x800 + iVar8;
      sVar6 = func_0x00018070b980(iVar8);
      iVar7 = (int)(short)(sVar6 + -0x780) * (int)in_stack_000000d8 + (uint)*in_stack_000000d0 * 4;
      if (iVar7 <= *in_stack_000000a0) {
        *in_stack_000000a0 = iVar7;
        *in_stack_00000098 = iVar8;
        *in_stack_00000090 = (char)in_stack_000000b8;
        *in_stack_000000a8 = (uint)bVar1;
      }
    }
    in_stack_000000b8 = in_stack_000000b8 + 1;
    pcStack0000000000000038 = pcStack0000000000000038 + 5;
    in_stack_000000d0 = in_stack_000000d0 + 1;
  } while (in_stack_000000b8 < in_stack_000000e8);
  return;
}





// 函数: void FUN_1807370ea(void)
void FUN_1807370ea(void)

{
  return;
}





// 函数: void FUN_180737100(int16_t *param_1,short *param_2,int param_3)
void FUN_180737100(int16_t *param_1,short *param_2,int param_3)

{
  short *psVar1;
  int64_t lVar2;
  int16_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  short *psVar9;
  
  iVar7 = (int)*param_2;
  iVar5 = 1;
  if (1 < param_2[1] - iVar7) {
    iVar5 = param_2[1] - iVar7;
  }
  lVar2 = 0x20000 / (int64_t)iVar5;
  iVar4 = (int)lVar2;
  iVar5 = 1;
  if (1 < iVar7) {
    iVar5 = iVar7;
  }
  iVar5 = iVar4 + (int)(0x20000 / (int64_t)iVar5);
  uVar3 = 0x7fff;
  if (iVar5 < 0x7fff) {
    uVar3 = (short)iVar5;
  }
  lVar6 = (int64_t)param_3 + -1;
  *param_1 = uVar3;
  if (1 < lVar6) {
    lVar8 = ((int64_t)param_3 - 3U >> 1) + 1;
    psVar9 = param_2 + 2;
    do {
      psVar1 = psVar9 + 2;
      iVar5 = 1;
      if (1 < (int)*psVar9 - (int)psVar9[-1]) {
        iVar5 = (int)*psVar9 - (int)psVar9[-1];
      }
      iVar7 = (int)(0x20000 / (int64_t)iVar5);
      iVar5 = iVar7 + (int)lVar2;
      uVar3 = 0x7fff;
      if (iVar5 < 0x7fff) {
        uVar3 = (short)iVar5;
      }
      *(int16_t *)((int64_t)param_1 + (-6 - (int64_t)param_2) + (int64_t)psVar1) = uVar3;
      iVar5 = 1;
      if (1 < (int)psVar9[1] - (int)*psVar9) {
        iVar5 = (int)psVar9[1] - (int)*psVar9;
      }
      lVar2 = 0x20000 / (int64_t)iVar5;
      iVar4 = (int)lVar2;
      iVar7 = iVar4 + iVar7;
      uVar3 = 0x7fff;
      if (iVar7 < 0x7fff) {
        uVar3 = (short)iVar7;
      }
      *(int16_t *)((int64_t)param_1 + (-4 - (int64_t)param_2) + (int64_t)psVar1) = uVar3;
      lVar8 = lVar8 + -1;
      psVar9 = psVar1;
    } while (lVar8 != 0);
  }
  iVar5 = 1;
  if (1 < 0x8000 - param_2[lVar6]) {
    iVar5 = 0x8000 - param_2[lVar6];
  }
  iVar4 = (int)(0x20000 / (int64_t)iVar5) + iVar4;
  uVar3 = 0x7fff;
  if (iVar4 < 0x7fff) {
    uVar3 = (short)iVar4;
  }
  param_1[lVar6] = uVar3;
  return;
}





// 函数: void FUN_180737176(void)
void FUN_180737176(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int16_t uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar6;
  int64_t unaff_RDI;
  uint in_R9D;
  int64_t lVar7;
  short *psVar8;
  int unaff_R14D;
  int64_t unaff_R15;
  
  lVar7 = (unaff_RBP - 2U >> 1) + 1;
  psVar8 = (short *)(unaff_RSI + 4);
  do {
    iVar6 = (int)unaff_RDI;
    psVar1 = psVar8 + 2;
    iVar2 = iVar6;
    if (iVar6 < (int)*psVar8 - (int)psVar8[-1]) {
      iVar2 = (int)*psVar8 - (int)psVar8[-1];
    }
    iVar3 = (int)(0x20000 / (int64_t)iVar2);
    iVar2 = iVar3 + unaff_R14D;
    uVar5 = (short)in_R9D;
    if (iVar2 < (int)in_R9D) {
      uVar5 = (short)iVar2;
    }
    *(int16_t *)((unaff_R15 - unaff_RSI) + -6 + (int64_t)psVar1) = uVar5;
    iVar2 = iVar6;
    if (iVar6 < (int)psVar8[1] - (int)*psVar8) {
      iVar2 = (int)psVar8[1] - (int)*psVar8;
    }
    unaff_R14D = (int)(0x20000 / (int64_t)iVar2);
    iVar3 = unaff_R14D + iVar3;
    uVar5 = (short)in_R9D;
    if (iVar3 < (int)in_R9D) {
      uVar5 = (short)iVar3;
    }
    *(int16_t *)((unaff_R15 - unaff_RSI) + -4 + (int64_t)psVar1) = uVar5;
    lVar7 = lVar7 - unaff_RDI;
    psVar8 = psVar1;
  } while (lVar7 != 0);
  iVar2 = 0x8000 - *(short *)(unaff_RSI + unaff_RBP * 2);
  if (iVar6 < iVar2) {
    iVar6 = iVar2;
  }
  uVar4 = (int)(0x20000 / (int64_t)iVar6) + unaff_R14D;
  if ((int)uVar4 < (int)in_R9D) {
    in_R9D = uVar4 & 0xffff;
  }
  *(short *)(unaff_R15 + unaff_RBP * 2) = (short)in_R9D;
  return;
}





// 函数: void FUN_180737202(void)
void FUN_180737202(void)

{
  uint uVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint in_R9D;
  int unaff_R14D;
  int64_t unaff_R15;
  
  iVar2 = 0x8000 - *(short *)(unaff_RSI + unaff_RBP * 2);
  if (unaff_EDI < iVar2) {
    unaff_EDI = iVar2;
  }
  uVar1 = (int)(0x20000 / (int64_t)unaff_EDI) + unaff_R14D;
  if ((int)uVar1 < (int)in_R9D) {
    in_R9D = uVar1 & 0xffff;
  }
  *(short *)(unaff_R15 + unaff_RBP * 2) = (short)in_R9D;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180737240(uint64_t param_1,uint64_t param_2,short *param_3,uint64_t param_4,
void FUN_180737240(uint64_t param_1,uint64_t param_2,short *param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6)

{
  uint64_t uVar1;
  int8_t auStack_158 [16];
  int32_t uStack_148;
  uint64_t uStack_120;
  short *psStack_108;
  uint64_t uStack_100;
  uint64_t uStack_e8;
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  uStack_148 = param_6;
  uStack_120 = param_4;
  psStack_108 = param_3;
  uStack_100 = param_2;
  uStack_e8 = param_1;
  FUN_1807376c0(param_2,*(uint64_t *)(param_3 + 0x20),(int)param_3[1]);
  uVar1 = (int64_t)*param_3 * 4 + 0xf;
  if (uVar1 <= (uint64_t)((int64_t)*param_3 * 4)) {
    uVar1 = 0xffffffffffffff0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar1 & 0xfffffffffffffff0);
}





// 函数: void FUN_1807376c0(short *param_1,short *param_2,uint param_3)
void FUN_1807376c0(short *param_1,short *param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  int64_t lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  int64_t lVar11;
  short *psVar12;
  ushort *puVar13;
  ushort uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  int64_t lVar20;
  int iVar21;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int8_t auVar22 [16];
  int iVar33;
  int8_t auVar25 [16];
  int iVar34;
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int16_t uVar28;
  
  lVar20 = (int64_t)(int)param_3;
  iVar21 = 0;
  do {
    lVar11 = 1;
    uVar8 = 0;
    iVar10 = (int)*param_1 - (int)*param_2;
    lVar16 = 0;
    uVar18 = 1;
    uVar19 = uVar8;
    if (0 < (int)(param_3 - 1)) {
      do {
        iVar6 = ((int)param_1[lVar11] - (int)param_2[lVar11]) - (int)param_1[lVar11 + -1];
        uVar19 = uVar18;
        lVar5 = lVar11;
        if (iVar10 <= iVar6) {
          uVar19 = uVar8;
          lVar5 = lVar16;
          iVar6 = iVar10;
        }
        iVar10 = iVar6;
        lVar16 = lVar5;
        uVar18 = uVar18 + 1;
        lVar11 = lVar11 + 1;
        uVar8 = uVar19;
      } while ((int)uVar18 <= (int)(param_3 - 1));
    }
    iVar6 = 0x8000;
    iVar7 = (0x8000 - param_1[lVar20 + -1]) - (int)param_2[lVar20];
    if (iVar7 < iVar10) {
      lVar16 = lVar20;
      iVar10 = iVar7;
      uVar19 = param_3;
    }
    if (-1 < iVar10) {
      return;
    }
    if (uVar19 == 0) {
      *param_1 = *param_2;
    }
    else if (uVar19 == param_3) {
      param_1[lVar20 + -1] = -0x8000 - param_2[lVar20];
    }
    else {
      iVar10 = 0;
      lVar11 = 0;
      if ((0 < (int)uVar19) && (7 < uVar19)) {
        iVar10 = 0;
        iVar29 = 0;
        iVar31 = 0;
        iVar33 = 0;
        iVar7 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar34 = 0;
        uVar8 = uVar19 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        do {
          uVar15 = *(uint64_t *)(param_2 + lVar11);
          uVar28 = (int16_t)(uVar15 >> 0x30);
          auVar24._8_4_ = 0;
          auVar24._0_8_ = uVar15;
          auVar24._12_2_ = uVar28;
          auVar24._14_2_ = uVar28;
          uVar28 = (int16_t)(uVar15 >> 0x20);
          auVar23._12_4_ = auVar24._12_4_;
          auVar23._8_2_ = 0;
          auVar23._0_8_ = uVar15;
          auVar23._10_2_ = uVar28;
          auVar22._10_6_ = auVar23._10_6_;
          auVar22._8_2_ = uVar28;
          auVar22._0_8_ = uVar15;
          uVar28 = (int16_t)(uVar15 >> 0x10);
          auVar3._4_8_ = auVar22._8_8_;
          auVar3._2_2_ = uVar28;
          auVar3._0_2_ = uVar28;
          iVar10 = (short)uVar15 + iVar10;
          iVar29 = (auVar3._0_4_ >> 0x10) + iVar29;
          iVar31 = (auVar22._8_4_ >> 0x10) + iVar31;
          iVar33 = (auVar23._12_4_ >> 0x10) + iVar33;
          uVar15 = *(uint64_t *)(param_2 + lVar11 + 4);
          uVar28 = (int16_t)(uVar15 >> 0x30);
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar15;
          auVar27._12_2_ = uVar28;
          auVar27._14_2_ = uVar28;
          uVar28 = (int16_t)(uVar15 >> 0x20);
          auVar26._12_4_ = auVar27._12_4_;
          auVar26._8_2_ = 0;
          auVar26._0_8_ = uVar15;
          auVar26._10_2_ = uVar28;
          auVar25._10_6_ = auVar26._10_6_;
          auVar25._8_2_ = uVar28;
          auVar25._0_8_ = uVar15;
          uVar28 = (int16_t)(uVar15 >> 0x10);
          auVar4._4_8_ = auVar25._8_8_;
          auVar4._2_2_ = uVar28;
          auVar4._0_2_ = uVar28;
          lVar11 = lVar11 + 8;
          iVar7 = (short)uVar15 + iVar7;
          iVar30 = (auVar4._0_4_ >> 0x10) + iVar30;
          iVar32 = (auVar25._8_4_ >> 0x10) + iVar32;
          iVar34 = (auVar26._12_4_ >> 0x10) + iVar34;
        } while (lVar11 < (int)(uVar19 - uVar8));
        iVar10 = iVar7 + iVar10 + iVar32 + iVar31 + iVar30 + iVar29 + iVar34 + iVar33;
      }
      for (; lVar11 < lVar16; lVar11 = lVar11 + 1) {
        iVar10 = iVar10 + param_2[lVar11];
      }
      iVar7 = (int)param_2[lVar16] >> 1;
      uVar19 = iVar10 + iVar7;
      for (lVar11 = lVar20; lVar16 < lVar11; lVar11 = lVar11 + -1) {
        iVar6 = iVar6 - param_2[lVar11];
      }
      sVar9 = param_1[lVar16 + -1];
      uVar8 = iVar6 - iVar7;
      sVar2 = param_1[lVar16];
      iVar6 = (int)sVar9 + (int)sVar2 >> 1;
      iVar10 = ((int)sVar9 + (int)sVar2 & 1U) + iVar6;
      sVar17 = (short)iVar6;
      if ((int)uVar8 < (int)uVar19) {
        if (iVar10 <= (int)uVar19) {
          if (iVar10 < (int)uVar8) {
            uVar19 = uVar8 & 0xffff;
          }
          else {
            uVar19 = (uint)(ushort)((sVar9 + sVar2 & 1U) + sVar17);
          }
        }
      }
      else if ((int)uVar8 < iVar10) {
        uVar19 = uVar8 & 0xffff;
      }
      else {
        uVar14 = (sVar2 + sVar9 & 1U) + sVar17;
        if (iVar10 < (int)uVar19) {
          uVar14 = (ushort)uVar19;
        }
        uVar19 = (uint)uVar14;
      }
      sVar9 = (short)uVar19 - (param_2[lVar16] >> 1);
      param_1[lVar16 + -1] = sVar9;
      param_1[lVar16] = param_2[lVar16] + sVar9;
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 < 0x14);
  if (iVar21 == 0x14) {
    FUN_180737c30(param_1,param_3);
    sVar9 = *param_2;
    if (*param_2 < *param_1) {
      sVar9 = *param_1;
    }
    *param_1 = sVar9;
    if (1 < (int)param_3) {
      psVar12 = param_1 + 1;
      uVar15 = (uint64_t)(param_3 - 1);
      do {
        psVar1 = (short *)(((int64_t)param_2 - (int64_t)param_1) + (int64_t)psVar12);
        iVar21 = (int)*(short *)((int64_t)psVar1 + (int64_t)param_1 + (-2 - (int64_t)param_2)) +
                 (int)*psVar1;
        if (iVar21 < 0x8000) {
          if (iVar21 < -0x8000) {
            iVar21 = -0x8000;
          }
        }
        else {
          iVar21 = 0x7fff;
        }
        sVar9 = (short)iVar21;
        if ((short)iVar21 < *psVar12) {
          sVar9 = *psVar12;
        }
        *psVar12 = sVar9;
        psVar12 = psVar12 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar19 = 0x8000 - (int)param_2[lVar20];
    lVar16 = (int64_t)(int)(param_3 - 2);
    if ((int)param_1[lVar20 + -1] < (int)uVar19) {
      uVar19 = (uint)(ushort)param_1[lVar20 + -1];
    }
    param_1[lVar20 + -1] = (short)uVar19;
    if (-1 < (int)(param_3 - 2)) {
      puVar13 = (ushort *)(param_1 + lVar16);
      do {
        psVar12 = (short *)((int64_t)param_2 + (2 - (int64_t)param_1) + (int64_t)puVar13);
        uVar19 = (int)*(short *)((int64_t)psVar12 + ((int64_t)param_1 - (int64_t)param_2)) -
                 (int)*psVar12;
        if ((int)(short)*puVar13 < (int)uVar19) {
          uVar19 = (uint)*puVar13;
        }
        lVar16 = lVar16 + -1;
        *puVar13 = (ushort)uVar19;
        puVar13 = puVar13 + -1;
      } while (-1 < lVar16);
    }
  }
  return;
}





// 函数: void FUN_180737a50(int64_t param_1,int64_t param_2,int param_3,uint param_4)
void FUN_180737a50(int64_t param_1,int64_t param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int32_t *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  
  uVar8 = 0;
  lVar7 = (int64_t)(int)param_4;
  if (0 < (int)param_4) {
    uVar9 = uVar8;
    if (0xf < param_4) {
      uVar2 = param_4 & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      piVar4 = (int *)(param_2 + 0x20);
      iVar11 = 8;
      do {
        iVar6 = (int)uVar9;
        piVar4[-8] = iVar6;
        piVar4[-7] = iVar6 + 1;
        piVar4[-6] = iVar6 + 2;
        piVar4[-5] = iVar6 + 3;
        uVar9 = (uint64_t)(iVar6 + 0x10U);
        piVar4[-4] = iVar11 + -4;
        piVar4[-3] = iVar11 + -3;
        piVar4[-2] = iVar11 + -2;
        piVar4[-1] = iVar11 + -1;
        *piVar4 = iVar11;
        piVar4[1] = iVar11 + 1;
        piVar4[2] = iVar11 + 2;
        piVar4[3] = iVar11 + 3;
        piVar4[4] = iVar11 + 4;
        piVar4[5] = iVar11 + 5;
        piVar4[6] = iVar11 + 6;
        piVar4[7] = iVar11 + 7;
        piVar4 = piVar4 + 0x10;
        iVar11 = iVar11 + 0x10;
      } while ((int)(iVar6 + 0x10U) < (int)(param_4 - uVar2));
    }
    if ((int)uVar9 < (int)param_4) {
      piVar4 = (int *)(param_2 + (int64_t)(int)uVar9 * 4);
      do {
        *piVar4 = (int)uVar9;
        piVar4 = piVar4 + 1;
        uVar2 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar2;
      } while ((int)uVar2 < (int)param_4);
    }
  }
  iVar11 = 1;
  if (1 < (int)param_4) {
    piVar4 = (int *)(param_1 + 4);
    do {
      iVar6 = *piVar4;
      iVar5 = iVar11 + -1;
      uVar9 = uVar8;
      if (-1 < iVar5) {
        puVar3 = (int32_t *)((param_2 - param_1) + (int64_t)piVar4);
        do {
          iVar1 = *(int *)((param_1 - param_2) + -4 + (int64_t)puVar3);
          if (iVar1 <= iVar6) break;
          *(int *)((param_1 - param_2) + (int64_t)puVar3) = iVar1;
          uVar9 = uVar9 - 1;
          *puVar3 = puVar3[-1];
          puVar3 = puVar3 + -1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      *(int *)(param_1 + 4 + uVar9 * 4) = iVar6;
      piVar4 = piVar4 + 1;
      *(int *)(param_2 + 4 + uVar9 * 4) = iVar11;
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_4);
  }
  if ((int)param_4 < param_3) {
    piVar4 = (int *)(param_1 + lVar7 * 4);
    uVar2 = param_4;
    do {
      iVar11 = *piVar4;
      if (iVar11 < *(int *)(param_1 + -4 + lVar7 * 4)) {
        iVar6 = param_4 - 2;
        lVar10 = lVar7 + -2;
        if (-1 < iVar6) {
          puVar3 = (int32_t *)(param_2 + 4 + lVar10 * 4);
          do {
            iVar5 = *(int *)((int64_t)puVar3 + (param_1 - param_2) + -4);
            if (iVar5 <= iVar11) break;
            *(int *)((int64_t)puVar3 + (param_1 - param_2)) = iVar5;
            lVar10 = lVar10 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar3 + -1;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        *(int *)(param_1 + 4 + lVar10 * 4) = iVar11;
        *(uint *)(param_2 + 4 + lVar10 * 4) = uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar2 < param_3);
  }
  return;
}





// 函数: void FUN_180737b3f(void)
void FUN_180737b3f(void)

{
  int iVar1;
  int32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int *piVar6;
  int64_t lVar7;
  int in_R11D;
  uint uVar8;
  uint64_t uVar9;
  int unaff_R12D;
  int64_t unaff_R14;
  
  piVar6 = (int *)(unaff_R14 + 4);
  do {
    iVar5 = *piVar6;
    iVar3 = in_R11D + -1;
    lVar7 = unaff_RBP;
    if (-1 < iVar3) {
      puVar2 = (int32_t *)((unaff_RSI - unaff_R14) + (int64_t)piVar6);
      do {
        iVar4 = *(int *)((unaff_R14 - unaff_RSI) + -4 + (int64_t)puVar2);
        if (iVar4 <= iVar5) break;
        *(int *)((unaff_R14 - unaff_RSI) + (int64_t)puVar2) = iVar4;
        lVar7 = lVar7 + -1;
        *puVar2 = puVar2[-1];
        puVar2 = puVar2 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    *(int *)(unaff_R14 + 4 + lVar7 * 4) = iVar5;
    piVar6 = piVar6 + 1;
    *(int *)(unaff_RSI + 4 + lVar7 * 4) = in_R11D;
    unaff_RBP = unaff_RBP + 1;
    in_R11D = in_R11D + 1;
    iVar5 = (int)unaff_RBX;
  } while (in_R11D < iVar5);
  uVar9 = unaff_RBX & 0xffffffff;
  if (iVar5 < unaff_R12D) {
    piVar6 = (int *)(unaff_R14 + unaff_RBX * 4);
    do {
      iVar3 = *piVar6;
      if (iVar3 < *(int *)(unaff_R14 + -4 + unaff_RBX * 4)) {
        iVar4 = iVar5 + -2;
        lVar7 = unaff_RBX - 2;
        if (-1 < iVar4) {
          puVar2 = (int32_t *)(unaff_RSI + 4 + lVar7 * 4);
          do {
            iVar1 = *(int *)((int64_t)puVar2 + (unaff_R14 - unaff_RSI) + -4);
            if (iVar1 <= iVar3) break;
            *(int *)((int64_t)puVar2 + (unaff_R14 - unaff_RSI)) = iVar1;
            lVar7 = lVar7 + -1;
            *puVar2 = puVar2[-1];
            puVar2 = puVar2 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        *(int *)(unaff_R14 + 4 + lVar7 * 4) = iVar3;
        *(int *)(unaff_RSI + 4 + lVar7 * 4) = (int)uVar9;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      piVar6 = piVar6 + 1;
    } while ((int)uVar8 < unaff_R12D);
  }
  return;
}





// 函数: void FUN_180737bad(void)
void FUN_180737bad(void)

{
  int iVar1;
  int iVar2;
  int32_t *puVar3;
  int iVar4;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  int *piVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int unaff_R12D;
  int64_t unaff_R14;
  
  uVar8 = unaff_RBX & 0xffffffff;
  if ((int)unaff_RBX < unaff_R12D) {
    piVar5 = (int *)(unaff_R14 + unaff_RBX * 4);
    do {
      iVar1 = *piVar5;
      if (iVar1 < *(int *)(unaff_R14 + -4 + unaff_RBX * 4)) {
        iVar4 = (int)unaff_RBX + -2;
        lVar6 = unaff_RBX - 2;
        if (-1 < iVar4) {
          puVar3 = (int32_t *)(unaff_RSI + 4 + lVar6 * 4);
          do {
            iVar2 = *(int *)((int64_t)puVar3 + (unaff_R14 - unaff_RSI) + -4);
            if (iVar2 <= iVar1) break;
            *(int *)((int64_t)puVar3 + (unaff_R14 - unaff_RSI)) = iVar2;
            lVar6 = lVar6 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar3 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        *(int *)(unaff_R14 + 4 + lVar6 * 4) = iVar1;
        *(int *)(unaff_RSI + 4 + lVar6 * 4) = (int)uVar8;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      piVar5 = piVar5 + 1;
    } while ((int)uVar7 < unaff_R12D);
  }
  return;
}





// 函数: void FUN_180737c30(int64_t param_1,int param_2)
void FUN_180737c30(int64_t param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  
  if (1 < (int64_t)param_2) {
    lVar5 = 1;
    iVar6 = 0;
    do {
      sVar1 = *(short *)(param_1 + lVar5 * 2);
      iVar4 = iVar6;
      lVar3 = lVar5;
      while ((lVar3 = lVar3 + -1, -1 < iVar4 &&
             (sVar2 = *(short *)(param_1 + lVar3 * 2), sVar1 < sVar2))) {
        *(short *)(param_1 + 2 + lVar3 * 2) = sVar2;
        iVar4 = iVar4 + -1;
      }
      iVar6 = iVar6 + 1;
      *(short *)(param_1 + 2 + lVar3 * 2) = sVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_2);
  }
  return;
}





// 函数: void FUN_180737ca0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
void FUN_180737ca0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  uint64_t uVar12;
  
  if (0 < param_5) {
    lVar8 = 0;
    uVar12 = (uint64_t)param_6;
    param_2 = param_2 - param_4;
    do {
      iVar10 = 0;
      iVar5 = 0;
      if (-1 < (int64_t)(uVar12 - 2)) {
        uVar7 = uVar12 >> 1;
        pbVar6 = (byte *)((uVar12 - 2) + param_3);
        psVar11 = (short *)(param_4 + (uVar12 - 1) * 2);
        do {
          iVar9 = (int)(short)(*(short *)(param_2 + (int64_t)psVar11) + (ushort)pbVar6[1] * -0x80)
                  * (int)*psVar11;
          uVar1 = iVar9 - (iVar5 >> 1);
          uVar3 = (int)uVar1 >> 0x1f;
          iVar5 = (int)(short)(*(short *)(param_2 + 2 + (int64_t)(psVar11 + -2)) +
                              (ushort)*pbVar6 * -0x80) * (int)psVar11[-1];
          uVar2 = iVar5 - (iVar9 >> 1);
          uVar4 = (int)uVar2 >> 0x1f;
          iVar10 = iVar10 + ((uVar1 ^ uVar3) - uVar3) + ((uVar2 ^ uVar4) - uVar4);
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + -2;
          psVar11 = psVar11 + -2;
        } while (uVar7 != 0);
      }
      *(int *)(param_1 + lVar8 * 4) = iVar10;
      param_3 = param_3 + uVar12;
      lVar8 = lVar8 + 1;
      param_4 = param_4 + uVar12 * 2;
      param_2 = param_2 + uVar12 * -2;
    } while (lVar8 < param_5);
  }
  return;
}





// 函数: void FUN_180737ccf(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180737ccf(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  byte *pbVar6;
  uint64_t unaff_RSI;
  uint64_t uVar7;
  uint64_t unaff_RDI;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int64_t in_R10;
  int64_t in_R11;
  short *psVar11;
  uint64_t unaff_R12;
  uint64_t uVar12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t in_stack_00000040;
  int in_stack_00000060;
  int in_stack_00000068;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  lVar8 = 0;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  uVar12 = (uint64_t)in_stack_00000068;
  param_4 = in_R10 - param_4;
  do {
    iVar10 = 0;
    iVar5 = 0;
    if (-1 < (int64_t)(uVar12 - 2)) {
      uVar7 = uVar12 >> 1;
      pbVar6 = (byte *)((uVar12 - 2) + unaff_R15);
      psVar11 = (short *)(unaff_R14 + (uVar12 - 1) * 2);
      do {
        iVar9 = (int)(short)(*(short *)(param_4 + (int64_t)psVar11) + (ushort)pbVar6[1] * -0x80) *
                (int)*psVar11;
        uVar1 = iVar9 - (iVar5 >> 1);
        uVar3 = (int)uVar1 >> 0x1f;
        iVar5 = (int)(short)(*(short *)(param_4 + 2 + (int64_t)(psVar11 + -2)) +
                            (ushort)*pbVar6 * -0x80) * (int)psVar11[-1];
        uVar2 = iVar5 - (iVar9 >> 1);
        uVar4 = (int)uVar2 >> 0x1f;
        iVar10 = iVar10 + ((uVar1 ^ uVar3) - uVar3) + ((uVar2 ^ uVar4) - uVar4);
        uVar7 = uVar7 - 1;
        pbVar6 = pbVar6 + -2;
        psVar11 = psVar11 + -2;
      } while (uVar7 != 0);
      param_1 = (int64_t)in_stack_00000060;
      param_2 = in_stack_00000040;
    }
    *(int *)(param_2 + lVar8 * 4) = iVar10;
    unaff_R15 = unaff_R15 + uVar12;
    lVar8 = lVar8 + 1;
    unaff_R14 = unaff_R14 + uVar12 * 2;
    param_4 = param_4 + uVar12 * -2;
  } while (lVar8 < param_1);
  return;
}





// 函数: void FUN_180737de4(void)
void FUN_180737de4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



