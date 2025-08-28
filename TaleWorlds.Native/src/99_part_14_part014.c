#include "TaleWorlds.Native.Split.h"

// 99_part_14_part014.c - 6 个函数

// 函数: void FUN_1808f5d30(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
void FUN_1808f5d30(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  lVar1 = param_2 + (param_4 & 0xff) * 2;
  switch(*(byte *)(param_2 + 8 + (param_4 & 0xff) * 2) & 0xf) {
  case 0:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x10;
    break;
  case 1:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x30;
    break;
  case 2:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x20;
    break;
  case 3:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x60;
    break;
  case 4:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x40;
    break;
  case 5:
    *(undefined4 *)(param_5 + 0xc) = 0xc0;
    break;
  case 6:
    *(undefined4 *)(param_5 + 0xc) = 0x80;
    break;
  case 7:
    *(undefined4 *)(param_5 + 0xc) = 0x90;
  }
  bVar2 = *(byte *)(lVar1 + 8);
  if ((bVar2 & 0x10) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x8000;
    bVar2 = *(byte *)(lVar1 + 8);
  }
  if ((bVar2 & 0x20) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x4000;
    bVar2 = *(byte *)(lVar1 + 8);
  }
  if ((bVar2 & 0x40) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x2000;
    bVar2 = *(byte *)(lVar1 + 8);
  }
  if ((char)bVar2 < '\0') {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x1000;
  }
  bVar2 = *(byte *)(lVar1 + 9);
  if ((bVar2 & 1) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x400;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 2) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x800;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 4) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x100;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 8) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x200;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 0x10) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 1;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 0x20) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 8;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((bVar2 & 0x40) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 2;
    bVar2 = *(byte *)(lVar1 + 9);
  }
  if ((char)bVar2 < '\0') {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 4;
  }
  bVar2 = *(byte *)(lVar1 + 10);
  if ((bVar2 & 2) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x100000;
    bVar2 = *(byte *)(lVar1 + 10);
  }
  if ((bVar2 & 1) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x10000;
    bVar2 = *(byte *)(lVar1 + 10);
  }
  if ((bVar2 & 4) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x200000;
  }
  *(undefined1 *)(param_5 + 0x10) = *(undefined1 *)(lVar1 + 1);
  *(undefined1 *)(param_5 + 0x11) = *(undefined1 *)(lVar1 + 2);
  *(undefined1 *)(param_5 + 0x12) = *(undefined1 *)(lVar1 + 3);
  *(undefined1 *)(param_5 + 0x13) = *(undefined1 *)(lVar1 + 4);
  *(undefined1 *)(param_5 + 0x14) = *(undefined1 *)(lVar1 + 5);
  *(undefined1 *)(param_5 + 0x15) = *(undefined1 *)(lVar1 + 6);
  *(undefined1 *)(param_5 + 8) = *(undefined1 *)(lVar1 + 7);
  *(undefined1 *)(param_5 + 9) = *(undefined1 *)(lVar1 + 0x35);
  *(undefined1 *)(param_5 + 10) = *(undefined1 *)(lVar1 + 0x36);
  *(undefined1 *)(param_5 + 0xb) = *(undefined1 *)(lVar1 + 0x37);
  uVar4 = func_0x0001808efd60(lVar1 + 0x1c);
  *(undefined4 *)(param_5 + 0x18) = uVar4;
  uVar3 = func_0x0001808efd50(lVar1 + 0x10);
  *(undefined2 *)(param_5 + 0x1e) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x12);
  *(undefined2 *)(param_5 + 0x20) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x14);
  *(undefined2 *)(param_5 + 0x22) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x16);
  *(undefined2 *)(param_5 + 0x24) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x18);
  *(undefined2 *)(param_5 + 0x26) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x1a);
  *(undefined2 *)(param_5 + 0x28) = uVar3;
  *(undefined1 *)(param_5 + 0x1c) = *(undefined1 *)(lVar1 + 0x20);
  *(undefined1 *)(param_5 + 0x2a) = 0;
  *(undefined1 *)(param_5 + 0x2b) = *(undefined1 *)(lVar1 + 0x21);
  *(undefined1 *)(param_5 + 0x2c) = *(undefined1 *)(lVar1 + 0x25);
  uVar3 = FUN_1808f07d0(lVar1 + 0x22,0,0xc);
  *(undefined2 *)(param_5 + 0x2e) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x23,4,0xc);
  *(undefined2 *)(param_5 + 0x30) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x26,0,0xc);
  *(undefined2 *)(param_5 + 0x32) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x27,4,0xc);
  *(undefined2 *)(param_5 + 0x34) = uVar3;
  *(undefined1 *)(param_5 + 0x37) = *(undefined1 *)(lVar1 + 0x2a);
  *(undefined1 *)(param_5 + 0x36) = *(undefined1 *)(lVar1 + 0x2b);
  *(undefined1 *)(param_5 + 0x38) = *(undefined1 *)(lVar1 + 0x30);
  return;
}






// 函数: void FUN_1808f5fd0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
void FUN_1808f5fd0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  puVar1 = (undefined1 *)(param_2 + 1 + (param_4 & 0xff) * 2);
  switch(puVar1[4] & 0xf) {
  case 0:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x10;
    break;
  case 1:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x30;
    break;
  case 2:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x20;
    break;
  case 3:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x60;
    break;
  case 4:
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x40;
    break;
  case 5:
    *(undefined4 *)(param_5 + 0xc) = 0xc0;
    break;
  case 6:
    *(undefined4 *)(param_5 + 0xc) = 0x80;
    break;
  case 7:
    *(undefined4 *)(param_5 + 0xc) = 0x90;
  }
  bVar2 = puVar1[4];
  if ((bVar2 & 0x10) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x8000;
    bVar2 = puVar1[4];
  }
  if ((bVar2 & 0x20) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x4000;
    bVar2 = puVar1[4];
  }
  if ((bVar2 & 0x40) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x2000;
    bVar2 = puVar1[4];
  }
  if ((char)bVar2 < '\0') {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x1000;
  }
  bVar2 = puVar1[5];
  if ((bVar2 & 1) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x400;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 2) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x800;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 4) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x100;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 8) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x200;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 0x10) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 1;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 0x20) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 8;
    bVar2 = puVar1[5];
  }
  if ((bVar2 & 0x40) != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 2;
    bVar2 = puVar1[5];
  }
  if ((char)bVar2 < '\0') {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 4;
  }
  bVar2 = puVar1[6];
  if (*(int *)(param_1 + 0x24) < 0x12) {
    if ((bVar2 & 1) != 0) {
      *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x100000;
      bVar2 = puVar1[6];
    }
    bVar2 = bVar2 & 2;
  }
  else {
    if ((bVar2 & 2) != 0) {
      *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x100000;
      bVar2 = puVar1[6];
    }
    bVar2 = bVar2 & 1;
  }
  if (bVar2 != 0) {
    *(uint *)(param_5 + 0xc) = *(uint *)(param_5 + 0xc) | 0x10000;
  }
  *(undefined1 *)(param_5 + 0x10) = *puVar1;
  *(undefined1 *)(param_5 + 0x11) = puVar1[1];
  *(undefined1 *)(param_5 + 0x12) = puVar1[2];
  *(undefined1 *)(param_5 + 0x13) = puVar1[3];
  *(undefined1 *)(param_5 + 0x14) = puVar1[7];
  *(undefined1 *)(param_5 + 0x15) = puVar1[8];
  *(byte *)(param_5 + 8) = (byte)puVar1[6] >> 2;
  *(byte *)(param_5 + 9) = puVar1[0x1d] & 0x7f;
  uVar3 = func_0x0001808efd50(puVar1 + 9);
  *(uint *)(param_5 + 0x18) = (uint)uVar3;
  uVar4 = func_0x0001808efd50(puVar1 + 0xc);
  *(undefined2 *)(param_5 + 0x1e) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0xe);
  *(undefined2 *)(param_5 + 0x20) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x10);
  *(undefined2 *)(param_5 + 0x22) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x12);
  *(undefined2 *)(param_5 + 0x24) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x14);
  *(undefined2 *)(param_5 + 0x26) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x16);
  *(undefined2 *)(param_5 + 0x28) = uVar4;
  *(undefined1 *)(param_5 + 0x1c) = puVar1[0xb];
  if (puVar1[0x20] == '\x02') {
    uVar5 = 0x2a;
  }
  else {
    uVar5 = 0x21;
    if (puVar1[0x20] == '\x03') {
      uVar5 = 0x33;
    }
  }
  *(undefined1 *)(param_5 + 0x2a) = 0;
  *(undefined1 *)(param_5 + 0x2b) = puVar1[(ulonglong)uVar5 + 1];
  *(undefined1 *)(param_5 + 0x2c) = puVar1[(ulonglong)uVar5 + 5];
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 2),0,0xc);
  *(undefined2 *)(param_5 + 0x2e) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 3),4,0xc);
  *(undefined2 *)(param_5 + 0x30) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 6),0,0xc);
  *(undefined2 *)(param_5 + 0x32) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 7),4,0xc);
  *(undefined2 *)(param_5 + 0x34) = uVar4;
  *(undefined2 *)(param_5 + 10) = 0;
  return;
}






// 函数: void FUN_1808f62e0(undefined2 *param_1,longlong param_2,char param_3)
void FUN_1808f62e0(undefined2 *param_1,longlong param_2,char param_3)

{
  undefined2 uVar1;
  
  uVar1 = func_0x0001808efd50(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 3);
  param_1[1] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 5);
  param_1[2] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 7);
  param_1[3] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 9);
  if (param_3 == '\0') {
    param_1[4] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xb);
    param_1[5] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xd);
    param_1[6] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xf);
    param_1[7] = uVar1;
  }
  else {
    param_1[5] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xb);
    param_1[7] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xd);
    param_1[4] = uVar1;
    uVar1 = func_0x0001808efd50(param_2 + 0xf);
    param_1[6] = uVar1;
  }
  uVar1 = func_0x0001808efd50(param_2 + 0x11);
  param_1[8] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x13);
  param_1[9] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x15);
  param_1[10] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x17);
  param_1[0xb] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x19);
  param_1[0xc] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x1b);
  param_1[0xd] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x1d);
  param_1[0xe] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x1f);
  param_1[0xf] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x21);
  param_1[0x10] = uVar1;
  uVar1 = func_0x0001808efd50(param_2 + 0x23);
  param_1[0x11] = uVar1;
  return;
}






// 函数: void FUN_1808f6490(longlong param_1,longlong param_2)
void FUN_1808f6490(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  cVar4 = func_0x0001808f0e90(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                              *(undefined4 *)(param_1 + 0x24));
  if (cVar4 != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x1bc) = uVar3;
    uVar6 = *(undefined4 *)(param_2 + 0x15);
    uVar1 = *(undefined4 *)(param_2 + 0x19);
    uVar2 = *(undefined4 *)(param_2 + 0x1d);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)(param_1 + 0x1c8) = uVar6;
    *(undefined4 *)(param_1 + 0x1cc) = uVar1;
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar5 = func_0x0001808efd50(param_2 + 0x21);
    *(undefined2 *)(param_1 + 0x1d4) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x23);
    *(undefined2 *)(param_1 + 0x1d6) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x25);
    *(undefined4 *)(param_1 + 0x1d8) = uVar6;
    uVar5 = func_0x0001808efd50(param_2 + 0x29);
    *(undefined2 *)(param_1 + 0x1dc) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x2b);
    *(undefined2 *)(param_1 + 0x1de) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x2d);
    *(undefined4 *)(param_1 + 0x1e0) = uVar6;
    *(undefined8 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined2 *)(param_1 + 0x1f0) = 0;
    *(undefined1 *)(param_1 + 0x1f2) = 0;
    return;
  }
  cVar4 = func_0x0001808f0e30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 1);
    *(undefined2 *)(param_1 + 0x1bc) = *(undefined2 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0x1be) = *(undefined1 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x1bf) = *(undefined8 *)(param_2 + 0xc);
    uVar5 = func_0x0001808efd50(param_2 + 0x14);
    *(undefined2 *)(param_1 + 0x1c8) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x16);
    *(undefined2 *)(param_1 + 0x1ca) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1cc) = uVar6;
    uVar6 = func_0x0001808efd60(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1d0) = uVar6;
    *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x28);
    uVar5 = func_0x0001808efd50(param_2 + 0x2c);
    *(undefined2 *)(param_1 + 0x1e0) = uVar5;
    *(undefined1 *)(param_1 + 0x1e2) = *(undefined1 *)(param_2 + 0x2e);
    *(undefined1 *)(param_1 + 0x1e3) = *(undefined1 *)(param_2 + 0x2f);
    *(undefined8 *)(param_1 + 0x1e4) = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x3c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808f6660(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  
  iVar1 = FUN_1808f6c60();
  if (iVar1 != 0) {
    return 0;
  }
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 8), 7 < iVar1 - 1U)) {
    func_0x0001808f6c90();
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined1 *)(param_1 + 0x29);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    uVar6 = *(undefined1 *)(param_1 + 0x1b2);
    uVar19 = *(undefined8 *)(param_1 + 0x90);
    uVar20 = *(undefined8 *)(param_1 + 0x98);
    uVar21 = *(undefined8 *)(param_1 + 0xa0);
    uVar22 = *(undefined8 *)(param_1 + 0xa8);
    uVar23 = *(undefined8 *)(param_1 + 0xb1);
    uVar24 = *(undefined8 *)(param_1 + 0xb9);
    uVar25 = *(undefined8 *)(param_1 + 0xc1);
    uVar26 = *(undefined8 *)(param_1 + 0xc9);
    uVar27 = *(undefined8 *)(param_1 + 0xd1);
    uVar28 = *(undefined8 *)(param_1 + 0xd9);
    uVar29 = *(undefined8 *)(param_1 + 0xe1);
    uVar30 = *(undefined8 *)(param_1 + 0xe9);
    uVar31 = *(undefined8 *)(param_1 + 0xf1);
    uVar32 = *(undefined8 *)(param_1 + 0xf9);
    uVar33 = *(undefined8 *)(param_1 + 0x101);
    uVar34 = *(undefined8 *)(param_1 + 0x109);
    uVar35 = *(undefined8 *)(param_1 + 0x111);
    uVar36 = *(undefined8 *)(param_1 + 0x119);
    uVar37 = *(undefined8 *)(param_1 + 0x121);
    uVar38 = *(undefined8 *)(param_1 + 0x129);
    uVar39 = *(undefined8 *)(param_1 + 0x132);
    uVar40 = *(undefined8 *)(param_1 + 0x13a);
    uVar41 = *(undefined8 *)(param_1 + 0x142);
    uVar42 = *(undefined8 *)(param_1 + 0x14a);
    uVar43 = *(undefined8 *)(param_1 + 0x152);
    uVar44 = *(undefined8 *)(param_1 + 0x15a);
    uVar45 = *(undefined8 *)(param_1 + 0x162);
    uVar46 = *(undefined8 *)(param_1 + 0x16a);
    uVar47 = *(undefined8 *)(param_1 + 0x172);
    uVar48 = *(undefined8 *)(param_1 + 0x17a);
    uVar49 = *(undefined8 *)(param_1 + 0x182);
    uVar50 = *(undefined8 *)(param_1 + 0x18a);
    uVar51 = *(undefined8 *)(param_1 + 0x192);
    uVar52 = *(undefined8 *)(param_1 + 0x19a);
    uVar53 = *(undefined4 *)(param_1 + 0x1a2);
    uVar54 = *(undefined4 *)(param_1 + 0x1aa);
    FUN_1808f1d10(param_1);
    plVar4 = (longlong *)((longlong)iVar1 * 0x21f8 + 0x180c56668);
    if (*plVar4 == 0) {
      lVar3 = -1;
      do {
        lVar2 = lVar3;
        lVar3 = lVar2 + 1;
      } while (*(short *)(param_2 + lVar3 * 2) != 0);
      lVar3 = (lVar2 + 2) * 2;
      if (_DAT_180c69e18 == (code *)0x0) {
        lVar2 = malloc(lVar3);
      }
      else {
        lVar2 = (*_DAT_180c69e18)();
      }
      *plVar4 = lVar2;
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,lVar3,param_4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
               uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,
               uVar26,uVar27,uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,
               uVar38,uVar39,uVar40,uVar41,uVar42,uVar43,uVar44,uVar45,uVar46,uVar47,uVar48,uVar49,
               uVar50,uVar51,uVar52,uVar53,uVar54);
      }
    }
    func_0x0001808f6c90();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808f6722(undefined4 param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong lVar2;
  longlong unaff_RSI;
  longlong *plVar3;
  longlong unaff_R14;
  undefined1 uStack0000000000000028;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined4 uStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  uStack0000000000000080 = *(undefined8 *)(unaff_RBX + 0x80);
  uStack0000000000000088 = *(undefined8 *)(unaff_RBX + 0x88);
  uStack0000000000000028 = *(undefined1 *)(unaff_RBX + 0x1b2);
  uStack0000000000000090 = *(undefined8 *)(unaff_RBX + 0x90);
  uStack0000000000000098 = *(undefined8 *)(unaff_RBX + 0x98);
  uStack00000000000000a0 = *(undefined8 *)(unaff_RBX + 0xa0);
  uStack00000000000000a8 = *(undefined8 *)(unaff_RBX + 0xa8);
  uStack00000000000000b0 = *(undefined8 *)(unaff_RBX + 0xb1);
  uStack00000000000000b8 = *(undefined8 *)(unaff_RBX + 0xb9);
  uStack00000000000000c0 = *(undefined8 *)(unaff_RBX + 0xc1);
  uStack00000000000000c8 = *(undefined8 *)(unaff_RBX + 0xc9);
  uStack00000000000000d0 = *(undefined8 *)(unaff_RBX + 0xd1);
  uStack00000000000000d8 = *(undefined8 *)(unaff_RBX + 0xd9);
  uStack00000000000000e0 = *(undefined8 *)(unaff_RBX + 0xe1);
  uStack00000000000000e8 = *(undefined8 *)(unaff_RBX + 0xe9);
  uStack00000000000000f0 = *(undefined8 *)(unaff_RBX + 0xf1);
  uStack00000000000000f8 = *(undefined8 *)(unaff_RBX + 0xf9);
  uStack0000000000000100 = *(undefined8 *)(unaff_RBX + 0x101);
  uStack0000000000000108 = *(undefined8 *)(unaff_RBX + 0x109);
  uStack0000000000000110 = *(undefined8 *)(unaff_RBX + 0x111);
  uStack0000000000000118 = *(undefined8 *)(unaff_RBX + 0x119);
  uStack0000000000000120 = *(undefined8 *)(unaff_RBX + 0x121);
  uStack0000000000000128 = *(undefined8 *)(unaff_RBX + 0x129);
  uStack0000000000000130 = *(undefined8 *)(unaff_RBX + 0x132);
  uStack0000000000000138 = *(undefined8 *)(unaff_RBX + 0x13a);
  uStack0000000000000140 = *(undefined8 *)(unaff_RBX + 0x142);
  uStack0000000000000148 = *(undefined8 *)(unaff_RBX + 0x14a);
  uStack0000000000000150 = *(undefined8 *)(unaff_RBX + 0x152);
  uStack0000000000000158 = *(undefined8 *)(unaff_RBX + 0x15a);
  uStack0000000000000160 = *(undefined8 *)(unaff_RBX + 0x162);
  uStack0000000000000168 = *(undefined8 *)(unaff_RBX + 0x16a);
  uStack0000000000000170 = *(undefined8 *)(unaff_RBX + 0x172);
  uStack0000000000000178 = *(undefined8 *)(unaff_RBX + 0x17a);
  uStack0000000000000180 = *(undefined8 *)(unaff_RBX + 0x182);
  uStack0000000000000188 = *(undefined8 *)(unaff_RBX + 0x18a);
  uStack0000000000000190 = *(undefined8 *)(unaff_RBX + 0x192);
  uStack0000000000000198 = *(undefined8 *)(unaff_RBX + 0x19a);
  uStack00000000000001a0 = *(undefined4 *)(unaff_RBX + 0x1a2);
  uStack00000000000001a4 = *(undefined4 *)(unaff_RBX + 0x1a6);
  uStack00000000000001a8 = *(undefined4 *)(unaff_RBX + 0x1aa);
  uStack00000000000001ac = *(undefined4 *)(unaff_RBX + 0x1ae);
  uStack0000000000000070 = param_1;
  FUN_1808f1d10();
  plVar3 = (longlong *)(unaff_R14 * 0x21f8 + 0x180c56668);
  if (*plVar3 == 0) {
    lVar2 = -1;
    do {
      lVar1 = lVar2;
      lVar2 = lVar1 + 1;
    } while (*(short *)(unaff_RSI + lVar2 * 2) != 0);
    lVar2 = (lVar1 + 2) * 2;
    if (_DAT_180c69e18 == (code *)0x0) {
      lVar1 = malloc(lVar2);
    }
    else {
      lVar1 = (*_DAT_180c69e18)();
    }
    *plVar3 = lVar1;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,lVar2);
    }
  }
  func_0x0001808f6c90();
  return 0;
}



undefined8 FUN_1808f6af3(void)

{
  func_0x0001808f6c90();
  return 0;
}



undefined8 FUN_1808f6b10(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  bVar1 = 0;
  do {
    if (*(char *)((ulonglong)bVar1 + 0x29 + param_1) != '\0') break;
    bVar1 = bVar1 + 1;
  } while (bVar1 < 6);
  if (bVar1 != 6) {
    lVar7 = 0x180c69861;
    do {
      if (*(longlong *)(lVar7 + 7) != 0) {
        bVar1 = 0;
        do {
          if (*(char *)(lVar7 + (ulonglong)bVar1) != *(char *)((ulonglong)bVar1 + 0x29 + param_1))
          break;
          bVar1 = bVar1 + 1;
        } while (bVar1 < 6);
      }
      if (bVar1 == 6) {
        uVar3 = *(undefined8 *)(lVar7 + 7);
        lVar7 = CreateFileW(uVar3,0xc0000000,3,0,3,0,0);
        if (lVar7 != -1) {
          lVar4 = FUN_1808f6660(param_1,uVar3,lVar7);
          if (lVar4 == 0) {
            return 0;
          }
          if (DAT_180c58853 != '\0') {
            lVar5 = _beginthread(FUN_1808f3c80,0,lVar4);
            *(longlong *)(lVar4 + 0x18) = lVar5;
            if (lVar5 != -1) {
              iVar2 = 0;
              plVar6 = (longlong *)0x180c69820;
              do {
                if (*plVar6 == 0) {
                  *(longlong *)((longlong)iVar2 * 8 + 0x180c69820) = lVar5;
                  return 0;
                }
                iVar2 = iVar2 + 1;
                plVar6 = plVar6 + 1;
              } while (iVar2 < 8);
              return 0x80010037;
            }
          }
                    // WARNING: Could not recover jumptable at 0x0001808f6c4e. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar3 = CloseHandle(lVar7);
          return uVar3;
        }
        break;
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 < 0x180c698a1);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_1808f0550(*(undefined4 *)(param_1 + 8));
  }
  uVar3 = FUN_1808f6c60();
  if ((int)uVar3 == 0) {
    FUN_1808f1d10(param_1);
    uVar3 = func_0x0001808f6c90();
  }
  return uVar3;
}



undefined8 FUN_1808f6c60(void)

{
  if (DAT_180c69e20 != '\0') {
    EnterCriticalSection(0x180c69e50);
    return 0;
  }
  return 0x80010002;
}



undefined8 FUN_1808f6cb0(void)

{
  if (DAT_180c69e20 != '\0') {
    EnterCriticalSection(0x180c69e28);
    return 0;
  }
  return 0x80010002;
}






// 函数: void FUN_1808f6d00(void)
void FUN_1808f6d00(void)

{
  if (DAT_180c69e20 == '\0') {
    InitializeCriticalSection(0x180c69e28);
    InitializeCriticalSection(0x180c69e50);
  }



// 函数: void FUN_1808f6fa0(float *param_1,float *param_2,float param_3)
void FUN_1808f6fa0(float *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
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
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [160];
  
  fVar5 = param_2[1];
  fVar4 = *param_2;
  fVar8 = param_2[2];
  fVar2 = (float)sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8);
  if (ABS(fVar2 - 1.0) < 0.08) {
    fVar2 = *param_1;
    fVar10 = param_1[3];
    fVar11 = param_1[1];
    fVar13 = param_1[2];
    fVar9 = (fVar11 * fVar8 + fVar10 * fVar4) - fVar13 * fVar5;
    fVar7 = (fVar13 * fVar4 + fVar10 * fVar5) - fVar2 * fVar8;
    fVar6 = (fVar10 * fVar8 + fVar2 * fVar5) - fVar11 * fVar4;
    fVar5 = fVar11 * fVar5 + fVar2 * fVar4 + fVar13 * fVar8;
    fVar12 = ((fVar2 * fVar5 + fVar10 * fVar9) - fVar13 * fVar7) + fVar11 * fVar6;
    fVar8 = ((fVar10 * fVar7 + fVar11 * fVar5) - fVar2 * fVar6) + fVar13 * fVar9;
    fVar10 = ((fVar13 * fVar5 + fVar10 * fVar6) - fVar11 * fVar9) + fVar2 * fVar7;
    fVar5 = (float)sqrtf(fVar12 * fVar12 + fVar8 * fVar8 + fVar10 * fVar10);
    fVar5 = 1.0 / fVar5;
    fVar2 = fVar12 * fVar5 * 0.0;
    fVar4 = fVar5 * fVar8 * 0.0;
    fVar13 = fVar12 * fVar5 - fVar4;
    fVar4 = fVar4 - fVar5 * fVar10;
    fVar11 = fVar5 * fVar10 * 0.0;
    fVar10 = fVar11 - fVar2;
    uVar3 = sqrtf(fVar4 * fVar4 + fVar10 * fVar10 + fVar13 * fVar13);
    if (0.01 < (float)uVar3) {
      fVar8 = (float)atan2f(uVar3,fVar2 + fVar5 * fVar8 + fVar11);
      fVar5 = 2.0;
      if (param_3 / 0.008 <= 2.0) {
        fVar5 = param_3 / 0.008;
      }
      fVar5 = fVar8 * fVar5 * 0.04 * 0.5;
      fStack_b4 = (float)sinf(fVar5);
      fStack_b4 = fStack_b4 / (float)uVar3;
      fStack_b8 = fVar4 * fStack_b4;
      fStack_b0 = fStack_b4 * fVar13;
      fStack_b4 = fStack_b4 * fVar10;
      uStack_ac = cosf(fVar5);
      pfVar1 = (float *)FUN_1808f6e00(&fStack_b8,auStack_a8,param_1);
      *param_1 = *pfVar1;
      param_1[1] = pfVar1[1];
      param_1[2] = pfVar1[2];
      param_1[3] = pfVar1[3];
    }
  }
  return;
}






