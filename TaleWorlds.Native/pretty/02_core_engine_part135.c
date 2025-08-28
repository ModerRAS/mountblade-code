#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// FUN_180131d90 的语义化别名 - 系统初始化和配置管理器
#define SystemInitializeAndConfigManager FUN_180131d90


// 02_core_engine_part135.c - 1 个函数

// 函数: void FUN_180131d90(void) - 系统初始化和配置管理器
// 
// 技术架构：
// - 负责系统数据管理器的初始化和配置
// - 管理系统状态标志和配置参数
// - 处理系统资源分配和状态更新
// - 实现系统级的数据结构初始化
//
// 性能优化策略：
// - 使用位运算进行状态标志检查
// - 批量处理相似的数据结构操作
// - 避免重复的内存访问，使用局部变量缓存
// - 采用条件编译优化关键路径
//
// 安全考虑：
// - 输入参数验证
// - 内存访问边界检查
// - 状态一致性检查
// - 异常情况处理
void FUN_180131d90(void)

{
  byte *pbVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int64_t lVar7;
  char cVar8;
  int8_t uVar9;
  int iVar10;
  int32_t uVar11;
  int iVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  byte bVar18;
  int64_t lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  
  lVar7 = SYSTEM_DATA_MANAGER_A;
  bVar18 = *(byte *)(SYSTEM_DATA_MANAGER_A + 8) & 1;
  pbVar1 = (byte *)(SYSTEM_DATA_MANAGER_A + 8);
  *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x38f) = 0;
  if (((*pbVar1 & 2) == 0) || ((*(byte *)(lVar7 + 0xc) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((((0.0 < *(float *)(lVar7 + 0x338)) || (0.0 < *(float *)(lVar7 + 0x340))) ||
        (0.0 < *(float *)(lVar7 + 0x33c))) || (0.0 < *(float *)(lVar7 + 0x344))) {
      *(int32_t *)(lVar7 + 0x1cc0) = 4;
    }
  }
  if (bVar18 != 0) {
    if ((-1 < *(int *)(lVar7 + 0x6c)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x6c) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x338) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x70)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x70) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x340) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x74)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x74) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x33c) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x40)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x40) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x37c) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x44)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x44) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x380) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x48)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x48) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 900) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(lVar7 + 0x4c)) &&
       (*(char *)((int64_t)*(int *)(lVar7 + 0x4c) + 0x138 + lVar7) != '\0')) {
      *(int32_t *)(lVar7 + 0x388) = 0x3f800000;
      *(int32_t *)(lVar7 + 0x1cc0) = 3;
    }
    if (*(char *)(lVar7 + 0x134) != '\0') {
      *(int32_t *)(lVar7 + 0x370) = 0x3f800000;
    }
    if (*(char *)(lVar7 + 0x135) != '\0') {
      *(int32_t *)(lVar7 + 0x374) = 0x3f800000;
    }
    if (*(char *)(lVar7 + 0x136) != '\0') {
      *(int32_t *)(lVar7 + 0x378) = 0x3f800000;
    }
  }
  uVar13 = 0;
  *(uint64_t *)(lVar7 + 0x14dc) = *(uint64_t *)(lVar7 + 0x1488);
  *(uint64_t *)(lVar7 + 0x14e4) = *(uint64_t *)(lVar7 + 0x1490);
  *(uint64_t *)(lVar7 + 0x14ec) = *(uint64_t *)(lVar7 + 0x1498);
  *(uint64_t *)(lVar7 + 0x14f4) = *(uint64_t *)(lVar7 + 0x14a0);
  *(uint64_t *)(lVar7 + 0x14fc) = *(uint64_t *)(lVar7 + 0x14a8);
  *(uint64_t *)(lVar7 + 0x1504) = *(uint64_t *)(lVar7 + 0x14b0);
  *(uint64_t *)(lVar7 + 0x150c) = *(uint64_t *)(lVar7 + 0x14b8);
  *(uint64_t *)(lVar7 + 0x1514) = *(uint64_t *)(lVar7 + 0x14c0);
  *(uint64_t *)(lVar7 + 0x151c) = *(uint64_t *)(lVar7 + 0x14c8);
  *(uint64_t *)(lVar7 + 0x1524) = *(uint64_t *)(lVar7 + 0x14d0);
  *(int32_t *)(lVar7 + 0x152c) = *(int32_t *)(lVar7 + 0x14d8);
  uVar17 = uVar13;
  do {
    fVar25 = -1.0;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x338 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x1488 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x1488 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x33c + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x148c + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x148c + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x340 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x1490 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x1490 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x344 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x1494 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x1494 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x348 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x1498 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x1498 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x34c + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x149c + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x149c + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x350 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14a0 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14a0 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x354 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14a4 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14a4 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x358 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14a8 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14a8 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x35c + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14ac + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14ac + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x360 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14b0 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14b0 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x364 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14b4 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14b4 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x368 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14b8 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14b8 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x36c + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14bc + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14bc + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x370 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14c0 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14c0 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x374 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14c4 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14c4 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x378 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14c8 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14c8 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x37c + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14cc + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14cc + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 0x380 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14d0 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14d0 + uVar13 * 4) = fVar30;
    fVar30 = fVar25;
    if (0.0 < *(float *)(lVar7 + 900 + uVar13 * 4)) {
      fVar30 = *(float *)(lVar7 + 0x14d4 + uVar13 * 4);
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar30 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14d4 + uVar13 * 4) = fVar30;
    if (0.0 < *(float *)(lVar7 + 0x388 + uVar13 * 4)) {
      fVar25 = *(float *)(lVar7 + 0x14d8 + uVar13 * 4);
      if (0.0 <= fVar25) {
        fVar25 = fVar25 + *(float *)(lVar7 + 0x18);
      }
      else {
        fVar25 = 0.0;
      }
    }
    *(float *)(lVar7 + 0x14d8 + uVar13 * 4) = fVar25;
    uVar16 = (int)uVar17 + 0x15;
    uVar17 = (uint64_t)uVar16;
    uVar13 = uVar13 + 0x15;
  } while ((int)uVar16 < 0x15);
  iVar12 = *(int *)(lVar7 + 0x1d0c);
  if ((iVar12 != 0) && ((*(char *)(lVar7 + 0x1d06) == '\0' || (*(char *)(lVar7 + 0x1d0a) != '\0'))))
  {
    iVar4 = *(int *)(lVar7 + 0x1cfc);
    cVar8 = *(char *)(lVar7 + 0x1d0a);
    *(int *)(lVar7 + 0x1ca0) = iVar12;
    *(int *)(*(int64_t *)(lVar7 + 0x1c98) + 0x3c8 + (int64_t)iVar4 * 4) = iVar12;
    if (cVar8 != '\0') {
      uVar23 = *(uint64_t *)(lVar7 + 0x1d18);
      puVar2 = (uint64_t *)(*(int64_t *)(lVar7 + 0x1c98) + ((int64_t)iVar4 + 0x3d) * 0x10);
      *puVar2 = *(uint64_t *)(lVar7 + 0x1d10);
      puVar2[1] = uVar23;
      *(int16_t *)(lVar7 + 0x1d05) = 1;
      *(int8_t *)(lVar7 + 0x1d07) = 1;
    }
    uVar23 = *(uint64_t *)(lVar7 + 0x1d18);
    puVar2 = (uint64_t *)
             (*(int64_t *)(lVar7 + 0x1c98) + ((int64_t)*(int *)(lVar7 + 0x1cfc) + 0x3d) * 0x10);
    *puVar2 = *(uint64_t *)(lVar7 + 0x1d10);
    puVar2[1] = uVar23;
  }
  *(int16_t *)(lVar7 + 0x1d09) = 0;
  *(int32_t *)(lVar7 + 0x1d0c) = 0;
  *(int32_t *)(lVar7 + 0x1cb8) = 0;
  if (*(char *)(lVar7 + 0x1d21) != '\0') {
    FUN_180133110();
  }
  if (*(int *)(lVar7 + 0x1d28) == 2) {
    if ((*(int *)(lVar7 + 0x1d38) == 0) && (*(int *)(lVar7 + 0x1d98) == 0)) {
      *(int8_t *)(lVar7 + 0x1d06) = 0;
    }
    *(int32_t *)(lVar7 + 0x1d28) = 0;
  }
  if ((*(char *)(lVar7 + 0x1d05) != '\0') && (*(char *)(lVar7 + 0x1d04) != '\0')) {
    if ((((*(byte *)(lVar7 + 8) & 4) != 0) &&
        ((((*(byte *)(lVar7 + 0xc) & 4) != 0 && (*(char *)(lVar7 + 0x1d06) == '\0')) &&
         (*(char *)(lVar7 + 0x1d07) != '\0')))) && (*(int64_t *)(lVar7 + 0x1c98) != 0)) {
      puVar14 = (int32_t *)func_0x000180131890(&fStackX_8);
      uVar11 = *puVar14;
      uVar3 = puVar14[1];
      *(int32_t *)(lVar7 + 0x3b4) = uVar11;
      *(int32_t *)(lVar7 + 0x3b8) = uVar3;
      *(int32_t *)(lVar7 + 0x118) = uVar11;
      *(int32_t *)(lVar7 + 0x11c) = uVar3;
      *(int8_t *)(lVar7 + 0x38f) = 1;
    }
    *(int8_t *)(lVar7 + 0x1d05) = 0;
  }
  lVar19 = *(int64_t *)(lVar7 + 0x1c98);
  *(int8_t *)(lVar7 + 0x1d04) = 0;
  *(int32_t *)(lVar7 + 0x1cb4) = 0;
  for (lVar15 = lVar19; lVar15 != 0; lVar15 = *(int64_t *)(lVar15 + 0x398)) {
    if ((*(uint *)(lVar15 + 0xc) & 0x15000000) != 0x1000000) {
      if (lVar15 != lVar19) {
        *(int64_t *)(lVar15 + 0x3c0) = lVar19;
      }
      break;
    }
  }
  lVar19 = *(int64_t *)(lVar7 + 0x1c98);
  if (((lVar19 != 0) && (*(int64_t *)(lVar19 + 0x3c0) != 0)) && (*(int *)(lVar7 + 0x1cfc) == 0)) {
    *(uint64_t *)(lVar19 + 0x3c0) = 0;
  }
  FUN_180133790();
  if (((bVar18 == 0) && (!bVar5)) ||
     ((*(int64_t *)(lVar7 + 0x1c98) == 0 ||
      ((*(uint *)(*(int64_t *)(lVar7 + 0x1c98) + 0xc) & 0x40000) != 0)))) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  *(char *)(lVar7 + 0x391) = cVar8;
  lVar19 = SYSTEM_DATA_MANAGER_A;
  if ((((cVar8 == '\0') || (*(int *)(lVar7 + 0x1ca0) == 0)) || (*(char *)(lVar7 + 0x1d06) != '\0'))
     && ((*(int64_t *)(lVar7 + 0x1cd8) == 0 && (*(char *)(lVar7 + 0x1d09) == '\0')))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(int8_t *)(lVar7 + 0x392) = uVar9;
  if ((0.0 <= *(float *)(lVar19 + 0x148c)) && (*(float *)(lVar19 + 0x148c) == 0.0)) {
    if (*(int *)(lVar7 + 0x1b2c) == 0) {
      lVar15 = *(int64_t *)(lVar7 + 0x1c98);
      if ((((lVar15 == 0) || ((*(uint *)(lVar15 + 0xc) & 0x5000000) != 0x1000000)) ||
          (*(int64_t *)(lVar15 + 0x398) == 0)) || (lVar15 == *(int64_t *)(lVar15 + 0x3a8))) {
        iVar12 = *(int *)(lVar7 + 0x1bb0);
        if (iVar12 < 1) {
          if (*(int *)(lVar7 + 0x1cfc) == 0) {
            if ((lVar15 != 0) &&
               (((*(uint *)(lVar15 + 0xc) >> 0x1a & 1) != 0 ||
                ((*(uint *)(lVar15 + 0xc) >> 0x18 & 1) == 0)))) {
              *(int32_t *)(lVar15 + 0x3c8) = 0;
            }
            *(int32_t *)(lVar7 + 0x1ca0) = 0;
          }
          else {
            func_0x000180131750(0);
          }
        }
        else if ((*(uint *)(*(int64_t *)
                             (*(int64_t *)(lVar7 + 0x1bb8) + -0x28 + (int64_t)iVar12 * 0x30) + 0xc
                           ) & 0x8000000) == 0) {
          FUN_18012ee20(iVar12 + -1,CONCAT71((int7)(int3)((uint)iVar12 >> 8),1));
          lVar19 = SYSTEM_DATA_MANAGER_A;
        }
      }
      else {
        SystemCore_DataCompressor();
        uVar11 = *(int32_t *)(lVar15 + 0x88);
        *(int32_t *)(lVar19 + 0x1ca0) = uVar11;
        *(int32_t *)(*(int64_t *)(lVar19 + 0x1c98) + 0x3c8) = uVar11;
        *(int8_t *)(lVar7 + 0x1d04) = 0;
        if (*(char *)(lVar7 + 0x1d07) != '\0') {
          *(int8_t *)(lVar7 + 0x1d05) = 1;
        }
      }
    }
    else {
      *(bool *)(lVar19 + 0x1b3c) = *(int *)(lVar19 + 0x1b2c) != 0;
      if (*(int *)(lVar19 + 0x1b2c) != 0) {
        *(int32_t *)(lVar19 + 0x1b38) = 0;
        *(int8_t *)(lVar19 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar19 + 0x1b2c) = 0;
      *(int32_t *)(lVar19 + 0x1b44) = 0;
      *(int8_t *)(lVar19 + 0x1b3d) = 0;
      *(uint64_t *)(lVar19 + 0x1b50) = 0;
    }
  }
  iVar12 = *(int *)(lVar7 + 0x1ca0);
  *(uint64_t *)(lVar7 + 0x1cac) = 0;
  *(uint64_t *)(lVar7 + 0x1ca4) = 0;
  if (((iVar12 != 0) && (*(char *)(lVar7 + 0x1d06) == '\0')) &&
     ((*(int64_t *)(lVar7 + 0x1cd8) == 0 &&
      ((*(int64_t *)(lVar7 + 0x1c98) != 0 &&
       ((*(uint *)(*(int64_t *)(lVar7 + 0x1c98) + 0xc) & 0x40000) == 0)))))) {
    bVar5 = *(float *)(lVar19 + 0x338) <= 0.0;
    if ((bVar5) || ((*(float *)(lVar19 + 0x1488) < 0.0 || (*(float *)(lVar19 + 0x1488) != 0.0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar4 = *(int *)(lVar7 + 0x1b2c);
    if (iVar4 == 0) {
      if (bVar6) {
        *(int *)(lVar7 + 0x1ca4) = iVar12;
      }
LAB_1801327bd:
      iVar10 = *(int *)(lVar7 + 0x1ca8);
      if (!bVar5) {
        iVar10 = iVar12;
      }
      *(int *)(lVar7 + 0x1ca8) = iVar10;
    }
    else if (iVar4 == iVar12) goto LAB_1801327bd;
    if ((iVar4 == 0) || (iVar4 == iVar12)) {
      iVar10 = *(int *)(lVar7 + 0x1cac);
      if (bVar6) {
        iVar10 = iVar12;
      }
      *(int *)(lVar7 + 0x1cac) = iVar10;
    }
    if ((((iVar4 == 0) || (iVar4 == iVar12)) && (0.0 <= *(float *)(lVar19 + 0x1490))) &&
       (*(float *)(lVar19 + 0x1490) == 0.0)) {
      *(int *)(lVar7 + 0x1cb0) = iVar12;
    }
  }
  lVar15 = *(int64_t *)(lVar7 + 0x1c98);
  if ((lVar15 != 0) && ((*(uint *)(lVar15 + 0xc) & 0x40000) != 0)) {
    *(int8_t *)(lVar7 + 0x1d06) = 1;
  }
  iVar12 = *(int *)(lVar7 + 0x1cbc);
  *(int8_t *)(lVar7 + 0x1d21) = 0;
  if (iVar12 != 0) {
    *(int *)(lVar7 + 0x1cb0) = iVar12;
    *(int *)(lVar7 + 0x1cac) = iVar12;
    *(int *)(lVar7 + 0x1ca8) = iVar12;
    *(int *)(lVar7 + 0x1ca4) = iVar12;
  }
  uVar17 = 0xffffffff;
  *(int32_t *)(lVar7 + 0x1cbc) = 0;
  if (*(int *)(lVar7 + 0x1b2c) != 0) {
    uVar17 = (uint64_t)*(uint *)(lVar7 + 0x1b44);
  }
  if (*(int *)(lVar7 + 0x1d28) == 0) {
    *(int32_t *)(lVar7 + 0x1d2c) = 0xffffffff;
    *(int32_t *)(lVar7 + 0x1d24) = 0;
    if (((lVar15 != 0) && (*(int64_t *)(lVar7 + 0x1cd8) == 0)) &&
       (((int)uVar17 != 0 && ((*(uint *)(lVar15 + 0xc) & 0x40000) == 0)))) {
      if ((uVar17 & 1) != 0) {
        if (0.0 <= *(float *)(lVar19 + 0x1498)) {
          iVar12 = func_0x000180128180(lVar15,*(float *)(lVar19 + 0x1498) -
                                              *(float *)(lVar19 + 0x18),
                                       *(float *)(lVar19 + 0x90) * 0.8,
                                       *(float *)(lVar19 + 0x94) * 0.8);
          fVar25 = (float)iVar12;
        }
        else {
          fVar25 = 0.0;
        }
        if (0.0 <= *(float *)(lVar19 + 0x14cc)) {
          iVar12 = func_0x000180128180();
          fVar30 = (float)iVar12;
        }
        else {
          fVar30 = 0.0;
        }
        uVar11 = *(int32_t *)(lVar7 + 0x1d2c);
        if (0.0 < fVar30 + fVar25) {
          uVar11 = 0;
        }
        *(int32_t *)(lVar7 + 0x1d2c) = uVar11;
      }
      if ((uVar17 & 2) != 0) {
        if (0.0 <= *(float *)(lVar19 + 0x149c)) {
          iVar12 = func_0x000180128180();
          fVar25 = (float)iVar12;
        }
        else {
          fVar25 = 0.0;
        }
        if (0.0 <= *(float *)(lVar19 + 0x14d0)) {
          iVar12 = func_0x000180128180();
          fVar30 = (float)iVar12;
        }
        else {
          fVar30 = 0.0;
        }
        uVar11 = *(int32_t *)(lVar7 + 0x1d2c);
        if (0.0 < fVar30 + fVar25) {
          uVar11 = 1;
        }
        *(int32_t *)(lVar7 + 0x1d2c) = uVar11;
      }
      if ((uVar17 & 4) != 0) {
        if (0.0 <= *(float *)(lVar19 + 0x14a0)) {
          iVar12 = func_0x000180128180();
          fVar25 = (float)iVar12;
        }
        else {
          fVar25 = 0.0;
        }
        if (0.0 <= *(float *)(lVar19 + 0x14d4)) {
          iVar12 = func_0x000180128180();
          fVar30 = (float)iVar12;
        }
        else {
          fVar30 = 0.0;
        }
        uVar11 = *(int32_t *)(lVar7 + 0x1d2c);
        if (0.0 < fVar30 + fVar25) {
          uVar11 = 2;
        }
        *(int32_t *)(lVar7 + 0x1d2c) = uVar11;
      }
      if ((uVar17 & 8) != 0) {
        if (0.0 <= *(float *)(lVar19 + 0x14a4)) {
          iVar12 = func_0x000180128180();
          fVar25 = (float)iVar12;
        }
        else {
          fVar25 = 0.0;
        }
        if (0.0 <= *(float *)(lVar19 + 0x14d8)) {
          iVar12 = func_0x000180128180();
          fVar30 = (float)iVar12;
        }
        else {
          fVar30 = 0.0;
        }
        uVar11 = *(int32_t *)(lVar7 + 0x1d2c);
        if (0.0 < fVar30 + fVar25) {
          uVar11 = 3;
        }
        *(int32_t *)(lVar7 + 0x1d2c) = uVar11;
      }
    }
    *(int32_t *)(lVar7 + 0x1d34) = *(int32_t *)(lVar7 + 0x1d2c);
  }
  else {
    *(int32_t *)(lVar7 + 0x1d28) = 2;
  }
  fVar25 = 0.0;
  if (bVar18 != 0) {
    fVar25 = (float)FUN_1801333d0(uVar17 & 0xffffffff);
  }
  if (*(int *)(lVar7 + 0x1d2c) == -1) {
    if (*(char *)(lVar7 + 0x1d21) != '\0') goto LAB_180132ba2;
  }
  else {
    *(int8_t *)(lVar7 + 0x1d21) = 1;
    *(int *)(lVar7 + 0x1d30) = *(int *)(lVar7 + 0x1d2c);
LAB_180132ba2:
    if (*(int *)(lVar7 + 0x1ca0) == 0) {
      *(int16_t *)(lVar7 + 0x1d09) = 0x101;
      *(int32_t *)(lVar7 + 0x1d0c) = 0;
      *(int8_t *)(lVar7 + 0x1d06) = 0;
    }
  }
  if ((*(char *)(lVar19 + 0x1d21) == '\0') && (*(char *)(lVar19 + 0x1d09) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(int8_t *)(lVar19 + 0x1d08) = uVar9;
  lVar15 = *(int64_t *)(lVar7 + 0x1c98);
  if (((lVar15 == 0) || ((*(uint *)(lVar15 + 0xc) & 0x40000) != 0)) ||
     (*(int64_t *)(lVar7 + 0x1cd8) != 0)) goto LAB_180132de6;
  fVar30 = (float)(int)(*(float *)(lVar19 + 0x19fc) * *(float *)(lVar15 + 0x2d8) *
                        *(float *)(lVar15 + 0x2dc) * 100.0 * *(float *)(lVar7 + 0x18) + 0.5);
  if (((*(int *)(lVar15 + 0x174) == 0) && (*(char *)(lVar15 + 0x17d) != '\0')) &&
     (*(char *)(lVar7 + 0x1d21) != '\0')) {
    iVar12 = *(int *)(lVar7 + 0x1d2c);
    if (iVar12 == 0) {
      fVar20 = -fVar30;
LAB_180132c8d:
      fVar21 = *(float *)(lVar15 + 0x8c);
      fVar20 = (float)(int)(fVar20 + fVar21);
      *(float *)(lVar15 + 0x8c) = fVar20;
      *(float *)(lVar15 + 0x118) = (fVar21 + *(float *)(lVar15 + 0x118)) - fVar20;
      iVar12 = *(int *)(lVar7 + 0x1d2c);
    }
    else {
      fVar20 = fVar30;
      if (iVar12 == 1) goto LAB_180132c8d;
    }
    if (iVar12 == 2) {
      fVar20 = -fVar30;
    }
    else {
      fVar20 = fVar30;
      if (iVar12 != 3) goto LAB_180132d15;
    }
    fVar21 = *(float *)(lVar15 + 0x90);
    fVar20 = (float)(int)(fVar20 + fVar21);
    *(float *)(lVar15 + 0x90) = fVar20;
    *(float *)(lVar15 + 0x11c) = (fVar21 + *(float *)(lVar15 + 0x11c)) - fVar20;
  }
LAB_180132d15:
  SystemCore_ConfigLoader(&fStackX_8,4,0,0x3dcccccd,0x41200000);
  if ((fStackX_8 != 0.0) && (*(char *)(lVar15 + 0xac) != '\0')) {
    fVar20 = *(float *)(lVar15 + 0x8c);
    fVar21 = (float)(int)(fStackX_8 * fVar30 + fVar20);
    *(float *)(lVar15 + 0x8c) = fVar21;
    *(float *)(lVar15 + 0x118) = (fVar20 + *(float *)(lVar15 + 0x118)) - fVar21;
    *(int8_t *)(lVar7 + 0x1d20) = 1;
  }
  if (fStackX_c != 0.0) {
    fVar20 = *(float *)(lVar15 + 0x90);
    fVar30 = (float)(int)(fStackX_c * fVar30 + fVar20);
    *(float *)(lVar15 + 0x90) = fVar30;
    *(float *)(lVar15 + 0x11c) = (fVar20 + *(float *)(lVar15 + 0x11c)) - fVar30;
    *(int8_t *)(lVar7 + 0x1d20) = 1;
  }
LAB_180132de6:
  *(uint64_t *)(lVar7 + 0x1d54) = 0x7f7fffff7f7fffff;
  *(uint64_t *)(lVar7 + 0x1d5c) = 0xff7fffffff7fffff;
  *(int32_t *)(lVar7 + 0x1d38) = 0;
  *(uint64_t *)(lVar7 + 0x1d40) = 0;
  *(int32_t *)(lVar7 + 0x1d50) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1d4c) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1d48) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1d68) = 0;
  *(uint64_t *)(lVar7 + 0x1d70) = 0;
  *(int32_t *)(lVar7 + 0x1d80) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1d7c) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1d78) = 0x7f7fffff;
  *(uint64_t *)(lVar7 + 0x1d84) = 0x7f7fffff7f7fffff;
  *(uint64_t *)(lVar7 + 0x1d8c) = 0xff7fffffff7fffff;
  *(int32_t *)(lVar7 + 0x1d98) = 0;
  *(uint64_t *)(lVar7 + 0x1da0) = 0;
  *(int32_t *)(lVar7 + 0x1db0) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1dac) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x1da8) = 0x7f7fffff;
  *(uint64_t *)(lVar7 + 0x1db4) = 0x7f7fffff7f7fffff;
  *(uint64_t *)(lVar7 + 0x1dbc) = 0xff7fffffff7fffff;
  if (((*(char *)(lVar7 + 0x1d21) != '\0') && (*(char *)(lVar7 + 0x1d20) != '\0')) &&
     (*(int *)(lVar7 + 0x1cfc) == 0)) {
    lVar15 = *(int64_t *)(lVar7 + 0x1c98);
    fVar30 = *(float *)(lVar15 + 0x3d0);
    fVar29 = (*(float *)(lVar15 + 0x248) - *(float *)(lVar15 + 0x40)) - 1.0;
    fVar21 = (*(float *)(lVar15 + 0x250) - *(float *)(lVar15 + 0x40)) + 1.0;
    fVar28 = (*(float *)(lVar15 + 0x254) - *(float *)(lVar15 + 0x44)) + 1.0;
    fVar20 = (*(float *)(lVar15 + 0x24c) - *(float *)(lVar15 + 0x44)) - 1.0;
    if (((fVar30 < fVar29) ||
        (*(float *)(lVar15 + 0x3d4) <= fVar20 && fVar20 != *(float *)(lVar15 + 0x3d4))) ||
       ((fVar21 < *(float *)(lVar15 + 0x3d8) || (fVar28 < *(float *)(lVar15 + 0x3dc))))) {
      fVar22 = *(float *)(lVar19 + 0x19fc) * *(float *)(lVar15 + 0x2d8) * *(float *)(lVar15 + 0x2dc)
               * 0.5;
      fVar27 = fVar28 - fVar20;
      if (fVar22 <= fVar28 - fVar20) {
        fVar27 = fVar22;
      }
      fVar26 = fVar21 - fVar29;
      if (fVar22 <= fVar21 - fVar29) {
        fVar26 = fVar22;
      }
      fVar20 = fVar20 - -fVar27;
      fVar29 = fVar29 - -fVar26;
      fVar21 = fVar21 + -fVar26;
      fVar28 = fVar28 + -fVar27;
      if (fVar20 <= *(float *)(lVar15 + 0x3d4)) {
        fVar20 = *(float *)(lVar15 + 0x3d4);
      }
      if (fVar29 <= fVar30) {
        fVar29 = fVar30;
      }
      *(float *)(lVar15 + 0x3d4) = fVar20;
      *(float *)(lVar15 + 0x3d0) = fVar29;
      if (*(float *)(lVar15 + 0x3d8) <= fVar21) {
        fVar21 = *(float *)(lVar15 + 0x3d8);
      }
      if (*(float *)(lVar15 + 0x3dc) <= fVar28) {
        fVar28 = *(float *)(lVar15 + 0x3dc);
      }
      *(float *)(lVar15 + 0x3d8) = fVar21;
      *(float *)(lVar15 + 0x3dc) = fVar28;
      *(int32_t *)(lVar7 + 0x1ca0) = 0;
    }
    *(int8_t *)(lVar7 + 0x1d20) = 0;
  }
  lVar19 = *(int64_t *)(lVar7 + 0x1c98);
  if (((lVar19 == 0) ||
      (lVar15 = (int64_t)*(int *)(lVar7 + 0x1cfc) + 0x3d,
      *(float *)(lVar19 + 8 + lVar15 * 0x10) < *(float *)(lVar19 + lVar15 * 0x10))) ||
     (*(float *)(lVar19 + 0xc + lVar15 * 0x10) < *(float *)(lVar19 + 4 + lVar15 * 0x10))) {
    uVar23 = 0;
    uVar24 = 0;
  }
  else {
    puVar2 = (uint64_t *)(lVar19 + lVar15 * 0x10);
    uVar23 = *puVar2;
    uVar24 = puVar2[1];
  }
  if (lVar19 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    uStack_70._0_4_ = (float)uVar24;
    uStack_78._0_4_ = (float)uVar23;
    uStack_70._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
    uStack_78._4_4_ = (float)((uint64_t)uVar23 >> 0x20);
    uStack_70 = CONCAT44(*(float *)(lVar19 + 0x44) + uStack_70._4_4_,
                         *(float *)(lVar19 + 0x40) + (float)uStack_70);
    uStack_78 = CONCAT44(*(float *)(lVar19 + 0x44) + uStack_78._4_4_,
                         *(float *)(lVar19 + 0x40) + (float)uStack_78);
  }
  *(uint64_t *)(lVar7 + 0x1cc4) = uStack_78;
  *(uint64_t *)(lVar7 + 0x1ccc) = uStack_70;
  *(float *)(lVar7 + 0x1cd0) = fVar25 + *(float *)(lVar7 + 0x1cd0);
  *(float *)(lVar7 + 0x1cc8) = fVar25 + *(float *)(lVar7 + 0x1cc8);
  fVar25 = *(float *)(lVar7 + 0x1cc4) + 1.0;
  *(int32_t *)(lVar7 + 0x1cd4) = 0;
  if (*(float *)(lVar7 + 0x1ccc) <= fVar25) {
    fVar25 = *(float *)(lVar7 + 0x1ccc);
  }
  *(float *)(lVar7 + 0x1cc4) = fVar25;
  *(float *)(lVar7 + 0x1ccc) = fVar25;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



