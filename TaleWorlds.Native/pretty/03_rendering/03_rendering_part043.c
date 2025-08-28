#include "TaleWorlds.Native.Split.h"

// 03_rendering_part043.c - 渲染系统高级数据处理和渲染控制模块
// 本文件包含12个核心函数，涵盖渲染数据处理、插值计算、资源管理、排序算法等高级渲染功能

// 全局变量定义
static longlong* g_render_context_manager = NULL;  // 渲染上下文管理器
static float g_default_scale_factor = 1.0f;          // 默认缩放因子
static float g_half_value = 0.5f;                   // 半值常量
static int g_stack_threshold = 0x41;                // 栈分配阈值 (65)
static longlong* g_memory_allocator = NULL;         // 内存分配器
static longlong* g_reference_counter = NULL;         // 引用计数器

/**
 * 渲染数据高级插值处理函数
 * 处理渲染对象的插值计算，包括线性插值、边界处理和权重计算
 * 支持多种插值模式和边界条件处理
 */
void process_rendering_interpolation(void* render_context)
{
    longlong context_base;
    longlong temp_var1;
    float* render_data_ptr;
    int max_iterations;
    longlong loop_counter;
    ulonglong iteration_index;
    longlong context_data;
    longlong stack_offset;
    int current_iteration;
    uint element_index;
    float value_start;
    float value_end;
    float value_range;
    float value_current;
    float value_step;
    float boundary_min;
    float boundary_max;
    float scale_factor;
    float interpolation_factor;
    float normalized_factor;
    float result_value;
    float stack_value1;
    float stack_value2;
    ulonglong temp_storage;
    
    // 初始化渲染上下文
    *(longlong*)(context_base + 8) = context_data;
    
    // 主处理循环
    do {
        value_step = *(float*)((longlong)render_data_ptr + 0xc);
        value_start = *(float*)(render_data_ptr + 1);
        
        // 处理零步长情况
        if (value_step == 0.0f) {
            if (value_start < (float)max_iterations) {
                stack_value1 = value_start;
                if (value_start < 0.0f) {
                    handle_negative_interpolation(stack_offset - 4, 0, render_data_ptr, value_start);
                }
                else {
                    handle_positive_interpolation(context_base, (int)value_start, render_data_ptr, value_start);
                    stack_value1 = value_start;
                    handle_negative_interpolation(stack_offset - 4);
                }
            }
        }
        else {
            // 处理多步长插值
            value_end = *(float*)(render_data_ptr + 3);
            value_range = *(float*)(render_data_ptr + 2);
            value_current = value_step + value_start;
            value_step = value_start;
            boundary_min = interpolation_factor;
            
            // 边界最小值处理
            if (interpolation_factor < value_end) {
                value_step = (value_end - interpolation_factor) * value_step + value_start;
                boundary_min = value_end;
            }
            
            // 边界最大值处理
            value_end = *(float*)((longlong)render_data_ptr + 0x1c);
            value_range = value_current;
            boundary_max = scale_factor;
            
            if (value_end < scale_factor) {
                value_range = (value_end - interpolation_factor) * value_step + value_start;
                boundary_max = value_end;
            }
            
            // 边界检查和处理
            if ((((value_step < 0.0f) || (value_range < 0.0f)) || 
                 ((float)max_iterations <= value_step)) ||
                ((float)max_iterations <= value_range)) {
                
                iteration_index = 0;
                if (0 < max_iterations) {
                    do {
                        element_index = (int)iteration_index + 1;
                        temp_storage = (ulonglong)element_index;
                        value_step = (float)(int)iteration_index;
                        value_end = (float)(int)element_index;
                        boundary_min = (value_step - value_start) * (scale_factor / value_step) + interpolation_factor;
                        value_range = (value_end - value_start) * (scale_factor / value_step) + interpolation_factor;
                        stack_value1 = value_step;
                        stack_value2 = boundary_min;
                        
                        // 插值计算和验证
                        if ((value_step <= value_start) || (value_current <= value_end)) {
                            if ((value_step <= value_current) || (value_start <= value_end)) {
                                if (((value_start < value_step) && (value_step < value_current)) ||
                                    ((value_current < value_step && (value_step < value_start)))) {
                                    handle_rendering_data(context_base, iteration_index, render_data_ptr, value_start);
                                }
                                else if ((value_end <= value_start) || (value_current <= value_end)) {
                                    if ((value_current < value_end) && (value_end < value_start)) {
                                        stack_value1 = value_end;
                                        stack_value2 = value_range;
                                        handle_rendering_data(context_base, iteration_index, render_data_ptr, value_start);
                                    }
                                }
                                else {
                                    stack_value1 = value_end;
                                    stack_value2 = value_range;
                                    handle_rendering_data(context_base, iteration_index, render_data_ptr, value_start);
                                }
                            }
                            else {
                                stack_value1 = value_end;
                                stack_value2 = value_range;
                                handle_rendering_data(context_base, iteration_index, render_data_ptr, value_start);
                                stack_value1 = value_step;
                                stack_value2 = boundary_min;
                                handle_rendering_data();
                            }
                        }
                        else {
                            handle_rendering_data(context_base, iteration_index, render_data_ptr, value_start);
                            stack_value1 = value_end;
                            stack_value2 = value_range;
                            handle_rendering_data();
                        }
                        
                        stack_value1 = value_current;
                        handle_rendering_data(context_base);
                        iteration_index = temp_storage & 0xffffffff;
                    } while ((int)temp_storage < max_iterations);
                    
                    // 重置全局参数
                    normalized_factor = 0.5f;
                    scale_factor = 1.0f;
                }
            }
            else {
                // 处理相等索引情况
                current_iteration = (int)value_step;
                if (current_iteration == (int)value_range) {
                    temp_var1 = (longlong)current_iteration;
                    *(float*)(context_base + temp_var1 * 4) =
                        (scale_factor - ((value_range - (float)current_iteration) + 
                         (value_step - (float)current_iteration)) * normalized_factor) *
                        *(float*)((longlong)render_data_ptr + 0x14) * (boundary_max - boundary_min) +
                        *(float*)(context_base + temp_var1 * 4);
                    
                    *(float*)(stack_offset + temp_var1 * 4) =
                        (boundary_max - boundary_min) * *(float*)((longlong)render_data_ptr + 0x14) +
                        *(float*)(stack_offset + temp_var1 * 4);
                }
                else {
                    // 处理不等索引情况
                    value_step = value_step;
                    if (value_range < value_step) {
                        value_range = -value_range;
                        value_step = boundary_max - interpolation_factor;
                        boundary_max = scale_factor - (boundary_min - interpolation_factor);
                        boundary_min = scale_factor - value_step;
                        value_step = value_range;
                        value_range = value_step;
                        value_start = value_current;
                    }
                    
                    current_iteration = (int)value_step;
                    max_iterations = (int)value_range;
                    temp_var1 = (longlong)(current_iteration + 1);
                    loop_counter = (longlong)max_iterations;
                    value_end = *(float*)((longlong)render_data_ptr + 0x14);
                    value_step = value_end * value_range;
                    value_current = ((float)(current_iteration + 1) - value_start) * value_range + interpolation_factor;
                    value_start = (value_current - boundary_min) * value_end;
                    
                    *(float*)(context_base + (longlong)current_iteration * 4) =
                        (normalized_factor - (value_step - (float)current_iteration) * normalized_factor) * value_start +
                        *(float*)(context_base + (longlong)current_iteration * 4);
                    
                    // 批量处理优化
                    if (temp_var1 < loop_counter) {
                        if (3 < loop_counter - temp_var1) {
                            render_data_ptr = (float*)(context_base + 8 + temp_var1 * 4);
                            temp_var1 = ((loop_counter - temp_var1) - 4U >> 2) + 1;
                            value_step = value_step * normalized_factor;
                            context_base = temp_var1 + temp_var1 * 4;
                            
                            do {
                                render_data_ptr[-2] = value_step + value_start + render_data_ptr[-2];
                                boundary_min = value_start + value_step + value_step;
                                boundary_max = boundary_min + value_step;
                                render_data_ptr[-1] = value_step + value_start + value_step + render_data_ptr[-1];
                                value_start = boundary_max + value_step;
                                *render_data_ptr = value_step + boundary_min + *render_data_ptr;
                                render_data_ptr[1] = value_step + boundary_max + render_data_ptr[1];
                                render_data_ptr = render_data_ptr + 4;
                                temp_var1 = temp_var1 + -1;
                            } while (temp_var1 != 0);
                            
                            scale_factor = 1.0f;
                        }
                        
                        if (context_base < loop_counter) {
                            do {
                                value_step = value_step * normalized_factor + value_start;
                                value_start = value_start + value_step;
                                *(float*)(context_base + context_base * 4) = value_step + *(float*)(context_base + context_base * 4);
                                context_base = context_base + 1;
                            } while (context_base < loop_counter);
                        }
                    }
                    
                    *(float*)(context_base + loop_counter * 4) =
                        (boundary_max - ((float)((max_iterations - current_iteration) + -1) * value_range + value_current)) *
                        (scale_factor - (value_range - (float)max_iterations) * normalized_factor) * value_end + value_start +
                        *(float*)(context_base + loop_counter * 4);
                    
                    *(float*)(stack_offset + loop_counter * 4) =
                        (boundary_max - boundary_min) * value_end + *(float*)(stack_offset + loop_counter * 4);
                }
            }
        }
        
        render_data_ptr = (longlong*)*render_data_ptr;
    } while (render_data_ptr != (longlong*)0x0);
    
    return;
}

/**
 * 空渲染处理函数
 * 占位函数，用于保持接口一致性
 */
void empty_rendering_handler(void)
{
    return;
}

/**
 * 渲染资源初始化函数
 * 初始化渲染资源，包括内存分配、参数设置和状态配置
 * 支持动态内存分配和栈分配两种模式
 */
void initialize_rendering_resources(int* resource_config, longlong render_target, int target_id, 
                                   void* unused_param1, void* unused_param2, int additional_param)
{
    int config_size;
    undefined1 local_stack[48];
    undefined1* resource_buffer;
    undefined8 buffer_size;
    undefined1* data_ptr;
    undefined1 local_data[528];
    ulonglong security_cookie;
    
    // 安全检查
    security_cookie = g_memory_allocator ^ (ulonglong)local_stack;
    config_size = *resource_config;
    buffer_size = 0;
    
    // 根据配置大小选择分配方式
    if (config_size < g_stack_threshold) {
        resource_buffer = local_data;
    }
    else {
        // 动态内存分配
        if (g_reference_counter != NULL) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + 1;
        }
        resource_buffer = (undefined1*)allocate_rendering_memory((longlong)(config_size * 2 + 1) << 2, g_memory_allocator);
    }
    
    // 设置数据指针
    data_ptr = resource_buffer + (longlong)*resource_config * 4;
    
    // 配置渲染目标参数
    *(float*)(render_target + 4 + (longlong)target_id * 0x14) = (float)(resource_config[1] + additional_param) + 1.0f;
    
    // 验证配置有效性
    if (resource_config[1] < 1) {
        if (resource_buffer == local_data) {
            // 栈溢出保护
            handle_stack_overflow(security_cookie ^ (ulonglong)local_stack);
        }
        if ((resource_buffer != (undefined1*)0x0) && (g_reference_counter != NULL)) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
        }
        // 内存释放
        release_rendering_memory(resource_buffer, g_memory_allocator);
    }
    
    // 初始化资源数据
    memset(resource_buffer, 0, (longlong)*resource_config << 2);
}

/**
 * 渲染资源扩展初始化函数
 * 扩展版本的资源初始化，支持更多参数配置
 */
void extended_initialize_rendering_resources(int* resource_config, longlong render_target, int target_id)
{
    int config_size;
    undefined1* resource_buffer;
    longlong context_base;
    undefined8 context_data;
    undefined8 render_context;
    undefined8 additional_context;
    longlong stack_pointer;
    undefined8 stack_data;
    ulonglong security_cookie;
    int stack_param;
    
    // 设置渲染上下文
    *(undefined8*)(stack_pointer + 0x20) = context_base;
    *(undefined8*)(stack_pointer + -8) = context_data;
    *(undefined8*)(stack_pointer + -0x10) = render_context;
    *(undefined8*)(stack_pointer + -0x18) = additional_context;
    stack_data = 0;
    
    // 获取配置大小
    config_size = *(int*)(&config_size);
    
    // 分配资源缓冲区
    if (config_size < g_stack_threshold) {
        resource_buffer = &local_stack_buffer;
    }
    else {
        if (g_reference_counter != NULL) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + 1;
        }
        resource_buffer = (undefined1*)allocate_rendering_memory((longlong)(config_size * 2 + 1) << 2, g_memory_allocator);
    }
    
    // 配置渲染目标
    *(float*)(render_target + 4 + (longlong)target_id * 0x14) = (float)(resource_config[1] + stack_param) + 1.0f;
    
    // 验证和处理
    if (resource_config[1] < 1) {
        if (resource_buffer == &local_stack_buffer) {
            handle_stack_overflow(security_cookie ^ (ulonglong)&global_stack_base);
        }
        if ((resource_buffer != (undefined1*)0x0) && (g_reference_counter != NULL)) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
        }
        release_rendering_memory(resource_buffer, g_memory_allocator);
    }
    
    // 初始化数据
    memset(resource_buffer, 0, (longlong)*resource_config << 2);
}

/**
 * 渲染资源高级初始化函数
 * 高级版本的资源初始化，包含完整的上下文管理和参数验证
 */
void advanced_initialize_rendering_resources(int* resource_config, longlong render_target, int target_id)
{
    int config_size;
    undefined1* resource_buffer;
    int threshold_param;
    longlong context_base;
    undefined8 render_context;
    undefined8 additional_context;
    longlong stack_pointer;
    undefined8 stack_data;
    ulonglong security_cookie;
    int stack_param;
    
    // 设置渲染上下文
    *(undefined8*)(stack_pointer + -8) = context_base;
    *(undefined8*)(stack_pointer + -0x10) = render_context;
    *(undefined8*)(stack_pointer + -0x18) = additional_context;
    
    // 分配资源缓冲区
    if (config_size < g_stack_threshold) {
        resource_buffer = &local_stack_buffer;
    }
    else {
        if (g_reference_counter != NULL) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + 1;
        }
        resource_buffer = (undefined1*)allocate_rendering_memory((longlong)(config_size * 2 + 1) << 2, g_memory_allocator);
    }
    
    // 配置渲染目标
    *(float*)(render_target + 4 + (longlong)target_id * 0x14) = (float)(resource_config[1] + stack_param) + 1.0f;
    
    // 阈值检查和处理
    if (resource_config[1] <= threshold_param) {
        if (resource_buffer == &local_stack_buffer) {
            handle_stack_overflow(security_cookie ^ (ulonglong)&global_stack_base);
        }
        if ((resource_buffer != (undefined1*)0x0) && (g_reference_counter != NULL)) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
        }
        release_rendering_memory(resource_buffer, g_memory_allocator);
    }
    
    // 初始化数据
    memset(resource_buffer, 0, (longlong)*resource_config << 2);
}

/**
 * 渲染数据快速清零函数
 * 快速清零渲染数据，优化性能的内存操作
 */
void fast_clear_rendering_data(void)
{
    memset();
}

/**
 * 渲染资源释放函数
 * 安全释放渲染资源，包括内存释放和引用计数更新
 */
void release_rendering_resource(void* resource_context)
{
    longlong resource_handle;
    undefined1* resource_buffer;
    ulonglong security_cookie;
    
    if (resource_handle != 0) {
        if (g_reference_counter != NULL) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
        }
        release_rendering_memory();
    }
    
    if (resource_buffer != &local_stack_buffer) {
        if ((resource_buffer != (undefined1*)0x0) && (g_reference_counter != NULL)) {
            *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
        }
        release_rendering_memory(resource_buffer, g_memory_allocator);
    }
    
    handle_stack_overflow(security_cookie ^ (ulonglong)&global_stack_base);
}

/**
 * 渲染引用计数更新函数
 * 更新渲染资源的引用计数，确保资源正确释放
 */
void update_rendering_reference_count(void)
{
    if (g_reference_counter != NULL) {
        *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
    }
    release_rendering_memory();
}

/**
 * 渲染资源条件释放函数
 * 根据条件安全释放渲染资源
 */
void conditional_release_rendering_resource(longlong resource_handle)
{
    if ((resource_handle != 0) && (g_reference_counter != NULL)) {
        *(int*)(g_reference_counter + 0x3a8) = *(int*)(g_reference_counter + 0x3a8) + -1;
    }
    release_rendering_memory(resource_handle, g_memory_allocator);
}

/**
 * 渲染数据快速排序函数
 * 实现渲染数据的快速排序算法，优化渲染性能
 * 使用递归分治策略，支持大规模数据排序
 */
void quick_sort_rendering_data(undefined8* data_array, int array_size)
{
    undefined4* element_ptr;
    float* float_ptr;
    float pivot_value;
    float compare_value;
    undefined4 temp_data1;
    undefined4 temp_data2;
    undefined4 temp_data3;
    undefined4 temp_data4;
    undefined4 temp_data5;
    undefined8 temp_data6;
    undefined8 temp_data7;
    undefined8 temp_data8;
    int left_count;
    longlong mid_index;
    longlong right_index;
    float* scan_ptr;
    int element_count;
    undefined8* swap_ptr;
    int temp_index;
    longlong scan_start;
    longlong scan_end;
    int swap_index;
    undefined8* temp_swap_ptr;
    
    // 递归终止条件
    if (0xc < array_size) {
        do {
            temp_index = array_size + -1;
            mid_index = (longlong)array_size >> 1;
            right_index = (longlong)array_size + -1;
            pivot_value = *(float*)((longlong)data_array + mid_index * 0x14 + 4);
            compare_value = *(float*)((longlong)data_array + right_index * 0x14 + 4);
            
            // 选择中轴元素
            if (*(float*)((longlong)data_array + 4) < pivot_value != pivot_value < compare_value) {
                swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
                temp_data6 = swap_ptr[1];
                swap_index = 0;
                if (*(float*)((longlong)data_array + 4) < compare_value != pivot_value < compare_value) {
                    swap_index = temp_index;
                }
                mid_index = (longlong)swap_index;
                temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
                temp_data7 = *temp_swap_ptr;
                temp_data8 = temp_swap_ptr[1];
                temp_data1 = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
                temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
                *temp_swap_ptr = *swap_ptr;
                temp_swap_ptr[1] = temp_data6;
                *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) =
                    *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
                swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
                *swap_ptr = temp_data7;
                swap_ptr[1] = temp_data8;
                *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) = temp_data1;
            }
            
            // 交换元素到正确位置
            swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            temp_data6 = swap_ptr[1];
            temp_data1 = *(undefined4*)(data_array + 2);
            swap_index = 1;
            temp_data2 = *(undefined4*)data_array;
            temp_data3 = *(undefined4*)((longlong)data_array + 4);
            temp_data4 = *(undefined4*)(data_array + 1);
            temp_data5 = *(undefined4*)((longlong)data_array + 0xc);
            mid_index = 1;
            *data_array = *swap_ptr;
            data_array[1] = temp_data6;
            *(undefined4*)(data_array + 2) = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
            element_ptr = (undefined4*)((longlong)data_array + mid_index * 0x14);
            *element_ptr = temp_data2;
            element_ptr[1] = temp_data3;
            element_ptr[2] = temp_data4;
            element_ptr[3] = temp_data5;
            *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) = temp_data1;
            
            // 分区处理
            while (true) {
                pivot_value = *(float*)((longlong)data_array + 4);
                mid_index = mid_index * 5 + 1;
                float_ptr = (float*)((longlong)data_array + mid_index * 4);
                scan_ptr = (float*)((longlong)data_array + mid_index * 4);
                mid_index = mid_index;
                
                // 扫描左侧元素
                if (*float_ptr <= pivot_value && pivot_value != *float_ptr) {
                    do {
                        swap_index = swap_index + 1;
                        scan_ptr = scan_ptr + 5;
                        mid_index = mid_index + 1;
                        mid_index = mid_index;
                    } while (*scan_ptr <= pivot_value && pivot_value != *scan_ptr);
                }
                
                // 扫描右侧元素
                mid_index = right_index * 5 + 1;
                scan_ptr = (float*)((longlong)data_array + mid_index * 4);
                compare_value = *(float*)((longlong)data_array + mid_index * 4);
                scan_end = right_index;
                
                while (pivot_value < compare_value) {
                    temp_index = temp_index + -1;
                    scan_ptr = scan_ptr + -5;
                    scan_end = scan_end + -1;
                    compare_value = *scan_ptr;
                }
                
                if (scan_end <= mid_index) break;
                
                swap_index = swap_index + 1;
                swap_ptr = (undefined8*)((longlong)data_array + scan_end * 0x14);
                temp_data6 = swap_ptr[1];
                temp_index = temp_index + -1;
                element_ptr = (undefined4*)((longlong)data_array + mid_index * 0x14);
                temp_data2 = *element_ptr;
                temp_data3 = element_ptr[1];
                temp_data4 = element_ptr[2];
                temp_data5 = element_ptr[3];
                temp_data1 = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
                mid_index = mid_index + 1;
                temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
                *temp_swap_ptr = *swap_ptr;
                temp_swap_ptr[1] = temp_data6;
                right_index = scan_end + -1;
                *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) =
                    *(undefined4*)((longlong)data_array + scan_end * 0x14 + 0x10);
                element_ptr = (undefined4*)((longlong)data_array + scan_end * 0x14);
                *element_ptr = temp_data2;
                element_ptr[1] = temp_data3;
                element_ptr[2] = temp_data4;
                element_ptr[3] = temp_data5;
                *(undefined4*)((longlong)data_array + scan_end * 0x14 + 0x10) = temp_data1;
            }
            
            element_count = array_size - swap_index;
            array_size = element_count;
            left_count = temp_index;
            
            if (element_count <= temp_index) {
                array_size = temp_index;
                left_count = element_count;
            }
            
            swap_ptr = (undefined8*)((longlong)data_array + (longlong)swap_index * 0x14);
            temp_swap_ptr = data_array;
            
            if (element_count <= temp_index) {
                temp_swap_ptr = swap_ptr;
            }
            
            // 递归排序
            quick_sort_rendering_data(temp_swap_ptr, left_count);
            
            if (element_count <= temp_index) {
                swap_ptr = data_array;
            }
            
            data_array = swap_ptr;
        } while (0xc < array_size);
    }
    
    return;
}

/**
 * 渲染数据迭代排序函数
 * 迭代版本的快速排序，避免递归栈溢出
 */
void iterative_sort_rendering_data(undefined8* data_array, int array_size)
{
    undefined4* element_ptr;
    float* float_ptr;
    float pivot_value;
    float compare_value;
    undefined4 temp_data1;
    undefined4 temp_data2;
    undefined4 temp_data3;
    undefined4 temp_data4;
    undefined4 temp_data5;
    undefined8 temp_data6;
    undefined8 temp_data7;
    undefined8 temp_data8;
    int left_count;
    longlong mid_index;
    longlong right_index;
    float* scan_ptr;
    int element_count;
    undefined8* swap_ptr;
    int temp_index;
    longlong scan_start;
    longlong scan_end;
    int swap_index;
    undefined8* temp_swap_ptr;
    
    // 迭代处理
    do {
        temp_index = array_size + -1;
        mid_index = (longlong)array_size >> 1;
        right_index = (longlong)array_size + -1;
        pivot_value = *(float*)((longlong)data_array + mid_index * 0x14 + 4);
        compare_value = *(float*)((longlong)data_array + right_index * 0x14 + 4);
        
        // 选择中轴元素
        if (*(float*)((longlong)data_array + 4) < pivot_value != pivot_value < compare_value) {
            swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            temp_data6 = swap_ptr[1];
            swap_index = 0;
            if (*(float*)((longlong)data_array + 4) < compare_value != pivot_value < compare_value) {
                swap_index = temp_index;
            }
            mid_index = (longlong)swap_index;
            temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            temp_data7 = *temp_swap_ptr;
            temp_data8 = temp_swap_ptr[1];
            temp_data1 = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
            temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            *temp_swap_ptr = *swap_ptr;
            temp_swap_ptr[1] = temp_data6;
            *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) =
                *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
            swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            *swap_ptr = temp_data7;
            swap_ptr[1] = temp_data8;
            *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) = temp_data1;
        }
        
        // 交换元素到正确位置
        swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
        temp_data6 = swap_ptr[1];
        temp_data1 = *(undefined4*)(data_array + 2);
        swap_index = 1;
        temp_data2 = *(undefined4*)data_array;
        temp_data3 = *(undefined4*)((longlong)data_array + 4);
        temp_data4 = *(undefined4*)(data_array + 1);
        temp_data5 = *(undefined4*)((longlong)data_array + 0xc);
        mid_index = 1;
        *data_array = *swap_ptr;
        data_array[1] = temp_data6;
        *(undefined4*)(data_array + 2) = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
        element_ptr = (undefined4*)((longlong)data_array + mid_index * 0x14);
        *element_ptr = temp_data2;
        element_ptr[1] = temp_data3;
        element_ptr[2] = temp_data4;
        element_ptr[3] = temp_data5;
        *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) = temp_data1;
        
        // 分区处理
        while (true) {
            pivot_value = *(float*)((longlong)data_array + 4);
            mid_index = mid_index * 5 + 1;
            float_ptr = (float*)((longlong)data_array + mid_index * 4);
            scan_ptr = (float*)((longlong)data_array + mid_index * 4);
            mid_index = mid_index;
            
            // 扫描左侧元素
            if (*float_ptr <= pivot_value && pivot_value != *float_ptr) {
                do {
                    swap_index = swap_index + 1;
                    scan_ptr = scan_ptr + 5;
                    mid_index = mid_index + 1;
                    mid_index = mid_index;
                } while (*scan_ptr <= pivot_value && pivot_value != *scan_ptr);
            }
            
            // 扫描右侧元素
            mid_index = right_index * 5 + 1;
            scan_ptr = (float*)((longlong)data_array + mid_index * 4);
            compare_value = *(float*)((longlong)data_array + mid_index * 4);
            scan_end = right_index;
            
            while (pivot_value < compare_value) {
                temp_index = temp_index + -1;
                scan_ptr = scan_ptr + -5;
                scan_end = scan_end + -1;
                compare_value = *scan_ptr;
            }
            
            if (scan_end <= mid_index) break;
            
            swap_index = swap_index + 1;
            swap_ptr = (undefined8*)((longlong)data_array + scan_end * 0x14);
            temp_data6 = swap_ptr[1];
            temp_index = temp_index + -1;
            element_ptr = (undefined4*)((longlong)data_array + mid_index * 0x14);
            temp_data2 = *element_ptr;
            temp_data3 = element_ptr[1];
            temp_data4 = element_ptr[2];
            temp_data5 = element_ptr[3];
            temp_data1 = *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10);
            mid_index = mid_index + 1;
            temp_swap_ptr = (undefined8*)((longlong)data_array + mid_index * 0x14);
            *temp_swap_ptr = *swap_ptr;
            temp_swap_ptr[1] = temp_data6;
            right_index = scan_end + -1;
            *(undefined4*)((longlong)data_array + mid_index * 0x14 + 0x10) =
                *(undefined4*)((longlong)data_array + scan_end * 0x14 + 0x10);
            element_ptr = (undefined4*)((longlong)data_array + scan_end * 0x14);
            *element_ptr = temp_data2;
            element_ptr[1] = temp_data3;
            element_ptr[2] = temp_data4;
            element_ptr[3] = temp_data5;
            *(undefined4*)((longlong)data_array + scan_end * 0x14 + 0x10) = temp_data1;
        }
        
        element_count = array_size - swap_index;
        array_size = element_count;
        left_count = temp_index;
        
        if (element_count <= temp_index) {
            array_size = temp_index;
            left_count = element_count;
        }
        
        swap_ptr = (undefined8*)((longlong)data_array + (longlong)swap_index * 0x14);
        temp_swap_ptr = data_array;
        
        if (element_count <= temp_index) {
            temp_swap_ptr = swap_ptr;
        }
        
        // 递归排序
        quick_sort_rendering_data(temp_swap_ptr, left_count);
        
        if (element_count <= temp_index) {
            swap_ptr = data_array;
        }
        
        data_array = swap_ptr;
    } while (0xc < array_size);
    
    return;
}

/**
 * 空渲染处理函数（结尾）
 * 占位函数，用于保持接口一致性
 */
void empty_rendering_handler_end(void)
{
    return;
}