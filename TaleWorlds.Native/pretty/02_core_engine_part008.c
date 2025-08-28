n// SystemCore_Compression 函数的语义化别名: SystemCallbackHandler
#define SystemCallbackHandler SystemCore_Compression
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part008.c - 27 个函数
// 函数: void function_041af0(void)
void function_041af0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &processed_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_041bf0(void)
void function_041bf0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &processed_var_9664_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_041d10(void)
void function_041d10(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &processed_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_041e10(void)
void function_041e10(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &processed_var_9664_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_041f10(void)
void function_041f10(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0xd;
  strcpy_s(stack_array_88,0x80,&processed_var_9616_ptr,in_R9,0xfffffffffffffffe);
  core_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
int function_041fa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  _Mtx_init_in_situ(0x180c96690,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = SystemCore_FunctionDispatcher(function_943070);
  return (lVar1 != 0) - 1;
}
// 函数: void function_041fd0(void)
void function_041fd0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &processed_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_0420d0(void)
void function_0420d0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &processed_var_9664_ptr;
  puVar7[9] = 2;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_0421d0(void)
void function_0421d0(void)
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
// 函数: void function_0422d0(void)
void function_0422d0(void)
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
// 函数: void function_0423d0(void)
void function_0423d0(void)
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
// 函数: void function_0424d0(void)
void function_0424d0(void)
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
// 函数: void function_0425d0(void)
void function_0425d0(void)
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
// 函数: void function_0426d0(void)
void function_0426d0(void)
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
// 函数: void function_0427d0(void)
void function_0427d0(void)
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
// 函数: void function_0428d0(void)
void function_0428d0(void)
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
// 函数: void function_0429d0(void)
void function_0429d0(void)
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
// 函数: void function_042ad0(void)
void function_042ad0(void)
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
  pcStackX_18 = SystemCore_Compression;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_c740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &system_param1_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void function_042bd0(void)
void function_042bd0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c768,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c768,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4770584fbb1df897;
  puVar7[7] = 0x47f249e43f66f2ab;
  puVar7[8] = &memory_allocator_3520_ptr;
  puVar7[9] = 1;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_042cd0(void)
void function_042cd0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c9b8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c9b8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4666df49b97e0f10;
  puVar7[7] = 0x4e4b0d63a6ad1d8f;
  puVar7[8] = &memory_allocator_3544_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_042dd0(void)
void function_042dd0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c940,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c940,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x46ecbd4daf41613e;
  puVar7[7] = 0xdc42c056bbde8482;
  puVar7[8] = &memory_allocator_3560_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_042ed0(void)
void function_042ed0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c918,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c918,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4c868a42644030f6;
  puVar7[7] = 0xc29193aa9d9b35b9;
  puVar7[8] = &memory_allocator_3576_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_042fd0(void)
void function_042fd0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c968,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c968,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x40ea3a798283cbbb;
  puVar7[7] = 0x7f74eb2c5a7fadae;
  puVar7[8] = &memory_allocator_3600_ptr;
  puVar7[9] = 3;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_0430d0(void)
void function_0430d0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c990,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c990,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x45b8d074df27d12f;
  puVar7[7] = 0x8d98f4c06880eda4;
  puVar7[8] = &memory_allocator_3632_ptr;
  puVar7[9] = 3;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_0431d0(void)
void function_0431d0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c9e0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c9e0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x42d293584c8cf3e5;
  puVar7[7] = 0x355ffeb2d29e668a;
  puVar7[8] = &memory_allocator_3728_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void function_0432d0(void)
void function_0432d0(void)
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
  pcStackX_18 = CoreEngine_073930;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_c8f0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c8f0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x421c3cedd07d816d;
  puVar7[7] = 0xbec25de793b7afa6;
  puVar7[8] = &memory_allocator_3744_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void function_0433d0(void)
void function_0433d0(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_data_c8c8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_c8c8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4c22bb0c326587ce;
  puVar7[7] = 0x5e3cf00ce2978287;
  puVar7[8] = &memory_allocator_3768_ptr;
  puVar7[9] = 1;
  puVar7[10] = stack_special_x_18;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0434d0(void)
void function_0434d0(void)
{
  uint64_t in_R9;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [136];
  plocal_var_a0 = &memory_allocator_3432_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0x1b;
  strcpy_s(stack_array_88,0x80,&rendering_buffer_2504_ptr,in_R9,0xfffffffffffffffe);
  core_system_ui = SystemCore_ConfigManager(&plocal_var_a0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address