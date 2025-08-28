#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part028.c - 5 个函数

// 函数: void FUN_18026fd74(longlong param_1,longlong param_2)
void FUN_18026fd74(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int32_t *puVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar21;
  float fVar22;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  uVar19 = param_1 * 2;
  if (param_1 == 0) {
    uVar19 = 1;
  }
  if (uVar19 < (ulonglong)(param_1 + unaff_RBP)) {
    uVar19 = param_1 + unaff_RBP;
  }
  lVar11 = unaff_RBX;
  if (uVar19 != 0) {
    lVar11 = FUN_18062b420(system_memory_pool_ptr,uVar19 * 8);
    param_2 = *(longlong *)(unaff_RSI + 0xd0);
    unaff_R14 = *(longlong *)(unaff_RSI + 0xd2);
  }
  if (param_2 != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar11,param_2,unaff_R14 - param_2);
  }
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar11,0,unaff_RBP * 8);
  }
  if (*(longlong *)(unaff_RSI + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong *)(unaff_RSI + 0xd0) = lVar11;
  *(ulonglong *)(unaff_RSI + 0xd4) = uVar19 * 8 + lVar11;
  *(longlong *)(unaff_RSI + 0xd2) = lVar11;
  if (3 < unaff_R15) {
    puVar15 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar4 = *puVar15;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
      *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[1];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 2;
      *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[2];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 3;
      *(int32_t *)(lVar11 + 8 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[3];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 4;
      *(int32_t *)(lVar11 + 0xc + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[4];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 5;
      *(int32_t *)(lVar11 + 0x10 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[5];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 6;
      *(int32_t *)(lVar11 + 0x14 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[6];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 7;
      *(int32_t *)(lVar11 + 0x18 + unaff_RBX * 8) = uVar4;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar4 = puVar15[7];
      puVar15 = puVar15 + 8;
      *(int32_t **)(unaff_RDI + 8) = puVar15;
      *(int32_t *)(lVar11 + 0x1c + unaff_RBX * 8) = uVar4;
      unaff_RBX = unaff_RBX + 4;
    } while (unaff_RBX < unaff_R15 + -3);
  }
  if (unaff_RBX < unaff_R15) {
    puVar15 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar4 = *puVar15;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
      *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar4 = puVar15[1];
      puVar15 = puVar15 + 2;
      *(int32_t **)(unaff_RDI + 8) = puVar15;
      *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX < unaff_R15);
  }
  pfVar12 = *(float **)(unaff_RSI + 0xca);
  pfVar1 = unaff_RSI + 200;
  pfVar20 = *(float **)pfVar1;
  if (pfVar20 != pfVar12) {
    lVar11 = ((longlong)pfVar12 - (longlong)pfVar20) / 0x14;
    for (lVar10 = lVar11; lVar10 != 0; lVar10 = lVar10 >> 1) {
    }
    FUN_18026f230(pfVar20,pfVar12);
    if (lVar11 < 0x1d) {
      FUN_18026f390(pfVar20);
    }
    else {
      FUN_18026f390(pfVar20);
      for (pfVar20 = pfVar20 + 0x8c; pfVar20 != pfVar12; pfVar20 = pfVar20 + 5) {
        fVar2 = *pfVar20;
        fVar5 = pfVar20[1];
        fVar6 = pfVar20[2];
        fVar7 = pfVar20[3];
        fVar21 = pfVar20[4];
        fVar22 = pfVar20[-5];
        pfVar14 = pfVar20 + -5;
        pfVar13 = pfVar20;
        while (fVar2 < fVar22) {
          fVar22 = pfVar14[1];
          fVar8 = pfVar14[2];
          fVar9 = pfVar14[3];
          *pfVar13 = *pfVar14;
          pfVar13[1] = fVar22;
          pfVar13[2] = fVar8;
          pfVar13[3] = fVar9;
          pfVar13[4] = pfVar14[4];
          pfVar13 = pfVar13 + -5;
          fVar22 = pfVar14[-5];
          pfVar14 = pfVar14 + -5;
        }
        *pfVar13 = fVar2;
        pfVar13[1] = fVar5;
        pfVar13[2] = fVar6;
        pfVar13[3] = fVar7;
        pfVar13[4] = fVar21;
      }
    }
  }
  pfVar20 = *(float **)(unaff_RSI + 0xd2);
  pfVar12 = *(float **)(unaff_RSI + 0xd0);
  if (pfVar12 != pfVar20) {
    lVar10 = (longlong)pfVar20 - (longlong)pfVar12 >> 3;
    for (lVar11 = lVar10; lVar11 != 0; lVar11 = lVar11 >> 1) {
    }
    FUN_18026f6b0(pfVar12,pfVar20);
    if (lVar10 < 0x1d) {
      func_0x00018026f7f0(pfVar12,pfVar20);
    }
    else {
      pfVar14 = pfVar12 + 0x38;
      func_0x00018026f7f0(pfVar12);
      for (; pfVar14 != pfVar20; pfVar14 = pfVar14 + 2) {
        fVar22 = *pfVar14;
        pfVar12 = pfVar14 + -2;
        fVar21 = pfVar14[1];
        fVar2 = *pfVar12;
        pfVar13 = pfVar14;
        while (fVar22 < fVar2) {
          uVar3 = *(uint64_t *)pfVar12;
          pfVar12 = pfVar12 + -2;
          *(uint64_t *)pfVar13 = uVar3;
          pfVar13 = pfVar13 + -2;
          fVar2 = *pfVar12;
        }
        *pfVar13 = fVar22;
        pfVar13[1] = fVar21;
      }
    }
  }
  iVar18 = 0;
  pfVar20 = unaff_RSI;
  do {
    pfVar12 = *(float **)pfVar1;
    fVar22 = (float)iVar18 * 0.020408163;
    if (pfVar12 == *(float **)(unaff_RSI + 0xca)) {
      fStack_40 = 1.0;
      fStack_3c = 1.0;
      fStack_38 = 1.0;
    }
    else {
      lVar10 = (longlong)*(float **)(unaff_RSI + 0xca) - (longlong)pfVar12;
      iVar16 = 0;
      lVar17 = 0;
      lVar11 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0x14 + lVar11;
      pfVar14 = pfVar12;
      if (lVar10 != lVar11) {
        do {
          if (fVar22 < *pfVar12) {
            if (lVar17 != -1) {
              if (lVar17 == 0) {
                fStack_40 = pfVar14[1];
                fStack_3c = pfVar14[2];
                fStack_38 = pfVar14[3];
              }
              else {
                pfVar12 = pfVar14 + lVar17 * 5 + -5;
                pfVar14 = pfVar14 + lVar17 * 5;
                fVar21 = (fVar22 - *pfVar12) / (*pfVar14 - *pfVar12);
                fStack_40 = (pfVar14[1] - pfVar12[1]) * fVar21 + pfVar12[1];
                fStack_3c = (pfVar14[2] - pfVar12[2]) * fVar21 + pfVar12[2];
                fStack_38 = (pfVar14[3] - pfVar12[3]) * fVar21 + pfVar12[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar17 = lVar17 + 1;
          pfVar12 = pfVar12 + 5;
          pfVar14 = *(float **)pfVar1;
        } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lVar10 - lVar11));
      }
      lVar11 = *(longlong *)(unaff_RSI + 0xca);
      fStack_40 = *(float *)(lVar11 + -0x10);
      fStack_3c = *(float *)(lVar11 + -0xc);
      fStack_38 = *(float *)(lVar11 + -8);
    }
LAB_18026fabc:
    pfVar12 = *(float **)(unaff_RSI + 0xd0);
    if (pfVar12 == *(float **)(unaff_RSI + 0xd2)) {
      fVar22 = 1.0;
    }
    else {
      iVar16 = 0;
      uVar19 = (longlong)*(float **)(unaff_RSI + 0xd2) - (longlong)pfVar12 >> 3;
      lVar11 = 0;
      pfVar14 = pfVar12;
      if (uVar19 != 0) {
        do {
          if (fVar22 < *pfVar14) {
            if (lVar11 != -1) {
              if (lVar11 == 0) {
                fVar22 = pfVar12[1];
              }
              else {
                fVar22 = ((fVar22 - pfVar12[lVar11 * 2 + -2]) /
                         (pfVar12[lVar11 * 2] - pfVar12[lVar11 * 2 + -2])) *
                         (pfVar12[lVar11 * 2 + 1] - pfVar12[lVar11 * 2 + -1]) +
                         pfVar12[lVar11 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar11 = lVar11 + 1;
          pfVar14 = pfVar14 + 2;
        } while ((ulonglong)(longlong)iVar16 < uVar19);
      }
      fVar22 = *(float *)(*(longlong *)(unaff_RSI + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar18 = iVar18 + 1;
    *pfVar20 = fStack_40;
    pfVar20[1] = fStack_3c;
    pfVar20[2] = fStack_38;
    pfVar20[3] = fVar22;
    pfVar20 = pfVar20 + 4;
    if (0x31 < iVar18) {
      return;
    }
  } while( true );
}






// 函数: void FUN_18026fe36(int32_t param_1)
void FUN_18026fe36(int32_t param_1)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int32_t *puVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  uint64_t *unaff_R12;
  float *pfVar20;
  uint64_t unaff_R14;
  longlong unaff_R15;
  float fVar21;
  float fVar22;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    memset(param_1,0,unaff_RBP * 8);
  }
  *unaff_R12 = unaff_R14;
  if (3 < unaff_R15) {
    puVar15 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar4 = *puVar15;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
      *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[1];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 2;
      *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[2];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 3;
      *(int32_t *)(lVar11 + 8 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[3];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 4;
      *(int32_t *)(lVar11 + 0xc + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[4];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 5;
      *(int32_t *)(lVar11 + 0x10 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[5];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 6;
      *(int32_t *)(lVar11 + 0x14 + unaff_RBX * 8) = uVar4;
      uVar4 = puVar15[6];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 7;
      *(int32_t *)(lVar11 + 0x18 + unaff_RBX * 8) = uVar4;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar4 = puVar15[7];
      puVar15 = puVar15 + 8;
      *(int32_t **)(unaff_RDI + 8) = puVar15;
      *(int32_t *)(lVar11 + 0x1c + unaff_RBX * 8) = uVar4;
      unaff_RBX = unaff_RBX + 4;
    } while (unaff_RBX < unaff_R15 + -3);
  }
  if (unaff_RBX < unaff_R15) {
    puVar15 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar4 = *puVar15;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
      *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar4 = puVar15[1];
      puVar15 = puVar15 + 2;
      *(int32_t **)(unaff_RDI + 8) = puVar15;
      *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX < unaff_R15);
  }
  pfVar12 = *(float **)(unaff_RSI + 0xca);
  pfVar1 = unaff_RSI + 200;
  pfVar20 = *(float **)pfVar1;
  if (pfVar20 != pfVar12) {
    lVar11 = ((longlong)pfVar12 - (longlong)pfVar20) / 0x14;
    for (lVar10 = lVar11; lVar10 != 0; lVar10 = lVar10 >> 1) {
    }
    FUN_18026f230(pfVar20,pfVar12);
    if (lVar11 < 0x1d) {
      FUN_18026f390(pfVar20);
    }
    else {
      FUN_18026f390(pfVar20);
      for (pfVar20 = pfVar20 + 0x8c; pfVar20 != pfVar12; pfVar20 = pfVar20 + 5) {
        fVar2 = *pfVar20;
        fVar5 = pfVar20[1];
        fVar6 = pfVar20[2];
        fVar7 = pfVar20[3];
        fVar21 = pfVar20[4];
        fVar22 = pfVar20[-5];
        pfVar14 = pfVar20 + -5;
        pfVar13 = pfVar20;
        while (fVar2 < fVar22) {
          fVar22 = pfVar14[1];
          fVar8 = pfVar14[2];
          fVar9 = pfVar14[3];
          *pfVar13 = *pfVar14;
          pfVar13[1] = fVar22;
          pfVar13[2] = fVar8;
          pfVar13[3] = fVar9;
          pfVar13[4] = pfVar14[4];
          pfVar13 = pfVar13 + -5;
          fVar22 = pfVar14[-5];
          pfVar14 = pfVar14 + -5;
        }
        *pfVar13 = fVar2;
        pfVar13[1] = fVar5;
        pfVar13[2] = fVar6;
        pfVar13[3] = fVar7;
        pfVar13[4] = fVar21;
      }
    }
  }
  pfVar20 = *(float **)(unaff_RSI + 0xd2);
  pfVar12 = *(float **)(unaff_RSI + 0xd0);
  if (pfVar12 != pfVar20) {
    lVar10 = (longlong)pfVar20 - (longlong)pfVar12 >> 3;
    for (lVar11 = lVar10; lVar11 != 0; lVar11 = lVar11 >> 1) {
    }
    FUN_18026f6b0(pfVar12,pfVar20);
    if (lVar10 < 0x1d) {
      func_0x00018026f7f0(pfVar12,pfVar20);
    }
    else {
      pfVar14 = pfVar12 + 0x38;
      func_0x00018026f7f0(pfVar12);
      for (; pfVar14 != pfVar20; pfVar14 = pfVar14 + 2) {
        fVar22 = *pfVar14;
        pfVar12 = pfVar14 + -2;
        fVar21 = pfVar14[1];
        fVar2 = *pfVar12;
        pfVar13 = pfVar14;
        while (fVar22 < fVar2) {
          uVar3 = *(uint64_t *)pfVar12;
          pfVar12 = pfVar12 + -2;
          *(uint64_t *)pfVar13 = uVar3;
          pfVar13 = pfVar13 + -2;
          fVar2 = *pfVar12;
        }
        *pfVar13 = fVar22;
        pfVar13[1] = fVar21;
      }
    }
  }
  iVar19 = 0;
  pfVar20 = unaff_RSI;
  do {
    pfVar12 = *(float **)pfVar1;
    fVar22 = (float)iVar19 * 0.020408163;
    if (pfVar12 == *(float **)(unaff_RSI + 0xca)) {
      fStack_40 = 1.0;
      fStack_3c = 1.0;
      fStack_38 = 1.0;
    }
    else {
      lVar10 = (longlong)*(float **)(unaff_RSI + 0xca) - (longlong)pfVar12;
      iVar16 = 0;
      lVar17 = 0;
      lVar11 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0x14 + lVar11;
      pfVar14 = pfVar12;
      if (lVar10 != lVar11) {
        do {
          if (fVar22 < *pfVar12) {
            if (lVar17 != -1) {
              if (lVar17 == 0) {
                fStack_40 = pfVar14[1];
                fStack_3c = pfVar14[2];
                fStack_38 = pfVar14[3];
              }
              else {
                pfVar12 = pfVar14 + lVar17 * 5 + -5;
                pfVar14 = pfVar14 + lVar17 * 5;
                fVar21 = (fVar22 - *pfVar12) / (*pfVar14 - *pfVar12);
                fStack_40 = (pfVar14[1] - pfVar12[1]) * fVar21 + pfVar12[1];
                fStack_3c = (pfVar14[2] - pfVar12[2]) * fVar21 + pfVar12[2];
                fStack_38 = (pfVar14[3] - pfVar12[3]) * fVar21 + pfVar12[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar17 = lVar17 + 1;
          pfVar12 = pfVar12 + 5;
          pfVar14 = *(float **)pfVar1;
        } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lVar10 - lVar11));
      }
      lVar11 = *(longlong *)(unaff_RSI + 0xca);
      fStack_40 = *(float *)(lVar11 + -0x10);
      fStack_3c = *(float *)(lVar11 + -0xc);
      fStack_38 = *(float *)(lVar11 + -8);
    }
LAB_18026fabc:
    pfVar12 = *(float **)(unaff_RSI + 0xd0);
    if (pfVar12 == *(float **)(unaff_RSI + 0xd2)) {
      fVar22 = 1.0;
    }
    else {
      iVar16 = 0;
      uVar18 = (longlong)*(float **)(unaff_RSI + 0xd2) - (longlong)pfVar12 >> 3;
      lVar11 = 0;
      pfVar14 = pfVar12;
      if (uVar18 != 0) {
        do {
          if (fVar22 < *pfVar14) {
            if (lVar11 != -1) {
              if (lVar11 == 0) {
                fVar22 = pfVar12[1];
              }
              else {
                fVar22 = ((fVar22 - pfVar12[lVar11 * 2 + -2]) /
                         (pfVar12[lVar11 * 2] - pfVar12[lVar11 * 2 + -2])) *
                         (pfVar12[lVar11 * 2 + 1] - pfVar12[lVar11 * 2 + -1]) +
                         pfVar12[lVar11 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar11 = lVar11 + 1;
          pfVar14 = pfVar14 + 2;
        } while ((ulonglong)(longlong)iVar16 < uVar18);
      }
      fVar22 = *(float *)(*(longlong *)(unaff_RSI + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar19 = iVar19 + 1;
    *pfVar20 = fStack_40;
    pfVar20[1] = fStack_3c;
    pfVar20[2] = fStack_38;
    pfVar20[3] = fVar22;
    pfVar20 = pfVar20 + 4;
    if (0x31 < iVar19) {
      return;
    }
  } while( true );
}






// 函数: void FUN_18026fe7f(void)
void FUN_18026fe7f(void)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int32_t *puVar15;
  longlong unaff_RBX;
  float *unaff_RSI;
  longlong unaff_RDI;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  float *pfVar20;
  longlong unaff_R15;
  float fVar21;
  float fVar22;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000060;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  puVar15 = *(int32_t **)(unaff_RDI + 8);
  do {
    uVar4 = *puVar15;
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
    *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[1];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 2;
    *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[2];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 3;
    *(int32_t *)(lVar11 + 8 + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[3];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 4;
    *(int32_t *)(lVar11 + 0xc + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[4];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 5;
    *(int32_t *)(lVar11 + 0x10 + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[5];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 6;
    *(int32_t *)(lVar11 + 0x14 + unaff_RBX * 8) = uVar4;
    uVar4 = puVar15[6];
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    *(int32_t **)(unaff_RDI + 8) = puVar15 + 7;
    *(int32_t *)(lVar11 + 0x18 + unaff_RBX * 8) = uVar4;
    lVar11 = *(longlong *)(unaff_RSI + 0xd0);
    uVar4 = puVar15[7];
    puVar15 = puVar15 + 8;
    *(int32_t **)(unaff_RDI + 8) = puVar15;
    *(int32_t *)(lVar11 + 0x1c + unaff_RBX * 8) = uVar4;
    unaff_RBX = unaff_RBX + 4;
  } while (unaff_RBX < unaff_R15 + -3);
  if (unaff_RBX < unaff_R15) {
    puVar15 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar4 = *puVar15;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar15 + 1;
      *(int32_t *)(lVar11 + unaff_RBX * 8) = uVar4;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar4 = puVar15[1];
      puVar15 = puVar15 + 2;
      *(int32_t **)(unaff_RDI + 8) = puVar15;
      *(int32_t *)(lVar11 + 4 + unaff_RBX * 8) = uVar4;
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX < unaff_R15);
  }
  uStack0000000000000050 = in_stack_00000040;
  uStack0000000000000060 = in_stack_00000038;
  pfVar12 = *(float **)(unaff_RSI + 0xca);
  pfVar1 = unaff_RSI + 200;
  pfVar20 = *(float **)pfVar1;
  if (pfVar20 != pfVar12) {
    lVar11 = ((longlong)pfVar12 - (longlong)pfVar20) / 0x14;
    for (lVar10 = lVar11; lVar10 != 0; lVar10 = lVar10 >> 1) {
    }
    FUN_18026f230(pfVar20,pfVar12);
    if (lVar11 < 0x1d) {
      FUN_18026f390(pfVar20);
    }
    else {
      FUN_18026f390(pfVar20);
      for (pfVar20 = pfVar20 + 0x8c; pfVar20 != pfVar12; pfVar20 = pfVar20 + 5) {
        fVar2 = *pfVar20;
        fVar5 = pfVar20[1];
        fVar6 = pfVar20[2];
        fVar7 = pfVar20[3];
        fVar21 = pfVar20[4];
        fVar22 = pfVar20[-5];
        pfVar14 = pfVar20 + -5;
        pfVar13 = pfVar20;
        while (fVar2 < fVar22) {
          fVar22 = pfVar14[1];
          fVar8 = pfVar14[2];
          fVar9 = pfVar14[3];
          *pfVar13 = *pfVar14;
          pfVar13[1] = fVar22;
          pfVar13[2] = fVar8;
          pfVar13[3] = fVar9;
          pfVar13[4] = pfVar14[4];
          pfVar13 = pfVar13 + -5;
          fVar22 = pfVar14[-5];
          pfVar14 = pfVar14 + -5;
        }
        *pfVar13 = fVar2;
        pfVar13[1] = fVar5;
        pfVar13[2] = fVar6;
        pfVar13[3] = fVar7;
        pfVar13[4] = fVar21;
      }
    }
  }
  pfVar20 = *(float **)(unaff_RSI + 0xd2);
  pfVar12 = *(float **)(unaff_RSI + 0xd0);
  if (pfVar12 != pfVar20) {
    lVar10 = (longlong)pfVar20 - (longlong)pfVar12 >> 3;
    for (lVar11 = lVar10; lVar11 != 0; lVar11 = lVar11 >> 1) {
    }
    FUN_18026f6b0(pfVar12,pfVar20);
    if (lVar10 < 0x1d) {
      func_0x00018026f7f0(pfVar12,pfVar20);
    }
    else {
      pfVar14 = pfVar12 + 0x38;
      func_0x00018026f7f0(pfVar12);
      for (; pfVar14 != pfVar20; pfVar14 = pfVar14 + 2) {
        fVar22 = *pfVar14;
        pfVar12 = pfVar14 + -2;
        fVar21 = pfVar14[1];
        fVar2 = *pfVar12;
        pfVar13 = pfVar14;
        while (fVar22 < fVar2) {
          uVar3 = *(uint64_t *)pfVar12;
          pfVar12 = pfVar12 + -2;
          *(uint64_t *)pfVar13 = uVar3;
          pfVar13 = pfVar13 + -2;
          fVar2 = *pfVar12;
        }
        *pfVar13 = fVar22;
        pfVar13[1] = fVar21;
      }
    }
  }
  iVar19 = 0;
  pfVar20 = unaff_RSI;
  do {
    pfVar12 = *(float **)pfVar1;
    fVar22 = (float)iVar19 * 0.020408163;
    if (pfVar12 == *(float **)(unaff_RSI + 0xca)) {
      fStack_40 = 1.0;
      fStack_3c = 1.0;
      fStack_38 = 1.0;
    }
    else {
      lVar10 = (longlong)*(float **)(unaff_RSI + 0xca) - (longlong)pfVar12;
      iVar16 = 0;
      lVar17 = 0;
      lVar11 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0x14 + lVar11;
      pfVar14 = pfVar12;
      if (lVar10 != lVar11) {
        do {
          if (fVar22 < *pfVar12) {
            if (lVar17 != -1) {
              if (lVar17 == 0) {
                fStack_40 = pfVar14[1];
                fStack_3c = pfVar14[2];
                fStack_38 = pfVar14[3];
              }
              else {
                pfVar12 = pfVar14 + lVar17 * 5 + -5;
                pfVar14 = pfVar14 + lVar17 * 5;
                fVar21 = (fVar22 - *pfVar12) / (*pfVar14 - *pfVar12);
                fStack_40 = (pfVar14[1] - pfVar12[1]) * fVar21 + pfVar12[1];
                fStack_3c = (pfVar14[2] - pfVar12[2]) * fVar21 + pfVar12[2];
                fStack_38 = (pfVar14[3] - pfVar12[3]) * fVar21 + pfVar12[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar17 = lVar17 + 1;
          pfVar12 = pfVar12 + 5;
          pfVar14 = *(float **)pfVar1;
        } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lVar10 - lVar11));
      }
      lVar11 = *(longlong *)(unaff_RSI + 0xca);
      fStack_40 = *(float *)(lVar11 + -0x10);
      fStack_3c = *(float *)(lVar11 + -0xc);
      fStack_38 = *(float *)(lVar11 + -8);
    }
LAB_18026fabc:
    pfVar12 = *(float **)(unaff_RSI + 0xd0);
    if (pfVar12 == *(float **)(unaff_RSI + 0xd2)) {
      fVar22 = 1.0;
    }
    else {
      iVar16 = 0;
      uVar18 = (longlong)*(float **)(unaff_RSI + 0xd2) - (longlong)pfVar12 >> 3;
      lVar11 = 0;
      pfVar14 = pfVar12;
      if (uVar18 != 0) {
        do {
          if (fVar22 < *pfVar14) {
            if (lVar11 != -1) {
              if (lVar11 == 0) {
                fVar22 = pfVar12[1];
              }
              else {
                fVar22 = ((fVar22 - pfVar12[lVar11 * 2 + -2]) /
                         (pfVar12[lVar11 * 2] - pfVar12[lVar11 * 2 + -2])) *
                         (pfVar12[lVar11 * 2 + 1] - pfVar12[lVar11 * 2 + -1]) +
                         pfVar12[lVar11 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          lVar11 = lVar11 + 1;
          pfVar14 = pfVar14 + 2;
        } while ((ulonglong)(longlong)iVar16 < uVar18);
      }
      fVar22 = *(float *)(*(longlong *)(unaff_RSI + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar19 = iVar19 + 1;
    *pfVar20 = fStack_40;
    pfVar20[1] = fStack_3c;
    pfVar20[2] = fStack_38;
    pfVar20[3] = fVar22;
    pfVar20 = pfVar20 + 4;
    if (0x31 < iVar19) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026ff90(longlong *param_1,ulonglong param_2)
void FUN_18026ff90(longlong *param_1,ulonglong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  
  puVar11 = (uint64_t *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar11 >> 5)) {
    if (param_2 != 0) {
      lVar8 = (longlong)puVar11 + 0x1c;
      uVar12 = param_2;
      do {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = puVar11 + 4;
        *(uint64_t *)(lVar8 + -0x14) = 0;
        *(uint64_t *)(lVar8 + -4) = 0;
        uVar12 = uVar12 - 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar12 != 0);
      puVar11 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar11 + param_2 * 4);
    return;
  }
  lVar8 = *param_1;
  lVar5 = (longlong)puVar11 - lVar8 >> 5;
  uVar12 = lVar5 * 2;
  if (lVar5 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar5 + param_2) {
    uVar12 = lVar5 + param_2;
  }
  puVar6 = (int32_t *)0x0;
  if (uVar12 != 0) {
    puVar6 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar12 << 5,(char)param_1[3]);
    lVar8 = *param_1;
    puVar11 = (uint64_t *)param_1[1];
  }
  lVar5 = (longlong)puVar11 - lVar8 >> 5;
  puVar9 = puVar6;
  if (0 < lVar5) {
    do {
      puVar7 = (int32_t *)((lVar8 - (longlong)puVar6) + (longlong)puVar9);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      lVar5 = lVar5 + -1;
      *puVar9 = *puVar7;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      puVar11 = (uint64_t *)((lVar8 - (longlong)puVar6) + 0x10 + (longlong)puVar9);
      uVar4 = puVar11[1];
      *(uint64_t *)(puVar9 + 4) = *puVar11;
      *(uint64_t *)(puVar9 + 6) = uVar4;
      puVar9 = puVar9 + 8;
    } while (0 < lVar5);
  }
  if (param_2 != 0) {
    puVar7 = puVar9 + 7;
    uVar10 = param_2;
    do {
      *(uint64_t *)(puVar7 + -7) = 0;
      *(uint64_t *)(puVar7 + -3) = 0;
      *(uint64_t *)(puVar7 + -5) = 0;
      *(uint64_t *)(puVar7 + -1) = 0;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = (longlong)puVar6;
    param_1[2] = (longlong)(puVar6 + uVar12 * 8);
    param_1[1] = (longlong)(puVar9 + param_2 * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026ffc6(longlong param_1,longlong param_2,longlong param_3)
void FUN_18026ffc6(longlong param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong in_RAX;
  longlong lVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar6 = in_RAX >> 5;
  uVar10 = lVar6 * 2;
  if (lVar6 == 0) {
    uVar10 = 1;
  }
  if (uVar10 < (ulonglong)(lVar6 + unaff_RDI)) {
    uVar10 = lVar6 + unaff_RDI;
  }
  puVar7 = (int32_t *)0x0;
  if (uVar10 != 0) {
    puVar7 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar10 << 5,*(int8_t *)(param_1 + 0x18))
    ;
    param_3 = *unaff_RSI;
    param_2 = unaff_RSI[1];
  }
  lVar6 = param_2 - param_3 >> 5;
  puVar9 = puVar7;
  if (0 < lVar6) {
    do {
      puVar8 = (int32_t *)((param_3 - (longlong)puVar7) + (longlong)puVar9);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      lVar6 = lVar6 + -1;
      *puVar9 = *puVar8;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      puVar1 = (uint64_t *)((param_3 - (longlong)puVar7) + 0x10 + (longlong)puVar9);
      uVar5 = puVar1[1];
      *(uint64_t *)(puVar9 + 4) = *puVar1;
      *(uint64_t *)(puVar9 + 6) = uVar5;
      puVar9 = puVar9 + 8;
    } while (0 < lVar6);
  }
  if (unaff_RDI != 0) {
    puVar8 = puVar9 + 7;
    lVar6 = unaff_RDI;
    do {
      *(uint64_t *)(puVar8 + -7) = 0;
      *(uint64_t *)(puVar8 + -3) = 0;
      *(uint64_t *)(puVar8 + -5) = 0;
      *(uint64_t *)(puVar8 + -1) = 0;
      puVar8 = puVar8 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (longlong)puVar7;
    unaff_RSI[2] = (longlong)(puVar7 + uVar10 * 8);
    unaff_RSI[1] = (longlong)(puVar9 + unaff_RDI * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






