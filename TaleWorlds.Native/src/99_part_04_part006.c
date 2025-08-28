#include "TaleWorlds.Native.Split.h"

// 99_part_04_part006.c - 7 个函数

// 函数: void FUN_18025b2c0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_18025b2c0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_3 - param_2;
  lVar1 = lVar5 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar5),8);
  uVar4 = (lVar1 >> 8) - (lVar1 >> 0x3f);
  lVar1 = *param_1;
  lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar1),8) +
          (param_1[2] - lVar1);
  if ((ulonglong)((lVar2 >> 8) - (lVar2 >> 0x3f)) < uVar4) {
    if (uVar4 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x170,(char)param_1[3]);
    }
    FUN_18025b470(param_2,param_3,lVar1);
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
      do {
        FUN_180257e50(lVar5);
        lVar5 = lVar5 + 0x170;
      } while (lVar5 != lVar2);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
    *param_1 = lVar1;
    lVar1 = uVar4 * 0x170 + lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  else {
    lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[1] - lVar1),8) +
            (param_1[1] - lVar1);
    uVar3 = (lVar2 >> 8) - (lVar2 >> 0x3f);
    if (uVar3 < uVar4) {
      lVar2 = uVar3 * 0x170 + param_2;
      FUN_18025b7e0(param_2,lVar2,lVar1,lVar5,0xfffffffffffffffe);
      lVar1 = FUN_18025b470(lVar2,param_3,param_1[1]);
      param_1[1] = lVar1;
    }
    else {
      lVar5 = FUN_18025b7e0(param_2,param_3,lVar1,lVar5,0xfffffffffffffffe);
      lVar1 = param_1[1];
      for (lVar2 = lVar5; lVar2 != lVar1; lVar2 = lVar2 + 0x170) {
        FUN_180257e50(lVar2);
      }
      param_1[1] = lVar5;
    }
  }
  return;
}



longlong FUN_18025b470(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    lVar5 = param_3 - (longlong)param_1;
    puVar6 = param_1 + 0x55;
    do {
      FUN_18025ac70(param_3,puVar6 + -0x55);
      *(undefined1 *)(lVar5 + -4 + (longlong)puVar6) = *(undefined1 *)(puVar6 + -1);
      *(undefined4 *)(lVar5 + (longlong)puVar6) = *puVar6;
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      puVar1 = (undefined4 *)(lVar5 + 4 + (longlong)puVar6);
      *puVar1 = puVar6[1];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(undefined4 *)(lVar5 + 0x14 + (longlong)puVar6) = puVar6[5];
      param_3 = param_3 + 0x170;
      puVar1 = puVar6 + 7;
      puVar6 = puVar6 + 0x5c;
    } while (puVar1 != param_2);
  }
  return param_3;
}



undefined8 * FUN_18025b520(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_180a3c3e0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_2 + 0x44);
  *(undefined8 *)((longlong)param_1 + 0x4c) = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)((longlong)param_2 + 0x74);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar3;
  uVar3 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar3;
  uVar3 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar3;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  puVar1 = param_1 + 0x1a;
  *puVar1 = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  uVar3 = *puVar1;
  *puVar1 = param_2[0x1a];
  param_2[0x1a] = uVar3;
  uVar3 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  param_2[0x1b] = uVar3;
  uVar3 = param_1[0x1c];
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)(param_2 + 0x1d) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1f] = &UNK_18098bcb0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &UNK_180a3c3e0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_2 + 0x21) = 0;
  param_2[0x20] = 0;
  param_2[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x149) = *(undefined1 *)((longlong)param_2 + 0x149);
  *(undefined1 *)((longlong)param_1 + 0x14a) = *(undefined1 *)((longlong)param_2 + 0x14a);
  return param_1;
}



undefined4 * FUN_18025b7e0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (param_2 - param_1) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - param_1),8)
  ;
  lVar12 = (lVar12 >> 8) - (lVar12 >> 0x3f);
  if (0 < lVar12) {
    lVar13 = param_1 - (longlong)param_3;
    plVar9 = (longlong *)(param_3 + 0x40);
    plVar11 = (longlong *)(param_1 + 0x100);
    do {
      puVar2 = (undefined4 *)(lVar13 + -0x100 + (longlong)plVar9);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *param_3 = *puVar2;
      param_3[1] = uVar4;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
      uVar3 = *(uint *)(plVar11 + -0x1c);
      uVar10 = (ulonglong)uVar3;
      if (plVar11[-0x1d] != 0) {
        FUN_1806277c0(plVar9 + -0x1e,uVar10);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar9[-0x1d],plVar11[-0x1d],uVar10);
      }
      *(undefined4 *)(plVar9 + -0x1c) = 0;
      if (plVar9[-0x1d] != 0) {
        *(undefined1 *)(uVar10 + plVar9[-0x1d]) = 0;
      }
      *(undefined4 *)((longlong)plVar9 + -0xd4) = *(undefined4 *)((longlong)plVar11 + -0xd4);
      *(int *)(plVar9 + -0x1a) = (int)plVar11[-0x1a];
      uVar7 = *(undefined8 *)((longlong)plVar11 + -0xc4);
      *(undefined8 *)((longlong)plVar9 + -0xcc) = *(undefined8 *)((longlong)plVar11 + -0xcc);
      *(undefined8 *)((longlong)plVar9 + -0xc4) = uVar7;
      uVar7 = *(undefined8 *)((longlong)plVar11 + -0xb4);
      *(undefined8 *)((longlong)plVar9 + -0xbc) = *(undefined8 *)((longlong)plVar11 + -0xbc);
      *(undefined8 *)((longlong)plVar9 + -0xb4) = uVar7;
      uVar7 = *(undefined8 *)((longlong)plVar11 + -0xa4);
      *(undefined8 *)((longlong)plVar9 + -0xac) = *(undefined8 *)((longlong)plVar11 + -0xac);
      *(undefined8 *)((longlong)plVar9 + -0xa4) = uVar7;
      uVar7 = *(undefined8 *)((longlong)plVar11 + -0x94);
      *(undefined8 *)((longlong)plVar9 + -0x9c) = *(undefined8 *)((longlong)plVar11 + -0x9c);
      *(undefined8 *)((longlong)plVar9 + -0x94) = uVar7;
      uVar7 = *(undefined8 *)((longlong)plVar11 + -0x84);
      *(undefined8 *)((longlong)plVar9 + -0x8c) = *(undefined8 *)((longlong)plVar11 + -0x8c);
      *(undefined8 *)((longlong)plVar9 + -0x84) = uVar7;
      *(undefined4 *)((longlong)plVar9 + -0x7c) = *(undefined4 *)((longlong)plVar11 + -0x7c);
      *(int *)(plVar9 + -0xf) = (int)plVar11[-0xf];
      *(undefined4 *)((longlong)plVar9 + -0x74) = *(undefined4 *)((longlong)plVar11 + -0x74);
      *(int *)(plVar9 + -0xe) = (int)plVar11[-0xe];
      *(undefined4 *)((longlong)plVar9 + -0x6c) = *(undefined4 *)((longlong)plVar11 + -0x6c);
      lVar8 = plVar11[-0xc];
      plVar9[-0xd] = plVar11[-0xd];
      plVar9[-0xc] = lVar8;
      uVar4 = *(undefined4 *)((longlong)plVar11 + -0x54);
      lVar8 = plVar11[-10];
      uVar5 = *(undefined4 *)((longlong)plVar11 + -0x4c);
      *(int *)(plVar9 + -0xb) = (int)plVar11[-0xb];
      *(undefined4 *)((longlong)plVar9 + -0x54) = uVar4;
      *(int *)(plVar9 + -10) = (int)lVar8;
      *(undefined4 *)((longlong)plVar9 + -0x4c) = uVar5;
      uVar4 = *(undefined4 *)((longlong)plVar11 + -0x44);
      lVar8 = plVar11[-8];
      uVar5 = *(undefined4 *)((longlong)plVar11 + -0x3c);
      *(int *)(plVar9 + -9) = (int)plVar11[-9];
      *(undefined4 *)((longlong)plVar9 + -0x44) = uVar4;
      *(int *)(plVar9 + -8) = (int)lVar8;
      *(undefined4 *)((longlong)plVar9 + -0x3c) = uVar5;
      *(int *)(plVar9 + -7) = (int)plVar11[-7];
      *(undefined4 *)((longlong)plVar9 + -0x34) = *(undefined4 *)((longlong)plVar11 + -0x34);
      if (plVar9 + -6 != plVar11 + -6) {
        FUN_1800588c0(plVar9 + -6,plVar11[-6],plVar11[-5]);
      }
      *(int *)(plVar9 + -2) = (int)plVar11[-2];
      uVar3 = *(uint *)(plVar11 + 1);
      uVar10 = (ulonglong)uVar3;
      if (*plVar11 != 0) {
        FUN_1806277c0(plVar9 + -1,uVar10);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar9,*plVar11,uVar10);
      }
      *(undefined4 *)(plVar9 + 1) = 0;
      if (*plVar9 != 0) {
        *(undefined1 *)(uVar10 + *plVar9) = 0;
      }
      lVar12 = lVar12 + -1;
      *(undefined4 *)((longlong)plVar9 + 0x14) = *(undefined4 *)((longlong)plVar11 + 0x14);
      param_3 = param_3 + 0x5c;
      *(int *)(plVar9 + 3) = (int)plVar11[3];
      *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)((longlong)plVar11 + 0x1c);
      *(int *)(plVar9 + 4) = (int)plVar11[4];
      *(undefined4 *)((longlong)plVar9 + 0x24) = *(undefined4 *)((longlong)plVar11 + 0x24);
      *(int *)(plVar9 + 5) = (int)plVar11[5];
      *(undefined4 *)((longlong)plVar9 + 0x2c) = *(undefined4 *)((longlong)plVar11 + 0x2c);
      *(int *)(plVar9 + 6) = (int)plVar11[6];
      *(undefined4 *)((longlong)plVar9 + 0x34) = *(undefined4 *)((longlong)plVar11 + 0x34);
      *(int *)(plVar9 + 7) = (int)plVar11[7];
      *(undefined4 *)((longlong)plVar9 + 0x3c) = *(undefined4 *)((longlong)plVar11 + 0x3c);
      *(int *)(plVar9 + 8) = (int)plVar11[8];
      *(undefined4 *)((longlong)plVar9 + 0x44) = *(undefined4 *)((longlong)plVar11 + 0x44);
      *(char *)(plVar9 + 9) = (char)plVar11[9];
      *(undefined1 *)((longlong)plVar9 + 0x49) = *(undefined1 *)((longlong)plVar11 + 0x49);
      *(undefined1 *)((longlong)plVar9 + 0x4a) = *(undefined1 *)((longlong)plVar11 + 0x4a);
      *(char *)(plVar9 + 10) = (char)plVar11[10];
      *(undefined4 *)((longlong)plVar9 + 0x54) = *(undefined4 *)((longlong)plVar11 + 0x54);
      lVar8 = plVar11[0xc];
      plVar9[0xb] = plVar11[0xb];
      plVar9[0xc] = lVar8;
      plVar1 = plVar11 + 0xd;
      plVar11 = plVar11 + 0x2e;
      *(int *)(plVar9 + 0xd) = (int)*plVar1;
      plVar9 = plVar9 + 0x2e;
    } while (0 < lVar12);
  }
  return param_3;
}



undefined4 * FUN_18025b81e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *unaff_RBP;
  ulonglong uVar10;
  longlong *plVar11;
  longlong unaff_R14;
  longlong unaff_R15;
  
  plVar9 = (longlong *)(param_3 + 0x100);
  plVar11 = (longlong *)(param_1 + 0x100);
  while( true ) {
    puVar2 = (undefined4 *)((unaff_R15 - param_3) + -0x100 + (longlong)plVar9);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *unaff_RBP = *puVar2;
    unaff_RBP[1] = uVar4;
    unaff_RBP[2] = uVar5;
    unaff_RBP[3] = uVar6;
    uVar3 = *(uint *)(plVar11 + -0x1c);
    uVar10 = (ulonglong)uVar3;
    if (plVar11[-0x1d] != 0) {
      FUN_1806277c0(plVar9 + -0x1e,uVar10);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(plVar9[-0x1d],plVar11[-0x1d],uVar10);
    }
    *(undefined4 *)(plVar9 + -0x1c) = 0;
    if (plVar9[-0x1d] != 0) {
      *(undefined1 *)(uVar10 + plVar9[-0x1d]) = 0;
    }
    *(undefined4 *)((longlong)plVar9 + -0xd4) = *(undefined4 *)((longlong)plVar11 + -0xd4);
    *(int *)(plVar9 + -0x1a) = (int)plVar11[-0x1a];
    uVar7 = *(undefined8 *)((longlong)plVar11 + -0xc4);
    *(undefined8 *)((longlong)plVar9 + -0xcc) = *(undefined8 *)((longlong)plVar11 + -0xcc);
    *(undefined8 *)((longlong)plVar9 + -0xc4) = uVar7;
    uVar7 = *(undefined8 *)((longlong)plVar11 + -0xb4);
    *(undefined8 *)((longlong)plVar9 + -0xbc) = *(undefined8 *)((longlong)plVar11 + -0xbc);
    *(undefined8 *)((longlong)plVar9 + -0xb4) = uVar7;
    uVar7 = *(undefined8 *)((longlong)plVar11 + -0xa4);
    *(undefined8 *)((longlong)plVar9 + -0xac) = *(undefined8 *)((longlong)plVar11 + -0xac);
    *(undefined8 *)((longlong)plVar9 + -0xa4) = uVar7;
    uVar7 = *(undefined8 *)((longlong)plVar11 + -0x94);
    *(undefined8 *)((longlong)plVar9 + -0x9c) = *(undefined8 *)((longlong)plVar11 + -0x9c);
    *(undefined8 *)((longlong)plVar9 + -0x94) = uVar7;
    uVar7 = *(undefined8 *)((longlong)plVar11 + -0x84);
    *(undefined8 *)((longlong)plVar9 + -0x8c) = *(undefined8 *)((longlong)plVar11 + -0x8c);
    *(undefined8 *)((longlong)plVar9 + -0x84) = uVar7;
    *(undefined4 *)((longlong)plVar9 + -0x7c) = *(undefined4 *)((longlong)plVar11 + -0x7c);
    *(int *)(plVar9 + -0xf) = (int)plVar11[-0xf];
    *(undefined4 *)((longlong)plVar9 + -0x74) = *(undefined4 *)((longlong)plVar11 + -0x74);
    *(int *)(plVar9 + -0xe) = (int)plVar11[-0xe];
    *(undefined4 *)((longlong)plVar9 + -0x6c) = *(undefined4 *)((longlong)plVar11 + -0x6c);
    lVar8 = plVar11[-0xc];
    plVar9[-0xd] = plVar11[-0xd];
    plVar9[-0xc] = lVar8;
    uVar4 = *(undefined4 *)((longlong)plVar11 + -0x54);
    lVar8 = plVar11[-10];
    uVar5 = *(undefined4 *)((longlong)plVar11 + -0x4c);
    *(int *)(plVar9 + -0xb) = (int)plVar11[-0xb];
    *(undefined4 *)((longlong)plVar9 + -0x54) = uVar4;
    *(int *)(plVar9 + -10) = (int)lVar8;
    *(undefined4 *)((longlong)plVar9 + -0x4c) = uVar5;
    uVar4 = *(undefined4 *)((longlong)plVar11 + -0x44);
    lVar8 = plVar11[-8];
    uVar5 = *(undefined4 *)((longlong)plVar11 + -0x3c);
    *(int *)(plVar9 + -9) = (int)plVar11[-9];
    *(undefined4 *)((longlong)plVar9 + -0x44) = uVar4;
    *(int *)(plVar9 + -8) = (int)lVar8;
    *(undefined4 *)((longlong)plVar9 + -0x3c) = uVar5;
    *(int *)(plVar9 + -7) = (int)plVar11[-7];
    *(undefined4 *)((longlong)plVar9 + -0x34) = *(undefined4 *)((longlong)plVar11 + -0x34);
    if (plVar9 + -6 != plVar11 + -6) {
      FUN_1800588c0(plVar9 + -6,plVar11[-6],plVar11[-5]);
    }
    *(int *)(plVar9 + -2) = (int)plVar11[-2];
    uVar3 = *(uint *)(plVar11 + 1);
    uVar10 = (ulonglong)uVar3;
    if (*plVar11 != 0) {
      FUN_1806277c0(plVar9 + -1,uVar10);
    }
    if (uVar3 != 0) break;
    *(undefined4 *)(plVar9 + 1) = 0;
    if (*plVar9 != 0) {
      *(undefined1 *)(uVar10 + *plVar9) = 0;
    }
    unaff_R14 = unaff_R14 + -1;
    *(undefined4 *)((longlong)plVar9 + 0x14) = *(undefined4 *)((longlong)plVar11 + 0x14);
    unaff_RBP = unaff_RBP + 0x5c;
    *(int *)(plVar9 + 3) = (int)plVar11[3];
    *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)((longlong)plVar11 + 0x1c);
    *(int *)(plVar9 + 4) = (int)plVar11[4];
    *(undefined4 *)((longlong)plVar9 + 0x24) = *(undefined4 *)((longlong)plVar11 + 0x24);
    *(int *)(plVar9 + 5) = (int)plVar11[5];
    *(undefined4 *)((longlong)plVar9 + 0x2c) = *(undefined4 *)((longlong)plVar11 + 0x2c);
    *(int *)(plVar9 + 6) = (int)plVar11[6];
    *(undefined4 *)((longlong)plVar9 + 0x34) = *(undefined4 *)((longlong)plVar11 + 0x34);
    *(int *)(plVar9 + 7) = (int)plVar11[7];
    *(undefined4 *)((longlong)plVar9 + 0x3c) = *(undefined4 *)((longlong)plVar11 + 0x3c);
    *(int *)(plVar9 + 8) = (int)plVar11[8];
    *(undefined4 *)((longlong)plVar9 + 0x44) = *(undefined4 *)((longlong)plVar11 + 0x44);
    *(char *)(plVar9 + 9) = (char)plVar11[9];
    *(undefined1 *)((longlong)plVar9 + 0x49) = *(undefined1 *)((longlong)plVar11 + 0x49);
    *(undefined1 *)((longlong)plVar9 + 0x4a) = *(undefined1 *)((longlong)plVar11 + 0x4a);
    *(char *)(plVar9 + 10) = (char)plVar11[10];
    *(undefined4 *)((longlong)plVar9 + 0x54) = *(undefined4 *)((longlong)plVar11 + 0x54);
    lVar8 = plVar11[0xc];
    plVar9[0xb] = plVar11[0xb];
    plVar9[0xc] = lVar8;
    plVar1 = plVar11 + 0xd;
    plVar11 = plVar11 + 0x2e;
    *(int *)(plVar9 + 0xd) = (int)*plVar1;
    plVar9 = plVar9 + 0x2e;
    if (unaff_R14 < 1) {
      return unaff_RBP;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*plVar9,*plVar11,uVar10);
}






// 函数: void FUN_18025ba3d(void)
void FUN_18025ba3d(void)

{
  return;
}



undefined8 *
FUN_18025ba50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a15360;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = &UNK_180a3c3e0;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = &UNK_18098bcb0;
  *param_1 = &UNK_1809ffa18;
  if ((param_2 & 1) != 0) {
    free(param_1,0x90,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18025bb00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x90,8,0x1a,0xfffffffffffffffe);
  *puVar6 = &UNK_1809ffa18;
  *puVar6 = &UNK_180a15360;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar1 = puVar6 + 8;
  *puVar1 = &UNK_18098bcb0;
  puVar6[9] = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar6[0xb] = 0;
  puVar6[9] = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  *(undefined4 *)(puVar6 + 0x11) = 3;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
  puVar6[0xc] = 0;
  *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[0xd] = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    puVar6[1] = *(undefined8 *)(param_2 + 8);
    puVar6[2] = uVar5;
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)((longlong)puVar6 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    uVar4 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
    puVar6[6] = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    FUN_180627be0(puVar1,param_2 + 0x40);
    puVar6[0xc] = *(undefined8 *)(param_2 + 0x60);
    puVar6[0xd] = *(undefined8 *)(param_2 + 0x68);
    FUN_18014e160(puVar6 + 0xe,param_2 + 0x70);
  }
  return puVar6;
}






// 函数: void FUN_18025bc40(longlong param_1,longlong param_2)
void FUN_18025bc40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(longlong **)(param_2 + 0xb0);
    *(longlong **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_2;
    FUN_18023ccc0(*(undefined8 *)(param_1 + 0xb0));
  }
  plStackX_8 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025bd30(longlong param_1)
void FUN_18025bd30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,5,0,0xfffffffffffffffe);
    plVar5 = (longlong *)FUN_18023a2e0(uVar4,0);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar5[0x15] = param_1;
    puVar6 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar6 = *(undefined **)(param_1 + 0x70);
    }
    (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar6);
    plVar1 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    FUN_18023ccc0(*(undefined8 *)(param_1 + 0xb0));
    lVar2 = _DAT_180c86930;
    plVar5 = *(longlong **)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *(undefined1 *)((longlong)plVar5 + 0xb2) = 1;
    FUN_1802abe00((longlong)iVar3 * 0x98 + lVar2 + 8,plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025be60(longlong param_1)
void FUN_18025be60(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong *plStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    puStack_50 = &UNK_18098bc80;
    puStack_48 = auStack_38;
    auStack_38[0] = 0;
    uStack_40 = 0x10;
    strcpy_s(auStack_38,0x20,&UNK_180a03108);
    uVar1 = FUN_180086e40(_DAT_180c868a8,&UNK_180a01170,&puStack_50);
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = uVar1;
    puStack_50 = &UNK_18098bcb0;
    FUN_18023ccc0(*(undefined8 *)(param_1 + 0xb0));
    pplStack_60 = &plStack_68;
    plStack_68 = *(longlong **)(param_1 + 0xb0);
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x28))();
    }
    FUN_1800b55b0();
    pplStack_60 = *(longlong ***)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (pplStack_60 != (longlong **)0x0) {
      (**(code **)((longlong)*pplStack_60 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025bfa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18025bfa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined *puStackX_18;
  undefined8 uStackX_20;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  cVar2 = FUN_180624af0(lVar1 + 0x40);
  if (cVar2 != '\0') {
    cVar2 = FUN_18062da70(lVar1 + 0x40);
    if (cVar2 == '\0') {
      puStackX_18 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x48) != (undefined *)0x0) {
        puStackX_18 = *(undefined **)(lVar1 + 0x48);
      }
      uStackX_20 = param_4;
      FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a15310,&puStackX_18);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025c000(undefined8 param_1,undefined4 param_2,undefined8 param_3)
void FUN_18025c000(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_18025c3e0(&uStack_88,param_1,param_2);
  FUN_18025c090(&uStack_88,param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}






