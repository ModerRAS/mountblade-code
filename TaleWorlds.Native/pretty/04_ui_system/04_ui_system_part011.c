#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part011.c - UI系统高级动画和变换处理模块
// 包含1个核心函数，主要处理UI元素的复杂动画变换、矩阵运算和高级渲染控制

// 函数别名定义
#define ui_advanced_animation_transform FUN_180659702

/**
 * UI系统高级动画和变换处理函数
 * 
 * 此函数处理复杂的UI元素动画变换，包括：
 * - 浮点数动画插值计算
 * - 矩阵变换和旋转处理
 * - 角度归一化和范围限制
 * - 动画参数优化和调整
 * - 复杂的数学运算和三角函数处理
 * 
 * @param param_1 动画参数1 (浮点数)
 * @param param_2 动画参数2 (浮点数) 
 * @param param_3 UI上下文数据指针 (longlong)
 * @param param_4 控制标志 (字符)
 * 
 * 处理流程：
 * 1. 初始化动画参数和寄存器状态
 * 2. 处理UI元素的浮点数动画插值
 * 3. 执行复杂的矩阵变换计算
 * 4. 进行角度归一化和范围限制
 * 5. 优化动画参数并调整变换结果
 * 6. 更新UI元素的最终状态
 */
void ui_advanced_animation_transform(float param_1, float param_2, longlong param_3, char param_4)
{
    char control_flag;
    bool condition_result;
    int loop_counter;
    undefined8 register_rax;
    longlong temp_long_1;
    float *float_ptr_1;
    longlong register_rcx;
    longlong temp_long_2;
    longlong temp_long_3;
    float *float_ptr_2;
    longlong register_rbp;
    int temp_int_1;
    undefined8 register_rsi;
    ulonglong ulong_temp;
    longlong register_r11;
    undefined8 register_r12;
    undefined8 register_r13;
    float *register_r14;
    char temp_char_1;
    undefined8 register_r15;
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
    undefined1 temp_array_1 [16];
    float temp_float_12;
    float temp_float_13;
    float register_xmm6;
    float register_xmm8;
    float register_xmm9;
    float temp_float_14;
    undefined4 register_xmm11_a;
    undefined4 register_xmm11_b;
    undefined4 register_xmm11_c;
    undefined4 register_xmm11_d;
    undefined4 register_xmm12_a;
    undefined4 register_xmm12_b;
    undefined4 register_xmm12_c;
    undefined4 register_xmm12_d;
    undefined4 register_xmm13_a;
    undefined4 register_xmm13_b;
    undefined4 register_xmm13_c;
    undefined4 register_xmm13_d;
    undefined4 register_xmm15_a;
    undefined4 register_xmm15_b;
    undefined4 register_xmm15_c;
    undefined4 register_xmm15_d;
    char stack_char_1;
    float stack_float_1;
    float stack_float_2;
    float stack_float_3;
    float stack_float_4;
    float stack_float_5;
    float stack_float_6;
    float stack_float_7;
    float stack_float_8;
    float stack_float_9;
    undefined8 stack_ulong_1;
    float stack_float_10;
    float stack_float_11;
    float stack_float_12;
    float stack_float_13;
    float animation_buffer [6200];
    undefined8 stack_return_address;
    
    // 保存寄存器状态到栈
    *(undefined8 *)(register_r11 + -0x20) = register_rsi;
    *(undefined8 *)(register_r11 + -0x28) = register_r12;
    *(undefined8 *)(register_r11 + -0x30) = register_r13;
    loop_counter = 0;
    *(undefined8 *)(register_r11 + -0x38) = register_r15;
    *(undefined4 *)(register_r11 + -0x98) = register_xmm11_a;
    *(undefined4 *)(register_r11 + -0x94) = register_xmm11_b;
    *(undefined4 *)(register_r11 + -0x90) = register_xmm11_c;
    *(undefined4 *)(register_r11 + -0x8c) = register_xmm11_d;
    *(undefined4 *)(register_r11 + -0xa8) = register_xmm12_a;
    *(undefined4 *)(register_r11 + -0xa4) = register_xmm12_b;
    *(undefined4 *)(register_r11 + -0xa0) = register_xmm12_c;
    *(undefined4 *)(register_r11 + -0x9c) = register_xmm12_d;
    *(undefined4 *)(register_r11 + -0xb8) = register_xmm13_a;
    *(undefined4 *)(register_r11 + -0xb4) = register_xmm13_b;
    *(undefined4 *)(register_r11 + -0xb0) = register_xmm13_c;
    *(undefined4 *)(register_r11 + -0xac) = register_xmm13_d;
    *(undefined4 *)(register_r11 + -0xd8) = register_xmm15_a;
    *(undefined4 *)(register_r11 + -0xd4) = register_xmm15_b;
    *(undefined4 *)(register_r11 + -0xd0) = register_xmm15_c;
    *(undefined4 *)(register_r11 + -0xcc) = register_xmm15_d;
    
    // 初始化栈变量
    stack_char_1 = param_4;
    stack_float_2 = param_2;
    stack_ulong_1 = register_rax;
    
    // 处理UI元素浮点数动画插值
    if (0 < *(int *)(register_rcx + 0x60)) {
        float_ptr_1 = (float *)(register_rcx + 0x6c);
        float_ptr_2 = float_ptr_1;
        temp_int_1 = loop_counter;
        do {
            temp_float_7 = float_ptr_2[1];
            temp_float_1 = *float_ptr_2;
            if (temp_float_7 <= temp_float_1) {
                temp_float_1 = temp_float_1 - param_2 * param_1;
                if (temp_float_1 <= temp_float_7) {
                    temp_float_1 = temp_float_7;
                }
            }
            else {
                temp_float_1 = param_2 * param_1 + temp_float_1;
                if (temp_float_7 <= temp_float_1) {
                    temp_float_1 = temp_float_7;
                }
            }
            *float_ptr_2 = temp_float_1;
            stack_return_address = 0x1806597d3;
            FUN_18065ee60(*(undefined8 *)(float_ptr_2 + 0x495), register_rcx + 0x6150);
            if ((*(char *)(float_ptr_2 + 0x4af) == '\0') && (*(char *)(float_ptr_2 + 0x4ce) != '\0')) {
                *(undefined1 *)(float_ptr_2 + 0x4af) = 1;
            }
            if ((*(char *)(float_ptr_2 + 0x4c8) == '\0') && (*(char *)(float_ptr_2 + 0x4d4) != '\0')) {
                *(undefined1 *)(float_ptr_2 + 0x4c8) = 1;
            }
            register_xmm9 = register_xmm9 + *float_ptr_2;
            float_ptr_2 = float_ptr_2 + 0x4d6;
            temp_int_1 = temp_int_1 + 1;
        } while (temp_int_1 < (int)register_r14[0x18]);
        
        // 归一化处理
        if (((register_xmm6 < register_xmm9) && (register_xmm9 != register_xmm8)) &&
           (0 < (int)register_r14[0x18])) {
            do {
                loop_counter = loop_counter + 1;
                *float_ptr_1 = (register_xmm8 / register_xmm9) * *float_ptr_1;
                float_ptr_1 = float_ptr_1 + 0x4d6;
            } while (loop_counter < (int)register_r14[0x18]);
        }
    }
    
    temp_char_1 = stack_char_1;
    stack_return_address = 0x18065986c;
    FUN_18065cb80();
    
    // 执行复杂的矩阵变换计算
    if (((register_xmm6 == register_r14[4]) && (register_xmm6 == register_r14[5])) &&
       (0.25 < register_r14[2] * register_r14[2] + register_r14[3] * register_r14[3])) {
        *(undefined8 *)(register_r14 + 4) = *(undefined8 *)(register_r14 + 2);
    }
    
    if (register_r14[8] != register_xmm6) {
        stack_return_address = 0x1806598e8;
        FUN_1808fd400(-register_r14[8]);
    }
    
    // 进行角度归一化和范围限制
    stack_float_3 = (float)((ulonglong)*(undefined8 *)(register_r14 + 4) >> 0x20);
    stack_float_2 = (float)*(undefined8 *)(register_r14 + 4);
    stack_float_7 = (float)((ulonglong)*(undefined8 *)(register_r14 + 2) >> 0x20);
    stack_float_6 = (float)*(undefined8 *)(register_r14 + 2);
    temp_float_7 = register_r14[0x185d];
    if (((register_r14[0x10] == register_xmm6) || (register_r14[0x10] == 0.5)) || (temp_float_7 <= register_xmm6))
    {
        condition_result = false;
    }
    else {
        condition_result = true;
    }
    
    stack_return_address = 0x1806599e0;
    temp_float_1 = (float)atan2f(*(uint *)(*(longlong *)(param_3 + 0x10) + 0x80) ^ 0x80000000,
                         *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x84));
    temp_float_1 = temp_float_1 + register_r14[6];
    register_r14[0xb] = temp_float_1;
    
    // 角度范围限制到[-π, π]
    if (temp_float_1 <= 3.1415927) {
        if (temp_float_1 < -3.1415927) {
            temp_float_1 = temp_float_1 + 6.2831855;
            goto ANGLE_NORMALIZED;
        }
    }
    else {
        temp_float_1 = temp_float_1 - 6.2831855;
    ANGLE_NORMALIZED:
        register_r14[0xb] = temp_float_1;
    }
    
    // 优化动画参数并调整变换结果
    temp_float_1 = register_r14[0x18];
    temp_long_2 = (longlong)(int)temp_float_1;
    if (0 < (int)temp_float_1) {
        temp_float_5 = register_xmm6;
        if (*(char *)(temp_long_2 * 0x1358 + 0x4e + (longlong)register_r14) != '\0') {
            temp_float_5 = register_r14[temp_long_2 * 0x4d6 + 0x12] * 0.05;
        }
        if ((temp_float_5 + register_r14[temp_long_2 * 0x4d6 + 0xe] < register_r14[temp_long_2 * 0x4d6 + 0x11]) ||
           (*(char *)(register_r14 + temp_long_2 * 0x4d6 + 0x13) != '\0')) {
            register_r14[0xc] = register_r14[0xb];
            temp_float_1 = register_r14[0x18];
        }
        temp_long_2 = (longlong)(int)temp_float_1;
        temp_float_5 = register_xmm6;
        if (*(char *)(temp_long_2 * 0x1358 + 0x66 + (longlong)register_r14) != '\0') {
            temp_float_5 = register_r14[temp_long_2 * 0x4d6 + 0x18] * 0.05;
        }
        if ((temp_float_5 + register_r14[temp_long_2 * 0x4d6 + 0x14] < register_r14[temp_long_2 * 0x4d6 + 0x17]) ||
           (*(char *)(register_r14 + temp_long_2 * 0x4d6 + 0x19) != '\0')) {
            register_r14[0xd] = register_r14[0xb];
            temp_float_1 = register_r14[0x18];
        }
    }
    
    // 更新UI元素的最终状态
    if ((((((int)temp_float_1 < 1) || (register_xmm6 != register_r14[2])) || (register_xmm6 != register_r14[3]))
        || (register_xmm6 == register_r14[6])) ||
       ((ABS(register_r14[0xb] - register_r14[0xc]) < 0.5 && (ABS(register_r14[0xb] - register_r14[0xd]) < 0.5))))
    {
        if (((condition_result) && ((register_xmm6 == register_r14[2] && (register_xmm6 == register_r14[3])))) ||
           ((register_r14[0x14] = 0.0, stack_float_4 = register_xmm6,
            register_xmm6 <= stack_float_2 &&
            (stack_float_4 = register_xmm8, stack_float_2 <= register_xmm6))))
            goto UPDATE_FINAL_STATE;
    }
    else {
        condition_result = true;
        register_r14[0x14] = 1.0;
    UPDATE_FINAL_STATE:
        if (((temp_char_1 == '\0') ||
            (stack_float_4 = register_xmm8,
            register_xmm8 < register_r14[0x1854] || register_xmm8 == register_r14[0x1854])) &&
           (stack_float_4 = register_xmm8, *(char *)(register_r14 + 0x17) != '\0')) {
            stack_float_4 = register_xmm6;
        }
    }
    
    // 最终状态更新和动画缓冲区处理
    if ((temp_float_7 <= register_xmm6) && (register_xmm6 < register_r14[0x14])) {
        temp_float_7 = register_r14[0xb] - register_r14[0xc];
        temp_float_1 = register_r14[0xb] - register_r14[0xd];
        if (ABS(temp_float_7) <= ABS(temp_float_1)) {
            temp_float_7 = temp_float_1;
        }
        if (temp_float_7 <= 3.1415927) {
            if (temp_float_7 < -3.1415927) {
                temp_float_7 = temp_float_7 + 6.2831855;
            }
        }
        else {
            temp_float_7 = temp_float_7 + -6.2831855;
        }
        temp_float_1 = register_xmm6;
        if (register_xmm6 < temp_float_7) {
            temp_float_1 = 0.5;
        }
        register_r14[0x10] = temp_float_1;
    }
    
    // 处理动画缓冲区和高级渲染控制
    if ((condition_result) && (0 < (int)register_r14[0x18])) {
        float_ptr_1 = register_r14 + 0x1b;
        ulong_temp = (ulonglong)(uint)register_r14[0x18];
        temp_float_7 = register_xmm6;
        do {
            float_ptr_2 = float_ptr_1 + 0x495;
            temp_float_1 = *float_ptr_1;
            float_ptr_1 = float_ptr_1 + 0x4d6;
            temp_float_7 = temp_float_7 + *(float *)(*(longlong *)(*(longlong *)float_ptr_2 + 0x48) + 0x188) * temp_float_1;
            ulong_temp = ulong_temp - 1;
        } while (ulong_temp != 0);
        temp_float_1 = register_r14[0x10];
        temp_float_7 = (stack_float_2 * register_r14[7]) / temp_float_7 + temp_float_1;
        register_r14[0x10] = temp_float_7;
        if (temp_float_7 <= register_xmm8) {
            if ((((temp_float_1 <= 0.5) && (0.5 < temp_float_7)) && (ABS(register_r14[0xb] - register_r14[0xc]) < 0.5)) &&
               (ABS(register_r14[0xb] - register_r14[0xd]) < 0.5)) {
                register_r14[0x10] = 0.5;
            }
        }
        else if ((0.5 <= ABS(register_r14[0xb] - register_r14[0xc])) ||
                (0.5 <= ABS(register_r14[0xb] - register_r14[0xd]))) {
            register_r14[0x10] = temp_float_7 - register_xmm8;
        }
        else {
            register_r14[0x10] = register_xmm6;
        }
    }
    
    temp_char_1 = *(char *)(register_rbp + 0xa0);
    temp_char_1 = *(char *)(register_rbp + 0xa8);
    if ((((temp_char_1 != '\0') || (temp_char_1 != '\0')) &&
        ((register_xmm6 != register_r14[2] || (register_xmm6 != register_r14[3])))) ||
       (((register_xmm6 != register_r14[4] || (register_xmm6 != register_r14[5])) ||
        (temp_float_7 = register_xmm8, register_xmm6 < register_r14[0x14])))) {
        temp_float_7 = register_xmm6;
    }
    
    // 继续处理动画缓冲区的复杂数学运算
    temp_float_8 = stack_float_2 + stack_float_2;
    temp_float_5 = *register_r14 - register_r14[1];
    temp_float_1 = temp_float_5;
    if ((temp_float_8 < ABS(temp_float_5)) && (temp_float_1 = temp_float_8, temp_float_5 < register_xmm6)) {
        temp_float_1 = -temp_float_8;
    }
    register_r14[1] = register_r14[1] + temp_float_1;
    stack_return_address = 0x180659d72;
    temp_float_5 = (float)FUN_18065c070(ABS(temp_float_5), param_3, stack_ulong_1);
    temp_float_1 = stack_float_2;
    if (temp_float_5 <= 0.75) {
        temp_float_5 = 0.75;
    }
    temp_float_8 = temp_float_5 - register_r14[0x16];
    if (0.001 <= ABS(temp_float_8)) {
        temp_float_5 = temp_float_8 * stack_float_2 + register_r14[0x16];
    }
    register_r14[0x16] = temp_float_5;
    
    // 最终的动画状态更新和渲染控制
    if ((register_xmm9 <= register_xmm6) || (register_r14[0x1854] <= register_xmm6)) {
        register_r14[0xf] = 0.0;
    }
    else {
        temp_float_5 = register_xmm6;
        if (0 < (int)register_r14[0x18]) {
            float_ptr_1 = register_r14 + 0x1b;
            ulong_temp = (ulonglong)(uint)register_r14[0x18];
            do {
                float_ptr_2 = float_ptr_1 + 0x495;
                temp_float_8 = *float_ptr_1;
                float_ptr_1 = float_ptr_1 + 0x4d6;
                temp_float_5 = temp_float_5 + *(float *)(**(longlong **)float_ptr_2 + 0x188) * temp_float_8;
                ulong_temp = ulong_temp - 1;
            } while (ulong_temp != 0);
        }
        stack_return_address = 0x180659e10;
        temp_float_5 = (float)fmodf(stack_float_2 / temp_float_5 + register_r14[0xf]);
        register_r14[0xf] = temp_float_5;
    }
    
    // 处理动画缓冲区数组和最终渲染状态
    temp_float_8 = register_r14[0x18];
    loop_counter = 0;
    temp_float_14 = register_xmm6;
    if (0 < (int)temp_float_8) {
        float_ptr_1 = register_r14 + 0x1b;
        do {
            stack_return_address = 0x180659e3d;
            temp_float_5 = (float)FUN_18065bf60(temp_float_5, loop_counter);
            temp_float_5 = temp_float_5 * *float_ptr_1;
            loop_counter = loop_counter + 1;
            float_ptr_1 = float_ptr_1 + 0x4d6;
            temp_float_14 = temp_float_14 + temp_float_5;
        } while (loop_counter < (int)temp_float_8);
        temp_char_1 = *(char *)(register_rbp + 0xa0);
    }
    
    if (temp_float_7 < register_xmm8) {
        if (register_r14[0x1854] <= register_xmm8 && register_xmm8 != register_r14[0x1854]) {
            temp_float_1 = temp_float_14 * temp_float_1 + register_r14[0xe];
            register_r14[0xe] = temp_float_1;
            if (register_xmm8 < temp_float_1) {
                register_r14[0xe] = temp_float_1 - register_xmm8;
            }
        }
        else if ((int)temp_float_8 < 1) {
            register_r14[0xe] = register_xmm6;
        }
        else {
            temp_float_1 = register_xmm8;
            if (*(char *)(register_r14 + 0x17) != '\0') {
                temp_float_1 = -1.0;
            }
            temp_long_2 = *(longlong *)(register_r14 + (longlong)(int)temp_float_8 * 0x4d6 + -0x26);
            stack_return_address = 0x180659ea7;
            temp_long_1 = FUN_18065fd40(*(undefined8 *)(temp_long_2 + 8));
            temp_long_3 = 0x14;
            if (register_xmm6 <= (stack_float_7 - ABS(stack_float_6)) * temp_float_1) {
                temp_long_3 = 0x18;
            }
            temp_float_1 = *(float *)(temp_long_3 + temp_long_1);
            stack_return_address = 0x180659edd;
            FUN_18065fd40(*(undefined8 *)(temp_long_2 + 8));
            register_r14[0xe] = temp_float_1;
        }
    }
    
    // 最终的数学运算和渲染参数计算
    temp_float_5 = stack_float_3 * stack_float_3 +
           stack_float_2 * stack_float_2;
    temp_float_5 = (float)(temp_float_5 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_5;
    temp_array_1 = rsqrtss(ZEXT416((uint)temp_float_5), ZEXT416((uint)temp_float_5));
    temp_float_8 = temp_array_1._0_4_;
    temp_float_1 = register_xmm8;
    if (stack_float_3 * temp_float_8 * 0.5 * (3.0 - temp_float_5 * temp_float_8 * temp_float_8) < -0.2) {
        temp_float_1 = register_xmm6;
    }
    register_r14[0x13] = temp_float_1;
    
    temp_float_5 = stack_float_6;
    temp_float_8 = stack_float_7;
    if ((stack_float_2 != register_xmm6) || (stack_float_3 != register_xmm6)) {
        if (register_xmm6 <= stack_float_6 * stack_float_2) {
            if (ABS(stack_float_6) < ABS(stack_float_2)) {
                temp_float_5 = stack_float_2;
            }
        }
        else {
            temp_float_5 = stack_float_6 + stack_float_2;
        }
        if (register_xmm6 <= stack_float_3 * stack_float_7) {
            if (ABS(stack_float_7) < ABS(stack_float_3)) {
                temp_float_8 = stack_float_3;
            }
        }
        else {
            temp_float_8 = stack_float_7 + stack_float_3;
        }
    }
    
    // 最终的角度计算和变换处理
    stack_return_address = 0x18065a04d;
    temp_float_5 = (float)atan2f(-temp_float_5, temp_float_8);
    temp_float_5 = ABS(temp_float_5);
    if (1.5707964 < temp_float_5) {
        temp_float_5 = 3.1415927 - temp_float_5;
    }
    temp_float_5 = temp_float_5 * 0.63661975;
    temp_float_6 = (register_xmm8 - *(float *)(register_rbp + 0xc0)) * 0.3;
    temp_float_8 = register_xmm6;
    if ((temp_float_6 + 0.05 <= temp_float_5) && (temp_float_8 = temp_float_5, 0.95 - temp_float_6 < temp_float_5)) {
        temp_float_8 = register_xmm8;
    }
    
    // 最终的动画参数更新和状态同步
    temp_float_6 = temp_float_8 - register_r14[0x15];
    temp_float_12 = ABS(temp_float_6);
    temp_float_5 = temp_float_8;
    if (0.001 <= temp_float_12) {
        temp_float_2 = stack_float_2;
        if (temp_float_6 < register_xmm6) {
            temp_float_2 = -stack_float_2;
        }
        temp_float_6 = 0.1;
        if ((0.1 <= temp_float_12) && (temp_float_6 = temp_float_12, 0.5 <= temp_float_12)) {
            temp_float_6 = 0.5;
        }
        temp_float_6 = temp_float_2 * temp_float_6 * 12.0;
        if (ABS(temp_float_6) <= temp_float_12) {
            temp_float_5 = register_r14[0x15] + temp_float_6;
        }
    }
    register_r14[0x15] = temp_float_5;
    
    // 处理最终的UI元素状态和渲染控制
    if ((((stack_float_7 <= -0.1) || (temp_char_1 == '\0')) || (temp_char_1 != '\0')) ||
       (stack_float_3 <= -0.1)) {
    FINAL_STATE_UPDATE:
        if ((register_r14[0x11] <= register_xmm6) || (register_xmm8 <= register_r14[0x11])) {
            register_r14[0x11] = 0.0;
            register_r14[0x12] = -1.0;
            goto FINAL_RENDER_STATE;
        }
    }
    else {
        temp_float_5 = stack_float_7 * stack_float_7 +
                 stack_float_7 * stack_float_7;
        temp_float_5 = temp_float_5 + temp_float_5;
        if (temp_float_5 <= register_xmm8) {
            temp_float_5 = register_xmm8;
        }
        if (-temp_float_5 <= stack_float_6 * stack_float_2) goto FINAL_STATE_UPDATE;
    }
    
    // 最终的渲染状态更新和动画同步
    temp_float_5 = register_r14[0x11];
    if (temp_float_5 == register_xmm6) {
        *(bool *)((longlong)register_r14 + 0x5d) = stack_float_2 < register_xmm6;
    }
    temp_float_5 = (*(float *)(*(longlong *)
                       (*(longlong *)(register_r14 + (longlong)(int)register_r14[0x18] * 0x4d6 + -0x26) +
                       8) + 0x188) /
              *(float *)(*(longlong *)
                          (*(longlong *)(register_r14 + (longlong)(int)register_r14[0x18] * 0x4d6 + -0x26) +
                          0x38) + 0x188)) * temp_float_14 * stack_float_2 + temp_float_5;
    if (register_xmm8 <= temp_float_5) {
        temp_float_5 = register_xmm8;
    }
    register_r14[0x11] = temp_float_5;
    
    if (register_r14[0x12] <= register_xmm6 && register_xmm6 != register_r14[0x12]) {
        temp_float_14 = register_xmm8;
        if (*(char *)((longlong)register_r14 + 0x5d) != '\0') {
            temp_float_14 = -1.0;
        }
        if (register_xmm6 <= temp_float_14 * stack_float_2) {
            temp_float_14 = temp_float_5;
            if (*(char *)((longlong)register_r14 + 0x5d) == '\0') {
                stack_return_address = 0x18065a252;
                temp_float_14 = (float)fmodf(temp_float_5 + 0.5);
            }
            temp_float_14 = temp_float_14 - register_r14[0xe];
            if (temp_float_14 <= 0.5) {
                if (temp_float_14 < -0.5) {
                    temp_float_14 = temp_float_14 + register_xmm8;
                }
            }
            else {
                temp_float_14 = temp_float_14 + -1.0;
            }
            temp_float_6 = temp_float_5 * temp_float_5 * temp_float_5 + stack_float_2;
            if (register_xmm8 <= temp_float_6) {
                temp_float_6 = register_xmm8;
            }
            temp_float_5 = temp_float_6 * temp_float_5 * temp_float_14 + register_r14[0xe];
            register_r14[0xe] = temp_float_5;
            if (register_xmm6 <= temp_float_5) {
                if (register_xmm8 <= temp_float_5) {
                    register_r14[0xe] = temp_float_5 - register_xmm8;
                }
            }
            else {
                register_r14[0xe] = temp_float_5 + register_xmm8;
            }
        }
        else {
            register_r14[0x12] = temp_float_5 + 0.25;
        }
    }
    
FINAL_RENDER_STATE:
    // 最终的矩阵变换和渲染参数计算
    temp_float_5 = register_r14[0x14];
    stack_float_9 = (register_xmm8 - temp_float_5) * (register_xmm8 - temp_float_7);
    temp_float_6 = (register_xmm8 - temp_float_1) * stack_float_9;
    stack_float_10 = (register_xmm8 - temp_float_8) * temp_float_1 * stack_float_9;
    temp_float_14 = temp_float_1 * stack_float_9 * temp_float_8;
    temp_float_12 = temp_float_6 * temp_float_8;
    stack_float_9 = stack_float_9 * temp_float_8;
    stack_float_11 = temp_float_14 * stack_float_4;
    *(float *)(register_rbp + -0x7c) = stack_float_9;
    *(float *)(register_rbp + -0x78) = stack_float_9;
    *(float *)(register_rbp + -0x74) = (register_xmm8 - temp_float_7) * temp_float_5;
    temp_float_1 = (register_xmm8 - stack_float_4) * temp_float_12;
    stack_float_8 = (register_xmm8 - stack_float_4) * temp_float_14;
    stack_ulong_1 = CONCAT44(stack_ulong_1._4_4_, temp_float_1);
    *(float *)(register_rbp + -0x80) = temp_float_1;
    
    // 最终的动画参数优化和状态更新
    if ((stack_char_1 == '\0') || (register_xmm6 < stack_float_4)) {
        if (temp_float_5 <= register_xmm6) {
            temp_float_5 = 3.0;
        }
        else {
            temp_float_5 = 5.0;
        }
    }
    else {
        temp_float_5 = 2.0;
    }
    
    temp_float_2 = register_r14[0x184a];
    if (temp_float_7 <= temp_float_2) {
        temp_float_2 = temp_float_2 - temp_float_5 * stack_float_2;
        if (temp_float_2 <= temp_float_7) {
            temp_float_2 = temp_float_7;
        }
    }
    else {
        temp_float_2 = temp_float_2 + temp_float_5 * stack_float_2;
        if (temp_float_7 <= temp_float_2) {
            temp_float_2 = temp_float_7;
        }
    }
    register_r14[0x184a] = temp_float_2;
    register_r14[0x1854] = temp_float_2;
    
    // 最终的UI动画控制和渲染同步
    temp_float_7 = register_r14[0x11];
    if (0.2 <= temp_float_7) {
        temp_float_5 = register_xmm8;
        if (0.7 < temp_float_7) {
            temp_float_5 = (register_xmm8 - temp_float_7) * 3.333333;
        }
    }
    else {
        temp_float_5 = temp_float_7 * 5.0;
    }
    if (register_xmm6 < register_r14[0x12]) {
        temp_float_7 = (register_r14[0x12] - temp_float_7) * 4.0;
        if (temp_float_7 <= register_xmm6) {
            temp_float_7 = register_xmm6;
        }
        temp_float_5 = temp_float_5 * temp_float_7;
    }
    
    // 处理动画缓冲区的最终更新
    float_ptr_1 = register_r14 + 0x1855;
    loop_counter = 1;
    temp_float_7 = register_xmm6;
    do {
        temp_float_2 = *(float *)(((longlong)animation_buffer - (longlong)register_r14) + (longlong)float_ptr_1);
        temp_float_3 = temp_float_2 - float_ptr_1[-10];
        temp_float_9 = ABS(temp_float_3);
        if (0.001 <= temp_float_9) {
            temp_float_10 = register_xmm8;
            if (temp_float_3 < register_xmm6) {
                temp_float_10 = -1.0;
            }
            if (0.05 <= temp_float_9) {
                if (0.5 <= temp_float_9) {
                    temp_float_9 = 0.5;
                }
            }
            else {
                temp_float_9 = 0.05;
            }
            temp_float_9 = temp_float_9 * temp_float_10 * stack_float_2 * 6.0;
            if (temp_float_9 * temp_float_10 <= temp_float_10 * temp_float_3) {
                temp_float_2 = float_ptr_1[-10] + temp_float_9;
            }
        }
        float_ptr_1[-10] = temp_float_2;
        *float_ptr_1 = temp_float_2;
        if (2 < loop_counter) {
            if (loop_counter < 7) {
                temp_float_3 = register_xmm8 - temp_float_5;
            }
            else {
                temp_float_3 = register_xmm6;
                if (loop_counter == 7) {
                    if (*(char *)((longlong)register_r14 + 0x5d) == '\0') {
                    ANIMATION_CONTROL_1:
                        temp_float_3 = temp_float_5;
                    }
                }
                else {
                    if (loop_counter != 8) goto ANIMATION_CONTROL_2;
                    if (*(char *)((longlong)register_r14 + 0x5d) != '\0') goto ANIMATION_CONTROL_1;
                }
            }
            temp_float_2 = temp_float_3 * temp_float_2;
            *float_ptr_1 = temp_float_2;
        }
    ANIMATION_CONTROL_2:
        temp_float_3 = *(float *)((longlong)animation_buffer + (4 - (longlong)register_r14) + (longlong)float_ptr_1);
        temp_float_9 = temp_float_3 - float_ptr_1[-9];
        temp_float_10 = ABS(temp_float_9);
        if (0.001 <= temp_float_10) {
            temp_float_11 = register_xmm8;
            if (temp_float_9 < register_xmm6) {
                temp_float_11 = -1.0;
            }
            if (0.05 <= temp_float_10) {
                if (0.5 <= temp_float_10) {
                    temp_float_10 = 0.5;
                }
            }
            else {
                temp_float_10 = 0.05;
            }
            temp_float_10 = temp_float_10 * temp_float_11 * stack_float_2 * 6.0;
            if (temp_float_10 * temp_float_11 <= temp_float_11 * temp_float_9) {
                temp_float_3 = float_ptr_1[-9] + temp_float_10;
            }
        }
        temp_int_1 = loop_counter + 1;
        float_ptr_1[-9] = temp_float_3;
        float_ptr_1[1] = temp_float_3;
        if (2 < temp_int_1) {
            if (temp_int_1 < 7) {
                temp_float_9 = register_xmm8 - temp_float_5;
            }
            else {
                temp_float_9 = register_xmm6;
                if (temp_int_1 == 7) {
                    if (*(char *)((longlong)register_r14 + 0x5d) == '\0') {
                    ANIMATION_CONTROL_3:
                        temp_float_9 = temp_float_5;
                    }
                }
                else {
                    if (temp_int_1 != 8) goto ANIMATION_CONTROL_4;
                    if (*(char *)((longlong)register_r14 + 0x5d) != '\0') goto ANIMATION_CONTROL_3;
                }
            }
            temp_float_3 = temp_float_9 * temp_float_3;
            float_ptr_1[1] = temp_float_3;
        }
    ANIMATION_CONTROL_4:
        temp_float_9 = *(float *)((longlong)animation_buffer + (8 - (longlong)register_r14) + (longlong)float_ptr_1);
        temp_float_10 = temp_float_9 - float_ptr_1[-8];
        temp_float_11 = ABS(temp_float_10);
        if (0.001 <= temp_float_11) {
            temp_float_13 = register_xmm8;
            if (temp_float_10 < register_xmm6) {
                temp_float_13 = -1.0;
            }
            if (0.05 <= temp_float_11) {
                if (0.5 <= temp_float_11) {
                    temp_float_11 = 0.5;
                }
            }
            else {
                temp_float_11 = 0.05;
            }
            temp_float_11 = temp_float_11 * temp_float_13 * stack_float_2 * 6.0;
            if (temp_float_11 * temp_float_13 <= temp_float_13 * temp_float_10) {
                temp_float_9 = float_ptr_1[-8] + temp_float_11;
            }
        }
        temp_int_1 = loop_counter + 2;
        float_ptr_1[-8] = temp_float_9;
        float_ptr_1[2] = temp_float_9;
        if (2 < temp_int_1) {
            if (temp_int_1 < 7) {
                temp_float_10 = register_xmm8 - temp_float_5;
            }
            else {
                temp_float_10 = register_xmm6;
                if (temp_int_1 == 7) {
                    if (*(char *)((longlong)register_r14 + 0x5d) == '\0') {
                    ANIMATION_CONTROL_5:
                        temp_float_10 = temp_float_5;
                    }
                }
                else {
                    if (temp_int_1 != 8) goto ANIMATION_CONTROL_6;
                    if (*(char *)((longlong)register_r14 + 0x5d) != '\0') goto ANIMATION_CONTROL_5;
                }
            }
            temp_float_9 = temp_float_10 * temp_float_9;
            float_ptr_1[2] = temp_float_9;
        }
    ANIMATION_CONTROL_6:
        loop_counter = loop_counter + 3;
        temp_float_7 = temp_float_7 + temp_float_2 + temp_float_3 + temp_float_9;
        float_ptr_1 = float_ptr_1 + 3;
        if (9 < loop_counter) {
            temp_float_5 = register_r14[0x1854];
            temp_float_5 = register_xmm8 - ((temp_float_5 * 6.0 - 15.0) * temp_float_5 + 10.0) * temp_float_5 * temp_float_5 * temp_float_5;
            if (temp_float_7 != temp_float_5) {
                if (temp_float_7 <= register_xmm6) {
                    register_r14[0x1854] = 1.0;
                }
                else {
                    temp_float_5 = temp_float_5 / temp_float_7;
                    register_r14[0x1855] = register_r14[0x1855] * temp_float_5;
                    register_r14[0x1856] = register_r14[0x1856] * temp_float_5;
                    register_r14[0x1857] = register_r14[0x1857] * temp_float_5;
                    register_r14[0x1858] = register_r14[0x1858] * temp_float_5;
                    register_r14[0x1859] = register_r14[0x1859] * temp_float_5;
                    register_r14[0x185a] = register_r14[0x185a] * temp_float_5;
                    register_r14[0x185b] = register_r14[0x185b] * temp_float_5;
                    register_r14[0x185c] = register_r14[0x185c] * temp_float_5;
                    register_r14[0x185d] = temp_float_5 * register_r14[0x185d];
                }
            }
            temp_float_5 = stack_float_10 - (register_xmm8 - temp_float_8) * temp_float_6;
            temp_float_8 = ((((temp_float_12 + temp_float_14) * stack_float_4 + stack_float_9) -
                      stack_float_8) - temp_float_1) - stack_float_9;
            temp_float_7 = temp_float_5 * temp_float_5 + temp_float_8 * temp_float_8;
            temp_float_7 = (float)(temp_float_7 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_7;
            temp_array_1 = rsqrtss(ZEXT416((uint)temp_float_7), ZEXT416((uint)temp_float_7));
            temp_float_1 = temp_array_1._0_4_;
            temp_float_7 = temp_float_1 * 0.5 * (3.0 - temp_float_7 * temp_float_1 * temp_float_1);
            temp_float_5 = temp_float_7 * temp_float_5;
            temp_float_7 = temp_float_7 * temp_float_8;
            _stack_float_2 = CONCAT44(temp_float_5, temp_float_7);
            if (ABS(temp_float_7 * register_r14[0x185e] + temp_float_5 * register_r14[0x185f]) <= 0.999) {
                temp_float_8 = register_r14[0x1855] - register_r14[0x1856];
                temp_float_14 = (((register_r14[0x1858] + register_r14[0x1857] + register_r14[0x185b]) - register_r14[0x1859])
                         - register_r14[0x185a]) - register_r14[0x185c];
                temp_float_7 = temp_float_8 * temp_float_8 + temp_float_14 * temp_float_14;
                temp_float_7 = (float)(temp_float_7 <= 1.1754944e-38) * 1.1754944e-38 + temp_float_7;
                temp_array_1 = rsqrtss(ZEXT416((uint)temp_float_7), ZEXT416((uint)temp_float_7));
                temp_float_1 = temp_array_1._0_4_;
                temp_float_5 = stack_float_2 * 8.0;
                temp_float_7 = temp_float_1 * 0.5 * (3.0 - temp_float_7 * temp_float_1 * temp_float_1);
                _stack_float_2 =
                     CONCAT44(temp_float_7 * temp_float_8 * temp_float_5 + (register_xmm8 - temp_float_5) * register_r14[0x185f],
                              temp_float_7 * temp_float_14 * temp_float_5 + (register_xmm8 - temp_float_5) * register_r14[0x185e]);
                *(undefined8 *)(register_r14 + 0x185e) = _stack_float_2;
                temp_float_7 = register_r14[0x185f];
                temp_float_1 = register_r14[0x185e];
                temp_float_5 = temp_float_1 * temp_float_1 + temp_float_7 * temp_float_7;
                temp_array_1 = rsqrtss(ZEXT416((uint)temp_float_5), ZEXT416((uint)temp_float_5));
                temp_float_8 = temp_array_1._0_4_;
                temp_float_5 = temp_float_8 * 0.5 * (3.0 - temp_float_5 * temp_float_8 * temp_float_8);
                register_r14[0x185f] = temp_float_5 * temp_float_7;
                register_r14[0x185e] = temp_float_5 * temp_float_1;
            }
            else {
                *(undefined8 *)(register_r14 + 0x185e) = _stack_float_2;
            }
            stack_return_address = 0x18065aa9f;
            stack_float_13 = stack_float_8;
            FUN_1808fc050(*(ulonglong *)(register_rbp + -0x70) ^ (ulonglong)&stack0x00000000);
        }
    } while( true );
}