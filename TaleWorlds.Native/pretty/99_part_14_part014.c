#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part014.c - 6 个函数
// 函数: void NetworkProtocol_f5d30(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_f5d30(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)
{
  int64_t lVar1;
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
  uVar4 = Function_7d757e32(lVar1 + 0x1c);
  *(int32_t *)(param_5 + 0x18) = uVar4;
  uVar3 = Function_ff1daff3(lVar1 + 0x10);
  *(int16_t *)(param_5 + 0x1e) = uVar3;
  uVar3 = Function_ff1daff3(lVar1 + 0x12);
  *(int16_t *)(param_5 + 0x20) = uVar3;
  uVar3 = Function_ff1daff3(lVar1 + 0x14);
  *(int16_t *)(param_5 + 0x22) = uVar3;
  uVar3 = Function_ff1daff3(lVar1 + 0x16);
  *(int16_t *)(param_5 + 0x24) = uVar3;
  uVar3 = Function_ff1daff3(lVar1 + 0x18);
  *(int16_t *)(param_5 + 0x26) = uVar3;
  uVar3 = Function_ff1daff3(lVar1 + 0x1a);
  *(int16_t *)(param_5 + 0x28) = uVar3;
  *(int8_t *)(param_5 + 0x1c) = *(int8_t *)(lVar1 + 0x20);
  *(int8_t *)(param_5 + 0x2a) = 0;
  *(int8_t *)(param_5 + 0x2b) = *(int8_t *)(lVar1 + 0x21);
  *(int8_t *)(param_5 + 0x2c) = *(int8_t *)(lVar1 + 0x25);
  uVar3 = NetworkProtocol_f07d0(lVar1 + 0x22,0,0xc);
  *(int16_t *)(param_5 + 0x2e) = uVar3;
  uVar3 = NetworkProtocol_f07d0(lVar1 + 0x23,4,0xc);
  *(int16_t *)(param_5 + 0x30) = uVar3;
  uVar3 = NetworkProtocol_f07d0(lVar1 + 0x26,0,0xc);
  *(int16_t *)(param_5 + 0x32) = uVar3;
  uVar3 = NetworkProtocol_f07d0(lVar1 + 0x27,4,0xc);
  *(int16_t *)(param_5 + 0x34) = uVar3;
  *(int8_t *)(param_5 + 0x37) = *(int8_t *)(lVar1 + 0x2a);
  *(int8_t *)(param_5 + 0x36) = *(int8_t *)(lVar1 + 0x2b);
  *(int8_t *)(param_5 + 0x38) = *(int8_t *)(lVar1 + 0x30);
  return;
}
// 函数: void NetworkProtocol_f5fd0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_f5fd0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)
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
  uVar3 = Function_ff1daff3(puVar1 + 9);
  *(uint *)(param_5 + 0x18) = (uint)uVar3;
  uVar4 = Function_ff1daff3(puVar1 + 0xc);
  *(int16_t *)(param_5 + 0x1e) = uVar4;
  uVar4 = Function_ff1daff3(puVar1 + 0xe);
  *(int16_t *)(param_5 + 0x20) = uVar4;
  uVar4 = Function_ff1daff3(puVar1 + 0x10);
  *(int16_t *)(param_5 + 0x22) = uVar4;
  uVar4 = Function_ff1daff3(puVar1 + 0x12);
  *(int16_t *)(param_5 + 0x24) = uVar4;
  uVar4 = Function_ff1daff3(puVar1 + 0x14);
  *(int16_t *)(param_5 + 0x26) = uVar4;
  uVar4 = Function_ff1daff3(puVar1 + 0x16);
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
  *(int8_t *)(param_5 + 0x2b) = puVar1[(uint64_t)uVar5 + 1];
  *(int8_t *)(param_5 + 0x2c) = puVar1[(uint64_t)uVar5 + 5];
  uVar4 = NetworkProtocol_f07d0(puVar1 + (uVar5 + 2),0,0xc);
  *(int16_t *)(param_5 + 0x2e) = uVar4;
  uVar4 = NetworkProtocol_f07d0(puVar1 + (uVar5 + 3),4,0xc);
  *(int16_t *)(param_5 + 0x30) = uVar4;
  uVar4 = NetworkProtocol_f07d0(puVar1 + (uVar5 + 6),0,0xc);
  *(int16_t *)(param_5 + 0x32) = uVar4;
  uVar4 = NetworkProtocol_f07d0(puVar1 + (uVar5 + 7),4,0xc);
  *(int16_t *)(param_5 + 0x34) = uVar4;
  *(int16_t *)(param_5 + 10) = 0;
  return;
}
// 函数: void NetworkProtocol_f62e0(int16_t *param_1,int64_t param_2,char param_3)
void NetworkProtocol_f62e0(int16_t *param_1,int64_t param_2,char param_3)
{
  int16_t uVar1;
  uVar1 = Function_ff1daff3(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 3);
  param_1[1] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 5);
  param_1[2] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 7);
  param_1[3] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 9);
  if (param_3 == '\0') {
    param_1[4] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xb);
    param_1[5] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xd);
    param_1[6] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xf);
    param_1[7] = uVar1;
  }
  else {
    param_1[5] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xb);
    param_1[7] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xd);
    param_1[4] = uVar1;
    uVar1 = Function_ff1daff3(param_2 + 0xf);
    param_1[6] = uVar1;
  }
  uVar1 = Function_ff1daff3(param_2 + 0x11);
  param_1[8] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x13);
  param_1[9] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x15);
  param_1[10] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x17);
  param_1[0xb] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x19);
  param_1[0xc] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x1b);
  param_1[0xd] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x1d);
  param_1[0xe] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x1f);
  param_1[0xf] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x21);
  param_1[0x10] = uVar1;
  uVar1 = Function_ff1daff3(param_2 + 0x23);
  param_1[0x11] = uVar1;
  return;
}
// 函数: void NetworkProtocol_f6490(int64_t param_1,int64_t param_2)
void NetworkProtocol_f6490(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  char cVar4;
  int16_t uVar5;
  int32_t uVar6;
  cVar4 = Function_7b3c91d8(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22),
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
    uVar5 = Function_ff1daff3(param_2 + 0x21);
    *(int16_t *)(param_1 + 0x1d4) = uVar5;
    uVar5 = Function_ff1daff3(param_2 + 0x23);
    *(int16_t *)(param_1 + 0x1d6) = uVar5;
    uVar6 = Function_7d757e32(param_2 + 0x25);
    *(int32_t *)(param_1 + 0x1d8) = uVar6;
    uVar5 = Function_ff1daff3(param_2 + 0x29);
    *(int16_t *)(param_1 + 0x1dc) = uVar5;
    uVar5 = Function_ff1daff3(param_2 + 0x2b);
    *(int16_t *)(param_1 + 0x1de) = uVar5;
    uVar6 = Function_7d757e32(param_2 + 0x2d);
    *(int32_t *)(param_1 + 0x1e0) = uVar6;
    *(uint64_t *)(param_1 + 0x1e4) = 0;
    *(int32_t *)(param_1 + 0x1ec) = 0;
    *(int16_t *)(param_1 + 0x1f0) = 0;
    *(int8_t *)(param_1 + 0x1f2) = 0;
    return;
  }
  cVar4 = Function_68c0c4ab(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
  if (cVar4 != '\0') {
    *(uint64_t *)(param_1 + 0x1b4) = *(uint64_t *)(param_2 + 1);
    *(int16_t *)(param_1 + 0x1bc) = *(int16_t *)(param_2 + 9);
    *(int8_t *)(param_1 + 0x1be) = *(int8_t *)(param_2 + 0xb);
    *(uint64_t *)(param_1 + 0x1bf) = *(uint64_t *)(param_2 + 0xc);
    uVar5 = Function_ff1daff3(param_2 + 0x14);
    *(int16_t *)(param_1 + 0x1c8) = uVar5;
    uVar5 = Function_ff1daff3(param_2 + 0x16);
    *(int16_t *)(param_1 + 0x1ca) = uVar5;
    uVar6 = Function_7d757e32(param_2 + 0x18);
    *(int32_t *)(param_1 + 0x1cc) = uVar6;
    uVar6 = Function_7d757e32(param_2 + 0x1c);
    *(int32_t *)(param_1 + 0x1d0) = uVar6;
    *(uint64_t *)(param_1 + 0x1d4) = *(uint64_t *)(param_2 + 0x20);
    *(int32_t *)(param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x28);
    uVar5 = Function_ff1daff3(param_2 + 0x2c);
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
uint64_t NetworkProtocol_f6660(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
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
  iVar1 = NetworkProtocol_f6c60();
  if (iVar1 != 0) {
    return 0;
  }
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 8), 7 < iVar1 - 1U)) {
    Function_d48ca931();
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
    NetworkProtocol_f1d10(param_1);
    plVar4 = (int64_t *)((int64_t)iVar1 * 0x21f8 + 0x180c56668);
    if (*plVar4 == 0) {
      lVar3 = -1;
      do {
        lVar2 = lVar3;
        lVar3 = lVar2 + 1;
      } while (*(short *)(param_2 + lVar3 * 2) != 0);
      lVar3 = (lVar2 + 2) * 2;
      if (system_system_config == (code *)0x0) {
        lVar2 = malloc(lVar3);
      }
      else {
        lVar2 = (*system_system_config)();
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
    Function_d48ca931();
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_f6722(int32_t param_1)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t unaff_RSI;
  int64_t *plVar3;
  int64_t unaff_R14;
  int8_t local_buffer_28;
  int32_t local_buffer_70;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  uint64_t local_buffer_a0;
  uint64_t local_buffer_a8;
  uint64_t local_buffer_b0;
  uint64_t local_buffer_b8;
  uint64_t local_buffer_c0;
  uint64_t local_buffer_c8;
  uint64_t local_buffer_d0;
  uint64_t local_buffer_d8;
  uint64_t local_buffer_e0;
  uint64_t local_buffer_e8;
  uint64_t local_buffer_f0;
  uint64_t local_buffer_f8;
  uint64_t local_var_100;
  uint64_t local_var_108;
  uint64_t local_var_110;
  uint64_t local_var_118;
  uint64_t local_var_120;
  uint64_t local_var_128;
  uint64_t local_var_130;
  uint64_t local_var_138;
  uint64_t local_var_140;
  uint64_t local_var_148;
  uint64_t local_var_150;
  uint64_t local_var_158;
  uint64_t local_var_160;
  uint64_t local_var_168;
  uint64_t local_var_170;
  uint64_t local_var_178;
  uint64_t local_var_180;
  uint64_t local_var_188;
  uint64_t local_var_190;
  uint64_t local_var_198;
  int32_t local_var_1a0;
  int32_t local_var_1a4;
  int32_t local_var_1a8;
  int32_t local_var_1ac;
  local_buffer_80 = *(uint64_t *)(unaff_RBX + 0x80);
  local_buffer_88 = *(uint64_t *)(unaff_RBX + 0x88);
  local_buffer_28 = *(int8_t *)(unaff_RBX + 0x1b2);
  local_buffer_90 = *(uint64_t *)(unaff_RBX + 0x90);
  local_buffer_98 = *(uint64_t *)(unaff_RBX + 0x98);
  local_buffer_a0 = *(uint64_t *)(unaff_RBX + 0xa0);
  local_buffer_a8 = *(uint64_t *)(unaff_RBX + 0xa8);
  local_buffer_b0 = *(uint64_t *)(unaff_RBX + 0xb1);
  local_buffer_b8 = *(uint64_t *)(unaff_RBX + 0xb9);
  local_buffer_c0 = *(uint64_t *)(unaff_RBX + 0xc1);
  local_buffer_c8 = *(uint64_t *)(unaff_RBX + 0xc9);
  local_buffer_d0 = *(uint64_t *)(unaff_RBX + 0xd1);
  local_buffer_d8 = *(uint64_t *)(unaff_RBX + 0xd9);
  local_buffer_e0 = *(uint64_t *)(unaff_RBX + 0xe1);
  local_buffer_e8 = *(uint64_t *)(unaff_RBX + 0xe9);
  local_buffer_f0 = *(uint64_t *)(unaff_RBX + 0xf1);
  local_buffer_f8 = *(uint64_t *)(unaff_RBX + 0xf9);
  local_var_100 = *(uint64_t *)(unaff_RBX + 0x101);
  local_var_108 = *(uint64_t *)(unaff_RBX + 0x109);
  local_var_110 = *(uint64_t *)(unaff_RBX + 0x111);
  local_var_118 = *(uint64_t *)(unaff_RBX + 0x119);
  local_var_120 = *(uint64_t *)(unaff_RBX + 0x121);
  local_var_128 = *(uint64_t *)(unaff_RBX + 0x129);
  local_var_130 = *(uint64_t *)(unaff_RBX + 0x132);
  local_var_138 = *(uint64_t *)(unaff_RBX + 0x13a);
  local_var_140 = *(uint64_t *)(unaff_RBX + 0x142);
  local_var_148 = *(uint64_t *)(unaff_RBX + 0x14a);
  local_var_150 = *(uint64_t *)(unaff_RBX + 0x152);
  local_var_158 = *(uint64_t *)(unaff_RBX + 0x15a);
  local_var_160 = *(uint64_t *)(unaff_RBX + 0x162);
  local_var_168 = *(uint64_t *)(unaff_RBX + 0x16a);
  local_var_170 = *(uint64_t *)(unaff_RBX + 0x172);
  local_var_178 = *(uint64_t *)(unaff_RBX + 0x17a);
  local_var_180 = *(uint64_t *)(unaff_RBX + 0x182);
  local_var_188 = *(uint64_t *)(unaff_RBX + 0x18a);
  local_var_190 = *(uint64_t *)(unaff_RBX + 0x192);
  local_var_198 = *(uint64_t *)(unaff_RBX + 0x19a);
  local_var_1a0 = *(int32_t *)(unaff_RBX + 0x1a2);
  local_var_1a4 = *(int32_t *)(unaff_RBX + 0x1a6);
  local_var_1a8 = *(int32_t *)(unaff_RBX + 0x1aa);
  local_var_1ac = *(int32_t *)(unaff_RBX + 0x1ae);
  local_buffer_70 = param_1;
  NetworkProtocol_f1d10();
  plVar3 = (int64_t *)(unaff_R14 * 0x21f8 + 0x180c56668);
  if (*plVar3 == 0) {
    lVar2 = -1;
    do {
      lVar1 = lVar2;
      lVar2 = lVar1 + 1;
    } while (*(short *)(unaff_RSI + lVar2 * 2) != 0);
    lVar2 = (lVar1 + 2) * 2;
    if (system_system_config == (code *)0x0) {
      lVar1 = malloc(lVar2);
    }
    else {
      lVar1 = (*system_system_config)();
    }
    *plVar3 = lVar1;
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      memset(lVar1,0,lVar2);
    }
  }
  Function_d48ca931();
  return 0;
}
uint64_t NetworkProtocol_f6af3(void)
{
  Function_d48ca931();
  return 0;
}
uint64_t NetworkProtocol_f6b10(int64_t param_1)
{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  bVar1 = 0;
  do {
    if (*(char *)((uint64_t)bVar1 + 0x29 + param_1) != '\0') break;
    bVar1 = bVar1 + 1;
  } while (bVar1 < 6);
  if (bVar1 != 6) {
    lVar7 = 0x180c69861;
    do {
      if (*(int64_t *)(lVar7 + 7) != 0) {
        bVar1 = 0;
        do {
          if (*(char *)(lVar7 + (uint64_t)bVar1) != *(char *)((uint64_t)bVar1 + 0x29 + param_1))
          break;
          bVar1 = bVar1 + 1;
        } while (bVar1 < 6);
      }
      if (bVar1 == 6) {
        uVar3 = *(uint64_t *)(lVar7 + 7);
        lVar7 = CreateFileW(uVar3,0xc0000000,3,0,3,0,0);
        if (lVar7 != -1) {
          lVar4 = NetworkProtocol_f6660(param_1,uVar3,lVar7);
          if (lVar4 == 0) {
            return 0;
          }
          if (system_data_8853 != '\0') {
            lVar5 = _beginthread(NetworkProtocol_f3c80,0,lVar4);
            *(int64_t *)(lVar4 + 0x18) = lVar5;
            if (lVar5 != -1) {
              iVar2 = 0;
              plVar6 = (int64_t *)0x180c69820;
              do {
                if (*plVar6 == 0) {
                  *(int64_t *)((int64_t)iVar2 * 8 + 0x180c69820) = lVar5;
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
    NetworkProtocol_f0550(*(int32_t *)(param_1 + 8));
  }
  uVar3 = NetworkProtocol_f6c60();
  if ((int)uVar3 == 0) {
    NetworkProtocol_f1d10(param_1);
    uVar3 = Function_d48ca931();
  }
  return uVar3;
}
uint64_t NetworkProtocol_f6c60(void)
{
  if (system_data_9e20 != '\0') {
    EnterCriticalSection(0x180c69e50);
    return 0;
  }
  return 0x80010002;
}
uint64_t NetworkProtocol_f6cb0(void)
{
  if (system_data_9e20 != '\0') {
    EnterCriticalSection(0x180c69e28);
    return 0;
  }
  return 0x80010002;
}
// 函数: void NetworkProtocol_f6d00(void)
void NetworkProtocol_f6d00(void)
{
  if (system_data_9e20 == '\0') {
    InitializeCriticalSection(0x180c69e28);
    InitializeCriticalSection(0x180c69e50);
  }
// 函数: void NetworkProtocol_f6fa0(float *param_1,float *param_2,float param_3)
void NetworkProtocol_f6fa0(float *param_1,float *param_2,float param_3)
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
  int32_t local_var_ac;
  int8_t stack_array_a8 [160];
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
      local_var_ac = cosf(fVar5);
      pfVar1 = (float *)NetworkProtocol_f6e00(&fStack_b8,stack_array_a8,param_1);
      *param_1 = *pfVar1;
      param_1[1] = pfVar1[1];
      param_1[2] = pfVar1[2];
      param_1[3] = pfVar1[3];
    }
  }
  return;
}