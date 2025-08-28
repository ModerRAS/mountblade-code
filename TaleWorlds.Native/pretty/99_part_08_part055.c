#include "TaleWorlds.Native.Split.h"

// 99_part_08_part055.c - 4 个函数

// 函数: void FUN_1805aed50(longlong param_1,float *param_2)
void FUN_1805aed50(longlong param_1,float *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float afStack_48 [16];
  
  afStack_48[0] = *param_2;
  afStack_48[1] = param_2[1];
  afStack_48[2] = param_2[2];
  afStack_48[3] = param_2[3];
  fVar14 = 0.0;
  iVar3 = FUN_180084000(afStack_48);
  uVar9 = 0;
  uVar8 = uVar9;
  pfVar10 = afStack_48 + 1;
  do {
    iVar7 = (int)uVar8;
    fVar12 = ABS(pfVar10[-1]);
    fVar11 = ABS(*pfVar10);
    fVar13 = fVar12;
    if (fVar12 <= fVar14) {
      fVar13 = fVar14;
    }
    iVar6 = iVar7;
    if (fVar12 <= fVar14) {
      iVar6 = iVar3;
    }
    fVar14 = fVar13;
    if (fVar13 <= fVar11) {
      fVar14 = fVar11;
    }
    iVar3 = iVar7 + 1;
    if (fVar11 <= fVar13) {
      iVar3 = iVar6;
    }
    iVar6 = iVar7 + 2;
    fVar13 = ABS(pfVar10[1]);
    if (ABS(pfVar10[1]) <= fVar14) {
      iVar6 = iVar3;
      fVar13 = fVar14;
    }
    iVar3 = iVar7 + 3;
    fVar14 = ABS(pfVar10[2]);
    if (ABS(pfVar10[2]) <= fVar13) {
      iVar3 = iVar6;
      fVar14 = fVar13;
    }
    uVar8 = (ulonglong)(iVar7 + 4U);
    pfVar10 = pfVar10 + 4;
  } while ((int)(iVar7 + 4U) < 4);
  if (afStack_48[iVar3] <= 0.0 && afStack_48[iVar3] != 0.0) {
    afStack_48[0] = -afStack_48[0];
    afStack_48[1] = -afStack_48[1];
    afStack_48[2] = -afStack_48[2];
    afStack_48[3] = -afStack_48[3];
  }
  cVar2 = FUN_180645c10(param_1,iVar3,&UNK_1809fa3a0);
  do {
    if (uVar9 != (longlong)iVar3) {
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        uVar4 = FUN_18055f6f0(&UNK_1809fa4f0,afStack_48[uVar9]);
        iVar7 = *(int *)(param_1 + 0x5c4);
        bVar5 = (byte)iVar7 & 0x1f;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x1f;
          bVar5 = bVar5 - 0x20;
        }
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar4 << (bVar5 & 0x3f);
        cVar2 = '\x01';
        *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 6;
        *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 6;
      }
    }
    uVar9 = uVar9 + 1;
  } while ((longlong)uVar9 < 4);
  return;
}






// 函数: void FUN_1805af0d0(longlong param_1,longlong param_2,char param_3)
void FUN_1805af0d0(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  if (param_3 == '\0') {
    lVar8 = *(longlong *)(param_2 + 0x658);
    *(undefined **)(lVar8 + 0x138) = &UNK_1805afb80;
    *(longlong *)(lVar8 + 0x130) = param_1;
    lVar8 = *(longlong *)(param_2 + 0x590);
    *(undefined1 **)(lVar8 + 0x24f8) = &SUB_1805afbb0;
    *(longlong *)(lVar8 + 0x24f0) = param_1;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x568);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x6b0);
  lVar8 = *(longlong *)(param_2 + 0x6d8);
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x8be) == '\0')) {
    uVar14 = 0x3f800000;
  }
  else {
    uVar14 = *(undefined4 *)(lVar8 + 0x8c0);
  }
  *(undefined4 *)(param_1 + 0x15c) = uVar14;
  uVar14 = 0;
  uVar12 = *(undefined4 *)(param_2 + 0x564);
  lVar8 = *(longlong *)(param_2 + 0x8d8);
  *(undefined4 *)(param_1 + 0x1d4) = uVar12;
  lVar9 = lVar8 + 0x30a0;
  uVar1 = *(undefined4 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(byte *)(param_1 + 0x98) = (byte)((uint)uVar12 >> 0x1f) ^ 1;
  *(byte *)(param_1 + 0x99) = (byte)((uint)uVar1 >> 0x1f) ^ 1;
  if (*(int *)(param_2 + 0x564) < 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)
              (*(longlong *)((longlong)*(int *)(param_2 + 0x564) * 0xa60 + 0x6d8 + lVar9) + 0x8c0);
  }
  *(undefined4 *)(param_1 + 0x160) = uVar12;
  FUN_1805afa10(param_1);
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar12 = 0x42480000;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)*(int *)(param_2 + 0x560) * 0xa60 + 0x3d8 + lVar9);
  }
  lVar10 = 0;
  *(undefined4 *)(param_1 + 0x138) = uVar12;
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)*(int *)(param_2 + 0x560) * 0xa60 + 0x570 + lVar9);
  }
  *(undefined4 *)(param_1 + 0x17c) = uVar12;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x58c);
  fVar13 = *(float *)(param_2 + 0x3a4) + *(float *)(param_2 + 0x38c) +
           (float)*(int *)(param_2 + 0x58c);
  if (*(longlong *)(param_2 + 0x6d8) != 0) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x6d8) + 0x8c0);
    fVar13 = fVar11 * fVar13 * fVar11 * fVar11;
  }
  if (-1 < *(int *)(param_2 + 0x560)) {
    fVar11 = (float)FUN_180524cf0((longlong)*(int *)(param_2 + 0x560) * 0xa60 +
                                  *(longlong *)(param_2 + 0x8d8) + 0x30a0);
    fVar13 = fVar13 + fVar11;
  }
  *(float *)(param_1 + 0x158) = fVar13;
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)*(int *)(param_2 + 0x564) * 0xa60 + 0x8b0 + lVar9);
  }
  *(undefined4 *)(param_1 + 0x164) = uVar12;
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)*(int *)(param_2 + 0x564) * 0xa60 + 0x8b4 + lVar9);
  }
  *(undefined4 *)(param_1 + 0x168) = uVar12;
  func_0x0001805afb00(param_1,*(undefined8 *)(param_2 + 0x8f8));
  if ((*(longlong *)(param_2 + 0x658) == 0) ||
     (2 < (ushort)(*(short *)(*(longlong *)(param_2 + 0x658) + 0x40) - 2U))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x198) = uVar5;
  if ((*(int *)(param_2 + 0x568) == 1) || (*(char *)(param_2 + 0xa50) == (char)lVar10)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x199) = uVar5;
  *(longlong *)(param_1 + 0x1a8) = param_2 + 0x74c;
  *(longlong *)(param_1 + 0x1b0) = param_2 + 0x794;
  if (*(char *)(param_1 + 0x98) != (char)lVar10) {
    lVar10 = lVar8 + 0x37ec + (longlong)*(int *)(param_2 + 0x564) * 0xa60;
  }
  *(longlong *)(param_1 + 0x1c8) = param_2 + 0x690;
  *(longlong *)(param_1 + 0x1b8) = lVar10;
  if (*(char *)(param_1 + 0x99) == '\0') {
LAB_1805af41f:
    uVar12 = *(undefined4 *)(param_2 + 0x980);
  }
  else {
    lVar8 = (longlong)*(int *)(param_2 + 0x560) * 0xa60;
    if (*(int *)(lVar8 + 0x3608 + *(longlong *)(param_2 + 0x8d8)) != 1) goto LAB_1805af41f;
    uVar12 = *(undefined4 *)(lVar8 + 0x3a20 + *(longlong *)(param_2 + 0x8d8));
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar12;
  if (*(longlong *)(param_2 + 0x590) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)(*(longlong *)(param_2 + 0x590) + 0xac);
  }
  *(undefined4 *)(param_1 + 0x94) = uVar12;
  uVar6 = *(uint *)(param_1 + 0x24) & 0x800;
  if ((uVar6 == 0) || (*(longlong *)(param_2 + 0x590) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(*(longlong *)(param_2 + 0x590) + 0x25d0);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  if ((uVar6 != 0) && (*(longlong *)(param_2 + 0x590) != 0)) {
    uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x590) + 0x25d4);
  }
  *(undefined4 *)(param_1 + 0x44) = uVar14;
  func_0x0001805afbb0(param_1,*(undefined8 *)(param_2 + 0x590));
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x720);
  lVar8 = *(longlong *)(param_2 + 0x6e0);
  if (((*(char *)(lVar8 + 0x14d8) == '\0') && ((*(uint *)(lVar8 + 0x1484) >> 7 & 1) == 0)) ||
     (*(int *)(lVar8 + 0x14a8) == 0)) {
    uVar14 = *(undefined4 *)(param_2 + 0x600);
  }
  else {
    uVar14 = 0xbf800000;
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar14;
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 0x5fd);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(longlong *)(param_2 + 0x6e0) + 0x14a8);
  *(byte *)(param_1 + 0x180) = (byte)(*(uint *)(*(longlong *)(param_2 + 0x6e0) + 0x1484) >> 1) & 1;
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(*(longlong *)(param_2 + 0x6e0) + 0x210);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x608);
  uVar4 = *(undefined8 *)(param_2 + 0x618);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x610);
  *(undefined8 *)(param_1 + 0x34) = uVar4;
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_2 + 0x604);
  lVar8 = *(longlong *)(param_2 + 0x5f0);
  lVar9 = *(longlong *)(param_2 + 0x8d8) + 0x30a0;
  *(bool *)(param_1 + 0x9a) = lVar8 != 0;
  uVar5 = func_0x000180522f60(param_2);
  *(undefined1 *)(param_1 + 0x9b) = uVar5;
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x5e8);
  if (lVar8 == 0) {
    puVar7 = (undefined8 *)&DAT_180a00300;
  }
  else {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x5f0) + 0x70);
  }
  uVar4 = puVar7[1];
  *(undefined8 *)(param_1 + 0xf8) = *puVar7;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = puVar7[3];
  *(undefined8 *)(param_1 + 0x108) = puVar7[2];
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  uVar4 = puVar7[5];
  *(undefined8 *)(param_1 + 0x118) = puVar7[4];
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  uVar4 = puVar7[7];
  *(undefined8 *)(param_1 + 0x128) = puVar7[6];
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(float *)(param_1 + 0x1d8) =
       (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_2 + 0x6c0) * 8) -
              *(longlong *)(param_2 + 0x6b8)) * 1e-05;
  if (((1 < *(int *)(param_1 + 0x194) - 3U) || (*(char *)(param_2 + 0xa50) == '\0')) ||
     (fVar13 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_2 + 0xa00) * 8) -
                      *(longlong *)(param_2 + 0x9f8)) * 1e-05,
     fVar13 < *(float *)(param_2 + 0xa08) || fVar13 == *(float *)(param_2 + 0xa08))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x1f5) = uVar5;
  if (*(int *)(param_2 + 0x570) == 1) {
    uVar14 = *(undefined4 *)(param_2 + 0x4fc);
  }
  else {
    uVar14 = 0x7149f2ca;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar14;
  if (*(char *)(param_1 + 0x1fc) == '\0') {
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x564);
  }
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x57c);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x574);
  *(undefined8 *)(param_1 + 0x1e8) = uVar4;
  *(undefined8 *)(param_2 + 0x574) = 0;
  *(undefined8 *)(param_2 + 0x57c) = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x584);
    *(undefined4 *)(param_2 + 0x584) = 0;
  }
  *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_2 + 0x588);
  *(undefined1 *)(param_2 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x2a4);
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1805a3ab0((longlong)*(int *)(param_2 + 0x560) * 0xa60 + 0x28 + lVar9);
  }
  uVar14 = 0;
  *(undefined1 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x4c4);
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)
              (*(longlong *)((longlong)*(int *)(param_1 + 0x1d4) * 0xa60 + 0x20 + lVar9) + 0x108);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  if (((*(char *)(param_1 + 0x98) == '\0') && ((*(uint *)(param_1 + 0x24) & 0x800) != 0)) &&
     (((*(uint *)(param_2 + 0x56c) & 0x800) != 0 &&
      ((*(longlong *)(param_2 + 0x590) != 0 &&
       (*(char *)(*(longlong *)(param_2 + 0x590) + 0x34bc) != '\0')))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar5;
  plVar3 = *(longlong **)(param_2 + 0x590);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined1 *)(param_1 + 0x170) = 1;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  }
  else {
    if (((*(int *)(param_1 + 0x78) == 0x18) || (*(int *)(param_1 + 0x78) == 0x27)) &&
       ((*(uint *)(param_1 + 0x24) & 0x800) == 0)) {
      uVar12 = (**(code **)(*plVar3 + 0x90))(plVar3,0);
    }
    else {
      uVar12 = 0;
    }
    *(undefined4 *)(param_1 + 0x88) = uVar12;
    if ((*(int *)(param_1 + 0x74) == -1) || (*(int *)(param_1 + 0x7c) == 0x23)) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(*(longlong *)(param_2 + 0x590) + 0x2434);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar12;
    if ((*(ulonglong *)(param_1 + 0x60) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    if ((*(uint *)(param_1 + 0x24) & 0x800) == 0) {
      *(undefined1 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
      lVar8 = *(longlong *)(param_2 + 0x590);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(*(longlong *)(lVar8 + 0x2598) + 8);
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(*(longlong *)(lVar8 + 0x2590) + 0x10);
      iVar2 = *(int *)(*(longlong *)(lVar8 + 0x2590) + 0xc);
      if (1 < iVar2) {
        lVar8 = FUN_18065cec0((longlong)iVar2 * 0x30 +
                              *(longlong *)(*(longlong *)(lVar8 + 0x2590) + 0xc78),0);
        uVar14 = *(undefined4 *)(lVar8 + 0x10);
      }
      goto LAB_1805af9eb;
    }
    lVar8 = *(longlong *)(param_2 + 0x590);
    if ((*(float *)(lVar8 + 0x90) == 0.0) && (*(float *)(lVar8 + 0x94) == 0.0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x170) = uVar5;
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar8 + 0x25a8);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(lVar8 + 0x95d4);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
LAB_1805af9eb:
  *(undefined4 *)(param_1 + 0x148) = uVar14;
  return;
}






// 函数: void FUN_1805af580(longlong param_1,longlong param_2)
void FUN_1805af580(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar7 = *(longlong *)(param_2 + 0x5f0);
  lVar8 = *(longlong *)(param_2 + 0x8d8) + 0x30a0;
  *(bool *)(param_1 + 0x9a) = lVar7 != 0;
  uVar5 = func_0x000180522f60(param_2);
  *(undefined1 *)(param_1 + 0x9b) = uVar5;
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x5e8);
  if (lVar7 == 0) {
    puVar6 = (undefined8 *)&DAT_180a00300;
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x5f0) + 0x70);
  }
  uVar4 = puVar6[1];
  *(undefined8 *)(param_1 + 0xf8) = *puVar6;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = puVar6[3];
  *(undefined8 *)(param_1 + 0x108) = puVar6[2];
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  uVar4 = puVar6[5];
  *(undefined8 *)(param_1 + 0x118) = puVar6[4];
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  uVar4 = puVar6[7];
  *(undefined8 *)(param_1 + 0x128) = puVar6[6];
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(float *)(param_1 + 0x1d8) =
       (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_2 + 0x6c0) * 8) -
              *(longlong *)(param_2 + 0x6b8)) * 1e-05;
  if (((1 < *(int *)(param_1 + 0x194) - 3U) || (*(char *)(param_2 + 0xa50) == '\0')) ||
     (fVar9 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_2 + 0xa00) * 8) -
                     *(longlong *)(param_2 + 0x9f8)) * 1e-05,
     fVar9 < *(float *)(param_2 + 0xa08) || fVar9 == *(float *)(param_2 + 0xa08))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x1f5) = uVar5;
  if (*(int *)(param_2 + 0x570) == 1) {
    uVar11 = *(undefined4 *)(param_2 + 0x4fc);
  }
  else {
    uVar11 = 0x7149f2ca;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar11;
  if (*(char *)(param_1 + 0x1fc) == '\0') {
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x564);
  }
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  uVar11 = *(undefined4 *)(param_2 + 0x578);
  uVar10 = *(undefined4 *)(param_2 + 0x57c);
  uVar3 = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x1e4) = uVar11;
  *(undefined4 *)(param_1 + 0x1e8) = uVar10;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  *(undefined8 *)(param_2 + 0x574) = 0;
  *(undefined8 *)(param_2 + 0x57c) = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x584);
    *(undefined4 *)(param_2 + 0x584) = 0;
  }
  *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_2 + 0x588);
  *(undefined1 *)(param_2 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x2a4);
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1805a3ab0((longlong)*(int *)(param_2 + 0x560) * 0xa60 + 0x28 + lVar8);
  }
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x4c4);
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)
              (*(longlong *)((longlong)*(int *)(param_1 + 0x1d4) * 0xa60 + 0x20 + lVar8) + 0x108);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar10;
  if (((*(char *)(param_1 + 0x98) == '\0') && ((*(uint *)(param_1 + 0x24) & 0x800) != 0)) &&
     (((*(uint *)(param_2 + 0x56c) & 0x800) != 0 &&
      ((*(longlong *)(param_2 + 0x590) != 0 &&
       (*(char *)(*(longlong *)(param_2 + 0x590) + 0x34bc) != '\0')))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar5;
  plVar2 = *(longlong **)(param_2 + 0x590);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined1 *)(param_1 + 0x170) = 1;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  }
  else {
    if (((*(int *)(param_1 + 0x78) == 0x18) || (*(int *)(param_1 + 0x78) == 0x27)) &&
       ((*(uint *)(param_1 + 0x24) & 0x800) == 0)) {
      uVar10 = (**(code **)(*plVar2 + 0x90))(plVar2,0);
    }
    else {
      uVar10 = 0;
    }
    *(undefined4 *)(param_1 + 0x88) = uVar10;
    if ((*(int *)(param_1 + 0x74) == -1) || (*(int *)(param_1 + 0x7c) == 0x23)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(*(longlong *)(param_2 + 0x590) + 0x2434);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar10;
    if ((*(ulonglong *)(param_1 + 0x60) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x34));
    }
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    if ((*(uint *)(param_1 + 0x24) & 0x800) == 0) {
      *(undefined1 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
      lVar7 = *(longlong *)(param_2 + 0x590);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(*(longlong *)(lVar7 + 0x2598) + 8);
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(*(longlong *)(lVar7 + 0x2590) + 0x10);
      iVar1 = *(int *)(*(longlong *)(lVar7 + 0x2590) + 0xc);
      if (1 < iVar1) {
        lVar7 = FUN_18065cec0((longlong)iVar1 * 0x30 +
                              *(longlong *)(*(longlong *)(lVar7 + 0x2590) + 0xc78),0);
        uVar11 = *(undefined4 *)(lVar7 + 0x10);
      }
      goto LAB_1805af9eb;
    }
    lVar7 = *(longlong *)(param_2 + 0x590);
    if ((*(float *)(lVar7 + 0x90) == 0.0) && (*(float *)(lVar7 + 0x94) == 0.0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x170) = uVar5;
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar7 + 0x25a8);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(lVar7 + 0x95d4);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
LAB_1805af9eb:
  *(undefined4 *)(param_1 + 0x148) = uVar11;
  return;
}






// 函数: void FUN_1805af5a1(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_1805af5a1(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong unaff_RBX;
  longlong lVar7;
  longlong unaff_RDI;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar7 = *(longlong *)(param_2 + 0x8d8) + 0x30a0;
  *(bool *)(param_1 + 0x9a) = param_4 != 0;
  uVar5 = func_0x000180522f60(param_2);
  *(undefined1 *)(unaff_RBX + 0x9b) = uVar5;
  *(undefined1 *)(unaff_RBX + 0x9c) = *(undefined1 *)(unaff_RDI + 0x5e8);
  if (param_4 == 0) {
    puVar6 = (undefined8 *)&DAT_180a00300;
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(unaff_RDI + 0x5f0) + 0x70);
  }
  uVar4 = puVar6[1];
  *(undefined8 *)(unaff_RBX + 0xf8) = *puVar6;
  *(undefined8 *)(unaff_RBX + 0x100) = uVar4;
  uVar4 = puVar6[3];
  *(undefined8 *)(unaff_RBX + 0x108) = puVar6[2];
  *(undefined8 *)(unaff_RBX + 0x110) = uVar4;
  uVar4 = puVar6[5];
  *(undefined8 *)(unaff_RBX + 0x118) = puVar6[4];
  *(undefined8 *)(unaff_RBX + 0x120) = uVar4;
  uVar4 = puVar6[7];
  *(undefined8 *)(unaff_RBX + 0x128) = puVar6[6];
  *(undefined8 *)(unaff_RBX + 0x130) = uVar4;
  *(float *)(unaff_RBX + 0x1d8) =
       (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0x6c0) * 8) -
              *(longlong *)(unaff_RDI + 0x6b8)) * 1e-05;
  if (((1 < *(int *)(unaff_RBX + 0x194) - 3U) || (*(char *)(unaff_RDI + 0xa50) == '\0')) ||
     (fVar8 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0xa00) * 8) -
                     *(longlong *)(unaff_RDI + 0x9f8)) * 1e-05,
     fVar8 < *(float *)(unaff_RDI + 0xa08) || fVar8 == *(float *)(unaff_RDI + 0xa08))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_RBX + 0x1f5) = uVar5;
  if (*(int *)(unaff_RDI + 0x570) == 1) {
    uVar10 = *(undefined4 *)(unaff_RDI + 0x4fc);
  }
  else {
    uVar10 = 0x7149f2ca;
  }
  *(undefined4 *)(unaff_RBX + 0xa0) = uVar10;
  if (*(char *)(unaff_RBX + 0x1fc) == '\0') {
    *(undefined4 *)(unaff_RBX + 0x1f8) = *(undefined4 *)(unaff_RDI + 0x564);
  }
  *(undefined1 *)(unaff_RBX + 0x1fc) = 0;
  uVar10 = *(undefined4 *)(unaff_RDI + 0x578);
  uVar9 = *(undefined4 *)(unaff_RDI + 0x57c);
  uVar3 = *(undefined4 *)(unaff_RDI + 0x580);
  *(undefined4 *)(unaff_RBX + 0x1e0) = *(undefined4 *)(unaff_RDI + 0x574);
  *(undefined4 *)(unaff_RBX + 0x1e4) = uVar10;
  *(undefined4 *)(unaff_RBX + 0x1e8) = uVar9;
  *(undefined4 *)(unaff_RBX + 0x1ec) = uVar3;
  *(undefined8 *)(unaff_RDI + 0x574) = 0;
  *(undefined8 *)(unaff_RDI + 0x57c) = 0;
  if (*(char *)(unaff_RBX + 0x98) == '\0') {
    *(undefined4 *)(unaff_RBX + 0x1f0) = *(undefined4 *)(unaff_RDI + 0x584);
    *(undefined4 *)(unaff_RDI + 0x584) = 0;
  }
  *(undefined1 *)(unaff_RBX + 500) = *(undefined1 *)(unaff_RDI + 0x588);
  *(undefined1 *)(unaff_RDI + 0x588) = 0;
  *(undefined4 *)(unaff_RBX + 0xa8) = *(undefined4 *)(unaff_RDI + 0x1fc);
  *(undefined4 *)(unaff_RBX + 0xac) = *(undefined4 *)(unaff_RDI + 0x2a4);
  if (*(char *)(unaff_RBX + 0x99) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1805a3ab0((longlong)*(int *)(unaff_RDI + 0x560) * 0xa60 + 0x28 + lVar7);
  }
  uVar10 = 0;
  *(undefined1 *)(unaff_RBX + 0xb0) = uVar5;
  *(undefined4 *)(unaff_RBX + 0x4c) = *(undefined4 *)(unaff_RDI + 0x4ac);
  *(undefined4 *)(unaff_RBX + 0xb4) = *(undefined4 *)(unaff_RDI + 0x4c8);
  *(undefined8 *)(unaff_RBX + 0xb8) = *(undefined8 *)(unaff_RDI + 0x4cc);
  *(undefined4 *)(unaff_RBX + 0xc0) = *(undefined4 *)(unaff_RDI + 0x4c4);
  if (*(char *)(unaff_RBX + 0x98) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)
             (*(longlong *)((longlong)*(int *)(unaff_RBX + 0x1d4) * 0xa60 + 0x20 + lVar7) + 0x108);
  }
  *(undefined4 *)(unaff_RBX + 0x20) = uVar9;
  if (((*(char *)(unaff_RBX + 0x98) == '\0') && ((*(uint *)(unaff_RBX + 0x24) & 0x800) != 0)) &&
     (((*(uint *)(unaff_RDI + 0x56c) & 0x800) != 0 &&
      ((*(longlong *)(unaff_RDI + 0x590) != 0 &&
       (*(char *)(*(longlong *)(unaff_RDI + 0x590) + 0x34bc) != '\0')))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(unaff_RBX + 0x50) = uVar5;
  plVar2 = *(longlong **)(unaff_RDI + 0x590);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(unaff_RBX + 0x184) = 0;
    *(undefined8 *)(unaff_RBX + 0x18c) = 0;
    *(undefined1 *)(unaff_RBX + 0x170) = 1;
    *(undefined4 *)(unaff_RBX + 0x174) = 0;
    *(undefined4 *)(unaff_RBX + 0xf0) = 0x3f800000;
  }
  else {
    if (((*(int *)(unaff_RBX + 0x78) == 0x18) || (*(int *)(unaff_RBX + 0x78) == 0x27)) &&
       ((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0)) {
      uVar9 = (**(code **)(*plVar2 + 0x90))(plVar2,0);
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)(unaff_RBX + 0x88) = uVar9;
    if ((*(int *)(unaff_RBX + 0x74) == -1) || (*(int *)(unaff_RBX + 0x7c) == 0x23)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(*(longlong *)(unaff_RDI + 0x590) + 0x2434);
    }
    *(undefined4 *)(unaff_RBX + 0x8c) = uVar9;
    if ((*(ulonglong *)(unaff_RBX + 0x60) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(undefined4 *)(*(longlong *)(unaff_RDI + 0x20) + 0x34));
    }
    *(undefined4 *)(unaff_RBX + 0x184) = 0;
    *(undefined4 *)(unaff_RBX + 0x188) = 0;
    *(undefined4 *)(unaff_RBX + 0x18c) = 0;
    *(undefined4 *)(unaff_RBX + 400) = 0;
    if ((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0) {
      *(undefined1 *)(unaff_RBX + 0x170) = 1;
      *(undefined4 *)(unaff_RBX + 0x174) = 0;
      *(undefined4 *)(unaff_RBX + 0xf0) = 0x3f800000;
      lVar7 = *(longlong *)(unaff_RDI + 0x590);
      *(undefined4 *)(unaff_RBX + 0x1c0) = *(undefined4 *)(*(longlong *)(lVar7 + 0x2598) + 8);
      *(undefined4 *)(unaff_RBX + 0x14c) = *(undefined4 *)(*(longlong *)(lVar7 + 0x2590) + 0x10);
      iVar1 = *(int *)(*(longlong *)(lVar7 + 0x2590) + 0xc);
      if (1 < iVar1) {
        lVar7 = FUN_18065cec0((longlong)iVar1 * 0x30 +
                              *(longlong *)(*(longlong *)(lVar7 + 0x2590) + 0xc78),0);
        uVar10 = *(undefined4 *)(lVar7 + 0x10);
      }
      goto LAB_1805af9eb;
    }
    lVar7 = *(longlong *)(unaff_RDI + 0x590);
    if ((*(float *)(lVar7 + 0x90) == 0.0) && (*(float *)(lVar7 + 0x94) == 0.0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(unaff_RBX + 0x170) = uVar5;
    *(undefined4 *)(unaff_RBX + 0xf0) = *(undefined4 *)(lVar7 + 0x25a8);
    *(undefined4 *)(unaff_RBX + 0x174) = *(undefined4 *)(lVar7 + 0x95d4);
  }
  *(undefined4 *)(unaff_RBX + 0x14c) = 0;
  *(undefined4 *)(unaff_RBX + 0x1c0) = 0;
LAB_1805af9eb:
  *(undefined4 *)(unaff_RBX + 0x148) = uVar10;
  return;
}






