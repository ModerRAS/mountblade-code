#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part031.c - 渲染系统高级数据结构和缓存管理模块
// 包含16个核心函数，涵盖渲染数据结构操作、缓存管理、内存分配、哈希表处理和高级渲染数据管理等功能

/**
 * 渲染数据序列化函数
 * 将渲染对象数据序列化到输出缓冲区
 * 
 * @param render_obj 渲染对象指针
 * @param output_buf 输出缓冲区指针
 * @param param3 序列化参数3
 * @param param4 序列化参数4
 */
void serialize_rendering_data(int64_t *render_obj, int64_t *output_buf, uint64_t param3, uint64_t param4)
{
    uint64_t data_size;
    int32_t render_flags;
    int64_t data_offset;
    int item_count;
    uint64_t resource_handle;
    int32_t *buffer_ptr;
    int *counter_ptr;
    uint *uint_ptr;
    void *data_ptr;
    int8_t *str_ptr;
    int64_t string_len;
    int64_t *array_ptr;
    uint buffer_size;
    int item_index;
    int64_t array_size;
    uint64_t total_size;
    void *stack_data_ptr;
    int8_t *stack_str_ptr;
    uint stack_str_size;
    uint64_t stack_data_handle;
    
    // 获取渲染对象数据
    resource_handle = (**(code **)(*render_obj + 0x90))(render_obj, &stack_data_ptr, param3, param4, 0xfffffffffffffffe);
    System_QueueProcessor(output_buf, resource_handle);
    stack_data_ptr = &system_data_buffer_ptr;
    
    // 检查数据完整性
    if (stack_str_ptr != (int8_t *)0x0) {
        FUN_18064e900();
    }
    
    stack_str_ptr = (int8_t *)0x0;
    stack_data_handle = (uint64_t)stack_data_handle._4_4_ << 0x20;
    stack_data_ptr = &system_state_ptr;
    System_QueueProcessor(output_buf, render_obj + 0x3e);
    
    // 获取渲染标志
    render_flags = *(int32_t *)((int64_t)render_obj + 0x324);
    buffer_ptr = (int32_t *)output_buf[1];
    
    // 检查缓冲区空间
    if ((uint64_t)((*output_buf - (int64_t)buffer_ptr) + output_buf[2]) < 5) {
        System_BufferManager(output_buf, (int64_t)buffer_ptr + (4 - *output_buf));
        buffer_ptr = (int32_t *)output_buf[1];
    }
    
    *buffer_ptr = render_flags;
    buffer_ptr = (int32_t *)(output_buf[1] + 4);
    output_buf[1] = (int64_t)buffer_ptr;
    
    // 获取数据数组指针
    if ((void *)*render_obj == &unknown_var_9304_ptr) {
        array_ptr = render_obj + 0x66;
    }
    else {
        array_ptr = (int64_t *)(**(code **)((void *)*render_obj + 0x158))(render_obj);
        buffer_ptr = (int32_t *)output_buf[1];
    }
    
    // 序列化数据数组
    array_size = 4;
    do {
        data_offset = 4;
        do {
            string_len = *array_ptr;
            if ((uint64_t)((*output_buf - (int64_t)buffer_ptr) + output_buf[2]) < 5) {
                System_BufferManager(output_buf, (int64_t)buffer_ptr + (4 - *output_buf));
                buffer_ptr = (int32_t *)output_buf[1];
            }
            *buffer_ptr = (int)string_len;
            buffer_ptr = (int32_t *)(output_buf[1] + 4);
            output_buf[1] = (int64_t)buffer_ptr;
            array_ptr = (int64_t *)((int64_t)array_ptr + 4);
            data_offset = data_offset + -1;
        } while (data_offset != 0);
        array_size = array_size + -1;
    } while (array_size != 0);
    
    // 序列化布尔标志
    array_size = render_obj[0x77];
    if ((uint64_t)((*output_buf - (int64_t)buffer_ptr) + output_buf[2]) < 2) {
        System_BufferManager(output_buf, (int64_t)buffer_ptr + (1 - *output_buf));
        buffer_ptr = (int32_t *)output_buf[1];
    }
    *(bool *)buffer_ptr = array_size != 0;
    output_buf[1] = output_buf[1] + 1;
    counter_ptr = (int *)output_buf[1];
    
    if (array_size != 0) {
        System_QueueProcessor(output_buf, render_obj[0x77] + 0x10);
        counter_ptr = (int *)output_buf[1];
    }
    
    // 序列化范围数据
    array_size = render_obj[8];
    data_offset = render_obj[7];
    if ((uint64_t)((*output_buf - (int64_t)counter_ptr) + output_buf[2]) < 5) {
        System_BufferManager(output_buf, (int64_t)counter_ptr + (4 - *output_buf));
        counter_ptr = (int *)output_buf[1];
    }
    item_count = (int)(array_size - data_offset >> 4);
    *counter_ptr = item_count;
    output_buf[1] = output_buf[1] + 4;
    
    if (0 < item_count) {
        array_size = *(int64_t *)render_obj[7];
        System_QueueProcessor(output_buf, array_size + 0x10);
        array_size = FUN_180079430(array_size);
        stack_data_ptr = &system_data_buffer_ptr;
        stack_data_handle = 0;
        stack_str_ptr = (int8_t *)0x0;
        stack_str_size = 0;
        
        // 处理字符串数据
        FUN_1806277c0(&stack_data_ptr, *(int32_t *)(array_size + 0x10));
        if (*(int *)(array_size + 0x10) < 1) {
            if ((*(int64_t *)(array_size + 8) != 0) && (stack_str_size = 0, stack_str_ptr != (int8_t *)0x0)) {
                *stack_str_ptr = 0;
            }
            
            // 清理字符串数据
            while ((0 < (int)stack_str_size && (array_size = strstr(stack_str_ptr, &system_buffer_ff10), array_size != 0))) {
                item_index = 6;
                item_count = (int)array_size - (int)stack_str_ptr;
                if (stack_str_size < item_count + 6U) {
                    item_index = stack_str_size - item_count;
                }
                buffer_size = item_count + item_index;
                if (buffer_size < stack_str_size) {
                    data_offset = (int64_t)(int)buffer_size;
                    do {
                        stack_str_ptr[data_offset - item_index] = stack_str_ptr[data_offset];
                        buffer_size = buffer_size + 1;
                        data_offset = data_offset + 1;
                    } while (buffer_size < stack_str_size);
                }
                stack_str_size = stack_str_size - item_index;
                stack_str_ptr[stack_str_size] = 0;
            }
            
            buffer_size = stack_str_size;
            total_size = (uint64_t)stack_str_size;
            data_size = total_size + 4;
            uint_ptr = (uint *)output_buf[1];
            if ((uint64_t)((*output_buf - (int64_t)uint_ptr) + output_buf[2]) <= data_size) {
                System_BufferManager(output_buf, (int64_t)uint_ptr + (data_size - *output_buf));
                uint_ptr = (uint *)output_buf[1];
            }
            *uint_ptr = buffer_size;
            array_size = output_buf[1];
            output_buf[1] = array_size + 4;
            str_ptr = &system_buffer_ptr;
            if (stack_str_ptr != (int8_t *)0x0) {
                str_ptr = stack_str_ptr;
            }
            memcpy(array_size + 4, str_ptr, total_size);
        }
        
        data_ptr = &system_buffer_ptr;
        if (*(void **)(array_size + 8) != (void *)0x0) {
            data_ptr = *(void **)(array_size + 8);
        }
        memcpy(stack_str_ptr, data_ptr, (int64_t)(*(int *)(array_size + 0x10) + 1));
    }
}

/**
 * 渲染状态更新函数
 * 更新渲染对象的状态信息
 * 
 * @param render_ctx 渲染上下文指针
 * @param state_flag 状态标志
 */
void update_rendering_state(int64_t render_ctx, char state_flag)
{
    int64_t obj_ptr;
    byte state_byte;
    int obj_count;
    int64_t offset;
    int64_t *state_ptr;
    int64_t iter_count;
    int64_t *temp_ptr;
    int8_t state_array[8];
    int64_t context_handle;
    int32_t state_id;
    int64_t *stack_ptr;
    
    // 获取对象数量
    obj_count = (int)(*(int64_t *)(render_ctx + 0x40) - *(int64_t *)(render_ctx + 0x38) >> 4);
    iter_count = (int64_t)obj_count;
    
    if (0 < obj_count) {
        offset = 0;
        do {
            obj_ptr = *(int64_t *)(offset + *(int64_t *)(render_ctx + 0x38));
            
            // 检查状态是否需要更新
            if (*(char *)(obj_ptr + 0xf4) != state_flag) {
                if ((*(byte *)(obj_ptr + 0xfd) & 0x20) != 0) {
                    FUN_18007baa0(obj_ptr);
                    offset = 0;
                    do {
                        *(char *)(*(int64_t *)(obj_ptr + 0x1e0) + 0x14 + offset) = state_flag;
                        offset = offset + 0x18;
                    } while (offset < 0x180);
                }
                
                // 准备状态更新
                stack_ptr = (int64_t *)0x0;
                state_array[0] = 0;
                state_id = 1;
                context_handle = obj_ptr;
                FUN_18007f4c0(state_array);
                
                if (stack_ptr != (int64_t *)0x0) {
                    temp_ptr = stack_ptr;
                    if (state_flag == '\0') {
                    LAB_180283e1f:
                        stack_ptr = (int64_t *)0x0;
                        if (temp_ptr != (int64_t *)0x0) {
                            (**(code **)(*temp_ptr + 0x38))();
                        }
                    }
                    else if ((state_flag == '\x01') && ((*(byte *)(obj_ptr + 0xfd) & 0x20) != 0)) {
                        offset = *(int64_t *)(obj_ptr + 0x1b8);
                        state_byte = *(byte *)(offset + 0x38c);
                        if (state_byte == 9) {
                            state_byte = func_0x00018022d300();
                            *(byte *)(offset + 0x38c) = state_byte;
                        }
                        temp_ptr = stack_ptr;
                        if ((*(char *)(*(int64_t *)(obj_ptr + 0x1e0) + 0x15 + (uint64_t)state_byte * 0x18) == '\x03')
                           || (*(char *)(*(int64_t *)(obj_ptr + 0x1e0) + 0x15 + (uint64_t)state_byte * 0x18) ==
                               '\x02')) goto LAB_180283e1f;
                    }
                }
                
                // 更新状态
                *(char *)(obj_ptr + 0xf4) = state_flag;
                FUN_18007f6a0(state_array);
                if (stack_ptr != (int64_t *)0x0) {
                    (**(code **)(*stack_ptr + 0x38))();
                }
            }
            
            offset = offset + 0x10;
            iter_count = iter_count + -1;
        } while (iter_count != 0);
    }
}

/**
 * 渲染计数器递增函数
 * 线程安全地递增渲染计数器
 * 
 * @param counter_ptr 计数器指针
 */
void increment_rendering_counter(int64_t counter_ptr)
{
    char *counter_char;
    int64_t obj_ptr;
    int lock_result;
    int64_t iter_count;
    
    // 获取对象数量
    lock_result = (int)(*(int64_t *)(counter_ptr + 0x40) - *(int64_t *)(counter_ptr + 0x38) >> 4);
    iter_count = (int64_t)lock_result;
    
    if (0 < lock_result) {
        obj_ptr = 0;
        do {
            obj_ptr = *(int64_t *)(obj_ptr + *(int64_t *)(counter_ptr + 0x38));
            
            // 线程安全地递增计数器
            lock_result = _Mtx_lock(0x180c91910);
            if (lock_result != 0) {
                __Throw_C_error_std__YAXH_Z(lock_result);
            }
            
            counter_char = (char *)(obj_ptr + 0xfc);
            *counter_char = *counter_char + '\x01';
            
            lock_result = _Mtx_unlock(0x180c91910);
            if (lock_result != 0) {
                __Throw_C_error_std__YAXH_Z(lock_result);
            }
            
            obj_ptr = obj_ptr + 0x10;
            iter_count = iter_count + -1;
        } while (iter_count != 0);
    }
}

/**
 * 渲染对象过滤函数
 * 根据过滤标志筛选渲染对象
 * 
 * @param filter_ctx 过滤上下文指针
 * @param filter_flags 过滤标志
 * @param result_array 结果数组指针
 * @return 过滤到的对象数量
 */
int64_t filter_rendering_objects(int64_t filter_ctx, uint filter_flags, uint64_t *result_array)
{
    uint64_t obj_handle;
    int64_t array_size;
    uint64_t *obj_ptr;
    uint64_t *result_ptr;
    uint64_t *temp_ptr;
    
    // 遍历渲染对象
    obj_ptr = *(uint64_t **)(filter_ctx + 0x38);
    if (obj_ptr < *(uint64_t **)(filter_ctx + 0x40)) {
        do {
            // 检查对象是否匹配过滤标志
            if ((*(uint *)(obj_ptr + 1) & filter_flags) != 0) {
                result_ptr = (uint64_t *)result_array[1];
                obj_handle = *obj_ptr;
                
                // 将匹配的对象添加到结果数组
                if (result_ptr < (uint64_t *)result_array[2]) {
                    result_array[1] = (uint64_t)(result_ptr + 1);
                    *result_ptr = obj_handle;
                }
                else {
                    // 重新分配结果数组
                    temp_ptr = (uint64_t *)*result_array;
                    array_size = (int64_t)result_ptr - (int64_t)temp_ptr >> 3;
                    if (array_size == 0) {
                        array_size = 1;
                    LAB_180283f92:
                    obj_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, array_size * 8, (char)result_array[3]);
                    temp_ptr = (uint64_t *)*result_array;
                    result_ptr = (uint64_t *)result_array[1];
                    }
                    else {
                        array_size = array_size * 2;
                        if (array_size != 0) goto LAB_180283f92;
                        obj_ptr = (uint64_t *)0x0;
                    }
                    
                    // 移动现有数据
                    if (temp_ptr != result_ptr) {
                        memmove(obj_ptr, temp_ptr, (int64_t)result_ptr - (int64_t)temp_ptr);
                    }
                    
                    *obj_ptr = obj_handle;
                    if (*result_array != 0) {
                        FUN_18064e900();
                    }
                    *result_array = (uint64_t)obj_ptr;
                    result_array[2] = (uint64_t)(obj_ptr + array_size);
                    result_array[1] = (uint64_t)(obj_ptr + 1);
                }
            }
            obj_ptr = obj_ptr + 2;
        } while (obj_ptr < *(uint64_t **)(filter_ctx + 0x40));
    }
    
    return (int64_t)(result_array[1] - *result_array) >> 3;
}

/**
 * 渲染对象数量统计函数
 * 统计渲染对象的数量
 * 
 * @return 渲染对象数量
 */
int64_t count_rendering_objects(void)
{
    uint64_t obj_handle;
    int64_t array_size;
    uint64_t *obj_ptr;
    uint64_t *result_ptr;
    uint64_t *temp_ptr;
    uint64_t *result_array;
    uint64_t *iter_ptr;
    uint filter_flags;
    int64_t iter_count;
    uint64_t *obj_iter;
    
    // 遍历渲染对象并统计数量
    do {
        if ((*(uint *)(iter_ptr + 1) & filter_flags) != 0) {
            obj_iter = (uint64_t *)result_array[1];
            obj_handle = *iter_ptr;
            if (obj_iter < (uint64_t *)result_array[2]) {
                result_array[1] = (uint64_t)(obj_iter + 1);
                *obj_iter = obj_handle;
            }
            else {
                temp_ptr = (uint64_t *)*result_array;
                array_size = (int64_t)obj_iter - (int64_t)temp_ptr >> 3;
                if (array_size == 0) {
                    array_size = 1;
                LAB_180283f92:
                obj_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, array_size * 8, (char)result_array[3]);
                temp_ptr = (uint64_t *)*result_array;
                obj_iter = (uint64_t *)result_array[1];
                }
                else {
                    array_size = array_size * 2;
                    if (array_size != 0) goto LAB_180283f92;
                    obj_ptr = (uint64_t *)0x0;
                }
                
                if (temp_ptr != obj_iter) {
                    memmove(obj_ptr, temp_ptr, (int64_t)obj_iter - (int64_t)temp_ptr);
                }
                *obj_ptr = obj_handle;
                if (*result_array != 0) {
                    FUN_18064e900();
                }
                *result_array = (uint64_t)obj_ptr;
                result_array[2] = (uint64_t)(obj_ptr + array_size);
                result_array[1] = (uint64_t)(obj_ptr + 1);
            }
        }
        iter_ptr = iter_ptr + 2;
        if (*(uint64_t **)(iter_count + 0x40) <= iter_ptr) {
            return (int64_t)(result_array[1] - *result_array) >> 3;
        }
    } while( true );
}

/**
 * 获取渲染对象数量函数
 * 返回当前渲染对象的数量
 * 
 * @return 渲染对象数量
 */
int64_t get_rendering_object_count(void)
{
    int64_t *result_array;
    
    return result_array[1] - *result_array >> 3;
}

/**
 * 渲染位图操作函数
 * 对渲染位图进行操作
 * 
 * @param bitmap_ptr 位图指针
 * @param bit_pos 位位置
 * @param param3 操作参数3
 * @param param4 操作参数4
 */
void operate_rendering_bitmap(int64_t bitmap_ptr, byte bit_pos, uint64_t param3, uint64_t param4)
{
    int64_t *base_ptr;
    uint *uint_ptr;
    int64_t obj_offset;
    int64_t *obj_ptr;
    uint64_t obj_count;
    int64_t *temp_ptr;
    int64_t iter_count;
    int64_t end_count;
    int item_count;
    uint64_t remaining_count;
    int64_t total_count;
    
    base_ptr = (int64_t *)(bitmap_ptr + 0x38);
    remaining_count = *(int64_t *)(bitmap_ptr + 0x40) - *base_ptr >> 4;
    item_count = (int)remaining_count;
    iter_count = (int64_t)item_count;
    
    if (0 < item_count) {
        end_count = 0;
        total_count = iter_count * 0x10 + -0x10;
        iter_count = end_count;
        do {
            uint_ptr = (uint *)(iter_count + 8 + *base_ptr);
            *uint_ptr = *uint_ptr & ~(-1 << (bit_pos & 0x1f) & 0xffU);
            obj_offset = *base_ptr;
            
            // 检查是否需要清理对象
            if (*(int *)(iter_count + 8 + obj_offset) == 0) {
                temp_ptr = *(int64_t **)(total_count + obj_offset);
                if (temp_ptr != (int64_t *)0x0) {
                    (**(code **)(*temp_ptr + 0x28))(temp_ptr);
                }
                obj_ptr = *(int64_t **)(iter_count + obj_offset);
                *(int64_t **)(iter_count + obj_offset) = temp_ptr;
                if (obj_ptr != (int64_t *)0x0) {
                    (**(code **)(*obj_ptr + 0x38))();
                }
                *(int32_t *)(iter_count + 8 + obj_offset) = *(int32_t *)(total_count + 8 + obj_offset);
                remaining_count = (uint64_t)((int)remaining_count - 1);
                iter_count = iter_count + -1;
                total_count = total_count + -0x10;
            }
            else {
                end_count = end_count + 1;
                iter_count = iter_count + 0x10;
            }
            item_count = (int)remaining_count;
        } while (end_count < iter_count);
    }
    
    obj_count = (uint64_t)item_count;
    temp_ptr = *(int64_t **)(bitmap_ptr + 0x40);
    iter_count = *base_ptr;
    remaining_count = (int64_t)temp_ptr - iter_count >> 4;
    
    if (remaining_count < obj_count) {
        FUN_180284de0(base_ptr, obj_count - remaining_count, param3, param4, 0xfffffffffffffffe);
    }
    else {
        obj_ptr = (int64_t *)(iter_count + obj_count * 0x10);
        if (obj_ptr != temp_ptr) {
            do {
                if ((int64_t *)*obj_ptr != (int64_t *)0x0) {
                    (**(code **)(*(int64_t *)*obj_ptr + 0x38))();
                }
                obj_ptr = obj_ptr + 2;
            } while (obj_ptr != temp_ptr);
            iter_count = *base_ptr;
        }
        *(uint64_t *)(bitmap_ptr + 0x40) = iter_count + obj_count * 0x10;
    }
}

/**
 * 渲染缓冲区调整函数
 * 调整渲染缓冲区的大小
 * 
 * @param buffer_ptr 缓冲区指针
 * @param new_size 新的大小
 */
void resize_rendering_buffer(int64_t *buffer_ptr, uint64_t new_size)
{
    int64_t current_size;
    int64_t new_buffer;
    
    current_size = *buffer_ptr;
    if ((uint64_t)(buffer_ptr[2] - current_size >> 6) < new_size) {
        if (new_size == 0) {
            new_buffer = 0;
        }
        else {
            new_buffer = FUN_18062b420(system_memory_pool_ptr, new_size << 6, (char)buffer_ptr[3]);
            current_size = *buffer_ptr;
        }
        
        if (current_size != buffer_ptr[1]) {
            memmove(new_buffer, current_size, buffer_ptr[1] - current_size);
        }
        
        if (current_size != 0) {
            FUN_18064e900();
        }
        
        *buffer_ptr = new_buffer;
        buffer_ptr[1] = new_buffer;
        buffer_ptr[2] = new_size * 0x40 + new_buffer;
    }
}

/**
 * 渲染缓冲区重新分配函数
 * 重新分配渲染缓冲区
 * 
 * @param buffer_ptr 缓冲区指针
 * @param new_size 新的大小
 */
void reallocate_rendering_buffer(int64_t buffer_ptr, int64_t new_size)
{
    int64_t new_buffer;
    int64_t *old_buffer;
    int64_t old_size;
    
    if (new_size == 0) {
        new_buffer = 0;
    }
    else {
        new_buffer = FUN_18062b420(system_memory_pool_ptr, new_size << 6, (char)old_buffer[3]);
        buffer_ptr = *old_buffer;
    }
    
    if (buffer_ptr == old_buffer[1]) {
        if (buffer_ptr != 0) {
            FUN_18064e900();
        }
        *old_buffer = new_buffer;
        old_buffer[1] = new_buffer;
        old_buffer[2] = old_size * 0x40 + new_buffer;
        return;
    }
    
    memmove(new_buffer, buffer_ptr, old_buffer[1] - buffer_ptr);
}

/**
 * 空渲染操作函数
 * 空操作，用于占位
 */
void empty_rendering_operation(void)
{
    return;
}

/**
 * 渲染资源清理函数
 * 清理渲染资源
 * 
 * @param resource_ptr 资源指针
 */
void cleanup_rendering_resources(int64_t *resource_ptr)
{
    int64_t *iter_ptr;
    int64_t *end_ptr;
    
    iter_ptr = (int64_t *)resource_ptr[1];
    for (end_ptr = (int64_t *)*resource_ptr; end_ptr != iter_ptr; end_ptr = end_ptr + 2) {
        if ((int64_t *)*end_ptr != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*end_ptr + 0x38))();
        }
    }
    
    if (*resource_ptr == 0) {
        return;
    }
    FUN_18064e900();
}

/**
 * 渲染数据插入函数
 * 向渲染数据结构中插入数据
 * 
 * @param data_ptr 数据指针
 * @param insert_count 插入数量
 * @param param3 插入参数3
 * @param param4 插入参数4
 */
void insert_rendering_data(int64_t *data_ptr, uint64_t insert_count, uint64_t param3, uint64_t param4)
{
    int64_t *iter_ptr;
    uint64_t current_count;
    int64_t base_ptr;
    int64_t *end_ptr;
    
    iter_ptr = (int64_t *)data_ptr[1];
    base_ptr = *data_ptr;
    current_count = (int64_t)iter_ptr - base_ptr >> 4;
    
    if (current_count < insert_count) {
        FUN_180284de0(data_ptr, insert_count - current_count, param3, param4, 0xfffffffffffffffe);
    }
    else {
        end_ptr = (int64_t *)(base_ptr + insert_count * 0x10);
        if (end_ptr != iter_ptr) {
            do {
                if ((int64_t *)*end_ptr != (int64_t *)0x0) {
                    (**(code **)(*(int64_t *)*end_ptr + 0x38))();
                }
                end_ptr = end_ptr + 2;
            } while (end_ptr != iter_ptr);
            base_ptr = *data_ptr;
        }
        data_ptr[1] = base_ptr + insert_count * 0x10;
    }
}

/**
 * 渲染数据添加函数
 * 向渲染数据结构中添加数据
 * 
 * @param data_ptr 数据指针
 * @param item_ptr 项目指针
 * @param param3 添加参数3
 * @param param4 添加参数4
 */
void add_rendering_data(int64_t *data_ptr, int64_t *item_ptr, uint64_t param3, uint64_t param4)
{
    int32_t *uint_ptr;
    int64_t offset;
    int64_t *iter_ptr;
    int64_t *end_ptr;
    int64_t array_size;
    int64_t *new_ptr;
    int64_t *temp_ptr;
    int64_t copy_size;
    
    end_ptr = (int64_t *)data_ptr[1];
    if (end_ptr < (int64_t *)data_ptr[2]) {
        data_ptr[1] = (int64_t)(end_ptr + 2);
        iter_ptr = (int64_t *)*item_ptr;
        *end_ptr = (int64_t)iter_ptr;
        
        if (iter_ptr != (int64_t *)0x0) {
            (**(code **)(*iter_ptr + 0x28))(iter_ptr);
        }
        
        *(int *)(end_ptr + 1) = (int)item_ptr[1];
        return;
    }
    
    iter_ptr = (int64_t *)*data_ptr;
    array_size = (int64_t)end_ptr - (int64_t)iter_ptr >> 4;
    new_ptr = (int64_t *)0x0;
    if (array_size == 0) {
        array_size = 1;
    }
    else {
        array_size = array_size * 2;
        if (array_size == 0) goto LAB_180284385;
    }
    
    new_ptr = (int64_t *)
           FUN_18062b420(system_memory_pool_ptr, array_size << 4, (char)data_ptr[3], param4, 0xfffffffffffffffe);
    end_ptr = (int64_t *)data_ptr[1];
    iter_ptr = (int64_t *)*data_ptr;
LAB_180284385:
    temp_ptr = new_ptr;
    
    if (iter_ptr != end_ptr) {
        copy_size = (int64_t)iter_ptr - (int64_t)new_ptr;
        offset = 8 - (int64_t)iter_ptr;
        do {
            *temp_ptr = *iter_ptr;
            *iter_ptr = 0;
            uint_ptr = (int32_t *)((int64_t)new_ptr + offset + (int64_t)iter_ptr);
            *uint_ptr = *(int32_t *)((int64_t)uint_ptr + copy_size);
            iter_ptr = iter_ptr + 2;
            temp_ptr = temp_ptr + 2;
        } while (iter_ptr != end_ptr);
    }
    
    end_ptr = (int64_t *)*item_ptr;
    *temp_ptr = (int64_t)end_ptr;
    if (end_ptr != (int64_t *)0x0) {
        (**(code **)(*end_ptr + 0x28))(end_ptr);
    }
    *(int *)(temp_ptr + 1) = (int)item_ptr[1];
    end_ptr = (int64_t *)data_ptr[1];
    iter_ptr = (int64_t *)*data_ptr;
    
    if (iter_ptr != end_ptr) {
        do {
            if ((int64_t *)*iter_ptr != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*iter_ptr + 0x38))();
            }
            iter_ptr = iter_ptr + 2;
        } while (iter_ptr != end_ptr);
        iter_ptr = (int64_t *)*data_ptr;
    }
    
    if (iter_ptr == (int64_t *)0x0) {
        *data_ptr = (int64_t)new_ptr;
        data_ptr[1] = (int64_t)(temp_ptr + 2);
        data_ptr[2] = (int64_t)(new_ptr + array_size * 2);
        return;
    }
    
    FUN_18064e900(iter_ptr);
}

/**
 * 渲染数据移除函数
 * 从渲染数据结构中移除数据
 * 
 * @param data_ptr 数据指针
 * @param remove_ptr 移除指针
 * @return 移除的指针
 */
int64_t remove_rendering_data(int64_t data_ptr, int64_t remove_ptr)
{
    uint64_t data_handle;
    int64_t *item_ptr;
    uint64_t *iter_ptr;
    uint64_t *end_ptr;
    int64_t item_size;
    
    end_ptr = (uint64_t *)(remove_ptr + 0x10);
    iter_ptr = *(uint64_t **)(data_ptr + 8);
    
    if ((end_ptr < iter_ptr) && (item_size = (int64_t)iter_ptr - (int64_t)end_ptr >> 4, 0 < item_size)) {
        do {
            data_handle = *end_ptr;
            *end_ptr = 0;
            item_ptr = (int64_t *)end_ptr[-2];
            end_ptr[-2] = data_handle;
            
            if (item_ptr != (int64_t *)0x0) {
                (**(code **)(*item_ptr + 0x38))();
            }
            
            *(int32_t *)(end_ptr + -1) = *(int32_t *)(end_ptr + 1);
            item_size = item_size + -1;
            end_ptr = end_ptr + 2;
        } while (0 < item_size);
        iter_ptr = *(uint64_t **)(data_ptr + 8);
    }
    
    *(uint64_t **)(data_ptr + 8) = iter_ptr + -2;
    item_ptr = (int64_t *)iter_ptr[-2];
    if (item_ptr != (int64_t *)0x0) {
        (**(code **)(*item_ptr + 0x38))();
    }
    
    return remove_ptr;
}

/**
 * 渲染数据清空函数
 * 清空渲染数据结构
 * 
 * @param data_ptr 数据指针
 */
void clear_rendering_data(int64_t *data_ptr)
{
    int64_t *iter_ptr;
    int64_t *end_ptr;
    
    iter_ptr = (int64_t *)data_ptr[1];
    end_ptr = (int64_t *)*data_ptr;
    if (end_ptr != iter_ptr) {
        do {
            if ((int64_t *)*end_ptr != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*end_ptr + 0x38))();
            }
            end_ptr = end_ptr + 2;
        } while (end_ptr != iter_ptr);
        data_ptr[1] = *data_ptr;
        return;
    }
    data_ptr[1] = (int64_t)end_ptr;
    return;
}

/**
 * 渲染队列扩展函数
 * 扩展渲染队列的容量
 * 
 * @param queue_ptr 队列指针
 * @param expand_size 扩展大小
 * @param param3 扩展参数3
 * @param param4 扩展参数4
 */
void expand_rendering_queue(int64_t *queue_ptr, uint64_t expand_size, uint64_t param3, uint64_t param4)
{
    uint64_t current_size;
    int64_t base_ptr;
    int64_t end_ptr;
    uint64_t new_size;
    int64_t new_buffer;
    int64_t stack_ptr;
    
    end_ptr = queue_ptr[1];
    base_ptr = *queue_ptr;
    current_size = (end_ptr - base_ptr) / 0x1a0;
    
    if (current_size < expand_size) {
        expand_size = expand_size - current_size;
        if ((uint64_t)((queue_ptr[2] - end_ptr) / 0x1a0) < expand_size) {
            new_size = current_size * 2;
            if (current_size == 0) {
                new_size = 1;
            }
            if (new_size < current_size + expand_size) {
                new_size = current_size + expand_size;
            }
            if (new_size == 0) {
                new_buffer = 0;
            }
            else {
                new_buffer = FUN_18062b420(system_memory_pool_ptr, new_size * 0x1a0, (char)queue_ptr[3]);
                base_ptr = *queue_ptr;
                end_ptr = queue_ptr[1];
            }
            
            FUN_180285440(&stack_ptr, base_ptr, end_ptr, new_buffer);
            FUN_180285190(stack_ptr, expand_size);
            end_ptr = queue_ptr[1];
            base_ptr = *queue_ptr;
            
            if (base_ptr != end_ptr) {
                do {
                    FUN_180281e80(base_ptr);
                    base_ptr = base_ptr + 0x1a0;
                } while (base_ptr != end_ptr);
                base_ptr = *queue_ptr;
            }
            
            if (base_ptr != 0) {
                FUN_18064e900(base_ptr);
            }
            
            *queue_ptr = new_buffer;
            queue_ptr[1] = expand_size * 0x1a0 + stack_ptr;
            queue_ptr[2] = new_size * 0x1a0 + new_buffer;
        }
        else {
            FUN_180285190(end_ptr, expand_size);
            queue_ptr[1] = queue_ptr[1] + expand_size * 0x1a0;
        }
    }
    else {
        new_buffer = expand_size * 0x1a0 + base_ptr;
        if (new_buffer != end_ptr) {
            do {
                FUN_180281e80(new_buffer);
                new_buffer = new_buffer + 0x1a0;
            } while (new_buffer != end_ptr);
            base_ptr = *queue_ptr;
        }
        queue_ptr[1] = expand_size * 0x1a0 + base_ptr;
    }
}

/**
 * 渲染队列重新分配函数
 * 重新分配渲染队列
 * 
 * @param queue_ptr 队列指针
 * @param new_size 新的大小
 */
void reallocate_rendering_queue(int64_t queue_ptr, int64_t new_size)
{
    uint64_t current_size;
    int64_t new_buffer;
    int64_t base_ptr;
    int64_t end_ptr;
    int64_t *queue_data;
    int64_t queue_end;
    int64_t item_count;
    uint64_t total_size;
    int64_t stack_ptr;
    
    end_ptr = queue_ptr[1];
    base_ptr = *queue_ptr;
    current_size = (end_ptr - base_ptr) / 0x1a0;
    total_size = item_count * 2;
    
    if (item_count == 0) {
        total_size = 1;
    }
    if (total_size < (uint64_t)(item_count + new_size)) {
        total_size = item_count + new_size;
    }
    
    if (total_size == 0) {
        new_buffer = 0;
    }
    else {
        new_buffer = FUN_18062b420(system_memory_pool_ptr, total_size * 0x1a0, (char)queue_data[3]);
        item_count = *queue_data;
        queue_end = queue_data[1];
    }
    
    FUN_180285440(&stack_ptr, item_count, queue_end, new_buffer);
    FUN_180285190(stack_ptr);
    base_ptr = queue_data[1];
    end_ptr = *queue_data;
    queue_end = new_size * 0x1a0 + stack_ptr;
    
    if (end_ptr != base_ptr) {
        do {
            FUN_180281e80(end_ptr);
            end_ptr = end_ptr + 0x1a0;
        } while (end_ptr != base_ptr);
        end_ptr = *queue_data;
    }
    
    if (end_ptr != 0) {
        FUN_18064e900(end_ptr);
    }
    
    *queue_data = new_buffer;
    queue_data[1] = queue_end;
    queue_data[2] = total_size * 0x1a0 + new_buffer;
}

/**
 * 渲染队列调整函数
 * 调整渲染队列的大小
 * 
 * @param queue_ptr 队列指针
 * @param adjust_size 调整大小
 */
void adjust_rendering_queue(int64_t queue_ptr, int64_t adjust_size)
{
    int64_t end_ptr;
    int64_t base_ptr;
    
    FUN_180285190();
    *(int64_t *)(queue_ptr + 8) = *(int64_t *)(queue_ptr + 8) + adjust_size * 0x1a0;
}

/**
 * 渲染队列清理函数
 * 清理渲染队列
 * 
 * @param queue_ptr 队列指针
 */
void cleanup_rendering_queue(int64_t *queue_ptr)
{
    int64_t base_ptr;
    int64_t end_ptr;
    
    base_ptr = queue_ptr[1];
    end_ptr = *queue_ptr;
    if (end_ptr != base_ptr) {
        do {
            FUN_180281e80(end_ptr);
            end_ptr = end_ptr + 0x1a0;
        } while (end_ptr != base_ptr);
        queue_ptr[1] = *queue_ptr;
        return;
    }
    queue_ptr[1] = end_ptr;
    return;
}

/**
 * 渲染哈希表清理函数
 * 清理渲染哈希表
 * 
 * @param hash_table 哈希表指针
 */
void cleanup_rendering_hash_table(int64_t hash_table)
{
    int64_t base_ptr;
    int64_t iter_ptr;
    uint64_t table_size;
    uint64_t iter_count;
    
    table_size = *(uint64_t *)(hash_table + 0x10);
    base_ptr = *(int64_t *)(hash_table + 8);
    iter_count = 0;
    
    if (table_size != 0) {
        do {
            iter_ptr = *(int64_t *)(base_ptr + iter_count * 8);
            if (iter_ptr != 0) {
                FUN_180285080();
                FUN_18064e900(iter_ptr);
            }
            *(uint64_t *)(base_ptr + iter_count * 8) = 0;
            iter_count = iter_count + 1;
        } while (iter_count < table_size);
        table_size = *(uint64_t *)(hash_table + 0x10);
    }
    
    *(uint64_t *)(hash_table + 0x18) = 0;
    if ((1 < table_size) && (*(int64_t *)(hash_table + 8) != 0)) {
        FUN_18064e900();
    }
}

/**
 * 渲染哈希表查找函数
 * 在渲染哈希表中查找数据
 * 
 * @param hash_table 哈希表指针
 * @param result_ptr 结果指针
 * @param param3 查找参数3
 * @param key_ptr 键指针
 * @param param5 查找参数5
 * @return 结果指针
 */
uint64_t *
find_in_rendering_hash_table(int64_t hash_table, uint64_t *result_ptr, uint64_t param3, int *key_ptr, uint64_t param5)
{
    uint64_t *bucket_ptr;
    int64_t bucket_index;
    uint64_t hash_value;
    int *item_ptr;
    uint64_t data_value;
    
    hash_value = param5 % (uint64_t)*(uint *)(hash_table + 0x10);
    bucket_ptr = (uint64_t *)(*(int64_t *)(hash_table + 8) + hash_value * 8);
    item_ptr = (int *)*bucket_ptr;
    
    if (item_ptr != (int *)0x0) {
        do {
            if (*key_ptr == *item_ptr) {
                *result_ptr = item_ptr;
                result_ptr[1] = bucket_ptr;
                *(int8_t *)(result_ptr + 2) = 0;
                return result_ptr;
            }
            item_ptr = *(int **)(item_ptr + 0xe);
        } while (item_ptr != (int *)0x0);
    }
    
    // 创建新的哈希表项
    FUN_18066c220(hash_table + 0x20, &param5, (uint64_t)*(uint *)(hash_table + 0x10),
                  *(int32_t *)(hash_table + 0x18), 1);
    item_ptr = (int *)FUN_18062b420(system_memory_pool_ptr, 0x40, *(int8_t *)(hash_table + 0x2c));
    *item_ptr = *key_ptr;
    item_ptr[10] = 0x3f800000;
    item_ptr[0xb] = 0x40000000;
    item_ptr[0xc] = 0;
    item_ptr[0xd] = 3;
    item_ptr[6] = 1;
    item_ptr[7] = 0;
    *(void **)(item_ptr + 4) = &system_buffer_0000;
    item_ptr[8] = 0;
    item_ptr[9] = 0;
    item_ptr[0xc] = 0;
    item_ptr[0xe] = 0;
    item_ptr[0xf] = 0;
    
    if ((char)param5 == '\0') {
        *(uint64_t *)(item_ptr + 0xe) = *(uint64_t *)(*(int64_t *)(hash_table + 8) + hash_value * 8);
        *(int **)(*(int64_t *)(hash_table + 8) + hash_value * 8) = item_ptr;
        *(int64_t *)(hash_table + 0x18) = *(int64_t *)(hash_table + 0x18) + 1;
        bucket_index = *(int64_t *)(hash_table + 8);
        *result_ptr = item_ptr;
        result_ptr[1] = bucket_index + hash_value * 8;
        *(int8_t *)(result_ptr + 2) = 1;
        return result_ptr;
    }
    
    data_value = FUN_18062b1e0(system_memory_pool_ptr, (uint64_t)param5._4_4_ * 8 + 8, 8,
                                *(int8_t *)(hash_table + 0x2c));
    memset(data_value, 0, (uint64_t)param5._4_4_ * 8);
}

/**
 * 渲染字符串哈希查找函数
 * 在渲染字符串哈希表中查找数据
 * 
 * @param hash_table 哈希表指针
 * @param result_ptr 结果指针
 * @param param3 查找参数3
 * @param string_ptr 字符串指针
 * @param param5 查找参数5
 * @return 结果指针
 */
int64_t *
find_in_rendering_string_hash(int64_t hash_table, int64_t *result_ptr, uint64_t param3, int64_t string_ptr,
                               uint64_t param5)
{
    int64_t *bucket_ptr;
    byte *str_ptr1;
    int str_len1;
    uint64_t hash_value;
    byte *str_ptr2;
    int64_t str_diff;
    uint64_t data_value;
    int str_len2;
    int64_t string_data;
    
    hash_value = param5 % (uint64_t)*(uint *)(hash_table + 0x10);
    bucket_ptr = (int64_t *)(*(int64_t *)(hash_table + 8) + hash_value * 8);
    string_data = *bucket_ptr;
    
    if (string_data != 0) {
        str_len1 = *(int *)(string_ptr + 0x10);
        do {
            str_len2 = *(int *)(string_data + 0x10);
            if (str_len1 == str_len2) {
                if (str_len1 != 0) {
                    str_ptr2 = *(byte **)(string_ptr + 8);
                    string_data = *(int64_t *)(string_data + 8) - (int64_t)str_ptr2;
                    do {
                        str_ptr1 = str_ptr2 + string_data;
                        str_len2 = (uint)*str_ptr2 - (uint)*str_ptr1;
                        if (str_len2 != 0) break;
                        str_ptr2 = str_ptr2 + 1;
                    } while (*str_ptr1 != 0);
                }
            LAB_180284ade:
                if (str_len2 == 0) {
                    *result_ptr = string_data;
                    result_ptr[1] = (int64_t)bucket_ptr;
                    *(int8_t *)(result_ptr + 2) = 0;
                    return result_ptr;
                }
            }
            else if (str_len1 == 0) goto LAB_180284ade;
            string_data = *(int64_t *)(string_data + 0x40);
        } while (string_data != 0);
    }
    
    // 创建新的字符串哈希表项
    FUN_18066c220(hash_table + 0x20, &param5, *(uint *)(hash_table + 0x10), *(int32_t *)(hash_table + 0x18), 1);
    string_data = FUN_18062b420(system_memory_pool_ptr, 0x48, *(int8_t *)(hash_table + 0x2c));
    FUN_180627ae0(string_data, string_ptr);
    *(uint64_t *)(string_data + 0x20) = 0;
    *(uint64_t *)(string_data + 0x28) = 0;
    *(uint64_t *)(string_data + 0x30) = 0;
    *(int32_t *)(string_data + 0x38) = 3;
    *(uint64_t *)(string_data + 0x40) = 0;
    
    if ((char)param5 == '\0') {
        *(uint64_t *)(string_data + 0x40) = *(uint64_t *)(*(int64_t *)(hash_table + 8) + hash_value * 8);
        *(int64_t *)(*(int64_t *)(hash_table + 8) + hash_value * 8) = string_data;
        *(int64_t *)(hash_table + 0x18) = *(int64_t *)(hash_table + 0x18) + 1;
        str_diff = *(int64_t *)(hash_table + 8);
        *result_ptr = string_data;
        result_ptr[1] = str_diff + hash_value * 8;
        *(int8_t *)(result_ptr + 2) = 1;
        return result_ptr;
    }
    
    data_value = FUN_18062b1e0(system_memory_pool_ptr, (uint64_t)param5._4_4_ * 8 + 8, 8,
                                *(int8_t *)(hash_table + 0x2c));
    memset(data_value, 0, (uint64_t)param5._4_4_ * 8);
}