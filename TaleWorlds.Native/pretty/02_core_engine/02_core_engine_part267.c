#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part267.c - 核心引擎模块第267部分
// 包含12个函数，主要处理容器管理、内存分配、向量运算等功能

// 全局变量声明
void *g_memory_allocator;           // 内存分配器
void *g_string_constants;           // 字符串常量池
void *g_vector_math_utils;         // 向量数学工具
void *g_container_manager;         // 容器管理器
void *g_resource_pool;              // 资源池

/**
 * 调整容器容量并处理元素迁移
 * @param container_ptr 容器指针数组
 * @param old_start 原始起始位置
 * @param new_end 新的结束位置
 */
void resize_container_with_migration(longlong *container_ptr, longlong old_start, longlong new_end)
{
    void **element_ptr;
    unsigned longlong element_count;
    unsigned longlong capacity_diff;
    longlong new_buffer;
    void **current_ptr;
    void **end_ptr;
    
    // 计算需要的元素数量
    element_count = (new_end - old_start) / 0x58;
    
    // 检查是否需要扩容
    if ((unsigned longlong)((container_ptr[2] - *container_ptr) / 0x58) < element_count) {
        // 分配新内存
        if (element_count == 0) {
            new_buffer = 0;
        } else {
            new_buffer = allocate_memory(g_memory_allocator, element_count * 0x58, (char)container_ptr[3]);
        }
        
        // 批量迁移元素
        batch_migrate_elements(old_start, new_end, new_buffer);
        
        // 清理旧元素
        element_ptr = (void **)container_ptr[1];
        end_ptr = (void **)*container_ptr;
        if (end_ptr != element_ptr) {
            do {
                // 调用元素析构函数
                (*(void (**)(void *, int)) *end_ptr)(end_ptr, 0);
                end_ptr = end_ptr + 0xb;
            } while (end_ptr != element_ptr);
            end_ptr = (void **)*container_ptr;
        }
        
        // 释放旧内存
        if (end_ptr != (void **)0x0) {
            free_memory(end_ptr);
        }
        
        // 更新容器指针
        *container_ptr = new_buffer;
        new_buffer = element_count * 0x58 + new_buffer;
        container_ptr[2] = new_buffer;
        container_ptr[1] = new_buffer;
    } else {
        // 容量足够，检查是否需要移动元素
        capacity_diff = (container_ptr[1] - *container_ptr) / 0x58;
        if (capacity_diff < element_count) {
            new_buffer = capacity_diff * 0x58 + old_start;
            move_elements_backward(old_start, new_buffer);
            new_buffer = batch_migrate_elements(new_buffer, new_end, container_ptr[1]);
            container_ptr[1] = new_buffer;
        } else {
            // 直接迁移元素
            element_ptr = (void **)move_elements_backward(old_start, new_end);
            void **target_ptr = (void **)container_ptr[1];
            for (end_ptr = element_ptr; end_ptr != target_ptr; end_ptr = end_ptr + 0xb) {
                (*(void (**)(void *, int)) *end_ptr)(end_ptr, 0);
            }
            container_ptr[1] = (longlong)element_ptr;
        }
    }
    return;
}

/**
 * 清空容器并释放所有元素
 * 注意：此函数使用未绑定的寄存器变量，需要特定调用上下文
 */
void clear_container_and_free_elements(void)
{
    void **element_ptr;
    longlong new_buffer;
    void **current_ptr;
    void **end_ptr;
    longlong *unaff_RBP;
    longlong *unaff_RDI;
    
    // 分配新内存（基于未绑定寄存器的值）
    if (unaff_RBP == 0) {
        new_buffer = 0;
    } else {
        new_buffer = allocate_memory(g_memory_allocator, unaff_RBP * 0x58, (char)unaff_RDI[3]);
    }
    
    // 批量迁移元素
    batch_migrate_elements();
    
    // 清理现有元素
    element_ptr = (void **)unaff_RDI[1];
    end_ptr = (void **)*unaff_RDI;
    if (end_ptr != element_ptr) {
        do {
            (*(void (**)(void *, int)) *end_ptr)(end_ptr, 0);
            end_ptr = end_ptr + 0xb;
        } while (end_ptr != element_ptr);
        end_ptr = (void **)*unaff_RDI;
    }
    
    // 释放内存
    if (end_ptr != (void **)0x0) {
        free_memory(end_ptr);
    }
    
    // 更新容器状态
    *unaff_RDI = new_buffer;
    new_buffer = unaff_RBP * 0x58 + new_buffer;
    unaff_RDI[2] = new_buffer;
    unaff_RDI[1] = new_buffer;
    return;
}

/**
 * 在指定位置插入元素并维护容器结构
 * @param param1 容器相关参数
 * @param param2 插入位置参数
 * @param param3 元素计数参数
 */
void insert_element_at_position(unsigned __int64 param1, unsigned __int64 param2, longlong param3)
{
    void **element_ptr;
    void **target_ptr;
    unsigned __int64 temp_value;
    longlong calculated_offset;
    unsigned longlong max_elements;
    unsigned longlong unaff_RBP;
    longlong unaff_RSI;
    longlong unaff_RDI;
    longlong in_R10;
    
    // 计算偏移量
    calculated_offset = SUB168(SEXT816(in_R10) * SEXT816(*(longlong *)(unaff_RDI + 8) - param3), 8);
    max_elements = (calculated_offset >> 4) - (calculated_offset >> 0x3f);
    
    if (max_elements < unaff_RBP) {
        // 需要扩容
        move_elements_backward();
        temp_value = batch_migrate_elements(max_elements * 0x58 + unaff_RSI);
        *(unsigned __int64 *)(unaff_RDI + 8) = temp_value;
    } else {
        // 容量足够，移动元素
        target_ptr = (void **)move_elements_backward();
        element_ptr = *(void **)(unaff_RDI + 8);
        for (void **current_ptr = target_ptr; current_ptr != element_ptr; current_ptr = current_ptr + 0xb) {
            (*(void (**)(void *, int)) *current_ptr)(current_ptr, 0);
        }
        *(void **)(unaff_RDI + 8) = target_ptr;
    }
    return;
}

/**
 * 在有序容器中插入元素并维护排序
 * @param container_ptr 容器指针
 * @param param2 插入参数
 * @param param3 比较参数
 * @param element_data 元素数据指针
 */
void insert_sorted_element(unsigned __int64 *container_ptr, unsigned __int64 param2, unsigned __int64 param3, unsigned int *element_data)
{
    unsigned int *data_ptr;
    unsigned int data2;
    unsigned int data3;
    unsigned int data4;
    void **node_ptr;
    int compare_result;
    longlong new_node;
    void **current_ptr;
    unsigned __int64 temp_value;
    bool should_insert_left;
    
    // 创建新节点
    new_node = allocate_memory(g_memory_allocator, 0x38, *(unsigned char *)(container_ptr + 5), element_data, 0xfffffffffffffffe);
    
    // 复制元素数据
    data_ptr = (unsigned int *)(new_node + 0x20);
    data2 = element_data[1];
    data3 = element_data[2];
    data4 = element_data[3];
    *data_ptr = *element_data;
    *(unsigned int *)(new_node + 0x24) = data2;
    *(unsigned int *)(new_node + 0x28) = data3;
    *(unsigned int *)(new_node + 0x2c) = data4;
    *(unsigned __int64 *)(new_node + 0x30) = *(unsigned __int64 *)(element_data + 4);
    
    temp_value = 0;
    *(unsigned __int64 *)(element_data + 4) = 0;
    should_insert_left = true;
    
    // 查找插入位置
    current_ptr = (void **)container_ptr[2];
    node_ptr = container_ptr;
    while (current_ptr != (void **)0x0) {
        compare_result = memcmp(data_ptr, current_ptr + 4, 0x10);
        should_insert_left = compare_result < 0;
        node_ptr = current_ptr;
        if (should_insert_left) {
            current_ptr = (void **)current_ptr[1];
        } else {
            current_ptr = (void **)*current_ptr;
        }
    }
    
    current_ptr = node_ptr;
    if (should_insert_left) {
        if (node_ptr == (void **)container_ptr[1]) goto LAB_insert_right;
        current_ptr = (void **)create_red_black_tree_node(node_ptr);
    }
    
    compare_result = memcmp(current_ptr + 4, data_ptr, 0x10);
    if (-1 < compare_result) {
        if (*(longlong **)(new_node + 0x30) != (longlong **)0x0) {
            (*(void (**)(void))(*(longlong **)(new_node + 0x30) + 0x38))();
        }
        free_memory(new_node);
    }
    
LAB_insert_right:
    if ((node_ptr != container_ptr) && (compare_result = memcmp(data_ptr, node_ptr + 4, 0x10), -1 < compare_result)) {
        temp_value = 1;
    }
    
    // 插入到红黑树中
    insert_into_red_black_tree(new_node, node_ptr, container_ptr, temp_value);
}

/**
 * 批量复制元素数据到目标位置
 * @param source_start 源起始位置
 * @param source_end 源结束位置
 * @param target_start 目标起始位置
 */
longlong batch_copy_elements(longlong source_start, longlong source_end, longlong target_start)
{
    void **element_ptr;
    longlong element_count;
    longlong total_size;
    void *string_ptr;
    
    // 计算元素数量
    element_count = (source_end - source_start) / 0x58;
    if (0 < element_count) {
        element_ptr = (void **)(source_start + 8);
        total_size = element_count * 0x58;
        do {
            // 复制元素标识符
            *(unsigned int *)((target_start - source_start) + 8 + (longlong)element_ptr) = *(unsigned int *)(element_ptr + 1);
            
            // 复制字符串数据
            string_ptr = get_default_string();
            if ((void *)*element_ptr != (void *)0x0) {
                string_ptr = (void *)*element_ptr;
            }
            strcpy_s(*(void **)((target_start - source_start) + (longlong)element_ptr), 0x40, string_ptr);
            
            element_count = element_count + -1;
            element_ptr = element_ptr + 0xb;
        } while (0 < element_count);
        return total_size + target_start;
    }
    return target_start;
}

/**
 * 按指定数量复制元素
 * @param source_start 源起始位置
 * @param param2 复制参数
 * @param target_start 目标起始位置
 */
longlong copy_elements_by_count(longlong source_start, unsigned __int64 param2, longlong target_start)
{
    void **element_ptr;
    longlong total_size;
    longlong unaff_RDI;
    void *string_ptr;
    
    element_ptr = (void **)(source_start + 8);
    total_size = unaff_RDI * 0x58;
    do {
        *(unsigned int *)((target_start - source_start) + 8 + (longlong)element_ptr) = *(unsigned int *)(element_ptr + 1);
        string_ptr = get_default_string();
        if ((void *)*element_ptr != (void *)0x0) {
            string_ptr = (void *)*element_ptr;
        }
        strcpy_s(*(void **)((target_start - source_start) + (longlong)element_ptr), 0x40, string_ptr);
        unaff_RDI = unaff_RDI + -1;
        element_ptr = element_ptr + 0xb;
    } while (0 < unaff_RDI);
    return total_size + target_start;
}

/**
 * 简单的参数返回函数
 * @param param1 输入参数1
 * @param param2 输入参数2
 * @param param3 输入参数3
 * @return 返回param3
 */
unsigned __int64 simple_return_function(unsigned __int64 param1, unsigned __int64 param2, unsigned __int64 param3)
{
    return param3;
}

/**
 * 批量初始化元素结构
 * @param source_start 源数据起始位置
 * @param source_end 源数据结束位置
 * @param target_ptr 目标指针
 * @param param4 初始化参数
 */
unsigned __int64 *batch_initialize_elements(longlong source_start, longlong source_end, unsigned __int64 *target_ptr, unsigned __int64 param4)
{
    void *default_ptr;
    void *string_data;
    unsigned __int64 init_flag;
    
    init_flag = 0xfffffffffffffffe;
    if (source_start != source_end) {
        source_start = source_start - (longlong)target_ptr;
        do {
            *target_ptr = get_default_element_ptr();
            target_ptr[1] = 0;
            *(unsigned int *)(target_ptr + 2) = 0;
            *target_ptr = get_element_constructor();
            target_ptr[1] = target_ptr + 3;
            *(unsigned int *)(target_ptr + 2) = 0;
            *(unsigned char *)(target_ptr + 3) = 0;
            *(unsigned int *)(target_ptr + 2) = *(unsigned int *)(source_start + 0x10 + (longlong)target_ptr);
            
            string_data = *(void **)(source_start + 8 + (longlong)target_ptr);
            default_ptr = get_default_string();
            if (string_data != (void *)0x0) {
                default_ptr = string_data;
            }
            strcpy_s(target_ptr[1], 0x40, default_ptr, param4, init_flag);
            target_ptr = target_ptr + 0xb;
        } while (source_start + (longlong)target_ptr != source_end);
    }
    return target_ptr;
}

/**
 * 处理纹理相关操作
 * @param param1 纹理参数
 */
void process_texture_operations(longlong param1)
{
    bool has_texture;
    bool operation_result;
    unsigned int texture_id;
    unsigned longlong *texture_ptr;
    longlong texture_handle;
    unsigned longlong texture_size;
    unsigned char texture_data[32];
    unsigned int stack_param1;
    unsigned __int64 stack_param2;
    void *stack_param3;
    unsigned longlong *stack_param4;
    unsigned int stack_param5;
    unsigned longlong stack_params[4];
    unsigned __int64 stack_param6;
    
    stack_param2 = 0xfffffffffffffffe;
    stack_param6 = g_texture_manager ^ (unsigned longlong)texture_data;
    has_texture = false;
    stack_param1 = 0;
    *(unsigned char *)(param1 + 0x1d8) = 1;
    
    texture_handle = *(longlong *)(param1 + 0x1e0);
    texture_ptr = stack_param4;
    if (texture_handle != 0) {
        stack_param3 = get_texture_constants();
        stack_params[0] = 0;
        stack_param4 = (unsigned longlong *)0x0;
        stack_param5 = 0;
        
        // 分配纹理内存
        texture_ptr = (unsigned longlong *)allocate_memory(g_memory_allocator, 0x16, 0x13);
        *(unsigned char *)texture_ptr = 0;
        stack_param4 = texture_ptr;
        texture_id = generate_texture_id(texture_ptr);
        stack_params[0] = CONCAT44(stack_params[0]._4_4_, texture_id);
        
        // 设置纹理标识
        *(unsigned int *)texture_ptr = 0x5f657375;  // "_esu"
        *(unsigned int *)((longlong)texture_ptr + 4) = 0x74726976;  // "triv"
        *(unsigned int *)(texture_ptr + 1) = 0x5f6c6175;  // "_lau"
        *(unsigned int *)((longlong)texture_ptr + 0xc) = 0x74786574;  // "txet"
        *(unsigned int *)(texture_ptr + 2) = 0x6e697275;  // "niru"
        *(unsigned short *)((longlong)texture_ptr + 0x14) = 0x67;  // "g"
        stack_param5 = 0x15;
        has_texture = true;
        stack_param1 = 1;
        
        texture_handle = load_texture_from_file(texture_handle, &stack_param3, 0);
        if (texture_handle != 0) {
            operation_result = true;
            goto LAB_texture_loaded;
        }
    }
    operation_result = false;
    
LAB_texture_loaded:
    if (has_texture) {
        stack_param1 = 0;
        stack_param3 = get_texture_constants();
        if (texture_ptr != (unsigned longlong *)0x0) {
            free_memory(texture_ptr);
        }
        stack_param4 = (unsigned longlong *)0x0;
        stack_params[0] = stack_params[0] & 0xffffffff00000000;
        stack_param3 = get_default_element_ptr();
    }
    
    if (operation_result) {
        stack_param3 = get_error_string();
        stack_param4 = stack_params;
        stack_params[0] = stack_params[0] & 0xffffffffffffff00;
        stack_param5 = 0x15;
        strcpy_s(stack_params, 0x20, get_error_message());
        texture_size = load_texture_from_file(*(unsigned __int64 *)(param1 + 0x1e0), &stack_param3, 1);
        *(unsigned longlong *)(param1 + 0x140) = *(unsigned longlong *)(param1 + 0x140) & ~texture_size;
        update_texture_cache(param1);
        stack_param3 = get_default_element_ptr();
    }
    
    // 清理栈数据
    cleanup_texture_stack(stack_param6 ^ (unsigned longlong)texture_data);
}

/**
 * 在容器中查找指定大小的元素
 * @param container_ptr 容器指针
 * @param size_param 大小参数
 * @return 找到的元素指针
 */
longlong *find_element_by_size(unsigned __int64 *container_ptr, unsigned longlong size_param)
{
    longlong *element_ptr;
    unsigned __int64 *current_ptr;
    unsigned __int64 *previous_ptr;
    
    current_ptr = (unsigned __int64 *)container_ptr[2];
    previous_ptr = container_ptr;
    if (current_ptr != (unsigned __int64 *)0x0) {
        do {
            if ((unsigned longlong)current_ptr[4] < size_param) {
                current_ptr = (unsigned __int64 *)*current_ptr;
            } else {
                previous_ptr = current_ptr;
                current_ptr = (unsigned __int64 *)current_ptr[1];
            }
        } while (current_ptr != (unsigned __int64 *)0x0);
        
        if ((previous_ptr != container_ptr) && ((unsigned longlong)previous_ptr[4] <= size_param)) {
            return (longlong *)previous_ptr[5];
        }
    }
    
    // 尝试从全局缓存中获取
    element_ptr = *(longlong **)(size_param + 0x210);
    if (element_ptr != (longlong **)0x0) {
        (*(void (**)(longlong *))(*element_ptr + 0x28))(element_ptr);
        (*(void (**)(longlong *))(*element_ptr + 0x38))(element_ptr);
    }
    return element_ptr;
}

/**
 * 更新容器中的元素引用
 * @param container_ptr 容器指针
 * @param new_element_ptr 新元素指针
 * @param element_id 元素ID
 */
void update_container_element_reference(longlong *container_ptr, longlong *new_element_ptr, unsigned int element_id)
{
    longlong *old_element_ptr;
    longlong *temp_ptr;
    
    // 清理旧元素
    if (new_element_ptr != (longlong *)0x0) {
        (*(void (**)(longlong *))(*new_element_ptr + 0x28))(new_element_ptr);
    }
    
    old_element_ptr = (longlong *)*container_ptr;
    *container_ptr = (longlong)new_element_ptr;
    if (old_element_ptr != (longlong *)0x0) {
        (*(void (**)(void))(*old_element_ptr + 0x38))();
    }
    
    container_ptr[3] = (longlong)new_element_ptr;
    *(unsigned int *)(container_ptr + 4) = element_id;
    notify_element_changed();
    
    old_element_ptr = (longlong *)container_ptr[5];
    if (old_element_ptr != (longlong *)0x0) {
        (*(void (**)(longlong *))(*old_element_ptr + 0x28))(old_element_ptr);
    }
    
    temp_ptr = (longlong *)container_ptr[1];
    container_ptr[1] = (longlong)old_element_ptr;
    if (temp_ptr != (longlong *)0x0) {
        (*(void (**)(void))(*temp_ptr + 0x38))();
    }
    
    *(unsigned short *)(container_ptr + 6) = 0;
    *(unsigned char *)((longlong)container_ptr + 0x32) = 0;
    return;
}

/**
 * 销毁容器及其所有元素
 * @param container_ptr 容器指针
 */
void destroy_container_and_elements(unsigned __int64 *container_ptr)
{
    longlong *element_ptr;
    
    if (container_ptr[1] != 0) {
        if (*(char *)((longlong)container_ptr + 0x32) != '\0') {
            release_resource(*container_ptr);
        }
        cleanup_container_data(container_ptr + 2);
        if (*(char *)(container_ptr + 6) != '\0') {
            release_resource(*container_ptr);
        }
        if (*(char *)((longlong)container_ptr + 0x31) != '\0') {
            release_resource(*container_ptr);
        }
        element_ptr = (longlong *)container_ptr[1];
        container_ptr[1] = 0;
        if (element_ptr != (longlong *)0x0) {
            // 注意：此处有复杂的跳转表处理
            (*(void (**)(void))(*element_ptr + 0x38))();
            return;
        }
    }
    return;
}

/**
 * 完全销毁容器及其所有引用
 * @param container_ptr 容器指针
 */
void complete_container_destruction(longlong *container_ptr)
{
    if (*container_ptr != 0) {
        destroy_container_and_elements();
    }
    cleanup_container_data(container_ptr + 2);
    if ((longlong *)container_ptr[5] != (longlong *)0x0) {
        (*(void (**)(void))(*(longlong *)container_ptr[5] + 0x38))();
    }
    if ((longlong *)container_ptr[1] != (longlong *)0x0) {
        (*(void (**)(void))(*(longlong *)container_ptr[1] + 0x38))();
    }
    if ((longlong *)*container_ptr != (longlong *)0x0) {
        (*(void (**)(void))(*(longlong *)*container_ptr + 0x38))();
    }
    return;
}

/**
 * 执行向量标准化操作
 * @param param1 向量参数
 * @param param2 数据参数
 */
void normalize_vector_operation(unsigned __int64 param1, longlong param2)
{
    float *vector_ptr;
    char is_negative;
    float x_component;
    float y_component;
    float z_component;
    float w_component;
    float result_x;
    float result_y;
    float result_z;
    float result_w;
    float magnitude;
    
    // 获取向量分量
    x_component = *(float *)(param2 + 0x34);
    vector_ptr = (float *)(param2 + 0x14);
    z_component = *(float *)(param2 + 0x38);
    w_component = *(float *)(param2 + 0x3c);
    y_component = *vector_ptr;
    result_y = *(float *)(param2 + 0x18);
    result_w = *(float *)(param2 + 0x1c);
    
    // 计算叉积
    magnitude = (y_component * w_component - x_component * result_w) * *(float *)(param2 + 0x28) +
               (result_w * z_component - result_y * w_component) * *(float *)(param2 + 0x24) +
               (x_component * result_y - y_component * z_component) * *(float *)(param2 + 0x2c);
    
    is_negative = magnitude < 0.0;
    result_x = x_component * y_component + result_y * z_component + w_component * result_w;
    y_component = y_component - x_component * result_x;
    result_w = result_w - w_component * result_x;
    result_y = result_y - z_component * result_x;
    *vector_ptr = y_component;
    *(float *)(param2 + 0x18) = result_y;
    *(float *)(param2 + 0x1c) = result_w;
    *(unsigned int *)(param2 + 0x20) = 0x7f7fffff;  // 最大浮点数
    
    // 检查向量长度
    x_component = result_w * result_w;
    if (y_component * y_component + result_y * result_y + x_component < 1e-05) {
        // 向量太短，重新计算
        magnitude = *(float *)(param2 + 0x38) * 0.1;
        y_component = *(float *)(param2 + 0x38) * 0.7 - *(float *)(param2 + 0x3c) * 0.2;
        z_component = *(float *)(param2 + 0x3c) * 0.1 - *(float *)(param2 + 0x34) * 0.7;
        result_w = *(float *)(param2 + 0x34) * 0.2 - magnitude;
        *vector_ptr = y_component;
        *(float *)(param2 + 0x18) = z_component;
        *(float *)(param2 + 0x1c) = result_w;
        *(unsigned int *)(param2 + 0x20) = 0x7f7fffff;
        x_component = result_w * result_w;
        if (y_component * y_component + z_component * z_component + x_component < 1e-05) {
            // 再次尝试
            y_component = *(float *)(param2 + 0x38) * 0.35 - *(float *)(param2 + 0x3c) * 0.17;
            result_w = *(float *)(param2 + 0x34) * 0.17 - *(float *)(param2 + 0x38) * 0.73;
            *vector_ptr = y_component;
            *(float *)(param2 + 0x18) = *(float *)(param2 + 0x3c) * 0.73 - *(float *)(param2 + 0x34) * 0.35;
            *(float *)(param2 + 0x1c) = result_w;
            *(unsigned int *)(param2 + 0x20) = 0x7f7fffff;
        }
    }
    
    // 处理向量结果
    process_vector_result(vector_ptr, x_component, is_negative, magnitude, y_component, result_w);
    
    // 更新法线向量
    x_component = *(float *)(param2 + 0x38);
    w_component = x_component * vector_ptr[2] - *(float *)(param2 + 0x3c) * vector_ptr[1];
    y_component = *(float *)(param2 + 0x34) * vector_ptr[1] - *vector_ptr * x_component;
    z_component = *vector_ptr * *(float *)(param2 + 0x3c) - *(float *)(param2 + 0x34) * vector_ptr[2];
    *(float *)(param2 + 0x24) = w_component;
    *(float *)(param2 + 0x28) = z_component;
    *(float *)(param2 + 0x2c) = y_component;
    *(unsigned int *)(param2 + 0x30) = 0x7f7fffff;
    
    if (w_component * w_component + z_component * z_component + y_component * y_component < 1e-05) {
        // 法线向量太短，重新计算
        z_component = x_component * 0.4 - *(float *)(param2 + 0x3c) * 0.8;
        w_component = *(float *)(param2 + 0x3c) * 0.2 - *(float *)(param2 + 0x34) * 0.4;
        result_w = *(float *)(param2 + 0x34) * 0.8 - x_component * 0.2;
        *vector_ptr = z_component;
        vector_ptr[1] = w_component;
        vector_ptr[2] = result_w;
        vector_ptr[3] = 3.4028235e+38;  // 最大浮点数
        
        w_component = w_component * w_component;
        y_component = result_w * result_w;
        magnitude = z_component * z_component + w_component + y_component;
        if (magnitude < 1e-05) {
            z_component = *(float *)(param2 + 0x3c);
            result_x = *(float *)(param2 + 0x34);
            w_component = *(float *)(param2 + 0x38) * 0.39 - z_component * 0.67;
            result_w = result_x * 0.67 - *(float *)(param2 + 0x38) * 0.76;
            *vector_ptr = w_component;
            vector_ptr[1] = z_component * 0.76 - result_x * 0.39;
            vector_ptr[2] = result_w;
            vector_ptr[3] = 3.4028235e+38;
            z_component = w_component;
        }
        process_vector_result(w_component, y_component, magnitude, x_component * 0.2, z_component, result_w);
        x_component = *vector_ptr;
        z_component = vector_ptr[1];
        w_component = vector_ptr[2];
        *(float *)(param2 + 0x24) = *(float *)(param2 + 0x38) * vector_ptr[2] - *(float *)(param2 + 0x3c) * vector_ptr[1];
        *(float *)(param2 + 0x28) = x_component * *(float *)(param2 + 0x3c) - *(float *)(param2 + 0x34) * w_component;
        *(float *)(param2 + 0x2c) = *(float *)(param2 + 0x34) * z_component - x_component * *(float *)(param2 + 0x38);
        *(unsigned int *)(param2 + 0x30) = 0x7f7fffff;
    }
    
    // 处理负值情况
    if (is_negative != '\0') {
        *(unsigned int *)(param2 + 0x24) = *(unsigned int *)(param2 + 0x24) ^ 0x80000000;
        *(unsigned int *)(param2 + 0x28) = *(unsigned int *)(param2 + 0x28) ^ 0x80000000;
        *(unsigned int *)(param2 + 0x2c) = *(unsigned int *)(param2 + 0x2c) ^ 0x80000000;
        *(unsigned int *)(param2 + 0x30) = 0x7f7fffff;
    }
    return;
}

/**
 * 在骨骼动画中插值关键帧
 * @param skeleton_ptr 骨骼指针
 * @param animation_ptr 动画指针
 * @param frame1 第一帧
 * @param frame2 第二帧
 * @param blend_factor 混合因子
 */
void interpolate_keyframe_animation(longlong *skeleton_ptr, longlong *animation_ptr, int frame1, int frame2, float blend_factor)
{
    unsigned __int64 *bone_ptr;
    unsigned __int64 *temp_ptr;
    float *transform_ptr;
    float weight1;
    float weight2;
    float result_x;
    float result_y;
    float result_z;
    unsigned int bone_count1;
    unsigned int bone_count2;
    unsigned int index;
    longlong offset1;
    longlong offset2;
    unsigned int current_index;
    longlong bone_data1;
    longlong bone_data2;
    unsigned int temp_index;
    float blend_weights[16];
    longlong *stack_params[2];
    int frame_indices[2];
    int frame_params[2];
    unsigned __int64 temp_param1;
    longlong **param_ptr1;
    longlong **param_ptr2;
    longlong *stack_ptr1;
    longlong **stack_ptr2;
    unsigned __int64 stack_param1;
    unsigned __int64 stack_param2;
    int *frame_ptr;
    longlong *stack_ptr3;
    longlong **stack_ptr4;
    unsigned __int64 stack_param3;
    unsigned __int64 stack_param4;
    int *frame_ptr2;
    longlong *stack_params2[2];
    void *callback1;
    void *callback2;
    unsigned __int64 stack_param5;
    
    stack_param5 = 0xfffffffffffffffe;
    frame_indices[0] = frame1;
    frame_params[0] = frame2;
    initialize_animation_system();
    
    bone_count1 = *(unsigned int *)(skeleton_ptr[1] + 0x10);
    bone_count2 = *(unsigned int *)(skeleton_ptr[1] + 0x60);
    
    if ((int)bone_count1 < 0xc9) {
        current_index = 0;
        if (0.001 <= blend_factor) {
            if (blend_factor <= 0.999) {
                temp_index = current_index;
                if (bone_count1 != 0) {
                    do {
                        offset1 = (longlong)(int)temp_index;
                        bone_data1 = *(longlong *)(*animation_ptr + 8 + (longlong)frame_params[0] * 0x50);
                        weight2 = 1.0 - blend_factor;
                        bone_data2 = *(longlong *)(*animation_ptr + 8 + (longlong)frame_indices[0] * 0x50);
                        result_y = *(float *)(bone_data1 + 4 + offset1 * 0x10);
                        result_z = *(float *)(bone_data2 + 4 + offset1 * 0x10);
                        weight1 = *(float *)(bone_data1 + 8 + offset1 * 0x10);
                        result_x = *(float *)(bone_data2 + 8 + offset1 * 0x10);
                        transform_ptr = (float *)(*(longlong *)(skeleton_ptr[1] + 0x40) + offset1 * 0x10);
                        *transform_ptr = blend_factor * *(float *)(bone_data2 + offset1 * 0x10) + weight2 * *(float *)(bone_data1 + offset1 * 0x10);
                        transform_ptr[1] = weight2 * result_y + blend_factor * result_z;
                        transform_ptr[2] = weight2 * weight1 + blend_factor * result_x;
                        transform_ptr[3] = 3.4028235e+38;
                        temp_index = temp_index + 1;
                    } while (temp_index < bone_count1);
                }
                
                if (bone_count2 != 0) {
                    do {
                        offset2 = (longlong)(int)current_index;
                        bone_data1 = *(longlong *)(*animation_ptr + 0x30 + (longlong)frame_params[0] * 0x50);
                        weight2 = 1.0 - blend_factor;
                        bone_data2 = *(longlong *)(*animation_ptr + 0x30 + (longlong)frame_indices[0] * 0x50);
                        result_y = *(float *)(bone_data1 + 4 + offset2 * 0x10);
                        result_z = *(float *)(bone_data2 + 4 + offset2 * 0x10);
                        weight1 = *(float *)(bone_data1 + 8 + offset2 * 0x10);
                        result_x = *(float *)(bone_data2 + 8 + offset2 * 0x10);
                        offset1 = offset2 * 0x5c;
                        transform_ptr = (float *)(*(longlong *)(skeleton_ptr[1] + 0x68) + 0x34 + offset1);
                        *transform_ptr = blend_factor * *(float *)(bone_data2 + offset2 * 0x10) + weight2 * *(float *)(bone_data1 + offset2 * 0x10);
                        transform_ptr[1] = weight2 * result_y + blend_factor * result_z;
                        transform_ptr[2] = weight2 * weight1 + blend_factor * result_x;
                        transform_ptr[3] = 3.4028235e+38;
                        
                        bone_data1 = *(longlong *)(skeleton_ptr[1] + 0x68);
                        result_y = *(float *)(bone_data1 + 0x38 + offset1);
                        result_z = *(float *)(bone_data1 + 0x34 + offset1);
                        weight1 = *(float *)(bone_data1 + 0x3c + offset1);
                        result_x = result_z * result_z + result_y * result_y + weight1 * weight1;
                        blend_weights = fast_inverse_sqrt((unsigned int)result_x, (unsigned int)result_x);
                        weight2 = blend_weights._0_4_;
                        result_x = weight2 * 0.5 * (3.0 - result_x * weight2 * weight2);
                        *(float *)(bone_data1 + 0x34 + offset1) = result_z * result_x;
                        *(float *)(bone_data1 + 0x38 + offset1) = result_y * result_x;
                        *(float *)(bone_data1 + 0x3c + offset1) = weight1 * result_x;
                        normalize_vector_operation(bone_data1, offset1 + *(longlong *)(skeleton_ptr[1] + 0x68));
                        current_index = current_index + 1;
                    } while (current_index < bone_count2);
                }
            } else {
                // blend_factor > 0.999，直接使用第二帧
                temp_index = current_index;
                if (bone_count1 != 0) {
                    do {
                        bone_ptr = (unsigned __int64 *)(*(longlong *)(*animation_ptr + 8 + (longlong)frame_indices[0] * 0x50) + (longlong)(int)temp_index * 0x10);
                        temp_param1 = bone_ptr[1];
                        temp_ptr = (unsigned __int64 *)(*(longlong *)(skeleton_ptr[1] + 0x40) + (longlong)(int)temp_index * 0x10);
                        *temp_ptr = *bone_ptr;
                        temp_ptr[1] = temp_param1;
                        temp_index = temp_index + 1;
                    } while (temp_index < bone_count1);
                }
                
                if (bone_count2 != 0) {
                    do {
                        bone_ptr = (unsigned __int64 *)(*(longlong *)(*animation_ptr + 0x30 + (longlong)frame_indices[0] * 0x50) + (longlong)(int)current_index * 0x10);
                        temp_param1 = bone_ptr[1];
                        offset2 = (longlong)(int)current_index * 0x5c;
                        temp_ptr = (unsigned __int64 *)(*(longlong *)(skeleton_ptr[1] + 0x68) + 0x34 + offset2);
                        *temp_ptr = *bone_ptr;
                        temp_ptr[1] = temp_param1;
                        bone_data1 = *(longlong *)(skeleton_ptr[1] + 0x68);
                        result_y = *(float *)(bone_data1 + 0x38 + offset2);
                        result_z = *(float *)(bone_data1 + 0x34 + offset2);
                        weight1 = *(float *)(bone_data1 + 0x3c + offset2);
                        result_x = result_z * result_z + result_y * result_y + weight1 * weight1;
                        blend_weights = fast_inverse_sqrt((unsigned int)result_x, (unsigned int)result_x);
                        weight2 = blend_weights._0_4_;
                        result_x = weight2 * 0.5 * (3.0 - result_x * weight2 * weight2);
                        *(float *)(bone_data1 + 0x34 + offset2) = result_x * result_z;
                        *(float *)(bone_data1 + 0x38 + offset2) = result_x * result_y;
                        *(float *)(bone_data1 + 0x3c + offset2) = result_x * weight1;
                        normalize_vector_operation(bone_data1, offset2 + *(longlong *)(skeleton_ptr[1] + 0x68));
                        current_index = current_index + 1;
                    } while (current_index < bone_count2);
                }
            }
        } else {
            // blend_factor < 0.001，直接使用第一帧
            temp_index = current_index;
            if (bone_count1 != 0) {
                do {
                    bone_ptr = (unsigned __int64 *)(*(longlong *)(*animation_ptr + 8 + (longlong)frame_params[0] * 0x50) + (longlong)(int)temp_index * 0x10);
                    temp_param1 = bone_ptr[1];
                    temp_ptr = (unsigned __int64 *)(*(longlong *)(skeleton_ptr[1] + 0x40) + (longlong)(int)temp_index * 0x10);
                    *temp_ptr = *bone_ptr;
                    temp_ptr[1] = temp_param1;
                    temp_index = temp_index + 1;
                } while (temp_index < bone_count1);
            }
            
            if (bone_count2 != 0) {
                do {
                    bone_ptr = (unsigned __int64 *)(*(longlong *)(*animation_ptr + 0x30 + (longlong)frame_params[0] * 0x50) + (longlong)(int)current_index * 0x10);
                    temp_param1 = bone_ptr[1];
                    offset2 = (longlong)(int)current_index * 0x5c;
                    temp_ptr = (unsigned __int64 *)(*(longlong *)(skeleton_ptr[1] + 0x68) + 0x34 + offset2);
                    *temp_ptr = *bone_ptr;
                    temp_ptr[1] = temp_param1;
                    bone_data1 = *(longlong *)(skeleton_ptr[1] + 0x68);
                    result_y = *(float *)(bone_data1 + 0x38 + offset2);
                    result_z = *(float *)(bone_data1 + 0x34 + offset2);
                    weight1 = *(float *)(bone_data1 + 0x3c + offset2);
                    result_x = result_z * result_z + result_y * result_y + weight1 * weight1;
                    blend_weights = fast_inverse_sqrt((unsigned int)result_x, (unsigned int)result_x);
                    weight2 = blend_weights._0_4_;
                    result_x = weight2 * 0.5 * (3.0 - result_x * weight2 * weight2);
                    *(float *)(bone_data1 + 0x34 + offset2) = result_x * result_z;
                    *(float *)(bone_data1 + 0x38 + offset2) = result_x * result_y;
                    *(float *)(bone_data1 + 0x3c + offset2) = result_x * weight1;
                    normalize_vector_operation(bone_data1, offset2 + *(longlong *)(skeleton_ptr[1] + 0x68));
                    current_index = current_index + 1;
                } while (current_index < bone_count2);
            }
        }
    } else {
        // 骨骼数量过多，使用批量处理
        param_ptr1 = stack_params2;
        param_ptr2 = stack_params;
        stack_param1 = (void *)frame_params;
        stack_param2 = &blend_factor;
        frame_ptr = frame_indices;
        callback1 = batch_process_animation_frame1;
        callback2 = batch_process_animation_frame2;
        stack_params[0] = animation_ptr;
        stack_ptr1 = skeleton_ptr;
        stack_params2[0] = (longlong *)allocate_memory_with_callback(g_memory_allocator, 0x28, 8, get_animation_constants());
        *stack_params2[0] = (longlong)stack_ptr1;
        stack_params2[0][1] = (longlong)param_ptr2;
        *(unsigned int *)(stack_params2[0] + 2) = (unsigned int)stack_param1;
        *(unsigned int *)((longlong)stack_params2[0] + 0x14) = stack_param1._4_4_;
        *(unsigned int *)(stack_params2[0] + 3) = (unsigned int)stack_param2;
        *(unsigned int *)((longlong)stack_params2[0] + 0x1c) = stack_param2._4_4_;
        stack_params2[0][4] = (longlong)frame_ptr;
        param_ptr1 = stack_params2;
        temp_param1 = 0xffffffffffffffff;
        batch_process_bone_data((int)frame_ptr, 0, bone_count1, 0x10, 0xffffffffffffffff, param_ptr1, param_ptr2);
        
        stack_ptr4 = stack_params;
        stack_param3 = frame_params;
        stack_param4 = &blend_factor;
        frame_ptr2 = frame_indices;
        stack_param1 = batch_process_animation_callback1;
        stack_param2 = (unsigned int *)&batch_process_animation_callback2;
        stack_ptr3 = skeleton_ptr;
        stack_ptr1 = (longlong *)allocate_memory_with_callback(g_memory_allocator, 0x28, 8, get_animation_constants(), temp_param1, param_ptr1, &stack_ptr1);
        *stack_ptr1 = (longlong)stack_ptr3;
        stack_ptr1[1] = (longlong)stack_ptr4;
        *(unsigned int *)(stack_ptr1 + 2) = (unsigned int)stack_param3;
        *(unsigned int *)((longlong)stack_ptr1 + 0x14) = stack_param3._4_4_;
        *(unsigned int *)(stack_ptr1 + 3) = (unsigned int)stack_param4;
        *(unsigned int *)((longlong)stack_ptr1 + 0x1c) = stack_param4._4_4_;
        stack_ptr1[4] = (longlong)frame_ptr2;
        batch_process_bone_data((int)frame_ptr2, 0, bone_count2, 0x10, 0xffffffffffffffff, &stack_ptr1);
    }
    
    *(unsigned char *)(skeleton_ptr + 6) = 1;
    return;
}

// 函数声明（简化实现）
void *allocate_memory(void *allocator, size_t size, int flags);
void free_memory(void *ptr);
void batch_migrate_elements(longlong start, longlong end, longlong target);
void move_elements_backward(longlong start, longlong end);
longlong allocate_memory_with_callback(void *allocator, size_t size, int flags, void *callback, ...);
void *get_default_string(void);
void *get_default_element_ptr(void);
void *get_element_constructor(void);
void *get_texture_constants(void);
unsigned int generate_texture_id(void *ptr);
longlong load_texture_from_file(longlong handle, void **params, int flags);
void update_texture_cache(longlong param);
void cleanup_texture_stack(unsigned __int64 param);
void release_resource(longlong resource);
void cleanup_container_data(longlong *ptr);
void notify_element_changed(void);
void process_vector_result(float *vector, float magnitude, char is_negative, float param1, float param2, float param3);
void initialize_animation_system(void);
void *get_animation_constants(void);
void *batch_process_animation_frame1(void);
void *batch_process_animation_frame2(void);
void batch_process_bone_data(int frame, int param1, unsigned int count, int param3, unsigned __int64 param4, longlong **param5, ...);
void insert_into_red_black_tree(longlong node, longlong parent, longlong *container, unsigned __int64 param);
void *create_red_black_tree_node(void *param);
unsigned __int64 CONCAT44(unsigned int high, unsigned int low);
unsigned __int64 SUB168(unsigned __int64 param1, int param2);
longlong SEXT816(longlong param);
void *get_error_message(void);
void *get_error_string(void);
unsigned __int64 fast_inverse_sqrt(unsigned int param1, unsigned int param2);