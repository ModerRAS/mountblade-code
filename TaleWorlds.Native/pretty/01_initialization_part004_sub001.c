#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part004_sub001.c - 30 个函数
#include "TaleWorlds.Native.Split.h"
// 01_initialization_part004.c - 30 个函数
// 函数: void GenericFunction_180031d10(void)
void function_031d10(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_2285e0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &processed_var_5056_ptr;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180031e10(void)
void function_031e10(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_FileSystem1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &processed_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180031f10(void)
void function_031f10(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_ConfigManager1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &processed_var_7608_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180032010(void)
void function_032010(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &processed_var_7632_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void GenericFunction_180032110(void)
void function_032110(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > UltraHighFreq_NetworkHandler1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &processed_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180032210(void)
void function_032210(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &processed_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void GenericFunction_180032310(void)
void function_032310(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  void *pstack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pstack_special_x_18 = &rendering_buffer_2048_ptr;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &processed_var_7704_ptr;
  puVar7[9] = 0;
  puVar7[10] = pstack_special_x_18;
  return;
}
// 函数: void GenericFunction_180032410(void)
void function_032410(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &processed_var_7728_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180032510(void)
void function_032510(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0xb;
  strcpy_s(stack_array_88,0x80,&processed_var_7240_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// 函数: void GenericFunction_1800325a0(void)
void function_0325a0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_FileSystem1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &processed_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_1800326a0(void)
void function_0326a0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_ConfigManager1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &processed_var_7608_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_1800327a0(void)
void function_0327a0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &processed_var_7632_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void GenericFunction_1800328a0(void)
void function_0328a0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > UltraHighFreq_NetworkHandler1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &processed_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_1800329a0(void)
void function_0329a0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &processed_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void GenericFunction_180032aa0(void)
void function_032aa0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  void *pstack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pstack_special_x_18 = &rendering_buffer_2048_ptr;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &processed_var_7704_ptr;
  puVar7[9] = 0;
  puVar7[10] = pstack_special_x_18;
  return;
}
// 函数: void GenericFunction_180032ba0(void)
void function_032ba0(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &processed_var_7728_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180032ca0(void)
void function_032ca0(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 10;
  strcpy_s(stack_array_88,0x80,&processed_var_8184_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int GenericFunction_180032d30(void)
{
  int64_t lVar1;
  uint64_t in_R9;
  init_system_control_ui = &memory_allocator_3480_ptr;
  init_system_control_ui = &system_data_7ea8;
// 函数: void GenericFunction_180033780(void)
void function_033780(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 9;
  strcpy_s(stack_array_88,0x80,&processed_var_8872_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180033810(void)
void function_033810(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0xf;
  strcpy_s(stack_array_88,0x80,&processed_var_9280_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800338a0(void)
void function_0338a0(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0xc;
  strcpy_s(stack_array_88,0x80,&rendering_buffer_264_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180033930(void)
void function_033930(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 7;
  strcpy_s(stack_array_88,0x80,&system_data_4640,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800339c0(void)
void function_0339c0(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0x13;
  strcpy_s(stack_array_88,0x80,&processed_var_736_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// 函数: void GenericFunction_180033a50(void)
void function_033a50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_2633c0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x40db4257e97d3df8;
  puVar7[7] = 0x81d539e33614429f;
  puVar7[8] = &processed_var_7896_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180033b50(void)
void function_033b50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_262b00;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4e33c4803e67a08f;
  puVar7[7] = 0x703a29a844ce399;
  puVar7[8] = &processed_var_7920_ptr;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180033c50(void)
void function_033c50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_FileSystem1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &processed_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180033d50(void)
void function_033d50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > HighFreq_ConfigManager1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &processed_var_7608_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180033e50(void)
void function_033e50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &processed_var_7632_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void GenericFunction_180033f50(void)
void function_033f50(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = > UltraHighFreq_NetworkHandler1;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &processed_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void GenericFunction_180034050(void)
void function_034050(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
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
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &processed_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}