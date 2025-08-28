#include "TaleWorlds.Native.Split.h"

// 99_part_14_part014.c - 6 个函数

// 函数: void FUN_1808f5d30(uint64_t param_1,longlong param_2,uint64_t param_3,ulonglong param_4,
void FUN_1808f5d30(uint64_t param_1,longlong param_2,uint64_t param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  int16_t uVar3;
  int32_t uVar4;
  
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
    *(int32_t *)(param_5 + 0xc) = 0xc0;
    break;
  case 6:
    *(int32_t *)(param_5 + 0xc) = 0x80;
    break;
  case 7:
    *(int32_t *)(param_5 + 0xc) = 0x90;
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
  *(int8_t *)(param_5 + 0x10) = *(int8_t *)(lVar1 + 1);
  *(int8_t *)(param_5 + 0x11) = *(int8_t *)(lVar1 + 2);
  *(int8_t *)(param_5 + 0x12) = *(int8_t *)(lVar1 + 3);
  *(int8_t *)(param_5 + 0x13) = *(int8_t *)(lVar1 + 4);
  *(int8_t *)(param_5 + 0x14) = *(int8_t *)(lVar1 + 5);
  *(int8_t *)(param_5 + 0x15) = *(int8_t *)(lVar1 + 6);
  *(int8_t *)(param_5 + 8) = *(int8_t *)(lVar1 + 7);
  *(int8_t *)(param_5 + 9) = *(int8_t *)(lVar1 + 0x35);
  *(int8_t *)(param_5 + 10) = *(int8_t *)(lVar1 + 0x36);
  *(int8_t *)(param_5 + 0xb) = *(int8_t *)(lVar1 + 0x37);
  uVar4 = func_0x0001808efd60(lVar1 + 0x1c);
  *(int32_t *)(param_5 + 0x18) = uVar4;
  uVar3 = func_0x0001808efd50(lVar1 + 0x10);
  *(int16_t *)(param_5 + 0x1e) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x12);
  *(int16_t *)(param_5 + 0x20) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x14);
  *(int16_t *)(param_5 + 0x22) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x16);
  *(int16_t *)(param_5 + 0x24) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x18);
  *(int16_t *)(param_5 + 0x26) = uVar3;
  uVar3 = func_0x0001808efd50(lVar1 + 0x1a);
  *(int16_t *)(param_5 + 0x28) = uVar3;
  *(int8_t *)(param_5 + 0x1c) = *(int8_t *)(lVar1 + 0x20);
  *(int8_t *)(param_5 + 0x2a) = 0;
  *(int8_t *)(param_5 + 0x2b) = *(int8_t *)(lVar1 + 0x21);
  *(int8_t *)(param_5 + 0x2c) = *(int8_t *)(lVar1 + 0x25);
  uVar3 = FUN_1808f07d0(lVar1 + 0x22,0,0xc);
  *(int16_t *)(param_5 + 0x2e) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x23,4,0xc);
  *(int16_t *)(param_5 + 0x30) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x26,0,0xc);
  *(int16_t *)(param_5 + 0x32) = uVar3;
  uVar3 = FUN_1808f07d0(lVar1 + 0x27,4,0xc);
  *(int16_t *)(param_5 + 0x34) = uVar3;
  *(int8_t *)(param_5 + 0x37) = *(int8_t *)(lVar1 + 0x2a);
  *(int8_t *)(param_5 + 0x36) = *(int8_t *)(lVar1 + 0x2b);
  *(int8_t *)(param_5 + 0x38) = *(int8_t *)(lVar1 + 0x30);
  return;
}






// 函数: void FUN_1808f5fd0(longlong param_1,longlong param_2,uint64_t param_3,ulonglong param_4,
void FUN_1808f5fd0(longlong param_1,longlong param_2,uint64_t param_3,ulonglong param_4,
                  longlong param_5)

{
  int8_t *puVar1;
  byte bVar2;
  ushort uVar3;
  int16_t uVar4;
  uint uVar5;
  
  puVar1 = (int8_t *)(param_2 + 1 + (param_4 & 0xff) * 2);
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
    *(int32_t *)(param_5 + 0xc) = 0xc0;
    break;
  case 6:
    *(int32_t *)(param_5 + 0xc) = 0x80;
    break;
  case 7:
    *(int32_t *)(param_5 + 0xc) = 0x90;
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
  *(int8_t *)(param_5 + 0x10) = *puVar1;
  *(int8_t *)(param_5 + 0x11) = puVar1[1];
  *(int8_t *)(param_5 + 0x12) = puVar1[2];
  *(int8_t *)(param_5 + 0x13) = puVar1[3];
  *(int8_t *)(param_5 + 0x14) = puVar1[7];
  *(int8_t *)(param_5 + 0x15) = puVar1[8];
  *(byte *)(param_5 + 8) = (byte)puVar1[6] >> 2;
  *(byte *)(param_5 + 9) = puVar1[0x1d] & 0x7f;
  uVar3 = func_0x0001808efd50(puVar1 + 9);
  *(uint *)(param_5 + 0x18) = (uint)uVar3;
  uVar4 = func_0x0001808efd50(puVar1 + 0xc);
  *(int16_t *)(param_5 + 0x1e) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0xe);
  *(int16_t *)(param_5 + 0x20) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x10);
  *(int16_t *)(param_5 + 0x22) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x12);
  *(int16_t *)(param_5 + 0x24) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x14);
  *(int16_t *)(param_5 + 0x26) = uVar4;
  uVar4 = func_0x0001808efd50(puVar1 + 0x16);
  *(int16_t *)(param_5 + 0x28) = uVar4;
  *(int8_t *)(param_5 + 0x1c) = puVar1[0xb];
  if (puVar1[0x20] == '\x02') {
    uVar5 = 0x2a;
  }
  else {
    uVar5 = 0x21;
    if (puVar1[0x20] == '\x03') {
      uVar5 = 0x33;
    }
  }
  *(int8_t *)(param_5 + 0x2a) = 0;
  *(int8_t *)(param_5 + 0x2b) = puVar1[(ulonglong)uVar5 + 1];
  *(int8_t *)(param_5 + 0x2c) = puVar1[(ulonglong)uVar5 + 5];
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 2),0,0xc);
  *(int16_t *)(param_5 + 0x2e) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 3),4,0xc);
  *(int16_t *)(param_5 + 0x30) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 6),0,0xc);
  *(int16_t *)(param_5 + 0x32) = uVar4;
  uVar4 = FUN_1808f07d0(puVar1 + (uVar5 + 7),4,0xc);
  *(int16_t *)(param_5 + 0x34) = uVar4;
  *(int16_t *)(param_5 + 10) = 0;
  return;
}






// 函数: void FUN_1808f62e0(int16_t *param_1,longlong param_2,char param_3)
void FUN_1808f62e0(int16_t *param_1,longlong param_2,char param_3)

{
  int16_t uVar1;
  
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
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  char cVar4;
  int16_t uVar5;
  int32_t uVar6;
  
  cVar4 = func_0x0001808f0e90(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22),
                              *(int32_t *)(param_1 + 0x24));
  if (cVar4 != '\0') {
    uVar3 = *(uint64_t *)(param_2 + 9);
    *(uint64_t *)(param_1 + 0x1b4) = *(uint64_t *)(param_2 + 1);
    *(uint64_t *)(param_1 + 0x1bc) = uVar3;
    uVar6 = *(int32_t *)(param_2 + 0x15);
    uVar1 = *(int32_t *)(param_2 + 0x19);
    uVar2 = *(int32_t *)(param_2 + 0x1d);
    *(int32_t *)(param_1 + 0x1c4) = *(int32_t *)(param_2 + 0x11);
    *(int32_t *)(param_1 + 0x1c8) = uVar6;
    *(int32_t *)(param_1 + 0x1cc) = uVar1;
    *(int32_t *)(param_1 + 0x1d0) = uVar2;
    uVar5 = func_0x0001808efd50(param_2 + 0x21);
    *(int16_t *)(param_1 + 0x1d4) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x23);
    *(int16_t *)(param_1 + 0x1d6) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x25);
    *(int32_t *)(param_1 + 0x1d8) = uVar6;
    uVar5 = func_0x0001808efd50(param_2 + 0x29);
    *(int16_t *)(param_1 + 0x1dc) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x2b);
    *(int16_t *)(param_1 + 0x1de) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x2d);
    *(int32_t *)(param_1 + 0x1e0) = uVar6;
    *(uint64_t *)(param_1 + 0x1e4) = 0;
    *(int32_t *)(param_1 + 0x1ec) = 0;
    *(int16_t *)(param_1 + 0x1f0) = 0;
    *(int8_t *)(param_1 + 0x1f2) = 0;
    return;
  }
  cVar4 = func_0x0001808f0e30(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
  if (cVar4 != '\0') {
    *(uint64_t *)(param_1 + 0x1b4) = *(uint64_t *)(param_2 + 1);
    *(int16_t *)(param_1 + 0x1bc) = *(int16_t *)(param_2 + 9);
    *(int8_t *)(param_1 + 0x1be) = *(int8_t *)(param_2 + 0xb);
    *(uint64_t *)(param_1 + 0x1bf) = *(uint64_t *)(param_2 + 0xc);
    uVar5 = func_0x0001808efd50(param_2 + 0x14);
    *(int16_t *)(param_1 + 0x1c8) = uVar5;
    uVar5 = func_0x0001808efd50(param_2 + 0x16);
    *(int16_t *)(param_1 + 0x1ca) = uVar5;
    uVar6 = func_0x0001808efd60(param_2 + 0x18);
    *(int32_t *)(param_1 + 0x1cc) = uVar6;
    uVar6 = func_0x0001808efd60(param_2 + 0x1c);
    *(int32_t *)(param_1 + 0x1d0) = uVar6;
    *(uint64_t *)(param_1 + 0x1d4) = *(uint64_t *)(param_2 + 0x20);
    *(int32_t *)(param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x28);
    uVar5 = func_0x0001808efd50(param_2 + 0x2c);
    *(int16_t *)(param_1 + 0x1e0) = uVar5;
    *(int8_t *)(param_1 + 0x1e2) = *(int8_t *)(param_2 + 0x2e);
    *(int8_t *)(param_1 + 0x1e3) = *(int8_t *)(param_2 + 0x2f);
    *(uint64_t *)(param_1 + 0x1e4) = *(uint64_t *)(param_2 + 0x30);
    *(int32_t *)(param_1 + 0x1ec) = *(int32_t *)(param_2 + 0x38);
    *(int32_t *)(param_1 + 0x1f0) = *(int32_t *)(param_2 + 0x3c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f6660(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int8_t uVar5;
  int8_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  int32_t uVar53;
  int32_t uVar54;
  
  iVar1 = FUN_1808f6c60();
  if (iVar1 != 0) {
    return 0;
  }
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 8), 7 < iVar1 - 1U)) {
    func_0x0001808f6c90();
  }
  else {
    uVar7 = *(uint64_t *)(param_1 + 0x30);
    uVar8 = *(uint64_t *)(param_1 + 0x38);
    uVar5 = *(int8_t *)(param_1 + 0x29);
    uVar9 = *(uint64_t *)(param_1 + 0x40);
    uVar10 = *(uint64_t *)(param_1 + 0x48);
    uVar11 = *(uint64_t *)(param_1 + 0x50);
    uVar12 = *(uint64_t *)(param_1 + 0x58);
    uVar13 = *(uint64_t *)(param_1 + 0x60);
    uVar14 = *(uint64_t *)(param_1 + 0x68);
    uVar15 = *(uint64_t *)(param_1 + 0x70);
    uVar16 = *(uint64_t *)(param_1 + 0x78);
    uVar17 = *(uint64_t *)(param_1 + 0x80);
    uVar18 = *(uint64_t *)(param_1 + 0x88);
    uVar6 = *(int8_t *)(param_1 + 0x1b2);
    uVar19 = *(uint64_t *)(param_1 + 0x90);
    uVar20 = *(uint64_t *)(param_1 + 0x98);
    uVar21 = *(uint64_t *)(param_1 + 0xa0);
    uVar22 = *(uint64_t *)(param_1 + 0xa8);
    uVar23 = *(uint64_t *)(param_1 + 0xb1);
    uVar24 = *(uint64_t *)(param_1 + 0xb9);
    uVar25 = *(uint64_t *)(param_1 + 0xc1);
    uVar26 = *(uint64_t *)(param_1 + 0xc9);
    uVar27 = *(uint64_t *)(param_1 + 0xd1);
    uVar28 = *(uint64_t *)(param_1 + 0xd9);
    uVar29 = *(uint64_t *)(param_1 + 0xe1);
    uVar30 = *(uint64_t *)(param_1 + 0xe9);
    uVar31 = *(uint64_t *)(param_1 + 0xf1);
    uVar32 = *(uint64_t *)(param_1 + 0xf9);
    uVar33 = *(uint64_t *)(param_1 + 0x101);
    uVar34 = *(uint64_t *)(param_1 + 0x109);
    uVar35 = *(uint64_t *)(param_1 + 0x111);
    uVar36 = *(uint64_t *)(param_1 + 0x119);
    uVar37 = *(uint64_t *)(param_1 + 0x121);
    uVar38 = *(uint64_t *)(param_1 + 0x129);
    uVar39 = *(uint64_t *)(param_1 + 0x132);
    uVar40 = *(uint64_t *)(param_1 + 0x13a);
    uVar41 = *(uint64_t *)(param_1 + 0x142);
    uVar42 = *(uint64_t *)(param_1 + 0x14a);
    uVar43 = *(uint64_t *)(param_1 + 0x152);
    uVar44 = *(uint64_t *)(param_1 + 0x15a);
    uVar45 = *(uint64_t *)(param_1 + 0x162);
    uVar46 = *(uint64_t *)(param_1 + 0x16a);
    uVar47 = *(uint64_t *)(param_1 + 0x172);
    uVar48 = *(uint64_t *)(param_1 + 0x17a);
    uVar49 = *(uint64_t *)(param_1 + 0x182);
    uVar50 = *(uint64_t *)(param_1 + 0x18a);
    uVar51 = *(uint64_t *)(param_1 + 0x192);
    uVar52 = *(uint64_t *)(param_1 + 0x19a);
    uVar53 = *(int32_t *)(param_1 + 0x1a2);
    uVar54 = *(int32_t *)(param_1 + 0x1aa);
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

uint64_t FUN_1808f6722(int32_t param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong lVar2;
  longlong unaff_RSI;
  longlong *plVar3;
  longlong unaff_R14;
  int8_t uStack0000000000000028;
  int32_t uStack0000000000000070;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  uint64_t uStack00000000000000a0;
  uint64_t uStack00000000000000a8;
  uint64_t uStack00000000000000b0;
  uint64_t uStack00000000000000b8;
  uint64_t uStack00000000000000c0;
  uint64_t uStack00000000000000c8;
  uint64_t uStack00000000000000d0;
  uint64_t uStack00000000000000d8;
  uint64_t uStack00000000000000e0;
  uint64_t uStack00000000000000e8;
  uint64_t uStack00000000000000f0;
  uint64_t uStack00000000000000f8;
  uint64_t uStack0000000000000100;
  uint64_t uStack0000000000000108;
  uint64_t uStack0000000000000110;
  uint64_t uStack0000000000000118;
  uint64_t uStack0000000000000120;
  uint64_t uStack0000000000000128;
  uint64_t uStack0000000000000130;
  uint64_t uStack0000000000000138;
  uint64_t uStack0000000000000140;
  uint64_t uStack0000000000000148;
  uint64_t uStack0000000000000150;
  uint64_t uStack0000000000000158;
  uint64_t uStack0000000000000160;
  uint64_t uStack0000000000000168;
  uint64_t uStack0000000000000170;
  uint64_t uStack0000000000000178;
  uint64_t uStack0000000000000180;
  uint64_t uStack0000000000000188;
  uint64_t uStack0000000000000190;
  uint64_t uStack0000000000000198;
  int32_t uStack00000000000001a0;
  int32_t uStack00000000000001a4;
  int32_t uStack00000000000001a8;
  int32_t uStack00000000000001ac;
  
  uStack0000000000000080 = *(uint64_t *)(unaff_RBX + 0x80);
  uStack0000000000000088 = *(uint64_t *)(unaff_RBX + 0x88);
  uStack0000000000000028 = *(int8_t *)(unaff_RBX + 0x1b2);
  uStack0000000000000090 = *(uint64_t *)(unaff_RBX + 0x90);
  uStack0000000000000098 = *(uint64_t *)(unaff_RBX + 0x98);
  uStack00000000000000a0 = *(uint64_t *)(unaff_RBX + 0xa0);
  uStack00000000000000a8 = *(uint64_t *)(unaff_RBX + 0xa8);
  uStack00000000000000b0 = *(uint64_t *)(unaff_RBX + 0xb1);
  uStack00000000000000b8 = *(uint64_t *)(unaff_RBX + 0xb9);
  uStack00000000000000c0 = *(uint64_t *)(unaff_RBX + 0xc1);
  uStack00000000000000c8 = *(uint64_t *)(unaff_RBX + 0xc9);
  uStack00000000000000d0 = *(uint64_t *)(unaff_RBX + 0xd1);
  uStack00000000000000d8 = *(uint64_t *)(unaff_RBX + 0xd9);
  uStack00000000000000e0 = *(uint64_t *)(unaff_RBX + 0xe1);
  uStack00000000000000e8 = *(uint64_t *)(unaff_RBX + 0xe9);
  uStack00000000000000f0 = *(uint64_t *)(unaff_RBX + 0xf1);
  uStack00000000000000f8 = *(uint64_t *)(unaff_RBX + 0xf9);
  uStack0000000000000100 = *(uint64_t *)(unaff_RBX + 0x101);
  uStack0000000000000108 = *(uint64_t *)(unaff_RBX + 0x109);
  uStack0000000000000110 = *(uint64_t *)(unaff_RBX + 0x111);
  uStack0000000000000118 = *(uint64_t *)(unaff_RBX + 0x119);
  uStack0000000000000120 = *(uint64_t *)(unaff_RBX + 0x121);
  uStack0000000000000128 = *(uint64_t *)(unaff_RBX + 0x129);
  uStack0000000000000130 = *(uint64_t *)(unaff_RBX + 0x132);
  uStack0000000000000138 = *(uint64_t *)(unaff_RBX + 0x13a);
  uStack0000000000000140 = *(uint64_t *)(unaff_RBX + 0x142);
  uStack0000000000000148 = *(uint64_t *)(unaff_RBX + 0x14a);
  uStack0000000000000150 = *(uint64_t *)(unaff_RBX + 0x152);
  uStack0000000000000158 = *(uint64_t *)(unaff_RBX + 0x15a);
  uStack0000000000000160 = *(uint64_t *)(unaff_RBX + 0x162);
  uStack0000000000000168 = *(uint64_t *)(unaff_RBX + 0x16a);
  uStack0000000000000170 = *(uint64_t *)(unaff_RBX + 0x172);
  uStack0000000000000178 = *(uint64_t *)(unaff_RBX + 0x17a);
  uStack0000000000000180 = *(uint64_t *)(unaff_RBX + 0x182);
  uStack0000000000000188 = *(uint64_t *)(unaff_RBX + 0x18a);
  uStack0000000000000190 = *(uint64_t *)(unaff_RBX + 0x192);
  uStack0000000000000198 = *(uint64_t *)(unaff_RBX + 0x19a);
  uStack00000000000001a0 = *(int32_t *)(unaff_RBX + 0x1a2);
  uStack00000000000001a4 = *(int32_t *)(unaff_RBX + 0x1a6);
  uStack00000000000001a8 = *(int32_t *)(unaff_RBX + 0x1aa);
  uStack00000000000001ac = *(int32_t *)(unaff_RBX + 0x1ae);
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



uint64_t FUN_1808f6af3(void)

{
  func_0x0001808f6c90();
  return 0;
}



uint64_t FUN_1808f6b10(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
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
        uVar3 = *(uint64_t *)(lVar7 + 7);
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
    FUN_1808f0550(*(int32_t *)(param_1 + 8));
  }
  uVar3 = FUN_1808f6c60();
  if ((int)uVar3 == 0) {
    FUN_1808f1d10(param_1);
    uVar3 = func_0x0001808f6c90();
  }
  return uVar3;
}



uint64_t FUN_1808f6c60(void)

{
  if (DAT_180c69e20 != '\0') {
    EnterCriticalSection(0x180c69e50);
    return 0;
  }
  return 0x80010002;
}



uint64_t FUN_1808f6cb0(void)

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
  uint64_t uVar3;
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
  int32_t uStack_ac;
  int8_t auStack_a8 [160];
  
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






