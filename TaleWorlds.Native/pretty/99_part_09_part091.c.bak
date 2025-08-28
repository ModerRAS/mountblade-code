#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part091.c - 系统核心数据处理模块

/**
 * @file 99_part_09_part091.c
 * @brief 系统核心数据处理和状态管理模块
 * 
 * 本模块实现系统的核心数据处理功能，包括：
 * - 数据结构管理和操作
 * - 系统状态监控和控制
 * - 内存分配和释放管理
 * - 参数验证和错误处理
 * - 系统配置和初始化
 * - 缓存管理和优化
 * - 资源清理和维护
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// =============================================================================
// 系统常量定义
// =============================================================================

#define SYSTEM_MAX_DATA_SIZE 0xA0
#define SYSTEM_MAX_ITERATIONS 0xF
#define SYSTEM_DATA_BLOCK_SIZE 0x14
#define SYSTEM_MAX_BLOCKS 0xF
#define SYSTEM_OFFSET_STEP 0x20

// =============================================================================
// 类型别名定义
// =============================================================================

typedef longlong* DataPtr;
typedef void** ResourcePtr;
typedef uint64_t SystemFlags;
typedef int32_t SystemStatus;

// =============================================================================
// 系统结构体定义
// =============================================================================

/**
 * @brief 系统数据块结构体
 */
typedef struct {
    DataPtr data_ptr;
    uint64_t size;
    SystemFlags flags;
    ResourcePtr resource_ptr;
} SystemDataBlock;

/**
 * @brief 系统配置结构体
 */
typedef struct {
    uint64_t config_size;
    uint32_t max_blocks;
    uint32_t block_size;
    SystemFlags flags;
} SystemConfig;

// =============================================================================
// 系统枚举定义
// =============================================================================

/**
 * @brief 系统状态枚举
 */
typedef enum {
    SYSTEM_STATUS_READY = 0,
    SYSTEM_STATUS_PROCESSING = 1,
    SYSTEM_STATUS_ERROR = 2,
    SYSTEM_STATUS_CLEANUP = 3
} SystemState;

/**
 * @brief 系统操作类型枚举
 */
typedef enum {
    SYSTEM_OP_READ = 1,
    SYSTEM_OP_WRITE = 2,
    SYSTEM_OP_PROCESS = 3,
    SYSTEM_OP_CLEANUP = 4
} SystemOperation;

// =============================================================================
// 系统核心函数别名定义
// =============================================================================

/**
 * @brief 系统核心数据处理函数
 * @param data_ptr 数据指针，指向需要处理的数据结构
 * @note 这是系统的核心数据处理函数，负责复杂的数据操作和状态管理
 */
#define SystemCoreDataProcessor FUN_1805fb170

/**
 * @brief 系统内存管理器
 * @param buffer_ptr 缓冲区指针
 * @param size 分配大小
 * @param flags 分配标志
 * @param cleanup_func 清理函数指针
 * @note 负责系统内存的分配、管理和清理
 */
#define SystemMemoryManager SystemMemoryManager

/**
 * @brief 系统数据结构管理器
 * @param data_ptr 数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 处理结果
 * @note 负责复杂数据结构的操作和管理
 */
#define SystemDataStructureManager SystemDataStructureManager

/**
 * @brief 系统数据写入器
 * @param target_ptr 目标指针
 * @param offset 偏移量
 * @note 负责数据的写入操作
 */
#define SystemDataWriter SystemDataWriter

/**
 * @brief 系统资源清理器
 * @param resource_ptr 资源指针
 * @note 负责系统资源的清理和释放
 */
#define SystemResourceCleaner SystemResourceCleaner

/**
 * @brief 系统参数初始化器
 * @param param_ptr 参数指针
 * @param value 初始化值
 * @note 负责系统参数的初始化
 */
#define SystemParameterInitializer SystemParameterInitializer

/**
 * @brief 系统数据扩展器
 * @param data_ptr 数据指针
 * @param count 扩展数量
 * @note 负责数据结构的扩展操作
 */
#define SystemDataExpander SystemDataExpander

/**
 * @brief 系统数据处理器
 * @param data_ptr 数据指针
 * @param value 处理值
 * @param target_ptr 目标指针
 * @note 负责数据的处理和转换
 */
#define SystemDataProcessor SystemDataProcessor

/**
 * @brief 系统缓存管理器
 * @param cache_ptr 缓存指针
 * @param size 缓存大小
 * @param flags 缓存标志
 * @param cleanup_func 清理函数
 * @note 负责系统缓存的管理
 */
#define SystemCacheManager SystemCacheManager

/**
 * @brief 系统状态验证器
 * @param state 状态值
 * @param context 上下文指针
 * @return 验证结果
 * @note 负责系统状态的验证和检查
 */
#define SystemStateValidator FUN_1808fc050

/**
 * @brief 系统配置管理器
 * @param config_ptr 配置指针
 * @note 负责系统配置的管理和应用
 */
#define SystemConfigManager SystemConfigManager

// 函数: void SystemCoreDataProcessor(longlong *data_ptr)
void SystemCoreDataProcessor(longlong *data_ptr)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t *puVar4;
  int8_t auStack_b38 [32];
  void **ppuStack_b18;
  void **ppuStack_b10;
  void *puStack_b08;
  uint64_t *puStack_b00;
  int32_t uStack_af8;
  uint64_t uStack_af0;
  void *puStack_ae8;
  uint64_t *puStack_ae0;
  int32_t uStack_ad8;
  uint64_t uStack_ad0;
  void *puStack_ac8;
  uint64_t *puStack_ac0;
  int32_t uStack_ab8;
  uint64_t uStack_ab0;
  void *puStack_aa8;
  uint64_t *puStack_aa0;
  int32_t uStack_a98;
  uint64_t uStack_a90;
  void *puStack_a88;
  uint64_t *puStack_a80;
  int32_t uStack_a78;
  uint64_t uStack_a70;
  void **ppuStack_a68;
  void **ppuStack_a60;
  void **ppuStack_a58;
  void **ppuStack_a50;
  void **ppuStack_a48;
  int8_t auStack_a40 [160];
  uint64_t uStack_9a0;
  int8_t auStack_998 [32];
  int8_t auStack_978 [32];
  int8_t auStack_958 [32];
  int8_t auStack_938 [32];
  int8_t auStack_918 [32];
  int8_t auStack_8f8 [32];
  int8_t auStack_8d8 [32];
  int8_t auStack_8b8 [32];
  int8_t auStack_898 [32];
  int8_t auStack_878 [32];
  int8_t auStack_858 [32];
  int8_t auStack_838 [32];
  int8_t auStack_818 [32];
  int8_t auStack_7f8 [32];
  int8_t auStack_7d8 [32];
  int8_t auStack_7b8 [32];
  int8_t auStack_798 [32];
  int8_t auStack_778 [32];
  int8_t auStack_758 [32];
  int8_t auStack_738 [32];
  int8_t auStack_718 [32];
  int8_t auStack_6f8 [32];
  int8_t auStack_6d8 [32];
  int8_t auStack_6b8 [32];
  int8_t auStack_698 [32];
  int8_t auStack_678 [32];
  int8_t auStack_658 [32];
  int8_t auStack_638 [32];
  int8_t auStack_618 [32];
  int8_t auStack_5f8 [32];
  int8_t auStack_5d8 [32];
  int8_t auStack_5b8 [32];
  int8_t auStack_598 [32];
  int8_t auStack_578 [32];
  int8_t auStack_558 [32];
  int8_t auStack_538 [32];
  int8_t auStack_518 [32];
  int8_t auStack_4f8 [32];
  int8_t auStack_4d8 [32];
  int8_t auStack_4b8 [32];
  int8_t auStack_498 [32];
  int8_t auStack_478 [32];
  int8_t auStack_458 [32];
  int8_t auStack_438 [32];
  int8_t auStack_418 [32];
  int8_t auStack_3f8 [32];
  int8_t auStack_3d8 [32];
  int8_t auStack_3b8 [32];
  int8_t auStack_398 [32];
  int8_t auStack_378 [32];
  int8_t auStack_358 [32];
  int8_t auStack_338 [32];
  int8_t auStack_318 [32];
  int8_t auStack_2f8 [32];
  int8_t auStack_2d8 [32];
  int8_t auStack_2b8 [32];
  int8_t auStack_298 [32];
  int8_t auStack_278 [32];
  int8_t auStack_258 [32];
  int8_t auStack_238 [32];
  int8_t auStack_218 [32];
  int8_t auStack_1f8 [32];
  int8_t auStack_1d8 [32];
  int8_t auStack_1b8 [32];
  int8_t auStack_198 [32];
  int8_t auStack_178 [32];
  int8_t auStack_158 [32];
  int8_t auStack_138 [32];
  int8_t auStack_118 [32];
  int8_t auStack_f8 [32];
  int8_t auStack_d8 [32];
  int8_t auStack_b8 [32];
  int8_t auStack_98 [32];
  int8_t auStack_78 [32];
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_9a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b38;
  ppuStack_b18 = (void **)SystemResourceCleaner;
  SystemMemoryManager(auStack_998,0xa0,0xf,SystemConfigManager);
  ppuStack_a68 = &puStack_b08;
  lVar3 = 0;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,4);
  *(int32_t *)puStack_b00 = 0x61757161;
  *(int8_t *)((longlong)puStack_b00 + 4) = 0;
  uStack_af8 = 4;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,7);
  *puStack_ae0 = 0x6e617661726163;
  uStack_ad8 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,5);
  *(int32_t *)puStack_aa0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_aa0 + 4) = 0x65;
  uStack_a98 = 5;
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,8);
  *puStack_a80 = 0x7972746e61666e69;
  *(int8_t *)(puStack_a80 + 1) = 0;
  uStack_a78 = 8;
  ppuStack_b10 = &puStack_b08;
  ppuStack_b18 = &puStack_ae8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_a88,&puStack_aa8,&puStack_ac8);
  SystemDataWriter(auStack_998,lVar2);
  SystemDataWriter(auStack_978,lVar2 + 0x20);
  SystemDataWriter(auStack_958,lVar2 + 0x40);
  SystemDataWriter(auStack_938,lVar2 + 0x60);
  SystemDataWriter(auStack_918,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,8);
  *puStack_a80 = 0x6e6961746e756f6d;
  *(int8_t *)(puStack_a80 + 1) = 0;
  uStack_a78 = 8;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_8f8,lVar2);
  SystemDataWriter(auStack_8d8,lVar2 + 0x20);
  SystemDataWriter(auStack_8b8,lVar2 + 0x40);
  SystemDataWriter(auStack_898,lVar2 + 0x60);
  SystemDataWriter(auStack_878,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x776f6e73;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_858,lVar2);
  SystemDataWriter(auStack_838,lVar2 + 0x20);
  SystemDataWriter(auStack_818,lVar2 + 0x40);
  SystemDataWriter(auStack_7f8,lVar2 + 0x60);
  SystemDataWriter(auStack_7d8,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x64697261;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_7b8,lVar2);
  SystemDataWriter(auStack_798,lVar2 + 0x20);
  SystemDataWriter(auStack_778,lVar2 + 0x40);
  SystemDataWriter(auStack_758,lVar2 + 0x60);
  SystemDataWriter(auStack_738,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x6873756c;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_718,lVar2);
  SystemDataWriter(auStack_6f8,lVar2 + 0x20);
  SystemDataWriter(auStack_6d8,lVar2 + 0x40);
  SystemDataWriter(auStack_6b8,lVar2 + 0x60);
  SystemDataWriter(auStack_698,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x64697261;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_678,lVar2);
  SystemDataWriter(auStack_658,lVar2 + 0x20);
  SystemDataWriter(auStack_638,lVar2 + 0x40);
  SystemDataWriter(auStack_618,lVar2 + 0x60);
  SystemDataWriter(auStack_5f8,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x6873756c;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_5d8,lVar2);
  SystemDataWriter(auStack_5b8,lVar2 + 0x20);
  SystemDataWriter(auStack_598,lVar2 + 0x40);
  SystemDataWriter(auStack_578,lVar2 + 0x60);
  SystemDataWriter(auStack_558,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x64697261;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_538,lVar2);
  SystemDataWriter(auStack_518,lVar2 + 0x20);
  SystemDataWriter(auStack_4f8,lVar2 + 0x40);
  SystemDataWriter(auStack_4d8,lVar2 + 0x60);
  SystemDataWriter(auStack_4b8,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x61757161;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_498,lVar2);
  SystemDataWriter(auStack_478,lVar2 + 0x20);
  SystemDataWriter(auStack_458,lVar2 + 0x40);
  SystemDataWriter(auStack_438,lVar2 + 0x60);
  SystemDataWriter(auStack_418,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x61757161;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_3f8,lVar2);
  SystemDataWriter(auStack_3d8,lVar2 + 0x20);
  SystemDataWriter(auStack_3b8,lVar2 + 0x40);
  SystemDataWriter(auStack_398,lVar2 + 0x60);
  SystemDataWriter(auStack_378,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,6);
  *(int32_t *)puStack_a80 = 0x65726f62;
  *(int16_t *)((longlong)puStack_a80 + 4) = 0x6c61;
  *(int8_t *)((longlong)puStack_a80 + 6) = 0;
  uStack_a78 = 6;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_358,lVar2);
  SystemDataWriter(auStack_338,lVar2 + 0x20);
  SystemDataWriter(auStack_318,lVar2 + 0x40);
  SystemDataWriter(auStack_2f8,lVar2 + 0x60);
  SystemDataWriter(auStack_2d8,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x61757161;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_2b8,lVar2);
  SystemDataWriter(auStack_298,lVar2 + 0x20);
  SystemDataWriter(auStack_278,lVar2 + 0x40);
  SystemDataWriter(auStack_258,lVar2 + 0x60);
  SystemDataWriter(auStack_238,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x61757161;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_218,lVar2);
  SystemDataWriter(auStack_1f8,lVar2 + 0x20);
  SystemDataWriter(auStack_1d8,lVar2 + 0x40);
  SystemDataWriter(auStack_1b8,lVar2 + 0x60);
  SystemDataWriter(auStack_198,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,8);
  *puStack_a80 = 0x6e6961746e756f6d;
  *(int8_t *)(puStack_a80 + 1) = 0;
  uStack_a78 = 8;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_178,lVar2);
  SystemDataWriter(auStack_158,lVar2 + 0x20);
  SystemDataWriter(auStack_138,lVar2 + 0x40);
  SystemDataWriter(auStack_118,lVar2 + 0x60);
  SystemDataWriter(auStack_f8,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  ppuStack_a48 = &puStack_a88;
  puStack_a88 = &system_data_buffer_ptr;
  uStack_a70 = 0;
  puStack_a80 = (uint64_t *)0x0;
  uStack_a78 = 0;
  SystemParameterInitializer(&puStack_a88,4);
  *(int32_t *)puStack_a80 = 0x6873756c;
  *(int8_t *)((longlong)puStack_a80 + 4) = 0;
  uStack_a78 = 4;
  ppuStack_a50 = &puStack_aa8;
  puStack_aa8 = &system_data_buffer_ptr;
  uStack_a90 = 0;
  puStack_aa0 = (uint64_t *)0x0;
  uStack_a98 = 0;
  SystemParameterInitializer(&puStack_aa8,7);
  *puStack_aa0 = 0x6e617661726163;
  uStack_a98 = 7;
  ppuStack_a58 = &puStack_ac8;
  puStack_ac8 = &system_data_buffer_ptr;
  uStack_ab0 = 0;
  puStack_ac0 = (uint64_t *)0x0;
  uStack_ab8 = 0;
  SystemParameterInitializer(&puStack_ac8,10);
  *puStack_ac0 = 0x6c735f6573726f68;
  *(int16_t *)(puStack_ac0 + 1) = 0x776f;
  *(int8_t *)((longlong)puStack_ac0 + 10) = 0;
  uStack_ab8 = 10;
  ppuStack_a60 = &puStack_ae8;
  puStack_ae8 = &system_data_buffer_ptr;
  uStack_ad0 = 0;
  puStack_ae0 = (uint64_t *)0x0;
  uStack_ad8 = 0;
  SystemParameterInitializer(&puStack_ae8,5);
  *(int32_t *)puStack_ae0 = 0x73726f68;
  *(int16_t *)((longlong)puStack_ae0 + 4) = 0x65;
  uStack_ad8 = 5;
  ppuStack_a68 = &puStack_b08;
  puStack_b08 = &system_data_buffer_ptr;
  uStack_af0 = 0;
  puStack_b00 = (uint64_t *)0x0;
  uStack_af8 = 0;
  SystemParameterInitializer(&puStack_b08,8);
  *puStack_b00 = 0x7972746e61666e69;
  *(int8_t *)(puStack_b00 + 1) = 0;
  uStack_af8 = 8;
  ppuStack_b10 = &puStack_a88;
  ppuStack_b18 = &puStack_aa8;
  lVar2 = SystemDataStructureManager(auStack_a40,&puStack_b08,&puStack_ae8,&puStack_ac8);
  SystemDataWriter(auStack_d8,lVar2);
  SystemDataWriter(auStack_b8,lVar2 + 0x20);
  SystemDataWriter(auStack_98,lVar2 + 0x40);
  SystemDataWriter(auStack_78,lVar2 + 0x60);
  SystemDataWriter(auStack_58,lVar2 + 0x80);
  SystemResourceCleaner(auStack_a40);
  uVar1 = (param_1[1] - *param_1) / 0x14;
  if (uVar1 < 0xf) {
    SystemDataExpander(param_1,0xf - uVar1);
  }
  else {
    param_1[1] = *param_1 + 300;
  }
  puVar4 = auStack_998;
  lVar2 = 0xf;
  do {
    SystemDataProcessor(*param_1 + lVar3,puVar4);
    lVar3 = lVar3 + 0x14;
    puVar4 = puVar4 + 0xa0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  SystemCacheManager(auStack_998,0xa0,0xf,SystemResourceCleaner);
                    // WARNING: Subroutine does not return
  SystemStateValidator(uStack_38 ^ (ulonglong)auStack_b38);
}






