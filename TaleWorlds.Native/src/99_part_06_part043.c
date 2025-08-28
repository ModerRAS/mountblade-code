#include "TaleWorlds.Native.Split.h"

// 99_part_06_part043.c - 1 个函数

// 函数: void FUN_1803d0570(longlong param_1,undefined4 param_2)
void FUN_1803d0570(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar6 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  
  iVar5 = -1;
  for (uVar1 = *(uint *)(param_1 + 0x1c); uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar5 = iVar5 + 1;
  }
  uVar2 = logf();
  auVar6._8_8_ = extraout_XMM0_Qb;
  auVar6._0_8_ = extraout_XMM0_Qa;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)extraout_XMM0_Qa * 1.442695;
  iVar4 = (int)auVar7._0_4_;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
    uVar10 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._8_4_ = uVar10;
    auVar9._12_4_ = uVar10;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = auVar7._0_4_;
    auVar8._0_4_ = auVar7._0_4_;
    uVar1 = movmskps(uVar2,auVar8);
    auVar7 = ZEXT416((uint)(float)(int)(iVar4 + (uVar1 & 1 ^ 1)));
  }
  lVar3 = FUN_1803d0630(param_1,*(undefined8 *)(param_1 + 0x10),iVar5 - (int)auVar7._0_4_,0);
  if (lVar3 == 0) {
    return;
  }
  *(undefined4 *)(lVar3 + 0xc) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(lVar3 + 0x2c) = 1;
  return;
}



longlong FUN_1803d0630(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  if (param_4 == param_3) {
    if (*(int *)(param_2 + 8) == 0) {
      *(undefined4 *)(param_2 + 8) = 2;
      return param_2;
    }
  }
  else if (*(int *)(param_2 + 8) != 2) {
    lVar2 = 0;
    piVar3 = (int *)(param_2 + 0x1c);
    do {
      lVar1 = FUN_1803d0630(param_1,(longlong)*piVar3 * 0x30 + *(longlong *)(param_1 + 0x10),param_3
                            ,param_4 + 1);
      if (lVar1 != 0) {
        *(undefined4 *)(param_2 + 8) = 1;
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar2 < 4);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_1803d06e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = (undefined4 *)FUN_1800daa50();
  FUN_180094b30(puVar3,&UNK_180a24358);
  *puVar3 = 0x20;
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar3[0x4706] = 0;
  puVar3[0x4707] = 0;
  puVar3[0x4708] = (float)iVar1;
  puVar3[0x4709] = (float)iVar1;
  *(undefined8 *)(puVar3 + 0x470a) = 0x3f80000000000000;
  puVar3[0x268b] = 0xffffffff;
  puVar3[1] = 0x100;
  puVar3[0x473c] = _DAT_180bf65ec;
  *(undefined1 *)((longlong)puVar3 + 0x11c37) = 0;
  FUN_1801be080(puVar3 + 2,_DAT_180c86890 + 0x13c8,0x3f800000,param_4,uVar4);
  *(undefined1 *)(puVar3 + 0x25c4) = 3;
  plVar2 = *(longlong **)(puVar3 + 0x25a4);
  *(undefined8 *)(puVar3 + 0x25a4) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  puVar3[0x6e] = 0x208782;
  return puVar3;
}



char FUN_1803d07e0(longlong param_1,longlong param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  
  cVar1 = '\x01';
  if (*(int *)(param_1 + 8) != 0) {
    piVar2 = (int *)(param_1 + 0x1c);
    lVar3 = 4;
    do {
      if (*piVar2 != -1) {
        if (cVar1 != '\0') {
          cVar1 = FUN_1803d07e0((longlong)*piVar2 * 0x30 + *(longlong *)(param_2 + 0x10),param_2);
          if (cVar1 != '\0') {
            cVar1 = '\x01';
            goto LAB_1803d083b;
          }
        }
        cVar1 = '\0';
      }
LAB_1803d083b:
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 8) == 1)) {
      *(undefined4 *)(param_1 + 8) = 0;
      return '\x01';
    }
    cVar1 = '\0';
  }
  return cVar1;
}



undefined1 FUN_1803d07f8(longlong param_1)

{
  char in_AL;
  char cVar1;
  int *piVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar3;
  
  piVar2 = (int *)(param_1 + 0x1c);
  lVar3 = 4;
  do {
    if (*piVar2 != -1) {
      if (in_AL != '\0') {
        cVar1 = FUN_1803d07e0((longlong)*piVar2 * 0x30 + *(longlong *)(unaff_RBP + 0x10));
        if (cVar1 != '\0') {
          in_AL = '\x01';
          goto LAB_1803d083b;
        }
      }
      in_AL = '\0';
    }
LAB_1803d083b:
    piVar2 = piVar2 + 1;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      if ((in_AL != '\0') && (*(int *)(unaff_RSI + 8) == 1)) {
        *(undefined4 *)(unaff_RSI + 8) = 0;
        return 1;
      }
      return 0;
    }
  } while( true );
}



undefined1 FUN_1803d0853(void)

{
  longlong unaff_RSI;
  
  if (*(int *)(unaff_RSI + 8) == 1) {
    *(undefined4 *)(unaff_RSI + 8) = 0;
    return 1;
  }
  return 0;
}



longlong FUN_1803d0880(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar1 = FUN_180628ca0();
  FUN_180627ae0(param_2,uVar1);
  iVar4 = *(int *)(param_2 + 0x10) + 0x2a;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x616c5f6c70207461;
  puVar2[3] = 0x676173755f726579;
  puVar2[4] = 0x3d205d36315b7365;
  *(undefined2 *)(puVar2 + 5) = 0x7b20;
  *(undefined1 *)((longlong)puVar2 + 0x2a) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_180628380(param_2,*(undefined4 *)(param_1 + 0x180));
  puVar8 = (undefined4 *)(param_1 + 0x184);
  lVar9 = 0xf;
  lVar6 = 0xf;
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_180628380(param_2,*puVar8);
    puVar8 = puVar8 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x37;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x616c5f6c70207461;
  puVar2[3] = 0x67616c665f726579;
  *(undefined4 *)(puVar2 + 4) = 0x74735f73;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x63697461;
  *(undefined4 *)(puVar2 + 5) = 0x5d36315b;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x5d36315b;
  *(undefined4 *)(puVar2 + 6) = 0x7b203d20;
  *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  lVar6 = 0;
  do {
    FUN_1806277c0(param_2,iVar4 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x7b;
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    lVar10 = lVar6 * 0x1a0;
    FUN_1806284c0(param_2);
    puVar8 = (undefined4 *)(param_3 + 0xb4 + lVar10);
    lVar7 = 3;
    do {
      iVar4 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
      FUN_180628380(param_2,*puVar8);
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar8 = (undefined4 *)(param_3 + 0xc0 + lVar10);
    lVar7 = 4;
    do {
      iVar4 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
      FUN_180628380(param_2,*puVar8);
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar8 = (undefined4 *)(param_3 + 0xd0 + lVar10);
    lVar7 = 4;
    do {
      iVar4 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
      FUN_180628380(param_2,*puVar8);
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar8 = (undefined4 *)(param_3 + 0xe0 + lVar10);
    lVar7 = 4;
    do {
      iVar4 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
      FUN_180628380(param_2,*puVar8);
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (lVar6 == 0xf) {
      iVar4 = *(int *)(param_2 + 0x10) + 2;
      FUN_1806277c0(param_2,iVar4);
      puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar3 = 0x207d;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x10) + 3;
      FUN_1806277c0(param_2,iVar4);
      *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x202c7d;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 < 0x10);
  FUN_1806277c0(param_2,iVar4 + 3);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar4 + 3;
  FUN_1806277c0(param_2,iVar4 + 0x32);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x69625f6c70207461;
  puVar2[3] = 0x736c696174656467;
  *(undefined4 *)(puVar2 + 4) = 0x6f6d615f;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x5b746e75;
  *(undefined4 *)(puVar2 + 5) = 0x205d3631;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x7b203d;
  *(int *)(param_2 + 0x10) = iVar4 + 0x32;
  FUN_1806284c0(param_2);
  lVar6 = 0xf;
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_1806284c0(param_2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x30;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x69765f6c70207461;
  puVar2[3] = 0x666669645f617473;
  puVar2[4] = 0x756f6d615f657375;
  *(undefined4 *)(puVar2 + 5) = 0x3d20746e;
  *(undefined2 *)((longlong)puVar2 + 0x2c) = 0x20;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 1;
  FUN_1806277c0(param_2,iVar5);
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x3b;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x35;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x69765f6c70207461;
  puVar2[3] = 0x6579616c5f617473;
  *(undefined4 *)(puVar2 + 4) = 0x65645f72;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6c696174;
  *(undefined4 *)(puVar2 + 5) = 0x7369645f;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x636e6174;
  *(undefined4 *)(puVar2 + 6) = 0x203d2065;
  *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 1;
  FUN_1806277c0(param_2,iVar5);
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x3b;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x31;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x69765f6c70207461;
  puVar2[3] = 0x65626c615f617473;
  *(undefined4 *)(puVar2 + 4) = 0x6d5f6f64;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x69746c75;
  *(undefined4 *)(puVar2 + 5) = 0x65696c70;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x203d2072;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 1;
  FUN_1806277c0(param_2,iVar5);
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x3b;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x2b;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x69765f6c70207461;
  puVar2[3] = 0x617465645f617473;
  puVar2[4] = 0x20656c69745f6c69;
  *(undefined2 *)(puVar2 + 5) = 0x203d;
  *(undefined1 *)((longlong)puVar2 + 0x2a) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 1;
  FUN_1806277c0(param_2,iVar5);
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x3b;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x31;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x72675f6c70207461;
  puVar2[3] = 0x6f6c735f646e756f;
  *(undefined4 *)(puVar2 + 4) = 0x735f6570;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x656c6163;
  *(undefined4 *)(puVar2 + 5) = 0x5d36315b;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x7b203d20;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  lVar6 = 0xf;
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_1806284c0(param_2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x30;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x61705f6c70207461;
  puVar2[3] = 0x615f78616c6c6172;
  puVar2[4] = 0x36315b746e756f6d;
  *(undefined4 *)(puVar2 + 5) = 0x203d205d;
  *(undefined2 *)((longlong)puVar2 + 0x2c) = 0x7b;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  lVar6 = 0xf;
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_1806284c0(param_2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x31;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x6c655f6c70207461;
  puVar2[3] = 0x5f6e6f6974617665;
  puVar2[4] = 0x315b746e756f6d61;
  *(undefined4 *)(puVar2 + 5) = 0x3d205d36;
  *(undefined2 *)((longlong)puVar2 + 0x2c) = 0x7b20;
  *(undefined1 *)((longlong)puVar2 + 0x2e) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  lVar6 = 0xf;
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_1806284c0(param_2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x34;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x6d735f6c70207461;
  puVar2[3] = 0x656c625f68746f6f;
  *(undefined4 *)(puVar2 + 4) = 0x615f646e;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6e756f6d;
  *(undefined4 *)(puVar2 + 5) = 0x36315b74;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x203d205d;
  *(undefined2 *)(puVar2 + 6) = 0x7b;
  *(int *)(param_2 + 0x10) = iVar4;
  FUN_1806284c0(param_2);
  do {
    iVar4 = *(int *)(param_2 + 0x10) + 2;
    FUN_1806277c0(param_2,iVar4);
    puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x202c;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_1806284c0(param_2);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = iVar4 + 3;
  FUN_1806277c0(param_2,iVar5);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar4 = iVar4 + 0x35;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x625f6c7020347461;
  puVar2[3] = 0x6c69617465646769;
  *(undefined4 *)(puVar2 + 4) = 0x6163735f;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6962656c;
  *(undefined4 *)(puVar2 + 5) = 0x315b7361;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3d205d36;
  *(undefined2 *)(puVar2 + 6) = 0x7b20;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  lVar6 = 0;
  do {
    FUN_1806277c0(param_2,iVar4 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x7b;
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    FUN_1806284c0(param_2);
    lVar9 = 3;
    do {
      iVar4 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
      FUN_1806284c0(param_2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if (lVar6 == 0xf) {
      iVar4 = *(int *)(param_2 + 0x10) + 2;
      FUN_1806277c0(param_2,iVar4);
      puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar3 = 0x207d;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x10) + 3;
      FUN_1806277c0(param_2,iVar4);
      *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x202c7d;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 < 0x10);
  FUN_1806277c0(param_2,iVar4 + 3);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar4 + 3;
  iVar4 = iVar4 + 0x3e;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x6c70203478347461;
  puVar2[3] = 0x6169726574616d5f;
  *(undefined4 *)(puVar2 + 4) = 0x63745f6c;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6172745f;
  *(undefined4 *)(puVar2 + 5) = 0x6f66736e;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x74616d72;
  puVar2[6] = 0x205d36315b6e6f69;
  *(undefined4 *)(puVar2 + 7) = 0x7b203d;
  *(int *)(param_2 + 0x10) = iVar4;
  lVar6 = 0;
  do {
    FUN_1806277c0(param_2,iVar4 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x7b;
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    FUN_1806284c0(param_2);
    lVar9 = 0;
    do {
      lVar7 = 0;
      do {
        if ((lVar7 != 0) || (lVar9 != 0)) {
          iVar4 = *(int *)(param_2 + 0x10) + 1;
          FUN_1806277c0(param_2,iVar4);
          *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
          *(int *)(param_2 + 0x10) = iVar4;
          FUN_1806284c0(param_2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < 4);
    if (lVar6 == 0xf) {
      iVar4 = *(int *)(param_2 + 0x10) + 2;
      FUN_1806277c0(param_2,iVar4);
      puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar3 = 0x207d;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x10) + 3;
      FUN_1806277c0(param_2,iVar4);
      *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x202c7d;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 < 0x10);
  FUN_1806277c0(param_2,iVar4 + 3);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar4 + 3;
  iVar4 = iVar4 + 0x44;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x6c70203478347461;
  puVar2[3] = 0x6169726574616d5f;
  *(undefined4 *)(puVar2 + 4) = 0x63745f6c;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6172745f;
  *(undefined4 *)(puVar2 + 5) = 0x6f66736e;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x74616d72;
  puVar2[6] = 0x6874726f5f6e6f69;
  puVar2[7] = 0x203d205d36315b6f;
  *(undefined2 *)(puVar2 + 8) = 0x7b;
  *(int *)(param_2 + 0x10) = iVar4;
  lVar6 = 0;
  do {
    FUN_1806277c0(param_2,iVar4 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x7b;
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    FUN_1806284c0(param_2);
    lVar9 = 0;
    do {
      lVar7 = 0;
      do {
        if ((lVar7 != 0) || (lVar9 != 0)) {
          iVar4 = *(int *)(param_2 + 0x10) + 1;
          FUN_1806277c0(param_2,iVar4);
          *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
          *(int *)(param_2 + 0x10) = iVar4;
          FUN_1806284c0(param_2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < 4);
    if (lVar6 == 0xf) {
      iVar4 = *(int *)(param_2 + 0x10) + 2;
      FUN_1806277c0(param_2,iVar4);
      puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar3 = 0x207d;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x10) + 3;
      FUN_1806277c0(param_2,iVar4);
      *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x202c7d;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 < 0x10);
  FUN_1806277c0(param_2,iVar4 + 3);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar4 + 3;
  iVar4 = iVar4 + 0x35;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6320636974617473;
  puVar2[1] = 0x6f6c662074736e6f;
  puVar2[2] = 0x615f6c7020347461;
  puVar2[3] = 0x61665f6f6465626c;
  *(undefined4 *)(puVar2 + 4) = 0x726f7463;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x6c6f635f;
  *(undefined4 *)(puVar2 + 5) = 0x315b726f;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3d205d36;
  *(undefined2 *)(puVar2 + 6) = 0x7b20;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  lVar6 = 0;
  do {
    FUN_1806277c0(param_2,iVar4 + 7);
    *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
         0x283474616f6c66;
    *(int *)(param_2 + 0x10) = iVar4 + 7;
    lVar9 = 0;
    do {
      FUN_1806284c0(param_2);
      iVar5 = *(int *)(param_2 + 0x10);
      if (lVar9 != 3) {
        iVar5 = iVar5 + 1;
        FUN_1806277c0(param_2,iVar5);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
        *(int *)(param_2 + 0x10) = iVar5;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < 4);
    iVar4 = iVar5 + 1;
    FUN_1806277c0(param_2,iVar4);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x29;
    *(int *)(param_2 + 0x10) = iVar4;
    if (lVar6 != 0xf) {
      iVar4 = iVar5 + 2;
      FUN_1806277c0(param_2,iVar4);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2c;
      *(int *)(param_2 + 0x10) = iVar4;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 < 0x10);
  FUN_1806277c0(param_2,iVar4 + 3);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x203b7d;
  *(int *)(param_2 + 0x10) = iVar4 + 3;
  return param_2;
}



longlong FUN_1803d1790(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStackX_8 [8];
  uint auStack_30 [2];
  ulonglong uStack_28;
  longlong lStack_18;
  undefined8 uStack_10;
  
  puVar11 = (undefined8 *)(param_1[4] + 0x368);
  uStack_28 = *(ulonglong *)(*param_1 + 0x15b8);
  puVar3 = *(undefined8 **)(param_1[4] + 0x378);
  puVar10 = puVar11;
  auStack_30[0] = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if ((*(uint *)(puVar3 + 4) < param_2) ||
         ((*(uint *)(puVar3 + 4) <= param_2 && ((ulonglong)puVar3[5] < uStack_28)))) {
        bVar2 = true;
        puVar4 = (undefined8 *)*puVar3;
      }
      else {
        bVar2 = false;
        puVar4 = (undefined8 *)puVar3[1];
      }
      puVar8 = puVar3;
      if (bVar2) {
        puVar8 = puVar10;
      }
      puVar3 = puVar4;
      puVar10 = puVar8;
    } while (puVar4 != (undefined8 *)0x0);
    if (((puVar8 != puVar11) && (*(uint *)(puVar8 + 4) <= param_2)) &&
       ((*(uint *)(puVar8 + 4) < param_2 || ((ulonglong)puVar8[5] <= uStack_28)))) {
      AcquireSRWLockShared(0x180c91dc8);
      lStack_18 = param_1[1];
      uVar1 = param_1[2];
      lVar7 = puVar8[7];
      plVar9 = *(longlong **)
                (lVar7 + (((uVar1 & 0xffffffff) + lStack_18) % (ulonglong)*(uint *)(puVar8 + 8)) * 8
                );
      if (plVar9 != (longlong *)0x0) {
        uStack_10._4_2_ = (short)(uVar1 >> 0x20);
        do {
          if (((*plVar9 == lStack_18) && ((int)plVar9[1] == (int)uVar1)) &&
             (*(short *)((longlong)plVar9 + 0xc) == uStack_10._4_2_)) {
            lVar5 = puVar8[8];
            goto LAB_1803d18b2;
          }
          plVar9 = (longlong *)plVar9[3];
        } while (plVar9 != (longlong *)0x0);
      }
      lVar5 = puVar8[8];
      plVar9 = *(longlong **)(lVar7 + lVar5 * 8);
LAB_1803d18b2:
      if (plVar9 == *(longlong **)(lVar7 + lVar5 * 8)) {
        lVar7 = 0;
      }
      else {
        lVar7 = plVar9[2];
      }
      uStack_10 = uVar1;
      ReleaseSRWLockShared(0x180c91dc8);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
  }
  AcquireSRWLockExclusive(0x180c91dc8);
  uVar6 = FUN_1803d8cd0(puVar11,auStack_30);
  lStack_18 = param_1[1];
  uStack_10 = param_1[2];
  lVar7 = FUN_18029a790(uVar6,&lStack_18,auStackX_8);
  ReleaseSRWLockExclusive(0x180c91dc8);
  return lVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




