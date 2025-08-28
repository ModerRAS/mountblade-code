#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part098.c - 5 个函数

// 函数: void FUN_18011b260(int *param_1)
void FUN_18011b260(int *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  uint64_t uVar16;
  int *piVar17;
  float *pfVar18;
  int *piVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int *piVar22;
  uint64_t uVar23;
  int iVar24;
  int *piVar25;
  uint64_t uVar26;
  uint uVar27;
  int *piVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uStackX_8;
  int64_t lStackX_20;
  int8_t auStack_88 [72];
  
  lVar13 = SYSTEM_DATA_MANAGER_A;
  iVar14 = *param_1;
  piVar22 = (int *)0x0;
  iVar24 = 0;
  *(int8_t *)(param_1 + 0x16) = 0;
  piVar19 = piVar22;
  piVar25 = piVar22;
  piVar31 = piVar22;
  piVar17 = piVar22;
  piVar28 = piVar22;
  piVar30 = piVar22;
  if (0 < iVar14) {
    do {
      lVar21 = *(int64_t *)(param_1 + 2);
      if (*(int *)((int64_t)piVar19 + lVar21 + 0x10) < param_1[9]) {
        if (*(int *)((int64_t)piVar19 + lVar21) == param_1[5]) {
          param_1[5] = 0;
        }
      }
      else {
        if (piVar31 != piVar17) {
          puVar1 = (int32_t *)((int64_t)piVar19 + lVar21);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar3 = (uint64_t *)((int64_t)piVar19 + lVar21 + 0x10);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar16 = *(uint64_t *)((int64_t)piVar19 + lVar21 + 0x20);
          puVar2 = (int32_t *)((int64_t)piVar25 + lVar21);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar3 = (uint64_t *)((int64_t)piVar25 + lVar21 + 0x10);
          *puVar3 = uVar7;
          puVar3[1] = uVar8;
          *(uint64_t *)((int64_t)piVar25 + lVar21 + 0x20) = uVar16;
        }
        piVar30 = (int *)(uint64_t)((int)piVar30 + 1);
        piVar31 = (int *)((int64_t)piVar31 + 1);
        piVar25 = piVar25 + 10;
      }
      iVar24 = (int)piVar30;
      iVar14 = *param_1;
      uVar27 = (int)piVar28 + 1;
      piVar19 = piVar19 + 10;
      piVar17 = (int *)((int64_t)piVar17 + 1);
      piVar28 = (int *)(uint64_t)uVar27;
    } while ((int)uVar27 < iVar14);
  }
  if (iVar14 != iVar24) {
    iVar14 = param_1[1];
    if (iVar14 < iVar24) {
      if (iVar14 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar14 / 2 + iVar14;
      }
      iVar15 = iVar24;
      if (iVar24 < iVar14) {
        iVar15 = iVar14;
      }
      FUN_18011db30(param_1,iVar15);
    }
    *param_1 = iVar24;
    iVar14 = iVar24;
  }
  uVar27 = param_1[6];
  uStackX_8 = 0;
  piVar19 = piVar22;
  if (uVar27 != 0) {
    iVar14 = *param_1;
    piVar19 = (int *)(uint64_t)uVar27;
    param_1[5] = uVar27;
    param_1[6] = 0;
    uStackX_8 = uVar27;
  }
  if (param_1[0x14] != 0) {
    if (0 < iVar14) {
      piVar25 = *(int **)(param_1 + 2);
      piVar31 = piVar22;
      piVar17 = piVar25;
      do {
        if (*piVar17 == param_1[0x14]) {
          piVar31 = piVar25 + (int64_t)(int)piVar31 * 10;
          if (piVar31 != (int *)0x0) {
            iVar24 = (int)(((int64_t)piVar31 - (int64_t)piVar25) / 0x28) + param_1[0x15];
            if ((-1 < iVar24) && (iVar24 < iVar14)) {
              uVar7 = *(uint64_t *)piVar31;
              uVar8 = *(uint64_t *)(piVar31 + 2);
              lVar21 = (int64_t)iVar24;
              uVar9 = *(uint64_t *)(piVar31 + 4);
              uVar10 = *(uint64_t *)(piVar31 + 6);
              uVar16 = *(uint64_t *)(piVar31 + 8);
              uVar11 = *(uint64_t *)(piVar25 + lVar21 * 10 + 2);
              *(uint64_t *)piVar31 = *(uint64_t *)(piVar25 + lVar21 * 10);
              *(uint64_t *)(piVar31 + 2) = uVar11;
              uVar11 = *(uint64_t *)(piVar25 + lVar21 * 10 + 4 + 2);
              *(uint64_t *)(piVar31 + 4) = *(uint64_t *)(piVar25 + lVar21 * 10 + 4);
              *(uint64_t *)(piVar31 + 6) = uVar11;
              *(uint64_t *)(piVar31 + 8) = *(uint64_t *)(piVar25 + lVar21 * 10 + 8);
              *(uint64_t *)(piVar25 + lVar21 * 10) = uVar7;
              *(uint64_t *)(piVar25 + lVar21 * 10 + 2) = uVar8;
              *(uint64_t *)(piVar25 + lVar21 * 10 + 4) = uVar9;
              *(uint64_t *)(piVar25 + lVar21 * 10 + 4 + 2) = uVar10;
              *(uint64_t *)(piVar25 + lVar21 * 10 + 8) = uVar16;
              if (piVar25[lVar21 * 10] == param_1[5]) {
                piVar19 = (int *)(uint64_t)(uint)piVar25[lVar21 * 10];
              }
              uStackX_8 = (uint)piVar19;
            }
            if (((param_1[0x13] & 0x800000U) != 0) && (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0))
            {
              *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
            }
          }
          break;
        }
        iVar14 = *param_1;
        uVar27 = (int)piVar31 + 1;
        piVar31 = (int *)(uint64_t)uVar27;
        piVar17 = piVar17 + 10;
      } while ((int)uVar27 < iVar14);
    }
    iVar14 = *param_1;
    param_1[0x14] = 0;
  }
  iVar24 = *(int *)(lVar13 + 0x1e9c);
  if (iVar24 < iVar14) {
    if (iVar24 == 0) {
      iVar15 = 8;
    }
    else {
      iVar15 = iVar24 / 2 + iVar24;
    }
    iVar29 = iVar14;
    if (iVar14 < iVar15) {
      iVar29 = iVar15;
    }
    if (iVar24 < iVar29) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar16 = func_0x000180120ce0((int64_t)iVar29 << 3,SYSTEM_DATA_MANAGER_B);
      if (*(int64_t *)(lVar13 + 0x1ea0) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar16,*(int64_t *)(lVar13 + 0x1ea0),(int64_t)*(int *)(lVar13 + 0x1e98) << 3);
      }
      *(uint64_t *)(lVar13 + 0x1ea0) = uVar16;
      *(int *)(lVar13 + 0x1e9c) = iVar29;
    }
  }
  *(int *)(lVar13 + 0x1e98) = iVar14;
  bVar12 = false;
  iVar14 = *param_1;
  fVar35 = 0.0;
  iVar24 = 1;
  if (0 < iVar14) {
    lStackX_20 = 0;
    piVar19 = piVar22;
    piVar25 = piVar22;
    bVar12 = false;
    do {
      piVar31 = (int *)(*(int64_t *)(param_1 + 2) + lStackX_20);
      if ((piVar22 == (int *)0x0) || (piVar22[5] < piVar31[5])) {
        piVar22 = piVar31;
      }
      puVar3 = *(uint64_t **)(piVar31 + 2);
      if (*piVar31 == param_1[5]) {
        bVar12 = true;
      }
      if (puVar3 != (uint64_t *)0x0) {
        piVar17 = (int *)FUN_18011ce30(auStack_88,*puVar3,*(int8_t *)((int64_t)puVar3 + 0xb7));
        piVar31[8] = *piVar17;
      }
      iVar15 = (int)piVar19;
      if (iVar15 < 1) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = *(float *)(lVar13 + 0x1674);
      }
      lStackX_20 = lStackX_20 + 0x28;
      fVar33 = (float)piVar31[8];
      *(int *)(*(int64_t *)(lVar13 + 0x1ea0) + (int64_t)piVar25) = iVar15;
      piVar19 = (int *)(uint64_t)(iVar15 + 1U);
      fVar35 = fVar35 + fVar32 + fVar33;
      *(int *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + (int64_t)piVar25) = piVar31[8];
      piVar25 = piVar25 + 2;
      iVar14 = *param_1;
    } while ((int)(iVar15 + 1U) < iVar14);
    piVar19 = (int *)(uint64_t)uStackX_8;
  }
  iVar15 = (int)piVar19;
  uVar23 = 0;
  if (fVar35 <= (float)param_1[0xc] - (float)param_1[10]) {
    fVar35 = 0.0;
  }
  else {
    fVar35 = fVar35 - ((float)param_1[0xc] - (float)param_1[10]);
  }
  if ((fVar35 <= 0.0) || ((*(byte *)(param_1 + 0x13) & 0x40) == 0)) {
    fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 20.0;
    if (0 < iVar14) {
      pfVar18 = (float *)(*(int64_t *)(param_1 + 2) + 0x1c);
      uVar20 = uVar23;
      do {
        fVar32 = pfVar18[1];
        if (fVar35 <= pfVar18[1]) {
          fVar32 = fVar35;
        }
        uVar27 = (int)uVar20 + 1;
        uVar20 = (uint64_t)uVar27;
        *pfVar18 = fVar32;
        iVar14 = *param_1;
        pfVar18 = pfVar18 + 10;
      } while ((int)uVar27 < iVar14);
    }
  }
  else {
    if (1 < iVar14) {
      qsort(*(uint64_t *)(lVar13 + 0x1ea0),(int64_t)*(int *)(lVar13 + 0x1e98),8,&processed_var_9728_ptr);
    }
    lVar21 = 1;
    do {
      iVar14 = *param_1;
      if (iVar14 <= iVar24) goto LAB_18011b77c;
      fVar32 = *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4);
      do {
        fVar33 = *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + lVar21 * 8);
        if (fVar32 != fVar33) {
          if (iVar24 < iVar14) {
            fVar32 = fVar32 - fVar33;
            goto LAB_18011b6bd;
          }
          break;
        }
        iVar24 = iVar24 + 1;
        lVar21 = lVar21 + 1;
      } while (iVar24 < iVar14);
      fVar32 = fVar32 - 1.0;
LAB_18011b6bd:
      fVar33 = fVar35 / (float)iVar24;
      if (fVar32 <= fVar33) {
        fVar33 = fVar32;
      }
      uVar20 = uVar23;
      if (3 < lVar21) {
        do {
          *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + uVar20 * 8) =
               *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + uVar20 * 8) - fVar33;
          *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0xc + uVar20 * 8) =
               *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0xc + uVar20 * 8) - fVar33;
          *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0x14 + uVar20 * 8) =
               *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0x14 + uVar20 * 8) - fVar33;
          *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0x1c + uVar20 * 8) =
               *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 0x1c + uVar20 * 8) - fVar33;
          uVar20 = uVar20 + 4;
        } while ((int64_t)uVar20 < lVar21 + -3);
      }
      for (; (int64_t)uVar20 < lVar21; uVar20 = uVar20 + 1) {
        *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + uVar20 * 8) =
             *(float *)(*(int64_t *)(lVar13 + 0x1ea0) + 4 + uVar20 * 8) - fVar33;
      }
      fVar35 = fVar35 - (float)iVar24 * fVar33;
    } while (0.0 < fVar35);
    iVar14 = *param_1;
LAB_18011b77c:
    uVar20 = uVar23;
    uVar26 = uVar23;
    if (0 < iVar14) {
      do {
        uVar27 = (int)uVar26 + 1;
        *(float *)(*(int64_t *)(param_1 + 2) + 0x1c +
                  (int64_t)*(int *)(uVar20 + *(int64_t *)(lVar13 + 0x1ea0)) * 0x28) =
             (float)(int)*(float *)(uVar20 + 4 + *(int64_t *)(lVar13 + 0x1ea0));
        iVar14 = *param_1;
        uVar20 = uVar20 + 8;
        uVar26 = (uint64_t)uVar27;
      } while ((int)uVar27 < iVar14);
    }
  }
  fVar35 = 0.0;
  uVar20 = uVar23;
  uVar26 = uVar23;
  if (0 < iVar14) {
    do {
      lVar21 = *(int64_t *)(param_1 + 2);
      *(float *)(uVar20 + 0x18 + lVar21) = fVar35;
      if (((int)piVar19 == 0) && (*(uint *)(lVar13 + 0x1cb8) == *(uint *)(uVar20 + lVar21))) {
        piVar19 = (int *)(uint64_t)*(uint *)(uVar20 + lVar21);
      }
      iVar15 = (int)piVar19;
      uVar27 = (int)uVar26 + 1;
      fVar35 = fVar35 + *(float *)(uVar20 + 0x1c + lVar21) + *(float *)(lVar13 + 0x1674);
      uVar20 = uVar20 + 0x28;
      uVar26 = (uint64_t)uVar27;
    } while ((int)uVar27 < *param_1);
  }
  fVar35 = fVar35 - *(float *)(lVar13 + 0x1674);
  param_1[0x10] = 0;
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  param_1[0xf] = (int)fVar35;
  if (((param_1[0x13] & 0x100008U) == 0x100000) &&
     (piVar19 = (int *)FUN_18011c120(param_1), piVar19 != (int *)0x0)) {
    iVar15 = *piVar19;
    param_1[5] = iVar15;
  }
  if (((((float)param_1[0xc] - (float)param_1[10] < (float)param_1[0xf]) && (1 < *param_1)) &&
      ((param_1[0x13] & 0x10U) == 0)) &&
     (((char)param_1[0x13] < '\0' &&
      (piVar19 = (int *)FUN_18011bd30(param_1), piVar19 != (int *)0x0)))) {
    iVar15 = *piVar19;
    param_1[5] = iVar15;
  }
  if (bVar12) {
    iVar14 = param_1[5];
  }
  else {
    param_1[5] = 0;
    iVar14 = 0;
  }
  if (((iVar14 == 0) && (iVar14 = 0, param_1[6] == 0)) && (piVar22 != (int *)0x0)) {
    iVar14 = *piVar22;
    param_1[5] = iVar14;
    iVar15 = iVar14;
  }
  param_1[7] = iVar14;
  *(int8_t *)((int64_t)param_1 + 0x59) = 0;
  lVar21 = *(int64_t *)(lVar13 + 0x1cd8);
  if (((lVar21 != 0) && (*(int64_t *)(lVar21 + 0x408) != 0)) &&
     (*(int **)(*(int64_t *)(lVar21 + 0x408) + 0x30) == param_1)) {
    iVar15 = *(int *)(lVar21 + 8);
    param_1[7] = iVar15;
  }
  if ((iVar15 != 0) && (iVar14 = *param_1, 0 < iVar14)) {
    piVar19 = *(int **)(param_1 + 2);
    do {
      iVar24 = (int)uVar23;
      if (*piVar19 == iVar15) {
        piVar19 = *(int **)(param_1 + 2) + (int64_t)iVar24 * 10;
        if (piVar19 != (int *)0x0) {
          fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
          iVar24 = (int)(((int64_t)iVar24 * 0x28) / 0x28);
          if (iVar24 < 1) {
            fVar32 = 0.0;
          }
          else {
            fVar32 = -fVar35;
          }
          fVar32 = (float)piVar19[6] + fVar32;
          if (iVar14 <= iVar24 + 1) {
            fVar35 = 1.0;
          }
          fVar35 = (float)piVar19[6] + (float)piVar19[7] + fVar35;
          fVar33 = (float)param_1[0x12];
          if (fVar32 < (float)param_1[0x12]) {
            param_1[0x12] = (int)fVar32;
            fVar33 = fVar32;
          }
          if (((float)param_1[0xc] - (float)param_1[10]) + fVar33 < fVar35) {
            param_1[0x12] = (int)(fVar35 - ((float)param_1[0xc] - (float)param_1[10]));
          }
        }
        break;
      }
      uVar23 = (uint64_t)(iVar24 + 1U);
      piVar19 = piVar19 + 10;
    } while ((int)(iVar24 + 1U) < iVar14);
  }
  fVar35 = (float)param_1[0xf] - ((float)param_1[0xc] - (float)param_1[10]);
  if ((float)param_1[0x11] <= fVar35) {
    fVar35 = (float)param_1[0x11];
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  param_1[0x11] = (int)fVar35;
  fVar32 = (float)param_1[0xf] - ((float)param_1[0xc] - (float)param_1[10]);
  if ((float)param_1[0x12] <= fVar32) {
    fVar32 = (float)param_1[0x12];
  }
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  param_1[0x12] = (int)fVar32;
  if (param_1[9] + 1 < *(int *)(lVar13 + 0x1a90)) {
    fVar33 = 3.4028235e+38;
  }
  else {
    fVar33 = *(float *)(lVar13 + 0x19f8) * *(float *)(lVar13 + 0x18) * 70.0;
  }
  if (fVar35 != fVar32) {
    if (fVar32 <= fVar35) {
      fVar34 = fVar35;
      if ((fVar32 < fVar35) && (fVar34 = fVar35 - fVar33, fVar35 - fVar33 <= fVar32)) {
        fVar34 = fVar32;
      }
    }
    else {
      fVar34 = fVar35 + fVar33;
      if (fVar32 <= fVar35 + fVar33) {
        fVar34 = fVar32;
      }
    }
    param_1[0x11] = (int)fVar34;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011bac0(int64_t param_1,byte *param_2)
void FUN_18011bac0(int64_t param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  if ((*(uint *)(param_1 + 0x4c) & 0x100000) == 0) {
    iVar5 = FUN_180121250(param_2,0,
                          *(int32_t *)
                           (*(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x220) + -4 +
                           (int64_t)*(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218) * 4));
    if (*(int *)(lVar3 + 0x1b2c) == iVar5) {
      *(int *)(lVar3 + 0x1b34) = iVar5;
    }
    if (*(int *)(lVar3 + 0x1b30) == iVar5) {
      *(int8_t *)(lVar3 + 0x1b3f) = 1;
    }
  }
  else {
    uVar4 = 0xffffffff;
    bVar1 = *param_2;
    pbVar2 = param_2 + 1;
    while (bVar1 != 0) {
      if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
        uVar4 = 0xffffffff;
      }
      uVar4 = *(uint *)(&processed_var_6320_ptr + ((uint64_t)(uVar4 & 0xff) ^ (uint64_t)bVar1) * 4) ^
              uVar4 >> 8;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    uVar4 = ~uVar4;
    if (*(uint *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == uVar4) {
      *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = uVar4;
    }
    if (*(uint *)(lVar3 + 0x1b30) == uVar4) {
      *(int8_t *)(lVar3 + 0x1b3f) = 1;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011bb4f(void)
void FUN_18011bb4f(void)

{
  int64_t lVar1;
  int iVar2;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  iVar2 = FUN_180121250();
  if (*(int *)(lVar1 + 0x1b2c) == iVar2) {
    *(int *)(lVar1 + 0x1b34) = iVar2;
  }
  if (*(int *)(lVar1 + 0x1b30) == iVar2) {
    *(int8_t *)(lVar1 + 0x1b3f) = 1;
  }
  return;
}





// 函数: void FUN_18011bba1(void)
void FUN_18011bba1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011bbb0(int *param_1,int32_t param_2,int64_t param_3)
void FUN_18011bbb0(int *param_1,int32_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int iStack_28;
  uint uStack_14;
  
  uVar2 = *(int32_t *)(param_3 + 8);
  iStack_28 = param_1[8];
  if (iStack_28 == -1) {
    iStack_28 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1a90) + -1;
  }
  iVar6 = *param_1;
  iVar5 = param_1[1];
  if (iVar6 == iVar5) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar4 = iVar6 + 1;
    if (iVar6 + 1 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_18011db30(param_1,iVar4);
    iVar6 = *param_1;
  }
  lVar7 = (int64_t)iVar6;
  lVar3 = *(int64_t *)(param_1 + 2);
  puVar1 = (uint64_t *)(lVar3 + lVar7 * 0x28);
  *puVar1 = CONCAT44(param_2,uVar2);
  puVar1[1] = param_3;
  puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar7 * 0x28);
  *puVar1 = CONCAT44(0xffffffff,iStack_28);
  puVar1[1] = 0;
  *(uint64_t *)(lVar3 + 0x20 + lVar7 * 0x28) = (uint64_t)uStack_14 << 0x20;
  *param_1 = *param_1 + 1;
  return;
}





