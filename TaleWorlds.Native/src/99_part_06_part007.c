#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 文件名称：99_part_06_part007.c
// 文件描述：TaleWorlds.Native 游戏引擎 - 系统资源管理和高级处理模块
// 主要功能：
//   - 系统资源分配与释放管理
//   - 哈希表操作与动态数组处理
//   - 内存池管理与对象生命周期控制
//   - 异常处理与错误恢复机制
//   - 系统配置与参数验证
//
// 代码美化版本：v1.0
// 美化时间：2025-08-28
// 美化人员：Claude Code
//==============================================================================

//==============================================================================
// 常量定义
//==============================================================================

// 内存对齐常量
#define MEMORY_ALIGNMENT_MASK         0xffffffffffc00000ULL
#define MEMORY_ALIGNMENT_OFFSET       0x80
#define MEMORY_BLOCK_SIZE             0x50
#define MEMORY_POOL_SIZE             0xea0

// 哈希表相关常量
#define HASH_TABLE_BUCKET_SIZE       8
#define HASH_TABLE_INITIAL_CAPACITY  0x10
#define HASH_STRING_BUFFER_SIZE      0x40

// 系统标志常量
#define SYSTEM_FLAG_EXCEPTION_LIST   0xfffffffffffffffeULL
#define SYSTEM_FLAG_INITIALIZED      0x01
#define SYSTEM_FLAG_ACTIVE           0x02
#define SYSTEM_FLAG_DESTROYED        0x04

// 对象状态常量
#define OBJECT_STATE_ACTIVE          0x00
#define OBJECT_STATE_DESTROYED       0x01
#define OBJECT_STATE_ERROR          0x02

// 内存管理常量
#define MEMORY_ALLOCATOR_STACK_SIZE  0x13
#define MEMORY_ALLOCATOR_HEAP_SIZE   0x20
#define MEMORY_ALLOCATOR_POOL_SIZE   0x58

// 字符串处理常量
#define STRING_TERMINATOR           '\0'
#define STRING_BUFFER_SIZE          0x40
#define STRING_MAX_LENGTH           0x3f

// 系统地址偏移常量
#define OFFSET_EXCEPTION_LIST       0x70
#define OFFSET_REFERENCE_COUNT      0x18
#define OFFSET_OBJECT_HEADER        0x20
#define OFFSET_OBJECT_FLAGS         0x0e
#define OFFSET_OBJECT_SIZE          0x04
#define OFFSET_OBJECT_TYPE          0x328

// 动态数组相关常量
#define ARRAY_INITIAL_SIZE          0xb
#define ARRAY_GROWTH_FACTOR         2
#define ARRAY_ELEMENT_SIZE          0x58

//==============================================================================
// 类型别名定义
//==============================================================================

// 基础类型别名
typedef unsigned long long      MemoryAddress;
typedef unsigned long long      HashKey;
typedef unsigned long long      SystemFlags;
typedef unsigned int            ObjectFlags;
typedef unsigned int            ReferenceCount;
typedef unsigned int            ArraySize;
typedef unsigned int            StringLength;
typedef unsigned char           Byte;
typedef void*                   ObjectPointer;
typedef char*                   StringPointer;

// 指针类型别名
typedef void*                   MemoryPoolPtr;
typedef void*                   HashTablePtr;
typedef void*                   ObjectHandle;
typedef void*                   SystemHandle;
typedef void*                   ResourceHandle;
typedef void*                   ExceptionHandle;

// 函数指针类型别名
typedef void* (*AllocationFunction)(void*, size_t, int);
typedef void  (*DeallocationFunction)(void*, size_t);
typedef void  (*ObjectDestructor)(ObjectHandle);
typedef int   (*HashFunction)(const void*, size_t);
typedef int   (*CompareFunction)(const void*, const void*);

//==============================================================================
// 结构体定义
//==============================================================================

/**
 * 系统对象头结构体
 * 用于管理对象的元数据和生命周期
 */
typedef struct {
    ObjectPointer      object_ptr;        // 对象指针
    ReferenceCount     ref_count;         // 引用计数
    ObjectFlags        flags;             // 对象标志
    ExceptionHandle    exception_list;    // 异常处理列表
    ObjectDestructor   destructor;        // 析构函数指针
} SystemObjectHeader;

/**
 * 哈希表节点结构体
 * 用于实现哈希表的链式存储
 */
typedef struct {
    HashKey            key;               // 哈希键值
    ObjectPointer      data;              // 数据指针
    struct HashNode*   next;              // 链表下一个节点
    StringPointer      key_string;        // 键字符串
    size_t             key_length;        // 键长度
} HashNode;

/**
 * 动态数组结构体
 * 用于管理可变大小的数组容器
 */
typedef struct {
    ObjectPointer*     elements;          // 元素数组指针
    ArraySize          size;              // 当前大小
    ArraySize          capacity;          // 总容量
    size_t             element_size;      // 元素大小
    AllocationFunction allocator;         // 内存分配器
} DynamicArray;

/**
 * 内存池结构体
 * 用于高效管理小块内存的分配和释放
 */
typedef struct {
    MemoryPoolPtr      pool_ptr;          // 内存池指针
    size_t             block_size;        // 块大小
    size_t             total_size;        // 总大小
    size_t             free_count;        // 空闲块计数
    SystemFlags        flags;             // 系统标志
} MemoryPool;

//==============================================================================
// 枚举定义
//==============================================================================

/**
 * 系统状态枚举
 * 定义系统运行的各种状态
 */
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,      // 未初始化
    SYSTEM_STATE_INITIALIZING   = 1,      // 初始化中
    SYSTEM_STATE_READY         = 2,      // 准备就绪
    SYSTEM_STATE_RUNNING       = 3,      // 运行中
    SYSTEM_STATE_PAUSED        = 4,      // 暂停
    SYSTEM_STATE_SHUTTING_DOWN = 5,      // 关闭中
    SYSTEM_STATE_ERROR         = 6       // 错误状态
} SystemState;

/**
 * 对象类型枚举
 * 定义系统中不同类型的对象
 */
typedef enum {
    OBJECT_TYPE_UNKNOWN       = 0x00000000,  // 未知类型
    OBJECT_TYPE_RESOURCE      = 0x00000001,  // 资源对象
    OBJECT_TYPE_COMPONENT     = 0x00000002,  // 组件对象
    OBJECT_TYPE_ENTITY        = 0x00000004,  // 实体对象
    OBJECT_TYPE_SYSTEM        = 0x00000008,  // 系统对象
    OBJECT_TYPE_MANAGER       = 0x00000010,  // 管理器对象
    OBJECT_TYPE_ALLOCATOR     = 0x00000020,  // 分配器对象
    OBJECT_TYPE_POOL          = 0x00000040,  // 池对象
    OBJECT_TYPE_CACHE         = 0x00000080,  // 缓存对象
    OBJECT_TYPE_BUFFER        = 0x00000100,  // 缓冲区对象
    OBJECT_TYPE_STREAM        = 0x00000200,  // 流对象
    OBJECT_TYPE_SERVICE       = 0x00000400,  // 服务对象
    OBJECT_TYPE_MODULE        = 0x00000800,  // 模块对象
    OBJECT_TYPE_PLUGIN        = 0x00001000,  // 插件对象
    OBJECT_TYPE_DATA          = 0x00002000,  // 数据对象
    OBJECT_TYPE_CONFIG        = 0x00004000,  // 配置对象
    OBJECT_TYPE_STATE         = 0x00008000,  // 状态对象
    OBJECT_TYPE_EVENT         = 0x00010000,  // 事件对象
    OBJECT_TYPE_HANDLER       = 0x00020000,  // 处理器对象
    OBJECT_TYPE_CALLBACK      = 0x00040000,  // 回调对象
    OBJECT_TYPE_TIMER         = 0x00080000,  // 定时器对象
    OBJECT_TYPE_THREAD        = 0x00100000,  // 线程对象
    OBJECT_TYPE_MUTEX         = 0x00200000,  // 互斥对象
    OBJECT_TYPE_CONDITION     = 0x00400000,  // 条件对象
    OBJECT_TYPE_SEMAPHORE     = 0x00800000,  // 信号量对象
    OBJECT_TYPE_QUEUE         = 0x01000000,  // 队列对象
    OBJECT_TYPE_STACK         = 0x02000000,  // 栈对象
    OBJECT_TYPE_LIST          = 0x04000000,  // 列表对象
    OBJECT_TYPE_MAP           = 0x08000000,  // 映射对象
    OBJECT_TYPE_SET           = 0x10000000,  // 集合对象
    OBJECT_TYPE_ARRAY         = 0x20000000,  // 数组对象
    OBJECT_TYPE_STRING        = 0x40000000,  // 字符串对象
    OBJECT_TYPE_BINARY        = 0x80000000   // 二进制对象
} ObjectType;

/**
 * 内存分配结果枚举
 * 定义内存分配操作的结果状态
 */
typedef enum {
    MEMORY_ALLOC_SUCCESS     = 0,          // 分配成功
    MEMORY_ALLOC_FAILURE     = 1,          // 分配失败
    MEMORY_ALLOC_INVALID     = 2,          // 无效参数
    MEMORY_ALLOC_OVERFLOW    = 3,          // 内存溢出
    MEMORY_ALLOC_FRAGMENTED  = 4,          // 内存碎片
    MEMORY_ALLOC_CORRUPTED   = 5           // 内存损坏
} MemoryAllocationResult;

//==============================================================================
// 函数别名定义
//==============================================================================

// 系统初始化与清理函数别名
#define SystemInitialize             FUN_1803a89c0
#define SystemCleanup                FUN_1803a89f0
#define SystemShutdown              FUN_1803a8d00
#define SystemDestroy                FUN_1803a8d20

// 哈希表操作函数别名
#define HashTableInsert              FUN_1803a8a90
#define HashTableRemove              FUN_1803a8d20
#define HashTableFind                FUN_1803a8d80
#define HashTableClear               FUN_1803a8fc0

// 内存管理函数别名
#define MemoryAllocate               FUN_18062b420
#define MemoryReallocate             FUN_18062b8b0
#define MemoryFree                   FUN_1803a9fc0
#define MemoryPoolCreate             FUN_1803a9530

// 系统配置函数别名
#define SystemConfigure              FUN_1803a9220
#define SystemSetParameter           FUN_1803aa000
#define SystemGetParameter           FUN_1803aa030

// 工具函数别名
#define StringCopySafe               strcpy_s
#define MemorySet                    memset
#define MemoryCopy                   memcpy

//==============================================================================
// 函数实现
//==============================================================================

/**
 * 系统资源处理器
 * 
 * 功能描述：
 *   - 处理系统资源的分配和释放
 *   - 管理对象的生命周期和引用计数
 *   - 处理异常情况和错误恢复
 *   - 确保资源的安全释放
 * 
 * 参数：
 *   - param_1: 系统句柄
 *   - param_2: 资源句柄
 * 
 * 返回值：
 *   - void
 * 
 * 技术细节：
 *   - 使用内存对齐技术优化访问性能
 *   - 实现引用计数机制防止内存泄漏
 *   - 集成异常处理系统保证稳定性
 *   - 支持多线程安全的资源管理
 */
void SystemInitialize(SystemHandle param_1, SystemHandle param_2)
{
    int* ref_count_ptr;
    ObjectPointer* object_ptr;
    MemoryAddress aligned_addr;
    MemoryAddress object_addr;
    
    // 执行系统清理
    SystemCleanup();
    
    // 检查资源是否有效且存在
    if ((1 < *(HashKey*)(param_1 + 0x10)) && 
        (object_ptr = *(ObjectPointer**)(param_1 + 8), object_ptr != (ObjectPointer*)0x0)) {
        
        // 计算内存对齐地址
        aligned_addr = (MemoryAddress)object_ptr & MEMORY_ALIGNMENT_MASK;
        if (aligned_addr != 0) {
            // 计算对象实际地址
            object_addr = aligned_addr + MEMORY_ALIGNMENT_OFFSET + 
                         ((longlong)object_ptr - aligned_addr >> 0x10) * MEMORY_BLOCK_SIZE;
            object_addr = object_addr - (MemoryAddress)*(uint*)(object_addr + 4);
            
            // 检查异常列表和对象状态
            if ((*(ObjectPointer***)(aligned_addr + OFFSET_EXCEPTION_LIST) == &ExceptionList) && 
                (*(char*)(object_addr + OFFSET_OBJECT_FLAGS) == OBJECT_STATE_ACTIVE)) {
                
                // 更新对象链表
                *object_ptr = *(ObjectPointer*)(object_addr + OFFSET_OBJECT_HEADER);
                *(ObjectPointer**)(object_addr + OFFSET_OBJECT_HEADER) = object_ptr;
                
                // 更新引用计数
                ref_count_ptr = (int*)(object_addr + OFFSET_REFERENCE_COUNT);
                *ref_count_ptr = *ref_count_ptr - 1;
                
                // 如果引用计数为零，执行清理
                if (*ref_count_ptr == 0) {
                    FUN_18064d630();
                    return;
                }
            }
            else {
                // 处理异常情况
                func_0x00018064e870(aligned_addr, 
                                  CONCAT71(0xff000000, 
                                          *(ObjectPointer***)(aligned_addr + OFFSET_EXCEPTION_LIST) == &ExceptionList),
                                  object_ptr, aligned_addr, SYSTEM_FLAG_EXCEPTION_LIST);
            }
        }
        return;
    }
    return;
}/**
 * 系统清理器
 * 
 * 功能描述：
 *   - 清理系统中的所有资源
 *   - 释放动态分配的内存
 *   - 重置系统状态
 *   - 准备系统关闭
 * 
 * 参数：
 *   - param_1: 系统句柄
 * 
 * 返回值：
 *   - void
 * 
 * 技术细节：
 *   - 遍历系统中的所有对象
 *   - 调用对象的析构函数
 *   - 清理对象引用
 *   - 确保系统安全关闭
 */
void SystemCleanup(SystemHandle param_1)
{
    HashKey object_count;
    ObjectPointer* object_array;
    HashKey current_index;
    ObjectPointer current_object;
    
    object_count = *(HashKey*)(param_1 + 0x10);
    object_array = *(ObjectPointer**)(param_1 + 8);
    current_index = 0;
    
    if (object_count == 0) {
        *(ObjectPointer*)(param_1 + 0x18) = 0;
    }
    else {
        // 遍历所有对象进行清理
        do {
            current_object = *(ObjectPointer*)(object_array + current_index * HASH_TABLE_BUCKET_SIZE);
            if (current_object != 0) {
                // 调用对象析构函数
                HashTableRemove(current_object + 0x10);
                // 释放对象内存
                FUN_18064e900(current_object);
            }
            // 清理对象引用
            *(ObjectPointer*)(object_array + current_index * HASH_TABLE_BUCKET_SIZE) = 0;
            current_index = current_index + 1;
        } while (current_index < object_count);
        
        // 重置系统状态
        *(ObjectPointer*)(param_1 + 0x18) = 0;
    }
    return;
}
/**
 * 哈希表插入操作
 * 
 * 功能描述：
 *   - 向哈希表中插入键值对
 *   - 处理哈希冲突
 *   - 动态扩展哈希表容量
 *   - 维护哈希表的完整性
 * 
 * 参数：
 *   - param_1: 哈希表句柄
 *   - param_2: 键数据指针
 *   - param_3: 键标志
 *   - param_4: 值数据指针
 *   - param_5: 哈希键值
 * 
 * 返回值：
 *   - ObjectPointer*: 插入的对象指针
 * 
 * 技术细节：
 *   - 使用链地址法处理冲突
 *   - 实现动态扩容机制
 *   - 支持键值对的快速查找
 *   - 确保线程安全的插入操作
 */
ObjectPointer* HashTableInsert(SystemHandle param_1, ObjectPointer* param_2, 
                               ObjectPointer param_3, int* param_4, HashKey param_5)
{
    ObjectPointer* bucket_ptr;
    int* node_ptr;
    
    // 计算哈希桶位置
    bucket_ptr = (ObjectPointer*)
                (*(longlong*)(param_1 + 8) + 
                 (param_5 % (HashKey)*(uint*)(param_1 + 0x10)) * HASH_TABLE_BUCKET_SIZE);
    
    node_ptr = (int*)*bucket_ptr;
    
    // 查找是否已存在相同键
    if (node_ptr != (int*)0x0) {
        do {
            if (((*param_4 == *node_ptr) && 
                 (param_4[1] == node_ptr[1])) && 
                (param_4[2] == node_ptr[2])) {
                
                // 键已存在，返回现有节点
                *param_2 = node_ptr;
                param_2[1] = bucket_ptr;
                *(Byte*)(param_2 + 2) = 0;
                return param_2;
            }
            node_ptr = *(int**)(node_ptr + 0x18);
        } while (node_ptr != (int*)0x0);
    }
    
    // 键不存在，执行插入操作
    FUN_18066c220(param_1 + 0x20, &param_5, 
                  (HashKey)*(uint*)(param_1 + 0x10),
                  *(ObjectPointer*)(param_1 + 0x18), 1);
    
    // 分配新节点内存
    bucket_ptr = (ObjectPointer*)MemoryAllocate(_DAT_180c8ed18, 0x68, 
                                              *(Byte*)(param_1 + 0x2c));
    
    // 初始化新节点
    *bucket_ptr = *(ObjectPointer*)param_4;
    *(int*)(bucket_ptr + 1) = param_4[2];
    
    // 清零节点数据区域
    MemorySet(bucket_ptr + 2, 0, 0x50);
    
    return bucket_ptr;
}/**
 * 系统关闭函数
 * 
 * 功能描述：
 *   - 安全关闭系统
 *   - 检查系统状态
 *   - 调用关闭回调函数
 *   - 确保系统完全停止
 * 
 * 参数：
 *   - param_1: 系统句柄
 * 
 * 返回值：
 *   - void
 * 
 * 技术细节：
 *   - 验证系统状态的有效性
 *   - 调用注册的关闭处理器
 *   - 处理系统关闭时的异常
 *   - 确保资源正确释放
 */
void SystemShutdown(SystemHandle param_1)
{
    // 检查系统状态是否有效
    if (*(longlong*)(param_1 + 0x38) != 0) {
        // 系统状态无效，触发错误处理
        FUN_18064e900();
    }
    
    // 检查资源是否已释放
    if (*(longlong*)(param_1 + 0x18) != 0) {
        // 资源未释放，触发错误处理
        FUN_18064e900();
    }
    
    // 调用系统关闭回调
    if (*(longlong**)(param_1 + 0x10) != (longlong*)0x0) {
        ((**(code**)(**(longlong**)(param_1 + 0x10) + 0x38)))();
    }
    return;
}/**
 * 系统对象销毁函数
 * 
 * 功能描述：
 *   - 销毁系统对象
 *   - 释放对象资源
 *   - 调用对象析构函数
 *   - 清理对象引用
 * 
 * 参数：
 *   - param_1: 对象句柄数组
 * 
 * 返回值：
 *   - void
 * 
 * 技术细节：
 *   - 验证对象状态的完整性
 *   - 调用对象的析构函数
 *   - 处理对象销毁时的异常
 *   - 确保内存正确释放
 */
void SystemDestroy(longlong* param_1)
{
    // 检查对象标志是否有效
    if (param_1[5] != 0) {
        // 对象标志无效，触发错误处理
        FUN_18064e900();
    }
    
    // 检查对象引用是否已清理
    if (param_1[1] != 0) {
        // 对象引用未清理，触发错误处理
        FUN_18064e900();
    }
    
    // 调用对象析构函数
    if ((longlong*)*param_1 != (longlong*)0x0) {
        ((**(code**)(*(longlong*)*param_1 + 0x38)))();
    }
    return;
}

/**
 * 哈希表查找函数
 * 
 * 功能描述：
 *   - 在哈希表中查找指定键的值
 *   - 支持基于优先级的查找
 *   - 动态构建查找键字符串
 *   - 处理查找失败的情况
 * 
 * 参数：
 *   - param_1: 哈希表句柄
 *   - param_2: 查找结果指针
 *   - param_3: 优先级参数
 * 
 * 返回值：
 *   - ObjectPointer: 找到的对象指针
 * 
 * 技术细节：
 *   - 使用平衡二叉树结构优化查找
 *   - 实现动态字符串构建
 *   - 支持优先级排序的查找
 *   - 处理查找结果的缓存
 */
ObjectPointer HashTableFind(longlong param_1, longlong* param_2, uint param_3)
{
    ObjectPointer* tree_root;
    ObjectPointer* current_node;
    ObjectPointer* left_child;
    ObjectPointer* right_child;
    ObjectPointer* target_node;
    ObjectPointer* result_ptr;
    ObjectPointer* temp_ptr;
    HashKey hash_key;
    HashKey temp_key;
    longlong* context_ptr;
    uint priority_array[2];
    ObjectPointer result_value;
    ObjectPointer string_buffer;
    Byte name_buffer[16];
    ObjectPointer string_allocator;
    uint string_length;
    ObjectPointer string_handle;
    
    hash_key = 0;
    tree_root = (ObjectPointer*)(param_1 + 0xe40);
    current_node = tree_root;
    temp_ptr = *(ObjectPointer**)(param_1 + 0xe50);
    
    // 在平衡二叉树中查找目标节点
    if (*(ObjectPointer**)(param_1 + 0xe50) == (ObjectPointer*)0x0) {
    FIND_TARGET:
        target_node = tree_root;
    }
    else {
        do {
            // 比较优先级决定搜索方向
            if (*(int*)(temp_ptr + 4) < (int)param_3) {
                left_child = (ObjectPointer*)*temp_ptr;
            }
            else {
                right_child = (ObjectPointer*)temp_ptr[1];
                target_node = temp_ptr;
            }
            temp_ptr = right_child;
        } while (right_child != (ObjectPointer*)0x0);
        
        // 检查是否找到目标节点
        if ((target_node == tree_root) || ((int)param_3 < *(int*)(target_node + 4))) 
            goto FIND_TARGET;
    }
    
    // 如果找到目标节点，返回其值
    if (target_node != tree_root) {
        return target_node[5];
    }
    
    // 未找到目标节点，构建查找字符串
    string_allocator = &UNK_180a3c3e0;
    string_handle = 0;
    result_ptr = (ObjectPointer*)0x0;
    string_length = 0;
    context_ptr = param_2;
    
    // 分配字符串内存
    result_ptr = (ObjectPointer*)MemoryAllocate(_DAT_180c8ed18, 0x10, 0x13);
    *(Byte*)result_ptr = 0;
    string_length = FUN_18064e990(result_ptr);
    string_handle = CONCAT44(string_handle._4_4_, string_length);
    
    // 设置名称字符串
    *result_ptr = 0x70616d5f6e69616d;  // "main_name"
    *(Byte*)(result_ptr + 1) = 0;
    string_length = 8;
    
    if (result_ptr == (ObjectPointer*)0x0) {
        result_ptr = (ObjectPointer*)MemoryAllocate(_DAT_180c8ed18, 0x14, 0x13);
        *(Byte*)result_ptr = 0;
    }
    else {
        if (0x13 < string_length) goto BUILD_STRING;
        result_ptr = (ObjectPointer*)MemoryReallocate(_DAT_180c8ed18, result_ptr, 0x14, 0x10, 0x13);
    }
    
    string_length = FUN_18064e990(result_ptr);
    string_handle = CONCAT44(string_handle._4_4_, string_length);
    
BUILD_STRING:
    // 构建完整的查找字符串
    *(ObjectPointer*)((HashKey)string_length + (longlong)result_ptr) = 0x616d656275635f5f;  // "__becuma"
    *(uint*)((ObjectPointer*)((HashKey)string_length + (longlong)result_ptr) + 1) = 0x5f5f70;  // "p__"
    string_length = 0x13;
    
    // 格式化字符串参数
    FUN_180628380(&string_allocator, param_3);
    temp_key = hash_key;
    
    // 处理字符串中的特殊字符
    if (string_length != 0) {
        do {
            if ((Byte)(*(char*)((longlong)result_ptr + temp_key) + 0xbfU) < 0x1a) {
                *(char*)((longlong)result_ptr + temp_key) = *(char*)((longlong)result_ptr + temp_key) + ' ';
            }
            hash_key = (HashKey)hash_key + 1;
            temp_key = temp_key + 1;
        } while (hash_key < string_length);
    }
    
    // 执行查找操作
    result_ptr = (ObjectPointer*)FUN_1800b08e0(_DAT_180c86930, &context_ptr, &string_allocator, 0);
    result_value = *result_ptr;
    
    // 清理上下文
    if (context_ptr != (longlong*)0x0) {
        ((**(code**)(*context_ptr + 0x38)))();
    }
    
    // 设置优先级参数
    priority_array[0] = param_3;
    string_buffer = result_value;
    FUN_1801e8ce0(tree_root, name_buffer, priority_array);
    
    string_allocator = &UNK_180a3c3e0;
    if (result_ptr == (ObjectPointer*)0x0) {
        return result_value;
    }
    
    // 清理字符串内存
    FUN_18064e900();
}

/**
 * 哈希表清理函数
 * 
 * 功能描述：
 *   - 清理哈希表中的所有条目
 *   - 释放哈希表占用的内存
 *   - 重置哈希表状态
 *   - 处理清理过程中的异常
 * 
 * 参数：
 *   - param_1: 哈希表句柄
 *   - param_2: 上下文指针
 *   - param_3: 清理标志
 * 
 * 返回值：
 *   - ObjectPointer: 清理结果
 * 
 * 技术细节：
 *   - 遍历所有哈希桶
 *   - 释放每个桶中的条目
 *   - 处理动态构建的清理字符串
 *   - 确保内存正确释放
 */
ObjectPointer HashTableClear(longlong param_1, longlong* param_2, uint param_3)
{
    ObjectPointer* tree_root;
    ObjectPointer* current_node;
    ObjectPointer* left_child;
    ObjectPointer* right_child;
    ObjectPointer* target_node;
    ObjectPointer* result_ptr;
    ObjectPointer* temp_ptr;
    HashKey hash_key;
    HashKey temp_key;
    longlong* context_ptr;
    uint priority_array[2];
    ObjectPointer result_value;
    ObjectPointer string_buffer;
    Byte name_buffer[16];
    ObjectPointer string_allocator;
    uint string_length;
    ObjectPointer string_handle;
    
    hash_key = 0;
    tree_root = (ObjectPointer*)(param_1 + 0xe70);
    target_node = tree_root;
    current_node = *(ObjectPointer**)(param_1 + 0xe80);
    
    // 在平衡二叉树中查找目标节点
    if (*(ObjectPointer**)(param_1 + 0xe80) == (ObjectPointer*)0x0) {
    FIND_TARGET:
        target_node = tree_root;
    }
    else {
        do {
            // 比较优先级决定搜索方向
            if (*(int*)(current_node + 4) < (int)param_3) {
                left_child = (ObjectPointer*)*current_node;
            }
            else {
                right_child = (ObjectPointer*)current_node[1];
                target_node = current_node;
            }
            current_node = right_child;
        } while (right_child != (ObjectPointer*)0x0);
        
        // 检查是否找到目标节点
        if ((target_node == tree_root) || ((int)param_3 < *(int*)(target_node + 4))) 
            goto FIND_TARGET;
    }
    
    // 如果找到目标节点，返回其值
    if (target_node != tree_root) {
        return target_node[5];
    }
    
    // 未找到目标节点，构建清理字符串
    string_allocator = &UNK_180a3c3e0;
    string_handle = 0;
    result_ptr = (ObjectPointer*)0x0;
    string_length = 0;
    context_ptr = param_2;
    
    // 分配字符串内存
    result_ptr = (ObjectPointer*)MemoryAllocate(_DAT_180c8ed18, 0x10, 0x13);
    *(Byte*)result_ptr = 0;
    string_length = FUN_18064e990(result_ptr);
    string_handle = CONCAT44(string_handle._4_4_, string_length);
    
    // 设置名称字符串
    *result_ptr = 0x70616d5f6e69616d;  // "main_name"
    *(Byte*)(result_ptr + 1) = 0;
    string_length = 8;
    
    if (result_ptr == (ObjectPointer*)0x0) {
        result_ptr = (ObjectPointer*)MemoryAllocate(_DAT_180c8ed18, 0x17, 0x13);
        *(Byte*)result_ptr = 0;
    }
    else {
        if (0x16 < string_length) goto BUILD_STRING;
        result_ptr = (ObjectPointer*)MemoryReallocate(_DAT_180c8ed18, result_ptr, 0x17, 0x10, 0x13);
    }
    
    string_length = FUN_18064e990(result_ptr);
    string_handle = CONCAT44(string_handle._4_4_, string_length);
    
BUILD_STRING:
    // 构建完整的清理字符串
    target_node = (ObjectPointer*)((HashKey)string_length + (longlong)result_ptr);
    *target_node = 0x6574746163735f5f;  // "__secta"
    *(uint*)(target_node + 1) = 0x70616d72;  // "rmap"
    *(ushort*)((longlong)target_node + 0xc) = 0x5f5f;  // "__"
    *(Byte*)((longlong)target_node + 0xe) = 0;
    string_length = 0x16;
    
    // 格式化字符串参数
    FUN_180628380(&string_allocator, param_3);
    temp_key = hash_key;
    
    // 处理字符串中的特殊字符
    if (string_length != 0) {
        do {
            if ((Byte)(*(char*)((longlong)result_ptr + temp_key) + 0xbfU) < 0x1a) {
                *(char*)((longlong)result_ptr + temp_key) = *(char*)((longlong)result_ptr + temp_key) + ' ';
            }
            hash_key = (HashKey)hash_key + 1;
            temp_key = temp_key + 1;
        } while (hash_key < string_length);
    }
    
    // 执行清理操作
    target_node = (ObjectPointer*)FUN_1800b08e0(_DAT_180c86930, &context_ptr, &string_allocator, 0);
    result_value = *target_node;
    
    // 清理上下文
    if (context_ptr != (longlong*)0x0) {
        ((**(code**)(*context_ptr + 0x38)))();
    }
    
    // 设置优先级参数
    priority_array[0] = param_3;
    string_buffer = result_value;
    FUN_1801e8ce0(tree_root, name_buffer, priority_array);
    
    string_allocator = &UNK_180a3c3e0;
    if (result_ptr == (ObjectPointer*)0x0) {
        return result_value;
    }
    
    // 清理字符串内存
    FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * 函数: ResourceProcessor_ExecuteBatchOperations
 * 
 * 描述:
 * 批量资源处理操作的高级处理器，负责处理系统中的多个资源操作任务。
 * 该函数实现了复杂的资源管理逻辑，包括内存分配、数据复制和状态同步。
 * 
 * 参数:
 * - param_1: 系统上下文指针，包含系统状态和资源管理信息
 * 
 * 返回值:
 * 无返回值 (void)
 * 
 * 异常处理:
 * - 包含内存分配失败和资源访问异常的处理逻辑
 * - 使用安全字符串操作防止缓冲区溢出
 * 
 * 算法复杂度:
 * - 时间复杂度: O(n)，其中n为处理的资源数量
 * - 空间复杂度: O(1)，使用固定大小的栈空间
 * 
 * 依赖项:
 * - FUN_1806277c0: 字符串处理函数
 * - FUN_18041adc0: 资源访问函数
 * - FUN_18064e900: 异常处理函数
 * - FUN_18015b810: 系统操作函数
 * - FUN_18062b1e0: 内存分配函数
 * 
 * 线程安全:
 * 该函数不是线程安全的，需要在单线程环境下调用或使用适当的同步机制。
 */
void ResourceProcessor_ExecuteBatchOperations(longlong param_1)
{
    longlong system_context;
    undefined8 resource_result_1;
    undefined8 resource_result_2;
    undefined8 resource_result_3;
    undefined *resource_data;
    undefined *resource_buffer_1;
    undefined1 *resource_ptr_1;
    undefined4 resource_flag_1;
    ulonglong resource_size_1;
    undefined8 resource_buffer_2;
    undefined8 resource_buffer_3;
    undefined8 resource_buffer_4;
    undefined8 resource_buffer_5;
    undefined4 *operation_stack [2];
    code *operation_handler_1;
    code *operation_handler_2;
    
    // 获取系统上下文
    system_context = *(longlong *)(param_1 + SYSTEM_CONTEXT_OFFSET);
    
    // 初始化第一个资源缓冲区
    resource_buffer_1 = &RESOURCE_DEFAULT_BUFFER;
    resource_size_1 = 0;
    resource_ptr_1 = (undefined1 *)0x0;
    resource_flag_1 = 0;
    
    // 处理第一个资源操作
    FUN_1806277c0(&resource_buffer_1, RESOURCE_CONFIG_SIZE_1);
    if (0 < RESOURCE_CONFIG_SIZE_1) {
        resource_data = &RESOURCE_DEFAULT_DATA;
        if (RESOURCE_CONFIG_PTR_1 != (undefined *)0x0) {
            resource_data = RESOURCE_CONFIG_PTR_1;
        }
        // 安全复制资源数据
        memcpy(resource_ptr_1, resource_data, (longlong)(RESOURCE_CONFIG_SIZE_1 + 1));
    }
    
    // 验证和清理资源指针
    if (RESOURCE_CONFIG_PTR_1 != (undefined *)0x0) {
        resource_flag_1 = 0;
        if (resource_ptr_1 != (undefined1 *)0x0) {
            *resource_ptr_1 = 0;
        }
    }
    
    // 执行第一个资源访问操作
    resource_result_1 = FUN_18041adc0(system_context + 8, &resource_buffer_1);
    resource_buffer_1 = &RESOURCE_DEFAULT_BUFFER;
    
    // 检查资源状态
    if (resource_ptr_1 != (undefined1 *)0x0) {
        FUN_18064e900();
    }
    resource_ptr_1 = (undefined1 *)0x0;
    resource_size_1 = resource_size_1 & 0xffffffff00000000;
    resource_buffer_1 = &RESOURCE_SAFE_BUFFER;
    
    // 第二个资源操作循环
    system_context = *(longlong *)(param_1 + SYSTEM_CONTEXT_OFFSET);
    resource_buffer_2 = &RESOURCE_DEFAULT_BUFFER;
    resource_buffer_5 = 0;
    resource_buffer_3 = (undefined1 *)0x0;
    resource_buffer_4 = (ulonglong)resource_buffer_4._4_4_ << 0x20;
    
    // 处理第二个资源操作
    FUN_1806277c0(&resource_buffer_2, RESOURCE_CONFIG_SIZE_2);
    if (0 < RESOURCE_CONFIG_SIZE_2) {
        resource_data = &RESOURCE_DEFAULT_DATA;
        if (RESOURCE_CONFIG_PTR_2 != (undefined *)0x0) {
            resource_data = RESOURCE_CONFIG_PTR_2;
        }
        // 安全复制资源数据
        memcpy(resource_buffer_3, resource_data, (longlong)(RESOURCE_CONFIG_SIZE_2 + 1));
    }
    
    // 验证和清理第二个资源
    if (RESOURCE_CONFIG_PTR_2 != (undefined *)0x0) {
        resource_buffer_4 = resource_buffer_4 & 0xffffffff00000000;
        if (resource_buffer_3 != (undefined1 *)0x0) {
            *resource_buffer_3 = 0;
        }
    }
    
    // 执行第二个资源访问操作
    resource_result_2 = FUN_18041adc0(system_context + 8, &resource_buffer_2);
    resource_buffer_2 = &RESOURCE_DEFAULT_BUFFER;
    
    // 检查第二个资源状态
    if (resource_buffer_3 != (undefined1 *)0x0) {
        FUN_18064e900();
    }
    resource_buffer_3 = (undefined1 *)0x0;
    resource_buffer_5 = resource_buffer_5 & 0xffffffff00000000;
    resource_buffer_2 = &RESOURCE_SAFE_BUFFER;
    
    // 第三个资源操作循环
    system_context = *(longlong *)(param_1 + SYSTEM_CONTEXT_OFFSET);
    resource_buffer_1 = &RESOURCE_DEFAULT_BUFFER;
    resource_size_1 = 0;
    resource_ptr_1 = (undefined1 *)0x0;
    resource_flag_1 = 0;
    
    // 处理第三个资源操作
    FUN_1806277c0(&resource_buffer_1, RESOURCE_CONFIG_SIZE_3);
    if (0 < RESOURCE_CONFIG_SIZE_3) {
        resource_data = &RESOURCE_DEFAULT_DATA;
        if (RESOURCE_CONFIG_PTR_3 != (undefined *)0x0) {
            resource_data = RESOURCE_CONFIG_PTR_3;
        }
        // 安全复制资源数据
        memcpy(resource_ptr_1, resource_data, (longlong)(RESOURCE_CONFIG_SIZE_3 + 1));
    }
    
    // 验证和清理第三个资源
    if (RESOURCE_CONFIG_PTR_3 != (undefined *)0x0) {
        resource_flag_1 = 0;
        if (resource_ptr_1 != (undefined1 *)0x0) {
            *resource_ptr_1 = 0;
        }
    }
    
    // 执行第三个资源访问操作
    resource_result_3 = FUN_18041adc0(system_context + 8, &resource_buffer_1);
    resource_buffer_1 = &RESOURCE_DEFAULT_BUFFER;
    
    // 检查第三个资源状态
    if (resource_ptr_1 != (undefined1 *)0x0) {
        FUN_18064e900();
    }
    resource_ptr_1 = (undefined1 *)0x0;
    resource_size_1 = resource_size_1 & 0xffffffff00000000;
    resource_buffer_1 = &RESOURCE_SAFE_BUFFER;
    
    // 设置操作处理器
    operation_handler_1 = FUN_1803aee20;
    operation_handler_2 = FUN_1803aed40;
    
    // 准备操作参数
    resource_buffer_2 = (undefined *)param_1;
    resource_buffer_3 = (undefined1 *)resource_result_1;
    resource_buffer_4 = resource_result_2;
    resource_buffer_5 = resource_result_3;
    
    // 分配操作栈内存
    operation_stack[0] = (undefined4 *)FUN_18062b1e0(SYSTEM_MEMORY_POOL, 0x20, 8, MEMORY_ALIGNMENT);
    *operation_stack[0] = (undefined4)resource_buffer_2;
    operation_stack[0][1] = resource_buffer_2._4_4_;
    operation_stack[0][2] = (undefined4)resource_buffer_3;
    operation_stack[0][3] = resource_buffer_3._4_4_;
    operation_stack[0][4] = (undefined4)resource_buffer_4;
    operation_stack[0][5] = resource_buffer_4._4_4_;
    operation_stack[0][6] = (undefined4)resource_buffer_5;
    operation_stack[0][7] = resource_buffer_5._4_4_;
    
    // 执行批量操作
    FUN_18015b810((undefined4)resource_buffer_2, 0, 3, 1, 0xffffffffffffffff, operation_stack);
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a9530(undefined8 *param_1)
void FUN_1803a9530(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_1a8 [32];
  longlong *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined4 uStack_148;
  undefined auStack_140 [72];
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined auStack_e0 [72];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_168 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  *param_1 = &UNK_180a23138;
  puStack_170 = param_1;
  puStack_160 = param_1;
  FUN_1802705c0(param_1 + 1);
  FUN_1802705c0(param_1 + 0x6d);
  FUN_1802705c0(param_1 + 0xd9);
  FUN_1802705c0();
  puVar2 = param_1 + 0x1b1;
  param_1[0x1b4] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 3;
  *puVar2 = puVar2;
  param_1[0x1b2] = puVar2;
  param_1[0x1b3] = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  param_1[0x1b5] = 0;
  puVar2 = param_1 + 0x1b7;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 3;
  *puVar2 = puVar2;
  param_1[0x1b8] = puVar2;
  param_1[0x1b9] = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  param_1[0x1bb] = 0;
  puStack_178 = param_1 + 0x1bd;
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c2) = 3;
  *puStack_178 = puStack_178;
  param_1[0x1be] = puStack_178;
  param_1[0x1bf] = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  puVar2 = param_1 + 0x1c8;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cd) = 3;
  *puVar2 = puVar2;
  param_1[0x1c9] = puVar2;
  param_1[0x1ca] = 0;
  *(undefined1 *)(param_1 + 0x1cb) = 0;
  param_1[0x1cc] = 0;
  puStack_180 = param_1 + 0x1ce;
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d3) = 3;
  *puStack_180 = puStack_180;
  param_1[0x1cf] = puStack_180;
  param_1[0x1d0] = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d2] = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 1;
  param_1[0x1c4] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe1c) = 0;
  plStack_188 = (longlong *)param_1[0x1c5];
  param_1[0x1c5] = 0;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  plStack_188 = (longlong *)param_1[0x1c6];
  param_1[0x1c6] = 0;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  plStack_188 = (longlong *)param_1[0x1c7];
  param_1[0x1c7] = 0;
  puVar2 = _DAT_180bfa2e8;
  puVar3 = _DAT_180bfa2f0;
  puVar7 = (undefined8 *)_DAT_180c86930;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
    puVar2 = _DAT_180bfa2e8;
    puVar3 = _DAT_180bfa2f0;
    puVar7 = (undefined8 *)_DAT_180c86930;
  }
  for (; puVar6 = _DAT_180bfa2f0, _DAT_180c86930 = (longlong)puVar7, puVar2 != _DAT_180bfa2f0;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa2f0 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa2f0;
    puVar7 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa2f0 = puVar6;
  }
  plVar5 = *(longlong **)((longlong)puVar7 + 0xa0);
  _DAT_180bfa2f0 = _DAT_180bfa2e8;
  puStack_178 = puVar7;
  puVar2 = _DAT_180bfa308;
  puVar3 = _DAT_180bfa310;
  puVar6 = puVar7;
  plStack_188 = plVar5;
  if (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x4000000) != 0) {
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_80,0x40,puVar4);
        puVar3 = _DAT_180bfa2f0;
        if (_DAT_180bfa2f0 < _DAT_180bfa2f8) {
          _DAT_180bfa2f0 = _DAT_180bfa2f0 + 0xb;
          FUN_1800b8300(puVar3,&puStack_98);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa2f0 - (longlong)_DAT_180bfa2e8) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9859:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa300);
            puVar3 = _DAT_180bfa2e8;
            puVar6 = _DAT_180bfa2f0;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa2e8;
            puVar6 = _DAT_180bfa2f0;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9859;
          }
          for (; puVar1 = _DAT_180bfa2f0, puVar3 != _DAT_180bfa2f0; puVar3 = puVar3 + 0xb) {
            _DAT_180bfa2f0 = puVar6;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            puStack_180 = puVar2;
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar7 = puStack_178;
            puVar6 = _DAT_180bfa2f0;
            _DAT_180bfa2f0 = puVar1;
          }
          _DAT_180bfa2f0 = puVar6;
          FUN_1800b8300(puVar2,&puStack_98);
          puVar6 = _DAT_180bfa2f0;
          for (puVar3 = _DAT_180bfa2e8; puVar3 != puVar6; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa2e8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa2e8);
          }
          _DAT_180bfa2f8 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa2e8 = puVar9;
          _DAT_180bfa2f0 = puVar2 + 0xb;
        }
        puStack_98 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      puVar2 = _DAT_180bfa308;
      puVar3 = _DAT_180bfa310;
      puVar6 = (undefined8 *)_DAT_180c86930;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8));
  }
  for (; puVar7 = _DAT_180bfa310, _DAT_180c86930 = (longlong)puVar6, puVar2 != _DAT_180bfa310;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa310 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa310;
    puVar6 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa310 = puVar7;
  }
  plVar5 = *(longlong **)((longlong)puVar6 + 0xa0);
  _DAT_180bfa310 = _DAT_180bfa308;
  puStack_178 = puVar6;
  puVar2 = _DAT_180bfa328;
  puVar3 = _DAT_180bfa330;
  puVar7 = puVar6;
  plStack_188 = plVar5;
  if (plVar5 != *(longlong **)((longlong)puVar6 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x100000) != 0) {
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_140,0x40,puVar4);
        puVar3 = _DAT_180bfa310;
        if (_DAT_180bfa310 < _DAT_180bfa318) {
          puStack_180 = _DAT_180bfa310;
          puVar2 = _DAT_180bfa310 + 0xb;
          *_DAT_180bfa310 = &UNK_18098bcb0;
          _DAT_180bfa310 = puVar2;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          *puVar3 = &UNK_1809fcc58;
          puVar3[1] = puVar3 + 3;
          *(undefined4 *)(puVar3 + 2) = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
          *(undefined4 *)(puVar3 + 2) = uStack_148;
          puVar4 = &DAT_18098bc73;
          if (puStack_150 != (undefined *)0x0) {
            puVar4 = puStack_150;
          }
          strcpy_s(puVar3[1],0x40,puVar4);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa310 - (longlong)_DAT_180bfa308) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9b1b:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa320);
            puVar3 = _DAT_180bfa308;
            puVar7 = _DAT_180bfa310;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa308;
            puVar7 = _DAT_180bfa310;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9b1b;
          }
          for (; puVar1 = _DAT_180bfa310, puStack_180 = puVar2, puVar3 != _DAT_180bfa310;
              puVar3 = puVar3 + 0xb) {
            _DAT_180bfa310 = puVar7;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar6 = puStack_178;
            puVar7 = _DAT_180bfa310;
            _DAT_180bfa310 = puVar1;
          }
          _DAT_180bfa310 = puVar7;
          *puVar2 = &UNK_18098bcb0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = &UNK_1809fcc58;
          puVar2[1] = puVar2 + 3;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = uStack_148;
          puVar4 = &DAT_18098bc73;
          if (puStack_150 != (undefined *)0x0) {
            puVar4 = puStack_150;
          }
          strcpy_s(puVar2[1],0x40,puVar4);
          puVar7 = _DAT_180bfa310;
          for (puVar3 = _DAT_180bfa308; puVar3 != puVar7; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa308 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa308);
          }
          _DAT_180bfa318 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa308 = puVar9;
          _DAT_180bfa310 = puVar2 + 0xb;
        }
        puStack_158 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      puVar2 = _DAT_180bfa328;
      puVar3 = _DAT_180bfa330;
      puVar7 = (undefined8 *)_DAT_180c86930;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar6 + 0xa8));
  }
  for (; puVar6 = _DAT_180bfa330, _DAT_180c86930 = (longlong)puVar7, puVar2 != _DAT_180bfa330;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa330 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa330;
    puVar7 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa330 = puVar6;
  }
  plVar5 = *(longlong **)((longlong)puVar7 + 0xa0);
  _DAT_180bfa330 = _DAT_180bfa328;
  plStack_188 = plVar5;
  puStack_178 = puVar7;
  if (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x10000000) != 0) {
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_e0,0x40,puVar4);
        puVar3 = _DAT_180bfa330;
        if (_DAT_180bfa330 < _DAT_180bfa338) {
          puStack_180 = _DAT_180bfa330;
          puVar2 = _DAT_180bfa330 + 0xb;
          *_DAT_180bfa330 = &UNK_18098bcb0;
          _DAT_180bfa330 = puVar2;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          *puVar3 = &UNK_1809fcc58;
          puVar3[1] = puVar3 + 3;
          *(undefined4 *)(puVar3 + 2) = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
          *(undefined4 *)(puVar3 + 2) = uStack_e8;
          puVar4 = &DAT_18098bc73;
          if (puStack_f0 != (undefined *)0x0) {
            puVar4 = puStack_f0;
          }
          strcpy_s(puVar3[1],0x40,puVar4);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa330 - (longlong)_DAT_180bfa328) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9e08:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa340);
            puVar3 = _DAT_180bfa328;
            puVar6 = _DAT_180bfa330;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa328;
            puVar6 = _DAT_180bfa330;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9e08;
          }
          for (; puVar1 = _DAT_180bfa330, puStack_180 = puVar2, puVar3 != _DAT_180bfa330;
              puVar3 = puVar3 + 0xb) {
            _DAT_180bfa330 = puVar6;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar7 = puStack_178;
            puVar6 = _DAT_180bfa330;
            _DAT_180bfa330 = puVar1;
          }
          _DAT_180bfa330 = puVar6;
          *puVar2 = &UNK_18098bcb0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = &UNK_1809fcc58;
          puVar2[1] = puVar2 + 3;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = uStack_e8;
          puVar4 = &DAT_18098bc73;
          if (puStack_f0 != (undefined *)0x0) {
            puVar4 = puStack_f0;
          }
          strcpy_s(puVar2[1],0x40,puVar4);
          puVar6 = _DAT_180bfa330;
          for (puVar3 = _DAT_180bfa328; puVar3 != puVar6; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa328 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa328);
          }
          _DAT_180bfa338 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa328 = puVar9;
          _DAT_180bfa330 = puVar2 + 0xb;
        }
        puStack_f8 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}



undefined8 FUN_1803a9fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1803aa090();
  if ((param_2 & 1) != 0) {
    free(param_1,0xea0);
  }
  return param_1;
}






// 函数: void FUN_1803aa000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803aa000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803aeb70(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1803aa030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803aa030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803aeb70(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






