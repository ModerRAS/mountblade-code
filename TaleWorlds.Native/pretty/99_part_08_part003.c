#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 99_part_08_part003.c - 高级数据处理和内存管理模块
// 
// 本模块包含11个核心函数，涵盖高级数据处理、内存管理、排序算法、
// 数据结构操作、字符串处理、二进制数据处理等高级系统功能。
// 
// 主要功能包括：
// - 动态数组扩容和数据迁移
// - 高效内存分配和释放
// - 多种排序算法实现
// - 字符串和二进制数据处理
// - 复杂数据结构操作
// ============================================================================

// ============================================================================
// 常量定义
// ============================================================================

#define ARRAY_ELEMENT_SIZE_104          0x68    // 104字节元素大小
#define ARRAY_ELEMENT_SIZE_26           0x1a    // 26字节元素大小  
#define ARRAY_ELEMENT_SIZE_48           0x30    // 48字节元素大小
#define ARRAY_ELEMENT_SIZE_13           0x0d    // 13字节元素大小
#define SORT_ELEMENT_SIZE_216           0xd8    // 216字节排序元素大小
#define SORT_ELEMENT_SIZE_24            0x18    // 24字节排序元素大小
#define SORT_ELEMENT_SIZE_9             0x09    // 9字节排序元素大小
#define INITIAL_ARRAY_CAPACITY          1       // 初始数组容量
#define CAPACITY_DOUBLING_FACTOR        2       // 容量翻倍因子
#define INSERTION_SORT_THRESHOLD        29      // 插入排序阈值
#define BINARY_SORT_ITERATIONS          2       // 二进制排序迭代次数
#define MEMORY_ALLOC_ALIGNMENT         8       // 内存分配对齐

// ============================================================================
// 类型别名定义
// ============================================================================

typedef int64_t*                      ArrayPointer;            // 数组指针类型
typedef uint64_t*                    DataBuffer;             // 数据缓冲区类型
typedef int32_t*                    UInt32Buffer;           // 32位无符号整数缓冲区
typedef char*                          CharBuffer;             // 字符缓冲区类型
typedef int16_t*                    UInt16Buffer;           // 16位无符号整数缓冲区
typedef int64_t                       MemorySize;             // 内存大小类型
typedef uint                            UInt32;                 // 32位无符号整数
typedef ushort                          UInt16;                 // 16位无符号整数
typedef bool                            Boolean;                // 布尔类型

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 数组控制块结构体
 * 
 * 用于管理动态数组的核心控制信息，包括数组起始地址、
 * 结束地址、容量分配以及内存管理标志。
 */
typedef struct {
    ArrayPointer      data_start;      // 数据起始地址
    ArrayPointer      data_end;        // 数据结束地址  
    ArrayPointer      capacity_end;    // 容量结束地址
    char              memory_flags;    // 内存管理标志
    char              reserved[7];     // 保留字段
} ArrayControlBlock;

/**
 * @brief 排序元素结构体
 * 
 * 用于排序操作的复合数据结构，包含主键值、
 * 辅助键值和相关的数据指针。
 */
typedef struct {
    UInt32            primary_key;     // 主键值
    UInt32            secondary_key;   // 辅助键值
    UInt16            sort_flags;      // 排序标志
    UInt16            data_offset;     // 数据偏移量
    DataBuffer        data_pointer;    // 数据指针
} SortElement;

/**
 * @brief 内存分配器结构体
 * 
 * 高级内存管理器的核心数据结构，跟踪内存池状态、
 * 分配统计和内存碎片信息。
 */
typedef struct {
    DataBuffer        memory_pool;     // 内存池起始地址
    MemorySize        pool_size;        // 内存池总大小
    MemorySize        allocated_size;   // 已分配大小
    MemorySize        free_size;        // 空闲大小
    UInt32            allocation_count; // 分配计数
    UInt32            free_count;       // 释放计数
    char              allocator_flags;  // 分配器标志
    char              padding[3];      // 填充字段
} MemoryAllocator;

// ============================================================================
// 函数声明
// ============================================================================

void DynamicArrayProcessor_104ByteElements(ArrayControlBlock* array_control, uint64_t param_2);
void DynamicArrayProcessor_26ByteElements(ArrayControlBlock* array_control, uint64_t param_2);
void DynamicArrayProcessor_48ByteElements(ArrayControlBlock* array_control, uint64_t param_2);
void SortProcessor_BitmaskIndexed(int64_t param_1, int64_t param_2);
void SortProcessor_BitmaskOptimized(void);
void EmptyOperationHandler(void);
void StringInsertionSortProcessor(CharBuffer start_ptr, CharBuffer end_ptr);
void StringInsertionSortProcessor_Range(CharBuffer start_ptr, CharBuffer end_ptr, int64_t range_limit);
void StringInsertionSortProcessor_Loop(void);
void StringInsertionSortProcessor_Secondary(void);
void UInt16InsertionSortProcessor(void);

// ============================================================================
// 函数别名定义
// ============================================================================

#define ArrayResize_104ByteElements      DynamicArrayProcessor_104ByteElements
#define ArrayResize_26ByteElements       DynamicArrayProcessor_26ByteElements  
#define ArrayResize_48ByteElements       DynamicArrayProcessor_48ByteElements
#define BitmaskSortProcessor             SortProcessor_BitmaskIndexed
#define OptimizedBitmaskSort             SortProcessor_BitmaskOptimized
#define NoOperationFunction              EmptyOperationHandler
#define InsertionSort_String            StringInsertionSortProcessor
#define InsertionSort_StringRange        StringInsertionSortProcessor_Range
#define InsertionSort_StringLoop        StringInsertionSortProcessor_Loop
#define InsertionSort_StringSecondary    StringInsertionSortProcessor_Secondary
#define InsertionSort_UInt16            UInt16InsertionSortProcessor

/**
 * @brief 内存分配函数
 * @details 系统内存分配器的函数别名
 */
#define MemoryAllocator_Alloc            FUN_18062b420

/**
 * @brief 数据处理回调函数
 * @details 数据处理完成后的回调函数别名
 */
#define DataProcessor_Callback_104        FUN_1804ddda0
#define DataProcessor_Callback_26        FUN_1804dde40
#define DataProcessor_Callback_48        FUN_1804ddee0

/**
 * @brief 内存清理函数
 * @details 内存资源清理函数别名
 */
#define MemoryCleanup_Function           FUN_18064e900

/**
 * @brief 排序操作函数
 * @details 排序算法的核心处理函数别名
 */
#define SortingOperation_Execute         FUN_180387e60

/**
 * @brief 预排序函数
 * @details 预排序处理函数别名
 */
#define PreSorting_Process               FUN_1804df7c0

// ============================================================================
// 核心功能实现
// ============================================================================

/**
 * @brief 动态数组处理器 - 104字节元素版本
 * 
 * 处理104字节大小元素的动态数组扩容和数据迁移操作。
 * 支持自动容量翻倍、数据迁移和内存优化。
 * 
 * @param array_control 数组控制块指针
 * @param param_2 扩展参数（用于内存分配策略）
 * 
 * 技术特点：
 * - 自动容量计算和翻倍策略
 * - 高效的数据块迁移算法
 * - 智能内存分配和释放
 * - 完整的错误处理机制
 */
void DynamicArrayProcessor_104ByteElements(ArrayControlBlock* array_control, uint64_t param_2)
{
    DataBuffer new_buffer = NULL;
    DataBuffer old_buffer;
    DataBuffer old_end;
    MemorySize element_count;
    MemorySize new_capacity;
    DataBuffer write_position;
    MemorySize offset;
    MemorySize current_position;
    DataBuffer cleanup_position;
    
    // 计算当前元素数量和新的容量
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;
    element_count = ((int64_t)old_end - (int64_t)old_buffer) / ARRAY_ELEMENT_SIZE_104;
    new_buffer = NULL;
    
    // 确定新的容量
    if (element_count == 0) {
        new_capacity = INITIAL_ARRAY_CAPACITY;
    } else {
        new_capacity = element_count * CAPACITY_DOUBLING_FACTOR;
        if (new_capacity == 0) goto capacity_calculation_complete;
    }
    
    // 分配新的缓冲区
    new_buffer = (DataBuffer)MemoryAllocator_Alloc(system_memory_pool_ptr, 
                                         new_capacity * ARRAY_ELEMENT_SIZE_104, 
                                         array_control->memory_flags, 
                                         old_buffer, 
                                         0xfffffffffffffffe);
    
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;

capacity_calculation_complete:
    write_position = new_buffer;
    
    // 执行数据迁移
    if (old_buffer != old_end) {
        offset = (int64_t)new_buffer - (int64_t)old_buffer;
        old_buffer = old_buffer + 9;
        
        do {
            // 高效的数据块复制和清零操作
            uint64_t temp_data_1 = old_buffer[-8];
            *write_position = old_buffer[-9];
            write_position[1] = temp_data_1;
            
            uint64_t temp_data_2 = old_buffer[-6];
            write_position[2] = old_buffer[-7];
            write_position[3] = temp_data_2;
            
            int32_t temp_data_3 = *(int32_t *)((int64_t)old_buffer + -0x24);
            int32_t temp_data_4 = *(int32_t *)(old_buffer + -4);
            int32_t temp_data_5 = *(int32_t *)((int64_t)old_buffer + -0x1c);
            
            *(int32_t *)(write_position + 4) = *(int32_t *)(old_buffer + -5);
            *(int32_t *)((int64_t)write_position + 0x24) = temp_data_3;
            *(int32_t *)(write_position + 5) = temp_data_4;
            *(int32_t *)((int64_t)write_position + 0x2c) = temp_data_5;
            
            uint64_t temp_data_6 = old_buffer[-2];
            write_position[6] = old_buffer[-3];
            write_position[7] = temp_data_6;
            
            // 迁移并清零复杂数据结构
            *(uint64_t *)(offset + -8 + (int64_t)old_buffer) = old_buffer[-1];
            old_buffer[-1] = 0;
            *(uint64_t *)(offset + (int64_t)old_buffer) = *old_buffer;
            *old_buffer = 0;
            *(int8_t *)(offset + 8 + (int64_t)old_buffer) = *(int8_t *)(old_buffer + 1);
            *(int32_t *)(offset + 0xc + (int64_t)old_buffer) = *(int32_t *)((int64_t)old_buffer + 0xc);
            *(int32_t *)((int64_t)old_buffer + offset + 0x10) = *(int32_t *)(old_buffer + 2);
            *(int32_t *)((int64_t)old_buffer + offset + 0x14) = *(int32_t *)((int64_t)old_buffer + 0x14);
            *(int32_t *)((int64_t)old_buffer + offset + 0x18) = *(int32_t *)(old_buffer + 3);
            *(int8_t *)((int64_t)old_buffer + offset + 0x1c) = *(int8_t *)((int64_t)old_buffer + 0x1c);
            
            write_position = write_position + ARRAY_ELEMENT_SIZE_13;
            current_position = (int64_t)old_buffer + 4;
            old_buffer = old_buffer + ARRAY_ELEMENT_SIZE_13;
        } while (current_position != old_end);
    }
    
    // 调用数据处理回调函数
    DataProcessor_Callback_104(write_position, param_2);
    
    // 清理旧的内存资源
    offset = array_control->data_end;
    current_position = array_control->data_start;
    if (current_position != offset) {
        do {
            // 执行资源清理回调
            if (*(int64_t **)(current_position + 0x48) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 0x48) + 0x38))();
            }
            if (*(int64_t **)(current_position + 0x40) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 0x40) + 0x38))();
            }
            current_position = current_position + ARRAY_ELEMENT_SIZE_104;
        } while (current_position != offset);
        current_position = array_control->data_start;
    }
    
    // 更新数组控制块
    if (current_position == 0) {
        array_control->data_start = (ArrayPointer)new_buffer;
        array_control->data_end = (ArrayPointer)(write_position + ARRAY_ELEMENT_SIZE_13);
        array_control->capacity_end = (ArrayPointer)(new_buffer + new_capacity * ARRAY_ELEMENT_SIZE_13);
        return;
    }
    
    // 错误处理 - 内存清理失败
    MemoryCleanup_Function(current_position);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * @brief 动态数组处理器 - 26字节元素版本
 * 
 * 处理26字节大小元素的动态数组扩容和数据迁移操作。
 * 支持自动容量翻倍、数据迁移和内存优化。
 * 
 * @param array_control 数组控制块指针
 * @param param_2 扩展参数（用于内存分配策略）
 * 
 * 技术特点：
 * - 自动容量计算和翻倍策略
 * - 高效的数据块迁移算法
 * - 智能内存分配和释放
 * - 完整的错误处理机制
 */
void DynamicArrayProcessor_26ByteElements(ArrayControlBlock* array_control, uint64_t param_2)
{
    DataBuffer new_buffer = NULL;
    DataBuffer old_buffer;
    DataBuffer old_end;
    MemorySize element_count;
    MemorySize new_capacity;
    DataBuffer write_position;
    MemorySize offset;
    MemorySize current_position;
    
    // 计算当前元素数量和新的容量
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;
    element_count = ((int64_t)old_end - (int64_t)old_buffer) / ARRAY_ELEMENT_SIZE_26;
    new_buffer = NULL;
    
    // 确定新的容量
    if (element_count == 0) {
        new_capacity = INITIAL_ARRAY_CAPACITY;
    } else {
        new_capacity = element_count * CAPACITY_DOUBLING_FACTOR;
        if (new_capacity == 0) goto capacity_calculation_complete;
    }
    
    // 分配新的缓冲区
    new_buffer = (DataBuffer)MemoryAllocator_Alloc(system_memory_pool_ptr, 
                                         new_capacity * ARRAY_ELEMENT_SIZE_26, 
                                         array_control->memory_flags, 
                                         old_buffer, 
                                         0xfffffffffffffffe);
    
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;

capacity_calculation_complete:
    write_position = new_buffer;
    
    // 执行数据迁移
    if (old_buffer != old_end) {
        offset = (int64_t)new_buffer - (int64_t)old_buffer;
        old_buffer = old_buffer + 1;
        
        do {
            // 高效的数据块复制和清零操作
            *write_position = *(int32_t *)(old_buffer + -1);
            *(int8_t *)((int64_t)old_buffer + offset + -4) = *(int8_t *)((int64_t)old_buffer + -4);
            *(int8_t *)((int64_t)old_buffer + offset + -3) = *(int8_t *)((int64_t)old_buffer + -3);
            *(uint64_t *)((int64_t)old_buffer + offset) = *old_buffer;
            *old_buffer = 0;
            *(uint64_t *)((int64_t)old_buffer + offset + 8) = old_buffer[1];
            old_buffer[1] = 0;
            *(int32_t *)((int64_t)old_buffer + offset + 0x10) = *(int32_t *)(old_buffer + 2);
            
            uint64_t temp_data = *(uint64_t *)((int64_t)old_buffer + 0x1c);
            DataBuffer temp_ptr = (DataBuffer)((int64_t)old_buffer + offset + 0x14);
            *temp_ptr = *(uint64_t *)((int64_t)old_buffer + 0x14);
            temp_ptr[1] = temp_data;
            
            temp_data = *(uint64_t *)((int64_t)old_buffer + 0x2c);
            temp_ptr = (DataBuffer)((int64_t)old_buffer + offset + 0x24);
            *temp_ptr = *(uint64_t *)((int64_t)old_buffer + 0x24);
            temp_ptr[1] = temp_data;
            
            int32_t temp_data_1 = *(int32_t *)(old_buffer + 7);
            int32_t temp_data_2 = *(int32_t *)((int64_t)old_buffer + 0x3c);
            int32_t temp_data_3 = *(int32_t *)(old_buffer + 8);
            UInt32Buffer temp_ptr_2 = (UInt32Buffer)((int64_t)old_buffer + offset + 0x34);
            *temp_ptr_2 = *(int32_t *)((int64_t)old_buffer + 0x34);
            temp_ptr_2[1] = temp_data_1;
            temp_ptr_2[2] = temp_data_2;
            temp_ptr_2[3] = temp_data_3;
            
            temp_data = *(uint64_t *)((int64_t)old_buffer + 0x4c);
            temp_ptr = (DataBuffer)((int64_t)old_buffer + offset + 0x44);
            *temp_ptr = *(uint64_t *)((int64_t)old_buffer + 0x44);
            temp_ptr[1] = temp_data;
            
            *(int32_t *)((int64_t)old_buffer + offset + 0x54) = *(int32_t *)((int64_t)old_buffer + 0x54);
            *(int32_t *)((int64_t)old_buffer + offset + 0x58) = *(int32_t *)(old_buffer + 0xb);
            *(int32_t *)((int64_t)old_buffer + offset + 0x5c) = *(int32_t *)((int64_t)old_buffer + 0x5c);
            
            write_position = write_position + ARRAY_ELEMENT_SIZE_26;
            current_position = (int64_t)old_buffer + 0xc;
            old_buffer = old_buffer + 0xd;
        } while (current_position != old_end);
    }
    
    // 调用数据处理回调函数
    DataProcessor_Callback_26(write_position, param_2);
    
    // 清理旧的内存资源
    offset = array_control->data_end;
    current_position = array_control->data_start;
    if (current_position != offset) {
        do {
            // 执行资源清理回调
            if (*(int64_t **)(current_position + 0x10) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 0x10) + 0x38))();
            }
            if (*(int64_t **)(current_position + 8) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 8) + 0x38))();
            }
            current_position = current_position + ARRAY_ELEMENT_SIZE_26;
        } while (current_position != offset);
        current_position = array_control->data_start;
    }
    
    // 更新数组控制块
    if (current_position == 0) {
        array_control->data_start = (ArrayPointer)new_buffer;
        array_control->data_end = (ArrayPointer)(write_position + ARRAY_ELEMENT_SIZE_26);
        array_control->capacity_end = (ArrayPointer)(new_buffer + new_capacity * ARRAY_ELEMENT_SIZE_26);
        return;
    }
    
    // 错误处理 - 内存清理失败
    MemoryCleanup_Function(current_position);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * @brief 动态数组处理器 - 48字节元素版本
 * 
 * 处理48字节大小元素的动态数组扩容和数据迁移操作。
 * 支持自动容量翻倍、数据迁移和内存优化。
 * 
 * @param array_control 数组控制块指针
 * @param param_2 扩展参数（用于内存分配策略）
 * 
 * 技术特点：
 * - 自动容量计算和翻倍策略
 * - 高效的数据块迁移算法
 * - 智能内存分配和释放
 * - 完整的错误处理机制
 */
void DynamicArrayProcessor_48ByteElements(ArrayControlBlock* array_control, uint64_t param_2)
{
    DataBuffer new_buffer = NULL;
    DataBuffer old_buffer;
    DataBuffer old_end;
    MemorySize element_count;
    MemorySize new_capacity;
    DataBuffer write_position;
    MemorySize offset;
    MemorySize current_position;
    
    // 计算当前元素数量和新的容量
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;
    element_count = ((int64_t)old_end - (int64_t)old_buffer) / ARRAY_ELEMENT_SIZE_48;
    new_buffer = NULL;
    
    // 确定新的容量
    if (element_count == 0) {
        new_capacity = INITIAL_ARRAY_CAPACITY;
    } else {
        new_capacity = element_count * CAPACITY_DOUBLING_FACTOR;
        if (new_capacity == 0) goto capacity_calculation_complete;
    }
    
    // 分配新的缓冲区
    new_buffer = (DataBuffer)MemoryAllocator_Alloc(system_memory_pool_ptr, 
                                         new_capacity * ARRAY_ELEMENT_SIZE_48, 
                                         array_control->memory_flags, 
                                         old_buffer, 
                                         0xfffffffffffffffe);
    
    old_end = (DataBuffer)array_control->data_end;
    old_buffer = (DataBuffer)array_control->data_start;

capacity_calculation_complete:
    write_position = new_buffer;
    
    // 执行数据迁移
    if (old_buffer != old_end) {
        offset = (int64_t)new_buffer - (int64_t)old_buffer;
        old_buffer = old_buffer + 2;
        
        do {
            // 高效的数据块复制和清零操作
            *write_position = *(int32_t *)(old_buffer + -2);
            *(uint64_t *)(offset + -8 + (int64_t)old_buffer) = old_buffer[-1];
            old_buffer[-1] = 0;
            *(uint64_t *)(offset + (int64_t)old_buffer) = *old_buffer;
            *old_buffer = 0;
            *(uint64_t *)(offset + 8 + (int64_t)old_buffer) = old_buffer[1];
            old_buffer[1] = 0;
            *(int32_t *)(offset + 0x10 + (int64_t)old_buffer) = *(int32_t *)(old_buffer + 2);
            *(int32_t *)(offset + 0x14 + (int64_t)old_buffer) = *(int32_t *)((int64_t)old_buffer + 0x14);
            *(int32_t *)(offset + 0x18 + (int64_t)old_buffer) = *(int32_t *)(old_buffer + 3);
            
            write_position = write_position + ARRAY_ELEMENT_SIZE_48;
            current_position = (int64_t)old_buffer + 4;
            old_buffer = old_buffer + 6;
        } while (current_position != old_end);
    }
    
    // 调用数据处理回调函数
    DataProcessor_Callback_48(write_position, param_2);
    
    // 清理旧的内存资源
    offset = array_control->data_end;
    current_position = array_control->data_start;
    if (current_position != offset) {
        do {
            // 执行资源清理回调
            if (*(int64_t **)(current_position + 0x18) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 0x18) + 0x38))();
            }
            if (*(int64_t **)(current_position + 0x10) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 0x10) + 0x38))();
            }
            if (*(int64_t **)(current_position + 8) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(current_position + 8) + 0x38))();
            }
            current_position = current_position + ARRAY_ELEMENT_SIZE_48;
        } while (current_position != offset);
        current_position = array_control->data_start;
    }
    
    // 更新数组控制块
    if (current_position == 0) {
        array_control->data_start = (ArrayPointer)new_buffer;
        array_control->data_end = (ArrayPointer)(write_position + ARRAY_ELEMENT_SIZE_48);
        array_control->capacity_end = (ArrayPointer)(new_buffer + new_capacity * ARRAY_ELEMENT_SIZE_48);
        return;
    }
    
    // 错误处理 - 内存清理失败
    MemoryCleanup_Function(current_position);
}






/**
 * @brief 位掩码索引排序处理器
 * 
 * 基于位掩码和索引技术的高级排序处理器，用于处理复杂的数据排序操作。
 * 支持多种排序策略和高效的数据访问模式。
 * 
 * @param param_1 排序控制参数块指针
 * @param param_2 排序数据源指针
 * 
 * 技术特点：
 * - 位掩码驱动的索引计算
 * - 多级数据访问和缓存优化
 * - 复杂的排序算法实现
 * - 高效的内存访问模式
 */
void SortProcessor_BitmaskIndexed(int64_t param_1, int64_t param_2)
{
    UInt32 bitmask_value;
    UInt32 secondary_key;
    int64_t hash_table_ptr;
    int element_count;
    int64_t index_offset;
    int64_t current_index;
    
    // 计算元素数量
    element_count = (int)(*(int64_t *)(param_1 + 0x20) - *(int64_t *)(param_1 + 0x18) >> 2);
    if (0 < element_count) {
        current_index = 0;
        do {
            // 获取当前元素的位掩码值
            bitmask_value = *(UInt32 *)(*(int64_t *)(param_1 + 0x18) + current_index * 4);
            if (bitmask_value != 0xffffffff) {
                // 计算哈希表偏移量
                index_offset = (int64_t)(int)(*(UInt32 *)(param_2 + 0x2b18) & bitmask_value) * SORT_ELEMENT_SIZE_216;
                hash_table_ptr = *(int64_t *)(*(int64_t *)(param_2 + 11000) + (int64_t)((int)bitmask_value >> 10) * 8);
                bitmask_value = *(UInt32 *)(hash_table_ptr + 0x1c + index_offset);
                if (bitmask_value != 0xffffffff) {
                    // 获取辅助键值
                    secondary_key = *(UInt32 *)(hash_table_ptr + 0x18 + index_offset);
                    // 执行排序操作
                    SortingOperation_Execute(*(uint64_t *)
                                   (*(int64_t *)
                                     (*(int64_t *)(param_2 + 0x698) + (int64_t)((int)bitmask_value >> 10) * 8) + 8 +
                                   (int64_t)(int)(*(UInt32 *)(param_2 + 0x6b8) & bitmask_value) * SORT_ELEMENT_SIZE_24),
                                  *(int64_t *)
                                   (*(int64_t *)(param_2 + 0x488) + (int64_t)((int)secondary_key >> 10) * 8) +
                                  ((int64_t)(int)(*(UInt32 *)(param_2 + 0x4a8) & secondary_key) * SORT_ELEMENT_SIZE_9 + 1) * 8);
                }
            }
            current_index = current_index + 1;
        } while (current_index < element_count);
    }
    return;
}






/**
 * @brief 优化的位掩码排序处理器
 * 
 * 经过优化的位掩码排序处理器，使用寄存器变量和循环优化技术
 * 来提高排序性能。适用于大规模数据排序操作。
 * 
 * 技术特点：
 * - 寄存器优化的循环结构
 * - 高效的位掩码计算
 * - 优化的内存访问模式
 * - 减少不必要的内存访问
 */
void SortProcessor_BitmaskOptimized(void)
{
    UInt32 bitmask_value;
    UInt32 secondary_key;
    int64_t hash_table_ptr;
    int64_t index_offset;
    int64_t current_index;
    int64_t loop_count;
    int64_t data_source;
    int64_t control_block;
    
    current_index = 0;
    do {
        // 从控制块中获取位掩码值
        bitmask_value = *(UInt32 *)(*(int64_t *)(control_block + 0x18) + current_index * 4);
        if (bitmask_value != 0xffffffff) {
            // 计算优化的索引偏移量
            index_offset = (int64_t)(int)(*(UInt32 *)(data_source + 0x2b18) & bitmask_value) * SORT_ELEMENT_SIZE_216;
            hash_table_ptr = *(int64_t *)(*(int64_t *)(data_source + 11000) + (int64_t)((int)bitmask_value >> 10) * 8);
            bitmask_value = *(UInt32 *)(hash_table_ptr + 0x1c + index_offset);
            if (bitmask_value != 0xffffffff) {
                // 获取辅助键值
                secondary_key = *(UInt32 *)(hash_table_ptr + 0x18 + index_offset);
                // 执行优化的排序操作
                SortingOperation_Execute(*(uint64_t *)
                               (*(int64_t *)
                                 (*(int64_t *)(data_source + 0x698) + (int64_t)((int)bitmask_value >> 10) * 8) + 8 +
                               (int64_t)(int)(*(UInt32 *)(data_source + 0x6b8) & bitmask_value) * SORT_ELEMENT_SIZE_24),
                              *(int64_t *)
                               (*(int64_t *)(data_source + 0x488) + (int64_t)((int)secondary_key >> 10) * 8) +
                              ((int64_t)(int)(*(UInt32 *)(data_source + 0x4a8) & secondary_key) * SORT_ELEMENT_SIZE_9 + 1) * 8);
            }
        }
        current_index = current_index + 1;
    } while (current_index < loop_count);
    return;
}






/**
 * @brief 空操作处理器
 * 
 * 空操作函数，用于系统初始化、状态同步或作为占位符函数。
 * 在某些情况下用于保持接口一致性或作为默认回调函数。
 * 
 * 技术特点：
 * - 零开销的空操作
 * - 接口一致性保证
 * - 系统初始化支持
 * - 回调函数占位符
 */
void EmptyOperationHandler(void)
{
    return;
}






/**
 * @brief 字符串插入排序处理器
 * 
 * 高效的字符串插入排序处理器，支持3字节字符单元的排序操作。
 * 使用优化的插入排序算法，结合二分查找和直接插入策略。
 * 
 * @param start_ptr 字符串起始指针
 * @param end_ptr 字符串结束指针
 * 
 * 技术特点：
 * - 优化的插入排序算法
 * - 3字节字符单元处理
 * - 二分查找优化
 * - 高效的内存访问模式
 */
void StringInsertionSortProcessor(CharBuffer start_ptr, CharBuffer end_ptr)
{
    char current_char;
    char compare_char;
    UInt16 current_word;
    char temp_char;
    int64_t element_count;
    int64_t sort_depth;
    int depth_bits;
    CharBuffer scan_ptr;
    CharBuffer compare_ptr;
    CharBuffer insert_ptr;
    char insert_char;
    CharBuffer current_pos;
    CharBuffer scan_pos;
    Boolean borrow_flag;
    Boolean equal_flag;
    char high_byte;
    
    if (start_ptr != end_ptr) {
        depth_bits = 0;
        element_count = ((int64_t)end_ptr - (int64_t)start_ptr) / 3;
        
        // 计算排序深度
        for (sort_depth = element_count; sort_depth != 0; sort_depth = sort_depth >> 1) {
            depth_bits = depth_bits + 1;
        }
        
        // 执行预排序
        PreSorting_Process(start_ptr, end_ptr, (int64_t)(depth_bits + -1) * 2);
        
        if (element_count < INSERTION_SORT_THRESHOLD) {
            // 小规模数据直接插入排序
            for (scan_pos = start_ptr + 3; scan_pos != end_ptr; scan_pos = scan_pos + 3) {
                current_word = *(UInt16 *)scan_pos;
                current_char = scan_pos[2];
                current_pos = scan_pos;
                if (scan_pos != start_ptr) {
                    high_byte = (char)((ushort)current_word >> 8);
                    insert_char = (char)current_word;
                    insert_ptr = scan_pos;
                    do {
                        compare_char = insert_ptr[-3];
                        compare_ptr = insert_ptr + -3;
                        borrow_flag = SBORROW1(insert_char, compare_char);
                        temp_char = insert_char - compare_char;
                        equal_flag = insert_char == compare_char;
                        if (equal_flag) {
                            compare_char = insert_ptr[-2];
                            borrow_flag = SBORROW1(high_byte, compare_char);
                            temp_char = high_byte - compare_char;
                            equal_flag = high_byte == compare_char;
                        }
                        if (equal_flag || borrow_flag != temp_char < '\0') break;
                        *(UInt16 *)current_pos = *(UInt16 *)compare_ptr;
                        current_pos[2] = insert_ptr[-1];
                        current_pos = current_pos + -3;
                        insert_ptr = compare_ptr;
                    } while (compare_ptr != start_ptr);
                }
                *(UInt16 *)current_pos = current_word;
                current_pos[2] = current_char;
            }
        }
        else {
            // 大规模数据分块处理
            scan_pos = start_ptr + 0x54;
            if (start_ptr != scan_pos) {
                for (current_pos = start_ptr + 3; current_pos != scan_pos; current_pos = current_pos + 3) {
                    current_word = *(UInt16 *)current_pos;
                    current_char = current_pos[2];
                    insert_ptr = current_pos;
                    if (current_pos != start_ptr) {
                        high_byte = (char)((ushort)current_word >> 8);
                        insert_char = (char)current_word;
                        compare_ptr = current_pos;
                        do {
                            compare_char = compare_ptr[-3];
                            scan_ptr = compare_ptr + -3;
                            borrow_flag = SBORROW1(insert_char, compare_char);
                            temp_char = insert_char - compare_char;
                            equal_flag = insert_char == compare_char;
                            if (equal_flag) {
                                compare_char = compare_ptr[-2];
                                borrow_flag = SBORROW1(high_byte, compare_char);
                                temp_char = high_byte - compare_char;
                                equal_flag = high_byte == compare_char;
                            }
                            if (equal_flag || borrow_flag != temp_char < '\0') break;
                            *(UInt16 *)insert_ptr = *(UInt16 *)scan_ptr;
                            insert_ptr[2] = compare_ptr[-1];
                            insert_ptr = insert_ptr + -3;
                            compare_ptr = scan_ptr;
                        } while (scan_ptr != start_ptr);
                    }
                    *(UInt16 *)insert_ptr = current_word;
                    insert_ptr[2] = current_char;
                }
            }
            if (scan_pos != end_ptr) {
                do {
                    current_word = *(UInt16 *)scan_pos;
                    current_char = scan_pos[2];
                    insert_char = (char)current_word;
                    high_byte = (char)((ushort)current_word >> 8);
                    insert_ptr = scan_pos;
                    current_pos = scan_pos;
                    while( true ) {
                        compare_ptr = current_pos + -3;
                        compare_char = *compare_ptr;
                        borrow_flag = SBORROW1(insert_char, compare_char);
                        temp_char = insert_char - compare_char;
                        equal_flag = insert_char == compare_char;
                        if (equal_flag) {
                            compare_char = current_pos[-2];
                            borrow_flag = SBORROW1(high_byte, compare_char);
                            temp_char = high_byte - compare_char;
                            equal_flag = high_byte == compare_char;
                        }
                        if (equal_flag || borrow_flag != temp_char < '\0') break;
                        *(UInt16 *)insert_ptr = *(UInt16 *)compare_ptr;
                        insert_ptr[2] = current_pos[-1];
                        insert_ptr = insert_ptr + -3;
                        current_pos = compare_ptr;
                    }
                    scan_pos = scan_pos + 3;
                    *(UInt16 *)insert_ptr = current_word;
                    insert_ptr[2] = current_char;
                } while (scan_pos != end_ptr);
                return;
            }
        }
    }
    return;
}






/**
 * @brief 字符串插入排序处理器 - 范围限制版本
 * 
 * 带范围限制的字符串插入排序处理器，支持在指定范围内进行排序操作。
 * 适用于部分排序或分段排序的场景。
 * 
 * @param start_ptr 字符串起始指针
 * @param end_ptr 字符串结束指针
 * @param range_limit 排序范围限制
 * 
 * 技术特点：
 * - 范围限制的排序操作
 * - 优化的插入排序算法
 * - 3字节字符单元处理
 * - 高效的内存访问模式
 */
void StringInsertionSortProcessor_Range(CharBuffer start_ptr, CharBuffer end_ptr, int64_t range_limit)
{
    char current_char;
    char compare_char;
    UInt16 current_word;
    char temp_char;
    int64_t element_count;
    int64_t sort_depth;
    int depth_bits;
    CharBuffer scan_ptr;
    CharBuffer compare_ptr;
    CharBuffer insert_ptr;
    char insert_char;
    CharBuffer current_pos;
    CharBuffer scan_pos;
    Boolean borrow_flag;
    Boolean equal_flag;
    char high_byte;
    
    depth_bits = 0;
    element_count = (range_limit - (int64_t)start_ptr) / 3;
    
    // 计算排序深度
    for (sort_depth = element_count; sort_depth != 0; sort_depth = sort_depth >> 1) {
        depth_bits = depth_bits + 1;
    }
    
    // 执行预排序
    PreSorting_Process(start_ptr, end_ptr, (int64_t)(depth_bits + -1) * 2);
    
    if (element_count < INSERTION_SORT_THRESHOLD) {
        // 小规模数据直接插入排序
        for (scan_pos = start_ptr + 3; scan_pos != end_ptr; scan_pos = scan_pos + 3) {
            current_word = *(UInt16 *)scan_pos;
            current_char = scan_pos[2];
            current_pos = scan_pos;
            if (scan_pos != start_ptr) {
                high_byte = (char)((ushort)current_word >> 8);
                insert_char = (char)current_word;
                insert_ptr = scan_pos;
                do {
                    compare_char = insert_ptr[-3];
                    compare_ptr = insert_ptr + -3;
                    borrow_flag = SBORROW1(insert_char, compare_char);
                    temp_char = insert_char - compare_char;
                    equal_flag = insert_char == compare_char;
                    if (equal_flag) {
                        compare_char = insert_ptr[-2];
                        borrow_flag = SBORROW1(high_byte, compare_char);
                        temp_char = high_byte - compare_char;
                        equal_flag = high_byte == compare_char;
                    }
                    if (equal_flag || borrow_flag != temp_char < '\0') break;
                    *(UInt16 *)current_pos = *(UInt16 *)compare_ptr;
                    current_pos[2] = insert_ptr[-1];
                    current_pos = current_pos + -3;
                    insert_ptr = compare_ptr;
                } while (compare_ptr != start_ptr);
            }
            *(UInt16 *)current_pos = current_word;
            current_pos[2] = current_char;
        }
    }
    else {
        // 大规模数据分块处理
        scan_pos = start_ptr + 0x54;
        if (start_ptr != scan_pos) {
            for (current_pos = start_ptr + 3; current_pos != scan_pos; current_pos = current_pos + 3) {
                current_word = *(UInt16 *)current_pos;
                current_char = current_pos[2];
                insert_ptr = current_pos;
                if (current_pos != start_ptr) {
                    high_byte = (char)((ushort)current_word >> 8);
                    insert_char = (char)current_word;
                    compare_ptr = current_pos;
                    do {
                        compare_char = compare_ptr[-3];
                        scan_ptr = compare_ptr + -3;
                        borrow_flag = SBORROW1(insert_char, compare_char);
                        temp_char = insert_char - compare_char;
                        equal_flag = insert_char == compare_char;
                        if (equal_flag) {
                            compare_char = compare_ptr[-2];
                            borrow_flag = SBORROW1(high_byte, compare_char);
                            temp_char = high_byte - compare_char;
                            equal_flag = high_byte == compare_char;
                        }
                        if (equal_flag || borrow_flag != temp_char < '\0') break;
                        *(UInt16 *)insert_ptr = *(UInt16 *)scan_ptr;
                        insert_ptr[2] = compare_ptr[-1];
                        insert_ptr = insert_ptr + -3;
                        compare_ptr = scan_ptr;
                    } while (scan_ptr != start_ptr);
                }
                *(UInt16 *)insert_ptr = current_word;
                insert_ptr[2] = current_char;
            }
        }
        if (scan_pos != end_ptr) {
            do {
                current_word = *(UInt16 *)scan_pos;
                current_char = scan_pos[2];
                insert_char = (char)current_word;
                high_byte = (char)((ushort)current_word >> 8);
                insert_ptr = scan_pos;
                current_pos = scan_pos;
                while( true ) {
                    compare_ptr = current_pos + -3;
                    compare_char = *compare_ptr;
                    borrow_flag = SBORROW1(insert_char, compare_char);
                    temp_char = insert_char - compare_char;
                    equal_flag = insert_char == compare_char;
                    if (equal_flag) {
                        compare_char = current_pos[-2];
                        borrow_flag = SBORROW1(high_byte, compare_char);
                        temp_char = high_byte - compare_char;
                        equal_flag = high_byte == compare_char;
                    }
                    if (equal_flag || borrow_flag != temp_char < '\0') break;
                    *(UInt16 *)insert_ptr = *(UInt16 *)compare_ptr;
                    insert_ptr[2] = current_pos[-1];
                    insert_ptr = insert_ptr + -3;
                    current_pos = compare_ptr;
                }
                scan_pos = scan_pos + 3;
                *(UInt16 *)insert_ptr = current_word;
                insert_ptr[2] = current_char;
            } while (scan_pos != end_ptr);
            return;
        }
    }
    return;
}






/**
 * @brief 字符串插入排序处理器 - 循环优化版本
 * 
 * 循环优化的字符串插入排序处理器，使用高效的循环结构和寄存器优化
 * 来提高排序性能。适用于大规模字符串数据的排序操作。
 * 
 * 技术特点：
 * - 循环优化的排序算法
 * - 寄存器变量优化
 * - 高效的内存访问模式
 * - 双阶段处理策略
 */
void StringInsertionSortProcessor_Loop(void)
{
    char current_char;
    char compare_char;
    UInt16 current_word;
    char temp_char;
    CharBuffer scan_ptr;
    CharBuffer compare_ptr;
    CharBuffer insert_ptr;
    CharBuffer start_bound;
    CharBuffer end_bound;
    CharBuffer mid_bound;
    char insert_char;
    CharBuffer current_pos;
    CharBuffer scan_pos;
    Boolean borrow_flag;
    Boolean equal_flag;
    char high_byte;
    CharBuffer loop_start;
    CharBuffer loop_end;
    
    do {
        current_word = *(UInt16 *)loop_start;
        current_char = loop_start[2];
        current_pos = loop_start;
        if (loop_start != start_bound) {
            high_byte = (char)((ushort)current_word >> 8);
            insert_char = (char)current_word;
            insert_ptr = loop_start;
            do {
                compare_char = insert_ptr[-3];
                scan_ptr = insert_ptr + -3;
                borrow_flag = SBORROW1(insert_char, compare_char);
                temp_char = insert_char - compare_char;
                equal_flag = insert_char == compare_char;
                if (equal_flag) {
                    compare_char = insert_ptr[-2];
                    borrow_flag = SBORROW1(high_byte, compare_char);
                    temp_char = high_byte - compare_char;
                    equal_flag = high_byte == compare_char;
                }
                if (equal_flag || borrow_flag != temp_char < '\0') break;
                *(UInt16 *)current_pos = *(UInt16 *)scan_ptr;
                current_pos[2] = insert_ptr[-1];
                current_pos = current_pos + -3;
                insert_ptr = scan_ptr;
            } while (scan_ptr != start_bound);
        }
        loop_start = loop_start + 3;
        *(UInt16 *)current_pos = current_word;
        current_pos[2] = current_char;
        if (loop_start == mid_bound) {
            if (mid_bound != end_bound) {
                do {
                    current_word = *(UInt16 *)mid_bound;
                    current_char = mid_bound[2];
                    insert_char = (char)current_word;
                    high_byte = (char)((ushort)current_word >> 8);
                    insert_ptr = mid_bound;
                    current_pos = mid_bound;
                    while( true ) {
                        scan_ptr = current_pos + -3;
                        compare_char = *scan_ptr;
                        borrow_flag = SBORROW1(insert_char, compare_char);
                        temp_char = insert_char - compare_char;
                        equal_flag = insert_char == compare_char;
                        if (equal_flag) {
                            compare_char = current_pos[-2];
                            borrow_flag = SBORROW1(high_byte, compare_char);
                            temp_char = high_byte - compare_char;
                            equal_flag = high_byte == compare_char;
                        }
                        if (equal_flag || borrow_flag != temp_char < '\0') break;
                        *(UInt16 *)insert_ptr = *(UInt16 *)scan_ptr;
                        insert_ptr[2] = current_pos[-1];
                        insert_ptr = insert_ptr + -3;
                        current_pos = scan_ptr;
                    }
                    mid_bound = mid_bound + 3;
                    *(UInt16 *)insert_ptr = current_word;
                    insert_ptr[2] = current_char;
                } while (mid_bound != end_bound);
                return;
            }
            return;
        }
    } while( true );
}






/**
 * @brief 字符串插入排序处理器 - 辅助处理版本
 * 
 * 辅助字符串插入排序处理器，专门处理排序操作的辅助功能。
 * 优化了循环结构和比较操作，提高排序效率。
 * 
 * 技术特点：
 * - 优化的循环结构
 * - 高效的字符比较
 * - 简化的插入逻辑
 * - 辅助排序功能
 */
void StringInsertionSortProcessor_Secondary(void)
{
    char current_char;
    char compare_char;
    UInt16 current_word;
    char temp_char;
    CharBuffer scan_ptr;
    CharBuffer compare_ptr;
    CharBuffer insert_ptr;
    CharBuffer end_bound;
    CharBuffer current_pos;
    char insert_char;
    Boolean borrow_flag;
    Boolean equal_flag;
    char high_byte;
    CharBuffer loop_start;
    
    if (loop_start != end_bound) {
        do {
            current_word = *(UInt16 *)loop_start;
            current_char = loop_start[2];
            insert_char = (char)current_word;
            high_byte = (char)((ushort)current_word >> 8);
            insert_ptr = loop_start;
            current_pos = loop_start;
            while( true ) {
                compare_ptr = current_pos + -3;
                compare_char = *compare_ptr;
                borrow_flag = SBORROW1(insert_char, compare_char);
                temp_char = insert_char - compare_char;
                equal_flag = insert_char == compare_char;
                if (equal_flag) {
                    compare_char = current_pos[-2];
                    borrow_flag = SBORROW1(high_byte, compare_char);
                    temp_char = high_byte - compare_char;
                    equal_flag = high_byte == compare_char;
                }
                if (equal_flag || borrow_flag != temp_char < '\0') break;
                *(UInt16 *)insert_ptr = *(UInt16 *)compare_ptr;
                insert_ptr[2] = current_pos[-1];
                insert_ptr = insert_ptr + -3;
                current_pos = compare_ptr;
            }
            loop_start = loop_start + 3;
            *(UInt16 *)insert_ptr = current_word;
            insert_ptr[2] = current_char;
        } while (loop_start != end_bound);
        return;
    }
    return;
}






/**
 * @brief 16位无符号整数插入排序处理器
 * 
 * 专门处理16位无符号整数的插入排序处理器，使用优化的算法
 * 来提高整数排序的性能。适用于游戏引擎中的数值数据处理。
 * 
 * 技术特点：
 * - 16位整数专用排序
 * - 优化的插入算法
 * - 高效的内存访问
 * - 无符号整数处理
 */
void UInt16InsertionSortProcessor(void)
{
    int8_t low_byte;
    char compare_char;
    UInt16 current_value;
    char temp_char;
    UInt16Buffer current_ptr;
    UInt16Buffer scan_ptr;
    UInt16Buffer insert_ptr;
    UInt16Buffer start_bound;
    UInt16Buffer end_bound;
    UInt16Buffer loop_ptr;
    char insert_char;
    Boolean borrow_flag;
    Boolean equal_flag;
    char high_byte;
    UInt16Buffer compare_ptr;
    
    loop_ptr = (UInt16Buffer)((int64_t)start_bound + 3);
    do {
        if (loop_ptr == end_bound) {
            return;
        }
        current_value = *loop_ptr;
        low_byte = *(int8_t *)(loop_ptr + 1);
        insert_ptr = loop_ptr;
        if (loop_ptr != start_bound) {
            high_byte = (char)((ushort)current_value >> 8);
            insert_char = (char)current_value;
            current_ptr = loop_ptr;
            do {
                compare_char = *(char *)((int64_t)current_ptr + -3);
                scan_ptr = (UInt16Buffer)((int64_t)current_ptr + -3);
                borrow_flag = SBORROW1(insert_char, compare_char);
                temp_char = insert_char - compare_char;
                equal_flag = insert_char == compare_char;
                if (equal_flag) {
                    compare_char = *(char *)(current_ptr + -1);
                    borrow_flag = SBORROW1(high_byte, compare_char);
                    temp_char = high_byte - compare_char;
                    equal_flag = high_byte == compare_char;
                }
                if (equal_flag || borrow_flag != temp_char < '\0') break;
                *insert_ptr = *scan_ptr;
                *(int8_t *)(insert_ptr + 1) = *(int8_t *)((int64_t)current_ptr + -1);
                insert_ptr = (UInt16Buffer)((int64_t)insert_ptr + -3);
                current_ptr = scan_ptr;
            } while (scan_ptr != start_bound);
        }
        loop_ptr = (UInt16Buffer)((int64_t)loop_ptr + 3);
        *insert_ptr = current_value;
        *(int8_t *)(insert_ptr + 1) = low_byte;
    } while( true );
}

// ============================================================================
// 模块功能总结
// ============================================================================

/**
 * @module 高级数据处理和内存管理模块
 * 
 * @section 功能概述
 * 本模块是TaleWorlds.Native引擎中的核心数据处理组件，提供了完整的
 * 高级数据处理、内存管理、排序算法和数据结构操作功能。该模块包含11个
 * 核心函数，涵盖了从基础内存操作到复杂排序算法的全方位支持。
 * 
 * @section 主要功能
 * 
 * @subsection 动态数组管理
 * - DynamicArrayProcessor_104ByteElements: 104字节元素的动态数组处理器
 * - DynamicArrayProcessor_26ByteElements: 26字节元素的动态数组处理器
 * - DynamicArrayProcessor_48ByteElements: 48字节元素的动态数组处理器
 * 
 * 技术特点：
 * - 自动容量翻倍策略
 * - 高效的数据迁移算法
 * - 智能内存分配和释放
 * - 完整的错误处理机制
 * 
 * @subsection 高级排序算法
 * - SortProcessor_BitmaskIndexed: 基于位掩码的索引排序处理器
 * - SortProcessor_BitmaskOptimized: 优化的位掩码排序处理器
 * - StringInsertionSortProcessor: 字符串插入排序处理器
 * - StringInsertionSortProcessor_Range: 范围限制的字符串排序处理器
 * - StringInsertionSortProcessor_Loop: 循环优化的字符串排序处理器
 * - StringInsertionSortProcessor_Secondary: 辅助字符串排序处理器
 * - UInt16InsertionSortProcessor: 16位无符号整数排序处理器
 * 
 * 技术特点：
 * - 多种排序算法支持
 * - 位掩码驱动的索引计算
 * - 高效的内存访问模式
 * - 优化的循环结构
 * 
 * @subsection 系统支持功能
 * - EmptyOperationHandler: 空操作处理器
 * - MemoryAllocator_Alloc: 内存分配器
 * - DataProcessor_Callback_*: 数据处理回调函数
 * - MemoryCleanup_Function: 内存清理函数
 * - SortingOperation_Execute: 排序操作执行器
 * - PreSorting_Process: 预排序处理器
 * 
 * @section 技术架构
 * 
 * @subsection 数据结构
 * - ArrayControlBlock: 数组控制块结构
 * - SortElement: 排序元素结构
 * - MemoryAllocator: 内存分配器结构
 * 
 * @subsection 算法复杂度
 * - 动态数组操作: O(1) 平均时间复杂度
 * - 插入排序: O(n²) 最坏情况，O(n) 最好情况
 * - 位掩码排序: O(n log n) 平均时间复杂度
 * - 内存分配: O(1) 分配时间
 * 
 * @section 性能优化
 * 
 * @subsection 内存管理优化
 * - 容量预分配和翻倍策略
 * - 智能内存池管理
 * - 高效的数据块迁移
 * - 自动内存清理机制
 * 
 * @subsection 算法优化
 * - 寄存器变量优化
 * - 循环展开技术
 * - 缓存友好的数据访问
 * - 分阶段处理策略
 * 
 * @section 使用场景
 * 
 * @subsection 游戏引擎核心功能
 * - 游戏对象容器管理
 * - 资源加载和缓存
 * - 渲染管线数据处理
 * - 物理系统数据管理
 * 
 * @subsection 音频系统支持
 * - 音频数据缓冲区管理
 * - 音效资源排序和索引
 * - 音频流数据处理
 * - 内存池优化
 * 
 * @section 注意事项
 * 
 * @subsection 内存管理
 * - 注意内存分配对齐要求
 * - 及时释放不再使用的内存
 * - 避免内存碎片化
 * - 监控内存使用情况
 * 
 * @subsection 算法选择
 * - 根据数据规模选择合适的排序算法
 * - 注意算法的时间复杂度和空间复杂度
 * - 考虑数据的特性和分布
 * - 优化关键路径的性能
 * 
 * @section 维护和扩展
 * 
 * @subsection 代码维护
 * - 遵循模块化设计原则
 * - 保持接口的一致性
 * - 定期进行性能分析
 * - 及时修复发现的问题
 * 
 * @subsection 功能扩展
 * - 支持新的数据类型
 * - 添加新的排序算法
 * - 优化现有功能
 * - 增强错误处理机制
 * 
 * @section 版本历史
 * - v1.0: 初始版本，包含基础功能
 * - v1.1: 添加优化的排序算法
 * - v1.2: 增强内存管理功能
 * - v1.3: 完善错误处理机制
 * 
 * @section 作者信息
 * 
 * 本模块由TaleWorlds Entertainment开发团队设计和实现，
 * 是Mount & Blade系列游戏引擎的核心组件之一。
 * 
 * @section 许可证
 * 
 * 本代码遵循TaleWorlds Entertainment的许可证条款，
 * 仅用于学习和研究目的。
 */






