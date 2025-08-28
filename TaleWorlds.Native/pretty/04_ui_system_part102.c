#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part102.c - 16 个函数

// 函数: void FUN_18072ad65(uint param_1,uint64_t param_2,uint64_t param_3,short param_4)
void FUN_18072ad65(uint param_1,uint64_t param_2,uint64_t param_3,short param_4)

{
  short in_AX;
  int16_t uVar1;
  int iVar2;
  longlong lVar3;
  int *unaff_RBX;
  int *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong in_R10;
  longlong in_R11;
  int16_t *in_stack_00000050;
  
  lVar4 = unaff_RDI - (longlong)in_stack_00000050;
  do {
    lVar6 = (longlong)*(short *)(lVar4 + (longlong)in_stack_00000050);
    iVar5 = *unaff_RBX * 4 + (int)((ulonglong)(*unaff_RSI * lVar6) >> 0x10) * 4;
    lVar3 = (longlong)iVar5;
    iVar2 = (((int)((in_R10 & 0xffffffff) * lVar3 >> 0x10) >> 0xd) + 1 >> 1) +
            (int)((ulonglong)(in_AX * lVar3) >> 0x10) + unaff_RBX[1];
    *unaff_RBX = iVar2;
    *unaff_RBX = (int)((ulonglong)(unaff_RSI[1] * lVar6) >> 0x10) + iVar2;
    iVar2 = (((int)((ulonglong)param_1 * lVar3 >> 0x10) >> 0xd) + 1 >> 1) +
            (int)((ulonglong)(param_4 * lVar3) >> 0x10);
    unaff_RBX[1] = iVar2;
    unaff_RBX[1] = (int)((ulonglong)(unaff_RSI[2] * lVar6) >> 0x10) + iVar2;
    iVar2 = iVar5 + 0x3fff >> 0xe;
    if (iVar2 < 0x8000) {
      uVar1 = (int16_t)iVar2;
      if (iVar2 < -0x8000) {
        uVar1 = 0x8000;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *in_stack_00000050 = uVar1;
    in_stack_00000050 = in_stack_00000050 + 1;
    in_R11 = in_R11 + -1;
  } while (in_R11 != 0);
  return;
}





// 函数: void FUN_18072ae6c(void)
void FUN_18072ae6c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072af30(longlong param_1,longlong param_2,int param_3)
void FUN_18072af30(longlong param_1,longlong param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int8_t auVar4 [16];
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int8_t (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  int32_t uVar15;
  int32_t uVar16;
  double dVar17;
  int8_t auStack_1b8 [8];
  double adStack_1b0 [49];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  uVar9 = (ulonglong)param_3;
  lVar5 = 0;
  pauVar12 = (int8_t (*) [16])auStack_1b8;
  do {
    dVar17 = (double)*(float *)(param_2 + lVar5 * 4);
    lVar5 = lVar5 + 1;
    auVar4._8_4_ = SUB84(dVar17,0);
    auVar4._0_8_ = dVar17;
    auVar4._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *pauVar12 = auVar4;
    pauVar12 = pauVar12 + 1;
  } while (lVar5 <= (longlong)uVar9);
  if (0 < param_3) {
    lVar14 = 0;
    lVar11 = 8;
    lVar5 = -8;
    uVar10 = uVar9;
    do {
      uVar15 = SUB84(adStack_1b0[0],0);
      uVar16 = (int32_t)((ulonglong)adStack_1b0[0] >> 0x20);
      if (adStack_1b0[0] <= 9.999999717180685e-10) {
        uVar15 = 0xe0000000;
        uVar16 = 0x3e112e0b;
      }
      lVar8 = (longlong)(int)uVar10;
      pdVar6 = (double *)((longlong)adStack_1b0 + lVar11 + 0x10);
      lVar13 = 0;
      dVar17 = (-1.0 / (double)CONCAT44(uVar16,uVar15)) *
               *(double *)((longlong)adStack_1b0 + lVar11);
      *(float *)(param_1 + lVar14 * 4) = (float)dVar17;
      if (3 < lVar8) {
        lVar7 = (lVar8 - 4U >> 2) + 1;
        lVar13 = lVar7 * 4;
        do {
          dVar1 = *(double *)((longlong)pdVar6 + lVar5 + -0x10);
          dVar2 = pdVar6[-2];
          pdVar6[-2] = dVar1 * dVar17 + dVar2;
          dVar3 = *(double *)((longlong)pdVar6 + lVar5);
          *(double *)((longlong)pdVar6 + lVar5 + -0x10) = dVar2 * dVar17 + dVar1;
          dVar1 = *pdVar6;
          *pdVar6 = dVar3 * dVar17 + dVar1;
          dVar2 = *(double *)((longlong)pdVar6 + lVar5 + 0x10);
          *(double *)((longlong)pdVar6 + lVar5) = dVar1 * dVar17 + dVar3;
          dVar1 = pdVar6[2];
          pdVar6[2] = dVar2 * dVar17 + dVar1;
          dVar3 = *(double *)((longlong)pdVar6 + lVar5 + 0x20);
          *(double *)((longlong)pdVar6 + lVar5 + 0x10) = dVar1 * dVar17 + dVar2;
          dVar1 = pdVar6[4];
          pdVar6[4] = dVar3 * dVar17 + dVar1;
          *(double *)((longlong)pdVar6 + lVar5 + 0x20) = dVar1 * dVar17 + dVar3;
          pdVar6 = pdVar6 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar13 < lVar8) {
        pdVar6 = adStack_1b0 + lVar13 * 2;
        lVar8 = lVar8 - lVar13;
        do {
          dVar1 = *pdVar6;
          dVar2 = *(double *)(lVar11 + (longlong)pdVar6);
          *(double *)(lVar11 + (longlong)pdVar6) = dVar1 * dVar17 + dVar2;
          *pdVar6 = dVar2 * dVar17 + dVar1;
          pdVar6 = pdVar6 + 2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar10 = (ulonglong)((int)uVar10 - 1);
      lVar14 = lVar14 + 1;
      lVar5 = lVar5 + -0x10;
      lVar11 = lVar11 + 0x10;
    } while (lVar14 < (longlong)uVar9);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1b8);
}





// 函数: void FUN_18072afa1(void)
void FUN_18072afa1(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong in_R11;
  double dVar10;
  double in_XMM5_Qa;
  double adStackX_8 [4];
  
  uVar7 = (ulonglong)((int)in_R11 + 8);
  lVar8 = in_R11 + -8;
  do {
    dVar10 = adStackX_8[0];
    if (adStackX_8[0] <= in_XMM5_Qa) {
      dVar10 = in_XMM5_Qa;
    }
    lVar6 = (longlong)unaff_EBX;
    pdVar4 = (double *)((longlong)adStackX_8 + uVar7 + 0x10);
    lVar9 = 0;
    dVar10 = (-1.0 / dVar10) * *(double *)((longlong)adStackX_8 + uVar7);
    *(float *)(unaff_RSI + in_R11 * 4) = (float)dVar10;
    if (3 < lVar6) {
      lVar5 = (lVar6 - 4U >> 2) + 1;
      lVar9 = lVar5 * 4;
      do {
        dVar1 = *(double *)((longlong)pdVar4 + lVar8 + -0x10);
        dVar2 = pdVar4[-2];
        pdVar4[-2] = dVar1 * dVar10 + dVar2;
        dVar3 = *(double *)((longlong)pdVar4 + lVar8);
        *(double *)((longlong)pdVar4 + lVar8 + -0x10) = dVar2 * dVar10 + dVar1;
        dVar1 = *pdVar4;
        *pdVar4 = dVar3 * dVar10 + dVar1;
        dVar2 = *(double *)((longlong)pdVar4 + lVar8 + 0x10);
        *(double *)((longlong)pdVar4 + lVar8) = dVar1 * dVar10 + dVar3;
        dVar1 = pdVar4[2];
        pdVar4[2] = dVar2 * dVar10 + dVar1;
        dVar3 = *(double *)((longlong)pdVar4 + lVar8 + 0x20);
        *(double *)((longlong)pdVar4 + lVar8 + 0x10) = dVar1 * dVar10 + dVar2;
        dVar1 = pdVar4[4];
        pdVar4[4] = dVar3 * dVar10 + dVar1;
        *(double *)((longlong)pdVar4 + lVar8 + 0x20) = dVar1 * dVar10 + dVar3;
        pdVar4 = pdVar4 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar9 < lVar6) {
      pdVar4 = adStackX_8 + lVar9 * 2;
      lVar6 = lVar6 - lVar9;
      do {
        dVar1 = *pdVar4;
        dVar2 = *(double *)(uVar7 + (longlong)pdVar4);
        *(double *)(uVar7 + (longlong)pdVar4) = dVar1 * dVar10 + dVar2;
        *pdVar4 = dVar2 * dVar10 + dVar1;
        pdVar4 = pdVar4 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    unaff_EBX = unaff_EBX + -1;
    in_R11 = in_R11 + 1;
    lVar8 = lVar8 + -0x10;
    uVar7 = uVar7 + 0x10;
  } while (in_R11 < unaff_RDI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050((float)adStackX_8[0]);
}





// 函数: void FUN_18072b12c(void)
void FUN_18072b12c(void)

{
  uint64_t uStackX_8;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050((float)uStackX_8);
}





// 函数: void FUN_18072b160(longlong param_1,float *param_2,int param_3)
void FUN_18072b160(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  
  if (0 < param_3) {
    lVar8 = 0;
    lVar9 = param_1 - (longlong)param_2;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + 1;
      fVar1 = *param_2;
      lVar6 = 0;
      lVar11 = (longlong)iVar10 >> 1;
      if (3 < lVar11) {
        pfVar12 = (float *)(lVar9 + -8 + (longlong)param_2);
        pfVar7 = (float *)(param_1 + 8);
        lVar5 = (lVar11 - 4U >> 2) + 1;
        lVar6 = lVar5 * 4;
        do {
          fVar2 = pfVar12[1];
          fVar3 = pfVar7[-2];
          pfVar7[-2] = fVar2 * fVar1 + fVar3;
          fVar4 = *pfVar12;
          pfVar12[1] = fVar3 * fVar1 + fVar2;
          fVar2 = pfVar7[-1];
          pfVar7[-1] = fVar4 * fVar1 + fVar2;
          fVar3 = pfVar12[-1];
          *pfVar12 = fVar2 * fVar1 + fVar4;
          fVar2 = *pfVar7;
          *pfVar7 = fVar3 * fVar1 + fVar2;
          fVar4 = pfVar12[-2];
          pfVar12[-1] = fVar2 * fVar1 + fVar3;
          fVar2 = pfVar7[1];
          pfVar7[1] = fVar4 * fVar1 + fVar2;
          pfVar7 = pfVar7 + 4;
          pfVar12[-2] = fVar2 * fVar1 + fVar4;
          pfVar12 = pfVar12 + -4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar6 < lVar11) {
        pfVar7 = (float *)(param_1 + ((lVar8 - lVar6) + -1) * 4);
        do {
          fVar2 = *pfVar7;
          fVar3 = *(float *)(param_1 + lVar6 * 4);
          *(float *)(param_1 + lVar6 * 4) = fVar2 * fVar1 + fVar3;
          lVar6 = lVar6 + 1;
          *pfVar7 = fVar3 * fVar1 + fVar2;
          pfVar7 = pfVar7 + -1;
        } while (lVar6 < lVar11);
      }
      *(float *)(lVar9 + (longlong)param_2) = -fVar1;
      lVar8 = lVar8 + 1;
      param_2 = param_2 + 1;
    } while (lVar8 < param_3);
  }
  return;
}





// 函数: void FUN_18072b17c(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_18072b17c(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong unaff_RBP;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  float *in_R11;
  uint in_XMM5_Da;
  
  lVar8 = 0;
  iVar9 = 0;
  do {
    iVar9 = iVar9 + 1;
    fVar1 = *in_R11;
    lVar6 = 0;
    lVar10 = (longlong)iVar9 >> 1;
    if (3 < lVar10) {
      pfVar11 = (float *)((param_1 - param_2) + -8 + (longlong)in_R11);
      pfVar7 = (float *)(param_4 + 8);
      lVar5 = (lVar10 - 4U >> 2) + 1;
      lVar6 = lVar5 * 4;
      do {
        fVar2 = pfVar11[1];
        fVar3 = pfVar7[-2];
        pfVar7[-2] = fVar2 * fVar1 + fVar3;
        fVar4 = *pfVar11;
        pfVar11[1] = fVar3 * fVar1 + fVar2;
        fVar2 = pfVar7[-1];
        pfVar7[-1] = fVar4 * fVar1 + fVar2;
        fVar3 = pfVar11[-1];
        *pfVar11 = fVar2 * fVar1 + fVar4;
        fVar2 = *pfVar7;
        *pfVar7 = fVar3 * fVar1 + fVar2;
        fVar4 = pfVar11[-2];
        pfVar11[-1] = fVar2 * fVar1 + fVar3;
        fVar2 = pfVar7[1];
        pfVar7[1] = fVar4 * fVar1 + fVar2;
        pfVar7 = pfVar7 + 4;
        pfVar11[-2] = fVar2 * fVar1 + fVar4;
        pfVar11 = pfVar11 + -4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar6 < lVar10) {
      pfVar7 = (float *)(param_4 + ((lVar8 - lVar6) + -1) * 4);
      do {
        fVar2 = *pfVar7;
        fVar3 = *(float *)(param_4 + lVar6 * 4);
        *(float *)(param_4 + lVar6 * 4) = fVar2 * fVar1 + fVar3;
        lVar6 = lVar6 + 1;
        *pfVar7 = fVar3 * fVar1 + fVar2;
        pfVar7 = pfVar7 + -1;
      } while (lVar6 < lVar10);
    }
    *(uint *)((param_1 - param_2) + (longlong)in_R11) = (uint)fVar1 ^ in_XMM5_Da;
    lVar8 = lVar8 + 1;
    in_R11 = in_R11 + 1;
  } while (lVar8 < unaff_RBP);
  return;
}





// 函数: void FUN_18072b301(void)
void FUN_18072b301(void)

{
  return;
}





// 函数: void FUN_18072b310(longlong param_1,longlong param_2,int param_3,int param_4)
void FUN_18072b310(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar2 = 0;
  iVar1 = param_3;
  if (param_4 <= param_3) {
    iVar1 = param_4;
  }
  uVar3 = uVar2;
  if (0 < iVar1) {
    do {
      dVar4 = (double)FUN_180734500(param_2,param_2 + (longlong)(int)uVar3 * 4,param_3);
      param_3 = param_3 + -1;
      *(float *)(param_1 + uVar2 * 4) = (float)dVar4;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while ((longlong)uVar2 < (longlong)iVar1);
  }
  return;
}





// 函数: void FUN_18072b33f(double param_1)
void FUN_18072b33f(double param_1)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  int unaff_ESI;
  uint unaff_EDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    param_1 = (double)FUN_180734500(param_1,unaff_R14 + (longlong)(int)unaff_EDI * 4,unaff_ESI);
    unaff_EDI = unaff_EDI + 1;
    unaff_ESI = unaff_ESI + -1;
    *(float *)(unaff_R15 + uVar1 * 4) = (float)param_1;
    uVar1 = uVar1 + 1;
  } while ((longlong)uVar1 < unaff_RBP);
  return;
}





// 函数: void FUN_18072b380(void)
void FUN_18072b380(void)

{
  return;
}



double FUN_18072b3a0(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar9 = 0;
  dVar16 = 0.0;
  if (0 < param_2 + -3) {
    pfVar8 = (float *)(param_1 + 8);
    uVar6 = (param_2 - 4U >> 2) + 1;
    uVar11 = (ulonglong)uVar6;
    iVar9 = uVar6 * 4;
    do {
      pfVar1 = pfVar8 + -1;
      pfVar2 = pfVar8 + -2;
      fVar5 = *pfVar8;
      pfVar3 = pfVar8 + 1;
      pfVar8 = pfVar8 + 4;
      dVar16 = dVar16 + (double)*pfVar2 * (double)*pfVar2 + (double)*pfVar1 * (double)*pfVar1 +
                        (double)fVar5 * (double)fVar5 + (double)*pfVar3 * (double)*pfVar3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar9 < param_2) {
    if (3 < (uint)(param_2 - iVar9)) {
      uVar6 = param_2 - iVar9 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar17 = 0.0;
      dVar18 = 0.0;
      puVar10 = (uint64_t *)(param_1 + (longlong)iVar9 * 4);
      do {
        iVar9 = iVar9 + 4;
        dVar12 = (double)(float)*puVar10;
        dVar13 = (double)(float)((ulonglong)*puVar10 >> 0x20);
        puVar4 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        dVar14 = dVar14 + dVar12 * dVar12;
        dVar15 = dVar15 + dVar13 * dVar13;
        dVar12 = (double)(float)*puVar4;
        dVar13 = (double)(float)((ulonglong)*puVar4 >> 0x20);
        dVar17 = dVar17 + dVar12 * dVar12;
        dVar18 = dVar18 + dVar13 * dVar13;
      } while (iVar9 < (int)(param_2 - uVar6));
      dVar16 = dVar16 + dVar14 + dVar17 + dVar15 + dVar18;
    }
    if (iVar9 < param_2) {
      if (3 < param_2 - iVar9) {
        pfVar8 = (float *)(param_1 + ((longlong)iVar9 + 2) * 4);
        do {
          pfVar1 = pfVar8 + -2;
          iVar9 = iVar9 + 4;
          pfVar2 = pfVar8 + -1;
          fVar5 = *pfVar8;
          pfVar3 = pfVar8 + 1;
          pfVar8 = pfVar8 + 4;
          dVar16 = (double)*pfVar1 * (double)*pfVar1 + dVar16 + (double)*pfVar2 * (double)*pfVar2 +
                   (double)fVar5 * (double)fVar5 + (double)*pfVar3 * (double)*pfVar3;
        } while (iVar9 < param_2 + -3);
      }
      if (iVar9 < param_2) {
        pfVar8 = (float *)(param_1 + (longlong)iVar9 * 4);
        lVar7 = (longlong)(param_2 - iVar9);
        do {
          fVar5 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          dVar16 = dVar16 + (double)fVar5 * (double)fVar5;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
  }
  return dVar16;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072b540(double *param_1,longlong param_2,float param_3,int param_4,int param_5)
void FUN_18072b540(double *param_1,longlong param_2,float param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double *pdVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double adStack_1b8 [26];
  double adStack_e8 [26];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)adStack_1b8;
  lVar9 = (longlong)param_5;
  adStack_e8[0x11] = 0.0;
  adStack_e8[0] = 0.0;
  adStack_e8[1] = 0.0;
  adStack_e8[2] = 0.0;
  adStack_e8[3] = 0.0;
  uVar7 = 0;
  adStack_e8[4] = 0.0;
  adStack_e8[5] = 0.0;
  adStack_e8[6] = 0.0;
  adStack_e8[7] = 0.0;
  adStack_e8[8] = 0.0;
  adStack_e8[9] = 0.0;
  adStack_e8[0x10] = 0.0;
  adStack_1b8[0x10] = 0.0;
  adStack_e8[10] = 0.0;
  adStack_e8[0xb] = 0.0;
  adStack_e8[0xc] = 0.0;
  adStack_e8[0xd] = 0.0;
  adStack_e8[0xe] = 0.0;
  adStack_e8[0xf] = 0.0;
  adStack_e8[0x12] = 0.0;
  adStack_e8[0x13] = 0.0;
  adStack_e8[0x14] = 0.0;
  adStack_e8[0x15] = 0.0;
  adStack_e8[0x16] = 0.0;
  adStack_e8[0x17] = 0.0;
  adStack_e8[0x18] = 0.0;
  adStack_1b8[0] = 0.0;
  adStack_1b8[1] = 0.0;
  adStack_1b8[2] = 0.0;
  adStack_1b8[3] = 0.0;
  adStack_1b8[4] = 0.0;
  adStack_1b8[5] = 0.0;
  adStack_1b8[6] = 0.0;
  adStack_1b8[7] = 0.0;
  adStack_1b8[8] = 0.0;
  adStack_1b8[9] = 0.0;
  adStack_1b8[10] = 0.0;
  adStack_1b8[0xb] = 0.0;
  adStack_1b8[0xc] = 0.0;
  adStack_1b8[0xd] = 0.0;
  adStack_1b8[0xe] = 0.0;
  adStack_1b8[0xf] = 0.0;
  adStack_1b8[0x11] = 0.0;
  adStack_1b8[0x12] = 0.0;
  adStack_1b8[0x13] = 0.0;
  adStack_1b8[0x14] = 0.0;
  adStack_1b8[0x15] = 0.0;
  adStack_1b8[0x16] = 0.0;
  adStack_1b8[0x17] = 0.0;
  adStack_1b8[0x18] = 0.0;
  uVar10 = uVar7;
  if (0 < param_4) {
    do {
      dVar13 = (double)*(float *)(param_2 + uVar10 * 4);
      uVar3 = uVar7;
      if (0 < param_5) {
        do {
          dVar1 = adStack_e8[uVar3 + 1];
          dVar12 = (dVar1 - dVar13) * (double)param_3 + adStack_e8[uVar3];
          adStack_e8[uVar3] = dVar13;
          adStack_e8[uVar3 + 1] = dVar12;
          adStack_1b8[uVar3] = dVar13 * adStack_e8[0] + adStack_1b8[uVar3];
          dVar13 = adStack_e8[uVar3 + 2];
          adStack_1b8[uVar3 + 1] = dVar12 * adStack_e8[0] + adStack_1b8[uVar3 + 1];
          uVar3 = uVar3 + 2;
          dVar13 = (dVar13 - dVar12) * (double)param_3 + dVar1;
        } while ((longlong)uVar3 < lVar9);
      }
      adStack_e8[lVar9] = dVar13;
      uVar10 = uVar10 + 1;
      adStack_1b8[lVar9] = dVar13 * adStack_e8[0] + adStack_1b8[lVar9];
    } while ((longlong)uVar10 < (longlong)param_4);
  }
  uVar11 = param_5 + 1;
  uVar10 = uVar7;
  if (((0 < (int)uVar11) && (uVar10 = 0, 7 < uVar11)) &&
     ((adStack_1b8 + lVar9 < param_1 ||
      ((int8_t *)((longlong)param_1 + lVar9 * 4) < adStack_1b8)))) {
    uVar6 = uVar11 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    pdVar4 = param_1 + 2;
    uVar10 = uVar7;
    do {
      uVar10 = (ulonglong)((int)uVar10 + 8);
      dVar13 = adStack_1b8[uVar7 + 2];
      dVar1 = adStack_1b8[uVar7 + 3];
      pdVar4[-2] = (double)CONCAT44((float)adStack_1b8[uVar7 + 1],(float)adStack_1b8[uVar7]);
      dVar12 = adStack_1b8[uVar7 + 4];
      dVar2 = adStack_1b8[uVar7 + 5];
      pdVar4[-1] = (double)CONCAT44((float)dVar1,(float)dVar13);
      dVar13 = adStack_1b8[uVar7 + 6];
      dVar1 = adStack_1b8[uVar7 + 7];
      uVar7 = uVar7 + 8;
      *pdVar4 = (double)CONCAT44((float)dVar2,(float)dVar12);
      pdVar4[1] = (double)CONCAT44((float)dVar1,(float)dVar13);
      pdVar4 = pdVar4 + 4;
    } while ((longlong)uVar7 < (longlong)(int)(uVar11 - uVar6));
  }
  lVar9 = (longlong)(int)uVar10;
  lVar8 = (longlong)(int)uVar11;
  if (lVar9 < lVar8) {
    if (3 < lVar8 - lVar9) {
      pfVar5 = (float *)((longlong)param_1 + lVar9 * 4 + 8);
      do {
        dVar13 = adStack_1b8[lVar9 + 1];
        pfVar5[-2] = (float)adStack_1b8[lVar9];
        dVar1 = adStack_1b8[lVar9 + 2];
        pfVar5[-1] = (float)dVar13;
        dVar13 = adStack_1b8[lVar9 + 3];
        lVar9 = lVar9 + 4;
        *pfVar5 = (float)dVar1;
        pfVar5[1] = (float)dVar13;
        pfVar5 = pfVar5 + 4;
      } while (lVar9 < lVar8 + -3);
    }
    for (; lVar9 < lVar8; lVar9 = lVar9 + 1) {
      *(float *)((longlong)param_1 + lVar9 * 4) = (float)adStack_1b8[lVar9];
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)adStack_1b8);
}





// 函数: void FUN_18072b830(longlong param_1,longlong param_2,int param_3,int param_4)
void FUN_18072b830(longlong param_1,longlong param_2,int param_3,int param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 1.0;
  fVar3 = 1.0 / (float)(param_4 + 1);
  fVar5 = 2.0 - fVar3 * fVar3 * 9.869605;
  if (param_3 < 2) {
    fVar3 = fVar3 * 3.1415927;
    fVar4 = 0.0;
  }
  else {
    fVar3 = fVar5 * 0.5;
  }
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    pfVar1 = (float *)(param_1 + 4);
    lVar2 = ((longlong)param_4 - 1U >> 2) + 1;
    do {
      pfVar1[-1] = *(float *)(param_2 + -4 + (longlong)pfVar1) * 0.5 * (fVar3 + fVar4);
      *pfVar1 = fVar3 * *(float *)(param_2 + (longlong)pfVar1);
      fVar4 = fVar3 * fVar5 - fVar4;
      pfVar1[1] = *(float *)(param_2 + 4 + (longlong)pfVar1) * 0.5 * (fVar3 + fVar4);
      fVar3 = fVar4 * fVar5 - fVar3;
      pfVar1[2] = fVar4 * *(float *)(param_2 + 8 + (longlong)pfVar1);
      pfVar1 = pfVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072b930(longlong param_1,longlong param_2,int param_3,ulonglong param_4,uint param_5,
void FUN_18072b930(longlong param_1,longlong param_2,int param_3,ulonglong param_4,uint param_5,
                  int param_6,int32_t param_7)

{
  char cVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  void *puVar13;
  int32_t *puVar14;
  int32_t auStack_514 [231];
  int8_t auStack_178 [32];
  int iStack_158;
  int32_t uStack_150;
  int iStack_148;
  uint uStack_144;
  ulonglong uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  int32_t auStack_118 [22];
  int32_t auStack_c0 [26];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  uStack_144 = (uint)param_4;
  if (param_5 == 4) {
    iStack_148 = 0x22;
    iVar7 = (int)(char)(&unknown_var_4108_ptr)[param_6];
    pcVar10 = &unknown_var_4248_ptr + (longlong)param_6 * 8;
    puVar13 = &unknown_var_4112_ptr;
  }
  else {
    iVar7 = 0xc;
    pcVar10 = &unknown_var_4304_ptr;
    iStack_148 = 0xc;
    puVar13 = &unknown_var_4280_ptr;
  }
  lStack_138 = (longlong)iVar7;
  param_2 = param_2 + (longlong)(int)(uStack_144 * 4) * 4;
  if (0 < (int)param_5) {
    lStack_130 = (longlong)(int)uStack_144 << 2;
    lStack_128 = (longlong)param_3;
    iVar7 = 0;
    puVar14 = (int32_t *)(param_1 + 8);
    uStack_140 = (ulonglong)param_5;
    do {
      lVar3 = (longlong)pcVar10[1];
      lVar9 = (longlong)*pcVar10;
      lVar11 = 0;
      iStack_158 = ((int)pcVar10[1] - (int)*pcVar10) + 1;
      uStack_150 = param_7;
      FUN_180712f20(param_2,param_2 + (lVar3 + lStack_128) * -4,auStack_c0 + 2,param_4);
      if (lVar9 <= lVar3) {
        lVar4 = lVar3 - lVar9;
        if (3 < lVar4 + 1) {
          lVar8 = ((lVar3 - lVar9) - 3U >> 2) + 1;
          lVar9 = lVar9 + lVar8 * 4;
          puVar5 = auStack_c0 + lVar4;
          do {
            auStack_118[lVar11] = puVar5[2];
            auStack_118[lVar11 + 1] = puVar5[1];
            auStack_118[lVar11 + 2] = *puVar5;
            auStack_118[lVar11 + 3] = puVar5[-1];
            lVar11 = lVar11 + 4;
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + -4;
          } while (lVar8 != 0);
        }
        if (lVar9 <= lVar3) {
          puVar6 = auStack_118 + lVar11;
          lVar11 = (lVar3 - lVar9) + 1;
          puVar5 = auStack_c0 + (lVar3 - lVar9) + 2;
          do {
            uVar2 = *puVar5;
            puVar5 = puVar5 + -1;
            *puVar6 = uVar2;
            puVar6 = puVar6 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      cVar1 = *pcVar10;
      puVar5 = puVar14;
      lVar9 = lStack_138;
      iVar12 = iVar7;
      if (0 < lStack_138) {
        do {
          lVar3 = (longlong)((int)(char)puVar13[iVar12] - (int)cVar1);
          puVar5[-2] = auStack_118[lVar3];
          puVar5[-1] = auStack_118[lVar3 + 1];
          *puVar5 = auStack_118[lVar3 + 2];
          puVar5[1] = auStack_118[lVar3 + 3];
          puVar5[2] = auStack_118[lVar3 + 4];
          lVar9 = lVar9 + -1;
          puVar5 = puVar5 + 5;
          iVar12 = iVar12 + 1;
        } while (lVar9 != 0);
      }
      param_2 = param_2 + lStack_130;
      pcVar10 = pcVar10 + 2;
      iVar7 = iVar7 + iStack_148;
      puVar14 = puVar14 + 0xaa;
      uStack_140 = uStack_140 - 1;
      param_4 = (ulonglong)uStack_144;
    } while (uStack_140 != 0);
    uStack_140 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_18072b9d4(uint64_t param_1,uint64_t param_2,int param_3,ulonglong param_4,
void FUN_18072b9d4(uint64_t param_1,uint64_t param_2,int param_3,ulonglong param_4,
                  uint64_t param_5,ulonglong param_6,uint64_t param_7,longlong param_8)

{
  char cVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  char *unaff_RBP;
  longlong lVar9;
  int iVar10;
  longlong in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  int iVar11;
  int32_t *puVar12;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  ulonglong in_stack_00000120;
  int32_t in_stack_000001b0;
  int32_t auStack_39c [231];
  
  lStack0000000000000048 = (longlong)(int)param_4 << 2;
  lStack0000000000000050 = (longlong)param_3;
  iVar11 = 0;
  puVar12 = (int32_t *)(unaff_RBX + 8);
  param_7 = in_R10;
  do {
    lVar3 = (longlong)unaff_RBP[1];
    lVar8 = (longlong)*unaff_RBP;
    lVar9 = 0;
    param_5._0_4_ = in_stack_000001b0;
    FUN_180712f20(unaff_R12,unaff_R12 + (lVar3 + lStack0000000000000050) * -4,&stack0x000000c0,
                  param_4,((int)unaff_RBP[1] - (int)*unaff_RBP) + 1);
    if (lVar8 <= lVar3) {
      lVar4 = lVar3 - lVar8;
      if (3 < lVar4 + 1) {
        lVar7 = ((lVar3 - lVar8) - 3U >> 2) + 1;
        lVar8 = lVar8 + lVar7 * 4;
        puVar5 = (int32_t *)(&stack0x000000b8 + lVar4 * 4);
        do {
          *(int32_t *)(&stack0x00000060 + lVar9 * 4) = puVar5[2];
          *(int32_t *)(&stack0x00000064 + lVar9 * 4) = puVar5[1];
          *(int32_t *)(&stack0x00000068 + lVar9 * 4) = *puVar5;
          *(int32_t *)(&stack0x0000006c + lVar9 * 4) = puVar5[-1];
          lVar9 = lVar9 + 4;
          lVar7 = lVar7 + -1;
          puVar5 = puVar5 + -4;
        } while (lVar7 != 0);
      }
      if (lVar8 <= lVar3) {
        puVar6 = (int32_t *)(&stack0x00000060 + lVar9 * 4);
        lVar9 = (lVar3 - lVar8) + 1;
        puVar5 = (int32_t *)(&stack0x000000c0 + (lVar3 - lVar8) * 4);
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + -1;
          *puVar6 = uVar2;
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    cVar1 = *unaff_RBP;
    puVar5 = puVar12;
    lVar8 = param_8;
    iVar10 = iVar11;
    if (0 < param_8) {
      do {
        lVar3 = (longlong)((int)*(char *)(iVar10 + unaff_R13) - (int)cVar1);
        puVar5[-2] = *(int32_t *)(&stack0x00000060 + lVar3 * 4);
        puVar5[-1] = *(int32_t *)(&stack0x00000064 + lVar3 * 4);
        *puVar5 = *(int32_t *)(&stack0x00000068 + lVar3 * 4);
        puVar5[1] = *(int32_t *)(&stack0x0000006c + lVar3 * 4);
        puVar5[2] = *(int32_t *)(&stack0x00000070 + lVar3 * 4);
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 5;
        iVar10 = iVar10 + 1;
      } while (lVar8 != 0);
    }
    unaff_R12 = unaff_R12 + lStack0000000000000048;
    unaff_RBP = unaff_RBP + 2;
    iVar11 = iVar11 + (int)param_6;
    puVar12 = puVar12 + 0xaa;
    param_7 = param_7 + -1;
    param_4 = param_6 >> 0x20;
  } while (param_7 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000120 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072bbae(void)
void FUN_18072bbae(void)

{
  ulonglong in_stack_00000120;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000120 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



