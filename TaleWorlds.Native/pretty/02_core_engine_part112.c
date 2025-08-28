/* 函数别名定义: MathInterpolationCalculator */
#define CoreEngine_ThreadManager CoreEngine_ThreadManager
#define CoreEngine_PerformanceOptimizer CoreEngine_PerformanceOptimizer
#define CoreEngine_NetworkManager CoreEngine_NetworkManager
#define CoreEngine_ResourceLoader CoreEngine_ResourceLoader
#define CoreEngine_MemoryAllocator CoreEngine_MemoryAllocator
#define CoreEngine_DataValidator CoreEngine_DataValidator
#define CoreEngine_AIController CoreEngine_AIController
#define MathInterpolationCalculator MathInterpolationCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part112.c - 4 个函数
// 函数: void CoreEngine_PerformanceOptimizer(void)
void CoreEngine_PerformanceOptimizer(void)
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
  int iVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar16;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int unaff_R14D;
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
  float unaff_XMM8_Da;
  lVar17 = 0;
  do {
    lVar12 = *(int64_t *)(lVar17 + *(int64_t *)(unaff_RDI + 0x1c70));
    if ((((unaff_RBX == 0) || (lVar12 != *(int64_t *)(unaff_RBX + 0x28))) &&
        ((*(int64_t *)(unaff_RDI + 0x1ce8) == 0 ||
         (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce8) + 0x28))))) &&
       ((*(int64_t *)(unaff_RDI + 0x1ce0) == 0 ||
        (lVar12 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce0) + 0x28))))) {
      uVar11 = CoreEngine_DataValidator(lVar12);
      fVar22 = *(float *)(unaff_RDI + 0x1dc8);
      lVar14 = 0x3a0;
      if (unaff_RBX != 0) {
        lVar14 = 0x3b0;
      }
      fVar18 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      puVar2 = (int32_t *)(lVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      uVar9 = puVar2[1];
      uVar6 = puVar2[2];
      fVar21 = (float)puVar2[3];
      *(int32_t *)(unaff_RBP + -0x69) = *puVar2;
      *(int32_t *)(unaff_RBP + -0x65) = uVar9;
      *(int32_t *)(unaff_RBP + -0x61) = uVar6;
      *(float *)(unaff_RBP + -0x5d) = fVar21;
      fVar25 = *(float *)(lVar12 + 0x10);
      fVar27 = *(float *)(lVar12 + 8);
      *(float *)(unaff_RBP + -0x5d) = fVar21 * fVar22 * fVar18;
      fVar22 = *(float *)(lVar12 + 0xc);
      fVar18 = *(float *)(lVar12 + 0x14);
      *(float *)(unaff_RBP + 0x67) = fVar25 + fVar27;
      *(float *)(unaff_RBP + 0x6b) = fVar22 + fVar18;
      uVar9 = Function_56da4ab5(unaff_RBP + -0x69);
      MathInterpolationCalculator0(uVar11,lVar12 + 8,unaff_RBP + 0x67,uVar9);
    }
    unaff_R14D = unaff_R14D + 1;
    lVar17 = lVar17 + 8;
  } while (unaff_R14D < *(int *)(unaff_RDI + 0x1c68));
  if (unaff_R12 != 0) {
    lVar17 = *(int64_t *)(unaff_RDI + 0x1ce0);
    lVar12 = *(int64_t *)(lVar17 + 0x3a0);
    iVar13 = *(int *)(lVar12 + 0x188) + -1;
    if (-1 < iVar13) {
      plVar15 = (int64_t *)(*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8);
      lVar14 = (int64_t)iVar13;
      do {
        if ((*(char *)(*plVar15 + 0xaf) != '\0') && (*(char *)(*plVar15 + 0xb6) == '\0')) {
          lVar12 = Function_1c5a575a(*(uint64_t *)
                                        (*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8));
          break;
        }
        iVar13 = iVar13 + -1;
        plVar15 = plVar15 + -1;
        bVar5 = 0 < lVar14;
        lVar14 = lVar14 + -1;
      } while (bVar5);
    }
    lVar12 = *(int64_t *)(lVar12 + 0x2e8);
    CoreEngine_AIController(lVar12,*(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x20),0);
    lVar14 = *(int64_t *)(lVar17 + 0x3a8);
    if (((*(byte *)(lVar14 + 0x432) & 1) != 0) &&
       (lVar4 = *(int64_t *)(lVar17 + 0x3a0), lVar4 != lVar14)) {
      fVar22 = *(float *)(lVar14 + 0x40);
      fVar18 = *(float *)(unaff_RDI + 0x1dc8);
      pfVar1 = (float *)(lVar4 + 0x40);
      fVar19 = *pfVar1;
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
      fVar27 = *(float *)(lVar14 + 0x44);
      fVar20 = fVar27 + *(float *)(lVar14 + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = fVar21 * fVar18 * fVar25;
      fVar18 = fVar22 + *(float *)(lVar14 + 0x48);
      *(float *)(unaff_RBP + -0x69) = fVar22;
      *(float *)(unaff_RBP + -0x65) = fVar27;
      *(float *)(unaff_RBP + -0x61) = fVar18;
      *(float *)(unaff_RBP + -0x5d) = fVar20;
      *(float *)(unaff_RBP + -0x69) = fVar23;
      *(int32_t *)(unaff_RBP + -0x65) = uVar7;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x69) = fVar19;
      *(int32_t *)(unaff_RBP + -0x65) = uVar8;
      *(float *)(unaff_RBP + -0x61) = fVar24;
      *(float *)(unaff_RBP + -0x5d) = fVar26;
      *(float *)(unaff_RBP + -0x49) = fVar22;
      *(float *)(unaff_RBP + -0x45) = fVar27;
      *(float *)(unaff_RBP + -0x41) = fVar18;
      *(float *)(unaff_RBP + -0x3d) = fVar20;
      uVar9 = Function_56da4ab5(unaff_RBP + -0x59);
      CoreEngine_NetworkManager(lVar12,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar9,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    fVar22 = *(float *)(unaff_RDI + 0x19f8);
    lVar14 = *(int64_t *)(lVar17 + 0x28);
    fVar27 = *(float *)(lVar17 + 0x40) - fVar22;
    fVar25 = *(float *)(lVar17 + 0x44) - fVar22;
    fVar18 = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(lVar17 + 0x78)) {
      fVar18 = *(float *)(lVar17 + 0x78);
    }
    fVar23 = *(float *)(lVar17 + 0x40) + *(float *)(lVar17 + 0x48) + fVar22;
    fVar21 = *(float *)(lVar17 + 0x44) + *(float *)(lVar17 + 0x4c) + fVar22;
    if ((((fVar27 <= *(float *)(lVar14 + 8)) && (fVar25 <= *(float *)(lVar14 + 0xc))) &&
        (*(float *)(lVar14 + 8) + *(float *)(lVar14 + 0x10) <= fVar23)) &&
       (*(float *)(lVar14 + 0xc) + *(float *)(lVar14 + 0x14) <= fVar21)) {
      fVar18 = *(float *)(lVar17 + 0x78);
      fVar22 = -fVar22 - 1.0;
      fVar27 = fVar27 - fVar22;
      fVar25 = fVar25 - fVar22;
      fVar23 = fVar22 + fVar23;
      fVar21 = fVar22 + fVar21;
    }
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
    uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
    fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
    fVar20 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar19;
    *(float *)(unaff_RBP + -0x59) = fVar22;
    *(int32_t *)(unaff_RBP + -0x55) = uVar9;
    *(int32_t *)(unaff_RBP + -0x51) = uVar6;
    *(float *)(unaff_RBP + -0x4d) = fVar19;
    fVar19 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar22) && (fVar19 = fVar22, 1.0 <= fVar22)) {
      fVar19 = 1.0;
    }
    fVar22 = *(float *)(unaff_RBP + -0x55);
    fVar24 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar22) && (fVar24 = fVar22, 1.0 <= fVar22)) {
      fVar24 = 1.0;
    }
    fVar22 = *(float *)(unaff_RBP + -0x51);
    fVar26 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar22) && (fVar26 = fVar22, 1.0 <= fVar22)) {
      fVar26 = 1.0;
    }
    uVar16 = (int)(fVar19 * 255.0 + 0.5) | (int)(fVar24 * 255.0 + 0.5) << 8 |
             (int)(fVar26 * 255.0 + 0.5) << 0x10;
    if ((unaff_XMM8_Da <= fVar20) && (unaff_XMM8_Da = fVar20, 1.0 <= fVar20)) {
      unaff_XMM8_Da = 1.0;
    }
    uVar10 = (int)(unaff_XMM8_Da * 255.0 + 0.5) << 0x18;
    if ((uVar16 & 0xff000000) != 0 || uVar10 != 0) {
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
      UtilitiesSystem_LogManager(lVar12,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar18,0xffffffff);
      RenderingSystem_LightManager(lVar12,*(uint64_t *)(lVar12 + 0x88),*(int32_t *)(lVar12 + 0x80),
                    uVar16 | uVar10,1);
      *(int32_t *)(lVar12 + 0x80) = 0;
    }
    *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
    SystemCore_ErrorHandler(lVar12);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_MemoryAllocator(void)
void CoreEngine_MemoryAllocator(void)
{
  float *pfVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t *plVar14;
  int64_t unaff_RBP;
  uint uVar15;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM8_Da;
  if (unaff_R12 != 0) {
    lVar3 = *(int64_t *)(unaff_RDI + 0x1ce0);
    lVar12 = *(int64_t *)(lVar3 + 0x3a0);
    iVar13 = *(int *)(lVar12 + 0x188) + -1;
    if (-1 < iVar13) {
      plVar14 = (int64_t *)(*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8);
      lVar11 = (int64_t)iVar13;
      do {
        if ((*(char *)(*plVar14 + 0xaf) != '\0') && (*(char *)(*plVar14 + 0xb6) == '\0')) {
          lVar12 = Function_1c5a575a(*(uint64_t *)
                                        (*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8));
          break;
        }
        iVar13 = iVar13 + -1;
        plVar14 = plVar14 + -1;
        bVar5 = 0 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar5);
    }
    lVar12 = *(int64_t *)(lVar12 + 0x2e8);
    CoreEngine_AIController(lVar12,*(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x20),0);
    lVar11 = *(int64_t *)(lVar3 + 0x3a8);
    if (((*(byte *)(lVar11 + 0x432) & 1) != 0) &&
       (lVar4 = *(int64_t *)(lVar3 + 0x3a0), lVar4 != lVar11)) {
      fVar20 = *(float *)(lVar11 + 0x40);
      fVar16 = *(float *)(unaff_RDI + 0x1dc8);
      pfVar1 = (float *)(lVar4 + 0x40);
      fVar17 = *pfVar1;
      uVar8 = *(int32_t *)(lVar4 + 0x44);
      fVar21 = *pfVar1;
      uVar7 = *(int32_t *)(lVar4 + 0x44);
      uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
      uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
      fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4);
      fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      fVar22 = *pfVar1 + *(float *)(lVar4 + 0x48);
      fVar24 = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x4c);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
      *(int32_t *)(unaff_RBP + -0x55) = uVar9;
      *(int32_t *)(unaff_RBP + -0x51) = uVar6;
      *(float *)(unaff_RBP + -0x4d) = fVar19;
      fVar25 = *(float *)(lVar11 + 0x44);
      fVar18 = fVar25 + *(float *)(lVar11 + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = fVar19 * fVar16 * fVar23;
      fVar16 = fVar20 + *(float *)(lVar11 + 0x48);
      *(float *)(unaff_RBP + -0x69) = fVar20;
      *(float *)(unaff_RBP + -0x65) = fVar25;
      *(float *)(unaff_RBP + -0x61) = fVar16;
      *(float *)(unaff_RBP + -0x5d) = fVar18;
      *(float *)(unaff_RBP + -0x69) = fVar21;
      *(int32_t *)(unaff_RBP + -0x65) = uVar7;
      *(float *)(unaff_RBP + -0x61) = fVar22;
      *(float *)(unaff_RBP + -0x5d) = fVar24;
      *(float *)(unaff_RBP + -0x69) = fVar17;
      *(int32_t *)(unaff_RBP + -0x65) = uVar8;
      *(float *)(unaff_RBP + -0x61) = fVar22;
      *(float *)(unaff_RBP + -0x5d) = fVar24;
      *(float *)(unaff_RBP + -0x49) = fVar20;
      *(float *)(unaff_RBP + -0x45) = fVar25;
      *(float *)(unaff_RBP + -0x41) = fVar16;
      *(float *)(unaff_RBP + -0x3d) = fVar18;
      uVar9 = Function_56da4ab5(unaff_RBP + -0x59);
      CoreEngine_NetworkManager(lVar12,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar9,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    fVar20 = *(float *)(unaff_RDI + 0x19f8);
    lVar11 = *(int64_t *)(lVar3 + 0x28);
    fVar25 = *(float *)(lVar3 + 0x40) - fVar20;
    fVar23 = *(float *)(lVar3 + 0x44) - fVar20;
    fVar16 = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(lVar3 + 0x78)) {
      fVar16 = *(float *)(lVar3 + 0x78);
    }
    fVar21 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x48) + fVar20;
    fVar19 = *(float *)(lVar3 + 0x44) + *(float *)(lVar3 + 0x4c) + fVar20;
    if ((((fVar25 <= *(float *)(lVar11 + 8)) && (fVar23 <= *(float *)(lVar11 + 0xc))) &&
        (*(float *)(lVar11 + 8) + *(float *)(lVar11 + 0x10) <= fVar21)) &&
       (*(float *)(lVar11 + 0xc) + *(float *)(lVar11 + 0x14) <= fVar19)) {
      fVar16 = *(float *)(lVar3 + 0x78);
      fVar20 = -fVar20 - 1.0;
      fVar25 = fVar25 - fVar20;
      fVar23 = fVar23 - fVar20;
      fVar21 = fVar20 + fVar21;
      fVar19 = fVar20 + fVar19;
    }
    fVar20 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
    uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
    fVar17 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
    fVar18 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar17;
    *(float *)(unaff_RBP + -0x59) = fVar20;
    *(int32_t *)(unaff_RBP + -0x55) = uVar9;
    *(int32_t *)(unaff_RBP + -0x51) = uVar6;
    *(float *)(unaff_RBP + -0x4d) = fVar17;
    fVar17 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar20) && (fVar17 = fVar20, 1.0 <= fVar20)) {
      fVar17 = 1.0;
    }
    fVar20 = *(float *)(unaff_RBP + -0x55);
    fVar22 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
      fVar22 = 1.0;
    }
    fVar20 = *(float *)(unaff_RBP + -0x51);
    fVar24 = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar20) && (fVar24 = fVar20, 1.0 <= fVar20)) {
      fVar24 = 1.0;
    }
    uVar15 = (int)(fVar17 * 255.0 + 0.5) | (int)(fVar22 * 255.0 + 0.5) << 8 |
             (int)(fVar24 * 255.0 + 0.5) << 0x10;
    if ((unaff_XMM8_Da <= fVar18) && (unaff_XMM8_Da = fVar18, 1.0 <= fVar18)) {
      unaff_XMM8_Da = 1.0;
    }
    uVar10 = (int)(unaff_XMM8_Da * 255.0 + 0.5) << 0x18;
    if ((uVar15 & 0xff000000) != 0 || uVar10 != 0) {
      bVar2 = *(byte *)(lVar12 + 0x30);
      *(float *)(unaff_RBP + 0x6f) = fVar25 + 0.5;
      *(float *)(unaff_RBP + 0x73) = fVar23 + 0.5;
      if ((bVar2 & 1) == 0) {
        fVar21 = fVar21 - 0.49;
        fVar19 = fVar19 - 0.49;
      }
      else {
        fVar21 = fVar21 - 0.5;
        fVar19 = fVar19 - 0.5;
      }
      *(float *)(unaff_RBP + 0x67) = fVar21;
      *(float *)(unaff_RBP + 0x6b) = fVar19;
      UtilitiesSystem_LogManager(lVar12,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar16,0xffffffff);
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
// 函数: void CoreEngine_ThreadManager(void)
void CoreEngine_ThreadManager(void)
{
  float *pfVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t *plVar14;
  int64_t unaff_RBP;
  uint uVar15;
  int64_t unaff_RDI;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM8_Da;
  lVar3 = *(int64_t *)(unaff_RDI + 0x1ce0);
  lVar12 = *(int64_t *)(lVar3 + 0x3a0);
  iVar13 = *(int *)(lVar12 + 0x188) + -1;
  if (-1 < iVar13) {
    plVar14 = (int64_t *)(*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8);
    lVar11 = (int64_t)iVar13;
    do {
      if ((*(char *)(*plVar14 + 0xaf) != '\0') && (*(char *)(*plVar14 + 0xb6) == '\0')) {
        lVar12 = Function_1c5a575a(*(uint64_t *)
                                      (*(int64_t *)(lVar12 + 400) + (int64_t)iVar13 * 8));
        break;
      }
      iVar13 = iVar13 + -1;
      plVar14 = plVar14 + -1;
      bVar5 = 0 < lVar11;
      lVar11 = lVar11 + -1;
    } while (bVar5);
  }
  lVar12 = *(int64_t *)(lVar12 + 0x2e8);
  CoreEngine_AIController(lVar12,*(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x18),
                *(uint64_t *)(*(int64_t *)(lVar12 + 0x38) + 0x20),0);
  lVar11 = *(int64_t *)(lVar3 + 0x3a8);
  if (((*(byte *)(lVar11 + 0x432) & 1) != 0) &&
     (lVar4 = *(int64_t *)(lVar3 + 0x3a0), lVar4 != lVar11)) {
    fVar20 = *(float *)(lVar11 + 0x40);
    fVar16 = *(float *)(unaff_RDI + 0x1dc8);
    pfVar1 = (float *)(lVar4 + 0x40);
    fVar17 = *pfVar1;
    uVar8 = *(int32_t *)(lVar4 + 0x44);
    fVar21 = *pfVar1;
    uVar7 = *(int32_t *)(lVar4 + 0x44);
    uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
    fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4);
    fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    fVar22 = *pfVar1 + *(float *)(lVar4 + 0x48);
    fVar24 = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x4c);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar9;
    *(int32_t *)(unaff_RBP + -0x51) = uVar6;
    *(float *)(unaff_RBP + -0x4d) = fVar19;
    fVar25 = *(float *)(lVar11 + 0x44);
    fVar18 = fVar25 + *(float *)(lVar11 + 0x4c);
    *(float *)(unaff_RBP + -0x4d) = fVar19 * fVar16 * fVar23;
    fVar16 = fVar20 + *(float *)(lVar11 + 0x48);
    *(float *)(unaff_RBP + -0x69) = fVar20;
    *(float *)(unaff_RBP + -0x65) = fVar25;
    *(float *)(unaff_RBP + -0x61) = fVar16;
    *(float *)(unaff_RBP + -0x5d) = fVar18;
    *(float *)(unaff_RBP + -0x69) = fVar21;
    *(int32_t *)(unaff_RBP + -0x65) = uVar7;
    *(float *)(unaff_RBP + -0x61) = fVar22;
    *(float *)(unaff_RBP + -0x5d) = fVar24;
    *(float *)(unaff_RBP + -0x69) = fVar17;
    *(int32_t *)(unaff_RBP + -0x65) = uVar8;
    *(float *)(unaff_RBP + -0x61) = fVar22;
    *(float *)(unaff_RBP + -0x5d) = fVar24;
    *(float *)(unaff_RBP + -0x49) = fVar20;
    *(float *)(unaff_RBP + -0x45) = fVar25;
    *(float *)(unaff_RBP + -0x41) = fVar16;
    *(float *)(unaff_RBP + -0x3d) = fVar18;
    uVar9 = Function_56da4ab5(unaff_RBP + -0x59);
    CoreEngine_NetworkManager(lVar12,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar9,
                  *(int32_t *)(unaff_RDI + 0x1634));
  }
  fVar20 = *(float *)(unaff_RDI + 0x19f8);
  lVar11 = *(int64_t *)(lVar3 + 0x28);
  fVar25 = *(float *)(lVar3 + 0x40) - fVar20;
  fVar23 = *(float *)(lVar3 + 0x44) - fVar20;
  fVar16 = *(float *)(unaff_RDI + 0x1634);
  if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(lVar3 + 0x78)) {
    fVar16 = *(float *)(lVar3 + 0x78);
  }
  fVar21 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x48) + fVar20;
  fVar19 = *(float *)(lVar3 + 0x44) + *(float *)(lVar3 + 0x4c) + fVar20;
  if ((((fVar25 <= *(float *)(lVar11 + 8)) && (fVar23 <= *(float *)(lVar11 + 0xc))) &&
      (*(float *)(lVar11 + 8) + *(float *)(lVar11 + 0x10) <= fVar21)) &&
     (*(float *)(lVar11 + 0xc) + *(float *)(lVar11 + 0x14) <= fVar19)) {
    fVar16 = *(float *)(lVar3 + 0x78);
    fVar20 = -fVar20 - 1.0;
    fVar25 = fVar25 - fVar20;
    fVar23 = fVar23 - fVar20;
    fVar21 = fVar20 + fVar21;
    fVar19 = fVar20 + fVar19;
  }
  fVar20 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
  uVar9 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
  uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
  fVar17 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
  fVar18 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar17;
  *(float *)(unaff_RBP + -0x59) = fVar20;
  *(int32_t *)(unaff_RBP + -0x55) = uVar9;
  *(int32_t *)(unaff_RBP + -0x51) = uVar6;
  *(float *)(unaff_RBP + -0x4d) = fVar17;
  fVar17 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar20) && (fVar17 = fVar20, 1.0 <= fVar20)) {
    fVar17 = 1.0;
  }
  fVar20 = *(float *)(unaff_RBP + -0x55);
  fVar22 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
    fVar22 = 1.0;
  }
  fVar20 = *(float *)(unaff_RBP + -0x51);
  fVar24 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar20) && (fVar24 = fVar20, 1.0 <= fVar20)) {
    fVar24 = 1.0;
  }
  uVar15 = (int)(fVar17 * 255.0 + 0.5) | (int)(fVar22 * 255.0 + 0.5) << 8 |
           (int)(fVar24 * 255.0 + 0.5) << 0x10;
  if ((unaff_XMM8_Da <= fVar18) && (unaff_XMM8_Da = fVar18, 1.0 <= fVar18)) {
    unaff_XMM8_Da = 1.0;
  }
  uVar10 = (int)(unaff_XMM8_Da * 255.0 + 0.5) << 0x18;
  if ((uVar15 & 0xff000000) != 0 || uVar10 != 0) {
    bVar2 = *(byte *)(lVar12 + 0x30);
    *(float *)(unaff_RBP + 0x6f) = fVar25 + 0.5;
    *(float *)(unaff_RBP + 0x73) = fVar23 + 0.5;
    if ((bVar2 & 1) == 0) {
      fVar21 = fVar21 - 0.49;
      fVar19 = fVar19 - 0.49;
    }
    else {
      fVar21 = fVar21 - 0.5;
      fVar19 = fVar19 - 0.5;
    }
    *(float *)(unaff_RBP + 0x67) = fVar21;
    *(float *)(unaff_RBP + 0x6b) = fVar19;
    UtilitiesSystem_LogManager(lVar12,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar16,0xffffffff);
    RenderingSystem_LightManager(lVar12,*(uint64_t *)(lVar12 + 0x88),*(int32_t *)(lVar12 + 0x80),
                  uVar15 | uVar10,1);
    *(int32_t *)(lVar12 + 0x80) = 0;
  }
  *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
  SystemCore_ErrorHandler(lVar12);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_ResourceLoader(void)
void CoreEngine_ResourceLoader(void)
{
  float *pfVar1;
  byte bVar2;
  int64_t lVar3;
  bool bVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int64_t *plVar13;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar14;
  int64_t unaff_RDI;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_XMM8_Da;
  lVar11 = *(int64_t *)(unaff_RSI + 0x3a0);
  iVar12 = *(int *)(lVar11 + 0x188) + -1;
  if (-1 < iVar12) {
    plVar13 = (int64_t *)(*(int64_t *)(lVar11 + 400) + (int64_t)iVar12 * 8);
    lVar10 = (int64_t)iVar12;
    do {
      if ((*(char *)(*plVar13 + 0xaf) != '\0') && (*(char *)(*plVar13 + 0xb6) == '\0')) {
        lVar11 = Function_1c5a575a(*(uint64_t *)
                                      (*(int64_t *)(lVar11 + 400) + (int64_t)iVar12 * 8));
        break;
      }
      iVar12 = iVar12 + -1;
      plVar13 = plVar13 + -1;
      bVar4 = 0 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar4);
  }
  lVar11 = *(int64_t *)(lVar11 + 0x2e8);
  CoreEngine_AIController(lVar11,*(uint64_t *)(*(int64_t *)(lVar11 + 0x38) + 0x18),
                *(uint64_t *)(*(int64_t *)(lVar11 + 0x38) + 0x20),0);
  lVar10 = *(int64_t *)(unaff_RSI + 0x3a8);
  if (((*(byte *)(lVar10 + 0x432) & 1) != 0) &&
     (lVar3 = *(int64_t *)(unaff_RSI + 0x3a0), lVar3 != lVar10)) {
    fVar19 = *(float *)(lVar10 + 0x40);
    fVar15 = *(float *)(unaff_RDI + 0x1dc8);
    pfVar1 = (float *)(lVar3 + 0x40);
    fVar16 = *pfVar1;
    uVar7 = *(int32_t *)(lVar3 + 0x44);
    fVar20 = *pfVar1;
    uVar6 = *(int32_t *)(lVar3 + 0x44);
    uVar8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19cc);
    uVar5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19d0);
    fVar18 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19d4);
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    fVar21 = *pfVar1 + *(float *)(lVar3 + 0x48);
    fVar23 = *(float *)(lVar3 + 0x44) + *(float *)(lVar3 + 0x4c);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar8;
    *(int32_t *)(unaff_RBP + -0x51) = uVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar18;
    fVar24 = *(float *)(lVar10 + 0x44);
    fVar17 = fVar24 + *(float *)(lVar10 + 0x4c);
    *(float *)(unaff_RBP + -0x4d) = fVar18 * fVar15 * fVar22;
    fVar15 = fVar19 + *(float *)(lVar10 + 0x48);
    *(float *)(unaff_RBP + -0x69) = fVar19;
    *(float *)(unaff_RBP + -0x65) = fVar24;
    *(float *)(unaff_RBP + -0x61) = fVar15;
    *(float *)(unaff_RBP + -0x5d) = fVar17;
    *(float *)(unaff_RBP + -0x69) = fVar20;
    *(int32_t *)(unaff_RBP + -0x65) = uVar6;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    *(float *)(unaff_RBP + -0x5d) = fVar23;
    *(float *)(unaff_RBP + -0x69) = fVar16;
    *(int32_t *)(unaff_RBP + -0x65) = uVar7;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    *(float *)(unaff_RBP + -0x5d) = fVar23;
    *(float *)(unaff_RBP + -0x49) = fVar19;
    *(float *)(unaff_RBP + -0x45) = fVar24;
    *(float *)(unaff_RBP + -0x41) = fVar15;
    *(float *)(unaff_RBP + -0x3d) = fVar17;
    uVar8 = Function_56da4ab5(unaff_RBP + -0x59);
    CoreEngine_NetworkManager(lVar11,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar8,
                  *(int32_t *)(unaff_RDI + 0x1634));
  }
  fVar19 = *(float *)(unaff_RDI + 0x19f8);
  lVar10 = *(int64_t *)(unaff_RSI + 0x28);
  fVar24 = *(float *)(unaff_RSI + 0x40) - fVar19;
  fVar22 = *(float *)(unaff_RSI + 0x44) - fVar19;
  fVar15 = *(float *)(unaff_RDI + 0x1634);
  if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(unaff_RSI + 0x78)) {
    fVar15 = *(float *)(unaff_RSI + 0x78);
  }
  fVar20 = *(float *)(unaff_RSI + 0x40) + *(float *)(unaff_RSI + 0x48) + fVar19;
  fVar18 = *(float *)(unaff_RSI + 0x44) + *(float *)(unaff_RSI + 0x4c) + fVar19;
  if ((((fVar24 <= *(float *)(lVar10 + 8)) && (fVar22 <= *(float *)(lVar10 + 0xc))) &&
      (*(float *)(lVar10 + 8) + *(float *)(lVar10 + 0x10) <= fVar20)) &&
     (*(float *)(lVar10 + 0xc) + *(float *)(lVar10 + 0x14) <= fVar18)) {
    fVar15 = *(float *)(unaff_RSI + 0x78);
    fVar19 = -fVar19 - 1.0;
    fVar24 = fVar24 - fVar19;
    fVar22 = fVar22 - fVar19;
    fVar20 = fVar19 + fVar20;
    fVar18 = fVar19 + fVar18;
  }
  fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
  uVar8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
  uVar5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
  fVar16 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
  fVar17 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * fVar16;
  *(float *)(unaff_RBP + -0x59) = fVar19;
  *(int32_t *)(unaff_RBP + -0x55) = uVar8;
  *(int32_t *)(unaff_RBP + -0x51) = uVar5;
  *(float *)(unaff_RBP + -0x4d) = fVar16;
  fVar16 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar16 = fVar19, 1.0 <= fVar19)) {
    fVar16 = 1.0;
  }
  fVar19 = *(float *)(unaff_RBP + -0x55);
  fVar21 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar21 = fVar19, 1.0 <= fVar19)) {
    fVar21 = 1.0;
  }
  fVar19 = *(float *)(unaff_RBP + -0x51);
  fVar23 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar23 = fVar19, 1.0 <= fVar19)) {
    fVar23 = 1.0;
  }
  uVar14 = (int)(fVar16 * 255.0 + 0.5) | (int)(fVar21 * 255.0 + 0.5) << 8 |
           (int)(fVar23 * 255.0 + 0.5) << 0x10;
  if ((unaff_XMM8_Da <= fVar17) && (unaff_XMM8_Da = fVar17, 1.0 <= fVar17)) {
    unaff_XMM8_Da = 1.0;
  }
  uVar9 = (int)(unaff_XMM8_Da * 255.0 + 0.5) << 0x18;
  if ((uVar14 & 0xff000000) != 0 || uVar9 != 0) {
    bVar2 = *(byte *)(lVar11 + 0x30);
    *(float *)(unaff_RBP + 0x6f) = fVar24 + 0.5;
    *(float *)(unaff_RBP + 0x73) = fVar22 + 0.5;
    if ((bVar2 & 1) == 0) {
      fVar20 = fVar20 - 0.49;
      fVar18 = fVar18 - 0.49;
    }
    else {
      fVar20 = fVar20 - 0.5;
      fVar18 = fVar18 - 0.5;
    }
    *(float *)(unaff_RBP + 0x67) = fVar20;
    *(float *)(unaff_RBP + 0x6b) = fVar18;
    UtilitiesSystem_LogManager(lVar11,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar15,0xffffffff);
    RenderingSystem_LightManager(lVar11,*(uint64_t *)(lVar11 + 0x88),*(int32_t *)(lVar11 + 0x80),
                  uVar14 | uVar9,1);
    *(int32_t *)(lVar11 + 0x80) = 0;
  }
  *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + -1;
  SystemCore_ErrorHandler(lVar11);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address