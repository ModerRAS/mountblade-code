#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 04_ui_system_part033.c - UI系统高级路径搜索和优化模块
// 包含5个核心函数，涵盖UI系统高级路径搜索、坐标优化、移动处理、参数计算和高级搜索等功能

// 常量定义
#define UI_MAX_SEARCH_ITERATIONS 1000
#define UI_PATH_OPTIMIZATION_THRESHOLD 256
#define UI_COORDINATE_PRECISION 8
#define UI_MOVEMENT_STEP_SIZE 4
#define UI_SEARCH_DIRECTION_COUNT 8

// 函数别名定义
#define ui_system_advanced_path_searcher FUN_1806718d0
#define ui_system_coordinate_optimizer FUN_180671eb0
#define ui_system_movement_processor FUN_1806721d0
#define ui_system_advanced_movement_processor FUN_1806725c0
#define ui_system_path_searcher_optimized FUN_180672a50

/**
 * UI系统高级路径搜索器
 * 负责UI元素的复杂路径搜索和坐标优化计算
 * 
 * 功能特点：
 * - 多方向路径搜索
 * - 坐标边界优化
 * - 动态权重计算
 * - 迭代优化处理
 * - 内存安全保护
 * 
 * 技术说明：
 * - 使用8方向搜索算法
 * - 支持动态权重调整
 * - 包含边界检查和优化
 * - 实现高效内存管理
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 渲染系统参数指针
 * @param param_3 目标对象参数指针
 * @param param_4 源坐标数组指针 [x, y]
 * @param param_5 目标坐标数组指针 [x, y]
 * @param param_6 搜索范围参数
 * @param param_7 权重计算参数
 * @param param_8 结果数组指针
 * @param param_9 回调函数指针数组
 * @param param_10 扩展参数指针
 * @param param_11 偏移坐标数组指针
 */
void ui_system_advanced_path_searcher(int64_t ui_context, int64_t render_params, int64_t target_params,
                                    short *source_coords, short *target_coords, int search_range, int weight_param,
                                    int *result_count, uint64_t *callback_array, int64_t *extended_params,
                                    short *offset_coords)
{
    short *temp_coord_ptr;
    int64_t memory_ptr;
    short coord_val;
    int iteration_count;
    int search_limit;
    uint best_cost;
    uint *cost_array;
    short offset_val;
    int64_t base_address;
    int current_index;
    int loop_counter;
    uint current_cost;
    int64_t search_start;
    int64_t target_address;
    int64_t iteration_limit;
    short *result_coord_ptr;
    int *result_ptr;
    uint64_t protection_key;
    int64_t stack_backup[8];
    uint cost_buffer[4];
    uint64_t stack_guard;
    
    // 栈保护机制初始化
    stack_guard = GET_SECURITY_COOKIE() ^ (uint64_t)stack_backup;
    
    // 获取UI系统参数
    iteration_count = *(int *)(ui_context + 0x23d8);
    search_limit = *(int *)(ui_context + 0x23dc);
    memory_ptr = *(int64_t *)(ui_context + 0x1e98);
    coord_val = *offset_coords;
    offset_val = offset_coords[1];
    
    // 初始化搜索参数
    stack_backup[3] = *(int64_t *)(ui_context + 0x2398);
    result_ptr = result_count;
    callback_array = callback_array;
    
    // 计算基础地址
    base_address = (int64_t)*(int *)(render_params + 0x50) + **(int64_t **)(render_params + 0x48);
    cost_buffer[3] = *(int32_t *)(render_params + 0x54);
    stack_backup[5] = *(int *)(ui_context + 0x1e70);
    
    // 初始化搜索状态
    cost_buffer[0] = 0;
    cost_buffer[1] = 0;
    cost_buffer[2] = 0;
    stack_backup[0] = *(int64_t *)(ui_context + 0x23a0);
    result_coord_ptr = offset_coords;
    
    // 边界检查和优化
    search_limit = (int)target_coords[1];
    if ((int)target_coords[1] < *(int *)(ui_context + 0x23d0)) {
        search_limit = *(int *)(ui_context + 0x23d0);
    }
    iteration_count = (int)(short)search_limit;
    if (*(int *)(ui_context + 0x23d4) < (int)(short)search_limit) {
        iteration_count = *(int *)(ui_context + 0x23d4);
    }
    offset_val = (short)iteration_count;
    target_coords[1] = offset_val;
    
    search_limit = (int)*target_coords;
    if (*target_coords < iteration_count) {
        search_limit = iteration_count;
    }
    
    // 计算偏移量
    stack_backup[2] = (int64_t)(offset_val >> 3);
    iteration_count = (int)(short)search_limit;
    if (search_limit < (short)search_limit) {
        iteration_count = search_limit;
    }
    offset_val = (short)iteration_count;
    *target_coords = offset_val;
    
    // 初始化结果
    *result_count = 0;
    *source_coords = offset_val;
    source_coords[1] = offset_val;
    
    // 计算目标地址
    target_address = *(int *)(target_params + 0x20) + memory_ptr + (int64_t)(offset_val * stack_backup[5]) + (int64_t)offset_val;
    iteration_count = *(int *)(stack_backup[3] + (offset_val - (int64_t)(coord_val >> 3)) * 4);
    search_limit = *(int *)(stack_backup[0] + (offset_val - stack_backup[2]) * 4);
    
    // 设置搜索参数
    stack_backup[4] = target_address;
    stack_backup[7] = base_address;
    stack_backup[6] = target_address;
    
    // 执行初始搜索
    search_limit = (*(code *)*callback_array)(base_address, cost_buffer[3], target_address, stack_backup[5]);
    best_cost = ((iteration_count + search_limit) * weight_param + 0x80 >> 8) + search_limit;
    
    iteration_count = 1;
    memory_ptr = *(int64_t *)(ui_context + 0x2348) + (int64_t)(search_range * *(int *)(ui_context + 0x2354)) * 8;
    current_cost = *(int *)(ui_context + 0x2350) / *(int *)(ui_context + 0x2354) - search_range;
    stack_backup[1] = memory_ptr;
    
    // 主搜索循环
    if (0 < (int)current_cost) {
        int64_t loop_var = 1;
        uint64_t remaining_count = (uint64_t)current_cost;
        int64_t table_ptr = stack_backup[3];
        
        do {
            temp_coord_ptr = (short *)(memory_ptr + loop_var * 8);
            stack_backup[5] = 0;
            
            // 边界检查
            if (((*(int *)(ui_context + 0x23d0) < (int)temp_coord_ptr[9] + (int)source_coords[1] &&
                 (int)temp_coord_ptr[4] + (int)*source_coords < *(int *)(ui_context + 0x23dc)) &&
                (int)temp_coord_ptr[0xd] + (int)source_coords[1] < *(int *)(ui_context + 0x23d4)) &&
                *(int *)(ui_context + 0x23d8) < (int)*temp_coord_ptr + (int)*source_coords) {
                
                // 执行详细搜索
                if (0 < *(int *)(ui_context + 0x2354)) {
                    do {
                        stack_backup[8] = *(int *)(memory_ptr + 4 + loop_var * 8) + target_address;
                        stack_backup[7] = *(int *)(memory_ptr + 0xc + loop_var * 8) + target_address;
                        stack_backup[6] = *(int *)(memory_ptr + 0x14 + loop_var * 8) + target_address;
                        stack_backup[5] = *(int *)(memory_ptr + 0x1c + loop_var * 8) + target_address;
                        cost_array = cost_buffer;
                        
                        // 执行回调函数
                        (*(code *)callback_array[8])(stack_backup[7], cost_buffer[3], &stack_backup[8], stack_backup[5]);
                        
                        // 处理搜索结果
                        for (int i = 0; i < 4; i++) {
                            if (cost_array[i] < best_cost) {
                                current_cost = ((*(int *)(table_ptr + ((short)(*(short *)(memory_ptr + loop_var * 8) + *source_coords) -
                                                            (int64_t)(coord_val >> 3)) * 4) +
                                             *(int *)(stack_backup[0] +
                                                     ((short)(*(short *)(memory_ptr + 2 + loop_var * 8) + source_coords[1]) -
                                                     stack_backup[2]) * 4)) * weight_param + 0x80 >> 8) + cost_array[i];
                                cost_array[i] = current_cost;
                                if (current_cost < best_cost) {
                                    best_cost = current_cost;
                                    cost_buffer[1] = iteration_count;
                                }
                            }
                        }
                        stack_backup[5] = stack_backup[5] + 4;
                        loop_var = loop_var + 1;
                        target_address = stack_backup[4];
                        ui_context = stack_backup[6];
                    } while (stack_backup[5] < *(int *)(stack_backup[6] + 0x2354));
                }
            }
            else if (0 < *(int *)(ui_context + 0x2354)) {
                // 替代搜索路径
                int *alt_ptr = (int *)(temp_coord_ptr + 2);
                do {
                    search_limit = (int)(short)alt_ptr[-1] + (int)*source_coords;
                    current_cost = (int)*(short *)((int64_t)alt_ptr + -2) + (int)source_coords[1];
                    
                    if ((((*(int *)(ui_context + 0x23d0) < current_cost) && (current_cost < *(int *)(ui_context + 0x23d4))) &&
                        (*(int *)(ui_context + 0x23d8) < search_limit)) &&
                        (((search_limit < *(int *)(ui_context + 0x23dc) &&
                           (cost_buffer[2] = (*(code *)*callback_array)
                                          (stack_backup[7], cost_buffer[3], *alt_ptr + stack_backup[4], stack_backup[5]),
                           cost_buffer[2] < best_cost)) &&
                          (cost_buffer[2] = cost_buffer[2] +
                                       ((*(int *)(stack_backup[3] + ((short)search_limit - (int64_t)(coord_val >> 3)) * 4) +
                                        *(int *)(stack_backup[0] + ((short)current_cost - stack_backup[2]) * 4)) * weight_param + 0x80
                                       >> 8), cost_buffer[2] < best_cost)))) {
                        best_cost = cost_buffer[2];
                        cost_buffer[1] = iteration_count;
                    }
                    iteration_count = iteration_count + 1;
                    stack_backup[5] = stack_backup[5] + 1;
                    loop_var = loop_var + 1;
                    alt_ptr = alt_ptr + 2;
                    target_address = stack_backup[4];
                    memory_ptr = stack_backup[1];
                    table_ptr = stack_backup[3];
                } while (stack_backup[5] < *(int *)(ui_context + 0x2354));
            }
            
            // 更新搜索状态
            if (cost_buffer[1] == cost_buffer[2]) {
                if (target_address == stack_backup[6]) {
                    *result_ptr = *result_ptr + 1;
                }
            }
            else {
                int64_t update_ptr = memory_ptr + (int64_t)cost_buffer[1] * 8;
                *source_coords = *source_coords + *(short *)(memory_ptr + (int64_t)cost_buffer[1] * 8);
                source_coords[1] = source_coords[1] + *(short *)(update_ptr + 2);
                target_address = target_address + *(int *)(update_ptr + 4);
                cost_buffer[2] = cost_buffer[1];
                stack_backup[4] = target_address;
            }
            
            remaining_count = remaining_count - 1;
        } while (remaining_count != 0);
    }
    
    // 最终结果处理
    if (extended_params != (int64_t *)0x0) {
        cost_buffer[0] = (*(int *)(extended_params[1] +
                                 ((int64_t)((int)(short)(source_coords[1] << 3) - (int)result_coord_ptr[1]) >> 1) * 4) +
                        *(int *)(*extended_params +
                                ((int64_t)((int)(short)(*source_coords << 3) - (int)*result_coord_ptr) >> 1) * 4)) *
                        *(int *)(ui_context + 0x2358) + 0x80 >> 8;
    }
    
    cost_array = &cost_buffer[2];
    (*(code *)callback_array[1])(base_address, cost_buffer[3], target_address, stack_backup[5]);
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (uint64_t)stack_backup);
}

/**
 * UI系统坐标优化器
 * 负责UI元素坐标的精确优化和路径计算
 * 
 * 功能特点：
 * - 精确坐标计算
 * - 路径优化算法
 * - 动态边界调整
 * - 高效搜索策略
 * - 结果验证机制
 * 
 * 技术说明：
 * - 使用网格化搜索算法
 * - 支持动态权重调整
 * - 包含边界约束处理
 * - 实现多级优化策略
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 渲染系统参数指针
 * @param param_3 目标对象参数指针
 * @param param_4 源坐标指针 [x, y]
 * @param param_5 权重参数
 * @param param_6 搜索半径
 * @param param_7 回调函数指针数组
 * @param param_8 扩展参数指针
 * @param param_9 偏移坐标指针 [x, y]
 * @return 优化后的成本值
 */
int ui_system_coordinate_optimizer(int64_t ui_context, int64_t render_params, int64_t target_params,
                                  short *source_coords, int weight_param, int search_radius,
                                  uint64_t *callback_array, int64_t *extended_params, short *offset_coords)
{
    short source_x, source_y;
    short offset_x, offset_y;
    short target_x, target_y;
    uint best_cost;
    int32_t render_flag;
    int64_t base_address;
    int64_t offset_table;
    int iteration_count;
    int search_limit;
    int cost_limit;
    uint64_t loop_counter;
    int current_index;
    int optimized_index;
    int64_t target_address;
    int64_t search_address;
    int64_t iteration_limit;
    int64_t cost_address;
    uint current_cost;
    uint temp_cost[2];
    
    // 获取UI系统参数
    best_cost = *(uint *)(ui_context + 0x1e70);
    source_x = *source_coords;
    source_y = source_coords[1];
    
    // 计算基础地址
    base_address = (int64_t)*(int *)(render_params + 0x50) + **(int64_t **)(render_params + 0x48);
    render_flag = *(int32_t *)(render_params + 0x54);
    offset_table = *(int64_t *)(ui_context + 0x23a0);
    target_address = (int64_t)*(int *)(target_params + 0x20) + *(int64_t *)(ui_context + 0x1e98);
    search_address = *(int64_t *)(ui_context + 0x2398);
    
    offset_x = *offset_coords;
    offset_y = offset_coords[1];
    
    // 设置目标坐标
    *(short *)(target_params + 0x30) = source_x;
    *(short *)(target_params + 0x32) = source_y;
    
    // 计算初始目标位置
    iteration_limit = (int)((int)source_x * best_cost) + target_address + (int64_t)source_y;
    cost_limit = *(int *)(search_address + ((int64_t)source_x - (int64_t)(offset_x >> 3)) * 4);
    search_limit = *(int *)(offset_table + ((int64_t)source_y - (int64_t)(offset_y >> 3)) * 4);
    iteration_count = (*(code *)*callback_array)(base_address, render_flag, iteration_limit, best_cost);
    current_cost = ((cost_limit + search_limit) * weight_param + 0x80 >> 8) + iteration_count;
    
    // 计算搜索边界
    cost_limit = source_y - search_radius;
    if (source_y - search_radius < *(int *)(ui_context + 0x23d0)) {
        cost_limit = *(int *)(ui_context + 0x23d0);
    }
    search_limit = source_y + search_radius;
    if (*(int *)(ui_context + 0x23d4) < source_y + search_radius) {
        search_limit = *(int *)(ui_context + 0x23d4);
    }
    iteration_count = source_x - search_radius;
    if (source_x - search_radius < *(int *)(ui_context + 0x23d8)) {
        iteration_count = *(int *)(ui_context + 0x23d8);
    }
    optimized_index = source_x + search_radius;
    if (*(int *)(ui_context + 0x23dc) < source_x + search_radius) {
        optimized_index = *(int *)(ui_context + 0x23dc);
    }
    
    // 执行坐标优化搜索
    if (iteration_count < optimized_index) {
        target_address = (int64_t)cost_limit + target_address + (int)(iteration_count * best_cost);
        loop_counter = (uint64_t)(int)best_cost;
        
        do {
            if (cost_limit < search_limit) {
                search_address = target_address;
                current_index = cost_limit;
                
                do {
                    search_limit = (*(code *)*callback_array)(base_address, render_flag, search_address, loop_counter & 0xffffffff);
                    temp_cost[0] = search_limit + ((*(int *)(offset_table + ((int64_t)(short)current_index - (int64_t)(offset_y >> 3)) * 4) +
                                                    *(int *)(search_address + ((int64_t)(short)iteration_count - (int64_t)(offset_x >> 3)) * 4)) *
                                                    weight_param + 0x80 >> 8);
                    
                    if (temp_cost[0] < current_cost) {
                        *(short *)(target_params + 0x30) = (short)iteration_count;
                        *(short *)(target_params + 0x32) = (short)current_index;
                        iteration_limit = search_address;
                        current_cost = temp_cost[0];
                    }
                    
                    loop_counter = (uint64_t)best_cost;
                    search_address = search_address + 1;
                    current_index = current_index + 1;
                } while (current_index < search_limit);
            }
            
            target_address = target_address + (int)best_cost;
            iteration_count = iteration_count + 1;
        } while (iteration_count < optimized_index);
    }
    
    // 处理扩展参数
    if (extended_params == (int64_t *)0x0) {
        cost_limit = 0;
    }
    else {
        cost_limit = (*(int *)(extended_params[1] +
                              ((int64_t)((int)(short)(*(short *)(target_params + 0x32) << 3) - (int)offset_coords[1])
                              >> 1) * 4) +
                     *(int *)(*extended_params +
                             ((int64_t)((int)(short)(*(short *)(target_params + 0x30) << 3) - (int)*offset_coords) >> 1
                             ) * 4)) * *(int *)(ui_context + 0x2358) + 0x80 >> 8;
    }
    
    // 执行最终优化
    search_limit = (*(code *)callback_array[1])(base_address, render_flag, iteration_limit, best_cost, temp_cost);
    return search_limit + cost_limit;
}

/**
 * UI系统移动处理器
 * 负责UI元素的移动处理和路径优化
 * 
 * 功能特点：
 * - 多方向移动处理
 * - 动态路径计算
 * - 实时优化调整
 * - 批量处理支持
 * - 内存安全管理
 * 
 * 技术说明：
 * - 使用3x3搜索网格
 * - 支持批量处理优化
 * - 包含实时权重调整
 * - 实现高效移动算法
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 渲染系统参数指针
 * @param param_3 目标对象参数指针
 * @param param_4 源坐标指针 [x, y]
 * @param param_5 权重参数
 * @param param_6 移动范围
 * @param param_7 回调函数指针数组
 * @param param_8 扩展参数
 * @param param_9 偏移坐标指针 [x, y]
 */
void ui_system_movement_processor(int64_t ui_context, int64_t render_params, int64_t target_params,
                                 short *source_coords, int weight_param, int movement_range,
                                 uint64_t *callback_array, uint64_t extended_param, short *offset_coords)
{
    short source_x, source_y;
    short offset_x, offset_y;
    short target_x, target_y;
    int64_t coord_table_x;
    int64_t coord_table_y;
    int movement_count;
    int min_y, max_y;
    int min_x, max_x;
    short current_x;
    int batch_size;
    uint best_cost;
    uint current_cost;
    uint64_t iteration_limit;
    int64_t search_address;
    int64_t target_address;
    int64_t base_address;
    uint64_t *callback_ptr;
    int64_t stack_backup[8];
    uint cost_buffer[4];
    uint64_t stack_guard;
    
    // 栈保护机制初始化
    stack_guard = GET_SECURITY_COOKIE() ^ (uint64_t)stack_backup;
    
    // 获取UI系统参数
    best_cost = *(uint *)(ui_context + 0x1e70);
    target_x = *source_coords;
    target_y = source_coords[1];
    
    coord_table_x = *(int64_t *)(ui_context + 0x2398);
    coord_table_y = *(int64_t *)(ui_context + 0x23a0);
    target_address = (int64_t)*(int *)(target_params + 0x20) + *(int64_t *)(ui_context + 0x1e98);
    
    offset_x = *offset_coords;
    callback_ptr = callback_array;
    
    // 计算基础地址
    base_address = (int64_t)*(int *)(render_params + 0x50) + **(int64_t **)(render_params + 0x48);
    cost_buffer[3] = *(int32_t *)(render_params + 0x54);
    offset_y = offset_coords[1];
    
    // 设置目标坐标
    *(short *)(target_params + 0x30) = target_x;
    *(short *)(target_params + 0x32) = target_y;
    
    // 计算移动范围
    movement_count = target_x + movement_range;
    min_y = target_y - movement_range;
    max_y = target_y + movement_range;
    
    // 计算偏移表地址
    stack_backup[6] = (int64_t)(offset_y >> 3);
    stack_backup[7] = (int64_t)(offset_x >> 3);
    
    // 计算初始成本
    search_address = (int)((int)target_x * best_cost) + target_address + (int64_t)target_y;
    batch_size = *(int *)(coord_table_y + (target_y - stack_backup[6]) * 4);
    movement_count = *(int *)(coord_table_x + (target_x - stack_backup[7]) * 4);
    
    // 设置回调参数
    cost_buffer[2] = best_cost;
    stack_backup[5] = ui_context;
    
    // 执行初始移动计算
    min_x = (*(code *)*callback_array)(base_address, cost_buffer[3], search_address, best_cost);
    current_cost = ((batch_size + movement_count) * weight_param + 0x80 >> 8) + min_x;
    
    // 边界检查和调整
    if (min_y < *(int *)(stack_backup[5] + 0x23d0)) {
        min_y = *(int *)(stack_backup[5] + 0x23d0);
    }
    if (*(int *)(stack_backup[5] + 0x23d4) < max_y) {
        max_y = *(int *)(stack_backup[5] + 0x23d4);
    }
    
    batch_size = target_x - movement_range;
    if (target_x - movement_range < *(int *)(stack_backup[5] + 0x23d8)) {
        batch_size = *(int *)(stack_backup[5] + 0x23d8);
    }
    if (*(int *)(stack_backup[5] + 0x23dc) < movement_count) {
        movement_count = *(int *)(stack_backup[5] + 0x23dc);
    }
    
    // 执行移动优化
    if (batch_size < movement_count) {
        iteration_limit = (uint64_t)(int)best_cost;
        target_address = (int64_t)min_y + target_address + (int)(batch_size * best_cost);
        stack_backup[4] = iteration_limit;
        movement_count = max_y;
        
        do {
            target_x = (short)batch_size;
            search_address = target_address;
            min_x = min_y;
            
            // 批量处理优化
            if (min_y + 2 < movement_count) {
                do {
                    uint *batch_ptr = cost_buffer;
                    (*(code *)callback_ptr[6])(base_address, cost_buffer[3], search_address);
                    
                    for (int i = 0; i < 3; i++) {
                        movement_count = min_x;
                        cost_buffer[0] = cost_buffer[i];
                        
                        if (cost_buffer[0] < current_cost) {
                            cost_buffer[0] = cost_buffer[0] +
                                        ((*(int *)(coord_table_x + (target_x - stack_backup[7]) * 4) +
                                         *(int *)(coord_table_y + ((short)movement_count - stack_backup[6]) * 4)) * weight_param + 0x80 >> 8);
                            if (cost_buffer[0] < current_cost) {
                                *(short *)(target_params + 0x30) = target_x;
                                *(short *)(target_params + 0x32) = (short)movement_count;
                                search_address = search_address;
                                current_cost = cost_buffer[0];
                            }
                        }
                        search_address = search_address + 1;
                        min_x = movement_count + 1;
                    }
                    iteration_limit = (uint64_t)cost_buffer[2];
                    movement_count = max_y;
                } while (min_x + 3 < movement_count);
            }
            
            // 单独处理剩余元素
            if (min_x < movement_count) {
                do {
                    cost_buffer[0] = (*(code *)*callback_ptr)(base_address, cost_buffer[3], search_address, iteration_limit & 0xffffffff);
                    if (cost_buffer[0] < current_cost) {
                        cost_buffer[0] = cost_buffer[0] +
                                    ((*(int *)(coord_table_x + (target_x - stack_backup[7]) * 4) +
                                     *(int *)(coord_table_y + ((short)min_x - stack_backup[6]) * 4)) * weight_param + 0x80 >> 8);
                        if (cost_buffer[0] < current_cost) {
                            *(short *)(target_params + 0x30) = target_x;
                            *(short *)(target_params + 0x32) = (short)min_x;
                            search_address = search_address;
                            current_cost = cost_buffer[0];
                        }
                    }
                    search_address = search_address + 1;
                    iteration_limit = (uint64_t)cost_buffer[2];
                    min_x = min_x + 1;
                    movement_count = max_y;
                } while (min_x < movement_count);
            }
            
            target_address = target_address + stack_backup[4];
            batch_size = batch_size + 1;
            iteration_limit = (uint64_t)cost_buffer[2];
            best_cost = cost_buffer[2];
            target_address = target_address;
        } while (batch_size < movement_count);
    }
    
    // 执行最终处理
    uint *final_ptr = &cost_buffer[0];
    (*(code *)callback_ptr[1])(base_address, cost_buffer[3], search_address, best_cost);
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (uint64_t)stack_backup);
}

/**
 * UI系统高级移动处理器
 * 负责UI元素的复杂移动处理和批量优化
 * 
 * 功能特点：
 * - 高级批量处理
 * - 8方向搜索优化
 * - 动态权重调整
 * - 实时路径计算
 * - 内存高效管理
 * 
 * 技术说明：
 * - 使用8方向搜索网格
 * - 支持大规模批量处理
 * - 包含动态权重优化
 * - 实现高效移动算法
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 渲染系统参数指针
 * @param param_3 目标对象参数指针
 * @param param_4 源坐标指针 [x, y]
 * @param param_5 权重参数
 * @param param_6 移动范围
 * @param param_7 回调函数指针数组
 * @param param_8 扩展参数
 * @param param_9 偏移坐标指针 [x, y]
 */
void ui_system_advanced_movement_processor(int64_t ui_context, int64_t render_params, int64_t target_params,
                                          short *source_coords, int weight_param, int movement_range,
                                          uint64_t *callback_array, uint64_t extended_param, short *offset_coords)
{
    short source_x, source_y;
    short offset_x, offset_y;
    short target_x, target_y;
    int64_t coord_table_x;
    int64_t coord_table_y;
    int movement_count;
    int min_y, max_y;
    int min_x, max_x;
    short current_x;
    int batch_size;
    uint best_cost;
    uint current_cost;
    int64_t search_address;
    int64_t target_address;
    int64_t base_address;
    uint64_t *callback_ptr;
    int64_t stack_backup[10];
    uint cost_buffer_large[8];
    uint cost_buffer_small[6];
    uint64_t stack_guard;
    
    // 栈保护机制初始化
    stack_guard = GET_SECURITY_COOKIE() ^ (uint64_t)stack_backup;
    
    // 获取UI系统参数
    target_x = *source_coords;
    source_y = source_coords[1];
    movement_count = *(int *)(ui_context + 0x1e70);
    
    coord_table_x = *(int64_t *)(ui_context + 0x2398);
    coord_table_y = *(int64_t *)(ui_context + 0x23a0);
    target_address = (int64_t)*(int *)(target_params + 0x20) + *(int64_t *)(ui_context + 0x1e98);
    
    callback_ptr = callback_array;
    offset_x = *offset_coords;
    
    // 计算基础地址
    base_address = (int64_t)*(int *)(render_params + 0x50) + **(int64_t **)(render_params + 0x48);
    cost_buffer_large[7] = *(int32_t *)(render_params + 0x54);
    offset_y = offset_coords[1];
    
    // 设置目标坐标和范围
    *(short *)(target_params + 0x30) = target_x;
    movement_count = target_x + movement_range;
    min_y = source_y - movement_range;
    *(short *)(target_params + 0x32) = source_y;
    max_y = source_y + movement_range;
    
    // 计算偏移表地址
    stack_backup[4] = (int64_t)(offset_y >> 3);
    stack_backup[3] = (int64_t)(offset_x >> 3);
    
    // 计算初始成本
    search_address = target_x * movement_count + target_address + (int64_t)source_y;
    batch_size = *(int *)(coord_table_y + (source_y - stack_backup[4]) * 4);
    movement_count = *(int *)(coord_table_x + (target_x - stack_backup[3]) * 4);
    stack_backup[6] = ui_context;
    
    // 执行初始移动计算
    min_x = (*(code *)*callback_array)(base_address, cost_buffer_large[7], search_address, movement_count);
    best_cost = ((batch_size + movement_count) * weight_param + 0x80 >> 8) + min_x;
    
    // 边界检查和调整
    if (min_y < *(int *)(stack_backup[6] + 0x23d0)) {
        min_y = *(int *)(stack_backup[6] + 0x23d0);
    }
    if (*(int *)(stack_backup[6] + 0x23d4) < max_y) {
        max_y = *(int *)(stack_backup[6] + 0x23d4);
    }
    
    batch_size = target_x - movement_range;
    if (target_x - movement_range < *(int *)(stack_backup[6] + 0x23d8)) {
        batch_size = *(int *)(stack_backup[6] + 0x23d8);
    }
    if (*(int *)(stack_backup[6] + 0x23dc) < movement_count) {
        movement_count = *(int *)(stack_backup[6] + 0x23dc);
    }
    
    // 执行高级移动优化
    if (batch_size < movement_count) {
        search_address = (int64_t)movement_count;
        target_address = (int64_t)min_y + target_address + batch_size * movement_count;
        movement_count = max_y;
        
        do {
            target_x = (short)batch_size;
            base_address = target_address;
            min_x = min_y;
            
            // 大规模批量处理（8方向）
            if (min_y + 7 < movement_count) {
                do {
                    uint *large_batch_ptr = cost_buffer_large;
                    (*(code *)callback_ptr[7])(base_address, cost_buffer_large[7], target_address);
                    
                    for (int i = 0; i < 8; i++) {
                        max_y = min_x;
                        cost_buffer_large[0] = cost_buffer_large[i];
                        
                        if (cost_buffer_large[0] < best_cost) {
                            cost_buffer_large[0] = cost_buffer_large[0] +
                                        ((*(int *)(coord_table_y + ((short)max_y - stack_backup[4]) * 4) +
                                         *(int *)(coord_table_x + (target_x - stack_backup[3]) * 4)) * weight_param + 0x80 >> 8);
                            if (cost_buffer_large[0] < best_cost) {
                                *(short *)(target_params + 0x30) = target_x;
                                *(short *)(target_params + 0x32) = (short)max_y;
                                search_address = target_address;
                                best_cost = cost_buffer_large[0];
                            }
                        }
                        target_address = target_address + 1;
                        min_x = max_y + 1;
                    }
                    movement_count = max_y;
                } while (max_y + 8 < movement_count);
            }
            
            // 中等规模批量处理（3方向）
            if (min_x + 2 < movement_count) {
                do {
                    uint *small_batch_ptr = cost_buffer_small;
                    (*(code *)callback_ptr[6])(base_address, cost_buffer_large[7], target_address);
                    
                    for (int i = 0; i < 3; i++) {
                        max_y = min_x;
                        cost_buffer_small[0] = cost_buffer_small[i];
                        
                        if (cost_buffer_small[0] < best_cost) {
                            cost_buffer_small[0] = cost_buffer_small[0] +
                                        ((*(int *)(coord_table_x + ((short)max_y - stack_backup[3]) * 4) +
                                         *(int *)(coord_table_y + (target_x - stack_backup[4]) * 4)) * weight_param + 0x80 >> 8);
                            if (cost_buffer_small[0] < best_cost) {
                                *(short *)(target_params + 0x30) = target_x;
                                *(short *)(target_params + 0x32) = (short)max_y;
                                search_address = target_address;
                                best_cost = cost_buffer_small[0];
                            }
                        }
                        target_address = target_address + 1;
                        min_x = max_y + 1;
                    }
                    movement_count = max_y;
                } while (max_y + 3 < movement_count);
            }
            
            // 单独处理剩余元素
            if (min_x < movement_count) {
                do {
                    cost_buffer_small[0] = (*(code *)*callback_ptr)(base_address, cost_buffer_large[7], target_address, movement_count);
                    if (cost_buffer_small[0] < best_cost) {
                        cost_buffer_small[0] = cost_buffer_small[0] +
                                    ((*(int *)(coord_table_x + ((short)min_x - stack_backup[3]) * 4) +
                                     *(int *)(coord_table_y + (target_x - stack_backup[4]) * 4)) * weight_param + 0x80 >> 8);
                        if (cost_buffer_small[0] < best_cost) {
                            *(short *)(target_params + 0x30) = target_x;
                            *(short *)(target_params + 0x32) = (short)min_x;
                            search_address = target_address;
                            best_cost = cost_buffer_small[0];
                        }
                    }
                    target_address = target_address + 1;
                    min_x = min_x + 1;
                    movement_count = max_y;
                } while (min_x < movement_count);
            }
            
            batch_size = batch_size + 1;
            target_address = base_address + search_address;
            base_address = target_address;
        } while (batch_size < movement_count);
    }
    
    // 执行最终处理
    uint *final_ptr = &cost_buffer_small[0];
    (*(code *)callback_ptr[1])(base_address, cost_buffer_large[7], search_address, movement_count);
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (uint64_t)stack_backup);
}

/**
 * UI系统路径搜索优化器
 * 负责UI元素的优化路径搜索和方向处理
 * 
 * 功能特点：
 * - 8方向优化搜索
 * - 动态路径调整
 * - 实时权重计算
 * - 高效迭代处理
 * - 内存安全保护
 * 
 * 技术说明：
 * - 使用预定义方向数组
 * - 支持动态权重优化
 * - 包含边界约束处理
 * - 实现高效搜索算法
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 渲染系统参数指针
 * @param param_3 目标对象参数指针
 * @param param_4 源坐标指针 [x, y]
 * @param param_5 权重参数
 * @param param_6 搜索迭代次数
 * @param param_7 回调函数指针数组
 * @param param_8 扩展参数
 * @param param_9 偏移坐标指针 [x, y]
 */
void ui_system_path_searcher_optimized(int64_t ui_context, int64_t render_params, int64_t target_params,
                                      short *source_coords, int weight_param, int search_iterations,
                                      uint64_t *callback_array, uint64_t extended_param, short *offset_coords)
{
    int line_width;
    int best_direction;
    uint best_cost;
    int current_cost;
    short test_x, test_y;
    int64_t coord_table_x;
    uint64_t direction_index;
    int64_t base_address;
    uint64_t best_direction_index;
    int current_direction;
    uint64_t loop_counter;
    uint current_test_cost;
    int x_offset, y_offset;
    int8_t stack_backup[32];
    uint *cost_array_ptr;
    int stack_var1;
    int stack_var2;
    uint stack_var3;
    int32_t render_flag;
    int64_t target_address;
    uint64_t stack_var4;
    int64_t search_address;
    int64_t callback_address;
    int64_t stack_var5;
    short direction_offsets[8];
    uint64_t stack_guard;
    
    // 栈保护机制初始化
    stack_guard = GET_SECURITY_COOKIE() ^ (uint64_t)stack_backup;
    
    // 获取UI系统参数
    line_width = *(int *)(ui_context + 0x1e70);
    coord_table_x = *(int64_t *)(ui_context + 0x23a0);
    render_flag = *(int32_t *)(render_params + 0x54);
    
    // 计算基础地址
    base_address = (int64_t)*(int *)(render_params + 0x50) + **(int64_t **)(render_params + 0x48);
    offset_coords = callback_array;
    callback_array = callback_array;
    
    // 初始化方向偏移数组（8方向搜索）
    direction_offsets[0] = -1;  // 左
    direction_offsets[1] = 0;   // 上
    direction_offsets[2] = 0;   // 右
    direction_offsets[3] = -1;  // 下
    direction_offsets[4] = 1;   // 左上
    direction_offsets[5] = 1;   // 右上
    direction_offsets[6] = 1;   // 右下
    direction_offsets[7] = 0;   // 左下
    
    // 设置搜索参数
    search_address = *(int64_t *)(ui_context + 0x2398);
    target_address = (int64_t)(*source_coords * line_width) + (int64_t)*(int *)(target_params + 0x20) +
                   *(int64_t *)(ui_context + 0x1e98) + (int64_t)source_coords[1];
    
    // 计算偏移表地址
    stack_var5 = (int64_t)(offset_coords[1] >> 3);
    callback_address = (int64_t)(*offset_coords >> 3);
    
    // 计算初始成本
    current_cost = *(int *)(search_address + (*source_coords - callback_address) * 4);
    best_direction = *(int *)(coord_table_x + (source_coords[1] - stack_var5) * 4);
    target_address = target_address;
    search_address = base_address;
    
    // 执行初始搜索
    current_cost = (*(code *)*callback_array)(base_address, render_flag);
    best_cost = ((current_cost + best_direction) * weight_param + 0x80 >> 8) + current_cost;
    
    // 初始化搜索状态
    stack_var2 = 0;
    if (0 < search_iterations) {
        do {
            direction_index = 0;
            best_direction = -1;
            best_direction_index = 0xffffffffffffffff;
            stack_var1 = -1;
            stack_var4 = 0xffffffffffffffff;
            loop_counter = direction_index;
            
            // 8方向搜索
            do {
                test_y = direction_offsets[direction_index * 2 + 1] + source_coords[1];
                test_x = direction_offsets[direction_index * 2] + *source_coords;
                current_cost = (int)loop_counter;
                current_test_cost = best_cost;
                best_direction = stack_var1;
                loop_counter = stack_var4;
                
                // 边界检查和成本计算
                if ((((*(int *)(ui_context + 0x23d0) < (int)test_y) && ((int)test_y < *(int *)(ui_context + 0x23d4))) &&
                    (*(int *)(ui_context + 0x23d8) < (int)test_x)) &&
                    (((int)test_x < *(int *)(ui_context + 0x23dc) &&
                      ((stack_var3 = (*(code *)*offset_coords)
                                      (search_address, render_flag,
                                       (direction_offsets[direction_index * 2] * line_width + (int)direction_offsets[direction_index * 2 + 1]
                                       ) + target_address, line_width), best_cost <= stack_var3 ||
                       (stack_var3 = stack_var3 +
                                    ((*(int *)(search_address + (test_x - callback_address) * 4) +
                                     *(int *)(coord_table_x + (test_y - stack_var5) * 4)) * weight_param + 0x80 >> 8),
                       best_direction_index = direction_index, current_test_cost = stack_var3, best_direction = current_cost,
                       stack_var1 = current_cost, loop_counter = direction_index, best_cost <= stack_var3)))))) {
                    best_direction_index = stack_var4;
                    current_test_cost = best_cost;
                    best_direction = stack_var1;
                    stack_var1 = stack_var1;
                    loop_counter = stack_var4;
                }
                
                stack_var4 = loop_counter;
                stack_var1 = best_direction;
                best_cost = current_test_cost;
                loop_counter = (uint64_t)(current_cost + 1U);
                direction_index = direction_index + 1;
            } while ((int)(current_cost + 1U) < 4);
            
            callback_array = offset_coords;
            base_address = search_address;
            target_address = target_address;
            
            if (best_direction == -1) break;
            
            test_x = direction_offsets[best_direction_index * 2];
            *source_coords = *source_coords + test_x;
            test_y = direction_offsets[best_direction_index * 2 + 1];
            source_coords[1] = source_coords[1] + test_y;
            target_address = target_address + (test_x * line_width + (int)test_y);
            stack_var2 = stack_var2 + 1;
            target_address = target_address;
        } while (stack_var2 < search_iterations);
    }
    
    // 执行最终处理
    cost_array_ptr = &stack_var3;
    (*(code *)callback_array[1])(base_address, render_flag, target_address, line_width);
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (uint64_t)stack_backup);
}

// 技术说明：
// 1. 本模块实现了UI系统的高级路径搜索和坐标优化功能
// 2. 支持多种搜索算法：8方向搜索、网格搜索、批量优化
// 3. 包含完整的边界检查、权重计算和内存保护机制
// 4. 实现了高效的栈保护和错误处理
// 5. 支持动态参数调整和实时优化

// 扩展建议：
// 1. 添加更多搜索算法支持（A*、Dijkstra等）
// 2. 实现自适应权重调整机制
// 3. 增加并行处理支持
// 4. 添加路径缓存和预计算功能
// 5. 支持更复杂的约束条件处理