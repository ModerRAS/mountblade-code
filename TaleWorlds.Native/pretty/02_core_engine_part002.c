#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part002.c - 26 个函数

// 函数: uint8_t FUN_1800670d0;
uint8_t FUN_1800670d0;
uint8_t UNK_180a25980;
uint8_t system_data_c170;
uint8_t UNK_180a258e0;
uint8_t UNK_180a258ec;
uint8_t UNK_180a258f8;
uint8_t UNK_180a259c0;
uint8_t UNK_180a259c8;
uint8_t UNK_180a259e0;
uint8_t UNK_180a25a10;
uint8_t system_data_af70;
uint8_t UNK_180a25998;
uint8_t UNK_180a259a8;
uint8_t UNK_180a25a74;
uint8_t UNK_180a25a28;
uint8_t UNK_180a25a80;
uint8_t UNK_180a25a98;
uint8_t system_data_2498;
uint8_t UNK_180a25a50;
uint8_t UNK_180a25a60;
uint8_t UNK_180a25aa0;
uint8_t UNK_180a25ab0;
uint8_t UNK_180a25ae8;
uint8_t UNK_180a25af0;
uint8_t UNK_180a25b00;
uint8_t UNK_180a25ab8;
uint8_t UNK_180a25ac8;
uint8_t UNK_180a25b10;
uint8_t UNK_180a25b20;
uint8_t UNK_180a25b30;
uint8_t UNK_180a25b40;
uint8_t UNK_180a25b48;
uint8_t UNK_180a25b60;
uint8_t UNK_180a25b6c;
uint8_t UNK_180a25b80;
uint8_t UNK_180a25b88;
uint8_t UNK_180a25bc8;
uint8_t UNK_180a25bd4;
uint8_t UNK_180a25be0;
uint8_t UNK_180a25c58;
uint8_t UNK_180a25c84;
uint8_t UNK_180a25c90;
uint8_t UNK_180a2b468;
uint8_t UNK_180a25c04;
uint8_t UNK_180a25c10;
uint8_t UNK_180a25c20;
uint8_t UNK_180a25ca0;
uint8_t UNK_180a25cdc;
uint8_t UNK_180a0dcf8;
uint8_t UNK_180a25bfc;
uint8_t UNK_180a25ce8;
uint8_t UNK_180a25cf8;
uint8_t system_data_5d28;
uint8_t system_data_209c;
uint8_t system_data_22f0;
uint8_t system_data_2320;
uint8_t UNK_180a25ca8;
uint8_t system_data_5cb4;
uint8_t UNK_180a25cc0;
uint8_t UNK_180a25cd0;
uint8_t UNK_180a25d78;
uint8_t UNK_180a25d90;
uint8_t UNK_180a25d98;
uint8_t UNK_180a25da8;
uint8_t system_data_2030;
uint8_t system_data_206c;
uint8_t system_data_2080;
uint8_t UNK_180a25e58;
uint8_t UNK_180a25e70;
uint8_t UNK_180a25e80;
uint8_t UNK_180a25e90;
uint8_t UNK_180a25ebc;
uint8_t UNK_180a25ec4;
uint8_t UNK_180a25ed0;
uint8_t UNK_180a25ee0;
uint8_t UNK_180a25ef0;
uint8_t UNK_180a25ef8;
uint8_t UNK_180a25900;
uint8_t UNK_180a25ad0;
uint8_t UNK_180a25a6c;


// 函数: void FUN_180030070(void)
void FUN_180030070(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025e330;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0d48,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &UNK_180a00460;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180030170(void)
void FUN_180030170(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_10a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180030270(void)
void FUN_180030270(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1078,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180030370(void)
void FUN_180030370(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1050,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180030470(void)
void FUN_180030470(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1028,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180030570(void)
void FUN_180030570(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1000,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180030670(void)
void FUN_180030670(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puStackX_18 = &UNK_1800868c0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0fd8,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &UNK_180a003e8;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}





// 函数: void FUN_180030770(void)
void FUN_180030770(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0fb0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &UNK_180a00400;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180030870(void)
void FUN_180030870(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 8;
  strcpy_s(auStack_88,0x80,&UNK_180a0b1c8,in_R9,0xfffffffffffffffe);
  _DAT_180c919e0 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180030900(void)

{
  longlong lVar1;
  uint64_t in_R9;
  
  _DAT_180bf6750 = &UNK_1809fcc58;
  _DAT_180bf6758 = &system_data_6768;


// 函数: void FUN_180031a10(void)
void FUN_180031a10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802281a0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_f9e8,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &UNK_1809ff978;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180031b10(void)
void FUN_180031b10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802285e0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_f9c0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9c0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &UNK_1809ff990;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180031c10(void)
void FUN_180031c10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802281a0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_f9e8,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &UNK_1809ff978;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180031d10(void)
void FUN_180031d10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802285e0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_f9c0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9c0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &UNK_1809ff990;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180031e10(void)
void FUN_180031e10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_10a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180031f10(void)
void FUN_180031f10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1078,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180032010(void)
void FUN_180032010(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1050,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180032110(void)
void FUN_180032110(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1028,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180032210(void)
void FUN_180032210(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1000,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180032310(void)
void FUN_180032310(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puStackX_18 = &UNK_1800868c0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0fd8,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &UNK_180a003e8;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}





// 函数: void FUN_180032410(void)
void FUN_180032410(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0fb0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &UNK_180a00400;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180032510(void)
void FUN_180032510(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xb;
  strcpy_s(auStack_88,0x80,&UNK_180a13a98,in_R9,0xfffffffffffffffe);
  _DAT_180c91d54 = FUN_180623800(&puStack_a0);
  return;
}





// 函数: void FUN_1800325a0(void)
void FUN_1800325a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_10a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800326a0(void)
void FUN_1800326a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1078,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800327a0(void)
void FUN_1800327a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1050,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800328a0(void)
void FUN_1800328a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_1028,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





