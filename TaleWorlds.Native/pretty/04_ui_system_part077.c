#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part077.c - 3 个函数

// 函数: void FUN_180711020(int *param_1,float *param_2,float *param_3,float *param_4,int param_5,int param_6
void FUN_180711020(int *param_1,float *param_2,float *param_3,float *param_4,int param_5,int param_6
                  ,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  short *psVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  
  uVar25 = 0;
  iVar15 = *param_1;
  lVar26 = *(longlong *)(param_1 + 10);
  iVar16 = 0;
  uVar22 = uVar25;
  uVar18 = uVar25;
  if (1 < param_6) {
    uVar9 = (param_6 - 2U >> 1) + 1;
    uVar10 = (ulonglong)uVar9;
    iVar16 = uVar9 * 2;
    do {
      iVar14 = iVar15 >> 1;
      iVar15 = iVar15 >> 2;
      uVar22 = uVar22 + (longlong)iVar14 * 4;
      uVar18 = uVar18 + (longlong)iVar15 * 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (iVar16 < param_6) {
    iVar15 = iVar15 >> 1;
    lVar26 = lVar26 + (longlong)iVar15 * 4;
  }
  lVar26 = lVar26 + uVar18 + uVar22;
  lVar13 = (longlong)(iVar15 >> 2);
  pfVar11 = param_2 + ((iVar15 >> 1) + -1) * param_7;
  pfVar17 = param_3 + ((longlong)param_5 >> 1);
  lVar19 = *(longlong *)(param_1 + (longlong)param_6 * 2 + 2);
  psVar20 = *(short **)(lVar19 + 0x30);
  uVar22 = uVar25;
  if (3 < lVar13) {
    lVar23 = (longlong)(param_7 * 2);
    pfVar24 = (float *)(lVar26 + 4);
    lVar27 = (lVar13 - 4U >> 2) + 1;
    uVar22 = lVar27 * 4;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + lVar23;
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + -lVar23;
      fVar3 = pfVar24[-1];
      fVar4 = pfVar24[lVar13 + -1];
      sVar7 = *psVar20;
      sVar8 = psVar20[1];
      pfVar17[(longlong)(sVar7 * 2) + 1] = fVar3 * fVar2 + fVar4 * fVar1;
      pfVar17[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      param_2 = param_2 + lVar23;
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + -lVar23;
      fVar3 = *pfVar24;
      fVar4 = pfVar24[lVar13];
      sVar7 = psVar20[2];
      pfVar17[(longlong)(sVar8 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar17[sVar8 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      fVar2 = *pfVar11;
      fVar3 = pfVar24[1];
      fVar4 = pfVar24[lVar13 + 1];
      sVar8 = psVar20[3];
      psVar20 = psVar20 + 4;
      pfVar17[(longlong)(sVar7 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar17[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = pfVar24[2];
      fVar2 = pfVar24[lVar13 + 2];
      fVar3 = param_2[lVar23];
      fVar4 = pfVar11[-lVar23];
      param_2 = param_2 + lVar23 + lVar23;
      pfVar11 = pfVar11 + -lVar23 + -lVar23;
      pfVar24 = pfVar24 + 4;
      pfVar17[(longlong)(sVar8 * 2) + 1] = fVar2 * fVar3 + fVar1 * fVar4;
      pfVar17[sVar8 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if ((longlong)uVar22 < lVar13) {
    pfVar24 = (float *)(uVar22 * 4 + lVar26);
    uVar25 = lVar13 - uVar22;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + param_7 * 2;
      fVar2 = *pfVar11;
      fVar3 = *pfVar24;
      fVar4 = pfVar24[lVar13];
      pfVar11 = pfVar11 + -(longlong)(param_7 * 2);
      sVar7 = *psVar20;
      pfVar24 = pfVar24 + 1;
      psVar20 = psVar20 + 1;
      pfVar17[(longlong)(sVar7 * 2) + 1] = fVar1 * fVar4 + fVar2 * fVar3;
      pfVar17[sVar7 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  FUN_18071fb70(lVar19,pfVar17);
  lVar23 = (longlong)(iVar15 >> 1);
  lVar19 = (longlong)((iVar15 >> 2) + 1) >> 1;
  pfVar11 = param_3 + ((longlong)param_5 >> 1) + -2 + lVar23;
  uVar22 = uVar25;
  if (3 < lVar19) {
    pfVar21 = (float *)(lVar23 * 4 + -4 + lVar26);
    lVar12 = lVar13 - lVar23;
    pfVar24 = (float *)(lVar26 + 4);
    lVar27 = (lVar19 - 4U >> 2) + 1;
    uVar22 = lVar27 * 4;
    do {
      fVar1 = pfVar24[-1];
      fVar2 = pfVar24[lVar13 + -1];
      fVar3 = *pfVar17;
      fVar4 = pfVar11[1];
      fVar5 = *pfVar11;
      *pfVar17 = fVar2 * *pfVar17 + fVar1 * pfVar17[1];
      pfVar11[1] = fVar2 * pfVar17[1] - fVar1 * fVar3;
      fVar1 = pfVar21[lVar12];
      fVar2 = *pfVar21;
      *pfVar11 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar17[1] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = *pfVar24;
      fVar2 = pfVar24[lVar13];
      fVar3 = pfVar17[2];
      fVar4 = pfVar11[-1];
      fVar5 = pfVar11[-2];
      pfVar17[2] = fVar2 * pfVar17[2] + fVar1 * pfVar17[3];
      pfVar11[-1] = fVar2 * pfVar17[3] - fVar1 * fVar3;
      fVar1 = pfVar21[lVar12 + -1];
      fVar2 = pfVar21[-1];
      pfVar11[-2] = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar17[3] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = pfVar24[1];
      fVar2 = pfVar24[lVar13 + 1];
      fVar3 = pfVar17[4];
      fVar4 = pfVar11[-3];
      fVar5 = pfVar11[-4];
      pfVar17[4] = fVar2 * pfVar17[4] + fVar1 * pfVar17[5];
      pfVar11[-3] = fVar2 * pfVar17[5] - fVar1 * fVar3;
      fVar1 = pfVar21[-2];
      fVar2 = pfVar21[lVar12 + -2];
      pfVar11[-4] = fVar1 * fVar5 + fVar2 * fVar4;
      pfVar17[5] = fVar1 * fVar4 - fVar2 * fVar5;
      fVar1 = pfVar24[lVar13 + 2];
      fVar2 = pfVar24[2];
      fVar3 = pfVar11[-5];
      fVar4 = pfVar17[6];
      pfVar24 = pfVar24 + 4;
      fVar5 = pfVar11[-6];
      pfVar17[6] = fVar1 * pfVar17[6] + fVar2 * pfVar17[7];
      pfVar11[-5] = fVar1 * pfVar17[7] - fVar2 * fVar4;
      fVar1 = pfVar21[lVar12 + -3];
      fVar2 = pfVar21[-3];
      pfVar21 = pfVar21 + -4;
      pfVar11[-6] = fVar2 * fVar5 + fVar1 * fVar3;
      pfVar11 = pfVar11 + -8;
      pfVar17[7] = fVar2 * fVar3 - fVar1 * fVar5;
      pfVar17 = pfVar17 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if ((longlong)uVar22 < lVar19) {
    pfVar24 = (float *)(uVar22 * 4 + lVar26);
    pfVar21 = (float *)((lVar23 - uVar22) * 4 + -4 + lVar26);
    lVar19 = lVar19 - uVar22;
    do {
      fVar1 = *pfVar24;
      fVar2 = pfVar24[lVar13];
      pfVar24 = pfVar24 + 1;
      fVar3 = *pfVar17;
      fVar4 = pfVar11[1];
      fVar5 = *pfVar11;
      *pfVar17 = fVar2 * *pfVar17 + fVar1 * pfVar17[1];
      pfVar11[1] = fVar2 * pfVar17[1] - fVar1 * fVar3;
      fVar1 = pfVar21[lVar13 - lVar23];
      fVar2 = *pfVar21;
      pfVar21 = pfVar21 + -1;
      *pfVar11 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar11 = pfVar11 + -2;
      pfVar17[1] = fVar2 * fVar4 - fVar1 * fVar5;
      pfVar17 = pfVar17 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  pfVar11 = param_3 + (longlong)param_5 + -1;
  iVar15 = param_5 / 2;
  pfVar17 = param_4 + (longlong)param_5 + -1;
  pfVar24 = param_3;
  pfVar21 = param_4;
  if (3 < iVar15) {
    uVar9 = (iVar15 - 4U >> 2) + 1;
    uVar22 = (ulonglong)uVar9;
    uVar25 = (ulonglong)(uVar9 * 4);
    do {
      fVar1 = *pfVar11;
      fVar2 = *pfVar24;
      fVar3 = *pfVar17;
      fVar4 = *pfVar21;
      pfVar21 = pfVar21 + 4;
      fVar5 = *(float *)((longlong)pfVar24 + (longlong)param_4 + (4 - (longlong)param_3));
      *pfVar24 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar11 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar11[-1];
      fVar2 = pfVar24[1];
      fVar3 = pfVar17[-1];
      fVar4 = *(float *)((longlong)pfVar24 + (longlong)param_4 + (8 - (longlong)param_3));
      pfVar24[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar11[-2];
      pfVar11[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar24[2];
      fVar2 = pfVar17[-2];
      pfVar24[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar11[-3];
      pfVar11[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar24[3];
      fVar2 = pfVar17[-3];
      pfVar17 = pfVar17 + -4;
      fVar4 = *(float *)((longlong)param_4 + (0xc - (longlong)param_3) + (longlong)pfVar24);
      pfVar24[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar24 = pfVar24 + 4;
      pfVar11[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar11 = pfVar11 + -4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if ((int)uVar25 < iVar15) {
    lVar26 = (longlong)pfVar17 - (longlong)pfVar11;
    lVar19 = (longlong)pfVar21 - (longlong)pfVar24;
    uVar22 = (ulonglong)(uint)(iVar15 - (int)uVar25);
    do {
      fVar1 = *pfVar11;
      fVar2 = *pfVar24;
      fVar3 = *(float *)(lVar26 + (longlong)pfVar11);
      fVar4 = *(float *)(lVar19 + (longlong)pfVar24);
      *pfVar24 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar24 = pfVar24 + 1;
      *pfVar11 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar11 = pfVar11 + -1;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}





// 函数: void FUN_180711037(int *param_1,float *param_2,float *param_3,float *param_4)
void FUN_180711037(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  longlong in_RAX;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  uint64_t unaff_RBP;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint64_t unaff_RSI;
  int iVar17;
  uint64_t unaff_RDI;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  longlong in_R10;
  short *psVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_R12;
  uint64_t unaff_R13;
  longlong lVar26;
  uint64_t unaff_R15;
  longlong lVar27;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  int in_stack_000000a0;
  int iStack00000000000000a8;
  int in_stack_000000b0;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  iVar16 = *param_1;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  uVar23 = unaff_R12 & 0xffffffff;
  lVar26 = *(longlong *)(param_1 + 10);
  uVar19 = unaff_R12 & 0xffffffff;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iVar17 = (int)unaff_R12;
  iVar20 = (int)in_R10;
  if (1 < iVar20) {
    uVar9 = (iVar20 - 2U >> 1) + 1;
    uVar11 = (ulonglong)uVar9;
    iVar17 = uVar9 * 2;
    do {
      iVar15 = iVar16 >> 1;
      iVar16 = iVar16 >> 2;
      uVar23 = uVar23 + (longlong)iVar15 * 4;
      uVar19 = uVar19 + (longlong)iVar16 * 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar17 < iVar20) {
    iVar16 = iVar16 >> 1;
    lVar26 = lVar26 + (longlong)iVar16 * 4;
  }
  lVar26 = lVar26 + uVar19 + uVar23;
  iStack00000000000000a8 = iVar16 >> 1;
  lVar14 = (longlong)(iVar16 >> 2);
  pfVar12 = param_2 + (iStack00000000000000a8 + -1) * in_stack_000000b0;
  lStack0000000000000090 = (longlong)in_stack_000000a0 >> 1;
  pfVar18 = param_3 + lStack0000000000000090;
  lStack0000000000000088 = *(longlong *)(param_1 + in_R10 * 2 + 2);
  psVar21 = *(short **)(lStack0000000000000088 + 0x30);
  uVar23 = unaff_R12;
  if (3 < lVar14) {
    lVar24 = (longlong)(in_stack_000000b0 * 2);
    pfVar25 = (float *)(lVar26 + 4);
    lVar27 = (lVar14 - 4U >> 2) + 1;
    uVar23 = lVar27 * 4;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + lVar24;
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -lVar24;
      fVar3 = pfVar25[-1];
      fVar4 = pfVar25[lVar14 + -1];
      sVar7 = *psVar21;
      sVar8 = psVar21[1];
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar3 * fVar2 + fVar4 * fVar1;
      pfVar18[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      param_2 = param_2 + lVar24;
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -lVar24;
      fVar3 = *pfVar25;
      fVar4 = pfVar25[lVar14];
      sVar7 = psVar21[2];
      pfVar18[(longlong)(sVar8 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar18[sVar8 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      fVar2 = *pfVar12;
      fVar3 = pfVar25[1];
      fVar4 = pfVar25[lVar14 + 1];
      sVar8 = psVar21[3];
      psVar21 = psVar21 + 4;
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar18[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = pfVar25[2];
      fVar2 = pfVar25[lVar14 + 2];
      fVar3 = param_2[lVar24];
      fVar4 = pfVar12[-lVar24];
      param_2 = param_2 + lVar24 + lVar24;
      pfVar12 = pfVar12 + -lVar24 + -lVar24;
      pfVar25 = pfVar25 + 4;
      pfVar18[(longlong)(sVar8 * 2) + 1] = fVar2 * fVar3 + fVar1 * fVar4;
      pfVar18[sVar8 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if ((longlong)uVar23 < lVar14) {
    pfVar25 = (float *)(uVar23 * 4 + lVar26);
    unaff_R12 = lVar14 - uVar23;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + in_stack_000000b0 * 2;
      fVar2 = *pfVar12;
      fVar3 = *pfVar25;
      fVar4 = pfVar25[lVar14];
      pfVar12 = pfVar12 + -(longlong)(in_stack_000000b0 * 2);
      sVar7 = *psVar21;
      pfVar25 = pfVar25 + 1;
      psVar21 = psVar21 + 1;
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar1 * fVar4 + fVar2 * fVar3;
      pfVar18[sVar7 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      unaff_R12 = unaff_R12 - 1;
    } while (unaff_R12 != 0);
  }
  FUN_18071fb70(lStack0000000000000088,pfVar18);
  lVar27 = (longlong)iStack00000000000000a8;
  lVar24 = (longlong)((iVar16 >> 2) + 1) >> 1;
  pfVar12 = param_3 + lStack0000000000000090 + -2 + lVar27;
  uVar23 = unaff_R12;
  if (3 < lVar24) {
    pfVar22 = (float *)(lVar27 * 4 + -4 + lVar26);
    lVar13 = lVar14 - lVar27;
    pfVar25 = (float *)(lVar26 + 4);
    lVar10 = (lVar24 - 4U >> 2) + 1;
    uVar23 = lVar10 * 4;
    do {
      fVar1 = pfVar25[-1];
      fVar2 = pfVar25[lVar14 + -1];
      fVar3 = *pfVar18;
      fVar4 = pfVar12[1];
      fVar5 = *pfVar12;
      *pfVar18 = fVar2 * *pfVar18 + fVar1 * pfVar18[1];
      pfVar12[1] = fVar2 * pfVar18[1] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar13];
      fVar2 = *pfVar22;
      *pfVar12 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar18[1] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = *pfVar25;
      fVar2 = pfVar25[lVar14];
      fVar3 = pfVar18[2];
      fVar4 = pfVar12[-1];
      fVar5 = pfVar12[-2];
      pfVar18[2] = fVar2 * pfVar18[2] + fVar1 * pfVar18[3];
      pfVar12[-1] = fVar2 * pfVar18[3] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar13 + -1];
      fVar2 = pfVar22[-1];
      pfVar12[-2] = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar18[3] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = pfVar25[1];
      fVar2 = pfVar25[lVar14 + 1];
      fVar3 = pfVar18[4];
      fVar4 = pfVar12[-3];
      fVar5 = pfVar12[-4];
      pfVar18[4] = fVar2 * pfVar18[4] + fVar1 * pfVar18[5];
      pfVar12[-3] = fVar2 * pfVar18[5] - fVar1 * fVar3;
      fVar1 = pfVar22[-2];
      fVar2 = pfVar22[lVar13 + -2];
      pfVar12[-4] = fVar1 * fVar5 + fVar2 * fVar4;
      pfVar18[5] = fVar1 * fVar4 - fVar2 * fVar5;
      fVar1 = pfVar25[lVar14 + 2];
      fVar2 = pfVar25[2];
      fVar3 = pfVar12[-5];
      fVar4 = pfVar18[6];
      pfVar25 = pfVar25 + 4;
      fVar5 = pfVar12[-6];
      pfVar18[6] = fVar1 * pfVar18[6] + fVar2 * pfVar18[7];
      pfVar12[-5] = fVar1 * pfVar18[7] - fVar2 * fVar4;
      fVar1 = pfVar22[lVar13 + -3];
      fVar2 = pfVar22[-3];
      pfVar22 = pfVar22 + -4;
      pfVar12[-6] = fVar2 * fVar5 + fVar1 * fVar3;
      pfVar12 = pfVar12 + -8;
      pfVar18[7] = fVar2 * fVar3 - fVar1 * fVar5;
      pfVar18 = pfVar18 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((longlong)uVar23 < lVar24) {
    pfVar25 = (float *)(uVar23 * 4 + lVar26);
    pfVar22 = (float *)((lVar27 - uVar23) * 4 + -4 + lVar26);
    lVar24 = lVar24 - uVar23;
    do {
      fVar1 = *pfVar25;
      fVar2 = pfVar25[lVar14];
      pfVar25 = pfVar25 + 1;
      fVar3 = *pfVar18;
      fVar4 = pfVar12[1];
      fVar5 = *pfVar12;
      *pfVar18 = fVar2 * *pfVar18 + fVar1 * pfVar18[1];
      pfVar12[1] = fVar2 * pfVar18[1] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar14 - lVar27];
      fVar2 = *pfVar22;
      pfVar22 = pfVar22 + -1;
      *pfVar12 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar12 = pfVar12 + -2;
      pfVar18[1] = fVar2 * fVar4 - fVar1 * fVar5;
      pfVar18 = pfVar18 + 2;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  pfVar12 = param_3 + (longlong)in_stack_000000a0 + -1;
  iVar16 = in_stack_000000a0 / 2;
  pfVar18 = param_4 + (longlong)in_stack_000000a0 + -1;
  pfVar25 = param_3;
  pfVar22 = param_4;
  if (3 < iVar16) {
    uVar9 = (iVar16 - 4U >> 2) + 1;
    uVar23 = (ulonglong)uVar9;
    unaff_R12 = (ulonglong)(uVar9 * 4);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar25;
      fVar3 = *pfVar18;
      fVar4 = *pfVar22;
      pfVar22 = pfVar22 + 4;
      fVar5 = *(float *)((longlong)pfVar25 + (longlong)param_4 + (4 - (longlong)param_3));
      *pfVar25 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar12[-1];
      fVar2 = pfVar25[1];
      fVar3 = pfVar18[-1];
      fVar4 = *(float *)((longlong)pfVar25 + (longlong)param_4 + (8 - (longlong)param_3));
      pfVar25[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar12[-2];
      pfVar12[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar25[2];
      fVar2 = pfVar18[-2];
      pfVar25[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar12[-3];
      pfVar12[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar25[3];
      fVar2 = pfVar18[-3];
      pfVar18 = pfVar18 + -4;
      fVar4 = *(float *)((longlong)param_4 + (0xc - (longlong)param_3) + (longlong)pfVar25);
      pfVar25[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar25 = pfVar25 + 4;
      pfVar12[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar12 = pfVar12 + -4;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if ((int)unaff_R12 < iVar16) {
    lVar26 = (longlong)pfVar18 - (longlong)pfVar12;
    lVar14 = (longlong)pfVar22 - (longlong)pfVar25;
    uVar23 = (ulonglong)(uint)(iVar16 - (int)unaff_R12);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar25;
      fVar3 = *(float *)(lVar26 + (longlong)pfVar12);
      fVar4 = *(float *)(lVar14 + (longlong)pfVar25);
      *pfVar25 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar25 = pfVar25 + 1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar12 = pfVar12 + -1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  return;
}





// 函数: void FUN_18071103e(int *param_1,float *param_2,uint64_t param_3,float *param_4)
void FUN_18071103e(int *param_1,float *param_2,uint64_t param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  longlong in_RAX;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  float *unaff_RBX;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint64_t unaff_RSI;
  int iVar17;
  uint64_t unaff_RDI;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  longlong in_R10;
  short *psVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_R12;
  uint64_t unaff_R13;
  longlong lVar26;
  uint64_t unaff_R15;
  longlong lVar27;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  int in_stack_000000a0;
  int iStack00000000000000a8;
  int in_stack_000000b0;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  iVar16 = *param_1;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  uVar23 = unaff_R12 & 0xffffffff;
  lVar26 = *(longlong *)(param_1 + 10);
  uVar19 = unaff_R12 & 0xffffffff;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iVar17 = (int)unaff_R12;
  iVar20 = (int)in_R10;
  if (1 < iVar20) {
    uVar9 = (iVar20 - 2U >> 1) + 1;
    uVar11 = (ulonglong)uVar9;
    iVar17 = uVar9 * 2;
    do {
      iVar15 = iVar16 >> 1;
      iVar16 = iVar16 >> 2;
      uVar23 = uVar23 + (longlong)iVar15 * 4;
      uVar19 = uVar19 + (longlong)iVar16 * 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar17 < iVar20) {
    iVar16 = iVar16 >> 1;
    lVar26 = lVar26 + (longlong)iVar16 * 4;
  }
  lVar26 = lVar26 + uVar19 + uVar23;
  iStack00000000000000a8 = iVar16 >> 1;
  lVar14 = (longlong)(iVar16 >> 2);
  pfVar12 = param_2 + (iStack00000000000000a8 + -1) * in_stack_000000b0;
  lStack0000000000000090 = (longlong)in_stack_000000a0 >> 1;
  pfVar18 = unaff_RBX + lStack0000000000000090;
  lStack0000000000000088 = *(longlong *)(param_1 + in_R10 * 2 + 2);
  psVar21 = *(short **)(lStack0000000000000088 + 0x30);
  uVar23 = unaff_R12;
  if (3 < lVar14) {
    lVar24 = (longlong)(in_stack_000000b0 * 2);
    pfVar25 = (float *)(lVar26 + 4);
    lVar27 = (lVar14 - 4U >> 2) + 1;
    uVar23 = lVar27 * 4;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + lVar24;
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -lVar24;
      fVar3 = pfVar25[-1];
      fVar4 = pfVar25[lVar14 + -1];
      sVar7 = *psVar21;
      sVar8 = psVar21[1];
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar3 * fVar2 + fVar4 * fVar1;
      pfVar18[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      param_2 = param_2 + lVar24;
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -lVar24;
      fVar3 = *pfVar25;
      fVar4 = pfVar25[lVar14];
      sVar7 = psVar21[2];
      pfVar18[(longlong)(sVar8 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar18[sVar8 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = *param_2;
      fVar2 = *pfVar12;
      fVar3 = pfVar25[1];
      fVar4 = pfVar25[lVar14 + 1];
      sVar8 = psVar21[3];
      psVar21 = psVar21 + 4;
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar4 * fVar1 + fVar3 * fVar2;
      pfVar18[sVar7 * 2] = fVar3 * fVar1 - fVar4 * fVar2;
      fVar1 = pfVar25[2];
      fVar2 = pfVar25[lVar14 + 2];
      fVar3 = param_2[lVar24];
      fVar4 = pfVar12[-lVar24];
      param_2 = param_2 + lVar24 + lVar24;
      pfVar12 = pfVar12 + -lVar24 + -lVar24;
      pfVar25 = pfVar25 + 4;
      pfVar18[(longlong)(sVar8 * 2) + 1] = fVar2 * fVar3 + fVar1 * fVar4;
      pfVar18[sVar8 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if ((longlong)uVar23 < lVar14) {
    pfVar25 = (float *)(uVar23 * 4 + lVar26);
    unaff_R12 = lVar14 - uVar23;
    do {
      fVar1 = *param_2;
      param_2 = param_2 + in_stack_000000b0 * 2;
      fVar2 = *pfVar12;
      fVar3 = *pfVar25;
      fVar4 = pfVar25[lVar14];
      pfVar12 = pfVar12 + -(longlong)(in_stack_000000b0 * 2);
      sVar7 = *psVar21;
      pfVar25 = pfVar25 + 1;
      psVar21 = psVar21 + 1;
      pfVar18[(longlong)(sVar7 * 2) + 1] = fVar1 * fVar4 + fVar2 * fVar3;
      pfVar18[sVar7 * 2] = fVar1 * fVar3 - fVar2 * fVar4;
      unaff_R12 = unaff_R12 - 1;
    } while (unaff_R12 != 0);
  }
  FUN_18071fb70(lStack0000000000000088,pfVar18);
  lVar27 = (longlong)iStack00000000000000a8;
  lVar24 = (longlong)((iVar16 >> 2) + 1) >> 1;
  pfVar12 = unaff_RBX + lStack0000000000000090 + -2 + lVar27;
  uVar23 = unaff_R12;
  if (3 < lVar24) {
    pfVar22 = (float *)(lVar27 * 4 + -4 + lVar26);
    lVar13 = lVar14 - lVar27;
    pfVar25 = (float *)(lVar26 + 4);
    lVar10 = (lVar24 - 4U >> 2) + 1;
    uVar23 = lVar10 * 4;
    do {
      fVar1 = pfVar25[-1];
      fVar2 = pfVar25[lVar14 + -1];
      fVar3 = *pfVar18;
      fVar4 = pfVar12[1];
      fVar5 = *pfVar12;
      *pfVar18 = fVar2 * *pfVar18 + fVar1 * pfVar18[1];
      pfVar12[1] = fVar2 * pfVar18[1] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar13];
      fVar2 = *pfVar22;
      *pfVar12 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar18[1] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = *pfVar25;
      fVar2 = pfVar25[lVar14];
      fVar3 = pfVar18[2];
      fVar4 = pfVar12[-1];
      fVar5 = pfVar12[-2];
      pfVar18[2] = fVar2 * pfVar18[2] + fVar1 * pfVar18[3];
      pfVar12[-1] = fVar2 * pfVar18[3] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar13 + -1];
      fVar2 = pfVar22[-1];
      pfVar12[-2] = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar18[3] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = pfVar25[1];
      fVar2 = pfVar25[lVar14 + 1];
      fVar3 = pfVar18[4];
      fVar4 = pfVar12[-3];
      fVar5 = pfVar12[-4];
      pfVar18[4] = fVar2 * pfVar18[4] + fVar1 * pfVar18[5];
      pfVar12[-3] = fVar2 * pfVar18[5] - fVar1 * fVar3;
      fVar1 = pfVar22[-2];
      fVar2 = pfVar22[lVar13 + -2];
      pfVar12[-4] = fVar1 * fVar5 + fVar2 * fVar4;
      pfVar18[5] = fVar1 * fVar4 - fVar2 * fVar5;
      fVar1 = pfVar25[lVar14 + 2];
      fVar2 = pfVar25[2];
      fVar3 = pfVar12[-5];
      fVar4 = pfVar18[6];
      pfVar25 = pfVar25 + 4;
      fVar5 = pfVar12[-6];
      pfVar18[6] = fVar1 * pfVar18[6] + fVar2 * pfVar18[7];
      pfVar12[-5] = fVar1 * pfVar18[7] - fVar2 * fVar4;
      fVar1 = pfVar22[lVar13 + -3];
      fVar2 = pfVar22[-3];
      pfVar22 = pfVar22 + -4;
      pfVar12[-6] = fVar2 * fVar5 + fVar1 * fVar3;
      pfVar12 = pfVar12 + -8;
      pfVar18[7] = fVar2 * fVar3 - fVar1 * fVar5;
      pfVar18 = pfVar18 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((longlong)uVar23 < lVar24) {
    pfVar25 = (float *)(uVar23 * 4 + lVar26);
    pfVar22 = (float *)((lVar27 - uVar23) * 4 + -4 + lVar26);
    lVar24 = lVar24 - uVar23;
    do {
      fVar1 = *pfVar25;
      fVar2 = pfVar25[lVar14];
      pfVar25 = pfVar25 + 1;
      fVar3 = *pfVar18;
      fVar4 = pfVar12[1];
      fVar5 = *pfVar12;
      *pfVar18 = fVar2 * *pfVar18 + fVar1 * pfVar18[1];
      pfVar12[1] = fVar2 * pfVar18[1] - fVar1 * fVar3;
      fVar1 = pfVar22[lVar14 - lVar27];
      fVar2 = *pfVar22;
      pfVar22 = pfVar22 + -1;
      *pfVar12 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar12 = pfVar12 + -2;
      pfVar18[1] = fVar2 * fVar4 - fVar1 * fVar5;
      pfVar18 = pfVar18 + 2;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  pfVar12 = unaff_RBX + (longlong)in_stack_000000a0 + -1;
  iVar16 = in_stack_000000a0 / 2;
  pfVar18 = param_4 + (longlong)in_stack_000000a0 + -1;
  pfVar25 = unaff_RBX;
  pfVar22 = param_4;
  if (3 < iVar16) {
    uVar9 = (iVar16 - 4U >> 2) + 1;
    uVar23 = (ulonglong)uVar9;
    unaff_R12 = (ulonglong)(uVar9 * 4);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar25;
      fVar3 = *pfVar18;
      fVar4 = *pfVar22;
      pfVar22 = pfVar22 + 4;
      fVar5 = *(float *)((longlong)pfVar25 + (longlong)param_4 + (4 - (longlong)unaff_RBX));
      *pfVar25 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar12[-1];
      fVar2 = pfVar25[1];
      fVar3 = pfVar18[-1];
      fVar4 = *(float *)((longlong)pfVar25 + (longlong)param_4 + (8 - (longlong)unaff_RBX));
      pfVar25[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar12[-2];
      pfVar12[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar25[2];
      fVar2 = pfVar18[-2];
      pfVar25[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar12[-3];
      pfVar12[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar25[3];
      fVar2 = pfVar18[-3];
      pfVar18 = pfVar18 + -4;
      fVar4 = *(float *)((longlong)param_4 + (0xc - (longlong)unaff_RBX) + (longlong)pfVar25);
      pfVar25[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar25 = pfVar25 + 4;
      pfVar12[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar12 = pfVar12 + -4;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if ((int)unaff_R12 < iVar16) {
    lVar26 = (longlong)pfVar18 - (longlong)pfVar12;
    lVar14 = (longlong)pfVar22 - (longlong)pfVar25;
    uVar23 = (ulonglong)(uint)(iVar16 - (int)unaff_R12);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar25;
      fVar3 = *(float *)(lVar26 + (longlong)pfVar12);
      fVar4 = *(float *)(lVar14 + (longlong)pfVar25);
      *pfVar25 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar25 = pfVar25 + 1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar12 = pfVar12 + -1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  return;
}





