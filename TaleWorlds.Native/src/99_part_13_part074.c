#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_13_part074.c
 * @brief 系统级内存管理和数据处理模块
 * 
 * 本模块提供15个核心函数，涵盖系统级内存管理、数据处理、资源清理、
 * 系统调用等核心功能。主要功能包括：
 * - 系统级内存管理和资源分配
 * - 高级数据处理和转换
 * - 系统状态管理和控制
 * - 资源清理和内存释放
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

/*==========================================
                常量定义
==========================================*/

/**
 * @defgroup SystemConstants 系统常量
 * @brief 系统级操作和内存管理常量
 * @{
 */
#define SYSTEM_SUCCESS                    0x00  ///< 系统操作成功
#define SYSTEM_ERROR_INVALID_PARAM        0x1C  ///< 无效参数错误
#define SYSTEM_ERROR_MEMORY_ALLOC         0x11  ///< 内存分配错误
#define SYSTEM_ERROR_RESOURCE_BUSY        0x1F  ///< 资源忙错误
#define SYSTEM_ERROR_OPERATION_FAILED     0x36  ///< 操作失败错误
#define SYSTEM_ERROR_INDEX_OUT_OF_RANGE   0x54  ///< 索引超出范围错误

#define MEMORY_PAGE_SIZE                  0x1000 ///< 内存页大小 (4KB)
#define MEMORY_ALIGNMENT                 0x10   ///< 内存对齐大小 (16字节)
#define MAX_RESOURCE_COUNT               0x7FFF ///< 最大资源数量
#define RESOURCE_MASK                    0x3FFF ///< 资源掩码
#define RESOURCE_FLAG_ACTIVE             0x8000 ///< 资源活动标志

#define HASH_TABLE_SIZE                  0x20   ///< 哈希表大小
#define HASH_MASK                       0x1F   ///< 哈希掩码
#define INVALID_INDEX                   0xFFFFFFFF ///< 无效索引

#define FLOAT_PRECISION_THRESHOLD       0.00578f ///< 浮点精度阈值
#define EXPONENTIAL_BASE                2.718281828459045 ///< 自然对数底数
/** @} */

/**
 * @defgroup DataProcessingConstants 数据处理常量
 * @brief 数据处理和转换相关常量
 * @{
 */
#define DATA_PROCESSING_SUCCESS          0x00  ///< 数据处理成功
#define DATA_PROCESSING_ERROR            0x1C  ///< 数据处理错误
#define DATA_VALIDATION_FAILED           0x36  ///< 数据验证失败
#define DATA_CONVERSION_ERROR            0x54  ///< 数据转换错误

#define DATA_ELEMENT_SIZE                0x20   ///< 数据元素大小 (32字节)
#define DATA_HEADER_SIZE                 0x10   ///< 数据头部大小 (16字节)
#define DATA_TRAILER_SIZE                0x08   ///< 数据尾部大小 (8字节)
#define MAX_DATA_ELEMENTS                0x1000 ///< 最大数据元素数量

#define BITMASK_15_BITS                  0x7FFF  ///< 15位掩码
#define BITMASK_14_BITS                  0x3FFF  ///< 14位掩码
#define BITMASK_HIGH_BIT                 0x8000  ///< 高位掩码
#define BITMASK_LOWER_BITS               0x0FFF  ///< 低位掩码
/** @} */

/**
 * @defgroup SystemStateConstants 系统状态常量
 * @brief 系统状态和控制相关常量
 * @{
 */
#define STATE_INITIALIZED                0x01   ///< 系统已初始化
#define STATE_RUNNING                    0x02   ///< 系统运行中
#define STATE_PAUSED                     0x04   ///< 系统暂停
#define STATE_STOPPED                    0x08   ///< 系统停止
#define STATE_ERROR                      0x80   ///< 系统错误状态

#define TRANSITION_IMMEDIATE             0x00   ///< 立即转换
#define TRANSITION_GRADUAL               0x01   ///< 渐变转换
#define TRANSITION_DELAYED               0x02   ///< 延迟转换

#define CONTROL_FLAG_ENABLED             0x01   ///< 控制标志启用
#define CONTROL_FLAG_DISABLED            0x00   ///< 控制标志禁用
#define CONTROL_FLAG_AUTO                0x02   ///< 控制标志自动
/** @} */

/*==========================================
                类型别名
==========================================*/

/**
 * @defgroup BasicTypeAliases 基础类型别名
 * @brief 基础数据类型的别名定义
 * @{
 */
typedef uint8_t         byte_t;          ///< 字节类型
typedef uint16_t        word_t;          ///< 字类型
typedef uint32_t        dword_t;         ///< 双字类型
typedef uint64_t        qword_t;         ///< 四字类型
typedef int32_t         status_t;        ///< 状态类型
typedef uint32_t        handle_t;        ///< 句柄类型
typedef uint32_t        flags_t;         ///< 标志类型
typedef void*           pointer_t;       ///< 指针类型
typedef uint64_t        address_t;       ///< 地址类型
/** @} */

/**
 * @defgroup SystemTypeAliases 系统类型别名
 * @brief 系统相关类型的别名定义
 * @{
 */
typedef void*           resource_t;      ///< 资源类型
typedef uint32_t        resource_id_t;   ///< 资源ID类型
typedef uint16_t        resource_flags_t;///< 资源标志类型
typedef int32_t         system_error_t;  ///< 系统错误类型
typedef uint32_t        system_state_t;  ///< 系统状态类型
typedef void*           system_handle_t; ///< 系统句柄类型
typedef uint64_t        system_time_t;   ///< 系统时间类型
/** @} */

/**
 * @defgroup MemoryTypeAliases 内存类型别名
 * @brief 内存管理相关类型的别名定义
 * @{
 */
typedef void*           memory_block_t;  ///< 内存块类型
typedef uint32_t        memory_size_t;   ///< 内存大小类型
typedef uint32_t        memory_flags_t;  ///< 内存标志类型
typedef uint32_t        alignment_t;     ///< 对齐类型
typedef uint64_t        memory_address_t;///< 内存地址类型
typedef uint32_t        page_id_t;       ///< 页ID类型
typedef uint16_t        page_flags_t;    ///< 页标志类型
/** @} */

/**
 * @defgroup DataTypeAliases 数据类型别名
 * @brief 数据处理相关类型的别名定义
 * @{
 */
typedef uint32_t        data_hash_t;     ///< 数据哈希类型
typedef uint32_t        data_size_t;     ///< 数据大小类型
typedef uint32_t        data_flags_t;    ///< 数据标志类型
typedef uint32_t        element_id_t;    ///< 元素ID类型
typedef int32_t         element_index_t;  ///< 元素索引类型
typedef uint32_t        element_count_t;  ///< 元素计数类型
/** @} */

/*==========================================
                枚举定义
==========================================*/

/**
 * @brief 系统错误码枚举
 * @details 定义系统级操作可能返回的错误码
 */
typedef enum {
    SYSTEM_ERROR_NONE = 0x00,            ///< 无错误
    SYSTEM_ERROR_INVALID_PARAMETER = 0x1C,///< 无效参数
    SYSTEM_ERROR_MEMORY_ALLOCATION = 0x11,///< 内存分配失败
    SYSTEM_ERROR_RESOURCE_NOT_FOUND = 0x1F,///< 资源未找到
    SYSTEM_ERROR_OPERATION_TIMEOUT = 0x36,///< 操作超时
    SYSTEM_ERROR_ACCESS_DENIED = 0x54,   ///< 访问被拒绝
    SYSTEM_ERROR_ALREADY_INITIALIZED = 0x78,///< 已初始化
    SYSTEM_ERROR_NOT_INITIALIZED = 0x9C, ///< 未初始化
    SYSTEM_ERROR_BUFFER_OVERFLOW = 0xB0, ///< 缓冲区溢出
    SYSTEM_ERROR_INTERNAL_FAILURE = 0xD4  ///< 内部故障
} system_error_code_t;

/**
 * @brief 内存操作类型枚举
 * @details 定义内存操作的不同类型
 */
typedef enum {
    MEMORY_OP_ALLOCATE = 0x01,           ///< 内存分配
    MEMORY_OP_FREE = 0x02,               ///< 内存释放
    MEMORY_OP_REALLOCATE = 0x03,         ///< 内存重新分配
    MEMORY_OP_COPY = 0x04,               ///< 内存复制
    MEMORY_OP_MOVE = 0x05,               ///< 内存移动
    MEMORY_OP_FILL = 0x06,               ///< 内存填充
    MEMORY_OP_COMPARE = 0x07,            ///< 内存比较
    MEMORY_OP_VALIDATE = 0x08            ///< 内存验证
} memory_operation_t;

/**
 * @brief 资源状态枚举
 * @details 定义资源的不同状态
 */
typedef enum {
    RESOURCE_STATE_UNUSED = 0x00,         ///< 资源未使用
    RESOURCE_STATE_ACTIVE = 0x01,         ///< 资源活动
    RESOURCE_STATE_BUSY = 0x02,           ///< 资源忙
    RESOURCE_STATE_LOCKED = 0x04,         ///< 资源锁定
    RESOURCE_STATE_PENDING = 0x08,        ///< 资源待处理
    RESOURCE_STATE_ERROR = 0x80,          ///< 资源错误
    RESOURCE_STATE_DESTROYED = 0xFF       ///< 资源已销毁
} resource_state_t;

/**
 * @brief 数据处理模式枚举
 * @details 定义数据处理的模式
 */
typedef enum {
    DATA_MODE_NORMAL = 0x00,             ///< 正常模式
    DATA_MODE_FAST = 0x01,               ///< 快速模式
    DATA_MODE_SAFE = 0x02,                ///< 安全模式
    DATA_MODE_DEBUG = 0x04,               ///< 调试模式
    DATA_MODE_BATCH = 0x08,               ///< 批处理模式
    DATA_MODE_STREAM = 0x10,              ///< 流模式
    DATA_MODE_COMPRESSED = 0x20,          ///< 压缩模式
    DATA_MODE_ENCRYPTED = 0x40            ///< 加密模式
} data_processing_mode_t;

/**
 * @brief 系统控制标志枚举
 * @details 定义系统控制的各种标志
 */
typedef enum {
    CONTROL_FLAG_NONE = 0x00,             ///< 无标志
    CONTROL_FLAG_ENABLE_AUTO_CLEANUP = 0x01,///< 启用自动清理
    CONTROL_FLAG_ENABLE_VALIDATION = 0x02, ///< 启用验证
    CONTROL_FLAG_ENABLE_LOGGING = 0x04,    ///< 启用日志
    CONTROL_FLAG_ENABLE_PROFILING = 0x08,  ///< 启用性能分析
    CONTROL_FLAG_ENABLE_CACHING = 0x10,    ///< 启用缓存
    CONTROL_FLAG_ENABLE_COMPRESSION = 0x20,///< 启用压缩
    CONTROL_FLAG_ENABLE_ENCRYPTION = 0x40, ///< 启用加密
    CONTROL_FLAG_RESERVED = 0x80          ///< 保留标志
} system_control_flags_t;

/*==========================================
                结构体定义
==========================================*/

/**
 * @brief 资源描述符结构体
 * @details 描述系统资源的基本信息和状态
 */
typedef struct {
    resource_id_t      resource_id;      ///< 资源唯一标识符
    resource_flags_t   flags;            ///< 资源标志
    resource_state_t   state;            ///< 资源状态
    memory_size_t      size;             ///< 资源大小
    memory_address_t   address;          ///< 资源地址
    system_time_t      create_time;      ///< 创建时间
    system_time_t      access_time;      ///< 访问时间
    uint32_t           reference_count;  ///< 引用计数
    void*              user_data;        ///< 用户数据指针
} resource_descriptor_t;

/**
 * @brief 内存块结构体
 * @details 描述内存块的信息和管理数据
 */
typedef struct {
    memory_address_t   base_address;      ///< 基地址
    memory_size_t     total_size;        ///< 总大小
    memory_size_t     used_size;         ///< 已使用大小
    memory_size_t     free_size;         ///< 空闲大小
    memory_flags_t    flags;             ///< 内存标志
    alignment_t       alignment;         ///< 对齐要求
    uint32_t          page_count;        ///< 页数量
    page_flags_t      page_flags;        ///< 页标志
    void*             owner;             ///< 所有者指针
} memory_block_t;

/**
 * @brief 哈希表条目结构体
 * @details 用于哈希表中的条目存储
 */
typedef struct {
    data_hash_t       hash_value;        ///< 哈希值
    element_id_t      element_id;        ///< 元素ID
    element_index_t   next_index;        ///< 下一个索引
    data_flags_t      flags;             ///< 数据标志
    uint32_t          access_count;      ///< 访问计数
    system_time_t     last_access;       ///< 最后访问时间
    void*             data_pointer;      ///< 数据指针
} hash_table_entry_t;

/**
 * @brief 系统配置结构体
 * @details 存储系统的配置参数
 */
typedef struct {
    system_control_flags_t control_flags;///< 控制标志
    uint32_t               max_resources; ///< 最大资源数
    uint32_t               cache_size;    ///< 缓存大小
    uint32_t               timeout_ms;    ///< 超时时间(毫秒)
    data_processing_mode_t data_mode;     ///< 数据处理模式
    memory_size_t          memory_limit;  ///< 内存限制
    uint32_t               thread_count;  ///< 线程数量
    uint8_t                priority;      ///< 优先级
    uint8_t                reserved[3];  ///< 保留字段
} system_config_t;

/**
 * @brief 数据元素结构体
 * @details 表示一个数据元素的信息
 */
typedef struct {
    element_id_t      element_id;        ///< 元素ID
    data_size_t       data_size;          ///< 数据大小
    data_flags_t      flags;              ///< 数据标志
    data_hash_t       hash_value;         ///< 哈希值
    memory_address_t  data_address;       ///< 数据地址
    element_index_t   prev_index;         ///< 前一个索引
    element_index_t   next_index;         ///< 下一个索引
    uint32_t          reference_count;    ///< 引用计数
    system_time_t     timestamp;         ///< 时间戳
} data_element_t;

/**
 * @brief 系统状态结构体
 * @details 存储系统当前的状态信息
 */
typedef struct {
    system_state_t    current_state;     ///< 当前状态
    system_state_t    previous_state;     ///< 前一个状态
    system_time_t     state_change_time; ///< 状态改变时间
    uint32_t          resource_count;    ///< 资源计数
    uint32_t          active_operations; ///< 活动操作数
    memory_size_t     memory_usage;      ///< 内存使用量
    system_error_t    last_error;        ///< 最后错误
    uint32_t          error_count;        ///< 错误计数
    uint8_t            performance_level; ///< 性能级别
    uint8_t            reserved[3];       ///< 保留字段
} system_status_t;

/*==========================================
                函数别名
==========================================*/

/**
 * @defgroup SystemFunctions 系统函数
 * @brief 系统级操作函数的别名
 * @{
 */
typedef status_t (*system_initialize_func_t)(system_config_t* config);          ///< 系统初始化函数
typedef status_t (*system_shutdown_func_t)(void);                              ///< 系统关闭函数
typedef status_t (*system_get_status_func_t)(system_status_t* status);          ///< 获取系统状态函数
typedef status_t (*system_set_config_func_t)(system_config_t* config);          ///< 设置系统配置函数
typedef status_t (*system_control_func_t)(uint32_t control_code, void* param);  ///< 系统控制函数
/** @} */

/**
 * @defgroup MemoryFunctions 内存函数
 * @brief 内存管理函数的别名
 * @{
 */
typedef status_t (*memory_allocate_func_t)(memory_size_t size, memory_flags_t flags, void** block);  ///< 内存分配函数
typedef status_t (*memory_free_func_t)(void* block);                             ///< 内存释放函数
typedef status_t (*memory_reallocate_func_t)(void* block, memory_size_t new_size); ///< 内存重新分配函数
typedef status_t (*memory_copy_func_t)(void* dest, const void* src, memory_size_t size); ///< 内存复制函数
typedef status_t (*memory_fill_func_t)(void* dest, uint8_t value, memory_size_t size); ///< 内存填充函数
typedef status_t (*memory_validate_func_t)(const void* block, memory_size_t size); ///< 内存验证函数
/** @} */

/**
 * @defgroup ResourceFunctions 资源函数
 * @brief 资源管理函数的别名
 * @{
 */
typedef status_t (*resource_create_func_t)(resource_id_t id, resource_flags_t flags, resource_descriptor_t** desc); ///< 资源创建函数
typedef status_t (*resource_destroy_func_t)(resource_id_t id);                   ///< 资源销毁函数
typedef status_t (*resource_acquire_func_t)(resource_id_t id, void** handle);    ///< 资源获取函数
typedef status_t (*resource_release_func_t)(resource_id_t id);                   ///< 资源释放函数
typedef status_t (*resource_query_func_t)(resource_id_t id, resource_descriptor_t* desc); ///< 资源查询函数
/** @} */

/**
 * @defgroup DataProcessingFunctions 数据处理函数
 * @brief 数据处理函数的别名
 * @{
 */
typedef status_t (*data_process_func_t)(const void* input, void* output, data_size_t size); ///< 数据处理函数
typedef status_t (*data_validate_func_t)(const void* data, data_size_t size);   ///< 数据验证函数
typedef status_t (*data_convert_func_t)(const void* src, void* dest, data_size_t size); ///< 数据转换函数
typedef status_t (*data_hash_func_t)(const void* data, data_size_t size, data_hash_t* hash); ///< 数据哈希函数
typedef status_t (*data_compress_func_t)(const void* src, void* dest, data_size_t src_size, data_size_t* dest_size); ///< 数据压缩函数
/** @} */

/**
 * @defgroup UtilityFunctions 实用函数
 * @brief 实用工具函数的别名
 * @{
 */
typedef status_t (*utility_sleep_func_t)(uint32_t milliseconds);                ///< 休眠函数
typedef status_t (*utility_get_time_func_t)(system_time_t* time);              ///< 获取时间函数
typedef status_t (*utility_log_func_t)(uint32_t level, const char* message);   ///< 日志函数
typedef status_t (*utility_debug_func_t)(const char* message, ...);             ///< 调试函数
/** @} */

/*==========================================
                核心函数实现
==========================================*/

/**
 * @brief 系统初始化函数
 * @details 执行系统级别的初始化操作，调用系统初始化向量
 * 
 * @note 此函数不返回，会调用系统底层的初始化代码
 * 
 * @warning 此函数包含不可返回的子程序调用
 */
void System_Initialize(void)
{
  void** system_table;
  
  /* 调用系统初始化向量 */
  (*(void (**)())*system_table)();
                    /* WARNING: 子程序不返回 */
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
}



/**
 * @brief 资源验证和处理函数
 * @details 验证资源参数并进行相应的处理操作
 * 
 * @param param_1 资源上下文指针
 * @param param_2 资源标识符
 * @return status_t 操作状态码
 * 
 * @note 当param_2为0时返回错误码0x1F
 * @note 资源标志为1时进行特殊处理
 * 
 * @warning 包含不可返回的子程序调用
 */
status_t Resource_ValidateAndProcess(void* param_1, void* param_2)
{
  int status;
  void* stack_context;
  
  if (param_2 == 0) {
    return SYSTEM_ERROR_RESOURCE_BUSY;
  }
  stack_context = 0;
  if ((*(uint16_t *)((uint64_t)param_2 + 0xe) & RESOURCE_MASK) == 1) {
    status = FUN_18088c740(&stack_context, *(uint64_t *)((uint64_t)param_1 + 0x20));
    if (status != 0) goto cleanup_handler;
  }
  FUN_1808db3f0(param_1, param_2);
cleanup_handler:
                    /* WARNING: 子程序不返回 */
  FUN_18088c790(&stack_context);
}



/**
 * @brief 数据处理和查找函数
 * @details 在指定上下文中查找并处理数据元素
 * 
 * @param param_1 数据上下文指针
 * @param param_2 数据缓冲区指针
 * @param param_3 输出参数指针
 * @return status_t 操作状态码
 * 
 * @note 任何参数为空指针时返回错误码0x1C
 * @note 使用哈希表进行数据查找
 * 
 * @算法分析:
 * 1. 参数验证
 * 2. 获取数据元素数量
 * 3. 遍历数据元素
 * 4. 哈希查找匹配
 * 5. 数据处理和输出
 */
status_t Data_ProcessAndFind(void* param_1, void* param_2, uint32_t* param_3)
{
  int status;
  uint64_t result;
  int index;
  int indices[2];
  uint32_t values[2];
  uint64_t addresses[2];
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (uint32_t*)0x0)) {
    return SYSTEM_ERROR_INVALID_PARAM;
  }
  index = 0;
  indices[0] = 0;
  result = FUN_18073a390(param_1, 2, indices);
  if ((int)result == 0) {
    if (0 < indices[0]) {
      do {
        values[0] = 0;
        result = FUN_18073a590(param_1, 2, index, values);
        if ((int)result != 0) {
          return result;
        }
        addresses[0] = 0;
        result = FUN_180739b90(param_1, values[0], addresses);
        if ((int)result != 0) {
          return result;
        }
        status = func_0x00018076b6b0(addresses[0] + 4, param_2, 0x20);
        if (status == 0) {
          *param_3 = values[0];
          return SYSTEM_SUCCESS;
        }
        index = index + 1;
      } while (index < indices[0]);
    }
    result = SYSTEM_ERROR_OPERATION_FAILED;
  }
  return result;
}



/**
 * @brief 数据迭代处理函数
 * @details 对指定数据集合进行迭代处理操作
 * 
 * @param param_1 数据上下文指针
 * @return status_t 操作状态码
 * 
 * @note 处理失败时返回错误码0x36
 * @note 使用栈变量存储中间状态
 * 
 * @算法分析:
 * 1. 获取数据元素数量
 * 2. 迭代处理每个元素
 * 3. 执行数据操作
 * 4. 验证处理结果
 * 5. 更新状态信息
 */
status_t Data_IterativeProcess(void* param_1)
{
  int status;
  uint64_t result;
  int index;
  uint32_t* output_ptr;
  int stack_count;
  
  index = 0;
  stack_count = 0;
  result = FUN_18073a390(param_1, 2, &stack_count);
  if ((int)result == 0) {
    if (0 < stack_count) {
      do {
        result = FUN_18073a590();
        if ((int)result != 0) {
          return result;
        }
        result = FUN_180739b90();
        if ((int)result != 0) {
          return result;
        }
        status = func_0x00018076b6b0(4);
        if (status == 0) {
          *output_ptr = 0;
          return SYSTEM_SUCCESS;
        }
        index = index + 1;
      } while (index < stack_count);
    }
    result = SYSTEM_ERROR_OPERATION_FAILED;
  }
  return result;
}



/**
 * @brief 数据搜索和处理函数
 * @details 在指定范围内搜索并处理匹配的数据
 * 
 * @return status_t 操作状态码
 * 
 * @note 搜索失败时返回错误码0x36
 * @note 使用循环迭代进行搜索
 * 
 * @算法分析:
 * 1. 初始化搜索参数
 * 2. 循环搜索匹配项
 * 3. 执行数据处理
 * 4. 更新搜索位置
 * 5. 返回搜索结果
 */
status_t Data_SearchAndProcess(void)
{
  int status;
  uint64_t result;
  uint32_t current_index;
  uint64_t search_count;
  uint64_t base_pointer;
  uint32_t* output_ptr;
  int search_limit;
  uint32_t stack_value;
  
  search_count = base_pointer & 0xffffffff;
  current_index = (uint32_t)base_pointer;
  while( true ) {
    if (search_limit <= (int)current_index) {
      return SYSTEM_ERROR_OPERATION_FAILED;
    }
    stack_value = (uint32_t)base_pointer;
    result = FUN_18073a590();
    if ((int)result != 0) {
      return result;
    }
    result = FUN_180739b90();
    if ((int)result != 0) {
      return result;
    }
    status = func_0x00018076b6b0(base_pointer + 4);
    if (status == 0) break;
    current_index = (int)search_count + 1;
    search_count = (uint64_t)current_index;
  }
  *output_ptr = stack_value;
  return SYSTEM_SUCCESS;
}






/**
 * @brief 空操作函数
 * @details 执行空操作，用于占位或同步
 * 
 * @note 此函数不执行任何操作，直接返回
 */
void System_NoOperation(void)
{
  return;
}



/**
 * @brief 数据赋值函数
 * @details 将栈中的数据赋值到指定位置
 * 
 * @return status_t 操作状态码
 * 
 * @note 成功时返回0
 * @note 直接进行内存赋值操作
 */
status_t Data_AssignValue(void)
{
  uint32_t* target_ptr;
  uint32_t stack_value;
  
  *target_ptr = stack_value;
  return SYSTEM_SUCCESS;
}



/**
 * @brief 错误返回函数
 * @details 返回参数错误码
 * 
 * @return status_t 错误状态码
 * 
 * @note 始终返回0x1C（无效参数错误）
 */
status_t System_ReturnError(void)
{
  return SYSTEM_ERROR_INVALID_PARAM;
}



/**
 * @brief 数据结构复制函数
 * @details 将源数据结构的内容复制到目标数据结构
 * 
 * @param param_1 目标数据结构指针
 * @param param_2 源数据结构指针
 * @return status_t 操作状态码
 * 
 * @note 目标指针为空时跳过操作
 * @note 包含资源转移和清理操作
 * 
 * @算法分析:
 * 1. 参数验证
 * 2. 数据字段复制
 * 3. 资源转移处理
 * 4. 源资源清理
 * 5. 返回操作结果
 */
status_t DataStructure_Copy(void* param_1, void* param_2)
{
  uint32_t field1;
  uint32_t field2;
  uint32_t field3;
  uint64_t result;
  
  if (param_1 != 0) {
    field1 = *(uint32_t *)((uint64_t)param_2 + 0x74);
    field2 = *(uint32_t *)((uint64_t)param_2 + 0x78);
    field3 = *(uint32_t *)((uint64_t)param_2 + 0x7c);
    *(uint32_t *)((uint64_t)param_1 + 0x70) = *(uint32_t *)((uint64_t)param_2 + 0x70);
    *(uint32_t *)((uint64_t)param_1 + 0x74) = field1;
    *(uint32_t *)((uint64_t)param_1 + 0x78) = field2;
    *(uint32_t *)((uint64_t)param_1 + 0x7c) = field3;
    if (*(uint64_t *)((uint64_t)param_2 + 0x68) != 0) {
      *(uint64_t *)((uint64_t)param_1 + 0x68) = *(uint64_t *)((uint64_t)param_2 + 0x68);
      *(uint64_t *)((uint64_t)param_2 + 0x68) = 0;
      result = func_0x0001808676e0(*(uint64_t *)((uint64_t)param_1 + 0x68), param_1);
      if ((int)result != 0) {
        return result;
      }
    }
  }
  return SYSTEM_SUCCESS;
}



/**
 * @brief 简化数据结构复制函数
 * @details 执行简化的数据结构复制操作
 * 
 * @param param_1 目标数据结构指针
 * @param param_2 源数据结构指针
 * @return status_t 操作状态码
 * 
 * @note 只复制关键字段和资源
 * @note 成功时返回0
 */
status_t DataStructure_CopySimple(void* param_1, void* param_2)
{
  uint64_t result;
  
  if (param_1 != 0) {
    *(uint32_t *)((uint64_t)param_1 + 0x50) = *(uint32_t *)((uint64_t)param_2 + 0x50);
    if (*(uint64_t *)((uint64_t)param_2 + 0x48) != 0) {
      *(uint64_t *)((uint64_t)param_1 + 0x48) = *(uint64_t *)((uint64_t)param_2 + 0x48);
      *(uint64_t *)((uint64_t)param_2 + 0x48) = 0;
      result = func_0x0001808676e0(*(uint64_t *)((uint64_t)param_1 + 0x48), param_1);
      if ((int)result != 0) {
        return result;
      }
    }
  }
  return SYSTEM_SUCCESS;
}



undefined8 FUN_1808db190(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0x1c;
  }
  if (((*(byte *)(param_2 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xad0) != 0) {
      return 0x1c;
    }
    FUN_18088a0c0();
  }
  return 0;
}



int FUN_1808db1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lStackX_10;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  uStack_18 = *(uint *)(param_2 + 0x10);
  uStack_14 = *(uint *)(param_2 + 0x14);
  uStack_10 = *(uint *)(param_2 + 0x18);
  uStack_c = *(uint *)(param_2 + 0x1c);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = plVar1[5];
  lStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar3 = FUN_180851a40(plVar1);
  if (iVar3 == 0) {
    if ((int)plVar1[1] == 0) {
FUN_1808db2d6:
      iVar3 = 0x1c;
      goto LAB_1808db2db;
    }
    lVar5 = (longlong)(int)((uStack_14 ^ uStack_10 ^ uStack_18 ^ uStack_c) & (int)plVar1[1] - 1U);
    piVar6 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == CONCAT44(uStack_14,uStack_18)) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == CONCAT44(uStack_c,uStack_10))) goto FUN_1808db2d6;
        piVar6 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar6;
      } while (iVar3 != -1);
    }
    iVar3 = FUN_18084e8f0(plVar1,&uStack_18,&lStackX_10,piVar6);
    if (iVar3 != 0) goto LAB_1808db2aa;
  }
  else {
LAB_1808db2aa:
    if (iVar3 != 0) {
LAB_1808db2db:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_1808db2bb;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_1808db2bb:
  *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + 1;
  return 0;
}



int FUN_1808db1f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong in_RCX;
  longlong lVar5;
  longlong unaff_RSI;
  int *piVar6;
  longlong in_XMM0_Qb;
  undefined8 uStackX_20;
  longlong lStack0000000000000028;
  
  plVar1 = *(longlong **)(in_RCX + 8);
  lVar2 = plVar1[5];
  uStackX_20 = param_1;
  lStack0000000000000028 = in_XMM0_Qb;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar3 = FUN_180851a40(plVar1);
  if (iVar3 == 0) {
    if ((int)plVar1[1] == 0) {
FUN_1808db2d6:
      iVar3 = 0x1c;
      goto LAB_1808db2db;
    }
    lVar5 = (longlong)
            (int)((uStackX_20._4_4_ ^ (uint)lStack0000000000000028 ^ (uint)uStackX_20 ^
                  lStack0000000000000028._4_4_) & (int)plVar1[1] - 1U);
    piVar6 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == uStackX_20) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == lStack0000000000000028)) goto FUN_1808db2d6;
        piVar6 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar6;
      } while (iVar3 != -1);
    }
    iVar3 = FUN_18084e8f0(plVar1,&uStackX_20,&stack0x00000048,piVar6);
    if (iVar3 != 0) goto LAB_1808db2aa;
  }
  else {
LAB_1808db2aa:
    if (iVar3 != 0) {
LAB_1808db2db:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_1808db2bb;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_1808db2bb:
  *(short *)(unaff_RSI + 0xe) = *(short *)(unaff_RSI + 0xe) + 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808db2bb)

undefined8 FUN_1808db2d6(void)

{
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_1808db300(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (((*(byte *)(param_3 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_18088a0c0(*(longlong *)(param_1 + 0x20),param_3);
  }
  return 0;
}



undefined8 FUN_1808db380(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_2 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_18088a0c0();
  }
  uVar1 = *(undefined4 *)(param_3 + 0x74);
  uVar2 = *(undefined4 *)(param_3 + 0x78);
  uVar3 = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_2 + 0x74) = uVar1;
  *(undefined4 *)(param_2 + 0x78) = uVar2;
  *(undefined4 *)(param_2 + 0x7c) = uVar3;
  if (*(longlong *)(param_3 + 0x68) != 0) {
    *(longlong *)(param_2 + 0x68) = *(longlong *)(param_3 + 0x68);
    *(undefined8 *)(param_3 + 0x68) = 0;
    uVar4 = func_0x0001808676e0(*(undefined8 *)(param_2 + 0x68),param_2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db3f0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  int *piVar17;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x1c;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  uVar16 = (uVar1 & 0x3fff) + (uVar1 >> 0xe & 1);
  if (((uVar16 < 2) && ((uVar1 & 0x7fff) != 0)) || ((uVar1 & 0x3fff) == 1)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  uVar15 = uVar1 - 1;
  if ((uVar1 & 0x3fff) == 0) {
    uVar15 = uVar1 & 0x8000;
  }
  *(ushort *)((longlong)param_2 + 0xe) = uVar15;
  if (((bVar8) && (param_1[2] != 0)) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])(param_1[2],param_2);
  }
  if (uVar16 < 2) {
    if ((uVar1 & 0x7fff) != 0) {
      plVar2 = (longlong *)param_1[1];
      uVar4 = *(uint *)(param_2 + 2);
      uVar5 = *(uint *)((longlong)param_2 + 0x14);
      lVar14 = param_2[2];
      uVar6 = *(uint *)(param_2 + 3);
      uVar7 = *(uint *)((longlong)param_2 + 0x1c);
      lVar9 = param_2[3];
      lVar3 = plVar2[5];
      if (lVar3 != 0) {
        FUN_180768360(lVar3);
      }
      if (*(int *)((longlong)plVar2 + 0x24) == 0) {
        uVar12 = 0;
      }
      else if ((int)plVar2[1] == 0) {
        uVar12 = 0x1c;
      }
      else {
        uVar12 = 0;
        lVar13 = (longlong)(int)((uVar5 ^ uVar4 ^ uVar6 ^ uVar7) & (int)plVar2[1] - 1U);
        piVar17 = (int *)(*plVar2 + lVar13 * 4);
        iVar10 = *(int *)(*plVar2 + lVar13 * 4);
        if (iVar10 != -1) {
          lVar13 = plVar2[2];
          do {
            lVar11 = (longlong)iVar10 * 0x20;
            if ((*(longlong *)(lVar11 + lVar13) == lVar14) &&
               (*(longlong *)(lVar11 + 8 + lVar13) == lVar9)) {
              iVar10 = *piVar17;
              lVar14 = (longlong)iVar10 * 0x20;
              *(undefined8 *)(lVar14 + 0x18 + lVar13) = 0;
              *piVar17 = *(int *)(lVar14 + 0x10 + lVar13);
              *(int *)(lVar14 + 0x10 + lVar13) = (int)plVar2[4];
              *(int *)((longlong)plVar2 + 0x24) = *(int *)((longlong)plVar2 + 0x24) + -1;
              *(int *)(plVar2 + 4) = iVar10;
              break;
            }
            piVar17 = (int *)(lVar13 + 0x10 + lVar11);
            iVar10 = *piVar17;
          } while (iVar10 != -1);
        }
      }
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar3);
      }
      if ((int)uVar12 != 0) {
        return uVar12;
      }
    }
    uVar12 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if ((int)uVar12 == 0) {
      (**(code **)*param_2)(param_2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180988a80,0xcc,1);
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4b7(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  int *piVar6;
  longlong *unaff_R14;
  undefined8 extraout_XMM0_Qa;
  longlong in_XMM0_Qb;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  
  lVar1 = unaff_RSI[5];
  lStack0000000000000030 = param_1;
  lStack0000000000000038 = in_XMM0_Qb;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  if (*(int *)((longlong)unaff_RSI + 0x24) == 0) {
    uVar4 = 0;
  }
  else if ((int)unaff_RSI[1] == 0) {
    uVar4 = 0x1c;
  }
  else {
    uVar4 = 0;
    lVar5 = (longlong)
            (int)((lStack0000000000000030._4_4_ ^ (uint)lStack0000000000000030 ^
                   (uint)lStack0000000000000038 ^ lStack0000000000000038._4_4_) &
                 (int)unaff_RSI[1] - 1U);
    piVar6 = (int *)(*unaff_RSI + lVar5 * 4);
    iVar2 = *(int *)(*unaff_RSI + lVar5 * 4);
    if (iVar2 != -1) {
      lVar5 = unaff_RSI[2];
      do {
        lVar3 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar3 + lVar5) == lStack0000000000000030) &&
           (*(longlong *)(lVar3 + 8 + lVar5) == lStack0000000000000038)) {
          iVar2 = *piVar6;
          lVar3 = (longlong)iVar2 * 0x20;
          *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
          *piVar6 = *(int *)(lVar3 + 0x10 + lVar5);
          *(int *)(lVar3 + 0x10 + lVar5) = (int)unaff_RSI[4];
          *(int *)((longlong)unaff_RSI + 0x24) = *(int *)((longlong)unaff_RSI + 0x24) + -1;
          *(int *)(unaff_RSI + 4) = iVar2;
          uVar4 = 0;
          break;
        }
        piVar6 = (int *)(lVar5 + 0x10 + lVar3);
        iVar2 = *piVar6;
      } while (iVar2 != -1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (((int)uVar4 == 0) && (uVar4 = (**(code **)(*unaff_R14 + 0x18))(), (int)uVar4 == 0)) {
    (**(code **)*unaff_RBX)(extraout_XMM0_Qa,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4df(undefined8 param_1,ushort param_2,undefined8 param_3,ushort param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  undefined8 *unaff_RBX;
  short unaff_SI;
  uint unaff_EDI;
  int *piVar14;
  longlong *unaff_R14;
  undefined4 extraout_XMM0_Da;
  
  uVar13 = param_2 - 1;
  if ((param_2 & param_4) == 0) {
    uVar13 = param_2 & 0x8000;
  }
  *(ushort *)((longlong)unaff_RBX + 0xe) = uVar13;
  if ((((param_2 & param_4) == 1) && (unaff_R14[2] != 0)) && ((code *)unaff_R14[3] != (code *)0x0))
  {
    (*(code *)unaff_R14[3])();
  }
  if (unaff_EDI < 2) {
    if (unaff_SI != 0) {
      plVar1 = (longlong *)unaff_R14[1];
      uVar3 = *(uint *)(unaff_RBX + 2);
      uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
      lVar12 = unaff_RBX[2];
      uVar5 = *(uint *)(unaff_RBX + 3);
      uVar6 = *(uint *)((longlong)unaff_RBX + 0x1c);
      lVar7 = unaff_RBX[3];
      lVar2 = plVar1[5];
      if (lVar2 != 0) {
        FUN_180768360(lVar2);
      }
      if (*(int *)((longlong)plVar1 + 0x24) == 0) {
        uVar10 = 0;
      }
      else if ((int)plVar1[1] == 0) {
        uVar10 = 0x1c;
      }
      else {
        uVar10 = 0;
        lVar11 = (longlong)(int)((uVar4 ^ uVar3 ^ uVar5 ^ uVar6) & (int)plVar1[1] - 1U);
        piVar14 = (int *)(*plVar1 + lVar11 * 4);
        iVar8 = *(int *)(*plVar1 + lVar11 * 4);
        if (iVar8 != -1) {
          lVar11 = plVar1[2];
          do {
            lVar9 = (longlong)iVar8 * 0x20;
            if ((*(longlong *)(lVar9 + lVar11) == lVar12) &&
               (*(longlong *)(lVar9 + 8 + lVar11) == lVar7)) {
              iVar8 = *piVar14;
              lVar12 = (longlong)iVar8 * 0x20;
              *(undefined8 *)(lVar12 + 0x18 + lVar11) = 0;
              *piVar14 = *(int *)(lVar12 + 0x10 + lVar11);
              *(int *)(lVar12 + 0x10 + lVar11) = (int)plVar1[4];
              *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
              *(int *)(plVar1 + 4) = iVar8;
              break;
            }
            piVar14 = (int *)(lVar11 + 0x10 + lVar9);
            iVar8 = *piVar14;
          } while (iVar8 != -1);
        }
      }
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if ((int)uVar10 != 0) {
        return uVar10;
      }
    }
    uVar10 = (**(code **)(*unaff_R14 + 0x18))();
    if ((int)uVar10 == 0) {
      (**(code **)*unaff_RBX)(extraout_XMM0_Da,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4f8(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int *piVar5;
  longlong *unaff_R14;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  
  if ((int)unaff_RSI[1] == 0) {
    uVar3 = 0x1c;
  }
  else {
    uVar3 = 0;
    lVar4 = (longlong)
            (int)((uStack0000000000000034 ^ uStack0000000000000030 ^ uStack0000000000000038 ^
                  uStack000000000000003c) & (int)unaff_RSI[1] - 1U);
    piVar5 = (int *)(*unaff_RSI + lVar4 * 4);
    iVar1 = *(int *)(*unaff_RSI + lVar4 * 4);
    if (iVar1 != -1) {
      lVar4 = unaff_RSI[2];
      do {
        lVar2 = (longlong)iVar1 * 0x20;
        if ((*(longlong *)(lVar2 + lVar4) == _uStack0000000000000030) &&
           (*(longlong *)(lVar2 + 8 + lVar4) == _uStack0000000000000038)) {
          iVar1 = *piVar5;
          lVar2 = (longlong)iVar1 * 0x20;
          *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
          *piVar5 = *(int *)(lVar2 + 0x10 + lVar4);
          *(int *)(lVar2 + 0x10 + lVar4) = (int)unaff_RSI[4];
          *(int *)((longlong)unaff_RSI + 0x24) = *(int *)((longlong)unaff_RSI + 0x24) + -1;
          *(int *)(unaff_RSI + 4) = iVar1;
          break;
        }
        piVar5 = (int *)(lVar4 + 0x10 + lVar2);
        iVar1 = *piVar5;
      } while (iVar1 != -1);
    }
  }
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  if (((int)uVar3 == 0) && (uVar3 = (**(code **)(*unaff_R14 + 0x18))(), (int)uVar3 == 0)) {
    (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
  return uVar3;
}



undefined4 FUN_1808db5a6(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808db8c0(longlong param_1)
void FUN_1808db8c0(longlong param_1)

{
  float fVar1;
  
  FUN_1808c6310(param_1 + 0x7c,*(undefined4 *)(param_1 + 0x70));
  FUN_1808c6310(param_1 + 0x84,*(undefined4 *)(param_1 + 0x74));
  if (0.00578 <= ABS(*(float *)(param_1 + 0x78))) {
    fVar1 = _DAT_180bef7b0 * *(float *)(param_1 + 0x78);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x8c) = fVar1;
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  fVar1 = (float)expf();
  *(float *)(param_1 + 0x90) = 1.0 / (fVar1 - 1.0);
  return;
}



undefined8 FUN_1808dbae0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort auStackX_8 [4];
  uint auStackX_20 [2];
  uint uStack_38;
  uint auStack_34 [3];
  
  plVar2 = (longlong *)*param_1;
  iVar6 = 0;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      uStack_38 = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,&uStack_38);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((ulonglong)plVar2[2] < (ulonglong)uStack_38 + 2) {
        uVar3 = 0x11;
        goto LAB_1808dbb54;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,auStackX_8,1,2,0);
  }
LAB_1808dbb54:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar7 = (uint)auStackX_8[0];
  if ((auStackX_8[0] & 0x8000) == 0) goto LAB_1808dbbe6;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      auStack_34[0] = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,auStack_34);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((ulonglong)plVar2[2] < (ulonglong)auStack_34[0] + 2) {
        uVar3 = 0x11;
        goto LAB_1808dbbc8;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,auStackX_8,1,2,0);
  }
LAB_1808dbbc8:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar7 = (uint)auStackX_8[0] << 0xf | uVar7 & 0x7fff;
LAB_1808dbbe6:
  uVar4 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
  uVar5 = uVar7 >> 1;
  if (((int)uVar5 <= (int)((*(uint *)((longlong)param_2 + 0xc) ^ uVar4) - uVar4)) ||
     (uVar3 = FUN_180882f00(param_2,uVar5), (int)uVar3 == 0)) {
    iVar1 = (int)param_2[1];
    if (iVar1 < (int)uVar5) {
      if (0 < (int)(uVar5 - iVar1)) {
                    // WARNING: Subroutine does not return
        memset(*param_2 + (longlong)iVar1 * 8,0,(ulonglong)(uVar5 - iVar1) << 3);
      }
    }
    *(uint *)(param_2 + 1) = uVar5;
    auStackX_20[0] = 0;
    if (uVar7 >> 1 != 0) {
      do {
        uVar3 = FUN_1808dde10(param_1,auStackX_20[0]);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar3 = FUN_1808997b0(*param_1,*param_2 + (longlong)iVar6 * 8);
        }
        else {
          uVar3 = 0x1c;
        }
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808de0e0(param_1,auStackX_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar6 = iVar6 + 1;
        auStackX_20[0] = auStackX_20[0] & -(uVar7 & 1);
      } while (iVar6 < (int)uVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}



ulonglong FUN_1808dbbeb(undefined8 param_1,uint param_2)

{
  uint in_EAX;
  ulonglong uVar1;
  uint unaff_EBX;
  uint uVar2;
  undefined8 *unaff_RSI;
  int iVar3;
  uint unaff_R14D;
  longlong *unaff_R15;
  
  uVar2 = unaff_R14D >> 1;
  if (((int)((in_EAX ^ param_2) - param_2) < (int)uVar2) &&
     (uVar1 = FUN_180882f00(), (int)uVar1 != 0)) {
    return uVar1;
  }
  iVar3 = (int)unaff_R15[1];
  if (iVar3 < (int)uVar2) {
    if (0 < (int)(uVar2 - iVar3)) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R15 + (longlong)iVar3 * 8,0,(ulonglong)(uVar2 - iVar3) << 3);
    }
  }
  *(uint *)(unaff_R15 + 1) = uVar2;
  uVar1 = (ulonglong)unaff_EBX;
  if (unaff_EBX == 0) {
    iVar3 = 0;
    if (unaff_R14D >> 1 != 0) {
      do {
        uVar1 = FUN_1808dde10();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
          uVar1 = FUN_1808997b0(*unaff_RSI,*unaff_R15 + (longlong)iVar3 * 8);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808de0e0();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1808dbcbc(void)
void FUN_1808dbcbc(void)

{
  return;
}



undefined8 * FUN_1808dbcd0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_1 + 1) = 0xb1e55ed1;
  *param_1 = &UNK_180984ab8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1b;
  puVar5 = (undefined4 *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  puVar6 = param_1 + 4;
  *(undefined4 *)(param_1 + 2) = *puVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *puVar6 = puVar6;
  param_1[5] = puVar6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &UNK_180988b00;
  puVar6 = (undefined8 *)FUN_180847820();
  uVar4 = puVar6[1];
  param_1[0x40] = *puVar6;
  param_1[0x41] = uVar4;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180898d8f)
// WARNING: Removing unreachable block (ram,0x000180898da0)
// WARNING: Removing unreachable block (ram,0x000180898dda)
// WARNING: Removing unreachable block (ram,0x000180898de2)
// WARNING: Removing unreachable block (ram,0x000180898dea)
// WARNING: Removing unreachable block (ram,0x000180898df0)
// WARNING: Removing unreachable block (ram,0x000180898e56)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1808dbf90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar1 = uVar2 ^ (int)uVar2 >> 0x1f;
  if ((int)(uVar1 - ((int)uVar2 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar1;
    }
    if ((0 < (int)uVar2) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar2 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if ((int)param_1[1] < 1) {
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




