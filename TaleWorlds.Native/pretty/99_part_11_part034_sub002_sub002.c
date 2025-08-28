#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part034_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807a063f(void)
void FUN_1807a063f(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int *piVar8;
  int64_t unaff_RSI;
  int iVar9;
  int iVar10;
  int unaff_EDI;
  int iVar11;
  int64_t lVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iStack0000000000000050;
  int64_t lStack0000000000000058;
  
  system_system_config = 0;
  iStack0000000000000050 = 1;
  iVar16 = 1;
  iVar9 = iVar16;
  if (8 < unaff_EDI) {
    do {
      unaff_EDI = unaff_EDI >> 1;
      lVar12 = 0;
      if (0 < iVar9) {
        do {
          lVar5 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          *(int *)(&system_data_b958 + lVar5 + (int64_t)iVar9 * 4) =
               *(int *)(&system_data_b958 + lVar5) + unaff_EDI;
        } while (lVar12 < iVar9);
      }
      iVar16 = iVar9 * 2;
      iVar4 = iVar9 << 4;
      iVar9 = iVar16;
    } while (iVar4 < unaff_EDI);
  }
  iVar9 = iVar16 * 2;
  lStack0000000000000058 = (int64_t)iVar16;
  if (iVar16 * 8 == unaff_EDI) {
    uVar15 = 0;
    if (0 < iVar16) {
      iVar4 = 0;
      piVar14 = (int *)&system_data_b958;
      do {
        if (0 < (int)uVar15) {
          uVar7 = (uint64_t)uVar15;
          iVar10 = 0;
          piVar8 = (int *)&system_data_b958;
          do {
            iVar13 = *piVar8;
            piVar8 = piVar8 + 1;
            lVar12 = (int64_t)(iVar13 + iVar4);
            iVar11 = *piVar14 + iVar10;
            lVar5 = (int64_t)iVar11;
            iVar13 = iVar13 + iVar4 + iVar16 * 4;
            iVar10 = iVar10 + 2;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar5 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
            *(int32_t *)(unaff_RSI + lVar5 * 4) = *(int32_t *)(unaff_RSI + lVar12 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar3;
            lVar12 = (int64_t)iVar13;
            iVar13 = iVar13 + iVar16 * -2;
            lVar5 = (int64_t)(iVar11 + iVar9);
            iVar11 = iVar11 + iVar16 * 4;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar5 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
            *(int32_t *)(unaff_RSI + lVar5 * 4) = *(int32_t *)(unaff_RSI + lVar12 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar3;
            lVar12 = (int64_t)iVar13;
            lVar5 = (int64_t)iVar11;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar5 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
            *(int32_t *)(unaff_RSI + lVar5 * 4) = *(int32_t *)(unaff_RSI + lVar12 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar3;
            lVar5 = (int64_t)(iVar11 + iVar9);
            lVar12 = (int64_t)(iVar16 * 4 + iVar13);
            uVar1 = *(int32_t *)(unaff_RSI + lVar5 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + lVar12 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4)
            ;
            *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar3;
            *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar2;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar10 = *piVar14;
        uVar15 = uVar15 + 1;
        piVar14 = piVar14 + 1;
        iVar10 = iVar10 + iVar4 + iVar9;
        iVar4 = iVar4 + 2;
        lVar5 = (int64_t)iVar10;
        lStack0000000000000058 = lStack0000000000000058 + -1;
        lVar12 = (int64_t)(iVar10 + iVar9);
        uVar1 = *(int32_t *)(unaff_RSI + lVar5 * 4);
        uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
        uVar3 = *(int32_t *)(unaff_RSI + lVar12 * 4);
        *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
        *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar3;
        *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar1;
        *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar2;
      } while (lStack0000000000000058 != 0);
    }
  }
  else if (1 < lStack0000000000000058) {
    lStack0000000000000058 = lStack0000000000000058 + -1;
    iVar16 = 2;
    piVar14 = (int *)0x180c1b95c;
    do {
      iVar4 = 0;
      lVar12 = 0;
      if (3 < iStack0000000000000050) {
        iVar10 = 0;
        uVar15 = (iStack0000000000000050 - 4U >> 2) + 1;
        uVar7 = (uint64_t)uVar15;
        iVar4 = uVar15 * 4;
        do {
          iVar11 = *piVar14;
          iVar13 = *(int *)(&system_data_b958 + lVar12 * 4);
          lVar6 = (int64_t)(iVar11 + iVar10);
          lVar5 = (int64_t)(iVar13 + iVar16);
          uVar1 = *(int32_t *)(unaff_RSI + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar6 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          *(int32_t *)(unaff_RSI + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar6 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar2;
          lVar6 = (int64_t)(iVar11 + iVar10 + iVar9);
          lVar5 = (int64_t)(iVar13 + iVar16 + iVar9);
          uVar1 = *(int32_t *)(unaff_RSI + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar6 * 4);
          *(int32_t *)(unaff_RSI + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar6 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14;
          lVar6 = (int64_t)(iVar11 + iVar10);
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b95c) + iVar16;
          lVar5 = (int64_t)iVar13;
          uVar1 = *(int32_t *)(unaff_RSI + 8 + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 0xc + lVar6 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 8 + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 0xc + lVar6 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar2;
          lVar6 = (int64_t)(iVar11 + iVar10 + iVar9);
          lVar5 = (int64_t)(iVar13 + iVar9);
          uVar1 = *(int32_t *)(unaff_RSI + 8 + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 0xc + lVar6 * 4);
          *(int32_t *)(unaff_RSI + 8 + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 0xc + lVar6 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14 + iVar10 + 6;
          lVar6 = (int64_t)iVar11;
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b960) + iVar16;
          lVar5 = (int64_t)iVar13;
          uVar1 = *(int32_t *)(unaff_RSI + -8 + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + -4 + lVar6 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          *(int32_t *)(unaff_RSI + -8 + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + -4 + lVar6 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar2;
          lVar6 = (int64_t)(iVar9 + iVar11);
          lVar5 = (int64_t)(iVar13 + iVar9);
          uVar1 = *(int32_t *)(unaff_RSI + -8 + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + -4 + lVar6 * 4);
          *(int32_t *)(unaff_RSI + -8 + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + -4 + lVar6 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14 + iVar10 + 6;
          iVar10 = iVar10 + 8;
          lVar6 = (int64_t)iVar11;
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b964) + iVar16;
          lVar5 = (int64_t)iVar13;
          iVar11 = iVar11 + iVar9;
          iVar13 = iVar13 + iVar9;
          lVar12 = lVar12 + 4;
          uVar1 = *(int32_t *)(unaff_RSI + lVar6 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar6 * 4);
          *(int32_t *)(unaff_RSI + lVar6 * 4) = *(int32_t *)(unaff_RSI + lVar5 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar6 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar3;
          uVar1 = *(int32_t *)(unaff_RSI + (int64_t)iVar11 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + (int64_t)iVar11 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + (int64_t)iVar13 * 4);
          *(int32_t *)(unaff_RSI + (int64_t)iVar11 * 4) =
               *(int32_t *)(unaff_RSI + (int64_t)iVar13 * 4);
          *(int32_t *)(unaff_RSI + 4 + (int64_t)iVar11 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + (int64_t)iVar13 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + (int64_t)iVar13 * 4) = uVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (iVar4 < iStack0000000000000050) {
        piVar8 = (int *)(&system_data_b958 + lVar12 * 4);
        iVar10 = iVar4 * 2;
        uVar7 = (uint64_t)(uint)(iStack0000000000000050 - iVar4);
        do {
          iVar4 = *piVar8;
          piVar8 = piVar8 + 1;
          lVar12 = (int64_t)(iVar4 + iVar16);
          iVar11 = *piVar14 + iVar10;
          lVar5 = (int64_t)iVar11;
          iVar10 = iVar10 + 2;
          uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          *(int32_t *)(unaff_RSI + lVar5 * 4) = *(int32_t *)(unaff_RSI + lVar12 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar3;
          lVar5 = (int64_t)(iVar11 + iVar9);
          lVar12 = (int64_t)(iVar4 + iVar16 + iVar9);
          uVar1 = *(int32_t *)(unaff_RSI + lVar5 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + lVar12 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar5 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar12 * 4);
          *(int32_t *)(unaff_RSI + lVar5 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar12 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar12 * 4) = uVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iStack0000000000000050 = iStack0000000000000050 + 1;
      iVar16 = iVar16 + 2;
      piVar14 = piVar14 + 1;
      lStack0000000000000058 = lStack0000000000000058 + -1;
    } while (lStack0000000000000058 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a0660(int64_t param_1,int param_2,float param_3)

{
  int64_t *plVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  float *pfVar12;
  uint64_t uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t uVar18;
  
  lVar4 = *(int64_t *)(param_1 + 0xa8);
  iVar7 = *(int *)(param_1 + 0xc21c);
  iVar3 = *(int *)(param_1 + 0xc234);
  iVar14 = *(int *)(param_1 + 0xc220);
  fVar2 = *(float *)(param_1 + 0xc218);
  bVar19 = false;
  if (param_2 == 0) {
    *(float *)(param_1 + 0xc218) = param_3;
    if (param_3 == 0.0) {
      *(int32_t *)(param_1 + 0xc218) = 0x3f800000;
    }
  }
  else if (param_2 == 1) {
    if (param_3 <= 4096.0) {
      iVar6 = 0x100;
      do {
        iVar15 = iVar6;
        if (param_3 <= (float)iVar6) break;
        iVar6 = iVar6 * 2;
        iVar15 = iVar7;
      } while (iVar6 < 0x1001);
    }
    else {
      iVar15 = 0x1000;
    }
    if (iVar7 != iVar15) {
      if (lVar4 != 0) {
        FUN_180743e10(lVar4);
      }
      bVar19 = lVar4 != 0;
      *(int *)(param_1 + 0xc21c) = iVar15;
    }
  }
  else if (param_2 == 2) {
    if (iVar14 != 4) {
      if (lVar4 != 0) {
        FUN_180743e10(lVar4);
      }
      bVar19 = lVar4 != 0;
      *(int32_t *)(param_1 + 0xc220) = 4;
    }
  }
  else if (param_2 == 3) {
    *(int *)(param_1 + 0xc224) = (int)param_3;
  }
  if ((int32_t *)(param_1 + 0xc230) != (int32_t *)0x0) {
    *(int32_t *)(param_1 + 0xc230) = *(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  }
  iVar6 = *(int *)(param_1 + 0xc224);
  if (iVar6 == 0) {
    iVar6 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d4);
  }
  if (iVar6 != iVar3) {
    if ((lVar4 != 0) && (!bVar19)) {
      bVar19 = true;
      FUN_180743e10(lVar4);
    }
    *(int *)(param_1 + 0xc234) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0xc21c);
  plVar1 = (int64_t *)(param_1 + 0xc228);
  if (iVar7 != iVar6) {
    if (*plVar1 != 0) {
      FUN_1807a0430(*plVar1,iVar6);
      iVar6 = *(int *)(param_1 + 0xc21c);
      goto LAB_1807a0821;
    }
LAB_1807a084e:
    uVar13 = 0x1e;
    goto LAB_1807a0c0f;
  }
LAB_1807a0821:
  uVar13 = 0;
  if ((iVar7 != iVar6) || (iVar14 != *(int *)(param_1 + 0xc220))) {
    bVar5 = false;
    if (*(int64_t *)(param_1 + 0xc228) == 0) goto LAB_1807a084e;
    if ((iVar6 == 0x100) || (iVar6 == 0x200)) {
LAB_1807a088e:
      bVar5 = false;
LAB_1807a0891:
      uVar9 = 0x180be3f00;
      uVar10 = 0x201;
    }
    else {
      if (iVar6 == 0x400) {
        bVar5 = true;
        goto LAB_1807a0891;
      }
      if ((iVar6 == 0x800) || (uVar9 = uVar13, uVar10 = uVar13, iVar6 == 0x1000))
      goto LAB_1807a088e;
    }
    iVar7 = *(int *)(param_1 + 0xc220);
    uVar17 = (int)uVar10 * 2;
    fVar23 = (float)(int)(uVar17 - 2);
    if (0 < iVar6) {
      pfVar16 = (float *)(param_1 + 0x8218);
      pfVar12 = (float *)(uVar9 + ((uint64_t)uVar17 - 2) * 4);
      uVar11 = uVar13;
      uVar18 = uVar13;
      do {
        if (bVar5) {
          if ((int64_t)uVar11 < (int64_t)uVar10) {
            fVar21 = *(float *)((int64_t)pfVar16 + (uVar9 - param_1) + -0x8218);
          }
          else {
            fVar21 = *pfVar12;
          }
        }
        else {
          fVar21 = (float)(int)uVar18 * (fVar23 / (float)iVar6);
          fVar22 = (float)((int)uVar10 + -1);
          fVar20 = fVar21;
          if (fVar22 < fVar21) {
            fVar20 = fVar23 - fVar21;
          }
          iVar15 = (int)fVar20;
          iVar14 = -1;
          if (fVar21 <= fVar22) {
            iVar14 = 1;
          }
          fVar21 = *(float *)(uVar9 + (int64_t)iVar15 * 4);
          if (((float)iVar15 != fVar20) && (-1 < iVar14 + iVar15)) {
            fVar21 = (*(float *)(uVar9 + (int64_t)(iVar14 + iVar15) * 4) - fVar21) *
                     (fVar20 - (float)iVar15) + fVar21;
          }
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (uint64_t)uVar17;
        uVar11 = uVar11 + 1;
        pfVar12 = pfVar12 + -1;
        *pfVar16 = (1.0 / SQRT((float)iVar6 * 0.25 * (float)iVar7)) * fVar21;
        pfVar16 = pfVar16 + 1;
      } while ((int)uVar17 < *(int *)(param_1 + 0xc21c));
    }
    if (0 < *(int *)(param_1 + 0xc234)) {
      uVar9 = uVar13;
      uVar10 = uVar13;
      do {
        uVar17 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar17;
        *(int64_t *)(uVar10 + 0x14020 + *(int64_t *)(param_1 + 0xc228)) = param_1 + 0x8218;
        uVar10 = uVar10 + 0x14048;
      } while ((int)uVar17 < *(int *)(param_1 + 0xc234));
    }
    FUN_1807603e0(param_1);
  }
  iVar7 = *(int *)(param_1 + 0xc234);
  if ((iVar7 != iVar3) || (*(int64_t *)(param_1 + 0xc228) == 0)) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_5760_ptr,0x893,1);
    }
    lVar8 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar7 * 0x14048,&processed_var_5760_ptr,
                          0x896,0,0,1);
    *plVar1 = lVar8;
    if (lVar8 == 0) {
      uVar13 = 0x26;
      goto LAB_1807a0c0f;
    }
    iVar7 = *(int *)(param_1 + 0xc234);
    if (0 < iVar7) {
                    // WARNING: Subroutine does not return
      memset(*plVar1,0,0x14020);
    }
  }
  if (0 < iVar7) {
    uVar9 = uVar13;
    uVar10 = uVar13;
    do {
      *(float *)(uVar9 + 0x1402c + *plVar1) = (1.0 / fVar2) * *(float *)(param_1 + 0xc218);
      if (fVar2 != *(float *)(param_1 + 0xc218)) {
        *(int8_t *)(uVar9 + 0x14040 + *plVar1) = 1;
      }
      uVar17 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar17;
      uVar9 = uVar9 + 0x14048;
    } while ((int)uVar17 < *(int *)(param_1 + 0xc234));
  }
  iVar7 = *(int *)(param_1 + 0xc21c);
  *(int32_t *)(param_1 + 0xc238) = 0;
  uVar9 = uVar13;
  if (1 < iVar7) {
    do {
      iVar7 = iVar7 >> 1;
      uVar17 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar17;
    } while (1 < iVar7);
    *(uint *)(param_1 + 0xc238) = uVar17;
  }
LAB_1807a0c0f:
  if ((bVar19) && (lVar4 != 0)) {
    FUN_180743e50(lVar4);
  }
  return uVar13;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a0677(int64_t param_1,int param_2,float param_3)

{
  int64_t *plVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  uint64_t unaff_RBP;
  float *pfVar11;
  char unaff_SIL;
  uint64_t uVar12;
  uint64_t unaff_RDI;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  int64_t unaff_R12;
  int iVar17;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int iStack00000000000000b0;
  char cStack00000000000000b8;
  uint64_t uVar16;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  iVar5 = *(int *)(param_1 + 0xc21c);
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  iVar17 = *(int *)(param_1 + 0xc234);
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iVar13 = *(int *)(param_1 + 0xc220);
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  fVar2 = *(float *)(param_1 + 0xc218);
  iStack00000000000000b0 = iVar17;
  cStack00000000000000b8 = unaff_SIL;
  if (param_2 == 0) {
    *(float *)(param_1 + 0xc218) = param_3;
    if (param_3 == 0.0) {
      *(int32_t *)(param_1 + 0xc218) = 0x3f800000;
    }
  }
  else if (param_2 == 1) {
    if (param_3 <= 4096.0) {
      iVar4 = 0x100;
      do {
        iVar9 = iVar4;
        if (param_3 <= (float)iVar4) break;
        iVar4 = iVar4 * 2;
        iVar9 = iVar5;
      } while (iVar4 < 0x1001);
    }
    else {
      iVar9 = 0x1000;
    }
    if (iVar5 != iVar9) {
      if (unaff_R12 != 0) {
        FUN_180743e10();
      }
      cStack00000000000000b8 = unaff_R12 != 0;
      *(int *)(param_1 + 0xc21c) = iVar9;
    }
  }
  else if (param_2 == 2) {
    if (iVar13 != 4) {
      if (unaff_R12 != 0) {
        FUN_180743e10();
      }
      cStack00000000000000b8 = unaff_R12 != 0;
      *(int32_t *)(param_1 + 0xc220) = 4;
    }
  }
  else if (param_2 == 3) {
    *(int *)(param_1 + 0xc224) = (int)param_3;
  }
  if ((int32_t *)(param_1 + 0xc230) != (int32_t *)0x0) {
    *(int32_t *)(param_1 + 0xc230) = *(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  }
  iVar4 = *(int *)(param_1 + 0xc224);
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d4);
  }
  if (iVar4 != iVar17) {
    if ((unaff_R12 != 0) && (cStack00000000000000b8 == '\0')) {
      cStack00000000000000b8 = '\x01';
      FUN_180743e10();
    }
    *(int *)(param_1 + 0xc234) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0xc21c);
  plVar1 = (int64_t *)(param_1 + 0xc228);
  if (iVar5 != iVar4) {
    if (*plVar1 != 0) {
      FUN_1807a0430(*plVar1,iVar4);
      iVar4 = *(int *)(param_1 + 0xc21c);
      goto LAB_1807a0821;
    }
LAB_1807a084e:
    uVar12 = 0x1e;
    goto LAB_1807a0c0f;
  }
LAB_1807a0821:
  uVar12 = 0;
  if ((iVar5 != iVar4) || (iVar13 != *(int *)(param_1 + 0xc220))) {
    bVar3 = false;
    if (*(int64_t *)(param_1 + 0xc228) == 0) goto LAB_1807a084e;
    if ((iVar4 == 0x100) || (iVar4 == 0x200)) {
LAB_1807a088e:
      bVar3 = false;
LAB_1807a0891:
      uVar7 = 0x180be3f00;
      uVar8 = 0x201;
    }
    else {
      if (iVar4 == 0x400) {
        bVar3 = true;
        goto LAB_1807a0891;
      }
      if ((iVar4 == 0x800) || (uVar7 = uVar12, uVar8 = uVar12, iVar4 == 0x1000)) goto LAB_1807a088e;
    }
    iVar5 = *(int *)(param_1 + 0xc220);
    uVar15 = (int)uVar8 * 2;
    fVar21 = (float)(int)(uVar15 - 2);
    if (0 < iVar4) {
      pfVar14 = (float *)(param_1 + 0x8218);
      pfVar11 = (float *)(uVar7 + ((uint64_t)uVar15 - 2) * 4);
      uVar10 = uVar12;
      uVar16 = uVar12;
      do {
        if (bVar3) {
          if ((int64_t)uVar10 < (int64_t)uVar8) {
            fVar19 = *(float *)((int64_t)pfVar14 + (uVar7 - param_1) + -0x8218);
          }
          else {
            fVar19 = *pfVar11;
          }
        }
        else {
          fVar19 = (float)(int)uVar16 * (fVar21 / (float)iVar4);
          fVar20 = (float)((int)uVar8 + -1);
          fVar18 = fVar19;
          if (fVar20 < fVar19) {
            fVar18 = fVar21 - fVar19;
          }
          iVar13 = (int)fVar18;
          iVar17 = -1;
          if (fVar19 <= fVar20) {
            iVar17 = 1;
          }
          fVar19 = *(float *)(uVar7 + (int64_t)iVar13 * 4);
          if (((float)iVar13 != fVar18) && (-1 < iVar17 + iVar13)) {
            fVar19 = (*(float *)(uVar7 + (int64_t)(iVar17 + iVar13) * 4) - fVar19) *
                     (fVar18 - (float)iVar13) + fVar19;
          }
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (uint64_t)uVar15;
        uVar10 = uVar10 + 1;
        pfVar11 = pfVar11 + -1;
        *pfVar14 = (1.0 / SQRT((float)iVar4 * 0.25 * (float)iVar5)) * fVar19;
        pfVar14 = pfVar14 + 1;
        iVar17 = iStack00000000000000b0;
      } while ((int)uVar15 < *(int *)(param_1 + 0xc21c));
    }
    if (0 < *(int *)(param_1 + 0xc234)) {
      uVar7 = uVar12;
      uVar8 = uVar12;
      do {
        uVar15 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar15;
        *(int64_t *)(uVar8 + 0x14020 + *(int64_t *)(param_1 + 0xc228)) = param_1 + 0x8218;
        uVar8 = uVar8 + 0x14048;
      } while ((int)uVar15 < *(int *)(param_1 + 0xc234));
    }
    FUN_1807603e0(param_1);
  }
  iVar5 = *(int *)(param_1 + 0xc234);
  if ((iVar5 != iVar17) || (*(int64_t *)(param_1 + 0xc228) == 0)) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_5760_ptr,0x893,1);
    }
    lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 * 0x14048,&processed_var_5760_ptr,
                          0x896,0);
    *plVar1 = lVar6;
    if (lVar6 == 0) {
      uVar12 = 0x26;
      goto LAB_1807a0c0f;
    }
    iVar5 = *(int *)(param_1 + 0xc234);
    if (0 < iVar5) {
                    // WARNING: Subroutine does not return
      memset(*plVar1,0,0x14020);
    }
  }
  if (0 < iVar5) {
    uVar7 = uVar12;
    uVar8 = uVar12;
    do {
      *(float *)(uVar7 + 0x1402c + *plVar1) = (1.0 / fVar2) * *(float *)(param_1 + 0xc218);
      if (fVar2 != *(float *)(param_1 + 0xc218)) {
        *(int8_t *)(uVar7 + 0x14040 + *plVar1) = 1;
      }
      uVar15 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar15;
      uVar7 = uVar7 + 0x14048;
    } while ((int)uVar15 < *(int *)(param_1 + 0xc234));
  }
  iVar5 = *(int *)(param_1 + 0xc21c);
  *(int32_t *)(param_1 + 0xc238) = 0;
  uVar7 = uVar12;
  if (1 < iVar5) {
    do {
      iVar5 = iVar5 >> 1;
      uVar15 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar15;
    } while (1 < iVar5);
    *(uint *)(param_1 + 0xc238) = uVar15;
  }
LAB_1807a0c0f:
  if ((cStack00000000000000b8 != '\0') && (unaff_R12 != 0)) {
    FUN_180743e50(unaff_R12);
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a0800(uint64_t param_1,uint64_t param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int unaff_EBP;
  float *pfVar7;
  uint64_t uVar8;
  int64_t unaff_RDI;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int64_t unaff_R12;
  int unaff_R13D;
  int64_t *unaff_R14;
  int unaff_R15D;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  int in_stack_000000b0;
  char in_stack_000000b8;
  int64_t in_stack_000000c8;
  uint64_t uVar13;
  
  if (unaff_EBP != param_3) {
    if (*unaff_R14 != 0) {
      FUN_1807a0430(*unaff_R14,param_3);
      param_3 = *(int *)(unaff_RDI + 0xc21c);
      goto LAB_1807a0821;
    }
LAB_1807a084e:
    uVar8 = 0x1e;
    goto LAB_1807a0c0f;
  }
LAB_1807a0821:
  uVar8 = 0;
  if ((unaff_EBP != param_3) || (unaff_R15D != *(int *)(unaff_RDI + 0xc220))) {
    bVar1 = false;
    if (*(int64_t *)(unaff_RDI + 0xc228) == 0) goto LAB_1807a084e;
    if ((param_3 == 0x100) || (param_3 == 0x200)) {
LAB_1807a088e:
      bVar1 = false;
LAB_1807a0891:
      uVar4 = 0x180be3f00;
      uVar5 = 0x201;
    }
    else {
      if (param_3 == 0x400) {
        bVar1 = true;
        goto LAB_1807a0891;
      }
      if ((param_3 == 0x800) || (uVar4 = uVar8, uVar5 = uVar8, param_3 == 0x1000))
      goto LAB_1807a088e;
    }
    iVar2 = *(int *)(unaff_RDI + 0xc220);
    uVar12 = (int)uVar5 * 2;
    fVar17 = (float)(int)(uVar12 - 2);
    if (0 < param_3) {
      pfVar11 = (float *)(unaff_RDI + 0x8218);
      pfVar7 = (float *)(uVar4 + ((uint64_t)uVar12 - 2) * 4);
      uVar6 = uVar8;
      uVar13 = uVar8;
      do {
        if (bVar1) {
          if ((int64_t)uVar6 < (int64_t)uVar5) {
            fVar15 = *(float *)((int64_t)pfVar11 + (uVar4 - unaff_RDI) + -0x8218);
          }
          else {
            fVar15 = *pfVar7;
          }
        }
        else {
          fVar15 = (float)(int)uVar13 * (fVar17 / (float)param_3);
          fVar16 = (float)((int)uVar5 + -1);
          fVar14 = fVar15;
          if (fVar16 < fVar15) {
            fVar14 = fVar17 - fVar15;
          }
          iVar10 = (int)fVar14;
          iVar9 = -1;
          if (fVar15 <= fVar16) {
            iVar9 = 1;
          }
          fVar15 = *(float *)(uVar4 + (int64_t)iVar10 * 4);
          if (((float)iVar10 != fVar14) && (-1 < iVar9 + iVar10)) {
            fVar15 = (*(float *)(uVar4 + (int64_t)(iVar9 + iVar10) * 4) - fVar15) *
                     (fVar14 - (float)iVar10) + fVar15;
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (uint64_t)uVar12;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + -1;
        *pfVar11 = (1.0 / SQRT((float)param_3 * 0.25 * (float)iVar2)) * fVar15;
        pfVar11 = pfVar11 + 1;
        unaff_R12 = in_stack_000000c8;
        unaff_R13D = in_stack_000000b0;
      } while ((int)uVar12 < *(int *)(unaff_RDI + 0xc21c));
    }
    if (0 < *(int *)(unaff_RDI + 0xc234)) {
      uVar4 = uVar8;
      uVar5 = uVar8;
      do {
        uVar12 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar12;
        *(int64_t *)(uVar5 + 0x14020 + *(int64_t *)(unaff_RDI + 0xc228)) = unaff_RDI + 0x8218;
        uVar5 = uVar5 + 0x14048;
      } while ((int)uVar12 < *(int *)(unaff_RDI + 0xc234));
    }
    FUN_1807603e0();
  }
  iVar2 = *(int *)(unaff_RDI + 0xc234);
  if ((iVar2 != unaff_R13D) || (*(int64_t *)(unaff_RDI + 0xc228) == 0)) {
    if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_5760_ptr,0x893,1);
    }
    lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar2 * 0x14048,&processed_var_5760_ptr,
                          0x896,0);
    *unaff_R14 = lVar3;
    if (lVar3 == 0) {
      uVar8 = 0x26;
      goto LAB_1807a0c0f;
    }
    iVar2 = *(int *)(unaff_RDI + 0xc234);
    if (0 < iVar2) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R14,0,0x14020);
    }
  }
  if (0 < iVar2) {
    uVar4 = uVar8;
    uVar5 = uVar8;
    do {
      *(float *)(uVar4 + 0x1402c + *unaff_R14) =
           (1.0 / unaff_XMM8_Da) * *(float *)(unaff_RDI + 0xc218);
      if (unaff_XMM8_Da != *(float *)(unaff_RDI + 0xc218)) {
        *(int8_t *)(uVar4 + 0x14040 + *unaff_R14) = 1;
      }
      uVar12 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar12;
      uVar4 = uVar4 + 0x14048;
    } while ((int)uVar12 < *(int *)(unaff_RDI + 0xc234));
  }
  iVar2 = *(int *)(unaff_RDI + 0xc21c);
  *(int32_t *)(unaff_RDI + 0xc238) = 0;
  uVar4 = uVar8;
  if (1 < iVar2) {
    do {
      iVar2 = iVar2 >> 1;
      uVar12 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar12;
    } while (1 < iVar2);
    *(uint *)(unaff_RDI + 0xc238) = uVar12;
  }
LAB_1807a0c0f:
  if ((in_stack_000000b8 != '\0') && (unaff_R12 != 0)) {
    FUN_180743e50(unaff_R12);
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a0858(int64_t param_1,uint param_2,int param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float *pfVar5;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int64_t unaff_R12;
  int unaff_R13D;
  int64_t *unaff_R14;
  char unaff_R15B;
  float fVar10;
  float fVar11;
  float unaff_XMM6_Da;
  float fVar12;
  float unaff_XMM8_Da;
  int in_stack_000000b0;
  char in_stack_000000b8;
  int64_t in_stack_000000c8;
  
  if ((param_3 == 0x100) || (param_3 == 0x200)) {
LAB_1807a088e:
    unaff_R15B = '\0';
LAB_1807a0891:
    param_1 = 0x180be3f00;
    param_2 = 0x201;
  }
  else {
    if (param_3 == 0x400) {
      unaff_R15B = '\x01';
      goto LAB_1807a0891;
    }
    if ((param_3 == 0x800) || (param_3 == 0x1000)) goto LAB_1807a088e;
  }
  iVar1 = *(int *)(unaff_RDI + 0xc220);
  uVar3 = unaff_RSI & 0xffffffff;
  fVar12 = (float)(int)(param_2 * 2 - 2);
  if (0 < param_3) {
    pfVar8 = (float *)(unaff_RDI + 0x8218);
    pfVar5 = (float *)(param_1 + ((uint64_t)(param_2 * 2) - 2) * 4);
    uVar4 = unaff_RSI;
    do {
      if (unaff_R15B == '\0') {
        fVar11 = (float)(int)uVar3 * (fVar12 / (float)param_3);
        fVar10 = fVar11;
        if ((float)(int)(param_2 - 1) < fVar11) {
          fVar10 = fVar12 - fVar11;
        }
        iVar7 = (int)fVar10;
        iVar6 = -1;
        if (fVar11 <= (float)(int)(param_2 - 1)) {
          iVar6 = 1;
        }
        fVar11 = *(float *)(param_1 + (int64_t)iVar7 * 4);
        if (((float)iVar7 != fVar10) && (-1 < iVar6 + iVar7)) {
          fVar11 = (*(float *)(param_1 + (int64_t)(iVar6 + iVar7) * 4) - fVar11) *
                   (fVar10 - (float)iVar7) + fVar11;
        }
      }
      else if ((int64_t)uVar4 < (int64_t)(uint64_t)param_2) {
        fVar11 = *(float *)((int64_t)pfVar8 + (param_1 - unaff_RDI) + -0x8218);
      }
      else {
        fVar11 = *pfVar5;
      }
      uVar9 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar9;
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + -1;
      *pfVar8 = (unaff_XMM6_Da / SQRT((float)param_3 * 0.25 * (float)iVar1)) * fVar11;
      pfVar8 = pfVar8 + 1;
      unaff_R12 = in_stack_000000c8;
      unaff_R13D = in_stack_000000b0;
    } while ((int)uVar9 < *(int *)(unaff_RDI + 0xc21c));
  }
  uVar3 = unaff_RSI & 0xffffffff;
  if ((int)unaff_RSI < *(int *)(unaff_RDI + 0xc234)) {
    uVar4 = unaff_RSI;
    do {
      uVar9 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar9;
      *(int64_t *)(uVar4 + 0x14020 + *(int64_t *)(unaff_RDI + 0xc228)) = unaff_RDI + 0x8218;
      uVar4 = uVar4 + 0x14048;
    } while ((int)uVar9 < *(int *)(unaff_RDI + 0xc234));
  }
  FUN_1807603e0();
  iVar1 = *(int *)(unaff_RDI + 0xc234);
  if ((iVar1 != unaff_R13D) || (*(uint64_t *)(unaff_RDI + 0xc228) == unaff_RSI)) {
    if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_5760_ptr,0x893,1);
    }
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar1 * 0x14048,&processed_var_5760_ptr,
                          0x896);
    *unaff_R14 = lVar2;
    if (lVar2 == 0) {
      unaff_RSI = 0x26;
      goto LAB_1807a0c0f;
    }
    iVar1 = *(int *)(unaff_RDI + 0xc234);
    if (0 < iVar1) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R14 + unaff_RSI,0,0x14020);
    }
  }
  uVar3 = unaff_RSI & 0xffffffff;
  if (0 < iVar1) {
    uVar4 = unaff_RSI;
    do {
      *(float *)(uVar4 + 0x1402c + *unaff_R14) =
           (unaff_XMM6_Da / unaff_XMM8_Da) * *(float *)(unaff_RDI + 0xc218);
      if (unaff_XMM8_Da != *(float *)(unaff_RDI + 0xc218)) {
        *(int8_t *)(uVar4 + 0x14040 + *unaff_R14) = 1;
      }
      uVar9 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar9;
      uVar4 = uVar4 + 0x14048;
    } while ((int)uVar9 < *(int *)(unaff_RDI + 0xc234));
  }
  iVar1 = *(int *)(unaff_RDI + 0xc21c);
  *(int *)(unaff_RDI + 0xc238) = (int)unaff_RSI;
  if (1 < iVar1) {
    uVar3 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = iVar1 >> 1;
      uVar9 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar9;
    } while (1 < iVar1);
    *(uint *)(unaff_RDI + 0xc238) = uVar9;
  }
LAB_1807a0c0f:
  if ((in_stack_000000b8 != '\0') && (unaff_R12 != 0)) {
    FUN_180743e50(unaff_R12);
  }
  return unaff_RSI & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a09f4(int param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int unaff_R13D;
  int64_t *unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  char in_stack_000000b8;
  
  uVar5 = unaff_RSI;
  do {
    param_1 = param_1 + 1;
    *(int64_t *)(uVar5 + 0x14020 + *(int64_t *)(unaff_RDI + 0xc228)) = unaff_RDI + 0x8218;
    uVar5 = uVar5 + 0x14048;
  } while (param_1 < *(int *)(unaff_RDI + 0xc234));
  FUN_1807603e0();
  iVar1 = *(int *)(unaff_RDI + 0xc234);
  if ((iVar1 != unaff_R13D) || (*(uint64_t *)(unaff_RDI + 0xc228) == unaff_RSI)) {
    if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_5760_ptr,0x893,1);
    }
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar1 * 0x14048,&processed_var_5760_ptr,
                          0x896);
    *unaff_R14 = lVar2;
    if (lVar2 == 0) {
      unaff_RSI = 0x26;
      goto LAB_1807a0c0f;
    }
    iVar1 = *(int *)(unaff_RDI + 0xc234);
    if (0 < iVar1) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R14 + unaff_RSI,0,0x14020);
    }
  }
  uVar5 = unaff_RSI & 0xffffffff;
  if (0 < iVar1) {
    uVar3 = unaff_RSI;
    do {
      *(float *)(uVar3 + 0x1402c + *unaff_R14) =
           (unaff_XMM6_Da / unaff_XMM8_Da) * *(float *)(unaff_RDI + 0xc218);
      if (unaff_XMM8_Da != *(float *)(unaff_RDI + 0xc218)) {
        *(int8_t *)(uVar3 + 0x14040 + *unaff_R14) = 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar3 = uVar3 + 0x14048;
    } while ((int)uVar4 < *(int *)(unaff_RDI + 0xc234));
  }
  iVar1 = *(int *)(unaff_RDI + 0xc21c);
  *(int *)(unaff_RDI + 0xc238) = (int)unaff_RSI;
  if (1 < iVar1) {
    uVar5 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = iVar1 >> 1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (1 < iVar1);
    *(uint *)(unaff_RDI + 0xc238) = uVar4;
  }
LAB_1807a0c0f:
  if ((in_stack_000000b8 != '\0') && (unaff_R12 != 0)) {
    FUN_180743e50();
  }
  return unaff_RSI & 0xffffffff;
}



int32_t FUN_1807a0c4e(void)

{
  int32_t unaff_ESI;
  int64_t unaff_R12;
  
  if (unaff_R12 != 0) {
    FUN_180743e50();
  }
  return unaff_ESI;
}








