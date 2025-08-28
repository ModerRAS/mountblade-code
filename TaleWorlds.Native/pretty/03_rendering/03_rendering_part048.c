#include "TaleWorlds.Native.Split.h"

// 03_rendering_part048.c - 渲染系统参数处理和浮点数计算模块
// 包含11个核心函数，涵盖边界框计算、浮点数插值、内存管理、批量数据处理、渲染参数管理等高级渲染功能

/**
 * @brief 更新浮点数边界框
 * @param render_context 渲染上下文指针
 * @param min_x 最小X坐标（作为浮点数传入）
 * @param min_y 最小Y坐标（作为浮点数传入）
 * @param update_flag 更新标志
 * 
 * 该函数负责计算和更新浮点数边界框，包括：
 * - 边界值的动态调整和优化
 * - 浮点数精度处理
 * - 内存池的动态管理
 * - 渲染对象的状态维护
 */
void update_float_bounding_box(int *render_context, uint64_t min_x, uint64_t min_y, char update_flag)
{
    uint64_t *boundary_data;
    float *current_bounds;
    int64_t context_offset;
    int resource_count;
    uint boundary_flags;
    float new_min_x;
    float new_min_y;
    float max_x;
    float max_y;
    int64_t temp_offset;
    uint64_t temp_bounds;
    int array_size;
    int capacity;
    int64_t array_offset;
    uint *resource_ptr;
    int64_t *resource_data;
    int *object_ptr;
    int *prev_object;
    int *next_object;
    float temp_max_x;
    float temp_max_y;
    float stack_min_x;
    float stack_min_y;
    uint64_t stack_bounds_x;
    uint64_t stack_bounds_y;
    
    // 从64位参数中提取浮点数
    stack_min_x = (float)min_x;
    stack_min_y = (float)((uint64_t)min_x >> 0x20);
    stack_bounds_x._0_4_ = (float)min_y;
    stack_bounds_x._4_4_ = (float)((uint64_t)min_y >> 0x20);
    temp_max_x = stack_bounds_x._4_4_;
    temp_max_y = (float)stack_bounds_x;
    temp_bounds = min_y;
    stack_bounds_y = min_x;
    stack_bounds_x = min_y;
    
    // 如果需要更新且存在有效边界数据
    if ((update_flag != '\0') && (temp_bounds = min_y, render_context[0x18] != 0)) {
        current_bounds = (float *)(*(int64_t *)(render_context + 0x1a) + -0x10 + (int64_t)render_context[0x18] * 0x10);
        new_min_x = *current_bounds;
        new_min_y = current_bounds[1];
        max_x = current_bounds[2];
        max_y = current_bounds[3];
        
        // 更新最小X边界
        if (stack_min_x < new_min_x) {
            stack_bounds_y = CONCAT44(stack_min_y, new_min_x);
            stack_min_x = new_min_x;
        }
        
        // 更新最小Y边界
        if (stack_min_y < new_min_y) {
            stack_bounds_y = CONCAT44(new_min_y, (uint32_t)stack_bounds_y);
            stack_min_y = new_min_y;
        }
        
        // 更新最大X边界
        if (max_x < (float)stack_bounds_x) {
            stack_bounds_x = CONCAT44(stack_bounds_x._4_4_, max_x);
            temp_max_y = max_x;
        }
        
        temp_bounds = *(uint64_t *)current_bounds;
        
        // 更新最大Y边界
        if (max_y < stack_bounds_x._4_4_) {
            stack_bounds_x = CONCAT44(max_y, (uint32_t)stack_bounds_x);
            temp_max_x = max_y;
        }
    }
    
    stack_bounds_x = temp_bounds;
    
    // 确保边界值的合理性
    if (temp_max_y <= stack_min_x) {
        stack_bounds_x = CONCAT44(stack_bounds_x._4_4_, stack_min_x);
    }
    
    if (temp_max_x <= stack_min_y) {
        stack_bounds_x = CONCAT44(stack_min_y, (uint32_t)stack_bounds_x);
    }
    
    array_size = render_context[0x18];
    capacity = render_context[0x19];
    
    // 动态调整数组容量
    if (array_size == capacity) {
        if (capacity == 0) {
            capacity = 8;
        }
        else {
            capacity = capacity / 2 + capacity;
        }
        
        resource_count = array_size + 1;
        if (array_size + 1 < capacity) {
            resource_count = capacity;
        }
        
        resize_render_array(render_context + 0x18, resource_count);
        array_size = render_context[0x18];
    }
    
    // 存储边界数据
    boundary_data = (uint64_t *)(*(int64_t *)(render_context + 0x1a) + (int64_t)array_size * 0x10);
    *boundary_data = stack_bounds_y;
    boundary_data[1] = stack_bounds_x;
    render_context[0x18] = render_context[0x18] + 1;
    
    // 处理资源清理和优化
    if (render_context[0x18] == 0) {
        resource_data = (int64_t *)(*(int64_t *)(render_context + 0xe) + 0x18);
    }
    else {
        resource_data = (int64_t *)((int64_t)(render_context[0x18] + -1) * 0x10 + *(int64_t *)(render_context + 0x1a));
    }
    
    temp_offset = *resource_data;
    context_offset = resource_data[1];
    array_size = *render_context;
    next_object = (int *)0x0;
    object_ptr = next_object;
    
    if (0 < array_size) {
        object_ptr = (int *)((int64_t)(array_size + -1) * 0x30 + *(int64_t *)(render_context + 2));
    }
    
    // 检查对象状态并优化
    if (((object_ptr != (int *)0x0) &&
        ((*object_ptr == 0 ||
         ((*(int64_t *)(object_ptr + 1) == temp_offset && (*(int64_t *)(object_ptr + 3) == context_offset)))))) &&
       (*(int64_t *)(object_ptr + 8) == 0)) {
        
        prev_object = object_ptr + -0xc;
        if (array_size < 2) {
            prev_object = next_object;
        }
        
        if ((((*object_ptr == 0) && (prev_object != (int *)0x0)) && (*(int64_t *)(prev_object + 1) == temp_offset)) &&
           (*(int64_t *)(prev_object + 3) == context_offset)) {
            
            if (render_context[0x1c] != 0) {
                next_object = *(int **)(*(int64_t *)(render_context + 0x1e) + -8 + (int64_t)render_context[0x1c] * 8);
            }
            
            if ((*(int **)(prev_object + 6) == next_object) && (*(int64_t *)(prev_object + 8) == 0)) {
                *render_context = array_size + -1;
                return;
            }
        }
        
        *(int64_t *)(object_ptr + 1) = temp_offset;
        *(int64_t *)(object_ptr + 3) = context_offset;
        return;
    }
    
    // 处理资源分配和管理
    if (render_context[0x18] == 0) {
        resource_ptr = (uint *)(*(int64_t *)(render_context + 0xe) + 0x18);
    }
    else {
        resource_ptr = (uint *)((int64_t)(render_context[0x18] + -1) * 0x10 + *(int64_t *)(render_context + 0x1a));
    }
    
    boundary_flags = *resource_ptr;
    temp_offset = *(int64_t *)(resource_ptr + 1);
    stack_bounds_x = CONCAT44(stack_bounds_x._4_4_, resource_ptr[3]);
    
    if (render_context[0x1c] == 0) {
        stack_bounds_y = 0;
    }
    else {
        stack_bounds_y = *(uint64_t *)(*(int64_t *)(render_context + 0x1e) + -8 + (int64_t)render_context[0x1c] * 8);
    }
    
    array_size = *render_context;
    capacity = render_context[1];
    
    // 动态调整对象数组容量
    if (array_size == capacity) {
        if (capacity == 0) {
            capacity = 8;
        }
        else {
            capacity = capacity / 2 + capacity;
        }
        
        resource_count = array_size + 1;
        if (array_size + 1 < capacity) {
            resource_count = capacity;
        }
        
        expand_render_objects(render_context, resource_count);
        array_size = *render_context;
    }
    
    array_offset = (int64_t)array_size;
    context_offset = *(int64_t *)(render_context + 2);
    resource_data = (int64_t *)(context_offset + array_offset * 0x30);
    *resource_data = (uint64_t)boundary_flags << 0x20;
    resource_data[1] = temp_offset;
    boundary_data = (uint64_t *)(context_offset + 0x10 + array_offset * 0x30);
    *boundary_data = stack_bounds_x;
    boundary_data[1] = stack_bounds_y;
    boundary_data = (uint64_t *)(context_offset + 0x20 + array_offset * 0x30);
    *boundary_data = 0;
    boundary_data[1] = 0;
    *render_context = *render_context + 1;
    
    return;
}

/**
 * @brief 处理渲染参数
 * @param render_context 渲染上下文指针
 * @param param_handle 参数句柄
 * 
 * 该函数负责处理渲染系统的参数管理，包括：
 * - 参数句柄的管理
 * - 参数数组的动态扩展
 * - 资源引用的维护
 * - 内存池的优化
 */
void process_render_params(int *render_context, uint64_t param_handle)
{
    uint64_t *resource_array;
    int64_t array_offset;
    int resource_count;
    uint resource_flags;
    uint resource_type;
    int64_t resource_data;
    int capacity;
    int array_size;
    int64_t temp_offset;
    uint *resource_ptr;
    int64_t *resource_info;
    int *object_ptr;
    int *prev_object;
    int *next_object;
    uint32_t temp_flags;
    uint64_t temp_handle;
    
    resource_count = render_context[0x1c];
    
    // 检查并扩展资源数组
    if (resource_count == render_context[0x1d]) {
        expand_resource_array(render_context + 0x1c);
        resource_count = render_context[0x1c];
    }
    
    // 添加新参数句柄
    *(uint64_t *)(*(int64_t *)(render_context + 0x1e) + (int64_t)resource_count * 8) = param_handle;
    render_context[0x1c] = render_context[0x1c] + 1;
    
    next_object = (int *)0x0;
    if (render_context[0x1c] != 0) {
        next_object = *(int **)(*(int64_t *)(render_context + 0x1e) + -8 + (int64_t)render_context[0x1c] * 8);
    }
    
    resource_count = *render_context;
    
    // 检查现有对象并优化
    if (resource_count != 0) {
        object_ptr = (int *)(*(int64_t *)(render_context + 2) + -0x30 + (int64_t)resource_count * 0x30);
        if ((object_ptr != (int *)0x0) &&
           (((*object_ptr == 0 || (*(int **)(object_ptr + 6) == next_object)) && (*(int64_t *)(object_ptr + 8) == 0)
            ))) {
            
            prev_object = object_ptr + -0xc;
            if (resource_count < 2) {
                prev_object = (int *)0x0;
            }
            
            if (((*object_ptr == 0) && (prev_object != (int *)0x0)) && (*(int **)(prev_object + 6) == next_object)) {
                
                if (render_context[0x18] == 0) {
                    resource_info = (int64_t *)(*(int64_t *)(render_context + 0xe) + 0x18);
                }
                else {
                    resource_info = (int64_t *)
                              ((int64_t)(render_context[0x18] + -1) * 0x10 + *(int64_t *)(render_context + 0x1a));
                }
                
                if (((*(int64_t *)(prev_object + 1) == *resource_info) && (*(int64_t *)(prev_object + 3) == resource_info[1]))
                   && (*(int64_t *)(prev_object + 8) == 0)) {
                    *render_context = resource_count + -1;
                    return;
                }
            }
            
            *(int **)(object_ptr + 6) = next_object;
            return;
        }
    }
    
    // 处理新参数分配
    if (render_context[0x18] == 0) {
        resource_ptr = (uint *)(*(int64_t *)(render_context + 0xe) + 0x18);
    }
    else {
        resource_ptr = (uint *)((int64_t)(render_context[0x18] + -1) * 0x10 + *(int64_t *)(render_context + 0x1a));
    }
    
    resource_flags = *resource_ptr;
    resource_data = *(int64_t *)(resource_ptr + 1);
    resource_type = resource_ptr[3];
    
    if (render_context[0x1c] == 0) {
        temp_handle = 0;
    }
    else {
        temp_handle = *(uint64_t *)(*(int64_t *)(render_context + 0x1e) + -8 + (int64_t)render_context[0x1c] * 8);
    }
    
    resource_count = *render_context;
    capacity = render_context[1];
    
    // 动态调整对象数组
    if (resource_count == capacity) {
        if (capacity == 0) {
            capacity = 8;
        }
        else {
            capacity = capacity / 2 + capacity;
        }
        
        array_size = resource_count + 1;
        if (resource_count + 1 < capacity) {
            array_size = capacity;
        }
        
        expand_render_objects(render_context, array_size);
        resource_count = *render_context;
    }
    
    array_offset = (int64_t)resource_count;
    array_offset = *(int64_t *)(render_context + 2);
    resource_info = (int64_t *)(array_offset + array_offset * 0x30);
    *resource_info = (uint64_t)resource_flags << 0x20;
    resource_info[1] = resource_data;
    resource_array = (uint64_t *)(array_offset + 0x10 + array_offset * 0x30);
    *resource_array = CONCAT44(temp_flags, resource_type);
    resource_array[1] = temp_handle;
    resource_array = (uint64_t *)(array_offset + 0x20 + array_offset * 0x30);
    *resource_array = 0;
    resource_array[1] = 0;
    *render_context = *render_context + 1;
    
    return;
}

// 全局变量声明 - 注意：这些可能与较小符号重叠
uint64_t g_render_allocator = 0;
uint64_t g_render_context = 0;

/**
 * @brief 初始化渲染数据块
 * @param render_engine 渲染引擎实例
 * @param data_size 数据大小
 * @param allocator_ptr 内存分配器指针
 * @param context_ptr 上下文指针
 * 
 * 该函数负责初始化渲染数据块，包括：
 * - 内存池的分配和初始化
 * - 数据结构的创建
 * - 上下文信息的设置
 * - 资源管理器的初始化
 */
void initialize_render_data_block(int64_t render_engine, int data_size, uint64_t allocator_ptr, uint64_t context_ptr)
{
    int64_t *data_array;
    uint *resource_flags;
    int current_size;
    uint64_t *resource_data;
    int64_t array_offset;
    int64_t context_offset;
    uint resource_type;
    uint resource_subtype;
    int array_capacity;
    uint64_t temp_handle;
    int64_t temp_offset;
    int64_t resource_offset;
    uint32_t *temp_ptr;
    int *object_ptr;
    int object_count;
    int64_t array_base;
    uint8_t temp_buffer[8];
    uint8_t *buffer_ptr;
    uint64_t *data_ptr;
    uint32_t temp_value;
    
    current_size = *(int *)(render_engine + 0x98);
    
    // 动态调整数据数组大小
    if (current_size < data_size) {
        object_count = *(int *)(render_engine + 0x9c);
        if (object_count < data_size) {
            if (object_count == 0) {
                array_capacity = 8;
            }
            else {
                array_capacity = object_count / 2 + object_count;
            }
            
            resource_offset = data_size;
            if (data_size < array_capacity) {
                resource_offset = array_capacity;
            }
            
            if (object_count < resource_offset) {
                if (g_render_allocator != 0) {
                    *(int *)(g_render_allocator + 0x3a8) = *(int *)(g_render_allocator + 0x3a8) + 1;
                }
                
                temp_handle = allocate_render_memory((int64_t)resource_offset << 5, g_render_context, allocator_ptr, context_ptr,
                                                   0xfffffffffffffffe);
                
                if (*(int64_t *)(render_engine + 0xa0) != 0) {
                    // 注意：此子函数不返回
                    memcpy(temp_handle, *(int64_t *)(render_engine + 0xa0), (int64_t)*(int *)(render_engine + 0x98) << 5);
                }
                
                *(uint64_t *)(render_engine + 0xa0) = temp_handle;
                *(int *)(render_engine + 0x9c) = resource_offset;
            }
        }
        
        *(int *)(render_engine + 0x98) = data_size;
    }
    
    *(int *)(render_engine + 0x94) = data_size;
    resource_data = *(uint64_t **)(render_engine + 0xa0);
    *resource_data = 0;
    resource_data[1] = 0;
    resource_data[2] = 0;
    resource_data[3] = 0;
    
    // 初始化数据结构
    if (1 < (int64_t)data_size) {
        context_offset = 1;
        array_offset = 0x20;
        
        do {
            object_count = 0;
            if (context_offset < current_size) {
                temp_ptr = (uint32_t *)(*(int64_t *)(render_engine + 0xa0) + array_offset);
                array_capacity = temp_ptr[1];
                
                if (array_capacity < 0) {
                    array_capacity = array_capacity / 2 + array_capacity;
                    resource_offset = 0;
                    if (0 < array_capacity) {
                        resource_offset = array_capacity;
                    }
                    expand_render_objects(temp_ptr, resource_offset);
                }
                
                *temp_ptr = 0;
                temp_offset = *(int64_t *)(render_engine + 0xa0);
                array_capacity = *(int *)(temp_offset + 0x14 + array_offset);
                
                if (array_capacity < 0) {
                    array_capacity = array_capacity / 2 + array_capacity;
                    resource_offset = 0;
                    if (0 < array_capacity) {
                        resource_offset = array_capacity;
                    }
                    resize_resource_array(temp_offset + 0x10 + array_offset, resource_offset);
                }
                
                *(uint32_t *)(temp_offset + 0x10 + array_offset) = 0;
            }
            else {
                data_ptr = (uint64_t *)(*(int64_t *)(render_engine + 0xa0) + array_offset);
                buffer_ptr = temp_buffer;
                
                if (data_ptr != (uint64_t *)0x0) {
                    data_ptr[2] = 0;
                    data_ptr[3] = 0;
                    *data_ptr = 0;
                    data_ptr[1] = 0;
                    data_ptr[2] = 0;
                    data_ptr[3] = 0;
                }
            }
            
            object_ptr = (int *)(*(int64_t *)(render_engine + 0xa0) + array_offset);
            
            if (*object_ptr == 0) {
                resource_flags = (uint *)(*(int64_t *)(render_engine + 0x68) + -0x10 +
                                       (int64_t)*(int *)(render_engine + 0x60) * 0x10);
                resource_type = *resource_flags;
                temp_offset = *(int64_t *)(resource_flags + 1);
                resource_subtype = resource_flags[3];
                temp_handle = *(uint64_t *)
                              (*(int64_t *)(render_engine + 0x78) + -8 + (int64_t)*(int *)(render_engine + 0x70) * 8);
                
                if (object_ptr[1] == 0) {
                    expand_render_objects(object_ptr, 8);
                    object_count = *object_ptr;
                }
                
                array_base = (int64_t)object_count;
                context_offset = *(int64_t *)(object_ptr + 2);
                data_array = (int64_t *)(context_offset + array_base * 0x30);
                *data_array = (uint64_t)resource_type << 0x20;
                data_array[1] = temp_offset;
                resource_data = (uint64_t *)(context_offset + 0x10 + array_base * 0x30);
                *resource_data = CONCAT44(temp_value, resource_subtype);
                resource_data[1] = temp_handle;
                temp_ptr = (uint32_t *)(context_offset + 0x20 + array_base * 0x30);
                *temp_ptr = 0;
                temp_ptr[1] = 0;
                temp_ptr[2] = 0;
                temp_ptr[3] = 0;
                *object_ptr = *object_ptr + 1;
            }
            
            context_offset = context_offset + 1;
            array_offset = array_offset + 0x20;
        } while (context_offset < data_size);
    }
    
    return;
}

/**
 * @brief 合并渲染数据块
 * @param render_context 渲染上下文指针
 * 
 * 该函数负责合并渲染数据块，包括：
 * - 数据块的合并和整理
 * - 内存碎片的清理
 * - 渲染对象的重新排列
 * - 性能优化操作
 */
void merge_render_data_blocks(int *render_context)
{
    int object_count;
    int total_objects;
    int *sub_context;
    int active_objects;
    int resource_count;
    int total_resources;
    int64_t layout_offset;
    int64_t current_offset;
    
    // 合并数据块
    if (1 < render_context[0x25]) {
        cleanup_render_resources(render_context, 0);
        object_count = *render_context;
        
        // 清理无效对象
        if ((object_count != 0) &&
           (total_objects = object_count + -1, *(int *)(*(int64_t *)(render_context + 2) + (int64_t)total_objects * 0x30) == 0)) {
            *render_context = total_objects;
            object_count = total_objects;
        }
        
        // 统计活跃对象和资源
        active_objects = 0;
        total_objects = 1;
        total_resources = 0;
        current_offset = 0x20;
        layout_offset = current_offset;
        
        if (1 < render_context[0x25]) {
            do {
                sub_context = (int *)(*(int64_t *)(render_context + 0x28) + layout_offset);
                object_count = *sub_context;
                
                // 清理子上下文中的无效对象
                if ((object_count != 0) &&
                   (*(int *)(*(int64_t *)(sub_context + 2) + -0x30 + (int64_t)object_count * 0x30) == 0)) {
                    *sub_context = object_count + -1;
                    object_count = object_count + -1;
                }
                
                total_resources = total_resources + sub_context[4];
                active_objects = active_objects + object_count;
                total_objects = total_objects + 1;
                layout_offset = layout_offset + 0x20;
            } while (total_objects < render_context[0x25]);
            
            object_count = *render_context;
        }
        
        // 调整对象数组容量
        total_objects = render_context[1];
        object_count = object_count + active_objects;
        
        if (total_objects < object_count) {
            if (total_objects == 0) {
                total_objects = 8;
            }
            else {
                total_objects = total_objects / 2 + total_objects;
            }
            
            active_objects = object_count;
            if (object_count < total_objects) {
                active_objects = total_objects;
            }
            
            expand_render_objects(render_context, active_objects);
        }
        
        *render_context = object_count;
        object_count = render_context[5];
        total_objects = render_context[4] + total_resources;
        
        // 调整资源数组容量
        if (object_count < total_objects) {
            if (object_count != 0) {
                active_objects = object_count + object_count / 2;
            }
            object_count = total_objects;
            if (total_objects < active_objects) {
                object_count = active_objects;
            }
            
            resize_resource_array(render_context + 4, object_count);
        }
        
        render_context[4] = total_objects;
        object_count = 1;
        *(int64_t *)(render_context + 0x16) =
             *(int64_t *)(render_context + 6) + ((int64_t)total_objects - (int64_t)total_resources) * 2;
        
        // 重新布局资源
        if (1 < render_context[0x25]) {
            do {
                sub_context = (int *)(*(int64_t *)(render_context + 0x28) + current_offset);
                if (*sub_context != 0) {
                    // 注意：此子函数不返回
                    memcpy(((int64_t)*render_context - (int64_t)active_objects) * 0x30 + *(int64_t *)(render_context + 2),
                           *(uint64_t *)(sub_context + 2), (int64_t)*sub_context * 0x30);
                }
                
                if (sub_context[4] != 0) {
                    // 注意：此子函数不返回
                    memcpy(*(uint64_t *)(render_context + 0x16), *(uint64_t *)(sub_context + 6), (int64_t)sub_context[4] * 2);
                }
                
                object_count = object_count + 1;
                current_offset = current_offset + 0x20;
            } while (object_count < render_context[0x25]);
        }
        
        finalize_render_optimization(render_context);
        render_context[0x25] = 1;
    }
    
    return;
}

/**
 * @brief 合并渲染数据块的简化版本
 * @param render_handle 渲染句柄
 * 
 * 该函数是merge_render_data_blocks的简化实现，用于处理特殊情况
 */
void merge_render_data_blocks_simple(uint64_t render_handle)
{
    int *render_context;
    int *unaff_rbx;
    int object_count;
    int total_objects;
    int *sub_context;
    int active_objects;
    int resource_count;
    int total_resources;
    int64_t layout_offset;
    int64_t current_offset;
    
    cleanup_render_resources(render_handle, 0);
    object_count = *unaff_rbx;
    
    // 清理无效对象
    if ((object_count != 0) &&
       (total_objects = object_count + -1, *(int *)(*(int64_t *)(unaff_rbx + 2) + (int64_t)total_objects * 0x30) == 0)) {
        *unaff_rbx = total_objects;
        object_count = total_objects;
    }
    
    // 统计活跃对象和资源
    active_objects = 0;
    total_objects = 1;
    total_resources = 0;
    current_offset = 0x20;
    layout_offset = current_offset;
    
    if (1 < unaff_rbx[0x25]) {
        do {
            sub_context = (int *)(*(int64_t *)(unaff_rbx + 0x28) + layout_offset);
            object_count = *sub_context;
            
            // 清理子上下文中的无效对象
            if ((object_count != 0) &&
               (*(int *)(*(int64_t *)(sub_context + 2) + -0x30 + (int64_t)object_count * 0x30) == 0)) {
                *sub_context = object_count + -1;
                object_count = object_count + -1;
            }
            
            total_resources = total_resources + sub_context[4];
            active_objects = active_objects + object_count;
            total_objects = total_objects + 1;
            layout_offset = layout_offset + 0x20;
        } while (total_objects < unaff_rbx[0x25]);
        
        object_count = *unaff_rbx;
    }
    
    // 调整对象数组容量
    total_objects = 8;
    if (unaff_rbx[1] < object_count + active_objects) {
        expand_render_objects();
    }
    
    *unaff_rbx = object_count + active_objects;
    object_count = unaff_rbx[5];
    total_resources = unaff_rbx[4] + total_resources;
    
    // 调整资源数组容量
    if (object_count < total_resources) {
        if (object_count != 0) {
            total_objects = object_count + object_count / 2;
        }
        object_count = total_resources;
        if (total_resources < total_objects) {
            object_count = total_objects;
        }
        
        resize_resource_array(unaff_rbx + 4, object_count);
    }
    
    unaff_rbx[4] = total_resources;
    object_count = 1;
    *(int64_t *)(unaff_rbx + 0x16) =
         *(int64_t *)(unaff_rbx + 6) + ((int64_t)total_resources - (int64_t)total_resources) * 2;
    
    // 重新布局资源
    if (1 < unaff_rbx[0x25]) {
        do {
            sub_context = (int *)(*(int64_t *)(unaff_rbx + 0x28) + current_offset);
            if (*sub_context != 0) {
                // 注意：此子函数不返回
                memcpy(((int64_t)*unaff_rbx - (int64_t)active_objects) * 0x30 + *(int64_t *)(unaff_rbx + 2),
                       *(uint64_t *)(sub_context + 2), (int64_t)*sub_context * 0x30);
            }
            
            if (sub_context[4] != 0) {
                // 注意：此子函数不返回
                memcpy(*(uint64_t *)(unaff_rbx + 0x16), *(uint64_t *)(sub_context + 6), (int64_t)sub_context[4] * 2);
            }
            
            object_count = object_count + 1;
            current_offset = current_offset + 0x20;
        } while (object_count < unaff_rbx[0x25]);
    }
    
    finalize_render_optimization();
    unaff_rbx[0x25] = 1;
    
    return;
}

/**
 * @brief 合并渲染数据块的基础版本
 * 
 * 该函数是merge_render_data_blocks的另一个简化实现，用于处理默认情况
 */
void merge_render_data_blocks_basic(void)
{
    int *render_context;
    int *unaff_rbx;
    int object_count;
    int total_objects;
    int *sub_context;
    int active_objects;
    int resource_count;
    int total_resources;
    int64_t layout_offset;
    int64_t current_offset;
    
    cleanup_render_resources();
    object_count = *unaff_rbx;
    
    // 清理无效对象
    if ((object_count != 0) &&
       (total_objects = object_count + -1, *(int *)(*(int64_t *)(unaff_rbx + 2) + (int64_t)total_objects * 0x30) == 0)) {
        *unaff_rbx = total_objects;
        object_count = total_objects;
    }
    
    // 统计活跃对象和资源
    active_objects = 0;
    total_objects = 1;
    total_resources = 0;
    current_offset = 0x20;
    layout_offset = current_offset;
    
    if (1 < unaff_rbx[0x25]) {
        do {
            sub_context = (int *)(*(int64_t *)(unaff_rbx + 0x28) + layout_offset);
            object_count = *sub_context;
            
            // 清理子上下文中的无效对象
            if ((object_count != 0) &&
               (*(int *)(*(int64_t *)(sub_context + 2) + -0x30 + (int64_t)object_count * 0x30) == 0)) {
                *sub_context = object_count + -1;
                object_count = object_count + -1;
            }
            
            total_resources = total_resources + sub_context[4];
            active_objects = active_objects + object_count;
            total_objects = total_objects + 1;
            layout_offset = layout_offset + 0x20;
        } while (total_objects < unaff_rbx[0x25]);
        
        object_count = *unaff_rbx;
    }
    
    // 调整对象数组容量
    total_objects = 8;
    if (unaff_rbx[1] < object_count + active_objects) {
        expand_render_objects();
    }
    
    *unaff_rbx = object_count + active_objects;
    object_count = unaff_rbx[5];
    total_resources = unaff_rbx[4] + total_resources;
    
    // 调整资源数组容量
    if (object_count < total_resources) {
        if (object_count != 0) {
            total_objects = object_count + object_count / 2;
        }
        object_count = total_resources;
        if (total_resources < total_objects) {
            object_count = total_objects;
        }
        
        resize_resource_array(unaff_rbx + 4, object_count);
    }
    
    unaff_rbx[4] = total_resources;
    object_count = 1;
    *(int64_t *)(unaff_rbx + 0x16) =
         *(int64_t *)(unaff_rbx + 6) + ((int64_t)total_resources - (int64_t)total_resources) * 2;
    
    // 重新布局资源
    if (1 < unaff_rbx[0x25]) {
        do {
            sub_context = (int *)(*(int64_t *)(unaff_rbx + 0x28) + current_offset);
            if (*sub_context != 0) {
                // 注意：此子函数不返回
                memcpy(((int64_t)*unaff_rbx - (int64_t)active_objects) * 0x30 + *(int64_t *)(unaff_rbx + 2),
                       *(uint64_t *)(sub_context + 2), (int64_t)*sub_context * 0x30);
            }
            
            if (sub_context[4] != 0) {
                // 注意：此子函数不返回
                memcpy(*(uint64_t *)(unaff_rbx + 0x16), *(uint64_t *)(sub_context + 6), (int64_t)sub_context[4] * 2);
            }
            
            object_count = object_count + 1;
            current_offset = current_offset + 0x20;
        } while (object_count < unaff_rbx[0x25]);
    }
    
    finalize_render_optimization();
    unaff_rbx[0x25] = 1;
    
    return;
}

/**
 * @brief 处理渲染数据流
 * 
 * 该函数负责处理渲染数据流，包括：
 * - 数据的批量复制
 * - 资源的批量更新
 * - 渲染状态的同步
 */
void process_render_data_stream(void)
{
    int64_t render_context;
    int data_index;
    int *data_ptr;
    int64_t array_offset;
    
    while (true) {
        data_ptr = (int *)(*(int64_t *)(render_context + 0xa0) + array_offset);
        if (*data_ptr != 0) {
            // 注意：此子函数不返回
            memcpy();
        }
        
        if (data_ptr[4] != 0) break;
        
        data_index = data_index + 1;
        array_offset = array_offset + 0x20;
        if (*(int *)(render_context + 0x94) <= data_index) {
            finalize_render_optimization();
            *(uint32_t *)(render_context + 0x94) = 1;
            return;
        }
    }
    
    // 注意：此子函数不返回
    memcpy(*(uint64_t *)(render_context + 0x58), *(uint64_t *)(data_ptr + 6), (int64_t)data_ptr[4] * 2);
}

/**
 * @brief 空操作函数 - 渲染占位符
 * 
 * 该函数作为占位符使用，用于保持函数表的完整性
 */
void render_nop_operation(void)
{
    return;
}

/**
 * @brief 更新渲染数据统计
 * @param render_context 渲染上下文指针
 * @param object_count 对象数量
 * @param resource_count 资源数量
 * 
 * 该函数负责更新渲染数据统计，包括：
 * - 对象计数器的更新
 * - 资源计数器的更新
 * - 内存使用统计
 * - 性能指标的跟踪
 */
void update_render_data_stats(int *render_context, int object_count, int resource_count)
{
    int *object_ptr;
    int current_objects;
    int total_objects;
    int resource_capacity;
    
    object_ptr = (int *)(*(int64_t *)(render_context + 2) + -0x30 + (int64_t)*render_context * 0x30);
    *object_ptr = *object_ptr + object_count;
    total_objects = render_context[8];
    
    // 更新资源统计
    update_resource_counter(render_context + 8, total_objects + resource_count);
    current_objects = render_context[4];
    *(int64_t *)(render_context + 0x14) = *(int64_t *)(render_context + 10) + (int64_t)total_objects * 0x14;
    object_count = current_objects + object_count;
    total_objects = render_context[5];
    
    // 调整资源容量
    if (total_objects < object_count) {
        if (total_objects == 0) {
            total_objects = 8;
        }
        else {
            total_objects = total_objects / 2 + total_objects;
        }
        
        resource_capacity = object_count;
        if (object_count < total_objects) {
            resource_capacity = total_objects;
        }
        
        resize_resource_array(render_context + 4, resource_capacity);
    }
    
    render_context[4] = object_count;
    *(int64_t *)(render_context + 0x16) = *(int64_t *)(render_context + 6) + (int64_t)current_objects * 2;
    
    return;
}

/**
 * @brief 处理浮点数渲染参数
 * @param render_engine 渲染引擎实例
 * @param vertex_data 顶点数据数组
 * @param normal_data 法线数据数组
 * @param texcoord_data 纹理坐标数组
 * @param color_data 颜色数据数组
 * @param vertex_flags 顶点标志
 * 
 * 该函数负责处理浮点数渲染参数，包括：
 * - 顶点数据的处理和转换
 * - 法线数据的计算
 * - 纹理坐标的处理
 * - 颜色数据的应用
 */
void process_float_render_params(int64_t render_engine, uint64_t *vertex_data, uint64_t *normal_data, 
                                uint64_t *texcoord_data, uint64_t *color_data, uint32_t vertex_flags)
{
    uint32_t vertex_x;
    uint32_t vertex_y;
    uint32_t vertex_z;
    uint32_t vertex_w;
    uint32_t normal_x;
    uint32_t normal_y;
    uint32_t normal_z;
    uint32_t normal_w;
    uint32_t texcoord_u;
    uint32_t texcoord_v;
    uint32_t color_r;
    uint32_t color_g;
    uint32_t color_b;
    uint32_t color_a;
    int16_t vertex_index;
    int64_t data_offset;
    
    vertex_x = *(uint32_t *)((int64_t)texcoord_data + 4);
    vertex_y = *(uint32_t *)normal_data;
    vertex_z = *(uint32_t *)((int64_t)vertex_data + 4);
    vertex_w = *(uint32_t *)texcoord_data;
    vertex_index = *(int16_t *)(render_engine + 0x48);
    color_r = *(uint32_t *)color_data;
    color_g = *(uint32_t *)((int64_t)color_data + 4);
    normal_x = *(uint32_t *)vertex_data;
    normal_y = *(uint32_t *)((int64_t)normal_data + 4);
    normal_z = *(uint32_t *)((int64_t)texcoord_data + 4);
    normal_w = *(uint32_t *)((int64_t)color_data + 4);
    
    // 设置顶点索引
    **(int16_t **)(render_engine + 0x58) = vertex_index;
    *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 2) = vertex_index + 1;
    *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 4) = vertex_index + 2;
    *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 6) = vertex_index;
    *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 8) = vertex_index + 2;
    *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 10) = vertex_index + 3;
    
    // 设置顶点数据
    **(uint64_t **)(render_engine + 0x50) = *vertex_data;
    *(uint64_t *)(*(int64_t *)(render_engine + 0x50) + 8) = *texcoord_data;
    *(uint32_t *)(*(int64_t *)(render_engine + 0x50) + 0x10) = vertex_flags;
    
    data_offset = *(int64_t *)(render_engine + 0x50);
    *(uint32_t *)(data_offset + 0x14) = vertex_y;
    *(uint32_t *)(data_offset + 0x18) = vertex_z;
    
    data_offset = *(int64_t *)(render_engine + 0x50);
    *(uint32_t *)(data_offset + 0x1c) = color_r;
    *(uint32_t *)(data_offset + 0x20) = vertex_x;
    *(uint32_t *)(*(int64_t *)(render_engine + 0x50) + 0x24) = vertex_flags;
    
    *(uint64_t *)(*(int64_t *)(render_engine + 0x50) + 0x28) = *normal_data;
    *(uint64_t *)(*(int64_t *)(render_engine + 0x50) + 0x30) = *color_data;
    *(uint32_t *)(*(int64_t *)(render_engine + 0x50) + 0x38) = vertex_flags;
    
    data_offset = *(int64_t *)(render_engine + 0x50);
    *(uint32_t *)(data_offset + 0x3c) = normal_x;
    *(uint32_t *)(data_offset + 0x40) = normal_y;
    
    data_offset = *(int64_t *)(render_engine + 0x50);
    *(uint32_t *)(data_offset + 0x44) = vertex_w;
    *(uint32_t *)(data_offset + 0x48) = color_g;
    *(uint32_t *)(*(int64_t *)(render_engine + 0x50) + 0x4c) = vertex_flags;
    
    *(int64_t *)(render_engine + 0x50) = *(int64_t *)(render_engine + 0x50) + 0x50;
    *(int *)(render_engine + 0x48) = *(int *)(render_engine + 0x48) + 4;
    *(int64_t *)(render_engine + 0x58) = *(int64_t *)(render_engine + 0x58) + 0xc;
    
    return;
}

// 全局变量声明 - 注意：这些可能与较小符号重叠
uint64_t g_vertex_processor = 0;
uint64_t g_render_pipeline = 0;

/**
 * @brief 执行浮点数插值渲染
 * @param render_engine 渲染引擎实例
 * @param vertex_buffer 顶点缓冲区
 * @param index_buffer 索引缓冲区
 * @param texture_data 纹理数据
 * @param shader_data 着色器数据
 * @param render_flags 渲染标志
 * @param vertex_count 顶点数量
 * @param texture_coords 纹理坐标标志
 * @param render_mode 渲染模式
 * @param scale_factor 缩放因子
 * 
 * 该函数负责执行浮点数插值渲染，包括：
 * - 顶点缓冲区的处理
 * - 索引缓冲区的管理
 * - 纹理数据的应用
 * - 着色器参数的设置
 * - 渲染状态的控制
 */
void execute_float_interpolation_render(int64_t render_engine, int64_t vertex_buffer, int64_t index_buffer, 
                                     uint64_t *texture_data, uint64_t *shader_data, uint64_t *render_flags,
                                     int vertex_count, uint texture_coords, char render_mode, float scale_factor)
{
    float *vertex_ptr;
    uint32_t texture_flag;
    uint32_t shader_flag;
    float vertex_pos;
    int64_t buffer_offset;
    int64_t temp_offset;
    int buffer_size;
    int64_t array_offset;
    int array_capacity;
    int64_t temp_buffer;
    float normal_x;
    float normal_y;
    float normal_z;
    float normal_length;
    uint8_t temp_buffer_2[16];
    uint temp_vertex_count;
    uint temp_texture_coords;
    int64_t stack_offset;
    int stack_size;
    uint64_t temp_offset_2;
    uint64_t vertex_mask;
    
    vertex_mask = g_vertex_processor ^ (uint64_t)temp_buffer_2;
    temp_texture_coords = texture_coords;
    
    if (1 < vertex_count) {
        array_capacity = vertex_count + -1;
        if (render_mode != '\0') {
            array_capacity = vertex_count;
        }
        
        texture_flag = **(uint32_t **)(render_engine + 0x38);
        shader_flag = (*(uint32_t **)(render_engine + 0x38))[1];
        temp_offset_2 = (int64_t)array_capacity;
        temp_buffer_2[0] = 1.0 < scale_factor;
        stack_offset = temp_offset_2;
        
        if ((*(uint8_t *)(render_engine + 0x30) & 1) != 0) {
            temp_texture_coords = texture_coords & 0xffffff;
            stack_size = ((uint8_t)temp_buffer_2[0] + 3) * vertex_count;
            buffer_size = 0x12;
            if (!(bool)temp_buffer_2[0]) {
                buffer_size = 0xc;
            }
            
            update_render_data_stats(render_engine, buffer_size * array_capacity, stack_size);
            // 注意：此子函数不返回
            execute_render_pipeline();
        }
        
        update_render_data_stats(render_engine, array_capacity * 6, array_capacity * 4);
        
        if (0 < temp_offset_2) {
            array_capacity = 0;
            temp_offset = 0;
            
            do {
                array_capacity = array_capacity + 1;
                vertex_pos = *(float *)(vertex_buffer + temp_offset * 8);
                vertex_ptr = (float *)(vertex_buffer + temp_offset * 8);
                temp_offset = temp_offset + 1;
                buffer_offset = 0;
                
                if (array_capacity != vertex_count) {
                    buffer_offset = temp_offset;
                }
                
                normal_y = *(float *)(vertex_buffer + buffer_offset * 8) - vertex_pos;
                normal_z = *(float *)(vertex_buffer + 4 + buffer_offset * 8) - vertex_ptr[1];
                normal_length = normal_z * normal_z + normal_y * normal_y;
                
                if (0.0 < normal_length) {
                    normal_length = 1.0 / sqrt(normal_length);
                    normal_y = normal_y * normal_length;
                    normal_z = normal_z * normal_length;
                }
                
                normal_z = normal_z * scale_factor * 0.5;
                normal_y = normal_y * scale_factor * 0.5;
                
                **(float **)(render_engine + 0x50) = vertex_pos + normal_z;
                *(float *)(*(int64_t *)(render_engine + 0x50) + 4) = vertex_ptr[1] - normal_y;
                
                temp_buffer = *(int64_t *)(render_engine + 0x50);
                *(uint32_t *)(temp_buffer + 8) = texture_flag;
                *(uint32_t *)(temp_buffer + 0xc) = shader_flag;
                *(uint *)(*(int64_t *)(render_engine + 0x50) + 0x10) = texture_coords;
                
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x14) = normal_z + *(float *)(vertex_buffer + buffer_offset * 8);
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x18) =
                     *(float *)(vertex_buffer + 4 + buffer_offset * 8) - normal_y;
                
                temp_buffer = *(int64_t *)(render_engine + 0x50);
                *(uint32_t *)(temp_buffer + 0x1c) = texture_flag;
                *(uint32_t *)(temp_buffer + 0x20) = shader_flag;
                *(uint *)(*(int64_t *)(render_engine + 0x50) + 0x24) = texture_coords;
                
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x28) = *(float *)(vertex_buffer + buffer_offset * 8) - normal_z;
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x2c) =
                     normal_y + *(float *)(vertex_buffer + 4 + buffer_offset * 8);
                
                buffer_offset = *(int64_t *)(render_engine + 0x50);
                *(uint32_t *)(buffer_offset + 0x30) = texture_flag;
                *(uint32_t *)(buffer_offset + 0x34) = shader_flag;
                *(uint *)(*(int64_t *)(render_engine + 0x50) + 0x38) = texture_coords;
                
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x3c) = *vertex_ptr - normal_z;
                *(float *)(*(int64_t *)(render_engine + 0x50) + 0x40) = normal_y + vertex_ptr[1];
                
                buffer_offset = *(int64_t *)(render_engine + 0x50);
                *(uint32_t *)(buffer_offset + 0x44) = texture_flag;
                *(uint32_t *)(buffer_offset + 0x48) = shader_flag;
                *(uint *)(*(int64_t *)(render_engine + 0x50) + 0x4c) = texture_coords;
                
                *(int64_t *)(render_engine + 0x50) = *(int64_t *)(render_engine + 0x50) + 0x50;
                **(uint16_t **)(render_engine + 0x58) = *(uint16_t *)(render_engine + 0x48);
                *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 2) = *(int16_t *)(render_engine + 0x48) + 1;
                *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 4) = *(int16_t *)(render_engine + 0x48) + 2;
                *(uint16_t *)(*(int64_t *)(render_engine + 0x58) + 6) = *(uint16_t *)(render_engine + 0x48);
                *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 8) = *(int16_t *)(render_engine + 0x48) + 2;
                *(int16_t *)(*(int64_t *)(render_engine + 0x58) + 10) = *(int16_t *)(render_engine + 0x48) + 3;
                
                *(int64_t *)(render_engine + 0x58) = *(int64_t *)(render_engine + 0x58) + 0xc;
                *(int *)(render_engine + 0x48) = *(int *)(render_engine + 0x48) + 4;
            } while (temp_offset < temp_offset_2);
        }
    }
    
    // 注意：此子函数不返回
    execute_render_pipeline(vertex_mask ^ (uint64_t)temp_buffer_2);
}

// 函数别名 - 保持向后兼容性
void FUN_180291b40(int *param_1, uint64_t param_2, uint64_t param_3, char param_4) __attribute__((alias("update_float_bounding_box")));
void FUN_180291c70(int *param_1, uint64_t param_2) __attribute__((alias("process_render_params")));
void FUN_180291cf0(int64_t param_1, int param_2, uint64_t param_3, uint64_t param_4) __attribute__((alias("initialize_render_data_block")));
void FUN_180291f60(int *param_1) __attribute__((alias("merge_render_data_blocks")));
void FUN_180291f76(uint64_t param_1) __attribute__((alias("merge_render_data_blocks_simple")));
void FUN_180291f87(void) __attribute__((alias("merge_render_data_blocks_basic")));
void FUN_1802920d0(void) __attribute__((alias("process_render_data_stream")));
void FUN_180292156(void) __attribute__((alias("render_nop_operation")));
void FUN_1802921e0(int *param_1, int param_2, int param_3) __attribute__((alias("update_render_data_stats")));
void FUN_180292290(int64_t param_1, uint64_t *param_2, uint64_t *param_3, uint64_t *param_4, uint64_t *param_5, uint32_t param_6) __attribute__((alias("process_float_render_params")));
void FUN_1802923e0(int64_t param_1, int64_t param_2, int param_3, uint param_4, char param_5, float param_6) __attribute__((alias("execute_float_interpolation_render")));

// 外部函数声明
extern void resize_render_array(int *array_ptr, int new_size);
extern void expand_render_objects(int *context_ptr, int new_capacity);
extern void expand_resource_array(int *array_ptr, int new_size);
extern void cleanup_render_resources(int *context_ptr, int cleanup_flags);
extern void finalize_render_optimization(int *context_ptr);
extern void finalize_render_optimization(void);
extern void update_resource_counter(int *counter_ptr, int new_value);
extern void resize_resource_array(int *array_ptr, int new_size);
extern void execute_render_pipeline(void);
extern void execute_render_pipeline(uint64_t pipeline_mask);
extern uint64_t allocate_render_memory(int64_t size, uint64_t context, uint64_t allocator, uint64_t params, uint64_t flags);