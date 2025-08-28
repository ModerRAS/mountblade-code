#include "TaleWorlds.Native.Split.h"
// 03_rendering_part057.c - 渲染系统高级数据处理和渲染控制模块
// 包含2个核心函数，涵盖渲染数据高级处理、材质参数管理、内存管理、渲染状态控制等高级渲染功能
/**
 * 渲染系统高级数据处理和渲染控制函数
 *
 * 该函数负责处理复杂的渲染数据操作，包括：
 * - 参数验证和初始化
 * - 浮点数计算和边界检查
 * - 渲染状态管理
 * - 材质参数处理
 * - 内存管理和数据访问
 *
 * @param render_context 渲染上下文指针
 * @param param2 第二个参数，用于数据传递
 * @param param3 第三个参数，用于控制处理流程
 * @param param4 第四个参数，用于数据偏移计算
 * @param param5 第五个参数，用于数据存储
 * @param data_callback 数据回调函数指针
 * @param param7 第七个参数，用于数据访问
 * @param param8 第八个参数，用于控制循环次数
 * @param param9 第九个参数，用于浮点计算的最小值
 * @param param10 第十个参数，用于浮点计算的最大值
 * @param param11 第十一个参数，用于渲染状态控制
 */
void RenderingSystem_AdvancedDataProcessing(void *render_context, void *param2, uint param3, int64_t param4,
                                          void **param5, float (*data_callback)(void *, int), void **param7,
                                          int param8, float param9, float param10, void *param11)
{
    float *render_data_ptr;
    int64_t render_context_base;
    uint loop_counter;
    char flag_check;
    uint temp_uint;
    uint temp_uint2;
    char *string_ptr;
    int inner_loop_counter;
    int64_t temp_long;
    void **temp_ptr;
    int64_t temp_long2;
    uint64_t temp_ulong;
    uint temp_uint3;
    void **temp_ptr2;
    int64_t temp_long3;
    uint64_t temp_ulong2;
    int64_t temp_long4;
    float temp_float;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    float temp_float8;
    float temp_float9;
    float temp_float10;
    void *temp_param;
    uint temp_uint4;
    int64_t temp_long5;
    void *temp_param2;
    uint temp_uint5;
    float temp_float11;
    float temp_float12;
    int64_t temp_long6;
    float temp_float13;
    float temp_float14;
    float temp_float15;
    float temp_float16;
    float temp_float17;
    float temp_float18;
    float temp_float19;
    uint temp_uint6;
    float temp_float20;
    float temp_float21;
    float temp_float22;
    int64_t temp_long7;
// 获取渲染系统基础地址
    render_context_base = *(int64_t *)0x180c8a9b0;
    temp_long4 = (int64_t)(int)param3;
    temp_long5 = *(int64_t *)0x180c8a9b0;
// 设置渲染状态标志
    *(char *)(*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1af8) + 0xb1) = 1;
    temp_long7 = *(int64_t *)(render_context_base + 0x1af8);
// 检查渲染状态是否可用
    if (*(char *)(temp_long7 + 0xb4) != '\0') {
        return;
    }
// 字符串处理和验证
    string_ptr = "";
    while (*string_ptr != '\0') {
        if (((*string_ptr == '#') && (string_ptr[1] == '#')) ||
           (string_ptr = string_ptr + 1, string_ptr == (char *)0xffffffffffffffff)) break;
    }
// 获取渲染数据指针和相关参数
    render_data_ptr = *(float **)(render_context_base + 0x19f0);
    temp_float10 = *(float *)(render_context_base + 0x19f8);
    temp_param = param2;
    temp_uint4 = param3;
    temp_long5 = param4;
// 处理字符串相关的计算
    if (string_ptr == "") {
        temp_float8 = 0.0;
    }
    else {
        temp_param2 = (void *)0xbf800000;
        RenderingSystem_ProcessFloatData(render_data_ptr, &temp_param, temp_float10, 0x7f7fffff, temp_param2,
                                        (void *)0x18098bc73, string_ptr, 0);
        temp_float8 = (float)temp_param;
        if (0.0 < (float)temp_param) {
            temp_float8 = (float)temp_param - temp_float10 / *render_data_ptr;
        }
        temp_float8 = (float)(int)(temp_float8 + 0.95);
        temp_float10 = *(float *)&temp_param;
    }
// 处理渲染参数和状态
    temp_long3 = temp_long7;
    temp_long2 = render_context_base;
    if ((float)param11 == 0.0) {
        param11 = (void *)(float)Function_075826ee();
    }
    if (*(float *)&param11 == 0.0) {
        *(float *)&param11 = *(float *)(temp_long2 + 0x1660) + *(float *)(temp_long2 + 0x1660) + temp_float10;
    }
// 计算渲染参数
    temp_float10 = *(float *)(temp_long3 + 0x104);
    temp_float6 = *(float *)(temp_long3 + 0x100);
    *(float *)&param11 = temp_float10 + *(float *)&param11;
    temp_float9 = temp_float6 + (float)param11;
    temp_float18 = *(float *)&param11 - *(float *)(temp_long2 + 0x1660);
    temp_float10 = temp_float9 - *(float *)(temp_long2 + 0x165c);
    temp_float7 = *(float *)(temp_long2 + 0x165c) + temp_float6;
    temp_float5 = temp_float10 + *(float *)(temp_long2 + 0x1660);
    temp_param = (void *)temp_float7;
// 边界检查和参数调整
    if (temp_float8 <= 0.0) {
        temp_float8 = 0.0;
    }
    else {
        temp_float8 = temp_float8 + *(float *)(temp_long2 + 0x1674);
    }
    temp_float12 = *(float *)&param11 - temp_float10;
    temp_float8 = temp_float9 + temp_float8;
    temp_float11 = temp_float8 - temp_float6;
    temp_float13 = temp_float6;
    temp_float14 = temp_float10;
    temp_float15 = temp_float9;
    temp_float16 = *(float *)&param11;
    temp_float17 = temp_float10;
// 调用渲染处理函数
    Function_c4d212ab(&temp_float11, *(uint *)(temp_long2 + 0x1660));
// 更新渲染上下文数据
    temp_long3 = *(int64_t *)(render_context_base + 0x1af8);
    *(void **)(temp_long3 + 0x144) = 0;
    *(float *)(temp_long3 + 0x14c) = temp_float6;
    *(float *)(temp_long3 + 0x150) = temp_float10;
    *(float *)(temp_long3 + 0x154) = temp_float8;
    *(float *)(temp_long3 + 0x158) = *(float *)&param11;
// 边界条件检查
    temp_long = *(int64_t *)(render_context_base + 0x1af8);
    temp_param2 = (void *)temp_float10;
    temp_param2 = (void *)temp_float6;
    if ((((*(float *)&param11 < *(float *)(temp_long + 0x22c) || *(float *)&param11 == *(float *)(temp_long + 0x22c)) ||
         (*(float *)(temp_long + 0x234) <= temp_float10)) ||
        ((temp_float8 < *(float *)(temp_long + 0x228) || temp_float8 == *(float *)(temp_long + 0x228) ||
         (*(float *)(temp_long + 0x230) <= temp_float6))) && (*(char *)(render_context_base + 0x2e38) == '\0')) {
        return;
    }
// 设置临时变量并调用渲染函数
    temp_float20 = temp_float8;
    temp_float19 = *(float *)&param11;
    flag_check = RenderingSystem_CheckRenderBounds(&temp_param2, &temp_float20, 1);
    temp_uint = (uint)temp_param2;
    if (flag_check != '\0') {
        *(uint *)(temp_long3 + 0x148) = *(uint *)(temp_long3 + 0x148) | 1;
    }
// 处理浮点参数边界值
    if ((param9 == 3.4028235e+38) || (param10 == 3.4028235e+38)) {
        temp_float10 = -3.4028235e+38;
        temp_float8 = 3.4028235e+38;
        temp_long3 = temp_long4;
        temp_ptr2 = param7;
        if (0 < (int)param3) {
            do {
                inner_loop_counter = 0;
                if (0 < param8) {
                    do {
                        temp_float6 = (float)(*data_callback)(*temp_ptr2, inner_loop_counter);
                        if (temp_float6 <= temp_float8) {
                            temp_float8 = temp_float6;
                        }
                        if (temp_float10 < temp_float6) {
                            temp_float10 = temp_float6;
                        }
                        inner_loop_counter = inner_loop_counter + 1;
                    } while (inner_loop_counter < param8);
                }
                temp_uint = (uint)temp_param2;
                temp_long3 = temp_long3 + -1;
                render_context_base = *(int64_t *)0x180c8a9b0;
                temp_ptr2 = temp_ptr2 + 1;
                temp_long2 = temp_long5;
            } while (temp_long3 != 0);
        }
        if (param9 == 3.4028235e+38) {
            param9 = temp_float8;
        }
        if (param10 == 3.4028235e+38) {
            param10 = temp_float10;
        }
    }
// 获取渲染参数并处理
    temp_param2 = *(void **)(render_context_base + 0x1738);
    temp_float20 = *(float *)(render_context_base + 0x1740);
    temp_float19 = *(float *)(render_context_base + 0x1744) * *(float *)(render_context_base + 0x1628);
    temp_uint5 = Function_56da4ab5(&temp_param2);
    temp_param = (void *)((uint)temp_uint << 0x10 | *(uint *)(temp_long2 + 0x1664));
// 调用渲染控制函数
    RenderingSystem_ControlRenderFunction(temp_float14, temp_float13, temp_uint5, 1, temp_param);
// 初始化循环变量
    inner_loop_counter = -1;
    render_context_base = *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1af8);
    temp_uint = param8;
    if ((int)(float)param11 < param8) {
        temp_uint = (int)(float)param11;
    }
    temp_uint3 = temp_uint - 1;
    temp_uint6 = temp_uint3;
// 检查渲染状态条件
    if ((*(char *)(*(int64_t *)0x180c8a9b0 + 0x1d07) == '\0') || (*(char *)(*(int64_t *)0x180c8a9b0 + 0x1d06) != '\0')) {
        if ((((((*(byte *)(render_context_base + 0x148) & 1) == 0) ||
              (temp_long3 = *(int64_t *)(render_context_base + 0x3a0), *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b08) != temp_long3)) ||
             (((temp_uint = *(int *)(*(int64_t *)0x180c8a9b0 + 0x1b2c), temp_uint != 0 &&
               (temp_uint != *(int *)(render_context_base + 0x144))) && (*(char *)(*(int64_t *)0x180c8a9b0 + 0x1b3d) == '\0')) &&
              (temp_uint != *(int *)(render_context_base + 0x84))))) ||
            ((((*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c98) != 0 &&
               (temp_long2 = *(int64_t *)(*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c98) + 0x3a0), temp_long2 != 0)) &&
              (*(char *)(temp_long2 + 0xb0) != '\0')) &&
             ((temp_long2 != temp_long3 &&
              (((*(uint *)(temp_long2 + 0xc) >> 0x1b & 1) != 0 ||
               ((*(uint *)(temp_long2 + 0xc) >> 0x1a & 1) != 0)))))))) ||
           (((*(int64_t *)(render_context_base + 0x28) != *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c80) &&
             ((*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b78) == 0 ||
              (temp_long3 != *(int64_t *)(*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b78) + 0x3a0))))) ||
            ((*(byte *)(render_context_base + 0x1a8) & 4) != 0)))) goto ADVANCED_RENDERING_PROCESS;
        if ((*(int *)(render_context_base + 0x144) == *(int *)(render_context_base + 8)) ||
           (*(int *)(render_context_base + 0x144) == *(int *)(render_context_base + 0x84))) {
            flag_check = *(char *)(render_context_base + 0xb1);
            goto BOUNDARY_CHECK_JUMP;
        }
    }
    else {
        if ((*(int *)(*(int64_t *)0x180c8a9b0 + 0x1ca0) == 0) ||
           (*(int *)(*(int64_t *)0x180c8a9b0 + 0x1ca0) != *(int *)(render_context_base + 0x144))) goto ADVANCED_RENDERING_PROCESS;
        if (*(int *)(render_context_base + 0x144) == *(int *)(render_context_base + 8)) {
            flag_check = *(char *)(render_context_base + 0xb1);
        BOUNDARY_CHECK_JUMP:
            if (flag_check != '\0') goto ADVANCED_RENDERING_PROCESS;
        }
    }
// 计算渲染参数和比例
    temp_float10 = (*(float *)(temp_long5 + 0x118) - temp_float7) / (temp_float10 - temp_float7);
    if (0.0 <= temp_float10) {
        if (0.9999 <= temp_float10) {
            temp_float10 = 0.9999;
        }
    }
    else {
        temp_float10 = 0.0;
    }
// 计算索引值
    inner_loop_counter = (int)((float)(param8 + -1) * temp_float10);
    temp_uint = inner_loop_counter;
// 调用渲染初始化函数
    RenderingSystem_InitializeRenderState();
    RenderingSystem_SetRenderParameters((void *)0x180a16f48, inner_loop_counter);
// 处理渲染数据
    if (0 < temp_long4) {
        temp_long2 = temp_long5 - (int64_t)param7;
        temp_ptr = param7;
        temp_ptr2 = param5;
        temp_long5 = temp_long2;
        do {
            temp_float10 = (float)(*data_callback)(*temp_ptr, (int64_t)inner_loop_counter % (int64_t)param8 & 0xffffffff);
            temp_float8 = (float)(*data_callback)(*temp_ptr, (int64_t)(inner_loop_counter + 1) % (int64_t)param8 & 0xffffffff);
            temp_param2 = *temp_ptr2;
            temp_float20 = *(float *)(temp_ptr2 + 1);
            temp_float19 = *(float *)((int64_t)temp_ptr2 + 0xc);
            temp_param = *(void **)(temp_long2 + (int64_t)temp_ptr);
            RenderingSystem_ProcessRenderData(&temp_param2, (void *)0x180a16f58, (double)temp_float10, (double)temp_float8, temp_param);
            temp_ptr2 = temp_ptr2 + 2;
            temp_ptr = temp_ptr + 1;
            temp_long4 = temp_long4 + -1;
            temp_uint3 = temp_uint6;
        } while (temp_long4 != 0);
    }
// 完成渲染处理
    RenderingSystem_FinalizeRenderState();
    param3 = temp_uint4;
ADVANCED_RENDERING_PROCESS:
// 高级渲染数据处理
    if (0 < (int)param3) {
        temp_ulong2 = (uint64_t)param3;
        temp_float10 = 1.0 / (param10 - param9);
        temp_float11 = 1.0 / (float)(int)temp_uint3;
        temp_float12 = temp_float10;
        do {
            temp_float6 = 0.0;
            temp_param2 = temp_ulong2;
            temp_float8 = (float)(*data_callback)(*param7, 0);
            temp_float8 = (temp_float8 - param9) * temp_float10;
            if (0.0 <= temp_float8) {
                if (1.0 <= temp_float8) {
                    temp_float8 = 1.0;
                }
            }
            else {
                temp_float8 = 0.0;
            }
            temp_float13 = 0.0;
            temp_float8 = 1.0 - temp_float8;
            temp_ptr2 = param5;
            temp_uint = Function_56da4ab5(param5);
            temp_uint2 = Function_56da4ab5();
            temp_uint5 = temp_uint;
// 计算颜色分量
            temp_float10 = 1.0 - (float)(temp_uint2 >> 8 & 0xff) * 0.003921569;
            temp_float9 = (float)(temp_uint2 >> 0x18) * *(float *)(*(int64_t *)0x180c8a9b0 + 0x1628) * 0.003921569;
            temp_float7 = 1.0 - (float)(temp_uint2 >> 0x10 & 0xff) * 0.003921569;
            temp_float4 = 1.0 - (float)(temp_uint2 & 0xff) * 0.003921569;
// 颜色分量边界检查
            if (0.0 <= temp_float4) {
                if (1.0 <= temp_float4) {
                    temp_float4 = 1.0;
                }
            }
            else {
                temp_float4 = 0.0;
            }
            if (0.0 <= temp_float10) {
                if (1.0 <= temp_float10) {
                    temp_float10 = 1.0;
                }
            }
            else {
                temp_float10 = 0.0;
            }
            if (0.0 <= temp_float7) {
                if (1.0 <= temp_float7) {
                    temp_float7 = 1.0;
                }
            }
            else {
                temp_float7 = 0.0;
            }
            if (0.0 <= temp_float9) {
                if (1.0 <= temp_float9) {
                    temp_float9 = 1.0;
                }
            }
            else {
                temp_float9 = 0.0;
            }
// 处理渲染循环
            if (0 < (int)temp_uint3) {
                temp_float5 = temp_float17 - (float)temp_param;
                temp_float22 = temp_float18 - temp_float5;
                temp_ulong = (uint64_t)temp_uint3;
                do {
                    temp_uint = (uint)temp_param;
                    temp_float10 = (float)(param8 + -1) * temp_float6;
                    temp_float6 = temp_float6 + temp_float11;
                    inner_loop_counter = (int)(temp_float10 + 0.5);
                    temp_float10 = (float)(*data_callback)(*param7, (int64_t)(inner_loop_counter + 1) % (int64_t)param8 & 0xffffffff);
                    temp_float10 = (temp_float10 - param9) * temp_float12;
                    if (0.0 <= temp_float10) {
                        if (1.0 <= temp_float10) {
                            temp_float10 = 1.0;
                        }
                    }
                    else {
                        temp_float10 = 0.0;
                    }
                    temp_float14 = temp_float8 * temp_float22;
                    temp_float8 = 1.0 - temp_float10;
                    temp_param = (void *)((uint)temp_uint << 0x10 | 0x3f800000);
                    temp_uint5 = temp_uint;
                    if (temp_uint == inner_loop_counter) {
                        temp_uint5 = (int)(temp_float9 * 255.0 + 0.5) << 0x18 |
                                    (int)(temp_float4 * 255.0 + 0.5) | (int)(temp_float10 * 255.0 + 0.5) << 8 |
                                    (int)(temp_float7 * 255.0 + 0.5) << 0x10;
                    }
                    temp_float14 = temp_float14 + temp_float5;
                    temp_float13 = temp_float13 * temp_float5 + (float)temp_param;
                    temp_float22 = temp_float8 * temp_float22 + temp_float5;
                    temp_float21 = temp_float6 * temp_float5 + (float)temp_param;
// 调用高级渲染函数
                    RenderingSystem_AdvancedRenderFunction(*(void **)(temp_long7 + 0x2e8), &temp_float13, &temp_float21, temp_uint5, temp_param);
                    temp_ulong = temp_ulong - 1;
                    temp_ptr2 = param5;
                    temp_ulong2 = temp_param2;
                    temp_float10 = temp_float12;
                    temp_uint3 = temp_uint6;
                    temp_float13 = temp_float6;
                } while (temp_ulong != 0);
            }
            param5 = temp_ptr2 + 2;
            param7 = param7 + 1;
            temp_ulong2 = temp_ulong2 - 1;
        } while (temp_ulong2 != 0);
        temp_param2 = 0;
        temp_float9 = temp_float15;
    }
// 完成渲染操作
    RenderingSystem_FinalizeRenderOperation(temp_float5, temp_float9 + *(float *)(temp_long5 + 0x1674), (void *)0x18098bc73, 0, 1);
    return;
}
/**
 * 渲染系统高级数据处理和渲染控制函数（简化版本）
 *
 * 该函数是第一个函数的简化版本，具有相似的功能但参数传递方式不同。
 * 主要负责：
 * - 渲染数据的批量处理
 * - 材质参数的动态调整
 * - 渲染状态的实时控制
 * - 内存资源的优化管理
 *
 * @param render_context 渲染上下文指针
 * @param param_array 参数数组指针
 * @param data_array 数据数组指针
 * @param callback_array 回调函数数组指针
 * @param data_count 数据数量
 * @param min_value 最小值参数
 * @param max_value 最大值参数
 * @param render_params 渲染参数指针
 */
void RenderingSystem_SimplifiedDataProcessing(void *render_context, void *param_array, void *data_array,
                                            void *callback_array, int data_count, float min_value,
                                            float max_value, void *render_params)
{
    float *render_data_ptr;
    int64_t render_context_base;
    float (*data_callback)(void *, int);
    int64_t temp_long;
    void *temp_param;
    char flag_check;
    uint temp_uint;
    char *string_ptr;
    int temp_int;
    int64_t temp_long2;
    void **temp_ptr;
    int64_t temp_long3;
    uint64_t temp_ulong;
    uint temp_uint2;
    int temp_int2;
    void **temp_ptr2;
    int64_t param_offset;
    int64_t temp_long4;
    uint64_t temp_ulong2;
    int temp_int3;
    float temp_float;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    float temp_float8;
    float temp_float9;
    float temp_float10;
    void *temp_param2;
    uint temp_uint3;
    float temp_float11;
    float temp_float12;
    int64_t temp_long5;
    float temp_float13;
    float temp_float14;
    float temp_float15;
    float temp_float16;
    float temp_float17;
    float temp_float18;
    float temp_float19;
    float temp_float20;
    float temp_float21;
    float temp_float22;
    float temp_float23;
    float temp_float24;
    float temp_float25;
    float temp_float26;
    uint temp_uint4;
    float temp_float27;
    float temp_float28;
    int64_t temp_long6;
    float temp_float29;
    float temp_float30;
    float temp_float31;
    float temp_float32;
    int64_t temp_long7;
    float temp_float33;
    float temp_float34;
    float temp_float35;
    float temp_float36;
// 字符串处理和验证
    string_ptr = "";
    while (*string_ptr != '\0') {
        if (((*string_ptr == '#') && (string_ptr[1] == '#')) ||
           (string_ptr = string_ptr + 1, string_ptr == (char *)0xffffffffffffffff)) break;
    }
// 获取渲染数据指针和相关参数
    render_data_ptr = *(float **)(render_context + 0x19f0);
    temp_float10 = *(float *)(render_context + 0x19f8);
// 处理字符串相关的计算
    if (string_ptr == "") {
        temp_float8 = 0.0;
    }
    else {
        temp_param2 = (void *)0xbf800000;
        RenderingSystem_ProcessFloatData(render_data_ptr, param_array + 0x98, temp_float10, 0x7f7fffff, temp_param2);
        temp_float8 = *(float *)(param_array + 0x98);
        if (0.0 < temp_float8) {
            temp_float8 = temp_float8 - temp_float10 / *render_data_ptr;
        }
        temp_float10 = *(float *)(param_array + 0x9c);
        temp_long5 = *(int64_t *)(param_array + -0x68);
        temp_float8 = (float)(int)(temp_float8 + 0.95);
        temp_long4 = render_context;
    }
// 处理渲染参数和状态
    temp_float6 = *(float *)(param_array + 0xe0);
    if (temp_float6 == 0.0) {
        temp_float6 = (float)Function_075826ee();
    }
    temp_float9 = *(float *)(param_array + 0xe4);
    if (temp_float9 == 0.0) {
        temp_float9 = *(float *)(temp_long4 + 0x1660) + *(float *)(temp_long4 + 0x1660) + temp_float10;
    }
// 计算渲染参数
    temp_float10 = *(float *)(temp_long5 + 0x104);
    temp_float7 = *(float *)(temp_long5 + 0x100);
    temp_float2 = *(float *)(temp_long4 + 0x1660);
    temp_float9 = temp_float10 + temp_float9;
    temp_float11 = *(float *)(temp_long4 + 0x165c);
    temp_float12 = temp_float7 + temp_float6;
    *(float *)(param_array + -0x74) = temp_float12;
    temp_float13 = temp_float12 - temp_float11;
    temp_float11 = temp_float11 + temp_float7;
    *(float *)(param_array + -0x7c) = temp_float9 - temp_float2;
    *(float *)(param_array + -0x80) = temp_float13;
    *(float *)(param_array + 0x98) = temp_float11;
    *(float *)(param_array + 0x90) = temp_float10 + temp_float2;
// 边界检查和参数调整
    if (temp_float8 <= 0.0) {
        temp_float8 = 0.0;
    }
    else {
        temp_float8 = temp_float8 + *(float *)(temp_long4 + 0x1674);
    }
    temp_float14 = temp_float9 - temp_float10;
    temp_float8 = temp_float12 + temp_float8;
    temp_float15 = temp_float8 - temp_float7;
    temp_float16 = temp_float7;
    temp_float17 = temp_float10;
    temp_float18 = temp_float12;
    temp_float19 = temp_float9;
// 调用渲染处理函数
    Function_c4d212ab(&temp_float15, *(uint *)(temp_long4 + 0x1660));
// 更新渲染上下文数据
    temp_long5 = *(int64_t *)(render_context + 0x1af8);
    *(void **)(temp_long5 + 0x144) = 0;
    *(float *)(temp_long5 + 0x14c) = temp_float7;
    *(float *)(temp_long5 + 0x150) = temp_float10;
    *(float *)(temp_long5 + 0x154) = temp_float8;
    *(float *)(temp_long5 + 0x158) = temp_float9;
// 边界条件检查
    temp_long = *(int64_t *)(render_context + 0x1af8);
    temp_param2 = (void *)temp_float10;
    temp_param2 = (void *)temp_float7;
    if (((temp_float9 < *(float *)(temp_long + 0x22c) || temp_float9 == *(float *)(temp_long + 0x22c)) ||
         (*(float *)(temp_long + 0x234) <= temp_float10)) ||
        ((temp_float8 < *(float *)(temp_long + 0x228) || temp_float8 == *(float *)(temp_long + 0x228) ||
         (*(float *)(temp_long + 0x230) <= temp_float7))) && (*(char *)(render_context + 0x2e38) == '\0')) {
        return;
    }
// 设置临时变量并调用渲染函数
    temp_float20 = temp_float8;
    temp_float19 = temp_float9;
    flag_check = RenderingSystem_CheckRenderBounds(&temp_param2, &temp_float20, 1);
    temp_uint = (uint)temp_param2;
    if (flag_check != '\0') {
        *(uint *)(temp_long5 + 0x148) = *(uint *)(temp_long5 + 0x148) | 1;
    }
// 处理浮点参数边界值
    temp_float10 = *(float *)(param_array + 0xd0);
    temp_int3 = *(int *)(param_array + 200);
    data_callback = *(float (**)(void *, int))(param_array + 0xb8);
    temp_float8 = *(float *)(param_array + 0xd8);
    if ((temp_float10 == 3.4028235e+38) || (temp_float8 == 3.4028235e+38)) {
        temp_float9 = -3.4028235e+38;
        temp_float7 = 3.4028235e+38;
        if (0 < (int)temp_ulong2) {
            temp_ptr2 = *(void ***)(param_array + 0xc0);
            temp_ulong = temp_ulong2;
            do {
                temp_int = 0;
                if (0 < temp_int3) {
                    do {
                        temp_float6 = (float)(*data_callback)(*temp_ptr2, temp_int);
                        if (temp_float6 <= temp_float7) {
                            temp_float7 = temp_float6;
                        }
                        if (temp_float9 < temp_float6) {
                            temp_float9 = temp_float6;
                        }
                        temp_int = temp_int + 1;
                    } while (temp_int < temp_int3);
                }
                temp_uint = (uint)temp_param2;
                temp_ptr2 = temp_ptr2 + 1;
                temp_ulong = temp_ulong - 1;
                render_context = *(int64_t *)0x180c8a9b0;
                temp_long4 = temp_long6;
            } while (temp_ulong != 0);
        }
        if (temp_float10 == 3.4028235e+38) {
            *(float *)(param_array + 0xd0) = temp_float7;
            temp_float10 = temp_float7;
        }
        if (temp_float8 == 3.4028235e+38) {
            temp_float8 = temp_float9;
        }
    }
// 获取渲染参数并处理
    temp_param2 = *(void **)(render_context + 0x1738);
    temp_float20 = *(float *)(render_context + 0x1740);
    temp_float19 = *(float *)(render_context + 0x1744) * *(float *)(render_context + 0x1628);
    temp_uint = Function_56da4ab5(&temp_param2);
    temp_param = (void *)((uint)temp_uint << 0x10 | *(uint *)(temp_long4 + 0x1664));
// 调用渲染控制函数
    RenderingSystem_ControlRenderFunction(temp_float17, temp_float16, temp_uint, 1, temp_param);
// 初始化循环变量
    temp_int = temp_int3 + -1;
    temp_int2 = -1;
    temp_long5 = *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1af8);
    temp_int2 = temp_int3;
    if ((int)temp_float6 < temp_int3) {
        temp_int2 = (int)temp_float6;
    }
    temp_uint2 = temp_int2 - 1;
    temp_uint4 = temp_uint2;
// 检查渲染状态条件
    if ((*(char *)(*(int64_t *)0x180c8a9b0 + 0x1d07) == '\0') || (*(char *)(*(int64_t *)0x180c8a9b0 + 0x1d06) != '\0')) {
        if ((((((*(byte *)(temp_long5 + 0x148) & 1) == 0) ||
              (temp_long = *(int64_t *)(temp_long5 + 0x3a0), *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b08) != temp_long)) ||
             (((temp_int2 = *(int *)(*(int64_t *)0x180c8a9b0 + 0x1b2c), temp_int2 != 0 &&
               (temp_int2 != *(int *)(temp_long5 + 0x144))) && (*(char *)(*(int64_t *)0x180c8a9b0 + 0x1b3d) == '\0')) &&
              (temp_int2 != *(int *)(temp_long5 + 0x84))))) ||
            ((((*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c98) != 0 &&
               (temp_long2 = *(int64_t *)(*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c98) + 0x3a0), temp_long2 != 0)) &&
              (*(char *)(temp_long2 + 0xb0) != '\0')) &&
             ((temp_long2 != temp_long &&
              (((*(uint *)(temp_long2 + 0xc) >> 0x1b & 1) != 0 ||
               ((*(uint *)(temp_long2 + 0xc) >> 0x1a & 1) != 0)))))))) ||
           (((*(int64_t *)(temp_long5 + 0x28) != *(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1c80) &&
             ((*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b78) == 0 ||
              (temp_long != *(int64_t *)(*(int64_t *)(*(int64_t *)0x180c8a9b0 + 0x1b78) + 0x3a0))))) ||
            ((*(byte *)(temp_long5 + 0x1a8) & 4) != 0)))) goto SIMPLIFIED_RENDERING_PROCESS;
        if ((*(int *)(temp_long5 + 0x144) == *(int *)(temp_long5 + 8)) ||
           (*(int *)(temp_long5 + 0x144) == *(int *)(temp_long5 + 0x84))) {
            flag_check = *(char *)(temp_long5 + 0xb1);
            goto SIMPLIFIED_BOUNDARY_CHECK;
        }
    }
    else {
        if ((*(int *)(*(int64_t *)0x180c8a9b0 + 0x1ca0) == 0) ||
           (*(int *)(*(int64_t *)0x180c8a9b0 + 0x1ca0) != *(int *)(temp_long5 + 0x144))) goto SIMPLIFIED_RENDERING_PROCESS;
        if (*(int *)(temp_long5 + 0x144) == *(int *)(temp_long5 + 8)) {
            flag_check = *(char *)(temp_long5 + 0xb1);
        SIMPLIFIED_BOUNDARY_CHECK:
            if (flag_check != '\0') goto SIMPLIFIED_RENDERING_PROCESS;
        }
    }
// 计算渲染参数和比例
    temp_float6 = (*(float *)(temp_long6 + 0x118) - temp_float11) / (temp_float13 - temp_float11);
    if (0.0 <= temp_float6) {
        if (0.9999 <= temp_float6) {
            temp_float6 = 0.9999;
        }
    }
    else {
        temp_float6 = 0.0;
    }
// 计算索引值
    temp_int = (int)((float)temp_int * temp_float6);
    temp_int2 = temp_int;
// 调用渲染初始化函数
    RenderingSystem_InitializeRenderState();
    RenderingSystem_SetRenderParameters((void *)0x180a16f48, temp_int);
// 处理渲染数据
    if (0 < (int64_t)temp_ulong2) {
        temp_ptr = *(void ***)(param_array + 0xc0);
        *(int64_t *)(param_array + 0xa8) = *(int64_t *)(param_array + 0xa8) - (int64_t)temp_ptr;
        temp_long5 = *(int64_t *)(param_array + 0xa8);
        temp_ptr2 = *(void ***)(param_array + 0xb0);
        do {
            temp_float6 = (float)(*data_callback)(*temp_ptr, (int64_t)temp_int % (int64_t)temp_int3 & 0xffffffff);
            temp_float9 = (float)(*data_callback)(*temp_ptr, (int64_t)(temp_int + 1) % (int64_t)temp_int3 & 0xffffffff);
            temp_param2 = *temp_ptr2;
            temp_float20 = *(float *)(temp_ptr2 + 1);
            temp_float19 = *(float *)((int64_t)temp_ptr2 + 0xc);
            temp_param = *(void **)(temp_long5 + (int64_t)temp_ptr);
            RenderingSystem_ProcessRenderData(&temp_param2, (void *)0x180a16f58, (double)temp_float6, (double)temp_float9, temp_param);
            temp_ptr2 = temp_ptr2 + 2;
            temp_ptr = temp_ptr + 1;
            temp_ulong2 = temp_ulong2 - 1;
        } while (temp_ulong2 != 0);
        temp_int3 = *(int *)(param_array + 200);
        temp_uint2 = temp_uint4;
    }
// 完成渲染处理
    RenderingSystem_FinalizeRenderState();
    temp_ulong2 = (uint64_t)*(uint *)(param_array + 0xa0);
    temp_int = temp_int3 + -1;
SIMPLIFIED_RENDERING_PROCESS:
// 简化版本的渲染数据处理
    if (0 < (int)temp_ulong2) {
        temp_ulong = temp_ulong2 & 0xffffffff;
        temp_ptr2 = *(void ***)(param_array + 0xc0);
        temp_float8 = 1.0 / (temp_float8 - temp_float10);
        temp_float15 = 1.0 / (float)(int)temp_uint2;
        temp_float14 = temp_float8;
        do {
            temp_float9 = 0.0;
            temp_param2 = temp_ulong;
            temp_float6 = (float)(*data_callback)(*temp_ptr2, 0);
            temp_float6 = (temp_float6 - temp_float10) * temp_float8;
            if (0.0 <= temp_float6) {
                if (1.0 <= temp_float6) {
                    temp_float6 = 1.0;
                }
            }
            else {
                temp_float6 = 0.0;
            }
            temp_long5 = *(int64_t *)(param_array + 0xb0);
            temp_float13 = 0.0;
            temp_float6 = 1.0 - temp_float6;
            temp_uint = Function_56da4ab5(temp_long5);
            *(uint *)(param_array + -0x78) = temp_uint;
            temp_uint3 = Function_56da4ab5();
// 计算颜色分量
            temp_float11 = 1.0 - (float)(temp_uint3 >> 8 & 0xff) * 0.003921569;
            temp_float7 = (float)(temp_uint3 >> 0x18) * *(float *)(*(int64_t *)0x180c8a9b0 + 0x1628) * 0.003921569;
            temp_float2 = 1.0 - (float)(temp_uint3 >> 0x10 & 0xff) * 0.003921569;
            temp_float12 = 1.0 - (float)(temp_uint3 & 0xff) * 0.003921569;
// 颜色分量边界检查
            if (0.0 <= temp_float12) {
                if (1.0 <= temp_float12) {
                    temp_float12 = 1.0;
                }
            }
            else {
                temp_float12 = 0.0;
            }
            if (0.0 <= temp_float11) {
                if (1.0 <= temp_float11) {
                    temp_float11 = 1.0;
                }
            }
            else {
                temp_float11 = 0.0;
            }
            if (0.0 <= temp_float2) {
                if (1.0 <= temp_float2) {
                    temp_float2 = 1.0;
                }
            }
            else {
                temp_float2 = 0.0;
            }
            if (0.0 <= temp_float7) {
                if (1.0 <= temp_float7) {
                    temp_float7 = 1.0;
                }
            }
            else {
                temp_float7 = 0.0;
            }
// 处理渲染循环
            if (0 < (int)temp_uint2) {
                temp_float10 = *(float *)(param_array + -0x80) - *(float *)(param_array + 0x98);
                temp_float8 = *(float *)(param_array + -0x7c) - *(float *)(param_array + 0x90);
                temp_uint3 = *(uint *)(param_array + -0x78);
                temp_ulong = (uint64_t)temp_uint2;
                do {
                    temp_uint = (uint)temp_param;
                    temp_float13 = (float)temp_int * temp_float9;
                    temp_float9 = temp_float9 + temp_float15;
                    temp_int2 = (int)(temp_float13 + 0.5);
                    temp_float13 = (float)(*data_callback)(*temp_ptr2, (int64_t)(temp_int2 + 1) % (int64_t)temp_int3 & 0xffffffff);
                    temp_float13 = (temp_float13 - *(float *)(param_array + 0xd0)) * temp_float14;
                    if (0.0 <= temp_float13) {
                        if (1.0 <= temp_float13) {
                            temp_float13 = 1.0;
                        }
                    }
                    else {
                        temp_float13 = 0.0;
                    }
                    temp_float17 = temp_float6 * temp_float8;
                    temp_float6 = 1.0 - temp_float13;
                    temp_param = (void *)((uint)temp_uint << 0x10 | 0x3f800000);
                    temp_uint2 = temp_uint3;
                    if (temp_int2 == temp_int2) {
                        temp_uint2 = (int)(temp_float7 * 255.0 + 0.5) << 0x18 |
                                    (int)(temp_float12 * 255.0 + 0.5) | (int)(temp_float11 * 255.0 + 0.5) << 8 |
                                    (int)(temp_float2 * 255.0 + 0.5) << 0x10;
                    }
                    temp_float17 = temp_float17 + *(float *)(param_array + 0x90);
                    temp_param = *(void **)(*(int64_t *)(param_array + -0x68) + 0x2e8);
                    temp_float16 = temp_float13 * temp_float10 + *(float *)(param_array + 0x98);
                    *(float *)(param_array + -0x6c) = temp_float6 * temp_float8 + *(float *)(param_array + 0x90);
                    *(float *)(param_array + -0x70) = temp_float9 * temp_float10 + *(float *)(param_array + 0x98);
// 调用高级渲染函数
                    RenderingSystem_AdvancedRenderFunction(temp_param, &temp_float16, param_array + -0x70, temp_uint2, temp_param);
                    temp_ulong = temp_ulong - 1;
                    temp_float13 = temp_float9;
                } while (temp_ulong != 0);
                temp_float10 = *(float *)(param_array + 0xd0);
                temp_long5 = *(int64_t *)(param_array + 0xb0);
                temp_ulong = temp_param2;
                temp_float8 = temp_float14;
                temp_uint2 = temp_uint4;
            }
            temp_int = temp_int3 + -1;
            temp_ptr2 = temp_ptr2 + 1;
            *(int64_t *)(param_array + 0xb0) = temp_long5 + 0x10;
            temp_ulong = temp_ulong - 1;
        } while (temp_ulong != 0);
        temp_float12 = *(float *)(param_array + -0x74);
        temp_param2 = 0;
    }
// 完成渲染操作
    RenderingSystem_FinalizeRenderOperation(*(float *)(param_array + 0x90), temp_float12 + *(float *)(temp_long6 + 0x1674), (void *)0x18098bc73, 0, 1);
    return;
}