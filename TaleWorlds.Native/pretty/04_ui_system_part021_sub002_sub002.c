#include "TaleWorlds.Native.Split.h"

/**
 * UI系统高级变换和数据处理模块
 * 
 * 该文件包含一个复杂的UI系统函数，主要负责以下功能：
 * 1. UI元素的高级变换处理
 * 2. 矩阵运算和向量变换
 * 3. 动画插值和参数计算
 * 4. 数据批处理和优化
 * 5. 条件渲染和状态管理
 * 6. 内存管理和资源清理
 * 
 * 主要函数：
 * - ui_system_advanced_transform_processor: 高级变换处理器
 */

// 常量定义
#define UI_MAX_TRANSFORM_ITERATIONS 10
#define UI_TRANSFORM_EPSILON 1e-05
#define UI_TRANSFORM_THRESHOLD 0.001
#define UI_TRANSFORM_UPPER_BOUND 0.999
#define UI_TRANSFORM_NORMALIZATION_THRESHOLD 0.9995
#define UI_MAX_ANGLE_DEVIATION 3.1415927
#define UI_ANGLE_MULTIPLIER 6.2831855
#define UI_WEIGHT_FACTOR 0.1
#define UI_INVERSE_WEIGHT_FACTOR 1.1
#define UI_FLOAT_PRECISION 0x7f7fffff
#define UI_NORMALIZATION_CONSTANT 0.0031622776

// 函数别名映射
void FUN_180663300(longlong param_1, longlong param_2, undefined8 param_3, longlong param_4,
                  longlong param_5, longlong param_6, uint param_7, float param_8, float param_9,
                  char param_10)
    __attribute__((alias("ui_system_advanced_transform_processor")));

/**
 * UI系统高级变换处理器
 * 
 * 该函数实现了一个复杂的UI变换处理系统，包含以下主要功能：
 * 1. 顶点数据的批量处理和变换
 * 2. 矩阵运算和向量插值
 * 3. 动画参数计算和优化
 * 4. 条件渲染和状态管理
 * 5. 内存管理和资源清理
 * 
 * 参数：
 * - param_1: UI系统上下文指针
 * - param_2: 变换数据指针
 * - param_3: 渲染参数
 * - param_4: 辅助数据指针
 * - param_5: 动画系统指针
 * - param_6: 状态数据指针
 * - param_7: 处理模式标志
 * - param_8: 变换权重参数
 * - param_9: 插值参数
 * - param_10: 处理选项标志
 */
void ui_system_advanced_transform_processor(longlong ui_context, longlong transform_data, undefined8 render_params, 
                                           longlong auxiliary_data, longlong animation_system, longlong state_data,
                                           uint process_mode, float weight_param, float interpolation_param,
                                           char process_options)
{
    // 局部变量声明
    byte local_flag;
    undefined1 local_buffer_12a[12];
    undefined1 local_buffer_12b[12];
    undefined1 local_buffer_12c[12];
    undefined1 local_buffer_12d[12];
    undefined1 local_buffer_12e[12];
    undefined1 local_buffer_12f[12];
    char loop_counter_1;
    undefined4 temp_uint_4a;
    undefined8 *temp_ptr_8a;
    float *temp_float_ptr;
    undefined1 *temp_ptr_1a;
    undefined8 *temp_ptr_8b;
    undefined1 (*temp_ptr_16_array)[16];
    undefined8 temp_uint_8a;
    longlong *temp_longlong_ptr;
    float *temp_float_ptr_2;
    undefined4 *temp_uint_4_ptr;
    undefined1 local_buffer_8[8];
    undefined8 temp_uint_8b;
    undefined8 temp_uint_8c;
    longlong *temp_longlong_ptr_2;
    uint temp_uint;
    longlong temp_longlong;
    undefined1 *temp_ptr_1b;
    char local_char_1;
    int temp_int;
    uint temp_uint_2;
    longlong temp_longlong_2;
    ulonglong temp_ulonglong;
    undefined8 *temp_ptr_8c;
    longlong temp_longlong_3;
    uint temp_uint_3;
    char local_char_2;
    ulonglong temp_ulonglong_2;
    char local_char_3;
    int temp_int_2;
    ulonglong temp_ulonglong_3;
    ulonglong temp_ulonglong_4;
    longlong temp_longlong_4;
    bool temp_bool;
    float temp_float_a;
    float temp_float_b;
    float temp_float_c;
    float temp_float_d;
    float temp_float_e;
    float temp_float_f;
    undefined8 temp_uint_8d;
    undefined1 local_buffer_16a[16];
    undefined1 local_buffer_16b[16];
    undefined1 local_buffer_16c[16];
    undefined1 local_buffer_16d[16];
    undefined1 local_buffer_16e[16];
    undefined1 local_buffer_16f[16];
    undefined4 temp_uint_4b;
    undefined4 temp_uint_4c;
    undefined4 temp_uint_4d;
    float temp_float_g;
    float temp_float_h;
    undefined1 local_buffer_16g[16];
    undefined1 local_buffer_16h[16];
    undefined1 local_buffer_16i[16];
    undefined1 local_buffer_16j[16];
    undefined1 local_buffer_16k[16];
    undefined1 local_buffer_16l[16];
    float temp_float_i;
    float temp_float_j;
    float temp_float_k;
    float temp_float_l;
    float temp_float_m;
    undefined1 local_stack_buffer_32[32];
    undefined8 *temp_stack_ptr_8a;
    float temp_stack_float_a;
    byte temp_stack_byte;
    uint temp_stack_uint;
    char temp_stack_char;
    undefined8 temp_stack_uint_8a;
    longlong temp_stack_longlong;
    uint temp_stack_uint_2;
    longlong temp_stack_longlong_2;
    undefined1 local_stack_buffer_8[8];
    undefined8 temp_stack_uint_8b;
    int temp_stack_int_a;
    int temp_stack_int_b;
    uint temp_stack_uint_3;
    float temp_stack_float_b;
    longlong temp_stack_longlong_3;
    longlong *temp_stack_longlong_ptr;
    undefined1 local_stack_buffer_16a[16];
    float temp_stack_float_c;
    float temp_stack_float_d;
    float temp_stack_float_e;
    undefined4 temp_stack_uint_4a;
    float temp_stack_float_f;
    undefined8 *temp_stack_ptr_8b;
    undefined8 *temp_stack_ptr_8c;
    undefined8 temp_stack_uint_8c;
    undefined8 temp_stack_uint_8d;
    undefined4 temp_stack_uint_4b;
    undefined4 temp_stack_uint_4c;
    undefined4 temp_stack_uint_4d;
    undefined4 temp_stack_uint_4e;
    float temp_stack_float_g;
    float temp_stack_float_h;
    float temp_stack_float_i;
    float temp_stack_float_j;
    undefined8 *temp_stack_ptr_8d;
    undefined8 *temp_stack_ptr_8e;
    undefined8 temp_stack_uint_8e;
    float temp_stack_float_k;
    float temp_stack_float_l;
    undefined1 local_stack_buffer_8b[8];
    float temp_stack_float_m;
    undefined4 temp_stack_uint_4f;
    undefined8 temp_stack_uint_8f;
    undefined8 temp_stack_uint_8g;
    undefined8 temp_stack_array_8[2];
    undefined1 local_stack_buffer_8c[8];
    float temp_stack_float_n;
    undefined4 temp_stack_uint_4g;
    undefined4 temp_stack_uint_4h;
    undefined4 temp_stack_uint_4i;
    undefined4 temp_stack_uint_4j;
    undefined4 temp_stack_uint_4k;
    undefined8 temp_stack_uint_8h;
    undefined8 temp_stack_uint_8i;
    undefined8 temp_stack_array_16[4];
    undefined8 temp_stack_uint_8j;
    undefined8 temp_stack_uint_8k;
    undefined8 temp_stack_uint_8l;
    undefined8 temp_stack_uint_8m;
    undefined1 local_stack_buffer_192[192];
    undefined8 temp_stack_array_32[4];
    longlong temp_stack_array_longlong[32];
    float temp_stack_array_float[2];
    undefined8 temp_stack_uint_8n;
    ulonglong stack_security_cookie;
    
    // 安全检查初始化
    stack_security_cookie = _DAT_180bf00a8 ^ (ulonglong)local_stack_buffer_32;
    
    // 初始化局部变量
    temp_uint = 0;
    *(undefined1 *)(ui_context + 0x1e0) = 0;
    temp_stack_float_f = interpolation_param;
    temp_stack_longlong = animation_system;
    temp_stack_uint_8e = (undefined8 *)0x0;
    temp_stack_uint = 0;
    temp_stack_longlong_2 = transform_data;
    temp_stack_longlong_3 = ui_context;
    
    // 获取动画时间因子
    temp_float_a = (float)func_0x000180084f70(animation_system);
    temp_stack_float_b = temp_float_a;
    
    // 获取变换数据
    temp_ptr_8a = (undefined8 *)FUN_180535610(animation_system, &temp_stack_uint_8h);
    temp_stack_uint_8i = *(undefined8 *)(animation_system + 0x30);
    temp_stack_uint_8j = *(undefined8 *)(animation_system + 0x38);
    
    // 复制变换数据到本地缓冲区
    temp_stack_array_8[0] = *temp_ptr_8a;
    temp_stack_array_8[1] = temp_ptr_8a[1];
    local_stack_buffer_8c = *(undefined1 (*) [16])(temp_ptr_8a + 2);
    temp_stack_uint_4g = *(undefined4 *)(temp_ptr_8a + 4);
    temp_stack_uint_4h = *(undefined4 *)((longlong)temp_ptr_8a + 0x24);
    temp_stack_uint_4i = *(undefined4 *)(temp_ptr_8a + 5);
    temp_stack_uint_4j = *(undefined4 *)((longlong)temp_ptr_8a + 0x2c);
    
    // 处理变换矩阵
    FUN_18063b470(&temp_stack_uint_8c, temp_stack_array_8);
    temp_stack_uint_8m = temp_stack_uint_8i;
    temp_stack_uint_8n = temp_stack_uint_8j;
    temp_stack_uint_8k = temp_stack_uint_8c;
    temp_stack_uint_8l = temp_stack_uint_8d;
    
    // 主要处理逻辑
    if ((process_options != '\0') && (*(int *)(ui_context + 0xa0) != 4)) {
        // 批量处理模式
        temp_ptr_8a = temp_stack_array_8;
        temp_longlong = 8;
        do {
            func_0x000180074f10(temp_ptr_8a);
            temp_longlong_4 = temp_stack_longlong_2;
            temp_ptr_8a = temp_ptr_8a + 2;
            temp_longlong = temp_longlong + -1;
        } while (temp_longlong != 0);
        
        loop_counter_1 = *(char *)(ui_context + 0xa4);
        if ('\0' < *(char *)(ui_context + 0xa6)) {
            temp_float_ptr_2 = (float *)(ui_context + 0x130);
            do {
                transform_data = temp_longlong_4;
                if ((int)loop_counter_1 == process_mode) break;
                
                temp_float_ptr = (float *)FUN_18022a890(temp_longlong_4, loop_counter_1, state_data);
                temp_float_a = *temp_float_ptr;
                temp_float_j = temp_float_ptr[1];
                temp_float_h = temp_float_ptr[2];
                temp_float_i = temp_float_ptr[3];
                
                if (UI_TRANSFORM_THRESHOLD <= interpolation_param) {
                    if (interpolation_param <= UI_TRANSFORM_UPPER_BOUND) {
                        // 插值计算
                        temp_float_e = temp_float_h * temp_float_ptr_2[2];
                        temp_float_f = temp_float_i * temp_float_ptr_2[3];
                        temp_stack_uint_8f = 0xbf800000bf800000;
                        temp_stack_uint_8g = 0xbf800000bf800000;
                        
                        local_buffer_16b._0_4_ = temp_float_e + temp_float_a * *temp_float_ptr_2;
                        local_buffer_16b._4_4_ = temp_float_f + temp_float_j * temp_float_ptr_2[1];
                        local_buffer_16b._8_4_ = temp_float_e + temp_float_e;
                        local_buffer_16b._12_4_ = temp_float_f + temp_float_f;
                        
                        local_buffer_16a._4_12_ = local_buffer_16b._4_12_;
                        local_buffer_16a._0_4_ = local_buffer_16b._0_4_ + local_buffer_16b._4_4_;
                        
                        temp_stack_uint_8h = 0x3f8000003f800000;
                        temp_stack_uint_8i = 0x3f8000003f800000;
                        
                        temp_uint = movmskps((int)temp_float_ptr, local_buffer_16a);
                        temp_ulonglong = (ulonglong)(temp_uint & 1);
                        temp_float_e = *(float *)(&temp_stack_uint_8h + temp_ulonglong * 2);
                        temp_float_f = *(float *)(&temp_stack_uint_8i + temp_ulonglong * 2);
                        
                        temp_float_g = *temp_float_ptr_2;
                        temp_float_l = temp_float_ptr_2[2];
                        temp_float_k = *(float *)((longlong)&temp_stack_uint_8h + temp_ulonglong * 0x10 + 4) * temp_float_ptr_2[1];
                        temp_float_m = *(float *)((longlong)&temp_stack_uint_8i + temp_ulonglong * 0x10 + 4) * temp_float_ptr_2[3];
                        
                        if (UI_TRANSFORM_NORMALIZATION_THRESHOLD < ABS(local_buffer_16a._0_4_)) {
                            // 高精度插值
                            temp_float_b = 1.0 - interpolation_param;
                            temp_stack_uint_8c = CONCAT44(temp_float_b * temp_float_j + interpolation_param * temp_float_k,
                                                          temp_float_b * temp_float_a + interpolation_param * temp_float_e * temp_float_g);
                            temp_stack_uint_8d = CONCAT44(temp_float_b * temp_float_i + interpolation_param * temp_float_m,
                                                          temp_float_b * temp_float_h + interpolation_param * temp_float_f * temp_float_l);
                            func_0x00018022b430(&temp_stack_uint_8c);
                            temp_float_a = (float)temp_stack_uint_8c;
                            temp_float_j = temp_stack_uint_8c._4_4_;
                            temp_float_h = (float)temp_stack_uint_8d;
                            temp_float_i = temp_stack_uint_8d._4_4_;
                        }
                        else {
                            // 标准插值
                            acosf();
                            temp_float_b = (float)sinf();
                            temp_float_c = (float)sinf();
                            temp_float_c = temp_float_c * (1.0 / temp_float_b);
                            temp_float_d = (float)sinf();
                            temp_float_d = temp_float_d * (1.0 / temp_float_b);
                            
                            temp_float_a = temp_float_c * temp_float_a + temp_float_d * temp_float_e * temp_float_g;
                            temp_float_j = temp_float_c * temp_float_j + temp_float_d * temp_float_k;
                            temp_float_h = temp_float_c * temp_float_h + temp_float_d * temp_float_f * temp_float_l;
                            temp_float_i = temp_float_c * temp_float_i + temp_float_d * temp_float_m;
                        }
                    }
                    else {
                        // 直接使用目标值
                        temp_float_a = *temp_float_ptr_2;
                        temp_float_j = temp_float_ptr_2[1];
                        temp_float_h = temp_float_ptr_2[2];
                        temp_float_i = temp_float_ptr_2[3];
                    }
                }
                
                // 更新处理计数
                temp_stack_uint = temp_stack_uint + 1;
                temp_uint = (int)temp_stack_uint_8e + 1;
                temp_stack_uint_8e = (undefined8 *)(ulonglong)temp_uint;
                temp_float_ptr = (float *)(((longlong)temp_stack_array_float - ui_context) + (longlong)temp_float_ptr_2);
                *temp_float_ptr = temp_float_a;
                temp_float_ptr[1] = temp_float_j;
                temp_float_ptr[2] = temp_float_h;
                temp_float_ptr[3] = temp_float_i;
                temp_float_ptr_2 = temp_float_ptr_2 + 4;
                loop_counter_1 = *(char *)((longlong)loop_counter_1 + 0x100 + state_data);
                interpolation_param = temp_stack_float_f;
            } while ((int)temp_uint < (int)*(char *)(ui_context + 0xa6));
        }
        
        // 后处理阶段
        temp_int_2 = temp_stack_uint - 1;
        temp_ulonglong = (ulonglong)temp_int_2;
        if (-1 < temp_int_2) {
            temp_ptr_8a = temp_stack_array_8 + temp_ulonglong * 2;
            do {
                loop_counter_1 = *(char *)(temp_stack_longlong_3 + 0xa4);
                temp_int = (int)temp_ulonglong;
                if (0 < temp_int) {
                    temp_ulonglong = temp_ulonglong & 0xffffffff;
                    do {
                        loop_counter_1 = *(char *)((longlong)loop_counter_1 + 0x100 + state_data);
                        temp_ulonglong = temp_ulonglong - 1;
                    } while (temp_ulonglong != 0);
                }
                
                temp_ulonglong_4 = (ulonglong)loop_counter_1;
                temp_ptr_8c = (undefined8 *)((temp_ulonglong_4 + 0x82) * 0x10 + transform_data);
                
                if (temp_int == temp_int_2) {
                    if (loop_counter_1 != '\0') {
                        temp_ptr_1b = (undefined1 *)
                                  FUN_18022a890(temp_stack_longlong_2, *(undefined1 *)(temp_ulonglong_4 + 0x100 + state_data), state_data);
                        temp_ptr_25 = local_stack_buffer_16a;
                        temp_ptr_8b = temp_stack_array_8 + (longlong)temp_int * 2;
                        goto TRANSFORM_PROCESSING_LABEL;
                    }
                    temp_uint_8a = *temp_ptr_8a;
                    temp_uint_8d = temp_ptr_8a[1];
                }
                else {
                    temp_ptr_25 = local_stack_buffer_16c;
                    temp_ptr_8b = temp_stack_array_8 + (longlong)temp_int * 2;
                    temp_ptr_1b = local_stack_buffer_8c + (longlong)temp_int * 0x10;
                TRANSFORM_PROCESSING_LABEL:
                    temp_ptr_8b = (undefined8 *)func_0x00018022b3c0(temp_ptr_1b, temp_ptr_25, temp_ptr_8b);
                    temp_uint_8a = *temp_ptr_8b;
                    temp_uint_8d = temp_ptr_8b[1];
                }
                
                *temp_ptr_8c = temp_uint_8a;
                temp_ptr_8c[1] = temp_uint_8d;
                temp_ptr_8a = temp_ptr_8a + -2;
                
                *(ulonglong *)(temp_stack_longlong_2 + 0x800) =
                     *(ulonglong *)(temp_stack_longlong_2 + 0x800) |
                     *(ulonglong *)(temp_ulonglong_4 * 0x1b0 + 0xe8 + *(longlong *)(state_data + 0x140));
                
                temp_ulonglong = (ulonglong)(temp_int - 1U);
                *(ulonglong *)(temp_stack_longlong_2 + 0x808) =
                     *(ulonglong *)(temp_stack_longlong_2 + 0x808) | 1L << (temp_ulonglong_4 & 0x3f);
                
                transform_data = temp_stack_longlong_2;
            } while (-1 < (int)(temp_int - 1U));
        }
        goto FINAL_PROCESSING_LABEL;
    }
    
    // 简化处理模式
    loop_counter_1 = *(char *)(ui_context + 0xa5);
    local_char_1 = *(char *)(ui_context + 0xa4);
    temp_stack_uint_8g = 0x3f800000;
    temp_stack_uint_8f = 0;
    temp_stack_uint_8e = 0;
    temp_stack_uint_8d = 0x3f80000000000000;
    
    if (loop_counter_1 != local_char_1) {
        do {
            temp_longlong = (longlong)loop_counter_1;
            temp_ptr_8a = (undefined8 *)(transform_data + (temp_longlong + 0x82) * 0x10);
            temp_stack_uint_8h = *temp_ptr_8a;
            temp_stack_uint_8i = temp_ptr_8a[1];
            
            temp_ptr_8a = (undefined8 *)(temp_longlong * 0x1b0 + 0x80 + *(longlong *)(state_data + 0x140));
            temp_stack_uint_8f = *temp_ptr_8a;
            temp_stack_uint_8g = temp_ptr_8a[1];
            
            temp_ptr_8a = (undefined8 *)FUN_1801c10f0(&temp_stack_uint_8g, local_stack_buffer_16a, &temp_stack_uint_8f);
            temp_ptr_8c = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8g, local_stack_buffer_16c, &temp_stack_uint_8h);
            
            temp_stack_uint_8e = *temp_ptr_8a;
            temp_stack_uint_8d = temp_ptr_8a[1];
            local_char_1 = *(char *)(ui_context + 0xa4);
            temp_stack_uint_8g = *temp_ptr_8c;
            temp_stack_uint_8f = temp_ptr_8c[1];
            
            loop_counter_1 = *(char *)(temp_longlong + 0x100 + state_data);
            animation_system = temp_stack_longlong;
        } while (loop_counter_1 != local_char_1);
    }
    
    // 根据处理模式选择不同的处理路径
    temp_int_2 = *(int *)(ui_context + 0xa0);
    if (temp_int_2 == 3) {
        // 模式3处理
        temp_uint_8a = FUN_1801c13c0(animation_system, local_stack_buffer_16a, ui_context + 0x10);
        temp_longlong_ptr = (longlong *)FUN_1801c10f0(&temp_stack_uint_8k, local_stack_buffer_16c, temp_uint_8a);
        temp_stack_uint_8e = (undefined8 *)*temp_longlong_ptr;
        temp_stack_longlong = temp_longlong_ptr[1];
        
        if (0.0 < *(float *)(ui_context + 0x30)) {
            temp_uint_8a = func_0x0001803812e0(&temp_stack_uint_8g, local_stack_buffer_16a);
            FUN_1801c0fb0(ui_context + 0x20, &temp_stack_uint_8c, temp_uint_8a);
            temp_float_j = *(float *)(ui_context + 0x30);
            
            temp_stack_uint_8e = (undefined8 *)
                                 CONCAT44(temp_stack_uint_8e._4_4_ - temp_stack_uint_8c._4_4_ * temp_float_j,
                                          (float)temp_stack_uint_8e - (float)temp_stack_uint_8c * temp_float_j);
            temp_stack_longlong = CONCAT44(temp_stack_longlong._4_4_, (float)temp_stack_longlong - (float)temp_stack_uint_8d * temp_float_j);
        }
    MODE3_ADJUSTMENT_LABEL:
        if ((((float)temp_stack_uint_8e != 0.0) || (temp_stack_uint_8e._4_4_ != 0.0)) || ((float)temp_stack_uint_8d != 0.0)) {
            temp_ptr_8a = (undefined8 *)(ui_context + 0x20);
        MODE3_PROCESSING_LABEL:
            temp_float_ptr_2 = (float *)FUN_1801c0fb0(temp_ptr_8a, local_stack_buffer_16a, &temp_stack_uint_8e);
            temp_stack_uint_8e = (undefined8 *)
                                 CONCAT44(temp_stack_uint_8e._4_4_ - temp_float_ptr_2[1], (float)temp_stack_uint_8e - *temp_float_ptr_2);
            temp_stack_longlong = CONCAT44(temp_stack_longlong._4_4_, (float)temp_stack_longlong - temp_float_ptr_2[2]);
        }
    }
    else if (temp_int_2 == 4) {
        // 模式4处理
        temp_ptr_8a = (undefined8 *)FUN_18022a890(transform_data, local_char_1, state_data);
        temp_stack_array_8[0] = *temp_ptr_8a;
        temp_stack_array_8[1] = temp_ptr_8a[1];
        local_stack_buffer_8c = *(undefined1 (*) [16])(transform_data + ((longlong)local_char_1 + 0x40) * 0x10);
        
        loop_counter_1 = func_0x0001806673d0(ui_context + 0x20);
        if (loop_counter_1 == '\0') {
            temp_stack_array_8[0] = *(undefined8 *)(ui_context + 0x20);
            temp_stack_array_8[1] = *(undefined8 *)(ui_context + 0x28);
        }
        
        temp_ptr_8a = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8k, local_stack_buffer_16a, temp_stack_array_8);
        temp_stack_float_c = (float)local_stack_buffer_8c._0_4_ + *(float *)(ui_context + 0x10);
        temp_stack_uint_4a = UI_FLOAT_PRECISION;
        temp_stack_uint_8a = *temp_ptr_8a;
        temp_stack_uint_8f = temp_ptr_8a[1];
        temp_stack_float_d = (float)local_stack_buffer_8c._4_4_ + *(float *)(ui_context + 0x14);
        temp_stack_float_e = temp_stack_float_n + *(float *)(ui_context + 0x18);
        
        temp_longlong_ptr = (longlong *)FUN_1801c10f0(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_float_c);
        temp_stack_uint_8e = (undefined8 *)*temp_longlong_ptr;
        temp_stack_longlong = temp_longlong_ptr[1];
    }
    else if (temp_int_2 == 5) {
        // 模式5处理
        loop_counter_1 = *(char *)(ui_context + 0x20);
        temp_ptr_8a = (undefined8 *)FUN_18022a890(transform_data, loop_counter_1, state_data);
        temp_stack_array_8[0] = *temp_ptr_8a;
        temp_stack_array_8[1] = temp_ptr_8a[1];
        local_stack_buffer_8c = *(undefined1 (*) [16])(transform_data + ((longlong)loop_counter_1 + 0x40) * 0x10);
        
        temp_float_ptr_2 = (float *)FUN_1801c0fb0(temp_stack_array_8, local_stack_buffer_16a, ui_context + 0x10);
        local_buffer_16b = local_stack_buffer_8c;
        local_stack_buffer_8c._4_4_ = (float)local_stack_buffer_8c._4_4_ + temp_float_ptr_2[1];
        local_stack_buffer_8c._0_4_ = (float)local_stack_buffer_8c._0_4_ + *temp_float_ptr_2;
        temp_stack_uint_4j = local_buffer_16b._12_4_;
        temp_stack_float_n = temp_stack_float_n + temp_float_ptr_2[2];
        
        FUN_1801c10f0(&temp_stack_uint_8k, &temp_stack_uint_8m, local_stack_buffer_8c);
        temp_stack_uint_8e = temp_stack_uint_8m;
        temp_stack_longlong = temp_stack_uint_8n;
        
        temp_ptr_8a = (undefined8 *)FUN_18022a890(transform_data, *(undefined1 *)(ui_context + 0xa4), state_data);
        temp_stack_uint_8a = *temp_ptr_8a;
        temp_stack_uint_8f = temp_ptr_8a[1];
        
        temp_ptr_8a = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_uint_8a);
        temp_stack_uint_8a = *temp_ptr_8a;
        temp_stack_uint_8f = temp_ptr_8a[1];
        
        if ((((float)temp_stack_uint_8e != 0.0) || (temp_stack_uint_8e._4_4_ != 0.0)) || ((float)temp_stack_uint_8d != 0.0)) {
            FUN_1801c0fb0(&temp_stack_uint_8a, &temp_stack_uint_8c, &temp_stack_uint_8e);
            temp_stack_uint_8e = (undefined8 *)
                                 CONCAT44(temp_stack_uint_8e._4_4_ - temp_stack_uint_8c._4_4_,
                                          (float)temp_stack_uint_8e - (float)temp_stack_uint_8c);
            temp_stack_longlong = CONCAT44(temp_stack_longlong._4_4_, (float)temp_stack_longlong - (float)temp_stack_uint_8d);
        }
    }
    else {
        if (temp_int_2 == 6) {
            // 模式6处理
            temp_uint_8a = FUN_1801c13c0(animation_system, local_stack_buffer_16a, ui_context + 0x10);
            temp_longlong_ptr = (longlong *)FUN_1801c10f0(&temp_stack_uint_8k, local_stack_buffer_16c, temp_uint_8a);
            temp_stack_uint_8e = (undefined8 *)*temp_longlong_ptr;
            temp_stack_longlong = temp_longlong_ptr[1];
            goto MODE3_ADJUSTMENT_LABEL;
        }
        if (temp_int_2 == 7) {
            // 模式7处理
            if ((*(ulonglong *)(auxiliary_data + 0x810) >> ((ulonglong)*(byte *)(ui_context + 0xa5) & 0x3f) & 1) == 0) {
                temp_ptr_8c = (undefined8 *)FUN_18022a890(transform_data, local_char_1, state_data);
                temp_ptr_8a = (undefined8 *)(transform_data + ((longlong)local_char_1 + 0x40) * 0x10);
                temp_stack_uint_8f = *temp_ptr_8a;
                temp_stack_uint_8g = temp_ptr_8a[1];
                temp_stack_uint_8h = *temp_ptr_8c;
                temp_stack_uint_8i = temp_ptr_8c[1];
                
                temp_ptr_8a = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_uint_8h);
                loop_counter_1 = *(char *)(ui_context + 0xa5);
                temp_stack_uint_8a = *temp_ptr_8a;
                temp_stack_uint_8f = temp_ptr_8a[1];
                
                FUN_18022a890(transform_data, loop_counter_1, state_data);
                temp_ptr_8a = (undefined8 *)(transform_data + ((longlong)loop_counter_1 + 0x40) * 0x10);
                local_stack_buffer_8 = (undefined1 [8])*temp_ptr_8a;
                temp_uint_8a = temp_ptr_8a[1];
            }
            else {
                temp_ptr_8c = (undefined8 *)FUN_18022a890(auxiliary_data, local_char_1, state_data);
                temp_ptr_8a = (undefined8 *)(auxiliary_data + ((longlong)local_char_1 + 0x40) * 0x10);
                temp_stack_uint_8f = *temp_ptr_8a;
                temp_stack_uint_8g = temp_ptr_8a[1];
                temp_stack_uint_8h = *temp_ptr_8c;
                temp_stack_uint_8i = temp_ptr_8c[1];
                
                temp_ptr_8a = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_uint_8h);
                loop_counter_1 = *(char *)(ui_context + 0xa5);
                temp_stack_uint_8a = *temp_ptr_8a;
                temp_stack_uint_8f = temp_ptr_8a[1];
                
                FUN_18022a890(auxiliary_data, loop_counter_1, state_data);
                temp_ptr_8a = (undefined8 *)(auxiliary_data + ((longlong)loop_counter_1 + 0x40) * 0x10);
                local_stack_buffer_8 = (undefined1 [8])*temp_ptr_8a;
                temp_uint_8a = temp_ptr_8a[1];
            }
            
            local_stack_buffer_16g._0_4_ = (float)temp_uint_8a;
            local_stack_buffer_16g._4_4_ = (float)((ulonglong)temp_uint_8a >> 0x20);
            local_stack_buffer_16g._0_4_ = (float)local_stack_buffer_16g + *(float *)(ui_context + 0x90);
            
            temp_ptr_8a = (undefined8 *)FUN_1801c1690(ui_context + 0x10, local_stack_buffer_16a, local_stack_buffer_8);
            local_stack_buffer_8 = (undefined1 [8])*temp_ptr_8a;
            local_stack_buffer_16g = temp_ptr_8a[1];
            
            temp_ptr_16_array = (undefined1 (*) [16])func_0x0001800f8f10(ui_context + 0x50, local_stack_buffer_16a, local_stack_buffer_8);
            local_stack_buffer_8 = *temp_ptr_16_array;
            
            temp_uint_8a = FUN_1801c13c0(temp_stack_longlong, local_stack_buffer_16a, local_stack_buffer_8);
            temp_longlong_ptr = (longlong *)FUN_1801c10f0(&temp_stack_uint_8k, local_stack_buffer_16c, temp_uint_8a);
            temp_stack_uint_8e = (undefined8 *)*temp_longlong_ptr;
            temp_stack_longlong = temp_longlong_ptr[1];
            
            if ((((float)temp_stack_uint_8e != 0.0) || (temp_stack_uint_8e._4_4_ != 0.0)) || ((float)temp_stack_uint_8d != 0.0)) {
                temp_ptr_8a = &temp_stack_uint_8a;
                goto MODE3_PROCESSING_LABEL;
            }
        }
    }
    
    // 清理临时数据
    temp_longlong = 8;
    temp_longlong_ptr = temp_stack_array_longlong;
    temp_longlong_4 = 8;
    do {
        func_0x000180074f10(temp_longlong_ptr);
        temp_longlong_ptr = temp_longlong_ptr + 4;
        temp_longlong_4 = temp_longlong_4 + -1;
    } while (temp_longlong_4 != 0);
    
    temp_ptr_8a = &temp_stack_uint_8j;
    do {
        func_0x000180074f10(temp_ptr_8a);
        temp_ptr_8a = temp_ptr_8a + 4;
        temp_longlong = temp_longlong + -1;
    } while (temp_longlong != 0);
    
    temp_float_ptr_2 = temp_stack_array_float;
    temp_longlong = 0x40;
    do {
        func_0x000180074f10(temp_float_ptr_2);
        temp_float_ptr_2 = temp_float_ptr_2 + 4;
        temp_longlong = temp_longlong + -1;
    } while (temp_longlong != 0);
    
    // 最终处理阶段
    temp_stack_byte = *(byte *)(ui_context + 0xa4);
    temp_uint_2 = (uint)(char)temp_stack_byte;
    local_stack_buffer_8b = ZEXT416(0);
    
    if (temp_uint_2 != process_mode) {
        temp_ptr_8a = &temp_stack_uint_8j;
        temp_uint_3 = temp_uint;
        do {
            temp_longlong = temp_stack_longlong_2;
            if ((int)*(char *)(ui_context + 0xa6) <= (int)temp_uint) break;
            
            temp_uint_4_ptr = (undefined4 *)FUN_18022a890(temp_stack_longlong_2, temp_uint_2 & 0xff, state_data);
            temp_longlong_4 = (longlong)(char)temp_uint_2;
            temp_uint_4b = temp_uint_4_ptr[1];
            temp_stack_uint_4b = temp_uint_4_ptr[2];
            temp_stack_uint_4c = temp_uint_4_ptr[3];
            
            *(undefined4 *)temp_ptr_8a = *temp_uint_4_ptr;
            *(undefined4 *)((longlong)temp_ptr_8a + 4) = temp_uint_4b;
            *(undefined4 *)(temp_ptr_8a + 1) = temp_stack_uint_4b;
            *(undefined4 *)((longlong)temp_ptr_8a + 0xc) = temp_stack_uint_4c;
            
            temp_ptr_8c = (undefined8 *)(temp_longlong + (temp_longlong_4 + 0x40) * 0x10);
            temp_uint_8a = temp_ptr_8c[1];
            temp_ptr_8a[2] = *temp_ptr_8c;
            temp_ptr_8a[3] = temp_uint_8a;
            
            temp_ptr_8c = (undefined8 *)FUN_18022a890(temp_longlong, temp_stack_byte, state_data);
            temp_longlong = temp_stack_longlong_3;
            local_flag = *(byte *)(temp_longlong_4 + 0x100 + state_data);
            temp_uint_8a = temp_ptr_8c[1];
            
            *(undefined8 *)(temp_stack_array_float + temp_longlong_4 * 4) = *temp_ptr_8c;
            (&temp_stack_uint_8n)[temp_longlong_4 * 2] = temp_uint_8a;
            
            if (temp_stack_byte == 0) {
                temp_float_j = (float)(int)((int)*(char *)(temp_stack_longlong_3 + 0xa6) - temp_uint) /
                                 (float)(int)*(char *)(temp_stack_longlong_3 + 0xa6);
                temp_float_j = temp_float_j * temp_float_j + UI_WEIGHT_FACTOR;
                if (1.0 <= temp_float_j) {
                    temp_float_j = 1.0;
                }
                
                temp_float_ptr = (float *)FUN_180285c90(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_uint_8e);
                loop_counter_1 = *(char *)(temp_longlong + 0xa4);
                FUN_18022a890(temp_stack_longlong_2, loop_counter_1, state_data);
                temp_float_ptr_2 = (float *)(temp_stack_longlong_2 + ((longlong)loop_counter_1 + 0x40) * 0x10);
                temp_stack_float_m = temp_float_ptr[2] - temp_float_ptr_2[2];
                temp_stack_uint_4f = UI_FLOAT_PRECISION;
                local_stack_buffer_8b._4_4_ = (temp_float_ptr[1] - temp_float_ptr_2[1]) * temp_float_j;
                local_stack_buffer_8b._0_4_ = (*temp_float_ptr - *temp_float_ptr_2) * temp_float_j;
                
                if (0.0 < temp_float_ptr[2] - temp_float_ptr_2[2]) {
                    temp_stack_float_m = 0.0;
                    temp_stack_uint_4f = UI_FLOAT_PRECISION;
                }
                
                temp_float_ptr_2 = (float *)FUN_1801c0fb0(&temp_stack_uint_8k, local_stack_buffer_16c, local_stack_buffer_8b);
                temp_stack_uint_8e = (undefined8 *)
                                     CONCAT44(temp_stack_uint_8e._4_4_ - temp_float_ptr_2[1], (float)temp_stack_uint_8e - *temp_float_ptr_2);
                temp_stack_longlong = CONCAT44(temp_stack_longlong._4_4_, (float)temp_stack_longlong - temp_float_ptr_2[2]);
            }
            
            temp_uint_2 = (uint)local_flag;
            temp_uint_3 = temp_stack_uint + 1;
            temp_uint = temp_uint + 1;
            temp_ptr_8a = temp_ptr_8a + 4;
            ui_context = temp_stack_longlong_3;
            temp_stack_byte = local_flag;
            temp_stack_uint = temp_uint_3;
        } while ((int)(char)local_flag != process_mode);
        
        temp_longlong = temp_stack_longlong_2;
        if (temp_uint_3 != 0) {
            if ((char)temp_uint_2 < '\0') {
                temp_stack_uint_8h = 0x3f800000;
                temp_stack_uint_8i = 0;
                temp_stack_uint_8f = 0;
                temp_stack_uint_8g = 0;
                temp_stack_uint_8d = 0x3f80000000000000;
            }
            else {
                temp_ptr_8a = (undefined8 *)FUN_18022a890(temp_longlong, temp_uint_2 & 0xff, state_data);
                temp_stack_uint_8h = *temp_ptr_8a;
                temp_stack_uint_8i = temp_ptr_8a[1];
                temp_ptr_8a = (undefined8 *)(temp_longlong + ((longlong)(char)temp_stack_byte + 0x40) * 0x10);
                temp_stack_uint_8f = *temp_ptr_8a;
                temp_stack_uint_8g = temp_ptr_8a[1];
                temp_uint_3 = temp_stack_uint;
            }
            
            temp_stack_uint_3 = temp_uint_3 - 1;
            temp_stack_float_b = 0.0;
            temp_uint_8a = temp_stack_array_16[(longlong)(int)temp_uint_3 * 4 + 2];
            temp_uint_8d = temp_stack_array_16[(longlong)(int)temp_uint_3 * 4 + 3];
            local_stack_buffer_8 = (undefined1 [8])(longlong)(int)temp_uint_3;
            temp_longlong_ptr = (longlong *)((longlong)local_stack_buffer_8 + -1);
            local_buffer_19 = local_stack_buffer_8;
            temp_stack_longlong_ptr = temp_longlong_ptr;
            
            do {
                loop_counter_1 = *(char *)(ui_context + 0xa4);
                temp_stack_int_a = -1;
                temp_stack_ptr_8e = (undefined8 *)0x0;
                local_char_1 = -1;
                temp_stack_ptr_8b = (undefined8 *)0xffffffffffffffff;
                temp_stack_longlong_ptr = temp_longlong_ptr;
                
                if (0 < (longlong)local_buffer_19) {
                    temp_stack_ptr_8c = (undefined8 *)0x0;
                    temp_stack_uint_8m = 0xffffffff;
                    temp_stack_ptr_8d = (undefined8 *)0xffffffffffffffe0;
                    
                    do {
                        temp_ptr_8c = temp_stack_ptr_8e;
                        temp_ptr_8b_temp = temp_stack_ptr_8c;
                        temp_uint = temp_stack_uint_8m;
                        temp_longlong = (longlong)loop_counter_1;
                        temp_stack_longlong_ptr = (longlong *)temp_longlong;
                        
                        if (*(int *)(temp_longlong * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140)) != -1) {
                            if (local_char_1 == -1) {
                                temp_uint_4_ptr = (undefined4 *)FUN_180285c90(&temp_stack_uint_8k, local_stack_buffer_16d, &temp_stack_uint_8e);
                                temp_uint_4b = temp_uint_4_ptr[1];
                                temp_stack_uint_4b = temp_uint_4_ptr[2];
                                temp_stack_uint_4c = temp_uint_4_ptr[3];
                                
                                *(undefined4 *)((longlong)&temp_stack_uint_8l + (longlong)temp_stack_ptr_8c_temp) = *temp_uint_4_ptr;
                                *(undefined4 *)((longlong)&temp_stack_uint_8l + 4 + (longlong)temp_stack_ptr_8c_temp) = temp_uint_4b;
                                *(undefined4 *)((longlong)&temp_stack_uint_8k + (longlong)temp_stack_ptr_8c_temp) = temp_stack_uint_4b;
                                *(undefined4 *)((longlong)&temp_stack_uint_8k + 4 + (longlong)temp_stack_ptr_8c_temp) = temp_stack_uint_4c;
                                
                                temp_stack_longlong_ptr = (longlong *)temp_longlong;
                                temp_stack_ptr_8e = temp_ptr_8c;
                                temp_stack_uint_8m = temp_uint;
                            }
                            else {
                                // 复杂的变换处理逻辑
                                temp_stack_uint_8i = (undefined8 *)0x0;
                                temp_stack_uint_8j = 0;
                                
                                for (; local_char_1 != loop_counter_1; local_char_1 = *(char *)((longlong)local_char_1 + 0x100 + state_data)) {
                                    temp_longlong = (longlong)local_char_1 * 0x1b0 + *(longlong *)(state_data + 0x140);
                                    temp_stack_uint_8c = *(undefined8 *)(temp_longlong + 0x90);
                                    temp_stack_uint_8d = *(undefined8 *)(temp_longlong + 0x98);
                                    temp_stack_uint_4d = *(undefined4 *)(temp_longlong + 0x80);
                                    temp_stack_uint_4e = *(undefined4 *)(temp_longlong + 0x84);
                                    temp_stack_uint_4f = *(undefined4 *)(temp_longlong + 0x88);
                                    temp_stack_uint_4g = *(undefined4 *)(temp_longlong + 0x8c);
                                    
                                    temp_ptr_8a = (undefined8 *)FUN_1801c10f0(&temp_stack_uint_8c, local_stack_buffer_16e, &temp_stack_uint_8i);
                                    temp_stack_uint_8i = *temp_ptr_8a;
                                    temp_stack_uint_8j = temp_ptr_8a[1];
                                    temp_uint_3 = temp_stack_uint;
                                }
                                
                                temp_ptr_1b = local_stack_buffer_192 + (longlong)(int)temp_uint * 0x20;
                                if ((int)(temp_uint + 2) < (int)temp_uint_3) {
                                    temp_ptr_8a = &temp_stack_uint_8j + (longlong)(int)(temp_uint + 2) * 4;
                                }
                                else {
                                    temp_ptr_8a = &temp_stack_uint_8h;
                                }
                                
                                temp_stack_uint_8e = temp_ptr_8a;
                                FUN_180300b10(temp_ptr_8a, &temp_stack_uint_8h, temp_ptr_1b);
                                FUN_180285c90(temp_ptr_1b, local_stack_buffer_16f, &temp_stack_uint_8l + (longlong)temp_stack_int_a * 4);
                                
                                temp_uint_8b = FUN_1801503e0(local_stack_buffer_16f, local_stack_buffer_16g);
                                temp_uint_8c = FUN_1801503e0(&temp_stack_uint_8i, local_stack_buffer_16h);
                                func_0x000180085850(temp_uint_8c, &temp_stack_float_g, temp_uint_8b);
                                
                                temp_longlong = (longlong)temp_ptr_8c + -1;
                                temp_uint_2 = temp_uint;
                                if ((longlong)temp_stack_ptr_8b < temp_longlong) {
                                    temp_longlong_4 = temp_longlong - (longlong)temp_stack_ptr_8b;
                                    temp_longlong_ptr_2 = temp_stack_array_longlong + temp_longlong * 4;
                                    
                                    do {
                                        temp_longlong_ptr_3 = (longlong *)
                                                  func_0x00018022b3c0(temp_ptr_1b, local_stack_buffer_16i,
                                                                      &temp_stack_uint_8j + (longlong)(int)temp_uint * 4);
                                        temp_uint = temp_uint - 1;
                                        temp_longlong_3 = temp_longlong_ptr_3[1];
                                        *temp_longlong_ptr_2 = *temp_longlong_ptr_3;
                                        temp_longlong_ptr_2[1] = temp_longlong_3;
                                        temp_longlong_4 = temp_longlong_4 + -1;
                                        temp_longlong_ptr_2 = temp_longlong_ptr_2 + -4;
                                        temp_ptr_8a = temp_stack_uint_8e;
                                        temp_uint_2 = temp_stack_uint_8m;
                                    } while (temp_longlong_4 != 0);
                                }
                                
                                if (((temp_stack_float_g != 0.0) || (temp_stack_float_h != 0.0)) || (temp_stack_float_i != 0.0)) {
                                    temp_float_h = temp_stack_float_h * temp_stack_float_h + temp_stack_float_g * temp_stack_float_g +
                                             temp_stack_float_i * temp_stack_float_i;
                                    local_buffer_16b = rsqrtss(ZEXT416((uint)temp_float_h), ZEXT416((uint)temp_float_h));
                                    temp_float_j = local_buffer_16b._0_4_;
                                    temp_float_j = temp_float_j * 0.5 * (3.0 - temp_float_h * temp_float_j * temp_float_j);
                                    temp_stack_float_g = temp_stack_float_g * temp_float_j;
                                    temp_stack_float_h = temp_stack_float_h * temp_float_j;
                                    temp_stack_float_i = temp_stack_float_i * temp_float_j;
                                    
                                    asinf();
                                    FUN_18063b860(local_stack_buffer_16j, &temp_stack_float_g);
                                    temp_ptr_8c = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8h, local_stack_buffer_16k, local_stack_buffer_16j);
                                    temp_stack_uint_8h = *temp_ptr_8c;
                                    temp_stack_uint_8i = temp_ptr_8c[1];
                                }
                                
                                temp_ptr_8c = (undefined8 *)func_0x00018022b490(temp_ptr_8a, local_stack_buffer_16l, &temp_stack_uint_8h);
                                temp_ptr_8a = temp_stack_ptr_8c;
                                temp_uint_8b = temp_ptr_8c[1];
                                *(undefined8 *)((longlong)&temp_stack_uint_8j + (longlong)temp_stack_ptr_8c) = *temp_ptr_8c;
                                *(undefined8 *)((longlong)&temp_stack_uint_8k + (longlong)temp_stack_ptr_8c) = temp_uint_8b;
                                temp_uint = temp_uint_2;
                                
                                if ((longlong)temp_stack_ptr_8b < temp_longlong) {
                                    temp_longlong_4 = temp_longlong - (longlong)temp_stack_ptr_8b;
                                    temp_ptr_8c = &temp_stack_uint_8j + temp_longlong * 4;
                                    
                                    do {
                                        temp_ptr_8b = (undefined8 *)
                                                  func_0x00018022b490(temp_ptr_1b, local_stack_buffer_16m,
                                                                      temp_stack_array_longlong + (longlong)(int)temp_uint_2 * 4);
                                        temp_uint_2 = temp_uint_2 - 1;
                                        temp_uint_8b = temp_ptr_8b[1];
                                        *temp_ptr_8c = *temp_ptr_8b;
                                        temp_ptr_8c[1] = temp_uint_8b;
                                        temp_longlong_4 = temp_longlong_4 + -1;
                                        temp_ptr_8c = temp_ptr_8c + -4;
                                        temp_uint = temp_stack_uint_8m;
                                    } while (temp_longlong_4 != 0);
                                }
                                
                                temp_float_ptr_2 = (float *)FUN_1801c0fb0(temp_ptr_1b, local_stack_buffer_16n, &temp_stack_uint_8i);
                                temp_float_j = *(float *)((longlong)&temp_stack_uint_8l + (longlong)temp_stack_ptr_8d) - *temp_float_ptr_2;
                                temp_float_h = *(float *)((longlong)&temp_stack_uint_8l + 4 + (longlong)temp_stack_ptr_8d) - temp_float_ptr_2[1];
                                temp_float_i = *(float *)((longlong)&temp_stack_uint_8k + (longlong)temp_stack_ptr_8d) - temp_float_ptr_2[2];
                                
                                temp_stack_uint_8i = (undefined8 *)CONCAT44(temp_float_h, temp_float_j);
                                temp_stack_uint_8j = CONCAT44(UI_FLOAT_PRECISION, temp_float_i);
                                
                                *(float *)((longlong)&temp_stack_uint_8l + (longlong)temp_ptr_8a) = temp_float_j;
                                *(float *)((longlong)&temp_stack_uint_8l + 4 + (longlong)temp_ptr_8a) = temp_float_h;
                                *(float *)((longlong)&temp_stack_uint_8k + (longlong)temp_ptr_8a) = temp_float_i;
                                *(undefined4 *)((longlong)&temp_stack_uint_8k + 4 + (longlong)temp_ptr_8a) = UI_FLOAT_PRECISION;
                                
                                temp_stack_uint_8m = temp_uint;
                            }
                            temp_stack_int_a = temp_stack_uint_8m + 1;
                            local_char_1 = loop_counter_1;
                            temp_uint_3 = temp_stack_uint;
                            temp_stack_ptr_8e = temp_ptr_8c;
                            temp_stack_ptr_8d = temp_ptr_8a;
                        }
                        
                        loop_counter_1 = *(char *)((longlong)temp_stack_longlong_ptr + 0x100 + state_data);
                        temp_stack_ptr_8e = (undefined8 *)((longlong)temp_stack_ptr_8e + 1);
                        temp_stack_uint_8m = temp_stack_uint_8m + 1;
                        temp_stack_ptr_8c = temp_ptr_8a + 4;
                        temp_stack_longlong_ptr = temp_stack_longlong_ptr;
                        ui_context = temp_stack_longlong_3;
                    } while ((longlong)temp_stack_ptr_8e < (longlong)(int)temp_uint_3);
                }
                
                temp_uint = temp_uint_3 - 1;
                temp_stack_uint_8n = temp_uint;
                if (0 < (int)temp_uint_3) {
                    temp_stack_ptr_8b = (undefined8 *)((longlong)temp_stack_longlong_ptr + -1);
                    temp_ulonglong = (ulonglong)temp_stack_int_a;
                    temp_stack_int_b = temp_uint_3 - 2;
                    temp_stack_uint_8e = &temp_stack_uint_8j + (longlong)temp_stack_longlong_ptr * 4;
                    temp_stack_ptr_8d = &temp_stack_uint_8l + (longlong)temp_stack_longlong_ptr * 4;
                    temp_stack_ptr_8e = local_stack_buffer_192 + (longlong)temp_stack_longlong_ptr * 4;
                    temp_stack_ptr_8c = temp_stack_array_16 + (longlong)temp_stack_longlong_ptr * 4;
                    temp_int_2 = temp_stack_int_a;
                    temp_stack_uint_8m = temp_uint_3;
                    
                    do {
                        temp_ulonglong_4 = 0;
                        loop_counter_1 = *(char *)(ui_context + 0xa4);
                        local_char_1 = -1;
                        
                        if (0 < (longlong)temp_stack_longlong_ptr) {
                            temp_ulonglong_2 = temp_ulonglong_4;
                            temp_ulonglong_3 = temp_ulonglong;
                            local_char_2 = loop_counter_1;
                            local_char_3 = local_char_1;
                            
                            do {
                                loop_counter_1 = *(char *)((longlong)local_char_2 + 0x100 + state_data);
                                temp_bool = *(int *)((longlong)local_char_2 * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140)) < 0;
                                temp_ulonglong = temp_ulonglong_4;
                                if (temp_bool) {
                                    temp_ulonglong = temp_ulonglong_3;
                                }
                                local_char_1 = local_char_2;
                                temp_int = (int)temp_ulonglong_2;
                                if (temp_bool) {
                                    local_char_1 = local_char_3;
                                    temp_int = temp_int_2;
                                }
                                temp_int_2 = temp_int;
                                temp_ulonglong_2 = (ulonglong)((int)temp_ulonglong_2 + 1);
                                temp_ulonglong_4 = temp_ulonglong_4 + 1;
                                temp_ulonglong_3 = temp_ulonglong;
                                local_char_2 = loop_counter_1;
                                temp_stack_int_a = temp_int_2;
                                local_char_3 = local_char_1;
                            } while ((longlong)temp_ulonglong_4 < (longlong)temp_stack_longlong_ptr);
                        }
                        
                        temp_stack_int_2 = *(int *)((longlong)loop_counter_1 * 0x1b0 + 0x110 + *(longlong *)(state_data + 0x140));
                        temp_stack_uint_8n = temp_uint;
                        
                        if (temp_stack_int_2 != -1) {
                            if (temp_uint == temp_stack_uint_3) {
                                *temp_stack_ptr_8d = temp_uint_8a;
                                temp_stack_ptr_8d[1] = temp_uint_8d;
                            }
                            
                            if (0 < (int)temp_uint) {
                                temp_stack_uint_8c = 0;
                                temp_stack_uint_8d = 0;
                                
                                for (; local_char_1 != loop_counter_1; local_char_1 = *(char *)((longlong)local_char_1 + 0x100 + state_data)) {
                                    temp_longlong = (longlong)local_char_1 * 0x1b0 + *(longlong *)(state_data + 0x140);
                                    temp_stack_uint_8i = *(undefined8 **)(temp_longlong + 0x90);
                                    temp_stack_uint_8j = *(undefined8 *)(temp_longlong + 0x98);
                                    temp_stack_uint_8k = *(undefined4 *)(temp_longlong + 0x80);
                                    temp_stack_uint_8l = *(undefined4 *)(temp_longlong + 0x84);
                                    temp_stack_uint_8m = *(undefined4 *)(temp_longlong + 0x88);
                                    temp_stack_uint_4a = *(undefined4 *)(temp_longlong + 0x8c);
                                    
                                    temp_ptr_8a = (undefined8 *)FUN_1801c10f0(&temp_stack_uint_8i, local_stack_buffer_16o, &temp_stack_uint_8c);
                                    temp_stack_uint_8c = *temp_ptr_8a;
                                    temp_stack_uint_8d = temp_ptr_8a[1];
                                }
                                
                                temp_ptr_8a = &temp_stack_uint_8j + (longlong)(int)temp_uint * 4;
                                if ((int)temp_stack_uint_8m < (int)temp_stack_uint) {
                                    temp_ptr_8c = &temp_stack_uint_8j + (longlong)(int)temp_stack_uint_8m * 4;
                                }
                                else {
                                    temp_ptr_8c = &temp_stack_uint_8h;
                                }
                                
                                temp_stack_uint_8i = temp_ptr_8c;
                                FUN_180300b10(temp_ptr_8c, &temp_stack_uint_8h, temp_ptr_8a);
                                FUN_180285c90(temp_ptr_8a, local_stack_buffer_16c, &temp_stack_uint_8l + (longlong)temp_stack_int_a * 4);
                                
                                temp_uint_8b = FUN_1801503e0(local_stack_buffer_16c, local_stack_buffer_16p);
                                temp_uint_8c = FUN_1801503e0(&temp_stack_uint_8c, local_stack_buffer_16q);
                                func_0x000180085850(temp_uint_8c, &temp_stack_float_c, temp_uint_8b);
                                
                                if ((longlong)temp_ulonglong < (longlong)temp_stack_ptr_8b) {
                                    temp_longlong = (longlong)temp_stack_ptr_8b - temp_ulonglong;
                                    temp_ptr_8b = temp_stack_ptr_8e;
                                    temp_int_2 = temp_stack_int_b;
                                    
                                    do {
                                        temp_ptr_8c = (undefined8 *)
                                                  func_0x00018022b3c0(temp_ptr_8a, local_stack_buffer_16r,
                                                                      &temp_stack_uint_8j + (longlong)temp_int_2 * 4);
                                        temp_int_2 = temp_int_2 + -1;
                                        temp_uint_8b = temp_ptr_8c[1];
                                        *temp_ptr_8b = *temp_ptr_8c;
                                        temp_ptr_8b[1] = temp_uint_8b;
                                        temp_longlong = temp_longlong + -1;
                                        temp_ptr_8b = temp_ptr_8b + -4;
                                        temp_ptr_8c = temp_stack_uint_8i;
                                    } while (temp_longlong != 0);
                                }
                                
                                temp_int_2 = temp_stack_int_b;
                                if (((temp_stack_float_c != 0.0) || (temp_stack_float_d != 0.0)) || (temp_stack_float_e != 0.0)) {
                                    temp_float_h = temp_stack_float_d * temp_stack_float_d + temp_stack_float_c * temp_stack_float_c +
                                             temp_stack_float_e * temp_stack_float_e;
                                    local_buffer_16b = rsqrtss(ZEXT416((uint)temp_float_h), ZEXT416((uint)temp_float_h));
                                    temp_float_j = local_buffer_16b._0_4_;
                                    temp_float_j = temp_float_j * 0.5 * (3.0 - temp_float_h * temp_float_j * temp_float_j);
                                    temp_stack_float_c = temp_stack_float_c * temp_float_j;
                                    temp_stack_float_d = temp_stack_float_d * temp_float_j;
                                    temp_stack_float_e = temp_stack_float_e * temp_float_j;
                                    
                                    asinf();
                                    FUN_18063b860(local_stack_buffer_16a, &temp_stack_float_c);
                                    temp_ptr_8b = (undefined8 *)func_0x00018022b490(&temp_stack_uint_8h, &temp_stack_uint_8k, local_stack_buffer_16a);
                                    temp_stack_uint_8h = *temp_ptr_8b;
                                    temp_stack_uint_8i = temp_ptr_8b[1];
                                }
                                
                                temp_stack_ptr_8b = &temp_stack_uint_8i;
                                temp_stack_float_m = UI_INVERSE_WEIGHT_FACTOR / (interpolation_param + UI_WEIGHT_FACTOR);
                                temp_stack_uint_8i = (undefined8 *)temp_stack_uint_8h;
                                temp_stack_uint_8j = temp_stack_uint_8i;
                                
                                temp_ptr_8b = (undefined8 *)FUN_18040b910(state_data, local_stack_buffer_16s, loop_counter_1, temp_stack_int_2);
                                temp_stack_uint_8h = *temp_ptr_8b;
                                temp_stack_uint_8i = temp_ptr_8b[1];
                                
                                temp_ptr_8c = (undefined8 *)func_0x00018022b490(temp_ptr_8b, local_stack_buffer_16t, &temp_stack_uint_8h);
                                temp_uint_8b = temp_ptr_8c[1];
                                *temp_stack_uint_8e = *temp_ptr_8c;
                                temp_stack_uint_8e[1] = temp_uint_8b;
                                
                                if ((longlong)temp_ulonglong < (longlong)temp_stack_ptr_8b) {
                                    temp_longlong = (longlong)temp_stack_ptr_8b - temp_ulonglong;
                                    temp_ptr_8c = temp_stack_ptr_8c;
                                    
                                    do {
                                        temp_ptr_8b = (undefined8 *)
                                                  func_0x00018022b490(temp_ptr_8a, local_stack_buffer_16u,
                                                                      temp_stack_array_longlong + (longlong)temp_int_2 * 4);
                                        temp_int_2 = temp_int_2 + -1;
                                        temp_uint_8b = temp_ptr_8b[1];
                                        *temp_ptr_8c = *temp_ptr_8b;
                                        temp_ptr_8c[1] = temp_uint_8b;
                                        temp_longlong = temp_longlong + -1;
                                        temp_ptr_8c = temp_ptr_8c + -4;
                                    } while (temp_longlong != 0);
                                }
                                
                                temp_uint_4_ptr = (undefined4 *)FUN_1801c10f0(temp_ptr_8a, temp_stack_array_float, &temp_stack_uint_8c);
                                temp_uint_4b = temp_uint_4_ptr[1];
                                temp_stack_uint_4b = temp_uint_4_ptr[2];
                                temp_stack_uint_4c = temp_uint_4_ptr[3];
                                
                                temp_longlong = temp_ulonglong * 0x20;
                                *(undefined4 *)(&temp_stack_uint_8l + temp_ulonglong * 4) = *temp_uint_4_ptr;
                                *(undefined4 *)((longlong)&temp_stack_uint_8l + temp_longlong + 4) = temp_uint_4b;
                                *(undefined4 *)(local_stack_buffer_192 + temp_longlong + -8) = temp_stack_uint_4b;
                                *(undefined4 *)(local_stack_buffer_192 + temp_longlong + -4) = temp_stack_uint_4c;
                                
                                temp_int_2 = temp_stack_int_a;
                            }
                        }
                        
                        temp_stack_ptr_8e = temp_stack_ptr_8e + -4;
                        temp_uint = temp_stack_uint_8n - 1;
                        temp_stack_ptr_8d = temp_stack_ptr_8d + -4;
                        temp_stack_ptr_8c = temp_stack_ptr_8c + -4;
                        temp_stack_uint_8e = temp_stack_uint_8e + -4;
                        temp_stack_int_b = temp_stack_int_b + -1;
                        temp_stack_ptr_8b = (undefined8 *)((longlong)temp_stack_ptr_8b + -1);
                        temp_stack_longlong_ptr = (longlong *)((longlong)temp_stack_longlong_ptr + -1);
                        ui_context = temp_stack_longlong_3;
                        temp_stack_uint_8n = temp_uint;
                    } while (-1 < (int)temp_uint);
                }
                
                temp_stack_uint_8f = temp_stack_uint_8l;
                temp_stack_uint_8g = temp_stack_uint_8k;
                temp_float_ptr_2 = (float *)FUN_1801c10f0(&temp_stack_uint_8k, local_stack_buffer_16a, &temp_stack_uint_8f);
                temp_stack_float_b = (float)((int)temp_stack_float_b + 1);
                temp_float_j = *temp_float_ptr_2;
                temp_float_h = temp_float_ptr_2[1];
                temp_stack_uint_8f = *(undefined8 *)temp_float_ptr_2;
                temp_float_i = temp_float_ptr_2[2];
                temp_stack_uint_8g = *(undefined8 *)(temp_float_ptr_2 + 2);
                
                temp_float_f = (temp_float_j - (float)temp_stack_uint_8e) * temp_float_a;
                temp_float_g = (temp_float_h - temp_stack_uint_8e._4_4_) * temp_float_a;
                temp_float_e = (temp_float_i - (float)temp_stack_longlong) * temp_float_a;
                temp_float_e = temp_float_g * temp_float_g + temp_float_f * temp_float_f + temp_float_e * temp_float_e;
                
                if (temp_float_e <= UI_TRANSFORM_EPSILON) break;
                
                temp_longlong_ptr = (longlong *)((longlong)local_stack_buffer_8 + -1);
                local_buffer_19 = local_stack_buffer_8;
                ui_context = temp_stack_longlong_3;
                temp_uint_3 = temp_stack_uint;
            } while ((int)temp_stack_float_b < UI_MAX_TRANSFORM_ITERATIONS);
            
            *(bool *)(temp_stack_longlong_3 + 0x1c4) = temp_float_e <= UI_TRANSFORM_EPSILON;
            if (UI_TRANSFORM_EPSILON < temp_float_e) {
                temp_float_g = ((float)temp_stack_longlong - temp_float_i) * temp_float_a;
                temp_float_e = ((float)temp_stack_uint_8e - temp_float_j) * temp_float_a;
                temp_float_a = (temp_stack_uint_8e._4_4_ - temp_float_h) * temp_float_a;
                temp_float_i = temp_float_a * temp_float_a + temp_float_e * temp_float_e + temp_float_g * temp_float_g;
                
                local_buffer_16b = rsqrtss(ZEXT416((uint)temp_float_i), ZEXT416((uint)temp_float_i));
                temp_float_j = local_buffer_16b._0_4_;
                temp_float_h = temp_float_j * 0.5 * (3.0 - temp_float_i * temp_float_j * temp_float_j);
                temp_float_i = temp_float_i * temp_float_h - UI_NORMALIZATION_CONSTANT;
                temp_float_j = temp_float_h * temp_float_e * temp_float_i;
                temp_float_a = temp_float_h * temp_float_a * temp_float_i;
                temp_float_i = temp_float_h * temp_float_g * temp_float_i;
                
                temp_stack_uint_8c = CONCAT44(temp_float_a, temp_float_j);
                temp_stack_uint_8d = CONCAT44(UI_FLOAT_PRECISION, temp_float_i);
                
                *(float *)(temp_stack_longlong_3 + 0x1b0) = temp_float_j;
                *(float *)(temp_stack_longlong_3 + 0x1b4) = temp_float_a;
                *(float *)(temp_stack_longlong_3 + 0x1b8) = temp_float_i;
                *(undefined4 *)(temp_stack_longlong_3 + 0x1bc) = UI_FLOAT_PRECISION;
            }
            else {
                *(undefined8 *)(temp_stack_longlong_3 + 0x1b0) = 0;
                *(undefined8 *)(temp_stack_longlong_3 + 0x1b8) = 0;
            }
            
            local_char_1 = -1;
            loop_counter_1 = *(char *)(temp_stack_longlong_3 + 0xa4);
            temp_stack_char = loop_counter_1;
            temp_longlong_ptr = (longlong *)(ulonglong)temp_stack_uint;
            
            if (0 < (int)temp_stack_uint) {
                do {
                    temp_stack_longlong_ptr = temp_longlong_ptr;
                    temp_longlong = temp_stack_longlong_2;
                    temp_longlong_4 = (longlong)loop_counter_1 * 0x1b0;
                    local_stack_buffer_8 = (undefined1 [8])(longlong)loop_counter_1;
                    local_flag = *(byte *)(temp_longlong_4 + 0xf1 + *(longlong *)(state_data + 0x140));
                    temp_stack_char = loop_counter_1;
                    
                    if ('\0' < (char)local_flag) {
                        temp_longlong_3 = 0;
                        temp_ulonglong = (ulonglong)local_flag;
                        
                        do {
                            loop_counter_1 = *(char *)(temp_longlong_3 + *(longlong *)
                                                                (temp_longlong_4 + 0xf8 + *(longlong *)(state_data + 0x140)));
                            if (loop_counter_1 != local_char_1) {
                                temp_float_ptr_2 = (float *)FUN_18022a890(temp_longlong, loop_counter_1, state_data);
                                temp_longlong_2 = (longlong)loop_counter_1;
                                temp_float_a = temp_float_ptr_2[1];
                                temp_float_j = temp_float_ptr_2[2];
                                temp_float_h = temp_float_ptr_2[3];
                                temp_stack_array_float[temp_longlong_2 * 4] = *temp_float_ptr_2;
                                temp_stack_array_float[temp_longlong_2 * 4 + 1] = temp_float_a;
                                *(float *)(&temp_stack_uint_8n + temp_longlong_2 * 2) = temp_float_j;
                                *(float *)((longlong)&temp_stack_uint_8n + temp_longlong_2 * 0x10 + 4) = temp_float_h;
                            }
                            temp_longlong_3 = temp_longlong_3 + 1;
                            temp_ulonglong = temp_ulonglong - 1;
                        } while (temp_ulonglong != 0);
                    }
                    
                    loop_counter_1 = *(char *)((longlong)local_stack_buffer_8 + 0x100 + state_data);
                    local_char_1 = temp_stack_char;
                    temp_longlong_ptr = (longlong *)((longlong)temp_stack_longlong_ptr - 1U);
                } while ((longlong)temp_stack_longlong_ptr - 1U != 0);
                temp_stack_longlong_ptr = (longlong *)0x0;
                temp_stack_char = loop_counter_1;
            }
            
            temp_longlong = temp_stack_longlong_3;
            temp_stack_uint_8l = temp_stack_uint_8k;
            temp_stack_uint_8k = temp_stack_uint_8j;
            temp_stack_uint_8i = temp_stack_uint_8m;
            temp_stack_uint_8h = temp_stack_uint_8n;
            temp_uint_4b = (undefined4)temp_stack_uint_8m;
            temp_stack_uint_4b = temp_stack_uint_8m._4_4_;
            temp_stack_uint_4c = (undefined4)temp_stack_uint_8n;
            temp_stack_uint_4d = temp_stack_uint_8n._4_4_;
            
            if (temp_stack_byte != 0xff) {
                temp_ptr_8a = (undefined8 *)FUN_180300bf0(&temp_stack_uint_8l, &temp_stack_uint_8h, &temp_stack_uint_8h);
                temp_stack_uint_8l = *temp_ptr_8a;
                temp_stack_uint_8k = temp_ptr_8a[1];
                temp_uint_4b = *(undefined4 *)(temp_ptr_8a + 2);
                temp_stack_uint_4b = *(undefined4 *)((longlong)temp_ptr_8a + 0x14);
                temp_stack_uint_8i = temp_ptr_8a[2];
                temp_stack_uint_4c = *(undefined4 *)(temp_ptr_8a + 3);
                temp_stack_uint_4d = *(undefined4 *)((longlong)temp_ptr_8a + 0x1c);
                temp_stack_uint_8h = temp_ptr_8a[3];
            }
            
            temp_ulonglong = (ulonglong)(int)temp_stack_uint_3;
            if (-1 < (int)temp_stack_uint_3) {
                temp_longlong_ptr = temp_stack_array_longlong + temp_ulonglong * 4;
                temp_float_ptr_2 = (float *)((temp_ulonglong + 0xb) * 0x10 + temp_longlong);
                
                do {
                    loop_counter_1 = *(char *)(temp_longlong + 0xa4);
                    temp_int_2 = (int)temp_ulonglong;
                    if (0 < temp_int_2) {
                        temp_ulonglong = temp_ulonglong & 0xffffffff;
                        do {
                            local_char_1 = loop_counter_1;
                            loop_counter_1 = *(char *)((longlong)local_char_1 + 0x100 + state_data);
                            temp_ulonglong = temp_ulonglong - 1;
                        } while (temp_ulonglong != 0);
                    }
                    
                    temp_stack_uint_8f = CONCAT44(temp_stack_uint_4b, temp_uint_4b);
                    temp_stack_uint_8g = CONCAT44(temp_stack_uint_4d, temp_stack_uint_4c);
                    local_stack_buffer_8 = (undefined1 [8])((longlong)temp_int_2 * 0x20);
                    temp_stack_longlong_ptr = temp_longlong_ptr;
                    temp_stack_uint_8h = temp_stack_uint_8l;
                    temp_stack_uint_8i = temp_stack_uint_8k;
                    
                    temp_ptr_8a = (undefined8 *)
                              FUN_180300bf0(&temp_stack_uint_8k, &temp_stack_uint_8j, &temp_stack_uint_8j + (longlong)temp_int_2 * 4);
                    temp_stack_uint_8l = *temp_ptr_8a;
                    temp_stack_uint_8k = temp_ptr_8a[1];
                    temp_stack_uint_8i = temp_ptr_8a[2];
                    temp_stack_uint_8h = temp_ptr_8a[3];
                    
                    temp_longlong_ptr_2 = (longlong *)FUN_180300b10(&temp_stack_uint_8h, &temp_stack_uint_8j, &temp_stack_uint_8l);
                    temp_longlong_4 = temp_longlong_ptr_2[1];
                    *temp_longlong_ptr = *temp_longlong_ptr_2;
                    temp_longlong_ptr[1] = temp_longlong_4;
                    temp_uint_4b = *(undefined4 *)((longlong)temp_longlong_ptr_2 + 0x14);
                    temp_longlong_4 = temp_longlong_ptr_2[3];
                    temp_stack_uint_4b = *(undefined4 *)((longlong)temp_longlong_ptr_2 + 0x1c);
                    *(int *)(temp_longlong_ptr + 2) = (int)temp_longlong_ptr_2[2];
                    *(undefined4 *)((longlong)temp_longlong_ptr + 0x14) = temp_uint_4b;
                    *(int *)(temp_longlong_ptr + 3) = (int)temp_longlong_4;
                    *(undefined4 *)((longlong)temp_longlong_ptr + 0x1c) = temp_stack_uint_4b;
                    
                    if (loop_counter_1 == *(char *)(temp_longlong + 0xa4)) {
                        temp_int_2 = *(int *)(temp_longlong + 0xa0);
                        if (temp_int_2 == 5) {
                        MODE5_FINAL_PROCESSING_LABEL:
                            temp_stack_uint_8l = temp_stack_uint_8a;
                            temp_stack_uint_8k = temp_stack_uint_8f;
                        }
                        else if (temp_int_2 == 6) {
                            temp_stack_uint_8l = *(undefined8 *)(temp_longlong + 0x20);
                            temp_stack_uint_8k = *(undefined8 *)(temp_longlong + 0x28);
                        }
                        else {
                            if (temp_int_2 != 3) goto MODE5_FINAL_PROCESSING_LABEL;
                            temp_stack_uint_8l = *(undefined8 *)(temp_longlong + 0x20);
                            temp_stack_uint_8k = *(undefined8 *)(temp_longlong + 0x28);
                            if (0.0 < *(float *)(temp_longlong + 0x30)) {
                                temp_float_ptr = (float *)FUN_1801c10f0(&temp_stack_uint_8l, local_stack_buffer_16a, &temp_stack_uint_8e);
                                temp_float_a = *temp_float_ptr;
                                temp_float_j = *(float *)(temp_stack_longlong + 0x30);
                                temp_float_h = *(float *)(temp_stack_longlong + 0x34);
                                temp_float_i = *(float *)(temp_stack_longlong + 0x38);
                                temp_float_g = temp_float_ptr[1];
                                temp_float_f = temp_float_ptr[2];
                                temp_uint_8a = func_0x0001803812e0(&temp_stack_uint_8g, temp_stack_array_float);
                                FUN_1801c0fb0(&temp_stack_uint_8l, local_stack_buffer_16c, temp_uint_8a);
                                temp_stack_uint_8c = CONCAT44(*(float *)(temp_longlong + 0x14) -
                                                              ((temp_float_g - temp_float_h) * temp_stack_float_b + temp_float_h),
                                                              *(float *)(temp_longlong + 0x10) -
                                                              ((temp_float_a - temp_float_j) * temp_stack_float_b + temp_float_j));
                                temp_stack_uint_8d = CONCAT44(UI_FLOAT_PRECISION,
                                                              *(float *)(temp_longlong + 0x18) -
                                                              ((temp_float_f - temp_float_i) * temp_stack_float_b + temp_float_i));
                                FUN_1801503e0(&temp_stack_uint_8c, local_stack_buffer_16a);
                                func_0x000180085850(local_stack_buffer_16c, &temp_stack_float_c, local_stack_buffer_16a);
                                
                                if (((temp_stack_float_c != 0.0) || (temp_stack_float_d != 0.0)) || (temp_stack_float_e != 0.0)) {
                                    temp_float_j = temp_stack_float_d * temp_stack_float_d + temp_stack_float_c * temp_stack_float_c +
                                             temp_stack_float_e * temp_stack_float_e;
                                    local_buffer_16b = rsqrtss(ZEXT416((uint)temp_float_j), ZEXT416((uint)temp_float_j));
                                    temp_float_a = local_buffer_16b._0_4_;
                                    temp_float_a = temp_float_a * 0.5 * (3.0 - temp_float_j * temp_float_a * temp_float_a);
                                    temp_stack_float_c = temp_stack_float_c * temp_float_a;
                                    temp_stack_float_d = temp_stack_float_d * temp_float_a;
                                    temp_stack_float_e = temp_stack_float_e * temp_float_a;
                                    
                                    asinf();
                                    FUN_18063b860(local_stack_buffer_16j, &temp_stack_float_c);
                                    temp_ptr_8a = (undefined8 *)func_0x00018022b490(local_stack_buffer_16j, local_stack_buffer_16l, &temp_stack_uint_8l);
                                    temp_stack_uint_8l = *temp_ptr_8a;
                                    temp_stack_uint_8k = temp_ptr_8a[1];
                                }
                            }
                        }
                        
                        temp_longlong_ptr_2 = (longlong *)FUN_180300b10(&temp_stack_uint_8h, &temp_stack_uint_8j, &temp_stack_uint_8l);
                        temp_longlong = temp_longlong_ptr_2[1];
                        *temp_longlong_ptr = *temp_longlong_ptr_2;
                        temp_longlong_ptr[1] = temp_longlong;
                        temp_uint_4b = *(undefined4 *)((longlong)temp_longlong_ptr_2 + 0x14);
                        temp_longlong = temp_longlong_ptr_2[3];
                        temp_stack_uint_4b = *(undefined4 *)((longlong)temp_longlong_ptr_2 + 0x1c);
                        *(int *)(temp_longlong_ptr + 2) = (int)temp_longlong_ptr_2[2];
                        *(undefined4 *)((longlong)temp_longlong_ptr + 0x14) = temp_uint_4b;
                        *(int *)(temp_longlong_ptr + 3) = (int)temp_longlong;
                        *(undefined4 *)((longlong)temp_longlong_ptr + 0x1c) = temp_stack_uint_4b;
                    }
                    
                    temp_stack_longlong_ptr = (longlong *)*temp_longlong_ptr;
                    temp_stack_longlong_2 = temp_longlong_ptr[1];
                    func_0x00018022b430(&temp_stack_longlong_ptr);
                    temp_longlong = (longlong)loop_counter_1;
                    func_0x00018022b3c0(temp_stack_longlong_2 + 0x820 + temp_longlong * 0x10, &temp_stack_float_g, &temp_stack_longlong_ptr);
                    
                    if ((*(float *)(temp_stack_longlong_3 + 0x1dc) <= 30.0 && *(float *)(temp_stack_longlong_3 + 0x1dc) != 30.0) &&
                        (loop_counter_1 != *(char *)(temp_stack_longlong_3 + 0xa4))) {
                        func_0x00018022b3c0(((longlong)(int)temp_stack_uint_3 + 0xb) * 0x10 + temp_stack_longlong_3, local_stack_buffer_16p,
                                            &temp_stack_float_g);
                        FUN_18063b720(local_stack_buffer_16q, &temp_stack_float_b, local_stack_buffer_16p);
                        
                        if (UI_MAX_ANGLE_DEVIATION < temp_stack_float_b) {
                            temp_stack_float_b = UI_ANGLE_MULTIPLIER - temp_stack_float_b;
                        }
                        
                        temp_float_a = weight_param * *(float *)(temp_stack_longlong_3 + 0x1dc);
                        if (temp_float_a < temp_stack_float_b) {
                            temp_float_a = temp_float_a / temp_stack_float_b;
                            if (UI_TRANSFORM_THRESHOLD <= temp_float_a) {
                                if (temp_float_a <= UI_TRANSFORM_UPPER_BOUND) {
                                    temp_float_j = *temp_float_ptr_2;
                                    temp_float_h = temp_float_ptr_2[1];
                                    temp_float_i = temp_float_ptr_2[2];
                                    temp_float_g = temp_float_ptr_2[3];
                                    temp_float_f = temp_float_i * temp_stack_float_e;
                                    temp_float_e = temp_float_g * temp_stack_float_j;
                                    temp_stack_uint_4h = 0xbf800000;
                                    temp_stack_uint_4i = 0xbf800000;
                                    temp_stack_uint_4j = 0xbf800000;
                                    temp_stack_uint_4k = 0xbf800000;
                                    
                                    local_buffer_16d._0_4_ = temp_float_f + temp_float_j * temp_stack_float_g;
                                    local_buffer_16d._4_4_ = temp_float_e + temp_float_h * temp_stack_float_h;
                                    local_buffer_16d._8_4_ = temp_float_f + temp_float_f;
                                    local_buffer_16d._12_4_ = temp_float_e + temp_float_e;
                                    
                                    local_buffer_16c._4_12_ = local_buffer_16d._4_12_;
                                    local_buffer_16c._0_4_ = local_buffer_16d._0_4_ + local_buffer_16d._4_4_;
                                    
                                    temp_stack_uint_8j = 0x3f8000003f800000;
                                    temp_stack_uint_8k = 0x3f8000003f800000;
                                    
                                    temp_uint = movmskps((int)temp_stack_longlong_3, local_buffer_16c);
                                    temp_ulonglong = (ulonglong)(temp_uint & 1);
                                    temp_float_f = *(float *)(&temp_stack_uint_8j + temp_ulonglong * 2) * temp_stack_float_g;
                                    temp_float_e = *(float *)((longlong)&temp_stack_uint_8j + temp_ulonglong * 0x10 + 4) * temp_stack_float_h;
                                    temp_float_l = *(float *)(&temp_stack_uint_8k + temp_ulonglong * 2) * temp_stack_float_e;
                                    temp_float_k = *(float *)((longlong)&temp_stack_uint_8k + temp_ulonglong * 0x10 + 4) * temp_stack_float_j;
                                    
                                    if (UI_TRANSFORM_NORMALIZATION_THRESHOLD < ABS(local_buffer_16c._0_4_)) {
                                        temp_float_m = 1.0 - temp_float_a;
                                        temp_stack_uint_8i = (undefined8 *)
                                                     CONCAT44(temp_float_m * temp_float_h + temp_float_a * temp_float_e,
                                                              temp_float_m * temp_float_j + temp_float_a * temp_float_f);
                                        temp_stack_uint_8j = CONCAT44(temp_float_m * temp_float_g + temp_float_a * temp_float_k,
                                                              temp_float_m * temp_float_i + temp_float_a * temp_float_l);
                                        func_0x00018022b430(&temp_stack_uint_8i);
                                        temp_stack_float_g = (float)temp_stack_uint_8i;
                                        temp_stack_float_h = temp_stack_uint_8i._4_4_;
                                        temp_stack_float_e = (float)temp_stack_uint_8j;
                                        temp_stack_float_j = temp_stack_uint_8j._4_4_;
                                    }
                                    else {
                                        acosf();
                                        temp_float_a = (float)sinf();
                                        temp_float_m = (float)sinf();
                                        temp_float_m = temp_float_m * (1.0 / temp_float_a);
                                        temp_float_b = (float)sinf();
                                        temp_float_b = temp_float_b * (1.0 / temp_float_a);
                                        temp_stack_float_g = temp_float_m * temp_float_j + temp_float_b * temp_float_f;
                                        temp_stack_float_h = temp_float_m * temp_float_h + temp_float_b * temp_float_e;
                                        temp_stack_float_e = temp_float_m * temp_float_i + temp_float_b * temp_float_l;
                                        temp_stack_float_j = temp_float_m * temp_float_g + temp_float_b * temp_float_k;
                                    }
                                }
                            }
                            else {
                                temp_stack_float_g = *temp_float_ptr_2;
                                temp_stack_float_h = temp_float_ptr_2[1];
                                temp_stack_float_e = temp_float_ptr_2[2];
                                temp_stack_float_j = temp_float_ptr_2[3];
                            }
                            
                            temp_longlong_ptr_2 = (longlong *)
                                      func_0x00018022b490((temp_longlong + 0x82) * 0x10 + temp_stack_longlong_2, local_stack_buffer_16s,
                                                          &temp_stack_float_g);
                            temp_stack_longlong_ptr = (longlong *)*temp_longlong_ptr_2;
                            temp_stack_longlong_2 = temp_longlong_ptr_2[1];
                            *temp_longlong_ptr = (longlong)temp_stack_longlong_ptr;
                            temp_longlong_ptr[1] = temp_stack_longlong_2;
                            
                            temp_ptr_8a = (undefined8 *)
                                      FUN_180300bf0(&temp_stack_uint_8h, &temp_stack_uint_8j,
                                                    (longlong)temp_stack_array_longlong + (longlong)local_stack_buffer_8);
                            temp_stack_uint_8l = *temp_ptr_8a;
                            temp_stack_uint_8k = temp_ptr_8a[1];
                            temp_stack_uint_8i = temp_ptr_8a[2];
                            temp_stack_uint_8h = temp_ptr_8a[3];
                        }
                    }
                    
                    *(ulonglong *)temp_float_ptr_2 = CONCAT44(temp_stack_float_h, temp_stack_float_g);
                    *(ulonglong *)(temp_float_ptr_2 + 2) = CONCAT44(temp_stack_float_j, temp_stack_float_e);
                    
                    temp_uint_4b = func_0x00018022b3c0(&temp_stack_uint_8k, &temp_stack_uint_8e, &temp_stack_uint_8l);
                    temp_float_a = temp_stack_float_f;
                    temp_longlong_4 = temp_stack_longlong_2;
                    temp_float_ptr_2[0x20] = (float)temp_stack_uint_8e;
                    temp_float_ptr_2[0x21] = temp_stack_uint_8e._4_4_;
                    temp_float_ptr_2[0x22] = temp_stack_float_k;
                    temp_float_ptr_2[0x23] = temp_stack_float_l;
                    
                    if (1.0 <= temp_stack_float_f) {
                        FUN_18022b240(temp_stack_longlong_2, loop_counter_1, &temp_stack_uint_8e, state_data);
                        if (loop_counter_1 == '\0') {
                            temp_uint_8a = *(undefined8 *)(temp_longlong_4 + 0x1028);
                            temp_float_a = (float)*(undefined8 *)(temp_longlong_4 + 0x1020) + (float)local_stack_buffer_8b._0_4_;
                            local_stack_buffer_8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(temp_longlong_4 + 0x1020) >> 0x20);
                            temp_stack_uint_8d._0_4_ = (float)temp_uint_8a;
                            temp_stack_uint_8d._4_4_ = (float)((ulonglong)temp_uint_8a >> 0x20);
                            local_buffer_16d._4_8_ = temp_uint_8a;
                            local_buffer_16d._0_4_ = local_stack_buffer_8._4_4_;
                            local_buffer_16f._0_8_ = local_buffer_16d._0_8_ << 0x20;
                            local_buffer_16f._8_4_ = (float)temp_stack_uint_8d;
                            local_buffer_16f._12_4_ = temp_stack_uint_8d._4_4_;
                            local_buffer_16e._4_8_ = local_buffer_16f._8_8_;
                            local_buffer_16e._0_4_ = temp_float_a;
                            local_buffer_16g._0_8_ = local_buffer_16e._0_8_ << 0x20;
                            local_buffer_16g._8_4_ = (float)temp_stack_uint_8d;
                            local_buffer_16g._12_4_ = temp_stack_uint_8d._4_4_;
                            local_buffer_16c._4_12_ = local_buffer_16g._4_12_;
                            local_buffer_16c._0_4_ = (float)temp_stack_uint_8d + temp_stack_float_m;
                        FINAL_TRANSFORM_LABEL:
                            *(ulonglong *)(temp_longlong_4 + 0x800) =
                                 *(ulonglong *)(temp_longlong_4 + 0x800) | *(ulonglong *)(temp_longlong_4 + 0x810);
                            temp_stack_uint_8d._4_4_ = local_buffer_16c._12_4_;
                            local_stack_buffer_8 = local_buffer_16c._4_8_;
                            temp_stack_uint_8d._0_4_ = (float)local_buffer_16c._0_4_;
                            *(undefined1 (*) [16])(temp_longlong_4 + 0x1020) = local_stack_buffer_8;
                        }
                    }
                    else {
                        if (UI_TRANSFORM_THRESHOLD <= temp_stack_float_f) {
                            if (temp_stack_float_f <= UI_TRANSFORM_UPPER_BOUND) {
                                temp_float_j = temp_stack_array_float[temp_longlong * 4];
                                temp_float_h = temp_stack_array_float[temp_longlong * 4 + 1];
                                temp_float_i = *(float *)(&temp_stack_uint_8n + temp_longlong * 2);
                                temp_float_g = *(float *)((longlong)&temp_stack_uint_8n + temp_longlong * 0x10 + 4);
                                temp_float_f = temp_float_i * temp_stack_float_k;
                                temp_float_e = temp_float_g * temp_stack_float_l;
                                temp_stack_uint_4h = 0xbf800000;
                                temp_stack_uint_4i = 0xbf800000;
                                temp_stack_uint_4j = 0xbf800000;
                                temp_stack_uint_4k = 0xbf800000;
                                
                                local_buffer_16h._0_4_ = temp_float_f + temp_float_j * (float)temp_stack_uint_8e;
                                local_buffer_16h._4_4_ = temp_float_e + temp_float_h * temp_stack_uint_8e._4_4_;
                                local_buffer_16h._8_4_ = temp_float_f + temp_float_f;
                                local_buffer_16h._12_4_ = temp_float_e + temp_float_e;
                                
                                local_buffer_16g._4_12_ = local_buffer_16h._4_12_;
                                local_buffer_16g._0_4_ = local_buffer_16h._0_4_ + local_buffer_16h._4_4_;
                                
                                temp_stack_uint_8j = 0x3f8000003f800000;
                                temp_stack_uint_8k = 0x3f8000003f800000;
                                
                                temp_uint = movmskps(temp_uint_4b, local_buffer_16g);
                                temp_ulonglong = (ulonglong)(temp_uint & 1);
                                temp_float_f = *(float *)(&temp_stack_uint_8j + temp_ulonglong * 2) * (float)temp_stack_uint_8e;
                                temp_float_e = *(float *)((longlong)&temp_stack_uint_8j + temp_ulonglong * 0x10 + 4) * temp_stack_uint_8e._4_4_;
                                temp_float_l = *(float *)(&temp_stack_uint_8k + temp_ulonglong * 2) * temp_stack_float_k;
                                temp_float_k = *(float *)((longlong)&temp_stack_uint_8k + temp_ulonglong * 0x10 + 4) * temp_stack_float_l;
                                
                                if (UI_TRANSFORM_NORMALIZATION_THRESHOLD < ABS(local_buffer_16g._0_4_)) {
                                    temp_float_m = 1.0 - temp_stack_float_f;
                                    local_stack_buffer_8._4_4_ = temp_float_m * temp_float_h + temp_stack_float_f * temp_float_e;
                                    local_stack_buffer_8._0_4_ = temp_float_m * temp_float_j + temp_stack_float_f * temp_float_f;
                                    temp_stack_uint_8d._0_4_ = temp_float_m * temp_float_i + temp_stack_float_f * temp_float_l;
                                    temp_stack_uint_8d._4_4_ = temp_float_m * temp_float_g + temp_stack_float_f * temp_float_k;
                                    func_0x00018022b430(local_stack_buffer_8);
                                    temp_float_j = (float)local_stack_buffer_8._0_4_;
                                    temp_float_h = (float)local_stack_buffer_8._4_4_;
                                    temp_float_i = (float)temp_stack_uint_8d;
                                    temp_float_g = temp_stack_uint_8d._4_4_;
                                }
                                else {
                                    acosf();
                                    temp_float_a = (float)sinf();
                                    temp_float_m = (float)sinf();
                                    temp_float_m = temp_float_m * (1.0 / temp_float_a);
                                    temp_float_b = (float)sinf();
                                    temp_float_b = temp_float_b * (1.0 / temp_float_a);
                                    temp_float_a = temp_stack_float_f;
                                    temp_float_j = temp_float_m * temp_float_j + temp_float_b * temp_float_f;
                                    temp_float_h = temp_float_m * temp_float_h + temp_float_b * temp_float_e;
                                    temp_float_i = temp_float_m * temp_float_i + temp_float_b * temp_float_l;
                                    temp_float_g = temp_float_m * temp_float_g + temp_float_b * temp_float_k;
                                }
                                
                                temp_stack_uint_8i = (undefined8 *)CONCAT44(temp_float_h, temp_float_j);
                                temp_stack_uint_8j = CONCAT44(temp_float_g, temp_float_i);
                            }
                            else {
                                temp_stack_uint_8i = temp_stack_uint_8e;
                                temp_stack_uint_8j = CONCAT44(temp_stack_float_l, temp_stack_float_k);
                            }
                        }
                        else {
                            temp_stack_uint_8i = *(undefined8 **)(temp_stack_array_float + temp_longlong * 4);
                            temp_stack_uint_8j = (&temp_stack_uint_8n)[temp_longlong * 2];
                        }
                        
                        func_0x00018022b430(&temp_stack_uint_8i);
                        temp_longlong_4 = temp_stack_longlong_2;
                        FUN_18022b240(temp_stack_longlong_2, loop_counter_1, &temp_stack_uint_8i, state_data);
                        
                        if (loop_counter_1 == '\0') {
                            temp_float_j = *(float *)(temp_longlong_4 + 0x1028);
                            temp_uint_4b = *(undefined4 *)(temp_longlong_4 + 0x102c);
                            local_buffer_16i._4_8_ = temp_stack_uint_8d;
                            local_buffer_16i._0_4_ = *(float *)(temp_longlong_4 + 0x1024);
                            local_stack_buffer_8 = (undefined1 [8])(local_buffer_16i._0_8_ << 0x20);
                            temp_stack_uint_8d._0_4_ = temp_float_j;
                            temp_stack_uint_8d._4_4_ = (float)temp_uint_4b;
                            temp_float_h = (float)local_stack_buffer_8b._0_4_ * temp_float_a + *(float *)(temp_longlong_4 + 0x1020);
                            local_buffer_16j._4_8_ = local_stack_buffer_8._8_8_;
                            local_buffer_16j._0_4_ = temp_float_h;
                            local_buffer_16f._0_8_ = local_buffer_16j._0_8_ << 0x20;
                            local_buffer_16f._8_4_ = temp_float_j;
                            local_buffer_16f._12_4_ = temp_uint_4b;
                            local_buffer_16g._4_8_ = local_buffer_16f._8_8_;
                            local_buffer_16g._0_4_ = temp_float_h;
                            local_buffer_16h._0_8_ = local_buffer_16g._0_8_ << 0x20;
                            local_buffer_16h._8_4_ = *(float *)(temp_longlong_4 + 0x1024) + (float)local_stack_buffer_8b._4_4_ * temp_float_a;
                            local_buffer_16h._12_4_ = temp_uint_4b;
                            local_buffer_16c._4_12_ = local_buffer_16h._4_12_;
                            local_buffer_16c._0_4_ = temp_float_j + temp_float_a * temp_stack_float_m;
                            goto FINAL_TRANSFORM_LABEL;
                        }
                    }
                    
                    temp_longlong_4 = temp_stack_longlong_2;
                    local_flag = *(byte *)(temp_longlong * 0x1b0 + 0xf1 + *(longlong *)(state_data + 0x140));
                    if ('\x01' < (char)local_flag) {
                        temp_longlong_3 = 0;
                        temp_ulonglong = (ulonglong)local_flag;
                        
                        do {
                            loop_counter_1 = *(char *)(temp_longlong_3 + *(longlong *)
                                                                (temp_longlong * 0x1b0 + 0xf8 + *(longlong *)(state_data + 0x140)));
                            if (loop_counter_1 != local_char_1) {
                                FUN_18022b240(temp_longlong_4, loop_counter_1, temp_stack_array_float + (longlong)loop_counter_1 * 4, state_data);
                            }
                            temp_longlong_3 = temp_longlong_3 + 1;
                            temp_ulonglong = temp_ulonglong - 1;
                            temp_longlong_ptr = temp_stack_longlong_ptr;
                        } while (temp_ulonglong != 0);
                    }
                    
                    temp_longlong_ptr = temp_longlong_ptr + -4;
                    temp_stack_uint_3 = temp_stack_uint_3 - 1;
                    temp_ulonglong = (ulonglong)temp_stack_uint_3;
                    temp_float_ptr_2 = temp_float_ptr_2 + -4;
                    temp_stack_longlong_ptr = temp_longlong_ptr;
                    if ((int)temp_stack_uint_3 < 0) break;
                    temp_longlong = temp_stack_longlong_3;
                    temp_uint_4b = (undefined4)temp_stack_uint_8i;
                    temp_stack_uint_4b = temp_stack_uint_8i._4_4_;
                    temp_stack_uint_4c = (undefined4)temp_stack_uint_8h;
                    temp_stack_uint_4d = temp_stack_uint_8h._4_4_;
                } while( true );
            }
        }
    }
    
FINAL_PROCESSING_LABEL:
    // 安全检查和清理
    FUN_1808fc050(stack_security_cookie ^ (ulonglong)local_stack_buffer_32);
}

// 技术说明：
// 1. 该函数实现了复杂的UI变换处理算法，包含矩阵运算、插值计算和状态管理
// 2. 使用了多种数学函数如sin、cos、acos等进行角度和插值计算
// 3. 支持多种处理模式（3、4、5、6、7），每种模式有不同的变换逻辑
// 4. 包含完整的错误处理和边界条件检查
// 5. 使用SIMD指令优化浮点运算性能
// 6. 实现了迭代优化算法，确保变换结果的精度和稳定性
// 7. 包含内存安全检查，防止缓冲区溢出
// 8. 支持批量处理和条件渲染，提高处理效率