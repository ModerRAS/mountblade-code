#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part002.c - 26 个函数
// 函数: uint8_t function_0670d0;
uint8_t function_0670d0;
uint8_t processed_var_688;
uint8_t system_data_c170;
uint8_t processed_var_528;
uint8_t processed_var_540;
uint8_t processed_var_552;
uint8_t processed_var_752;
uint8_t processed_var_760;
uint8_t processed_var_784;
uint8_t processed_var_832;
uint8_t system_data_af70;
uint8_t processed_var_712;
uint8_t processed_var_728;
uint8_t processed_var_932;
uint8_t processed_var_856;
uint8_t processed_var_944;
uint8_t processed_var_968;
uint8_t system_data_2498;
uint8_t processed_var_896;
uint8_t processed_var_912;
uint8_t processed_var_976;
uint8_t processed_var_992;
uint8_t ui_system_data_1048;
uint8_t ui_system_data_1056;
uint8_t ui_system_data_1072;
uint8_t ui_system_data_1000;
uint8_t ui_system_data_1016;
uint8_t ui_system_data_1088;
uint8_t ui_system_data_1104;
uint8_t ui_system_data_1120;
uint8_t ui_system_data_1136;
uint8_t ui_system_data_1144;
uint8_t ui_system_data_1168;
uint8_t ui_system_data_1180;
uint8_t ui_system_data_1200;
uint8_t ui_system_data_1208;
uint8_t ui_system_data_1272;
uint8_t ui_system_data_1284;
uint8_t ui_system_data_1296;
uint8_t ui_system_data_1416;
uint8_t ui_system_data_1460;
uint8_t ui_system_data_1472;
uint8_t memory_allocator_3960;
uint8_t ui_system_data_1332;
uint8_t ui_system_data_1344;
uint8_t ui_system_data_1360;
uint8_t ui_system_data_1488;
uint8_t ui_system_data_1548;
uint8_t memory_allocator_3272;
uint8_t ui_system_data_1324;
uint8_t ui_system_data_1560;
uint8_t ui_system_data_1576;
uint8_t system_data_5d28;
uint8_t system_data_209c;
uint8_t system_data_22f0;
uint8_t system_data_2320;
uint8_t ui_system_data_1496;
uint8_t system_data_5cb4;
uint8_t ui_system_data_1520;
uint8_t ui_system_data_1536;
uint8_t ui_system_data_1704;
uint8_t ui_system_data_1728;
uint8_t ui_system_data_1736;
uint8_t ui_system_data_1752;
uint8_t system_data_2030;
uint8_t system_data_206c;
uint8_t system_data_2080;
uint8_t ui_system_data_1928;
uint8_t ui_system_data_1952;
uint8_t ui_system_data_1968;
uint8_t ui_system_data_1984;
uint8_t rendering_buffer_2028;
uint8_t rendering_buffer_2036;
uint8_t rendering_buffer_2048;
uint8_t rendering_buffer_2064;
uint8_t rendering_buffer_2080;
uint8_t rendering_buffer_2088;
uint8_t processed_var_560;
uint8_t ui_system_data_1024;
uint8_t processed_var_924;
// 函数: void function_030070(void)
void function_030070(void)
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
  pcStackX_18 = function_25e330;
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &processed_var_7824_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void function_030170(void)
void function_030170(void)
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
// 函数: void function_030270(void)
void function_030270(void)
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
// 函数: void function_030370(void)
void function_030370(void)
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
// 函数: void function_030470(void)
void function_030470(void)
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
// 函数: void function_030570(void)
void function_030570(void)
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
// 函数: void function_030670(void)
void function_030670(void)
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
// 函数: void function_030770(void)
void function_030770(void)
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
// 函数: void function_030870(void)
void function_030870(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 8;
  strcpy_s(stack_array_88,0x80,&rendering_buffer_2216_ptr,in_R9,0xfffffffffffffffe);
  core_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_030900(void)
{
  int64_t lVar1;
  uint64_t in_R9;
  core_system_control_ui = &memory_allocator_3480_ptr;
  core_system_control_ui = &system_data_6768;
// 函数: void function_031a10(void)
void function_031a10(void)
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
  pcStackX_18 = function_2281a0;
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &processed_var_5032_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void function_031b10(void)
void function_031b10(void)
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
// 函数: void function_031c10(void)
void function_031c10(void)
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
  pcStackX_18 = function_2281a0;
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
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_f9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &processed_var_5032_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void function_031d10(void)
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
// 函数: void function_031e10(void)
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
// 函数: void function_031f10(void)
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
// 函数: void function_032010(void)
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
// 函数: void function_032110(void)
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
// 函数: void function_032210(void)
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
// 函数: void function_032310(void)
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
// 函数: void function_032410(void)
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
// 函数: void function_032510(void)
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
  core_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// 函数: void function_0325a0(void)
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
// 函数: void function_0326a0(void)
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
// 函数: void function_0327a0(void)
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
// 函数: void function_0328a0(void)
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