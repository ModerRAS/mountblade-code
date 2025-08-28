#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part036.c - 4 个函数

// 函数: void FUN_1800786e0(undefined8 *param_1,longlong param_2)
void FUN_1800786e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong *plStackX_8;
  undefined8 auStackX_10 [2];
  undefined8 uStackX_20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  
  iVar9 = 0;
  plVar8 = param_1 + 1;
  do {
    plVar3 = (longlong *)FUN_1801fd480(param_2,iVar9);
    if (plVar3 != (longlong *)0x0) {
      plStackX_8 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = (longlong *)*plVar8;
    *plVar8 = (longlong)plVar3;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if ((((*(char *)(param_2 + 0x380) != '\0') && (*(char *)(param_2 + 0x381) == '\0')) &&
        (lVar1 = *plVar8, lVar1 != 0)) && ((*(uint *)(lVar1 + 0x328) & 0x200000) == 0)) {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x18) != (undefined *)0x0) {
        puVar6 = *(undefined **)(lVar1 + 0x18);
      }
      FUN_180626f80(&UNK_1809ffae0,puVar6);
    }
    iVar9 = iVar9 + 1;
    plVar8 = plVar8 + 1;
  } while (iVar9 < 7);
  uVar4 = FUN_1801fc6c0(param_2,&uStack_58);
  lVar1 = _DAT_180c8aa00;
  iVar9 = FUN_180191c00(_DAT_180c8aa00,uVar4);
  if ((iVar9 == -1) || (lVar7 = (longlong)iVar9 * 0x68 + *(longlong *)(lVar1 + 0x38), lVar7 == 0)) {
    lVar7 = *(longlong *)(lVar1 + 0x28);
  }
  uStack_58 = &UNK_180a3c3e0;
  if (uStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_58 = &UNK_18098bcb0;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(_DAT_180c8aa00 + 0x38);
  }
  param_1[0x26] = lVar7;
  if ((*(char *)(param_2 + 0x248) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc730();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x240);
  }
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar2;
  if ((*(char *)(param_2 + 0x254) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc760();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x24c);
  }
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  if ((*(char *)(param_2 + 0x2f0) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fca40(*(longlong *)(param_2 + 0x3c8),&uStack_58);
    uVar2 = (undefined4)uStack_58;
    uVar11 = uStack_58._4_4_;
    uVar12 = (undefined4)uStack_50;
    uVar13 = uStack_50._4_4_;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2d0);
    uVar11 = *(undefined4 *)(param_2 + 0x2d4);
    uVar12 = *(undefined4 *)(param_2 + 0x2d8);
    uVar13 = *(undefined4 *)(param_2 + 0x2dc);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar11;
  *(undefined4 *)(param_1 + 0x21) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar13;
  if ((*(char *)(param_2 + 0x2fc) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fca90();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2f4);
  }
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  if ((*(char *)(param_2 + 0x260) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcac0();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 600);
  }
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar2;
  if ((*(char *)(param_2 + 0x26c) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb00();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x264);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if ((*(char *)(param_2 + 0x278) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb40();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x270);
  }
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar2;
  if ((*(char *)(param_2 + 0x284) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb80();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x27c);
  }
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  if ((*(char *)(param_2 + 0x290) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7a0();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x288);
  }
  *(undefined4 *)(param_1 + 0x27) = uVar2;
  if ((*(char *)(param_2 + 0x29c) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7d0();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x294);
  }
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
  if ((*(char *)(param_2 + 0x2a8) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc800();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2a0);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(char *)(param_2 + 0x2b4) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc840();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2ac);
  }
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar2;
  if ((*(char *)(param_2 + 0x2c0) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc880();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2b8);
  }
  *(undefined4 *)(param_1 + 0x29) = uVar2;
  if ((*(char *)(param_2 + 0x2cc) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc8c0();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2c4);
  }
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar2;
  if ((*(char *)(param_2 + 0x29c) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7d0();
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x294);
  }
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x152) = *(undefined1 *)(param_2 + 0x380);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x381);
  if ((*(char *)(param_2 + 0x35c) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(longlong *)(param_2 + 0x3c8),&plStackX_8);
  }
  else {
    plStackX_8 = *(longlong **)(param_2 + 0x34c);
  }
  if ((*(char *)(param_2 + 0x348) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(longlong *)(param_2 + 0x3c8),auStackX_10);
  }
  else {
    auStackX_10[0] = *(undefined8 *)(param_2 + 0x338);
  }
  if ((*(char *)(param_2 + 0x334) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc950(*(longlong *)(param_2 + 0x3c8),&uStackX_20);
  }
  else {
    uStackX_20 = *(undefined8 *)(param_2 + 0x324);
  }
  if ((*(char *)(param_2 + 800) == '\0') && (*(longlong *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc900(*(longlong *)(param_2 + 0x3c8),&uStack_58);
  }
  else {
    uStack_58 = *(undefined **)(param_2 + 0x300);
    uStack_50 = *(undefined8 *)(param_2 + 0x308);
  }
  FUN_180084c70(param_1 + 8,&uStack_58,&uStackX_20,auStackX_10,&plStackX_8);
  if ((undefined *)*param_1 == &UNK_180a001e8) {
    pfVar5 = (float *)(param_1 + 0x10);
    *(undefined8 *)pfVar5 = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 100);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_1 + 0xf);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x7c);
    FUN_180084ae0();
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
    fVar18 = pfVar5[6];
    fVar16 = pfVar5[0xd];
    fVar10 = pfVar5[9];
    fVar17 = pfVar5[1];
    fVar15 = pfVar5[0xe];
    fVar23 = pfVar5[2];
    fVar25 = pfVar5[10];
    fVar28 = pfVar5[5];
    fVar24 = fVar15 * fVar10 - fVar16 * fVar25;
    fVar21 = fVar15 * fVar28 - fVar16 * fVar18;
    fVar22 = fVar15 * fVar17 - fVar16 * fVar23;
    fVar29 = fVar28 * fVar25 - fVar10 * fVar18;
    fVar20 = fVar17 * fVar25 - fVar10 * fVar23;
    *(float *)(param_1 + 0x18) = fVar29;
    fVar19 = fVar17 * fVar18 - fVar28 * fVar23;
    fVar30 = fVar23 * pfVar5[9] - fVar25 * pfVar5[1];
    *(float *)((longlong)param_1 + 0xc4) = fVar30;
    fVar16 = pfVar5[5];
    fVar15 = pfVar5[1];
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    fVar31 = fVar18 * fVar15 - fVar23 * fVar16;
    *(float *)(param_1 + 0x19) = fVar31;
    fVar14 = fVar18 * pfVar5[8] - fVar25 * pfVar5[4];
    *(float *)(param_1 + 0x1a) = fVar14;
    fVar27 = fVar25 * *pfVar5 - fVar23 * pfVar5[8];
    *(float *)((longlong)param_1 + 0xd4) = fVar27;
    fVar16 = pfVar5[4];
    fVar15 = *pfVar5;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    fVar26 = fVar23 * fVar16 - fVar18 * fVar15;
    *(float *)(param_1 + 0x1b) = fVar26;
    fVar15 = fVar10 * pfVar5[4] - fVar28 * pfVar5[8];
    *(float *)(param_1 + 0x1c) = fVar15;
    fVar10 = fVar17 * pfVar5[8] - fVar10 * *pfVar5;
    *(float *)((longlong)param_1 + 0xe4) = fVar10;
    fVar18 = pfVar5[4];
    fVar16 = *pfVar5;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    fVar28 = fVar28 * fVar16 - fVar17 * fVar18;
    *(float *)(param_1 + 0x1d) = fVar28;
    fVar16 = (fVar21 * pfVar5[8] - fVar24 * pfVar5[4]) - fVar29 * pfVar5[0xc];
    *(float *)(param_1 + 0x1e) = fVar16;
    fVar25 = (fVar24 * *pfVar5 - fVar22 * pfVar5[8]) + fVar20 * pfVar5[0xc];
    *(float *)((longlong)param_1 + 0xf4) = fVar25;
    fVar23 = (fVar22 * pfVar5[4] - fVar21 * *pfVar5) - fVar19 * pfVar5[0xc];
    *(float *)(param_1 + 0x1f) = fVar23;
    fVar17 = (fVar29 * *pfVar5 - fVar20 * pfVar5[4]) + fVar19 * pfVar5[8];
    *(float *)((longlong)param_1 + 0xfc) = fVar17;
    fVar18 = fVar30 * pfVar5[4] + fVar29 * *pfVar5 + fVar31 * pfVar5[8];
    if (fVar18 != 1.0) {
      fVar18 = 1.0 / fVar18;
      *(float *)(param_1 + 0x1a) = fVar14 * fVar18;
      *(float *)(param_1 + 0x1c) = fVar15 * fVar18;
      *(float *)(param_1 + 0x18) = fVar29 * fVar18;
      *(float *)((longlong)param_1 + 0xc4) = fVar30 * fVar18;
      *(float *)(param_1 + 0x19) = fVar31 * fVar18;
      *(float *)((longlong)param_1 + 0xd4) = fVar27 * fVar18;
      *(float *)(param_1 + 0x1b) = fVar26 * fVar18;
      *(float *)((longlong)param_1 + 0xe4) = fVar10 * fVar18;
      *(float *)(param_1 + 0x1d) = fVar28 * fVar18;
      *(float *)(param_1 + 0x1e) = fVar16 * fVar18;
      *(float *)((longlong)param_1 + 0xf4) = fVar25 * fVar18;
      *(float *)(param_1 + 0x1f) = fVar23 * fVar18;
      *(float *)((longlong)param_1 + 0xfc) = fVar17 * fVar18;
    }
    return;
  }
  (**(code **)((undefined *)*param_1 + 0x10))(param_1);
  return;
}





// 函数: void FUN_180078c10(longlong param_1)
void FUN_180078c10(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar1 = (float *)(param_1 + 0x80);
  *(undefined8 *)pfVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x7c);
  FUN_180084ae0();
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  fVar7 = pfVar1[6];
  fVar5 = pfVar1[0xd];
  fVar2 = pfVar1[9];
  fVar6 = pfVar1[1];
  fVar4 = pfVar1[0xe];
  fVar12 = pfVar1[2];
  fVar14 = pfVar1[10];
  fVar17 = pfVar1[5];
  fVar13 = fVar4 * fVar2 - fVar5 * fVar14;
  fVar10 = fVar4 * fVar17 - fVar5 * fVar7;
  fVar11 = fVar4 * fVar6 - fVar5 * fVar12;
  fVar18 = fVar17 * fVar14 - fVar2 * fVar7;
  fVar9 = fVar6 * fVar14 - fVar2 * fVar12;
  *(float *)(param_1 + 0xc0) = fVar18;
  fVar8 = fVar6 * fVar7 - fVar17 * fVar12;
  fVar19 = fVar12 * pfVar1[9] - fVar14 * pfVar1[1];
  *(float *)(param_1 + 0xc4) = fVar19;
  fVar5 = pfVar1[5];
  fVar4 = pfVar1[1];
  *(undefined4 *)(param_1 + 0xcc) = 0;
  fVar20 = fVar7 * fVar4 - fVar12 * fVar5;
  *(float *)(param_1 + 200) = fVar20;
  fVar3 = fVar7 * pfVar1[8] - fVar14 * pfVar1[4];
  *(float *)(param_1 + 0xd0) = fVar3;
  fVar16 = fVar14 * *pfVar1 - fVar12 * pfVar1[8];
  *(float *)(param_1 + 0xd4) = fVar16;
  fVar5 = pfVar1[4];
  fVar4 = *pfVar1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  fVar15 = fVar12 * fVar5 - fVar7 * fVar4;
  *(float *)(param_1 + 0xd8) = fVar15;
  fVar4 = fVar2 * pfVar1[4] - fVar17 * pfVar1[8];
  *(float *)(param_1 + 0xe0) = fVar4;
  fVar2 = fVar6 * pfVar1[8] - fVar2 * *pfVar1;
  *(float *)(param_1 + 0xe4) = fVar2;
  fVar7 = pfVar1[4];
  fVar5 = *pfVar1;
  *(undefined4 *)(param_1 + 0xec) = 0;
  fVar17 = fVar17 * fVar5 - fVar6 * fVar7;
  *(float *)(param_1 + 0xe8) = fVar17;
  fVar5 = (fVar10 * pfVar1[8] - fVar13 * pfVar1[4]) - fVar18 * pfVar1[0xc];
  *(float *)(param_1 + 0xf0) = fVar5;
  fVar14 = (fVar13 * *pfVar1 - fVar11 * pfVar1[8]) + fVar9 * pfVar1[0xc];
  *(float *)(param_1 + 0xf4) = fVar14;
  fVar12 = (fVar11 * pfVar1[4] - fVar10 * *pfVar1) - fVar8 * pfVar1[0xc];
  *(float *)(param_1 + 0xf8) = fVar12;
  fVar6 = (fVar18 * *pfVar1 - fVar9 * pfVar1[4]) + fVar8 * pfVar1[8];
  *(float *)(param_1 + 0xfc) = fVar6;
  fVar7 = fVar19 * pfVar1[4] + fVar18 * *pfVar1 + fVar20 * pfVar1[8];
  if (fVar7 != 1.0) {
    fVar7 = 1.0 / fVar7;
    *(float *)(param_1 + 0xd0) = fVar3 * fVar7;
    *(float *)(param_1 + 0xe0) = fVar4 * fVar7;
    *(float *)(param_1 + 0xc0) = fVar18 * fVar7;
    *(float *)(param_1 + 0xc4) = fVar19 * fVar7;
    *(float *)(param_1 + 200) = fVar20 * fVar7;
    *(float *)(param_1 + 0xd4) = fVar16 * fVar7;
    *(float *)(param_1 + 0xd8) = fVar15 * fVar7;
    *(float *)(param_1 + 0xe4) = fVar2 * fVar7;
    *(float *)(param_1 + 0xe8) = fVar17 * fVar7;
    *(float *)(param_1 + 0xf0) = fVar5 * fVar7;
    *(float *)(param_1 + 0xf4) = fVar14 * fVar7;
    *(float *)(param_1 + 0xf8) = fVar12 * fVar7;
    *(float *)(param_1 + 0xfc) = fVar6 * fVar7;
  }
  return;
}





// 函数: void FUN_180078c70(undefined4 *param_1,longlong *param_2)
void FUN_180078c70(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[2];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[3];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[5];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[6];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[7];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[9];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[10];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0xb];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0xd];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0xe];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0xf];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x11];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x12];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x13];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x14];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x15];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x16];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    *(undefined4 *)param_2[1] = uVar1;
  }
  else {
    *puVar2 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_1800791a0(longlong param_1)
void FUN_1800791a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(lVar2 + 0x88);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(lVar2 + 0x60);
  bVar3 = *(byte *)(param_1 + 0xfd) & 0x40;
  if ((((bVar3 != 0) && (lVar2 != 0)) || (*(longlong *)(param_1 + 0x1b0) == 0)) ||
     (lVar1 = FUN_180085900(), param_1 == lVar1)) {
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar2 + 200);
  }
  if (((bVar3 == 0) || (lVar2 == 0)) &&
     ((*(longlong *)(param_1 + 0x1b0) != 0 && (lVar1 = FUN_180085900(), param_1 != lVar1)))) {
    return;
  }
  *(uint *)(param_1 + 0x208) = (uint)*(ushort *)(lVar2 + 0xc0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



