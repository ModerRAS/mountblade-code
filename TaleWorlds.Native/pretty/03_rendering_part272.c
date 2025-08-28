#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part272.c - 5 个函数

// 函数: void FUN_180419360(int64_t param_1)
void FUN_180419360(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1 + 8;
  for (lVar2 = *(int64_t *)(param_1 + 0x10); lVar2 != lVar1; lVar2 = func_0x00018066bd70(lVar2)) {
    *(uint64_t *)(lVar2 + 0x50) = *(uint64_t *)(lVar2 + 0x48);
    *(uint64_t *)(lVar2 + 0x70) = *(uint64_t *)(lVar2 + 0x68);
    FUN_180418260();
    *(uint64_t *)(lVar2 + 0x90) = *(uint64_t *)(lVar2 + 0x88);
  }
  FUN_18041b140(lVar1,*(uint64_t *)(param_1 + 0x18));
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int8_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x10) = lVar1;
  return;
}





// 函数: void FUN_1804193f0(int64_t param_1,int param_2,float param_3,uint64_t param_4,char param_5)
void FUN_1804193f0(int64_t param_1,int param_2,float param_3,uint64_t param_4,char param_5)

{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  int *piVar8;
  int64_t lVar9;
  int *piVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint uVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_c8;
  int iStack_b8;
  float fStack_b4;
  uint64_t uStack_b0;
  int iStack_a8;
  float fStack_a4;
  uint64_t uStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  
  bVar2 = false;
  uVar18 = 0;
  uVar16 = 0;
  plVar1 = (int64_t *)(param_1 + 8);
  lVar13 = *(int64_t *)(param_1 + 0x10);
  piVar10 = (int *)*plVar1;
  uVar6 = uVar18;
  uVar11 = uVar18;
  if (lVar13 - (int64_t)piVar10 >> 5 != 0) {
    do {
      if (*(int *)(uVar6 + (int64_t)piVar10) == param_2) {
        *(float *)(uVar6 + 4 + (int64_t)piVar10) = param_3;
        *(uint64_t *)(uVar6 + 8 + *plVar1) = param_4;
        bVar2 = true;
        piVar10 = (int *)*plVar1;
      }
      if (*(int *)(uVar6 + 0x10 + (int64_t)piVar10) == param_2) {
        *(float *)(uVar6 + 0x14 + (int64_t)piVar10) = param_3;
        *(uint64_t *)(uVar6 + 0x18 + *plVar1) = param_4 ^ 0x8000000080000000;
        bVar2 = true;
      }
      uVar19 = (int)uVar11 + 1;
      lVar13 = *(int64_t *)(param_1 + 0x10);
      piVar10 = (int *)*plVar1;
      uVar6 = uVar6 + 0x20;
      uVar11 = (uint64_t)uVar19;
    } while ((uint64_t)(int64_t)(int)uVar19 < (uint64_t)(lVar13 - (int64_t)piVar10 >> 5));
    if (bVar2) {
      return;
    }
  }
  lVar13 = lVar13 - (int64_t)piVar10 >> 5;
  iStack_b8 = param_2;
  fStack_b4 = param_3;
  uStack_b0 = param_4;
  fStack_a4 = param_3;
  if (lVar13 == 0) {
    uStack_a0 = param_4 ^ 0x8000000080000000;
    iStack_a8 = param_2;
    FUN_1802b6e50(plVar1,&iStack_b8);
    return;
  }
  if ((lVar13 == 1) && (iVar5 = *piVar10, iVar5 == piVar10[4])) {
    if (param_2 < iVar5) {
      iVar5 = iVar5 - param_2;
      *piVar10 = param_2;
      *(float *)(*plVar1 + 4) = param_3;
      *(uint64_t *)(*plVar1 + 8) = param_4;
    }
    else {
      iVar5 = param_2 - iVar5;
      piVar10[4] = param_2;
      *(float *)(*plVar1 + 0x14) = param_3;
      *(uint64_t *)(*plVar1 + 0x18) = param_4 ^ 0x8000000080000000;
    }
    if (param_5 == '\0') {
      return;
    }
    *(uint64_t *)(*plVar1 + 8) = (uint64_t)(uint)((float)iVar5 * 0.2);
    *(uint64_t *)(*plVar1 + 0x18) = (uint64_t)(uint)((float)iVar5 * -0.2);
    return;
  }
  iStack_a8 = *piVar10;
  if (param_2 <= iStack_a8) {
    if (param_5 != '\0') {
      uStack_b0 = (uint64_t)(uint)((float)(iStack_a8 - param_2) * 0.2);
    }
    fStack_a4 = (float)piVar10[1];
    uVar6 = *(uint64_t *)(piVar10 + 2) ^ 0x8000000080000000;
    uStack_a0 = uVar6;
    if (param_5 != '\0') {
      uStack_a0._4_4_ = (float)(uVar6 >> 0x20);
      uStack_a0._0_4_ = (float)uVar6;
      fVar21 = uStack_a0._4_4_ * uStack_a0._4_4_ + (float)uStack_a0 * (float)uStack_a0;
      auVar20 = rsqrtss(ZEXT416((uint)((float)uStack_a0 * (float)uStack_a0)),ZEXT416((uint)fVar21));
      fVar22 = auVar20._0_4_;
      uStack_a0 = (uint64_t)
                  (uint)(fVar22 * 0.5 * (3.0 - fVar21 * fVar22 * fVar22) * (float)uStack_a0 *
                        (float)(iStack_a8 - param_2) * 0.2);
    }
LAB_180419bcc:
    FUN_18041abb0(plVar1,piVar10,&iStack_b8);
    return;
  }
  lVar13 = (int64_t)(int)lVar13;
  if (piVar10[lVar13 * 8 + -4] <= param_2) {
    iStack_b8 = piVar10[lVar13 * 8 + -4];
    fStack_b4 = (float)piVar10[lVar13 * 8 + -3];
    uStack_b0 = CONCAT44(piVar10[lVar13 * 8 + -1],piVar10[lVar13 * 8 + -2]) ^ 0x8000000080000000;
    if (param_5 != '\0') {
      uStack_b0 = (uint64_t)(uint)((float)(param_2 - iStack_b8) * 0.2);
    }
    uStack_a0 = param_4 ^ 0x8000000080000000;
    if (param_5 != '\0') {
      uStack_a0 = (uint64_t)(uint)((float)(param_2 - iStack_b8) * -0.2);
    }
    piVar10 = *(int **)(param_1 + 0x10);
    iStack_a8 = param_2;
    goto LAB_180419bcc;
  }
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 5;
  FUN_18041a3e0(param_1,1000,&lStack_98);
  lVar13 = lStack_98;
  uVar6 = 0xffffffff;
  iVar5 = -1;
  piVar10 = (int *)*plVar1;
  uVar12 = *(int64_t *)(param_1 + 0x10) - (int64_t)piVar10 >> 5;
  piVar8 = piVar10;
  uVar11 = uVar18;
  if (uVar12 != 0) {
    do {
      if ((*piVar8 < param_2) && (param_2 < piVar8[4])) {
        uVar6 = uVar11;
      }
      iVar5 = (int)uVar6;
      uVar19 = (int)uVar11 + 1;
      piVar8 = piVar8 + 8;
      uVar11 = (uint64_t)uVar19;
    } while ((uint64_t)(int64_t)(int)uVar19 < uVar12);
  }
  lVar14 = (int64_t)iVar5;
  lVar15 = lVar14 * 0x20;
  iStack_a8 = piVar10[lVar14 * 8 + 4];
  iVar5 = piVar10[lVar14 * 8];
  fStack_a4 = (float)piVar10[lVar14 * 8 + 5];
  uStack_a0 = *(uint64_t *)(piVar10 + lVar14 * 8 + 6);
  piVar10[lVar14 * 8 + 4] = param_2;
  *(float *)(lVar15 + 0x14 + *plVar1) = param_3;
  uStack_c8 = param_4 ^ 0x8000000080000000;
  *(uint64_t *)(lVar15 + 0x18 + *plVar1) = uStack_c8;
  if (param_5 == '\0') goto LAB_180419ac9;
  lVar14 = *plVar1;
  fVar22 = *(float *)(lVar15 + 4 + lVar14);
  fVar21 = fStack_a4;
  if (fVar22 <= fStack_a4) {
    fVar21 = fVar22;
  }
  fVar22 = *(float *)(lVar15 + 4 + lVar14);
  fVar23 = fStack_a4;
  if (fStack_a4 <= fVar22) {
    fVar23 = fVar22;
  }
  uStack_a0._4_4_ = (float)(uStack_a0 >> 0x20);
  if ((param_3 <= fVar21) || (fVar23 <= param_3)) {
    fVar22 = (float)(param_2 - *(int *)(lVar15 + lVar14));
    *(uint64_t *)(lVar15 + 0x18 + lVar14) = (uint64_t)(uint)(fVar22 * -0.2);
    lVar14 = *plVar1;
    fVar23 = 1.0 / (float)(iStack_a8 - iVar5);
    *(float *)(lVar15 + 0xc + lVar14) = fVar23 * *(float *)(lVar15 + 0xc + lVar14);
    *(float *)(lVar15 + 8 + lVar14) = fVar23 * *(float *)(lVar15 + 8 + lVar14) * fVar22;
    *(float *)(lVar15 + 0xc + lVar14) = fVar22 * *(float *)(lVar15 + 0xc + lVar14);
    fStackX_8 = (float)(iStack_a8 - param_2);
    fStackX_c = 0.0;
    fVar21 = fVar23 * (float)uStack_a0 * fStackX_8;
    fVar22 = fVar23 * uStack_a0._4_4_ * fStackX_8;
  }
  else {
    fVar22 = (float)param_2;
    lVar9 = (lStack_90 - lStack_98) / 6 + (lStack_90 - lStack_98 >> 0x3f);
    uVar12 = (lVar9 >> 1) - (lVar9 >> 0x3f);
    uVar11 = uVar12 & 0xffffffff;
    uVar6 = uVar18;
    uVar19 = uVar16;
    if (0 < (int)uVar12) {
      do {
        iVar3 = (uint)uVar11 - (int)uVar6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        uVar19 = (iVar3 >> 1) + (int)uVar6;
        bVar2 = *(float *)(lStack_98 + (int64_t)(int)uVar19 * 0xc) < fVar22;
        uVar17 = uVar19;
        if (bVar2) {
          uVar17 = (uint)uVar11;
        }
        uVar11 = (uint64_t)uVar17;
        if (bVar2) {
          uVar6 = (uint64_t)(uVar19 + 1);
        }
        uVar19 = (uint)uVar6;
      } while ((int)uVar19 < (int)uVar17);
    }
    uVar6 = uVar12 & 0xffffffff;
    if (0 < (int)uVar12) {
      do {
        uVar17 = (uint)uVar18;
        iVar3 = (int)uVar6 - uVar17;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        uVar7 = (iVar3 >> 1) + uVar17;
        if (fVar22 < *(float *)(lStack_98 + (int64_t)(int)uVar7 * 0xc)) {
          uVar6 = (uint64_t)uVar7;
        }
        uVar16 = uVar7 + 1;
        if (fVar22 < *(float *)(lStack_98 + (int64_t)(int)uVar7 * 0xc)) {
          uVar16 = uVar17;
        }
        uVar18 = (uint64_t)uVar16;
      } while ((int)uVar16 < (int)uVar6);
    }
    uVar6 = (uint64_t)(int)uVar19;
    if (uVar6 == uVar12) {
      if (lStack_98 != lStack_90) {
        uVar4 = *(uint64_t *)(lStack_90 + -8);
        goto LAB_1804198dd;
      }
      uStack_c8._0_4_ = 3.4028235e+38;
      uStack_c8._4_4_ = 3.4028235e+38;
    }
    else {
      if (ABS(*(float *)(lStack_98 + (int64_t)(int)uVar16 * 0xc) - fVar22) <=
          ABS(*(float *)(lStack_98 + uVar6 * 0xc) - fVar22)) {
        uVar4 = *(uint64_t *)(lStack_98 + 4 + (int64_t)(int)uVar16 * 0xc);
      }
      else {
        uVar4 = *(uint64_t *)(lStack_98 + 4 + uVar6 * 0xc);
      }
LAB_1804198dd:
      uStack_c8._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
      uStack_c8._0_4_ = (float)uVar4;
    }
    fVar21 = (float)uStack_c8 * (float)uStack_c8 + uStack_c8._4_4_ * uStack_c8._4_4_;
    auVar20 = rsqrtss(ZEXT416((uint)(uStack_c8._4_4_ * uStack_c8._4_4_)),ZEXT416((uint)fVar21));
    fVar22 = auVar20._0_4_;
    fVar21 = fVar22 * 0.5 * (3.0 - fVar21 * fVar22 * fVar22);
    fStackX_8 = (float)uStack_c8 * fVar21;
    fVar21 = uStack_c8._4_4_ * fVar21;
    fVar22 = (float)(param_2 - *(int *)(lVar15 + lVar14));
    uStack_c8 = CONCAT44(fVar21 * fVar22 * -0.2,fStackX_8 * fVar22 * -0.2);
    *(uint64_t *)(lVar15 + 0x18 + lVar14) = uStack_c8;
    lVar14 = *plVar1;
    fVar23 = 1.0 / (float)(iStack_a8 - iVar5);
    *(float *)(lVar15 + 0xc + lVar14) = fVar23 * *(float *)(lVar15 + 0xc + lVar14);
    *(float *)(lVar15 + 8 + lVar14) = fVar23 * *(float *)(lVar15 + 8 + lVar14) * fVar22;
    *(float *)(lVar15 + 0xc + lVar14) = fVar22 * *(float *)(lVar15 + 0xc + lVar14);
    fVar22 = (float)(iStack_a8 - param_2);
    fStackX_c = fVar22 * fVar21 * 0.2;
    fStackX_8 = fVar22 * fStackX_8;
    fVar21 = fVar23 * (float)uStack_a0 * fVar22;
    fVar22 = fVar23 * uStack_a0._4_4_ * fVar22;
  }
  fStackX_8 = fStackX_8 * 0.2;
  uStack_b0 = CONCAT44(fStackX_c,fStackX_8);
  uStack_a0 = CONCAT44(fVar22,fVar21);
LAB_180419ac9:
  FUN_18041abb0(plVar1,*plVar1 + 0x20 + lVar15,&iStack_b8);
  if (lVar13 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar13);
}



int * FUN_180419c10(int64_t param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint64_t *puVar6;
  int iVar7;
  int *piVar8;
  int64_t lVar9;
  int *piVar10;
  int64_t lVar11;
  int *piVar12;
  int64_t lVar13;
  int64_t lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  piVar10 = *(int **)(param_1 + 8);
  if (param_2 == *piVar10) {
    piVar4 = *(int **)(param_1 + 0x10);
    if ((piVar4 <= piVar10 + 8) ||
       (lVar11 = (int64_t)piVar4 - (int64_t)(piVar10 + 8) >> 5, lVar11 < 1)) goto LAB_180419e64;
    do {
      lVar11 = lVar11 + -1;
      *(uint64_t *)piVar10 = *(uint64_t *)(piVar10 + 8);
      *(uint64_t *)(piVar10 + 2) = *(uint64_t *)(piVar10 + 10);
      *(uint64_t *)(piVar10 + 4) = *(uint64_t *)(piVar10 + 0xc);
      *(uint64_t *)(piVar10 + 6) = *(uint64_t *)(piVar10 + 0xe);
      piVar10 = piVar10 + 8;
    } while (0 < lVar11);
  }
  else {
    piVar12 = (int *)(*(int64_t *)(param_1 + 0x10) - (int64_t)piVar10 >> 5);
    piVar4 = (int *)((int64_t)(int)piVar12 * 0x20);
    if (param_2 == *(int *)((int64_t)(piVar4 + -4) + (int64_t)piVar10)) {
      piVar10 = piVar10 + ((int64_t)piVar12 + 1U) * 8;
      piVar4 = *(int **)(param_1 + 0x10);
      if ((piVar10 + 8 < piVar4) &&
         (lVar11 = (int64_t)piVar4 - (int64_t)(piVar10 + 8) >> 5, piVar12 = piVar10, 0 < lVar11))
      {
        do {
          lVar11 = lVar11 + -1;
          *(uint64_t *)piVar12 = *(uint64_t *)(piVar12 + 8);
          *(uint64_t *)(piVar12 + 2) = *(uint64_t *)(piVar12 + 10);
          *(uint64_t *)(piVar12 + 4) = *(uint64_t *)(piVar12 + 0xc);
          *(uint64_t *)(piVar12 + 6) = *(uint64_t *)(piVar12 + 0xe);
          piVar12 = piVar12 + 8;
        } while (0 < lVar11);
        piVar4 = *(int **)(param_1 + 0x10);
      }
      *(int **)(param_1 + 0x10) = piVar4 + -8;
      return piVar10;
    }
    iVar5 = 0;
    iVar3 = -1;
    iVar15 = -1;
    iVar7 = 0;
    piVar8 = piVar10;
    if (piVar12 != (int *)0x0) {
      do {
        iVar1 = iVar7;
        if (*piVar8 != param_2) {
          iVar1 = iVar15;
        }
        iVar15 = iVar1;
        iVar7 = iVar7 + 1;
        piVar4 = (int *)(int64_t)iVar7;
        piVar8 = piVar8 + 8;
      } while (piVar4 < piVar12);
      if (piVar12 != (int *)0x0) {
        piVar8 = piVar10 + 4;
        iVar7 = -1;
        do {
          iVar1 = *piVar8;
          piVar8 = piVar8 + 8;
          iVar3 = iVar5;
          if (iVar1 != param_2) {
            iVar3 = iVar7;
          }
          iVar5 = iVar5 + 1;
          piVar4 = (int *)(int64_t)iVar5;
          iVar7 = iVar3;
        } while (piVar4 < piVar12);
      }
    }
    if (iVar15 == -1) {
      return piVar4;
    }
    lVar13 = (int64_t)iVar15;
    lVar14 = lVar13 * 0x20;
    lVar11 = (int64_t)iVar3;
    lVar9 = lVar11 * 0x20;
    iVar3 = piVar10[lVar13 * 8 + 4];
    iVar15 = piVar10[lVar13 * 8];
    fVar16 = (float)piVar10[lVar11 * 8 + 5];
    iVar5 = piVar10[lVar11 * 8 + 4];
    iVar7 = piVar10[lVar11 * 8];
    fVar18 = (float)(iVar3 - piVar10[lVar11 * 8]);
    if (((float)piVar10[lVar13 * 8 + 5] <= fVar16) ||
       (fVar16 < (float)piVar10[lVar11 * 8 + 1] || fVar16 == (float)piVar10[lVar11 * 8 + 1])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    piVar10[lVar11 * 8 + 4] = iVar3;
    *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x14 + lVar9) =
         *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x14 + lVar14);
    *(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x18 + lVar9) =
         *(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x18 + lVar14);
    lVar11 = *(int64_t *)(param_1 + 8);
    if (bVar2) {
      fVar16 = 1.0 / (float)(iVar5 - iVar7);
      fVar17 = 1.0 / (float)(iVar3 - iVar15);
      *(float *)(lVar9 + 0xc + lVar11) = fVar16 * *(float *)(lVar9 + 0xc + lVar11);
      *(float *)(lVar9 + 0xc + lVar11) = fVar18 * *(float *)(lVar9 + 0xc + lVar11);
      *(float *)(lVar9 + 8 + lVar11) = fVar16 * *(float *)(lVar9 + 8 + lVar11) * fVar18;
      *(float *)(lVar9 + 0x1c + lVar11) = fVar17 * *(float *)(lVar9 + 0x1c + lVar11);
      *(float *)(lVar9 + 0x18 + lVar11) = fVar17 * *(float *)(lVar9 + 0x18 + lVar11) * fVar18;
      *(float *)(lVar9 + 0x1c + lVar11) = fVar18 * *(float *)(lVar9 + 0x1c + lVar11);
    }
    puVar6 = (uint64_t *)(lVar11 + lVar14);
    piVar4 = *(int **)(param_1 + 0x10);
    if ((piVar4 <= puVar6 + 4) ||
       (lVar11 = (int64_t)piVar4 - (int64_t)(puVar6 + 4) >> 5, lVar11 < 1)) goto LAB_180419e64;
    do {
      lVar11 = lVar11 + -1;
      *puVar6 = puVar6[4];
      puVar6[1] = puVar6[5];
      puVar6[2] = puVar6[6];
      puVar6[3] = puVar6[7];
      puVar6 = puVar6 + 4;
    } while (0 < lVar11);
  }
  piVar4 = *(int **)(param_1 + 0x10);
LAB_180419e64:
  *(int **)(param_1 + 0x10) = piVar4 + -8;
  return piVar4 + -8;
}





// 函数: void FUN_180419c81(int param_1,int param_2,int *param_3,uint64_t param_4)
void FUN_180419c81(int param_1,int param_2,int *param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t unaff_RSI;
  int unaff_EDI;
  int64_t lVar10;
  int64_t lVar11;
  int in_R10D;
  int iVar12;
  int in_R11D;
  float fVar13;
  float fVar14;
  float fVar15;
  
  piVar7 = param_3;
  do {
    iVar12 = *piVar7;
    piVar7 = piVar7 + 8;
    iVar4 = param_2;
    if (iVar12 != unaff_EDI) {
      iVar4 = in_R11D;
    }
    param_2 = param_2 + 1;
    in_R11D = iVar4;
  } while ((uint64_t)(int64_t)param_2 < param_4);
  if (param_4 != 0) {
    piVar7 = param_3 + 4;
    iVar12 = in_R10D;
    do {
      iVar1 = *piVar7;
      piVar7 = piVar7 + 8;
      in_R10D = param_1;
      if (iVar1 != unaff_EDI) {
        in_R10D = iVar12;
      }
      param_1 = param_1 + 1;
      iVar12 = in_R10D;
    } while ((uint64_t)(int64_t)param_1 < param_4);
  }
  if (iVar4 != -1) {
    lVar10 = (int64_t)iVar4;
    lVar11 = lVar10 * 0x20;
    lVar8 = (int64_t)in_R10D;
    lVar9 = lVar8 * 0x20;
    iVar12 = param_3[lVar10 * 8 + 4];
    iVar4 = param_3[lVar10 * 8];
    fVar13 = (float)param_3[lVar8 * 8 + 5];
    iVar1 = param_3[lVar8 * 8 + 4];
    iVar2 = param_3[lVar8 * 8];
    fVar15 = (float)(iVar12 - param_3[lVar8 * 8]);
    if (((float)param_3[lVar10 * 8 + 5] <= fVar13) ||
       (fVar13 < (float)param_3[lVar8 * 8 + 1] || fVar13 == (float)param_3[lVar8 * 8 + 1])) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    param_3[lVar8 * 8 + 4] = iVar12;
    *(int32_t *)(*(int64_t *)(unaff_RSI + 8) + 0x14 + lVar9) =
         *(int32_t *)(*(int64_t *)(unaff_RSI + 8) + 0x14 + lVar11);
    *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 0x18 + lVar9) =
         *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 0x18 + lVar11);
    lVar8 = *(int64_t *)(unaff_RSI + 8);
    if (bVar3) {
      fVar13 = 1.0 / (float)(iVar1 - iVar2);
      fVar14 = 1.0 / (float)(iVar12 - iVar4);
      *(float *)(lVar9 + 0xc + lVar8) = fVar13 * *(float *)(lVar9 + 0xc + lVar8);
      *(float *)(lVar9 + 0xc + lVar8) = fVar15 * *(float *)(lVar9 + 0xc + lVar8);
      *(float *)(lVar9 + 8 + lVar8) = fVar13 * *(float *)(lVar9 + 8 + lVar8) * fVar15;
      *(float *)(lVar9 + 0x1c + lVar8) = fVar14 * *(float *)(lVar9 + 0x1c + lVar8);
      *(float *)(lVar9 + 0x18 + lVar8) = fVar14 * *(float *)(lVar9 + 0x18 + lVar8) * fVar15;
      *(float *)(lVar9 + 0x1c + lVar8) = fVar15 * *(float *)(lVar9 + 0x1c + lVar8);
    }
    puVar6 = (uint64_t *)(lVar8 + lVar11);
    puVar5 = *(uint64_t **)(unaff_RSI + 0x10);
    if ((puVar6 + 4 < puVar5) && (lVar8 = (int64_t)puVar5 - (int64_t)(puVar6 + 4) >> 5, 0 < lVar8)
       ) {
      do {
        lVar8 = lVar8 + -1;
        *puVar6 = puVar6[4];
        puVar6[1] = puVar6[5];
        puVar6[2] = puVar6[6];
        puVar6[3] = puVar6[7];
        puVar6 = puVar6 + 4;
      } while (0 < lVar8);
      puVar5 = *(uint64_t **)(unaff_RSI + 0x10);
    }
    *(uint64_t **)(unaff_RSI + 0x10) = puVar5 + -4;
  }
  return;
}





// 函数: void FUN_180419cb3(int param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_180419cb3(int param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  bool bVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int *piVar10;
  int64_t lVar11;
  int64_t unaff_RSI;
  int unaff_EDI;
  int64_t lVar12;
  int in_R10D;
  int in_R11D;
  float fVar13;
  float fVar14;
  float fVar15;
  
  piVar10 = (int *)(param_3 + 0x10);
  do {
    iVar2 = *piVar10;
    piVar10 = piVar10 + 8;
    iVar7 = param_1;
    if (iVar2 != unaff_EDI) {
      iVar7 = in_R10D;
    }
    param_1 = param_1 + 1;
    in_R10D = iVar7;
  } while ((uint64_t)(int64_t)param_1 < param_4);
  if (in_R11D != -1) {
    lVar12 = (int64_t)in_R11D * 0x20;
    lVar11 = (int64_t)iVar7 * 0x20;
    iVar2 = *(int *)(param_3 + 0x10 + lVar12);
    iVar7 = *(int *)(param_3 + lVar12);
    fVar13 = *(float *)(param_3 + 0x14 + lVar11);
    iVar3 = *(int *)(param_3 + 0x10 + lVar11);
    iVar4 = *(int *)(param_3 + lVar11);
    fVar15 = (float)(iVar2 - *(int *)(param_3 + lVar11));
    if ((*(float *)(param_3 + 0x14 + lVar12) <= fVar13) ||
       (pfVar1 = (float *)(param_3 + 4 + lVar11), fVar13 < *pfVar1 || fVar13 == *pfVar1)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    *(int *)(param_3 + 0x10 + lVar11) = iVar2;
    *(int32_t *)(*(int64_t *)(unaff_RSI + 8) + 0x14 + lVar11) =
         *(int32_t *)(*(int64_t *)(unaff_RSI + 8) + 0x14 + lVar12);
    *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 0x18 + lVar11) =
         *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 0x18 + lVar12);
    lVar5 = *(int64_t *)(unaff_RSI + 8);
    if (bVar6) {
      fVar13 = 1.0 / (float)(iVar3 - iVar4);
      fVar14 = 1.0 / (float)(iVar2 - iVar7);
      *(float *)(lVar11 + 0xc + lVar5) = fVar13 * *(float *)(lVar11 + 0xc + lVar5);
      *(float *)(lVar11 + 0xc + lVar5) = fVar15 * *(float *)(lVar11 + 0xc + lVar5);
      *(float *)(lVar11 + 8 + lVar5) = fVar13 * *(float *)(lVar11 + 8 + lVar5) * fVar15;
      *(float *)(lVar11 + 0x1c + lVar5) = fVar14 * *(float *)(lVar11 + 0x1c + lVar5);
      *(float *)(lVar11 + 0x18 + lVar5) = fVar14 * *(float *)(lVar11 + 0x18 + lVar5) * fVar15;
      *(float *)(lVar11 + 0x1c + lVar5) = fVar15 * *(float *)(lVar11 + 0x1c + lVar5);
    }
    puVar9 = (uint64_t *)(lVar5 + lVar12);
    puVar8 = *(uint64_t **)(unaff_RSI + 0x10);
    if ((puVar9 + 4 < puVar8) &&
       (lVar11 = (int64_t)puVar8 - (int64_t)(puVar9 + 4) >> 5, 0 < lVar11)) {
      do {
        lVar11 = lVar11 + -1;
        *puVar9 = puVar9[4];
        puVar9[1] = puVar9[5];
        puVar9[2] = puVar9[6];
        puVar9[3] = puVar9[7];
        puVar9 = puVar9 + 4;
      } while (0 < lVar11);
      puVar8 = *(uint64_t **)(unaff_RSI + 0x10);
    }
    *(uint64_t **)(unaff_RSI + 0x10) = puVar8 + -4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180419ec0(int64_t param_1,uint param_2,int64_t *param_3)
void FUN_180419ec0(int64_t param_1,uint param_2,int64_t *param_3)

{
  float fVar1;
  uint64_t uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStackX_10;
  
  lVar6 = *(int64_t *)(param_1 + 0x10);
  lVar10 = *(int64_t *)(param_1 + 8);
  pfVar4 = (float *)*param_3;
  pfVar8 = (float *)0x0;
  uVar12 = 0;
  param_3[1] = (int64_t)pfVar4;
  uVar11 = (lVar6 - lVar10 >> 5) * (uint64_t)param_2 + 1;
  pfVar9 = pfVar4;
  pfVar3 = pfVar4;
  if ((uint64_t)(param_3[2] - (int64_t)pfVar4 >> 3) < uVar11) {
    pfVar7 = pfVar4;
    pfVar3 = pfVar8;
    if (uVar11 != 0) {
      pfVar3 = (float *)FUN_18062b420(system_memory_pool_ptr,uVar11 * 8,(char)param_3[3]);
      pfVar4 = (float *)param_3[1];
      pfVar7 = (float *)*param_3;
    }
    pfVar9 = pfVar3;
    if (pfVar7 != pfVar4) {
      do {
        uVar2 = *(uint64_t *)pfVar7;
        pfVar7 = pfVar7 + 2;
        *(uint64_t *)pfVar9 = uVar2;
        pfVar9 = pfVar9 + 2;
      } while (pfVar7 != pfVar4);
      pfVar7 = (float *)*param_3;
    }
    if (pfVar7 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[2] = (int64_t)(pfVar3 + uVar11 * 2);
    *param_3 = (int64_t)pfVar3;
    param_3[1] = (int64_t)pfVar9;
  }
  lVar6 = *(int64_t *)(param_1 + 8);
  iStackX_10 = 0;
  pfVar4 = pfVar8;
  if (*(int64_t *)(param_1 + 0x10) - lVar6 >> 5 != 0) {
    do {
      fVar18 = 0.0;
      do {
        fVar19 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        fVar1 = *(float *)(lVar6 + 0x14 + (int64_t)pfVar4);
        fVar13 = 1.0 - fVar18;
        fVar15 = (float)*(int *)(lVar6 + 0x10 + (int64_t)pfVar4);
        fVar17 = fVar13 * fVar13 * fVar13;
        fVar14 = fVar13 * 3.0 * fVar13 * fVar18;
        fVar16 = fVar13 * 3.0 * fVar18 * fVar18;
        fVar13 = fVar18 * fVar18 * fVar18;
        fVar15 = ((float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 *(float *)(lVar6 + 8 + (int64_t)pfVar4)) * fVar14 +
                 fVar17 * (float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 (fVar15 + *(float *)(lVar6 + 0x18 + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar15;
        fVar19 = (fVar19 + *(float *)(lVar6 + 0xc + (int64_t)pfVar4)) * fVar14 + fVar17 * fVar19 +
                 (fVar1 + *(float *)(lVar6 + 0x1c + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar1;
        if (pfVar9 < (float *)param_3[2]) {
          param_3[1] = (int64_t)(pfVar9 + 2);
          *pfVar9 = fVar15;
          pfVar9[1] = fVar19;
          pfVar9 = (float *)param_3[1];
          pfVar3 = (float *)*param_3;
        }
        else {
          pfVar7 = (float *)*param_3;
          lVar10 = (int64_t)pfVar9 - (int64_t)pfVar7 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_18041a160:
            pfVar5 = (float *)FUN_18062b420(system_memory_pool_ptr,lVar10 * 8,(char)param_3[3]);
            pfVar9 = (float *)param_3[1];
            pfVar7 = (float *)*param_3;
            pfVar3 = pfVar5;
          }
          else {
            lVar10 = lVar10 * 2;
            pfVar5 = pfVar8;
            pfVar3 = pfVar8;
            if (lVar10 != 0) goto LAB_18041a160;
          }
          for (; pfVar7 != pfVar9; pfVar7 = pfVar7 + 2) {
            *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
            pfVar5 = pfVar5 + 2;
          }
          pfVar9 = pfVar5 + 2;
          *pfVar5 = fVar15;
          pfVar5[1] = fVar19;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_3 = (int64_t)pfVar3;
          param_3[2] = (int64_t)(pfVar3 + lVar10 * 2);
          param_3[1] = (int64_t)pfVar9;
        }
        fVar18 = fVar18 + 1.0 / (float)param_2;
      } while (fVar18 <= 1.0);
      iStackX_10 = iStackX_10 + 1;
      lVar6 = *(int64_t *)(param_1 + 8);
      pfVar4 = pfVar4 + 8;
    } while ((uint64_t)(int64_t)iStackX_10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar6 >> 5));
  }
  if (pfVar3 != pfVar9) {
    lVar10 = (int64_t)pfVar9 - (int64_t)pfVar3 >> 3;
    for (lVar6 = lVar10; lVar6 != 0; lVar6 = lVar6 >> 1) {
      uVar12 = (int)pfVar8 + 1;
      pfVar8 = (float *)(uint64_t)uVar12;
    }
    FUN_18041b560(pfVar3,pfVar9,(int64_t)(int)(uVar12 - 1) * 2,0);
    if (lVar10 < 0x1d) {
      func_0x00018041b3e0(pfVar3,pfVar9);
    }
    else {
      pfVar4 = pfVar3 + 0x38;
      func_0x00018041b3e0(pfVar3,pfVar4);
      if (pfVar4 != pfVar9) {
        pfVar3 = pfVar4 + -2;
        do {
          fVar18 = pfVar3[2];
          fVar19 = *pfVar3;
          fVar1 = pfVar3[3];
          pfVar8 = pfVar4;
          if (fVar18 < fVar19) {
            do {
              *pfVar8 = fVar19;
              pfVar8[1] = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4) + 4);
              pfVar8 = pfVar8 + -2;
              fVar19 = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4));
            } while (fVar18 < fVar19);
          }
          pfVar4 = pfVar4 + 2;
          *pfVar8 = fVar18;
          pfVar3 = pfVar3 + 2;
          pfVar8[1] = fVar1;
        } while (pfVar4 != pfVar9);
      }
    }
  }
  pfVar9 = (float *)param_3[1];
  pfVar4 = (float *)*param_3;
  if ((pfVar4 != pfVar9) && (pfVar4 + 2 != pfVar9)) {
    pfVar3 = pfVar4 + 2;
    fVar18 = *pfVar4;
    do {
      pfVar8 = pfVar3;
      if (fVar18 == *pfVar8) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar9) {
          while (pfVar4 = pfVar4 + 2, pfVar4 != pfVar9) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[2] = *pfVar4;
              pfVar3[3] = pfVar4[1];
              pfVar3 = pfVar3 + 2;
            }
          }
          pfVar9 = pfVar3 + 2;
        }
        break;
      }
      pfVar3 = pfVar8 + 2;
      pfVar4 = pfVar8;
      fVar18 = *pfVar8;
    } while (pfVar8 + 2 != pfVar9);
  }
  pfVar4 = (float *)param_3[1];
  if (pfVar9 != pfVar4) {
    param_3[1] = (int64_t)pfVar4 - ((int64_t)pfVar4 - (int64_t)pfVar9 & 0xfffffffffffffff8U);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



