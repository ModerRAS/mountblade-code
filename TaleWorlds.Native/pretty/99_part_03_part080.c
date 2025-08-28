#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part080.c - 10 个函数

// 函数: void FUN_180245600(longlong param_1)
void FUN_180245600(longlong param_1)

{
  int8_t uVar1;
  byte bVar2;
  int32_t uVar3;
  longlong lVar4;
  
  *(int8_t *)(param_1 + 0x1c60) = 1;
  lVar4 = param_1;
  uVar1 = func_0x0001800e2bf0(system_parameter_buffer);
  *(int8_t *)(param_1 + 0x1c61) = uVar1;
  if (*(int *)(param_1 + 8) == -1) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*(int32_t *)(param_1 + 0x18);
  }
  *(byte *)(lVar4 + 0x1c62) = bVar2 & 1;
  uVar3 = func_0x00018024c420(lVar4);
  *(int32_t *)(lVar4 + 0x1c64) = uVar3;
  return;
}



longlong FUN_180245650(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  iVar2 = 0;
  plVar1 = (longlong *)(param_1 + 0x1c70);
  iVar23 = 0;
  uVar3 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar23 = iVar23 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x1d98);
  iVar4 = 0;
  uVar3 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x1ec0);
  uVar3 = 0;
  iVar5 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x1fe8);
  uVar3 = 0;
  iVar6 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar6 = iVar6 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2110);
  uVar3 = 0;
  iVar7 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar7 = iVar7 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2238);
  uVar3 = 0;
  iVar8 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar8 = iVar8 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2360);
  uVar3 = 0;
  iVar9 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar9 = iVar9 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2488);
  uVar3 = 0;
  iVar10 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar10 = iVar10 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x25b0);
  uVar3 = 0;
  iVar11 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar11 = iVar11 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x26d8);
  uVar3 = 0;
  iVar12 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar12 = iVar12 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2800);
  uVar3 = 0;
  iVar13 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar13 = iVar13 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2928);
  uVar3 = 0;
  iVar14 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar14 = iVar14 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2a50);
  uVar3 = 0;
  iVar15 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar15 = iVar15 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2b78);
  uVar3 = 0;
  iVar16 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar16 = iVar16 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2ca0);
  uVar3 = 0;
  iVar17 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar17 = iVar17 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2dc8);
  uVar3 = 0;
  iVar18 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar18 = iVar18 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x2ef0);
  uVar3 = 0;
  iVar19 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar19 = iVar19 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x3018);
  uVar3 = 0;
  iVar20 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar20 = iVar20 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x3140);
  uVar3 = 0;
  iVar21 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar21 = iVar21 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x3268);
  uVar3 = 0;
  iVar22 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar22 = iVar22 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  plVar1 = (longlong *)(param_1 + 0x3390);
  uVar3 = 0;
  do {
    if (*plVar1 == 0) break;
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar3 < 0x20);
  return ((ulonglong)(uint)(iVar2 << 0xb) + (ulonglong)(uint)(iVar22 << 0xb)) * 0x10 +
         ((ulonglong)(uint)(iVar20 << 0xb) +
         (ulonglong)(uint)(iVar17 << 0xb) + (ulonglong)(uint)(iVar18 << 0xb) +
         (ulonglong)(uint)(iVar19 << 0xb)) * 8 +
         ((ulonglong)(uint)(iVar21 << 0xb) +
          (ulonglong)(uint)(iVar4 << 0xb) + (ulonglong)(uint)(iVar23 << 0xb) +
         (ulonglong)(uint)(iVar16 << 0xb) +
         (ulonglong)(uint)(iVar5 << 0xb) + (ulonglong)(uint)(iVar6 << 0xb) +
         (ulonglong)(uint)(iVar7 << 0xb) + (ulonglong)(uint)(iVar8 << 0xb) +
         (ulonglong)(uint)(iVar9 << 0xb) + (ulonglong)(uint)(iVar10 << 0xb) +
         (ulonglong)(uint)(iVar11 << 0xb) + (ulonglong)(uint)(iVar12 << 0xb) +
         (ulonglong)(uint)(iVar13 << 0xb) + (ulonglong)(uint)(iVar14 << 0xb) +
         (ulonglong)(uint)(iVar15 << 0xb)) * 0x18;
}



longlong FUN_180245a60(longlong param_1)

{
  return (((ulonglong)*(uint *)(param_1 + 0x2b70) + (ulonglong)*(uint *)(param_1 + 0x3138) +
           (ulonglong)*(uint *)(param_1 + 0x2a48) + (ulonglong)*(uint *)(param_1 + 0x2920) +
           (ulonglong)*(uint *)(param_1 + 0x27f8) + (ulonglong)*(uint *)(param_1 + 0x26d0) +
           (ulonglong)*(uint *)(param_1 + 0x25a8) + (ulonglong)*(uint *)(param_1 + 0x2480) +
           (ulonglong)*(uint *)(param_1 + 0x2358) + (ulonglong)*(uint *)(param_1 + 0x2230) +
           (ulonglong)*(uint *)(param_1 + 0x2108) + (ulonglong)*(uint *)(param_1 + 0x1fe0) +
           (ulonglong)*(uint *)(param_1 + 0x1eb8) + (ulonglong)*(uint *)(param_1 + 0x1d90) +
          (ulonglong)*(uint *)(param_1 + 0x1c68)) * 3 +
          ((ulonglong)*(uint *)(param_1 + 0x3260) + (ulonglong)*(uint *)(param_1 + 0x3388)) * 2 +
          (ulonglong)*(uint *)(param_1 + 0x3010) + (ulonglong)*(uint *)(param_1 + 0x2ee8) +
          (ulonglong)*(uint *)(param_1 + 0x2dc0) + (ulonglong)*(uint *)(param_1 + 0x2c98)) * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180245b90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 8) = 0xffffffff;
  FUN_180094c20(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(uint64_t *)(param_1 + 400) = 0;
  *(uint64_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  *(uint64_t *)(param_1 + 0x1a8) = 0;
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  FUN_18024e7b0();
  *(uint64_t *)(param_1 + 0x1be8) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x1bf0) = 0;
  *(int32_t *)(param_1 + 0x1bf8) = 0;
  *(uint64_t *)(param_1 + 0x1be8) = &unknown_var_3480_ptr;
  *(int8_t **)(param_1 + 0x1bf0) = (int8_t *)(param_1 + 0x1c00);
  *(int32_t *)(param_1 + 0x1bf8) = 0;
  *(int8_t *)(param_1 + 0x1c00) = 0;
  *(uint64_t *)(param_1 + 0x1c50) = 0;
  *(code **)(param_1 + 0x1c58) = _guard_check_icall;
  LOCK();
  *(int32_t *)(param_1 + 0x1c68) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x1c70 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x1d70 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x1d90) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x1d98 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x1e98 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x1eb8) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x1ec0 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x1fc0 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x1fe0) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x1fe8 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x20e8 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2108) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2110 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2210 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2230) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2238 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2338 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2358) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2360 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2460 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2480) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2488 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2588 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x25a8) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x25b0 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x26b0 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x26d0) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x26d8 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x27d8 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x27f8) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2800 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2900 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2920) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2928 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2a28 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2a48) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2a50 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2b50 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2b70) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2b78 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2c78 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2c98) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2ca0 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2da0 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2dc0) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2dc8 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2ec8 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x2ee8) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x2ef0 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x2ff0 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x3010) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x3018 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x3118 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x3138) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x3140 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x3240 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x3260) = 0;
  UNLOCK();
  uVar3 = uVar4;
  do {
    *(uint64_t *)(param_1 + 0x3268 + (longlong)(int)uVar3 * 8) = 0;
    LOCK();
    *(int8_t *)(param_1 + 0x3368 + (longlong)(int)uVar3) = 1;
    UNLOCK();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  LOCK();
  *(int32_t *)(param_1 + 0x3388) = 0;
  UNLOCK();
  do {
    *(uint64_t *)(param_1 + 0x3390 + (longlong)(int)uVar4 * 8) = 0;
    LOCK();
    *(int8_t *)((longlong)(int)uVar4 + 0x3490 + param_1) = 1;
    UNLOCK();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20);
  *(uint64_t *)(param_1 + 0x34b0) = 0;
  *(uint64_t *)(param_1 + 0x34b8) = 0;
  *(uint64_t *)(param_1 + 0x34c0) = 0;
  *(int32_t *)(param_1 + 0x34c8) = 3;
  *(uint64_t *)(param_1 + 0x34e8) = 0;
  *(uint64_t *)(param_1 + 0x34f0) = 0;
  *(uint64_t *)(param_1 + 0x34f8) = 0;
  *(uint64_t *)(param_1 + 0x3500) = 0;
  *(uint64_t *)(param_1 + 0x3520) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x3528) = 0;
  *(int32_t *)(param_1 + 0x3530) = 0;
  *(uint64_t *)(param_1 + 0x3520) = &unknown_var_3480_ptr;
  *(int8_t **)(param_1 + 0x3528) = (int8_t *)(param_1 + 0x3538);
  *(int32_t *)(param_1 + 0x3530) = 0;
  *(int8_t *)(param_1 + 0x3538) = 0;
  *(uint64_t *)(param_1 + 0x3580) = 0;
  *(uint64_t *)(param_1 + 0x3598) = 0;
  *(uint64_t *)(param_1 + 0x35a0) = 0;
  *(uint64_t *)(param_1 + 0x35a8) = 0;
  *(uint64_t *)(param_1 + 0x35b0) = 0;
  *(uint64_t *)(param_1 + 0x35b8) = 0;
  *(uint64_t *)(param_1 + 0x95c8) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x95d0) = 0;
  *(int32_t *)(param_1 + 0x95d8) = 0;
  *(uint64_t *)(param_1 + 0x95c8) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x95e0) = 0;
  *(uint64_t *)(param_1 + 0x95d0) = 0;
  *(int32_t *)(param_1 + 0x95d8) = 0;
  *(uint64_t *)(param_1 + 0x95e8) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x95f0) = 0;
  *(int32_t *)(param_1 + 0x95f8) = 0;
  *(uint64_t *)(param_1 + 0x95e8) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x9600) = 0;
  *(uint64_t *)(param_1 + 0x95f0) = 0;
  *(int32_t *)(param_1 + 0x95f8) = 0;
  *(uint64_t *)(param_1 + 0x9620) = 0;
  *(code **)(param_1 + 0x9628) = _guard_check_icall;
  *(uint64_t *)(param_1 + 0x9640) = 0;
  *(code **)(param_1 + 0x9648) = _guard_check_icall;
  *(uint64_t *)(param_1 + 0x9670) = 0;
  *(code **)(param_1 + 0x9678) = _guard_check_icall;
  *(uint64_t *)(param_1 + 0x9688) = 0;
  *(uint64_t *)(param_1 + 0x9690) = 0;
  *(uint64_t *)(param_1 + 0x9698) = 0;
  *(uint64_t *)(param_1 + 0x96a0) = 0;
  *(uint64_t *)(param_1 + 0x96a8) = 0;
  *(uint64_t *)(param_1 + 0x96b0) = 0;
  *(uint64_t *)(param_1 + 0x96b8) = 0;
  *(uint64_t *)(param_1 + 0x96c0) = 0;
  *(int32_t *)(param_1 + 0x96c8) = 3;
  *(uint64_t *)(param_1 + 0x96d0) = 0;
  *(uint64_t *)(param_1 + 0x96d8) = 0;
  *(uint64_t *)(param_1 + 0x96e0) = 0;
  *(uint64_t *)(param_1 + 0x96e8) = 0;
  *(uint64_t *)(param_1 + 0x96f0) = 0;
  *(uint64_t *)(param_1 + 0x96f8) = 0;
  *(uint64_t *)(param_1 + 0x9700) = 0;
  *(uint64_t *)(param_1 + 0x9708) = 0;
  *(uint64_t *)(param_1 + 0x9718) = 0;
  *(uint64_t *)(param_1 + 0x9720) = 0;
  *(uint64_t *)(param_1 + 0x9728) = 0;
  *(uint64_t *)(param_1 + 0x9730) = 0;
  *(uint64_t *)(param_1 + 0x9738) = 0;
  *(uint64_t *)(param_1 + 0x9740) = 0;
  *(uint64_t *)(param_1 + 0x9748) = 0;
  *(uint64_t *)(param_1 + 0x97a0) = 0;
  *(uint64_t *)(param_1 + 0x97a8) = 0;
  *(uint64_t *)(param_1 + 0x97b0) = 0;
  *(uint64_t *)(param_1 + 0x97b8) = 0;
  *(uint64_t *)(param_1 + 0x97c0) = 0;
  *(uint64_t *)(param_1 + 0x9828) = 0;
  *(uint64_t *)(param_1 + 0x9830) = 0;
  *(uint64_t *)(param_1 + 0x9838) = 0;
  *(uint64_t *)(param_1 + 0x9840) = 0;
  *(uint64_t *)(param_1 + 0x9848) = 0;
  *(uint64_t *)(param_1 + 0x9850) = 0;
  *(uint64_t *)(param_1 + 39000) = 0;
  FUN_1808fc838(param_1 + 0x9860,8,2,&SUB_18005d5f0,FUN_180045af0);
  *(uint64_t *)(param_1 + 0x9870) = 0;
  *(uint64_t *)(param_1 + 0x9890) = 0;
  *(uint64_t *)(param_1 + 0x9898) = 0;
  *(uint64_t *)(param_1 + 0x98a0) = 0;
  *(int32_t *)(param_1 + 0x98a8) = 3;
  *(uint64_t *)(param_1 + 0x98b0) = 0;
  *(uint64_t *)(param_1 + 0x98b8) = 0;
  *(uint64_t *)(param_1 + 0x98c0) = 0;
  *(uint64_t *)(param_1 + 0x98d0) = 0;
  *(uint64_t *)(param_1 + 0x98d8) = 0;
  *(uint64_t *)(param_1 + 0x98e0) = 0;
  *(uint64_t *)(param_1 + 0x98e8) = 0;
  *(uint64_t *)(param_1 + 0x98f0) = 0;
  lVar2 = system_parameter_buffer + 0xee0;
  *(uint64_t *)(param_1 + 0x98f8) = 0;
  *(uint64_t *)(param_1 + 0x9900) = 0;
  *(uint64_t *)(param_1 + 0x9908) = 0;
  *(longlong *)(param_1 + 0x9910) = lVar2;
  *(uint64_t *)(param_1 + 0x9918) = 0;
  *(uint64_t *)(param_1 + 0x9920) = 0;
  *(uint64_t *)(param_1 + 0x9928) = 0;
  *(longlong *)(param_1 + 0x9930) = lVar2;
  *(uint64_t *)(param_1 + 0x9960) = 0;
  *(uint64_t *)(param_1 + 0x9968) = 0;
  *(uint64_t *)(param_1 + 0x9970) = 0;
  *(uint64_t *)(param_1 + 0x9978) = 0;
  *(uint64_t *)(param_1 + 0x9980) = 0;
  *(uint64_t *)(param_1 + 0x9988) = 0;
  *(uint64_t *)(param_1 + 0x9990) = 0;
  *(uint64_t *)(param_1 + 0x9998) = 0;
  *(uint64_t *)(param_1 + 0x99b8) = 0;
  *(uint64_t *)(param_1 + 0x99c0) = 0;
  *(uint64_t *)(param_1 + 0x99c8) = 0;
  *(uint64_t *)(param_1 + 0x99d0) = 0;
  *(uint64_t *)(param_1 + 0x99d8) = 0;
  *(uint64_t *)(param_1 + 0x99e0) = 0;
  *(int32_t *)(param_1 + 0x9a3c) = 0;
  *(int8_t *)(param_1 + 0x9a38) = 0;
  *(int32_t *)(param_1 + 0x9a34) = 0;
  *(int32_t *)(param_1 + 0x9a40) = 0x42c80000;
  LOCK();
  *(int32_t *)(param_1 + 0x11a48) = 0;
  UNLOCK();
  FUN_18024e5c0(param_1 + 0x11a50);
  *(uint64_t *)(param_1 + 0x11be8) = 0;
  *(uint64_t *)(param_1 + 0x11bf0) = 0;
  *(uint64_t *)(param_1 + 0x11bf8) = 0;
  *(int32_t *)(param_1 + 0x11c00) = 3;
  *(uint64_t *)(param_1 + 0x11c18) = 0;
  *(uint64_t *)(param_1 + 0x11c20) = 0;
  *(int32_t *)(param_1 + 0x11c28) = 0;
  *(int32_t *)(param_1 + 0x11c2c) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x11ccc) = 0;
  *(int32_t *)(param_1 + 0x11cf0) = 0xffffffff;
  FUN_180397660(param_1 + 0x11d00);
  *(uint64_t *)(param_1 + 0x124b0) = 0;
  *(uint64_t *)(param_1 + 0x124c8) = 0;
  *(uint64_t *)(param_1 + 0x125b8) = 0;
  *(uint64_t *)(param_1 + 0x125c0) = 0;
  *(uint64_t *)(param_1 + 0x125c8) = 0;
  *(uint64_t *)(param_1 + 0x125d0) = 0;
  *(uint64_t *)(param_1 + 0x125d8) = 0;
  *(uint64_t *)(param_1 + 0x125e0) = 0;
  *(uint64_t *)(param_1 + 0x125e8) = 0;
  *(uint64_t *)(param_1 + 0x125f0) = 0;
  *(uint64_t *)(param_1 + 0x125f8) = 0;
  *(uint64_t *)(param_1 + 0x12600) = 0;
  *(uint64_t *)(param_1 + 0x12608) = 0;
  *(uint64_t *)(param_1 + 0x12678) = 0;
  *(uint64_t *)(param_1 + 0x12680) = 0;
  *(uint64_t *)(param_1 + 0x12688) = 0;
  *(uint64_t *)(param_1 + 0x12690) = 0;
  *(uint64_t *)(param_1 + 0x12698) = 0;
  FUN_18024e300(param_1 + 0x126e0);
  *(uint64_t *)(param_1 + 0x12c00) = 0;
  *(uint64_t *)(param_1 + 0x12c20) = 0;
  *(code **)(param_1 + 0x12c28) = _guard_check_icall;
  *(uint64_t *)(param_1 + 0x99a8) = 0;
  *(int32_t *)(param_1 + 0x99b0) = 0;
  FUN_180246810(param_1);
  return param_1;
}






// 函数: void FUN_1802464c0(longlong param_1)
void FUN_1802464c0(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1802464f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802464f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))(param_1 + 0x68,0,0,param_4,0xfffffffffffffffe);
  }
  *(void **)(param_1 + 0x10) = &unknown_var_720_ptr;
  return;
}






// 函数: void FUN_180246540(ulonglong *param_1)
void FUN_180246540(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x18) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_180246560(longlong *param_1)
void FUN_180246560(longlong *param_1)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802465c0(longlong param_1)
void FUN_1802465c0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))();
  }
  return;
}






// 函数: void FUN_180246630(uint64_t *param_1)
void FUN_180246630(uint64_t *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  while( true ) {
    if (plVar1 == (longlong *)param_1[1]) {
      return;
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 4;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180246690(longlong *param_1)
void FUN_180246690(longlong *param_1)

{
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}






// 函数: void FUN_180246760(longlong *param_1)
void FUN_180246760(longlong *param_1)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802467d0(longlong *param_1)
void FUN_1802467d0(longlong *param_1)

{
  FUN_180057830();
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x38))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 5,8,2,FUN_180045af0);
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




