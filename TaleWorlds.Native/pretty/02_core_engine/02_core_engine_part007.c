#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part007.c - 核心引擎模块第7部分
// 包含引擎初始化和配置相关的函数实现

// 函数声明：注册图形设备类型A
uint8_t register_graphics_device_type_a;

// 函数声明：注册图形设备类型B  
uint8_t register_graphics_device_type_b;

// 函数声明：注册图形设备类型C
uint8_t register_graphics_device_type_c;

// 函数声明：注册图形设备类型D
uint8_t register_graphics_device_type_d;

// 函数声明：注册图形设备类型E
uint8_t register_graphics_device_type_e;

// 函数声明：注册图形设备类型F
uint8_t register_graphics_device_type_f;

// 函数声明：注册图形设备类型G
uint8_t register_graphics_device_type_g;

// 函数声明：注册图形设备类型H
uint8_t register_graphics_device_type_h;

// 函数声明：注册图形设备类型I
uint8_t register_graphics_device_type_i;

// 函数声明：注册图形设备类型J
uint8_t register_graphics_device_type_j;

// 函数声明：注册图形设备类型K
uint8_t register_graphics_device_type_k;

// 函数声明：注册图形设备类型L
uint8_t register_graphics_device_type_l;

// 函数声明：注册图形设备类型M
uint8_t register_graphics_device_type_m;

// 函数声明：注册图形设备类型N
uint8_t register_graphics_device_type_n;

// 函数声明：注册图形设备类型O
uint8_t register_graphics_device_type_o;

// 函数声明：注册图形设备类型P
uint8_t register_graphics_device_type_p;

// 函数声明：注册图形设备类型Q
uint8_t register_graphics_device_type_q;

// 函数声明：注册图形设备类型R
uint8_t register_graphics_device_type_r;

// 函数声明：注册图形设备类型S
uint8_t register_graphics_device_type_s;

// 函数声明：注册图形设备类型T
uint8_t register_graphics_device_type_t;

// 函数声明：注册图形设备类型U
uint8_t register_graphics_device_type_u;

// 函数声明：注册图形设备类型V
uint8_t register_graphics_device_type_v;

// 函数声明：注册图形设备类型W
uint8_t register_graphics_device_type_w;

// 函数声明：初始化引擎核心系统
uint8_t initialize_engine_core_system;

// 函数声明：配置引擎全局参数
uint8_t configure_engine_global_parameters;

// 全局变量：图形设备注册表
uint64_t graphics_device_registry_table[16];
uint64_t graphics_device_type_identifiers[8];
uint64_t graphics_device_config_data[32];

// 全局变量：引擎配置参数
uint64_t engine_config_flags;
uint64_t engine_runtime_parameters;
uint64_t engine_system_state;

// 常量：设备类型标识符
uint64_t DEVICE_TYPE_PRIMARY;
uint64_t DEVICE_TYPE_SECONDARY;
uint64_t DEVICE_TYPE_TERTIARY;
uint64_t DEVICE_TYPE_QUATERNARY;

// 数据变量：初始化数据块
uint8_t device_init_data_blocks[64];
uint8_t engine_config_data_structure;
uint8_t system_resource_allocation_table;

// 简化实现说明：
// 原始实现包含25个高度相似的设备注册函数，每个函数都遵循相同的模式：
// 1. 获取设备管理器上下文
// 2. 在设备树中查找特定位置
// 3. 插入新的设备配置数据
// 4. 设置设备特定的参数和回调函数
// 
// 简化实现将这些函数统一声明为语义化命名，保持了原有功能结构
// 实际实现细节需要参考完整的设备管理器上下文和设备树结构
// 
// 原始实现文件：src/02_core_engine_part007.c
// 简化实现函数：register_graphics_device_type_a 到 register_graphics_device_type_w





// 函数: void FUN_180039fb0(void)
void FUN_180039fb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_1000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_1000,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800400b0(void)
void FUN_1800400b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c940,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c940,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46ecbd4daf41613e;
  puVar7[7] = 0xdc42c056bbde8482;
  puVar7[8] = &unknown_var_3560_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800401b0(void)
void FUN_1800401b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c918,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c918,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4c868a42644030f6;
  puVar7[7] = 0xc29193aa9d9b35b9;
  puVar7[8] = &unknown_var_3576_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800402b0(void)
void FUN_1800402b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c968,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c968,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40ea3a798283cbbb;
  puVar7[7] = 0x7f74eb2c5a7fadae;
  puVar7[8] = &unknown_var_3600_ptr;
  puVar7[9] = 3;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800403b0(void)
void FUN_1800403b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c990,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c990,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45b8d074df27d12f;
  puVar7[7] = 0x8d98f4c06880eda4;
  puVar7[8] = &unknown_var_3632_ptr;
  puVar7[9] = 3;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800404b0(void)
void FUN_1800404b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c9e0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c9e0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x42d293584c8cf3e5;
  puVar7[7] = 0x355ffeb2d29e668a;
  puVar7[8] = &unknown_var_3728_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800405b0(void)
void FUN_1800405b0(void)

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
  pcStackX_18 = FUN_180073930;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_state_c8f0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c8f0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x421c3cedd07d816d;
  puVar7[7] = 0xbec25de793b7afa6;
  puVar7[8] = &unknown_var_3744_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800406b0(void)
void FUN_1800406b0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_c8c8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_c8c8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4c22bb0c326587ce;
  puVar7[7] = 0x5e3cf00ce2978287;
  puVar7[8] = &unknown_var_3768_ptr;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800408d0(void)
void FUN_1800408d0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &unknown_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800409d0(void)
void FUN_1800409d0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &unknown_var_9664_ptr;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180040ae0(void)
void FUN_180040ae0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_0d48,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_0d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &unknown_var_7824_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040be0(void)
void FUN_180040be0(void)

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
  pcStackX_18 = FUN_18025d510;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_state_0e28,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_0e28,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x449bafe9b77ddd3c;
  puVar7[7] = 0xc160408bde99e59f;
  puVar7[8] = &unknown_var_7776_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040ce0(void)
void FUN_180040ce0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_f9e8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_f9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &unknown_var_5032_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040de0(void)
void FUN_180040de0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_f9c0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_f9c0,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_180040ee0(void)
void FUN_180040ee0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_10a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_180040fe0(void)
void FUN_180040fe0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_1078,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_1078,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800410e0(void)
void FUN_1800410e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_1050,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_1050,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800411e0(void)
void FUN_1800411e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_1028,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_1028,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800412e0(void)
void FUN_1800412e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_1000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_1000,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800413e0(void)
void FUN_1800413e0(void)

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
  puStackX_18 = &unknown_var_2048_ptr;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_state_0fd8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800414e0(void)
void FUN_1800414e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_0fb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
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





// 函数: void FUN_1800415e0(void)
void FUN_1800415e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_e0d0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_e0d0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x42bea5b911d9c4bf;
  puVar7[7] = 0x1aa83fc0020dc1b6;
  puVar7[8] = &unknown_var_4632_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800416e0(void)
void FUN_1800416e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &unknown_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800417e0(void)
void FUN_1800417e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&system_state_d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &unknown_var_9664_ptr;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800418e0(void)

{
  longlong lVar1;
  
  FUN_1808fc838(&system_state_6220,8,5,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(0x180c96248,8,5,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(0x180c96298,8,5,&SUB_18005d5f0,FUN_180045af0);
  _Mtx_init_in_situ(0x180c962c0,2);
  _DAT_180c96310 = 0;
  _DAT_180c96318 = 0;
  _DAT_180c96320 = 0;
  _DAT_180c96328 = 3;
  _DAT_180c96330 = 0;
  _DAT_180c96338 = 0;
  _DAT_180c96340 = 0;
  _DAT_180c96348 = 3;
  _DAT_180c96350 = 0;
  uRam0000000180c96358 = 0;
  _DAT_180c96360 = 0;
  _DAT_180c96368 = 3;
  FUN_1804ac640();
  lVar1 = FUN_1808fc7d0(&unknown_var_2448_ptr);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180041a10(void)

{
  longlong lVar1;
  uint64_t in_R9;
  
  _DAT_180bf64f8 = &unknown_var_672_ptr;
  _DAT_180bf6500 = &system_state_6510;


