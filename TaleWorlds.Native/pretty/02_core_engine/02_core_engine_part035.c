#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part035.c - 核心引擎模块第35部分
// 包含8个函数，主要处理矩阵变换、状态更新和对象初始化

/**
 * 矩阵变换函数 - 执行4x4矩阵的乘法运算
 * @param param_1 输入矩阵1的指针
 * @param param_2 输入矩阵2的指针  
 * @param param_3 变换参数1
 * @param param_4 变换参数2
 */
void matrix_transform_4x4(undefined8 param_1, undefined8 param_2, float param_3, float param_4)
{
    float matrix_element_1;
    float matrix_element_2;
    float matrix_element_3;
    float matrix_element_4;
    float matrix_element_5;
    float matrix_element_6;
    float matrix_element_7;
    float matrix_element_8;
    float matrix_element_9;
    longlong matrix_base_ptr;
    float *matrix_data_ptr;
    undefined4 transform_flag;
    float xmm0_value;
    float xmm1_value;
    float xmm4_x;
    float xmm4_y;
    float xmm4_z;
    float xmm5_value;
    undefined4 stack_padding_1;
    float result_x;
    float result_y;
    float result_z;
    undefined4 stack_padding_2;
    float temp_1_x;
    float temp_1_y;
    float temp_1_z;
    undefined4 stack_padding_3;
    float temp_2_x;
    float temp_2_y;
    float temp_2_z;
    undefined4 stack_padding_4;
    float temp_3_x;
    float temp_3_y;
    float temp_3_z;
    undefined4 stack_padding_5;
    undefined4 input_param_1;
    undefined4 input_param_2;
    
    // 从矩阵指针加载数据
    matrix_element_1 = *matrix_data_ptr;
    matrix_element_2 = matrix_data_ptr[1];
    matrix_element_3 = matrix_data_ptr[2];
    matrix_element_4 = matrix_data_ptr[8];
    matrix_element_5 = matrix_data_ptr[9];
    matrix_element_6 = matrix_data_ptr[10];
    matrix_element_7 = *(float *)(matrix_base_ptr + 0x124);
    matrix_element_8 = *(float *)(matrix_base_ptr + 0x130);
    
    // 计算第一行结果
    result_x = matrix_element_7 * xmm4_x + (float)param_1 * matrix_element_1 + (float)param_2 * matrix_element_4;
    result_y = matrix_element_7 * xmm4_y + (float)((ulonglong)param_1 >> 0x20) * matrix_element_2 +
               (float)((ulonglong)param_2 >> 0x20) * matrix_element_5;
    result_z = matrix_element_7 * xmm4_z + xmm0_value * matrix_element_3 + xmm1_value * matrix_element_6;
    
    // 计算第二行结果
    matrix_element_7 = *(float *)(matrix_base_ptr + 0x138);
    matrix_element_9 = *(float *)(matrix_base_ptr + 0x140);
    temp_1_x = xmm5_value * xmm4_x + matrix_element_8 * matrix_element_1 + matrix_element_7 * matrix_element_4;
    temp_1_y = xmm5_value * xmm4_y + matrix_element_8 * matrix_element_2 + matrix_element_7 * matrix_element_5;
    temp_1_z = xmm5_value * xmm4_z + matrix_element_8 * matrix_element_3 + matrix_element_7 * matrix_element_6;
    
    // 计算第三行结果
    matrix_element_7 = *(float *)(matrix_base_ptr + 0x148);
    matrix_element_8 = *(float *)(matrix_base_ptr + 0x150);
    temp_2_x = param_4 * xmm4_x + matrix_element_9 * matrix_element_1 + matrix_element_7 * matrix_element_4;
    temp_2_y = param_4 * xmm4_y + matrix_element_9 * matrix_element_2 + matrix_element_7 * matrix_element_5;
    temp_2_z = param_4 * xmm4_z + matrix_element_9 * matrix_element_3 + matrix_element_7 * matrix_element_6;
    
    // 计算第四行结果
    matrix_element_7 = *(float *)(matrix_base_ptr + 0x158);
    temp_3_x = param_3 * xmm4_x + matrix_element_8 * matrix_element_1 + matrix_element_7 * matrix_element_4 + matrix_data_ptr[0xc];
    temp_3_y = param_3 * xmm4_y + matrix_element_8 * matrix_element_2 + matrix_element_7 * matrix_element_5 + matrix_data_ptr[0xd];
    temp_3_z = param_3 * xmm4_z + matrix_element_8 * matrix_element_3 + matrix_element_7 * matrix_element_6 + matrix_data_ptr[0xe];
    
    // 设置栈参数并调用渲染函数
    stack_padding_1 = input_param_2;
    stack_padding_5 = 0x3f800000; // 1.0f
    stack_padding_4 = 0;
    stack_padding_3 = 0;
    stack_padding_2 = 0;
    render_matrix_transform(0x3f800000, matrix_element_7 * matrix_element_4, transform_flag, &result_x, input_param_1);
    return;
}

/**
 * 状态初始化函数 - 初始化渲染状态
 */
void initialize_render_state(void)
{
    undefined8 *state_ptr;
    undefined4 state_flag;
    undefined4 stack_padding_1;
    undefined8 state_value_1;
    ulonglong state_value_2;
    undefined8 state_value_3;
    ulonglong state_value_4;
    undefined8 state_value_5;
    ulonglong state_value_6;
    undefined4 state_value_7;
    undefined4 state_value_8;
    undefined4 state_value_9;
    undefined4 state_value_10;
    undefined4 input_param_1;
    undefined4 input_param_2;
    
    // 从状态指针加载值
    state_value_1 = *state_ptr;
    state_value_3 = state_ptr[2];
    state_value_5 = state_ptr[4];
    state_value_7 = *(undefined4 *)(state_ptr + 6);
    state_value_8 = *(undefined4 *)((longlong)state_ptr + 0x34);
    state_value_9 = *(undefined4 *)(state_ptr + 7);
    stack_padding_1 = input_param_2;
    stack_padding_10 = 0x3f800000; // 1.0f
    state_value_6 = state_ptr[5] & 0xffffffff;
    state_value_4 = state_ptr[3] & 0xffffffff;
    state_value_2 = state_ptr[1] & 0xffffffff;
    render_matrix_transform(0x3f800000, state_value_7, state_flag, &state_value_1, input_param_1);
    return;
}

/**
 * 对象状态更新函数 - 更新游戏对象的状态信息
 * @param param_1 对象指针
 */
void update_object_state(longlong param_1)
{
    longlong transform_ptr;
    undefined4 temp_value_1;
    undefined4 temp_value_2;
    undefined4 temp_value_3;
    char visibility_flag;
    undefined1 render_mode;
    undefined8 *object_ptr;
    longlong object_base;
    uint object_flags;
    bool collision_state;
    float determinant;
    
    object_base = param_1;
    
    // 计算变换矩阵的行列式用于碰撞检测
    if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
        (transform_ptr = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x28), transform_ptr != 0)) {
        determinant = (*(float *)(transform_ptr + 0x74) * *(float *)(transform_ptr + 0x88) -
                     *(float *)(transform_ptr + 0x78) * *(float *)(transform_ptr + 0x84)) * *(float *)(transform_ptr + 0x90);
        check_collision_detection(determinant, (*(float *)(transform_ptr + 0x78) * *(float *)(transform_ptr + 0x80) -
                                 *(float *)(transform_ptr + 0x70) * *(float *)(transform_ptr + 0x88)) *
                                 *(float *)(transform_ptr + 0x94) + determinant +
                                 (*(float *)(transform_ptr + 0x70) * *(float *)(transform_ptr + 0x84) -
                                 *(float *)(transform_ptr + 0x74) * *(float *)(transform_ptr + 0x80)) *
                                 *(float *)(transform_ptr + 0x98) < 0.0);
    }
    
    // 检查对象可见性状态
    if (*(longlong *)(object_base + 0x1b8) == 0) {
    set_visibility_state:
        collision_state = (*(byte *)(param_1 + 0xfd) & 2) != 0;
    }
    else {
        object_flags = *(uint *)(*(longlong *)(object_base + 0x1b8) + 0x138);
        if ((object_flags & 0x20) != 0) {
            visibility_flag = '\0';
            goto apply_visibility;
        }
        if ((object_flags & 0x10) == 0) goto set_visibility_state;
        collision_state = (*(byte *)(param_1 + 0xfd) & 2) == 0;
    }
    visibility_flag = collision_state + '\x01';
    
apply_visibility:
    *(char *)(param_1 + 0xff) = visibility_flag;
    transform_ptr = *(longlong *)(param_1 + 0x1b8);
    object_flags = *(uint *)(transform_ptr + 0x138) & 0x3000;
    render_mode = 0;
    
    // 设置渲染模式
    if (object_flags == 0x1000) {
        *(undefined1 *)(param_1 + 0xf7) = 1;
    }
    else {
        if (object_flags == 0x2000) {
            render_mode = 2;
        }
        *(undefined1 *)(param_1 + 0xf7) = render_mode;
    }
    
    // 更新位置信息
    if ((((*(float *)(transform_ptr + 0x288) != 0.0) || (*(float *)(transform_ptr + 0x28c) != 0.0)) ||
         (*(float *)(transform_ptr + 0x290) != 0.0)) || (*(float *)(transform_ptr + 0x294) != 0.0)) {
        temp_value_1 = *(undefined4 *)(transform_ptr + 0x28c);
        temp_value_2 = *(undefined4 *)(transform_ptr + 0x290);
        temp_value_3 = *(undefined4 *)(transform_ptr + 0x294);
        *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(transform_ptr + 0x288);
        *(undefined4 *)(param_1 + 0x2ac) = temp_value_1;
        *(undefined4 *)(param_1 + 0x2b0) = temp_value_2;
        *(undefined4 *)(param_1 + 0x2b4) = temp_value_3;
    }
    
    // 更新旋转信息
    if (((*(float *)(transform_ptr + 0x298) != 0.0) || (*(float *)(transform_ptr + 0x29c) != 0.0)) ||
         ((*(float *)(transform_ptr + 0x2a0) != 0.0 || (*(float *)(transform_ptr + 0x2a4) != 0.0)))) {
        temp_value_1 = *(undefined4 *)(transform_ptr + 0x29c);
        temp_value_2 = *(undefined4 *)(transform_ptr + 0x2a0);
        temp_value_3 = *(undefined4 *)(transform_ptr + 0x2a4);
        *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(transform_ptr + 0x298);
        *(undefined4 *)(param_1 + 700) = temp_value_1;
        *(undefined4 *)(param_1 + 0x2c0) = temp_value_2;
        *(undefined4 *)(param_1 + 0x2c4) = temp_value_3;
    }
    
    // 重置变换标志
    *(undefined2 *)(transform_ptr + 0x3c0) = 0xffff;
    process_object_transforms(param_1);
    
    // 初始化对象数据结构
    if ((*(longlong *)(param_1 + 600) == 0) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
        object_ptr = (undefined8 *)allocate_object_data(global_memory_pool, 0x58, 8, 9);
        initialize_object_structure(object_ptr);
        *(undefined8 **)(param_1 + 600) = object_ptr;
    }
    return;
}

/**
 * 对象状态更新函数简化版本 - 使用寄存器参数
 * @param param_1 对象指针
 */
void update_object_state_optimized(longlong param_1)
{
    longlong transform_ptr;
    undefined4 temp_value_1;
    undefined4 temp_value_2;
    undefined4 temp_value_3;
    char visibility_flag;
    undefined1 render_mode;
    longlong input_param;
    undefined8 *object_ptr;
    uint object_flags;
    longlong object_base;
    bool collision_state;
    float determinant;
    
    // 使用寄存器参数计算行列式
    if ((input_param != 0) && (transform_ptr = *(longlong *)(input_param + 0x28), transform_ptr != 0)) {
        determinant = (*(float *)(transform_ptr + 0x74) * *(float *)(transform_ptr + 0x88) -
                     *(float *)(transform_ptr + 0x78) * *(float *)(transform_ptr + 0x84)) * *(float *)(transform_ptr + 0x90);
        check_collision_detection(determinant, (*(float *)(transform_ptr + 0x78) * *(float *)(transform_ptr + 0x80) -
                                 *(float *)(transform_ptr + 0x70) * *(float *)(transform_ptr + 0x88)) *
                                 *(float *)(transform_ptr + 0x94) + determinant +
                                 (*(float *)(transform_ptr + 0x70) * *(float *)(transform_ptr + 0x84) -
                                 *(float *)(transform_ptr + 0x74) * *(float *)(transform_ptr + 0x80)) *
                                 *(float *)(transform_ptr + 0x98) < 0.0);
    }
    
    // 其余逻辑与原始函数相同，但使用不同的寄存器
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
    set_visibility_state_opt:
        collision_state = (*(byte *)(object_base + 0xfd) & 2) != 0;
    }
    else {
        object_flags = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x138);
        if ((object_flags & 0x20) != 0) {
            visibility_flag = '\0';
            goto apply_visibility_opt;
        }
        if ((object_flags & 0x10) == 0) goto set_visibility_state_opt;
        collision_state = (*(byte *)(object_base + 0xfd) & 2) == 0;
    }
    visibility_flag = collision_state + '\x01';
    
apply_visibility_opt:
    *(char *)(object_base + 0xff) = visibility_flag;
    transform_ptr = *(longlong *)(object_base + 0x1b8);
    object_flags = *(uint *)(transform_ptr + 0x138) & 0x3000;
    render_mode = 0;
    
    if (object_flags == 0x1000) {
        *(undefined1 *)(object_base + 0xf7) = 1;
    }
    else {
        if (object_flags == 0x2000) {
            render_mode = 2;
        }
        *(undefined1 *)(object_base + 0xf7) = render_mode;
    }
    
    // 更新位置和旋转信息
    update_transform_data(transform_ptr, object_base);
    
    *(undefined2 *)(transform_ptr + 0x3c0) = 0xffff;
    process_object_transforms();
    
    // 初始化对象数据
    if ((*(longlong *)(object_base + 600) == 0) &&
         ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
        object_ptr = (undefined8 *)allocate_object_data(global_memory_pool, 0x58, 8, 9);
        initialize_object_structure(object_ptr);
        *(undefined8 **)(object_base + 600) = object_ptr;
    }
    return;
}

/**
 * 参数化对象状态更新函数 - 使用浮点参数进行变换
 * @param param_1 变换参数X
 * @param param_2 变换参数Y  
 * @param param_3 变换参数Z
 * @param param_4 变换参数W
 */
void update_object_state_with_params(float param_1, float param_2, float param_3, float param_4)
{
    longlong transform_ptr;
    undefined4 temp_value_1;
    undefined4 temp_value_2;
    undefined4 temp_value_3;
    char visibility_flag;
    undefined1 render_mode;
    longlong input_param_1;
    undefined8 *object_ptr;
    longlong input_param_2;
    uint object_flags;
    longlong object_base;
    bool collision_state;
    float determinant;
    float xmm4_x;
    float xmm5_value;
    float threshold_value;
    
    // 使用传入的浮点参数计算行列式
    determinant = (*(float *)(input_param_1 + 0x74) * param_2 - param_3 * param_4) * *(float *)(input_param_1 + 0x90);
    check_collision_detection(determinant, (param_3 * xmm4_x - param_1 * param_2) * *(float *)(input_param_1 + 0x94)
                             + determinant +
                             (xmm5_value * param_4 - *(float *)(input_param_1 + 0x74) * xmm4_x) *
                             *(float *)(input_param_1 + 0x98) < threshold_value);
    
    // 检查可见性状态
    if (*(longlong *)(input_param_2 + 0x1b8) == 0) {
    set_visibility_state_param:
        collision_state = (*(byte *)(object_base + 0xfd) & 2) != 0;
    }
    else {
        object_flags = *(uint *)(*(longlong *)(input_param_2 + 0x1b8) + 0x138);
        if ((object_flags & 0x20) != 0) {
            visibility_flag = '\0';
            goto apply_visibility_param;
        }
        if ((object_flags & 0x10) == 0) goto set_visibility_state_param;
        collision_state = (*(byte *)(object_base + 0xfd) & 2) == 0;
    }
    visibility_flag = collision_state + '\x01';
    
apply_visibility_param:
    *(char *)(object_base + 0xff) = visibility_flag;
    transform_ptr = *(longlong *)(object_base + 0x1b8);
    object_flags = *(uint *)(transform_ptr + 0x138) & 0x3000;
    render_mode = 0;
    
    if (object_flags == 0x1000) {
        *(undefined1 *)(object_base + 0xf7) = 1;
    }
    else {
        if (object_flags == 0x2000) {
            render_mode = 2;
        }
        *(undefined1 *)(object_base + 0xf7) = render_mode;
    }
    
    // 使用阈值检查更新变换数据
    if ((((threshold_value != *(float *)(transform_ptr + 0x288)) || (threshold_value != *(float *)(transform_ptr + 0x28c))
         ) || (threshold_value != *(float *)(transform_ptr + 0x290))) ||
        (threshold_value != *(float *)(transform_ptr + 0x294))) {
        update_position_data(transform_ptr, object_base);
    }
    
    if (((threshold_value != *(float *)(transform_ptr + 0x298)) || (threshold_value != *(float *)(transform_ptr + 0x29c)))
         || ((threshold_value != *(float *)(transform_ptr + 0x2a0) || (threshold_value != *(float *)(transform_ptr + 0x2a4))
             ))) {
        update_rotation_data(transform_ptr, object_base);
    }
    
    *(undefined2 *)(transform_ptr + 0x3c0) = 0xffff;
    process_object_transforms();
    
    // 初始化对象数据
    if ((*(longlong *)(object_base + 600) == 0) &&
         ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
        object_ptr = (undefined8 *)allocate_object_data(global_memory_pool, 0x58, 8, 9);
        initialize_object_structure(object_ptr);
        *(undefined8 **)(object_base + 600) = object_ptr;
    }
    return;
}

/**
 * 简化对象状态更新函数 - 仅更新基本状态
 * @param param_1 对象指针
 */
void update_object_state_simple(longlong param_1)
{
    longlong transform_ptr;
    undefined4 temp_value_1;
    undefined4 temp_value_2;
    undefined4 temp_value_3;
    char visibility_flag;
    undefined1 render_mode;
    undefined8 *object_ptr;
    uint object_flags;
    longlong object_base;
    bool collision_state;
    float threshold_value;
    
    // 检查对象状态
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
    set_visibility_state_simple:
        collision_state = (*(byte *)(object_base + 0xfd) & 2) != 0;
    }
    else {
        object_flags = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x138);
        if ((object_flags & 0x20) != 0) {
            visibility_flag = '\0';
            goto apply_visibility_simple;
        }
        if ((object_flags & 0x10) == 0) goto set_visibility_state_simple;
        collision_state = (*(byte *)(object_base + 0xfd) & 2) == 0;
    }
    visibility_flag = collision_state + '\x01';
    
apply_visibility_simple:
    *(char *)(object_base + 0xff) = visibility_flag;
    transform_ptr = *(longlong *)(object_base + 0x1b8);
    object_flags = *(uint *)(transform_ptr + 0x138) & 0x3000;
    render_mode = 0;
    
    if (object_flags == 0x1000) {
        *(undefined1 *)(object_base + 0xf7) = 1;
    }
    else {
        if (object_flags == 0x2000) {
            render_mode = 2;
        }
        *(undefined1 *)(object_base + 0xf7) = render_mode;
    }
    
    // 使用阈值更新变换数据
    update_transform_with_threshold(transform_ptr, object_base, threshold_value);
    
    *(undefined2 *)(transform_ptr + 0x3c0) = 0xffff;
    process_object_transforms();
    
    // 初始化对象数据
    if ((*(longlong *)(object_base + 600) == 0) &&
         ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
        object_ptr = (undefined8 *)allocate_object_data(global_memory_pool, 0x58, 8, 9);
        initialize_object_structure(object_ptr);
        *(undefined8 **)(object_base + 600) = object_ptr;
    }
    return;
}

/**
 * 对象数据初始化函数 - 分配并初始化对象数据结构
 */
void initialize_object_data(void)
{
    undefined8 *object_ptr;
    longlong object_base;
    undefined8 object_reference;
    
    // 检查是否需要初始化对象数据
    if ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0) {
        object_ptr = (undefined8 *)allocate_object_data(global_memory_pool, 0x58, 8, 9);
        initialize_object_structure_with_reference(object_ptr, object_reference);
        *(undefined8 **)(object_base + 600) = object_ptr;
    }
    return;
}

/**
 * 对象创建函数 - 创建新的游戏对象
 * @param param_1 对象配置指针
 * @param param_2 创建标志
 * @return 创建的对象指针
 */
undefined8 * create_game_object(undefined8 *param_1, ulonglong param_2)
{
    undefined8 object_type;
    
    object_type = 0xfffffffffffffffe;
    *param_1 = &global_object_template;
    initialize_object_template();
    register_object_callbacks(param_1 + 1, 8, 7, object_destructor_callback, object_type);
    
    // 根据标志决定是否释放内存
    if ((param_2 & 1) != 0) {
        free(param_1, 0x158);
    }
    return param_1;
}

/**
 * 对象模板初始化函数 - 初始化对象模板结构
 * @param param_1 模板指针
 * @param param_2 初始化参数1
 * @param param_3 初始化参数2
 * @param param_4 初始化参数3
 */
void initialize_object_template(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong *callback_ptr;
    longlong *callback_list;
    longlong callback_count;
    undefined4 init_flag;
    undefined8 template_id;
    
    template_id = 0xfffffffffffffffe;
    
    // 如果存在全局配置，则加载配置
    if (0 < *(int *)(global_config_data + 0x40)) {
        param_1[0x26] = *(undefined8 *)(global_config_data + 0x38);
    }
    
    // 清理回调函数列表
    callback_list = param_1 + 1;
    callback_count = 7;
    do {
        callback_ptr = (longlong *)*callback_list;
        *callback_list = 0;
        if (callback_ptr != (longlong *)0x0) {
            // 执行回调函数
            (**(code **)(*callback_ptr + 0x38))();
        }
        callback_list = callback_list + 1;
        callback_count = callback_count + -1;
    } while (callback_count != 0);
    
    // 初始化模板数据
    initialize_template_data(param_1);
    
    // 根据模板类型进行特定初始化
    if ((undefined *)*param_1 == &global_object_template) {
        copy_default_values(param_1);
        init_flag = get_render_config();
        setup_render_state(init_flag, param_1 + 0x18);
    }
    else {
        // 调用自定义初始化函数
        (**(code **)((undefined *)*param_1 + 0x10))(param_1, 0, param_3, param_4, template_id);
    }
    return;
}