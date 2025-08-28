#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part136.c - 1 个函数

// 函数: void FUN_180131dad(void)
void FUN_180131dad(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  longlong in_RAX;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong unaff_RBX;
  byte bVar17;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar18;
  undefined8 unaff_R15;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 unaff_XMM6_Da;
  float fVar28;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar29;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  bVar17 = *(byte *)(unaff_RBX + 8);
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  bVar17 = bVar17 & 1;
  bVar3 = *(byte *)(unaff_RBX + 8);
  *(undefined8 *)(in_RAX + 0x20) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(undefined1 *)(unaff_RBX + 0x38f) = 0;
  if (((bVar3 & 2) == 0) || ((*(byte *)(unaff_RBX + 0xc) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((((0.0 < *(float *)(unaff_RBX + 0x338)) || (0.0 < *(float *)(unaff_RBX + 0x340))) ||
        (0.0 < *(float *)(unaff_RBX + 0x33c))) || (0.0 < *(float *)(unaff_RBX + 0x344))) {
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 4;
    }
  }
  if (bVar17 != 0) {
    if ((-1 < *(int *)(unaff_RBX + 0x6c)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x6c) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x338) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x70)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x70) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x340) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x74)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x74) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x33c) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x40)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x40) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x37c) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x44)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x44) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x380) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x48)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x48) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 900) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if ((-1 < *(int *)(unaff_RBX + 0x4c)) &&
       (*(char *)((longlong)*(int *)(unaff_RBX + 0x4c) + 0x138 + unaff_RBX) != '\0')) {
      *(undefined4 *)(unaff_RBX + 0x388) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0x1cc0) = 3;
    }
    if (*(char *)(unaff_RBX + 0x134) != '\0') {
      *(undefined4 *)(unaff_RBX + 0x370) = 0x3f800000;
    }
    if (*(char *)(unaff_RBX + 0x135) != '\0') {
      *(undefined4 *)(unaff_RBX + 0x374) = 0x3f800000;
    }
    if (*(char *)(unaff_RBX + 0x136) != '\0') {
      *(undefined4 *)(unaff_RBX + 0x378) = 0x3f800000;
    }
  }
  uVar12 = 0;
  *(undefined8 *)(unaff_RBX + 0x14dc) = *(undefined8 *)(unaff_RBX + 0x1488);
  *(undefined8 *)(unaff_RBX + 0x14e4) = *(undefined8 *)(unaff_RBX + 0x1490);
  *(undefined8 *)(unaff_RBX + 0x14ec) = *(undefined8 *)(unaff_RBX + 0x1498);
  *(undefined8 *)(unaff_RBX + 0x14f4) = *(undefined8 *)(unaff_RBX + 0x14a0);
  *(undefined8 *)(unaff_RBX + 0x14fc) = *(undefined8 *)(unaff_RBX + 0x14a8);
  *(undefined8 *)(unaff_RBX + 0x1504) = *(undefined8 *)(unaff_RBX + 0x14b0);
  *(undefined8 *)(unaff_RBX + 0x150c) = *(undefined8 *)(unaff_RBX + 0x14b8);
  *(undefined8 *)(unaff_RBX + 0x1514) = *(undefined8 *)(unaff_RBX + 0x14c0);
  *(undefined8 *)(unaff_RBX + 0x151c) = *(undefined8 *)(unaff_RBX + 0x14c8);
  *(undefined8 *)(unaff_RBX + 0x1524) = *(undefined8 *)(unaff_RBX + 0x14d0);
  *(undefined4 *)(unaff_RBX + 0x152c) = *(undefined4 *)(unaff_RBX + 0x14d8);
  uVar16 = uVar12;
  do {
    fVar24 = -1.0;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x338 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x1488 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x1488 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x33c + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x148c + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x148c + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x340 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x1490 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x1490 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x344 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x1494 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x1494 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x348 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x1498 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x1498 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x34c + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x149c + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x149c + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x350 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14a0 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14a0 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x354 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14a4 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14a4 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x358 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14a8 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14a8 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x35c + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14ac + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14ac + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x360 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14b0 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14b0 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x364 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14b4 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14b4 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x368 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14b8 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14b8 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x36c + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14bc + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14bc + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x370 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14c0 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14c0 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x374 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14c4 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14c4 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x378 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14c8 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14c8 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x37c + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14cc + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14cc + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 0x380 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14d0 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14d0 + uVar12 * 4) = fVar29;
    fVar29 = fVar24;
    if (0.0 < *(float *)(unaff_RBX + 900 + uVar12 * 4)) {
      fVar29 = *(float *)(unaff_RBX + 0x14d4 + uVar12 * 4);
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar29 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14d4 + uVar12 * 4) = fVar29;
    if (0.0 < *(float *)(unaff_RBX + 0x388 + uVar12 * 4)) {
      fVar24 = *(float *)(unaff_RBX + 0x14d8 + uVar12 * 4);
      if (0.0 <= fVar24) {
        fVar24 = fVar24 + *(float *)(unaff_RBX + 0x18);
      }
      else {
        fVar24 = 0.0;
      }
    }
    *(float *)(unaff_RBX + 0x14d8 + uVar12 * 4) = fVar24;
    uVar15 = (int)uVar16 + 0x15;
    uVar16 = (ulonglong)uVar15;
    uVar12 = uVar12 + 0x15;
  } while ((int)uVar15 < 0x15);
  iVar11 = *(int *)(unaff_RBX + 0x1d0c);
  if ((iVar11 != 0) &&
     ((*(char *)(unaff_RBX + 0x1d06) == '\0' || (*(char *)(unaff_RBX + 0x1d0a) != '\0')))) {
    iVar4 = *(int *)(unaff_RBX + 0x1cfc);
    cVar7 = *(char *)(unaff_RBX + 0x1d0a);
    *(int *)(unaff_RBX + 0x1ca0) = iVar11;
    *(int *)(*(longlong *)(unaff_RBX + 0x1c98) + 0x3c8 + (longlong)iVar4 * 4) = iVar11;
    if (cVar7 != '\0') {
      uVar22 = *(undefined8 *)(unaff_RBX + 0x1d18);
      puVar1 = (undefined8 *)(*(longlong *)(unaff_RBX + 0x1c98) + ((longlong)iVar4 + 0x3d) * 0x10);
      *puVar1 = *(undefined8 *)(unaff_RBX + 0x1d10);
      puVar1[1] = uVar22;
      *(undefined2 *)(unaff_RBX + 0x1d05) = 1;
      *(undefined1 *)(unaff_RBX + 0x1d07) = 1;
    }
    uVar22 = *(undefined8 *)(unaff_RBX + 0x1d18);
    puVar1 = (undefined8 *)
             (*(longlong *)(unaff_RBX + 0x1c98) +
             ((longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d) * 0x10);
    *puVar1 = *(undefined8 *)(unaff_RBX + 0x1d10);
    puVar1[1] = uVar22;
  }
  *(undefined2 *)(unaff_RBX + 0x1d09) = 0;
  *(undefined4 *)(unaff_RBX + 0x1d0c) = 0;
  *(undefined4 *)(unaff_RBX + 0x1cb8) = 0;
  if (*(char *)(unaff_RBX + 0x1d21) != '\0') {
    FUN_180133110();
  }
  if (*(int *)(unaff_RBX + 0x1d28) == 2) {
    if ((*(int *)(unaff_RBX + 0x1d38) == 0) && (*(int *)(unaff_RBX + 0x1d98) == 0)) {
      *(undefined1 *)(unaff_RBX + 0x1d06) = 0;
    }
    *(undefined4 *)(unaff_RBX + 0x1d28) = 0;
  }
  if ((*(char *)(unaff_RBX + 0x1d05) != '\0') && (*(char *)(unaff_RBX + 0x1d04) != '\0')) {
    if ((((*(byte *)(unaff_RBX + 8) & 4) != 0) &&
        ((((*(byte *)(unaff_RBX + 0xc) & 4) != 0 && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
         (*(char *)(unaff_RBX + 0x1d07) != '\0')))) && (*(longlong *)(unaff_RBX + 0x1c98) != 0)) {
      puVar13 = (undefined4 *)func_0x000180131890(&stack0x000000b0);
      uVar10 = *puVar13;
      uVar2 = puVar13[1];
      *(undefined4 *)(unaff_RBX + 0x3b4) = uVar10;
      *(undefined4 *)(unaff_RBX + 0x3b8) = uVar2;
      *(undefined4 *)(unaff_RBX + 0x118) = uVar10;
      *(undefined4 *)(unaff_RBX + 0x11c) = uVar2;
      *(undefined1 *)(unaff_RBX + 0x38f) = 1;
    }
    *(undefined1 *)(unaff_RBX + 0x1d05) = 0;
  }
  lVar18 = *(longlong *)(unaff_RBX + 0x1c98);
  *(undefined1 *)(unaff_RBX + 0x1d04) = 0;
  *(undefined4 *)(unaff_RBX + 0x1cb4) = 0;
  for (lVar14 = lVar18; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x398)) {
    if ((*(uint *)(lVar14 + 0xc) & 0x15000000) != 0x1000000) {
      if (lVar14 != lVar18) {
        *(longlong *)(lVar14 + 0x3c0) = lVar18;
      }
      break;
    }
  }
  lVar18 = *(longlong *)(unaff_RBX + 0x1c98);
  if (((lVar18 != 0) && (*(longlong *)(lVar18 + 0x3c0) != 0)) && (*(int *)(unaff_RBX + 0x1cfc) == 0)
     ) {
    *(undefined8 *)(lVar18 + 0x3c0) = 0;
  }
  FUN_180133790();
  if (((bVar17 == 0) && (!bVar5)) ||
     ((*(longlong *)(unaff_RBX + 0x1c98) == 0 ||
      ((*(uint *)(*(longlong *)(unaff_RBX + 0x1c98) + 0xc) & 0x40000) != 0)))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  *(char *)(unaff_RBX + 0x391) = cVar7;
  lVar18 = _DAT_180c8a9b0;
  if ((((cVar7 == '\0') || (*(int *)(unaff_RBX + 0x1ca0) == 0)) ||
      (*(char *)(unaff_RBX + 0x1d06) != '\0')) &&
     ((*(longlong *)(unaff_RBX + 0x1cd8) == 0 && (*(char *)(unaff_RBX + 0x1d09) == '\0')))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)(unaff_RBX + 0x392) = uVar8;
  if ((0.0 <= *(float *)(lVar18 + 0x148c)) && (*(float *)(lVar18 + 0x148c) == 0.0)) {
    if (*(int *)(unaff_RBX + 0x1b2c) == 0) {
      lVar14 = *(longlong *)(unaff_RBX + 0x1c98);
      if ((((lVar14 == 0) || ((*(uint *)(lVar14 + 0xc) & 0x5000000) != 0x1000000)) ||
          (*(longlong *)(lVar14 + 0x398) == 0)) || (lVar14 == *(longlong *)(lVar14 + 0x3a8))) {
        iVar11 = *(int *)(unaff_RBX + 0x1bb0);
        if (iVar11 < 1) {
          if (*(int *)(unaff_RBX + 0x1cfc) == 0) {
            if ((lVar14 != 0) &&
               (((*(uint *)(lVar14 + 0xc) >> 0x1a & 1) != 0 ||
                ((*(uint *)(lVar14 + 0xc) >> 0x18 & 1) == 0)))) {
              *(undefined4 *)(lVar14 + 0x3c8) = 0;
            }
            *(undefined4 *)(unaff_RBX + 0x1ca0) = 0;
          }
          else {
            func_0x000180131750(0);
          }
        }
        else if ((*(uint *)(*(longlong *)
                             (*(longlong *)(unaff_RBX + 0x1bb8) + -0x28 + (longlong)iVar11 * 0x30) +
                           0xc) & 0x8000000) == 0) {
          FUN_18012ee20(iVar11 + -1,CONCAT71((int7)(int3)((uint)iVar11 >> 8),1));
          lVar18 = _DAT_180c8a9b0;
        }
      }
      else {
        FUN_18012d2e0();
        uVar10 = *(undefined4 *)(lVar14 + 0x88);
        *(undefined4 *)(lVar18 + 0x1ca0) = uVar10;
        *(undefined4 *)(*(longlong *)(lVar18 + 0x1c98) + 0x3c8) = uVar10;
        *(undefined1 *)(unaff_RBX + 0x1d04) = 0;
        if (*(char *)(unaff_RBX + 0x1d07) != '\0') {
          *(undefined1 *)(unaff_RBX + 0x1d05) = 1;
        }
      }
    }
    else {
      *(bool *)(lVar18 + 0x1b3c) = *(int *)(lVar18 + 0x1b2c) != 0;
      if (*(int *)(lVar18 + 0x1b2c) != 0) {
        *(undefined4 *)(lVar18 + 0x1b38) = 0;
        *(undefined1 *)(lVar18 + 0x1b3e) = 0;
      }
      *(undefined4 *)(lVar18 + 0x1b2c) = 0;
      *(undefined4 *)(lVar18 + 0x1b44) = 0;
      *(undefined1 *)(lVar18 + 0x1b3d) = 0;
      *(undefined8 *)(lVar18 + 0x1b50) = 0;
    }
  }
  iVar11 = *(int *)(unaff_RBX + 0x1ca0);
  *(undefined8 *)(unaff_RBX + 0x1cac) = 0;
  *(undefined8 *)(unaff_RBX + 0x1ca4) = 0;
  if (((iVar11 != 0) && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
     ((*(longlong *)(unaff_RBX + 0x1cd8) == 0 &&
      ((*(longlong *)(unaff_RBX + 0x1c98) != 0 &&
       ((*(uint *)(*(longlong *)(unaff_RBX + 0x1c98) + 0xc) & 0x40000) == 0)))))) {
    bVar5 = *(float *)(lVar18 + 0x338) <= 0.0;
    if ((bVar5) || ((*(float *)(lVar18 + 0x1488) < 0.0 || (*(float *)(lVar18 + 0x1488) != 0.0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar4 = *(int *)(unaff_RBX + 0x1b2c);
    if (iVar4 == 0) {
      if (bVar6) {
        *(int *)(unaff_RBX + 0x1ca4) = iVar11;
      }
LAB_1801327bd:
      iVar9 = *(int *)(unaff_RBX + 0x1ca8);
      if (!bVar5) {
        iVar9 = iVar11;
      }
      *(int *)(unaff_RBX + 0x1ca8) = iVar9;
    }
    else if (iVar4 == iVar11) goto LAB_1801327bd;
    if ((iVar4 == 0) || (iVar4 == iVar11)) {
      iVar9 = *(int *)(unaff_RBX + 0x1cac);
      if (bVar6) {
        iVar9 = iVar11;
      }
      *(int *)(unaff_RBX + 0x1cac) = iVar9;
    }
    if ((((iVar4 == 0) || (iVar4 == iVar11)) && (0.0 <= *(float *)(lVar18 + 0x1490))) &&
       (*(float *)(lVar18 + 0x1490) == 0.0)) {
      *(int *)(unaff_RBX + 0x1cb0) = iVar11;
    }
  }
  lVar14 = *(longlong *)(unaff_RBX + 0x1c98);
  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 0xc) & 0x40000) != 0)) {
    *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
  }
  iVar11 = *(int *)(unaff_RBX + 0x1cbc);
  *(undefined1 *)(unaff_RBX + 0x1d21) = 0;
  if (iVar11 != 0) {
    *(int *)(unaff_RBX + 0x1cb0) = iVar11;
    *(int *)(unaff_RBX + 0x1cac) = iVar11;
    *(int *)(unaff_RBX + 0x1ca8) = iVar11;
    *(int *)(unaff_RBX + 0x1ca4) = iVar11;
  }
  uVar16 = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1cbc) = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
    uVar16 = (ulonglong)*(uint *)(unaff_RBX + 0x1b44);
  }
  if (*(int *)(unaff_RBX + 0x1d28) == 0) {
    *(undefined4 *)(unaff_RBX + 0x1d2c) = 0xffffffff;
    *(undefined4 *)(unaff_RBX + 0x1d24) = 0;
    if (((lVar14 != 0) && (*(longlong *)(unaff_RBX + 0x1cd8) == 0)) &&
       (((int)uVar16 != 0 && ((*(uint *)(lVar14 + 0xc) & 0x40000) == 0)))) {
      if ((uVar16 & 1) != 0) {
        if (0.0 <= *(float *)(lVar18 + 0x1498)) {
          iVar11 = func_0x000180128180(lVar14,*(float *)(lVar18 + 0x1498) -
                                              *(float *)(lVar18 + 0x18),
                                       *(float *)(lVar18 + 0x90) * 0.8,
                                       *(float *)(lVar18 + 0x94) * 0.8);
          fVar24 = (float)iVar11;
        }
        else {
          fVar24 = 0.0;
        }
        if (0.0 <= *(float *)(lVar18 + 0x14cc)) {
          iVar11 = func_0x000180128180();
          fVar29 = (float)iVar11;
        }
        else {
          fVar29 = 0.0;
        }
        uVar10 = *(undefined4 *)(unaff_RBX + 0x1d2c);
        if (0.0 < fVar29 + fVar24) {
          uVar10 = 0;
        }
        *(undefined4 *)(unaff_RBX + 0x1d2c) = uVar10;
      }
      if ((uVar16 & 2) != 0) {
        if (0.0 <= *(float *)(lVar18 + 0x149c)) {
          iVar11 = func_0x000180128180();
          fVar24 = (float)iVar11;
        }
        else {
          fVar24 = 0.0;
        }
        if (0.0 <= *(float *)(lVar18 + 0x14d0)) {
          iVar11 = func_0x000180128180();
          fVar29 = (float)iVar11;
        }
        else {
          fVar29 = 0.0;
        }
        uVar10 = *(undefined4 *)(unaff_RBX + 0x1d2c);
        if (0.0 < fVar29 + fVar24) {
          uVar10 = 1;
        }
        *(undefined4 *)(unaff_RBX + 0x1d2c) = uVar10;
      }
      if ((uVar16 & 4) != 0) {
        if (0.0 <= *(float *)(lVar18 + 0x14a0)) {
          iVar11 = func_0x000180128180();
          fVar24 = (float)iVar11;
        }
        else {
          fVar24 = 0.0;
        }
        if (0.0 <= *(float *)(lVar18 + 0x14d4)) {
          iVar11 = func_0x000180128180();
          fVar29 = (float)iVar11;
        }
        else {
          fVar29 = 0.0;
        }
        uVar10 = *(undefined4 *)(unaff_RBX + 0x1d2c);
        if (0.0 < fVar29 + fVar24) {
          uVar10 = 2;
        }
        *(undefined4 *)(unaff_RBX + 0x1d2c) = uVar10;
      }
      if ((uVar16 & 8) != 0) {
        if (0.0 <= *(float *)(lVar18 + 0x14a4)) {
          iVar11 = func_0x000180128180();
          fVar24 = (float)iVar11;
        }
        else {
          fVar24 = 0.0;
        }
        if (0.0 <= *(float *)(lVar18 + 0x14d8)) {
          iVar11 = func_0x000180128180();
          fVar29 = (float)iVar11;
        }
        else {
          fVar29 = 0.0;
        }
        uVar10 = *(undefined4 *)(unaff_RBX + 0x1d2c);
        if (0.0 < fVar29 + fVar24) {
          uVar10 = 3;
        }
        *(undefined4 *)(unaff_RBX + 0x1d2c) = uVar10;
      }
    }
    *(undefined4 *)(unaff_RBX + 0x1d34) = *(undefined4 *)(unaff_RBX + 0x1d2c);
  }
  else {
    *(undefined4 *)(unaff_RBX + 0x1d28) = 2;
  }
  fVar24 = 0.0;
  if (bVar17 != 0) {
    fVar24 = (float)FUN_1801333d0(uVar16 & 0xffffffff);
  }
  if (*(int *)(unaff_RBX + 0x1d2c) == -1) {
    if (*(char *)(unaff_RBX + 0x1d21) != '\0') goto LAB_180132ba2;
  }
  else {
    *(undefined1 *)(unaff_RBX + 0x1d21) = 1;
    *(int *)(unaff_RBX + 0x1d30) = *(int *)(unaff_RBX + 0x1d2c);
LAB_180132ba2:
    if (*(int *)(unaff_RBX + 0x1ca0) == 0) {
      *(undefined2 *)(unaff_RBX + 0x1d09) = 0x101;
      *(undefined4 *)(unaff_RBX + 0x1d0c) = 0;
      *(undefined1 *)(unaff_RBX + 0x1d06) = 0;
    }
  }
  if ((*(char *)(lVar18 + 0x1d21) == '\0') && (*(char *)(lVar18 + 0x1d09) == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)(lVar18 + 0x1d08) = uVar8;
  lVar14 = *(longlong *)(unaff_RBX + 0x1c98);
  if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0xc) & 0x40000) != 0)) ||
     (*(longlong *)(unaff_RBX + 0x1cd8) != 0)) goto LAB_180132de6;
  fVar29 = (float)(int)(*(float *)(lVar18 + 0x19fc) * *(float *)(lVar14 + 0x2d8) *
                        *(float *)(lVar14 + 0x2dc) * 100.0 * *(float *)(unaff_RBX + 0x18) + 0.5);
  if (((*(int *)(lVar14 + 0x174) == 0) && (*(char *)(lVar14 + 0x17d) != '\0')) &&
     (*(char *)(unaff_RBX + 0x1d21) != '\0')) {
    iVar11 = *(int *)(unaff_RBX + 0x1d2c);
    if (iVar11 == 0) {
      fVar19 = -fVar29;
LAB_180132c8d:
      fVar20 = *(float *)(lVar14 + 0x8c);
      fVar19 = (float)(int)(fVar19 + fVar20);
      *(float *)(lVar14 + 0x8c) = fVar19;
      *(float *)(lVar14 + 0x118) = (fVar20 + *(float *)(lVar14 + 0x118)) - fVar19;
      iVar11 = *(int *)(unaff_RBX + 0x1d2c);
    }
    else {
      fVar19 = fVar29;
      if (iVar11 == 1) goto LAB_180132c8d;
    }
    if (iVar11 == 2) {
      fVar19 = -fVar29;
    }
    else {
      fVar19 = fVar29;
      if (iVar11 != 3) goto LAB_180132d15;
    }
    fVar20 = *(float *)(lVar14 + 0x90);
    fVar19 = (float)(int)(fVar19 + fVar20);
    *(float *)(lVar14 + 0x90) = fVar19;
    *(float *)(lVar14 + 0x11c) = (fVar20 + *(float *)(lVar14 + 0x11c)) - fVar19;
  }
LAB_180132d15:
  FUN_180131aa0(&stack0x000000b0,4,0,0x3dcccccd,0x41200000);
  if ((fStack00000000000000b0 != 0.0) && (*(char *)(lVar14 + 0xac) != '\0')) {
    fVar19 = *(float *)(lVar14 + 0x8c);
    fVar20 = (float)(int)(fStack00000000000000b0 * fVar29 + fVar19);
    *(float *)(lVar14 + 0x8c) = fVar20;
    *(float *)(lVar14 + 0x118) = (fVar19 + *(float *)(lVar14 + 0x118)) - fVar20;
    *(undefined1 *)(unaff_RBX + 0x1d20) = 1;
  }
  if (fStack00000000000000b4 != 0.0) {
    fVar19 = *(float *)(lVar14 + 0x90);
    fVar29 = (float)(int)(fStack00000000000000b4 * fVar29 + fVar19);
    *(float *)(lVar14 + 0x90) = fVar29;
    *(float *)(lVar14 + 0x11c) = (fVar19 + *(float *)(lVar14 + 0x11c)) - fVar29;
    *(undefined1 *)(unaff_RBX + 0x1d20) = 1;
  }
LAB_180132de6:
  *(undefined8 *)(unaff_RBX + 0x1d54) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(unaff_RBX + 0x1d5c) = 0xff7fffffff7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d38) = 0;
  *(undefined8 *)(unaff_RBX + 0x1d40) = 0;
  *(undefined4 *)(unaff_RBX + 0x1d50) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d4c) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d48) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d68) = 0;
  *(undefined8 *)(unaff_RBX + 0x1d70) = 0;
  *(undefined4 *)(unaff_RBX + 0x1d80) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d7c) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d78) = 0x7f7fffff;
  *(undefined8 *)(unaff_RBX + 0x1d84) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(unaff_RBX + 0x1d8c) = 0xff7fffffff7fffff;
  *(undefined4 *)(unaff_RBX + 0x1d98) = 0;
  *(undefined8 *)(unaff_RBX + 0x1da0) = 0;
  *(undefined4 *)(unaff_RBX + 0x1db0) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1dac) = 0x7f7fffff;
  *(undefined4 *)(unaff_RBX + 0x1da8) = 0x7f7fffff;
  *(undefined8 *)(unaff_RBX + 0x1db4) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(unaff_RBX + 0x1dbc) = 0xff7fffffff7fffff;
  if (((*(char *)(unaff_RBX + 0x1d21) != '\0') && (*(char *)(unaff_RBX + 0x1d20) != '\0')) &&
     (*(int *)(unaff_RBX + 0x1cfc) == 0)) {
    lVar14 = *(longlong *)(unaff_RBX + 0x1c98);
    fVar29 = *(float *)(lVar14 + 0x3d0);
    fVar28 = (*(float *)(lVar14 + 0x248) - *(float *)(lVar14 + 0x40)) - 1.0;
    fVar20 = (*(float *)(lVar14 + 0x250) - *(float *)(lVar14 + 0x40)) + 1.0;
    fVar27 = (*(float *)(lVar14 + 0x254) - *(float *)(lVar14 + 0x44)) + 1.0;
    fVar19 = (*(float *)(lVar14 + 0x24c) - *(float *)(lVar14 + 0x44)) - 1.0;
    if (((fVar29 < fVar28) ||
        (*(float *)(lVar14 + 0x3d4) <= fVar19 && fVar19 != *(float *)(lVar14 + 0x3d4))) ||
       ((fVar20 < *(float *)(lVar14 + 0x3d8) || (fVar27 < *(float *)(lVar14 + 0x3dc))))) {
      fVar21 = *(float *)(lVar18 + 0x19fc) * *(float *)(lVar14 + 0x2d8) * *(float *)(lVar14 + 0x2dc)
               * 0.5;
      fVar26 = fVar27 - fVar19;
      if (fVar21 <= fVar27 - fVar19) {
        fVar26 = fVar21;
      }
      fVar25 = fVar20 - fVar28;
      if (fVar21 <= fVar20 - fVar28) {
        fVar25 = fVar21;
      }
      fVar19 = fVar19 - -fVar26;
      fVar28 = fVar28 - -fVar25;
      fVar20 = fVar20 + -fVar25;
      fVar27 = fVar27 + -fVar26;
      if (fVar19 <= *(float *)(lVar14 + 0x3d4)) {
        fVar19 = *(float *)(lVar14 + 0x3d4);
      }
      if (fVar28 <= fVar29) {
        fVar28 = fVar29;
      }
      *(float *)(lVar14 + 0x3d4) = fVar19;
      *(float *)(lVar14 + 0x3d0) = fVar28;
      if (*(float *)(lVar14 + 0x3d8) <= fVar20) {
        fVar20 = *(float *)(lVar14 + 0x3d8);
      }
      if (*(float *)(lVar14 + 0x3dc) <= fVar27) {
        fVar27 = *(float *)(lVar14 + 0x3dc);
      }
      *(float *)(lVar14 + 0x3d8) = fVar20;
      *(float *)(lVar14 + 0x3dc) = fVar27;
      *(undefined4 *)(unaff_RBX + 0x1ca0) = 0;
    }
    *(undefined1 *)(unaff_RBX + 0x1d20) = 0;
  }
  lVar18 = *(longlong *)(unaff_RBX + 0x1c98);
  if (((lVar18 == 0) ||
      (lVar14 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d,
      *(float *)(lVar18 + 8 + lVar14 * 0x10) < *(float *)(lVar18 + lVar14 * 0x10))) ||
     (*(float *)(lVar18 + 0xc + lVar14 * 0x10) < *(float *)(lVar18 + 4 + lVar14 * 0x10))) {
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar18 + lVar14 * 0x10);
    uVar22 = *puVar1;
    uVar23 = puVar1[1];
  }
  if (lVar18 == 0) {
    _fStack0000000000000030 = 0;
    _fStack0000000000000038 = 0;
  }
  else {
    fStack0000000000000038 = (float)uVar23;
    fStack0000000000000030 = (float)uVar22;
    fStack000000000000003c = (float)((ulonglong)uVar23 >> 0x20);
    fStack0000000000000034 = (float)((ulonglong)uVar22 >> 0x20);
    _fStack0000000000000038 =
         CONCAT44(*(float *)(lVar18 + 0x44) + fStack000000000000003c,
                  *(float *)(lVar18 + 0x40) + fStack0000000000000038);
    _fStack0000000000000030 =
         CONCAT44(*(float *)(lVar18 + 0x44) + fStack0000000000000034,
                  *(float *)(lVar18 + 0x40) + fStack0000000000000030);
  }
  *(undefined8 *)(unaff_RBX + 0x1cc4) = _fStack0000000000000030;
  *(undefined8 *)(unaff_RBX + 0x1ccc) = _fStack0000000000000038;
  *(float *)(unaff_RBX + 0x1cd0) = fVar24 + *(float *)(unaff_RBX + 0x1cd0);
  *(float *)(unaff_RBX + 0x1cc8) = fVar24 + *(float *)(unaff_RBX + 0x1cc8);
  fVar24 = *(float *)(unaff_RBX + 0x1cc4) + 1.0;
  *(undefined4 *)(unaff_RBX + 0x1cd4) = 0;
  if (*(float *)(unaff_RBX + 0x1ccc) <= fVar24) {
    fVar24 = *(float *)(unaff_RBX + 0x1ccc);
  }
  *(float *)(unaff_RBX + 0x1cc4) = fVar24;
  *(float *)(unaff_RBX + 0x1ccc) = fVar24;
  return;
}





