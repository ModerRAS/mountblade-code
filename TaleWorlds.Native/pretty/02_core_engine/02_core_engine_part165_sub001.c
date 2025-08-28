#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part165_sub001.c - 核心引擎内存管理和数据结构操作模块
// 本模块包含29个函数，主要用于内存分配、数据结构操作和容器管理

// 全局变量和常量定义
extern longlong* _DAT_180c8ed18;  // 内存分配器实例
extern longlong _DAT_180c8aa00;    // 默认数据模板
extern uint64_t global_state_3456_ptr;    // 虚函数表指针
extern uint64_t global_state_720_ptr;    // 空对象引用

/**
 * 复制数据块到目标缓冲区
 * @param param_1 上下文参数
 * @param param_2 上下文参数  
 * @param param_3 源数据指针
 */
void copy_data_block(uint64_t param_1, uint64_t param_2, int32_t *param_3)
{
    int32_t data_value;
    longlong copy_count;
    longlong source_data;
    longlong target_buffer;
    int32_t *target_ptr;
    
    if (source_data != 0) {
        data_value = *param_3;
        for (copy_count = source_data; copy_count != 0; copy_count = copy_count + -1) {
            *target_ptr = data_value;
            target_ptr = target_ptr + 1;
        }
        target_ptr = *(int32_t **)(target_buffer + 8);
    }
    *(int32_t **)(target_buffer + 8) = target_ptr + source_data;
    return;
}

/**
 * 调整动态数组容量
 * @param array_ptr 数组指针
 * @param new_size_ptr 新大小指针
 * @return 调整后的数组指针
 */
longlong* resize_dynamic_array(longlong *array_ptr, longlong *new_size_ptr)
{
    longlong old_start;
    longlong new_start;
    longlong new_end;
    longlong old_end;
    ulonglong required_size;
    ulonglong available_size;
    longlong new_buffer;
    
    if (array_ptr != new_size_ptr) {
        old_start = *array_ptr;
        new_start = *new_size_ptr;
        new_end = new_size_ptr[1];
        required_size = new_end - new_start;
        available_size = required_size >> 5;
        
        // 检查是否需要重新分配内存
        if ((ulonglong)(array_ptr[2] - old_start >> 5) < available_size) {
            if (available_size == 0) {
                new_buffer = 0;
            } else {
                new_buffer = allocate_memory(_DAT_180c8ed18, available_size << 5, (char)array_ptr[3]);
            }
            
            // 复制现有数据
            if (new_start != new_end) {
                memmove(new_buffer, new_start, required_size);
            }
            
            // 释放旧内存
            if (*array_ptr != 0) {
                release_memory();
            }
            
            *array_ptr = new_buffer;
            new_buffer = available_size * 0x20 + new_buffer;
            array_ptr[2] = new_buffer;
        } else {
            // 使用现有容量
            new_buffer = array_ptr[1];
            available_size = new_buffer - old_start >> 5;
            
            if (available_size <= required_size) {
                if (new_start == new_end) {
                    array_ptr[1] = old_start;
                    return array_ptr;
                }
                memmove(old_start, new_start, required_size);
            }
            
            required_size = available_size * 0x20 + new_start;
            if (new_start != required_size) {
                memmove(old_start, new_start);
            }
            
            if (required_size != new_end) {
                memmove(new_buffer, required_size, new_end - required_size);
            }
        }
        
        array_ptr[1] = new_buffer;
    }
    
    return array_ptr;
}

/**
 * 在指定位置插入数据块
 * @param insert_pos 插入位置
 * @param data_ptr 数据指针
 */
void insert_data_block(longlong insert_pos, longlong *data_ptr)
{
    longlong data_start;
    longlong data_end;
    longlong available_space;
    longlong new_buffer;
    ulonglong required_size;
    ulonglong available_capacity;
    
    data_start = *data_ptr;
    data_end = data_ptr[1];
    required_size = data_end - data_start;
    available_capacity = required_size >> 5;
    
    if ((ulonglong)(available_space - insert_pos >> 5) < available_capacity) {
        if (available_capacity == 0) {
            new_buffer = 0;
        } else {
            new_buffer = allocate_memory(_DAT_180c8ed18, available_capacity << 5, (char)data_ptr[3]);
        }
        
        if (data_start != data_end) {
            memmove(new_buffer, data_start, required_size);
        }
        
        if (*data_ptr != 0) {
            release_memory();
        }
        
        *data_ptr = new_buffer;
        new_buffer = available_capacity * 0x20 + new_buffer;
        data_ptr[2] = new_buffer;
    } else {
        new_buffer = data_ptr[1];
        available_capacity = new_buffer - insert_pos >> 5;
        
        if (available_capacity <= required_size) {
            if (data_start == data_end) {
                data_ptr[1] = insert_pos;
                return;
            }
            memmove(insert_pos, data_start, required_size);
        }
        
        required_size = available_capacity * 0x20 + data_start;
        if (data_start != required_size) {
            memmove(insert_pos, data_start);
        }
        
        if (required_size != data_end) {
            memmove(new_buffer, required_size, data_end - required_size);
        }
    }
    
    data_ptr[1] = new_buffer;
    return;
}

/**
 * 重新分配容器内存
 * @param container_ptr 容器指针
 */
void reallocate_container_memory(void)
{
    longlong new_buffer;
    longlong *container_data;
    longlong old_capacity;
    longlong new_capacity;
    
    if (new_capacity == 0) {
        new_buffer = 0;
    } else {
        new_buffer = allocate_memory(_DAT_180c8ed18, new_capacity << 5, (char)container_data[3]);
    }
    
    if (old_capacity != new_capacity) {
        memmove(new_buffer);
    }
    
    if (*container_data != 0) {
        release_memory();
    }
    
    *container_data = new_buffer;
    new_buffer = new_capacity * 0x20 + new_buffer;
    container_data[2] = new_buffer;
    container_data[1] = new_buffer;
    return;
}

/**
 * 从容器中移除指定范围的元素
 * @param remove_start 移除起始位置
 * @param container_ptr 容器指针
 */
void remove_elements_from_container(longlong remove_start, longlong *container_ptr)
{
    longlong buffer_end;
    longlong remove_count;
    longlong available_space;
    longlong new_buffer;
    
    buffer_end = *(longlong *)(container_ptr + 8);
    remove_count = buffer_end - remove_start >> 5;
    
    if (remove_count < available_space) {
        new_buffer = remove_count * 0x20 + old_position;
        if (old_position != new_buffer) {
            memmove();
        }
        
        if (new_buffer != buffer_end) {
            memmove(buffer_end, new_buffer, buffer_end - new_buffer);
        }
        
        *(longlong *)(container_ptr + 8) = buffer_end;
    } else {
        if (old_position != buffer_end) {
            memmove();
        }
        *(longlong *)(container_ptr + 8) = remove_start;
    }
    
    return;
}

/**
 * 空操作函数 - 占位符
 */
void empty_operation(void)
{
    return;
}

/**
 * 清理容器中的所有元素
 * @param container_ptr 容器指针
 */
void clear_container_elements(longlong *container_ptr)
{
    longlong *current_pos;
    longlong *end_pos;
    
    current_pos = (longlong *)container_ptr[1];
    end_pos = (longlong *)*container_ptr;
    
    while (true) {
        if (end_pos == current_pos) {
            if (*container_ptr != 0) {
                release_memory();
            }
            return;
        }
        
        if (*end_pos != 0) {
            release_memory();
        }
        
        *end_pos = 0;
        if (end_pos[3] != 0) break;
        end_pos = end_pos + 7;
    }
    
    release_memory();
}

/**
 * 调整容器大小
 * @param container_ptr 容器指针
 * @param new_size 新大小
 */
void resize_container(longlong *container_ptr, ulonglong new_size)
{
    longlong *current_end;
    ulonglong current_size;
    longlong *new_end;
    longlong size_diff;
    longlong start_pos;
    
    current_end = (longlong *)container_ptr[1];
    start_pos = *container_ptr;
    current_size = ((longlong)current_end - start_pos) / 0x38;
    
    if (current_size < new_size) {
        size_diff = new_size - current_size;
        expand_container(container_ptr, size_diff, (longlong)current_end - start_pos, size_diff, 0xfffffffffffffffe);
    } else {
        new_end = (longlong *)(new_size * 0x38 + start_pos);
        if (new_end != current_end) {
            do {
                if (*new_end != 0) {
                    release_memory();
                }
                *new_end = 0;
                if (new_end[3] != 0) {
                    release_memory();
                }
                new_end = new_end + 7;
            } while (new_end != current_end);
            start_pos = *container_ptr;
        }
        container_ptr[1] = new_size * 0x38 + start_pos;
    }
    
    return;
}

/**
 * 释放容器资源
 * @param container_ptr 容器指针
 */
void free_container_resources(longlong *container_ptr)
{
    longlong current_pos;
    longlong end_pos;
    
    end_pos = container_ptr[1];
    for (current_pos = *container_ptr; current_pos != end_pos; current_pos = current_pos + 0x88) {
        cleanup_element(current_pos);
    }
    
    if (*container_ptr == 0) {
        return;
    }
    
    release_memory();
}

/**
 * 销毁容器元素
 * @param container_ptr 容器指针
 */
void destroy_container_elements(longlong *container_ptr)
{
    longlong current_pos;
    longlong end_pos;
    
    end_pos = container_ptr[1];
    for (current_pos = *container_ptr; current_pos != end_pos; current_pos = current_pos + 0x60) {
        destroy_element(current_pos);
    }
    
    if (*container_ptr == 0) {
        return;
    }
    
    release_memory();
}

/**
 * 重置容器状态
 * @param container_ptr 容器指针
 */
void reset_container_state(longlong *container_ptr)
{
    longlong current_pos;
    longlong end_pos;
    
    end_pos = container_ptr[1];
    for (current_pos = *container_ptr; current_pos != end_pos; current_pos = current_pos + 0x48) {
        *(uint64_t *)(current_pos + 0x28) = &global_state_3456_ptr;
        if (*(longlong *)(current_pos + 0x30) != 0) {
            release_memory();
        }
        *(uint64_t *)(current_pos + 0x30) = 0;
        *(int32_t *)(current_pos + 0x40) = 0;
        *(uint64_t *)(current_pos + 0x28) = &global_state_720_ptr;
    }
    
    if (*container_ptr != 0) {
        release_memory();
    }
    
    return;
}

/**
 * 清理智能指针容器
 * @param container_ptr 容器指针
 */
void cleanup_smart_pointer_container(longlong *container_ptr)
{
    longlong current_pos;
    longlong end_pos;
    
    end_pos = container_ptr[1];
    for (current_pos = *container_ptr; current_pos != end_pos; current_pos = current_pos + 0x38) {
        *(uint64_t *)(current_pos + 0x18) = &global_state_3456_ptr;
        if (*(longlong *)(current_pos + 0x20) != 0) {
            release_memory();
        }
        *(uint64_t *)(current_pos + 0x20) = 0;
        *(int32_t *)(current_pos + 0x30) = 0;
        *(uint64_t *)(current_pos + 0x18) = &global_state_720_ptr;
    }
    
    if (*container_ptr != 0) {
        release_memory();
    }
    
    return;
}

/**
 * 析构智能指针数组
 * @param array_ptr 数组指针
 */
void destruct_smart_pointer_array(longlong *array_ptr)
{
    if (array_ptr == (longlong *)0x0) {
        return;
    }
    
    array_ptr[0xc] = (longlong)&global_state_720_ptr;
    free_container_resources();
    
    if (array_ptr[4] != 0) {
        release_memory();
    }
    
    if (*array_ptr != 0) {
        release_memory();
    }
    
    release_memory(array_ptr);
}

/**
 * 析构容器对象
 * @param container_ptr 容器指针
 */
void destruct_container_object(longlong *container_ptr)
{
    if (container_ptr == (longlong *)0x0) {
        return;
    }
    
    clear_container_elements();
    
    if (container_ptr[4] != 0) {
        release_memory();
    }
    
    if (*container_ptr != 0) {
        release_memory();
    }
    
    release_memory(container_ptr);
}

/**
 * 初始化数组对象
 * @param array_ptr 数组指针
 * @param context_ptr 上下文指针
 * @return 初始化后的数组指针
 */
uint64_t* initialize_array_object(uint64_t *array_ptr, longlong context_ptr)
{
    longlong context_data;
    uint64_t allocation_flag;
    int8_t temp_buffer[40];
    
    allocation_flag = 0xfffffffffffffffe;
    context_data = initialize_context(temp_buffer);
    
    array_ptr[2] = array_element_destructor;
    array_ptr[3] = &array_vtable;
    
    allocation_flag = allocate_memory_with_flags(_DAT_180c8ed18, 0x28, 8, default_allocator, allocation_flag);
    initialize_context(allocation_flag, context_data);
    
    *array_ptr = allocation_flag;
    
    if (*(code **)(context_data + 0x18) != (code *)0x0) {
        (*(code **)(context_data + 0x18))(context_data + 8, 0, 0);
    }
    
    if (*(code **)(context_ptr + 0x18) != (code *)0x0) {
        (*(code **)(context_ptr + 0x18))(context_ptr + 8, 0, 0);
    }
    
    return array_ptr;
}

/**
 * 调整三元组数组容量
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 */
void resize_triple_array(longlong *array_ptr, ulonglong new_capacity)
{
    longlong start_pos;
    int32_t *new_buffer;
    int32_t *copy_ptr;
    longlong end_pos;
    longlong current_pos;
    
    start_pos = *array_ptr;
    
    if ((ulonglong)((array_ptr[2] - start_pos) / 0xc) < new_capacity) {
        if (new_capacity == 0) {
            new_buffer = (int32_t *)0x0;
        } else {
            new_buffer = (int32_t *)allocate_memory(_DAT_180c8ed18, new_capacity * 0xc, (char)array_ptr[3]);
            start_pos = *array_ptr;
        }
        
        end_pos = array_ptr[1];
        copy_ptr = new_buffer;
        
        if (start_pos != end_pos) {
            start_pos = start_pos - (longlong)new_buffer;
            do {
                *copy_ptr = *(int32_t *)(start_pos + (longlong)copy_ptr);
                copy_ptr[1] = *(int32_t *)(start_pos + 4 + (longlong)copy_ptr);
                copy_ptr[2] = *(int32_t *)(start_pos + 8 + (longlong)copy_ptr);
                copy_ptr = copy_ptr + 3;
            } while (start_pos + (longlong)copy_ptr != end_pos);
            start_pos = *array_ptr;
        }
        
        if (start_pos != 0) {
            release_memory(start_pos);
        }
        
        *array_ptr = (longlong)new_buffer;
        array_ptr[1] = (longlong)copy_ptr;
        array_ptr[2] = (longlong)(new_buffer + new_capacity * 3);
    }
    
    return;
}

/**
 * 批量复制三元组数据
 * @param dest_ptr 目标指针
 * @param src_ptr 源指针
 * @param count 复制数量
 */
void batch_copy_triples(longlong dest_ptr, uint64_t src_ptr, uint64_t count, longlong context)
{
    longlong start_pos;
    int32_t *dest_buffer;
    int32_t *src_buffer;
    longlong end_pos;
    longlong current_pos;
    
    if (count == 0) {
        dest_buffer = (int32_t *)0x0;
    } else {
        dest_buffer = (int32_t *)allocate_memory(_DAT_180c8ed18, count * 0xc, *(int8_t *)(dest_ptr + 0x18));
        context = *src_ptr;
    }
    
    end_pos = src_ptr[1];
    src_buffer = dest_buffer;
    
    if (context != end_pos) {
        context = context - (longlong)dest_buffer;
        do {
            *src_buffer = *(int32_t *)(context + (longlong)src_buffer);
            src_buffer[1] = *(int32_t *)(context + 4 + (longlong)src_buffer);
            src_buffer[2] = *(int32_t *)(context + 8 + (longlong)src_buffer);
            src_buffer = src_buffer + 3;
        } while (context + (longlong)src_buffer != end_pos);
        context = *src_ptr;
    }
    
    if (context != 0) {
        release_memory(context);
    }
    
    *src_ptr = (longlong)dest_buffer;
    src_ptr[1] = (longlong)src_buffer;
    src_ptr[2] = (longlong)(dest_buffer + count * 3);
    return;
}

/**
 * 空操作函数 - 占位符
 */
void placeholder_function(void)
{
    return;
}

/**
 * 调整整数数组容量
 * @param array_ptr 数组指针
 * @param new_size 新大小
 */
void resize_integer_array(longlong *array_ptr, ulonglong new_size)
{
    longlong start_pos;
    longlong new_buffer;
    longlong end_pos;
    
    start_pos = *array_ptr;
    
    if ((ulonglong)(array_ptr[2] - start_pos >> 2) < new_size) {
        if (new_size == 0) {
            new_buffer = 0;
        } else {
            new_buffer = allocate_memory(_DAT_180c8ed18, new_size * 4, (char)array_ptr[3]);
            start_pos = *array_ptr;
        }
        
        if (start_pos != array_ptr[1]) {
            memmove(new_buffer, start_pos, array_ptr[1] - start_pos);
        }
        
        if (start_pos != 0) {
            release_memory();
        }
        
        *array_ptr = new_buffer;
        array_ptr[1] = new_buffer;
        array_ptr[2] = new_buffer + new_size * 4;
    }
    
    return;
}

/**
 * 移动整数数组数据
 * @param dest_pos 目标位置
 * @param src_pos 源位置
 */
void move_integer_array_data(longlong dest_pos, longlong src_pos)
{
    longlong new_buffer;
    longlong *array_ptr;
    longlong array_size;
    
    if (src_pos == 0) {
        new_buffer = 0;
    } else {
        new_buffer = allocate_memory(_DAT_180c8ed18, src_pos * 4, (char)array_ptr[3]);
        dest_pos = *array_ptr;
    }
    
    if (dest_pos == array_ptr[1]) {
        if (dest_pos != 0) {
            release_memory();
        }
        *array_ptr = new_buffer;
        array_ptr[1] = new_buffer;
        array_ptr[2] = new_buffer + array_size * 4;
        return;
    }
    
    memmove(new_buffer, dest_pos, array_ptr[1] - dest_pos);
}

/**
 * 空操作函数 - 占位符
 */
void another_placeholder_function(void)
{
    return;
}

/**
 * 对象复制构造函数
 * @param dest_ptr 目标对象指针
 * @param src_ptr 源对象指针
 * @return 目标对象指针
 */
longlong copy_construct_object(longlong dest_ptr, longlong src_ptr)
{
    *(uint64_t *)(dest_ptr + 0x10) = 0;
    *(code **)(dest_ptr + 0x18) = _guard_check_icall;
    
    if (dest_ptr != src_ptr) {
        perform_object_copy();
    }
    
    *(int32_t *)(dest_ptr + 0x20) = *(int32_t *)(src_ptr + 0x20);
    *(uint64_t *)(dest_ptr + 0x28) = *(uint64_t *)(src_ptr + 0x28);
    *(uint64_t *)(dest_ptr + 0x30) = *(uint64_t *)(src_ptr + 0x30);
    
    return dest_ptr;
}

/**
 * 调整对象数组容量
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 */
void resize_object_array(longlong *array_ptr, ulonglong new_capacity)
{
    longlong template_data;
    longlong current_end;
    longlong current_size;
    ulonglong required_capacity;
    uint64_t *object_ptr;
    longlong start_pos;
    longlong new_start;
    ulonglong allocated_capacity;
    
    template_data = _DAT_180c8aa00;
    current_end = array_ptr[1];
    
    if (new_capacity <= (ulonglong)((array_ptr[2] - current_end) / 0x30)) {
        if (new_capacity != 0) {
            object_ptr = (uint64_t *)(current_end + 0x28);
            required_capacity = new_capacity;
            do {
                *object_ptr = *(uint64_t *)(template_data + 0x28);
                object_ptr = object_ptr + 6;
                required_capacity = required_capacity - 1;
            } while (required_capacity != 0);
            current_end = array_ptr[1];
        }
        array_ptr[1] = new_capacity * 0x30 + current_end;
        return;
    }
    
    start_pos = *array_ptr;
    current_size = (current_end - start_pos) / 0x30;
    allocated_capacity = current_size * 2;
    
    if (current_size == 0) {
        allocated_capacity = 1;
    }
    
    if (allocated_capacity < current_size + new_capacity) {
        allocated_capacity = current_size + new_capacity;
    }
    
    if (allocated_capacity == 0) {
        current_size = 0;
    } else {
        current_size = allocate_memory(_DAT_180c8ed18, allocated_capacity * 0x30, (char)array_ptr[3]);
        start_pos = *array_ptr;
        current_end = array_ptr[1];
    }
    
    template_data = _DAT_180c8aa00;
    
    if (start_pos == current_end) {
        if (new_capacity != 0) {
            object_ptr = (uint64_t *)(current_size + 0x28);
            required_capacity = new_capacity;
            do {
                *object_ptr = *(uint64_t *)(template_data + 0x28);
                object_ptr = object_ptr + 6;
                required_capacity = required_capacity - 1;
            } while (required_capacity != 0);
        }
        
        if (*array_ptr != 0) {
            release_memory();
        }
        
        *array_ptr = current_size;
        array_ptr[2] = allocated_capacity * 0x30 + current_size;
        array_ptr[1] = new_capacity * 0x30 + current_size;
        return;
    }
    
    memmove(current_size, start_pos, current_end - start_pos);
}

/**
 * 扩展对象数组
 * @param array_ptr 数组指针
 * @param extension_size 扩展大小
 */
void extend_object_array(longlong array_ptr, uint64_t base_ptr, uint64_t context_ptr, longlong extension_size)
{
    longlong array_start;
    longlong base_size;
    longlong current_size;
    longlong new_size;
    uint64_t *object_ptr;
    longlong *array_data;
    longlong array_end;
    ulonglong required_capacity;
    longlong insert_count;
    
    new_size = calculate_size_difference(base_size, array_ptr - extension_size);
    new_size = (new_size >> 3) - (new_size >> 0x3f);
    required_capacity = new_size * 2;
    
    if (new_size == 0) {
        required_capacity = 1;
    }
    
    if (required_capacity < (ulonglong)(new_size + insert_count)) {
        required_capacity = new_size + insert_count;
    }
    
    if (required_capacity == 0) {
        new_size = 0;
    } else {
        new_size = allocate_memory(_DAT_180c8ed18, required_capacity * 0x30, (char)array_data[3]);
        extension_size = *array_data;
        array_end = array_data[1];
    }
    
    array_start = _DAT_180c8aa00;
    
    if (extension_size != array_end) {
        memmove(new_size, extension_size, array_end - extension_size);
    }
    
    if (insert_count != 0) {
        object_ptr = (uint64_t *)(new_size + 0x28);
        current_size = insert_count;
        do {
            *object_ptr = *(uint64_t *)(array_start + 0x28);
            object_ptr = object_ptr + 6;
            current_size = current_size + -1;
        } while (current_size != 0);
    }
    
    if (*array_data != 0) {
        release_memory();
    }
    
    *array_data = new_size;
    array_data[2] = required_capacity * 0x30 + new_size;
    array_data[1] = insert_count * 0x30 + new_size;
    return;
}

/**
 * 在对象数组末尾添加元素
 * @param array_ptr 数组指针
 */
void append_to_object_array(void)
{
    longlong template_data;
    longlong current_size;
    uint64_t *object_ptr;
    longlong array_offset;
    longlong array_end;
    longlong element_count;
    
    template_data = _DAT_180c8aa00;
    
    if (element_count != 0) {
        object_ptr = (uint64_t *)(array_end + 0x28);
        current_size = element_count;
        do {
            *object_ptr = *(uint64_t *)(template_data + 0x28);
            object_ptr = object_ptr + 6;
            current_size = current_size + -1;
        } while (current_size != 0);
        array_end = *(longlong *)(array_offset + 8);
    }
    
    *(longlong *)(array_offset + 8) = element_count * 0x30 + array_end;
    return;
}

/**
 * 调整结构体数组容量
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 */
void resize_struct_array(longlong *array_ptr, ulonglong new_capacity)
{
    longlong template_data;
    longlong current_end;
    longlong current_size;
    ulonglong required_capacity;
    longlong new_start;
    uint64_t *struct_ptr;
    ulonglong allocated_capacity;
    longlong start_pos;
    
    template_data = _DAT_180c8aa00;
    current_end = array_ptr[1];
    
    if (new_capacity <= (ulonglong)(array_ptr[2] - current_end >> 5)) {
        if (new_capacity != 0) {
            struct_ptr = (uint64_t *)(current_end + 0x18);
            required_capacity = new_capacity;
            do {
                *struct_ptr = *(uint64_t *)(template_data + 0x28);
                struct_ptr = struct_ptr + 4;
                required_capacity = required_capacity - 1;
            } while (required_capacity != 0);
            current_end = array_ptr[1];
        }
        array_ptr[1] = new_capacity * 0x20 + current_end;
        return;
    }
    
    start_pos = *array_ptr;
    current_size = current_end - start_pos >> 5;
    required_capacity = current_size * 2;
    
    if (current_size == 0) {
        required_capacity = 1;
    }
    
    if (required_capacity < current_size + new_capacity) {
        required_capacity = current_size + new_capacity;
    }
    
    if (required_capacity == 0) {
        current_size = 0;
    } else {
        current_size = allocate_memory(_DAT_180c8ed18, required_capacity << 5, (char)array_ptr[3]);
        start_pos = *array_ptr;
        current_end = array_ptr[1];
    }
    
    template_data = _DAT_180c8aa00;
    
    if (start_pos == current_end) {
        if (new_capacity != 0) {
            struct_ptr = (uint64_t *)(current_size + 0x18);
            allocated_capacity = new_capacity;
            do {
                *struct_ptr = *(uint64_t *)(template_data + 0x28);
                struct_ptr = struct_ptr + 4;
                allocated_capacity = allocated_capacity - 1;
            } while (allocated_capacity != 0);
        }
        
        if (*array_ptr != 0) {
            release_memory();
        }
        
        *array_ptr = current_size;
        array_ptr[2] = required_capacity * 0x20 + current_size;
        array_ptr[1] = new_capacity * 0x20 + current_size;
        return;
    }
    
    memmove(current_size, start_pos, current_end - start_pos);
}

/**
 * 扩展结构体数组
 * @param array_ptr 数组指针
 * @param extension_size 扩展大小
 */
void extend_struct_array(longlong array_ptr, uint64_t base_ptr, uint64_t context_ptr, longlong extension_size)
{
    longlong base_size;
    longlong current_size;
    longlong new_size;
    uint64_t *struct_ptr;
    longlong array_data;
    ulonglong required_capacity;
    longlong insert_count;
    longlong array_start;
    longlong array_end;
    
    current_size = base_size >> 5;
    required_capacity = current_size * 2;
    
    if (current_size == 0) {
        required_capacity = 1;
    }
    
    if (required_capacity < (ulonglong)(current_size + extension_size)) {
        required_capacity = current_size + extension_size;
    }
    
    if (required_capacity == 0) {
        current_size = 0;
    } else {
        current_size = allocate_memory(_DAT_180c8ed18, required_capacity << 5, *(int8_t *)(array_ptr + 0x18));
        extension_size = *array_data;
        array_end = array_data[1];
    }
    
    array_start = _DAT_180c8aa00;
    
    if (extension_size != array_end) {
        memmove(current_size, extension_size, array_end - extension_size);
    }
    
    if (extension_size != 0) {
        struct_ptr = (uint64_t *)(current_size + 0x18);
        new_size = extension_size;
        do {
            *struct_ptr = *(uint64_t *)(array_start + 0x28);
            struct_ptr = struct_ptr + 4;
            new_size = new_size + -1;
        } while (new_size != 0);
    }
    
    if (*array_data != 0) {
        release_memory();
    }
    
    *array_data = current_size;
    array_data[2] = required_capacity * 0x20 + current_size;
    array_data[1] = extension_size * 0x20 + current_size;
    return;
}

/**
 * 在结构体数组末尾添加元素
 * @param array_ptr 数组指针
 */
void append_to_struct_array(void)
{
    longlong template_data;
    longlong current_size;
    uint64_t *struct_ptr;
    longlong array_offset;
    longlong array_end;
    longlong element_count;
    
    template_data = _DAT_180c8aa00;
    
    if (element_count != 0) {
        struct_ptr = (uint64_t *)(array_end + 0x18);
        current_size = element_count;
        do {
            *struct_ptr = *(uint64_t *)(template_data + 0x28);
            struct_ptr = struct_ptr + 4;
            current_size = current_size + -1;
        } while (current_size != 0);
        array_end = *(longlong *)(array_offset + 8);
    }
    
    *(longlong *)(array_offset + 8) = element_count * 0x20 + array_end;
    return;
}

/**
 * 扩展复合容器
 * @param container_ptr 容器指针
 * @param extension_size 扩展大小
 */
void expand_compound_container(uint64_t *container_ptr, ulonglong extension_size)
{
    uint element_flags;
    uint64_t element_ptr;
    longlong *current_element;
    longlong element_start;
    longlong *element_end;
    longlong *new_element;
    ulonglong current_capacity;
    longlong *new_container;
    ulonglong new_capacity;
    longlong *temp_element;
    longlong element_offset;
    uint64_t *sub_element_ptr;
    ulonglong sub_element_count;
    longlong *sub_element_start;
    longlong sub_element_size;
    
    element_end = (longlong *)container_ptr[1];
    
    if ((ulonglong)((container_ptr[2] - (longlong)element_end) / 0x38) < extension_size) {
        element_start = (longlong *)*container_ptr;
        current_capacity = ((longlong)element_end - (longlong)element_start) / 0x38;
        new_capacity = current_capacity * 2;
        
        if (current_capacity == 0) {
            new_capacity = 1;
        }
        
        if (new_capacity < current_capacity + extension_size) {
            new_capacity = current_capacity + extension_size;
        }
        
        current_element = (longlong *)0x0;
        
        if (new_capacity != 0) {
            current_element = (longlong *)allocate_memory(_DAT_180c8ed18, new_capacity * 0x38, *(int8_t *)(container_ptr + 3), 0x4924924924924925, 0xfffffffffffffffe);
            element_end = (longlong *)container_ptr[1];
            element_start = (longlong *)*container_ptr;
        }
        
        new_container = current_element;
        
        if (element_start != element_end) {
            element_offset = (longlong)current_element - (longlong)element_start;
            element_start = element_start + 4;
            
            do {
                *new_container = element_start[-4];
                *(longlong *)(element_offset + -0x18 + (longlong)element_start) = element_start[-3];
                *(int *)(element_offset + -0x10 + (longlong)element_start) = (int)element_start[-2];
                sub_element_ptr = (uint64_t *)((longlong)element_start + element_offset + -8);
                sub_element_size = *element_start - element_start[-1] >> 3;
                element_flags = *(uint *)(element_start + 2);
                *(uint *)(element_offset + 0x10 + (longlong)element_start) = element_flags;
                temp_element = (longlong *)0x0;
                
                if (sub_element_size != 0) {
                    temp_element = (longlong *)allocate_memory(_DAT_180c8ed18, sub_element_size * 8, element_flags & 0xff);
                }
                
                *sub_element_ptr = temp_element;
                *(longlong **)(element_offset + (longlong)element_start) = temp_element;
                *(longlong **)(element_offset + 8 + (longlong)element_start) = temp_element + sub_element_size;
                element_ptr = *sub_element_ptr;
                sub_element_size = element_start[-1];
                
                if (sub_element_size != *element_start) {
                    memmove(element_ptr, sub_element_size, *element_start - sub_element_size);
                }
                
                *(uint64_t *)(element_offset + (longlong)element_start) = element_ptr;
                new_container = new_container + 7;
                temp_element = element_start + 3;
                element_start = element_start + 7;
            } while (temp_element != element_end);
        }
        
        if (extension_size != 0) {
            element_end = new_container + 4;
            sub_element_count = extension_size;
            do {
                element_end[-4] = 0;
                element_end[-3] = 0;
                element_end[-2] = 0;
                *(int32_t *)((longlong)element_end + 0x14) = 0;
                element_end[-1] = 0;
                *element_end = 0;
                element_end[1] = 0;
                *(int32_t *)(element_end + 2) = 3;
                element_end = element_end + 7;
                sub_element_count = sub_element_count - 1;
            } while (sub_element_count != 0);
        }
        
        element_end = (longlong *)container_ptr[1];
        element_start = (longlong *)*container_ptr;
        
        if (element_start != element_end) {
            do {
                if (*element_start != 0) {
                    release_memory();
                }
                *element_start = 0;
                if (element_start[3] != 0) {
                    release_memory();
                }
                element_start = element_start + 7;
            } while (element_start != element_end);
            element_start = (longlong *)*container_ptr;
        }
        
        if (element_start != (longlong *)0x0) {
            release_memory(element_start);
        }
        
        *container_ptr = current_element;
        container_ptr[1] = new_container + extension_size * 7;
        container_ptr[2] = current_element + new_capacity * 7;
    } else {
        if (extension_size != 0) {
            element_start = element_end + 4;
            new_capacity = extension_size;
            do {
                *element_end = 0;
                element_end[1] = 0;
                element_end[2] = 0;
                element_end[3] = 0;
                element_end[4] = 0;
                element_end[5] = 0;
                element_end[6] = 0;
                element_start[-1] = 0;
                *element_start = 0;
                element_start[1] = 0;
                *(int32_t *)(element_start + 2) = 3;
                element_end = element_end + 7;
                element_start = element_start + 7;
                new_capacity = new_capacity - 1;
            } while (new_capacity != 0);
            element_end = (longlong *)container_ptr[1];
        }
        container_ptr[1] = element_end + extension_size * 7;
    }
    
    return;
}

/**
 * 在指定范围内插入元素
 * @param array_ptr 数组指针
 * @param range_start 范围起始
 * @param range_end 范围结束
 */
void insert_elements_in_range(longlong *array_ptr, longlong range_start, longlong range_end)
{
    ulonglong range_size;
    ulonglong current_capacity;
    longlong new_buffer;
    longlong temp_buffer;
    longlong current_start;
    longlong current_end;
    longlong element_size;
    
    range_size = (range_end - range_start) / 0x88;
    
    if ((ulonglong)((array_ptr[2] - *array_ptr) / 0x88) < range_size) {
        if (range_size == 0) {
            new_buffer = 0;
        } else {
            new_buffer = allocate_memory(_DAT_180c8ed18, range_size * 0x88, (char)array_ptr[3]);
        }
        
        copy_elements(&temp_buffer, range_start, range_end, new_buffer);
        
        current_end = array_ptr[1];
        current_start = *array_ptr;
        
        if (current_start != current_end) {
            do {
                cleanup_element(current_start);
                current_start = current_start + 0x88;
            } while (current_start != current_end);
            current_start = *array_ptr;
        }
        
        if (current_start != 0) {
            release_memory(current_start);
        }
        
        *array_ptr = new_buffer;
        new_buffer = range_size * 0x88 + new_buffer;
        array_ptr[1] = new_buffer;
        array_ptr[2] = new_buffer;
    } else {
        current_capacity = (array_ptr[1] - *array_ptr) / 0x88;
        
        if (current_capacity < range_size) {
            new_buffer = current_capacity * 0x88 + range_start;
            move_elements(range_start, new_buffer);
            copy_elements(&temp_buffer, new_buffer, range_end, array_ptr[1]);
            array_ptr[1] = temp_buffer;
        } else {
            current_start = move_elements(range_start, range_end);
            new_buffer = array_ptr[1];
            
            for (element_size = current_start; element_size != new_buffer; element_size = element_size + 0x88) {
                cleanup_element(element_size);
            }
            
            array_ptr[1] = current_start;
        }
    }
    
    return;
}

/**
 * 重新分配元素数组
 * @param array_ptr 数组指针
 */
void reallocate_element_array(void)
{
    longlong new_buffer;
    longlong current_start;
    longlong current_end;
    longlong element_size;
    longlong array_capacity;
    longlong *array_data;
    
    if (array_capacity == 0) {
        current_start = 0;
    } else {
        current_start = allocate_memory(_DAT_180c8ed18, array_capacity * 0x88, (char)array_data[3]);
    }
    
    copy_elements(&stack0x00000050);
    
    current_end = array_data[1];
    current_start = *array_data;
    
    if (current_start != current_end) {
        do {
            cleanup_element(current_start);
            current_start = current_start + 0x88;
        } while (current_start != current_end);
        current_start = *array_data;
    }
    
    if (current_start != 0) {
        release_memory(current_start);
    }
    
    *array_data = current_start;
    current_start = array_capacity * 0x88 + current_start;
    array_data[1] = current_start;
    array_data[2] = current_start;
    return;
}

// 函数指针和外部引用声明
extern longlong allocate_memory(longlong*, ulonglong, char);
extern void release_memory(void);
extern void cleanup_element(longlong);
extern void destroy_element(longlong);
extern void initialize_context(void*, longlong);
extern longlong initialize_context(uint64_t*);
extern uint64_t allocate_memory_with_flags(longlong*, ulonglong, ulonglong, longlong, uint64_t);
extern void array_element_destructor(void);
extern uint64_t array_vtable;
extern code _guard_check_icall;
extern void perform_object_copy(void);
extern longlong calculate_size_difference(longlong, longlong);
extern void copy_elements(void*, longlong, longlong, longlong);
extern void move_elements(longlong, longlong);