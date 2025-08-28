#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块第175部分子002子002
 * 
 * 本文件包含核心引擎的初始化和配置功能实现
 * 
 * 文件标识: 02_core_engine_part175_sub002_sub002.c
 * 模块: 核心引擎 (02)
 * 功能描述: 核心引擎初始化与配置
 * 函数数量: 1 个函数
 */

/**
 * 初始化核心引擎配置
 * 
 * 该函数负责初始化核心引擎的各种配置参数和设置
 * 包括内存分配、参数配置、子系统初始化等
 * 
 * 参数:
 *   param_1 - 引擎上下文指针
 * 
 * 功能:
 *   - 设置引擎初始状态
 *   - 配置各种参数
 *   - 初始化子系统
 *   - 建立内存管理
 */
void initialize_core_engine_config(longlong engine_context)
{
    longlong temp_var1;
    undefined1 buffer_array1[32];
    longlong stack_var1;
    undefined1 stack_flag1;
    longlong stack_var2;
    undefined8 config_value1;
    undefined1 buffer_array2[56];
    undefined1 buffer_array3[56];
    undefined1 buffer_array4[56];
    undefined1 buffer_array5[56];
    undefined1 buffer_array6[56];
    undefined1 buffer_array7[56];
    undefined1 buffer_array8[56];
    undefined1 buffer_array9[56];
    undefined1 buffer_array10[56];
    undefined1 buffer_array11[56];
    undefined1 buffer_array12[56];
    undefined1 buffer_array13[56];
    undefined1 buffer_array14[56];
    undefined1 buffer_array15[56];
    undefined1 buffer_array16[56];
    undefined1 buffer_array17[56];
    undefined1 buffer_array18[56];
    undefined1 buffer_array19[56];
    undefined1 buffer_array20[56];
    undefined1 buffer_array21[56];
    undefined1 buffer_array22[56];
    undefined1 buffer_array23[56];
    undefined1 buffer_array24[56];
    undefined1 buffer_array25[56];
    undefined1 buffer_array26[56];
    undefined1 buffer_array27[56];
    undefined1 buffer_array28[56];
    undefined1 buffer_array29[56];
    undefined1 buffer_array30[56];
    undefined1 buffer_array31[56];
    undefined1 buffer_array32[56];
    undefined1 buffer_array33[56];
    undefined1 buffer_array34[56];
    undefined1 buffer_array35[56];
    undefined1 buffer_array36[56];
    undefined1 buffer_array37[56];
    undefined1 buffer_array38[56];
    undefined1 buffer_array39[56];
    undefined1 buffer_array40[56];
    undefined1 buffer_array41[56];
    undefined1 buffer_array42[56];
    undefined1 buffer_array43[56];
    undefined1 buffer_array44[56];
    undefined1 buffer_array45[56];
    undefined1 buffer_array46[56];
    undefined1 buffer_array47[56];
    undefined1 buffer_array48[56];
    undefined8 stack_var3;
    undefined8 stack_var4;
    undefined8 stack_var5;
    undefined4 stack_var6;
    undefined4 stack_var7;
    ulonglong security_token;
    
    // 初始化配置值
    config_value1 = 0xfffffffffffffffe;
    security_token = get_security_token() ^ (ulonglong)buffer_array1;
    
    // 设置引擎上下文
    stack_var2 = engine_context;
    stack_var5 = engine_context;
    
    // 调用初始化函数
    initialize_engine_subsystem();
    
    // 计算偏移量
    temp_var1 = engine_context + 0x20;
    
    // 设置初始参数
    stack_var3._0_4_ = 3;
    stack_var5 = temp_var1;
    set_engine_parameter(temp_var1, &stack_var3);
    
    // 配置引擎参数
    stack_var5 = engine_context + 0x50;
    stack_var3._0_4_ = 3;
    configure_engine_parameter(stack_var5, &stack_var3);
    
    // 初始化参数数组
    stack_var3._0_4_ = 0;
    stack_var1 = 0;
    initialize_parameter_array(temp_var1, &stack_var5, stack_flag1, &stack_var3);
    
    // 设置各种配置参数
    set_parameter_value(&stack_var5, 4, 0x19, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 2, 0x2d, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 1, 0x2c, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 3, 0x14, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 4, 0x2f, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 5, 0x15, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 7, 0x39, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 6, 0x2e, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 8, 0x13, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 9, 0xe0, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0xb, 0x22, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0xc, 0x16, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0xd, 0x31, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0xe, 0x30, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0xf, 0x11, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x10, 0x1e, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x11, 0x1f, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x12, 0x20, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x13, 0x12, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x14, 0x10, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x15, 0x21, &stack_var3, stack_var1);
    set_parameter_value(&stack_var5, 0x16, 0x17, &stack_var3, stack_var1);
    
    // 配置子系统参数
    configure_subsystem_parameters(engine_context, buffer_array2, buffer_array3, buffer_array4, 
                                  buffer_array5, buffer_array6, buffer_array7, buffer_array8, 
                                  buffer_array9, buffer_array10, buffer_array11, buffer_array12, 
                                  buffer_array13, buffer_array14, buffer_array15, buffer_array16, 
                                  buffer_array17, buffer_array18, buffer_array19, buffer_array20, 
                                  buffer_array21, buffer_array22, buffer_array23, buffer_array24, 
                                  buffer_array25, buffer_array26, buffer_array27, buffer_array28, 
                                  buffer_array29, buffer_array30, buffer_array31, buffer_array32, 
                                  buffer_array33, buffer_array34, buffer_array35, buffer_array36, 
                                  buffer_array37, buffer_array38, buffer_array39, buffer_array40, 
                                  buffer_array41, buffer_array42, buffer_array43, buffer_array44, 
                                  buffer_array45, buffer_array46, buffer_array47, buffer_array48);
    
    // 完成初始化并调用最终配置函数
    complete_engine_initialization(security_token ^ (ulonglong)buffer_array1);
}

// 文件结束