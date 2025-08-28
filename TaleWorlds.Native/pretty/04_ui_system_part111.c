#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part111.c - 9 个函数

// 函数: void FUN_1807343b8(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1807343b8(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  int16_t uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char *unaff_RDI;
  longlong lVar7;
  short *psVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  longlong unaff_R14;
  byte abStackX_1f [9];
  ulonglong in_stack_00000070;
  
  FUN_1807248c0(&stack0x00000050,abStackX_1f + 1);
  sVar1 = *(short *)(param_3 + 2);
  iVar5 = 0;
  iVar9 = sVar1 + -1;
  lVar7 = (longlong)iVar9;
  if (-1 < iVar9) {
    sVar2 = *(short *)(param_3 + 4);
    pcVar10 = unaff_RDI + lVar7 + 1;
    do {
      pbVar11 = (byte *)(pcVar10 + (longlong)(abStackX_1f + -(longlong)unaff_RDI));
      iVar4 = *pcVar10 * 0x400;
      iVar9 = (int)*pcVar10 << 10;
      if (iVar9 < 1) {
        if (iVar9 < 0) {
          iVar4 = iVar4 + 0x66;
        }
      }
      else {
        iVar4 = iVar4 + -0x66;
      }
      pcVar10 = pcVar10 + -1;
      iVar5 = (int)((ulonglong)((longlong)iVar4 * (longlong)sVar2) >> 0x10) +
              ((int)((uint)*pbVar11 * (int)(short)iVar5) >> 8);
      *(short *)(&stack0x00000030 + lVar7 * 2) = (short)iVar5;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar9 = 0;
  lVar7 = (longlong)((int)*unaff_RDI * (int)sVar1);
  pbVar11 = (byte *)(*(longlong *)(param_3 + 8) + lVar7);
  psVar8 = (short *)(*(longlong *)(param_3 + 0x10) + lVar7 * 2);
  if (0 < sVar1) {
    lVar7 = -(longlong)psVar8;
    lVar6 = unaff_R14 - (longlong)psVar8;
    do {
      iVar5 = ((int)*(short *)(&stack0x00000030 + lVar7 + (longlong)psVar8) << 0xe) / (int)*psVar8 +
              (uint)*pbVar11 * 0x80;
      if (iVar5 < 0x8000) {
        uVar3 = (int16_t)iVar5;
        if (iVar5 < 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *(int16_t *)(lVar6 + (longlong)psVar8) = uVar3;
      iVar9 = iVar9 + 1;
      psVar8 = psVar8 + 1;
      pbVar11 = pbVar11 + 1;
    } while (iVar9 < *(short *)(param_3 + 2));
  }
  FUN_1807376c0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180734467(uint64_t param_1,uint64_t param_2,short *param_3,int param_4)
void FUN_180734467(uint64_t param_1,uint64_t param_2,short *param_3,int param_4)

{
  longlong lVar1;
  int16_t uVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RSI;
  byte *in_R10;
  longlong unaff_R14;
  int16_t unaff_R15W;
  ulonglong in_stack_00000070;
  
  lVar1 = -(longlong)param_3;
  lVar4 = unaff_R14 - (longlong)param_3;
  do {
    iVar3 = ((int)*(short *)(&stack0x00000030 + lVar1 + (longlong)param_3) << 0xe) / (int)*param_3 +
            (uint)*in_R10 * 0x80;
    if (iVar3 < 0x8000) {
      uVar2 = (short)iVar3;
      if (iVar3 < 0) {
        uVar2 = unaff_R15W;
      }
    }
    else {
      uVar2 = 0x7fff;
    }
    *(int16_t *)(lVar4 + (longlong)param_3) = uVar2;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    in_R10 = in_R10 + 1;
  } while (param_4 < *(short *)(unaff_RSI + 2));
  FUN_1807376c0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}



double FUN_180734500(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  uint64_t *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  iVar15 = 0;
  dVar21 = 0.0;
  if (0 < (longlong)(param_3 + -3)) {
    pfVar12 = (float *)(param_2 + 4);
    lVar18 = param_1 - param_2;
    lVar11 = ((longlong)(param_3 + -3) - 1U >> 2) + 1;
    iVar15 = (int)lVar11 * 4;
    do {
      pfVar5 = (float *)(lVar18 + -4 + (longlong)pfVar12);
      pfVar4 = pfVar12 + -1;
      pfVar3 = (float *)(lVar18 + (longlong)pfVar12);
      fVar8 = *pfVar12;
      pfVar1 = pfVar12 + 1;
      pfVar6 = (float *)(lVar18 + 4 + (longlong)pfVar12);
      pfVar7 = (float *)(lVar18 + 8 + (longlong)pfVar12);
      pfVar2 = pfVar12 + 2;
      pfVar12 = pfVar12 + 4;
      dVar21 = dVar21 + (double)*pfVar5 * (double)*pfVar4 + (double)*pfVar3 * (double)fVar8 +
                        (double)*pfVar6 * (double)*pfVar1 + (double)*pfVar7 * (double)*pfVar2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((iVar15 < param_3) && (3 < (uint)(param_3 - iVar15))) {
    lVar11 = (longlong)iVar15;
    dVar19 = 0.0;
    dVar20 = 0.0;
    dVar22 = 0.0;
    dVar23 = 0.0;
    uVar13 = param_3 - iVar15 & 0x80000003;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
    }
    puVar14 = (uint64_t *)(param_2 + 8 + lVar11 * 4);
    do {
      uVar9 = *(uint64_t *)((longlong)puVar14 + (param_1 - param_2) + -8);
      iVar15 = iVar15 + 4;
      lVar11 = lVar11 + 4;
      uVar10 = *(uint64_t *)((longlong)puVar14 + (param_1 - param_2));
      dVar19 = dVar19 + (double)(float)uVar9 * (double)(float)puVar14[-1];
      dVar20 = dVar20 + (double)(float)((ulonglong)uVar9 >> 0x20) *
                        (double)(float)((ulonglong)puVar14[-1] >> 0x20);
      uVar9 = *puVar14;
      puVar14 = puVar14 + 2;
      dVar22 = dVar22 + (double)(float)uVar10 * (double)(float)uVar9;
      dVar23 = dVar23 + (double)(float)((ulonglong)uVar10 >> 0x20) *
                        (double)(float)((ulonglong)uVar9 >> 0x20);
    } while (lVar11 < (int)(param_3 - uVar13));
    dVar21 = dVar21 + dVar19 + dVar22 + dVar20 + dVar23;
  }
  lVar11 = (longlong)iVar15;
  lVar18 = (longlong)param_3;
  if (lVar11 < lVar18) {
    if (3 < lVar18 - lVar11) {
      pfVar12 = (float *)(param_2 + 4 + lVar11 * 4);
      lVar17 = param_1 - param_2;
      lVar16 = ((lVar18 - lVar11) - 4U >> 2) + 1;
      lVar11 = lVar11 + lVar16 * 4;
      do {
        pfVar5 = (float *)(lVar17 + -4 + (longlong)pfVar12);
        pfVar4 = pfVar12 + -1;
        pfVar3 = (float *)(lVar17 + (longlong)pfVar12);
        fVar8 = *pfVar12;
        pfVar1 = pfVar12 + 1;
        pfVar6 = (float *)(lVar17 + 4 + (longlong)pfVar12);
        pfVar7 = (float *)(lVar17 + 8 + (longlong)pfVar12);
        pfVar2 = pfVar12 + 2;
        pfVar12 = pfVar12 + 4;
        dVar21 = (double)*pfVar5 * (double)*pfVar4 + dVar21 + (double)*pfVar3 * (double)fVar8 +
                 (double)*pfVar6 * (double)*pfVar1 + (double)*pfVar7 * (double)*pfVar2;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (lVar11 < lVar18) {
      pfVar12 = (float *)(param_2 + lVar11 * 4);
      lVar18 = lVar18 - lVar11;
      do {
        pfVar4 = (float *)((param_1 - param_2) + (longlong)pfVar12);
        fVar8 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        dVar21 = dVar21 + (double)*pfVar4 * (double)fVar8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  return dVar21;
}





// 函数: void FUN_180734750(int *param_1,longlong param_2,longlong param_3,int param_4)
void FUN_180734750(int *param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int16_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < (longlong)param_4 >> 1) {
    lVar7 = 0;
    do {
      iVar3 = *param_1;
      iVar6 = *(short *)(param_3 + lVar7 * 4) * 0x400;
      iVar4 = iVar6 - iVar3;
      iVar4 = (int)((ulonglong)((longlong)iVar4 * -0x647f) >> 0x10) + iVar4;
      iVar1 = param_1[1];
      *param_1 = iVar4 + iVar6;
      iVar5 = *(short *)(param_3 + 2 + lVar7 * 4) * 0x400;
      iVar6 = (int)((ulonglong)((longlong)(iVar5 - iVar1) * 0x2690) >> 0x10);
      param_1[1] = iVar6 + iVar5;
      iVar3 = (iVar1 + iVar3 + iVar4 + iVar6 >> 10) + 1 >> 1;
      if (iVar3 < 0x8000) {
        uVar2 = (int16_t)iVar3;
        if (iVar3 < -0x8000) {
          uVar2 = 0x8000;
        }
      }
      else {
        uVar2 = 0x7fff;
      }
      *(int16_t *)(param_2 + lVar7 * 2) = uVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)param_4 >> 1);
  }
  return;
}





// 函数: void FUN_180734778(void)
void FUN_180734778(void)

{
  int iVar1;
  int16_t uVar2;
  int iVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  do {
    iVar3 = *unaff_RSI;
    iVar6 = *(short *)(unaff_RBP + lVar7 * 4) * 0x400;
    iVar4 = iVar6 - iVar3;
    iVar4 = (int)((ulonglong)((longlong)iVar4 * -0x647f) >> 0x10) + iVar4;
    iVar1 = unaff_RSI[1];
    *unaff_RSI = iVar4 + iVar6;
    iVar5 = *(short *)(unaff_RBP + 2 + lVar7 * 4) * 0x400;
    iVar6 = (int)((ulonglong)((longlong)(iVar5 - iVar1) * 0x2690) >> 0x10);
    unaff_RSI[1] = iVar6 + iVar5;
    iVar3 = (iVar1 + iVar3 + iVar4 + iVar6 >> 10) + 1 >> 1;
    if (iVar3 < 0x8000) {
      uVar2 = (int16_t)iVar3;
      if (iVar3 < -0x8000) {
        uVar2 = 0x8000;
      }
    }
    else {
      uVar2 = 0x7fff;
    }
    *(int16_t *)(unaff_RDI + lVar7 * 2) = uVar2;
    lVar7 = lVar7 + 1;
  } while (lVar7 < unaff_RBX);
  return;
}





// 函数: void FUN_18073481b(void)
void FUN_18073481b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180734830(int *param_1,int16_t *param_2,longlong param_3,int param_4)
void FUN_180734830(int *param_1,int16_t *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int16_t uVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_7c8 [4];
  int8_t auStack_7b8 [1920];
  int *piStack_38;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)&piStack_38;
  iVar4 = *param_1;
  iVar7 = param_1[1];
  iVar8 = param_1[2];
  iVar9 = param_1[3];
  piStack_38 = param_1;
  do {
    iVar1 = 0x1e0;
    if (param_4 < 0x1e0) {
      iVar1 = param_4;
    }
    aiStack_7c8[0] = iVar4;
    aiStack_7c8[1] = iVar7;
    aiStack_7c8[2] = iVar8;
    aiStack_7c8[3] = iVar9;
    FUN_18072a9c0(param_1 + 4,auStack_7b8,param_3,&unknown_var_2880_ptr,iVar1);
    if (2 < iVar1) {
      piVar5 = aiStack_7c8;
      uVar6 = (ulonglong)((iVar1 - 3U) / 3 + 1);
      do {
        piVar5 = piVar5 + 3;
        iVar4 = ((int)((ulonglong)((longlong)piVar5[-3] * 0x1259) >> 0x10) +
                 (int)((ulonglong)((longlong)*piVar5 * 0x61f) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar5[-2] * 0x29f3) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar5[-1] * 0x2054) >> 0x10) >> 5) + 1 >> 1;
        if (iVar4 < 0x8000) {
          uVar3 = (int16_t)iVar4;
          if (iVar4 < -0x8000) {
            uVar3 = 0x8000;
          }
        }
        else {
          uVar3 = 0x7fff;
        }
        *param_2 = uVar3;
        iVar4 = ((int)((ulonglong)((longlong)piVar5[1] * 0x1259) >> 0x10) +
                 (int)((ulonglong)((longlong)*piVar5 * 0x29f3) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar5[-1] * 0x2054) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar5[-2] * 0x61f) >> 0x10) >> 5) + 1 >> 1;
        if (iVar4 < 0x8000) {
          uVar3 = (int16_t)iVar4;
          if (iVar4 < -0x8000) {
            uVar3 = 0x8000;
          }
        }
        else {
          uVar3 = 0x7fff;
        }
        param_2[1] = uVar3;
        param_2 = param_2 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar2 = (longlong)iVar1;
    param_4 = param_4 - iVar1;
    param_3 = param_3 + lVar2 * 2;
    iVar4 = aiStack_7c8[lVar2];
    iVar7 = aiStack_7c8[lVar2 + 1];
    iVar8 = aiStack_7c8[lVar2 + 2];
    iVar9 = *(int *)(auStack_7b8 + lVar2 * 4 + -4);
  } while (0 < param_4);
  *piStack_38 = iVar4;
  piStack_38[1] = iVar7;
  piStack_38[2] = iVar8;
  piStack_38[3] = iVar9;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)&piStack_38);
}





// 函数: void FUN_180734a30(longlong param_1,longlong param_2,int param_3,uint param_4)
void FUN_180734a30(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int32_t *puVar13;
  int iVar14;
  
  uVar9 = 0;
  if (0 < (int)param_4) {
    uVar4 = uVar9;
    if (0xf < param_4) {
      uVar3 = param_4 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      piVar12 = (int *)(param_2 + 0x20);
      iVar10 = 8;
      do {
        iVar14 = (int)uVar4;
        piVar12[-8] = iVar14;
        piVar12[-7] = iVar14 + 1;
        piVar12[-6] = iVar14 + 2;
        piVar12[-5] = iVar14 + 3;
        uVar4 = (ulonglong)(iVar14 + 0x10U);
        piVar12[-4] = iVar10 + -4;
        piVar12[-3] = iVar10 + -3;
        piVar12[-2] = iVar10 + -2;
        piVar12[-1] = iVar10 + -1;
        *piVar12 = iVar10;
        piVar12[1] = iVar10 + 1;
        piVar12[2] = iVar10 + 2;
        piVar12[3] = iVar10 + 3;
        piVar12[4] = iVar10 + 4;
        piVar12[5] = iVar10 + 5;
        piVar12[6] = iVar10 + 6;
        piVar12[7] = iVar10 + 7;
        piVar12 = piVar12 + 0x10;
        iVar10 = iVar10 + 0x10;
      } while ((int)(iVar14 + 0x10U) < (int)(param_4 - uVar3));
    }
    if ((int)uVar4 < (int)param_4) {
      piVar12 = (int *)(param_2 + (longlong)(int)uVar4 * 4);
      do {
        *piVar12 = (int)uVar4;
        piVar12 = piVar12 + 1;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)param_4);
    }
  }
  iVar10 = 1;
  if (1 < (int)param_4) {
    pfVar8 = (float *)(param_1 + 4);
    do {
      fVar1 = *pfVar8;
      iVar14 = iVar10 + -1;
      uVar4 = uVar9;
      if (0 < iVar10) {
        uVar5 = uVar9;
        if (3 < iVar10) {
          do {
            fVar2 = *(float *)(param_1 + uVar5 * 4);
            uVar4 = uVar5;
            if (fVar1 <= fVar2) goto LAB_180734c0f;
            *(float *)(param_1 + 4 + uVar5 * 4) = fVar2;
            *(int32_t *)(param_2 + 4 + uVar5 * 4) = *(int32_t *)(param_2 + uVar5 * 4);
            uVar4 = uVar5 - 1;
            fVar2 = *(float *)(param_1 + uVar4 * 4);
            if (fVar1 <= fVar2) goto LAB_180734c0f;
            *(float *)(param_1 + 4 + uVar4 * 4) = fVar2;
            *(int32_t *)(param_2 + 4 + uVar4 * 4) = *(int32_t *)(param_2 + uVar4 * 4);
            uVar4 = uVar5 - 2;
            fVar2 = *(float *)(param_1 + uVar4 * 4);
            if (fVar1 <= fVar2) goto LAB_180734c0f;
            *(float *)(param_1 + 4 + uVar4 * 4) = fVar2;
            *(int32_t *)(param_2 + 4 + uVar4 * 4) = *(int32_t *)(param_2 + uVar4 * 4);
            uVar4 = uVar5 - 3;
            fVar2 = *(float *)(param_1 + uVar4 * 4);
            if (fVar1 <= fVar2) goto LAB_180734c0f;
            *(float *)(param_1 + 4 + uVar4 * 4) = fVar2;
            iVar14 = iVar14 + -4;
            *(int32_t *)(param_2 + 4 + uVar4 * 4) = *(int32_t *)(param_2 + uVar4 * 4);
            uVar5 = uVar5 - 4;
          } while (2 < iVar14);
        }
        uVar4 = uVar5;
        if (-1 < iVar14) {
          puVar13 = (int32_t *)(param_2 + 4 + uVar5 * 4);
          do {
            fVar2 = *(float *)((param_1 - param_2) + -4 + (longlong)puVar13);
            if (fVar1 <= fVar2) break;
            *(float *)((param_1 - param_2) + (longlong)puVar13) = fVar2;
            uVar4 = uVar4 - 1;
            *puVar13 = puVar13[-1];
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
      }
LAB_180734c0f:
      *(float *)(param_1 + 4 + uVar4 * 4) = fVar1;
      pfVar8 = pfVar8 + 1;
      *(int *)(param_2 + 4 + uVar4 * 4) = iVar10;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_4);
  }
  if ((int)param_4 < param_3) {
    pfVar11 = (float *)(param_1 + (longlong)(int)param_4 * 4);
    pfVar8 = pfVar11 + -1;
    uVar3 = param_4;
    do {
      fVar1 = *pfVar11;
      if (*pfVar8 <= fVar1 && fVar1 != *pfVar8) {
        iVar10 = param_4 - 2;
        lVar7 = (longlong)(int)param_4 + -2;
        lVar6 = lVar7;
        if (-1 < iVar10) {
          if (3 < (int)(param_4 - 1)) {
            do {
              fVar2 = *(float *)(param_1 + lVar7 * 4);
              lVar6 = lVar7;
              if (fVar1 <= fVar2) goto LAB_180734d2f;
              *(float *)(param_1 + 4 + lVar7 * 4) = fVar2;
              *(int32_t *)(param_2 + 4 + lVar7 * 4) = *(int32_t *)(param_2 + lVar7 * 4);
              lVar6 = lVar7 + -1;
              fVar2 = *(float *)(param_1 + lVar6 * 4);
              if (fVar1 <= fVar2) goto LAB_180734d2f;
              *(float *)(param_1 + 4 + lVar6 * 4) = fVar2;
              *(int32_t *)(param_2 + 4 + lVar6 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
              lVar6 = lVar7 + -2;
              fVar2 = *(float *)(param_1 + lVar6 * 4);
              if (fVar1 <= fVar2) goto LAB_180734d2f;
              *(float *)(param_1 + 4 + lVar6 * 4) = fVar2;
              *(int32_t *)(param_2 + 4 + lVar6 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
              lVar6 = lVar7 + -3;
              fVar2 = *(float *)(param_1 + lVar6 * 4);
              if (fVar1 <= fVar2) goto LAB_180734d2f;
              *(float *)(param_1 + 4 + lVar6 * 4) = fVar2;
              iVar10 = iVar10 + -4;
              *(int32_t *)(param_2 + 4 + lVar6 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
              lVar7 = lVar7 + -4;
            } while (2 < iVar10);
          }
          lVar6 = lVar7;
          if (-1 < iVar10) {
            puVar13 = (int32_t *)(param_2 + 4 + lVar7 * 4);
            do {
              fVar2 = *(float *)((param_1 - param_2) + -4 + (longlong)puVar13);
              if (fVar1 <= fVar2) break;
              *(float *)((param_1 - param_2) + (longlong)puVar13) = fVar2;
              lVar6 = lVar6 + -1;
              *puVar13 = puVar13[-1];
              puVar13 = puVar13 + -1;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
        }
LAB_180734d2f:
        *(float *)(param_1 + 4 + lVar6 * 4) = fVar1;
        *(uint *)(param_2 + 4 + lVar6 * 4) = uVar3;
      }
      uVar3 = uVar3 + 1;
      pfVar11 = pfVar11 + 1;
    } while ((int)uVar3 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180734d70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5)
void FUN_180734d70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5)

{
  int8_t auStack_518 [40];
  uint64_t uStack_4f0;
  int iStack_4dc;
  uint64_t uStack_4d8;
  int8_t auStack_268 [384];
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_518;
  uStack_4f0 = param_1;
  iStack_4dc = param_4;
  uStack_4d8 = param_2;
  FUN_18072b3a0(param_2,param_4 * param_5);
                    // WARNING: Subroutine does not return
  memset(auStack_268,0,0xc0);
}





// 函数: void FUN_180734dc1(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180734dc1(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  longlong unaff_RBP;
  longlong in_R11;
  int unaff_R12D;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint64_t uStack0000000000000028;
  int iStack000000000000003c;
  uint64_t uStack0000000000000040;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  uStack0000000000000028 = param_1;
  iStack000000000000003c = param_4;
  uStack0000000000000040 = param_2;
  FUN_18072b3a0(param_2,param_4 * unaff_R12D);
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x1b0,0,0xc0);
}





