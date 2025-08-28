#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part103.c - 7 个函数

// 函数: void FUN_18072bbd0(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,
void FUN_18072bbd0(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined *puVar12;
  char *pcVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  double dVar20;
  float afStack_4c4 [239];
  undefined1 auStack_108 [32];
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  longlong lStack_d8;
  float afStack_c8 [24];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uVar18 = (ulonglong)param_5;
  if (param_5 == 4) {
    iStack_e4 = 0x22;
    iVar8 = (int)(char)(&UNK_180956e8c)[param_6];
    pcVar13 = &UNK_180956f18 + (longlong)param_6 * 8;
    puVar12 = &UNK_180956e90;
  }
  else {
    iVar8 = 0xc;
    pcVar13 = &UNK_180956f50;
    iStack_e4 = 0xc;
    puVar12 = &UNK_180956f38;
  }
  param_2 = param_2 + (longlong)(param_4 * 4) * 4;
  iStack_e8 = param_4;
  iStack_e0 = param_3;
  if (0 < (int)param_5) {
    iVar11 = 0;
    pfVar19 = (float *)(param_1 + 8);
    lStack_d8 = (longlong)param_4 * 4;
    do {
      lVar10 = param_2 + (longlong)(*pcVar13 + iStack_e0) * -4;
      dVar20 = (double)FUN_18072b3a0(lVar10,iStack_e8);
      cVar4 = *pcVar13;
      lVar6 = 1;
      dVar20 = dVar20 + 0.001;
      lVar9 = (longlong)(((int)pcVar13[1] - (int)cVar4) + 1);
      lVar17 = 1;
      afStack_c8[0] = (float)dVar20;
      if (1 < lVar9) {
        if (4 < lVar9) {
          pfVar14 = (float *)(lVar10 + -0xc);
          pfVar16 = (float *)(lVar10 + ((longlong)iStack_e8 + -3) * 4);
          lVar5 = (lVar9 - 5U >> 2) + 1;
          lVar17 = lVar5 * 4 + 1;
          do {
            fVar1 = pfVar14[1];
            dVar20 = (dVar20 - (double)pfVar16[2] * (double)pfVar16[2]) +
                     (double)pfVar14[2] * (double)pfVar14[2];
            fVar2 = pfVar16[1];
            afStack_c8[lVar6] = (float)dVar20;
            fVar3 = *pfVar16;
            dVar20 = (dVar20 - (double)fVar2 * (double)fVar2) + (double)fVar1 * (double)fVar1;
            fVar1 = *pfVar14;
            afStack_c8[lVar6 + 1] = (float)dVar20;
            fVar2 = pfVar16[-1];
            pfVar16 = pfVar16 + -4;
            dVar20 = (dVar20 - (double)fVar3 * (double)fVar3) + (double)fVar1 * (double)fVar1;
            fVar1 = pfVar14[-1];
            pfVar14 = pfVar14 + -4;
            afStack_c8[lVar6 + 2] = (float)dVar20;
            dVar20 = (dVar20 - (double)fVar2 * (double)fVar2) + (double)fVar1 * (double)fVar1;
            afStack_c8[lVar6 + 3] = (float)dVar20;
            lVar6 = lVar6 + 4;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar17 < lVar9) {
          pfVar14 = afStack_c8 + lVar6;
          pfVar7 = (float *)(lVar10 + lVar17 * -4);
          lVar9 = lVar9 - lVar17;
          pfVar16 = (float *)(lVar10 + (iStack_e8 - lVar17) * 4);
          do {
            fVar1 = *pfVar16;
            pfVar16 = pfVar16 + -1;
            fVar2 = *pfVar7;
            pfVar7 = pfVar7 + -1;
            dVar20 = (dVar20 - (double)fVar1 * (double)fVar1) + (double)fVar2 * (double)fVar2;
            *pfVar14 = (float)dVar20;
            pfVar14 = pfVar14 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      pfVar14 = pfVar19;
      lVar17 = (longlong)iVar8;
      iVar15 = iVar11;
      if (0 < (longlong)iVar8) {
        do {
          lVar6 = (longlong)((int)(char)puVar12[iVar15] - (int)cVar4);
          pfVar14[-2] = afStack_c8[lVar6];
          pfVar14[-1] = afStack_c8[lVar6 + 1];
          *pfVar14 = afStack_c8[lVar6 + 2];
          pfVar14[1] = afStack_c8[lVar6 + 3];
          pfVar14[2] = afStack_c8[lVar6 + 4];
          lVar17 = lVar17 + -1;
          pfVar14 = pfVar14 + 5;
          iVar15 = iVar15 + 1;
        } while (lVar17 != 0);
      }
      param_2 = param_2 + lStack_d8;
      pcVar13 = pcVar13 + 2;
      iVar11 = iVar11 + iStack_e4;
      pfVar19 = pfVar19 + 0xaa;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_18072bc75(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
void FUN_18072bc75(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong unaff_RSI;
  char *unaff_RDI;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  longlong in_R10;
  longlong lVar15;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined4 *puVar16;
  longlong unaff_R15;
  double dVar17;
  int iStackX_20;
  int iStackX_24;
  ulonglong in_stack_000000a0;
  undefined4 auStack_3bc [239];
  
  iVar10 = 0;
  puVar16 = (undefined4 *)(unaff_R14 + 8);
  param_6 = (longlong)param_4 * 4;
  do {
    lVar9 = unaff_R15 + (longlong)(*unaff_RDI + param_3) * -4;
    dVar17 = (double)FUN_18072b3a0(lVar9,param_4);
    cVar4 = *unaff_RDI;
    lVar6 = 1;
    dVar17 = dVar17 + 0.001;
    lVar8 = (longlong)(((int)unaff_RDI[1] - (int)cVar4) + 1);
    lVar15 = 1;
    param_8 = (float)dVar17;
    if (1 < lVar8) {
      if (4 < lVar8) {
        pfVar11 = (float *)(lVar9 + -0xc);
        pfVar14 = (float *)(lVar9 + ((longlong)iStackX_20 + -3) * 4);
        lVar5 = (lVar8 - 5U >> 2) + 1;
        lVar15 = lVar5 * 4 + 1;
        do {
          fVar1 = pfVar11[1];
          dVar17 = (dVar17 - (double)pfVar14[2] * (double)pfVar14[2]) +
                   (double)pfVar11[2] * (double)pfVar11[2];
          fVar2 = pfVar14[1];
          (&param_8)[lVar6] = (float)dVar17;
          fVar3 = *pfVar14;
          dVar17 = (dVar17 - (double)fVar2 * (double)fVar2) + (double)fVar1 * (double)fVar1;
          fVar1 = *pfVar11;
          *(float *)(&stack0x00000044 + lVar6 * 4) = (float)dVar17;
          fVar2 = pfVar14[-1];
          pfVar14 = pfVar14 + -4;
          dVar17 = (dVar17 - (double)fVar3 * (double)fVar3) + (double)fVar1 * (double)fVar1;
          fVar1 = pfVar11[-1];
          pfVar11 = pfVar11 + -4;
          *(float *)(&stack0x00000048 + lVar6 * 4) = (float)dVar17;
          dVar17 = (dVar17 - (double)fVar2 * (double)fVar2) + (double)fVar1 * (double)fVar1;
          *(float *)(&stack0x0000004c + lVar6 * 4) = (float)dVar17;
          lVar6 = lVar6 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar15 < lVar8) {
        pfVar11 = &param_8 + lVar6;
        pfVar7 = (float *)(lVar9 + lVar15 * -4);
        lVar8 = lVar8 - lVar15;
        pfVar14 = (float *)(lVar9 + (iStackX_20 - lVar15) * 4);
        do {
          fVar1 = *pfVar14;
          pfVar14 = pfVar14 + -1;
          fVar2 = *pfVar7;
          pfVar7 = pfVar7 + -1;
          dVar17 = (dVar17 - (double)fVar1 * (double)fVar1) + (double)fVar2 * (double)fVar2;
          *pfVar11 = (float)dVar17;
          pfVar11 = pfVar11 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    puVar12 = puVar16;
    lVar15 = unaff_R13;
    iVar13 = iVar10;
    if (0 < unaff_R13) {
      do {
        lVar6 = (longlong)((int)*(char *)(iVar13 + unaff_RSI) - (int)cVar4);
        puVar12[-2] = (&param_8)[lVar6];
        puVar12[-1] = *(undefined4 *)(&stack0x00000044 + lVar6 * 4);
        *puVar12 = *(undefined4 *)(&stack0x00000048 + lVar6 * 4);
        puVar12[1] = *(undefined4 *)(&stack0x0000004c + lVar6 * 4);
        puVar12[2] = *(undefined4 *)(&stack0x00000050 + lVar6 * 4);
        lVar15 = lVar15 + -1;
        puVar12 = puVar12 + 5;
        iVar13 = iVar13 + 1;
      } while (lVar15 != 0);
    }
    unaff_R15 = unaff_R15 + param_6;
    unaff_RDI = unaff_RDI + 2;
    iVar10 = iVar10 + iStackX_24;
    puVar16 = puVar16 + 0xaa;
    in_R10 = in_R10 + -1;
    param_4 = iStackX_20;
    param_3 = param_5;
  } while (in_R10 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072bf1a(void)
void FUN_18072bf1a(void)

{
  ulonglong in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072bf40(void)
void FUN_18072bf40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18072c44d(void)
void FUN_18072c44d(void)

{
  longlong unaff_RBP;
  longlong unaff_R12;
  
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 400,0,unaff_R12 * 0x254);
}





// 函数: void FUN_18072c8e6(void)
void FUN_18072c8e6(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  ulonglong uVar6;
  short *psVar7;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong lVar8;
  short sVar9;
  longlong lVar10;
  int unaff_R14D;
  int iStack0000000000000040;
  
  if (0 < (int)unaff_EBX) {
    piVar4 = (int *)(unaff_RBP + -0x10);
    uVar6 = (ulonglong)unaff_EBX;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      *(undefined2 *)(unaff_RBP + 0xae0 + (longlong)iVar2 * 2) = 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  sVar9 = *(short *)(unaff_RBP + 0xc04);
  lVar10 = 0x83;
  lVar8 = 0x83;
  psVar5 = (short *)(unaff_RBP + 0xc04);
  do {
    psVar7 = psVar5 + -1;
    sVar1 = psVar5[-2] + sVar9;
    sVar9 = *psVar7;
    *psVar5 = sVar1 + *psVar7;
    lVar8 = lVar8 + -1;
    psVar5 = psVar7;
  } while (lVar8 != 0);
  piVar4 = (int *)(unaff_RBP + -0x10);
  iVar3 = 0x10;
  iVar2 = 0x10;
  psVar5 = (short *)(unaff_RBP + 0xb02);
  iStack0000000000000040 = unaff_R14D;
  do {
    if ((short)unaff_R14D < *psVar5) {
      iStack0000000000000040 = iStack0000000000000040 + 1;
      *piVar4 = iVar2;
      piVar4 = piVar4 + 1;
    }
    iVar2 = iVar2 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar2 < 0x90);
  sVar9 = *(short *)(unaff_RBP + 0xc00);
  psVar5 = (short *)(unaff_RBP + 0xc00);
  do {
    psVar7 = psVar5 + -1;
    sVar1 = psVar5[1] + *psVar7 + sVar9;
    sVar9 = *psVar7;
    psVar5[2] = psVar5[2] + sVar1;
    lVar10 = lVar10 + -1;
    psVar5 = psVar7;
  } while (lVar10 != 0);
  psVar5 = (short *)(unaff_RBP + 0xae0);
  psVar7 = (short *)(unaff_RBP + 0xb00);
  do {
    if ((short)unaff_R14D < *psVar7) {
      *psVar5 = (short)iVar3 + -2;
      psVar5 = psVar5 + 1;
    }
    iVar3 = iVar3 + 1;
    psVar7 = psVar7 + 1;
  } while (iVar3 < 0x93);
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 400,0,0x950);
}





// 函数: void FUN_18072cb40(int param_1)
void FUN_18072cb40(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  int unaff_EBX;
  int iVar16;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar17;
  short sVar18;
  int unaff_EDI;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int *piVar26;
  float *pfVar27;
  int unaff_R12D;
  undefined *puVar28;
  undefined2 unaff_R14W;
  undefined2 unaff_000000b2;
  undefined4 unaff_000000b4;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar37;
  int iStack0000000000000040;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int in_stack_00000058;
  int in_stack_00000068;
  undefined *puStack0000000000000070;
  longlong in_stack_00000078;
  
  uStack0000000000000048 = CONCAT22(unaff_000000b2,unaff_R14W);
  iStack0000000000000040 = -1;
  fVar30 = unaff_XMM8_Da;
  if (0 < param_1) {
    if (unaff_EBX == 0xc) {
      param_1 = param_1 * 2;
      param_1 = (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f) +
                param_1 / 3 + (param_1 >> 0x1f);
LAB_18072cb78:
      *(int *)(unaff_RBP + 0x2c88) = param_1;
    }
    else if (unaff_EBX == 0x10) {
      param_1 = param_1 >> 1;
      goto LAB_18072cb78;
    }
    dVar31 = (double)log10((double)param_1);
    fVar30 = (float)(dVar31 * 3.32192809488736);
  }
  if (unaff_R12D == 4) {
    puVar28 = &UNK_180956e60;
    if ((unaff_EBX == 8) && (CONCAT22(unaff_000000b2,unaff_R14W) < iStack0000000000000050)) {
      uVar22 = unaff_RSI & 0xffffffff;
      *(ulonglong *)(unaff_RBP + -0x70) = unaff_RSI;
    }
    else {
      uVar22 = 3;
      *(ulonglong *)(unaff_RBP + -0x70) = unaff_RSI;
    }
  }
  else {
    uVar22 = 3;
    puVar28 = &UNK_180956f30;
    *(undefined4 *)(unaff_RBP + -0x48) = 3;
    *(undefined8 *)(unaff_RBP + -0x70) = 3;
  }
  *(ulonglong *)(unaff_RBP + -0x38) = uVar22;
  *(longlong *)(unaff_RBP + -0x40) = (longlong)unaff_EDI;
  if (0 < unaff_EDI) {
    lVar20 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
    uVar15 = *(ulonglong *)(unaff_RBP + -0x48);
    fVar37 = (float)*(int *)(unaff_RBP + 0x2cb0);
    fVar32 = *(float *)(unaff_RBP + 0x2c98);
    uVar17 = uVar22;
    puStack0000000000000070 =
         (undefined *)CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
    do {
      iVar8 = *(int *)(unaff_RBP + -0x10 + lVar20 * 4);
      iVar19 = CONCAT22(unaff_000000b2,unaff_R14W);
      if (uVar17 != 0) {
        uVar23 = *(uint *)(unaff_RBP + 0x2cb0);
        pfVar27 = (float *)(unaff_RBP + 0x50);
        do {
          *pfVar27 = (float)CONCAT22(unaff_000000b2,unaff_R14W);
          if (0 < (int)uVar23) {
            lVar20 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
            pcVar14 = puVar28 + iVar19;
            uVar24 = (ulonglong)uVar23;
            fVar29 = unaff_XMM8_Da;
            do {
              cVar4 = *pcVar14;
              pcVar14 = pcVar14 + (uVar15 & 0xffffffff);
              lVar12 = (cVar4 + iVar8) + lVar20;
              lVar20 = lVar20 + 0x95;
              fVar29 = fVar29 + *(float *)(unaff_RBP + 400 + lVar12 * 4);
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
            *pfVar27 = fVar29;
          }
          iVar19 = iVar19 + 1;
          pfVar27 = pfVar27 + 1;
          uVar17 = uVar17 - 1;
          lVar20 = (longlong)puStack0000000000000070;
        } while (uVar17 != 0);
      }
      uVar23 = CONCAT22(unaff_000000b2,unaff_R14W);
      uVar11 = CONCAT22(unaff_000000b2,unaff_R14W);
      fVar29 = unaff_XMM7_Da;
      do {
        fVar35 = *(float *)(unaff_RBP + 0x50 + (longlong)(int)uVar11 * 4);
        uVar6 = uVar11;
        if (fVar35 <= fVar29) {
          uVar6 = uVar23;
          fVar35 = fVar29;
        }
        fVar29 = fVar35;
        uVar23 = uVar6;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar22);
      dVar31 = (double)log10((double)iVar8);
      fVar35 = fVar29 - fVar37 * unaff_XMM10_Da * (float)(dVar31 * 3.32192809488736);
      if (CONCAT22(unaff_000000b2,unaff_R14W) < *(int *)(unaff_RBP + 0x2c88)) {
        fVar33 = (float)(dVar31 * 3.32192809488736) - fVar30;
        fVar33 = fVar33 * fVar33;
        fVar35 = fVar35 - (fVar37 * unaff_XMM10_Da * **(float **)(unaff_RBP + -0x78) * fVar33) /
                          (fVar33 + 0.5);
      }
      if ((unaff_XMM12_Da < fVar35) && (fVar37 * fVar32 < fVar29)) {
        unaff_XMM12_Da = fVar35;
        unaff_XMM13_Da = fVar29;
        iStack0000000000000040 = iVar8;
        uStack0000000000000048 = uVar23;
      }
      uVar17 = *(ulonglong *)(unaff_RBP + -0x38);
      lVar20 = lVar20 + 1;
      puStack0000000000000070 = (undefined *)lVar20;
    } while (lVar20 < *(longlong *)(unaff_RBP + -0x40));
    if (iStack0000000000000040 != -1) {
      **(float **)(unaff_RBP + -0x78) = unaff_XMM13_Da / fVar37;
      if (iStack000000000000004c < 9) {
        if (0 < (int)*(uint *)(unaff_RBP + 0x2cb0)) {
          lVar20 = *(longlong *)(unaff_RBP + -0x70);
          piVar26 = *(int **)(unaff_RBP + -0x80);
          uVar22 = (ulonglong)*(uint *)(unaff_RBP + 0x2cb0);
          pcVar14 = puVar28 + (int)uStack0000000000000048;
          do {
            iVar8 = *pcVar14 + iStack0000000000000040;
            if (iVar8 < 0x91) {
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
            }
            else {
              iVar8 = 0x90;
            }
            *piVar26 = iVar8;
            pcVar14 = pcVar14 + lVar20;
            piVar26 = piVar26 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        sVar18 = (short)iStack0000000000000040 + -0x10;
        uVar22 = (ulonglong)uStack0000000000000048;
      }
      else {
        if (iStack000000000000004c == 0xc) {
          uVar23 = (short)iStack0000000000000040 * 3;
          iStack0000000000000040 = ((int)uVar23 >> 1) + (uVar23 & 1);
        }
        else {
          iStack0000000000000040 = iStack0000000000000040 * 2;
        }
        if (in_stack_00000068 < in_stack_00000058) {
          iVar8 = in_stack_00000058;
          if ((iStack0000000000000040 <= in_stack_00000058) &&
             (iVar8 = iStack0000000000000040, iStack0000000000000040 < in_stack_00000068)) {
            iVar8 = in_stack_00000068;
          }
        }
        else {
          iVar8 = in_stack_00000068;
          if ((iStack0000000000000040 <= in_stack_00000068) &&
             (iVar8 = iStack0000000000000040, iStack0000000000000040 < in_stack_00000058)) {
            iVar8 = in_stack_00000058;
          }
        }
        iVar19 = *(int *)(unaff_RBP + 0x2cb0);
        uStack0000000000000048 = CONCAT22(unaff_000000b2,unaff_R14W);
        iVar16 = in_stack_00000058;
        if (in_stack_00000058 < iVar8 + -2) {
          iVar16 = iVar8 + -2;
        }
        iVar7 = in_stack_00000068;
        if (iVar8 + 2 < in_stack_00000068) {
          iVar7 = iVar8 + 2;
        }
        iStack0000000000000040 = iVar7;
        FUN_18072b930(unaff_RBP + 0xae0,*(undefined8 *)(unaff_RBP + -0x60),iVar16,
                      iStack0000000000000054,iVar19);
        FUN_18072bbd0(unaff_RBP + 0x1d00,*(undefined8 *)(unaff_RBP + -0x60),iVar16,
                      iStack0000000000000054,iVar19);
        fVar30 = (float)iVar8;
        if (iVar19 == 4) {
          puStack0000000000000070 = &UNK_180956e90;
          lVar20 = 0x22;
          iVar19 = (int)(char)(&UNK_180956e8c)[iStack0000000000000050];
        }
        else {
          iVar19 = 0xc;
          puStack0000000000000070 = &UNK_180956f38;
          lVar20 = 0xc;
        }
        dVar31 = (double)FUN_18072b3a0(*(longlong *)(unaff_RBP + -0x60) +
                                       (longlong)(iStack000000000000004c * 0x14) * 4,
                                       iStack0000000000000054 * *(int *)(unaff_RBP + 0x2cb0));
        if (iVar16 <= iVar7) {
          lVar12 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
          do {
            uVar23 = CONCAT22(unaff_000000b2,unaff_R14W);
            lVar21 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
            if (0 < (longlong)iVar19) {
              lVar25 = lVar12 * 4;
              do {
                dVar34 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
                lVar10 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
                dVar36 = dVar31 + 1.0;
                if (3 < in_stack_00000078) {
                  lVar13 = (in_stack_00000078 - 4U >> 2) + 1;
                  lVar10 = lVar13 * 4;
                  lVar9 = lVar25;
                  do {
                    pfVar27 = (float *)(unaff_RBP + 0x1d00 + lVar9);
                    dVar34 = (double)*(float *)(unaff_RBP + 0xae0 + lVar9) + dVar34 +
                             (double)*(float *)(unaff_RBP + 0xd88 + lVar9) +
                             (double)*(float *)(unaff_RBP + 0x1030 + lVar9) +
                             (double)*(float *)(unaff_RBP + 0x12d8 + lVar9);
                    pfVar1 = (float *)(unaff_RBP + 0x1fa8 + lVar9);
                    pfVar2 = (float *)(unaff_RBP + 0x2250 + lVar9);
                    pfVar3 = (float *)(unaff_RBP + 0x24f8 + lVar9);
                    lVar9 = lVar9 + 0xaa0;
                    dVar36 = (double)*pfVar27 + dVar36 + (double)*pfVar1 + (double)*pfVar2 +
                             (double)*pfVar3;
                    lVar13 = lVar13 + -1;
                  } while (lVar13 != 0);
                }
                if (lVar10 < in_stack_00000078) {
                  lVar9 = (lVar12 + (lVar10 * 0x22 + lVar21) * 5) * 4;
                  lVar10 = in_stack_00000078 - lVar10;
                  do {
                    pfVar27 = (float *)(unaff_RBP + 0xae0 + lVar9);
                    pfVar1 = (float *)(unaff_RBP + 0x1d00 + lVar9);
                    lVar9 = lVar9 + 0x2a8;
                    dVar34 = dVar34 + (double)*pfVar27;
                    dVar36 = dVar36 + (double)*pfVar1;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                }
                fVar32 = unaff_XMM8_Da;
                if ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) <= dVar34 &&
                    dVar34 != (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da)) {
                  fVar32 = (1.0 - (float)(int)uVar23 * (0.05 / fVar30)) *
                           (float)((dVar34 + dVar34) / dVar36);
                }
                if ((unaff_XMM7_Da < fVar32) &&
                   ((char)(&UNK_180956e90)[lVar21] + iVar16 <= in_stack_00000068)) {
                  unaff_XMM7_Da = fVar32;
                  iVar8 = iVar16;
                  uStack0000000000000048 = uVar23;
                }
                uVar23 = uVar23 + 1;
                lVar21 = lVar21 + 1;
                lVar25 = lVar25 + 0x14;
                iVar7 = iStack0000000000000040;
              } while (lVar21 < iVar19);
            }
            lVar12 = lVar12 + 1;
            iVar16 = iVar16 + 1;
          } while (iVar16 <= iVar7);
        }
        if ((int)*(uint *)(unaff_RBP + 0x2cb0) < 1) {
          uVar22 = (ulonglong)uStack0000000000000048;
          sVar18 = (short)iVar8 - (short)in_stack_00000058;
        }
        else {
          uVar22 = (ulonglong)(int)uStack0000000000000048;
          uVar15 = (ulonglong)*(uint *)(unaff_RBP + 0x2cb0);
          piVar26 = *(int **)(unaff_RBP + -0x80);
          pcVar14 = puStack0000000000000070 + uVar22;
          iVar19 = *(int *)(unaff_RBP + -0x68);
          do {
            iVar16 = *pcVar14 + iVar8;
            if (iVar19 < in_stack_00000058) {
              iVar7 = in_stack_00000058;
              if ((iVar16 <= in_stack_00000058) && (iVar7 = iVar16, iVar16 < iVar19)) {
                iVar7 = iVar19;
              }
            }
            else {
              iVar7 = iVar19;
              if ((iVar16 <= iVar19) && (iVar7 = iVar16, iVar16 < in_stack_00000058)) {
                iVar7 = in_stack_00000058;
              }
            }
            *piVar26 = iVar7;
            pcVar14 = pcVar14 + lVar20;
            piVar26 = piVar26 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          sVar18 = (short)iVar8 - (short)in_stack_00000058;
        }
      }
      **(short **)(unaff_RBP + -0x58) = sVar18;
      **(undefined1 **)(unaff_RBP + -0x50) = (char)uVar22;
      goto LAB_18072d1b4;
    }
  }
  puVar5 = *(undefined8 **)(unaff_RBP + -0x80);
  *puVar5 = 0;
  puVar5[1] = 0;
  **(undefined4 **)(unaff_RBP + -0x78) = CONCAT22(unaff_000000b2,unaff_R14W);
  **(undefined2 **)(unaff_RBP + -0x58) = unaff_R14W;
  **(undefined1 **)(unaff_RBP + -0x50) = 0;
LAB_18072d1b4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x2b60) ^ (ulonglong)&stack0x00000000);
}





