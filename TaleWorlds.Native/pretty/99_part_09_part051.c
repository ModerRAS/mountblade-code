#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part051.c - 12 个函数

// 函数: void FUN_1805d45a2(uint64_t param_1,uint64_t param_2,uint param_3,longlong param_4)
void FUN_1805d45a2(uint64_t param_1,uint64_t param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  int8_t uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar11;
  float fVar12;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auStackX_20 [8];
  
  *(int8_t *)((longlong)unaff_RDI + 0xce) = 0;
  if ((param_3 >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    param_4 = *unaff_RDI;
  }
  lVar8 = unaff_RDI[0x1c];
  if ((*(longlong *)(param_4 + 0x20f0) != 0) &&
     ((*(int *)(param_4 + 0x14a8) - 5U < 2 ||
      (((*(byte *)(param_4 + 0x209c) & 1) != 0 && ((*(byte *)(param_4 + 0x2098) & 1) != 0)))))) {
    uVar9 = *(uint *)(unaff_RDI + 1);
    if ((uVar9 & 0x10) == 0) {
      FUN_1805d3770();
      param_4 = *unaff_RDI;
      uVar9 = *(uint *)(unaff_RDI + 1);
    }
    fVar16 = *(float *)(param_4 + 0x1450);
    fVar14 = *(float *)((longlong)unaff_RDI + 0x9c);
    if ((uVar9 >> 8 & 1) == 0) {
      FUN_1805d4b40();
    }
    fVar15 = *(float *)(unaff_RDI + 0x1b);
    uVar13 = 0;
    if ((fVar15 + fVar16 * 0.8 + 0.2 <= fVar14) ||
       (pfVar5 = (float *)FUN_1805b6a70(), *pfVar5 <= 0.0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    uVar9 = *(uint *)(unaff_RDI + 1);
    *(int8_t *)((longlong)unaff_RDI + 0xcc) = uVar3;
    if ((uVar9 & 2) == 0) {
      FUN_1805d3550();
      uVar9 = *(uint *)(unaff_RDI + 1);
    }
    fVar16 = *(float *)((longlong)unaff_RDI + 100);
    if ((uVar9 >> 0x19 & 1) == 0) {
      uVar9 = uVar9 | 0x2000000;
      fVar11 = *(float *)(*(longlong *)*unaff_RDI + 0x7dc);
      *(float *)((longlong)unaff_RDI + 0xac) = fVar11;
      *(uint *)(unaff_RDI + 1) = uVar9;
    }
    else {
      fVar11 = *(float *)((longlong)unaff_RDI + 0xac);
    }
    if (*(int *)(unaff_RSI + 0x1fc) == 1) {
      if ((uVar9 >> 8 & 1) == 0) {
        FUN_1805d4b40();
        uVar9 = *(uint *)(unaff_RDI + 1);
      }
      fVar15 = *(float *)((longlong)unaff_RDI + 0xd4);
    }
    if ((fVar16 < fVar11) || (fVar14 < fVar15)) {
      *(int8_t *)((longlong)unaff_RDI + 0xcd) = 1;
    }
    else if (*(char *)((longlong)unaff_RDI + 0xcc) == '\0') {
      *(int8_t *)((longlong)unaff_RDI + 0xcd) = 0;
    }
    else {
      if ((uVar9 & 1) == 0) {
        FUN_1805d3210();
      }
      *(bool *)((longlong)unaff_RDI + 0xcd) =
           (fVar16 - (*(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x28) *
                      *(float *)((longlong)unaff_RDI + 0x5c) +
                     *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x24) *
                     *(float *)(unaff_RDI + 0xb)) * fVar15) - fVar11 <= 0.0;
    }
    goto LAB_1805d4ae6;
  }
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x568) != 1)) {
    *(int16_t *)((longlong)unaff_RDI + 0xcc) = 0;
    uVar13 = 0;
    goto LAB_1805d4ae6;
  }
  pfVar5 = (float *)FUN_1805b6e50();
  lVar7 = *unaff_RDI;
  fVar16 = *pfVar5;
  bVar10 = (byte)((uint)*(int32_t *)(unaff_RSI + 0x564) >> 0x1f) ^ 1;
  cVar2 = func_0x0001805b7cd0(lVar7);
  uVar13 = 0;
  if (cVar2 == '\0') {
    fVar14 = *(float *)(lVar7 + 0x1450) * 0.8 + 0.2;
  }
  else {
    fVar14 = 0.0;
  }
  pfVar5 = (float *)FUN_1805b7480();
  fVar15 = *pfVar5;
  pfVar5 = (float *)FUN_1805b6920();
  lVar7 = *(longlong *)(unaff_RSI + 0x20);
  pfVar6 = (float *)FUN_1805b6cc0();
  fVar11 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0xc) -
           *(float *)(*(longlong *)(lVar8 + 0x20) + 0xc);
  fVar12 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x10) -
           *(float *)(*(longlong *)(lVar8 + 0x20) + 0x10);
  fVar17 = (*pfVar5 * *(float *)(lVar7 + 0x24) + pfVar5[1] * *(float *)(lVar7 + 0x28)) -
           (pfVar5[1] * pfVar6[1] + *pfVar5 * *pfVar6);
  fVar12 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
  pfVar5 = (float *)func_0x0001805b7300();
  fVar11 = *pfVar5;
  if ((fVar11 <= fVar12) || (pfVar5 = (float *)FUN_1805b69b0(), 1.5 <= ABS(*pfVar5))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((fVar16 < fVar15 + fVar14) || (bVar4)) {
    if ((bVar10 == 0) ||
       ((pfVar5 = (float *)FUN_1805b6a70(), 0.0 < *pfVar5 ||
        (fVar14 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x8c) * 0.25,
        pfVar5 = (float *)(*(longlong *)(unaff_RSI + 0x20) + 0x234),
        *pfVar5 <= fVar14 && fVar14 != *pfVar5)))) {
      uVar3 = 1;
    }
    else {
      pfVar5 = (float *)FUN_1805b6a70();
      if (-0.70710677 < *pfVar5) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  fVar14 = -0.70710677;
  *(int8_t *)((longlong)unaff_RDI + 0xcc) = uVar3;
  if (*(int *)(unaff_RSI + 0x1fc) == 1) {
    if ((*(uint *)(unaff_RDI + 1) & 0x100) == 0) {
      FUN_1805d4b40();
    }
    fVar15 = *(float *)((longlong)unaff_RDI + 0xd4);
  }
  if ((bVar4) || (fVar16 < fVar15)) {
    bVar4 = true;
  }
  else {
    if (*(char *)((longlong)unaff_RDI + 0xcc) != '\0') {
      if (bVar10 == 0) {
        fVar14 = 0.5;
      }
      pfVar5 = (float *)FUN_1805b6a70();
      if (fVar14 < *pfVar5) {
        bVar4 = (fVar12 - fVar15 * fVar17) - fVar11 <= 0.0;
        goto LAB_1805d49c4;
      }
    }
    bVar4 = false;
  }
LAB_1805d49c4:
  *(bool *)((longlong)unaff_RDI + 0xcd) = bVar4;
  if (((*(uint *)(lVar8 + 0x56c) & 0x4000) != 0) &&
     (((lVar7 = FUN_1805b7500(), lVar7 == 0 ||
       ((0 < *(int *)(lVar7 + 0x30) &&
        (((uVar1 = *(ulonglong *)
                    ((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)),
          (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar7 + 8))) && ((uVar1 >> 1 & 1) == 0)))))) &&
      (pfVar5 = (float *)FUN_1805b6b40(), 0.0 < *pfVar5)))) {
    pfVar5 = (float *)FUN_1805b7580();
    fVar14 = *pfVar5;
    if (((lVar7 == 0) ||
        ((*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar7 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)) && (*(longlong *)(lVar8 + 0x280) != 0)) {
      lVar8 = FUN_1805d8cb0(lVar8 + 0x28,auStackX_20);
      fVar16 = *(float *)(lVar8 + 4);
    }
    if ((fVar12 < fVar14) || ((fVar12 - fVar16 * fVar17) - fVar14 <= 0.0)) {
      uVar13 = 0x3f800000;
    }
  }
LAB_1805d4ae6:
  *(int32_t *)(unaff_RDI + 0x1a) = uVar13;
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d4791(void)
void FUN_1805d4791(void)

{
  ulonglong uVar1;
  char cVar2;
  int8_t uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  byte bVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStackX_20 [8];
  
  pfVar5 = (float *)FUN_1805b6e50();
  lVar7 = *unaff_RDI;
  fVar13 = *pfVar5;
  bVar8 = (byte)((uint)*(int32_t *)(unaff_RSI + 0x564) >> 0x1f) ^ 1;
  cVar2 = func_0x0001805b7cd0(lVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    fVar12 = *(float *)(lVar7 + 0x1450) * 0.8 + 0.2;
  }
  else {
    fVar12 = 0.0;
  }
  pfVar5 = (float *)FUN_1805b7480();
  fVar14 = *pfVar5;
  pfVar5 = (float *)FUN_1805b6920();
  lVar7 = *(longlong *)(unaff_RSI + 0x20);
  pfVar6 = (float *)FUN_1805b6cc0();
  fVar9 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0xc) -
          *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0xc);
  fVar10 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x10) -
           *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x10);
  fVar15 = (*pfVar5 * *(float *)(lVar7 + 0x24) + pfVar5[1] * *(float *)(lVar7 + 0x28)) -
           (pfVar5[1] * pfVar6[1] + *pfVar5 * *pfVar6);
  fVar10 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  pfVar5 = (float *)func_0x0001805b7300();
  fVar9 = *pfVar5;
  if (fVar9 <= fVar10) {
LAB_1805d48b2:
    bVar4 = false;
  }
  else {
    pfVar5 = (float *)FUN_1805b69b0();
    if (1.5 <= ABS(*pfVar5)) goto LAB_1805d48b2;
    bVar4 = true;
  }
  if ((fVar13 < fVar14 + fVar12) || (bVar4)) {
    if (bVar8 != 0) {
      pfVar5 = (float *)FUN_1805b6a70();
      if ((*pfVar5 <= 0.0) &&
         (fVar12 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x8c) * 0.25,
         pfVar5 = (float *)(*(longlong *)(unaff_RSI + 0x20) + 0x234),
         fVar12 < *pfVar5 || fVar12 == *pfVar5)) {
        pfVar5 = (float *)FUN_1805b6a70();
        if (-0.70710677 < *pfVar5) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
        }
        uVar3 = 0;
        goto LAB_1805d4946;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_1805d4946:
  fVar12 = -0.70710677;
  *(int8_t *)((longlong)unaff_RDI + 0xcc) = uVar3;
  if (*(int *)(unaff_RSI + 0x1fc) == 1) {
    if ((*(uint *)(unaff_RDI + 1) & 0x100) == 0) {
      FUN_1805d4b40();
    }
    fVar14 = *(float *)((longlong)unaff_RDI + 0xd4);
  }
  if ((bVar4) || (fVar13 < fVar14)) {
    bVar4 = true;
  }
  else {
    if (*(char *)((longlong)unaff_RDI + 0xcc) != '\0') {
      if (bVar8 == 0) {
        fVar12 = 0.5;
      }
      pfVar5 = (float *)FUN_1805b6a70();
      if (fVar12 < *pfVar5) {
        bVar4 = (fVar10 - fVar14 * fVar15) - fVar9 <= 0.0;
        goto LAB_1805d49c4;
      }
    }
    bVar4 = false;
  }
LAB_1805d49c4:
  *(bool *)((longlong)unaff_RDI + 0xcd) = bVar4;
  if ((*(uint *)(unaff_R14 + 0x56c) & 0x4000) != 0) {
    lVar7 = FUN_1805b7500();
    if ((lVar7 == 0) ||
       ((0 < *(int *)(lVar7 + 0x30) &&
        (((uVar1 = *(ulonglong *)
                    ((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)),
          (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar7 + 8))) && ((uVar1 >> 1 & 1) == 0)))))) {
      pfVar5 = (float *)FUN_1805b6b40();
      if (0.0 < *pfVar5) {
        pfVar5 = (float *)FUN_1805b7580();
        fVar12 = *pfVar5;
        if (((lVar7 == 0) ||
            ((*(byte *)((longlong)
                        *(int *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 +
                                *(longlong *)(lVar7 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) &
             0x10) == 0)) && (*(longlong *)(unaff_R14 + 0x280) != 0)) {
          lVar7 = FUN_1805d8cb0(unaff_R14 + 0x28,auStackX_20);
          fVar13 = *(float *)(lVar7 + 4);
        }
        if ((fVar10 < fVar12) || ((fVar10 - fVar13 * fVar15) - fVar12 <= 0.0)) {
          uVar11 = 0x3f800000;
        }
      }
    }
  }
  *(int32_t *)(unaff_RDI + 0x1a) = uVar11;
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d479c(void)
void FUN_1805d479c(void)

{
  ulonglong uVar1;
  char cVar2;
  int8_t uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  byte bVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStackX_20 [8];
  
  pfVar5 = (float *)FUN_1805b6e50();
  lVar7 = *unaff_RDI;
  fVar13 = *pfVar5;
  bVar8 = (byte)((uint)*(int32_t *)(unaff_RSI + 0x564) >> 0x1f) ^ 1;
  cVar2 = func_0x0001805b7cd0(lVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    fVar12 = *(float *)(lVar7 + 0x1450) * 0.8 + 0.2;
  }
  else {
    fVar12 = 0.0;
  }
  pfVar5 = (float *)FUN_1805b7480();
  fVar14 = *pfVar5;
  pfVar5 = (float *)FUN_1805b6920();
  lVar7 = *(longlong *)(unaff_RSI + 0x20);
  pfVar6 = (float *)FUN_1805b6cc0();
  fVar9 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0xc) -
          *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0xc);
  fVar10 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x10) -
           *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x10);
  fVar15 = (*pfVar5 * *(float *)(lVar7 + 0x24) + pfVar5[1] * *(float *)(lVar7 + 0x28)) -
           (pfVar5[1] * pfVar6[1] + *pfVar5 * *pfVar6);
  fVar10 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  pfVar5 = (float *)func_0x0001805b7300();
  fVar9 = *pfVar5;
  if (fVar9 <= fVar10) {
LAB_1805d48b2:
    bVar4 = false;
  }
  else {
    pfVar5 = (float *)FUN_1805b69b0();
    if (1.5 <= ABS(*pfVar5)) goto LAB_1805d48b2;
    bVar4 = true;
  }
  if ((fVar13 < fVar14 + fVar12) || (bVar4)) {
    if (bVar8 != 0) {
      pfVar5 = (float *)FUN_1805b6a70();
      if ((*pfVar5 <= 0.0) &&
         (fVar12 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x8c) * 0.25,
         pfVar5 = (float *)(*(longlong *)(unaff_RSI + 0x20) + 0x234),
         fVar12 < *pfVar5 || fVar12 == *pfVar5)) {
        pfVar5 = (float *)FUN_1805b6a70();
        if (-0.70710677 < *pfVar5) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
        }
        uVar3 = 0;
        goto LAB_1805d4946;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_1805d4946:
  fVar12 = -0.70710677;
  *(int8_t *)((longlong)unaff_RDI + 0xcc) = uVar3;
  if (*(int *)(unaff_RSI + 0x1fc) == 1) {
    if ((*(uint *)(unaff_RDI + 1) & 0x100) == 0) {
      FUN_1805d4b40();
    }
    fVar14 = *(float *)((longlong)unaff_RDI + 0xd4);
  }
  if ((bVar4) || (fVar13 < fVar14)) {
    bVar4 = true;
  }
  else {
    if (*(char *)((longlong)unaff_RDI + 0xcc) != '\0') {
      if (bVar8 == 0) {
        fVar12 = 0.5;
      }
      pfVar5 = (float *)FUN_1805b6a70();
      if (fVar12 < *pfVar5) {
        bVar4 = (fVar10 - fVar14 * fVar15) - fVar9 <= 0.0;
        goto LAB_1805d49c4;
      }
    }
    bVar4 = false;
  }
LAB_1805d49c4:
  *(bool *)((longlong)unaff_RDI + 0xcd) = bVar4;
  if ((*(uint *)(unaff_R14 + 0x56c) & 0x4000) != 0) {
    lVar7 = FUN_1805b7500();
    if ((lVar7 == 0) ||
       ((0 < *(int *)(lVar7 + 0x30) &&
        (((uVar1 = *(ulonglong *)
                    ((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)),
          (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar7 + 8))) && ((uVar1 >> 1 & 1) == 0)))))) {
      pfVar5 = (float *)FUN_1805b6b40();
      if (0.0 < *pfVar5) {
        pfVar5 = (float *)FUN_1805b7580();
        fVar12 = *pfVar5;
        if (((lVar7 == 0) ||
            ((*(byte *)((longlong)
                        *(int *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 +
                                *(longlong *)(lVar7 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) &
             0x10) == 0)) && (*(longlong *)(unaff_R14 + 0x280) != 0)) {
          lVar7 = FUN_1805d8cb0(unaff_R14 + 0x28,auStackX_20);
          fVar13 = *(float *)(lVar7 + 4);
        }
        if ((fVar10 < fVar12) || ((fVar10 - fVar13 * fVar15) - fVar12 <= 0.0)) {
          uVar11 = 0x3f800000;
        }
      }
    }
  }
  *(int32_t *)(unaff_RDI + 0x1a) = uVar11;
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d495d(void)
void FUN_1805d495d(void)

{
  float fVar1;
  ulonglong uVar2;
  bool bVar3;
  float *pfVar4;
  longlong lVar5;
  char unaff_BL;
  char unaff_BPL;
  longlong unaff_RDI;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int8_t auStackX_20 [8];
  
  if ((*(uint *)(unaff_RDI + 8) & 0x100) == 0) {
    FUN_1805d4b40();
  }
  fVar1 = *(float *)(unaff_RDI + 0xd4);
  if ((unaff_BL != '\0') || (unaff_XMM9_Da < fVar1)) {
    bVar3 = true;
  }
  else {
    if (*(char *)(unaff_RDI + 0xcc) != '\0') {
      if (unaff_BPL == '\0') {
        unaff_XMM7_Da = 0.5;
      }
      pfVar4 = (float *)FUN_1805b6a70();
      if (unaff_XMM7_Da < *pfVar4) {
        bVar3 = (unaff_XMM8_Da - fVar1 * unaff_XMM11_Da) - unaff_XMM12_Da <= unaff_XMM6_Da;
        goto LAB_1805d49c4;
      }
    }
    bVar3 = false;
  }
LAB_1805d49c4:
  *(bool *)(unaff_RDI + 0xcd) = bVar3;
  if ((*(uint *)(unaff_R14 + 0x56c) & 0x4000) != 0) {
    lVar5 = FUN_1805b7500();
    if ((lVar5 == 0) ||
       ((0 < *(int *)(lVar5 + 0x30) &&
        (((uVar2 = *(ulonglong *)
                    ((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd0)),
          (uVar2 >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))) && ((uVar2 >> 1 & 1) == 0)))))) {
      pfVar4 = (float *)FUN_1805b6b40();
      if (unaff_XMM6_Da < *pfVar4) {
        pfVar4 = (float *)FUN_1805b7580();
        fVar1 = *pfVar4;
        if (((lVar5 == 0) ||
            ((*(byte *)((longlong)
                        *(int *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 +
                                *(longlong *)(lVar5 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) &
             0x10) == 0)) && (*(longlong *)(unaff_R14 + 0x280) != 0)) {
          lVar5 = FUN_1805d8cb0(unaff_R14 + 0x28,auStackX_20);
          unaff_XMM9_Da = *(float *)(lVar5 + 4);
        }
        if ((unaff_XMM8_Da < fVar1) ||
           ((unaff_XMM8_Da - unaff_XMM9_Da * unaff_XMM11_Da) - fVar1 <= unaff_XMM6_Da)) {
          unaff_XMM6_Da = 1.0;
        }
      }
    }
  }
  *(float *)(unaff_RDI + 0xd0) = unaff_XMM6_Da;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d49e9(void)
void FUN_1805d49e9(void)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  longlong unaff_RDI;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  int8_t auStackX_20 [8];
  
  lVar3 = FUN_1805b7500();
  if ((lVar3 == 0) ||
     ((0 < *(int *)(lVar3 + 0x30) &&
      (((uVar2 = *(ulonglong *)
                  ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0)),
        (uVar2 >> 9 & 1) == 0 || (0 < *(short *)(lVar3 + 8))) && ((uVar2 >> 1 & 1) == 0)))))) {
    pfVar4 = (float *)FUN_1805b6b40();
    if (unaff_XMM6_Da < *pfVar4) {
      pfVar4 = (float *)FUN_1805b7580();
      fVar1 = *pfVar4;
      if (((lVar3 == 0) ||
          ((*(byte *)((longlong)
                      *(int *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                              *(longlong *)(lVar3 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
           == 0)) && (*(longlong *)(unaff_R14 + 0x280) != 0)) {
        lVar3 = FUN_1805d8cb0(unaff_R14 + 0x28,auStackX_20);
        unaff_XMM9_Da = *(float *)(lVar3 + 4);
      }
      if ((unaff_XMM8_Da < fVar1) ||
         ((unaff_XMM8_Da - unaff_XMM9_Da * unaff_XMM11_Da) - fVar1 <= unaff_XMM6_Da)) {
        unaff_XMM6_Da = 1.0;
      }
    }
  }
  *(float *)(unaff_RDI + 0xd0) = unaff_XMM6_Da;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x80;
  return;
}






// 函数: void FUN_1805d4ada(void)
void FUN_1805d4ada(void)

{
  longlong unaff_RDI;
  
  *(int16_t *)(unaff_RDI + 0xcc) = 0;
  *(int32_t *)(unaff_RDI + 0xd0) = 0;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x80;
  return;
}






// 函数: void FUN_1805d4b08(void)
void FUN_1805d4b08(void)

{
  longlong unaff_RDI;
  int32_t unaff_XMM6_Da;
  
  *(int32_t *)(unaff_RDI + 0xd0) = unaff_XMM6_Da;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d4b40(longlong *param_1)
void FUN_1805d4b40(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = *plVar2;
  if ((*(uint *)(param_1 + 1) & 0x20) == 0) {
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e8);
    param_1[0x14] = lVar6;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20;
  }
  else {
    lVar6 = param_1[0x14];
  }
  if ((lVar6 == 0) ||
     ((*(byte *)((longlong)
                 *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                         *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10) == 0
     )) {
    lVar6 = *(longlong *)(lVar3 + 0x280);
    if (lVar6 == 0) {
      uVar1 = *(uint *)((longlong)plVar2 + 0x158c);
      uVar4 = uVar1 & 0x3c0;
      if (uVar4 == 0) {
        iVar5 = FUN_1805d6890(plVar2);
        if (iVar5 == -1) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_1805a0610(lVar3 + 0x28,iVar5);
        }
      }
      else if (uVar4 >> 9 == 0) {
        if ((uVar4 >> 8 & 1) == 0) {
          if ((uVar1 & 0x40) == 0) {
            lVar6 = FUN_1805a0610(lVar3 + 0x28,(uVar1 & 0xc0 | 0x40) >> 6);
          }
          else {
            lVar6 = FUN_1805a0610(lVar3 + 0x28,2);
          }
        }
        else {
          lVar6 = FUN_1805a0610(lVar3 + 0x28,0);
        }
      }
      else {
        lVar6 = FUN_1805a0610(lVar3 + 0x28,1);
      }
      if (lVar6 == 0) {
        fStack_18 = 1.0;
        fStack_14 = 0.5;
        goto LAB_1805d4ca6;
      }
    }
    FUN_1805d8cb0(lVar3 + 0x28,&fStack_18,lVar6);
    fStack_14 = ((fStack_c - fStack_10) * 0.5 + fStack_10) * fStack_14;
    fStack_18 = fStack_14 + fStack_18;
  }
  else {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
  }
LAB_1805d4ca6:
  *(float *)((longlong)param_1 + 0xd4) = fStack_14;
  *(float *)(param_1 + 0x1b) = fStack_18;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x100;
  return;
}






// 函数: void FUN_1805d4df0(longlong *param_1)
void FUN_1805d4df0(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  int32_t uVar5;
  
  lVar3 = *param_1;
  uVar5 = 0x3f800000;
  if ((*(longlong *)(lVar3 + 0x20f0) == 0) ||
     ((1 < *(int *)(lVar3 + 0x14a8) - 5U &&
      (((*(byte *)(lVar3 + 0x209c) & 1) == 0 || ((*(byte *)(lVar3 + 0x2098) & 1) == 0)))))) {
    uVar2 = *(uint *)(param_1 + 1);
    if ((uVar2 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
      uVar2 = *(uint *)(param_1 + 1);
    }
    if (param_1[0x1c] == 0) {
      fVar4 = 0.0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        FUN_1805d3210(param_1);
        uVar2 = *(uint *)(param_1 + 1);
      }
      if ((uVar2 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(param_1);
        uVar2 = *(uint *)(param_1 + 1);
      }
      lVar3 = *(longlong *)(param_1[0x1c] + 0x20);
      if ((uVar2 & 1) == 0) {
        FUN_1805d3210(param_1);
      }
      fVar4 = (*(float *)(lVar3 + 0x14) - *(float *)(param_1 + 8)) * 0.7 + *(float *)(param_1 + 0xc)
      ;
      if (fVar4 <= 1.0) {
        fVar4 = 1.0;
      }
    }
  }
  else {
    if (*(int *)(lVar3 + 0x14a8) - 5U < 2) {
      fVar4 = *(float *)(*(longlong *)(lVar3 + 0x20f0) + 0xa8);
    }
    else {
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        FUN_1805d3210(param_1);
      }
      fVar4 = *(float *)(param_1 + 10);
    }
    if (((*(uint *)(param_1 + 1) & 1) == 0) &&
       (FUN_1805d3210(param_1), (*(uint *)(param_1 + 1) & 1) == 0)) {
      FUN_1805d3210(param_1);
    }
    fVar4 = (fVar4 - *(float *)(param_1 + 8)) * 0.7 + *(float *)(param_1 + 0xc);
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
  }
  *(float *)((longlong)param_1 + 0x10c) = fVar4;
  if ((*(uint *)(param_1 + 1) & 0x20) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x8f8) + 0x9e8);
    param_1[0x14] = lVar3;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20;
  }
  else {
    lVar3 = param_1[0x14];
  }
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) {
    uVar1 = *(ulonglong *)
             ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0));
    if ((((uVar1 >> 9 & 1) == 0) || (0 < *(short *)(lVar3 + 8))) && ((uVar1 >> 1 & 1) != 0)) {
      uVar5 = FUN_1805bda40(*param_1,lVar3,(longlong)*(int *)(lVar3 + 0xf0),param_1 + 0x21);
      goto LAB_1805d4fbe;
    }
  }
  *(int32_t *)(param_1 + 0x21) = 0x3f800000;
LAB_1805d4fbe:
  *(int32_t *)((longlong)param_1 + 0x104) = uVar5;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x1000;
  return;
}






// 函数: void FUN_1805d4e09(longlong param_1)
void FUN_1805d4e09(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint64_t *unaff_RBX;
  float fVar4;
  float unaff_XMM7_Da;
  
  if ((*(longlong *)(param_1 + 0x20f0) == 0) ||
     ((1 < *(int *)(param_1 + 0x14a8) - 5U &&
      (((*(byte *)(param_1 + 0x209c) & 1) == 0 || ((*(byte *)(param_1 + 0x2098) & 1) == 0)))))) {
    uVar2 = *(uint *)(unaff_RBX + 1);
    if ((uVar2 >> 9 & 1) == 0) {
      func_0x0001805d4cd0();
      uVar2 = *(uint *)(unaff_RBX + 1);
    }
    if (unaff_RBX[0x1c] == 0) {
      fVar4 = 0.0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        FUN_1805d3210();
        uVar2 = *(uint *)(unaff_RBX + 1);
      }
      if ((uVar2 >> 9 & 1) == 0) {
        func_0x0001805d4cd0();
        uVar2 = *(uint *)(unaff_RBX + 1);
      }
      lVar3 = *(longlong *)(unaff_RBX[0x1c] + 0x20);
      if ((uVar2 & 1) == 0) {
        FUN_1805d3210();
      }
      fVar4 = (*(float *)(lVar3 + 0x14) - *(float *)(unaff_RBX + 8)) * 0.7 +
              *(float *)(unaff_RBX + 0xc);
      if (fVar4 <= unaff_XMM7_Da) {
        fVar4 = unaff_XMM7_Da;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x14a8) - 5U < 2) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x20f0) + 0xa8);
    }
    else {
      if ((*(byte *)(unaff_RBX + 1) & 1) == 0) {
        FUN_1805d3210();
      }
      fVar4 = *(float *)(unaff_RBX + 10);
    }
    if (((*(uint *)(unaff_RBX + 1) & 1) == 0) &&
       (FUN_1805d3210(), (*(uint *)(unaff_RBX + 1) & 1) == 0)) {
      FUN_1805d3210();
    }
    fVar4 = (fVar4 - *(float *)(unaff_RBX + 8)) * 0.7 + *(float *)(unaff_RBX + 0xc);
    if (fVar4 <= unaff_XMM7_Da) {
      fVar4 = unaff_XMM7_Da;
    }
  }
  *(float *)((longlong)unaff_RBX + 0x10c) = fVar4;
  if ((*(uint *)(unaff_RBX + 1) & 0x20) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)*unaff_RBX + 0x8f8) + 0x9e8);
    unaff_RBX[0x14] = lVar3;
    *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x20;
  }
  else {
    lVar3 = unaff_RBX[0x14];
  }
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) {
    uVar1 = *(ulonglong *)
             ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0));
    if ((((uVar1 >> 9 & 1) == 0) || (0 < *(short *)(lVar3 + 8))) && ((uVar1 >> 1 & 1) != 0)) {
      unaff_XMM7_Da =
           (float)FUN_1805bda40(*unaff_RBX,lVar3,(longlong)*(int *)(lVar3 + 0xf0),unaff_RBX + 0x21);
      goto LAB_1805d4fbe;
    }
  }
  *(int32_t *)(unaff_RBX + 0x21) = 0x3f800000;
LAB_1805d4fbe:
  *(float *)((longlong)unaff_RBX + 0x104) = unaff_XMM7_Da;
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x1000;
  return;
}






// 函数: void FUN_1805d4ebd(uint param_1)
void FUN_1805d4ebd(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t *unaff_RBX;
  float fVar3;
  float unaff_XMM7_Da;
  
  if ((param_1 & 1) == 0) {
    FUN_1805d3210();
    param_1 = *(uint *)(unaff_RBX + 1);
  }
  if ((param_1 >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    param_1 = *(uint *)(unaff_RBX + 1);
  }
  lVar2 = *(longlong *)(unaff_RBX[0x1c] + 0x20);
  if ((param_1 & 1) == 0) {
    FUN_1805d3210();
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(unaff_RBX + 8)) * 0.7 + *(float *)(unaff_RBX + 0xc)
  ;
  if (fVar3 <= unaff_XMM7_Da) {
    fVar3 = unaff_XMM7_Da;
  }
  *(float *)((longlong)unaff_RBX + 0x10c) = fVar3;
  if ((*(uint *)(unaff_RBX + 1) & 0x20) == 0) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)*unaff_RBX + 0x8f8) + 0x9e8);
    unaff_RBX[0x14] = lVar2;
    *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x20;
  }
  else {
    lVar2 = unaff_RBX[0x14];
  }
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x30))) {
    uVar1 = *(ulonglong *)
             ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0));
    if ((((uVar1 >> 9 & 1) == 0) || (0 < *(short *)(lVar2 + 8))) && ((uVar1 >> 1 & 1) != 0)) {
      unaff_XMM7_Da =
           (float)FUN_1805bda40(*unaff_RBX,lVar2,(longlong)*(int *)(lVar2 + 0xf0),unaff_RBX + 0x21);
      goto LAB_1805d4fbe;
    }
  }
  *(int32_t *)(unaff_RBX + 0x21) = 0x3f800000;
LAB_1805d4fbe:
  *(float *)((longlong)unaff_RBX + 0x104) = unaff_XMM7_Da;
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x1000;
  return;
}






// 函数: void FUN_1805d4f1d(void)
void FUN_1805d4f1d(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t *unaff_RBX;
  int32_t unaff_XMM7_Da;
  
  *(int32_t *)((longlong)unaff_RBX + 0x10c) = 0;
  if ((*(uint *)(unaff_RBX + 1) & 0x20) == 0) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)*unaff_RBX + 0x8f8) + 0x9e8);
    unaff_RBX[0x14] = lVar2;
    *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x20;
  }
  else {
    lVar2 = unaff_RBX[0x14];
  }
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x30))) {
    uVar1 = *(ulonglong *)
             ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0));
    if ((((uVar1 >> 9 & 1) == 0) || (0 < *(short *)(lVar2 + 8))) && ((uVar1 >> 1 & 1) != 0)) {
      unaff_XMM7_Da =
           FUN_1805bda40(*unaff_RBX,lVar2,(longlong)*(int *)(lVar2 + 0xf0),unaff_RBX + 0x21);
      goto LAB_1805d4fbe;
    }
  }
  *(int32_t *)(unaff_RBX + 0x21) = 0x3f800000;
LAB_1805d4fbe:
  *(int32_t *)((longlong)unaff_RBX + 0x104) = unaff_XMM7_Da;
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x1000;
  return;
}






