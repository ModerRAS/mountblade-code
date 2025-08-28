#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part071.c - 渲染系统高级数据处理和渲染控制模块
// 包含10个核心函数，涵盖渲染数据高级处理、渲染管线控制、资源管理、内存分配、数据结构操作等高级渲染功能

// 常量定义
#define RENDERING_DATA_MAX_ARRAY_SIZE 0x100
#define RENDERING_DATA_ALIGNMENT_SIZE 0x38
#define RENDERING_DATA_MAX_BUFFER_SIZE 0x560
#define RENDERING_DATA_HASH_MASK 0x1fffff
#define RENDERING_DATA_HASH_SHIFT 0xb
#define RENDERING_DATA_HASH_BLOCK_SIZE 0x800

// 函数别名定义
#define rendering_system_process_data_blocks FUN_180308aca
#define rendering_system_process_render_data FUN_180308bc3
#define rendering_system_process_render_batches FUN_180308be0
#define rendering_system_execute_render_pipeline FUN_180308c30
#define rendering_system_compare_render_data FUN_180308f10
#define rendering_system_merge_render_data FUN_1803090c0
#define rendering_system_optimize_render_data FUN_180309290
#define rendering_system_cleanup_render_data FUN_180309520
#define rendering_system_release_render_data FUN_1803095c0
#define rendering_system_initialize_render_data FUN_1803095e0
#define rendering_system_destroy_render_data FUN_180309640
#define rendering_system_process_render_queue FUN_1803096a0
#define rendering_system_create_render_object FUN_180309740
#define rendering_system_free_render_object FUN_180309910
#define rendering_system_cleanup_render_object FUN_180309950

// 全局变量别名定义
#define g_rendering_system_data_table unknown_var_3952
#define g_rendering_system_data_vtable unknown_var_3832
#define g_rendering_system_string_constants unknown_var_3784
#define g_rendering_system_string_table unknown_var_3800
#define g_rendering_system_memory_allocator system_main_module_state
#define g_rendering_system_texture_manager system_buffer_ptr
#define g_rendering_system_resource_manager system_memory_bc80
#define g_rendering_system_state_manager system_memory_bcb0
#define g_rendering_system_heap_base GET_SECURITY_COOKIE()
#define g_rendering_system_resource_array render_system_control_resource
#define g_rendering_system_resource_end render_system_control_resource
#define g_rendering_system_resource_count render_system_control_resource
#define g_rendering_system_module_registry system_memory_pool_ptr
#define g_rendering_system_global_state SYSTEM_STATE_MANAGER
#define g_rendering_system_name_registry unknown_var_6504

// 函数声明
void rendering_system_process_data_blocks(void);
void rendering_system_process_render_data(void);
void rendering_system_process_render_batches(void);
void rendering_system_execute_render_pipeline(longlong *param_1, longlong *param_2, longlong param_3, longlong *param_4);
longlong *rendering_system_compare_render_data(longlong *param_1, longlong *param_2, longlong *param_3);
longlong *rendering_system_merge_render_data(longlong *param_1, longlong *param_2, longlong *param_3, longlong *param_4);
void rendering_system_optimize_render_data(longlong *param_1, longlong param_2, longlong param_3, longlong param_4, longlong *param_5);
void rendering_system_cleanup_render_data(longlong *param_1);
void rendering_system_release_render_data(longlong *param_1);
uint64_t *rendering_system_initialize_render_data(uint64_t *param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4);
void rendering_system_destroy_render_data(uint64_t *param_1);
void rendering_system_process_render_queue(longlong param_1);
uint64_t *rendering_system_create_render_object(uint64_t *param_1, int param_2, int32_t param_3, int32_t param_4, int32_t param_5);
uint64_t rendering_system_free_render_object(uint64_t param_1, ulonglong param_2);
void rendering_system_cleanup_render_object(uint64_t *param_1);

// 渲染数据块处理函数
void rendering_system_process_data_blocks(void)
{
    longlong processed_data_1;
    longlong processed_data_2;
    uint data_index_1;
    uint64_t *data_pointer;
    uint data_index_2;
    ulonglong hash_value;
    uint data_index_3;
    longlong iteration_count;
    ulonglong base_pointer;
    longlong *source_data_ptr;
    longlong *target_data_ptr;
    uint iteration_index;
    longlong register_r11;
    int32_t xmm6_data_a;
    int32_t xmm6_data_b;
    int32_t xmm6_data_c;
    int32_t xmm6_data_d;
    int32_t stack_buffer_1[4];
    int32_t stack_buffer_2[4];
    int32_t stack_buffer_3[4];
    int32_t stack_buffer_4[4];
    longlong stack_data_1;
    longlong stack_data_2;
    int32_t stack_buffer_5[4];
    int32_t stack_buffer_6[4];
    int32_t stack_buffer_7[4];
    int32_t stack_buffer_8[4];
    longlong stack_data_3;
    longlong stack_data_4;
    longlong stack_data_5;
    longlong stack_data_6;
    longlong stack_data_7;
    longlong stack_data_8;
    int32_t stack_data_9;
    int32_t stack_buffer_9;
    int32_t stack_data_10;
    int32_t stack_buffer_10;
    uint64_t stack_data_11;
    
    // 保存XMM6寄存器数据到堆栈
    *(int32_t *)(register_r11 + -0x28) = xmm6_data_a;
    *(int32_t *)(register_r11 + -0x24) = xmm6_data_b;
    *(int32_t *)(register_r11 + -0x20) = xmm6_data_c;
    *(int32_t *)(register_r11 + -0x1c) = xmm6_data_d;
    
    // 主处理循环
    do {
        if (iteration_count < 1) break;
        
        // 计算数据索引和哈希值
        data_index_3 = (int)target_data_ptr[1] - 1;
        data_index_2 = data_index_3 >> RENDERING_DATA_HASH_SHIFT;
        data_index_1 = (int)((longlong)((longlong)(int)target_data_ptr[1] - base_pointer) / 2) + (int)base_pointer;
        data_index_3 = data_index_1 >> RENDERING_DATA_HASH_SHIFT;
        hash_value = base_pointer >> RENDERING_DATA_HASH_SHIFT & RENDERING_DATA_HASH_MASK;
        
        // 调用数据比较函数
        data_pointer = (uint64_t *)
                     rendering_system_compare_render_data(
                         *(longlong *)(*source_data_ptr + 8 + hash_value * 8) +
                         (ulonglong)(uint)((int)base_pointer + (int)hash_value * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8,
                         *(longlong *)(*source_data_ptr + 8 + (ulonglong)data_index_3 * 8) +
                         (ulonglong)(data_index_1 + data_index_3 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8,
                         *(longlong *)(*target_data_ptr + 8 + (ulonglong)data_index_2 * 8) +
                         (ulonglong)(data_index_3 + data_index_2 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
        
        // 准备堆栈数据
        stack_buffer_1[0] = (int32_t)*target_data_ptr;
        stack_buffer_1[1] = *(int32_t *)((longlong)target_data_ptr + 4);
        stack_buffer_1[2] = (int32_t)target_data_ptr[1];
        stack_buffer_1[3] = *(int32_t *)((longlong)target_data_ptr + 0xc);
        stack_buffer_2[0] = (int32_t)*source_data_ptr;
        stack_buffer_2[1] = *(int32_t *)((longlong)source_data_ptr + 4);
        stack_buffer_2[2] = (int32_t)source_data_ptr[1];
        stack_buffer_2[3] = *(int32_t *)((longlong)source_data_ptr + 0xc);
        stack_data_11 = *data_pointer;
        
        // 调用数据合并函数
        rendering_system_merge_render_data(&stack_data_1, &stack_data_2, &stack_data_3, &stack_data_11);
        processed_data_2 = stack_data_2;
        processed_data_1 = stack_data_1;
        
        // 准备第二轮处理数据
        stack_buffer_5[0] = (int32_t)*target_data_ptr;
        stack_buffer_5[1] = *(int32_t *)((longlong)target_data_ptr + 4);
        stack_buffer_5[2] = (int32_t)target_data_ptr[1];
        stack_buffer_5[3] = *(int32_t *)((longlong)target_data_ptr + 0xc);
        iteration_count = iteration_count + -1;
        stack_data_3 = stack_data_1;
        stack_data_4 = stack_data_2;
        
        // 调用渲染处理函数
        rendering_system_process_render_data(&stack_data_3, &stack_data_5, iteration_count, rendering_system_initialize_context);
        
        // 更新目标数据
        *target_data_ptr = processed_data_1;
        target_data_ptr[1] = processed_data_2;
    } while (0x1c < (longlong)((longlong)(int)target_data_ptr[1] - base_pointer));
    
    // 处理剩余数据
    if (iteration_count == 0) {
        stack_data_5 = *target_data_ptr;
        stack_data_6 = target_data_ptr[1];
        stack_data_9 = (int32_t)*source_data_ptr;
        stack_buffer_9[1] = *(int32_t *)((longlong)source_data_ptr + 4);
        stack_data_10 = (int32_t)source_data_ptr[1];
        stack_buffer_10[3] = *(int32_t *)((longlong)source_data_ptr + 0xc);
        stack_data_7 = stack_data_5;
        stack_data_8 = stack_data_6;
        rendering_system_process_render_batches(&stack_data_9, &stack_data_7, &stack_data_5);
    }
    
    return;
}





// 渲染数据条件处理函数
void rendering_system_process_render_data(void)
{
    longlong iteration_count;
    int32_t *source_data_ptr;
    uint64_t *target_data_ptr;
    uint64_t stack_data_1;
    uint64_t stack_data_2;
    uint64_t stack_data_3;
    uint64_t stack_data_4;
    int32_t stack_buffer_1[4];
    int32_t stack_buffer_2[4];
    int32_t stack_buffer_3[4];
    int32_t stack_buffer_4[4];
    
    // 条件检查：只有在迭代计数为0时才执行处理
    if (iteration_count == 0) {
        // 准备目标数据
        stack_data_1 = *target_data_ptr;
        stack_data_2 = target_data_ptr[1];
        
        // 准备源数据缓冲区
        stack_buffer_1[0] = *source_data_ptr;
        stack_buffer_1[1] = source_data_ptr[1];
        stack_buffer_1[2] = source_data_ptr[2];
        stack_buffer_1[3] = source_data_ptr[3];
        
        // 设置处理参数
        stack_data_3 = stack_data_1;
        stack_data_4 = stack_data_2;
        
        // 调用渲染管线执行函数
        rendering_system_execute_render_pipeline(&stack_buffer_1, &stack_data_3, &stack_data_1);
    }
    return;
}





// 渲染批处理函数
void rendering_system_process_render_batches(void)
{
    int32_t *source_data_ptr;
    uint64_t *target_data_ptr;
    uint64_t stack_data_1;
    uint64_t stack_data_2;
    uint64_t stack_data_3;
    uint64_t stack_data_4;
    int32_t stack_buffer_1[4];
    int32_t stack_buffer_2[4];
    int32_t stack_buffer_3[4];
    int32_t stack_buffer_4[4];
    
    // 准备目标数据
    stack_data_1 = *target_data_ptr;
    stack_data_2 = target_data_ptr[1];
    
    // 准备源数据缓冲区
    stack_buffer_1[0] = *source_data_ptr;
    stack_buffer_1[1] = source_data_ptr[1];
    stack_buffer_1[2] = source_data_ptr[2];
    stack_buffer_1[3] = source_data_ptr[3];
    
    // 设置处理参数
    stack_data_3 = stack_data_1;
    stack_data_4 = stack_data_2;
    
    // 调用渲染管线执行函数
    rendering_system_execute_render_pipeline(&stack_buffer_1, &stack_data_3, &stack_data_1);
    return;
}





// 渲染管线执行函数
void rendering_system_execute_render_pipeline(longlong *param_1, longlong *param_2, longlong param_3, longlong *param_4)
{
    uint data_index_1;
    int data_range;
    longlong **data_table_ptr;
    char comparison_result;
    uint data_index_2;
    uint data_index_3;
    longlong loop_counter;
    longlong data_range_size;
    longlong base_data_ptr;
    longlong *temp_data_ptr_1;
    longlong *temp_data_ptr_2;
    longlong stack_offset_1;
    longlong *temp_data_ptr_3;
    uint64_t temp_data_value;
    uint64_t temp_array[2];
    longlong temp_data_1;
    longlong temp_data_2;
    longlong temp_data_3;
    longlong temp_data_4;
    longlong **temp_table_ptr;
    int stack_index;
    int32_t stack_flags;
    uint64_t stack_guard;
    longlong **temp_data_ptr_4;
    longlong temp_data_5;
    longlong temp_data_6;
  
    // 初始化堆栈保护变量
    stack_guard = 0xfffffffffffffffe;
    data_table_ptr = (longlong **)*param_1;
    data_range = (int)param_1[1];
    stack_flags = *(int32_t *)((longlong)param_1 + 0xc);
    data_range_size = (longlong)(int)param_2[1] - (longlong)data_range;
    temp_data_ptr_2 = param_2;
    temp_data_ptr_3 = param_4;
    temp_table_ptr = data_table_ptr;
    stack_index = data_range;
    
    // 第一阶段处理：数据表优化
    if (1 < data_range_size) {
        loop_counter = (data_range_size + -2 >> 1) + 1;
        do {
            loop_counter = loop_counter + -1;
            data_index_3 = (int)loop_counter + data_range;
            data_index_2 = data_index_3 >> RENDERING_DATA_HASH_SHIFT;
            temp_data_value = data_table_ptr[(ulonglong)data_index_2 + 1][data_index_3 + data_index_2 * -RENDERING_DATA_HASH_BLOCK_SIZE];
            temp_data_1 = *param_1;
            temp_data_2 = param_1[1];
            rendering_system_optimize_render_data(&temp_data_1, loop_counter, data_range_size, loop_counter, &temp_data_value);
        } while (loop_counter != 0);
    }
    
    // 第二阶段处理：渲染数据执行
    data_range_size = *param_2;
    temp_data_2 = param_2[1];
    data_range = *(int *)(param_3 + 8);
    data_index_2 = (uint)temp_data_2;
    temp_data_1 = data_range_size;
    if ((int)data_index_2 < data_range) {
        base_data_ptr = *param_1;
        data_index_3 = *(uint *)(param_1 + 1);
        stack_offset_1 = (ulonglong)(data_index_3 >> RENDERING_DATA_HASH_SHIFT) * 8;
        loop_counter = (ulonglong)(data_index_3 - (data_index_3 & 0xfffff800)) * 8;
        do {
            temp_data_ptr_4 = &temp_data_ptr_3;
            temp_data_ptr_3 = *(longlong **)(*(longlong *)(stack_offset_1 + 8 + base_data_ptr) + loop_counter);
            if (temp_data_ptr_3 != (longlong *)0x0) {
                (**(code **)(*temp_data_ptr_3 + 0x28))();
            }
            temp_table_ptr = &temp_data_ptr_1;
            data_index_3 = data_index_2 >> RENDERING_DATA_HASH_SHIFT;
            temp_data_ptr_1 = *(longlong **)
                              (*(longlong *)(data_range_size + 8 + (ulonglong)data_index_3 * 8) +
                              (ulonglong)(data_index_2 + data_index_3 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            if (temp_data_ptr_1 != (longlong *)0x0) {
                (**(code **)(*temp_data_ptr_1 + 0x28))();
            }
            comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
            if (comparison_result != '\0') {
                temp_data_value = *(uint64_t *)
                                  (*(longlong *)(data_range_size + 8 + (ulonglong)data_index_3 * 8) +
                                  (ulonglong)(data_index_2 + data_index_3 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
                *(uint64_t *)
                 (*(longlong *)(data_range_size + 8 + (ulonglong)data_index_3 * 8) + (ulonglong)(data_index_2 + data_index_3 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8)
                     = *(uint64_t *)(*(longlong *)(stack_offset_1 + 8 + *param_1) + loop_counter);
                temp_data_3 = *param_1;
                temp_data_4 = param_1[1];
                rendering_system_optimize_render_data(&temp_data_3, 0, (longlong)(int)temp_data_ptr_2[1] - (longlong)(int)param_1[1], 0,
                                                      &temp_data_value);
            }
            data_index_2 = data_index_2 + 1;
            base_data_ptr = *param_1;
            param_2 = temp_data_ptr_2;
        } while ((int)data_index_2 < data_range);
    }
    
    // 第三阶段处理：数据清理和优化
    data_range_size = *param_2;
    data_index_2 = *(uint *)(param_2 + 1);
    temp_data_4 = param_2[1];
    loop_counter = param_1[1];
    if (1 < (longlong)(int)data_index_2 - (longlong)(int)loop_counter) {
        base_data_ptr = *param_1;
        data_index_3 = (uint)param_1[1];
        temp_data_3 = data_range_size;
        do {
            data_index_1 = data_index_2 - 1;
            temp_array[0] =
                 *(uint64_t *)
                  (*(longlong *)(data_range_size + 8 + (ulonglong)(data_index_1 >> RENDERING_DATA_HASH_SHIFT) * 8) +
                  (ulonglong)(data_index_1 & RENDERING_DATA_HASH_MASK) * 8);
            *(uint64_t *)
             (*(longlong *)(data_range_size + 8 + (ulonglong)(data_index_1 >> RENDERING_DATA_HASH_SHIFT) * 8) + (ulonglong)(data_index_1 & RENDERING_DATA_HASH_MASK) * 8) =
                 *(uint64_t *)
                  (*(longlong *)(base_data_ptr + (ulonglong)(data_index_3 >> RENDERING_DATA_HASH_SHIFT) * 8 + 8) +
                  (ulonglong)(data_index_3 + (data_index_3 >> RENDERING_DATA_HASH_SHIFT) * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            temp_data_5 = *param_1;
            temp_data_6 = param_1[1];
            rendering_system_optimize_render_data(&temp_data_5, 0, ((longlong)(int)data_index_2 - (longlong)(int)data_index_3) + -1, 0, temp_array);
            data_index_2 = data_index_1;
        } while (1 < (longlong)(int)data_index_1 - (longlong)(int)loop_counter);
    }
    return;
}



// 渲染数据比较函数
longlong *rendering_system_compare_render_data(longlong *param_1, longlong *param_2, longlong *param_3)
{
    char comparison_result;
    longlong *temp_data_ptr_1;
    longlong **temp_data_ptr_2;
    longlong *temp_data_ptr_3;
    
    // 初始化临时数据指针
    temp_data_ptr_2 = &temp_data_ptr_3;
    temp_data_ptr_3 = (longlong *)*param_2;
    
    // 执行第二个数据块的析构函数（如果存在）
    if (temp_data_ptr_3 != (longlong *)0x0) {
        (**(code **)(*temp_data_ptr_3 + 0x28))();
    }
    
    // 执行第一个数据块的析构函数（如果存在）
    temp_data_ptr_1 = (longlong *)*param_1;
    if (temp_data_ptr_1 != (longlong *)0x0) {
        (**(code **)(*temp_data_ptr_1 + 0x28))();
    }
    
    // 比较两个数据块
    comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
    temp_data_ptr_3 = (longlong *)*param_3;
    temp_data_ptr_2 = &temp_data_ptr_3;
    
    // 根据比较结果进行不同的处理路径
    if (comparison_result == '\0') {
        // 第一条路径：数据块相等
        if (temp_data_ptr_3 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_3 + 0x28))();
        }
        temp_data_ptr_1 = (longlong *)*param_1;
        if (temp_data_ptr_1 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_1 + 0x28))();
        }
        comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
        if (comparison_result == '\0') {
            // 第二条路径：进一步比较
            temp_data_ptr_2 = &temp_data_ptr_3;
            temp_data_ptr_3 = (longlong *)*param_3;
            if (temp_data_ptr_3 != (longlong *)0x0) {
                (**(code **)(*temp_data_ptr_3 + 0x28))();
            }
            temp_data_ptr_1 = (longlong *)*param_2;
            if (temp_data_ptr_1 != (longlong *)0x0) {
                (**(code **)(*temp_data_ptr_1 + 0x28))();
            }
            comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
            if (comparison_result == '\0') {
                return param_2;
            }
            return param_3;
        }
    }
    else {
        // 第二条路径：数据块不相等
        if (temp_data_ptr_3 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_3 + 0x28))();
        }
        temp_data_ptr_1 = (longlong *)*param_2;
        if (temp_data_ptr_1 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_1 + 0x28))();
        }
        comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
        if (comparison_result != '\0') {
            return param_2;
        }
        temp_data_ptr_2 = &temp_data_ptr_3;
        temp_data_ptr_3 = (longlong *)*param_3;
        if (temp_data_ptr_3 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_3 + 0x28))();
        }
        temp_data_ptr_1 = (longlong *)*param_1;
        if (temp_data_ptr_1 != (longlong *)0x0) {
            (**(code **)(*temp_data_ptr_1 + 0x28))();
        }
        comparison_result = FUN_180306d20(&temp_data_ptr_1, &temp_data_ptr_3);
        if (comparison_result != '\0') {
            param_1 = param_3;
        }
    }
    return param_1;
}



// 渲染数据合并函数
longlong *rendering_system_merge_render_data(longlong *param_1, longlong *param_2, longlong *param_3, longlong *param_4)
{
    uint64_t *data_ptr_1;
    uint64_t *data_ptr_2;
    longlong source_data_1;
    longlong source_data_2;
    uint64_t temp_data;
    longlong range_data;
    char merge_result;
    uint data_index;
    longlong **temp_table_ptr;
    longlong *data_block_1;
    longlong *data_block_2;
    longlong *data_block_3;
    longlong *data_block_4;
    longlong ***temp_ptr_ptr;
    
    // 初始化源数据
    source_data_1 = *param_3;
    source_data_2 = *param_2;
    data_index = *(uint *)(param_2 + 1);
    
    // 主合并循环
    while (true) {
        // 内层循环：处理数据块比较和合并
        while (true) {
            temp_ptr_ptr = &temp_table_ptr;
            temp_table_ptr = (longlong **)*param_4;
            if (temp_table_ptr != (longlong **)0x0) {
                // 执行表处理函数
                (*(code *)(*temp_table_ptr)[5])();
            }
            
            // 获取数据块1
            data_block_1 = *(longlong **)
                          (*(longlong *)(source_data_2 + 8 + (ulonglong)(data_index >> RENDERING_DATA_HASH_SHIFT) * 8) +
                          (ulonglong)(data_index + (data_index >> RENDERING_DATA_HASH_SHIFT) * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            if (data_block_1 != (longlong *)0x0) {
                // 执行数据块1的处理函数
                (**(code **)(*data_block_1 + 0x28))();
            }
            
            // 比较数据块
            merge_result = FUN_180306d20(&data_block_1, &temp_table_ptr);
            if (merge_result == '\0') break;
            
            // 更新索引
            data_index = data_index + 1;
            *(uint *)(param_2 + 1) = data_index;
        }
        
        // 减少参数3的计数器
        *(int *)(param_3 + 1) = (int)param_3[1] + -1;
        data_index = *(uint *)(param_3 + 1);
        
        // 第二个内层循环：反向处理数据块
        while (true) {
            temp_ptr_ptr = (longlong ***)&data_block_2;
            data_block_2 = *(longlong **)
                          (*(longlong *)(source_data_1 + 8 + (ulonglong)(data_index >> RENDERING_DATA_HASH_SHIFT) * 8) +
                          (ulonglong)(data_index + (data_index >> RENDERING_DATA_HASH_SHIFT) * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            if (data_block_2 != (longlong *)0x0) {
                // 执行数据块2的处理函数
                (**(code **)(*data_block_2 + 0x28))();
            }
            
            temp_table_ptr = &data_block_4;
            data_block_4 = (longlong *)*param_4;
            if (data_block_4 != (longlong *)0x0) {
                // 执行数据块4的处理函数
                (**(code **)(*data_block_4 + 0x28))();
            }
            
            // 比较数据块
            merge_result = FUN_180306d20(&data_block_4, &data_block_2);
            if (merge_result == '\0') break;
            
            // 减少索引
            data_index = data_index - 1;
            *(uint *)(param_3 + 1) = data_index;
        }
        
        // 检查范围条件
        range_data = param_2[1];
        if ((int)data_index <= (int)range_data) break;
        
        // 交换数据块
        data_index = (uint)param_3[1] >> RENDERING_DATA_HASH_SHIFT;
        data_ptr_1 = (uint64_t *)
                    (*(longlong *)(*param_3 + 8 + (ulonglong)data_index * 8) +
                    (ulonglong)((uint)param_3[1] + data_index * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
        data_index = (uint)param_2[1] >> RENDERING_DATA_HASH_SHIFT;
        data_ptr_2 = (uint64_t *)
                    (*(longlong *)(*param_2 + 8 + (ulonglong)data_index * 8) +
                    (ulonglong)((uint)param_2[1] + data_index * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
        temp_data = *data_ptr_2;
        *data_ptr_2 = *data_ptr_1;
        *data_ptr_1 = temp_data;
        data_index = (int)range_data + 1;
        *(uint *)(param_2 + 1) = data_index;
    }
    
    // 更新最终结果
    source_data_1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = source_data_1;
    return param_1;
}





// 渲染数据优化函数
void rendering_system_optimize_render_data(longlong *param_1, longlong param_2, longlong param_3, longlong param_4, longlong *param_5)

{
    int base_index;
    longlong data_ptr;
    int temp_index;
    char compare_result;
    uint hash_index_1;
    uint hash_index_2;
    uint data_index_1;
    uint data_index_2;
    longlong loop_counter;
    longlong original_param;
    longlong *data_block_1;
    longlong *data_block_2;
    longlong *data_block_3;
    longlong *data_block_4;
  
  // 计算循环计数器初始值
    loop_counter = param_4 * 2 + 2;
    if (loop_counter < param_3) {
        base_index = (int)param_1[1];
        data_ptr = *param_1;
        original_param = param_4;
        do {
            // 处理第一个数据块
            hash_index_2 = (int)loop_counter + base_index + -1;
            hash_index_1 = hash_index_2 >> RENDERING_DATA_HASH_SHIFT;
            data_block_1 = *(longlong **)
                          (*(longlong *)(data_ptr + 8 + (ulonglong)hash_index_1 * 8) +
                          (ulonglong)(hash_index_2 + hash_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            if (data_block_1 != (longlong *)0x0) {
                // 执行数据块1的处理函数
                (**(code **)(*data_block_1 + 0x28))();
            }
            
            // 处理第二个数据块
            hash_index_2 = (int)loop_counter + base_index;
            hash_index_1 = hash_index_2 >> RENDERING_DATA_HASH_SHIFT;
            data_block_2 = *(longlong **)
                          (*(longlong *)(data_ptr + 8 + (ulonglong)hash_index_1 * 8) +
                          (ulonglong)(hash_index_2 + hash_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            if (data_block_2 != (longlong *)0x0) {
                // 执行数据块2的处理函数
                (**(code **)(*data_block_2 + 0x28))();
            }
            
            // 比较两个数据块
            compare_result = FUN_180306d20(&data_block_2, &data_block_1);
            param_4 = loop_counter;
            if (compare_result != '\0') {
                param_4 = loop_counter + -1;
            }
            
            // 数据交换和优化
            data_index_1 = base_index + (int)param_4;
            hash_index_1 = data_index_1 >> RENDERING_DATA_HASH_SHIFT;
            data_index_2 = base_index + (int)original_param;
            hash_index_2 = data_index_2 >> RENDERING_DATA_HASH_SHIFT;
            *(uint64_t *)
             (*(longlong *)(data_ptr + 8 + (ulonglong)hash_index_2 * 8) + (ulonglong)(data_index_2 + hash_index_2 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8) =
                 *(uint64_t *)
                  (*(longlong *)(data_ptr + 8 + (ulonglong)hash_index_1 * 8) +
                  (ulonglong)(data_index_1 + hash_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
            loop_counter = param_4 * 2 + 2;
            original_param = param_4;
        } while (loop_counter < param_3);
    }
    // 边界条件处理
    if (loop_counter == param_3) {
        data_index_1 = (int)param_1[1] + -1 + (int)loop_counter;
        hash_index_1 = data_index_1 >> RENDERING_DATA_HASH_SHIFT;
        data_index_2 = (int)param_1[1] + (int)param_4;
        hash_index_2 = data_index_2 >> RENDERING_DATA_HASH_SHIFT;
        *(uint64_t *)
         (*(longlong *)(*param_1 + 8 + (ulonglong)hash_index_2 * 8) + (ulonglong)(data_index_2 + hash_index_2 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8)
             = *(uint64_t *)
                (*(longlong)(*param_1 + 8 + (ulonglong)hash_index_1 * 8) +
                (ulonglong)(data_index_1 + hash_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
        param_4 = loop_counter + -1;
    }
    
    // 第三阶段：数据块插入和排序
    loop_counter = *param_1;
    base_index = (int)param_1[1];
    while (temp_index = (int)param_4, param_2 < param_4) {
        param_4 = param_4 + -1 >> 1;
        data_block_3 = (longlong *)*param_5;
        if (data_block_3 != (longlong *)0x0) {
            // 执行数据块3的处理函数
            (**(code **)(*data_block_3 + 0x28))();
        }
        
        hash_index_2 = (int)param_4 + base_index;
        hash_index_1 = hash_index_2 >> RENDERING_DATA_HASH_SHIFT;
        hash_index_2 = hash_index_2 & RENDERING_DATA_HASH_MASK;
        data_block_4 = *(longlong **)
                       (*(longlong *)(loop_counter + 8 + (ulonglong)hash_index_1 * 8) + (ulonglong)hash_index_2 * 8);
        if (data_block_4 != (longlong *)0x0) {
            // 执行数据块4的处理函数
            (**(code **)(*data_block_4 + 0x28))();
        }
        
        compare_result = FUN_180306d20(&data_block_4, &data_block_3);
        if (compare_result == '\0') break;
        
        data_index_2 = temp_index + base_index;
        data_index_1 = data_index_2 >> RENDERING_DATA_HASH_SHIFT;
        *(uint64_t *)
         (*(longlong *)(loop_counter + 8 + (ulonglong)data_index_1 * 8) + (ulonglong)(data_index_2 + data_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8) =
             *(uint64_t *)(*(longlong *)(loop_counter + 8 + (ulonglong)hash_index_1 * 8) + (ulonglong)hash_index_2 * 8);
    }
    
    // 最终数据块插入
    data_index_2 = temp_index + base_index;
    hash_index_1 = data_index_2 >> RENDERING_DATA_HASH_SHIFT;
    *(longlong *)
     (*(longlong *)(loop_counter + 8 + (ulonglong)hash_index_1 * 8) + (ulonglong)(data_index_2 + hash_index_1 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8) =
         *param_5;
    
    return;
}





// 渲染数据清理函数 - 清理渲染数据结构，释放相关资源
void rendering_system_cleanup_render_data(longlong *render_data_ptr)
{
    uint64_t *data_end_ptr;
    uint64_t *data_current_ptr;
    
    // 获取数据结束指针
    data_end_ptr = (uint64_t *)render_data_ptr[1];
    
    // 遍历并清理所有数据块
    for (data_current_ptr = (uint64_t *)*render_data_ptr; data_current_ptr != data_end_ptr; data_current_ptr = data_current_ptr + 7) {
        // 设置数据块为清理状态
        *data_current_ptr = &g_rendering_system_state_manager;
        
        // 检查数据块是否正在使用
        if (data_current_ptr[1] != 0) {
            // 警告：子程序不返回
            FUN_18064e900();
        }
        
        // 重置数据块
        data_current_ptr[1] = 0;
        *(int32_t *)(data_current_ptr + 3) = 0;
        *data_current_ptr = &g_rendering_system_state_manager;
    }
    
    // 检查渲染数据指针是否有效
    if (*render_data_ptr != 0) {
        // 警告：子程序不返回
        FUN_18064e900();
    }
    
    return;
}





// 渲染数据释放函数 - 释放渲染数据占用的内存资源
void rendering_system_release_render_data(longlong *render_data_ptr)
{
    uint64_t *data_end_ptr;
    uint64_t *data_current_ptr;
    
    // 获取数据结束指针
    data_end_ptr = (uint64_t *)render_data_ptr[1];
    
    // 遍历并释放所有数据块
    for (data_current_ptr = (uint64_t *)*render_data_ptr; data_current_ptr != data_end_ptr; data_current_ptr = data_current_ptr + 7) {
        // 设置数据块为释放状态
        *data_current_ptr = &g_rendering_system_state_manager;
        
        // 检查数据块是否正在使用
        if (data_current_ptr[1] != 0) {
            // 警告：子程序不返回
            FUN_18064e900();
        }
        
        // 重置数据块
        data_current_ptr[1] = 0;
        *(int32_t *)(data_current_ptr + 3) = 0;
        *data_current_ptr = &g_rendering_system_state_manager;
    }
    
    // 检查渲染数据指针是否有效
    if (*render_data_ptr != 0) {
        // 警告：子程序不返回
        FUN_18064e900();
    }
    
    return;
}



// 渲染数据初始化函数 - 初始化渲染数据结构，分配必要的内存资源
uint64_t *rendering_system_initialize_render_data(uint64_t *render_data_ptr, ulonglong memory_flags, uint64_t param_3, uint64_t param_4)
{
    // 设置渲染数据表指针
    *render_data_ptr = &g_rendering_system_data_table;
    
    // 检查数据结构是否有效
    if (render_data_ptr[1] != 0) {
        // 警告：子程序不返回
        FUN_18064e900();
    }
    
    // 根据内存标志释放内存
    if ((memory_flags & 1) != 0) {
        free(render_data_ptr, 0x68, param_3, param_4, 0xfffffffffffffffe);
    }
    
    return render_data_ptr;
}





// 渲染数据销毁函数 - 销毁渲染数据结构，释放所有相关资源
void rendering_system_destroy_render_data(uint64_t *render_data_ptr)
{
    int *reference_count;
    uint64_t *data_ptr;
    longlong memory_block;
    ulonglong memory_base;
    
    // 设置渲染数据表指针
    *render_data_ptr = &g_rendering_system_data_table;
    data_ptr = (uint64_t *)render_data_ptr[1];
    
    // 检查数据指针是否有效
    if (data_ptr == (uint64_t *)0x0) {
        return;
    }
    
    // 计算内存基地址
    memory_base = (ulonglong)data_ptr & 0xffffffffffc00000;
    if (memory_base != 0) {
        // 计算内存块位置
        memory_block = memory_base + 0x80 + ((longlong)data_ptr - memory_base >> 0x10) * 0x50;
        memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
        
        // 检查异常列表和内存状态
        if ((*(void ***)(memory_base + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
            // 更新内存链表
            *data_ptr = *(uint64_t *)(memory_block + 0x20);
            *(uint64_t **)(memory_block + 0x20) = data_ptr;
            
            // 更新引用计数
            reference_count = (int *)(memory_block + 0x18);
            *reference_count = *reference_count + -1;
            if (*reference_count == 0) {
                FUN_18064d630();
                return;
            }
        }
        else {
            // 调用内存释放函数
            func_0x00018064e870(memory_base, CONCAT71(0xff000000, *(void ***)(memory_base + 0x70) == &ExceptionList),
                              data_ptr, memory_base, 0xfffffffffffffffe);
        }
    }
    
    return;
}





// 渲染队列处理函数 - 处理渲染队列中的所有渲染任务，确保线程安全
void rendering_system_process_render_queue(longlong render_queue_handle)
{
    longlong *queue_end_ptr;
    int lock_result;
    longlong *queue_start_ptr;
    
    // 获取互斥锁
    lock_result = _Mtx_lock();
    if (lock_result != 0) {
        // 锁定失败，抛出异常
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    // 获取队列指针
    queue_end_ptr = *(longlong **)(render_queue_handle + 0x90);
    queue_start_ptr = *(longlong **)(render_queue_handle + 0x88);
    
    // 处理队列中的所有渲染任务
    if (queue_start_ptr != queue_end_ptr) {
        do {
            // 检查渲染任务是否有效
            if ((longlong *)*queue_start_ptr != (longlong *)0x0) {
                // 执行渲染任务的处理函数
                (**(code **)(*(longlong *)*queue_start_ptr + 0x38))();
            }
            queue_start_ptr = queue_start_ptr + 1;
        } while (queue_start_ptr != queue_end_ptr);
        
        // 重置队列起始指针
        queue_start_ptr = *(longlong **)(render_queue_handle + 0x88);
    }
    
    // 更新队列结束指针
    *(longlong **)(render_queue_handle + 0x90) = queue_start_ptr;
    
    // 释放互斥锁
    lock_result = _Mtx_unlock(render_queue_handle);
    if (lock_result != 0) {
        // 解锁失败，抛出异常
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 渲染对象创建函数 - 创建渲染对象并初始化其属性和资源引用
uint64_t *rendering_system_create_render_object(uint64_t *render_object_ptr, int object_type, int32_t param_3, int32_t param_4, int32_t param_5)
{
    int *reference_counter;
    
    // 初始化渲染对象的基础结构
    *render_object_ptr = &g_rendering_system_string_constants;
    *render_object_ptr = &g_rendering_system_string_table;
    *(int32_t *)(render_object_ptr + 1) = 0;
    *render_object_ptr = &g_rendering_system_name_registry;
    
    // 设置对象类型和属性
    *(int *)(render_object_ptr + 3) = object_type;
    *(int32_t *)((longlong)render_object_ptr + 0x1c) = param_3;
    *(int32_t *)(render_object_ptr + 4) = param_4;
    *(int32_t *)((longlong)render_object_ptr + 0x24) = param_5;
    
    // 初始化浮点数值属性
    render_object_ptr[5] = 0x3f800000;        // 1.0f
    render_object_ptr[6] = 0;                 // 0.0f
    render_object_ptr[7] = 0x3f80000000000000; // 1.0
    render_object_ptr[8] = 0;                 // 0.0
    render_object_ptr[9] = 0;                 // 0.0
    render_object_ptr[10] = 0x3f800000;       // 1.0f
    render_object_ptr[0xb] = 0;               // 0.0f
    render_object_ptr[0xc] = 0x3f80000000000000; // 1.0
    
    // 设置渲染状态标志
    *(int32_t *)((longlong)render_object_ptr + 0x11c) = 0xffffffff;
    *(int32_t *)(render_object_ptr + 2) = 0;
    *(int32_t *)(render_object_ptr + 0x24) = 0;
    *(int32_t *)((longlong)render_object_ptr + 0x114) = 0;
    *(int8_t *)((longlong)render_object_ptr + 0x13d) = 0;
    *(uint64_t *)((longlong)render_object_ptr + 300) = 0xffffffffffffffff;
    
    // 初始化更多的浮点属性
    render_object_ptr[0x12] = 0x3f800000;    // 1.0f
    render_object_ptr[0x13] = 0;              // 0.0f
    render_object_ptr[0x14] = 0x3f80000000000000; // 1.0
    render_object_ptr[0x15] = 0;              // 0.0
    render_object_ptr[0x16] = 0;              // 0.0
    render_object_ptr[0x17] = 0x3f800000;    // 1.0f
    render_object_ptr[0x18] = 0;              // 0.0f
    render_object_ptr[0x19] = 0x3f80000000000000; // 1.0
    render_object_ptr[0x1a] = 0x3f800000;    // 1.0f
    render_object_ptr[0x1b] = 0;              // 0.0f
    render_object_ptr[0x1c] = 0x3f80000000000000; // 1.0
    render_object_ptr[0x1d] = 0;              // 0.0
    render_object_ptr[0x1e] = 0;              // 0.0
    render_object_ptr[0x1f] = 0x3f800000;    // 1.0f
    render_object_ptr[0x20] = 0;              // 0.0f
    render_object_ptr[0x21] = 0x3f80000000000000; // 1.0
    
    // 重置位置和偏移属性
    render_object_ptr[0xf] = 0;              // 0.0f
    render_object_ptr[0x10] = 0;             // 0.0f
    render_object_ptr[0xd] = 0;              // 0.0f
    render_object_ptr[0xe] = 0;              // 0.0f
    *(int32_t *)(render_object_ptr + 0x11) = 0xbf800000; // -1.0f
    *(int32_t *)((longlong)render_object_ptr + 0x8c) = 0x3f800000; // 1.0f
    *(int32_t *)(render_object_ptr + 0x23) = 0;
    *(uint64_t *)((longlong)render_object_ptr + 0x124) = 0;
    *(int32_t *)((longlong)render_object_ptr + 0x14) = 0;
    *(int32_t *)((longlong)render_object_ptr + 0x134) = 0xffffffff;
    *(int32_t *)(render_object_ptr + 0x27) = 0;
    *(int32_t *)(render_object_ptr + 0x22) = 0;
    
    // 获取资源管理锁并增加引用计数
    LOCK();
    reference_counter = (int *)(*(longlong *)(*(longlong *)(g_rendering_system_global_state + 0x140) + (longlong)object_type * 8) +
                            0x1a0);
    *reference_counter = *reference_counter + 1;
    UNLOCK();
    
    // 如果有纹理引用，增加纹理引用计数
    if (*(int *)((longlong)render_object_ptr + 0x1c) != -1) {
        LOCK();
        reference_counter = (int *)(*(longlong *)
                                  (*(longlong *)(g_rendering_system_global_state + 0x160) +
                                  (longlong)*(int *)((longlong)render_object_ptr + 0x1c) * 8) + 0x18);
        *reference_counter = *reference_counter + 1;
        UNLOCK();
    }
    
    return render_object_ptr;
}



// 渲染对象释放函数 - 释放渲染对象及其相关资源
uint64_t rendering_system_free_render_object(uint64_t render_object, ulonglong memory_flags)
{
    // 清理渲染对象
    rendering_system_cleanup_render_object(&render_object);
    
    // 根据内存标志释放内存
    if ((memory_flags & 1) != 0) {
        free(render_object, 0x140);
    }
    
    return render_object;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染对象清理函数 - 清理渲染对象的资源引用和相关数据结构
void rendering_system_cleanup_render_object(uint64_t *render_object_ptr)
{
    longlong srw_lock_ptr;
    int *reference_counter;
    longlong resource_array_ptr;
    int object_type;
    longlong texture_manager_ptr;
    int texture_id;
    longlong texture_offset;
    int cleanup_index[2];
    longlong *resource_ptr_1;
    longlong *resource_ptr_2;
    
    // 重置渲染对象指针
    *render_object_ptr = &g_rendering_system_name_registry;
    texture_manager_ptr = g_rendering_system_global_state;
    texture_id = *(int *)((longlong)render_object_ptr + 0x24);
    texture_offset = (longlong)texture_id;
    
    // 清理纹理资源（如果存在）
    if ((texture_id != -1) && (*(int *)((longlong)render_object_ptr + 0x14) == 0)) {
        srw_lock_ptr = g_rendering_system_global_state + 0x2b8;
        cleanup_index[0] = texture_id;
        
        // 获取独占锁
        AcquireSRWLockExclusive(srw_lock_ptr);
        *(int8_t *)(texture_manager_ptr + 3) = 1;
        *(int8_t *)(*(longlong *)(texture_manager_ptr + 0x1a0) + texture_offset * 0x10) = 0;
        
        resource_array_ptr = *(longlong *)(texture_manager_ptr + 0x1a0);
        resource_array_ptr = resource_array_ptr + texture_offset * 0x10;
        
        // 清理纹理资源
        if (*(int *)(resource_array_ptr + 4) != -1) {
            FUN_18030a460(texture_manager_ptr + 0x58, *(uint64_t *)(resource_array_ptr + 4));
            resource_array_ptr = *(longlong *)(texture_manager_ptr + 0x1a0);
        }
        
        // 重置资源指针
        resource_ptr_1 = (longlong *)0xffffffffffffffff;
        *(uint64_t *)(resource_array_ptr + 4 + texture_offset * 0x10) = 0xffffffffffffffff;
        FUN_1800571e0(texture_manager_ptr + 0x120, cleanup_index);
        *(int32_t *)((longlong)render_object_ptr + 0x24) = 0xffffffff;
        
        // 释放独占锁
        ReleaseSRWLockExclusive(srw_lock_ptr);
    }
    
    // 清理对象类型引用
    texture_manager_ptr = g_rendering_system_global_state;
    object_type = *(int *)(render_object_ptr + 3);
    
    // 减少对象类型引用计数
    LOCK();
    reference_counter = (int *)(*(longlong *)(*(longlong *)(g_rendering_system_global_state + 0x140) + (longlong)object_type * 8) +
                            0x1a0);
    texture_id = *reference_counter;
    *reference_counter = *reference_counter + -1;
    UNLOCK();
    
    // 如果引用计数为1，清理对象类型资源
    if (texture_id == 1) {
        texture_id = _Mtx_lock(texture_manager_ptr + 0x1c0);
        if (texture_id != 0) {
            __Throw_C_error_std__YAXH_Z(texture_id);
        }
        
        resource_ptr_1 = *(longlong **)
                       (*(longlong *)((longlong)object_type * 8 + *(longlong *)(texture_manager_ptr + 0x140)) + 0x1a8);
        if (resource_ptr_1 != (longlong *)0x0) {
            (**(code **)(*resource_ptr_1 + 0x28))();
        }
        
        FUN_1800b87c0(texture_manager_ptr + 0x210, &resource_ptr_1);
        if (resource_ptr_1 != (longlong *)0x0) {
            (**(code **)(*resource_ptr_1 + 0x38))();
        }
        
        texture_id = _Mtx_unlock(texture_manager_ptr + 0x1c0);
        if (texture_id != 0) {
            __Throw_C_error_std__YAXH_Z(texture_id);
        }
    }
    
    // 清理纹理引用
    texture_manager_ptr = g_rendering_system_global_state;
    if (*(int *)((longlong)render_object_ptr + 0x1c) != -1) {
        texture_offset = (longlong)*(int *)((longlong)render_object_ptr + 0x1c) * 8;
        
        // 减少纹理引用计数
        LOCK();
        reference_counter = (int *)(*(longlong *)(texture_offset + *(longlong *)(g_rendering_system_global_state + 0x160)) + 0x18);
        texture_id = *reference_counter;
        *reference_counter = *reference_counter + -1;
        UNLOCK();
        
        // 如果引用计数为1，清理纹理资源
        if (texture_id == 1) {
            texture_id = _Mtx_lock(texture_manager_ptr + 0x1c0);
            if (texture_id != 0) {
                __Throw_C_error_std__YAXH_Z(texture_id);
            }
            
            resource_ptr_2 = *(longlong **)(*(longlong *)(texture_offset + *(longlong *)(texture_manager_ptr + 0x160)) + 0x20);
            if (resource_ptr_2 != (longlong *)0x0) {
                (**(code **)(*resource_ptr_2 + 0x28))();
            }
            
            FUN_1800b87c0(texture_manager_ptr + 0x230, &resource_ptr_2);
            if (resource_ptr_2 != (longlong *)0x0) {
                (**(code **)(*resource_ptr_2 + 0x38))();
            }
            
            texture_id = _Mtx_unlock(texture_manager_ptr + 0x1c0);
            if (texture_id != 0) {
                __Throw_C_error_std__YAXH_Z(texture_id);
            }
        }
    }
    
    // 最终清理渲染对象指针
    *render_object_ptr = &g_rendering_system_string_table;
    *render_object_ptr = &g_rendering_system_string_constants;
    
    return;
}





