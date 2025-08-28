#include "TaleWorlds.Native.Split.h"
// 99_part_12_part055_sub002.c - 1 个函数
// 函数: void function_7ef55b(int32_t param_1,int param_2)
void function_7ef55b(int32_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int in_EAX;
  int iVar8;
  float *pfVar9;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_R14;
  int64_t lVar12;
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
  lVar10 = (int64_t)iVar8;
  lVar1 = unaff_RSI + (int64_t)iVar7 * 4;
  lVar2 = unaff_RSI + (int64_t)(iVar8 * 6) * 4;
  function_7ef510(param_1,unaff_R14 + (int64_t)(iVar8 * 2) * 4);
  lVar11 = unaff_R14 +
           (int64_t)((((int)(unaff_EBX + (unaff_EBX >> 0x1f & 7U)) >> 3) + iVar8) * 2) * 4;
  function_7ef510(lVar1,lVar11,iVar8);
  function_7ef510(lVar2,lVar11,iVar8);
  if (0 < lVar10) {
    pfVar9 = (float *)(unaff_RSI + 4 + lVar10 * 8);
    lVar12 = (unaff_R14 + lVar10 * -8) - unaff_RSI;
    lVar11 = lVar10;
    do {
      fVar13 = *(float *)(lVar12 + -4 + (int64_t)pfVar9);
      fVar14 = *(float *)(lVar12 + (int64_t)pfVar9);
      fVar15 = *(float *)(((lVar2 + lVar10 * -8) - unaff_RSI) + -4 + (int64_t)pfVar9);
      fVar3 = *(float *)((int64_t)pfVar9 + ((lVar1 + lVar10 * -8) - unaff_RSI) + -4);
      fVar18 = fVar3 * -fVar14 + pfVar9[(int64_t)iVar7 + lVar10 * -2] * fVar13;
      fVar4 = pfVar9[lVar10 * -2 + -1];
      fVar17 = fVar3 * fVar13 - pfVar9[(int64_t)iVar7 + lVar10 * -2] * -fVar14;
      fVar3 = *pfVar9;
      fVar5 = pfVar9[-1];
      fVar16 = fVar15 * fVar14 + pfVar9[(int64_t)(iVar8 * 6) + lVar10 * -2] * fVar13;
      fVar6 = pfVar9[lVar10 * -2];
      fVar13 = fVar15 * fVar13 - pfVar9[(int64_t)(iVar8 * 6) + lVar10 * -2] * fVar14;
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