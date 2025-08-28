#include "TaleWorlds.Native.Split.h"

// 99_part_12_part055_sub002.c - 1 个函数

// 函数: void FUN_1807ef55b(undefined4 param_1,int param_2)
void FUN_1807ef55b(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int in_EAX;
  int iVar8;
  float *pfVar9;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_R14;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iStack00000000000000c0;
  
  iStack00000000000000c0 = in_EAX - param_2 >> 1;
  iVar7 = iStack00000000000000c0 * 2;
  iVar8 = (int)(unaff_EBX + (unaff_EBX >> 0x1f & 3U)) >> 2;
  lVar10 = (longlong)iVar8;
  lVar1 = unaff_RSI + (longlong)iVar7 * 4;
  lVar2 = unaff_RSI + (longlong)(iVar8 * 6) * 4;
  FUN_1807ef510(param_1,unaff_R14 + (longlong)(iVar8 * 2) * 4);
  lVar11 = unaff_R14 +
           (longlong)((((int)(unaff_EBX + (unaff_EBX >> 0x1f & 7U)) >> 3) + iVar8) * 2) * 4;
  FUN_1807ef510(lVar1,lVar11,iVar8);
  FUN_1807ef510(lVar2,lVar11,iVar8);
  if (0 < lVar10) {
    pfVar9 = (float *)(unaff_RSI + 4 + lVar10 * 8);
    lVar12 = (unaff_R14 + lVar10 * -8) - unaff_RSI;
    lVar11 = lVar10;
    do {
      fVar13 = *(float *)(lVar12 + -4 + (longlong)pfVar9);
      fVar14 = *(float *)(lVar12 + (longlong)pfVar9);
      fVar15 = *(float *)(((lVar2 + lVar10 * -8) - unaff_RSI) + -4 + (longlong)pfVar9);
      fVar3 = *(float *)((longlong)pfVar9 + ((lVar1 + lVar10 * -8) - unaff_RSI) + -4);
      fVar18 = fVar3 * -fVar14 + pfVar9[(longlong)iVar7 + lVar10 * -2] * fVar13;
      fVar4 = pfVar9[lVar10 * -2 + -1];
      fVar17 = fVar3 * fVar13 - pfVar9[(longlong)iVar7 + lVar10 * -2] * -fVar14;
      fVar3 = *pfVar9;
      fVar5 = pfVar9[-1];
      fVar16 = fVar15 * fVar14 + pfVar9[(longlong)(iVar8 * 6) + lVar10 * -2] * fVar13;
      fVar6 = pfVar9[lVar10 * -2];
      fVar13 = fVar15 * fVar13 - pfVar9[(longlong)(iVar8 * 6) + lVar10 * -2] * fVar14;
      fVar15 = fVar16 + fVar18;
      fVar18 = fVar18 - fVar16;
      fVar14 = fVar13 + fVar17;
      fVar17 = fVar17 - fVar13;
      pfVar9[lVar10 * -2 + -1] = fVar4 + fVar14;
      pfVar9[lVar10 * -2] = fVar6 + fVar15;
      pfVar9[-1] = fVar5 + fVar18;
      *pfVar9 = fVar3 - fVar17;
      pfVar9[(iStack00000000000000c0 - lVar10) * 2 + -1] = fVar4 - fVar14;
      pfVar9[(iStack00000000000000c0 - lVar10) * 2] = fVar6 - fVar15;
      pfVar9[lVar10 * 4 + -1] = fVar5 - fVar18;
      pfVar9[lVar10 * 4] = fVar3 + fVar17;
      pfVar9 = pfVar9 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}







