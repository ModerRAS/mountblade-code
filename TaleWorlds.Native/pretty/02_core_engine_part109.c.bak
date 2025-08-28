#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part109.c - 9 个函数

// 函数: void FUN_1801251b1(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1801251b1(uint64_t param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  
  if ((in_XMM4_Da != 0.0) || (*(float *)(param_2 + 300) != 0.0)) {
    uVar4 = *(uint *)(param_3 + 0xc);
    lVar3 = param_3;
    while ((((uVar4 >> 0x18 & 1) != 0 && ((uVar4 & 0x218) == 0x10)) &&
           (lVar2 = *(longlong *)(lVar3 + 0x398), lVar2 != 0))) {
      uVar4 = *(uint *)(lVar2 + 0xc);
      lVar3 = lVar2;
    }
    uVar4 = *(uint *)(lVar3 + 0xc) & 0x210;
    if (in_XMM4_Da != 0.0) {
      if (*(char *)(param_2 + 0x134) == '\0') {
        if (uVar4 == 0) {
          fVar6 = *(float *)(param_2 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                  *(float *)(lVar3 + 0x2dc) * 5.0;
          fVar1 = *(float *)(lVar3 + 0x90);
          fVar5 = (*(float *)(lVar3 + 0x27c) - *(float *)(lVar3 + 0x274)) * 0.67 +
                  *(float *)(lVar3 + 0x74) * 1.34;
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
          fVar5 = fVar1 - (float)(int)fVar5 * in_XMM4_Da;
          *(float *)(lVar3 + 0x90) = fVar5;
          *(float *)(lVar3 + 0x11c) = (fVar1 + *(float *)(lVar3 + 0x11c)) - fVar5;
        }
      }
      else if (*(char *)(param_2 + 0xac) != '\0') {
        fVar1 = *(float *)(param_3 + 0x2d8);
        fVar6 = in_XMM4_Da * 0.1 + fVar1;
        fVar5 = 0.5;
        if ((0.5 <= fVar6) && (fVar5 = fVar6, 2.5 <= fVar6)) {
          fVar5 = 2.5;
        }
        *(float *)(param_3 + 0x2d8) = fVar5;
        fVar6 = *(float *)(param_2 + 0x11c);
        fVar5 = fVar5 / fVar1;
        *(float *)(param_3 + 0x40) =
             ((*(float *)(param_2 + 0x118) - *(float *)(param_3 + 0x40)) *
             *(float *)(param_3 + 0x48) * (1.0 - fVar5)) / *(float *)(param_3 + 0x48) +
             *(float *)(param_3 + 0x40);
        *(float *)(param_3 + 0x44) =
             (*(float *)(param_3 + 0x4c) * (1.0 - fVar5) * (fVar6 - *(float *)(param_3 + 0x44))) /
             *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x44);
        *(float *)(param_3 + 0x48) = fVar5 * *(float *)(param_3 + 0x48);
        *(float *)(param_3 + 0x4c) = fVar5 * *(float *)(param_3 + 0x4c);
        *(float *)(param_3 + 0x54) = fVar5 * *(float *)(param_3 + 0x54);
        *(float *)(param_3 + 0x50) = fVar5 * *(float *)(param_3 + 0x50);
      }
    }
    if (((*(float *)(param_2 + 300) != 0.0) && (uVar4 == 0)) && (*(char *)(param_2 + 0x134) == '\0')
       ) {
      fVar1 = *(float *)(lVar3 + 0x8c);
      fVar5 = fVar1 - *(float *)(param_2 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                      *(float *)(lVar3 + 0x2dc) * *(float *)(param_2 + 300);
      *(float *)(lVar3 + 0x8c) = fVar5;
      *(float *)(lVar3 + 0x118) = (fVar1 + *(float *)(lVar3 + 0x118)) - fVar5;
    }
  }
  return;
}





// 函数: void FUN_18012524a(float param_1,longlong param_2,longlong param_3,int param_4)
void FUN_18012524a(float param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong in_RCX;
  float in_XMM1_Da;
  float fVar1;
  float in_XMM4_Da;
  float fVar2;
  float unaff_XMM9_Da;
  
  fVar2 = in_XMM4_Da + in_XMM1_Da;
  if ((param_1 <= fVar2) && (param_1 = fVar2, 2.5 <= fVar2)) {
    param_1 = 2.5;
  }
  *(float *)(param_3 + 0x2d8) = param_1;
  fVar2 = *(float *)(param_2 + 0x11c);
  param_1 = param_1 / in_XMM1_Da;
  *(float *)(param_3 + 0x40) =
       ((*(float *)(param_2 + 0x118) - *(float *)(param_3 + 0x40)) *
       *(float *)(param_3 + 0x48) * (1.0 - param_1)) / *(float *)(param_3 + 0x48) +
       *(float *)(param_3 + 0x40);
  *(float *)(param_3 + 0x44) =
       (*(float *)(param_3 + 0x4c) * (1.0 - param_1) * (fVar2 - *(float *)(param_3 + 0x44))) /
       *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x44);
  *(float *)(param_3 + 0x48) = param_1 * *(float *)(param_3 + 0x48);
  *(float *)(param_3 + 0x4c) = param_1 * *(float *)(param_3 + 0x4c);
  *(float *)(param_3 + 0x54) = param_1 * *(float *)(param_3 + 0x54);
  *(float *)(param_3 + 0x50) = param_1 * *(float *)(param_3 + 0x50);
  if (((*(float *)(param_2 + 300) != unaff_XMM9_Da) && (param_4 == 0)) &&
     (*(char *)(param_2 + 0x134) == '\0')) {
    fVar2 = *(float *)(in_RCX + 0x8c);
    fVar1 = fVar2 - *(float *)(param_2 + 0x19fc) * *(float *)(in_RCX + 0x2d8) *
                    *(float *)(in_RCX + 0x2dc) * *(float *)(param_2 + 300);
    *(float *)(in_RCX + 0x8c) = fVar1;
    *(float *)(in_RCX + 0x118) = (fVar2 + *(float *)(in_RCX + 0x118)) - fVar1;
  }
  return;
}





// 函数: void FUN_18012533c(longlong param_1,longlong param_2,uint64_t param_3,int param_4)
void FUN_18012533c(longlong param_1,longlong param_2,uint64_t param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_XMM4_Da;
  float unaff_XMM9_Da;
  
  if (param_4 == 0) {
    fVar2 = *(float *)(param_2 + 0x19fc) * *(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x2dc)
            * 5.0;
    fVar1 = *(float *)(param_1 + 0x90);
    fVar3 = (*(float *)(param_1 + 0x27c) - *(float *)(param_1 + 0x274)) * 0.67 +
            *(float *)(param_1 + 0x74) * 1.34;
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    fVar3 = fVar1 - (float)(int)fVar3 * in_XMM4_Da;
    *(float *)(param_1 + 0x90) = fVar3;
    *(float *)(param_1 + 0x11c) = (fVar1 + *(float *)(param_1 + 0x11c)) - fVar3;
  }
  if (((*(float *)(param_2 + 300) != unaff_XMM9_Da) && (param_4 == 0)) &&
     (*(char *)(param_2 + 0x134) == '\0')) {
    fVar1 = *(float *)(param_1 + 0x8c);
    fVar3 = fVar1 - *(float *)(param_2 + 0x19fc) * *(float *)(param_1 + 0x2d8) *
                    *(float *)(param_1 + 0x2dc) * *(float *)(param_2 + 300);
    *(float *)(param_1 + 0x8c) = fVar3;
    *(float *)(param_1 + 0x118) = (fVar1 + *(float *)(param_1 + 0x118)) - fVar3;
  }
  return;
}





// 函数: void FUN_180125434(void)
void FUN_180125434(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125440(void)
void FUN_180125440(void)

{
  double dVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  int8_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  FUN_180127d70();
  uVar10 = 0;
  uVar7 = uVar10;
  if (0 < *(int *)(lVar4 + 0x1bb0)) {
    lVar8 = (longlong)*(int *)(lVar4 + 0x1bb0) + -1;
    puVar9 = (ulonglong *)(*(longlong *)(lVar4 + 0x1bb8) + 8 + lVar8 * 0x30);
    do {
      uVar7 = *puVar9;
      if ((uVar7 != 0) && ((*(uint *)(uVar7 + 0xc) & 0x8000000) != 0)) {
        uVar6 = *(ulonglong *)(lVar4 + 0x1b08);
        if ((uVar6 != 0) && (*(ulonglong *)(uVar6 + 0x3a0) != uVar7)) goto LAB_1801254f0;
        break;
      }
      puVar9 = puVar9 + -6;
      lVar8 = lVar8 + -1;
      uVar7 = uVar10;
    } while (-1 < lVar8);
  }
  goto LAB_18012549e;
  while (uVar6 = *(ulonglong *)(uVar6 + 0x398), uVar6 != 0) {
LAB_1801254f0:
    if (uVar6 == uVar7) goto LAB_18012549e;
  }
  *(uint64_t *)(lVar4 + 0x1b10) = 0;
  *(uint64_t *)(lVar4 + 0x1b08) = 0;
  *(uint64_t *)(lVar4 + 0x1b00) = 0;
LAB_18012549e:
  if ((*(byte *)(lVar4 + 8) & 0x10) != 0) {
    *(uint64_t *)(lVar4 + 0x1b10) = 0;
    *(uint64_t *)(lVar4 + 0x1b08) = 0;
    *(uint64_t *)(lVar4 + 0x1b00) = 0;
  }
  if (*(char *)(lVar4 + 0x410) != '\0') {
    if ((*(longlong *)(lVar4 + 0x1b00) == 0) && (*(int *)(lVar4 + 0x1bb0) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)(lVar4 + 0x41f) = uVar5;
  }
  cVar2 = *(char *)(lVar4 + 0x120);
  iVar11 = (cVar2 != '\0') - 1;
  if (*(char *)(lVar4 + 0x411) != '\0') {
    if ((*(longlong *)(lVar4 + 0x1b00) == 0) && (*(int *)(lVar4 + 0x1bb0) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)(lVar4 + 0x420) = uVar5;
  }
  if ((*(char *)(lVar4 + 0x121) != '\0') &&
     ((cVar2 == '\0' ||
      (dVar1 = *(double *)(lVar4 + 1000 + (longlong)iVar11 * 8),
      *(double *)(lVar4 + 0x3f0) <= dVar1 && dVar1 != *(double *)(lVar4 + 0x3f0))))) {
    iVar11 = 1;
  }
  if (*(char *)(lVar4 + 0x412) != '\0') {
    if ((*(longlong *)(lVar4 + 0x1b00) == 0) && (*(int *)(lVar4 + 0x1bb0) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)(lVar4 + 0x421) = uVar5;
  }
  if ((*(char *)(lVar4 + 0x122) != '\0') &&
     ((iVar11 == -1 ||
      (dVar1 = *(double *)(lVar4 + 1000 + (longlong)iVar11 * 8),
      *(double *)(lVar4 + 0x3f8) <= dVar1 && dVar1 != *(double *)(lVar4 + 0x3f8))))) {
    iVar11 = 2;
  }
  if (*(char *)(lVar4 + 0x413) != '\0') {
    if ((*(longlong *)(lVar4 + 0x1b00) == 0) && (*(int *)(lVar4 + 0x1bb0) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)(lVar4 + 0x422) = uVar5;
  }
  if ((*(char *)(lVar4 + 0x123) != '\0') &&
     ((iVar11 == -1 ||
      (dVar1 = *(double *)(lVar4 + 1000 + (longlong)iVar11 * 8),
      *(double *)(lVar4 + 0x400) <= dVar1 && dVar1 != *(double *)(lVar4 + 0x400))))) {
    iVar11 = 3;
  }
  if (*(char *)(lVar4 + 0x414) != '\0') {
    if ((*(longlong *)(lVar4 + 0x1b00) == 0) && (*(int *)(lVar4 + 0x1bb0) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)(lVar4 + 0x423) = uVar5;
  }
  if ((*(char *)(lVar4 + 0x124) == '\0') ||
     ((iVar11 != -1 &&
      (dVar1 = *(double *)(lVar4 + 1000 + (longlong)iVar11 * 8),
      dVar1 < *(double *)(lVar4 + 0x408) || dVar1 == *(double *)(lVar4 + 0x408))))) {
    if (iVar11 != -1) goto LAB_180125699;
  }
  else {
    iVar11 = 4;
LAB_180125699:
    if (*(char *)((longlong)iVar11 + 0x41f + lVar4) == '\0') {
      bVar12 = false;
      goto LAB_1801256ac;
    }
  }
  bVar12 = true;
LAB_1801256ac:
  if ((*(char *)(lVar4 + 0x1dd0) == '\0') || ((*(byte *)(lVar4 + 0x1dd4) & 0x10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar12) && (!bVar3)) {
    *(uint64_t *)(lVar4 + 0x1b10) = 0;
    *(uint64_t *)(lVar4 + 0x1b08) = 0;
    *(uint64_t *)(lVar4 + 0x1b00) = 0;
  }
  if (*(int *)(lVar4 + 0x3048) == -1) {
    if (((bVar12) &&
        ((*(longlong *)(lVar4 + 0x1b00) != 0 ||
         ((((cVar2 != '\0' || *(char *)(lVar4 + 0x121) != '\0') || *(char *)(lVar4 + 0x122) != '\0')
          || *(char *)(lVar4 + 0x123) != '\0') || *(char *)(lVar4 + 0x124) != '\0')))) ||
       (*(int *)(lVar4 + 0x1bb0) != 0)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
  }
  else {
    bVar12 = *(int *)(lVar4 + 0x3048) != 0;
  }
  *(bool *)(lVar4 + 0x38c) = bVar12;
  if (*(int *)(lVar4 + 0x304c) == -1) {
    if ((*(int *)(lVar4 + 0x1b2c) == 0) && (uVar7 == 0)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
  }
  else {
    bVar12 = *(int *)(lVar4 + 0x304c) != 0;
  }
  *(bool *)(lVar4 + 0x38d) = bVar12;
  if ((*(char *)(lVar4 + 0x391) != '\0') && (((byte)*(int32_t *)(lVar4 + 8) & 9) == 1)) {
    *(int8_t *)(lVar4 + 0x38d) = 1;
  }
  if (*(int *)(lVar4 + 0x3050) != -1) {
    uVar10 = (ulonglong)(*(int *)(lVar4 + 0x3050) != 0);
  }
  *(char *)(lVar4 + 0x38e) = (char)uVar10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125780(uint64_t param_1,uint64_t param_2)
void FUN_180125780(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t auStackX_8 [3];
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0xcb) != '\0') && ((*(byte *)(SYSTEM_DATA_MANAGER_A + 0xc) & 2) == 0)) {
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0xcb) = 0;
  }
  if (((*(uint *)(lVar3 + 8) >> 10 & 1) != 0) && ((*(uint *)(lVar3 + 0xc) & 0x1400) != 0x1400)) {
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xfffffbff;
  }
  uVar8 = 0;
  if (*(char *)(lVar3 + 0x2e00) == '\0') {
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      auStackX_8[0] = 0;
      lVar4 = FUN_180121420(*(longlong *)(lVar3 + 0x20),param_2,auStackX_8);
      if (lVar4 != 0) {
        FUN_18013cb20(lVar4,auStackX_8[0]);
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar4,SYSTEM_DATA_MANAGER_B);
      }
    }
    *(int8_t *)(lVar3 + 0x2e00) = 1;
  }
  if ((0.0 < *(float *)(lVar3 + 0x2e04)) &&
     (fVar11 = *(float *)(lVar3 + 0x2e04) - *(float *)(lVar3 + 0x18),
     *(float *)(lVar3 + 0x2e04) = fVar11, fVar11 <= 0.0)) {
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      *(int8_t *)(lVar3 + 0x390) = 1;
    }
    else {
      FUN_18013cdc0();
    }
    *(int32_t *)(lVar3 + 0x2e04) = 0;
  }
  *(int *)(lVar3 + 0x1a90) = *(int *)(lVar3 + 0x1a90) + 1;
  *(int8_t *)(lVar3 + 1) = 1;
  *(int32_t *)(lVar3 + 0x2dcc) = 0;
  *(int32_t *)(lVar3 + 0x1af0) = 0;
  *(int32_t *)(lVar3 + 0x19e8) = *(int32_t *)(lVar3 + 8);
  *(double *)(lVar3 + 0x1a88) = (double)*(float *)(lVar3 + 0x18) + *(double *)(lVar3 + 0x1a88);
  FUN_180130010();
  lVar4 = SYSTEM_DATA_MANAGER_A;
  **(int8_t **)(lVar3 + 0xa0) = 1;
  pfVar6 = *(float **)(lVar4 + 0xb0);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)**(uint64_t **)(*(longlong *)(lVar4 + 0xa0) + 0x48);
  }
  lVar2 = *(longlong *)(lVar4 + 0x1af8);
  *(float **)(lVar4 + 0x19f0) = pfVar6;
  fVar11 = *(float *)(lVar4 + 0xa8) * *pfVar6 * pfVar6[1];
  *(float *)(lVar4 + 0x19fc) = fVar11;
  if (lVar2 == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = fVar11 * *(float *)(lVar2 + 0x2d8) * *(float *)(lVar2 + 0x2dc);
  }
  *(float *)(lVar4 + 0x19f8) = fVar11;
  fVar12 = 0.0;
  fVar13 = 0.0;
  *(uint64_t *)(lVar4 + 0x1a00) = *(uint64_t *)(*(longlong *)(pfVar6 + 0x16) + 0x38);
  *(float *)(lVar4 + 0x1a10) = fVar11;
  *(float **)(lVar4 + 0x1a08) = pfVar6;
  uVar10 = *(uint *)(lVar3 + 0x1c68);
  if (0 < (int)uVar10) {
    plVar7 = *(longlong **)(lVar3 + 0x1c70);
    uVar9 = (ulonglong)uVar10;
    fVar11 = fVar12;
    fVar14 = fVar13;
    do {
      lVar2 = *plVar7;
      plVar7 = plVar7 + 1;
      fVar12 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 8);
      fVar13 = *(float *)(lVar2 + 0x14) + *(float *)(lVar2 + 0xc);
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      uVar9 = uVar9 - 1;
      fVar11 = fVar12;
      fVar14 = fVar13;
    } while (uVar9 != 0);
  }
  *(int32_t *)(lVar3 + 0x1a14) = *(int32_t *)(lVar3 + 0x16c4);
  *(int32_t *)(lVar3 + 0x1a18) = 0;
  *(int32_t *)(lVar3 + 0x1a1c) = 0;
  *(float *)(lVar3 + 0x1a20) = fVar12;
  *(float *)(lVar3 + 0x1a24) = fVar13;
  uVar9 = uVar8;
  if (0 < (int)uVar10) {
    do {
      uVar10 = (int)uVar9 + 1;
      lVar2 = *(longlong *)(uVar8 + *(longlong *)(lVar3 + 0x1c70));
      *(uint64_t *)(lVar2 + 0x20) = 0;
      *(uint64_t *)(lVar2 + 0xac) = 0;
      *(uint64_t *)(lVar2 + 0xa4) = *(uint64_t *)(lVar2 + 0xac);
      *(int8_t *)(lVar2 + 0x88) = 0;
      *(uint64_t *)(lVar2 + 0x90) = 0;
      *(uint64_t *)(lVar2 + 0x9c) = 0;
      *(int32_t *)(lVar2 + 0x98) = 0;
      uVar8 = uVar8 + 8;
      uVar9 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(lVar3 + 0x1c68));
  }
  if ((*(char *)(lVar3 + 0x1dd0) != '\0') &&
     (iVar1 = *(int *)(lVar3 + 0x1dec), iVar1 == *(int *)(lVar3 + 0x1b2c))) {
    if (*(int *)(lVar4 + 0x1b2c) == iVar1) {
      *(int *)(lVar4 + 0x1b34) = iVar1;
    }
    if (*(int *)(lVar4 + 0x1b30) == iVar1) {
      *(int8_t *)(lVar4 + 0x1b3f) = 1;
    }
  }
  iVar1 = *(int *)(lVar3 + 0x1b18);
  if (*(int *)(lVar3 + 0x1b20) == 0) {
    *(int32_t *)(lVar3 + 0x1b24) = 0;
  }
  else if ((iVar1 == 0) || (*(int *)(lVar3 + 0x1b2c) != iVar1)) goto LAB_180125a82;
  *(int32_t *)(lVar3 + 0x1b28) = 0;
LAB_180125a82:
  fVar11 = *(float *)(lVar3 + 0x18);
  iVar5 = *(int *)(lVar3 + 0x1b2c);
  if ((iVar1 != 0) &&
     (*(float *)(lVar3 + 0x1b24) = fVar11 + *(float *)(lVar3 + 0x1b24), iVar5 != iVar1)) {
    *(float *)(lVar3 + 0x1b28) = fVar11 + *(float *)(lVar3 + 0x1b28);
  }
  *(int *)(lVar3 + 0x1b20) = iVar1;
  *(int32_t *)(lVar3 + 0x1b18) = 0;
  *(int8_t *)(lVar3 + 0x1b1c) = 0;
  if (((*(int *)(lVar3 + 0x1b34) != iVar5) && (*(int *)(lVar3 + 0x1b30) == iVar5)) && (iVar5 != 0))
  {
    *(bool *)(lVar4 + 0x1b3c) = *(int *)(lVar4 + 0x1b2c) != 0;
    if (*(int *)(lVar4 + 0x1b2c) != 0) {
      *(int32_t *)(lVar4 + 0x1b38) = 0;
      *(int8_t *)(lVar4 + 0x1b3e) = 0;
    }
    *(int32_t *)(lVar4 + 0x1b2c) = 0;
    *(int32_t *)(lVar4 + 0x1b44) = 0;
    *(int8_t *)(lVar4 + 0x1b3d) = 0;
    *(uint64_t *)(lVar4 + 0x1b50) = 0;
    iVar5 = *(int *)(lVar3 + 0x1b2c);
    fVar11 = *(float *)(lVar3 + 0x18);
  }
  if (iVar5 != 0) {
    *(float *)(lVar3 + 0x1b38) = fVar11 + *(float *)(lVar3 + 0x1b38);
  }
  *(uint64_t *)(lVar3 + 7000) = *(uint64_t *)(lVar3 + 0x1b50);
  *(int8_t *)(lVar3 + 0x1b40) = *(int8_t *)(lVar3 + 0x1b3e);
  *(float *)(lVar3 + 0x1b68) = fVar11 + *(float *)(lVar3 + 0x1b68);
  *(int *)(lVar3 + 0x1b30) = iVar5;
  *(int32_t *)(lVar3 + 0x1b34) = 0;
  *(int8_t *)(lVar3 + 0x1b3f) = 0;
  *(int8_t *)(lVar3 + 0x1b3c) = 0;
  if ((*(int *)(lVar3 + 0x2da0) != 0) && (iVar5 != *(int *)(lVar3 + 0x2da0))) {
    *(int32_t *)(lVar3 + 0x2da0) = 0;
  }
  *(int32_t *)(lVar3 + 0x1e40) = *(int32_t *)(lVar3 + 0x1e3c);
  *(uint64_t *)(lVar3 + 0x1e38) = 0x7f7fffff;
  *(int8_t *)(lVar3 + 0x1dd1) = 0;
                    // WARNING: Subroutine does not return
  memcpy(lVar3 + 0xc88,lVar3 + 0x488,0x800);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125793(uint64_t param_1,uint64_t param_2)
void FUN_180125793(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t in_stack_00000060;
  
  if ((*(char *)(unaff_RBX + 0xcb) != '\0') && ((*(byte *)(unaff_RBX + 0xc) & 2) == 0)) {
    *(int8_t *)(unaff_RBX + 0xcb) = 0;
  }
  if (((*(uint *)(unaff_RBX + 8) >> 10 & 1) != 0) &&
     ((*(uint *)(unaff_RBX + 0xc) & 0x1400) != 0x1400)) {
    *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) & 0xfffffbff;
  }
  uVar7 = 0;
  if (*(char *)(unaff_RBX + 0x2e00) == '\0') {
    if (*(longlong *)(unaff_RBX + 0x20) != 0) {
      in_stack_00000060 = 0;
      lVar3 = FUN_180121420(*(longlong *)(unaff_RBX + 0x20),param_2,&stack0x00000060);
      if (lVar3 != 0) {
        FUN_18013cb20(lVar3,in_stack_00000060);
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B);
      }
    }
    *(int8_t *)(unaff_RBX + 0x2e00) = 1;
  }
  if ((0.0 < *(float *)(unaff_RBX + 0x2e04)) &&
     (fVar10 = *(float *)(unaff_RBX + 0x2e04) - *(float *)(unaff_RBX + 0x18),
     *(float *)(unaff_RBX + 0x2e04) = fVar10, fVar10 <= 0.0)) {
    if (*(longlong *)(unaff_RBX + 0x20) == 0) {
      *(int8_t *)(unaff_RBX + 0x390) = 1;
    }
    else {
      FUN_18013cdc0();
    }
    *(int32_t *)(unaff_RBX + 0x2e04) = 0;
  }
  *(int *)(unaff_RBX + 0x1a90) = *(int *)(unaff_RBX + 0x1a90) + 1;
  *(int8_t *)(unaff_RBX + 1) = 1;
  *(int32_t *)(unaff_RBX + 0x2dcc) = 0;
  *(int32_t *)(unaff_RBX + 0x1af0) = 0;
  *(int32_t *)(unaff_RBX + 0x19e8) = *(int32_t *)(unaff_RBX + 8);
  *(double *)(unaff_RBX + 0x1a88) =
       (double)*(float *)(unaff_RBX + 0x18) + *(double *)(unaff_RBX + 0x1a88);
  FUN_180130010();
  lVar3 = SYSTEM_DATA_MANAGER_A;
  **(int8_t **)(unaff_RBX + 0xa0) = 1;
  pfVar5 = *(float **)(lVar3 + 0xb0);
  if (pfVar5 == (float *)0x0) {
    pfVar5 = (float *)**(uint64_t **)(*(longlong *)(lVar3 + 0xa0) + 0x48);
  }
  lVar2 = *(longlong *)(lVar3 + 0x1af8);
  *(float **)(lVar3 + 0x19f0) = pfVar5;
  fVar10 = *(float *)(lVar3 + 0xa8) * *pfVar5 * pfVar5[1];
  *(float *)(lVar3 + 0x19fc) = fVar10;
  if (lVar2 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = fVar10 * *(float *)(lVar2 + 0x2d8) * *(float *)(lVar2 + 0x2dc);
  }
  *(float *)(lVar3 + 0x19f8) = fVar10;
  fVar11 = 0.0;
  fVar12 = 0.0;
  *(uint64_t *)(lVar3 + 0x1a00) = *(uint64_t *)(*(longlong *)(pfVar5 + 0x16) + 0x38);
  *(float *)(lVar3 + 0x1a10) = fVar10;
  *(float **)(lVar3 + 0x1a08) = pfVar5;
  uVar9 = *(uint *)(unaff_RBX + 0x1c68);
  if (0 < (int)uVar9) {
    plVar6 = *(longlong **)(unaff_RBX + 0x1c70);
    uVar8 = (ulonglong)uVar9;
    fVar10 = fVar11;
    fVar13 = fVar12;
    do {
      lVar2 = *plVar6;
      plVar6 = plVar6 + 1;
      fVar11 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 8);
      fVar12 = *(float *)(lVar2 + 0x14) + *(float *)(lVar2 + 0xc);
      if (fVar11 <= fVar10) {
        fVar11 = fVar10;
      }
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      uVar8 = uVar8 - 1;
      fVar10 = fVar11;
      fVar13 = fVar12;
    } while (uVar8 != 0);
  }
  *(int32_t *)(unaff_RBX + 0x1a14) = *(int32_t *)(unaff_RBX + 0x16c4);
  *(int32_t *)(unaff_RBX + 0x1a18) = 0;
  *(int32_t *)(unaff_RBX + 0x1a1c) = 0;
  *(float *)(unaff_RBX + 0x1a20) = fVar11;
  *(float *)(unaff_RBX + 0x1a24) = fVar12;
  uVar8 = uVar7;
  if (0 < (int)uVar9) {
    do {
      uVar9 = (int)uVar8 + 1;
      lVar2 = *(longlong *)(uVar7 + *(longlong *)(unaff_RBX + 0x1c70));
      *(uint64_t *)(lVar2 + 0x20) = 0;
      *(uint64_t *)(lVar2 + 0xac) = 0;
      *(uint64_t *)(lVar2 + 0xa4) = *(uint64_t *)(lVar2 + 0xac);
      *(int8_t *)(lVar2 + 0x88) = 0;
      *(uint64_t *)(lVar2 + 0x90) = 0;
      *(uint64_t *)(lVar2 + 0x9c) = 0;
      *(int32_t *)(lVar2 + 0x98) = 0;
      uVar7 = uVar7 + 8;
      uVar8 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(unaff_RBX + 0x1c68));
  }
  if ((*(char *)(unaff_RBX + 0x1dd0) != '\0') &&
     (iVar1 = *(int *)(unaff_RBX + 0x1dec), iVar1 == *(int *)(unaff_RBX + 0x1b2c))) {
    if (*(int *)(lVar3 + 0x1b2c) == iVar1) {
      *(int *)(lVar3 + 0x1b34) = iVar1;
    }
    if (*(int *)(lVar3 + 0x1b30) == iVar1) {
      *(int8_t *)(lVar3 + 0x1b3f) = 1;
    }
  }
  iVar1 = *(int *)(unaff_RBX + 0x1b18);
  if (*(int *)(unaff_RBX + 0x1b20) == 0) {
    *(int32_t *)(unaff_RBX + 0x1b24) = 0;
  }
  else if ((iVar1 == 0) || (*(int *)(unaff_RBX + 0x1b2c) != iVar1)) goto LAB_180125a82;
  *(int32_t *)(unaff_RBX + 0x1b28) = 0;
LAB_180125a82:
  fVar10 = *(float *)(unaff_RBX + 0x18);
  iVar4 = *(int *)(unaff_RBX + 0x1b2c);
  if ((iVar1 != 0) &&
     (*(float *)(unaff_RBX + 0x1b24) = fVar10 + *(float *)(unaff_RBX + 0x1b24), iVar4 != iVar1)) {
    *(float *)(unaff_RBX + 0x1b28) = fVar10 + *(float *)(unaff_RBX + 0x1b28);
  }
  *(int *)(unaff_RBX + 0x1b20) = iVar1;
  *(int32_t *)(unaff_RBX + 0x1b18) = 0;
  *(int8_t *)(unaff_RBX + 0x1b1c) = 0;
  if (((*(int *)(unaff_RBX + 0x1b34) != iVar4) && (*(int *)(unaff_RBX + 0x1b30) == iVar4)) &&
     (iVar4 != 0)) {
    *(bool *)(lVar3 + 0x1b3c) = *(int *)(lVar3 + 0x1b2c) != 0;
    if (*(int *)(lVar3 + 0x1b2c) != 0) {
      *(int32_t *)(lVar3 + 0x1b38) = 0;
      *(int8_t *)(lVar3 + 0x1b3e) = 0;
    }
    *(int32_t *)(lVar3 + 0x1b2c) = 0;
    *(int32_t *)(lVar3 + 0x1b44) = 0;
    *(int8_t *)(lVar3 + 0x1b3d) = 0;
    *(uint64_t *)(lVar3 + 0x1b50) = 0;
    iVar4 = *(int *)(unaff_RBX + 0x1b2c);
    fVar10 = *(float *)(unaff_RBX + 0x18);
  }
  if (iVar4 != 0) {
    *(float *)(unaff_RBX + 0x1b38) = fVar10 + *(float *)(unaff_RBX + 0x1b38);
  }
  *(uint64_t *)(unaff_RBX + 7000) = *(uint64_t *)(unaff_RBX + 0x1b50);
  *(int8_t *)(unaff_RBX + 0x1b40) = *(int8_t *)(unaff_RBX + 0x1b3e);
  *(float *)(unaff_RBX + 0x1b68) = fVar10 + *(float *)(unaff_RBX + 0x1b68);
  *(int *)(unaff_RBX + 0x1b30) = iVar4;
  *(int32_t *)(unaff_RBX + 0x1b34) = 0;
  *(int8_t *)(unaff_RBX + 0x1b3f) = 0;
  *(int8_t *)(unaff_RBX + 0x1b3c) = 0;
  if ((*(int *)(unaff_RBX + 0x2da0) != 0) && (iVar4 != *(int *)(unaff_RBX + 0x2da0))) {
    *(int32_t *)(unaff_RBX + 0x2da0) = 0;
  }
  *(int32_t *)(unaff_RBX + 0x1e40) = *(int32_t *)(unaff_RBX + 0x1e3c);
  *(uint64_t *)(unaff_RBX + 0x1e38) = 0x7f7fffff;
  *(int8_t *)(unaff_RBX + 0x1dd1) = 0;
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBX + 0xc88,unaff_RBX + 0x488,0x800);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125eb9(uint64_t param_1,int param_2)
void FUN_180125eb9(uint64_t param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  ulonglong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong in_R10;
  longlong *plVar10;
  
  uVar4 = unaff_RDI;
  do {
    param_2 = param_2 + 1;
    lVar9 = *(longlong *)(uVar4 + *(longlong *)(unaff_RBX + 0x1aa8));
    *(int8_t *)(lVar9 + 0xb0) = *(int8_t *)(lVar9 + 0xaf);
    *(short *)(lVar9 + 0xb8) = (short)unaff_RDI;
    cVar6 = (char)unaff_RDI;
    *(char *)(lVar9 + 0xaf) = cVar6;
    *(char *)(lVar9 + 0xb1) = cVar6;
    uVar4 = uVar4 + 8;
  } while (param_2 != *(int *)(unaff_RBX + 0x1aa0));
  if (((*(longlong *)(unaff_RBX + 0x1c98) != 0) &&
      (*(char *)(*(longlong *)(unaff_RBX + 0x1c98) + 0xb0) == cVar6)) &&
     (0 < *(int *)(in_R10 + 0x1ab0))) {
    lVar9 = (longlong)*(int *)(in_R10 + 0x1ab0) + -1;
    plVar10 = (longlong *)(*(longlong *)(in_R10 + 0x1ab8) + lVar9 * 8);
    do {
      lVar8 = *plVar10;
      if (((lVar8 != 0) && (*(char *)(lVar8 + 0xb0) != cVar6)) &&
         ((*(uint *)(lVar8 + 0xc) >> 0x18 & 1) == 0 && (*(uint *)(lVar8 + 0xc) & 0x40200) != 0x40200
         )) {
        if (*(longlong *)(lVar8 + 0x3c0) != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x3c0);
        }
        FUN_18012d2e0(lVar8);
        break;
      }
      plVar10 = plVar10 + -1;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  iVar1 = *(int *)(unaff_RBX + 0x1ad4);
  iVar7 = (int)unaff_RDI;
  if (iVar1 < 0) {
    uVar4 = unaff_RDI & 0xffffffff;
    uVar3 = iVar1 / 2 + iVar1;
    if (0 < (int)uVar3) {
      uVar4 = (ulonglong)uVar3;
    }
    FUN_18011dc70(unaff_RBX + 0x1ad0,uVar4);
  }
  *(int *)(unaff_RBX + 0x1ad0) = iVar7;
  iVar1 = *(int *)(unaff_RBX + 0x1bc4);
  if (iVar1 < 0) {
    uVar4 = unaff_RDI & 0xffffffff;
    uVar3 = iVar1 / 2 + iVar1;
    if (0 < (int)uVar3) {
      uVar4 = (ulonglong)uVar3;
    }
    FUN_18013e760(unaff_RBX + 0x1bc0,uVar4);
  }
  *(int *)(unaff_RBX + 0x1bc0) = iVar7;
  FUN_18012ed10(*(uint64_t *)(unaff_RBX + 0x1c98));
  piVar2 = *(int **)(unaff_RBX + 0x2df8);
  if ((*(byte *)(unaff_RBX + 8) & 0x40) != 0) {
    uVar5 = unaff_RDI & 0xffffffff;
    uVar4 = unaff_RDI;
    if (iVar7 < piVar2[4]) {
      do {
        if (*(int *)(uVar4 + *(longlong *)(piVar2 + 6)) == 1) {
          FUN_1801364d0();
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar4 = uVar4 + 0x40;
      } while ((int)uVar3 < piVar2[4]);
    }
    iVar1 = piVar2[5];
    if (iVar1 < 0) {
      uVar4 = unaff_RDI & 0xffffffff;
      uVar3 = iVar1 / 2 + iVar1;
      if (0 < (int)uVar3) {
        uVar4 = (ulonglong)uVar3;
      }
      FUN_18013e6c0(piVar2 + 4,uVar4);
    }
    piVar2[4] = iVar7;
    uVar4 = unaff_RDI;
    if (iVar7 < *piVar2) {
      do {
        lVar9 = *(longlong *)(unaff_RDI + 8 + *(longlong *)(piVar2 + 2));
        if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0xa0) & 0x10) == 0)) &&
           (*(longlong *)(lVar9 + 8) == 0)) {
          FUN_1801373f0();
        }
        uVar3 = (int)uVar4 + 1;
        unaff_RDI = unaff_RDI + 0x10;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < *piVar2);
    }
  }
  lVar9 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(lVar9 + 0x1c08) = 0x43c80000;
  *(int32_t *)(lVar9 + 0x1bd4) = 4;
  FUN_1801299b0(&unknown_var_2432_ptr,0,0);
  *(int8_t *)(unaff_RBX + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125ff8(void)
void FUN_180125ff8(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  int *unaff_RBP;
  int unaff_ESI;
  int iVar5;
  ulonglong unaff_RDI;
  
  iVar5 = (int)unaff_RDI;
  uVar4 = unaff_RDI;
  if (iVar5 < unaff_RBP[4]) {
    do {
      if (*(int *)(uVar4 + *(longlong *)(unaff_RBP + 6)) == 1) {
        FUN_1801364d0();
      }
      unaff_ESI = unaff_ESI + 1;
      uVar4 = uVar4 + 0x40;
    } while (unaff_ESI < unaff_RBP[4]);
  }
  iVar1 = unaff_RBP[5];
  if (iVar1 < 0) {
    uVar4 = unaff_RDI & 0xffffffff;
    uVar3 = iVar1 / 2 + iVar1;
    if (0 < (int)uVar3) {
      uVar4 = (ulonglong)uVar3;
    }
    FUN_18013e6c0(unaff_RBP + 4,uVar4);
  }
  unaff_RBP[4] = iVar5;
  uVar4 = unaff_RDI;
  if (iVar5 < *unaff_RBP) {
    do {
      lVar2 = *(longlong *)(unaff_RDI + 8 + *(longlong *)(unaff_RBP + 2));
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xa0) & 0x10) == 0)) &&
         (*(longlong *)(lVar2 + 8) == 0)) {
        FUN_1801373f0();
      }
      uVar3 = (int)uVar4 + 1;
      unaff_RDI = unaff_RDI + 0x10;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *unaff_RBP);
  }
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1c08) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1bd4) = 4;
  FUN_1801299b0(&unknown_var_2432_ptr,0,0);
  *(int8_t *)(unaff_RBX + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



