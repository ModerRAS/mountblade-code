#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part010.c - UI系统高级数据处理和渲染控制模块
// 包含1个核心函数，涵盖UI元素处理、渲染控制、数据变换、矩阵运算、角度计算、浮点数处理等高级UI功能

/**
 * UI系统高级数据处理和渲染控制函数
 * 
 * 该函数负责处理复杂的UI数据变换、渲染控制、矩阵运算和角度计算。
 * 主要功能包括：
 * - UI元素数据的批量处理和变换
 * - 渲染参数的动态调整和优化
 * - 矩阵运算和坐标变换
 * - 角度计算和三角函数处理
 * - 浮点数数据的精确计算
 * - UI状态管理和条件判断
 * 
 * @param ui_context UI系统上下文指针，包含UI状态和数据
 * @param time_delta 时间增量参数，用于动画和插值计算
 * @param render_context 渲染上下文指针，包含渲染相关的状态和数据
 * @param update_flag 更新标志，控制是否执行特定的更新操作
 */
void ui_system_advanced_data_processing_and_render_control(void* ui_context, float time_delta, void* render_context, char update_flag)
{
    char local_update_flag;
    bool needs_update;
    int loop_counter;
    void* register_rax;
    int64_t temp_long_1;
    float* float_ptr_1;
    int64_t temp_long_2;
    int64_t temp_long_3;
    void* register_rbx;
    float* float_ptr_2;
    int64_t register_rbp;
    int temp_int_1;
    void* register_rsi;
    uint64_t temp_ulong_1;
    int64_t register_r11;
    void* register_r12;
    void* register_r13;
    float* register_r14;
    char temp_char_1;
    void* register_r15;
    float float_xmm0;
    float temp_float_1;
    float temp_float_2;
    float temp_float_3;
    float temp_float_4;
    float temp_float_5;
    float temp_float_6;
    float temp_float_7;
    float temp_float_8;
    float temp_float_9;
    float temp_float_10;
    float temp_float_11;
    char temp_array_1[16];
    float temp_float_12;
    float temp_float_13;
    float float_xmm6;
    float float_xmm8;
    float float_xmm9;
    float temp_float_14;
    float float_xmm11[4];
    float float_xmm12[4];
    float float_xmm13[4];
    float float_xmm15[4];
    char stack_char_1;
    float stack_float_1;
    float stack_float_2;
    float stack_float_3;
    float stack_float_4;
    float stack_float_5;
    float stack_float_6;
    float stack_float_7;
    float stack_float_8;
    void* stack_ptr_1;
    float stack_float_9;
    float stack_float_10;
    float stack_float_11;
    float stack_float_12;
    float large_float_array[6200];
    void* stack_ptr_2;
    
    // 保存寄存器状态到栈上
    *(void**)((int64_t)register_r11 + 0x10) = register_rbx;
    *(void**)((int64_t)register_r11 - 0x20) = register_rsi;
    *(void**)((int64_t)register_r11 - 0x28) = register_r12;
    *(void**)((int64_t)register_r11 - 0x30) = register_r13;
    loop_counter = 0;
    *(void**)((int64_t)register_r11 - 0x38) = register_r15;
    *(float*)((int64_t)register_r11 - 0x98) = float_xmm11[0];
    *(float*)((int64_t)register_r11 - 0x94) = float_xmm11[1];
    *(float*)((int64_t)register_r11 - 0x90) = float_xmm11[2];
    *(float*)((int64_t)register_r11 - 0x8c) = float_xmm11[3];
    *(float*)((int64_t)register_r11 - 0xa8) = float_xmm12[0];
    *(float*)((int64_t)register_r11 - 0xa4) = float_xmm12[1];
    *(float*)((int64_t)register_r11 - 0xa0) = float_xmm12[2];
    *(float*)((int64_t)register_r11 - 0x9c) = float_xmm12[3];
    *(float*)((int64_t)register_r11 - 0xb8) = float_xmm13[0];
    *(float*)((int64_t)register_r11 - 0xb4) = float_xmm13[1];
    *(float*)((int64_t)register_r11 - 0xb0) = float_xmm13[2];
    *(float*)((int64_t)register_r11 - 0xac) = float_xmm13[3];
    *(float*)((int64_t)register_r11 - 0xd8) = float_xmm15[0];
    *(float*)((int64_t)register_r11 - 0xd4) = float_xmm15[1];
    *(float*)((int64_t)register_r11 - 0xd0) = float_xmm15[2];
    *(float*)((int64_t)register_r11 - 0xcc) = float_xmm15[3];
    stack_char_1 = update_flag;
    stack_float_1 = time_delta;
    stack_ptr_1 = register_rax;
    
    // 处理UI元素数据批量更新
    if (0 < *(int*)((int64_t)ui_context + 0x60)) {
        float_ptr_1 = (float*)((int64_t)ui_context + 0x6c);
        float_ptr_2 = float_ptr_1;
        temp_int_1 = loop_counter;
        do {
            temp_float_3 = float_ptr_2[1];
            temp_float_1 = *float_ptr_2;
            if (temp_float_3 <= temp_float_1) {
                temp_float_1 = temp_float_1 - time_delta * float_xmm0;
                if (temp_float_1 <= temp_float_3) {
                    temp_float_1 = temp_float_3;
                }
            }
            else {
                temp_float_1 = time_delta * float_xmm0 + temp_float_1;
                if (temp_float_3 <= temp_float_1) {
                    temp_float_1 = temp_float_3;
                }
            }
            *float_ptr_2 = temp_float_1;
            stack_ptr_2 = (void*)0x1806597d3;
            ui_system_update_element_state(*(void**)((int64_t)float_ptr_2 + 0x495), (char*)((int64_t)ui_context + 0x6150));
            if ((*(char*)((int64_t)float_ptr_2 + 0x4af) == '\0') && (*(char*)((int64_t)float_ptr_2 + 0x4ce) != '\0')) {
                *(char*)((int64_t)float_ptr_2 + 0x4af) = 1;
            }
            if ((*(char*)((int64_t)float_ptr_2 + 0x4c8) == '\0') && (*(char*)((int64_t)float_ptr_2 + 0x4d4) != '\0')) {
                *(char*)((int64_t)float_ptr_2 + 0x4c8) = 1;
            }
            float_xmm9 = float_xmm9 + *float_ptr_2;
            float_ptr_2 = (float*)((int64_t)float_ptr_2 + 0x4d6);
            temp_int_1 = temp_int_1 + 1;
        } while (temp_int_1 < (int)((int64_t*)register_r14)[0x18]);
        
        // 标准化处理
        if (((float_xmm6 < float_xmm9) && (float_xmm9 != float_xmm8)) && (0 < (int)((int64_t*)register_r14)[0x18])) {
            do {
                loop_counter = loop_counter + 1;
                *float_ptr_1 = (float_xmm8 / float_xmm9) * *float_ptr_1;
                float_ptr_1 = (float*)((int64_t)float_ptr_1 + 0x4d6);
            } while (loop_counter < (int)((int64_t*)register_r14)[0x18]);
        }
    }
    
    temp_char_1 = stack_char_1;
    stack_ptr_2 = (void*)0x18065986c;
    ui_system_internal_update();
    
    // 渲染参数检查和调整
    if (((float_xmm6 == ((int64_t*)register_r14)[4]) && (float_xmm6 == ((int64_t*)register_r14)[5])) &&
        (0.25 < ((int64_t*)register_r14)[2] * ((int64_t*)register_r14)[2] + ((int64_t*)register_r14)[3] * ((int64_t*)register_r14)[3])) {
        *(void**)((int64_t)register_r14 + 4) = *(void**)((int64_t)register_r14 + 2);
    }
    
    // 内存分配检查
    if (((int64_t*)register_r14)[8] != float_xmm6) {
        // WARNING: Subroutine does not return
        stack_ptr_2 = (void*)0x1806598e8;
        memory_allocation_error_handler(-((int64_t*)register_r14)[8]);
    }
    
    // 提取渲染数据
    stack_float_3 = (float)((uint64_t)*(void**)((int64_t)register_r14 + 4) >> 0x20);
    stack_float_2 = (float)*(void**)((int64_t)register_r14 + 4);
    stack_float_7 = (float)((uint64_t)*(void**)((int64_t)register_r14 + 2) >> 0x20);
    stack_float_6 = (float)*(void**)((int64_t)register_r14 + 2);
    temp_float_3 = ((int64_t*)register_r14)[0x185d];
    
    // UI状态检查
    if ((((int64_t*)register_r14)[0x10] == float_xmm6) || (((int64_t*)register_r14)[0x10] == 0.5) || (temp_float_3 <= float_xmm6)) {
        needs_update = false;
    }
    else {
        needs_update = true;
    }
    
    stack_ptr_2 = (void*)0x1806599e0;
    temp_float_1 = (float)atan2f(*(uint*)(*(int64_t*)((int64_t)render_context + 0x10) + 0x80) ^ 0x80000000,
                                *(uint*)(*(int64_t*)((int64_t)render_context + 0x10) + 0x84));
    temp_float_1 = temp_float_1 + ((int64_t*)register_r14)[6];
    ((int64_t*)register_r14)[0xb] = temp_float_1;
    
    // 角度标准化处理
    if (temp_float_1 <= 3.1415927) {
        if (temp_float_1 < -3.1415927) {
            temp_float_1 = temp_float_1 + 6.2831855;
            goto ANGLE_NORMALIZED;
        }
    }
    else {
        temp_float_1 = temp_float_1 - 6.2831855;
    ANGLE_NORMALIZED:
        ((int64_t*)register_r14)[0xb] = temp_float_1;
    }
    
    // UI元素数量处理
    temp_float_1 = ((int64_t*)register_r14)[0x18];
    temp_long_1 = (int64_t)(int)temp_float_1;
    if (0 < (int)temp_float_1) {
        temp_float_3 = float_xmm6;
        if (*(char*)(temp_long_1 * 0x1358 + 0x4e + (int64_t)register_r14) != '\0') {
            temp_float_3 = ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0x12] * 0.05;
        }
        if ((temp_float_3 + ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0xe] < ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0x11]) ||
            (*(char*)((int64_t)register_r14 + temp_long_1 * 0x4d6 + 0x13) != '\0')) {
            ((int64_t*)register_r14)[0xc] = ((int64_t*)register_r14)[0xb];
            temp_float_1 = ((int64_t*)register_r14)[0x18];
        }
        temp_long_1 = (int64_t)(int)temp_float_1;
        temp_float_3 = float_xmm6;
        if (*(char*)(temp_long_1 * 0x1358 + 0x66 + (int64_t)register_r14) != '\0') {
            temp_float_3 = ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0x18] * 0.05;
        }
        if ((temp_float_3 + ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0x14] < ((int64_t*)register_r14)[temp_long_1 * 0x4d6 + 0x17]) ||
            (*(char*)((int64_t)register_r14 + temp_long_1 * 0x4d6 + 0x19) != '\0')) {
            ((int64_t*)register_r14)[0xd] = ((int64_t*)register_r14)[0xb];
            temp_float_1 = ((int64_t*)register_r14)[0x18];
        }
    }
    
    // 渲染条件检查
    if ((((((int)temp_float_1 < 1) || (float_xmm6 != ((int64_t*)register_r14)[2])) || (float_xmm6 != ((int64_t*)register_r14)[3])) ||
        (float_xmm6 == ((int64_t*)register_r14)[6])) ||
        ((ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xc]) < 0.5 && (ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xd]) < 0.5)))) {
        if (((needs_update) && ((float_xmm6 == ((int64_t*)register_r14)[2] && (float_xmm6 == ((int64_t*)register_r14)[3])))) ||
            (((((int64_t*)register_r14)[0x14] = 0.0, stack_float_4 = float_xmm6,
              float_xmm6 <= stack_float_2 && (stack_float_4 = float_xmm8, stack_float_2 <= float_xmm6))))
            goto RENDER_CONDITION_MET;
    }
    else {
        needs_update = true;
        ((int64_t*)register_r14)[0x14] = 1.0;
    RENDER_CONDITION_MET:
        if (((temp_char_1 == '\0') ||
            (stack_float_4 = float_xmm8, float_xmm8 < ((int64_t*)register_r14)[0x1854] || float_xmm8 == ((int64_t*)register_r14)[0x1854])) &&
            (stack_float_4 = float_xmm8, *(char*)((int64_t)register_r14 + 0x17) != '\0')) {
            stack_float_4 = float_xmm6;
        }
    }
    
    // 动画插值处理
    if ((temp_float_3 <= float_xmm6) && (float_xmm6 < ((int64_t*)register_r14)[0x14])) {
        temp_float_3 = ((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xc];
        temp_float_1 = ((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xd];
        if (ABS(temp_float_3) <= ABS(temp_float_1)) {
            temp_float_3 = temp_float_1;
        }
        if (temp_float_3 <= 3.1415927) {
            if (temp_float_3 < -3.1415927) {
                temp_float_3 = temp_float_3 + 6.2831855;
            }
        }
        else {
            temp_float_3 = temp_float_3 + -6.2831855;
        }
        temp_float_1 = float_xmm6;
        if (float_xmm6 < temp_float_3) {
            temp_float_1 = 0.5;
        }
        ((int64_t*)register_r14)[0x10] = temp_float_1;
    }
    
    // 权重计算和更新
    if ((needs_update) && (0 < (int)((int64_t*)register_r14)[0x18])) {
        float_ptr_1 = (float*)((int64_t)register_r14 + 0x1b);
        temp_ulong_1 = (uint64_t)(uint)((int64_t*)register_r14)[0x18];
        temp_float_3 = float_xmm6;
        do {
            float_ptr_2 = (float*)((int64_t)float_ptr_1 + 0x495);
            temp_float_1 = *float_ptr_1;
            float_ptr_1 = (float*)((int64_t)float_ptr_1 + 0x4d6);
            temp_float_3 = temp_float_3 + *(float*)(*(int64_t*)(*(int64_t*)float_ptr_2 + 0x48) + 0x188) * temp_float_1;
            temp_ulong_1 = temp_ulong_1 - 1;
        } while (temp_ulong_1 != 0);
        temp_float_1 = ((int64_t*)register_r14)[0x10];
        temp_float_3 = (stack_float_1 * ((int64_t*)register_r14)[7]) / temp_float_3 + temp_float_1;
        ((int64_t*)register_r14)[0x10] = temp_float_3;
        if (temp_float_3 <= float_xmm8) {
            if ((((temp_float_1 <= 0.5) && (0.5 < temp_float_3)) && (ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xc]) < 0.5)) &&
                (ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xd]) < 0.5)) {
                ((int64_t*)register_r14)[0x10] = 0.5;
            }
        }
        else if ((0.5 <= ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xc])) ||
                 (0.5 <= ABS(((int64_t*)register_r14)[0xb] - ((int64_t*)register_r14)[0xd]))) {
            ((int64_t*)register_r14)[0x10] = temp_float_3 - float_xmm8;
        }
        else {
            ((int64_t*)register_r14)[0x10] = float_xmm6;
        }
    }
    
    // 状态标志处理
    temp_char_1 = *(char*)((int64_t)register_rbp + 0xa0);
    temp_char_1 = *(char*)((int64_t)register_rbp + 0xa8);
    if ((((temp_char_1 != '\0') || (temp_char_1 != '\0')) &&
        ((float_xmm6 != ((int64_t*)register_r14)[2] || (float_xmm6 != ((int64_t*)register_r14)[3])))) ||
        (((float_xmm6 != ((int64_t*)register_r14)[4] || (float_xmm6 != ((int64_t*)register_r14)[5])) ||
         (temp_float_3 = float_xmm8, float_xmm6 < ((int64_t*)register_r14)[0x14])))) {
        temp_float_3 = float_xmm6;
    }
    
    // 速度计算
    temp_float_4 = stack_float_1 + stack_float_1;
    temp_float_3 = *register_r14 - ((int64_t*)register_r14)[1];
    temp_float_1 = temp_float_3;
    if ((temp_float_4 < ABS(temp_float_3)) && (temp_float_1 = temp_float_4, temp_float_3 < float_xmm6)) {
        temp_float_1 = -temp_float_4;
    }
    ((int64_t*)register_r14)[1] = ((int64_t*)register_r14)[1] + temp_float_1;
    stack_ptr_2 = (void*)0x180659d72;
    temp_float_3 = (float)ui_system_calculate_speed_factor(ABS(temp_float_3), render_context, stack_ptr_1);
    temp_float_1 = stack_float_1;
    if (temp_float_3 <= 0.75) {
        temp_float_3 = 0.75;
    }
    temp_float_4 = temp_float_3 - ((int64_t*)register_r14)[0x16];
    if (0.001 <= ABS(temp_float_4)) {
        temp_float_3 = temp_float_4 * stack_float_1 + ((int64_t*)register_r14)[0x16];
    }
    ((int64_t*)register_r14)[0x16] = temp_float_3;
    
    // 边界检查和处理
    if ((float_xmm9 <= float_xmm6) || (((int64_t*)register_r14)[0x1854] <= float_xmm6)) {
        ((int64_t*)register_r14)[0xf] = 0.0;
    }
    else {
        temp_float_3 = float_xmm6;
        if (0 < (int)((int64_t*)register_r14)[0x18]) {
            float_ptr_1 = (float*)((int64_t)register_r14 + 0x1b);
            temp_ulong_1 = (uint64_t)(uint)((int64_t*)register_r14)[0x18];
            do {
                float_ptr_2 = (float*)((int64_t)float_ptr_1 + 0x495);
                temp_float_4 = *float_ptr_1;
                float_ptr_1 = (float*)((int64_t)float_ptr_1 + 0x4d6);
                temp_float_3 = temp_float_3 + *(float*)(**(int64_t**)float_ptr_2 + 0x188) * temp_float_4;
                temp_ulong_1 = temp_ulong_1 - 1;
            } while (temp_ulong_1 != 0);
        }
        stack_ptr_2 = (void*)0x180659e10;
        temp_float_3 = (float)fmodf(stack_float_1 / temp_float_3 + ((int64_t*)register_r14)[0xf]);
        ((int64_t*)register_r14)[0xf] = temp_float_3;
    }
    
    // 高级数据处理循环
    temp_float_4 = ((int64_t*)register_r14)[0x18];
    loop_counter = 0;
    temp_float_14 = float_xmm6;
    if (0 < (int)temp_float_4) {
        float_ptr_1 = (float*)((int64_t)register_r14 + 0x1b);
        do {
            stack_ptr_2 = (void*)0x180659e3d;
            temp_float_3 = (float)ui_system_calculate_weight_factor(temp_float_3, loop_counter);
            temp_float_3 = temp_float_3 * *float_ptr_1;
            loop_counter = loop_counter + 1;
            float_ptr_1 = (float*)((int64_t)float_ptr_1 + 0x4d6);
            temp_float_14 = temp_float_14 + temp_float_3;
        } while (loop_counter < (int)temp_float_4);
        temp_char_1 = *(char*)((int64_t)register_rbp + 0xa0);
    }
    
    // 最终渲染参数设置
    if (temp_float_3 < float_xmm8) {
        if (((int64_t*)register_r14)[0x1854] <= float_xmm8 && float_xmm8 != ((int64_t*)register_r14)[0x1854]) {
            temp_float_1 = temp_float_14 * temp_float_1 + ((int64_t*)register_r14)[0xe];
            ((int64_t*)register_r14)[0xe] = temp_float_1;
            if (float_xmm8 < temp_float_1) {
                ((int64_t*)register_r14)[0xe] = temp_float_1 - float_xmm8;
            }
        }
        else if ((int)temp_float_4 < 1) {
            ((int64_t*)register_r14)[0xe] = float_xmm6;
        }
        else {
            temp_float_1 = float_xmm8;
            if (*(char*)((int64_t)register_r14 + 0x17) != '\0') {
                temp_float_1 = -1.0;
            }
            temp_long_1 = *(int64_t*)((int64_t)register_r14 + (int64_t)(int)temp_float_4 * 0x4d6 + -0x26);
            stack_ptr_2 = (void*)0x180659ea7;
            temp_long_2 = ui_system_get_render_data(*(void**)((int64_t)temp_long_1 + 8));
            temp_long_3 = 0x14;
            if (float_xmm6 <= (stack_float_7 - ABS(stack_float_6)) * temp_float_1) {
                temp_long_3 = 0x18;
            }
            temp_float_1 = *(float*)((int64_t)temp_long_3 + temp_long_2);
            stack_ptr_2 = (void*)0x180659edd;
            ui_system_get_render_data(*(void**)((int64_t)temp_long_1 + 8));
            ((int64_t*)register_r14)[0xe] = temp_float_1;
        }
    }
    
    // 向量长度计算
    temp_float_3 = stack_float_3 * stack_float_3 + stack_float_2 * stack_float_2;
    temp_float_3 = (float)(temp_float_3 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_3;
    temp_array_1[0] = rsqrtss(ZEXT416((uint)temp_float_3), ZEXT416((uint)temp_float_3))._0_4_;
    temp_float_4 = temp_array_1[0];
    temp_float_1 = float_xmm8;
    if (stack_float_3 * temp_float_4 * 0.5 * (3.0 - temp_float_3 * temp_float_4 * temp_float_4) < -0.2) {
        temp_float_1 = float_xmm6;
    }
    ((int64_t*)register_r14)[0x13] = temp_float_1;
    
    // 坐标变换处理
    temp_float_3 = stack_float_6;
    temp_float_4 = stack_float_7;
    if ((stack_float_2 != float_xmm6) || (stack_float_3 != float_xmm6)) {
        if (float_xmm6 <= stack_float_7 * stack_float_2) {
            if (ABS(stack_float_7) < ABS(stack_float_2)) {
                temp_float_3 = stack_float_2;
            }
        }
        else {
            temp_float_3 = stack_float_7 + stack_float_2;
        }
        if (float_xmm6 <= stack_float_3 * stack_float_7) {
            if (ABS(stack_float_7) < ABS(stack_float_3)) {
                temp_float_4 = stack_float_3;
            }
        }
        else {
            temp_float_4 = stack_float_7 + stack_float_3;
        }
    }
    
    stack_ptr_2 = (void*)0x18065a04d;
    temp_float_3 = (float)atan2f(-temp_float_3, temp_float_4);
    temp_float_3 = ABS(temp_float_3);
    if (1.5707964 < temp_float_3) {
        temp_float_3 = 3.1415927 - temp_float_3;
    }
    temp_float_3 = temp_float_3 * 0.63661975;
    temp_float_5 = (float_xmm8 - *(float*)((int64_t)register_rbp + 0xc0)) * 0.3;
    temp_float_4 = float_xmm6;
    if ((temp_float_5 + 0.05 <= temp_float_3) && (temp_float_4 = temp_float_3, 0.95 - temp_float_5 < temp_float_3)) {
        temp_float_4 = float_xmm8;
    }
    
    // 平滑插值处理
    temp_float_5 = temp_float_4 - ((int64_t*)register_r14)[0x15];
    temp_float_12 = ABS(temp_float_5);
    temp_float_3 = temp_float_4;
    if (0.001 <= temp_float_12) {
        temp_float_2 = stack_float_1;
        if (temp_float_5 < float_xmm6) {
            temp_float_2 = -stack_float_1;
        }
        temp_float_5 = 0.1;
        if ((0.1 <= temp_float_12) && (temp_float_5 = temp_float_12, 0.5 <= temp_float_12)) {
            temp_float_5 = 0.5;
        }
        temp_float_5 = temp_float_2 * temp_float_5 * 12.0;
        if (ABS(temp_float_5) <= temp_float_12) {
            temp_float_3 = ((int64_t*)register_r14)[0x15] + temp_float_5;
        }
    }
    ((int64_t*)register_r14)[0x15] = temp_float_3;
    
    // 可见性检查
    if ((((stack_float_7 <= -0.1) || (temp_char_1 == '\0')) || (temp_char_1 != '\0')) || (stack_float_3 <= -0.1)) {
    VISIBILITY_CHECK_FAILED:
        if ((((int64_t*)register_r14)[0x11] <= float_xmm6) || (float_xmm8 <= ((int64_t*)register_r14)[0x11])) {
            ((int64_t*)register_r14)[0x11] = 0.0;
            ((int64_t*)register_r14)[0x12] = -1.0;
            goto FINAL_RENDER_SETUP;
        }
    }
    else {
        temp_float_3 = stack_float_7 * stack_float_7 + stack_float_7 * stack_float_7;
        temp_float_3 = temp_float_3 + temp_float_3;
        if (temp_float_3 <= float_xmm8) {
            temp_float_3 = float_xmm8;
        }
        if (-temp_float_3 <= stack_float_6 * stack_float_2) goto VISIBILITY_CHECK_FAILED;
    }
    
    // 渲染优先级计算
    temp_float_3 = ((int64_t*)register_r14)[0x11];
    if (temp_float_3 == float_xmm6) {
        *(bool*)((int64_t)register_r14 + 0x5d) = stack_float_2 < float_xmm6;
    }
    temp_float_3 = (*(float*)(*(int64_t*)
                             (*(int64_t*)((int64_t)register_r14 + (int64_t)(int)((int64_t*)register_r14)[0x18] * 0x4d6 + -0x26) +
                             8) + 0x188) /
                    *(float*)(*(int64_t*)
                               (*(int64_t*)((int64_t)register_r14 + (int64_t)(int)((int64_t*)register_r14)[0x18] * 0x4d6 + -0x26) +
                               0x38) + 0x188)) * temp_float_14 * stack_float_1 + temp_float_3;
    if (float_xmm8 <= temp_float_3) {
        temp_float_3 = float_xmm8;
    }
    ((int64_t*)register_r14)[0x11] = temp_float_3;
    
    // 渲染偏移计算
    if (((int64_t*)register_r14)[0x12] <= float_xmm6 && float_xmm6 != ((int64_t*)register_r14)[0x12]) {
        temp_float_14 = float_xmm8;
        if (*(char*)((int64_t)register_r14 + 0x5d) != '\0') {
            temp_float_14 = -1.0;
        }
        if (float_xmm6 <= temp_float_14 * stack_float_2) {
            temp_float_14 = temp_float_3;
            if (*(char*)((int64_t)register_r14 + 0x5d) == '\0') {
                stack_ptr_2 = (void*)0x18065a252;
                temp_float_14 = (float)fmodf(temp_float_3 + 0.5);
            }
            temp_float_14 = temp_float_14 - ((int64_t*)register_r14)[0xe];
            if (temp_float_14 <= 0.5) {
                if (temp_float_14 < -0.5) {
                    temp_float_14 = temp_float_14 + float_xmm8;
                }
            }
            else {
                temp_float_14 = temp_float_14 + -1.0;
            }
            temp_float_5 = temp_float_3 * temp_float_3 * temp_float_3 + stack_float_1;
            if (float_xmm8 <= temp_float_5) {
                temp_float_5 = float_xmm8;
            }
            temp_float_3 = temp_float_5 * temp_float_5 * temp_float_14 + ((int64_t*)register_r14)[0xe];
            ((int64_t*)register_r14)[0xe] = temp_float_3;
            if (float_xmm6 <= temp_float_3) {
                if (float_xmm8 <= temp_float_3) {
                    ((int64_t*)register_r14)[0xe] = temp_float_3 - float_xmm8;
                }
            }
            else {
                ((int64_t*)register_r14)[0xe] = temp_float_3 + float_xmm8;
            }
        }
        else {
            ((int64_t*)register_r14)[0x12] = temp_float_3 + 0.25;
        }
    }
    
FINAL_RENDER_SETUP:
    // 最终渲染矩阵设置
    temp_float_3 = ((int64_t*)register_r14)[0x14];
    stack_float_8 = (float_xmm8 - temp_float_3) * (float_xmm8 - temp_float_3);
    temp_float_5 = (float_xmm8 - temp_float_1) * stack_float_8;
    stack_float_9 = (float_xmm8 - temp_float_4) * temp_float_1 * stack_float_8;
    temp_float_14 = temp_float_1 * stack_float_8 * temp_float_4;
    temp_float_12 = temp_float_5 * temp_float_4;
    stack_float_8 = stack_float_8 * temp_float_4;
    stack_float_10 = temp_float_14 * stack_float_4;
    *(float*)((int64_t)register_rbp + -0x7c) = stack_float_8;
    *(float*)((int64_t)register_rbp + -0x78) = stack_float_8;
    *(float*)((int64_t)register_rbp + -0x74) = (float_xmm8 - temp_float_3) * temp_float_3;
    temp_float_1 = (float_xmm8 - stack_float_4) * temp_float_12;
    stack_float_5 = (float_xmm8 - stack_float_4) * temp_float_14;
    stack_ptr_1 = CONCAT44(stack_ptr_1._4_4_, temp_float_1);
    *(float*)((int64_t)register_rbp + -0x80) = temp_float_1;
    
    // 动画速度控制
    if ((stack_char_1 == '\0') || (float_xmm6 < stack_float_4)) {
        if (temp_float_3 <= float_xmm6) {
            temp_float_3 = 3.0;
        }
        else {
            temp_float_3 = 5.0;
        }
    }
    else {
        temp_float_3 = 2.0;
    }
    
    // 平滑过渡处理
    temp_float_2 = ((int64_t*)register_r14)[0x184a];
    if (temp_float_3 <= temp_float_2) {
        temp_float_2 = temp_float_2 - temp_float_3 * stack_float_1;
        if (temp_float_2 <= temp_float_3) {
            temp_float_2 = temp_float_3;
        }
    }
    else {
        temp_float_2 = temp_float_2 + temp_float_3 * stack_float_1;
        if (temp_float_3 <= temp_float_2) {
            temp_float_2 = temp_float_3;
        }
    }
    ((int64_t*)register_r14)[0x184a] = temp_float_2;
    ((int64_t*)register_r14)[0x1854] = temp_float_2;
    
    // 透明度计算
    temp_float_3 = ((int64_t*)register_r14)[0x11];
    if (0.2 <= temp_float_3) {
        temp_float_5 = float_xmm8;
        if (0.7 < temp_float_3) {
            temp_float_5 = (float_xmm8 - temp_float_3) * 3.333333;
        }
    }
    else {
        temp_float_5 = temp_float_3 * 5.0;
    }
    if (float_xmm6 < ((int64_t*)register_r14)[0x12]) {
        temp_float_3 = (((int64_t*)register_r14)[0x12] - temp_float_3) * 4.0;
        if (temp_float_3 <= float_xmm6) {
            temp_float_3 = float_xmm6;
        }
        temp_float_5 = temp_float_5 * temp_float_3;
    }
    
    // UI元素数据更新循环
    float_ptr_1 = (float*)((int64_t)register_r14 + 0x1855);
    loop_counter = 1;
    temp_float_3 = float_xmm6;
    do {
        temp_float_2 = *(float*)(((int64_t)large_float_array - (int64_t)register_r14) + (int64_t)float_ptr_1);
        temp_float_4 = temp_float_2 - float_ptr_1[-10];
        temp_float_6 = ABS(temp_float_4);
        if (0.001 <= temp_float_6) {
            temp_float_7 = float_xmm8;
            if (temp_float_4 < float_xmm6) {
                temp_float_7 = -1.0;
            }
            if (0.05 <= temp_float_6) {
                if (0.5 <= temp_float_6) {
                    temp_float_6 = 0.5;
                }
            }
            else {
                temp_float_6 = 0.05;
            }
            temp_float_6 = temp_float_6 * temp_float_7 * stack_float_1 * 6.0;
            if (temp_float_6 * temp_float_7 <= temp_float_7 * temp_float_4) {
                temp_float_2 = float_ptr_1[-10] + temp_float_6;
            }
        }
        float_ptr_1[-10] = temp_float_2;
        *float_ptr_1 = temp_float_2;
        if (2 < loop_counter) {
            if (loop_counter < 7) {
                temp_float_4 = float_xmm8 - temp_float_5;
            }
            else {
                temp_float_4 = float_xmm6;
                if (loop_counter == 7) {
                    if (*(char*)((int64_t)register_r14 + 0x5d) == '\0') {
                    USE_FADE_VALUE:
                        temp_float_4 = temp_float_5;
                    }
                }
                else {
                    if (loop_counter != 8) goto SKIP_FADE_PROCESSING;
                    if (*(char*)((int64_t)register_r14 + 0x5d) != '\0') goto USE_FADE_VALUE;
                }
            }
            temp_float_2 = temp_float_4 * temp_float_2;
            *float_ptr_1 = temp_float_2;
        }
    SKIP_FADE_PROCESSING:
        temp_float_4 = *(float*)((int64_t)large_float_array + (4 - (int64_t)register_r14) + (int64_t)float_ptr_1);
        temp_float_6 = temp_float_4 - float_ptr_1[-9];
        temp_float_7 = ABS(temp_float_6);
        if (0.001 <= temp_float_7) {
            temp_float_8 = float_xmm8;
            if (temp_float_6 < float_xmm6) {
                temp_float_8 = -1.0;
            }
            if (0.05 <= temp_float_7) {
                if (0.5 <= temp_float_7) {
                    temp_float_7 = 0.5;
                }
            }
            else {
                temp_float_7 = 0.05;
            }
            temp_float_7 = temp_float_7 * temp_float_8 * stack_float_1 * 6.0;
            if (temp_float_7 * temp_float_8 <= temp_float_8 * temp_float_6) {
                temp_float_4 = float_ptr_1[-9] + temp_float_7;
            }
        }
        temp_int_1 = loop_counter + 1;
        float_ptr_1[-9] = temp_float_4;
        float_ptr_1[1] = temp_float_4;
        if (2 < temp_int_1) {
            if (temp_int_1 < 7) {
                temp_float_6 = float_xmm8 - temp_float_5;
            }
            else {
                temp_float_6 = float_xmm6;
                if (temp_int_1 == 7) {
                    if (*(char*)((int64_t)register_r14 + 0x5d) == '\0') {
                    USE_FADE_VALUE_2:
                        temp_float_6 = temp_float_5;
                    }
                }
                else {
                    if (temp_int_1 != 8) goto SKIP_FADE_PROCESSING_2;
                    if (*(char*)((int64_t)register_r14 + 0x5d) != '\0') goto USE_FADE_VALUE_2;
                }
            }
            temp_float_4 = temp_float_6 * temp_float_4;
            float_ptr_1[1] = temp_float_4;
        }
    SKIP_FADE_PROCESSING_2:
        temp_float_6 = *(float*)((int64_t)large_float_array + (8 - (int64_t)register_r14) + (int64_t)float_ptr_1);
        temp_float_7 = temp_float_6 - float_ptr_1[-8];
        temp_float_8 = ABS(temp_float_7);
        if (0.001 <= temp_float_8) {
            temp_float_9 = float_xmm8;
            if (temp_float_7 < float_xmm6) {
                temp_float_9 = -1.0;
            }
            if (0.05 <= temp_float_8) {
                if (0.5 <= temp_float_8) {
                    temp_float_8 = 0.5;
                }
            }
            else {
                temp_float_8 = 0.05;
            }
            temp_float_8 = temp_float_8 * temp_float_9 * stack_float_1 * 6.0;
            if (temp_float_8 * temp_float_9 <= temp_float_9 * temp_float_7) {
                temp_float_6 = float_ptr_1[-8] + temp_float_8;
            }
        }
        temp_int_1 = loop_counter + 2;
        float_ptr_1[-8] = temp_float_6;
        float_ptr_1[2] = temp_float_6;
        if (2 < temp_int_1) {
            if (temp_int_1 < 7) {
                temp_float_7 = float_xmm8 - temp_float_5;
            }
            else {
                temp_float_7 = float_xmm6;
                if (temp_int_1 == 7) {
                    if (*(char*)((int64_t)register_r14 + 0x5d) == '\0') {
                    USE_FADE_VALUE_3:
                        temp_float_7 = temp_float_5;
                    }
                }
                else {
                    if (temp_int_1 != 8) goto SKIP_FADE_PROCESSING_3;
                    if (*(char*)((int64_t)register_r14 + 0x5d) != '\0') goto USE_FADE_VALUE_3;
                }
            }
            temp_float_6 = temp_float_7 * temp_float_6;
            float_ptr_1[2] = temp_float_6;
        }
    SKIP_FADE_PROCESSING_3:
        loop_counter = loop_counter + 3;
        temp_float_3 = temp_float_3 + temp_float_2 + temp_float_4 + temp_float_6;
        float_ptr_1 = (float*)((int64_t)float_ptr_1 + 3);
        if (9 < loop_counter) {
            temp_float_5 = ((int64_t*)register_r14)[0x1854];
            temp_float_5 = float_xmm8 - ((temp_float_5 * 6.0 - 15.0) * temp_float_5 + 10.0) * temp_float_5 * temp_float_5 * temp_float_5;
            if (temp_float_3 != temp_float_5) {
                if (temp_float_3 <= float_xmm6) {
                    ((int64_t*)register_r14)[0x1854] = 1.0;
                }
                else {
                    temp_float_5 = temp_float_5 / temp_float_3;
                    ((int64_t*)register_r14)[0x1855] = ((int64_t*)register_r14)[0x1855] * temp_float_5;
                    ((int64_t*)register_r14)[0x1856] = ((int64_t*)register_r14)[0x1856] * temp_float_5;
                    ((int64_t*)register_r14)[0x1857] = ((int64_t*)register_r14)[0x1857] * temp_float_5;
                    ((int64_t*)register_r14)[0x1858] = ((int64_t*)register_r14)[0x1858] * temp_float_5;
                    ((int64_t*)register_r14)[0x1859] = ((int64_t*)register_r14)[0x1859] * temp_float_5;
                    ((int64_t*)register_r14)[0x185a] = ((int64_t*)register_r14)[0x185a] * temp_float_5;
                    ((int64_t*)register_r14)[0x185b] = ((int64_t*)register_r14)[0x185b] * temp_float_5;
                    ((int64_t*)register_r14)[0x185c] = ((int64_t*)register_r14)[0x185c] * temp_float_5;
                    ((int64_t*)register_r14)[0x185d] = temp_float_5 * ((int64_t*)register_r14)[0x185d];
                }
            }
            
            // 最终渲染矩阵计算
            temp_float_5 = stack_float_9 - (float_xmm8 - temp_float_4) * temp_float_5;
            temp_float_4 = (((temp_float_12 + temp_float_14) * stack_float_4 + stack_float_8) - stack_float_5) - temp_float_1 - stack_float_8;
            temp_float_3 = temp_float_5 * temp_float_5 + temp_float_4 * temp_float_4;
            temp_float_3 = (float)(temp_float_3 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_3;
            temp_array_1[0] = rsqrtss(ZEXT416((uint)temp_float_3), ZEXT416((uint)temp_float_3))._0_4_;
            temp_float_1 = temp_array_1[0];
            temp_float_3 = temp_float_1 * 0.5 * (3.0 - temp_float_3 * temp_float_1 * temp_float_1);
            temp_float_5 = temp_float_3 * temp_float_5;
            temp_float_3 = temp_float_3 * temp_float_4;
            _stack_float_2 = CONCAT44(temp_float_5, temp_float_3);
            if (ABS(temp_float_3 * ((int64_t*)register_r14)[0x185e] + temp_float_5 * ((int64_t*)register_r14)[0x185f]) <= 0.999) {
                temp_float_4 = ((int64_t*)register_r14)[0x1855] - ((int64_t*)register_r14)[0x1856];
                temp_float_14 = ((((int64_t*)register_r14)[0x1858] + ((int64_t*)register_r14)[0x1857] + ((int64_t*)register_r14)[0x185b]) - ((int64_t*)register_r14)[0x1859]) - ((int64_t*)register_r14)[0x185a]) - ((int64_t*)register_r14)[0x185c];
                temp_float_3 = temp_float_4 * temp_float_4 + temp_float_14 * temp_float_14;
                temp_float_3 = (float)(temp_float_3 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_3;
                temp_array_1[0] = rsqrtss(ZEXT416((uint)temp_float_3), ZEXT416((uint)temp_float_3))._0_4_;
                temp_float_1 = temp_array_1[0];
                temp_float_5 = stack_float_1 * 8.0;
                temp_float_3 = temp_float_1 * 0.5 * (3.0 - temp_float_3 * temp_float_1 * temp_float_1);
                _stack_float_2 = CONCAT44(temp_float_3 * temp_float_4 * temp_float_5 + (float_xmm8 - temp_float_5) * ((int64_t*)register_r14)[0x185f],
                                        temp_float_3 * temp_float_14 * temp_float_5 + (float_xmm8 - temp_float_5) * ((int64_t*)register_r14)[0x185e]);
                *(void**)((int64_t)register_r14 + 0x185e) = _stack_float_2;
                temp_float_3 = ((int64_t*)register_r14)[0x185f];
                temp_float_1 = ((int64_t*)register_r14)[0x185e];
                temp_float_5 = temp_float_1 * temp_float_1 + temp_float_3 * temp_float_3;
                temp_array_1[0] = rsqrtss(ZEXT416((uint)temp_float_5), ZEXT416((uint)temp_float_5))._0_4_;
                temp_float_4 = temp_array_1[0];
                temp_float_5 = temp_float_4 * 0.5 * (3.0 - temp_float_5 * temp_float_4 * temp_float_4);
                ((int64_t*)register_r14)[0x185f] = temp_float_5 * temp_float_3;
                ((int64_t*)register_r14)[0x185e] = temp_float_5 * temp_float_1;
            }
            else {
                *(void**)((int64_t)register_r14 + 0x185e) = _stack_float_2;
            }
            // WARNING: Subroutine does not return
            stack_ptr_2 = (void*)0x18065aa9f;
            stack_float_11 = stack_float_5;
            ui_system_final_render(*(uint64_t*)((int64_t)register_rbp + -0x70) ^ (uint64_t)&stack0x00000000);
        }
    } while( true );
}

// 函数别名定义
#define ui_system_advanced_data_processing_and_render_control FUN_1806596fe
#define ui_system_update_element_state FUN_18065ee60
#define ui_system_internal_update FUN_18065cb80
#define ui_system_calculate_speed_factor FUN_18065c070
#define ui_system_calculate_weight_factor FUN_18065bf60
#define ui_system_get_render_data FUN_18065fd40
#define ui_system_final_render SystemSecurityChecker
#define memory_allocation_error_handler FUN_1808fd400