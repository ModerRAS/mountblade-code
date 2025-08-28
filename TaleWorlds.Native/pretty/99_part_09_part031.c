#include "TaleWorlds.Native.Split.h"

// 99_part_09_part031.c - 5 个函数

// 函数: void FUN_1805cca5d(void)
void FUN_1805cca5d(void)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  uint64_t *puVar4;
  float *pfVar5;
  int64_t *plVar6;
  int32_t uVar7;
  uint64_t unaff_RBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  
  puVar4 = (uint64_t *)FUN_1805b6c30(unaff_R14 + 1);
  uVar7 = (int32_t)unaff_RBP;
  fStack00000000000000a4 = (float)((uint64_t)*puVar4 >> 0x20);
  fStack00000000000000a0 = (float)*puVar4;
  fVar9 = fStack00000000000000a4 * fStack00000000000000a4 +
          fStack00000000000000a0 * fStack00000000000000a0;
  fVar9 = (float)(int)CONCAT71((int7)((uint64_t)unaff_RBP >> 8),fVar9 <= 1.1754944e-38) *
          1.1754944e-38 + fVar9;
  auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar10 = auVar11._0_4_;
  fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
  pfVar5 = (float *)FUN_1805b6920(unaff_R14 + 1);
  fVar9 = fStack00000000000000a4 * fVar9 * pfVar5[1] + fStack00000000000000a0 * fVar9 * *pfVar5;
  if ((fVar9 < -0.5) && (*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) != -1)) {
    plVar6 = *(int64_t **)(*(int64_t *)(*unaff_R14 + 0x658) + 0x210);
    pcVar3 = *(code **)(*plVar6 + 0xb8);
    pfVar5 = (float *)FUN_1805b6c30(unaff_R14 + 1);
    fVar10 = pfVar5[1];
    fVar1 = *pfVar5;
    fVar2 = pfVar5[2];
    pfVar5 = (float *)FUN_1805b6980(unaff_R14 + 1);
    fVar8 = (float)(*pcVar3)(plVar6,1);
    if ((*pfVar5 / (SQRT(fVar1 * fVar1 + fVar10 * fVar10 + fVar2 * fVar2) + 0.1)) * (-1.0 / fVar9) -
        0.5 < fVar8) {
      *(int32_t *)(unaff_R14 + 0x277) = uVar7;
      *(int32_t *)((int64_t)unaff_R14 + 0x178c) = uVar7;
      *(int8_t *)((int64_t)unaff_R14 + 0x13bd) = 1;
    }
  }
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((int64_t)unaff_R14 + 0x158c) = *(uint *)((int64_t)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar6 = *(int64_t **)(*(int64_t *)(*(int64_t *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (int64_t)plVar6;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar6 = (int64_t *)unaff_R14[0x15];
  }
  if ((*plVar6 != 0) && ((short)unaff_RBP < *(short *)(*plVar6 + 8))) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = uVar7;
  }
  if ((*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = uVar7;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805ccb47(void)
void FUN_1805ccb47(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int64_t in_RAX;
  float *pfVar5;
  int64_t *plVar6;
  int32_t unaff_EBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar7;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  plVar6 = *(int64_t **)(in_RAX + 0x210);
  pcVar4 = *(code **)(*plVar6 + 0xb8);
  pfVar5 = (float *)FUN_1805b6c30();
  fVar1 = pfVar5[1];
  fVar2 = *pfVar5;
  fVar3 = pfVar5[2];
  pfVar5 = (float *)FUN_1805b6980(unaff_R14 + 1);
  fVar7 = (float)(*pcVar4)(plVar6,1);
  if ((*pfVar5 / (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) + 0.1)) *
      (-1.0 / unaff_XMM10_Da) - 0.5 < fVar7) {
    *(int32_t *)(unaff_R14 + 0x277) = unaff_EBP;
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
    *(int8_t *)((int64_t)unaff_R14 + 0x13bd) = 1;
  }
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((int64_t)unaff_R14 + 0x158c) = *(uint *)((int64_t)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar6 = *(int64_t **)(*(int64_t *)(*(int64_t *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (int64_t)plVar6;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar6 = (int64_t *)unaff_R14[0x15];
  }
  if ((*plVar6 != 0) && ((short)unaff_EBP < *(short *)(*plVar6 + 8))) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if ((*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805ccbfe(void)
void FUN_1805ccbfe(void)

{
  int64_t *plVar1;
  int32_t unaff_EBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  
  *(int32_t *)(unaff_R14 + 0x277) = unaff_EBP;
  *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  *(int8_t *)((int64_t)unaff_R14 + 0x13bd) = 1;
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((int64_t)unaff_R14 + 0x158c) = *(uint *)((int64_t)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (int64_t)plVar1;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar1 = (int64_t *)unaff_R14[0x15];
  }
  if ((*plVar1 != 0) && ((short)unaff_EBP < *(short *)(*plVar1 + 8))) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if ((*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805ccc24(void)
void FUN_1805ccc24(void)

{
  int64_t *plVar1;
  int32_t unaff_EBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((int64_t)unaff_R14 + 0x158c) = *(uint *)((int64_t)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (int64_t)plVar1;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar1 = (int64_t *)unaff_R14[0x15];
  }
  if ((*plVar1 != 0) && ((short)unaff_EBP < *(short *)(*plVar1 + 8))) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if ((*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805ccc2c(void)
void FUN_1805ccc2c(void)

{
  int64_t *plVar1;
  int32_t unaff_EBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  
  if (*(int *)(*unaff_R14 + 0x564) == -1) {
    *(uint *)((int64_t)unaff_R14 + 0x158c) = *(uint *)((int64_t)unaff_R14 + 0x158c) & 0xfffffff0;
    unaff_R14[0x4b] = 0;
    unaff_R14[0x4c] = 0;
  }
  if ((*(uint *)(unaff_R14 + 2) & 0x20) == 0) {
    plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)unaff_R14[1] + 0x8f8) + 0x9e8);
    unaff_R14[0x15] = (int64_t)plVar1;
    *(uint *)(unaff_R14 + 2) = *(uint *)(unaff_R14 + 2) | 0x20;
  }
  else {
    plVar1 = (int64_t *)unaff_R14[0x15];
  }
  if ((*plVar1 != 0) && ((short)unaff_EBP < *(short *)(*plVar1 + 8))) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if ((*(int *)(*(int64_t *)(*unaff_R14 + 0x590) + 0x2498) == -1) &&
     (unaff_XMM11_Da <
      (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ea] * 8) - unaff_R14[0x2e9]) *
      unaff_XMM9_Da)) {
    *(int32_t *)((int64_t)unaff_R14 + 0x178c) = unaff_EBP;
  }
  if (((((int)unaff_R14[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_R14[0x2ee] * 8) - unaff_R14[0x2ed]) *
        unaff_XMM9_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






