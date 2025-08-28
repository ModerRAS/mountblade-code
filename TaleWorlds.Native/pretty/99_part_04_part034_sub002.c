#include "TaleWorlds.Native.Split.h"
// 99_part_04_part034_sub002.c - 1 个函数
// 函数: void function_2a4fa0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a4fa0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  ushort uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  float fVar14;
  iVar9 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar14 = (float)iVar9 * param_2[1];
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)param_1 + 0x5c);
  iVar11 = (int)fVar14;
  iVar3 = uVar1 - 1;
  fVar14 = (float)iVar3 * *param_2;
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  iVar4 = (int)fVar14;
  iVar13 = iVar4 + 1;
  if ((iVar4 < 0) || (iVar3 <= iVar4)) {
    iVar7 = iVar3;
    if (iVar4 <= iVar3) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    if (iVar13 <= iVar3) {
      iVar3 = iVar13;
    }
    iVar13 = 0;
    if (-1 < iVar3) {
      iVar13 = iVar3;
    }
  }
  if ((iVar11 < 0) || (iVar3 = iVar11, iVar7 = iVar11 + 1, iVar5 = iVar11 + 1, iVar9 <= iVar11)) {
    iVar7 = iVar9;
    if (iVar11 <= iVar9) {
      iVar7 = iVar11;
    }
    iVar3 = 0;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    if (iVar11 <= iVar9) {
      iVar9 = iVar11;
    }
    iVar11 = 0;
    iVar7 = iVar3;
    iVar5 = 0;
    if (-1 < iVar9) {
      iVar11 = iVar9;
      iVar5 = iVar9;
    }
  }
  uVar8 = (uint64_t)(iVar7 * (uint)uVar1 + iVar4);
  uVar10 = (uint64_t)(iVar3 * (uint)uVar1 + iVar4);
  lVar2 = *param_1;
  uVar12 = (uint64_t)(iVar11 * (uint)uVar1 + iVar13);
  uVar6 = (uint64_t)(iVar5 * (uint)uVar1 + iVar13);
  *param_4 = *(int32_t *)(lVar2 + uVar10 * 6);
  *(int16_t *)(param_4 + 1) = *(int16_t *)(lVar2 + 4 + uVar10 * 6);
  *(int32_t *)((int64_t)param_4 + 6) = *(int32_t *)(lVar2 + uVar12 * 6);
  *(int16_t *)((int64_t)param_4 + 10) = *(int16_t *)(lVar2 + 4 + uVar12 * 6);
  param_4[3] = *(int32_t *)(lVar2 + uVar8 * 6);
  *(int16_t *)(param_4 + 4) = *(int16_t *)(lVar2 + 4 + uVar8 * 6);
  *(int32_t *)((int64_t)param_4 + 0x12) = *(int32_t *)(lVar2 + uVar6 * 6);
  *(int16_t *)((int64_t)param_4 + 0x16) = *(int16_t *)(lVar2 + 4 + uVar6 * 6);
  return;
}