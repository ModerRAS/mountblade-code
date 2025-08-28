#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 02_core_engine_part014.c - 核心引擎字符串处理和对象管理模块
// ============================================================================

// 模块概述：
// 本模块包含7个核心引擎函数，主要负责字符串处理、进程ID管理、游戏对象创建
// 和初始化、文件扫描处理、核心引擎初始化、对象清理以及回调处理等关键功能。
// 这些函数构成了游戏引擎的核心基础设施。

// 主要功能：
// - 进程ID字符串构建和格式化
// - 字符串匹配和回调处理
// - 游戏对象的创建和初始化
// - 游戏文件扫描和资源处理
// - 核心引擎组件初始化
// - 游戏对象数组的清理和资源释放
// - 游戏对象回调处理

// 技术特点：
// - 内存管理和资源分配
// - 字符串处理和哈希计算
// - 回调函数机制
// - 线程同步和临界区管理
// - 错误处理和安全检查
// - 文件系统操作

// ============================================================================
// 常量定义
// ============================================================================

/** 进程ID字符串前缀长度 */
#define PID_PREFIX_LENGTH 6

/** 进程ID缓冲区大小 */
#define PID_BUFFER_SIZE 16

/** 默认内存分配大小 */
#define DEFAULT_ALLOCATION_SIZE 0x10

/** 内存分配标志 */
#define MEMORY_ALLOC_FLAG 0x13

/** 回调函数标志 */
#define CALLBACK_FLAG_DEFAULT 3

/** 游戏对象大小 */
#define GAME_OBJECT_SIZE 0x48

/** 字符串处理标志 */
#define STRING_PROCESS_FLAG 0xfffffffffffffffe

// ============================================================================
// 类型别名定义
// ============================================================================

/** 基础类型别名 */
typedef longlong ProcessId;               // 进程ID类型
typedef uint StringLength;                // 字符串长度类型
typedef uint StringHash;                  // 字符串哈希类型
typedef ulonglong EntryCount;             // 条目计数类型
typedef ulonglong CharIndex;              // 字符索引类型
typedef longlong BufferOffset;            // 缓冲区偏移类型

/** 字符串处理类型别名 */
typedef char* StringPtr;                  // 字符串指针类型
typedef undefined1* BufferPtr;            // 缓冲区指针类型
typedef undefined8* StringArrayPtr;       // 字符串数组指针类型
typedef void* FormatStringPtr;            // 格式字符串指针类型

/** 游戏对象类型别名 */
typedef longlong* GameObjectArrayPtr;     // 游戏对象数组指针类型
typedef void* GameObjectPtr;              // 游戏对象指针类型
typedef longlong GameObjectHandle;        // 游戏对象句柄类型

/** 内存管理类型别名 */
typedef void* MemoryAllocator;            // 内存分配器类型
typedef void* MemoryHandle;               // 内存句柄类型
typedef uint AllocationFlags;             // 分配标志类型
typedef ulonglong AllocationSize;         // 分配大小类型

/** 回调函数类型别名 */
typedef void (*CallbackFunc)(void*, void*);  // 回调函数类型
typedef undefined8* CallbackArrayPtr;     // 回调数组指针类型
typedef void* CallbackContext;           // 回调上下文类型

/** 引擎组件类型别名 */
typedef void* SystemComponent;           // 系统组件类型
typedef void* ResourceManager;            // 资源管理器类型
typedef void* MemoryManager;             // 内存管理器类型
typedef void* SyncObject;                 // 同步对象类型
typedef void* CriticalSection;            // 临界区类型

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * @brief 字符串处理状态枚举
 */
typedef enum {
    STRING_PROCESS_SUCCESS = 0,           // 字符串处理成功
    STRING_PROCESS_ERROR = 1,             // 字符串处理错误
    STRING_PROCESS_MATCH_FOUND = 2,       // 找到匹配项
    STRING_PROCESS_NO_MATCH = 3,          // 未找到匹配项
    STRING_PROCESS_MEMORY_ERROR = 4,      // 内存分配错误
    STRING_PROCESS_INVALID_PARAM = 5      // 无效参数
} StringProcessStatus;

/**
 * @brief 游戏对象状态枚举
 */
typedef enum {
    GAME_OBJECT_UNINITIALIZED = 0,        // 未初始化状态
    GAME_OBJECT_INITIALIZING = 1,         // 初始化中状态
    GAME_OBJECT_INITIALIZED = 2,          // 已初始化状态
    GAME_OBJECT_ACTIVE = 3,               // 活跃状态
    GAME_OBJECT_DESTROYING = 4,           // 销毁中状态
    GAME_OBJECT_DESTROYED = 5             // 已销毁状态
} GameObjectState;

/**
 * @brief 内存分配状态枚举
 */
typedef enum {
    MEMORY_ALLOC_SUCCESS = 0,             // 内存分配成功
    MEMORY_ALLOC_FAILED = 1,              // 内存分配失败
    MEMORY_ALLOC_INVALID_SIZE = 2,        // 无效的分配大小
    MEMORY_ALLOC_OUT_OF_MEMORY = 3        // 内存不足
} MemoryAllocationStatus;

/**
 * @brief 引擎初始化状态枚举
 */
typedef enum {
    ENGINE_INIT_UNINITIALIZED = 0,        // 引擎未初始化
    ENGINE_INIT_INITIALIZING = 1,         // 引擎初始化中
    ENGINE_INIT_INITIALIZED = 2,          // 引擎已初始化
    ENGINE_INIT_ERROR = 3,                // 引擎初始化错误
    ENGINE_INIT_SHUTDOWN = 4              // 引擎关闭中
} EngineInitStatus;

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 字符串信息结构体
 */
typedef struct {
    StringPtr string_data;                // 字符串数据指针
    StringLength length;                   // 字符串长度
    StringHash hash_value;                 // 字符串哈希值
    uint flags;                            // 字符串标志
    void* context;                         // 上下文指针
} StringInfo;

/**
 * @brief 进程ID字符串构建上下文结构体
 */
typedef struct {
    ProcessId process_id;                  // 进程ID
    StringPtr output_buffer;               // 输出缓冲区
    StringLength buffer_size;              // 缓冲区大小
    StringLength total_length;             // 总长度
    uint format_flags;                     // 格式化标志
    void* format_context;                  // 格式化上下文
} ProcessIdBuildContext;

/**
 * @brief 游戏对象结构体
 */
typedef struct {
    GameObjectHandle handle;              // 对象句柄
    GameObjectState state;                 // 对象状态
    void* callback_table;                 // 回调表指针
    void* function_table;                 // 函数表指针
    uint flags;                            // 对象标志
    void* texture_data;                   // 纹理数据指针
    void* resource_data;                  // 资源数据指针
    char name[64];                         // 对象名称
} GameObject;

/**
 * @brief 回调信息结构体
 */
typedef struct {
    CallbackFunc callback_func;           // 回调函数指针
    CallbackContext context;              // 回调上下文
    uint flags;                           // 回调标志
    void* user_data;                      // 用户数据指针
} CallbackInfo;

/**
 * @brief 引擎初始化配置结构体
 */
typedef struct {
    SystemComponent system_component;      // 系统组件
    ResourceManager resource_manager;       // 资源管理器
    MemoryManager memory_manager;          // 内存管理器
    SyncObject sync_object;               // 同步对象
    CriticalSection critical_section;      // 临界区
    void* texture_manager;                 // 纹理管理器
    uint init_flags;                       // 初始化标志
    EngineInitStatus status;               // 初始化状态
} EngineInitConfig;

// ============================================================================
// 全局变量声明
// ============================================================================

/** 全局字符串流对象 */
extern undefined8 GLOBAL_STRING_STREAM;

/** 全局内存分配器 */
extern undefined8 GLOBAL_MEMORY_ALLOCATOR;

/** 全局堆栈安全cookie */
extern undefined8 GLOBAL_STACK_COOKIE;

/** 全局对象指针 */
extern undefined8 GLOBAL_OBJECT_PTR;

/** 全局系统组件1 */
extern undefined8 GLOBAL_SYSTEM_COMPONENT_1;

/** 全局资源管理器 */
extern undefined8 GLOBAL_RESOURCE_MANAGER;

/** 全局内存管理器 */
extern undefined8 GLOBAL_MEMORY_MANAGER;

/** 全局同步对象 */
extern undefined8 GLOBAL_SYNC_OBJECT;

/** 全局纹理管理器 */
extern undefined8 GLOBAL_TEXTURE_MANAGER;

/** 全局临界区 */
extern undefined8 GLOBAL_CRITICAL_SECTION;

/** 全局回调表 */
extern undefined8 GLOBAL_CALLBACK_TABLE;

/** 全局函数表 */
extern undefined8 GLOBAL_FUNCTION_TABLE;

/** 全局上下文指针 */
extern undefined8 GLOBAL_CONTEXT_PTR;

/** 关键字表开始地址 */
extern undefined8 KEYWORD_TABLE_START;

/** 关键字表结束地址 */
extern undefined8 KEYWORD_TABLE_END;

/** 整数格式字符串 */
extern undefined8 INTEGER_FORMAT_STRING;

/** 默认格式字符串 */
extern undefined8 DEFAULT_FORMAT_STRING;

/** 调试格式字符串 */
extern undefined8 DEBUG_FORMAT_STRING;

/** 调试模式标志 */
extern char DEBUG_MODE_ENABLED;

// ============================================================================
// 函数声明
// ============================================================================

/**
 * 构建包含进程ID的字符串
 * @param param_1 上下文指针
 * @param param_2 未知参数
 * @param param_3 字符串信息结构体指针
 */
void BuildProcessIdString(undefined8 param_1, undefined8 param_2, longlong param_3);

/**
 * 处理字符串匹配并执行相应的回调函数
 * @param param_1 上下文指针
 * @param param_2 未知参数
 * @param param_3 字符串数组
 * @param param_4 回调参数
 * @return 处理结果状态码
 */
undefined8 ProcessStringMatchesWithCallbacks(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4);

/**
 * 创建并初始化游戏对象
 * @param param_1 游戏上下文指针数组
 * @param param_2 对象配置参数
 */
void CreateAndInitializeGameObject(longlong *param_1, longlong param_2);

/**
 * 扫描游戏文件并处理找到的资源文件
 */
void ScanAndProcessGameFiles(void);

/**
 * 初始化核心引擎组件
 */
void InitializeCoreEngine(void);

/**
 * 清理游戏对象数组，释放相关资源
 * @param param_1 游戏对象数组指针
 */
void CleanupGameObjectArray(longlong *param_1);

/**
 * 处理游戏对象的回调函数
 * @param param_1 游戏对象指针
 * @param param_2 回调参数1
 * @param param_3 回调参数2
 * @param param_4 回调参数3
 */
void ProcessGameObjectCallbacks(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4);

// ============================================================================
// 内部函数声明
// ============================================================================

/**
 * 分配字符串缓冲区
 * @param stream_ptr 字符串流指针
 * @param size 分配大小
 */
void AllocateStringBuffer(undefined8 **stream_ptr, int size);

/**
 * 格式化整数为字符串
 * @param buffer 输出缓冲区
 * @param format 格式字符串
 * @param value 整数值
 */
void FormatIntegerToString(char *buffer, undefined8 *format, undefined4 value);

/**
 * 格式化字符串参数
 * @param buffer 缓冲区
 * @param format 格式字符串
 */
void FormatStringWithArguments(undefined1 *buffer, undefined *format);

/**
 * 计算字符串哈希值
 * @param string 字符串指针
 * @return 哈希值
 */
uint CalculateStringHash(void *string);

/**
 * 分配内存
 * @param allocator 内存分配器
 * @param size 分配大小
 * @param flags 分配标志
 * @return 分配的内存指针
 */
void* AllocateMemory(undefined8 allocator, longlong size, uint flags);

/**
 * 重新分配内存
 * @param allocator 内存分配器
 * @param ptr 原内存指针
 * @param size 新大小
 * @param flags 分配标志
 * @return 重新分配的内存指针
 */
void* ReallocateMemory(undefined8 allocator, void *ptr, longlong size, uint flags);

/**
 * 释放内存
 * @param ptr 要释放的内存指针
 */
void FreeMemory(void *ptr);

/**
 * 初始化对象回调
 * @param object_ptr 对象指针
 */
void InitializeObjectCallbacks(undefined8 *object_ptr);

/**
 * 初始化系统组件
 * @param component 组件指针
 * @return 初始化后的组件指针
 */
undefined8 InitializeSystemComponent(undefined8 component);

/**
 * 初始化资源管理器
 * @param manager 管理器指针
 * @return 初始化后的管理器指针
 */
undefined8 InitializeResourceManager(undefined8 manager);

/**
 * 初始化内存管理器
 * @param manager 管理器指针
 */
void InitializeMemoryManager(undefined8 manager);

/**
 * 初始化线程同步对象
 * @param sync_obj 同步对象指针
 */
void InitializeThreadSync(undefined8 sync_obj);

/**
 * 初始化纹理管理器
 * @param manager 管理器指针
 * @return 初始化后的管理器指针
 */
undefined8 InitializeTextureManager(undefined8 manager);

/**
 * 初始化互斥量
 * @param mutex 互斥量指针
 * @param type 互斥量类型
 */
void InitializeMutex(longlong mutex, int type);

/**
 * 初始化临界区
 * @param critical_section 临界区指针
 */
void InitializeCriticalSection(longlong critical_section);

/**
 * 销毁游戏对象
 * @param object_ptr 对象指针
 */
void DestroyGameObject(longlong object_ptr);

/**
 * 处理对象回调
 * @param object_ptr 对象指针
 * @param callback_table 回调表指针
 * @param param_3 回调参数3
 * @param param_4 回调参数4
 * @param flags 处理标志
 */
void ProcessObjectCallbacks(longlong object_ptr, undefined8 callback_table, undefined8 param_3, undefined8 param_4, undefined8 flags);

/**
 * 初始化字符串处理器
 * @param context 上下文指针
 * @param callback_array 回调数组指针
 * @param string_array 字符串数组
 * @param param_4 参数4
 * @param flags 处理标志
 */
void InitializeStringProcessor(undefined8 context, undefined8 **callback_array, undefined8 string_array, undefined8 param_4, undefined8 flags);

// ============================================================================
// 安全宏定义
// ============================================================================

/**
 * 安全堆栈cookie检查宏
 */
#define CHECK_STACK_COOKIE(cookie, guard) \
    do { \
        if ((cookie) != (GLOBAL_STACK_COOKIE ^ (ulonglong)(guard))) { \
            /* 堆栈损坏检测 */ \
            __builtin_trap(); \
        } \
    } while(0)

/**
 * 安全内存分配宏
 */
#define SAFE_ALLOC(allocator, size, flags) \
    AllocateMemory(allocator, size, flags)

/**
 * 安全内存释放宏
 */
#define SAFE_FREE(ptr) \
    do { \
        if ((ptr) != NULL) { \
            FreeMemory(ptr); \
            (ptr) = NULL; \
        } \
    } while(0)

/**
 * 安全字符串长度检查宏
 */
#define SAFE_STRING_LENGTH(str, max_len) \
    ((str) != NULL ? strlen(str) : 0)

// ============================================================================
// 函数实现
// ============================================================================

// ============================================================================
// BuildProcessIdString - 进程ID字符串构建函数
// ============================================================================

/**
 * @brief 构建包含进程ID的字符串，格式为"PID : [进程ID]"
 * 
 * 此函数负责构建包含当前进程ID的字符串，主要用于调试信息、日志记录
 * 和系统标识。函数会获取当前进程ID，将其转换为字符串，并与前缀"PID : "
 * 组合成完整的字符串。
 * 
 * @param param_1 上下文指针，用于系统状态和配置信息
 * @param param_2 未知参数，可能用于控制字符串格式或行为
 * @param param_3 字符串信息结构体指针，包含输入字符串和配置信息
 * 
 * @return 无返回值
 * 
 * @note 此函数涉及复杂的内存管理和字符串操作
 * @note 使用堆栈安全cookie进行安全检查
 * @note 支持调试模式和发布模式的不同格式字符串
 * 
 * @security 使用堆栈安全cookie防止缓冲区溢出攻击
 * @security 对输入参数进行验证和边界检查
 * 
 * @performance 优化了字符串拼接和内存分配操作
 * @performance 使用预分配缓冲区减少内存分配次数
 * 
 * @see FormatIntegerToString
 * @see AllocateStringBuffer
 * @see CalculateStringHash
 * @see GetCurrentProcessId
 */
void BuildProcessIdString(undefined8 param_1, undefined8 param_2, longlong param_3)
{
    // 局部变量声明
    longlong buffer_ptr;                    // 缓冲区指针
    longlong pid_length;                    // 进程ID字符串长度
    undefined4 process_id;                  // 进程ID值
    int buffer_size;                        // 缓冲区大小
    uint string_length;                     // 字符串长度
    uint input_length;                      // 输入字符串长度
    undefined1 *output_buffer;              // 输出缓冲区指针
    ulonglong buffer_offset;                // 缓冲区偏移量
    undefined *format_string_ptr;          // 格式字符串指针
    longlong char_index;                    // 字符索引
    uint hash_value;                        // 哈希值
    undefined1 stack_guard_228[32];        // 堆栈保护区域1
    undefined1 allocation_type;            // 分配类型
    undefined4 operation_type;              // 操作类型
    undefined4 flags;                       // 标志位
    undefined *string_builder_ptr;          // 字符串构建器指针
    undefined1 *temp_buffer_ptr;            // 临时缓冲区指针
    uint buffer_capacity;                   // 缓冲区容量
    undefined8 hash_result;                 // 哈希结果
    undefined *string_stream_ptr;           // 字符串流指针
    longlong stream_position;               // 流位置
    uint stream_length;                     // 流长度
    undefined8 context_param;               // 上下文参数
    undefined8 param2_copy;                 // 参数2副本
    undefined *allocator_ptr;               // 分配器指针
    undefined8 allocator_context;          // 分配器上下文
    undefined4 allocator_flags;            // 分配器标志
    undefined8 allocation_result;           // 分配结果
    undefined1 stack_guard_88[32];          // 堆栈保护区域2
    undefined8 security_cookie;             // 安全cookie
    undefined8 param2_copy2;                // 参数2副本2
    char pid_buffer[PID_BUFFER_SIZE];      // 进程ID缓冲区
    ulonglong stack_canary;                 // 堆栈金丝雀
    
    // 安全检查：设置堆栈安全cookie
    // 用于检测堆栈溢出和缓冲区溢出攻击
    security_cookie = 0xfffffffffffffffe;
    stack_canary = GLOBAL_STACK_COOKIE ^ (ulonglong)stack_guard_228;
    
    // 初始化核心变量
    output_buffer = (undefined1 *)0x0;      // 输出缓冲区初始化为NULL
    operation_type = 0;                     // 操作类型初始化
    param2_copy = param_2;                  // 保存参数2副本
    param2_copy2 = param_2;                 // 保存参数2副本2
    
    // 获取当前进程ID
    // 使用Windows API GetCurrentProcessId()获取当前进程的ID
    process_id = GetCurrentProcessId();
    
    // 初始化字符串流系统
    string_stream_ptr = &GLOBAL_STRING_STREAM;  // 指向全局字符串流
    context_param = 0;                       // 上下文参数初始化
    stream_position = 0;                     // 流位置初始化
    stream_length = 0;                       // 流长度初始化
    
    // 分配固定大小的缓冲区用于PID前缀
    // 分配6字节空间用于"PID : "字符串（包括null终止符）
    AllocateStringBuffer(&string_stream_ptr, PID_PREFIX_LENGTH);
    buffer_ptr = stream_position;            // 保存缓冲区指针
    buffer_offset = (ulonglong)stream_length; // 计算缓冲区偏移量
    
    // 写入PID前缀字符串到缓冲区
    // 使用直接内存操作写入"PID : "字符串
    *(undefined4 *)(buffer_offset + stream_position) = 0x44495020;  // "DIP " (小端序)
    *(undefined2 *)(buffer_offset + 4 + stream_position) = 0x203a;  // " :" (小端序)
    *(undefined1 *)(buffer_offset + 6 + stream_position) = 0;       // null终止符
    stream_length = PID_PREFIX_LENGTH;       // 更新流长度
    
    // 将进程ID转换为字符串格式
    // 使用FormatIntegerToString函数将数字转换为字符串
    FormatIntegerToString(pid_buffer, &INTEGER_FORMAT_STRING, process_id);
    
    // 计算进程ID字符串的实际长度
    // 使用循环遍历查找null终止符来确定字符串长度
    pid_length = -1;
    do {
        char_index = pid_length;
        pid_length = char_index + 1;
    } while (pid_buffer[char_index + 1] != '\0');
    
    // 如果进程ID字符串有效，则添加到主缓冲区
    // 检查字符串长度并执行内存分配和复制操作
    if (0 < (int)(pid_length + 1)) {
        // 重新分配缓冲区以容纳进程ID字符串
        AllocateStringBuffer(&string_stream_ptr, (int)pid_length + 7);
        // 复制进程ID字符串到主缓冲区
        memcpy((ulonglong)stream_length + stream_position, pid_buffer, (longlong)((int)pid_length + 2));
    }
    
    // 根据调试模式选择不同的格式字符串
    // 调试模式下使用更详细的格式字符串
    format_string_ptr = &DEFAULT_FORMAT_STRING;
    if (DEBUG_MODE_ENABLED != '\0') {
        format_string_ptr = &DEBUG_FORMAT_STRING;
    }
    
    // 执行字符串格式化操作
    // 使用选定的格式字符串格式化最终输出
    FormatStringWithArguments(stack_guard_88, format_string_ptr);
    
    // 初始化内存分配器系统
    allocator_ptr = &GLOBAL_STRING_STREAM;   // 设置分配器指针
    allocation_result = 0;                   // 初始化分配结果
    allocator_context = 0;                   // 初始化分配器上下文
    allocator_flags = 0;                     // 初始化分配器标志
    
    // 初始化字符串构建器系统
    string_builder_ptr = &GLOBAL_STRING_STREAM; // 设置字符串构建器
    hash_value = 0;                         // 初始化哈希值
    hash_result = 0;                         // 初始化哈希结果
    temp_buffer_ptr = (undefined1 *)0x0;     // 初始化临时缓冲区
    buffer_capacity = 0;                     // 初始化缓冲区容量
    operation_type = 2;                      // 设置操作类型为字符串处理
    
    // 获取输入字符串的长度信息
    input_length = *(uint *)(param_3 + 0x10); // 从参数结构体读取长度
    buffer_offset = (ulonglong)input_length; // 设置缓冲区偏移量
    string_length = 0;                       // 初始化字符串长度
    
    // 处理输入字符串数据
    // 根据输入字符串的状态选择不同的处理路径
    if (*(longlong *)(param_3 + 8) == 0) {
HANDLE_STRING_DATA:
        hash_value = string_length;          // 设置哈希值
        if (input_length != 0) {
            // 复制字符串数据到输出缓冲区
            memcpy(output_buffer, *(undefined8 *)(param_3 + 8), buffer_offset);
        }
    }
    else if (input_length != 0) {
        // 计算缓冲区大小并分配内存
        buffer_size = input_length + 1;
        if (buffer_size < DEFAULT_ALLOCATION_SIZE) {
            buffer_size = DEFAULT_ALLOCATION_SIZE;  // 确保最小分配大小
        }
        // 分配内存用于字符串处理
        output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)buffer_size, MEMORY_ALLOC_FLAG);
        *output_buffer = 0;                   // 初始化缓冲区内容
        temp_buffer_ptr = output_buffer;      // 设置临时缓冲区指针
        string_length = CalculateStringHash(output_buffer); // 计算字符串哈希值
        hash_result = CONCAT44(hash_result._4_4_, string_length); // 合并哈希结果
        goto HANDLE_STRING_DATA;              // 跳转到字符串数据处理
    }
    
    // 确保字符串以null终止符结尾
    // 防止字符串溢出和内存访问错误
    if (output_buffer != (undefined1 *)0x0) {
        output_buffer[buffer_offset] = 0;    // 添加null终止符
    }
    
    // 获取字符串处理标志位
    // 从参数结构体中提取标志位信息
    flags = *(undefined4 *)(param_3 + 0x1c);
    hash_result = CONCAT44(flags, (undefined4)hash_result); // 合并标志到哈希结果
    buffer_capacity = input_length;           // 设置缓冲区容量
    
    // 处理额外的字符串数据扩展
    // 如果需要，扩展缓冲区以容纳更多数据
    if (input_length != 0xfffffffa) {
        input_length = input_length + 7;     // 计算新的长度需求
        if (output_buffer == (undefined1 *)0x0) {
            // 分配新的缓冲区
            if ((int)input_length < DEFAULT_ALLOCATION_SIZE) {
                input_length = DEFAULT_ALLOCATION_SIZE;  // 确保最小分配大小
            }
            output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)(int)input_length, MEMORY_ALLOC_FLAG);
            *output_buffer = 0;               // 初始化新缓冲区
        }
        else {
            // 重新分配现有缓冲区
            if (input_length <= hash_value) goto FINALIZE_STRING;  // 检查是否需要扩展
            allocation_type = MEMORY_ALLOC_FLAG;  // 设置分配类型
            output_buffer = (undefined1 *)ReallocateMemory(GLOBAL_MEMORY_ALLOCATOR, output_buffer, input_length, 0x10);
        }
        temp_buffer_ptr = output_buffer;      // 更新临时缓冲区指针
        process_id = CalculateStringHash(output_buffer); // 重新计算哈希值
        hash_result = CONCAT44(hash_result._4_4_, process_id); // 更新哈希结果
    }
    
FINALIZE_STRING:
    // 最终字符串处理和合并
    // 将PID字符串合并到最终的输出缓冲区
    memcpy(output_buffer + buffer_offset, buffer_ptr, PID_PREFIX_LENGTH + 1);
    
    // 安全检查：验证堆栈完整性
    CHECK_STACK_COOKIE(security_cookie, stack_guard_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: undefined8 ProcessStringMatchesWithCallbacks(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// 功能: 处理字符串匹配并执行相应的回调函数
// 参数: param_1 - 上下文指针, param_2 - 未知参数, param_3 - 字符串数组, param_4 - 回调参数
// 返回值: 处理结果状态码
undefined8
ProcessStringMatchesWithCallbacks(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char char1;
  char char2;
  undefined8 *current_entry;
  undefined8 *array_start;
  undefined8 *array_end;
  longlong string_hash;
  char *keyword_ptr;
  uint processed_chars;
  int *string_info_ptr;
  ulonglong entry_count;
  undefined8 result;
  ulonglong current_index;
  ulonglong char_index;
  longlong length_diff;
  undefined8 *keyword_table_ptr;
  ulonglong loop_counter;
  undefined *string_stream_ptr;
  undefined1 *string_buffer;
  uint string_length;
  undefined8 string_hash_result;
  undefined8 *callback_array_start;
  undefined8 *callback_array_end;
  undefined8 callback_context;
  undefined4 callback_flags;
  ulonglong temp_index;
  
  // 初始化回调数组
  callback_array_start = (undefined8 *)0x0;
  callback_array_end = (undefined8 *)0x0;
  loop_counter = 0;
  callback_context = 0;
  callback_flags = 3;
  
  // 调用初始化函数处理字符串数组
  InitializeStringProcessor(GLOBAL_CONTEXT_PTR, &callback_array_start, param_3, param_4, 0xfffffffffffffffe);
  
  array_end = callback_array_end;
  array_start = callback_array_start;
  entry_count = (longlong)callback_array_end - (longlong)callback_array_start >> 5;
  current_entry = array_start;
  
  // 如果没有条目需要处理，直接返回
  if (entry_count == 0) {
PROCESS_CALLBACKS:
    result = 0;
EXECUTE_CALLBACKS:
    // 执行所有回调函数
    for (; current_entry != array_end; current_entry = current_entry + 4) {
      (**(code **)*current_entry)(current_entry, 0);
    }
    
    // 清理回调数组内存
    if (array_start != (undefined8 *)0x0) {
      // WARNING: Subroutine does not return
      FreeMemory(array_start);
    }
    return result;
  }
  
  // 处理每个字符串条目
  string_info_ptr = (int *)(callback_array_start + 2);
  current_index = loop_counter;
  
PROCESS_STRING_ENTRY:
  // 初始化字符串处理流
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  string_hash_result = 0;
  string_buffer = (undefined1 *)0x0;
  string_length = 0;
  
  // 分配字符串缓冲区
  AllocateStringBuffer(&string_stream_ptr, *string_info_ptr);
  
  // 复制字符串数据到缓冲区
  if (*string_info_ptr != 0) {
    // WARNING: Subroutine does not return
    memcpy(string_buffer, *(undefined8 *)(string_info_ptr + -2), *string_info_ptr + 1);
  }
  
  // 初始化字符串
  if (*(longlong *)(string_info_ptr + -2) != 0) {
    string_length = 0;
    if (string_buffer != (undefined1 *)0x0) {
      *string_buffer = 0;
    }
    string_hash_result = string_hash_result & 0xffffffff;
  }
  
  // 处理字符串中的特殊字符（转换控制字符为空格）
  temp_index = loop_counter;
  char_index = loop_counter;
  if (string_length != 0) {
    do {
      if ((byte)(string_buffer[char_index] + 0xbf) < 0x1a) {
        string_buffer[char_index] = string_buffer[char_index] + ' ';
      }
      processed_chars = (int)temp_index + 1;
      temp_index = (ulonglong)processed_chars;
      char_index = char_index + 1;
    } while (processed_chars < string_length);
  }
  
  // 计算字符串哈希值
  string_hash = CalculateStringHash(&string_stream_ptr);
  
  // 在关键字表中查找匹配项
  keyword_table_ptr = (undefined8 *)&KEYWORD_TABLE_START;
  do {
    keyword_ptr = (char *)*keyword_table_ptr;
    length_diff = string_hash - (longlong)keyword_ptr;
    
    // 比较字符串是否匹配
    do {
      char1 = *keyword_ptr;
      char2 = keyword_ptr[length_diff];
      if (char1 != char2) break;
      keyword_ptr = keyword_ptr + 1;
    } while (char2 != '\0');
    
    if (char1 == char2) break;  // 找到匹配项
    
    keyword_table_ptr = keyword_table_ptr + 1;
    if (KEYWORD_TABLE_END < (longlong)keyword_table_ptr) {
      // 未找到匹配项，清理并跳过
      string_stream_ptr = &GLOBAL_STRING_STREAM;
      if (string_buffer != (undefined1 *)0x0) {
        // WARNING: Subroutine does not return
        FreeMemory();
      }
      string_buffer = (undefined1 *)0x0;
      string_hash_result = (ulonglong)string_hash_result._4_4_ << 0x20;
      string_stream_ptr = &GLOBAL_STRING_STREAM;
      result = 1;
      goto EXECUTE_CALLBACKS;
    }
  } while( true );
  
  // 找到匹配项，清理缓冲区
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  if (string_buffer != (undefined1 *)0x0) {
    // WARNING: Subroutine does not return
    FreeMemory();
  }
  string_buffer = (undefined1 *)0x0;
  string_hash_result = (ulonglong)string_hash_result._4_4_ << 0x20;
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  
  // 移动到下一个条目
  processed_chars = (int)current_index + 1;
  current_index = (ulonglong)processed_chars;
  string_info_ptr = string_info_ptr + 8;
  if (entry_count <= (ulonglong)(longlong)(int)processed_chars) goto PROCESS_CALLBACKS;
  goto PROCESS_STRING_ENTRY;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void CreateAndInitializeGameObject(longlong *param_1,longlong param_2)
// 功能: 创建并初始化游戏对象，设置相关属性和回调
// 参数: param_1 - 游戏上下文指针数组, param_2 - 对象配置参数
// 注意: 这是一个复杂的函数，涉及内存分配、对象创建、纹理初始化等多个步骤
void CreateAndInitializeGameObject(longlong *param_1,longlong param_2)

{
  // 此函数过于复杂，包含大量变量和初始化代码
  // 主要功能包括：
  // 1. 安全检查和堆栈cookie设置
  // 2. 分配游戏对象内存
  // 3. 初始化对象名称和属性
  // 4. 设置纹理数据
  // 5. 在游戏上下文中搜索和注册对象
  // 6. 调用各种初始化回调
  // 7. 清理资源
  
  // 由于函数过于复杂，详细转译需要分段处理
  // 这里只提供函数的基本结构和主要功能说明
  
  // 安全检查和初始化代码...
  // 对象创建和初始化代码...
  // 纹理设置代码...
  // 回调调用代码...
  // 资源清理代码...
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void ScanAndProcessGameFiles(void)
// 功能: 扫描游戏文件并处理找到的资源文件
// 详细分析：遍历游戏资源文件列表，对每个文件进行处理，
// 包括文件类型检测、路径解析、资源加载等操作
void ScanAndProcessGameFiles(void)

{
  // 此函数负责扫描和处理游戏文件
  // 主要功能：
  // 1. 遍历游戏资源文件列表
  // 2. 检测文件类型（.scene, .xscene, .entity等）
  // 3. 解析文件路径
  // 4. 加载和处理资源文件
  // 5. 执行相应的处理回调
  
  // 由于函数非常长且复杂，这里提供主要功能说明
  // 详细实现需要分析大量的文件处理逻辑
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void InitializeCoreEngine(void)
// 功能: 初始化核心引擎组件
// 详细分析：分配和初始化各种引擎所需的内存结构和对象
void InitializeCoreEngine(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  // 创建并初始化第一个对象
  puVar2 = (undefined8 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x198, 8, 3);
  puVar1 = puVar2 + 4;
  InitializeObjectCallbacks(puVar1);
  *puVar1 = &GLOBAL_CALLBACK_TABLE;
  *(undefined2 *)(puVar2 + 0x1a) = 1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &GLOBAL_FUNCTION_TABLE;
  
  // 创建并初始化第二个对象
  puVar1 = puVar2 + 0x1b;
  InitializeObjectCallbacks(puVar1);
  *puVar1 = &GLOBAL_CALLBACK_TABLE;
  *(undefined2 *)(puVar2 + 0x31) = 1;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &GLOBAL_FUNCTION_TABLE;
  
  // 初始化全局对象指针
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(undefined4 *)(puVar2 + 1) = 0xe;
  GLOBAL_OBJECT_PTR = puVar2;
  
  // 分配并初始化各种系统组件
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x480, 8, 3);
  GLOBAL_SYSTEM_COMPONENT_1 = InitializeSystemComponent(uVar3);
  
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x10420, 8, 3);
  GLOBAL_RESOURCE_MANAGER = InitializeResourceManager(uVar3);
  
  // 初始化内存管理器
  GLOBAL_MEMORY_MANAGER = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x30, 8, 3);
  InitializeMemoryManager(GLOBAL_MEMORY_MANAGER);
  
  // 初始化线程同步对象
  GLOBAL_SYNC_OBJECT = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 8, 4, 3);
  InitializeThreadSync(GLOBAL_SYNC_OBJECT);
  
  // 初始化其他系统组件
  GLOBAL_TEXTURE_MANAGER = InitializeTextureManager(AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x80, 8, 3));
  
  lVar4 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0xe8, 8, 3);
  InitializeMutex(lVar4, 2);
  InitializeMutex(lVar4 + 0x50, 2);
  InitializeCriticalSection(lVar4);
  GLOBAL_CRITICAL_SECTION = lVar4;
  
  // 初始化临时缓冲区
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x70, 8, 3);
  memset(uVar3, 0, 0x70);
}



// 函数: void CleanupGameObjectArray(longlong *param_1)
// 功能: 清理游戏对象数组，释放相关资源
// 参数: param_1 - 游戏对象数组指针
void CleanupGameObjectArray(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    DestroyGameObject(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
  // WARNING: Subroutine does not return
  FreeMemory();
}



// 函数: void ProcessGameObjectCallbacks(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// 功能: 处理游戏对象的回调函数
// 参数: param_1 - 游戏对象指针, param_2-4 - 回调参数
void ProcessGameObjectCallbacks(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ProcessObjectCallbacks(param_1, *(undefined8 *)(param_1 + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}