#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 04_ui_system_part021_sub002_sub002.c - UI系统高级动画和变换处理模块
// 
// 主要功能：
// - 处理UI元素的高级动画变换
// - 实现骨骼动画和矩阵变换
// - 管理UI状态和数据缓冲区
// - 执行复杂的数学运算和插值计算
// 
// 包含1个核心函数：
// - ProcessUIAdvancedAnimationTransform: UI系统高级动画和变换处理函数

/**
 * UI系统高级动画和变换处理函数
 * 
 * 处理UI元素的高级动画变换，包括：
 * - 骨骼动画变换矩阵计算
 * - UI元素位置、旋转、缩放插值
 * - 动画状态管理和数据缓冲区操作
 * - 复杂的数学运算（三角函数、向量计算）
 * - 内存管理和数据结构操作
 * 
 * @param ui_context UI系统上下文指针
 * @param animation_data 动画数据指针
 * @param transform_matrix 变换矩阵
 * @param bone_data 骨骼数据指针
 * @param time_data 时间数据指针
 * @param state_data 状态数据指针
 * @param animation_id 动画ID
 * @param blend_factor 混合因子
 * @param time_scale 时间缩放因子
 * @param update_flag 更新标志
 */
void ProcessUIAdvancedAnimationTransform(
    longlong ui_context, 
    longlong animation_data, 
    uint64_t transform_matrix, 
    longlong bone_data,
    longlong time_data, 
    longlong state_data, 
    uint animation_id, 
    float blend_factor, 
    float time_scale,
    char update_flag
)
{
    // 局部变量声明
    byte bone_index;
    int8_t matrix_buffer_1[12];
    int8_t matrix_buffer_2[12];
    int8_t matrix_buffer_3[12];
    int8_t matrix_buffer_4[12];
    int8_t matrix_buffer_5[12];
    int8_t matrix_buffer_6[12];
    int8_t matrix_buffer_7[12];
    char animation_state;
    int32_t transform_component;
    uint64_t *matrix_ptr;
    float *float_ptr;
    int8_t *data_ptr;
    uint64_t *vector_ptr;
    int8_t (*matrix_array_ptr)[16];
    uint64_t transform_value;
    longlong *long_ptr;
    float *position_ptr;
    int32_t *component_ptr;
    int8_t temp_buffer_1[8];
    uint64_t stack_value_1;
    uint64_t stack_value_2;
    longlong *index_ptr;
    uint animation_counter;
    longlong data_offset;
    int8_t *buffer_ptr;
    char state_flag;
    int loop_counter;
    uint frame_counter;
    longlong temp_long_1;
    ulonglong ulong_temp_1;
    uint64_t *temp_ptr_1;
    longlong temp_long_2;
    uint temp_uint_1;
    char temp_char_1;
    ulonglong ulong_temp_2;
    char temp_char_2;
    int temp_int_1;
    ulonglong ulong_temp_3;
    ulonglong ulong_temp_4;
    longlong temp_long_3;
    bool bool_flag;
    float float_value_1;
    float float_value_2;
    float float_value_3;
    float float_value_4;
    float float_value_5;
    float float_value_6;
    float float_value_7;
    uint64_t temp_value_1;
    int8_t temp_buffer_8[16];
    int8_t temp_buffer_9[16];
    int8_t temp_buffer_10[16];
    int8_t temp_buffer_11[16];
    int8_t temp_buffer_12[16];
    int8_t temp_buffer_13[16];
    int32_t component_1;
    int32_t component_2;
    int32_t component_3;
    float float_value_8;
    float float_value_9;
    int8_t temp_buffer_14[16];
    int8_t temp_buffer_15[16];
    int8_t temp_buffer_16[16];
    int8_t temp_buffer_17[16];
    int8_t temp_buffer_18[16];
    int8_t temp_buffer_19[16];
    float float_value_10;
    float float_value_11;
    float float_value_12;
    float float_value_13;
    float float_value_14;
    
    // 栈变量声明
    int8_t stack_buffer_1[32];
    uint64_t *stack_ptr_1;
    float stack_float_1;
    byte stack_byte_1;
    uint stack_uint_1;
    char stack_char_1;
    uint64_t stack_value_3;
    longlong stack_long_1;
    uint stack_uint_2;
    longlong stack_long_2;
    int8_t stack_buffer_2[8];
    uint64_t stack_value_4;
    int stack_int_1;
    int stack_int_2;
    uint stack_uint_3;
    float stack_float_2;
    longlong stack_long_3;
    longlong *stack_long_ptr_1;
    int8_t stack_buffer_3[16];
    float stack_float_3;
    float stack_float_4;
    float stack_float_5;
    int32_t stack_component_1;
    float stack_float_6;
    uint64_t *stack_ptr_2;
    uint64_t *stack_ptr_3;
    uint64_t stack_value_5;
    uint64_t stack_value_6;
    int32_t stack_component_2;
    int32_t stack_component_3;
    int32_t stack_component_4;
    int32_t stack_component_5;
    float stack_float_7;
    float stack_float_8;
    float stack_float_9;
    float stack_float_10;
    uint64_t *stack_ptr_4;
    uint64_t *stack_ptr_5;
    uint64_t stack_value_7;
    float stack_float_11;
    float stack_float_12;
    int8_t stack_buffer_4[8];
    float stack_float_13;
    int32_t stack_component_6;
    uint64_t stack_value_8;
    uint64_t stack_value_9;
    uint64_t stack_value_10;
    uint64_t stack_value_11;
    uint stack_uint_4;
    uint64_t stack_value_12;
    uint64_t stack_value_13;
    uint64_t stack_value_14;
    uint64_t stack_value_15;
    uint64_t stack_value_16;
    uint64_t stack_value_17;
    uint64_t stack_value_18;
    uint64_t stack_value_19;
    uint64_t stack_value_20;
    int8_t stack_buffer_5[16];
    uint64_t stack_value_21;
    uint64_t stack_value_22;
    uint64_t stack_value_23;
    uint64_t stack_value_24;
    longlong stack_long_4;
    uint64_t stack_value_25;
    uint64_t stack_value_26;
    int32_t stack_component_7;
    int32_t stack_component_8;
    int32_t stack_component_9;
    int32_t stack_component_10;
    int stack_int_3;
    float stack_float_14;
    longlong *stack_long_ptr_2;
    longlong stack_long_5;
    int8_t stack_buffer_6[16];
    int8_t stack_buffer_7[16];
    uint64_t stack_value_27;
    uint64_t stack_value_28;
    uint64_t stack_value_29;
    uint64_t stack_value_30;
    uint64_t stack_value_31;
    uint64_t stack_value_32;
    int8_t stack_buffer_8[16];
    int8_t stack_buffer_9[16];
    int8_t stack_buffer_10[16];
    float stack_float_array_1[4];
    int8_t stack_buffer_11[16];
    int8_t stack_buffer_12[16];
    int8_t stack_buffer_13[16];
    int8_t stack_buffer_14[16];
    int8_t stack_buffer_15[16];
    int8_t stack_buffer_16[16];
    int8_t stack_buffer_17[16];
    int8_t stack_buffer_18[16];
    int8_t stack_buffer_19[16];
    int8_t stack_buffer_20[16];
    int8_t stack_buffer_21[16];
    int8_t stack_buffer_22[16];
    int8_t stack_buffer_23[16];
    int8_t stack_buffer_24[16];
    uint64_t stack_value_33;
    uint64_t stack_value_34;
    uint64_t stack_value_35;
    uint64_t stack_value_36;
    uint64_t stack_value_37;
    uint64_t stack_value_38;
    int32_t stack_component_11;
    int32_t stack_component_12;
    int32_t stack_component_13;
    int32_t stack_component_14;
    uint64_t stack_array_1[2];
    int8_t stack_buffer_25[8];
    float stack_float_15;
    int32_t stack_component_15;
    int32_t stack_component_16;
    int32_t stack_component_17;
    int32_t stack_component_18;
    int32_t stack_component_19;
    uint64_t stack_value_39;
    uint64_t stack_value_40;
    uint64_t stack_array_2[4];
    uint64_t stack_value_41;
    uint64_t stack_value_42;
    uint64_t stack_value_43;
    uint64_t stack_value_44;
    int8_t stack_buffer_26[192];
    uint64_t stack_array_3[4];
    longlong stack_long_array_1[32];
    float stack_float_array_2[2];
    uint64_t stack_value_45;
    ulonglong stack_ulong_1;
    
    // 初始化堆栈保护变量
    stack_ulong_1 = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer_1;
    
    // 初始化变量
    animation_counter = 0;
    *(int8_t *)(ui_context + 0x1e0) = 0;
    stack_float_6 = time_scale;
    stack_long_4 = time_data;
    stack_value_7 = (uint64_t *)0x0;
    stack_uint_1 = 0;
    stack_long_2 = animation_data;
    stack_long_3 = ui_context;
    
    // 获取时间因子
    float_value_1 = (float)func_0x000180084f70(time_data);
    stack_float_14 = float_value_1;
    
    // 获取变换矩阵数据
    matrix_ptr = (uint64_t *)FUN_180535610(time_data, &stack_value_33);
    stack_value_39 = *(uint64_t *)(time_data + 0x30);
    stack_value_40 = *(uint64_t *)(time_data + 0x38);
    
    // 复制矩阵数据到栈缓冲区
    stack_array_1[0] = *matrix_ptr;
    stack_array_1[1] = matrix_ptr[1];
    _stack_buffer_25 = *(int8_t (*) [16])(matrix_ptr + 2);
    stack_component_17 = *(int32_t *)(matrix_ptr + 4);
    stack_component_16 = *(int32_t *)((longlong)matrix_ptr + 0x24);
    stack_component_18 = *(int32_t *)(matrix_ptr + 5);
    stack_component_19 = *(int32_t *)((longlong)matrix_ptr + 0x2c);
    
    // 处理变换矩阵
    FUN_18063b470(&stack_value_5, stack_array_1);
    stack_value_23 = stack_value_39;
    stack_value_24 = stack_value_40;
    stack_value_21 = stack_value_5;
    stack_value_22 = stack_value_6;
    
    // 检查更新标志和动画状态
    if ((update_flag != '\0') && (*(int *)(ui_context + 0xa0) != 4)) {
        // 处理动画更新逻辑
        matrix_ptr = stack_array_1;
        temp_long_1 = 8;
        do {
            func_0x000180074f10(matrix_ptr);
            temp_long_3 = stack_long_2;
            matrix_ptr = matrix_ptr + 2;
            temp_long_1 = temp_long_1 + -1;
        } while (temp_long_1 != 0);
        
        animation_state = *(char *)(ui_context + 0xa4);
        if ('\0' < *(char *)(ui_context + 0xa6)) {
            position_ptr = (float *)(ui_context + 0x130);
            do {
                animation_data = temp_long_3;
                if ((int)animation_state == animation_id) break;
                
                float_ptr = (float *)FUN_18022a890(temp_long_3, animation_state, state_data);
                float_value_1 = *float_ptr;
                float_value_11 = float_ptr[1];
                float_value_9 = float_ptr[2];
                float_value_10 = float_ptr[3];
                
                // 处理混合因子插值
                if (0.001 <= time_scale) {
                    if (time_scale <= 0.999) {
                        // 线性插值计算
                        float_value_5 = float_value_9 * position_ptr[2];
                        float_value_7 = float_value_10 * position_ptr[3];
                        stack_value_35 = 0xbf800000bf800000;
                        stack_value_36 = 0xbf800000bf800000;
                        
                        temp_buffer_15._0_4_ = float_value_5 + float_value_1 * *position_ptr;
                        temp_buffer_15._4_4_ = float_value_7 + float_value_11 * position_ptr[1];
                        temp_buffer_15._8_4_ = float_value_5 + float_value_5;
                        temp_buffer_15._12_4_ = float_value_7 + float_value_7;
                        
                        temp_buffer_14._4_12_ = temp_buffer_15._4_12_;
                        temp_buffer_14._0_4_ = temp_buffer_15._0_4_ + temp_buffer_15._4_4_;
                        
                        stack_value_33 = 0x3f8000003f800000;
                        stack_value_34 = 0x3f8000003f800000;
                        
                        animation_counter = movmskps((int)float_ptr, temp_buffer_14);
                        ulong_temp_1 = (ulonglong)(animation_counter & 1);
                        float_value_5 = *(float *)(&stack_value_33 + ulong_temp_1 * 2);
                        float_value_7 = *(float *)(&stack_value_34 + ulong_temp_1 * 2);
                        
                        float_value_8 = *position_ptr;
                        float_value_13 = position_ptr[2];
                        float_value_12 = *(float *)((longlong)&stack_value_33 + ulong_temp_1 * 0x10 + 4) * position_ptr[1];
                        float_value_14 = *(float *)((longlong)&stack_value_34 + ulong_temp_1 * 0x10 + 4) * position_ptr[3];
                        
                        // 处理边界情况
                        if (0.9995 < ABS(temp_buffer_14._0_4_)) {
                            float_value_2 = 1.0 - time_scale;
                            stack_value_5 = CONCAT44(float_value_2 * float_value_11 + time_scale * float_value_12,
                                                      float_value_2 * float_value_1 + time_scale * float_value_5 * float_value_8);
                            stack_value_6 = CONCAT44(float_value_2 * float_value_10 + time_scale * float_value_14,
                                                      float_value_2 * float_value_9 + time_scale * float_value_7 * float_value_13);
                            func_0x00018022b430(&stack_value_5);
                            float_value_1 = (float)stack_value_5;
                            float_value_11 = stack_value_5._4_4_;
                            float_value_9 = (float)stack_value_6;
                            float_value_10 = stack_value_6._4_4_;
                        }
                        else {
                            // 使用三角函数进行插值
                            acosf();
                            float_value_2 = (float)sinf();
                            float_value_3 = (float)sinf();
                            float_value_3 = float_value_3 * (1.0 / float_value_2);
                            float_value_4 = (float)sinf();
                            float_value_4 = float_value_4 * (1.0 / float_value_2);
                            
                            float_value_1 = float_value_3 * float_value_1 + float_value_4 * float_value_5 * float_value_8;
                            float_value_11 = float_value_3 * float_value_11 + float_value_4 * float_value_12;
                            float_value_9 = float_value_3 * float_value_9 + float_value_4 * float_value_7 * float_value_13;
                            float_value_10 = float_value_3 * float_value_10 + float_value_4 * float_value_14;
                        }
                    }
                    else {
                        // 直接使用目标值
                        float_value_1 = *position_ptr;
                        float_value_11 = position_ptr[1];
                        float_value_9 = position_ptr[2];
                        float_value_10 = position_ptr[3];
                    }
                }
                
                // 更新计数器和指针
                stack_uint_1 = stack_uint_1 + 1;
                animation_counter = (int)stack_value_7 + 1;
                stack_value_7 = (uint64_t *)(ulonglong)animation_counter;
                float_ptr = (float *)(((longlong)stack_float_array_1 - ui_context) + (longlong)position_ptr);
                *float_ptr = float_value_1;
                float_ptr[1] = float_value_11;
                float_ptr[2] = float_value_9;
                float_ptr[3] = float_value_10;
                position_ptr = position_ptr + 4;
                animation_state = *(char *)((longlong)animation_state + 0x100 + state_data);
                time_scale = stack_float_6;
            } while ((int)animation_counter < (int)*(char *)(ui_context + 0xa6));
        }
        
        // 处理动画数据更新
        temp_int_1 = stack_uint_1 - 1;
        ulong_temp_1 = (ulonglong)temp_int_1;
        if (-1 < temp_int_1) {
            matrix_ptr = stack_array_1 + ulong_temp_1 * 2;
            do {
                animation_state = *(char *)(stack_long_3 + 0xa4);
                loop_counter = (int)ulong_temp_1;
                if (0 < loop_counter) {
                    ulong_temp_1 = ulong_temp_1 & 0xffffffff;
                    do {
                        animation_state = *(char *)((longlong)animation_state + 0x100 + state_data);
                        ulong_temp_1 = ulong_temp_1 - 1;
                    } while (ulong_temp_1 != 0);
                }
                
                ulong_temp_4 = (ulonglong)animation_state;
                temp_ptr_1 = (uint64_t *)((ulong_temp_4 + 0x82) * 0x10 + animation_data);
                
                if (loop_counter == temp_int_1) {
                    if (animation_state != '\0') {
                        data_ptr = (int8_t *)
                                  FUN_18022a890(stack_long_2, *(int8_t *)(ulong_temp_4 + 0x100 + state_data), state_data);
                        buffer_ptr = stack_buffer_3;
                        vector_ptr = stack_array_1 + (longlong)loop_counter * 2;
                        goto LAB_180663714;
                    }
                    transform_value = *matrix_ptr;
                    temp_value_1 = matrix_ptr[1];
                }
                else {
                    buffer_ptr = stack_buffer_5;
                    vector_ptr = stack_array_1 + (longlong)loop_counter * 2;
                    data_ptr = stack_buffer_25 + (longlong)loop_counter * 0x10;
LAB_180663714:
                    vector_ptr = (uint64_t *)func_0x00018022b3c0(data_ptr, buffer_ptr, vector_ptr);
                    transform_value = *vector_ptr;
                    temp_value_1 = vector_ptr[1];
                }
                
                *temp_ptr_1 = transform_value;
                temp_ptr_1[1] = temp_value_1;
                matrix_ptr = matrix_ptr + -2;
                
                // 更新状态标志
                *(ulonglong *)(stack_long_2 + 0x800) =
                     *(ulonglong *)(stack_long_2 + 0x800) |
                     *(ulonglong *)(ulong_temp_4 * 0x1b0 + 0xe8 + *(longlong *)(state_data + 0x140));
                ulong_temp_1 = (ulonglong)(loop_counter - 1U);
                *(ulonglong *)(stack_long_2 + 0x808) =
                     *(ulonglong *)(stack_long_2 + 0x808) | 1L << (ulong_temp_4 & 0x3f);
                animation_data = stack_long_2;
            } while (-1 < (int)(loop_counter - 1U));
        }
        goto LAB_18066375a;
    }
    
    // 处理其他动画状态
    animation_state = *(char *)(ui_context + 0xa5);
    state_flag = *(char *)(ui_context + 0xa4);
    stack_value_8 = 0x3f800000;
    stack_value_9 = 0;
    stack_value_10 = 0;
    stack_value_11 = 0x3f80000000000000;
    
    if (animation_state != state_flag) {
        do {
            temp_long_1 = (longlong)animation_state;
            matrix_ptr = (uint64_t *)(animation_data + (temp_long_1 + 0x82) * 0x10);
            stack_value_33 = *matrix_ptr;
            stack_value_34 = matrix_ptr[1];
            matrix_ptr = (uint64_t *)(temp_long_1 * 0x1b0 + 0x80 + *(longlong *)(state_data + 0x140));
            stack_value_35 = *matrix_ptr;
            stack_value_36 = matrix_ptr[1];
            
            matrix_ptr = (uint64_t *)FUN_1801c10f0(&stack_value_8, stack_buffer_3, &stack_value_35);
            temp_ptr_1 = (uint64_t *)func_0x00018022b490(&stack_value_8, stack_buffer_5, &stack_value_33);
            stack_value_10 = *matrix_ptr;
            stack_value_11 = matrix_ptr[1];
            state_flag = *(char *)(ui_context + 0xa4);
            stack_value_8 = *temp_ptr_1;
            stack_value_9 = temp_ptr_1[1];
            animation_state = *(char *)(temp_long_1 + 0x100 + state_data);
            time_data = stack_long_4;
        } while (animation_state != state_flag);
    }
    
    // 处理不同的动画模式
    temp_int_1 = *(int *)(ui_context + 0xa0);
    if (temp_int_1 == 3) {
        transform_value = FUN_1801c13c0(time_data, stack_buffer_3, ui_context + 0x10);
        long_ptr = (longlong *)FUN_1801c10f0(&stack_value_21, stack_buffer_5, transform_value);
        stack_value_3 = (uint64_t *)*long_ptr;
        stack_long_1 = long_ptr[1];
        
        if (0.0 < *(float *)(ui_context + 0x30)) {
            transform_value = func_0x0001803812e0(&stack_value_8, stack_buffer_3);
            FUN_1801c0fb0(ui_context + 0x20, &stack_value_5, transform_value);
            float_value_11 = *(float *)(ui_context + 0x30);
            stack_value_3 = (uint64_t *)
                         CONCAT44(stack_value_3._4_4_ - stack_value_5._4_4_ * float_value_11,
                                  (float)stack_value_3 - (float)stack_value_5 * float_value_11);
            stack_long_1 = CONCAT44(stack_long_1._4_4_, (float)stack_long_1 - (float)stack_value_6 * float_value_11);
        }
LAB_180663ade:
        if ((((float)stack_value_10 != 0.0) || (stack_value_10._4_4_ != 0.0)) || ((float)stack_value_11 != 0.0)) {
            matrix_ptr = (uint64_t *)(ui_context + 0x20);
LAB_180663a5e:
            position_ptr = (float *)FUN_1801c0fb0(matrix_ptr, stack_buffer_3, &stack_value_10);
            stack_value_3 = (uint64_t *)
                         CONCAT44(stack_value_3._4_4_ - position_ptr[1], (float)stack_value_3 - *position_ptr);
            stack_long_1 = CONCAT44(stack_long_1._4_4_, (float)stack_long_1 - position_ptr[2]);
        }
    }
    else if (temp_int_1 == 4) {
        matrix_ptr = (uint64_t *)FUN_18022a890(animation_data, state_flag, state_data);
        stack_array_1[0] = *matrix_ptr;
        stack_array_1[1] = matrix_ptr[1];
        _stack_buffer_25 = *(int8_t (*) [16])(animation_data + ((longlong)state_flag + 0x40) * 0x10);
        animation_state = func_0x0001806673d0(ui_context + 0x20);
        if (animation_state == '\0') {
            stack_array_1[0] = *(uint64_t *)(ui_context + 0x20);
            stack_array_1[1] = *(uint64_t *)(ui_context + 0x28);
        }
        matrix_ptr = (uint64_t *)func_0x00018022b490(&stack_value_21, stack_buffer_3, stack_array_1);
        stack_float_3 = (float)stack_buffer_25._0_4_ + *(float *)(ui_context + 0x10);
        stack_component_1 = 0x7f7fffff;
        stack_value_18 = *matrix_ptr;
        stack_value_19 = matrix_ptr[1];
        stack_float_4 = (float)stack_buffer_25._4_4_ + *(float *)(ui_context + 0x14);
        stack_float_5 = stack_float_15 + *(float *)(ui_context + 0x18);
        long_ptr = (longlong *)FUN_1801c10f0(&stack_value_21, stack_buffer_3, &stack_float_3);
        stack_value_3 = (uint64_t *)*long_ptr;
        stack_long_1 = long_ptr[1];
    }
    else if (temp_int_1 == 5) {
        animation_state = *(char *)(ui_context + 0x20);
        matrix_ptr = (uint64_t *)FUN_18022a890(animation_data, animation_state, state_data);
        stack_array_1[0] = *matrix_ptr;
        stack_array_1[1] = matrix_ptr[1];
        _stack_buffer_25 = *(int8_t (*) [16])(animation_data + ((longlong)animation_state + 0x40) * 0x10);
        position_ptr = (float *)FUN_1801c0fb0(stack_array_1, stack_buffer_3, ui_context + 0x10);
        temp_buffer_15 = _stack_buffer_25;
        stack_buffer_25._4_4_ = (float)stack_buffer_25._4_4_ + position_ptr[1];
        stack_buffer_25._0_4_ = (float)stack_buffer_25._0_4_ + *position_ptr;
        stack_component_15 = temp_buffer_15._12_4_;
        stack_float_15 = stack_float_15 + position_ptr[2];
        FUN_1801c10f0(&stack_value_21, &stack_value_12, stack_buffer_25);
        stack_value_3 = stack_value_12;
        stack_long_1 = stack_value_13;
        
        matrix_ptr = (uint64_t *)FUN_18022a890(animation_data, *(int8_t *)(ui_context + 0xa4), state_data);
        stack_value_18 = *matrix_ptr;
        stack_value_19 = matrix_ptr[1];
        matrix_ptr = (uint64_t *)func_0x00018022b490(&stack_value_21, stack_buffer_3, &stack_value_18);
        stack_value_18 = *matrix_ptr;
        stack_value_19 = matrix_ptr[1];
        
        if ((((float)stack_value_10 != 0.0) || (stack_value_10._4_4_ != 0.0)) || ((float)stack_value_11 != 0.0)) {
            FUN_1801c0fb0(&stack_value_18, &stack_value_5, &stack_value_10);
            stack_value_3 = (uint64_t *)
                         CONCAT44(stack_value_3._4_4_ - stack_value_5._4_4_,
                                  (float)stack_value_3 - (float)stack_value_5);
            stack_long_1 = CONCAT44(stack_long_1._4_4_, (float)stack_long_1 - (float)stack_value_6);
        }
    }
    else {
        if (temp_int_1 == 6) {
            transform_value = FUN_1801c13c0(time_data, stack_buffer_3, ui_context + 0x10);
            long_ptr = (longlong *)FUN_1801c10f0(&stack_value_21, stack_buffer_5, transform_value);
            stack_value_3 = (uint64_t *)*long_ptr;
            stack_long_1 = long_ptr[1];
            goto LAB_180663ade;
        }
        if (temp_int_1 == 7) {
            if ((*(ulonglong *)(bone_data + 0x810) >> ((ulonglong)*(byte *)(ui_context + 0xa5) & 0x3f) & 1) == 0) {
                temp_ptr_1 = (uint64_t *)FUN_18022a890(animation_data, state_flag, state_data);
                matrix_ptr = (uint64_t *)(animation_data + ((longlong)state_flag + 0x40) * 0x10);
                stack_value_35 = *matrix_ptr;
                stack_value_36 = matrix_ptr[1];
                stack_value_33 = *temp_ptr_1;
                stack_value_34 = temp_ptr_1[1];
                matrix_ptr = (uint64_t *)func_0x00018022b490(&stack_value_21, stack_buffer_3, &stack_value_33);
                animation_state = *(char *)(ui_context + 0xa5);
                stack_value_18 = *matrix_ptr;
                stack_value_19 = matrix_ptr[1];
                FUN_18022a890(animation_data, animation_state, state_data);
                matrix_ptr = (uint64_t *)(animation_data + ((longlong)animation_state + 0x40) * 0x10);
                stack_buffer_2 = (int8_t [8])*matrix_ptr;
                transform_value = matrix_ptr[1];
            }
            else {
                temp_ptr_1 = (uint64_t *)FUN_18022a890(bone_data, state_flag, state_data);
                matrix_ptr = (uint64_t *)(bone_data + ((longlong)state_flag + 0x40) * 0x10);
                stack_value_35 = *matrix_ptr;
                stack_value_36 = matrix_ptr[1];
                stack_value_33 = *temp_ptr_1;
                stack_value_34 = temp_ptr_1[1];
                matrix_ptr = (uint64_t *)func_0x00018022b490(&stack_value_21, stack_buffer_3, &stack_value_33);
                animation_state = *(char *)(ui_context + 0xa5);
                stack_value_18 = *matrix_ptr;
                stack_value_19 = matrix_ptr[1];
                FUN_18022a890(bone_data, animation_state, state_data);
                matrix_ptr = (uint64_t *)(bone_data + ((longlong)animation_state + 0x40) * 0x10);
                stack_buffer_2 = (int8_t [8])*matrix_ptr;
                transform_value = matrix_ptr[1];
            }
            stack_value_4._0_4_ = (float)transform_value;
            stack_value_4._4_4_ = (float)((ulonglong)transform_value >> 0x20);
            stack_value_4._0_4_ = (float)stack_value_4 + *(float *)(ui_context + 0x90);
            matrix_ptr = (uint64_t *)FUN_1801c1690(ui_context + 0x10, stack_buffer_3, stack_buffer_2);
            stack_buffer_2 = (int8_t [8])*matrix_ptr;
            stack_value_4 = matrix_ptr[1];
            matrix_array_ptr = (int8_t (*) [16])func_0x0001800f8f10(ui_context + 0x50, stack_buffer_3, stack_buffer_2);
            _stack_buffer_2 = *matrix_array_ptr;
            transform_value = FUN_1801c13c0(stack_long_4, stack_buffer_3, stack_buffer_2);
            long_ptr = (longlong *)FUN_1801c10f0(&stack_value_21, stack_buffer_5, transform_value);
            stack_value_3 = (uint64_t *)*long_ptr;
            stack_long_1 = long_ptr[1];
            if ((((float)stack_value_10 != 0.0) || (stack_value_10._4_4_ != 0.0)) || ((float)stack_value_11 != 0.0)) {
                matrix_ptr = &stack_value_18;
                goto LAB_180663a5e;
            }
        }
    }
    
    // 清理临时数据
    temp_long_1 = 8;
    long_ptr = stack_long_array_1;
    temp_long_3 = 8;
    do {
        func_0x000180074f10(long_ptr);
        long_ptr = long_ptr + 4;
        temp_long_3 = temp_long_3 + -1;
    } while (temp_long_3 != 0);
    
    matrix_ptr = &stack_value_41;
    do {
        func_0x000180074f10(matrix_ptr);
        matrix_ptr = matrix_ptr + 4;
        temp_long_1 = temp_long_1 + -1;
    } while (temp_long_1 != 0);
    
    position_ptr = stack_float_array_2;
    temp_long_1 = 0x40;
    do {
        func_0x000180074f10(position_ptr);
        position_ptr = position_ptr + 4;
        temp_long_1 = temp_long_1 + -1;
    } while (temp_long_1 != 0);
    
    // 处理骨骼动画数据
    stack_byte_1 = *(byte *)(ui_context + 0xa4);
    frame_counter = (uint)(char)stack_byte_1;
    _stack_buffer_4 = ZEXT416(0);
    
    if (frame_counter != animation_id) {
        matrix_ptr = &stack_value_41;
        temp_uint_1 = animation_counter;
        do {
            temp_long_1 = stack_long_2;
            if ((int)*(char *)(ui_context + 0xa6) <= (int)animation_counter) break;
            
            component_ptr = (int32_t *)FUN_18022a890(temp_long_1, frame_counter & 0xff, state_data);
            temp_long_3 = (longlong)(char)frame_counter;
            transform_component = component_ptr[1];
            component_1 = component_ptr[2];
            component_2 = component_ptr[3];
            *(int32_t *)matrix_ptr = *component_ptr;
            *(int32_t *)((longlong)matrix_ptr + 4) = transform_component;
            *(int32_t *)(matrix_ptr + 1) = component_1;
            *(int32_t *)((longlong)matrix_ptr + 0xc) = component_2;
            
            temp_ptr_1 = (uint64_t *)(temp_long_1 + (temp_long_3 + 0x40) * 0x10);
            transform_value = temp_ptr_1[1];
            matrix_ptr[2] = *temp_ptr_1;
            matrix_ptr[3] = transform_value;
            
            temp_ptr_1 = (uint64_t *)FUN_18022a890(temp_long_1, stack_byte_1, state_data);
            temp_long_1 = stack_long_3;
            bone_index = *(byte *)(temp_long_3 + 0x100 + state_data);
            transform_value = temp_ptr_1[1];
            *(uint64_t *)(stack_float_array_2 + temp_long_3 * 4) = *temp_ptr_1;
            (&stack_value_45)[temp_long_3 * 2] = transform_value;
            
            if (stack_byte_1 == 0) {
                float_value_11 = (float)(int)((int)*(char *)(stack_long_3 + 0xa6) - animation_counter) /
                         (float)(int)*(char *)(stack_long_3 + 0xa6);
                float_value_11 = float_value_11 * float_value_11 + 0.1;
                if (1.0 <= float_value_11) {
                    float_value_11 = 1.0;
                }
                float_ptr = (float *)FUN_180285c90(&stack_value_21, stack_buffer_3, &stack_value_3);
                animation_state = *(char *)(temp_long_1 + 0xa4);
                FUN_18022a890(stack_long_2, animation_state, state_data);
                position_ptr = (float *)(stack_long_2 + ((longlong)animation_state + 0x40) * 0x10);
                stack_float_13 = float_ptr[2] - position_ptr[2];
                stack_component_6 = 0x7f7fffff;
                stack_buffer_4._4_4_ = (float_ptr[1] - position_ptr[1]) * float_value_11;
                stack_buffer_4._0_4_ = (*float_ptr - *position_ptr) * float_value_11;
                if (0.0 < float_ptr[2] - position_ptr[2]) {
                    stack_float_13 = 0.0;
                    stack_component_6 = 0x7f7fffff;
                }
                position_ptr = (float *)FUN_1801c0fb0(&stack_value_21, stack_buffer_5, stack_buffer_4);
                stack_value_3 = (uint64_t *)
                             CONCAT44(stack_value_3._4_4_ - position_ptr[1], (float)stack_value_3 - *position_ptr);
                stack_long_1 = CONCAT44(stack_long_1._4_4_, (float)stack_long_1 - position_ptr[2]);
            }
            
            frame_counter = (uint)bone_index;
            temp_uint_1 = stack_uint_1 + 1;
            animation_counter = animation_counter + 1;
            matrix_ptr = matrix_ptr + 4;
            ui_context = stack_long_3;
            stack_byte_1 = bone_index;
            stack_uint_1 = temp_uint_1;
        } while ((int)(char)bone_index != animation_id);
        
        temp_long_1 = stack_long_2;
        if (temp_uint_1 != 0) {
            if ((char)frame_counter < '\0') {
                stack_value_27 = 0x3f800000;
                stack_value_28 = 0;
                stack_value_29 = 0;
                stack_value_30 = 0x3f80000000000000;
            }
            else {
                matrix_ptr = (uint64_t *)FUN_18022a890(temp_long_1, frame_counter & 0xff, state_data);
                stack_value_27 = *matrix_ptr;
                stack_value_28 = matrix_ptr[1];
                matrix_ptr = (uint64_t *)(temp_long_1 + ((longlong)(char)stack_byte_1 + 0x40) * 0x10);
                stack_value_29 = *matrix_ptr;
                stack_value_30 = matrix_ptr[1];
                temp_uint_1 = stack_uint_1;
            }
            
            stack_uint_3 = temp_uint_1 - 1;
            stack_float_2 = 0.0;
            transform_value = stack_array_2[(longlong)(int)temp_uint_1 * 4 + 2];
            temp_value_1 = stack_array_2[(longlong)(int)temp_uint_1 * 4 + 3];
            stack_buffer_2 = (int8_t [8])(longlong)(int)temp_uint_1;
            long_ptr = (longlong *)((longlong)stack_buffer_2 + -1);
            temp_buffer_19 = stack_buffer_2;
            stack_long_ptr_2 = long_ptr;
            
            do {
                animation_state = *(char *)(ui_context + 0xa4);
                stack_int_1 = -1;
                stack_ptr_5 = (uint64_t *)0x0;
                state_flag = -1;
                stack_ptr_4 = (uint64_t *)0xffffffffffffffff;
                stack_long_ptr_1 = long_ptr;
                
                if (0 < (longlong)temp_buffer_19) {
                    stack_ptr_3 = (uint64_t *)0x0;
                    stack_uint_4 = 0xffffffff;
                    stack_ptr_2 = (uint64_t *)0xffffffffffffffe0;
                    do {
                        temp_ptr_1 = stack_ptr_5;
                        matrix_ptr = stack_ptr_3;
                        animation_counter = stack_uint_4;
                        temp_long_1 = (longlong)animation_state;
                        stack_long_ptr_1 = (longlong *)temp_long_1;
                        
                        if (*(int *)(temp_long_1 * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140)) != -1) {
                            if (state_flag == -1) {
                                component_ptr = (int32_t *)FUN_180285c90(&stack_value_21, stack_buffer_18, &stack_value_3);
                                transform_component = component_ptr[1];
                                component_1 = component_ptr[2];
                                component_2 = component_ptr[3];
                                *(int32_t *)((longlong)&stack_value_43 + (longlong)matrix_ptr) = *component_ptr;
                                *(int32_t *)((longlong)&stack_value_43 + 4 + (longlong)matrix_ptr) = transform_component;
                                *(int32_t *)((longlong)&stack_value_44 + (longlong)matrix_ptr) = component_1;
                                *(int32_t *)((longlong)&stack_value_44 + 4 + (longlong)matrix_ptr) = component_2;
                                stack_long_ptr_1 = (longlong *)temp_long_1;
                                stack_ptr_5 = temp_ptr_1;
                                stack_uint_4 = animation_counter;
                            }
                            else {
                                stack_value_25 = (uint64_t *)0x0;
                                stack_value_26 = 0;
                                for (; state_flag != animation_state; state_flag = *(char *)((longlong)state_flag + 0x100 + state_data)) {
                                    temp_long_1 = (longlong)state_flag * 0x1b0 + *(longlong *)(state_data + 0x140);
                                    stack_value_5 = *(uint64_t *)(temp_long_1 + 0x90);
                                    stack_value_6 = *(uint64_t *)(temp_long_1 + 0x98);
                                    stack_component_2 = *(int32_t *)(temp_long_1 + 0x80);
                                    stack_component_3 = *(int32_t *)(temp_long_1 + 0x84);
                                    stack_component_4 = *(int32_t *)(temp_long_1 + 0x88);
                                    stack_component_5 = *(int32_t *)(temp_long_1 + 0x8c);
                                    matrix_ptr = (uint64_t *)FUN_1801c10f0(&stack_value_5, stack_buffer_17, &stack_value_25);
                                    stack_value_25 = (uint64_t *)*matrix_ptr;
                                    stack_value_26 = matrix_ptr[1];
                                    temp_uint_1 = stack_uint_1;
                                }
                                
                                buffer_ptr = stack_buffer_8 + (longlong)(int)animation_counter * 0x20;
                                if ((int)(animation_counter + 2) < (int)temp_uint_1) {
                                    matrix_ptr = &stack_value_41 + (longlong)(int)(animation_counter + 2) * 4;
                                }
                                else {
                                    matrix_ptr = &stack_value_27;
                                }
                                stack_value_7 = matrix_ptr;
                                FUN_180300b10(matrix_ptr, &stack_value_33, buffer_ptr);
                                FUN_180285c90(buffer_ptr, stack_buffer_9, &stack_value_43 + (longlong)stack_int_1 * 4);
                                transform_value = FUN_1801503e0(stack_buffer_9, stack_buffer_10);
                                temp_value_1 = FUN_1801503e0(&stack_value_25, stack_buffer_11);
                                func_0x000180085850(temp_value_1, &stack_float_7, transform_value);
                                
                                temp_long_1 = (longlong)temp_ptr_1 + -1;
                                temp_uint_1 = animation_counter;
                                if ((longlong)stack_ptr_4 < temp_long_1) {
                                    temp_long_3 = temp_long_1 - (longlong)stack_ptr_4;
                                    index_ptr = stack_long_array_1 + temp_long_1 * 4;
                                    do {
                                        long_ptr = (longlong *)
                                                  func_0x00018022b3c0(buffer_ptr, stack_buffer_12,
                                                                      &stack_value_41 + (longlong)(int)animation_counter * 4);
                                        animation_counter = animation_counter - 1;
                                        temp_long_2 = long_ptr[1];
                                        *index_ptr = *long_ptr;
                                        index_ptr[1] = temp_long_2;
                                        temp_long_3 = temp_long_3 + -1;
                                        index_ptr = index_ptr + -4;
                                        matrix_ptr = stack_value_7;
                                        temp_uint_1 = stack_uint_4;
                                    } while (temp_long_3 != 0);
                                }
                                
                                if (((stack_float_7 != 0.0) || (stack_float_8 != 0.0)) || (stack_float_9 != 0.0)) {
                                    float_value_9 = stack_float_8 * stack_float_8 + stack_float_7 * stack_float_7 +
                                             stack_float_9 * stack_float_9;
                                    temp_buffer_15 = rsqrtss(ZEXT416((uint)float_value_9), ZEXT416((uint)float_value_9));
                                    float_value_11 = temp_buffer_15._0_4_;
                                    float_value_11 = float_value_11 * 0.5 * (3.0 - float_value_9 * float_value_11 * float_value_11);
                                    stack_float_7 = stack_float_7 * float_value_11;
                                    stack_float_8 = stack_float_8 * float_value_11;
                                    stack_float_9 = stack_float_9 * float_value_11;
                                    asinf();
                                    FUN_18063b860(stack_buffer_6, &stack_float_7);
                                    temp_ptr_1 = (uint64_t *)func_0x00018022b490(&stack_value_33, stack_buffer_13, stack_buffer_6);
                                    stack_value_33 = *temp_ptr_1;
                                    stack_value_34 = temp_ptr_1[1];
                                }
                                
                                temp_ptr_1 = (uint64_t *)func_0x00018022b490(matrix_ptr, stack_buffer_14, &stack_value_33);
                                matrix_ptr = stack_ptr_3;
                                transform_value = temp_ptr_1[1];
                                *(uint64_t *)((longlong)&stack_value_41 + (longlong)stack_ptr_3) = *temp_ptr_1;
                                *(uint64_t *)((longlong)&stack_value_44 + (longlong)stack_ptr_3) = transform_value;
                                animation_counter = temp_uint_1;
                                
                                if ((longlong)stack_ptr_4 < temp_long_1) {
                                    temp_long_3 = temp_long_1 - (longlong)stack_ptr_4;
                                    temp_ptr_1 = &stack_value_41 + temp_long_1 * 4;
                                    do {
                                        vector_ptr = (uint64_t *)
                                                  func_0x00018022b490(buffer_ptr, stack_buffer_15,
                                                                      stack_long_array_1 + (longlong)(int)temp_uint_1 * 4);
                                        temp_uint_1 = temp_uint_1 - 1;
                                        transform_value = vector_ptr[1];
                                        *temp_ptr_1 = *vector_ptr;
                                        temp_ptr_1[1] = transform_value;
                                        temp_long_3 = temp_long_3 + -1;
                                        temp_ptr_1 = temp_ptr_1 + -4;
                                        animation_counter = stack_uint_4;
                                    } while (temp_long_3 != 0);
                                }
                                
                                position_ptr = (float *)FUN_1801c0fb0(buffer_ptr, stack_buffer_16, &stack_value_25);
                                float_value_11 = *(float *)((longlong)&stack_value_43 + (longlong)stack_ptr_2) - *position_ptr;
                                float_value_9 = *(float *)((longlong)&stack_value_43 + 4 + (longlong)stack_ptr_2) - position_ptr[1];
                                float_value_10 = *(float *)((longlong)&stack_value_44 + (longlong)stack_ptr_2) - position_ptr[2];
                                stack_value_12 = (uint64_t *)CONCAT44(float_value_9, float_value_11);
                                stack_value_13 = CONCAT44(0x7f7fffff, float_value_10);
                                *(float *)((longlong)&stack_value_43 + (longlong)matrix_ptr) = float_value_11;
                                *(float *)((longlong)&stack_value_43 + 4 + (longlong)matrix_ptr) = float_value_9;
                                *(float *)((longlong)&stack_value_44 + (longlong)matrix_ptr) = float_value_10;
                                *(int32_t *)((longlong)&stack_value_44 + 4 + (longlong)matrix_ptr) = 0x7f7fffff;
                                stack_uint_4 = animation_counter;
                            }
                            stack_int_1 = stack_uint_4 + 1;
                            state_flag = animation_state;
                            temp_uint_1 = stack_uint_1;
                            stack_ptr_4 = stack_ptr_5;
                            stack_ptr_2 = matrix_ptr;
                        }
                        
                        animation_state = *(char *)((longlong)stack_long_ptr_1 + 0x100 + state_data);
                        stack_ptr_5 = (uint64_t *)((longlong)stack_ptr_5 + 1);
                        stack_uint_4 = stack_uint_4 + 1;
                        stack_ptr_3 = matrix_ptr + 4;
                        stack_long_ptr_1 = stack_long_ptr_2;
                        ui_context = stack_long_3;
                    } while ((longlong)stack_ptr_5 < (longlong)(int)temp_uint_1);
                }
                
                animation_counter = temp_uint_1 - 1;
                stack_uint_4 = animation_counter;
                if (0 < (int)temp_uint_1) {
                    stack_ptr_4 = (uint64_t *)((longlong)stack_long_ptr_1 + -1);
                    ulong_temp_1 = (ulonglong)stack_int_1;
                    stack_int_2 = temp_uint_1 - 2;
                    stack_value_7 = &stack_value_41 + (longlong)stack_long_ptr_1 * 4;
                    stack_ptr_2 = &stack_value_43 + (longlong)stack_long_ptr_1 * 4;
                    stack_ptr_5 = stack_array_3 + (longlong)stack_long_ptr_1 * 4;
                    stack_ptr_3 = stack_array_2 + (longlong)stack_long_ptr_1 * 4;
                    temp_int_1 = stack_int_1;
                    stack_uint_4 = temp_uint_1;
                    
                    do {
                        ulong_temp_4 = 0;
                        animation_state = *(char *)(ui_context + 0xa4);
                        state_flag = -1;
                        if (0 < (longlong)stack_long_ptr_1) {
                            ulong_temp_2 = ulong_temp_4;
                            ulong_temp_3 = ulong_temp_1;
                            temp_char_2 = animation_state;
                            temp_char_1 = state_flag;
                            do {
                                animation_state = *(char *)((longlong)temp_char_2 + 0x100 + state_data);
                                bool_flag = *(int *)((longlong)temp_char_2 * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140)) < 0;
                                ulong_temp_1 = ulong_temp_4;
                                if (bool_flag) {
                                    ulong_temp_1 = ulong_temp_3;
                                }
                                state_flag = temp_char_2;
                                loop_counter = (int)ulong_temp_2;
                                if (bool_flag) {
                                    state_flag = temp_char_1;
                                    loop_counter = temp_int_1;
                                }
                                temp_int_1 = loop_counter;
                                ulong_temp_2 = (ulonglong)((int)ulong_temp_2 + 1);
                                ulong_temp_4 = ulong_temp_4 + 1;
                                ulong_temp_3 = ulong_temp_1;
                                temp_char_2 = animation_state;
                                stack_int_1 = temp_int_1;
                                temp_char_1 = state_flag;
                            } while ((longlong)ulong_temp_4 < (longlong)stack_long_ptr_1);
                        }
                        
                        stack_int_3 = *(int *)((longlong)animation_state * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140));
                        stack_uint_4 = animation_counter;
                        if (stack_int_3 != -1) {
                            if (animation_counter == stack_uint_3) {
                                *stack_ptr_2 = transform_value;
                                stack_ptr_2[1] = temp_value_1;
                            }
                            if (0 < (int)animation_counter) {
                                stack_value_5 = 0;
                                stack_value_6 = 0;
                                for (; state_flag != animation_state; state_flag = *(char *)((longlong)state_flag + 0x100 + state_data)) {
                                    temp_long_1 = (longlong)state_flag * 0x1b0 + *(longlong *)(state_data + 0x140);
                                    stack_value_25 = *(uint64_t **)(temp_long_1 + 0x90);
                                    stack_value_26 = *(uint64_t *)(temp_long_1 + 0x98);
                                    stack_component_7 = *(int32_t *)(temp_long_1 + 0x80);
                                    stack_component_8 = *(int32_t *)(temp_long_1 + 0x84);
                                    stack_component_9 = *(int32_t *)(temp_long_1 + 0x88);
                                    stack_component_10 = *(int32_t *)(temp_long_1 + 0x8c);
                                    matrix_ptr = (uint64_t *)FUN_1801c10f0(&stack_value_25, stack_buffer_7, &stack_value_5);
                                    stack_value_5 = *matrix_ptr;
                                    stack_value_6 = matrix_ptr[1];
                                }
                                
                                matrix_ptr = &stack_value_41 + (longlong)(int)animation_counter * 4;
                                if ((int)stack_uint_4 < (int)stack_uint_1) {
                                    temp_ptr_1 = &stack_value_41 + (longlong)(int)stack_uint_4 * 4;
                                }
                                else {
                                    temp_ptr_1 = &stack_value_27;
                                }
                                stack_value_25 = temp_ptr_1;
                                FUN_180300b10(temp_ptr_1, &stack_value_33, matrix_ptr);
                                FUN_180285c90(matrix_ptr, stack_buffer_5, &stack_value_43 + (longlong)stack_int_1 * 4);
                                transform_value = FUN_1801503e0(stack_buffer_5, stack_buffer_6);
                                temp_value_1 = FUN_1801503e0(&stack_value_5, stack_buffer_11);
                                func_0x000180085850(temp_value_1, &stack_float_3, transform_value);
                                
                                if ((longlong)ulong_temp_1 < (longlong)stack_ptr_4) {
                                    temp_long_1 = (longlong)stack_ptr_4 - ulong_temp_1;
                                    vector_ptr = stack_ptr_5;
                                    temp_int_1 = stack_int_2;
                                    do {
                                        temp_ptr_1 = (uint64_t *)
                                                  func_0x00018022b3c0(matrix_ptr, stack_buffer_21,
                                                                      &stack_value_41 + (longlong)temp_int_1 * 4);
                                        temp_int_1 = temp_int_1 + -1;
                                        transform_value = temp_ptr_1[1];
                                        *vector_ptr = *temp_ptr_1;
                                        vector_ptr[1] = transform_value;
                                        temp_long_1 = temp_long_1 + -1;
                                        vector_ptr = vector_ptr + -4;
                                        temp_ptr_1 = stack_value_25;
                                        ulong_temp_1 = stack_uint_4;
                                    } while (temp_long_1 != 0);
                                }
                                
                                temp_int_1 = stack_int_2;
                                if (((stack_float_3 != 0.0) || (stack_float_4 != 0.0)) || (stack_float_5 != 0.0)) {
                                    float_value_9 = stack_float_4 * stack_float_4 + stack_float_3 * stack_float_3 +
                                             stack_float_5 * stack_float_5;
                                    temp_buffer_15 = rsqrtss(ZEXT416((uint)float_value_9), ZEXT416((uint)float_value_9));
                                    float_value_11 = temp_buffer_15._0_4_;
                                    float_value_11 = float_value_11 * 0.5 * (3.0 - float_value_9 * float_value_11 * float_value_11);
                                    stack_float_3 = stack_float_3 * float_value_11;
                                    stack_float_4 = stack_float_4 * float_value_11;
                                    stack_float_5 = stack_float_5 * float_value_11;
                                    asinf();
                                    FUN_18063b860(stack_buffer_3, &stack_float_3);
                                    vector_ptr = (uint64_t *)func_0x00018022b490(&stack_value_33, &stack_value_37, stack_buffer_3);
                                    stack_value_33 = *vector_ptr;
                                    stack_value_34 = vector_ptr[1];
                                }
                                
                                stack_long_ptr_2 = &stack_value_25;
                                stack_float_11 = 1.1 / (time_scale + 0.1);
                                stack_value_25 = (uint64_t *)stack_value_33;
                                stack_value_26 = stack_value_34;
                                vector_ptr = (uint64_t *)FUN_18040b910(state_data, stack_buffer_8, animation_state, stack_int_3);
                                stack_value_33 = *vector_ptr;
                                stack_value_34 = vector_ptr[1];
                                temp_ptr_1 = (uint64_t *)func_0x00018022b490(temp_ptr_1, stack_buffer_9, &stack_value_33);
                                transform_value = temp_ptr_1[1];
                                *stack_value_7 = *temp_ptr_1;
                                stack_value_7[1] = transform_value;
                                
                                if ((longlong)ulong_temp_1 < (longlong)stack_ptr_4) {
                                    temp_long_1 = (longlong)stack_ptr_4 - ulong_temp_1;
                                    temp_ptr_1 = stack_ptr_3;
                                    do {
                                        vector_ptr = (uint64_t *)
                                                  func_0x00018022b490(matrix_ptr, stack_buffer_10,
                                                                      stack_long_array_1 + (longlong)temp_int_1 * 4);
                                        temp_int_1 = temp_int_1 + -1;
                                        transform_value = vector_ptr[1];
                                        *temp_ptr_1 = *vector_ptr;
                                        temp_ptr_1[1] = transform_value;
                                        temp_long_1 = temp_long_1 + -1;
                                        temp_ptr_1 = temp_ptr_1 + -4;
                                    } while (temp_long_1 != 0);
                                }
                                
                                component_ptr = (int32_t *)FUN_1801c10f0(matrix_ptr, stack_float_array_1, &stack_value_5);
                                transform_component = component_ptr[1];
                                component_1 = component_ptr[2];
                                component_2 = component_ptr[3];
                                temp_long_1 = ulong_temp_1 * 0x20;
                                *(int32_t *)(&stack_value_43 + ulong_temp_1 * 4) = *component_ptr;
                                *(int32_t *)((longlong)&stack_value_43 + temp_long_1 + 4) = transform_component;
                                *(int32_t *)(stack_buffer_8 + temp_long_1 + -8) = component_1;
                                *(int32_t *)(stack_buffer_8 + temp_long_1 + -4) = component_2;
                                temp_int_1 = stack_int_1;
                            }
                        }
                        
                        stack_ptr_5 = stack_ptr_5 + -4;
                        animation_counter = stack_uint_4 - 1;
                        stack_ptr_2 = stack_ptr_2 + -4;
                        stack_ptr_3 = stack_ptr_3 + -4;
                        stack_value_7 = stack_value_7 + -4;
                        stack_uint_4 = stack_uint_4 - 1;
                        stack_int_2 = stack_int_2 + -1;
                        stack_ptr_4 = (uint64_t *)((longlong)stack_ptr_4 + -1);
                        stack_long_ptr_1 = (longlong *)((longlong)stack_long_ptr_1 + -1);
                        ui_context = stack_long_3;
                        stack_uint_4 = animation_counter;
                    } while (-1 < (int)animation_counter);
                }
                
                stack_value_31 = stack_value_43;
                stack_value_32 = stack_value_44;
                position_ptr = (float *)FUN_1801c10f0(&stack_value_21, stack_array_1, &stack_value_31);
                stack_float_2 = (float)((int)stack_float_2 + 1);
                float_value_11 = *position_ptr;
                float_value_9 = position_ptr[1];
                stack_value_31 = *(uint64_t *)position_ptr;
                float_value_10 = position_ptr[2];
                stack_value_32 = *(uint64_t *)(position_ptr + 2);
                float_value_7 = (float_value_11 - (float)stack_value_3) * float_value_1;
                float_value_8 = (float_value_9 - stack_value_3._4_4_) * float_value_1;
                float_value_5 = (float_value_10 - (float)stack_long_1) * float_value_1;
                float_value_5 = float_value_8 * float_value_8 + float_value_7 * float_value_7 + float_value_5 * float_value_5;
                if (float_value_5 <= 1e-05) break;
                
                long_ptr = (longlong *)((longlong)stack_buffer_2 + -1);
                temp_buffer_19 = stack_buffer_2;
                ui_context = stack_long_3;
                temp_uint_1 = stack_uint_1;
            } while ((int)stack_float_2 < 10);
            
            *(bool *)(stack_long_3 + 0x1c4) = float_value_5 <= 1e-05;
            if (1e-05 < float_value_5) {
                float_value_8 = ((float)stack_long_1 - float_value_10) * float_value_1;
                float_value_5 = ((float)stack_value_3 - float_value_11) * float_value_1;
                float_value_1 = (stack_value_3._4_4_ - float_value_9) * float_value_1;
                float_value_10 = float_value_1 * float_value_1 + float_value_5 * float_value_5 + float_value_8 * float_value_8;
                temp_buffer_15 = rsqrtss(ZEXT416((uint)float_value_10), ZEXT416((uint)float_value_10));
                float_value_11 = temp_buffer_15._0_4_;
                float_value_9 = float_value_11 * 0.5 * (3.0 - float_value_10 * float_value_11 * float_value_11);
                float_value_10 = float_value_10 * float_value_9 - 0.0031622776;
                float_value_11 = float_value_9 * float_value_5 * float_value_10;
                float_value_1 = float_value_9 * float_value_1 * float_value_10;
                float_value_10 = float_value_9 * float_value_8 * float_value_10;
                stack_value_5 = CONCAT44(float_value_1, float_value_11);
                stack_value_6 = CONCAT44(0x7f7fffff, float_value_10);
                *(float *)(stack_long_3 + 0x1b0) = float_value_11;
                *(float *)(stack_long_3 + 0x1b4) = float_value_1;
                *(float *)(stack_long_3 + 0x1b8) = float_value_10;
                *(int32_t *)(stack_long_3 + 0x1bc) = 0x7f7fffff;
            }
            else {
                *(uint64_t *)(stack_long_3 + 0x1b0) = 0;
                *(uint64_t *)(stack_long_3 + 0x1b8) = 0;
            }
        }
        
        state_flag = -1;
        animation_state = *(char *)(stack_long_3 + 0xa4);
        stack_char_1 = animation_state;
        long_ptr = (longlong *)(ulonglong)stack_uint_1;
        if (0 < (int)stack_uint_1) {
            do {
                stack_long_ptr_1 = long_ptr;
                temp_long_1 = stack_long_2;
                temp_long_3 = (longlong)animation_state * 0x1b0;
                stack_buffer_2 = (int8_t [8])(longlong)animation_state;
                bone_index = *(byte *)(temp_long_1 + 0xf1 + *(longlong *)(state_data + 0x140));
                stack_char_1 = animation_state;
                if ('\0' < (char)bone_index) {
                    temp_long_2 = 0;
                    ulong_temp_1 = (ulonglong)bone_index;
                    do {
                        animation_state = *(char *)(temp_long_2 + *(longlong *)
                                            (temp_long_3 + 0xf8 + *(longlong *)(state_data + 0x140)));
                        if (animation_state != state_flag) {
                            position_ptr = (float *)FUN_18022a890(temp_long_1, animation_state, state_data);
                            temp_long_4 = (longlong)animation_state;
                            float_value_1 = position_ptr[1];
                            float_value_11 = position_ptr[2];
                            float_value_9 = position_ptr[3];
                            stack_float_array_2[temp_long_4 * 4] = *position_ptr;
                            stack_float_array_2[temp_long_4 * 4 + 1] = float_value_1;
                            *(float *)(&stack_value_45 + temp_long_4 * 2) = float_value_11;
                            *(float *)((longlong)&stack_value_45 + temp_long_4 * 0x10 + 4) = float_value_9;
                        }
                        temp_long_2 = temp_long_2 + 1;
                        ulong_temp_1 = ulong_temp_1 - 1;
                    } while (ulong_temp_1 != 0);
                }
                animation_state = *(char *)((longlong)stack_buffer_2 + 0x100 + state_data);
                state_flag = stack_char_1;
                long_ptr = (longlong *)((longlong)stack_long_ptr_1 - 1U);
            } while ((longlong)stack_long_ptr_1 - 1U != 0);
            stack_long_ptr_1 = (longlong *)0x0;
            stack_char_1 = animation_state;
        }
        
        temp_long_1 = stack_long_3;
        stack_value_14 = stack_value_21;
        stack_value_15 = stack_value_22;
        stack_value_16 = stack_value_23;
        stack_value_17 = stack_value_24;
        transform_component = (int32_t)stack_value_23;
        component_1 = stack_value_23._4_4_;
        component_2 = (int32_t)stack_value_24;
        component_3 = stack_value_24._4_4_;
        
        if (stack_byte_1 != 0xff) {
            matrix_ptr = (uint64_t *)FUN_180300bf0(&stack_value_14, &stack_value_33, &stack_value_27);
            stack_value_14 = *matrix_ptr;
            stack_value_15 = matrix_ptr[1];
            transform_component = *(int32_t *)(matrix_ptr + 2);
            component_1 = *(int32_t *)((longlong)matrix_ptr + 0x14);
            stack_value_16 = matrix_ptr[2];
            component_2 = *(int32_t *)(matrix_ptr + 3);
            component_3 = *(int32_t *)((longlong)matrix_ptr + 0x1c);
            stack_value_17 = matrix_ptr[3];
        }
        
        ulong_temp_1 = (ulonglong)(int)stack_uint_3;
        if (-1 < (int)stack_uint_3) {
            long_ptr = stack_long_array_1 + ulong_temp_1 * 4;
            position_ptr = (float *)((ulong_temp_1 + 0xb) * 0x10 + temp_long_1);
            do {
                animation_state = *(char *)(temp_long_1 + 0xa4);
                temp_int_1 = (int)ulong_temp_1;
                if (0 < temp_int_1) {
                    ulong_temp_1 = ulong_temp_1 & 0xffffffff;
                    do {
                        state_flag = animation_state;
                        animation_state = *(char *)((longlong)state_flag + 0x100 + state_data);
                        ulong_temp_1 = ulong_temp_1 - 1;
                    } while (ulong_temp_1 != 0);
                }
                
                stack_value_35 = CONCAT44(component_1, transform_component);
                stack_value_36 = CONCAT44(component_3, component_2);
                stack_buffer_2 = (int8_t [8])((longlong)temp_int_1 * 0x20);
                stack_long_ptr_1 = long_ptr;
                stack_value_33 = stack_value_14;
                stack_value_34 = stack_value_15;
                matrix_ptr = (uint64_t *)
                          FUN_180300bf0(&stack_value_21, &stack_value_37, &stack_value_41 + (longlong)temp_int_1 * 4);
                stack_value_14 = *matrix_ptr;
                stack_value_15 = matrix_ptr[1];
                stack_value_16 = matrix_ptr[2];
                stack_value_17 = matrix_ptr[3];
                index_ptr = (longlong *)FUN_180300b10(&stack_value_33, &stack_value_37, &stack_value_14);
                temp_long_3 = index_ptr[1];
                *long_ptr = *index_ptr;
                long_ptr[1] = temp_long_3;
                transform_component = *(int32_t *)((longlong)index_ptr + 0x14);
                temp_long_3 = index_ptr[3];
                component_1 = *(int32_t *)((longlong)index_ptr + 0x1c);
                *(int *)(long_ptr + 2) = (int)index_ptr[2];
                *(int32_t *)((longlong)long_ptr + 0x14) = transform_component;
                *(int *)(long_ptr + 3) = (int)temp_long_3;
                *(int32_t *)((longlong)long_ptr + 0x1c) = component_1;
                
                if (animation_state == *(char *)(temp_long_1 + 0xa4)) {
                    temp_int_1 = *(int *)(temp_long_1 + 0xa0);
                    if (temp_int_1 == 5) {
LAB_180664ddf:
                        stack_value_14 = stack_value_18;
                        stack_value_15 = stack_value_19;
                    }
                    else if (temp_int_1 == 6) {
                        stack_value_14 = *(uint64_t *)(temp_long_1 + 0x20);
                        stack_value_15 = *(uint64_t *)(temp_long_1 + 0x28);
                    }
                    else {
                        if (temp_int_1 != 3) goto LAB_180664ddf;
                        stack_value_14 = *(uint64_t *)(temp_long_1 + 0x20);
                        stack_value_15 = *(uint64_t *)(temp_long_1 + 0x28);
                        if (0.0 < *(float *)(temp_long_1 + 0x30)) {
                            float_ptr = (float *)FUN_1801c10f0(&stack_value_14, stack_array_1, &stack_value_10);
                            float_value_1 = *float_ptr;
                            float_value_11 = *(float *)(stack_long_4 + 0x30);
                            float_value_9 = *(float *)(stack_long_4 + 0x34);
                            float_value_10 = *(float *)(stack_long_4 + 0x38);
                            float_value_5 = float_ptr[1];
                            float_value_7 = float_ptr[2];
                            transform_value = func_0x0001803812e0(&stack_value_8, stack_float_array_1);
                            FUN_1801c0fb0(&stack_value_14, stack_buffer_5, transform_value);
                            stack_value_5 = CONCAT44(*(float *)(temp_long_1 + 0x14) -
                                                  ((float_value_5 - float_value_9) * stack_float_14 + float_value_9),
                                                  *(float *)(temp_long_1 + 0x10) -
                                                  ((float_value_1 - float_value_11) * stack_float_14 + float_value_11));
                            stack_value_6 = CONCAT44(0x7f7fffff,
                                                  *(float *)(temp_long_1 + 0x18) -
                                                  ((float_value_7 - float_value_10) * stack_float_14 + float_value_10));
                            FUN_1801503e0(&stack_value_5, stack_buffer_3);
                            func_0x000180085850(stack_buffer_5, &stack_float_3, stack_buffer_3);
                            if (((stack_float_3 != 0.0) || (stack_float_4 != 0.0)) || (stack_float_5 != 0.0)) {
                                float_value_11 = stack_float_4 * stack_float_4 + stack_float_3 * stack_float_3 +
                                         stack_float_5 * stack_float_5;
                                temp_buffer_15 = rsqrtss(ZEXT416((uint)float_value_11), ZEXT416((uint)float_value_11));
                                float_value_1 = temp_buffer_15._0_4_;
                                float_value_1 = float_value_1 * 0.5 * (3.0 - float_value_11 * float_value_1 * float_value_1);
                                stack_float_3 = stack_float_3 * float_value_1;
                                stack_float_4 = stack_float_4 * float_value_1;
                                stack_float_5 = stack_float_5 * float_value_1;
                                asinf();
                                FUN_18063b860(stack_buffer_6, &stack_float_3);
                                matrix_ptr = (uint64_t *)func_0x00018022b490(stack_buffer_6, stack_buffer_10, &stack_value_14);
                                stack_value_14 = *matrix_ptr;
                                stack_value_15 = matrix_ptr[1];
                            }
                        }
                    }
                    index_ptr = (longlong *)FUN_180300b10(&stack_value_33, &stack_value_37, &stack_value_14);
                    temp_long_1 = index_ptr[1];
                    *long_ptr = *index_ptr;
                    long_ptr[1] = temp_long_1;
                    transform_component = *(int32_t *)((longlong)index_ptr + 0x14);
                    temp_long_1 = index_ptr[3];
                    component_1 = *(int32_t *)((longlong)index_ptr + 0x1c);
                    *(int *)(long_ptr + 2) = (int)index_ptr[2];
                    *(int32_t *)((longlong)long_ptr + 0x14) = transform_component;
                    *(int *)(long_ptr + 3) = (int)temp_long_1;
                    *(int32_t *)((longlong)long_ptr + 0x1c) = component_1;
                }
                
                stack_long_ptr_2 = (longlong *)*long_ptr;
                stack_long_5 = long_ptr[1];
                func_0x00018022b430(&stack_long_ptr_2);
                temp_long_1 = (longlong)animation_state;
                func_0x00018022b3c0(stack_long_2 + 0x820 + temp_long_1 * 0x10, &stack_float_7, &stack_long_ptr_2);
                
                if ((*(float *)(stack_long_3 + 0x1dc) <= 30.0 && *(float *)(stack_long_3 + 0x1dc) != 30.0) &&
                   (animation_state != *(char *)(stack_long_3 + 0xa4))) {
                    func_0x00018022b3c0(((longlong)(int)stack_uint_3 + 0xb) * 0x10 + stack_long_3, stack_buffer_9,
                                        &stack_float_7);
                    FUN_18063b720(stack_buffer_8, &stack_float_2, stack_buffer_9);
                    if (3.1415927 < stack_float_2) {
                        stack_float_2 = 6.2831855 - stack_float_2;
                    }
                    float_value_1 = blend_factor * *(float *)(stack_long_3 + 0x1dc);
                    if (float_value_1 < stack_float_2) {
                        float_value_1 = float_value_1 / stack_float_2;
                        if (0.001 <= float_value_1) {
                            if (float_value_1 <= 0.999) {
                                float_value_11 = *position_ptr;
                                float_value_9 = position_ptr[1];
                                float_value_10 = position_ptr[2];
                                float_value_5 = position_ptr[3];
                                float_value_7 = float_value_10 * stack_float_9;
                                float_value_8 = float_value_5 * stack_float_10;
                                stack_component_11 = 0xbf800000;
                                stack_component_12 = 0xbf800000;
                                stack_component_13 = 0xbf800000;
                                stack_component_14 = 0xbf800000;
                                temp_buffer_16._0_4_ = float_value_7 + float_value_11 * stack_float_7;
                                temp_buffer_16._4_4_ = float_value_8 + float_value_9 * stack_float_8;
                                temp_buffer_16._8_4_ = float_value_7 + float_value_7;
                                temp_buffer_16._12_4_ = float_value_8 + float_value_8;
                                temp_buffer_17._4_12_ = temp_buffer_16._4_12_;
                                temp_buffer_17._0_4_ = temp_buffer_16._0_4_ + temp_buffer_16._4_4_;
                                stack_value_37 = 0x3f8000003f800000;
                                stack_value_38 = 0x3f8000003f800000;
                                animation_counter = movmskps((int)stack_long_3, temp_buffer_17);
                                ulong_temp_1 = (ulonglong)(animation_counter & 1);
                                float_value_7 = *(float *)(&stack_value_37 + ulong_temp_1 * 2) * stack_float_7;
                                float_value_8 = *(float *)((longlong)&stack_value_37 + ulong_temp_1 * 0x10 + 4) * stack_float_8;
                                float_value_13 = *(float *)(&stack_value_38 + ulong_temp_1 * 2) * stack_float_9;
                                float_value_12 = *(float *)((longlong)&stack_value_38 + ulong_temp_1 * 0x10 + 4) * stack_float_10;
                                if (0.9995 < ABS(temp_buffer_17._0_4_)) {
                                    float_value_14 = 1.0 - float_value_1;
                                    stack_value_25 = (uint64_t *)
                                                 CONCAT44(float_value_14 * float_value_9 + float_value_1 * float_value_8,
                                                          float_value_14 * float_value_11 + float_value_1 * float_value_7);
                                    stack_value_26 = CONCAT44(float_value_14 * float_value_5 + float_value_1 * float_value_12,
                                                          float_value_14 * float_value_10 + float_value_1 * float_value_13);
                                    func_0x00018022b430(&stack_value_25);
                                    stack_float_7 = (float)stack_value_25;
                                    stack_float_8 = stack_value_25._4_4_;
                                    stack_float_9 = (float)stack_value_26;
                                    stack_float_10 = stack_value_26._4_4_;
                                }
                                else {
                                    acosf();
                                    float_value_1 = (float)sinf();
                                    float_value_14 = (float)sinf();
                                    float_value_14 = float_value_14 * (1.0 / float_value_1);
                                    float_value_2 = (float)sinf();
                                    float_value_2 = float_value_2 * (1.0 / float_value_1);
                                    stack_float_7 = float_value_14 * float_value_11 + float_value_2 * float_value_7;
                                    stack_float_8 = float_value_14 * float_value_9 + float_value_2 * float_value_8;
                                    stack_float_9 = float_value_14 * float_value_10 + float_value_2 * float_value_13;
                                    stack_float_10 = float_value_14 * float_value_5 + float_value_2 * float_value_12;
                                }
                            }
                        }
                        else {
                            stack_float_7 = *position_ptr;
                            stack_float_8 = position_ptr[1];
                            stack_float_9 = position_ptr[2];
                            stack_float_10 = position_ptr[3];
                        }
                        index_ptr = (longlong *)
                                  func_0x00018022b490((temp_long_1 + 0x82) * 0x10 + stack_long_2, stack_buffer_8,
                                                      &stack_float_7);
                        stack_long_ptr_2 = (longlong *)*index_ptr;
                        stack_long_5 = index_ptr[1];
                        *long_ptr = (longlong)stack_long_ptr_2;
                        long_ptr[1] = stack_long_5;
                        matrix_ptr = (uint64_t *)
                                  FUN_180300bf0(&stack_value_33, &stack_value_37,
                                                (longlong)stack_long_array_1 + (longlong)stack_buffer_2);
                        stack_value_14 = *matrix_ptr;
                        stack_value_15 = matrix_ptr[1];
                        stack_value_16 = matrix_ptr[2];
                        stack_value_17 = matrix_ptr[3];
                    }
                }
                
                *(ulonglong *)position_ptr = CONCAT44(stack_float_8, stack_float_7);
                *(ulonglong *)(position_ptr + 2) = CONCAT44(stack_float_10, stack_float_9);
                transform_value = func_0x00018022b3c0(&stack_value_21, &stack_value_7, &stack_value_14);
                float_value_1 = stack_float_6;
                temp_long_3 = stack_long_2;
                position_ptr[0x20] = (float)stack_value_7;
                position_ptr[0x21] = stack_value_7._4_4_;
                position_ptr[0x22] = stack_float_11;
                position_ptr[0x23] = stack_float_12;
                
                if (1.0 <= stack_float_6) {
                    FUN_18022b240(stack_long_2, animation_state, &stack_value_7, state_data);
                    if (animation_state == '\0') {
                        transform_value = *(uint64_t *)(temp_long_3 + 0x1028);
                        float_value_1 = (float)*(uint64_t *)(temp_long_3 + 0x1020) + (float)stack_buffer_4._0_4_;
                        stack_buffer_2._4_4_ = (int32_t)((ulonglong)*(uint64_t *)(temp_long_3 + 0x1020) >> 0x20);
                        stack_value_4._0_4_ = (float)transform_value;
                        stack_value_4._4_4_ = (float)((ulonglong)transform_value >> 0x20);
                        temp_buffer_19._4_8_ = transform_value;
                        temp_buffer_19._0_4_ = stack_buffer_2._4_4_;
                        temp_buffer_13._0_8_ = temp_buffer_19._0_8_ << 0x20;
                        temp_buffer_13._8_4_ = (float)stack_value_4;
                        temp_buffer_13._12_4_ = stack_value_4._4_4_;
                        temp_buffer_18._4_8_ = temp_buffer_13._8_8_;
                        temp_buffer_18._0_4_ = float_value_1;
                        temp_buffer_12._0_8_ = temp_buffer_18._0_8_ << 0x20;
                        temp_buffer_12._8_4_ = (float)stack_value_4;
                        temp_buffer_12._12_4_ = stack_value_4._4_4_;
                        temp_buffer_17._4_8_ = temp_buffer_12._8_8_;
                        temp_buffer_17._0_4_ = float_value_1;
                        temp_buffer_11._0_8_ = temp_buffer_17._0_8_ << 0x20;
                        temp_buffer_11._8_4_ = (float)stack_buffer_2._4_4_ + (float)stack_buffer_4._4_4_;
                        temp_buffer_11._12_4_ = stack_value_4._4_4_;
                        temp_buffer_10._4_12_ = temp_buffer_11._4_12_;
                        temp_buffer_10._0_4_ = (float)stack_value_4 + stack_float_13;
                        goto LAB_1806654b3;
                    }
                }
                else {
                    if (0.001 <= stack_float_6) {
                        if (stack_float_6 <= 0.999) {
                            float_value_11 = stack_float_array_2[temp_long_1 * 4];
                            float_value_9 = stack_float_array_2[temp_long_1 * 4 + 1];
                            float_value_10 = *(float *)(&stack_value_45 + temp_long_1 * 2);
                            float_value_5 = *(float *)((longlong)&stack_value_45 + temp_long_1 * 0x10 + 4);
                            float_value_7 = float_value_10 * stack_float_11;
                            float_value_8 = float_value_5 * stack_float_12;
                            stack_component_11 = 0xbf800000;
                            stack_component_12 = 0xbf800000;
                            stack_component_13 = 0xbf800000;
                            stack_component_14 = 0xbf800000;
                            temp_buffer_18._0_4_ = float_value_7 + float_value_11 * (float)stack_value_7;
                            temp_buffer_18._4_4_ = float_value_8 + float_value_9 * stack_value_7._4_4_;
                            temp_buffer_18._8_4_ = float_value_7 + float_value_7;
                            temp_buffer_18._12_4_ = float_value_8 + float_value_8;
                            temp_buffer_19._4_12_ = temp_buffer_18._4_12_;
                            temp_buffer_19._0_4_ = temp_buffer_18._0_4_ + temp_buffer_18._4_4_;
                            stack_value_37 = 0x3f8000003f800000;
                            stack_value_38 = 0x3f8000003f800000;
                            animation_counter = movmskps(transform_value, temp_buffer_19);
                            ulong_temp_1 = (ulonglong)(animation_counter & 1);
                            float_value_7 = *(float *)(&stack_value_37 + ulong_temp_1 * 2) * (float)stack_value_7;
                            float_value_8 = *(float *)((longlong)&stack_value_37 + ulong_temp_1 * 0x10 + 4) * stack_value_7._4_4_;
                            float_value_13 = *(float *)(&stack_value_38 + ulong_temp_1 * 2) * stack_float_11;
                            float_value_12 = *(float *)((longlong)&stack_value_38 + ulong_temp_1 * 0x10 + 4) * stack_float_12;
                            if (0.9995 < ABS(temp_buffer_19._0_4_)) {
                                float_value_14 = 1.0 - stack_float_6;
                                stack_buffer_2._4_4_ = float_value_14 * float_value_9 + stack_float_6 * float_value_8;
                                stack_buffer_2._0_4_ = float_value_14 * float_value_11 + stack_float_6 * float_value_7;
                                stack_value_4._0_4_ = float_value_14 * float_value_10 + stack_float_6 * float_value_13;
                                stack_value_4._4_4_ = float_value_14 * float_value_5 + stack_float_6 * float_value_12;
                                func_0x00018022b430(stack_buffer_2);
                                float_value_11 = (float)stack_buffer_2._0_4_;
                                float_value_9 = (float)stack_buffer_2._4_4_;
                                float_value_10 = (float)stack_value_4;
                                float_value_5 = stack_value_4._4_4_;
                            }
                            else {
                                acosf();
                                float_value_1 = (float)sinf();
                                float_value_14 = (float)sinf();
                                float_value_14 = float_value_14 * (1.0 / float_value_1);
                                float_value_2 = (float)sinf();
                                float_value_2 = float_value_2 * (1.0 / float_value_1);
                                float_value_1 = stack_float_6;
                                float_value_11 = float_value_14 * float_value_11 + float_value_2 * float_value_7;
                                float_value_9 = float_value_14 * float_value_9 + float_value_2 * float_value_8;
                                float_value_10 = float_value_14 * float_value_10 + float_value_2 * float_value_13;
                                float_value_5 = float_value_14 * float_value_5 + float_value_2 * float_value_12;
                            }
                            stack_value_12 = (uint64_t *)CONCAT44(float_value_9, float_value_11);
                            stack_value_13 = CONCAT44(float_value_5, float_value_10);
                        }
                        else {
                            stack_value_12 = stack_value_7;
                            stack_value_13 = CONCAT44(stack_float_12, stack_float_11);
                        }
                    }
                    else {
                        stack_value_12 = *(uint64_t **)(stack_float_array_2 + temp_long_1 * 4);
                        stack_value_13 = (&stack_value_45)[temp_long_1 * 2];
                    }
                    func_0x00018022b430(&stack_value_12);
                    temp_long_3 = stack_long_2;
                    FUN_18022b240(stack_long_2, animation_state, &stack_value_12, state_data);
                    if (animation_state == '\0') {
                        float_value_11 = *(float *)(temp_long_3 + 0x1028);
                        transform_value = *(int32_t *)(temp_long_3 + 0x102c);
                        temp_buffer_17._4_8_ = stack_value_4;
                        temp_buffer_17._0_4_ = *(float *)(temp_long_3 + 0x1024);
                        stack_buffer_2 = (int8_t [8])(temp_buffer_17._0_8_ << 0x20);
                        stack_value_4._0_4_ = float_value_11;
                        stack_value_4._4_4_ = (float)transform_value;
                        float_value_9 = (float)stack_buffer_4._0_4_ * float_value_1 + *(float *)(temp_long_3 + 0x1020);
                        temp_buffer_16._4_8_ = stack_buffer_2._8_8_;
                        temp_buffer_16._0_4_ = float_value_9;
                        temp_buffer_14._0_8_ = temp_buffer_16._0_8_ << 0x20;
                        temp_buffer_14._8_4_ = float_value_11;
                        temp_buffer_14._12_4_ = transform_value;
                        temp_buffer_15._4_8_ = temp_buffer_14._8_8_;
                        temp_buffer_15._0_4_ = float_value_9;
                        temp_buffer_15._0_8_ = temp_buffer_15._0_8_ << 0x20;
                        temp_buffer_15._8_4_ = *(float *)(temp_long_3 + 0x1024) + (float)stack_buffer_4._4_4_ * float_value_1;
                        temp_buffer_15._12_4_ = transform_value;
                        temp_buffer_10._4_12_ = temp_buffer_15._4_12_;
                        temp_buffer_10._0_4_ = float_value_11 + float_value_1 * stack_float_13;
LAB_1806654b3:
                        *(ulonglong *)(temp_long_3 + 0x800) =
                             *(ulonglong *)(temp_long_3 + 0x800) | *(ulonglong *)(temp_long_3 + 0x810);
                        stack_value_4._4_4_ = temp_buffer_10._12_4_;
                        stack_buffer_2 = temp_buffer_10._4_8_;
                        stack_value_4._0_4_ = (float)temp_buffer_10._0_4_;
                        *(int8_t (*) [16])(temp_long_3 + 0x1020) = _stack_buffer_2;
                    }
                }
                
                temp_long_3 = stack_long_2;
                bone_index = *(byte *)(temp_long_1 * 0x1b0 + 0xf1 + *(longlong *)(state_data + 0x140));
                if ('\x01' < (char)bone_index) {
                    temp_long_2 = 0;
                    ulong_temp_1 = (ulonglong)bone_index;
                    do {
                        animation_state = *(char *)(temp_long_2 + *(longlong *)
                                            (temp_long_1 * 0x1b0 + 0xf8 + *(longlong *)(state_data + 0x140)));
                        if (animation_state != state_flag) {
                            FUN_18022b240(temp_long_3, animation_state, stack_float_array_2 + (longlong)animation_state * 4, state_data);
                        }
                        temp_long_2 = temp_long_2 + 1;
                        ulong_temp_1 = ulong_temp_1 - 1;
                        long_ptr = stack_long_ptr_1;
                    } while (ulong_temp_1 != 0);
                }
                
                long_ptr = long_ptr + -4;
                stack_uint_3 = stack_uint_3 - 1;
                ulong_temp_1 = (ulonglong)stack_uint_3;
                position_ptr = position_ptr + -4;
                stack_long_ptr_1 = long_ptr;
                if ((int)stack_uint_3 < 0) break;
                temp_long_1 = stack_long_3;
                transform_value = (int32_t)stack_value_16;
                component_1 = stack_value_16._4_4_;
                component_2 = (int32_t)stack_value_17;
                component_3 = stack_value_17._4_4_;
            } while( true );
        }
    }
    
LAB_18066375a:
    // 函数结束，调用清理函数
    // WARNING: Subroutine does not return
    FUN_1808fc050(stack_ulong_1 ^ (ulonglong)stack_buffer_1);
}

// 函数别名定义
#define UIAdvancedTransform ProcessUIAdvancedAnimationTransform
#define UIAnimationProcessor ProcessUIAdvancedAnimationTransform
#define UISystemTransformHandler ProcessUIAdvancedAnimationTransform

/*
 * 技术说明：
 * 
 * 1. 函数复杂度：该函数包含1419行代码，是UI系统中最复杂的函数之一
 * 2. 主要功能：
 *    - 处理UI骨骼动画和变换矩阵
 *    - 实现复杂的插值算法（线性插值、球面线性插值）
 *    - 管理动画状态和数据缓冲区
 *    - 执行大量的数学运算（三角函数、向量运算、矩阵变换）
 * 3. 性能优化：
 *    - 使用SIMD指令进行向量化计算
 *    - 优化内存访问模式
 *    - 实现高效的插值算法
 * 4. 内存管理：
 *    - 使用栈分配大量临时变量
 *    - 管理多个数据缓冲区
 *    - 处理复杂数据结构的操作
 * 5. 算法特点：
 *    - 支持多种动画模式（3、4、5、6、7）
 *    - 实现动画混合和过渡
 *    - 处理骨骼层次结构
 *    - 支持时间缩放和混合因子
 */