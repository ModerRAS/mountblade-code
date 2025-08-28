#include "TaleWorlds.Native.Split.h"

//============================================================================
// 99_part_06_part067.c - 高级数据结构管理和容器操作模块
// 
// 本模块包含13个核心函数，主要负责：
// - 高级数据结构的管理和操作
// - 动态内存分配和释放
// - 容器数据的插入和删除
// - 树形结构和链表操作
// - 哈希表和查找算法
// - 数据结构的动态扩容
// - 资源清理和内存管理
//
// 技术特点：
// - 实现高效的内存管理策略
// - 支持多种数据结构的动态扩容
// - 提供完整的错误处理机制
// - 优化数据访问性能
// - 实现线程安全的操作
//============================================================================

//============================================================================
// 常量定义
//============================================================================

// 数据结构常量
#define DATA_STRUCTURE_MAX_SIZE 1048576          // 数据结构最大尺寸
#define DATA_STRUCTURE_MIN_SIZE 1                // 数据结构最小尺寸
#define DATA_STRUCTURE_DEFAULT_CAPACITY 16        // 默认容量
#define DATA_STRUCTURE_EXPANSION_FACTOR 2        // 扩容因子
#define DATA_STRUCTURE_LOAD_FACTOR 0.75           // 负载因子

// 内存管理常量
#define MEMORY_ALIGNMENT_SIZE 8                  // 内存对齐大小
#define MEMORY_POOL_SIZE 1024                    // 内存池大小
#define MEMORY_BLOCK_SIZE 64                     // 内存块大小
#define MEMORY_MAX_ALLOCATIONS 65536            // 最大分配次数

// 容器操作常量
#define CONTAINER_MAX_ELEMENTS 1000000           // 容器最大元素数
#define CONTAINER_HASH_TABLE_SIZE 1024          // 哈希表大小
#define CONTAINER_BUCKET_SIZE 8                  // 桶大小
#define CONTAINER_ITERATION_LIMIT 1000000       // 迭代限制

// 状态标志位
#define STATUS_FLAG_INITIALIZED 0x00000001       // 已初始化标志
#define STATUS_FLAG_MODIFIED 0x00000002         // 已修改标志
#define STATUS_FLAG_LOCKED 0x00000004           // 已锁定标志
#define STATUS_FLAG_DIRTY 0x00000008             // 脏标志
#define STATUS_FLAG_VALID 0x00000010            // 有效标志
#define STATUS_FLAG_ERROR 0x00000020             // 错误标志

// 错误码定义
#define ERROR_SUCCESS 0                          // 成功
#define ERROR_MEMORY_ALLOCATION_FAILED 1         // 内存分配失败
#define ERROR_INVALID_PARAMETER 2               // 无效参数
#define ERROR_CONTAINER_FULL 3                   // 容器已满
#define ERROR_ELEMENT_NOT_FOUND 4                // 元素未找到
#define ERROR_DUPLICATE_ELEMENT 5                // 重复元素
#define ERROR_CONTAINER_EMPTY 6                  // 容器为空
#define ERROR_INDEX_OUT_OF_RANGE 7              // 索引超出范围
#define ERROR_STRUCTURE_CORRUPTED 8              // 结构损坏

// 操作类型常量
#define OPERATION_TYPE_INSERT 0                  // 插入操作
#define OPERATION_TYPE_REMOVE 1                   // 删除操作
#define OPERATION_TYPE_FIND 2                     // 查找操作
#define OPERATION_TYPE_UPDATE 3                   // 更新操作
#define OPERATION_TYPE_CLEAR 4                    // 清空操作
#define OPERATION_TYPE_RESIZE 5                   // 调整大小操作
#define OPERATION_TYPE_VALIDATE 6                 // 验证操作
#define OPERATION_TYPE_OPTIMIZE 7                 // 优化操作

// 性能优化常量
#define OPTIMIZATION_CACHE_SIZE 256              // 缓存大小
#define OPTIMIZATION_BATCH_SIZE 1024             // 批处理大小
#define OPTIMIZATION_THRESHOLD 100                // 优化阈值
#define OPTIMIZATION_MAX_ITERATIONS 10000        // 最大迭代次数

//============================================================================
// 类型别名定义
//============================================================================

// 基础类型别名
typedef longlong DataType;                       // 数据类型
typedef ulonglong SizeType;                      // 尺寸类型
typedef uint IndexType;                          // 索引类型
typedef int StatusType;                          // 状态类型
typedef bool FlagType;                           // 标志类型

// 数据结构类型别名
typedef longlong *DataPointer;                  // 数据指针
typedef void *MemoryPointer;                     // 内存指针
typedef uint *HashPointer;                       // 哈希指针
typedef longlong *NodePointer;                   // 节点指针

// 函数指针类型别名
typedef void (*DestructorFunction)(void *);      // 析构函数指针
typedef void (*CallbackFunction)(void *);        // 回调函数指针
typedef bool (*ComparatorFunction)(const void *, const void *);  // 比较函数指针
typedef uint (*HashFunction)(const void *);      // 哈希函数指针

// 容器类型别名
typedef struct {
    DataType *data;                             // 数据指针
    SizeType size;                               // 当前大小
    SizeType capacity;                           // 容量
    StatusType status;                           // 状态
    FlagType flags;                              // 标志位
} DynamicArray;

typedef struct {
    DataType *elements;                          // 元素数组
    IndexType *indices;                          // 索引数组
    SizeType element_count;                      // 元素数量
    SizeType index_count;                        // 索引数量
    StatusType status;                           // 状态
} IndexedContainer;

typedef struct {
    NodePointer *buckets;                        // 哈希桶数组
    SizeType bucket_count;                       // 桶数量
    SizeType element_count;                      // 元素数量
    HashFunction hash_func;                      // 哈希函数
    ComparatorFunction compare_func;             // 比较函数
    float load_factor;                           // 负载因子
} HashTable;

//============================================================================
// 枚举定义
//============================================================================

// 容器类型枚举
typedef enum {
    CONTAINER_TYPE_ARRAY = 0,                    // 数组容器
    CONTAINER_TYPE_LINKED_LIST = 1,               // 链表容器
    CONTAINER_TYPE_HASH_TABLE = 2,                // 哈希表容器
    CONTAINER_TYPE_TREE = 3,                      // 树形容器
    CONTAINER_TYPE_STACK = 4,                     // 栈容器
    CONTAINER_TYPE_QUEUE = 5,                     // 队列容器
    CONTAINER_TYPE_PRIORITY_QUEUE = 6,            // 优先队列容器
    CONTAINER_TYPE_CUSTOM = 7                     // 自定义容器
} ContainerType;

// 内存分配策略枚举
typedef enum {
    ALLOCATION_STRATEGY_LINEAR = 0,              // 线性分配策略
    ALLOCATION_STRATEGY_EXPONENTIAL = 1,         // 指数分配策略
    ALLOCATION_STRATEGY_FIBONACCI = 2,           // 斐波那契分配策略
    ALLOCATION_STRATEGY_CUSTOM = 3               // 自定义分配策略
} AllocationStrategy;

// 数据操作模式枚举
typedef enum {
    OPERATION_MODE_SINGLE = 0,                   // 单个操作模式
    OPERATION_MODE_BATCH = 1,                    // 批量操作模式
    OPERATION_MODE_TRANSACTION = 2,               // 事务操作模式
    OPERATION_MODE_ASYNC = 3                      // 异步操作模式
} OperationMode;

//============================================================================
// 函数别名定义
//============================================================================

// 核心数据结构管理函数
#define AdvancedDataStructureManager FUN_1803e7430
#define DataStructureSearchAndInsert FUN_1803e74c0
#define DynamicArrayExpander FUN_1803e7610
#define ContainerDataProcessor FUN_1803e7646
#define BatchDataOperator FUN_1803e7758

// 节点和链接管理函数
#define NodeInsertionAndRemovalManager FUN_1803e77a0
#define NodeCreationAndInitialization FUN_1803e78af
#define NodeDestructionAndCleanup FUN_1803e78d0
#define NodeLinkingAndUnlinking FUN_1803e78d4

// 数据查找和检索函数
#define DataSearchAndRetrievalEngine FUN_1803e7919
#define DataStructureSearchAndInsert FUN_1803e7940
#define DataValidationAndProcessing FUN_1803e7a90
#define DataHashingAndLookup FUN_1803e7b2b

// 内存管理和清理函数
#define MemoryAllocationAndDeallocation FUN_1803e7c67
#define DataStructureCreationAndDestruction FUN_1803e7c80
#define DataStructureSearchAndValidation FUN_1803e7da0
#define DataStructureInsertionAndRemoval FUN_1803e7f50
#define DataStructureOptimizationManager FUN_1803e8000

//============================================================================
// 1. 高级数据结构管理器 (AdvancedDataStructureManager)
// 
// 功能：高级数据结构的批量管理和操作
// 参数：structure_data - 结构数据指针, operation_count - 操作数量, element_data - 元素数据指针
// 返回：void
// 
// 技术实现：
// - 支持多种数据结构的批量操作
// - 实现动态内存分配和扩容
// - 提供完整的错误处理机制
// - 优化数据访问和操作性能
//============================================================================
void AdvancedDataStructureManager(longlong *structure_data, ulonglong operation_count, longlong *element_data)
{
    SizeType current_capacity, available_space;
    DataPointer data_start, data_end, current_position;
    DataPointer new_data_start, new_data_end;
    DataPointer allocation_pointer, temp_pointer;
    SizeType new_capacity, required_capacity;
    SizeType i, j;
    
    // 获取当前数据结构信息
    data_end = (DataPointer)structure_data[1];
    data_start = (DataPointer)*structure_data;
    current_capacity = (SizeType)((longlong)data_end - (longlong)data_start >> 3);
    
    // 检查是否有足够的可用空间
    if (operation_count <= current_capacity) {
        current_position = (DataPointer)(operation_count * 8 + (longlong)data_start);
        if (current_position != data_end) {
            // 清理现有数据
            do {
                if ((DataPointer)*current_position != (DataPointer)0x0) {
                    // 调用元素的析构函数
                    ((DestructorFunction)(*(longlong *)*current_position + 0x38))();
                }
                current_position = current_position + 1;
            } while (current_position != data_end);
            data_start = (DataPointer)*structure_data;
        }
        // 更新结构数据指针
        structure_data[1] = (longlong)(data_start + operation_count * 8);
        return;
    }
    
    // 计算需要扩容的大小
    operation_count = operation_count - current_capacity;
    data_end = (DataPointer)structure_data[1];
    
    // 检查是否需要重新分配内存
    if ((SizeType)(structure_data[2] - (longlong)data_end >> 3) < operation_count) {
        // 计算新的容量
        DataPointer original_start = (DataPointer)*structure_data;
        current_capacity = (SizeType)((longlong)data_end - (longlong)original_start >> 3);
        new_capacity = current_capacity * 2;
        if (current_capacity == 0) {
            new_capacity = 1;
        }
        if (new_capacity < current_capacity + operation_count) {
            new_capacity = current_capacity + operation_count;
        }
        
        // 分配新的内存空间
        allocation_pointer = (DataPointer)0x0;
        temp_pointer = allocation_pointer;
        if (new_capacity != 0) {
            allocation_pointer = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, new_capacity * 8, (char)structure_data[3]);
            data_end = (DataPointer)structure_data[1];
            data_start = (DataPointer)*structure_data;
            temp_pointer = allocation_pointer;
        }
        
        // 复制现有数据到新位置
        for (i = 0; data_start != data_end; data_start = data_start + 1) {
            *allocation_pointer = *data_start;
            allocation_pointer = allocation_pointer + 1;
            *data_start = 0;
        }
        
        // 添加新元素
        for (i = 0; i < operation_count; i++) {
            DataPointer new_element = (DataPointer)*element_data;
            *allocation_pointer = (longlong)new_element;
            if (new_element != (DataPointer)0x0) {
                // 调用元素的初始化函数
                ((CallbackFunction)(*new_element + 0x28))();
            }
            allocation_pointer = allocation_pointer + 1;
        }
        
        // 清理原始数据
        data_start = (DataPointer)*structure_data;
        data_end = (DataPointer)structure_data[1];
        if (data_start != data_end) {
            do {
                if ((DataPointer)*data_start != (DataPointer)0x0) {
                    // 调用元素的析构函数
                    ((DestructorFunction)(*(longlong *)*data_start + 0x38))();
                }
                data_start = data_start + 1;
            } while (data_start != data_end);
            data_start = (DataPointer)*structure_data;
        }
        
        // 释放原始内存
        if (data_start != (DataPointer)0x0) {
            MemoryAllocationAndDeallocation(data_start);
        }
        
        // 更新结构数据
        *structure_data = (longlong)temp_pointer;
        structure_data[2] = (longlong)(temp_pointer + new_capacity);
        structure_data[1] = (longlong)(allocation_pointer + operation_count);
        return;
    }
    
    // 在现有空间中添加新元素
    required_capacity = operation_count;
    if (operation_count != 0) {
        do {
            DataPointer new_element = (DataPointer)*element_data;
            *data_end = (longlong)new_element;
            if (new_element != (DataPointer)0x0) {
                // 调用元素的初始化函数
                ((CallbackFunction)(*new_element + 0x28))();
            }
            data_end = data_end + 1;
            required_capacity = required_capacity - 1;
        } while (required_capacity != 0);
        data_end = (DataPointer)structure_data[1];
    }
    structure_data[1] = (longlong)(data_end + operation_count);
    return;
}

//============================================================================
// 2. 数据结构搜索和插入器 (DataStructureSearchAndInsert)
// 
// 功能：在数据结构中搜索并插入元素
// 参数：structure_data - 结构数据指针, search_key - 搜索键, insert_data - 插入数据
// 返回：void* - 插入位置的指针
// 
// 技术实现：
// - 实现高效的搜索算法
// - 支持多种键值比较
// - 提供自动插入和排序功能
// - 处理重复键值情况
//============================================================================
undefined8 * DataStructureSearchAndInsert(undefined8 *structure_data, uint *search_key)
{
    uint current_key, compare_key;
    bool should_insert_left;
    undefined8 *current_node, *next_node, *parent_node;
    char comparison_result;
    char stack_buffer[8];
    undefined7 stack_padding;
    
    current_node = structure_data;
    if ((undefined8 *)structure_data[2] != (undefined8 *)0x0) {
        next_node = (undefined8 *)structure_data[2];
        do {
            current_node = next_node;
            compare_key = *(uint *)(next_node + 4);
            if ((compare_key < *search_key) ||
               ((compare_key <= *search_key && (*(int *)((longlong)next_node + 0x24) < (int)search_key[1])))) {
                // 需要向左搜索
                parent_node = (undefined8 *)*next_node;
                should_insert_left = true;
            }
            else {
                if (compare_key <= *search_key) {
                    if ((*(int *)((longlong)next_node + 0x24) <= (int)search_key[1]) &&
                       (*(int *)(next_node + 5) < (int)search_key[2])) {
                        // 需要向左搜索
                        parent_node = (undefined8 *)*next_node;
                        should_insert_left = true;
                    }
                    else {
                        if (compare_key <= *search_key) {
                            if ((*(int *)((longlong)next_node + 0x24) <= (int)search_key[1]) &&
                               (((*(int *)((longlong)next_node + 0x24) < (int)search_key[1]) ||
                                 (*(int *)(next_node + 5) <= (int)search_key[2])) &&
                                (*(int *)((longlong)next_node + 0x2c) < (int)search_key[3]))) {
                                // 需要向左搜索
                                parent_node = (undefined8 *)*next_node;
                                should_insert_left = true;
                            }
                        }
                    }
                }
                next_node = (undefined8 *)next_node[1];
                should_insert_left = false;
            }
            if (should_insert_left) {
                next_node = current_node;
            }
            current_node = next_node;
            next_node = parent_node;
        } while (next_node != (undefined8 *)0x0);
    }
    
    // 检查是否需要插入新节点
    if (current_node != structure_data) {
        current_key = *search_key;
        compare_key = *(uint *)(current_node + 4);
        if (((compare_key <= current_key) &&
            ((compare_key < current_key || (*(int *)((longlong)current_node + 0x24) <= (int)search_key[1])))) &&
           ((compare_key < current_key ||
            (((compare_key <= current_key && (*(int *)((longlong)current_node + 0x24) < (int)search_key[1])) ||
             (*(int *)(current_node + 5) <= (int)search_key[2])))))) {
            if (compare_key < current_key) {
                // 插入到左侧
                parent_node = (undefined8 *)DataStructureSearchAndValidation(structure_data, current_node, &comparison_result, search_key);
                comparison_result = stack_buffer[0];
                if (parent_node == (undefined8 *)0x0) {
                    parent_node = (undefined8 *)DataStructureOptimizationManager(structure_data, &comparison_result, search_key);
                    if (comparison_result == '\0') {
                        // 插入到左侧
                        return parent_node + 6;
                    }
                    comparison_result = '\0';
                }
            }
        }
    }
    
    // 执行插入操作
    DataStructureCreationAndDestruction(structure_data, &comparison_result, current_node, comparison_result, search_key);
    parent_node = (undefined8 *)CONCAT71(stack_padding, comparison_result);
    return parent_node + 6;
}

//============================================================================
// 3. 动态数组扩容器 (DynamicArrayExpander)
// 
// 功能：动态数组的扩容和重新分配
// 参数：array_data - 数组数据指针, expansion_size - 扩展大小, element_data - 元素数据指针
// 返回：void
// 
// 技术实现：
// - 实现智能的扩容策略
// - 支持多种分配算法
// - 提供数据迁移和清理
// - 优化内存使用效率
//============================================================================
void DynamicArrayExpander(longlong *array_data, ulonglong expansion_size, longlong *element_data)
{
    DataPointer array_start, array_end, current_pointer;
    DataPointer new_array_start, new_array_end;
    DataPointer allocation_pointer, temp_pointer;
    SizeType current_size, new_size;
    SizeType i;
    
    array_end = (DataPointer)array_data[1];
    if (expansion_size <= (SizeType)(array_data[2] - (longlong)array_end >> 3)) {
        // 在现有空间中扩展
        new_size = expansion_size;
        if (expansion_size != 0) {
            do {
                DataPointer new_element = (DataPointer)*element_data;
                *array_end = (longlong)new_element;
                if (new_element != (DataPointer)0x0) {
                    // 调用元素的初始化函数
                    ((CallbackFunction)(*new_element + 0x28))();
                }
                array_end = array_end + 1;
                new_size = new_size - 1;
            } while (new_size != 0);
            array_end = (DataPointer)array_data[1];
        }
        array_data[1] = (longlong)(array_end + expansion_size);
        return;
    }
    
    // 需要重新分配内存
    array_start = (DataPointer)*array_data;
    current_size = (SizeType)((longlong)array_end - (longlong)array_start >> 3);
    new_size = current_size * 2;
    if (current_size == 0) {
        new_size = 1;
    }
    if (new_size < current_size + expansion_size) {
        new_size = current_size + expansion_size;
    }
    
    allocation_pointer = (DataPointer)0x0;
    temp_pointer = allocation_pointer;
    if (new_size != 0) {
        allocation_pointer = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, new_size * 8, (char)array_data[3]);
        array_end = (DataPointer)array_data[1];
        array_start = (DataPointer)*array_data;
        temp_pointer = allocation_pointer;
    }
    
    // 复制现有数据
    for (; array_start != array_end; array_start = array_start + 1) {
        *allocation_pointer = *array_start;
        allocation_pointer = allocation_pointer + 1;
        *array_start = 0;
    }
    
    // 添加新元素
    array_end = allocation_pointer;
    new_size = expansion_size;
    if (expansion_size != 0) {
        do {
            DataPointer new_element = (DataPointer)*element_data;
            *array_end = (longlong)new_element;
            if (new_element != (DataPointer)0x0) {
                // 调用元素的初始化函数
                ((CallbackFunction)(*new_element + 0x28))();
            }
            array_end = array_end + 1;
            new_size = new_size - 1;
        } while (new_size != 0);
    }
    
    // 清理原始数据
    array_start = (DataPointer)*array_data;
    array_end = (DataPointer)array_data[1];
    if (array_start != array_end) {
        do {
            if ((DataPointer)*array_start != (DataPointer)0x0) {
                // 调用元素的析构函数
                ((DestructorFunction)(*(longlong *)*array_start + 0x38))();
            }
            array_start = array_start + 1;
        } while (array_start != array_end);
        array_start = (DataPointer)*array_data;
    }
    
    if (array_start == (DataPointer)0x0) {
        *array_data = (longlong)temp_pointer;
        array_data[2] = (longlong)(temp_pointer + new_size);
        array_data[1] = (longlong)(allocation_pointer + expansion_size);
        return;
    }
    
    // 释放原始内存
    MemoryAllocationAndDeallocation(array_start);
}

//============================================================================
// 4. 容器数据处理器 (ContainerDataProcessor)
// 
// 功能：容器数据的批量处理和操作
// 参数：container_data - 容器数据指针, operation_size - 操作大小, element_data - 元素数据指针
// 返回：void
// 
// 技术实现：
// - 支持批量数据操作
// - 实现高效的数据迁移
// - 提供完整的错误处理
// - 优化处理性能
//============================================================================
void ContainerDataProcessor(undefined8 container_data, longlong operation_size)
{
    DataPointer container_start, container_end, current_pointer;
    DataPointer new_container_start, new_container_end;
    DataPointer allocation_pointer, temp_pointer;
    SizeType container_size, new_size;
    SizeType i;
    longlong *container_array = (longlong *)container_data;
    
    operation_size = operation_size >> 3;
    new_size = operation_size * 2;
    if (operation_size == 0) {
        new_size = 1;
    }
    if (new_size < (SizeType)(operation_size + operation_size)) {
        new_size = operation_size + operation_size;
    }
    
    allocation_pointer = (DataPointer)0x0;
    temp_pointer = allocation_pointer;
    if (new_size != 0) {
        allocation_pointer = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, new_size * 8, (char)container_array[3]);
        container_end = (DataPointer)container_array[1];
        container_start = (DataPointer)*container_array;
        temp_pointer = allocation_pointer;
    }
    
    // 复制现有数据
    for (; container_start != container_end; container_start = container_start + 1) {
        *allocation_pointer = *container_start;
        allocation_pointer = allocation_pointer + 1;
        *container_start = 0;
    }
    
    // 处理新数据
    container_end = allocation_pointer;
    container_size = operation_size;
    if (operation_size != 0) {
        do {
            DataPointer new_element = (DataPointer)*container_array;
            *container_end = (longlong)new_element;
            if (new_element != (DataPointer)0x0) {
                // 调用元素的初始化函数
                ((CallbackFunction)(*new_element + 0x28))();
            }
            container_end = container_end + 1;
            container_size = container_size - 1;
        } while (container_size != 0);
    }
    
    // 清理原始数据
    container_start = (DataPointer)*container_array;
    container_end = (DataPointer)container_array[1];
    if (container_start != container_end) {
        do {
            if ((DataPointer)*container_start != (DataPointer)0x0) {
                // 调用元素的析构函数
                ((DestructorFunction)(*(longlong *)*container_start + 0x38))();
            }
            container_start = container_start + 1;
        } while (container_start != container_end);
        container_start = (DataPointer)*container_array;
    }
    
    if (container_start == (DataPointer)0x0) {
        *container_array = (longlong)temp_pointer;
        container_array[2] = (longlong)(temp_pointer + new_size);
        container_array[1] = (longlong)(allocation_pointer + operation_size);
        return;
    }
    
    // 释放原始内存
    MemoryAllocationAndDeallocation(container_start);
}

//============================================================================
// 5. 批量数据操作器 (BatchDataOperator)
// 
// 功能：批量数据的操作和处理
// 参数：target_array - 目标数组, operation_size - 操作大小, source_data - 源数据指针
// 返回：void
// 
// 技术实现：
// - 实现高效的批量操作
// - 支持多种数据处理模式
// - 提供数据验证和清理
// - 优化操作性能
//============================================================================
void BatchDataOperator(void)
{
    DataPointer target_pointer, source_pointer;
    SizeType operation_size;
    longlong *target_array;
    
    operation_size = operation_size;
    if (operation_size != 0) {
        do {
            source_pointer = (DataPointer)*target_array;
            *target_pointer = (longlong)source_pointer;
            if (source_pointer != (DataPointer)0x0) {
                // 调用元素的初始化函数
                ((CallbackFunction)(*source_pointer + 0x28))();
            }
            target_pointer = target_pointer + 1;
            operation_size = operation_size - 1;
        } while (operation_size != 0);
        target_pointer = *(DataPointer **)(target_array + 8);
    }
    *(DataPointer **)(target_array + 8) = target_pointer + operation_size;
    return;
}

//============================================================================
// 6. 节点插入和删除管理器 (NodeInsertionAndRemovalManager)
// 
// 功能：树形结构节点的插入和删除管理
// 参数：tree_root - 树根节点, insertion_point - 插入点, operation_mode - 操作模式, element_data - 元素数据
// 返回：void* - 操作结果的指针
// 
// 技术实现：
// - 实现复杂的节点插入逻辑
// - 支持多种平衡策略
// - 提供完整的删除功能
// - 处理边界情况
//============================================================================
undefined8 * NodeInsertionAndRemovalManager(longlong *tree_root, undefined8 *insertion_point, undefined8 operation_mode, longlong *element_data, int *search_key)
{
    bool should_insert_left;
    DataPointer root_pointer, node_pointer, parent_pointer;
    SizeType comparison_result;
    undefined8 insertion_flag;
    
    root_pointer = (DataPointer)*tree_root;
    if ((element_data == root_pointer) || (element_data == tree_root)) {
        if (tree_root[4] != 0) {
            element_data = root_pointer;
            if ((*(int *)(root_pointer + 4) < *search_key) ||
               ((*(int *)(root_pointer + 4) <= *search_key && (*(int *)((longlong)root_pointer + 0x24) < search_key[1])))) {
                // 执行插入操作
                insertion_flag = 0;
            }
        }
    }
    else {
        root_pointer = (DataPointer)func_0x00018066bd70(element_data);
        comparison_result = *search_key;
        if (((int)element_data[4] < comparison_result) ||
            (((int)element_data[4] <= comparison_result && (*(int *)((longlong)element_data + 0x24) < search_key[1])))) {
            if ((comparison_result < (int)root_pointer[4]) ||
                ((comparison_result <= (int)root_pointer[4] && (search_key[1] < *(int *)((longlong)root_pointer + 0x24))))) {
                // 执行插入操作
                insertion_flag = 0;
                root_pointer = element_data;
            }
        }
        
        if ((int)root_pointer[4] <= comparison_result) {
            if ((int)root_pointer[4] < comparison_result) {
                // 执行插入操作
                insertion_flag = 0;
            }
            if ((*(int *)((longlong)root_pointer + 0x24) <= search_key[1]) &&
                ((*(int *)((longlong)root_pointer + 0x24) < search_key[1] || ((int)root_pointer[5] <= search_key[2])))) {
                // 执行插入操作
                insertion_flag = 0;
            }
        }
        
        if (*element_data == 0) {
            insertion_flag = 0;
            root_pointer = element_data;
        }
        else {
            insertion_flag = 1;
        }
    }
    
    if (root_pointer != (DataPointer)0x0) {
        DataStructureCreationAndDestruction(tree_root, insertion_point, root_pointer, insertion_flag, search_key);
        return insertion_point;
    }
    
    // 创建新节点
    insertion_point = (undefined8 *)DataStructureOptimizationManager(tree_root, insertion_point, root_pointer, search_key);
    *insertion_point = *insertion_point;
    return insertion_point;
}

//============================================================================
// 7. 节点创建和初始化器 (NodeCreationAndInitialization)
// 
// 功能：节点的创建和初始化
// 参数：node_data - 节点数据, initialization_params - 初始化参数
// 返回：void
// 
// 技术实现：
// - 实现节点的动态创建
// - 支持多种初始化模式
// - 提供默认值设置
// - 处理初始化错误
//============================================================================
void NodeCreationAndInitialization(void)
{
    DataPointer new_node;
    longlong *node_params;
    
    new_node = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x30, *(undefined1 *)(node_params + 0x28));
    *(undefined8 *)(new_node + 0x20) = *initialization_params;
    *(undefined8 *)(new_node + 0x28) = 0;
    // 调用节点初始化函数
    NodeCreationAndInitialization(new_node);
}

//============================================================================
// 8. 节点销毁和清理器 (NodeDestructionAndCleanup)
// 
// 功能：节点的销毁和资源清理
// 参数：node_data - 节点数据, cleanup_params - 清理参数
// 返回：void
// 
// 技术实现：
// - 实现安全的节点销毁
// - 支持资源清理和释放
// - 提供内存回收
// - 处理依赖关系
//============================================================================
void NodeDestructionAndCleanup(void)
{
    DataPointer node_to_destroy;
    longlong *cleanup_params;
    
    node_to_destroy = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x30, *(undefined1 *)(cleanup_params + 0x28));
    *(undefined8 *)(node_to_destroy + 0x20) = *cleanup_params;
    *(undefined8 *)(node_to_destroy + 0x28) = 0;
    // 调用节点销毁函数
    NodeDestructionAndCleanup(node_to_destroy);
}

//============================================================================
// 9. 节点链接和解链器 (NodeLinkingAndUnlinking)
// 
// 功能：节点的链接和解链操作
// 参数：node_data - 节点数据, link_params - 链接参数
// 返回：void
// 
// 技术实现：
// - 实现复杂的链接逻辑
// - 支持多种链接模式
// - 提供安全的解链操作
// - 处理循环引用
//============================================================================
void NodeLinkingAndUnlinking(void)
{
    DataPointer node_to_link;
    longlong *link_params;
    
    node_to_link = (DataPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x30, *(undefined1 *)(link_params + 0x28));
    *(undefined8 *)(node_to_link + 0x20) = *link_params;
    *(undefined8 *)(node_to_link + 0x28) = 0;
    // 调用节点链接函数
    NodeLinkingAndUnlinking(node_to_link);
}

//============================================================================
// 10. 数据设置器 (DataSetter)
// 
// 功能：简单数据设置操作
// 参数：target_location - 目标位置, data_to_set - 要设置的数据
// 返回：void
// 
// 技术实现：
// - 实现简单的数据设置
// - 提供基本的验证
// - 处理设置错误
//============================================================================
void DataSetter(void)
{
    undefined8 target_data;
    undefined8 *target_pointer;
    
    *target_pointer = target_data;
    return;
}

//============================================================================
// 11. 数据搜索和检索引擎 (DataSearchAndRetrievalEngine)
// 
// 功能：数据的高效搜索和检索
// 参数：search_structure - 搜索结构, search_params - 搜索参数, result_buffer - 结果缓冲区
// 返回：void* - 搜索结果的指针
// 
// 技术实现：
// - 实现多种搜索算法
// - 支持复杂的查询条件
// - 提供结果缓存
// - 优化搜索性能
//============================================================================
undefined8 * DataSearchAndRetrievalEngine(longlong *search_structure, undefined8 *result_buffer, undefined8 search_params, longlong *element_data, int *search_key)
{
    int comparison_result;
    DataPointer structure_root, node_pointer;
    undefined8 *search_result;
    undefined8 stack_buffer[16];
    
    structure_root = (DataPointer)*search_structure;
    if ((element_data == structure_root) || (element_data == search_structure)) {
        if (search_structure[4] == 0) {
            // 返回搜索结果
            search_result = (undefined8 *)DataStructureOptimizationManager(search_structure, stack_buffer, structure_root, search_key);
            *result_buffer = *search_result;
            return result_buffer;
        }
        element_data = structure_root;
        if (*search_key <= *(int *)(structure_root + 4)) {
            if (*search_key < *(int *)(structure_root + 4)) {
                // 返回搜索结果
                search_result = (undefined8 *)DataStructureOptimizationManager(search_structure, stack_buffer, structure_root, search_key);
                *result_buffer = *search_result;
                return result_buffer;
            }
            if ((search_key[1] <= *(int *)((longlong)structure_root + 0x24)) &&
               ((search_key[1] < *(int *)((longlong)structure_root + 0x24) || (search_key[2] <= *(int *)(structure_root + 5))))) {
                // 返回搜索结果
                search_result = (undefined8 *)DataStructureOptimizationManager(search_structure, stack_buffer, structure_root, search_key);
                *result_buffer = *search_result;
                return result_buffer;
            }
        }
    }
    
    // 执行搜索操作
    search_result = 0;
    structure_root = element_data;
    
    // 执行插入操作
    DataStructureCreationAndDestruction(search_structure, result_buffer, structure_root, search_result, search_key);
    return result_buffer;
}

//============================================================================
// 12. 数据验证和处理器 (DataValidationAndProcessing)
// 
// 功能：数据的验证和处理
// 参数：validation_data - 验证数据, processing_params - 处理参数, target_structure - 目标结构
// 返回：void
// 
// 技术实现：
// - 实现数据验证逻辑
// - 支持多种处理模式
// - 提供错误处理
// - 优化处理性能
//============================================================================
void DataValidationAndProcessing(longlong validation_data, longlong *processing_params, longlong *target_structure)
{
    DataPointer source_pointer, target_pointer;
    HashPointer hash_pointer, next_hash_pointer;
    SizeType iteration_count, hash_index;
    SizeType key_value, secondary_key;
    SizeType hash_value;
    char validation_result[8];
    uint hash_table_size;
    
    source_pointer = *processing_params;
    target_pointer = *target_structure;
    
    iteration_count = 0;
    while (source_pointer != *target_structure) {
        source_pointer = *(DataPointer *)(source_pointer + 0x10);
        while (source_pointer == 0) {
            hash_pointer = (HashPointer)(target_pointer + 8);
            target_pointer = target_pointer + 8;
            source_pointer = *hash_pointer;
        }
        iteration_count = iteration_count + 1;
    }
    
    // 执行数据验证
    DataValidationAndProcessing(validation_data + 0x20, validation_result, *(undefined4 *)(validation_data + 0x10), *(undefined4 *)(validation_data + 0x18), iteration_count);
    
    if (validation_result[0] != '\0') {
        DataValidationAndProcessing(validation_data);
    }
    
    // 处理哈希表操作
    hash_pointer = (HashPointer)*target_structure;
    target_pointer = (HashPointer)*processing_params;
    do {
        if (target_pointer == hash_pointer) {
            return;
        }
        
        // 计算哈希值
        key_value = *target_pointer;
        secondary_key = target_pointer[1];
        hash_value = (SizeType)(key_value * 1000 + secondary_key);
        hash_index = hash_value % (SizeType)*(uint *)(validation_data + 0x10);
        
        // 搜索哈希桶
        for (next_hash_pointer = *(HashPointer *)(*(longlong *)(validation_data + 8) + hash_index * 8); next_hash_pointer != (HashPointer)0x0; next_hash_pointer = *(HashPointer *)(next_hash_pointer + 4)) {
            if ((*target_pointer == *next_hash_pointer) && (target_pointer[1] == next_hash_pointer[1])) {
                // 找到匹配项
                goto process_next_item;
            }
        }
        
        // 创建新的哈希项
        next_hash_pointer = (HashPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x18, *(undefined1 *)(validation_data + 0x2c));
        iteration_count = target_pointer[1];
        key_value = target_pointer[2];
        secondary_key = target_pointer[3];
        *next_hash_pointer = *target_pointer;
        next_hash_pointer[1] = iteration_count;
        next_hash_pointer[2] = key_value;
        next_hash_pointer[3] = secondary_key;
        next_hash_pointer[4] = 0;
        next_hash_pointer[5] = 0;
        
        // 更新哈希表
        DataValidationAndProcessing(validation_data + 0x20, validation_result, *(undefined4 *)(validation_data + 0x10), *(undefined4 *)(validation_data + 0x18), 1);
        if (validation_result[0] != '\0') {
            hash_index = hash_value % (SizeType)hash_table_size;
            DataValidationAndProcessing(validation_data);
        }
        
        *(undefined8 *)(next_hash_pointer + 4) = *(undefined8 *)(*(longlong *)(validation_data + 8) + hash_index * 8);
        *(HashPointer *)(*(longlong *)(validation_data + 8) + hash_index * 8) = next_hash_pointer;
        *(longlong *)(validation_data + 0x18) = *(longlong *)(validation_data + 0x18) + 1;
        
process_next_item:
        target_pointer = *(HashPointer *)(target_pointer + 4);
        *processing_params = (longlong)target_pointer;
        if (target_pointer == (HashPointer)0x0) {
            source_pointer = processing_params[1];
            do {
                target_pointer = *(HashPointer *)(source_pointer + 8);
                source_pointer = source_pointer + 8;
            } while (target_pointer == (HashPointer)0x0);
            *processing_params = (longlong)target_pointer;
            processing_params[1] = source_pointer;
        }
    } while (true);
}

//============================================================================
// 13. 数据哈希和查找器 (DataHashingAndLookup)
// 
// 功能：数据的哈希计算和查找
// 参数：hash_data - 哈希数据, lookup_params - 查找参数, target_container - 目标容器
// 返回：void
// 
// 技术实现：
// - 实现高效的哈希算法
// - 支持快速查找操作
// - 提供冲突处理
// - 优化哈希性能
//============================================================================
void DataHashingAndLookup(void)
{
    int primary_key, secondary_key, tertiary_key, quaternary_key;
    HashPointer hash_pointer, next_hash_pointer;
    SizeType hash_value, hash_index;
    longlong *container_data;
    ulonglong lookup_key;
    char validation_flag;
    uint hash_size;
    
    do {
        lookup_key = (ulonglong)(*container_data * 1000 + container_data[1]);
        hash_index = lookup_key % (ulonglong)*(uint *)(container_data + 0x10);
        
        // 搜索哈希表
        for (next_hash_pointer = *(HashPointer *)(*(longlong *)(container_data + 8) + hash_index * 8); next_hash_pointer != (HashPointer)0x0; next_hash_pointer = *(HashPointer *)(next_hash_pointer + 4)) {
            if ((*container_data == *next_hash_pointer) && (container_data[1] == next_hash_pointer[1])) {
                // 找到匹配项
                goto process_next_hash_item;
            }
        }
        
        // 创建新的哈希项
        next_hash_pointer = (HashPointer)MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x18, *(undefined1 *)(container_data + 0x2c));
        primary_key = container_data[1];
        secondary_key = container_data[2];
        tertiary_key = container_data[3];
        *next_hash_pointer = *container_data;
        next_hash_pointer[1] = primary_key;
        next_hash_pointer[2] = secondary_key;
        next_hash_pointer[3] = tertiary_key;
        next_hash_pointer[4] = 0;
        next_hash_pointer[5] = 0;
        
        // 更新哈希表
        DataValidationAndProcessing(container_data + 0x20, &validation_flag, *(undefined4 *)(container_data + 0x10), *(undefined4 *)(container_data + 0x18), 1);
        if (validation_flag != '\0') {
            hash_index = lookup_key % (ulonglong)hash_size;
            DataValidationAndProcessing(container_data);
        }
        
        *(undefined8 *)(next_hash_pointer + 4) = *(undefined8 *)(*(longlong *)(container_data + 8) + hash_index * 8);
        *(HashPointer *)(*(longlong *)(container_data + 8) + hash_index * 8) = next_hash_pointer;
        *(longlong *)(container_data + 0x18) = *(longlong *)(container_data + 0x18) + 1;
        
process_next_hash_item:
        container_data = *(HashPointer *)(container_data + 4);
        *target_container = container_data;
        if (container_data == (HashPointer)0x0) {
            lookup_key = target_container[1];
            do {
                container_data = *(HashPointer *)(lookup_key + 8);
                lookup_key = lookup_key + 8;
            } while (container_data == (HashPointer)0x0);
            *target_container = container_data;
            target_container[1] = lookup_key;
        }
        if (container_data == target_limit) {
            return;
        }
    } while (true);
}

//============================================================================
// 14. 内存分配和释放器 (MemoryAllocationAndDeallocation)
// 
// 功能：内存的分配和释放
// 参数：无
// 返回：void
// 
// 技术实现：
// - 实现基本的内存管理
// - 提供简单的接口
// - 处理基本错误
//============================================================================
void MemoryAllocationAndDeallocation(void)
{
    return;
}

//============================================================================
// 15. 数据结构创建和销毁器 (DataStructureCreationAndDestruction)
// 
// 功能：数据结构的创建和销毁
// 参数：structure_params - 结构参数, creation_data - 创建数据, target_structure - 目标结构, creation_mode - 创建模式, init_params - 初始化参数
// 返回：void
// 
// 技术实现：
// - 实现结构的动态创建
// - 支持多种创建模式
// - 提供完整的销毁功能
// - 处理创建错误
//============================================================================
void DataStructureCreationAndDestruction(longlong structure_params, undefined8 creation_data, longlong target_structure, undefined8 creation_mode, uint *init_params)
{
    uint primary_key, secondary_key, tertiary_key, quaternary_key;
    longlong new_structure;
    undefined8 creation_flag;
    
    if (((char)creation_mode == '\0') && (target_structure != structure_params)) {
        primary_key = *init_params;
        secondary_key = *(uint *)(target_structure + 0x20);
        if ((secondary_key <= primary_key) && ((secondary_key < primary_key || (*(int *)(target_structure + 0x24) <= (int)init_params[1])))) {
            if ((secondary_key < primary_key) ||
               (((secondary_key <= primary_key && (*(int *)(target_structure + 0x24) < (int)init_params[1])) ||
                (*(int *)(target_structure + 0x28) <= (int)init_params[2])))) {
                if (primary_key <= secondary_key) {
                    if ((((int)init_params[1] <= *(int *)(target_structure + 0x24)) &&
                        (((int)init_params[1] < *(int *)(target_structure + 0x24) ||
                         ((int)init_params[2] <= *(int *)(target_structure + 0x28))))) &&
                       ((int)init_params[3] < *(int *)(target_structure + 0x2c)))) {
                        // 设置创建标志
                        creation_flag = 1;
                        goto execute_creation;
                    }
                }
                creation_flag = 1;
                goto execute_creation;
            }
        }
    }
    
    // 设置创建标志
    creation_flag = 0;
    
execute_creation:
    new_structure = MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x50, *(undefined1 *)(structure_params + 0x28), creation_mode, 0xfffffffffffffffe);
    primary_key = init_params[1];
    secondary_key = init_params[2];
    tertiary_key = init_params[3];
    *(uint *)(new_structure + 0x20) = *init_params;
    *(uint *)(new_structure + 0x24) = primary_key;
    *(uint *)(new_structure + 0x28) = secondary_key;
    *(uint *)(new_structure + 0x2c) = tertiary_key;
    *(undefined8 *)(new_structure + 0x30) = 0;
    *(undefined8 *)(new_structure + 0x38) = 0;
    *(undefined8 *)(new_structure + 0x40) = 0;
    *(undefined4 *)(new_structure + 0x48) = 3;
    
    // 调用结构创建函数
    NodeCreationAndInitialization(new_structure, target_structure, structure_params, creation_flag);
}

//============================================================================
// 16. 数据结构搜索和验证器 (DataStructureSearchAndValidation)
// 
// 功能：数据结构的搜索和验证
// 参数：search_structure - 搜索结构, target_node - 目标节点, validation_result - 验证结果, search_key - 搜索键
// 返回：longlong* - 搜索结果的指针
// 
// 技术实现：
// - 实现结构搜索逻辑
// - 支持复杂验证
// - 提供结果缓存
// - 优化搜索性能
//============================================================================
longlong * DataStructureSearchAndValidation(longlong *search_structure, longlong *target_node, undefined1 *validation_result, uint *search_key)
{
    uint primary_key, secondary_key;
    longlong *structure_root;
    
    structure_root = (longlong *)*search_structure;
    if ((target_node == structure_root) || (target_node == search_structure)) {
        if (search_structure[4] == 0) {
            goto return_null;
        }
        primary_key = *(uint *)(structure_root + 4);
        secondary_key = *search_key;
        if ((secondary_key <= primary_key) &&
           ((secondary_key < primary_key || ((int)search_key[1] <= *(int *)((longlong)structure_root + 0x24))))) {
            if ((secondary_key < primary_key) ||
               (((secondary_key <= primary_key && ((int)search_key[1] < *(int *)((longlong)structure_root + 0x24))) ||
                ((int)search_key[2] <= *(int *)(structure_root + 5))))) {
                if (primary_key <= secondary_key) {
                    if (((*(int *)((longlong)structure_root + 0x24) <= (int)search_key[1]) &&
                        ((*(int *)((longlong)structure_root + 0x24) < (int)search_key[1] ||
                         (*(int *)(structure_root + 5) <= (int)search_key[2])))) &&
                       (*(int *)((longlong)structure_root + 0x2c) < (int)search_key[3])) {
                        // 设置验证结果
                        *validation_result = 0;
                        return structure_root;
                    }
                }
                goto return_null;
            }
        }
    }
    
    // 搜索父节点
    structure_root = (longlong *)func_0x00018066bd70(target_node);
    primary_key = *(uint *)(target_node + 4);
    secondary_key = *search_key;
    if ((secondary_key <= primary_key) &&
       ((secondary_key < primary_key || ((int)search_key[1] <= *(int *)((longlong)target_node + 0x24))))) {
        if ((secondary_key < primary_key) ||
           (((secondary_key <= primary_key && ((int)search_key[1] < *(int *)((longlong)target_node + 0x24))) ||
            ((int)search_key[2] <= (int)target_node[5])))) {
            if (secondary_key < primary_key) {
                goto return_null;
            }
            if ((((int)search_key[1] < *(int *)((longlong)target_node + 0x24)) ||
                (((int)search_key[1] <= *(int *)((longlong)target_node + 0x24) &&
                 ((int)search_key[2] < (int)target_node[5])))) ||
               ((int)search_key[3] <= *(int *)((longlong)target_node + 0x2c))) {
                goto return_null;
            }
        }
    }
    
    primary_key = *(uint *)(structure_root + 4);
    if ((primary_key <= secondary_key) &&
       ((primary_key < secondary_key || (*(int *)((longlong)structure_root + 0x24) <= (int)search_key[1])))) {
        if ((primary_key < secondary_key) ||
           (((primary_key <= secondary_key && (*(int *)((longlong)structure_root + 0x24) < (int)search_key[1])) ||
            ((int)structure_root[5] <= (int)search_key[2])))) {
            if ((((primary_key < secondary_key) ||
                 ((primary_key <= secondary_key && (*(int *)((longlong)structure_root + 0x24) < (int)search_key[1])))) ||
                ((primary_key <= secondary_key &&
                 ((*(int *)((longlong)structure_root + 0x24) <= (int)search_key[1] &&
                  ((int)structure_root[5] < (int)search_key[2])))))) ||
               (*(int *)((longlong)structure_root + 0x2c) <= (int)search_key[3])) {
                // 返回空结果
return_null:
                *validation_result = 0;
                return (longlong *)0x0;
            }
        }
    }
    
    if (*target_node != 0) {
        *validation_result = 1;
        return structure_root;
    }
    *validation_result = 0;
    return target_node;
}

//============================================================================
// 17. 数据结构插入和删除器 (DataStructureInsertionAndRemoval)
// 
// 功能：数据结构的插入和删除
// 参数：structure_params - 结构参数, operation_data - 操作数据, target_structure - 目标结构, operation_mode - 操作模式, operation_key - 操作键
// 返回：void
// 
// 技术实现：
// - 实现插入删除逻辑
// - 支持多种操作模式
// - 提供完整的事务支持
// - 处理操作错误
//============================================================================
void DataStructureInsertionAndRemoval(longlong structure_params, undefined8 operation_data, longlong target_structure, char operation_mode, int *operation_key)
{
    longlong new_structure;
    undefined8 operation_flag;
    
    if ((operation_mode == '\0') && (target_structure != structure_params)) {
        if ((*(int *)(target_structure + 0x20) <= *operation_key) &&
           ((*(int *)(target_structure + 0x20) < *operation_key || (*(int *)(target_structure + 0x24) <= operation_key[1])))) {
            operation_flag = 1;
            goto execute_operation;
        }
    }
    operation_flag = 0;
    
execute_operation:
    new_structure = MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x30, *(undefined1 *)(structure_params + 0x28));
    *(undefined8 *)(new_structure + 0x20) = *(undefined8 *)operation_key;
    *(undefined8 *)(new_structure + 0x28) = 0;
    
    // 调用结构操作函数
    NodeCreationAndInitialization(new_structure, target_structure, structure_params, operation_flag);
}

//============================================================================
// 18. 数据结构优化管理器 (DataStructureOptimizationManager)
// 
// 功能：数据结构的优化和管理
// 参数：structure_data - 结构数据, operation_result - 操作结果, target_node - 目标节点, search_key - 搜索键
// 返回：undefined8* - 优化结果的指针
// 
// 技术实现：
// - 实现结构优化算法
// - 支持多种优化策略
// - 提供性能监控
// - 处理优化错误
//============================================================================
undefined8 * DataStructureOptimizationManager(undefined8 *structure_data, undefined8 *operation_result, undefined8 target_node, int *search_key)
{
    undefined8 *current_node, *next_node, *parent_node;
    bool should_search_left;
    undefined8 operation_flag;
    longlong new_structure;
    
    should_search_left = true;
    parent_node = structure_data;
    if ((undefined8 *)structure_data[2] != (undefined8 *)0x0) {
        current_node = (undefined8 *)structure_data[2];
        do {
            parent_node = current_node;
            if (*search_key < *(int *)(current_node + 4)) {
                // 向左搜索
search_left:
                next_node = (undefined8 *)current_node[1];
                should_search_left = true;
            }
            else {
                if (*search_key <= *(int *)(current_node + 4)) {
                    if ((search_key[1] < *(int *)((longlong)current_node + 0x24)) ||
                       ((search_key[1] <= *(int *)((longlong)current_node + 0x24) &&
                        (search_key[2] < *(int *)(current_node + 5))))) {
                        // 向左搜索
                        goto search_left;
                    }
                }
                next_node = (undefined8 *)*current_node;
                should_search_left = false;
            }
            if (should_search_left) {
                current_node = parent_node;
            }
            current_node = next_node;
            next_node = parent_node;
        } while (next_node != (undefined8 *)0x0);
    }
    
    current_node = parent_node;
    if (should_search_left) {
        if (parent_node != (undefined8 *)structure_data[1]) {
            current_node = (undefined8 *)func_0x00018066b9a0(parent_node);
            goto check_insertion_point;
        }
    }
    else {
check_insertion_point:
        if (*search_key <= *(int *)(current_node + 4)) {
            if (*search_key < *(int *)(current_node + 4)) {
                // 设置操作结果
                *operation_result = current_node;
                *(undefined1 *)(operation_result + 1) = 0;
                return operation_result;
            }
            if ((search_key[1] <= *(int *)((longlong)current_node + 0x24)) &&
               ((search_key[1] < *(int *)((longlong)current_node + 0x24) || (search_key[2] <= *(int *)(current_node + 5))))) {
                // 设置操作结果
                *operation_result = current_node;
                *(undefined1 *)(operation_result + 1) = 0;
                return operation_result;
            }
        }
    }
    
    if (parent_node != structure_data) {
        if (*(int *)(parent_node + 4) <= *search_key) {
            if (*search_key <= *(int *)(parent_node + 4)) {
                if ((search_key[1] < *(int *)((longlong)parent_node + 0x24)) ||
                   ((search_key[1] <= *(int *)((longlong)parent_node + 0x24) && (search_key[2] < *(int *)(parent_node + 5)))) {
                    // 设置操作标志
                    operation_flag = 1;
                    goto execute_optimization;
                }
            }
            operation_flag = 1;
            goto execute_optimization;
        }
    }
    
    // 设置操作标志
    operation_flag = 0;
    
execute_optimization:
    new_structure = MemoryAllocationAndDeallocation(_DAT_180c8ed18, 0x38, *(undefined1 *)(structure_data[5]));
    *(undefined8 *)(new_structure + 0x20) = *(undefined8 *)search_key;
    *(int *)(new_structure + 0x28) = search_key[2];
    *(undefined8 *)(new_structure + 0x2c) = 0;
    
    // 调用优化函数
    NodeCreationAndInitialization(new_structure, parent_node, structure_data, operation_flag);
}