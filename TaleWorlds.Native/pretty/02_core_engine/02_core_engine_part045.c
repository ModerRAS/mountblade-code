#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part045.c - 数据结构操作和内存管理模块
// 本文件包含数据结构操作、内存管理、数组操作和对象创建功能

// 全局变量声明
uint64_t _DAT_180c8ed18;  // 内存管理器
uint64_t _DAT_180c86870;  // 引擎配置数据
uint64_t unknown_var_3456_ptr;   // 全局数据指针
uint64_t unknown_var_720_ptr;   // 函数表指针
uint64_t unknown_var_3696_ptr;   // 虚函数表指针
uint64_t unknown_var_3552_ptr;   // 虚函数表指针
uint64_t unknown_var_7520;   // 比较数据指针
uint64_t unknown_var_659;   // 默认配置指针
uint64_t _DAT_180bf6658;  // 配置覆盖指针
uint64_t unknown_var_8064_ptr;   // 初始化函数指针
uint64_t unknown_var_3432_ptr;   // 字符串函数表指针

/**
 * 处理数据结构初始化和复制操作
 * 主要功能：初始化数据结构、复制数据、管理数组容量
 * 
 * 原始实现：FUN_1800856c7
 * 简化实现：数据结构初始化和复制处理
 */
void process_data_structure_initialization(void)
{
    int32_t *src_ptr1;       // 源数据指针1
    int32_t *src_ptr2;       // 源数据指针2
    int32_t *dest_ptr1;      // 目标数据指针1
    int32_t *dest_ptr2;      // 目标数据指针2
    ushort data_count;           // 数据元素数量
    uint capacity1;             // 容量1
    uint capacity2;             // 容量2
    int32_t data_val1;       // 数据值1
    int32_t data_val2;       // 数据值2
    int32_t data_val3;       // 数据值3
    int32_t data_val4;       // 数据值4
    longlong input_param;       // 输入参数
    ulonglong alloc_size;       // 分配大小
    longlong array_base;        // 数组基地址
    int element_index;          // 元素索引
    ulonglong current_offset;   // 当前偏移
    uint *array_ptr1;           // 数组指针1
    uint *array_ptr2;           // 数组指针2
    ulonglong base_ptr;         // 基础指针
    uint element_count;         // 元素计数
    ulonglong total_elements;   // 总元素数
    longlong *data_struct1;     // 数据结构1
    longlong *data_struct2;     // 数据结构2
    
    // 根据输入参数确定分配大小
    if (input_param == 0) {
        alloc_size = base_ptr & 0xffffffff;
        data_count = 0;
    }
    else {
        alloc_size = allocate_memory(_DAT_180c8ed18, input_param * 4, 0xf);
        data_count = (int16_t)data_struct2[2];
    }
    
    // 设置数据结构基础地址
    data_struct2[1] = alloc_size;
    array_base = process_array_allocation(data_count);
    *data_struct2 = array_base;
    
    // 处理数组元素复制和容量调整
    base_ptr = base_ptr & 0xffffffff;
    data_count = *(ushort *)(data_struct2 + 2);
    alloc_size = base_ptr;
    
    // 遍历数据元素进行处理
    if ((ushort)base_ptr < data_count) {
        do {
            array_ptr1 = (uint *)(*data_struct1 + alloc_size);
            array_ptr2 = (uint *)(*data_struct2 + alloc_size);
            element_count = *array_ptr1;
            capacity1 = array_ptr2[1];
            
            // 调整数组容量
            if ((int)capacity1 < (int)element_count) {
                if (element_count == 0) {
                    if ((int)capacity1 < 2) {
                        array_ptr2[1] = 8;
                    }
                    else {
                        array_ptr2[1] = ((int)capacity1 >> 1) + capacity1;
                    }
                }
                else {
                    array_ptr2[1] = element_count;
                }
                resize_array(array_ptr2);
            }
            
            *array_ptr2 = element_count;
            current_offset = base_ptr & 0xffffffff;
            
            // 复制数组数据
            if (*array_ptr1 != 0) {
                do {
                    element_index = (int)current_offset;
                    current_offset = (ulonglong)(element_index + 1U);
                    src_ptr1 = (int32_t *)(*(longlong *)(array_ptr1 + 2) + (longlong)element_index * 0x10);
                    data_val1 = src_ptr1[1];
                    data_val2 = src_ptr1[2];
                    data_val3 = src_ptr1[3];
                    dest_ptr1 = (int32_t *)(*(longlong *)(array_ptr2 + 2) + (longlong)element_index * 0x10);
                    *dest_ptr1 = *src_ptr1;
                    dest_ptr1[1] = data_val1;
                    dest_ptr1[2] = data_val2;
                    dest_ptr1[3] = data_val3;
                } while (element_index + 1U < *array_ptr1);
            }
            
            // 处理第二组数组数据
            element_count = array_ptr1[10];
            capacity1 = array_ptr2[0xb];
            if ((int)capacity1 < (int)element_count) {
                if (element_count == 0) {
                    if ((int)capacity1 < 2) {
                        array_ptr2[0xb] = 8;
                    }
                    else {
                        array_ptr2[0xb] = ((int)capacity1 >> 1) + capacity1;
                    }
                }
                else {
                    array_ptr2[0xb] = element_count;
                }
                resize_array(array_ptr2 + 10);
            }
            
            array_ptr2[10] = element_count;
            base_ptr = 0;
            current_offset = base_ptr;
            
            // 复制第二组数据
            if (array_ptr1[10] != 0) {
                do {
                    element_index = (int)current_offset;
                    current_offset = (ulonglong)(element_index + 1U);
                    src_ptr1 = (int32_t *)(*(longlong *)(array_ptr1 + 0xc) + (longlong)element_index * 0x10);
                    data_val1 = src_ptr1[1];
                    data_val2 = src_ptr1[2];
                    data_val3 = src_ptr1[3];
                    dest_ptr1 = (int32_t *)(*(longlong *)(array_ptr2 + 0xc) + (longlong)element_index * 0x10);
                    *dest_ptr1 = *src_ptr1;
                    dest_ptr1[1] = data_val1;
                    dest_ptr1[2] = data_val2;
                    dest_ptr1[3] = data_val3;
                } while (element_index + 1U < array_ptr1[10]);
            }
            
            data_count = *(ushort *)(data_struct2 + 2);
            element_count = (int)alloc_size + 1;
            alloc_size = (ulonglong)element_count;
            base_ptr = base_ptr + 0x50;
        } while ((int)element_count < (int)(uint)data_count);
    }
    
    // 最终数据复制
    memcpy(data_struct2[1], data_struct1[1], (ulonglong)data_count << 2);
}

/**
 * 批量处理数据结构操作
 * 主要功能：批量处理多个数据结构的初始化和复制
 * 
 * 原始实现：FUN_180085714
 * 简化实现：批量数据结构处理
 */
void process_batch_data_structures(void)
{
    int32_t *src_ptr1;       // 源数据指针1
    int32_t *src_ptr2;       // 源数据指针2
    int32_t *dest_ptr1;      // 目标数据指针1
    int32_t *dest_ptr2;      // 目标数据指针2
    uint element_count;         // 元素计数
    uint capacity;              // 容量
    int32_t data_val1;       // 数据值1
    int32_t data_val2;       // 数据值2
    int32_t data_val3;       // 数据值3
    int array_index;            // 数组索引
    ulonglong current_offset;   // 当前偏移
    uint *array_ptr1;           // 数组指针1
    uint *array_ptr2;           // 数组指针2
    ulonglong base_ptr;         // 基础指针
    int batch_counter;          // 批处理计数器
    longlong *data_struct1;     // 数据结构1
    longlong *data_struct2;     // 数据结构2
    ulonglong iteration_count;  // 迭代次数
    
    iteration_count = base_ptr;
    do {
        array_ptr1 = (uint *)(*data_struct1 + iteration_count);
        array_ptr2 = (uint *)(*data_struct2 + iteration_count);
        element_count = *array_ptr1;
        capacity = array_ptr2[1];
        
        // 调整数组容量
        if ((int)capacity < (int)element_count) {
            if (element_count == 0) {
                if ((int)capacity < 2) {
                    array_ptr2[1] = 8;
                }
                else {
                    array_ptr2[1] = ((int)capacity >> 1) + capacity;
                }
            }
            else {
                array_ptr2[1] = element_count;
            }
            resize_array(array_ptr2);
        }
        
        *array_ptr2 = element_count;
        current_offset = base_ptr & 0xffffffff;
        
        // 复制数组数据
        if (*array_ptr1 != 0) {
            do {
                array_index = (int)current_offset;
                current_offset = (ulonglong)(array_index + 1U);
                src_ptr1 = (int32_t *)(*(longlong *)(array_ptr1 + 2) + (longlong)array_index * 0x10);
                data_val1 = src_ptr1[1];
                data_val2 = src_ptr1[2];
                data_val3 = src_ptr1[3];
                dest_ptr1 = (int32_t *)(*(longlong *)(array_ptr2 + 2) + (longlong)array_index * 0x10);
                *dest_ptr1 = *src_ptr1;
                dest_ptr1[1] = data_val1;
                dest_ptr1[2] = data_val2;
                dest_ptr1[3] = data_val3;
            } while (array_index + 1U < *array_ptr1);
        }
        
        // 处理第二组数组数据
        element_count = array_ptr1[10];
        capacity = array_ptr2[0xb];
        if ((int)capacity < (int)element_count) {
            if (element_count == 0) {
                if ((int)capacity < 2) {
                    array_ptr2[0xb] = 8;
                }
                else {
                    array_ptr2[0xb] = ((int)capacity >> 1) + capacity;
                }
            }
            else {
                array_ptr2[0xb] = element_count;
            }
            resize_array(array_ptr2 + 10);
        }
        
        array_ptr2[10] = element_count;
        base_ptr = 0;
        current_offset = base_ptr;
        
        // 复制第二组数据
        if (array_ptr1[10] != 0) {
            do {
                array_index = (int)current_offset;
                current_offset = (ulonglong)(array_index + 1U);
                src_ptr1 = (int32_t *)(*(longlong *)(array_ptr1 + 0xc) + (longlong)array_index * 0x10);
                data_val1 = src_ptr1[1];
                data_val2 = src_ptr1[2];
                data_val3 = src_ptr1[3];
                dest_ptr1 = (int32_t *)(*(longlong *)(array_ptr2 + 0xc) + (longlong)array_index * 0x10);
                *dest_ptr1 = *src_ptr1;
                dest_ptr1[1] = data_val1;
                dest_ptr1[2] = data_val2;
                dest_ptr1[3] = data_val3;
            } while (array_index + 1U < array_ptr1[10]);
        }
        
        batch_counter = batch_counter + 1;
        iteration_count = iteration_count + 0x50;
    } while (batch_counter < (int)(uint)*(ushort *)(data_struct2 + 2));
    
    // 最终数据复制
    memcpy(data_struct2[1], data_struct1[1], (ulonglong)*(ushort *)(data_struct2 + 2) << 2);
}

/**
 * 快速内存复制操作
 * 主要功能：执行快速的内存块复制
 * 
 * 原始实现：FUN_180085826
 * 简化实现：快速内存复制
 */
void perform_fast_memory_copy(void)
{
    ushort copy_size;           // 复制大小
    longlong *src_struct;      // 源数据结构
    longlong *dest_struct;     // 目标数据结构
    
    // 执行内存复制
    memcpy(*(uint64_t *)(dest_struct + 8), *(uint64_t *)(src_struct + 8), (ulonglong)copy_size << 2);
}

/**
 * 空函数占位符
 * 主要功能：空的函数实现，用作占位符
 * 
 * 原始实现：FUN_180085840
 * 简化实现：空函数
 */
void empty_function_placeholder(void)
{
    return;
}

/**
 * 递归处理上下文对象
 * 主要功能：递归处理上下文相关的对象操作
 * 
 * 原始实现：FUN_180085900
 * 简化实现：上下文对象递归处理
 */
longlong process_context_recursively(longlong context_ptr)
{
    if ((((*(byte *)(context_ptr + 0xfd) & 0x40) == 0) || (*(longlong *)(context_ptr + 0x210) == 0)) &&
        (*(longlong *)(context_ptr + 0x1b0) != 0)) {
        context_ptr = process_context_recursively(*(longlong *)(context_ptr + 0x1b0));
    }
    return context_ptr;
}

/**
 * 执行资源释放操作
 * 主要功能：释放指定的资源
 * 
 * 原始实现：FUN_180085970
 * 简化实现：资源释放操作
 */
void release_resource(uint64_t resource_id, int32_t release_flags)
{
    execute_resource_release(release_flags);
}

/**
 * 执行资源销毁操作
 * 主要功能：销毁指定的资源
 * 
 * 原始实现：FUN_180085ac0
 * 简化实现：资源销毁操作
 */
void destroy_resource(uint64_t resource_id, int32_t destroy_flags)
{
    execute_resource_release(destroy_flags);
}

/**
 * 执行资源清理操作
 * 主要功能：清理指定的资源
 * 
 * 原始实现：FUN_180085c10
 * 简化实现：资源清理操作
 */
void cleanup_resource(uint64_t resource_id, int32_t cleanup_flags)
{
    execute_resource_release(cleanup_flags);
}

/**
 * 调整数组容量（20字节元素）
 * 主要功能：调整数组容量，每个元素20字节
 * 
 * 原始实现：FUN_180085e30
 * 简化实现：数组容量调整
 */
void resize_array_20byte_elements(int *array_info)
{
    uint64_t new_buffer;      // 新缓冲区
    
    if (array_info[1] < 1) {
        if (*(longlong *)(array_info + 2) != 0) {
            release_memory_buffer();
        }
        array_info[2] = 0;
        array_info[3] = 0;
        return;
    }
    
    new_buffer = allocate_memory(_DAT_180c8ed18, (longlong)array_info[1] * 0x14, (char)array_info[8]);
    if (*(longlong *)(array_info + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(array_info + 2), (longlong)*array_info * 0x14);
    }
    *(uint64_t *)(array_info + 2) = new_buffer;
    return;
}

/**
 * 调整数组容量（20字节元素）- 全局版本
 * 主要功能：调整全局数组容量，每个元素20字节
 * 
 * 原始实现：FUN_180085e55
 * 简化实现：全局数组容量调整
 */
void resize_global_array_20byte(void)
{
    uint64_t new_buffer;      // 新缓冲区
    int *global_array;          // 全局数组指针
    
    new_buffer = allocate_memory();
    if (*(longlong *)(global_array + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(global_array + 2), (longlong)*global_array * 0x14);
    }
    *(uint64_t *)(global_array + 2) = new_buffer;
    return;
}

/**
 * 重置数据结构指针
 * 主要功能：重置数据结构中的指针
 * 
 * 原始实现：FUN_180085e9b
 * 简化实现：数据结构指针重置
 */
void reset_data_structure_pointers(longlong struct_ptr)
{
    longlong *global_ptr;       // 全局指针
    
    if (*(longlong *)(struct_ptr + 8) != 0) {
        release_memory_buffer();
    }
    *(uint64_t *)(global_ptr + 8) = 0;
    return;
}

/**
 * 复制数组数据（20字节元素）
 * 主要功能：复制数组数据，每个元素20字节
 * 
 * 原始实现：FUN_180085ec0
 * 简化实现：数组数据复制
 */
void copy_array_data_20byte(int *dest_array, int *src_array)
{
    int element_count;          // 元素数量
    uint64_t data_buffer;    // 数据缓冲区
    
    element_count = *src_array;
    *dest_array = element_count;
    *(char *)(dest_array + 8) = (char)src_array[8];
    
    if (dest_array[1] < src_array[1]) {
        dest_array[1] = src_array[1];
        resize_array_20byte_elements(dest_array);
        element_count = *dest_array;
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    else {
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    
    memcpy(*(uint64_t *)(dest_array + 2), data_buffer, (longlong)element_count * 0x14);
    return;
}

/**
 * 调整数组容量（12字节元素）
 * 主要功能：调整数组容量，每个元素12字节
 * 
 * 原始实现：FUN_180085f20
 * 简化实现：数组容量调整
 */
void resize_array_12byte_elements(int *array_info)
{
    uint64_t new_buffer;      // 新缓冲区
    
    if (array_info[1] < 1) {
        if (*(longlong *)(array_info + 2) != 0) {
            release_memory_buffer();
        }
        array_info[2] = 0;
        array_info[3] = 0;
        return;
    }
    
    new_buffer = allocate_memory(_DAT_180c8ed18, (longlong)array_info[1] * 0xc, (char)array_info[8]);
    if (*(longlong *)(array_info + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(array_info + 2), (longlong)*array_info * 0xc);
    }
    *(uint64_t *)(array_info + 2) = new_buffer;
    return;
}

/**
 * 调整数组容量（12字节元素）- 全局版本
 * 主要功能：调整全局数组容量，每个元素12字节
 * 
 * 原始实现：FUN_180085f45
 * 简化实现：全局数组容量调整
 */
void resize_global_array_12byte(void)
{
    uint64_t new_buffer;      // 新缓冲区
    int *global_array;          // 全局数组指针
    
    new_buffer = allocate_memory();
    if (*(longlong *)(global_array + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(global_array + 2), (longlong)*global_array * 0xc);
    }
    *(uint64_t *)(global_array + 2) = new_buffer;
    return;
}

/**
 * 重置数据结构指针（12字节版本）
 * 主要功能：重置数据结构中的指针
 * 
 * 原始实现：FUN_180085f8b
 * 简化实现：数据结构指针重置
 */
void reset_data_structure_pointers_12byte(longlong struct_ptr)
{
    longlong *global_ptr;       // 全局指针
    
    if (*(longlong *)(struct_ptr + 8) != 0) {
        release_memory_buffer();
    }
    *(uint64_t *)(global_ptr + 8) = 0;
    return;
}

/**
 * 复制数组数据（12字节元素）
 * 主要功能：复制数组数据，每个元素12字节
 * 
 * 原始实现：FUN_180085fb0
 * 简化实现：数组数据复制
 */
void copy_array_data_12byte(int *dest_array, int *src_array)
{
    int element_count;          // 元素数量
    uint64_t data_buffer;    // 数据缓冲区
    
    element_count = *src_array;
    *dest_array = element_count;
    *(char *)(dest_array + 8) = (char)src_array[8];
    
    if (dest_array[1] < src_array[1]) {
        dest_array[1] = src_array[1];
        resize_array_12byte_elements(dest_array);
        element_count = *dest_array;
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    else {
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    
    memcpy(*(uint64_t *)(dest_array + 2), data_buffer, (longlong)element_count * 0xc);
    return;
}

/**
 * 调整数组容量（92字节元素）
 * 主要功能：调整数组容量，每个元素92字节
 * 
 * 原始实现：FUN_180086010
 * 简化实现：数组容量调整
 */
void resize_array_92byte_elements(int *array_info)
{
    uint64_t new_buffer;      // 新缓冲区
    
    if (array_info[1] < 1) {
        if (*(longlong *)(array_info + 2) != 0) {
            release_memory_buffer();
        }
        array_info[2] = 0;
        array_info[3] = 0;
        return;
    }
    
    new_buffer = allocate_memory(_DAT_180c8ed18, (longlong)array_info[1] * 0x5c, (char)array_info[8]);
    if (*(longlong *)(array_info + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(array_info + 2), (longlong)*array_info * 0x5c);
    }
    *(uint64_t *)(array_info + 2) = new_buffer;
    return;
}

/**
 * 调整数组容量（92字节元素）- 全局版本
 * 主要功能：调整全局数组容量，每个元素92字节
 * 
 * 原始实现：FUN_180086031
 * 简化实现：全局数组容量调整
 */
void resize_global_array_92byte(void)
{
    uint64_t new_buffer;      // 新缓冲区
    int *global_array;          // 全局数组指针
    
    new_buffer = allocate_memory();
    if (*(longlong *)(global_array + 2) != 0) {
        memcpy(new_buffer, *(longlong *)(global_array + 2), (longlong)*global_array * 0x5c);
    }
    *(uint64_t *)(global_array + 2) = new_buffer;
    return;
}

/**
 * 重置数据结构指针（92字节版本）
 * 主要功能：重置数据结构中的指针
 * 
 * 原始实现：FUN_180086073
 * 简化实现：数据结构指针重置
 */
void reset_data_structure_pointers_92byte(longlong struct_ptr)
{
    longlong *global_ptr;       // 全局指针
    
    if (*(longlong *)(struct_ptr + 8) != 0) {
        release_memory_buffer();
    }
    *(uint64_t *)(global_ptr + 8) = 0;
    return;
}

/**
 * 复制数组数据（92字节元素）
 * 主要功能：复制数组数据，每个元素92字节
 * 
 * 原始实现：FUN_180086090
 * 简化实现：数组数据复制
 */
void copy_array_data_92byte(int *dest_array, int *src_array)
{
    int element_count;          // 元素数量
    uint64_t data_buffer;    // 数据缓冲区
    
    element_count = *src_array;
    *dest_array = element_count;
    *(char *)(dest_array + 8) = (char)src_array[8];
    
    if (dest_array[1] < src_array[1]) {
        dest_array[1] = src_array[1];
        resize_array_92byte_elements(dest_array);
        element_count = *dest_array;
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    else {
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    
    memcpy(*(uint64_t *)(dest_array + 2), data_buffer, (longlong)element_count * 0x5c);
    return;
}

/**
 * 复制数组数据（16字节元素）
 * 主要功能：复制数组数据，每个元素16字节
 * 
 * 原始实现：FUN_1800860f0
 * 简化实现：数组数据复制
 */
void copy_array_data_16byte(int *dest_array, int *src_array)
{
    int element_count;          // 元素数量
    uint64_t data_buffer;    // 数据缓冲区
    
    element_count = *src_array;
    *dest_array = element_count;
    *(char *)(dest_array + 8) = (char)src_array[8];
    
    if (dest_array[1] < src_array[1]) {
        dest_array[1] = src_array[1];
        resize_array(dest_array);
        element_count = *dest_array;
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    else {
        data_buffer = *(uint64_t *)(src_array + 2);
    }
    
    memcpy(*(uint64_t *)(dest_array + 2), data_buffer, (longlong)element_count << 4);
    return;
}

/**
 * 检查矩阵是否为单位矩阵
 * 主要功能：验证矩阵是否为单位矩阵
 * 
 * 原始实现：FUN_1800861a0
 * 简化实现：单位矩阵检查
 */
int8_t is_identity_matrix(float *matrix_data)
{
    char is_identity;          // 是否为单位矩阵
    
    // 检查矩阵是否为单位矩阵
    if ((((((ABS(*matrix_data - 1.0) < 0.0001) && (ABS(matrix_data[1]) < 0.0001)) &&
          (ABS(matrix_data[2]) < 0.0001)) &&
         ((ABS(matrix_data[4]) < 0.0001 && (ABS(matrix_data[5] - 1.0) < 0.0001)))) &&
        ((ABS(matrix_data[6]) < 0.0001 && ((ABS(matrix_data[8]) < 0.0001 && (ABS(matrix_data[9]) < 0.0001)))))) &&
       (ABS(matrix_data[10] - 1.0) < 0.0001)) {
        is_identity = verify_matrix_components(matrix_data + 0xc, &system_memory_0330);
        if (is_identity != '\0') {
            return 1;
        }
    }
    return 0;
}

/**
 * 向数组添加元素（24字节元素）
 * 主要功能：向数组中添加新元素，每个元素24字节
 * 
 * 原始实现：FUN_180086270
 * 简化实现：数组元素添加
 */
void add_element_to_array_24byte(ulonglong *array_info, uint64_t *element_data)
{
    int32_t data_val1;       // 数据值1
    int32_t data_val2;       // 数据值2
    int32_t data_val3;       // 数据值3
    uint64_t data_val4;       // 数据值4
    int32_t *dest_ptr;       // 目标指针
    longlong capacity;          // 容量
    uint64_t *write_ptr;      // 写入指针
    uint64_t *base_ptr;       // 基础指针
    
    write_ptr = (uint64_t *)array_info[1];
    if (write_ptr < (uint64_t *)array_info[2]) {
        array_info[1] = (ulonglong)(write_ptr + 3);
        data_val4 = element_data[1];
        *write_ptr = *element_data;
        write_ptr[1] = data_val4;
        write_ptr[2] = element_data[2];
        return;
    }
    
    base_ptr = (uint64_t *)*array_info;
    capacity = ((longlong)write_ptr - (longlong)base_ptr) / 0x18;
    if (capacity == 0) {
        capacity = 1;
    }
    else {
        capacity = capacity * 2;
        if (capacity == 0) {
            dest_ptr = (int32_t *)0x0;
            goto ARRAY_RESIZE_DONE;
        }
    }
    
    dest_ptr = (int32_t *)allocate_memory(_DAT_180c8ed18, capacity * 0x18, (char)array_info[3]);
    base_ptr = (uint64_t *)*array_info;
    write_ptr = (uint64_t *)array_info[1];
    
ARRAY_RESIZE_DONE:
    if (base_ptr != write_ptr) {
        memmove(dest_ptr, base_ptr, (longlong)write_ptr - (longlong)base_ptr);
    }
    
    data_val1 = *(int32_t *)((longlong)element_data + 4);
    data_val2 = *(int32_t *)(element_data + 1);
    data_val3 = *(int32_t *)((longlong)element_data + 0xc);
    *dest_ptr = *(int32_t *)element_data;
    dest_ptr[1] = data_val1;
    dest_ptr[2] = data_val2;
    dest_ptr[3] = data_val3;
    *(uint64_t *)(dest_ptr + 4) = element_data[2];
    
    if (*array_info != 0) {
        release_memory_buffer();
    }
    
    *array_info = (ulonglong)dest_ptr;
    array_info[2] = (ulonglong)(dest_ptr + capacity * 6);
    array_info[1] = (ulonglong)(dest_ptr + 6);
    return;
}

/**
 * 向数组添加元素（24字节元素）- 带偏移版本
 * 主要功能：向数组中添加新元素，支持偏移参数
 * 
 * 原始实现：FUN_1800862bb
 * 简化实现：数组元素添加
 */
void add_element_to_array_24byte_offset(longlong offset, uint64_t element1, uint64_t element2, longlong param4)
{
    int32_t data_val1;       // 数据值1
    int32_t data_val2;       // 数据值2
    int32_t data_val3;       // 数据值3
    int32_t *dest_ptr;       // 目标指针
    longlong *array_info;       // 数组信息
    int32_t *element_ptr;    // 元素指针
    longlong capacity;          // 容量
    longlong current_pos;        // 当前位置
    
    if (offset / 0x18 == 0) {
        capacity = 1;
    }
    else {
        capacity = (offset / 0x18) * 2;
        if (capacity == 0) {
            dest_ptr = (int32_t *)0x0;
            goto ARRAY_RESIZE_DONE;
        }
    }
    
    dest_ptr = (int32_t *)allocate_memory(_DAT_180c8ed18, capacity * 0x18, (char)array_info[3]);
    param4 = *array_info;
    current_pos = array_info[1];
    
ARRAY_RESIZE_DONE:
    if (param4 != current_pos) {
        memmove(dest_ptr, param4, current_pos - param4);
    }
    
    data_val1 = element_ptr[1];
    data_val2 = element_ptr[2];
    data_val3 = element_ptr[3];
    *dest_ptr = *element_ptr;
    dest_ptr[1] = data_val1;
    dest_ptr[2] = data_val2;
    dest_ptr[3] = data_val3;
    *(uint64_t *)(dest_ptr + 4) = *(uint64_t *)(element_ptr + 4);
    
    if (*array_info != 0) {
        release_memory_buffer();
    }
    
    *array_info = (longlong)dest_ptr;
    array_info[2] = (longlong)(dest_ptr + capacity * 6);
    array_info[1] = (longlong)(dest_ptr + 6);
    return;
}

/**
 * 内存缓冲区释放 thunk 函数
 * 主要功能： thunk 函数，调用内存缓冲区释放
 * 
 * 原始实现：thunk_FUN_18064e900
 * 简化实现：内存缓冲区释放
 */
void thunk_release_memory_buffer(void)
{
    release_memory_buffer();
}

/**
 * 向数组添加元素（16字节元素）
 * 主要功能：向数组中添加新元素，每个元素16字节
 * 
 * 原始实现：FUN_1800863a0
 * 简化实现：数组元素添加
 */
void add_element_to_array_16byte(ulonglong *array_info, uint64_t *element_data)
{
    int32_t data_val1;       // 数据值1
    int32_t data_val2;       // 数据值2
    int32_t data_val3;       // 数据值3
    uint64_t data_val4;       // 数据值4
    int32_t *dest_ptr;       // 目标指针
    uint64_t *write_ptr;      // 写入指针
    uint64_t *base_ptr;       // 基础指针
    longlong capacity;          // 容量
    
    write_ptr = (uint64_t *)array_info[1];
    if (write_ptr < (uint64_t *)array_info[2]) {
        array_info[1] = (ulonglong)(write_ptr + 2);
        data_val4 = element_data[1];
        *write_ptr = *element_data;
        write_ptr[1] = data_val4;
        return;
    }
    
    base_ptr = (uint64_t *)*array_info;
    capacity = (longlong)write_ptr - (longlong)base_ptr >> 4;
    if (capacity == 0) {
        capacity = 1;
    }
    else {
        capacity = capacity * 2;
        if (capacity == 0) {
            dest_ptr = (int32_t *)0x0;
            goto ARRAY_RESIZE_DONE;
        }
    }
    
    dest_ptr = (int32_t *)allocate_memory(_DAT_180c8ed18, capacity << 4, (char)array_info[3]);
    base_ptr = (uint64_t *)*array_info;
    write_ptr = (uint64_t *)array_info[1];
    
ARRAY_RESIZE_DONE:
    if (base_ptr != write_ptr) {
        memmove(dest_ptr, base_ptr, (longlong)write_ptr - (longlong)base_ptr);
    }
    
    data_val1 = *(int32_t *)((longlong)element_data + 4);
    data_val2 = *(int32_t *)(element_data + 1);
    data_val3 = *(int32_t *)((longlong)element_data + 0xc);
    *dest_ptr = *(int32_t *)element_data;
    dest_ptr[1] = data_val1;
    dest_ptr[2] = data_val2;
    dest_ptr[3] = data_val3;
    
    if (*array_info != 0) {
        release_memory_buffer();
    }
    
    *array_info = (ulonglong)dest_ptr;
    array_info[2] = (ulonglong)(dest_ptr + capacity * 4);
    array_info[1] = (ulonglong)(dest_ptr + 4);
    return;
}

/**
 * 初始化对象实例
 * 主要功能：初始化对象实例，设置虚函数表
 * 
 * 原始实现：FUN_180086490
 * 简化实现：对象实例初始化
 */
uint64_t *initialize_object_instance(uint64_t *object_ptr, ulonglong init_flags, uint64_t param3, uint64_t param4)
{
    object_ptr[4] = &unknown_var_3456_ptr;
    if (object_ptr[5] != 0) {
        release_memory_buffer();
    }
    object_ptr[5] = 0;
    *(int32_t *)(object_ptr + 7) = 0;
    object_ptr[4] = &unknown_var_720_ptr;
    *object_ptr = &unknown_var_3696_ptr;
    *object_ptr = &unknown_var_3552_ptr;
    if ((init_flags & 1) != 0) {
        free(object_ptr, 0x70, param3, param4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

/**
 * 执行资源清理操作
 * 主要功能：执行资源的清理操作
 * 
 * 原始实现：FUN_180086530
 * 简化实现：资源清理
 */
void perform_resource_cleanup(longlong *resource_ptr)
{
    if (*resource_ptr != 0) {
        execute_cleanup_operations();
    }
    return;
}

/**
 * 初始化字符串对象
 * 主要功能：初始化字符串对象，复制字符串数据
 * 
 * 原始实现：FUN_180086570
 * 简化实现：字符串对象初始化
 */
uint64_t *initialize_string_object(uint64_t *string_obj, longlong string_data, uint64_t param3, uint64_t param4)
{
    longlong string_length;      // 字符串长度
    
    *string_obj = &unknown_var_720_ptr;
    string_obj[1] = 0;
    *(int32_t *)(string_obj + 2) = 0;
    *string_obj = &unknown_var_3432_ptr;
    string_obj[1] = string_obj + 3;
    *(int32_t *)(string_obj + 2) = 0;
    *(int8_t *)(string_obj + 3) = 0;
    
    if (string_data != 0) {
        string_length = -1;
        do {
            string_length = string_length + 1;
        } while (*(char *)(string_data + string_length) != '\0');
        *(int *)(string_obj + 2) = (int)string_length;
        strcpy_s(string_obj[1], 0x80, string_data, param4, 0xfffffffffffffffe);
    }
    return string_obj;
}

/**
 * 创建特定类型对象A
 * 主要功能：创建特定类型的对象A
 * 
 * 原始实现：FUN_180086600
 * 简化实现：对象A创建
 */
uint64_t *create_object_typeA(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_2712_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象B
 * 主要功能：创建特定类型的对象B
 * 
 * 原始实现：FUN_180086670
 * 简化实现：对象B创建
 */
uint64_t *create_object_typeB(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb0, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_1376_ptr;
    return new_object;
}

/**
 * 释放特定类型对象B
 * 主要功能：释放特定类型的对象B
 * 
 * 原始实现：FUN_1800866f0
 * 简化实现：对象B释放
 */
uint64_t release_object_typeB(uint64_t object_ptr, ulonglong release_flags, uint64_t param3, uint64_t param4)
{
    uint64_t release_param;   // 释放参数
    
    release_param = 0xfffffffffffffffe;
    execute_release_sequence();
    if ((release_flags & 1) != 0) {
        free(object_ptr, 0xb0, param3, param4, release_param);
    }
    return object_ptr;
}

/**
 * 创建特定类型对象C
 * 主要功能：创建特定类型的对象C
 * 
 * 原始实现：FUN_180086740
 * 简化实现：对象C创建
 */
uint64_t *create_object_typeC(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_1192_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 释放特定类型对象C
 * 主要功能：释放特定类型的对象C
 * 
 * 原始实现：FUN_1800867d0
 * 简化实现：对象C释放
 */
longlong release_object_typeC(longlong object_ptr, ulonglong release_flags, uint64_t param3, uint64_t param4)
{
    uint64_t release_param;   // 释放参数
    
    release_param = 0xfffffffffffffffe;
    if (*(longlong **)(object_ptr + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(object_ptr + 0xb0) + 0x38))();
    }
    execute_release_sequence(object_ptr);
    if ((release_flags & 1) != 0) {
        free(object_ptr, 0xb8, param3, param4, release_param);
    }
    return object_ptr;
}

/**
 * 创建特定类型对象D
 * 主要功能：创建特定类型的对象D
 * 
 * 原始实现：FUN_180086830
 * 简化实现：对象D创建
 */
uint64_t *create_object_typeD(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_1008_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象E
 * 主要功能：创建特定类型的对象E
 * 
 * 原始实现：FUN_1800868d0
 * 简化实现：对象E创建
 */
uint64_t *create_object_typeE(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_560_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象F
 * 主要功能：创建特定类型的对象F
 * 
 * 原始实现：FUN_180086960
 * 简化实现：对象F创建
 */
uint64_t *create_object_typeF(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_376_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象G
 * 主要功能：创建特定类型的对象G
 * 
 * 原始实现：FUN_180086a00
 * 简化实现：对象G创建
 */
uint64_t *create_object_typeG(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_152_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象H
 * 主要功能：创建特定类型的对象H
 * 
 * 原始实现：FUN_180086aa0
 * 简化实现：对象H创建
 */
uint64_t *create_object_typeH(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_9944_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 创建特定类型对象I
 * 主要功能：创建特定类型的对象I
 * 
 * 原始实现：FUN_180086b40
 * 简化实现：对象I创建
 */
uint64_t *create_object_typeI(uint64_t param1, int32_t param2)
{
    uint64_t *new_object;     // 新对象指针
    
    new_object = (uint64_t *)allocate_object_memory(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
    initialize_object_data(new_object, param1, param2);
    *new_object = &unknown_var_9744_ptr;
    new_object[0x16] = 0;
    return new_object;
}

/**
 * 初始化渲染配置
 * 主要功能：初始化渲染相关的配置参数
 * 
 * 原始实现：FUN_180086bd0
 * 简化实现：渲染配置初始化
 */
void initialize_render_configuration(longlong config_ptr, uint64_t param2, longlong param3)
{
    void *config_param1;    // 配置参数1
    void *config_param2;    // 配置参数2
    void *config_param3;    // 配置参数3
    void *stack_param1;     // 栈参数1
    void *stack_param2;     // 栈参数2
    
    *(int32_t *)(config_ptr + 0x10) = 0;
    if (*(int8_t **)(config_ptr + 8) != (int8_t *)0x0) {
        **(int8_t **)(config_ptr + 8) = 0;
    }
    
    create_render_context(*_DAT_180c86870, &stack_param1, param2);
    config_param1 = &system_buffer_ptr;
    if (_DAT_180bf6658 != (void *)0x0) {
        config_param1 = _DAT_180bf6658;
    }
    
    config_param3 = &system_buffer_ptr;
    if (*(void **)(param3 + 8) != (void *)0x0) {
        config_param3 = *(void **)(param3 + 8);
    }
    
    config_param2 = &system_buffer_ptr;
    if (stack_param2 != (void *)0x0) {
        config_param2 = stack_param2;
    }
    
    setup_render_parameters(config_ptr, &unknown_var_8064_ptr, config_param2, config_param3, config_param1);
    stack_param1 = &unknown_var_3456_ptr;
    if (stack_param2 != (void *)0x0) {
        release_memory_buffer();
    }
    return;
}

/**
 * 初始化数组结构
 * 主要功能：初始化数组结构，设置默认参数
 * 
 * 原始实现：FUN_180086ca0
 * 简化实现：数组结构初始化
 */
uint64_t *initialize_array_structure(uint64_t *array_ptr)
{
    uint64_t *sub_array_ptr;   // 子数组指针
    
    array_ptr[1] = 0;
    array_ptr[2] = 0;
    array_ptr[3] = 0;
    *(int32_t *)(array_ptr + 4) = 3;
    array_ptr[5] = 0;
    array_ptr[6] = 0;
    array_ptr[7] = 0;
    *(int32_t *)(array_ptr + 8) = 3;
    sub_array_ptr = array_ptr + 9;
    array_ptr[0xc] = 0;
    *(int32_t *)(array_ptr + 0xe) = 3;
    *sub_array_ptr = sub_array_ptr;
    array_ptr[10] = sub_array_ptr;
    array_ptr[0xb] = 0;
    *(int8_t *)(array_ptr + 0xc) = 0;
    array_ptr[0xd] = 0;
    sub_array_ptr = array_ptr + 0xf;
    array_ptr[0x12] = 0;
    *(int32_t *)(array_ptr + 0x14) = 0x1a;
    *sub_array_ptr = sub_array_ptr;
    array_ptr[0x10] = sub_array_ptr;
    array_ptr[0x11] = 0;
    *(int8_t *)(array_ptr + 0x12) = 0;
    array_ptr[0x13] = 0;
    sub_array_ptr = array_ptr + 0x16;
    array_ptr[0x19] = 0;
    *(int32_t *)(array_ptr + 0x1b) = 0x1a;
    *sub_array_ptr = sub_array_ptr;
    array_ptr[0x17] = sub_array_ptr;
    array_ptr[0x18] = 0;
    *(int8_t *)(array_ptr + 0x19) = 0;
    array_ptr[0x1a] = 0;
    sub_array_ptr = array_ptr + 0x1c;
    array_ptr[0x1f] = 0;
    *(int32_t *)(array_ptr + 0x21) = 3;
    *sub_array_ptr = sub_array_ptr;
    array_ptr[0x1d] = sub_array_ptr;
    array_ptr[0x1e] = 0;
    *(int8_t *)(array_ptr + 0x1f) = 0;
    array_ptr[0x20] = 0;
    array_ptr[0x22] = 0;
    array_ptr[0x23] = 0;
    array_ptr[0x24] = 0;
    *(int32_t *)(array_ptr + 0x25) = 0x1a;
    array_ptr[0x15] = 0;
    *array_ptr = 0;
    *(int8_t *)(array_ptr + 0x26) = 0;
    return array_ptr;
}

/**
 * 清理数组资源
 * 主要功能：清理数组相关的资源
 * 
 * 原始实现：FUN_180086dc0
 * 简化实现：数组资源清理
 */
void cleanup_array_resources(longlong *array_info)
{
    longlong current_ptr;        // 当前指针
    longlong end_ptr;            // 结束指针
    
    current_ptr = array_info[1];
    for (end_ptr = *array_info; end_ptr != current_ptr; end_ptr = end_ptr + 0x60) {
        release_array_element(end_ptr);
    }
    if (*array_info == 0) {
        return;
    }
    release_memory_buffer();
}

/**
 * 释放渲染资源
 * 主要功能：释放渲染相关的资源
 * 
 * 原始实现：FUN_180086de0
 * 简化实现：渲染资源释放
 */
void release_render_resources(longlong resource_ptr, uint64_t param2, uint64_t param3, uint64_t param4)
{
    release_render_resource(resource_ptr, *(uint64_t *)(resource_ptr + 0x10), param3, param4, 0xfffffffffffffffe);
    return;
}

/**
 * 清理渲染资源
 * 主要功能：清理渲染相关的资源
 * 
 * 原始实现：FUN_180086e10
 * 简化实现：渲染资源清理
 */
void cleanup_render_resources(longlong resource_ptr, uint64_t param2, uint64_t param3, uint64_t param4)
{
    release_render_resource(resource_ptr, *(uint64_t *)(resource_ptr + 0x10), param3, param4, 0xfffffffffffffffe);
    return;
}

// 辅助函数声明
longlong process_array_allocation(ushort data_count);
void resize_array(uint *array_ptr);
void execute_resource_release(int32_t flags);
uint64_t allocate_memory(uint64_t allocator, longlong size, char flags);
void release_memory_buffer(void);
void execute_cleanup_operations(void);
char verify_matrix_components(float *matrix_data, uint64_t *compare_data);
uint64_t allocate_object_memory(uint64_t allocator, longlong size, longlong align, longlong type, uint64_t flags);
void initialize_object_data(uint64_t *object, uint64_t param1, int32_t param2);
void execute_release_sequence(longlong object_ptr);
void create_render_context(uint64_t config, uint64_t *context_ptr, uint64_t param2);
void setup_render_parameters(longlong config_ptr, uint64_t *param1, uint64_t *param2, uint64_t *param3, uint64_t *param4);
void release_array_element(longlong element_ptr);
void release_render_resource(longlong resource_ptr, uint64_t param2, uint64_t param3, uint64_t param4, uint64_t flags);
void strcpy_s(uint64_t dest, longlong dest_size, uint64_t src, uint64_t param4, uint64_t flags);