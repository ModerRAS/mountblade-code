/* 函数别名定义: DataProcessingEngine */
#define CoreEngine_DataTransformer CoreEngine_DataTransformer
#define CoreEngine_ProcessManager CoreEngine_ProcessManager
#define CoreEngine_PerformanceTracker CoreEngine_PerformanceTracker
#define CoreEngine_PerformanceAnalyzer CoreEngine_PerformanceAnalyzer
#define CoreEngine_SystemOptimizer CoreEngine_SystemOptimizer
#define CoreEngine_TaskScheduler CoreEngine_TaskScheduler
#define CoreEngine_SystemController CoreEngine_SystemController
#define CoreEngine_MemoryController CoreEngine_MemoryController
#define CoreEngine_MemoryOptimizer CoreEngine_MemoryOptimizer
#define CoreEngine_WorkloadBalancer CoreEngine_WorkloadBalancer
#define CoreEngine_ResourceOptimizer CoreEngine_ResourceOptimizer
#define CoreEngine_ThreadOptimizer CoreEngine_ThreadOptimizer
#define CoreEngine_DataAnalyzer CoreEngine_DataAnalyzer
#define CoreEngine_NetworkManager CoreEngine_NetworkManager
#define CoreEngine_AIController CoreEngine_AIController
#define DataProcessingEngine DataProcessingEngine
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part113.c - 7 个函数
// 函数: void CoreEngine_ThreadOptimizer(void)
void CoreEngine_ThreadOptimizer(void)
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
        lVar11 = SystemFunction_000180126de0(*(uint64_t *)
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
    uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x59);
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
// 函数: void CoreEngine_ResourceOptimizer(int32_t param_1,uint64_t param_2,float param_3,uint64_t param_4)
void CoreEngine_ResourceOptimizer(int32_t param_1,uint64_t param_2,float param_3,uint64_t param_4)
{
  byte bVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_EDI;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  bVar1 = *(byte *)(unaff_RBX + 0x30);
  *(float *)(unaff_RBP + 0x6f) = unaff_XMM6_Da + in_XMM4_Da;
  *(float *)(unaff_RBP + 0x73) = in_XMM5_Da + in_XMM4_Da;
  if ((bVar1 & 1) == 0) {
    in_XMM3_Da = in_XMM3_Da - 0.49;
    param_3 = param_3 - 0.49;
  }
  else {
    in_XMM3_Da = in_XMM3_Da - in_XMM4_Da;
    param_3 = param_3 - in_XMM4_Da;
  }
  *(float *)(unaff_RBP + 0x67) = in_XMM3_Da;
  *(float *)(unaff_RBP + 0x6b) = param_3;
  UtilitiesSystem_LogManager(param_1,unaff_RBP + 0x6f,unaff_RBP + 0x67,param_4,0xffffffff);
  RenderingSystem_LightManager(0x40400000,*(uint64_t *)(unaff_RBX + 0x88),*(int32_t *)(unaff_RBX + 0x80),
                unaff_EDI,1);
  *(int32_t *)(unaff_RBX + 0x80) = 0;
  *(int *)(unaff_RBX + 0x60) = *(int *)(unaff_RBX + 0x60) + -1;
  SystemCore_ErrorHandler();
  return;
}
// 函数: void CoreEngine_SystemController(void)
void CoreEngine_SystemController(void)
{
  return;
}
// 函数: void CoreEngine_ProcessManager(void)
void CoreEngine_ProcessManager(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_TaskScheduler(void)
void CoreEngine_TaskScheduler(void)
{
  int *piVar1;
  uint *puVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  bool bVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  float fVar19;
  float fVar20;
  lVar10 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1a94) == *(int *)(SYSTEM_DATA_MANAGER_A + 0x1a90)) {
    return;
  }
  uVar16 = 0;
  if ((*(code **)(SYSTEM_DATA_MANAGER_A + 0x15c8) != (code *)0x0) &&
     ((((*(float *)(SYSTEM_DATA_MANAGER_A + 0x2de8) == 3.4028235e+38 ||
        (fVar20 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x2de0) - *(float *)(SYSTEM_DATA_MANAGER_A + 0x2de8),
        fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x2de4) - *(float *)(SYSTEM_DATA_MANAGER_A + 0x2dec),
        0.0001 < fVar19 * fVar19 + fVar20 * fVar20)) &&
       (lVar4 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2df0), lVar4 != 0)) &&
      (*(char *)(lVar4 + 0x76) != '\0')))) {
    (**(code **)(SYSTEM_DATA_MANAGER_A + 0x15c8))(lVar4,*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x2de0));
    *(uint64_t *)(lVar10 + 0x2de8) = *(uint64_t *)(lVar10 + 0x2de0);
    *(uint64_t *)(lVar10 + 0x2df0) = 0;
  }
  iVar13 = *(int *)(lVar10 + 0x1ad0);
  while (1 < iVar13) {
    HighFreq_CacheSystem1();
    iVar13 = *(int *)(lVar10 + 0x1ad0);
  }
  lVar4 = *(int64_t *)(lVar10 + 0x1af8);
  *(int8_t *)(lVar10 + 2) = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb1) == '\0')) {
    *(int8_t *)(lVar4 + 0xaf) = 0;
  }
  HighFreq_CacheSystem1();
  CoreEngine_MemoryOptimizer();
  if (*(int64_t *)(lVar10 + 0x1cd8) != 0) {
    CoreEngine_MemoryController();
  }
  lVar4 = SYSTEM_DATA_MANAGER_A;
  if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) != 0) {
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) = 0;
  }
  cVar14 = *(char *)(lVar10 + 0x1dd0);
  if (cVar14 != '\0') {
    if ((*(int *)(lVar10 + 0x1df4) + 1 < *(int *)(lVar10 + 0x1a90)) &&
       (((*(byte *)(lVar10 + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((int64_t)*(int *)(lVar10 + 0x1ddc) + 0x120 + lVar4) == '\0')))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((*(char *)(lVar10 + 0x1e1a) != '\0') || (bVar9)) {
      CoreEngine_SystemOptimizer();
      cVar14 = *(char *)(lVar10 + 0x1dd0);
    }
    if ((cVar14 != '\0') && (*(int *)(lVar10 + 0x1dd8) < *(int *)(lVar10 + 0x1a90))) {
      *(int8_t *)(lVar10 + 0x1dd1) = 1;
      CoreEngine_DataAnalyzer(&system_data_649c);
      *(int8_t *)(lVar10 + 0x1dd1) = 0;
    }
  }
  *(int32_t *)(lVar10 + 0x1a94) = *(int32_t *)(lVar10 + 0x1a90);
  *(int8_t *)(lVar10 + 1) = 0;
  CoreEngine_DataTransformer();
  lVar4 = SYSTEM_DATA_MANAGER_A;
  piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1618);
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1610) = **(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
  iVar13 = *(int *)(lVar4 + 0x161c);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    uVar15 = uVar16;
    if (0 < (int)uVar11) {
      uVar15 = (uint64_t)uVar11;
    }
    DataProcessingEngine0(piVar1,uVar15);
  }
  *piVar1 = 0;
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (0 < *(int *)(lVar4 + 0x1c68)) {
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1c70) + uVar15 * 8);
      *(uint64_t *)(lVar5 + 100) = *(uint64_t *)(lVar5 + 8);
      if (((((*(int *)(lVar4 + 0x1a90) <= *(int *)(lVar5 + 0x54)) &&
            (0.0 < *(float *)(lVar5 + 0x10))) && (0.0 < *(float *)(lVar5 + 0x14))) ||
          ((int64_t)uVar15 < 1)) &&
         ((lVar6 = *(int64_t *)(lVar5 + 0x78), lVar6 == 0 ||
          ((*(char *)(lVar6 + 0xaf) != '\0' && (*(char *)(lVar6 + 0xb6) == '\0')))))) {
        iVar13 = *piVar1;
        iVar12 = *(int *)(lVar4 + 0x161c);
        if (iVar13 == iVar12) {
          if (iVar12 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar12 / 2 + iVar12;
          }
          iVar8 = iVar13 + 1;
          if (iVar13 + 1 < iVar12) {
            iVar8 = iVar12;
          }
          DataProcessingEngine0(piVar1,iVar8);
          iVar13 = *piVar1;
        }
        *(int64_t *)(*(int64_t *)(lVar4 + 0x1620) + (int64_t)iVar13 * 8) = lVar5;
        *piVar1 = *piVar1 + 1;
      }
      uVar11 = (int)uVar18 + 1;
      uVar15 = uVar15 + 1;
      uVar18 = (uint64_t)uVar11;
    } while ((int)uVar11 < *(int *)(lVar4 + 0x1c68));
  }
  puVar2 = (uint *)(lVar10 + 0x1ac0);
  lVar4 = **(int64_t **)(lVar4 + 0x1c70);
  *(int16_t *)(lVar4 + 0x49) = 0;
  *(int8_t *)(lVar4 + 0x48) = 0;
  iVar13 = *(int *)(lVar10 + 0x1ac4);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    uVar15 = uVar16;
    if (0 < (int)uVar11) {
      uVar15 = (uint64_t)uVar11;
    }
    DataProcessingEngine0(puVar2,uVar15);
  }
  *puVar2 = 0;
  DataProcessingEngine0(puVar2,*(int32_t *)(lVar10 + 0x1aa0));
  uVar11 = *(uint *)(lVar10 + 0x1aa0);
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (uVar11 != 0) {
    do {
      lVar4 = *(int64_t *)(uVar18 + *(int64_t *)(lVar10 + 0x1aa8));
      if ((*(char *)(lVar4 + 0xaf) == '\0') || ((*(uint *)(lVar4 + 0xc) & 0x1000000) == 0)) {
        CoreEngine_PerformanceAnalyzer(puVar2);
      }
      uVar11 = *(uint *)(lVar10 + 0x1aa0);
      uVar17 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar17;
      uVar18 = uVar18 + 8;
    } while (uVar17 != uVar11);
  }
  uVar17 = *puVar2;
  *puVar2 = uVar11;
  *(uint *)(lVar10 + 0x1aa0) = uVar17;
  uVar3 = *(int32_t *)(lVar10 + 0x1ac4);
  *(int32_t *)(lVar10 + 0x1ac4) = *(int32_t *)(lVar10 + 0x1aa4);
  *(int32_t *)(lVar10 + 0x1aa4) = uVar3;
  uVar7 = *(uint64_t *)(lVar10 + 0x1ac8);
  *(uint64_t *)(lVar10 + 0x1ac8) = *(uint64_t *)(lVar10 + 0x1aa8);
  *(uint64_t *)(lVar10 + 0x1aa8) = uVar7;
  *(int32_t *)(lVar10 + 0x3a4) = *(int32_t *)(lVar10 + 0x1af0);
  **(int8_t **)(lVar10 + 0xa0) = 0;
  *(uint64_t *)(lVar10 + 0x128) = 0;
  iVar13 = *(int *)(lVar10 + 0x1534);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    if (0 < (int)uVar11) {
      uVar16 = (uint64_t)uVar11;
    }
    Memory_CacheManager(lVar10 + 0x1530,uVar16);
  }
  *(int32_t *)(lVar10 + 0x1530) = 0;
// WARNING: Subroutine does not return
  memset(lVar10 + 0x338,0,0x54);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_WorkloadBalancer(void)
void CoreEngine_WorkloadBalancer(void)
{
  int *piVar1;
  uint *puVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *in_RAX;
  char cVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t unaff_RBX;
  uint uVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  uVar15 = 0;
  if ((in_RAX != (code *)0x0) &&
     ((((*(float *)(unaff_RBX + 0x2de8) == 3.4028235e+38 ||
        (fVar19 = *(float *)(unaff_RBX + 0x2de0) - *(float *)(unaff_RBX + 0x2de8),
        fVar18 = *(float *)(unaff_RBX + 0x2de4) - *(float *)(unaff_RBX + 0x2dec),
        0.0001 < fVar18 * fVar18 + fVar19 * fVar19)) &&
       (lVar4 = *(int64_t *)(unaff_RBX + 0x2df0), lVar4 != 0)) && (*(char *)(lVar4 + 0x76) != '\0')
      ))) {
    (*in_RAX)(lVar4,*(uint64_t *)(unaff_RBX + 0x2de0));
    *(uint64_t *)(unaff_RBX + 0x2de8) = *(uint64_t *)(unaff_RBX + 0x2de0);
    *(uint64_t *)(unaff_RBX + 0x2df0) = 0;
  }
  iVar12 = *(int *)(unaff_RBX + 0x1ad0);
  while (1 < iVar12) {
    HighFreq_CacheSystem1();
    iVar12 = *(int *)(unaff_RBX + 0x1ad0);
  }
  lVar4 = *(int64_t *)(unaff_RBX + 0x1af8);
  *(int8_t *)(unaff_RBX + 2) = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb1) == '\0')) {
    *(int8_t *)(lVar4 + 0xaf) = 0;
  }
  HighFreq_CacheSystem1();
  CoreEngine_MemoryOptimizer();
  if (*(int64_t *)(unaff_RBX + 0x1cd8) != 0) {
    CoreEngine_MemoryController();
  }
  lVar4 = SYSTEM_DATA_MANAGER_A;
  if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) != 0) {
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) = 0;
  }
  cVar13 = *(char *)(unaff_RBX + 0x1dd0);
  if (cVar13 != '\0') {
    if ((*(int *)(unaff_RBX + 0x1df4) + 1 < *(int *)(unaff_RBX + 0x1a90)) &&
       (((*(byte *)(unaff_RBX + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((int64_t)*(int *)(unaff_RBX + 0x1ddc) + 0x120 + lVar4) == '\0')))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((*(char *)(unaff_RBX + 0x1e1a) != '\0') || (bVar9)) {
      CoreEngine_SystemOptimizer();
      cVar13 = *(char *)(unaff_RBX + 0x1dd0);
    }
    if ((cVar13 != '\0') && (*(int *)(unaff_RBX + 0x1dd8) < *(int *)(unaff_RBX + 0x1a90))) {
      *(int8_t *)(unaff_RBX + 0x1dd1) = 1;
      CoreEngine_DataAnalyzer(&system_data_649c);
      *(int8_t *)(unaff_RBX + 0x1dd1) = 0;
    }
  }
  *(int32_t *)(unaff_RBX + 0x1a94) = *(int32_t *)(unaff_RBX + 0x1a90);
  *(int8_t *)(unaff_RBX + 1) = 0;
  CoreEngine_DataTransformer();
  lVar4 = SYSTEM_DATA_MANAGER_A;
  piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1618);
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1610) = **(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
  iVar12 = *(int *)(lVar4 + 0x161c);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    uVar14 = uVar15;
    if (0 < (int)uVar10) {
      uVar14 = (uint64_t)uVar10;
    }
    DataProcessingEngine0(piVar1,uVar14);
  }
  *piVar1 = 0;
  uVar14 = uVar15;
  uVar17 = uVar15;
  if (0 < *(int *)(lVar4 + 0x1c68)) {
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1c70) + uVar14 * 8);
      *(uint64_t *)(lVar5 + 100) = *(uint64_t *)(lVar5 + 8);
      if (((((*(int *)(lVar4 + 0x1a90) <= *(int *)(lVar5 + 0x54)) &&
            (0.0 < *(float *)(lVar5 + 0x10))) && (0.0 < *(float *)(lVar5 + 0x14))) ||
          ((int64_t)uVar14 < 1)) &&
         ((lVar6 = *(int64_t *)(lVar5 + 0x78), lVar6 == 0 ||
          ((*(char *)(lVar6 + 0xaf) != '\0' && (*(char *)(lVar6 + 0xb6) == '\0')))))) {
        iVar12 = *piVar1;
        iVar11 = *(int *)(lVar4 + 0x161c);
        if (iVar12 == iVar11) {
          if (iVar11 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = iVar11 / 2 + iVar11;
          }
          iVar8 = iVar12 + 1;
          if (iVar12 + 1 < iVar11) {
            iVar8 = iVar11;
          }
          DataProcessingEngine0(piVar1,iVar8);
          iVar12 = *piVar1;
        }
        *(int64_t *)(*(int64_t *)(lVar4 + 0x1620) + (int64_t)iVar12 * 8) = lVar5;
        *piVar1 = *piVar1 + 1;
      }
      uVar10 = (int)uVar17 + 1;
      uVar14 = uVar14 + 1;
      uVar17 = (uint64_t)uVar10;
    } while ((int)uVar10 < *(int *)(lVar4 + 0x1c68));
  }
  puVar2 = (uint *)(unaff_RBX + 0x1ac0);
  lVar4 = **(int64_t **)(lVar4 + 0x1c70);
  *(int16_t *)(lVar4 + 0x49) = 0;
  *(int8_t *)(lVar4 + 0x48) = 0;
  iVar12 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    uVar14 = uVar15;
    if (0 < (int)uVar10) {
      uVar14 = (uint64_t)uVar10;
    }
    DataProcessingEngine0(puVar2,uVar14);
  }
  *puVar2 = 0;
  DataProcessingEngine0(puVar2,*(int32_t *)(unaff_RBX + 0x1aa0));
  uVar10 = *(uint *)(unaff_RBX + 0x1aa0);
  uVar14 = uVar15;
  uVar17 = uVar15;
  if (uVar10 != 0) {
    do {
      lVar4 = *(int64_t *)(uVar17 + *(int64_t *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar4 + 0xaf) == '\0') || ((*(uint *)(lVar4 + 0xc) & 0x1000000) == 0)) {
        CoreEngine_PerformanceAnalyzer(puVar2);
      }
      uVar10 = *(uint *)(unaff_RBX + 0x1aa0);
      uVar16 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar16;
      uVar17 = uVar17 + 8;
    } while (uVar16 != uVar10);
  }
  uVar16 = *puVar2;
  *puVar2 = uVar10;
  *(uint *)(unaff_RBX + 0x1aa0) = uVar16;
  uVar3 = *(int32_t *)(unaff_RBX + 0x1ac4);
  *(int32_t *)(unaff_RBX + 0x1ac4) = *(int32_t *)(unaff_RBX + 0x1aa4);
  *(int32_t *)(unaff_RBX + 0x1aa4) = uVar3;
  uVar7 = *(uint64_t *)(unaff_RBX + 0x1ac8);
  *(uint64_t *)(unaff_RBX + 0x1ac8) = *(uint64_t *)(unaff_RBX + 0x1aa8);
  *(uint64_t *)(unaff_RBX + 0x1aa8) = uVar7;
  *(int32_t *)(unaff_RBX + 0x3a4) = *(int32_t *)(unaff_RBX + 0x1af0);
  **(int8_t **)(unaff_RBX + 0xa0) = 0;
  *(uint64_t *)(unaff_RBX + 0x128) = 0;
  iVar12 = *(int *)(unaff_RBX + 0x1534);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    if (0 < (int)uVar10) {
      uVar15 = (uint64_t)uVar10;
    }
    Memory_CacheManager(unaff_RBX + 0x1530,uVar15);
  }
  *(int32_t *)(unaff_RBX + 0x1530) = 0;
// WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_PerformanceTracker(void)
void CoreEngine_PerformanceTracker(void)
{
  int *piVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  code *in_RAX;
  char cVar10;
  int64_t unaff_RBX;
  int64_t lVar11;
  int64_t lVar12;
  char unaff_R12B;
  int8_t unaff_000000a1;
  int16_t unaff_000000a2;
  int32_t unaff_000000a4;
  int iVar13;
  float fVar14;
  float fVar15;
  if ((in_RAX != (code *)0x0) &&
     ((((*(float *)(unaff_RBX + 0x2de8) == 3.4028235e+38 ||
        (fVar15 = *(float *)(unaff_RBX + 0x2de0) - *(float *)(unaff_RBX + 0x2de8),
        fVar14 = *(float *)(unaff_RBX + 0x2de4) - *(float *)(unaff_RBX + 0x2dec),
        0.0001 < fVar14 * fVar14 + fVar15 * fVar15)) &&
       (lVar12 = *(int64_t *)(unaff_RBX + 0x2df0), lVar12 != 0)) &&
      (*(char *)(lVar12 + 0x76) != unaff_R12B)))) {
    (*in_RAX)(lVar12,*(uint64_t *)(unaff_RBX + 0x2de0));
    *(uint64_t *)(unaff_RBX + 0x2de8) = *(uint64_t *)(unaff_RBX + 0x2de0);
    *(uint64_t *)(unaff_RBX + 0x2df0) =
         CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  }
  iVar8 = *(int *)(unaff_RBX + 0x1ad0);
  while (1 < iVar8) {
    HighFreq_CacheSystem1();
    iVar8 = *(int *)(unaff_RBX + 0x1ad0);
  }
  lVar12 = *(int64_t *)(unaff_RBX + 0x1af8);
  *(char *)(unaff_RBX + 2) = unaff_R12B;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xb1) == unaff_R12B)) {
    *(char *)(lVar12 + 0xaf) = unaff_R12B;
  }
  HighFreq_CacheSystem1();
  CoreEngine_MemoryOptimizer();
  if (*(int64_t *)(unaff_RBX + 0x1cd8) !=
      CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)))) {
    CoreEngine_MemoryController();
  }
  lVar12 = SYSTEM_DATA_MANAGER_A;
  if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) !=
      CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)))) {
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c78) =
         CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  }
  cVar10 = *(char *)(unaff_RBX + 0x1dd0);
  if (cVar10 != '\0') {
    if ((*(int *)(unaff_RBX + 0x1df4) + 1 < *(int *)(unaff_RBX + 0x1a90)) &&
       (((*(byte *)(unaff_RBX + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((int64_t)*(int *)(unaff_RBX + 0x1ddc) + 0x120 + lVar12) == unaff_R12B)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((*(char *)(unaff_RBX + 0x1e1a) != unaff_R12B) || (bVar7)) {
      CoreEngine_SystemOptimizer();
      cVar10 = *(char *)(unaff_RBX + 0x1dd0);
    }
    if ((cVar10 != '\0') && (*(int *)(unaff_RBX + 0x1dd8) < *(int *)(unaff_RBX + 0x1a90))) {
      *(int8_t *)(unaff_RBX + 0x1dd1) = 1;
      CoreEngine_DataAnalyzer(&system_data_649c);
      *(char *)(unaff_RBX + 0x1dd1) = unaff_R12B;
    }
  }
  *(int32_t *)(unaff_RBX + 0x1a94) = *(int32_t *)(unaff_RBX + 0x1a90);
  *(char *)(unaff_RBX + 1) = unaff_R12B;
  CoreEngine_DataTransformer();
  lVar12 = SYSTEM_DATA_MANAGER_A;
  piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1618);
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1610) = **(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
  iVar8 = *(int *)(lVar12 + 0x161c);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    DataProcessingEngine0(piVar1,iVar13);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  iVar8 = *(int *)(lVar12 + 0x1c68);
  iVar9 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar8 != iVar9 &&
      SBORROW4(iVar8,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B))) ==
      iVar8 - iVar9 < 0) {
    lVar11 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(lVar12 + 0x1c70) + lVar11 * 8);
      *(uint64_t *)(lVar3 + 100) = *(uint64_t *)(lVar3 + 8);
      if (((((*(int *)(lVar12 + 0x1a90) <= *(int *)(lVar3 + 0x54)) &&
            (0.0 < *(float *)(lVar3 + 0x10))) && (0.0 < *(float *)(lVar3 + 0x14))) || (lVar11 < 1))
         && ((lVar4 = *(int64_t *)(lVar3 + 0x78), lVar4 == 0 ||
             ((*(char *)(lVar4 + 0xaf) != unaff_R12B && (*(char *)(lVar4 + 0xb6) == unaff_R12B))))))
      {
        iVar8 = *piVar1;
        iVar9 = *(int *)(lVar12 + 0x161c);
        if (iVar8 == iVar9) {
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          iVar6 = iVar8 + 1;
          if (iVar8 + 1 < iVar9) {
            iVar6 = iVar9;
          }
          DataProcessingEngine0(piVar1,iVar6);
          iVar8 = *piVar1;
        }
        *(int64_t *)(*(int64_t *)(lVar12 + 0x1620) + (int64_t)iVar8 * 8) = lVar3;
        *piVar1 = *piVar1 + 1;
      }
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 1;
    } while (iVar13 < *(int *)(lVar12 + 0x1c68));
  }
  piVar1 = (int *)(unaff_RBX + 0x1ac0);
  lVar12 = **(int64_t **)(lVar12 + 0x1c70);
  *(ushort *)(lVar12 + 0x49) = CONCAT11(unaff_000000a1,unaff_R12B);
  *(char *)(lVar12 + 0x48) = unaff_R12B;
  iVar8 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    DataProcessingEngine0(piVar1,iVar13);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  DataProcessingEngine0(piVar1,*(int32_t *)(unaff_RBX + 0x1aa0));
  iVar8 = *(int *)(unaff_RBX + 0x1aa0);
  iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar8 != 0) {
    lVar12 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar11 = *(int64_t *)(lVar12 + *(int64_t *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar11 + 0xaf) == unaff_R12B) || ((*(uint *)(lVar11 + 0xc) & 0x1000000) == 0))
      {
        CoreEngine_PerformanceAnalyzer(piVar1);
      }
      iVar8 = *(int *)(unaff_RBX + 0x1aa0);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar13 != iVar8);
  }
  iVar13 = *piVar1;
  *piVar1 = iVar8;
  *(int *)(unaff_RBX + 0x1aa0) = iVar13;
  uVar2 = *(int32_t *)(unaff_RBX + 0x1ac4);
  *(int32_t *)(unaff_RBX + 0x1ac4) = *(int32_t *)(unaff_RBX + 0x1aa4);
  *(int32_t *)(unaff_RBX + 0x1aa4) = uVar2;
  uVar5 = *(uint64_t *)(unaff_RBX + 0x1ac8);
  *(uint64_t *)(unaff_RBX + 0x1ac8) = *(uint64_t *)(unaff_RBX + 0x1aa8);
  *(uint64_t *)(unaff_RBX + 0x1aa8) = uVar5;
  *(int32_t *)(unaff_RBX + 0x3a4) = *(int32_t *)(unaff_RBX + 0x1af0);
  **(char **)(unaff_RBX + 0xa0) = unaff_R12B;
  *(uint64_t *)(unaff_RBX + 0x128) =
       CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  iVar8 = *(int *)(unaff_RBX + 0x1534);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    Memory_CacheManager(unaff_RBX + 0x1530,iVar13);
  }
  *(uint *)(unaff_RBX + 0x1530) = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
// WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}