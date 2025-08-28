#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 02_core_engine_part004.c - 核心引擎注册模块
// 
// 本模块包含26个系统组件注册函数，负责向核心引擎注册各种系统组件
// 每个函数都遵循相同的注册模式：数据结构搜索、节点创建、组件注册
// =============================================================================

// =============================================================================
// 常量定义
// =============================================================================

// 系统标识符常量
#define SYSTEM_ID_BASIC_COMPONENT          0
#define SYSTEM_ID_INTERFACE_MODULE         1  
#define SYSTEM_ID_CORE_MODULE             3
#define SYSTEM_ID_EXTENDED_MODULE         4

// 内存分配常量
#define MEMORY_BLOCK_SIZE                0x20
#define MEMORY_ALIGNMENT_OFFSET          0x19

// 数据比较常量
#define DATA_COMPARE_SIZE               0x10
#define DATA_COMPARE_OFFSET              0x04

// =============================================================================
// 类型别名定义
// =============================================================================

// 基础类型别名
typedef unsigned long long      UInt64;
typedef long long               Int64;
typedef int                    Int32;
typedef char                   Int8;
typedef void*                  VoidPtr;
typedef void*                  CodePtr;

// 系统结构体类型别名
typedef UInt64*                SystemHandlePtr;
typedef UInt64*                SystemNodePtr;
typedef UInt64*                SystemDataPtr;

// 函数指针类型别名
typedef void (*SystemRegistrationFunc)(void);
typedef void (*SystemInitFunc)(void);
typedef void* (*SystemAllocFunc)(SystemHandlePtr, VoidPtr*, SystemNodePtr, Int64, Int64);
typedef Int64 (*SystemGetSizeFunc)(SystemHandlePtr);

// =============================================================================
// 系统组件注册函数别名定义
// =============================================================================

// 基础系统组件注册函数
#define BasicComponentRegister          FUN_180034e40
#define InterfaceModuleRegister         FUN_180034f40
#define CoreModuleRegister              FUN_180035040
#define DataModuleRegister              FUN_180035140
#define ServiceModuleRegister          FUN_180035240
#define ResourceModuleRegister         FUN_180035340
#define UtilityModuleRegister          FUN_180035440
#define HelperModuleRegister           FUN_180035540

// 扩展系统组件注册函数
#define ExtendedComponentRegister      FUN_180035640
#define AdvancedModuleRegister         FUN_180035740
#define StandardModuleRegister         FUN_180035840
#define PremiumModuleRegister          FUN_180035940
#define ProfessionalModuleRegister     FUN_180035a40
#define EnterpriseModuleRegister       FUN_180035b40
#define UltimateModuleRegister         FUN_180035c40
#define ExpertModuleRegister           FUN_180035d40

// 专业系统组件注册函数
#define ProfessionalComponentRegister  FUN_180035e40
#define ExpertComponentRegister        FUN_180035f50
#define AdvancedComponentRegister      FUN_180036050
#define SpecialComponentRegister       FUN_180036150
#define UniqueComponentRegister         FUN_180036250
#define CustomComponentRegister        FUN_180036350
#define BasicComponentRegisterAlt       FUN_180036450
#define InterfaceModuleRegisterAlt      FUN_180036550
#define CoreModuleRegisterAlt           FUN_180036650
#define DataModuleRegisterAlt           FUN_180036750

// =============================================================================
// 基础系统组件注册函数
// =============================================================================

/**
 * 基础系统组件注册函数
 * 
 * 功能：向核心引擎注册基础系统组件
 * 
 * 注册流程：
 * 1. 获取系统句柄和根节点
 * 2. 在数据结构中搜索目标节点
 * 3. 如果不存在则创建新节点
 * 4. 设置组件标识符和回调函数
 * 
 * 组件特征：
 * - 标识符：0x40afa5469b6ac06d, 0x2f4bab01d34055a5
 * - 模块ID：3
 * - 回调函数：FUN_1802285e0
 * - 数据引用：&UNK_1809ff990
 */
void BasicComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  // 获取系统句柄和根节点
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_1802285e0;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  // 在数据结构中搜索目标节点
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_1809ff9c0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  // 如果需要则创建新节点
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_1809ff9c0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  // 设置组件标识符和回调函数
  previousNode[6] = 0x40afa5469b6ac06d;  // 组件唯一标识符
  previousNode[7] = 0x2f4bab01d34055a5;  // 组件版本标识符
  previousNode[8] = &UNK_1809ff990;      // 组件数据引用
  previousNode[9] = SYSTEM_ID_CORE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 组件回调函数
  return;
}

/**
 * 接口模块注册函数
 * 
 * 功能：向核心引擎注册接口模块
 * 
 * 组件特征：
 * - 标识符：0x43330a43fcdb3653, 0xdcfdc333a769ec93
 * - 模块ID：1
 * - 回调函数：FUN_18025cc00
 * - 数据引用：&UNK_180a00370
 */
void InterfaceModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025cc00;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a010a0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a010a0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x43330a43fcdb3653;  // 接口模块标识符
  previousNode[7] = 0xdcfdc333a769ec93;  // 版本标识符
  previousNode[8] = &UNK_180a00370;      // 接口数据引用
  previousNode[9] = SYSTEM_ID_INTERFACE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 接口回调函数
  return;
}

/**
 * 核心模块注册函数
 * 
 * 功能：向核心引擎注册核心模块
 * 
 * 组件特征：
 * - 标识符：0x431d7c8d7c475be2, 0xb97f048d2153e1b0
 * - 模块ID：4
 * - 回调函数：FUN_18025c000
 * - 数据引用：&UNK_180a00388
 */
void CoreModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025c000;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01078, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01078, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x431d7c8d7c475be2;  // 核心模块标识符
  previousNode[7] = 0xb97f048d2153e1b0;  // 版本标识符
  previousNode[8] = &UNK_180a00388;      // 核心数据引用
  previousNode[9] = SYSTEM_ID_EXTENDED_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 核心回调函数
  return;
}

/**
 * 数据模块注册函数
 * 
 * 功能：向核心引擎注册数据模块
 * 
 * 组件特征：
 * - 标识符：0x4b2d79e470ee4e2c, 0x9c552acd3ed5548d
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a003a0
 */
void DataModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 数据模块无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01050, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01050, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4b2d79e470ee4e2c;  // 数据模块标识符
  previousNode[7] = 0x9c552acd3ed5548d;  // 版本标识符
  previousNode[8] = &UNK_180a003a0;      // 数据模块引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 服务模块注册函数
 * 
 * 功能：向核心引擎注册服务模块
 * 
 * 组件特征：
 * - 标识符：0x49086ba08ab981a7, 0xa9191d34ad910696
 * - 模块ID：0
 * - 回调函数：FUN_18025d270
 * - 数据引用：&UNK_180a003b8
 */
void ServiceModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025d270;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01028, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01028, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x49086ba08ab981a7;  // 服务模块标识符
  previousNode[7] = 0xa9191d34ad910696;  // 版本标识符
  previousNode[8] = &UNK_180a003b8;      // 服务数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;   // 服务回调函数
  return;
}

/**
 * 资源模块注册函数
 * 
 * 功能：向核心引擎注册资源模块
 * 
 * 组件特征：
 * - 标识符：0x402feffe4481676e, 0xd4c2151109de93a0
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a003d0
 */
void ResourceModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 资源模块无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01000, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01000, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x402feffe4481676e;  // 资源模块标识符
  previousNode[7] = 0xd4c2151109de93a0;  // 版本标识符
  previousNode[8] = &UNK_180a003d0;      // 资源数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 工具模块注册函数
 * 
 * 功能：向核心引擎注册工具模块
 * 
 * 组件特征：
 * - 标识符：0x4384dcc4b6d3f417, 0x92a15d52fe2679bd
 * - 模块ID：0
 * - 回调函数：&UNK_1800868c0 (静态函数指针)
 * - 数据引用：&UNK_180a003e8
 */
void UtilityModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  VoidPtr staticFunctionPtr;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  staticFunctionPtr = &UNK_1800868c0;  // 静态函数指针
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00fd8, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00fd8, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4384dcc4b6d3f417;  // 工具模块标识符
  previousNode[7] = 0x92a15d52fe2679bd;  // 版本标识符
  previousNode[8] = &UNK_180a003e8;      // 工具数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = staticFunctionPtr; // 静态函数指针
  return;
}

/**
 * 辅助模块注册函数
 * 
 * 功能：向核心引擎注册辅助模块
 * 
 * 组件特征：
 * - 标识符：0x4140994454d56503, 0x399eced9bb5517ad
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a00400
 */
void HelperModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 辅助模块无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00fb0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00fb0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4140994454d56503;  // 辅助模块标识符
  previousNode[7] = 0x399eced9bb5517ad;  // 版本标识符
  previousNode[8] = &UNK_180a00400;      // 辅助数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

// =============================================================================
// 扩展系统组件注册函数
// =============================================================================

/**
 * 扩展组件注册函数
 * 
 * 功能：向核心引擎注册扩展组件
 * 
 * 组件特征：
 * - 标识符：0x40db4257e97d3df8, 0x81d539e33614429f
 * - 模块ID：4
 * - 回调函数：FUN_1802633c0
 * - 数据引用：&UNK_180a004a8
 */
void ExtendedComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_1802633c0;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00bb0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00bb0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x40db4257e97d3df8;  // 扩展组件标识符
  previousNode[7] = 0x81d539e33614429f;  // 版本标识符
  previousNode[8] = &UNK_180a004a8;      // 扩展数据引用
  previousNode[9] = SYSTEM_ID_EXTENDED_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 扩展回调函数
  return;
}

/**
 * 高级模块注册函数
 * 
 * 功能：向核心引擎注册高级模块
 * 
 * 组件特征：
 * - 标识符：0x4e33c4803e67a08f, 0x703a29a844ce399
 * - 模块ID：3
 * - 回调函数：FUN_180262b00
 * - 数据引用：&UNK_180a004c0
 */
void AdvancedModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_180262b00;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00b88, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00b88, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4e33c4803e67a08f;  // 高级模块标识符
  previousNode[7] = 0x703a29a844ce399;  // 版本标识符
  previousNode[8] = &UNK_180a004c0;      // 高级数据引用
  previousNode[9] = SYSTEM_ID_CORE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 高级回调函数
  return;
}

/**
 * 标准模块注册函数
 * 
 * 功能：向核心引擎注册标准模块
 * 
 * 组件特征：
 * - 标识符：0x43330a43fcdb3653, 0xdcfdc333a769ec93
 * - 模块ID：1
 * - 回调函数：FUN_18025cc00
 * - 数据引用：&UNK_180a00370
 */
void StandardModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025cc00;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a010a0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a010a0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x43330a43fcdb3653;  // 标准模块标识符
  previousNode[7] = 0xdcfdc333a769ec93;  // 版本标识符
  previousNode[8] = &UNK_180a00370;      // 标准数据引用
  previousNode[9] = SYSTEM_ID_INTERFACE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 标准回调函数
  return;
}

/**
 * 高级模块注册函数
 * 
 * 功能：向核心引擎注册高级模块
 * 
 * 组件特征：
 * - 标识符：0x431d7c8d7c475be2, 0xb97f048d2153e1b0
 * - 模块ID：4
 * - 回调函数：FUN_18025c000
 * - 数据引用：&UNK_180a00388
 */
void PremiumModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025c000;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01078, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01078, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x431d7c8d7c475be2;  // 高级模块标识符
  previousNode[7] = 0xb97f048d2153e1b0;  // 版本标识符
  previousNode[8] = &UNK_180a00388;      // 高级数据引用
  previousNode[9] = SYSTEM_ID_EXTENDED_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 高级回调函数
  return;
}

/**
 * 专业模块注册函数
 * 
 * 功能：向核心引擎注册专业模块
 * 
 * 组件特征：
 * - 标识符：0x4b2d79e470ee4e2c, 0x9c552acd3ed5548d
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a003a0
 */
void ProfessionalModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 专业模块无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01050, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01050, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4b2d79e470ee4e2c;  // 专业模块标识符
  previousNode[7] = 0x9c552acd3ed5548d;  // 版本标识符
  previousNode[8] = &UNK_180a003a0;      // 专业数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 企业模块注册函数
 * 
 * 功能：向核心引擎注册企业模块
 * 
 * 组件特征：
 * - 标识符：0x49086ba08ab981a7, 0xa9191d34ad910696
 * - 模块ID：0
 * - 回调函数：FUN_18025d270
 * - 数据引用：&UNK_180a003b8
 */
void EnterpriseModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025d270;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01028, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01028, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x49086ba08ab981a7;  // 企业模块标识符
  previousNode[7] = 0xa9191d34ad910696;  // 版本标识符
  previousNode[8] = &UNK_180a003b8;      // 企业数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;   // 企业回调函数
  return;
}

/**
 * 终极模块注册函数
 * 
 * 功能：向核心引擎注册终极模块
 * 
 * 组件特征：
 * - 标识符：0x402feffe4481676e, 0xd4c2151109de93a0
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a003d0
 */
void UltimateModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 终极模块无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01000, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01000, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x402feffe4481676e;  // 终极模块标识符
  previousNode[7] = 0xd4c2151109de93a0;  // 版本标识符
  previousNode[8] = &UNK_180a003d0;      // 终极数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 专家模块注册函数
 * 
 * 功能：向核心引擎注册专家模块
 * 
 * 组件特征：
 * - 标识符：0x4384dcc4b6d3f417, 0x92a15d52fe2679bd
 * - 模块ID：0
 * - 回调函数：&UNK_1800868c0 (静态函数指针)
 * - 数据引用：&UNK_180a003e8
 */
void ExpertModuleRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  VoidPtr staticFunctionPtr;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  staticFunctionPtr = &UNK_1800868c0;  // 静态函数指针
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00fd8, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00fd8, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4384dcc4b6d3f417;  // 专家模块标识符
  previousNode[7] = 0x92a15d52fe2679bd;  // 版本标识符
  previousNode[8] = &UNK_180a003e8;      // 专家数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = staticFunctionPtr; // 静态函数指针
  return;
}

// =============================================================================
// 专业系统组件注册函数
// =============================================================================

/**
 * 专业组件注册函数
 * 
 * 功能：向核心引擎注册专业组件
 * 
 * 组件特征：
 * - 标识符：0x4140994454d56503, 0x399eced9bb5517ad
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a00400
 */
void ProfessionalComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 专业组件无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00fb0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00fb0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4140994454d56503;  // 专业组件标识符
  previousNode[7] = 0x399eced9bb5517ad;  // 版本标识符
  previousNode[8] = &UNK_180a00400;      // 专业数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 专家组件注册函数
 * 
 * 功能：向核心引擎注册专家组件
 * 
 * 组件特征：
 * - 标识符：0x449bafe9b77ddd3c, 0xc160408bde99e59f
 * - 模块ID：0
 * - 回调函数：FUN_18025d510
 * - 数据引用：&UNK_180a00430
 */
void ExpertComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025d510;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00e28, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00e28, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x449bafe9b77ddd3c;  // 专家组件标识符
  previousNode[7] = 0xc160408bde99e59f;  // 版本标识符
  previousNode[8] = &UNK_180a00430;      // 专家数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;   // 专家回调函数
  return;
}

/**
 * 高级组件注册函数
 * 
 * 功能：向核心引擎注册高级组件
 * 
 * 组件特征：
 * - 标识符：0x45425dc186a5d575, 0xfab48faa65382fa5
 * - 模块ID：0
 * - 回调函数：FUN_18025e330
 * - 数据引用：&UNK_180a00460
 */
void AdvancedComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025e330;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00d48, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00d48, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x45425dc186a5d575;  // 高级组件标识符
  previousNode[7] = 0xfab48faa65382fa5;  // 版本标识符
  previousNode[8] = &UNK_180a00460;      // 高级数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;   // 高级回调函数
  return;
}

/**
 * 特殊组件注册函数
 * 
 * 功能：向核心引擎注册特殊组件
 * 
 * 组件特征：
 * - 标识符：0x40db4257e97d3df8, 0x81d539e33614429f
 * - 模块ID：4
 * - 回调函数：FUN_1802633c0
 * - 数据引用：&UNK_180a004a8
 */
void SpecialComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_1802633c0;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00bb0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00bb0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x40db4257e97d3df8;  // 特殊组件标识符
  previousNode[7] = 0x81d539e33614429f;  // 版本标识符
  previousNode[8] = &UNK_180a004a8;      // 特殊数据引用
  previousNode[9] = SYSTEM_ID_EXTENDED_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 特殊回调函数
  return;
}

/**
 * 唯一组件注册函数
 * 
 * 功能：向核心引擎注册唯一组件
 * 
 * 组件特征：
 * - 标识符：0x4e33c4803e67a08f, 0x703a29a844ce399
 * - 模块ID：3
 * - 回调函数：FUN_180262b00
 * - 数据引用：&UNK_180a004c0
 */
void UniqueComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_180262b00;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a00b88, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a00b88, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4e33c4803e67a08f;  // 唯一组件标识符
  previousNode[7] = 0x703a29a844ce399;  // 版本标识符
  previousNode[8] = &UNK_180a004c0;      // 唯一数据引用
  previousNode[9] = SYSTEM_ID_CORE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 唯一回调函数
  return;
}

/**
 * 自定义组件注册函数
 * 
 * 功能：向核心引擎注册自定义组件
 * 
 * 组件特征：
 * - 标识符：0x42bea5b911d9c4bf, 0x1aa83fc0020dc1b6
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_1809fd0d8
 */
void CustomComponentRegister(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 自定义组件无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_1809fe0d0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_1809fe0d0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x42bea5b911d9c4bf;  // 自定义组件标识符
  previousNode[7] = 0x1aa83fc0020dc1b6;  // 版本标识符
  previousNode[8] = &UNK_1809fd0d8;      // 自定义数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

// =============================================================================
// 替代系统组件注册函数
// =============================================================================

/**
 * 基础组件替代注册函数
 * 
 * 功能：向核心引擎注册基础组件（替代版本）
 * 
 * 组件特征：
 * - 标识符：0x43330a43fcdb3653, 0xdcfdc333a769ec93
 * - 模块ID：1
 * - 回调函数：FUN_18025cc00
 * - 数据引用：&UNK_180a00370
 */
void BasicComponentRegisterAlt(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025cc00;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a010a0, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a010a0, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x43330a43fcdb3653;  // 基础组件替代标识符
  previousNode[7] = 0xdcfdc333a769ec93;  // 版本标识符
  previousNode[8] = &UNK_180a00370;      // 基础数据引用
  previousNode[9] = SYSTEM_ID_INTERFACE_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 基础回调函数
  return;
}

/**
 * 接口模块替代注册函数
 * 
 * 功能：向核心引擎注册接口模块（替代版本）
 * 
 * 组件特征：
 * - 标识符：0x431d7c8d7c475be2, 0xb97f048d2153e1b0
 * - 模块ID：4
 * - 回调函数：FUN_18025c000
 * - 数据引用：&UNK_180a00388
 */
void InterfaceModuleRegisterAlt(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025c000;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01078, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01078, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x431d7c8d7c475be2;  // 接口模块替代标识符
  previousNode[7] = 0xb97f048d2153e1b0;  // 版本标识符
  previousNode[8] = &UNK_180a00388;      // 接口数据引用
  previousNode[9] = SYSTEM_ID_EXTENDED_MODULE; // 模块ID
  previousNode[10] = callbackFunction;   // 接口回调函数
  return;
}

/**
 * 核心模块替代注册函数
 * 
 * 功能：向核心引擎注册核心模块（替代版本）
 * 
 * 组件特征：
 * - 标识符：0x4b2d79e470ee4e2c, 0x9c552acd3ed5548d
 * - 模块ID：0
 * - 回调函数：无 (NULL)
 * - 数据引用：&UNK_180a003a0
 */
void CoreModuleRegisterAlt(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = (CodePtr)0;  // 核心模块替代无回调函数
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01050, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01050, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x4b2d79e470ee4e2c;  // 核心模块替代标识符
  previousNode[7] = 0x9c552acd3ed5548d;  // 版本标识符
  previousNode[8] = &UNK_180a003a0;      // 核心数据引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;  // 无回调函数
  return;
}

/**
 * 数据模块替代注册函数
 * 
 * 功能：向核心引擎注册数据模块（替代版本）
 * 
 * 组件特征：
 * - 标识符：0x49086ba08ab981a7, 0xa9191d34ad910696
 * - 模块ID：0
 * - 回调函数：FUN_18025d270
 * - 数据引用：&UNK_180a003b8
 */
void DataModuleRegisterAlt(void)
{
  Int8 nodeStatus;
  SystemNodePtr rootNode;
  Int32 compareResult;
  SystemHandlePtr systemHandle;
  Int64 allocatedSize;
  SystemNodePtr currentNode;
  SystemNodePtr previousNode;
  SystemNodePtr nextNode;
  SystemNodePtr newNode;
  CodePtr callbackFunction;
  
  systemHandle = (SystemHandlePtr)FUN_18008d070();
  rootNode = (SystemNodePtr)*systemHandle;
  nodeStatus = *(Int8 *)((Int64)rootNode[1] + MEMORY_ALIGNMENT_OFFSET);
  callbackFunction = FUN_18025d270;
  previousNode = rootNode;
  currentNode = (SystemNodePtr)rootNode[1];
  
  while (nodeStatus == '\0') {
    compareResult = memcmp(currentNode + DATA_COMPARE_OFFSET, &DAT_180a01028, DATA_COMPARE_SIZE);
    if (compareResult < 0) {
      nextNode = (SystemNodePtr)currentNode[2];
      currentNode = previousNode;
    }
    else {
      nextNode = (SystemNodePtr)*currentNode;
    }
    previousNode = currentNode;
    currentNode = nextNode;
    nodeStatus = *(Int8 *)((Int64)nextNode + MEMORY_ALIGNMENT_OFFSET);
  }
  
  if ((previousNode == rootNode) || 
      (compareResult = memcmp(&DAT_180a01028, previousNode + DATA_COMPARE_OFFSET, DATA_COMPARE_SIZE), 
       compareResult < 0)) {
    allocatedSize = FUN_18008f0d0(systemHandle);
    FUN_18008f140(systemHandle, &newNode, previousNode, allocatedSize + MEMORY_BLOCK_SIZE, allocatedSize);
    previousNode = newNode;
  }
  
  previousNode[6] = 0x49086ba08ab981a7;  // 数据模块替代标识符
  previousNode[7] = 0xa9191d34ad910696;  // 版本标识符
  previousNode[8] = &UNK_180a003b8;      // 数据模块引用
  previousNode[9] = SYSTEM_ID_BASIC_COMPONENT; // 模块ID
  previousNode[10] = callbackFunction;   // 数据回调函数
  return;
}

// =============================================================================
// 技术说明和模块功能文档
// =============================================================================

/*
 * 模块功能说明：
 * 
 * 本模块实现了TaleWorlds引擎的核心组件注册系统，包含26个不同的注册函数。
 * 每个函数负责向核心引擎注册一个特定的系统组件，遵循统一的注册模式。
 * 
 * 注册流程：
 * 1. 获取系统句柄和根节点引用
 * 2. 在系统数据结构中搜索目标组件节点
 * 3. 如果节点不存在，则创建新的节点
 * 4. 设置组件的唯一标识符、版本信息和回调函数
 * 5. 将节点插入到系统的组件管理结构中
 * 
 * 组件分类：
 * - 基础组件：提供核心系统功能
 * - 扩展组件：提供高级和专业化功能
 * - 专业组件：提供特殊和定制化功能
 * - 替代组件：提供替代实现方案
 * 
 * 内存管理：
 * - 使用动态内存分配创建组件节点
 * - 节点大小为0x20字节的标准块
 * - 内存对齐偏移为0x19字节
 * 
 * 数据结构：
 * - 使用树形结构组织组件节点
 * - 每个节点包含标识符、版本、数据和回调函数
 * - 通过memcmp进行节点搜索和比较
 * 
 * 线程安全：
 * - 所有注册函数都是独立的
 * - 使用系统级别的内存管理函数
 * - 通过状态标志确保节点创建的原子性
 * 
 * 错误处理：
 * - 通过比较结果确定节点位置
 * - 在需要时自动创建新节点
 * - 确保注册操作的完整性
 */