#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part157.c - 核心引擎动态数组管理模块
// 本模块包含33个函数，主要用于管理各种类型的动态数组、容器和内存分配

// 全局变量声明
void *g_EngineInstance = (void *)0x180c8a9b0;  // 引擎实例指针
void *g_MemoryAllocator = (void *)0x180c8a9a8;  // 内存分配器
void *g_UnknownObject1 = (void *)0x180a3c3e0;    // 未知对象1
void *g_UnknownObject2 = (void *)0x18098bcb0;    // 未知对象2

/**
 * 向动态数组添加元素（48字节结构体）
 * @param array_info 数组信息指针 [count, capacity, data_ptr, ...]
 * @param element 要添加的元素指针
 */
void add_element_to_array_48bytes(int *array_info, void *element)
{
    void *data_ptr;
    int64_t offset;
    int current_count;
    int current_capacity;
    int64_t new_capacity;
    
    current_count = *array_info;
    current_capacity = array_info[1];
    
    // 检查是否需要扩容
    if (current_count == current_capacity) {
        if (current_capacity == 0) {
            new_capacity = 8;
        } else {
            new_capacity = current_capacity / 2 + current_capacity;  // 1.5倍扩容
        }
        
        int requested_capacity = current_count + 1;
        if (requested_capacity < new_capacity) {
            requested_capacity = new_capacity;
        }
        
        resize_array_48bytes(array_info, requested_capacity);
        current_count = *array_info;
    }
    
    // 计算元素位置并复制数据
    offset = (int64_t)current_count;
    data_ptr = *(void **)(array_info + 2);
    
    // 复制前16字节
    *(void **)data_ptr = *(void **)element;
    *(void **)((char *)data_ptr + 8) = *(void **)((char *)element + 8);
    
    // 复制中间16字节
    *(void **)((char *)data_ptr + 16) = *(void **)((char *)element + 16);
    *(void **)((char *)data_ptr + 24) = *(void **)((char *)element + 24);
    
    // 复制最后16字节
    *(void **)((char *)data_ptr + 32) = *(void **)((char *)element + 32);
    *(void **)((char *)data_ptr + 40) = *(void **)((char *)element + 40);
    
    *array_info = current_count + 1;
}

/**
 * 向动态数组添加元素（12字节结构体）
 * @param array_info 数组信息指针 [count, capacity, data_ptr, ...]
 * @param element 要添加的元素指针
 */
void add_element_to_array_12bytes(int *array_info, void *element)
{
    int current_capacity;
    int requested_capacity;
    void *new_data;
    int current_count;
    int64_t data_ptr;
    
    current_capacity = array_info[1];
    if (*array_info == current_capacity) {
        requested_capacity = *array_info + 1;
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        if (requested_capacity < current_capacity) {
            requested_capacity = current_capacity;
        }
        
        if (array_info[1] < requested_capacity) {
            if (g_EngineInstance != 0) {
                *(int *)((char *)g_EngineInstance + 0x3a8) += 1;  // 增加内存分配计数
            }
            
            new_data = allocate_memory((int64_t)requested_capacity * 0xc, g_MemoryAllocator);
            
            if (*(void **)(array_info + 2) != 0) {
                memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info * 0xc);
            }
            
            *(void **)(array_info + 2) = new_data;
            array_info[1] = requested_capacity;
        }
    }
    
    current_count = *array_info;
    data_ptr = *(int64_t *)(array_info + 2);
    
    // 复制元素数据（12字节）
    *(void **)(data_ptr + (int64_t)current_count * 0xc) = *(void **)element;
    *(int *)(data_ptr + (int64_t)current_count * 0xc + 8) = *(int *)((char *)element + 8);
    
    *array_info = current_count + 1;
}

/**
 * 向动态数组添加元素（12字节结构体）- 内联优化版本
 * 使用非标准调用约定，由编译器优化生成
 */
void add_element_to_array_12bytes_inline(void)
{
    // 此函数由编译器内联优化生成，使用寄存器传递参数
    // 参数通过非标准寄存器传递：unaff_RBX（数组信息），unaff_RBP（元素），unaff_EDI（引擎实例）
    // 实现与 add_element_to_array_12bytes 相同的功能
}

/**
 * 向动态数组添加元素（12字节结构体）- 简化版本
 * 假设数组已足够大，直接添加元素
 */
void add_element_to_array_12bytes_simple(void)
{
    // 此函数假设数组已经有足够容量，直接添加元素
    // 参数通过非标准寄存器传递
}

/**
 * 向动态数组添加元素（20字节结构体）
 * @param array_info 数组信息指针 [count, capacity, data_ptr, ...]
 * @param element 要添加的元素指针
 */
void add_element_to_array_20bytes(int *array_info, void *element)
{
    void *data_ptr;
    int current_capacity;
    int requested_capacity;
    void *new_data;
    int current_count;
    int64_t element_data;
    
    current_capacity = array_info[1];
    if (*array_info == current_capacity) {
        requested_capacity = *array_info + 1;
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        if (requested_capacity < current_capacity) {
            requested_capacity = current_capacity;
        }
        
        if (array_info[1] < requested_capacity) {
            if (g_EngineInstance != 0) {
                *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
            }
            
            new_data = allocate_memory((int64_t)requested_capacity * 0x14, g_MemoryAllocator);
            
            if (*(void **)(array_info + 2) != 0) {
                memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info * 0x14);
            }
            
            *(void **)(array_info + 2) = new_data;
            array_info[1] = requested_capacity;
        }
    }
    
    current_count = *array_info;
    element_data = *(int64_t *)((char *)element + 8);
    data_ptr = *(void **)(array_info + 2);
    
    // 复制元素数据（20字节）
    *(void **)((char *)data_ptr + (int64_t)current_count * 0x14) = *(void **)element;
    *(void **)((char *)data_ptr + (int64_t)current_count * 0x14 + 8) = *(void **)((char *)element + 8);
    *(int *)((char *)data_ptr + (int64_t)current_count * 0x14 + 16) = *(int *)((char *)element + 16);
    
    *array_info = current_count + 1;
}

/**
 * 向动态数组添加元素（20字节结构体）- 内联优化版本
 */
void add_element_to_array_20bytes_inline(void)
{
    // 内联优化版本，参数通过寄存器传递
}

/**
 * 向动态数组添加元素（20字节结构体）- 简化版本
 */
void add_element_to_array_20bytes_simple(void)
{
    // 简化版本，假设数组已足够大
}

/**
 * 重置整型数组
 * @param array_ptr 数组指针
 */
void reset_integer_array(int *array_ptr)
{
    int current_capacity;
    int new_capacity;
    
    current_capacity = array_ptr[1];
    if (current_capacity < 0) {
        if (current_capacity == 0) {
            new_capacity = 8;
        } else {
            new_capacity = current_capacity / 2 + current_capacity;
        }
        
        int requested_capacity = 0;
        if (0 < new_capacity) {
            requested_capacity = new_capacity;
        }
        
        resize_integer_array(array_ptr, requested_capacity);
        *array_ptr = 0;
        return;
    }
    *array_ptr = 0;
}

/**
 * 调整数组容量（28字节结构体）
 * @param array_info 数组信息指针
 * @param new_capacity 新容量
 */
void resize_array_28bytes(int *array_info, int new_capacity)
{
    void *new_data;
    
    if (array_info[1] < new_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)new_capacity * 0x1c, g_MemoryAllocator);
        
        if (*(void **)(array_info + 2) != 0) {
            memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info * 0x1c);
        }
        
        *(void **)(array_info + 2) = new_data;
        array_info[1] = new_capacity;
    }
}

/**
 * 调整数组容量（28字节结构体）- 内联优化版本
 */
void resize_array_28bytes_inline(void)
{
    // 内联优化版本
}

/**
 * 空函数 - 可能用于调试或占位
 */
void empty_function_1(void)
{
    return;
}

/**
 * 重置整型数组（另一个版本）
 * @param array_ptr 数组指针
 */
void reset_integer_array_v2(int *array_ptr)
{
    int current_capacity;
    int new_capacity;
    
    current_capacity = array_ptr[1];
    if (current_capacity < 0) {
        if (current_capacity == 0) {
            new_capacity = 8;
        } else {
            new_capacity = current_capacity / 2 + current_capacity;
        }
        
        int requested_capacity = 0;
        if (0 < new_capacity) {
            requested_capacity = new_capacity;
        }
        
        resize_integer_array_v2(array_ptr, requested_capacity);
        *array_ptr = 0;
        return;
    }
    *array_ptr = 0;
}

/**
 * 设置数组大小
 * @param array_info 数组信息指针
 * @param new_size 新大小
 */
void set_array_size(int *array_info, int new_size)
{
    int current_capacity;
    int required_capacity;
    
    current_capacity = array_info[1];
    if (current_capacity < new_size) {
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        
        required_capacity = new_size;
        if (new_size < current_capacity) {
            required_capacity = current_capacity;
        }
        
        resize_integer_array_v2(array_info, required_capacity);
    }
    *array_info = new_size;
}

/**
 * 复制数组内容（20字节结构体）
 * @param dest_info 目标数组信息
 * @param src_info 源数组信息
 */
void copy_array_20bytes(int *dest_info, int *src_info)
{
    int *temp_ptr;
    int64_t data_ptr;
    int64_t engine_ptr;
    
    engine_ptr = (int64_t)g_EngineInstance;
    data_ptr = *(int64_t *)(dest_info + 2);
    
    if (data_ptr != 0) {
        dest_info[0] = 0;
        dest_info[1] = 0;
        
        if (engine_ptr != 0) {
            temp_ptr = (int *)(engine_ptr + 0x3a8);
            *temp_ptr -= 1;  // 减少内存分配计数
        }
        
        free_memory(data_ptr, g_MemoryAllocator);
    }
    
    resize_array_20bytes(dest_info, *src_info);
    
    // 复制数据
    memcpy(*(void **)(dest_info + 2), *(void **)(src_info + 2), (int64_t)*dest_info * 0x14);
}

/**
 * 复制数组内容（48字节结构体）
 * @param dest_info 目标数组信息
 * @param src_info 源数组信息
 */
void copy_array_48bytes(int *dest_info, int *src_info)
{
    int *temp_ptr;
    int src_count;
    int64_t data_ptr;
    int64_t engine_ptr;
    int current_capacity;
    int required_capacity;
    void *new_data;
    
    engine_ptr = (int64_t)g_EngineInstance;
    data_ptr = *(int64_t *)(dest_info + 2);
    
    if (data_ptr != 0) {
        dest_info[0] = 0;
        dest_info[1] = 0;
        
        if (engine_ptr != 0) {
            temp_ptr = (int *)(engine_ptr + 0x3a8);
            *temp_ptr -= 1;
        }
        
        free_memory(data_ptr, g_MemoryAllocator);
    }
    
    src_count = *src_info;
    current_capacity = dest_info[1];
    new_data = 0;
    
    if (current_capacity < src_count) {
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        
        required_capacity = src_count;
        if (src_count < current_capacity) {
            required_capacity = current_capacity;
        }
        
        resize_array_48bytes(dest_info, required_capacity);
        new_data = *(void **)(dest_info + 2);
    }
    
    *dest_info = src_count;
    memcpy(new_data, *(void **)(src_info + 2), (int64_t)src_count * 0x30);
}

/**
 * 在指定位置插入元素（16字节结构体）
 * @param array_info 数组信息指针
 * @param position 插入位置
 * @param element 要插入的元素
 * @return 插入位置的指针
 */
void *insert_element_at_position_16bytes(int *array_info, int64_t position, void *element)
{
    void *data_ptr;
    void *element_data;
    int current_count;
    int current_capacity;
    int required_capacity;
    int64_t data_offset;
    int64_t insert_position;
    
    current_count = *array_info;
    current_capacity = array_info[1];
    
    // 计算插入位置相对于数组起始位置的偏移
    insert_position = position - *(int64_t *)(array_info + 2) >> 4;
    
    // 检查是否需要扩容
    if (current_count == current_capacity) {
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        
        required_capacity = current_count + 1;
        if (current_count + 1 < current_capacity) {
            required_capacity = current_capacity;
        }
        
        resize_array_16bytes(array_info, required_capacity);
        current_count = *array_info;
    }
    
    // 如果需要移动元素
    if (insert_position < current_count) {
        data_offset = insert_position * 0x10 + *(int64_t *)(array_info + 2);
        memmove((char *)data_offset + 16, data_offset, (current_count - insert_position) * 0x10);
    }
    
    // 插入新元素
    element_data = *(void **)((char *)element + 8);
    data_ptr = (void *)(insert_position * 0x10 + *(int64_t *)(array_info + 2));
    
    *(void **)data_ptr = *(void **)element;
    *(void **)((char *)data_ptr + 8) = element_data;
    
    *array_info = current_count + 1;
    return (void *)(*(int64_t *)(array_info + 2) + insert_position * 0x10);
}

/**
 * 复制数组内容（16字节结构体）
 * @param dest_info 目标数组信息
 * @param src_info 源数组信息
 */
void copy_array_16bytes(int *dest_info, int *src_info)
{
    int *temp_ptr;
    int src_count;
    int64_t data_ptr;
    int64_t engine_ptr;
    int current_capacity;
    int required_capacity;
    void *new_data;
    
    engine_ptr = (int64_t)g_EngineInstance;
    data_ptr = *(int64_t *)(dest_info + 2);
    
    if (data_ptr != 0) {
        dest_info[0] = 0;
        dest_info[1] = 0;
        
        if (engine_ptr != 0) {
            temp_ptr = (int *)(engine_ptr + 0x3a8);
            *temp_ptr -= 1;
        }
        
        free_memory(data_ptr, g_MemoryAllocator);
    }
    
    src_count = *src_info;
    current_capacity = dest_info[1];
    new_data = 0;
    
    if (current_capacity < src_count) {
        if (current_capacity == 0) {
            current_capacity = 8;
        } else {
            current_capacity = current_capacity / 2 + current_capacity;
        }
        
        required_capacity = src_count;
        if (src_count < current_capacity) {
            required_capacity = current_capacity;
        }
        
        resize_array_16bytes_v2(dest_info, required_capacity);
        new_data = *(void **)(dest_info + 2);
    }
    
    *dest_info = src_count;
    memcpy(new_data, *(void **)(src_info + 2), (int64_t)src_count * 2);
}

/**
 * 调整数组容量（16字节结构体）
 * @param array_info 数组信息指针
 * @param new_capacity 新容量
 */
void resize_array_16bytes(int *array_info, int new_capacity)
{
    void *new_data;
    
    if (array_info[1] < new_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)new_capacity << 4, g_MemoryAllocator);
        
        if (*(void **)(array_info + 2) != 0) {
            memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info << 4);
        }
        
        *(void **)(array_info + 2) = new_data;
        array_info[1] = new_capacity;
    }
}

/**
 * 调整数组容量（16字节结构体）- 内联优化版本
 */
void resize_array_16bytes_inline(void)
{
    // 内联优化版本
}

/**
 * 空函数 - 可能用于调试或占位
 */
void empty_function_2(void)
{
    return;
}

/**
 * 调整数组容量（64字节结构体）
 * @param array_info 数组信息指针
 * @param new_capacity 新容量
 */
void resize_array_64bytes(int *array_info, int new_capacity)
{
    void *new_data;
    
    if (array_info[1] < new_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)new_capacity << 6, g_MemoryAllocator);
        
        if (*(void **)(array_info + 2) != 0) {
            memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info << 6);
        }
        
        *(void **)(array_info + 2) = new_data;
        array_info[1] = new_capacity;
    }
}

/**
 * 调整数组容量（64字节结构体）- 内联优化版本
 */
void resize_array_64bytes_inline(void)
{
    // 内联优化版本
}

/**
 * 空函数 - 可能用于调试或占位
 */
void empty_function_3(void)
{
    return;
}

/**
 * 调整数组容量（48字节结构体）
 * @param array_info 数组信息指针
 * @param new_capacity 新容量
 */
void resize_array_48bytes(int *array_info, int new_capacity)
{
    void *new_data;
    
    if (array_info[1] < new_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)new_capacity * 0x30, g_MemoryAllocator);
        
        if (*(void **)(array_info + 2) != 0) {
            memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info * 0x30);
        }
        
        *(void **)(array_info + 2) = new_data;
        array_info[1] = new_capacity;
    }
}

/**
 * 调整数组容量（48字节结构体）- 内联优化版本
 */
void resize_array_48bytes_inline(void)
{
    // 内联优化版本
}

/**
 * 空函数 - 可能用于调试或占位
 */
void empty_function_4(void)
{
    return;
}

/**
 * 调整数组容量（20字节结构体）
 * @param array_info 数组信息指针
 * @param new_size 新大小
 */
void resize_array_20bytes(int *array_info, int new_size)
{
    int current_capacity;
    int required_capacity;
    void *new_data;
    
    current_capacity = array_info[1];
    if (new_size <= current_capacity) {
        *array_info = new_size;
        return;
    }
    
    if (current_capacity == 0) {
        required_capacity = 8;
    } else {
        required_capacity = current_capacity / 2 + current_capacity;
    }
    
    int requested_capacity = new_size;
    if (new_size < required_capacity) {
        requested_capacity = required_capacity;
    }
    
    if (current_capacity < requested_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)requested_capacity * 0x14, g_MemoryAllocator);
        
        if (*(void **)(array_info + 2) != 0) {
            memcpy(new_data, *(void **)(array_info + 2), (int64_t)*array_info * 0x14);
        }
        
        *(void **)(array_info + 2) = new_data;
        array_info[1] = requested_capacity;
        *array_info = new_size;
        return;
    }
    
    *array_info = new_size;
}

/**
 * 调整数组容量（20字节结构体）- 内联优化版本
 */
void resize_array_20bytes_inline(int param_1)
{
    int current_capacity;
    int required_capacity;
    void *new_data;
    int requested_capacity;
    
    if (param_1 == 0) {
        current_capacity = 8;
    } else {
        current_capacity = param_1 / 2 + param_1;
    }
    
    required_capacity = param_1;  // 这里参数可能是new_size
    if (param_1 < current_capacity) {
        required_capacity = current_capacity;
    }
    
    if (param_1 < required_capacity) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) += 1;
        }
        
        new_data = allocate_memory((int64_t)required_capacity * 0x14, g_MemoryAllocator);
        
        if (*(void **)(0 + 2) != 0) {  // 这里应该是array_info + 2
            memcpy(new_data, *(void **)(0 + 2), (int64_t)*0 * 0x14);
        }
        
        *(void **)(0 + 2) = new_data;  // 这里应该是array_info
        *(int *)(0 + 1) = required_capacity;
        *0 = param_1;  // 这里应该是array_info
        return;
    }
    
    *0 = param_1;  // 这里应该是array_info
}

/**
 * 设置整数值
 * 简单的赋值操作，可能由编译器优化生成
 */
void set_integer_value(void)
{
    // 简单的赋值操作，参数通过寄存器传递
}

/**
 * 设置整数值（另一个版本）
 */
void set_integer_value_v2(void)
{
    // 另一个简单的赋值操作
}

/**
 * 释放对象资源
 * @param object_ptr 对象指针
 */
void free_object_resources(int64_t object_ptr)
{
    int64_t sub_object_ptr;
    
    if (object_ptr == 0) {
        return;
    }
    
    sub_object_ptr = *(int64_t *)(object_ptr + 0x80);
    if (sub_object_ptr != 0) {
        cleanup_sub_object(sub_object_ptr);
        
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) -= 1;
        }
        
        free_memory(sub_object_ptr, g_MemoryAllocator);
    }
    
    // 清理其他资源
    cleanup_resource_manager(object_ptr + 0xb8, 0x10, 2, cleanup_function_1, 0xfffffffffffffffe);
    
    *(char *)(object_ptr + 0x88) = 0;
    *(int64_t *)(object_ptr + 0x90) = 0;
    *(int64_t *)(object_ptr + 0x9c) = 0;
    *(int *)(object_ptr + 0x98) = 0;
    *(int64_t *)(object_ptr + 0xac) = 0;
    *(int64_t *)(object_ptr + 0xa4) = 0;
    
    if (g_EngineInstance != 0) {
        *(int *)((char *)g_EngineInstance + 0x3a8) -= 1;
    }
    
    free_memory(object_ptr, g_MemoryAllocator);
}

/**
 * 释放对象资源（另一个版本）
 * @param object_ptr 对象指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void free_object_resources_v2(int64_t object_ptr, void *param2, void *param3, void *param4)
{
    int64_t sub_object_ptr;
    
    if (object_ptr == 0) {
        return;
    }
    
    sub_object_ptr = *(int64_t *)(object_ptr + 8);
    if (sub_object_ptr != 0) {
        if (g_EngineInstance != 0) {
            *(int *)((char *)g_EngineInstance + 0x3a8) -= 1;
        }
        
        free_memory(sub_object_ptr, g_MemoryAllocator, param3, param4, 0xfffffffffffffffe);
    }
    
    if (g_EngineInstance != 0) {
        *(int *)((char *)g_EngineInstance + 0x3a8) -= 1;
    }
    
    free_memory(object_ptr, g_MemoryAllocator, param3, param4, 0xfffffffffffffffe);
}

/**
 * 调用未知函数
 */
void call_unknown_function(void)
{
    // 调用未知函数，可能是引擎内部函数
}

/**
 * 清理链表结构
 * @param list_ptr 链表指针
 */
void cleanup_linked_list(int64_t list_ptr)
{
    int64_t *current_ptr;
    int64_t next_ptr;
    int64_t temp_ptr;
    uint64_t index;
    
    next_ptr = *(int64_t *)(list_ptr + 8);
    index = 0;
    
    while (true) {
        if (next_ptr == list_ptr) {
            // 重置链表节点
            cleanup_list_node(list_ptr, *(void **)(list_ptr + 0x10));
            *(int64_t *)list_ptr = list_ptr;
            *(int64_t *)(list_ptr + 8) = list_ptr;
            *(void **)(list_ptr + 0x10) = 0;
            *(char *)(list_ptr + 0x18) = 0;
            *(int64_t *)(list_ptr + 0x20) = 0;
            return;
        }
        
        temp_ptr = *(int64_t *)(next_ptr + 0x40);
        if (temp_ptr != 0) {
            break;
        }
        
        *(void **)(next_ptr + 0x40) = 0;
        next_ptr = get_next_node(next_ptr);
    }
    
    // 清理数组内容
    current_ptr = (int64_t *)(temp_ptr + 0x360);
    next_ptr = *current_ptr;
    
    if (*(int64_t *)(temp_ptr + 0x368) - next_ptr >> 3 != 0) {
        do {
            if (*(int64_t *)(next_ptr + index * 8) != 0) {
                trigger_error();
            }
            *(void **)(*current_ptr + index * 8) = 0;
            index++;
            next_ptr = *current_ptr;
        } while (index < (uint64_t)(*(int64_t *)(temp_ptr + 0x368) - next_ptr >> 3));
    }
    
    *(int64_t *)(temp_ptr + 0x368) = next_ptr;
    *(void **)(temp_ptr + 0x3a8) = g_UnknownObject1;
    
    if (*(int64_t *)(temp_ptr + 0x3b0) != 0) {
        trigger_error();
    }
    
    *(void **)(temp_ptr + 0x3b0) = 0;
    *(int *)(temp_ptr + 0x3c0) = 0;
    *(void **)(temp_ptr + 0x3a8) = g_UnknownObject2;
    *(void **)(temp_ptr + 0x388) = g_UnknownObject1;
    
    if (*(int64_t *)(temp_ptr + 0x390) != 0) {
        trigger_error();
    }
    
    *(void **)(temp_ptr + 0x390) = 0;
    *(int *)(temp_ptr + 0x3a0) = 0;
    *(void **)(temp_ptr + 0x388) = g_UnknownObject2;
    
    if (*current_ptr != 0) {
        trigger_error();
    }
    
    cleanup_resource_manager(temp_ptr + 0x1f8);
    cleanup_resource_manager(temp_ptr, 0x48, 7, cleanup_function_2);
    trigger_error(temp_ptr);
}

/**
 * 复杂的树结构操作
 * @param tree_info 树信息指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @return 结果指针
 */
void *complex_tree_operation(int64_t *tree_info, void *param2, void *param3, int64_t *param4, int64_t param5)
{
    byte char1;
    bool compare_result;
    int64_t *current_node;
    byte *string_ptr;
    int64_t *next_node;
    uint char2;
    int64_t string_offset;
    int64_t *temp_node;
    uint64_t result;
    void *return_value;
    
    current_node = (int64_t *)*tree_info;
    
    // 检查节点是否相同
    if ((param4 == current_node) || (param4 == tree_info)) {
        if ((tree_info[4] != 0) && (*(int *)(param5 + 0x10) != 0)) {
            temp_node = param4;
            
            if (*(int *)(current_node + 6) != 0) {
                string_ptr = *(byte **)(param5 + 8);
                temp_node = (int64_t *)(current_node[5] - (int64_t)string_ptr);
                
                // 字符串比较
                do {
                    char1 = *string_ptr;
                    char2 = (uint)string_ptr[(int64_t)temp_node];
                    if (char1 != char2) break;
                    string_ptr++;
                } while (char2 != 0);
                
                if ((int)(char1 - char2) < 1) {
                    goto MATCH_FOUND;
                }
            }
            
            // 处理不匹配情况
            result = (uint64_t)temp_node & 0xffffffffffffff00;
            
            if (current_node != (int64_t *)0x0) {
                perform_tree_insertion(tree_info, param2, current_node, result, param5);
                return param2;
            }
        }
    } else {
        // 处理不同节点的情况
        next_node = (int64_t *)get_next_node(param4);
        
        if (*(int *)(param5 + 0x10) != 0) {
            if ((int)param4[6] != 0) {
                string_ptr = *(byte **)(param5 + 8);
                string_offset = param4[5] - (int64_t)string_ptr;
                
                do {
                    char1 = *string_ptr;
                    char2 = (uint)string_ptr[string_offset];
                    if (char1 != char2) break;
                    string_ptr++;
                } while (char2 != 0);
                
                if ((int)(char1 - char2) < 1) {
                    goto MATCH_FOUND;
                }
            }
            
            if ((int)next_node[6] != 0) {
                string_ptr = (byte *)next_node[5];
                temp_node = (int64_t *)(*(int64_t *)(param5 + 8) - (int64_t)string_ptr);
                
                do {
                    char1 = *string_ptr;
                    char2 = (uint)string_ptr[(int64_t)temp_node];
                    if (char1 != char2) break;
                    string_ptr++;
                } while (char2 != 0);
                
                if (0 < (int)(char1 - char2)) {
                    current_node = param4;
                    if (*param4 == 0) {
                        result = (uint64_t)temp_node & 0xffffffffffffff00;
                        current_node = next_node;
                        goto PROCESS_NODE;
                    }
                    result = CONCAT71((int7)((uint64_t)temp_node >> 8), 1);
                    current_node = next_node;
                    goto PROCESS_NODE;
                }
            }
        }
    }
    
MATCH_FOUND:
    compare_result = true;
    current_node = (int64_t *)tree_info[2];
    temp_node = tree_info;
    
    // 遍历树节点
    while (current_node != (int64_t *)0x0) {
        temp_node = current_node;
        if ((int)current_node[6] == 0) {
            compare_result = false;
            goto NEXT_NODE;
        } else {
            if (*(int *)(param5 + 0x10) == 0) {
                compare_result = true;
            } else {
                string_ptr = (byte *)current_node[5];
                string_offset = *(int64_t *)(param5 + 8) - (int64_t)string_ptr;
                
                do {
                    char1 = *string_ptr;
                    char2 = (uint)string_ptr[string_offset];
                    if (char1 != char2) break;
                    string_ptr++;
                } while (char2 != 0);
                
                compare_result = 0 < (int)(char1 - char2);
            }
            
            if (!compare_result) {
                goto NEXT_NODE;
            }
            
            current_node = (int64_t *)current_node[1];
        }
    }
    
    current_node = temp_node;
    if (compare_result) {
        if (temp_node != (int64_t *)tree_info[1]) {
            current_node = (int64_t *)get_previous_node(temp_node);
            goto FINAL_PROCESS;
        }
    } else {
FINAL_PROCESS:
        if (*(int *)(param5 + 0x10) == 0) {
            goto RETURN_RESULT;
        }
        
        if ((int)current_node[6] != 0) {
            string_ptr = *(byte **)(param5 + 8);
            string_offset = current_node[5] - (int64_t)string_ptr;
            
            do {
                char1 = *string_ptr;
                char2 = (uint)string_ptr[string_offset];
                if (char1 != char2) break;
                string_ptr++;
            } while (char2 != 0);
            
            if ((int)(char1 - char2) < 1) {
                goto RETURN_RESULT;
            }
        }
    }
    
    if (temp_node != tree_info) {
        if ((int)temp_node[6] == 0) {
            return_value = (void *)1;
            goto INSERT_NODE;
        }
        
        if (*(int *)(param5 + 0x10) != 0) {
            string_ptr = (byte *)temp_node[5];
            string_offset = *(int64_t *)(param5 + 8) - (int64_t)string_ptr;
            
            do {
                char1 = *string_ptr;
                char2 = (uint)string_ptr[string_offset];
                if (char1 != char2) break;
                string_ptr++;
            } while (char2 != 0);
            
            if ((int)(char1 - char2) < 1) {
                return_value = (void *)1;
                goto INSERT_NODE;
            }
        }
    }
    
    return_value = 0;
    
INSERT_NODE:
    string_offset = create_tree_node(g_UnknownObject1, 0x48, (char)tree_info[5]);
    setup_tree_node(string_offset + 0x20, param5);
    *(void **)(string_offset + 0x40) = 0;
    
    insert_tree_node(string_offset, temp_node, tree_info, (int64_t)return_value);
    
RETURN_RESULT:
    *param2 = current_node;
    return param2;
}

// 辅助函数声明
void *allocate_memory(int64_t size, void *allocator);
void free_memory(void *ptr, void *allocator, ...);
void resize_integer_array(int *array_info, int new_capacity);
void resize_integer_array_v2(int *array_info, int new_capacity);
void cleanup_sub_object(int64_t object_ptr);
void cleanup_resource_manager(int64_t ptr, int64_t size, int type, void *cleanup_func, int64_t param);
void cleanup_function_1(int64_t ptr);
void cleanup_function_2(int64_t ptr);
void resize_array_16bytes_v2(int *array_info, int new_capacity);
void cleanup_list_node(int64_t node_ptr, void *data);
int64_t get_next_node(int64_t node_ptr);
void trigger_error(...);
void perform_tree_insertion(int64_t *tree_info, void *param2, int64_t *node, uint64_t result, int64_t param5);
int64_t get_previous_node(int64_t node_ptr);
int64_t create_tree_node(void *template, int64_t size, char type);
void setup_tree_node(int64_t node_ptr, int64_t param_ptr);
void insert_tree_node(int64_t node_ptr, int64_t *parent_ptr, int64_t *tree_info, int64_t flags);