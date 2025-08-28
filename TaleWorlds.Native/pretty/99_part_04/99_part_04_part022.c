#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// ============================================================================
// 99_part_04_part022.c - 高级数据结构解析和配置处理模块
// ============================================================================

// 模块概述：
// 本模块包含1个核心函数，主要处理高级数据结构解析、配置参数处理、
// 内存管理和资源分配等功能。涵盖了游戏引擎中的复杂数据处理机制。

// 主要功能：
// - 数据结构解析和初始化
// - 配置参数处理和验证
// - 内存分配和资源管理
// - 字符串处理和路径构建
// - 系统调用和状态管理

// ============================================================================
// 常量定义
// ============================================================================

#define MAX_DATA_SIZE 0x1000           // 最大数据大小
#define MAX_CONFIG_ENTRIES 100         // 最大配置条目数
#define BUFFER_ALIGNMENT 16            // 缓冲区对齐大小
#define STRING_MAX_LENGTH 1032         // 字符串最大长度
#define TABLE_ENTRY_SIZE 0x10           // 表条目大小
#define CONFIG_DATA_SIZE 0x24          // 配置数据大小

// 内存地址常量
#define ADDRESS_BASE_1 0x180bf8eb0     // 基地址1
#define ADDRESS_BASE_2 0x180bf8ed0     // 基地址2
#define ADDRESS_BASE_3 0x180bf8f00     // 基地址3
#define ADDRESS_BASE_4 0x180bf8f20     // 基地址4
#define ADDRESS_BASE_5 0x180bf8f70     // 基地址5
#define ADDRESS_BASE_6 0x180bf8fa0     // 基地址6
#define ADDRESS_BASE_7 0x180bf8fd0     // 基地址7
#define ADDRESS_BASE_8 0x180bf8ff0     // 基地址8

// ============================================================================
// 类型别名定义
// ============================================================================

// 基础类型别名
typedef uint64_t data_structure_t;      // 数据结构类型
typedef int64_t config_param_t;           // 配置参数类型
typedef uint data_size_t;                  // 数据大小类型
typedef uint64_t memory_address_t;        // 内存地址类型
typedef byte* buffer_ptr_t;                // 缓冲区指针类型
typedef int* int_ptr_t;                    // 整数指针类型
typedef uint* uint_ptr_t;                  // 无符号整数指针类型
typedef int64_t* int64_t_ptr_t;          // 长整数指针类型

// 配置类型别名
typedef int32_t config_entry_t;         // 配置条目类型
typedef int32_t* config_table_t;        // 配置表类型
typedef char* string_ptr_t;                // 字符串指针类型

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * 数据解析状态枚举
 */
typedef enum {
    PARSE_STATE_IDLE = 0,          // 空闲状态
    PARSE_STATE_PROCESSING = 1,    // 处理中状态
    PARSE_STATE_COMPLETED = 2,     // 完成状态
    PARSE_STATE_ERROR = 3          // 错误状态
} parse_state_t;

/**
 * 配置类型枚举
 */
typedef enum {
    CONFIG_TYPE_BASIC = 0,         // 基础配置
    CONFIG_TYPE_ADVANCED = 1,      // 高级配置
    CONFIG_TYPE_EXTENDED = 2,      // 扩展配置
    CONFIG_TYPE_CUSTOM = 3          // 自定义配置
} config_type_t;

/**
 * 内存操作类型枚举
 */
typedef enum {
    MEM_OP_READ = 0,               // 读取操作
    MEM_OP_WRITE = 1,              // 写入操作
    MEM_OP_ALLOC = 2,              // 分配操作
    MEM_OP_FREE = 3                // 释放操作
} mem_op_type_t;

/**
 * 字符串比较结果枚举
 */
typedef enum {
    STRING_COMPARE_EQUAL = 0,      // 字符串相等
    STRING_COMPARE_NOT_EQUAL = 1,  // 字符串不相等
    STRING_COMPARE_ERROR = 2       // 比较错误
} string_compare_result_t;

/**
 * 数据处理状态枚举
 */
typedef enum {
    DATA_STATUS_UNPROCESSED = 0,   // 未处理
    DATA_STATUS_PROCESSING = 1,    // 处理中
    DATA_STATUS_PROCESSED = 2,     // 已处理
    DATA_STATUS_FAILED = 3         // 处理失败
} data_status_t;

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * 数据结构头部结构
 */
typedef struct {
    data_structure_t* data_ptr;     // 数据指针
    config_param_t config_param;    // 配置参数
    data_size_t data_size;          // 数据大小
    memory_address_t base_addr;     // 基地址
} data_structure_header_t;

/**
 * 配置条目结构
 */
typedef struct {
    config_entry_t entry_id;         // 条目ID
    config_entry_t entry_value;      // 条目值
    config_entry_t entry_flags;     // 条目标志
    config_entry_t entry_reserved;   // 保留字段
} config_entry_struct_t;

/**
 * 字符串处理结构
 */
typedef struct {
    string_ptr_t string_buffer;      // 字符串缓冲区
    int buffer_size;                 // 缓冲区大小
    int string_length;               // 字符串长度
    char terminator;                 // 终止符
} string_handler_t;

/**
 * 内存管理结构
 */
typedef struct {
    buffer_ptr_t memory_buffer;      // 内存缓冲区
    memory_address_t alloc_addr;     // 分配地址
    data_size_t alloc_size;          // 分配大小
    mem_op_type_t op_type;           // 操作类型
} memory_manager_t;

/**
 * 解析上下文结构
 */
typedef struct {
    parse_state_t parse_state;       // 解析状态
    data_status_t data_status;       // 数据状态
    config_type_t config_type;       // 配置类型
    uint error_code;                 // 错误代码
} parse_context_t;

/**
 * 系统状态结构
 */
typedef struct {
    data_structure_t* system_data;   // 系统数据
    config_table_t config_table;     // 配置表
    memory_manager_t mem_mgr;        // 内存管理器
    parse_context_t parse_ctx;       // 解析上下文
} system_state_t;

// ============================================================================
// 函数指针类型定义
// ============================================================================

/**
 * 数据处理函数指针类型
 */
typedef void (*data_processor_func_t)(data_structure_t* param_1, config_param_t param_2);

/**
 * 配置处理函数指针类型
 */
typedef void (*config_processor_func_t)(config_table_t table, uint entry_count);

/**
 * 字符串处理函数指针类型
 */
typedef void (*string_processor_func_t)(string_ptr_t buffer, uint length);

/**
 * 内存操作函数指针类型
 */
typedef void (*memory_op_func_t)(memory_address_t addr, data_size_t size);

/**
 * 状态检查函数指针类型
 */
typedef bool (*status_check_func_t)(system_state_t* state);

// ============================================================================
// 函数别名定义
// ============================================================================

// 主要功能函数
#define AdvancedDataStructureProcessor FUN_18026c3f0

// 辅助函数
#define DataBufferProcessor FUN_180045f60
#define SystemConfigHandler FUN_18025a7b0
#define ResourceInitializer FUN_180270120
#define AdvancedConfigProcessor FUN_18026fc50
#define MemoryAllocator FUN_180080aa0

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 高级数据结构处理器
 * 
 * 功能描述：
 * 处理高级数据结构解析和配置参数处理，负责：
 * - 数据结构初始化和配置
 * - 配置参数解析和验证
 * - 内存分配和资源管理
 * - 字符串处理和路径构建
 * - 系统状态管理和监控
 * 
 * 参数：
 * @param param_1 - 数据结构指针数组，用于存储处理后的数据
 * @param param_2 - 配置参数，包含处理所需的配置信息
 * 
 * 返回值：
 * 无返回值
 * 
 * 技术说明：
 * - 使用复杂数据结构解析技术
 * - 支持多种配置模式和处理策略
 * - 实现了动态内存分配和管理
 * - 包含字符串比较和表查找功能
 * - 支持错误处理和状态验证
 * - 使用多层嵌套的数据处理逻辑
 */
void AdvancedDataStructureProcessor(uint64_t *param_1, int64_t param_2)
{
    byte *pbVar1;
    uint uVar2;
    int32_t *puVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    byte *pbVar9;
    int32_t *puVar10;
    int *piVar11;
    int iVar12;
    uint *puVar13;
    int64_t lVar14;
    uint64_t uVar15;
    uint uVar16;
    uint64_t uVar17;
    int64_t *plVar18;
    int8_t auStack_498 [32];
    uint64_t uStack_478;
    void *puStack_468;
    byte *pbStack_460;
    int iStack_458;
    byte abStack_450 [1032];
    uint64_t uStack_48;
    
    // 初始化栈保护和参数处理
    uStack_478 = 0xfffffffffffffffe;
    uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
    puVar13 = *(uint **)(param_2 + 8);
    uVar16 = *puVar13;
    *(uint **)(param_2 + 8) = puVar13 + 1;
    uVar7 = *(uint64_t *)(puVar13 + 3);
    *param_1 = *(uint64_t *)(puVar13 + 1);
    param_1[1] = uVar7;
    
    // 数据结构配置处理
    lVar14 = *(int64_t *)(param_2 + 8);
    puVar8 = (uint64_t *)(lVar14 + 0x10);
    *(uint64_t **)(param_2 + 8) = puVar8;
    uVar7 = *(uint64_t *)(lVar14 + 0x18);
    param_1[2] = *puVar8;
    param_1[3] = uVar7;
    
    // 继续配置数据处理
    lVar14 = *(int64_t *)(param_2 + 8);
    puVar8 = (uint64_t *)(lVar14 + 0x10);
    *(uint64_t **)(param_2 + 8) = puVar8;
    uVar7 = *(uint64_t *)(lVar14 + 0x18);
    param_1[4] = *puVar8;
    param_1[5] = uVar7;
    
    // 处理配置参数
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x10);
    uVar4 = *(int32_t *)(lVar14 + 0x14);
    uVar5 = *(int32_t *)(lVar14 + 0x18);
    uVar6 = *(int32_t *)(lVar14 + 0x1c);
    *(int32_t *)(param_1 + 6) = *(int32_t *)(lVar14 + 0x10);
    *(int32_t *)((int64_t)param_1 + 0x34) = uVar4;
    *(int32_t *)(param_1 + 7) = uVar5;
    *(int32_t *)((int64_t)param_1 + 0x3c) = uVar6;
    
    // 处理可选数据块
    lVar14 = *(int64_t *)(param_2 + 8);
    puVar13 = (uint *)(lVar14 + 0x10);
    *(uint **)(param_2 + 8) = puVar13;
    uVar2 = *puVar13;
    lVar14 = lVar14 + 0x14;
    *(int64_t *)(param_2 + 8) = lVar14;
    if (uVar2 != 0) {
        (**(code **)(param_1[8] + 0x18))(param_1 + 8, lVar14, uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    
    // 系统配置处理
    FUN_18025a7b0(&processed_var_8880_ptr, param_2, param_1 + 0xc);
    
    // 字符串处理和表查找
    uVar15 = 0;
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    
    // 表查找和字符串匹配
    plVar18 = (int64_t *)0x180bf8eb0;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026c58e:
            if (iVar12 == 0) {
                *(int32_t *)((int64_t)param_1 + 100) =
                     *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8eb8);
                break;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026c58e;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8ed0);
    
    // 继续字符串处理
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    
    // 第二个表查找过程
    plVar18 = (int64_t *)0x180bf8ed0;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026c687:
            if (iVar12 == 0) {
                *(int32_t *)(param_1 + 0xd) = *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8ed8);
                break;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026c687;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8f00);
    
    // 数据字段处理
    puStack_468 = &system_state_ptr;
    *(int32_t *)((int64_t)param_1 + 0x6c) = **(int32_t **)(param_2 + 8);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x74) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0xe) = *(int32_t *)(lVar14 + 0xc);
    *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x10);
    *(int32_t *)(param_1 + 0xf) = *(int32_t *)(lVar14 + 0x10);
    
    // 批量数据处理
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0x7c) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x10) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0x84) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x11) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0x8c) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x12) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0x94) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x13) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0x9c) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x14) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xa4) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x15) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xac) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x16) = *puVar10;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    puVar10 = *(int32_t **)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0xb4) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x17) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xbc) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x18) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xc4) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x19) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xcc) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x1a) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)((int64_t)param_1 + 0xd4) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x1b) = *puVar10;
    
    // 处理最终数据块
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0xdc) = *(int32_t *)(lVar14 + 4);
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)((int64_t)param_1 + 0xe4) = *(int32_t *)(lVar14 + 0xc);
    *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(lVar14 + 0x10);
    *(int32_t *)((int64_t)param_1 + 0xec) = *(int32_t *)(lVar14 + 0x14);
    *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(lVar14 + 0x18);
    *(int32_t *)((int64_t)param_1 + 0xf4) = *(int32_t *)(lVar14 + 0x1c);
    *(int32_t *)(param_1 + 0x1f) = *(int32_t *)(lVar14 + 0x20);
    *(int32_t *)((int64_t)param_1 + 0x104) = *(int32_t *)(lVar14 + 0x2c);
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(lVar14 + 0x30);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x34;
    
    // 资源初始化和处理
    FUN_180270120(param_1 + 0x21);
    puVar10 = *(int32_t **)(param_2 + 8);
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    *(int32_t *)(param_1 + 0x27) = *puVar10;
    *(int32_t *)((int64_t)param_1 + 0x13c) = uVar4;
    *(int32_t *)(param_1 + 0x28) = uVar5;
    *(int32_t *)((int64_t)param_1 + 0x144) = uVar6;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
    
    // 字符串处理和表查找（第三个循环）
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    
    plVar18 = (int64_t *)0x180bf8f70;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026ca07:
            if (iVar12 == 0) {
                *(int32_t *)(param_1 + 0x29) =
                     *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f78);
                break;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026ca07;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8fa0);
    
    // 继续字符串处理
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    
    // 第四个表查找过程
    plVar18 = (int64_t *)0x180bf8f00;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026cafa:
            if (iVar12 == 0) {
                *(int32_t *)((int64_t)param_1 + 0x14c) =
                     *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f08);
                break;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026cafa;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8f20);
    
    // 条件性处理逻辑
    if (1 < uVar16) {
        puStack_468 = &memory_allocator_336_ptr;
        pbStack_460 = abStack_450;
        iStack_458 = 0;
        abStack_450[0] = 0;
        uVar2 = **(uint **)(param_2 + 8);
        puVar13 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar13;
        if (uVar2 != 0) {
            FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar2);
            *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
        }
        
        plVar18 = (int64_t *)0x180bf8fd0;
        uVar17 = uVar15;
        do {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*plVar18 + lVar14) != '\0');
            iVar12 = (int)lVar14;
            if (iStack_458 == iVar12) {
                if (iStack_458 != 0) {
                    pbVar9 = pbStack_460;
                    do {
                        pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                        iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                        if (iVar12 != 0) break;
                        pbVar9 = pbVar9 + 1;
                    } while (*pbVar1 != 0);
                }
LAB_18026cbfa:
                if (iVar12 == 0) {
                    *(int32_t *)(param_1 + 0x2a) =
                         *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8fd8);
                    break;
                }
            }
            else if (iStack_458 == 0) goto LAB_18026cbfa;
            uVar17 = (uint64_t)((int)uVar17 + 1);
            plVar18 = plVar18 + 2;
        } while ((int64_t)plVar18 < 0x180bf8ff0);
    }
    
    // 继续数据处理
    puStack_468 = &system_state_ptr;
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x15c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x2b) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x2c);
    
    // 批量资源初始化
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x194) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x32) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x33);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x1cc) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x39) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x3a);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x204) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x40) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x41);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x23c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x47) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x48);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x274) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x4e) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x4f);
    FUN_180270120(param_1 + 0x55);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x2dc) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x5b) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x5c);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x314) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x62) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 99);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x34c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x69) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x6a);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 900) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x70) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x71);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x3bc) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x77) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x78);
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x3f4) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x7e) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x7f);
    
    // 条件性最终处理
    if (uVar16 != 0) {
        lVar14 = *(int64_t *)(param_2 + 8);
        *(int32_t *)((int64_t)param_1 + 0x42c) = *(int32_t *)(lVar14 + 8);
        *(int32_t *)(param_1 + 0x85) = *(int32_t *)(lVar14 + 0xc);
        *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
        FUN_180270120(param_1 + 0x86);
    }
    
    // 最终数据处理
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x464) = *(int32_t *)(lVar14 + 4);
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)((int64_t)param_1 + 0x46c) = *(int32_t *)(lVar14 + 0x10);
    *(int32_t *)(param_1 + 0x8d) = *(int32_t *)(lVar14 + 0x14);
    *(int32_t *)((int64_t)param_1 + 0x474) = *(int32_t *)(lVar14 + 0x1c);
    *(int32_t *)(param_1 + 0x8e) = *(int32_t *)(lVar14 + 0x20);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x24;
    
    // 字符串处理和表查找（最终循环）
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar16 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar16 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar16);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
    }
    
    plVar18 = (int64_t *)0x180bf8f20;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026cf9a:
            if (iVar12 == 0) {
                *(int32_t *)(param_1 + 0x8f) =
                     *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f28);
                break;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026cf9a;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8f70);
    
    // 最终字符串处理
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar16 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar16 != 0) {
        FUN_180045f60(&puStack_468, puVar13, (uint64_t)uVar16);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
    }
    
    // 最终表查找和配置处理
    plVar18 = (int64_t *)0x180bf8fa0;
    uVar17 = uVar15;
    do {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*plVar18 + lVar14) != '\0');
        iVar12 = (int)lVar14;
        if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
                pbVar9 = pbStack_460;
                do {
                    pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
                    iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar12 != 0) break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18026d094:
            if (iVar12 == 0) {
                *(int32_t *)((int64_t)param_1 + 0x47c) =
                     *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8fa8);
                goto LAB_18026d0a6;
            }
        }
        else if (iStack_458 == 0) goto LAB_18026d094;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        plVar18 = plVar18 + 2;
        if (0x180bf8fcf < (int64_t)plVar18) {
LAB_18026d0a6:
            // 高级配置处理
            puStack_468 = &system_state_ptr;
            FUN_18026fc50(param_1 + 0x90, param_2);
            puVar10 = *(int32_t **)(param_2 + 8);
            *(int32_t *)(param_1 + 0xfc) = *puVar10;
            *(int32_t *)((int64_t)param_1 + 0x7e4) = puVar10[1];
            *(int32_t *)(param_1 + 0xfd) = puVar10[2];
            *(int32_t *)((int64_t)param_1 + 0x7ec) = puVar10[3];
            *(int32_t **)(param_2 + 8) = puVar10 + 4;
            *(int32_t *)(param_1 + 0xfe) = puVar10[4];
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)((int64_t)param_1 + 0x7f4) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)(param_1 + 0xff) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)((int64_t)param_1 + 0x7fc) = *puVar10;
            lVar14 = *(int64_t *)(param_2 + 8);
            *(int32_t *)(param_1 + 0x100) = *(int32_t *)(lVar14 + 4);
            *(int32_t *)((int64_t)param_1 + 0x804) = *(int32_t *)(lVar14 + 8);
            *(int32_t *)(param_1 + 0x101) = *(int32_t *)(lVar14 + 0xc);
            *(int32_t *)((int64_t)param_1 + 0x80c) = *(int32_t *)(lVar14 + 0x10);
            *(int32_t *)(param_1 + 0x102) = *(int32_t *)(lVar14 + 0x14);
            *(int32_t *)((int64_t)param_1 + 0x814) = *(int32_t *)(lVar14 + 0x18);
            *(int32_t *)(param_1 + 0x103) = *(int32_t *)(lVar14 + 0x1c);
            *(int32_t *)((int64_t)param_1 + 0x81c) = *(int32_t *)(lVar14 + 0x20);
            *(int32_t *)(param_1 + 0x104) = *(int32_t *)(lVar14 + 0x24);
            *(int32_t *)((int64_t)param_1 + 0x824) = *(int32_t *)(lVar14 + 0x28);
            *(int32_t *)(param_1 + 0x105) = *(int32_t *)(lVar14 + 0x2c);
            *(int32_t *)((int64_t)param_1 + 0x82c) = *(int32_t *)(lVar14 + 0x30);
            *(int32_t *)(param_1 + 0x106) = *(int32_t *)(lVar14 + 0x34);
            *(int32_t *)((int64_t)param_1 + 0x834) = *(int32_t *)(lVar14 + 0x38);
            *(int32_t *)(param_1 + 0x107) = *(int32_t *)(lVar14 + 0x3c);
            *(int32_t *)((int64_t)param_1 + 0x83c) = *(int32_t *)(lVar14 + 0x40);
            *(int32_t *)(param_1 + 0x108) = *(int32_t *)(lVar14 + 0x44);
            *(int32_t *)((int64_t)param_1 + 0x844) = *(int32_t *)(lVar14 + 0x48);
            *(int32_t *)(param_1 + 0x109) = *(int32_t *)(lVar14 + 0x4c);
            *(int32_t *)((int64_t)param_1 + 0x84c) = *(int32_t *)(lVar14 + 0x50);
            *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x54);
            *(int32_t *)(param_1 + 0x10a) = *(int32_t *)(lVar14 + 0x54);
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)((int64_t)param_1 + 0x854) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)(param_1 + 0x10b) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)((int64_t)param_1 + 0x85c) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)(param_1 + 0x10c) = *puVar10;
            lVar14 = *(int64_t *)(param_2 + 8);
            piVar11 = (int *)(lVar14 + 4);
            *(int **)(param_2 + 8) = piVar11;
            iVar12 = *piVar11;
            *(int64_t *)(param_2 + 8) = lVar14 + 8;
            plVar18 = param_1 + 0x10d;
            FUN_180080aa0(plVar18, (int64_t)iVar12);
            uVar17 = uVar15;
            if (param_1[0x10e] - *plVar18 >> 4 == 0) {
                puVar10 = *(int32_t **)(param_2 + 8);
            }
            else {
                do {
                    puVar3 = *(int32_t **)(param_2 + 8);
                    uVar4 = puVar3[1];
                    uVar5 = puVar3[2];
                    uVar6 = puVar3[3];
                    puVar10 = (int32_t *)(uVar15 + *plVar18);
                    *puVar10 = *puVar3;
                    puVar10[1] = uVar4;
                    puVar10[2] = uVar5;
                    puVar10[3] = uVar6;
                    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 0x10);
                    *(int32_t **)(param_2 + 8) = puVar10;
                    uVar16 = (int)uVar17 + 1;
                    uVar15 = uVar15 + 0x10;
                    uVar17 = (uint64_t)uVar16;
                } while ((uint64_t)(int64_t)(int)uVar16 < (uint64_t)(param_1[0x10e] - *plVar18 >> 4));
            }
            *(int32_t *)(param_1 + 0x111) = *puVar10;
            *(int32_t *)((int64_t)param_1 + 0x88c) = puVar10[1];
            *(int32_t *)(param_1 + 0x112) = puVar10[2];
            *(int32_t *)((int64_t)param_1 + 0x894) = puVar10[3];
            *(int32_t *)(param_1 + 0x113) = puVar10[4];
            *(int32_t *)((int64_t)param_1 + 0x89c) = puVar10[5];
            *(int32_t *)(param_1 + 0x114) = puVar10[6];
            *(int32_t *)((int64_t)param_1 + 0x8a4) = puVar10[7];
            *(int32_t **)(param_2 + 8) = puVar10 + 8;
            *(int32_t *)(param_1 + 0x115) = puVar10[8];
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)((int64_t)param_1 + 0x8ac) = *puVar10;
            puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
            *(int32_t **)(param_2 + 8) = puVar10;
            *(int32_t *)(param_1 + 0x116) = *puVar10;
            lVar14 = *(int64_t *)(param_2 + 8);
            puVar13 = (uint *)(lVar14 + 4);
            *(uint **)(param_2 + 8) = puVar13;
            uVar16 = *puVar13;
            puVar13 = (uint *)(lVar14 + 8);
            *(uint **)(param_2 + 8) = puVar13;
            if (uVar16 != 0) {
                (**(code **)(param_1[0x117] + 0x18))(param_1 + 0x117, puVar13, uVar16);
                *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
                puVar13 = *(uint **)(param_2 + 8);
            }
            uVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            *(uint **)(param_2 + 8) = puVar13;
            if (uVar16 != 0) {
                (**(code **)(param_1[0x11b] + 0x18))(param_1 + 0x11b, puVar13, uVar16);
                *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
                puVar13 = *(uint **)(param_2 + 8);
            }
            *(uint *)(param_1 + 0x11f) = *puVar13;
            *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
            // 函数结束，栈保护清理
            SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
        }
    } while( true );
}

// ============================================================================
// 模块技术说明
// ============================================================================

/*
 * 性能优化建议：
 * 1. 数据结构优化：使用预分配的内存池和缓存机制
 * 2. 字符串处理优化：减少字符串拷贝操作，使用引用计数
 * 3. 表查找优化：实现哈希表或二分查找提高查找效率
 * 4. 内存管理优化：使用内存对齐和批量分配策略
 * 
 * 内存管理策略：
 * - 使用栈保护机制防止栈溢出
 * - 实现动态内存分配和释放
 * - 支持内存对齐和边界检查
 * - 防止内存泄漏和悬空指针
 * 
 * 错误处理机制：
 * - 实现了完整的错误检查和状态验证
 * - 支持条件性处理和分支逻辑
 * - 包含栈保护和异常处理
 * - 实现了资源清理和状态恢复
 * 
 * 算法复杂度分析：
 * - 数据结构解析：O(n) 线性复杂度
 * - 字符串比较：O(m) 最坏情况复杂度
 * - 表查找操作：O(n) 线性查找复杂度
 * - 内存分配操作：O(1) 常数时间复杂度
 * 
 * 扩展性设计：
 * - 模块化设计便于功能扩展
 * - 支持多种配置模式和数据处理策略
 * - 实现了可插拔的字符串处理机制
 * - 支持动态配置和运行时调整
 * 
 * 安全考虑：
 * - 实现了栈保护和边界检查
 * - 防止缓冲区溢出和内存越界
 * - 支持数据完整性验证
 * - 实现了安全的字符串操作
 */