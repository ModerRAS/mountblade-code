#include "TaleWorlds.Native.Split.h"

// 03_rendering_part475.c - 8 个函数

// 函数: void FUN_1805204e0(longlong param_1,undefined8 param_2)
void FUN_1805204e0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStackX_8;
  float fStackX_c;
  undefined8 uStackX_10;
  undefined *puStack_c8;
  undefined *puStack_c0;
  int iStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  uStackX_10 = param_2;
  FUN_1804f17b0(*(undefined8 *)(param_1 + 0x8d8),param_1);
  if ((*(uint *)(param_1 + 0x56c) & 0x4000) != 0) {
    FUN_18050c1c0(param_1);
  }
  lVar6 = _DAT_180c8ece0;
  iVar2 = *(int *)(param_1 + 0x18);
  _fStackX_8 = CONCAT44(fStackX_c,iVar2);
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
  }
  lVar6 = (**(code **)(lVar6 + 0x40))(iVar2);
  puVar9 = &DAT_18098bc73;
  if (*(undefined **)(lVar6 + 8) != (undefined *)0x0) {
    puVar9 = *(undefined **)(lVar6 + 8);
  }
  FUN_180627910(&puStack_c8,puVar9);
  for (lVar6 = *_DAT_180c8aa00; lVar6 != _DAT_180c8aa00[1]; lVar6 = lVar6 + 0x20) {
    iVar3 = *(int *)(lVar6 + 0x10);
    iVar8 = iStack_b8;
    if (iVar3 == iStack_b8) {
      if (iVar3 != 0) {
        pbVar7 = *(byte **)(lVar6 + 8);
        lVar10 = (longlong)puStack_c0 - (longlong)pbVar7;
        do {
          pbVar1 = pbVar7 + lVar10;
          iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
          if (iVar8 != 0) break;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1805205ee:
      if (iVar8 == 0) break;
    }
    else if (iVar3 == 0) goto LAB_1805205ee;
  }
  if (lVar6 == _DAT_180c8aa00[1]) {
    puVar9 = &DAT_18098bc73;
    if (puStack_c0 != (undefined *)0x0) {
      puVar9 = puStack_c0;
    }
    FUN_180627020(&UNK_180a0af90,puVar9);
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = (undefined4)(lVar6 - *_DAT_180c8aa00 >> 5);
  }
  *(undefined4 *)(param_1 + 0x740) = uVar11;
  puStack_c8 = &UNK_180a3c3e0;
  if (puStack_c0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_c0 = (undefined *)0x0;
  uStack_b0 = 0;
  puStack_c8 = &UNK_18098bcb0;
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
  }
  if (*(int *)(param_1 + 0x570) == 2) {
    FUN_1804f41b0(*(undefined8 *)(param_1 + 0x8d8));
  }
  fStackX_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x49c) >> 0x20);
  fStackX_8 = (float)*(undefined8 *)(param_1 + 0x49c);
  fVar12 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
  auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar13 = auVar14._0_4_;
  fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
  _fStackX_8 = CONCAT44(fStackX_c * fVar12,fStackX_8 * fVar12);
  puStack_c8 = *(undefined **)(*(longlong *)(param_1 + 0x20) + 0xc);
  puStack_c0 = *(undefined **)(*(longlong *)(param_1 + 0x20) + 0x14);
  FUN_180509f20(param_1,&puStack_c8,&fStackX_8);
  FUN_18058ada0(*(undefined8 *)(param_1 + 0x590),param_1,
                *(undefined8 *)(*(longlong *)(param_1 + 0x658) + 0x208),0);
  plVar4 = *(longlong **)(param_1 + 0x6e0);
  lVar6 = *plVar4;
  lVar10 = *(longlong *)(lVar6 + 0x4a4);
  plVar4[0x2ac] = *(longlong *)(lVar6 + 0x49c);
  plVar4[0x2ad] = lVar10;
  uVar11 = atan2f(*(uint *)(lVar6 + 0x49c) ^ 0x80000000,*(undefined4 *)(lVar6 + 0x4a0));
  *(undefined4 *)(plVar4 + 0x2ae) = uVar11;
  *(undefined4 *)((longlong)plVar4 + 0x1574) = 0;
  lVar6 = *plVar4;
  lStack_98 = *(longlong *)(lVar6 + 0x9d8);
  if ((lStack_98 == 0) ||
     (cVar5 = FUN_18038d0a0(lStack_98,*(longlong *)(lVar6 + 0x20) + 0xc), lStack_a0 = lStack_98,
     cVar5 == '\0')) {
    lStack_a0 = 0;
  }
  lVar10 = *(longlong *)(lVar6 + 0x20);
  uStack_a8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x8d8) + 0x18);
  uStack_90 = *(undefined8 *)(lVar10 + 0xc);
  uStack_88 = *(undefined8 *)(lVar10 + 0x14);
  uStack_80 = *(undefined4 *)(lVar10 + 0xb0);
  uStack_7c = *(undefined4 *)(lVar10 + 0xb4);
  uStack_78 = *(undefined4 *)(lVar10 + 0xb8);
  uStack_74 = *(undefined4 *)(lVar10 + 0xbc);
  uStack_68 = 3;
  uStack_70 = uStack_90;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(lVar6 + 0x20) + 0x34));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180520b40(longlong param_1,longlong param_2)
void FUN_180520b40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8e8);
  if (lVar1 == param_2) {
    return;
  }
  *(longlong *)(param_1 + 0x8e8) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x570) != 2) goto LAB_180520bbd;
    FUN_1804f1c90(*(undefined8 *)(param_1 + 0x8d8),0xffffffff,DAT_180c8ec8a);
    param_2 = *(longlong *)(param_1 + 0x8e8);
    if (param_2 == 0) goto LAB_180520bbd;
  }
  if ((_DAT_180c92514 == 3) && (*(int *)(param_2 + 0x14) == 0)) {
    FUN_1804f1c90(*(undefined8 *)(param_1 + 0x8d8),*(undefined4 *)(param_1 + 0x10),DAT_180c8ec8a);
  }
LAB_180520bbd:
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) == *(int *)(param_1 + 0x10))) {
    FUN_1805eda50(lVar1,0,0xffffffff);
  }
  lVar1 = *(longlong *)(param_1 + 0x8e8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != *(int *)(param_1 + 0x10))) {
    FUN_1805eda50(lVar1,*(undefined8 *)(param_1 + 0x8d8));
  }
  return;
}





// 函数: void FUN_180520c10(longlong *param_1,longlong *param_2)
void FUN_180520c10(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStackX_10 [8];
  
  if (*(int *)(*param_2 + 0x568) != 1) {
    return;
  }
  uVar7 = *(uint *)(*param_2 + 0x56c) >> 0xe;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 2) & 0x1000) == 0) {
      FUN_1805d4df0(param_2 + 1);
    }
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x10c);
  }
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(int *)(param_1 + 7) = (int)param_2[0x295];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x178c);
  *(int *)(param_1 + 8) = (int)param_2[0x42];
  param_1[3] = *(longlong *)(*(longlong *)param_2[0x33] + 0x9d8);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_2 + 0x173c);
  plVar2 = param_2 + 0x2a1;
  if ((char)param_2[0x29b] == '\0') {
    plVar2 = (longlong *)&DAT_1809ff0c8;
  }
  *param_1 = *plVar2;
  param_1[1] = param_2[0x25d];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x14e4);
  *(int *)(param_1 + 6) = (int)param_2[0x284];
  plVar2 = (longlong *)FUN_180507e30(param_2 + 0x2f,auStackX_10);
  param_1[2] = *plVar2;
  if ((char)param_2[0x438] == '\0') {
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x14b4);
  }
  else {
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x21c4);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
  uVar8 = func_0x000180507ac0();
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  if (((uVar7 & 1) == 0) || ((char)param_2[0x431] == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x44);
  *(byte *)((longlong)param_1 + 0x44) = bVar4 & 0xfe | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)((longlong)param_2 + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((longlong)param_1 + 0x44) = bVar1;
  if ((uVar7 & 1) != 0) {
    if ((*(uint *)(param_2 + 2) & 0x400000) == 0) {
      uVar3 = *(ulonglong *)(*(longlong *)param_2[1] + 0x280);
      if (uVar3 != 0) {
        uVar3 = (ulonglong)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)((longlong)param_2 + 0xc2) = (char)uVar3;
      *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | 0x400000;
      bVar1 = *(byte *)((longlong)param_1 + 0x44);
    }
    if (*(char *)((longlong)param_2 + 0xc2) != '\0') {
      bVar6 = 4;
      goto LAB_180520dad;
    }
  }
  bVar6 = 0;
LAB_180520dad:
  *(byte *)((longlong)param_1 + 0x44) = bVar1 & 0xfb | bVar6;
  if (((uVar7 & 1) == 0) || ((char)param_2[0x29b] == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((longlong)param_1 + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if ((((uVar7 & 1) == 0) || ((int)param_2[0x2a8] < 0)) ||
     (*(int *)((longlong)param_2 + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((longlong)param_1 + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar9 = (float)func_0x000180507ac0(param_2 + 0x34);
  if ((*(float *)((longlong)param_2 + 0x20c) <= fVar9 &&
       fVar9 != *(float *)((longlong)param_2 + 0x20c)) ||
     (fVar9 = (float)FUN_180507b40(param_2 + 0x34), 1.5 <= fVar9)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0x20;
  }
  bVar6 = *(byte *)((longlong)param_1 + 0x44) & 0xdf | bVar6;
  *(byte *)((longlong)param_1 + 0x44) = bVar6;
  *(byte *)((longlong)param_1 + 0x44) =
       ((char)(*(uint *)((longlong)param_2 + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c30(undefined8 param_1,longlong param_2)
void FUN_180520c30(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong unaff_RBX;
  uint uVar7;
  undefined8 *unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  
  uVar7 = *(uint *)(in_RAX + 0x56c) >> 0xe;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x10) & 0x1000) == 0) {
      FUN_1805d4df0(param_2 + 8);
    }
    uVar8 = *(undefined4 *)(unaff_RBX + 0x10c);
  }
  *(undefined4 *)(unaff_RDI + 4) = uVar8;
  *(undefined4 *)(unaff_RDI + 7) = *(undefined4 *)(unaff_RBX + 0x14a8);
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = *(undefined4 *)(unaff_RBX + 0x178c);
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(undefined8 *)(**(longlong **)(unaff_RBX + 0x198) + 0x9d8);
  *(undefined4 *)(unaff_RDI + 5) = *(undefined4 *)(unaff_RBX + 0x173c);
  puVar2 = (undefined8 *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (undefined8 *)&DAT_1809ff0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(undefined8 *)(unaff_RBX + 0x12e8);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RBX + 0x14e4);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RBX + 0x1420);
  puVar2 = (undefined8 *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar8 = *(undefined4 *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar8 = *(undefined4 *)(unaff_RBX + 0x21c4);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = uVar8;
  uVar8 = func_0x000180507ac0();
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar8;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((longlong)unaff_RDI + 0x44);
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1;
  if ((uVar7 & 1) == 0) {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(ulonglong *)(**(longlong **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (ulonglong)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((longlong)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if ((((uVar7 & 1) == 0) || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar9 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar9 < *(float *)(unaff_RBX + 0x20c) || fVar9 == *(float *)(unaff_RBX + 0x20c)) {
    fVar9 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar9 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((longlong)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c4b(undefined8 param_1,longlong param_2)
void FUN_180520c4b(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong unaff_RBX;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  bool in_ZF;
  undefined4 uVar7;
  float fVar8;
  
  if (in_ZF) {
    FUN_1805d4df0(param_2 + 8);
  }
  *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)(unaff_RBX + 0x10c);
  *(undefined4 *)(unaff_RDI + 7) = *(undefined4 *)(unaff_RBX + 0x14a8);
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = *(undefined4 *)(unaff_RBX + 0x178c);
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(undefined8 *)(**(longlong **)(unaff_RBX + 0x198) + 0x9d8);
  *(undefined4 *)(unaff_RDI + 5) = *(undefined4 *)(unaff_RBX + 0x173c);
  puVar2 = (undefined8 *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (undefined8 *)&DAT_1809ff0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(undefined8 *)(unaff_RBX + 0x12e8);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RBX + 0x14e4);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RBX + 0x1420);
  puVar2 = (undefined8 *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x21c4);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = uVar7;
  uVar7 = func_0x000180507ac0();
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar7;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((longlong)unaff_RDI + 0x44);
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1;
  if (unaff_SIL == '\0') {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(ulonglong *)(**(longlong **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (ulonglong)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((longlong)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if (((unaff_SIL == '\0') || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar8 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar8 < *(float *)(unaff_RBX + 0x20c) || fVar8 == *(float *)(unaff_RBX + 0x20c)) {
    fVar8 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar8 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((longlong)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c6a(void)
void FUN_180520c6a(void)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong unaff_RBX;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  float fVar8;
  
  *(undefined4 *)(unaff_RDI + 4) = 0;
  *(undefined4 *)(unaff_RDI + 7) = *(undefined4 *)(unaff_RBX + 0x14a8);
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = *(undefined4 *)(unaff_RBX + 0x178c);
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(undefined8 *)(**(longlong **)(unaff_RBX + 0x198) + 0x9d8);
  *(undefined4 *)(unaff_RDI + 5) = *(undefined4 *)(unaff_RBX + 0x173c);
  puVar2 = (undefined8 *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (undefined8 *)&DAT_1809ff0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(undefined8 *)(unaff_RBX + 0x12e8);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RBX + 0x14e4);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RBX + 0x1420);
  puVar2 = (undefined8 *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar7 = *(undefined4 *)(unaff_RBX + 0x21c4);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = uVar7;
  uVar7 = func_0x000180507ac0();
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar7;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((longlong)unaff_RDI + 0x44);
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1;
  if (unaff_SIL == '\0') {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(ulonglong *)(**(longlong **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (ulonglong)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((longlong)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if (((unaff_SIL == '\0') || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar8 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar8 < *(float *)(unaff_RBX + 0x20c) || fVar8 == *(float *)(unaff_RBX + 0x20c)) {
    fVar8 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar8 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((longlong)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) = bVar6;
  *(byte *)((longlong)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520dd9(void)
void FUN_180520dd9(void)

{
  byte in_AL;
  byte bVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar2;
  
  if ((*(int *)(unaff_RBX + 0x1540) < 0) || (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0x10;
  }
  *(byte *)(unaff_RDI + 0x44) = in_AL & 0xef | bVar1;
  fVar2 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar2 < *(float *)(unaff_RBX + 0x20c) || fVar2 == *(float *)(unaff_RBX + 0x20c)) {
    fVar2 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar2 < 1.5) {
      bVar1 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar1 = 0;
LAB_180520e28:
  bVar1 = *(byte *)(unaff_RDI + 0x44) & 0xdf | bVar1;
  *(byte *)(unaff_RDI + 0x44) = bVar1;
  *(byte *)(unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar1) & 0x40 ^ bVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180520e60(longlong param_1,undefined4 *param_2,longlong param_3,uint param_4)
void FUN_180520e60(longlong param_1,undefined4 *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  float fVar12;
  uint uVar13;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  char cStack_2ac;
  undefined1 uStack_2ab;
  undefined1 uStack_2aa;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined8 uStack_27c;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  float fStack_254;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined8 uStack_234;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x568) == 1) {
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = CONCAT31(uStack_1a4._1_3_,0xff);
    uStack_1a0 = 0xffffffff;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_134 = CONCAT22(uStack_134._2_2_,0xff00);
    uStack_128 = 0;
    uStack_12c = CONCAT13(uStack_12c._3_1_,0x10000);
    uStack_13c = 0;
    lVar3 = *(longlong *)(param_1 + 0x20);
    fVar12 = *(float *)(lVar3 + 0x14) + 0.01;
    uVar8 = *(undefined4 *)(lVar3 + 0xc);
    uVar9 = *(undefined4 *)(lVar3 + 0x10);
    uStack_190 = *(undefined4 *)(lVar3 + 0xc);
    uStack_18c = *(undefined4 *)(lVar3 + 0x10);
    uStack_184 = 0x7f7fffff;
    uStack_180 = *param_2;
    uStack_17c = param_2[1];
    uStack_178 = param_2[2];
    uStack_174 = param_2[3];
    cVar11 = *(char *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210) +
                      0xe6);
    uStack_134 = CONCAT31(uStack_134._1_3_,cVar11);
    if (cVar11 < '\0') {
      uStack_2ab = 0xff;
    }
    else if ((*(longlong *)(param_1 + 0x658) == 0) ||
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208), lVar4 == 0)) {
      uStack_2ab = 8;
    }
    else {
      uStack_2ab = *(undefined1 *)((longlong)cVar11 * 0x1b0 + 0x104 + *(longlong *)(lVar4 + 0x140));
    }
    uStack_130 = 2;
    iStack_138 = *(int *)(param_1 + 0x560);
    if (iStack_138 < 0) {
      iStack_138 = *(int *)(param_1 + 0x10);
    }
    if (-1 < *(int *)(param_1 + 0x670)) {
      iStack_138 = *(int *)(param_1 + 0x670);
    }
    lVar10 = (longlong)iStack_138;
    lVar4 = *(longlong *)(param_1 + 0x8d8);
    if (param_3 == 0) {
      uStack_2a4 = 0xffffffff;
    }
    else {
      uStack_2a4 = *(undefined4 *)(param_3 + 100);
    }
    uVar5 = *(undefined4 *)(lVar3 + 0x24);
    uVar6 = *(undefined4 *)(lVar3 + 0x28);
    uVar7 = *(undefined4 *)(lVar3 + 0x30);
    uVar13 = param_4 ^ 0x80000000;
    fStack_188 = fVar12;
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    uStack_168 = uStack_178;
    uStack_164 = uStack_174;
    func_0x0001805345e0(&uStack_2c8);
    lVar3 = _DAT_180c8ece0;
    uStack_2c8 = 0x1000000;
    uStack_2c0 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_2aa = 0xff;
    uStack_2a8 = 0xffffffff;
    uStack_29c = 0xffc00000;
    uStack_298 = 0xffc00000;
    uStack_294 = 0xffc00000;
    uStack_290 = 0xffc00000;
    uStack_28c = 0xffc00000;
    uStack_288 = 0xffc00000;
    uStack_284 = 0xffc00000;
    uStack_27c = 0x7fc000007fc00000;
    uStack_274 = 0x7fc000007fc00000;
    uStack_26c = 0x7fc000007fc00000;
    uStack_264 = 0x7fc000007fc00000;
    uStack_24c = 0x7fc000007fc00000;
    uStack_244 = 0x7fc000007fc00000;
    uStack_23c = 0x7fc000007fc00000;
    uStack_234 = 0x7fc000007fc00000;
    uStack_2bc = 1;
    uStack_2b0 = 2;
    uStack_250 = 0x7f7fffff;
    uStack_21c = *param_2;
    uStack_218 = param_2[1];
    uStack_214 = param_2[2];
    uStack_210 = param_2[3];
    iVar1 = *(int *)(param_1 + 0x18);
    cStack_2ac = cVar11;
    uStack_280 = param_4;
    uStack_25c = uVar8;
    uStack_258 = uVar9;
    fStack_254 = fVar12;
    uStack_22c = uVar5;
    uStack_228 = uVar6;
    uStack_224 = uVar13;
    uStack_220 = uVar7;
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
    }
    iVar2 = *(int *)(lVar10 * 0xa60 + lVar4 + 0x30b8);
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
    }
    uStack_108 = uStack_1e8;
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
    uStack_e0 = uStack_1c0;
    uStack_d8 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_d0 = uStack_1b0;
    uStack_c8 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_c0 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_b8 = CONCAT62(uStack_196,uStack_198);
    uStack_b0 = CONCAT44(uStack_18c,uStack_190);
    uStack_a8 = CONCAT44(uStack_184,fStack_188);
    uStack_a0 = CONCAT44(uStack_17c,uStack_180);
    uStack_98 = CONCAT44(uStack_174,uStack_178);
    uStack_90 = CONCAT44(uStack_16c,uStack_170);
    uStack_88 = CONCAT44(uStack_164,uStack_168);
    uStack_80 = uStack_160;
    uStack_78 = uStack_158;
    uStack_70 = uStack_150;
    uStack_68 = uStack_148;
    uStack_64 = (undefined4)uStack_144;
    uStack_60 = uStack_144._4_4_;
    uStack_5c = uStack_13c;
    iStack_58 = iStack_138;
    uStack_54 = uStack_134;
    uStack_50 = uStack_130;
    uStack_4c = uStack_12c;
    uStack_48 = CONCAT44(uStack_124,uStack_128);
    (**(code **)(lVar3 + 0x1e0))
              (*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),&uStack_2c8,&uStack_108,
               iVar2,iVar1);
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
    }
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



