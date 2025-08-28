#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part004_sub001.c - 30 个函数

#include "TaleWorlds.Native.Split.h"

// 01_initialization_part004.c - 30 个函数


// 函数: void FUN_180031d10(void)
void FUN_180031d10(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9c0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &unknown_var_5056_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &unknown_var_7584_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &unknown_var_7608_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &unknown_var_7632_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &unknown_var_7656_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &unknown_var_7680_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  puStackX_18 = &unknown_var_2048_ptr;
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &unknown_var_7704_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &unknown_var_7728_ptr;
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
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xb;
  strcpy_s(auStack_88,0x80,&unknown_var_7240_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}






// 函数: void FUN_1800325a0(void)
void FUN_1800325a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &unknown_var_7584_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &unknown_var_7608_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &unknown_var_7632_ptr;
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
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &unknown_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_1800329a0(void)
void FUN_1800329a0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &unknown_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}






// 函数: void FUN_180032aa0(void)
void FUN_180032aa0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  puStackX_18 = &unknown_var_2048_ptr;
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &unknown_var_7704_ptr;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}






// 函数: void FUN_180032ba0(void)
void FUN_180032ba0(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &unknown_var_7728_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180032ca0(void)
void FUN_180032ca0(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 10;
  strcpy_s(auStack_88,0x80,&unknown_var_8184_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180032d30(void)

{
  int64_t lVar1;
  uint64_t in_R9;
  
  init_system_control_ui = &unknown_var_3480_ptr;
  init_system_control_ui = &system_data_7ea8;



// 函数: void FUN_180033780(void)
void FUN_180033780(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 9;
  strcpy_s(auStack_88,0x80,&unknown_var_8872_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180033810(void)
void FUN_180033810(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x80,&unknown_var_9280_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800338a0(void)
void FUN_1800338a0(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xc;
  strcpy_s(auStack_88,0x80,&unknown_var_264_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180033930(void)
void FUN_180033930(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 7;
  strcpy_s(auStack_88,0x80,&system_data_4640,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800339c0(void)
void FUN_1800339c0(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x13;
  strcpy_s(auStack_88,0x80,&unknown_var_736_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}






// 函数: void FUN_180033a50(void)
void FUN_180033a50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802633c0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0bb0,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0bb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40db4257e97d3df8;
  puVar7[7] = 0x81d539e33614429f;
  puVar7[8] = &unknown_var_7896_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_180033b50(void)
void FUN_180033b50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_180262b00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0b88,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0b88,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4e33c4803e67a08f;
  puVar7[7] = 0x703a29a844ce399;
  puVar7[8] = &unknown_var_7920_ptr;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_180033c50(void)
void FUN_180033c50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &unknown_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_180033d50(void)
void FUN_180033d50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &unknown_var_7608_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_180033e50(void)
void FUN_180033e50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &unknown_var_7632_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}






// 函数: void FUN_180033f50(void)
void FUN_180033f50(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &unknown_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}






// 函数: void FUN_180034050(void)
void FUN_180034050(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &unknown_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}






