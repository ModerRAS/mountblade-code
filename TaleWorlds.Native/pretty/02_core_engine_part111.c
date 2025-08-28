/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part111.c - 4 个函数

// 函数: void FUN_180126d80(void)
void FUN_180126d80(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar3 = *(int64_t *)(lVar3 + 0x1af8);
  piVar1 = (int *)(*(int64_t *)(lVar3 + 0x2e8) + 0x60);
  *piVar1 = *piVar1 + -1;
  SystemCore_ErrorHandler();
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar3 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar3 + 0x2e8) + 0x60) * 0x10);
  uVar4 = puVar2[1];
  *(uint64_t *)(lVar3 + 0x228) = *puVar2;
  *(uint64_t *)(lVar3 + 0x230) = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126e40(void)
void FUN_180126e40(void)

{
  float *pfVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  int32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStackX_8;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0)) {
    lVar10 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0) + -1;
    plVar12 = (int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + 8 + lVar10 * 0x30);
    do {
      lVar8 = *plVar12;
      if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0xc) & 0x8000000) != 0)) goto LAB_180126e9d;
      plVar12 = plVar12 + -6;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  lVar8 = 0;
LAB_180126e9d:
  lVar10 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1ce0);
  if ((lVar8 != 0) || (lVar10 != 0)) {
    iVar13 = 0;
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68)) {
      lVar14 = 0;
      do {
        lVar2 = *(int64_t *)(lVar14 + *(int64_t *)(lVar4 + 0x1c70));
        if ((((lVar8 == 0) || (lVar2 != *(int64_t *)(lVar8 + 0x28))) &&
            ((*(int64_t *)(lVar4 + 0x1ce8) == 0 ||
             (lVar2 != *(int64_t *)(*(int64_t *)(lVar4 + 0x1ce8) + 0x28))))) &&
           ((*(int64_t *)(lVar4 + 0x1ce0) == 0 ||
            (lVar2 != *(int64_t *)(*(int64_t *)(lVar4 + 0x1ce0) + 0x28))))) {
          uVar7 = FUN_1801247c0(lVar2);
          lVar9 = 0x3a0;
          if (lVar8 != 0) {
            lVar9 = 0x3b0;
          }
          pfVar1 = (float *)(lVar9 + 0x1628 + SYSTEM_DATA_MANAGER_A);
          fStack_c8 = *pfVar1;
          fStack_c4 = pfVar1[1];
          fStack_c0 = pfVar1[2];
          fStack_bc = pfVar1[3] * *(float *)(lVar4 + 0x1dc8) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
          fStackX_8 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 8);
          fStackX_c = *(float *)(lVar2 + 0xc) + *(float *)(lVar2 + 0x14);
          uVar5 = func_0x000180121e20(&fStack_c8);
          MathInterpolationCalculator0(uVar7,lVar2 + 8,&fStackX_8,uVar5,0,0xf);
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 8;
      } while (iVar13 < *(int *)(lVar4 + 0x1c68));
    }
    if (lVar10 != 0) {
      lVar10 = *(int64_t *)(lVar4 + 0x1ce0);
      lVar8 = *(int64_t *)(lVar10 + 0x3a0);
      iVar13 = *(int *)(lVar8 + 0x188) + -1;
      if (-1 < iVar13) {
        plVar12 = (int64_t *)(*(int64_t *)(lVar8 + 400) + (int64_t)iVar13 * 8);
        lVar14 = (int64_t)iVar13;
        do {
          if ((*(char *)(*plVar12 + 0xaf) != '\0') && (*(char *)(*plVar12 + 0xb6) == '\0')) {
            lVar8 = func_0x000180126de0(*(uint64_t *)
                                         (*(int64_t *)(lVar8 + 400) + (int64_t)iVar13 * 8));
            break;
          }
          iVar13 = iVar13 + -1;
          plVar12 = plVar12 + -1;
          bVar3 = 0 < lVar14;
          lVar14 = lVar14 + -1;
        } while (bVar3);
      }
      lVar8 = *(int64_t *)(lVar8 + 0x2e8);
      FUN_180291b40(lVar8,*(uint64_t *)(*(int64_t *)(lVar8 + 0x38) + 0x18),
                    *(uint64_t *)(*(int64_t *)(lVar8 + 0x38) + 0x20),0);
      lVar14 = *(int64_t *)(lVar10 + 0x3a8);
      if (((*(byte *)(lVar14 + 0x432) & 1) != 0) &&
         (lVar2 = *(int64_t *)(lVar10 + 0x3a0), lVar2 != lVar14)) {
        fStack_a8 = *(float *)(lVar14 + 0x40);
        fStack_c8 = *(float *)(lVar2 + 0x40);
        fStack_c4 = *(float *)(lVar2 + 0x44);
        fStack_b8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
        fStack_b4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
        fStack_b0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
        fStack_c0 = *(float *)(lVar2 + 0x40) + *(float *)(lVar2 + 0x48);
        fStack_bc = *(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x4c);
        fStack_ac = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4) *
                    *(float *)(lVar4 + 0x1dc8) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        fStack_a4 = *(float *)(lVar14 + 0x44);
        fStack_9c = fStack_a4 + *(float *)(lVar14 + 0x4c);
        fStack_a0 = fStack_a8 + *(float *)(lVar14 + 0x48);
        uVar5 = func_0x000180121e20(&fStack_b8);
        FUN_180298890(lVar8,&fStack_c8,&fStack_a8,uVar5,*(int32_t *)(lVar4 + 0x1634));
      }
      fVar18 = *(float *)(lVar4 + 0x19f8);
      lVar14 = *(int64_t *)(lVar10 + 0x28);
      fVar21 = *(float *)(lVar10 + 0x40) - fVar18;
      fVar20 = *(float *)(lVar10 + 0x44) - fVar18;
      fVar23 = *(float *)(lVar4 + 0x1634);
      if (*(float *)(lVar4 + 0x1634) <= *(float *)(lVar10 + 0x78)) {
        fVar23 = *(float *)(lVar10 + 0x78);
      }
      fVar19 = *(float *)(lVar10 + 0x40) + *(float *)(lVar10 + 0x48) + fVar18;
      fVar17 = *(float *)(lVar10 + 0x44) + *(float *)(lVar10 + 0x4c) + fVar18;
      if ((((fVar21 <= *(float *)(lVar14 + 8)) && (fVar20 <= *(float *)(lVar14 + 0xc))) &&
          (*(float *)(lVar14 + 8) + *(float *)(lVar14 + 0x10) <= fVar19)) &&
         (*(float *)(lVar14 + 0xc) + *(float *)(lVar14 + 0x14) <= fVar17)) {
        fVar23 = *(float *)(lVar10 + 0x78);
        fVar18 = -fVar18 - 1.0;
        fVar21 = fVar21 - fVar18;
        fVar20 = fVar20 - fVar18;
        fVar19 = fVar18 + fVar19;
        fVar17 = fVar18 + fVar17;
      }
      fStack_b8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
      fStack_b4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
      fStack_b0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
      fStack_ac = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
      fVar18 = *(float *)(lVar4 + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fStack_ac;
      if (0.0 <= fStack_b8) {
        fVar22 = fStack_b8;
        if (1.0 <= fStack_b8) {
          fVar22 = 1.0;
        }
      }
      else {
        fVar22 = 0.0;
      }
      if (0.0 <= fStack_b4) {
        fVar15 = fStack_b4;
        if (1.0 <= fStack_b4) {
          fVar15 = 1.0;
        }
      }
      else {
        fVar15 = 0.0;
      }
      if (0.0 <= fStack_b0) {
        fVar16 = fStack_b0;
        if (1.0 <= fStack_b0) {
          fVar16 = 1.0;
        }
      }
      else {
        fVar16 = 0.0;
      }
      uVar11 = (int)(fVar22 * 255.0 + 0.5) | (int)(fVar15 * 255.0 + 0.5) << 8 |
               (int)(fVar16 * 255.0 + 0.5) << 0x10;
      fVar22 = 0.0;
      if ((0.0 <= fVar18) && (fVar22 = fVar18, 1.0 <= fVar18)) {
        fVar22 = 1.0;
      }
      uVar6 = (int)(fVar22 * 255.0 + 0.5) << 0x18;
      if ((uVar11 & 0xff000000) != 0 || uVar6 != 0) {
        fStackX_10 = fVar21 + 0.5;
        fStackX_14 = fVar20 + 0.5;
        if ((*(byte *)(lVar8 + 0x30) & 1) == 0) {
          fStackX_8 = fVar19 - 0.49;
          fStackX_c = fVar17 - 0.49;
        }
        else {
          fStackX_8 = fVar19 - 0.5;
          fStackX_c = fVar17 - 0.5;
        }
        UtilitiesSystem_LogManager(lVar8,&fStackX_10,&fStackX_8,fVar23,0xffffffff);
        RenderingSystem_LightManager(lVar8,*(uint64_t *)(lVar8 + 0x88),*(int32_t *)(lVar8 + 0x80),
                      uVar11 | uVar6,1,0x40400000);
        *(int32_t *)(lVar8 + 0x80) = 0;
      }
      *(int *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x60) + -1;
      SystemCore_ErrorHandler(lVar8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126eb2(void)
void FUN_180126eb2(void)

{
  float *pfVar1;
  int32_t *puVar2;
  byte bVar3;
  int64_t lVar4;
  bool bVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar15;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int iVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  iVar16 = 0;
  if (0 < *(int *)(unaff_RDI + 0x1c68)) {
    lVar17 = 0;
    do {
      lVar12 = *(int64_t *)(lVar17 + *(int64_t *)(unaff_RDI + 0x1c70));
      if ((((unaff_RBX == 0) || (lVar12 != *(int64_t *)(unaff_RBX + 0x28))) &&
          ((*(int64_t *)(unaff_RDI + 0x1ce8) == 0 ||
           (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce8) + 0x28))))) &&
         ((*(int64_t *)(unaff_RDI + 0x1ce0) == 0 ||
          (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce0) + 0x28))))) {
        uVar11 = FUN_1801247c0(lVar12);
        fVar22 = *(float *)(unaff_RDI + 0x1dc8);
        lVar13 = 0x3a0;
        if (unaff_RBX != 0) {
          lVar13 = 0x3b0;
        }
        fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        puVar2 = (int32_t *)(lVar13 + 0x1628 + SYSTEM_DATA_MANAGER_A);
        uVar9 = puVar2[1];
        uVar6 = puVar2[2];
        fVar21 = (float)puVar2[3];
        *(int32_t *)(unaff_RBP + -0x69) = *puVar2;
        *(int32_t *)(unaff_RBP + -0x65) = uVar9;
        *(int32_t *)(unaff_RBP + -0x61) = uVar6;
        *(float *)(unaff_RBP + -0x5d) = fVar21;
        fVar25 = *(float *)(lVar12 + 0x10);
        fVar27 = *(float *)(lVar12 + 8);
        *(float *)(unaff_RBP + -0x5d) = fVar21 * fVar22 * fVar19;
        fVar22 = *(float *)(lVar12 + 0xc);
        fVar19 = *(float *)(lVar12 + 0x14);
        *(float *)(unaff_RBP + 0x67) = fVar25 + fVar27;
        *(float *)(unaff_RBP + 0x6b) = fVar22 + fVar19;
        uVar9 = func_0x000180121e20(unaff_RBP + -0x69);
        MathInterpolationCalculator0(uVar11,lVar12 + 8,unaff_RBP + 0x67,uVar9,0);
      }
      iVar16 = iVar16 + 1;
      lVar17 = lVar17 + 8;
    } while (iVar16 < *(int *)(unaff_RDI + 0x1c68));
  }
  if (unaff_R12 != 0) {
    lVar17 = *(int64_t *)(unaff_RDI + 0x1ce0);
    lVar12 = *(int64_t *)(lVar17 + 0x3a0);
    iVar16 = *(int *)(lVar12 + 0x188) + -1;
    if (-1 < iVar16) {
      plVar14 = (int64_t *)(*(int64_t *)(lVar12 + 400) + (int64_t)iVar16 * 8);
      lVar13 = (int64_t)iVar16;
      do {
        if ((*(char *)(*plVar14 + 0xaf) != '\0') && (*(char *)(*plVar14 + 0xb6) == '\0')) {
          lVar12 = func_0x000180126de0(*(uint64_t *)
                                        (*(int64_t *)(lVar12 + 400) + (int64_t)iVar16 * 8));
          break;
        }
        iVar16 = iVar16 + -1;
        plVar14 = plVar14 + -1;
        bVar5 = 0 < lVar13;
        lVar13 = lVar13 + -1;
      } while (bVar5);
    }
    lVar12 = *(int64_t *)(lVar12 + 0x2e8);
    FUN_180291b40(lVar12,*(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x20),0);
    lVar13 = *(int64_t *)(lVar17 + 0x3a8);
    if (((*(byte *)(lVar13 + 0x432) & 1) != 0) &&
       (lVar4 = *(int64_t *)(lVar17 + 0x3a0), lVar4 != lVar13)) {
      fVar22 = *(float *)(lVar13 + 0x40);
      fVar19 = *(float *)(unaff_RDI + 0x1dc8);
      pfVar1 = (float *)(lVar4 + 0x40);
      fVar18 = *pfVar1;
      uVar8 = *(int32_t *)(lVar4 + 0x44);
      fVar23 = *pfVar1;
      uVar7 = *(int32_t *)(lVar4 + 0x44);
      uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
      uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
      fVar21 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4);
      fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      fVar24 = *pfVar1 + *(float *)(lVar4 + 0x48);
      fVar26 = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x4c);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
      *(int32_t *)(unaff_RBP + -0x55) = uVar9;
      *(int32_t *)(unaff_RBP + -0x51) = uVar6;
      *(float *)(unaff_RBP + -0x4d) = fVar21;
      fVar27 = *(float *)(lVar13 + 0x44);
      fVar20 = fVar27 + *(float *)(lVar13 + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = fVar21 * fVar19 * fVar25;
      fVar19 = fVar22 + *(float *)(lVar13 + 0x48);
      *(float *)(unaff_RBP + -0x69) = fVar22;
      *(float *)(unaff_RBP + -0x65) = fVar27;
      *(float *)(unaff_RBP + -0x61) = fVar19;
      *(float *)(unaff_RBP + -0x5d) = fVar20;
      *(float *)(unaff_RBP + -0x69) = fVar23;
      *(int32_t *)(unaff_RBP + -0x65) = uVar7;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x69) = fVar18;
      *(int32_t *)(unaff_RBP + -0x65) = uVar8;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x49) = fVar22;
      *(float *)(unaff_RBP + -0x45) = fVar27;
      *(float *)(unaff_RBP + -0x41) = fVar19;
      *(float *)(unaff_RBP + -0x3d) = fVar20;
      uVar9 = func_0x000180121e20(unaff_RBP + -0x59);
      FUN_180298890(lVar12,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar9,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    fVar22 = *(float *)(unaff_RDI + 0x19f8);
    lVar13 = *(int64_t *)(lVar17 + 0x28);
    fVar27 = *(float *)(lVar17 + 0x40) - fVar22;
    fVar25 = *(float *)(lVar17 + 0x44) - fVar22;
    fVar19 = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(lVar17 + 0x78)) {
      fVar19 = *(float *)(lVar17 + 0x78);
    }
    fVar23 = *(float *)(lVar17 + 0x40) + *(float *)(lVar17 + 0x48) + fVar22;
    fVar21 = *(float *)(lVar17 + 0x44) + *(float *)(lVar17 + 0x4c) + fVar22;
    if ((((fVar27 <= *(float *)(lVar13 + 8)) && (fVar25 <= *(float *)(lVar13 + 0xc))) &&
        (*(float *)(lVar13 + 8) + *(float *)(lVar13 + 0x10) <= fVar23)) &&
       (*(float *)(lVar13 + 0xc) + *(float *)(lVar13 + 0x14) <= fVar21)) {
      fVar19 = *(float *)(lVar17 + 0x78);
      fVar22 = -fVar22 - 1.0;
      fVar27 = fVar27 - fVar22;
      fVar25 = fVar25 - fVar22;
      fVar23 = fVar22 + fVar23;
      fVar21 = fVar22 + fVar21;
    }
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
    uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
    fVar18 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
    fVar20 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar18;
    *(float *)(unaff_RBP + -0x59) = fVar22;
    *(int32_t *)(unaff_RBP + -0x55) = uVar9;
    *(int32_t *)(unaff_RBP + -0x51) = uVar6;
    *(float *)(unaff_RBP + -0x4d) = fVar18;
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    fVar18 = *(float *)(unaff_RBP + -0x55);
    if (0.0 <= fVar18) {
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
    }
    else {
      fVar18 = 0.0;
    }
    fVar24 = *(float *)(unaff_RBP + -0x51);
    if (0.0 <= fVar24) {
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
    }
    else {
      fVar24 = 0.0;
    }
    uVar15 = (int)(fVar22 * 255.0 + 0.5) | (int)(fVar18 * 255.0 + 0.5) << 8 |
             (int)(fVar24 * 255.0 + 0.5) << 0x10;
    fVar22 = 0.0;
    if ((0.0 <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
      fVar22 = 1.0;
    }
    uVar10 = (int)(fVar22 * 255.0 + 0.5) << 0x18;
    if ((uVar15 & 0xff000000) != 0 || uVar10 != 0) {
      bVar3 = *(byte *)(lVar12 + 0x30);
      *(float *)(unaff_RBP + 0x6f) = fVar27 + 0.5;
      *(float *)(unaff_RBP + 0x73) = fVar25 + 0.5;
      if ((bVar3 & 1) == 0) {
        fVar23 = fVar23 - 0.49;
        fVar21 = fVar21 - 0.49;
      }
      else {
        fVar23 = fVar23 - 0.5;
        fVar21 = fVar21 - 0.5;
      }
      *(float *)(unaff_RBP + 0x67) = fVar23;
      *(float *)(unaff_RBP + 0x6b) = fVar21;
      UtilitiesSystem_LogManager(lVar12,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar19,0xffffffff);
      RenderingSystem_LightManager(lVar12,*(uint64_t *)(lVar12 + 0x88),*(int32_t *)(lVar12 + 0x80),
                    uVar15 | uVar10,1);
      *(int32_t *)(lVar12 + 0x80) = 0;
    }
    *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
    SystemCore_ErrorHandler(lVar12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126eba(void)
void FUN_180126eba(void)

{
  float *pfVar1;
  int32_t *puVar2;
  byte bVar3;
  int64_t lVar4;
  bool bVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar15;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int iVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  iVar16 = 0;
  if (0 < *(int *)(unaff_RDI + 0x1c68)) {
    lVar17 = 0;
    do {
      lVar12 = *(int64_t *)(lVar17 + *(int64_t *)(unaff_RDI + 0x1c70));
      if ((((unaff_RBX == 0) || (lVar12 != *(int64_t *)(unaff_RBX + 0x28))) &&
          ((*(int64_t *)(unaff_RDI + 0x1ce8) == 0 ||
           (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce8) + 0x28))))) &&
         ((*(int64_t *)(unaff_RDI + 0x1ce0) == 0 ||
          (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce0) + 0x28))))) {
        uVar11 = FUN_1801247c0(lVar12);
        fVar22 = *(float *)(unaff_RDI + 0x1dc8);
        lVar13 = 0x3a0;
        if (unaff_RBX != 0) {
          lVar13 = 0x3b0;
        }
        fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        puVar2 = (int32_t *)(lVar13 + 0x1628 + SYSTEM_DATA_MANAGER_A);
        uVar9 = puVar2[1];
        uVar6 = puVar2[2];
        fVar21 = (float)puVar2[3];
        *(int32_t *)(unaff_RBP + -0x69) = *puVar2;
        *(int32_t *)(unaff_RBP + -0x65) = uVar9;
        *(int32_t *)(unaff_RBP + -0x61) = uVar6;
        *(float *)(unaff_RBP + -0x5d) = fVar21;
        fVar25 = *(float *)(lVar12 + 0x10);
        fVar27 = *(float *)(lVar12 + 8);
        *(float *)(unaff_RBP + -0x5d) = fVar21 * fVar22 * fVar19;
        fVar22 = *(float *)(lVar12 + 0xc);
        fVar19 = *(float *)(lVar12 + 0x14);
        *(float *)(unaff_RBP + 0x67) = fVar25 + fVar27;
        *(float *)(unaff_RBP + 0x6b) = fVar22 + fVar19;
        uVar9 = func_0x000180121e20(unaff_RBP + -0x69);
        MathInterpolationCalculator0(uVar11,lVar12 + 8,unaff_RBP + 0x67,uVar9,0);
      }
      iVar16 = iVar16 + 1;
      lVar17 = lVar17 + 8;
    } while (iVar16 < *(int *)(unaff_RDI + 0x1c68));
  }
  if (unaff_R12 != 0) {
    lVar17 = *(int64_t *)(unaff_RDI + 0x1ce0);
    lVar12 = *(int64_t *)(lVar17 + 0x3a0);
    iVar16 = *(int *)(lVar12 + 0x188) + -1;
    if (-1 < iVar16) {
      plVar14 = (int64_t *)(*(int64_t *)(lVar12 + 400) + (int64_t)iVar16 * 8);
      lVar13 = (int64_t)iVar16;
      do {
        if ((*(char *)(*plVar14 + 0xaf) != '\0') && (*(char *)(*plVar14 + 0xb6) == '\0')) {
          lVar12 = func_0x000180126de0(*(uint64_t *)
                                        (*(int64_t *)(lVar12 + 400) + (int64_t)iVar16 * 8));
          break;
        }
        iVar16 = iVar16 + -1;
        plVar14 = plVar14 + -1;
        bVar5 = 0 < lVar13;
        lVar13 = lVar13 + -1;
      } while (bVar5);
    }
    lVar12 = *(int64_t *)(lVar12 + 0x2e8);
    FUN_180291b40(lVar12,*(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x20),0);
    lVar13 = *(int64_t *)(lVar17 + 0x3a8);
    if (((*(byte *)(lVar13 + 0x432) & 1) != 0) &&
       (lVar4 = *(int64_t *)(lVar17 + 0x3a0), lVar4 != lVar13)) {
      fVar22 = *(float *)(lVar13 + 0x40);
      fVar19 = *(float *)(unaff_RDI + 0x1dc8);
      pfVar1 = (float *)(lVar4 + 0x40);
      fVar18 = *pfVar1;
      uVar8 = *(int32_t *)(lVar4 + 0x44);
      fVar23 = *pfVar1;
      uVar7 = *(int32_t *)(lVar4 + 0x44);
      uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
      uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
      fVar21 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4);
      fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      fVar24 = *pfVar1 + *(float *)(lVar4 + 0x48);
      fVar26 = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x4c);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
      *(int32_t *)(unaff_RBP + -0x55) = uVar9;
      *(int32_t *)(unaff_RBP + -0x51) = uVar6;
      *(float *)(unaff_RBP + -0x4d) = fVar21;
      fVar27 = *(float *)(lVar13 + 0x44);
      fVar20 = fVar27 + *(float *)(lVar13 + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = fVar21 * fVar19 * fVar25;
      fVar19 = fVar22 + *(float *)(lVar13 + 0x48);
      *(float *)(unaff_RBP + -0x69) = fVar22;
      *(float *)(unaff_RBP + -0x65) = fVar27;
      *(float *)(unaff_RBP + -0x61) = fVar19;
      *(float *)(unaff_RBP + -0x5d) = fVar20;
      *(float *)(unaff_RBP + -0x69) = fVar23;
      *(int32_t *)(unaff_RBP + -0x65) = uVar7;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x69) = fVar18;
      *(int32_t *)(unaff_RBP + -0x65) = uVar8;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x49) = fVar22;
      *(float *)(unaff_RBP + -0x45) = fVar27;
      *(float *)(unaff_RBP + -0x41) = fVar19;
      *(float *)(unaff_RBP + -0x3d) = fVar20;
      uVar9 = func_0x000180121e20(unaff_RBP + -0x59);
      FUN_180298890(lVar12,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar9,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    fVar22 = *(float *)(unaff_RDI + 0x19f8);
    lVar13 = *(int64_t *)(lVar17 + 0x28);
    fVar27 = *(float *)(lVar17 + 0x40) - fVar22;
    fVar25 = *(float *)(lVar17 + 0x44) - fVar22;
    fVar19 = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(lVar17 + 0x78)) {
      fVar19 = *(float *)(lVar17 + 0x78);
    }
    fVar23 = *(float *)(lVar17 + 0x40) + *(float *)(lVar17 + 0x48) + fVar22;
    fVar21 = *(float *)(lVar17 + 0x44) + *(float *)(lVar17 + 0x4c) + fVar22;
    if ((((fVar27 <= *(float *)(lVar13 + 8)) && (fVar25 <= *(float *)(lVar13 + 0xc))) &&
        (*(float *)(lVar13 + 8) + *(float *)(lVar13 + 0x10) <= fVar23)) &&
       (*(float *)(lVar13 + 0xc) + *(float *)(lVar13 + 0x14) <= fVar21)) {
      fVar19 = *(float *)(lVar17 + 0x78);
      fVar22 = -fVar22 - 1.0;
      fVar27 = fVar27 - fVar22;
      fVar25 = fVar25 - fVar22;
      fVar23 = fVar22 + fVar23;
      fVar21 = fVar22 + fVar21;
    }
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
    uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
    fVar18 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
    fVar20 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar18;
    *(float *)(unaff_RBP + -0x59) = fVar22;
    *(int32_t *)(unaff_RBP + -0x55) = uVar9;
    *(int32_t *)(unaff_RBP + -0x51) = uVar6;
    *(float *)(unaff_RBP + -0x4d) = fVar18;
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    fVar18 = *(float *)(unaff_RBP + -0x55);
    if (0.0 <= fVar18) {
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
    }
    else {
      fVar18 = 0.0;
    }
    fVar24 = *(float *)(unaff_RBP + -0x51);
    if (0.0 <= fVar24) {
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
    }
    else {
      fVar24 = 0.0;
    }
    uVar15 = (int)(fVar22 * 255.0 + 0.5) | (int)(fVar18 * 255.0 + 0.5) << 8 |
             (int)(fVar24 * 255.0 + 0.5) << 0x10;
    fVar22 = 0.0;
    if ((0.0 <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
      fVar22 = 1.0;
    }
    uVar10 = (int)(fVar22 * 255.0 + 0.5) << 0x18;
    if ((uVar15 & 0xff000000) != 0 || uVar10 != 0) {
      bVar3 = *(byte *)(lVar12 + 0x30);
      *(float *)(unaff_RBP + 0x6f) = fVar27 + 0.5;
      *(float *)(unaff_RBP + 0x73) = fVar25 + 0.5;
      if ((bVar3 & 1) == 0) {
        fVar23 = fVar23 - 0.49;
        fVar21 = fVar21 - 0.49;
      }
      else {
        fVar23 = fVar23 - 0.5;
        fVar21 = fVar21 - 0.5;
      }
      *(float *)(unaff_RBP + 0x67) = fVar23;
      *(float *)(unaff_RBP + 0x6b) = fVar21;
      UtilitiesSystem_LogManager(lVar12,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar19,0xffffffff);
      RenderingSystem_LightManager(lVar12,*(uint64_t *)(lVar12 + 0x88),*(int32_t *)(lVar12 + 0x80),
                    uVar15 | uVar10,1);
      *(int32_t *)(lVar12 + 0x80) = 0;
    }
    *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
    SystemCore_ErrorHandler(lVar12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



