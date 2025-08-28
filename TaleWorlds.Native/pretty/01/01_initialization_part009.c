#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// ============================================================================
// 01_initialization_part009.c - 初始化系统高级配置和注册模块
// ============================================================================

/**
 * 模块概述：
 * 本文件包含27个核心函数，主要负责初始化系统的高级配置、注册管理和系统设置。
 * 这些函数处理系统初始化过程中的各种配置项、注册表项和系统参数设置。
 * 
 * 主要功能类别：
 * 1. 系统注册和配置管理
 * 2. 初始化参数处理
 * 3. 系统状态设置
 * 4. 内存和资源管理
 * 5. 字符串和数据处理
 * 
 * 技术特点：
 * - 使用链表遍历和内存比较算法
 * - 实现系统注册和配置管理
 * - 支持多种初始化模式
 * - 包含错误处理和状态验证
 */

// ============================================================================
// 常量定义和全局变量
// ============================================================================

// 系统配置常量
#define INIT_CONFIG_SIZE 0x80        // 初始化配置缓冲区大小
#define INIT_STRING_LENGTH 0x16     // 初始化字符串长度
#define INIT_FLAG_8 8                 // 初始化标志8
#define INIT_FLAG_0x12 0x12           // 初始化标志0x12
#define INIT_FLAG_0x1C 0x1C           // 初始化标志0x1C
#define INIT_FLAG_0xC 0xC             // 初始化标志0xC

// 系统配置数据地址
#define CONFIG_DATA_180a22538 (&unknown_var_7304_ptr)    // 配置数据地址1
#define CONFIG_DATA_180a24340 (&unknown_var_4992_ptr)    // 配置数据地址2
#define CONFIG_DATA_180a24828 (&unknown_var_6248_ptr)    // 配置数据地址3
#define CONFIG_DATA_1809fc740 (&system_memory_c740)    // 配置数据地址4
#define CONFIG_DATA_1809fc768 (&system_memory_c768)    // 配置数据地址5

// 内存对齐和结构定义
#define MEMORY_ALIGN_0x20 0x20       // 内存对齐大小
#define STRUCTURE_SIZE_0x10 0x10     // 结构体大小

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 函数名称：InitializationSystem_ConfigRegistrationManager1
 * 
 * 功能描述：初始化系统配置注册管理器1
 * 负责处理系统配置的注册和管理，包括字符串复制和内存分配。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用strcpy_s进行安全的字符串复制
 * - 调用FUN_180623800进行内存分配和注册
 * - 设置配置标志为0x16
 * 
 * 注意事项：
 * - 此函数为系统初始化的关键组件
 * - 确保字符串缓冲区足够大
 */
void InitializationSystem_ConfigRegistrationManager1(void)
{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x16;
  strcpy_s(auStack_88,0x80,&unknown_var_7304_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}

/**
 * 函数名称：InitializationSystem_GlobalDataInitializer1
 * 
 * 功能描述：初始化系统全局数据初始化器1
 * 负责设置系统的全局数据指针和配置。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   int - 返回初始化状态
 * 
 * 技术实现：
 * - 设置全局数据指针到特定地址
 * - 初始化系统配置结构
 * - 返回操作状态码
 * 
 * 注意事项：
 * - 全局数据的初始化顺序很重要
 * - 确保指针地址的有效性
 */
int InitializationSystem_GlobalDataInitializer1(void)
{
  longlong lVar1;
  uint64_t in_R9;
  
  init_system_control_ui = &unknown_var_3480_ptr;
  init_system_control_ui = &system_memory_91c8;
  
  return lVar1;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert1
 * 
 * 功能描述：初始化系统注册表搜索和插入器1
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18007fcd0
 * 
 * 注意事项：
 * - 算法复杂度为O(n)，适用于中小规模注册表
 * - 内存分配失败时需要错误处理
 */
void InitializationSystem_RegistrySearchAndInsert1(void)
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
  pcStackX_18 = FUN_18007fcd0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_c740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &unknown_var_3504_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert2
 * 
 * 功能描述：初始化系统注册表搜索和插入器2
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置优先级为1
 * 
 * 注意事项：
 * - 与RegistrySearchAndInsert1类似，但配置数据不同
 * - 优先级设置影响系统启动顺序
 */
void InitializationSystem_RegistrySearchAndInsert2(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c768,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c768,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4770584fbb1df897;
  puVar7[7] = 0x47f249e43f66f2ab;
  puVar7[8] = &unknown_var_3520_ptr;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert3
 * 
 * 功能描述：初始化系统注册表搜索和插入器3
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置优先级为0
 * 
 * 注意事项：
 * - 配置数据指向DAT_18098c9b8
 * - 适用于系统基础组件注册
 */
void InitializationSystem_RegistrySearchAndInsert3(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c9b8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c9b8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4666df49b97e0f10;
  puVar7[7] = 0x4e4b0d63a6ad1d8f;
  puVar7[8] = &unknown_var_3544_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert4
 * 
 * 功能描述：初始化系统注册表搜索和插入器4
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_18098c940
 * 
 * 注意事项：
 * - 用于系统核心组件注册
 * - 确保配置数据的唯一性
 */
void InitializationSystem_RegistrySearchAndInsert4(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c940,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c940,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert5
 * 
 * 功能描述：初始化系统注册表搜索和插入器5
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_18098c918
 * 
 * 注意事项：
 * - 用于系统扩展组件注册
 * - 内存分配需要考虑对齐要求
 */
void InitializationSystem_RegistrySearchAndInsert5(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c918,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c918,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert6
 * 
 * 功能描述：初始化系统注册表搜索和插入器6
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置优先级为3
 * 
 * 注意事项：
 * - 配置数据指向DAT_18098c968
 * - 优先级3表示较高的启动优先级
 */
void InitializationSystem_RegistrySearchAndInsert6(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c968,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c968,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert7
 * 
 * 功能描述：初始化系统注册表搜索和插入器7
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置优先级为3
 * 
 * 注意事项：
 * - 配置数据指向DAT_18098c990
 * - 与RegistrySearchAndInsert6优先级相同
 */
void InitializationSystem_RegistrySearchAndInsert7(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c990,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c990,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert8
 * 
 * 功能描述：初始化系统注册表搜索和插入器8
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_180073930
 * 
 * 注意事项：
 * - 配置数据指向DAT_18098c8f0
 * - 用于系统关键组件注册
 */
void InitializationSystem_RegistrySearchAndInsert8(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c8f0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c8f0,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert9
 * 
 * 功能描述：初始化系统注册表搜索和插入器9
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置优先级为1
 * 
 * 注意事项：
 * - 配置数据指向DAT_18098c8c8
 * - 优先级1表示中等启动优先级
 */
void InitializationSystem_RegistrySearchAndInsert9(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_c8c8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_c8c8,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_ConfigRegistrationManager2
 * 
 * 功能描述：初始化系统配置注册管理器2
 * 负责处理系统配置的注册和管理，包括字符串复制和内存分配。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用strcpy_s进行安全的字符串复制
 * - 调用FUN_180623800进行内存分配和注册
 * - 设置配置标志为0x12
 * 
 * 注意事项：
 * - 与ConfigRegistrationManager1功能类似
 * - 配置数据来源不同
 */
void InitializationSystem_ConfigRegistrationManager2(void)
{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x12;
  strcpy_s(auStack_88,0x80,&unknown_var_4992_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}

/**
 * 函数名称：InitializationSystem_ConfigRegistrationManager3
 * 
 * 功能描述：初始化系统配置注册管理器3
 * 负责处理系统配置的注册和管理，包括字符串复制和内存分配。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用strcpy_s进行安全的字符串复制
 * - 调用FUN_180623800进行内存分配和注册
 * - 设置配置标志为8
 * 
 * 注意事项：
 * - 配置标志较小，表示较低优先级
 * - 配置数据指向UNK_180a24828
 */
void InitializationSystem_ConfigRegistrationManager3(void)
{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &unknown_var_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 8;
  strcpy_s(auStack_88,0x80,&unknown_var_6248_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = FUN_180623800(&puStack_a0);
  return;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert10
 * 
 * 功能描述：初始化系统注册表搜索和插入器10
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025cc00
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a010a0
 * - 用于系统渲染相关组件注册
 */
void InitializationSystem_RegistrySearchAndInsert10(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_10a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert11
 * 
 * 功能描述：初始化系统注册表搜索和插入器11
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025c000
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01078
 * - 设置优先级为4
 */
void InitializationSystem_RegistrySearchAndInsert11(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1078,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1078,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert12
 * 
 * 功能描述：初始化系统注册表搜索和插入器12
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a01050
 * 
 * 注意事项：
 * - 用于系统音频相关组件注册
 * - 优先级设置为0
 */
void InitializationSystem_RegistrySearchAndInsert12(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1050,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1050,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert13
 * 
 * 功能描述：初始化系统注册表搜索和插入器13
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025d270
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01028
 * - 用于系统网络相关组件注册
 */
void InitializationSystem_RegistrySearchAndInsert13(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1028,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1028,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert14
 * 
 * 功能描述：初始化系统注册表搜索和插入器14
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a01000
 * 
 * 注意事项：
 * - 用于系统核心基础组件注册
 * - 优先级设置为0
 */
void InitializationSystem_RegistrySearchAndInsert14(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1000,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert15
 * 
 * 功能描述：初始化系统注册表搜索和插入器15
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置特殊指针为UNK_1800868c0
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a00fd8
 * - 使用特殊指针处理
 */
void InitializationSystem_RegistrySearchAndInsert15(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fd8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert16
 * 
 * 功能描述：初始化系统注册表搜索和插入器16
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a00fb0
 * 
 * 注意事项：
 * - 用于系统扩展功能注册
 * - 优先级设置为0
 */
void InitializationSystem_RegistrySearchAndInsert16(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_GlobalDataInitializer2
 * 
 * 功能描述：初始化系统全局数据初始化器2
 * 负责设置系统的全局数据指针和配置。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   int - 返回初始化状态
 * 
 * 技术实现：
 * - 设置全局数据指针到特定地址
 * - 初始化系统配置结构
 * - 返回操作状态码
 * 
 * 注意事项：
 * - 与GlobalDataInitializer1功能类似
 * - 配置地址不同
 */
int InitializationSystem_GlobalDataInitializer2(void)
{
  longlong lVar1;
  uint64_t in_R9;
  
  init_system_control_ui = &unknown_var_3432_ptr;
  init_system_control_ui = &system_memory_a368;
  
  return lVar1;
}

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert17
 * 
 * 功能描述：初始化系统注册表搜索和插入器17
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025e330
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a00d48
 * - 用于系统高级功能注册
 */
void InitializationSystem_RegistrySearchAndInsert17(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_0d48,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0d48,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert18
 * 
 * 功能描述：初始化系统注册表搜索和插入器18
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025cc00
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a010a0
 * - 与RegistrySearchAndInsert10功能相同
 */
void InitializationSystem_RegistrySearchAndInsert18(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_10a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert19
 * 
 * 功能描述：初始化系统注册表搜索和插入器19
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025c000
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01078
 * - 与RegistrySearchAndInsert11功能相同
 */
void InitializationSystem_RegistrySearchAndInsert19(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1078,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1078,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert20
 * 
 * 功能描述：初始化系统注册表搜索和插入器20
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a01050
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01050
 * - 与RegistrySearchAndInsert12功能相同
 */
void InitializationSystem_RegistrySearchAndInsert20(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1050,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1050,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert21
 * 
 * 功能描述：初始化系统注册表搜索和插入器21
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置函数指针为FUN_18025d270
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01028
 * - 与RegistrySearchAndInsert13功能相同
 */
void InitializationSystem_RegistrySearchAndInsert21(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1028,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1028,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert22
 * 
 * 功能描述：初始化系统注册表搜索和插入器22
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a01000
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a01000
 * - 与RegistrySearchAndInsert14功能相同
 */
void InitializationSystem_RegistrySearchAndInsert22(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_1000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1000,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert23
 * 
 * 功能描述：初始化系统注册表搜索和插入器23
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 设置特殊指针为UNK_1800868c0
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a00fd8
 * - 与RegistrySearchAndInsert15功能相同
 */
void InitializationSystem_RegistrySearchAndInsert23(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fd8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
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

/**
 * 函数名称：InitializationSystem_RegistrySearchAndInsert24
 * 
 * 功能描述：初始化系统注册表搜索和插入器24
 * 在注册表中搜索特定配置项，如果不存在则插入新项。
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术实现：
 * - 使用链表遍历算法搜索注册表
 * - 通过memcmp比较配置数据
 * - 动态分配内存并插入新项
 * - 配置数据指向DAT_180a00fb0
 * 
 * 注意事项：
 * - 配置数据指向DAT_180a00fb0
 * - 与RegistrySearchAndInsert16功能相同
 */
void InitializationSystem_RegistrySearchAndInsert24(void)
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
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
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

// ============================================================================
// 函数别名定义（为了保持与原始代码的兼容性）
// ============================================================================

// 原始函数别名
#define FUN_18003acb0 InitializationSystem_ConfigRegistrationManager1
#define FUN_18003ad40 InitializationSystem_GlobalDataInitializer1
#define FUN_18003c1f0 InitializationSystem_RegistrySearchAndInsert1
#define FUN_18003c2f0 InitializationSystem_RegistrySearchAndInsert2
#define FUN_18003c3f0 InitializationSystem_RegistrySearchAndInsert3
#define FUN_18003c4f0 InitializationSystem_RegistrySearchAndInsert4
#define FUN_18003c5f0 InitializationSystem_RegistrySearchAndInsert5
#define FUN_18003c6f0 InitializationSystem_RegistrySearchAndInsert6
#define FUN_18003c7f0 InitializationSystem_RegistrySearchAndInsert7
#define FUN_18003c8f0 InitializationSystem_RegistrySearchAndInsert8
#define FUN_18003c9f0 InitializationSystem_RegistrySearchAndInsert9
#define FUN_18003cbf0 InitializationSystem_ConfigRegistrationManager2
#define FUN_18003cc80 InitializationSystem_ConfigRegistrationManager3
#define FUN_18003cd10 InitializationSystem_RegistrySearchAndInsert10
#define FUN_18003ce10 InitializationSystem_RegistrySearchAndInsert11
#define FUN_18003cf10 InitializationSystem_RegistrySearchAndInsert12
#define FUN_18003d010 InitializationSystem_RegistrySearchAndInsert13
#define FUN_18003d110 InitializationSystem_RegistrySearchAndInsert14
#define FUN_18003d210 InitializationSystem_RegistrySearchAndInsert15
#define FUN_18003d310 InitializationSystem_RegistrySearchAndInsert16
#define FUN_18003d410 InitializationSystem_GlobalDataInitializer2
#define FUN_18003de10 InitializationSystem_RegistrySearchAndInsert17
#define FUN_18003df10 InitializationSystem_RegistrySearchAndInsert18
#define FUN_18003e010 InitializationSystem_RegistrySearchAndInsert19
#define FUN_18003e110 InitializationSystem_RegistrySearchAndInsert20
#define FUN_18003e210 InitializationSystem_RegistrySearchAndInsert21
#define FUN_18003e310 InitializationSystem_RegistrySearchAndInsert22
#define FUN_18003e410 InitializationSystem_RegistrySearchAndInsert23

// ============================================================================
// 技术说明和实现细节
// ============================================================================

/**
 * 技术实现说明：
 * 
 * 1. 算法复杂度：
 *    - 所有RegistrySearchAndInsert函数都使用O(n)的链表遍历算法
 *    - memcmp操作为O(1)，因为比较固定大小的数据块
 *    - 整体性能在中小规模注册表下表现良好
 * 
 * 2. 内存管理：
 *    - 使用动态内存分配创建注册表项
 *    - 内存分配大小为lVar5 + 0x20字节
 *    - 需要确保内存分配失败的处理
 * 
 * 3. 数据结构：
 *    - 使用链表结构存储注册表项
 *    - 每个节点包含11个元素的数据结构
 *    - 第6和第7个元素存储哈希值用于快速比较
 *    - 第8个元素存储配置数据指针
 *    - 第9个元素存储优先级
 *    - 第10个元素存储函数指针
 * 
 * 4. 线程安全：
 *    - 当前实现未包含线程同步机制
 *    - 在多线程环境下需要添加适当的锁机制
 * 
 * 5. 错误处理：
 *    - 函数没有显式的错误返回值
 *    - 内存分配失败可能导致未定义行为
 *    - 建议添加错误检查和恢复机制
 * 
 * 6. 扩展性：
 *    - 可以通过修改配置数据支持更多类型的注册
 *    - 优先级系统支持灵活的启动顺序控制
 *    - 函数指针机制支持不同类型的初始化处理
 * 
 * 7. 性能优化建议：
 *    - 考虑使用哈希表替代链表以提高查找效率
 *    - 可以实现缓存机制避免重复搜索
 *    - 批量插入操作可以优化性能
 * 
 * 8. 使用场景：
 *    - 系统启动时的组件注册
 *    - 运行时的动态配置管理
 *    - 插件和扩展模块的注册
 *    - 系统服务的初始化顺序控制
 * 
 * 本模块为TaleWorlds.Native初始化系统的核心组件，
 * 负责管理系统组件的注册、配置和初始化顺序。
 */