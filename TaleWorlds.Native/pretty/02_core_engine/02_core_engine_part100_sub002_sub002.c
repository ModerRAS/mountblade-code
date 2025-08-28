/**
 * TaleWorlds.Native 核心引擎模块
 * 核心引擎第100部分第二子文件第二子文件
 * 
 * 本文件包含核心引擎相关的功能和数据结构定义
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 寄存器值设置函数
 * 
 * 设置未使用的寄存器值到指定内存位置
 * 主要用于保持寄存器状态的完整性
 */
void set_unused_register_values() {
    longlong reg_r15;
    float reg_xmm7;
    float reg_xmm8;
    
    // 将寄存器值保存到指定内存位置
    *(float *)(reg_r15 + 0x100) = reg_xmm7;
    *(float *)(reg_r15 + 0x104) = reg_xmm8;
    return;
}

/**
 * 对象管理核心处理函数
 * 
 * 处理游戏对象的创建、更新和管理逻辑
 * 包括碰撞检测、状态更新、事件触发等功能
 * 
 * @param object_manager 对象管理器指针
 * @param object_name 对象名称字符串
 * @param object_properties 对象属性字符串
 * @param object_flags 对象标志位
 * @param object_context 对象上下文指针
 * @return 处理状态码
 */
ulonglong process_object_management(int *object_manager, char *object_name, char *object_properties, uint object_flags, longlong object_context) {
    uint *object_array;
    longlong *object_data;
    float *position_ptr;
    float position_y;
    float temp_float1;
    float temp_float2;
    longlong context_base;
    undefined8 temp_undef1;
    undefined8 temp_undef2;
    int object_count;
    char result_flag;
    uint temp_uint1;
    uint temp_uint2;
    int temp_int1;
    undefined4 temp_undef4;
    ulonglong result_ulong;
    longlong temp_long1;
    longlong temp_long2;
    int temp_int2;
    uint *temp_uint_ptr;
    longlong temp_long3;
    byte temp_byte1;
    char *temp_char_ptr;
    uint *temp_uint_ptr2;
    uint *temp_uint_ptr3;
    uint temp_uint3;
    longlong temp_long4;
    ulonglong temp_ulong2;
    bool temp_bool1;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    float temp_float8;
    float stack_float1;
    float stack_float2;
    char *stack_char_ptr1;
    char *stack_char_ptr2;
    uint stack_uint1;
    char stack_char1;
    char stack_char2;
    undefined4 stack_undef1;
    float stack_float3;
    float stack_float4;
    float stack_float5;
    float stack_float6;
    uint stack_uint2;
    ulonglong stack_ulong1;
    int stack_int1;
    float stack_float7;
    float stack_float8;
    float stack_float9;
    float stack_float10;
    undefined8 stack_undef2;
    undefined8 stack_undef3;
    undefined8 stack_undef4;
    undefined4 stack_undef5;
    undefined4 stack_undef6;
    undefined4 stack_undef7;
    undefined4 stack_undef8;
    undefined1 stack_undef9;
    undefined7 stack_undef10;
    longlong stack_long1;
    longlong stack_long2;
    uint *temp_uint_ptr4;
    
    temp_char_ptr = object_properties;
    stack_char_ptr1 = object_name;
    stack_char_ptr2 = object_properties;
    stack_uint1 = object_flags;
    
    // 检查对象管理器状态
    if ((char)object_manager[0x16] != '\0') {
        initialize_object_system();
    }
    
    context_base = get_global_context_base();
    stack_ulong1 = *(ulonglong *)(context_base + 0x1af8);
    
    // 检查系统状态
    if (*(char *)(stack_ulong1 + 0xb4) != '\0') {
        return stack_ulong1 & 0xffffffffffffff00;
    }
    
    temp_uint1 = get_object_hash_code(object_manager, object_name);
    
    // 处理空属性情况
    if ((object_properties != (char *)0x0) && (*object_properties == '\0')) {
        *(undefined1 *)(*(longlong *)(context_base + 0x1af8) + 0xb1) = 1;
        context_base = *(longlong *)(context_base + 0x1af8);
        temp_uint_ptr3 = (uint *)(context_base + 0x1a8);
        *temp_uint_ptr3 = *temp_uint_ptr3 | 0x18;
        update_object_bounds(context_base + 0x1b8);
        stack_float3 = 3.4028235e+38;
        stack_float4 = 3.4028235e+38;
        stack_float5 = -3.4028235e+38;
        stack_float6 = -3.4028235e+38;
        update_object_bounds_ext(&stack_float3, (ulonglong)temp_uint1, 0);
        result_ulong = get_system_timestamp();
        return result_ulong & 0xffffffffffffff00;
    }
    
    temp_uint_ptr2 = (uint *)((ulonglong)temp_char_ptr & 0xffffffffffffff00);
    get_object_position(&stack_float1, object_name);
    temp_uint_ptr3 = (uint *)0x0;
    
    // 查找现有对象
    if ((temp_uint1 != 0) && (0 < *object_manager)) {
        temp_uint_ptr2 = *(uint **)(object_manager + 2);
        temp_uint_ptr4 = temp_uint_ptr3;
        object_array = temp_uint_ptr2;
        do {
            if (*object_array == temp_uint1) {
                temp_uint_ptr3 = temp_uint_ptr2 + (longlong)(int)temp_uint_ptr4 * 10;
                break;
            }
            temp_uint2 = (int)temp_uint_ptr4 + 1;
            temp_uint_ptr4 = (uint *)(ulonglong)temp_uint2;
            object_array = object_array + 10;
        } while ((int)temp_uint2 < *object_manager);
    }
    
    result_ulong = (ulonglong)temp_uint_ptr2 & 0xffffffffffffff00;
    temp_long4 = context_base;
    
    // 创建新对象
    if (temp_uint_ptr3 == (uint *)0x0) {
        temp_int2 = *object_manager;
        temp_int1 = object_manager[1];
        stack_undef2 = 0;
        stack_undef3 = 0;
        stack_undef4 = 0xffffffffffffffff;
        stack_undef6 = 0;
        stack_undef7 = 0;
        stack_undef5 = 0;
        
        if (temp_int2 == temp_int1) {
            if (temp_int1 == 0) {
                temp_uint2 = 8;
            } else {
                temp_uint2 = temp_int1 / 2 + temp_int1;
            }
            temp_uint3 = temp_int2 + 1U;
            if ((int)(temp_int2 + 1U) < (int)temp_uint2) {
                temp_uint3 = temp_uint2;
            }
            result_ulong = (ulonglong)temp_uint3;
            resize_object_array(object_manager, result_ulong);
            temp_int2 = *object_manager;
            temp_long4 = get_global_context_base();
        }
        
        temp_long1 = (longlong)temp_int2;
        result_ulong = CONCAT71((int7)(result_ulong >> 8), 1);
        temp_long2 = *(longlong *)(object_manager + 2);
        temp_undef1 = (undefined8 *)(temp_long2 + temp_long1 * 0x28);
        *temp_undef1 = stack_undef2;
        temp_undef1[1] = stack_undef3;
        temp_undef1 = (undefined8 *)(temp_long2 + 0x10 + temp_long1 * 0x28);
        *temp_undef1 = stack_undef4;
        temp_undef1[1] = CONCAT44(stack_undef6, stack_undef5);
        *(ulonglong *)(temp_long2 + 0x20 + temp_long1 * 0x28) = CONCAT44(stack_undef8, stack_undef7);
        temp_long1 = (longlong)*object_manager;
        *object_manager = *object_manager + 1;
        temp_long2 = *(longlong *)(object_manager + 2);
        *(float *)(temp_long2 + 0x1c + temp_long1 * 0x28) = stack_float1;
        *(uint *)(temp_long2 + temp_long1 * 0x28) = temp_uint1;
        temp_uint_ptr3 = (uint *)(temp_long2 + temp_long1 * 0x28);
    }
    
    // 更新对象索引
    *(short *)((longlong)object_manager + 0x5a) = (short)(((longlong)temp_uint_ptr3 - *(longlong *)(object_manager + 2)) / 0x28);
    temp_uint_ptr3[8] = (uint)stack_float1;
    stack_int1 = temp_uint_ptr3[4] + 1;
    temp_uint2 = *(uint *)(context_base + 0x1a90);
    temp_int2 = object_manager[9] + 1;
    stack_uint2 = (uint)object_manager[0x13] >> 0x16 & 0xffffff01;
    temp_uint_ptr3[4] = temp_uint2;
    temp_uint_ptr3[1] = stack_uint1;
    *(longlong *)(temp_uint_ptr3 + 2) = object_context;
    
    // 处理对象优先级
    if (stack_int1 < (int)temp_uint2) {
        if ((((object_manager[0x13] & 2U) != 0) && (object_manager[6] == 0)) && (((int)temp_uint2 <= temp_int2 || (object_manager[5] == 0)))) {
            object_manager[6] = temp_uint1;
        }
    } else if ((object_manager[0x13] & 1U) == 0) {
        temp_uint_ptr3[6] = object_manager[0x10];
        object_manager[0x10] = (int)(*(float *)(context_base + 0x1674) + (float)temp_uint_ptr3[7] + (float)object_manager[0x10]);
    }
    
    temp_bool1 = object_manager[7] == temp_uint1;
    temp_ulong2 = CONCAT71((int7)((ulonglong)object_name >> 8), temp_bool1);
    stack_undef1 = (undefined4)temp_ulong2;
    
    if (temp_bool1) {
        *(undefined1 *)((longlong)object_manager + 0x59) = 1;
    } else if ((((object_manager[5] == 0) && (temp_int2 < (int)temp_uint2)) && (object_context == 0)) && (*object_manager == 1)) {
        temp_ulong2 = (ulonglong)temp_bool1;
        if ((*(byte *)(object_manager + 0x13) & 2) == 0) {
            temp_ulong2 = 1;
        }
        stack_undef1 = (undefined4)temp_ulong2;
    }
    
    // 处理对象更新
    if ((stack_int1 < (int)temp_uint2) && (((int)temp_uint2 <= temp_int2 || ((char)result_ulong != '\0')))) {
        *(undefined1 *)(*(longlong *)(temp_long4 + 0x1af8) + 0xb1) = 1;
        context_base = *(longlong *)(temp_long4 + 0x1af8);
        temp_uint_ptr3 = (uint *)(context_base + 0x1a8);
        *temp_uint_ptr3 = *temp_uint_ptr3 | 0x18;
        update_object_bounds(context_base + 0x1b8);
        stack_float3 = 3.4028235e+38;
        stack_float4 = 3.4028235e+38;
        stack_float5 = -3.4028235e+38;
        stack_float6 = -3.4028235e+38;
        update_object_bounds_ext(&stack_float3, temp_uint1, 0);
        get_system_timestamp();
        return temp_ulong2 & 0xff;
    }
    
    if (object_manager[5] == temp_uint1) {
        temp_uint_ptr3[5] = *(uint *)(context_base + 0x1a90);
    }
    
    position_y = (float)object_manager[0xb];
    temp_float7 = (float)temp_uint_ptr3[7];
    temp_float8 = position_y + stack_float2;
    temp_undef4 = *(undefined4 *)(stack_ulong1 + 0x100);
    temp_undef5 = *(undefined4 *)(stack_ulong1 + 0x104);
    temp_float6 = ((float)(int)(float)temp_uint_ptr3[6] - (float)object_manager[0x11]) + (float)object_manager[10];
    *(float *)(stack_ulong1 + 0x104) = position_y;
    *(float *)(stack_ulong1 + 0x100) = temp_float6;
    temp_float3 = (float)object_manager[10];
    temp_float7 = temp_float6 + temp_float7;
    stack_float3 = temp_float6;
    stack_float4 = position_y;
    stack_float5 = temp_float7;
    stack_float6 = temp_float8;
    
    // 处理对象碰撞
    if ((temp_float6 < temp_float3) || ((float)object_manager[0xc] <= temp_float7)) {
        stack_float1 = (float)object_manager[0xc];
        stack_float8 = position_y - 1.0;
        stack_char2 = '\x01';
        stack_float7 = temp_float6;
        if (temp_float6 <= temp_float3) {
            stack_float7 = temp_float3;
        }
        stack_float2 = temp_float8;
        process_collision_detection(&stack_float7, &stack_float1, CONCAT71((int7)(result_ulong >> 8), 1));
        temp_long4 = get_global_context_base();
    } else {
        stack_char2 = '\0';
    }
    
    stack_float1 = temp_float7 - temp_float6;
    stack_float2 = temp_float8 - position_y;
    update_physics_system(&stack_float1, *(undefined4 *)(context_base + 0x1660));
    result_flag = update_object_bounds_ext(&stack_float3, temp_uint1, 0);
    
    if (result_flag == '\0') {
        if (stack_char2 != '\0') {
            trigger_collision_event();
        }
        *(undefined4 *)(stack_ulong1 + 0x100) = temp_undef4;
        *(undefined4 *)(stack_ulong1 + 0x104) = temp_undef5;
        return temp_ulong2 & 0xff;
    }
    
    temp_undef4 = 0x44;
    if (*(char *)(context_base + 0x1dd0) != '\0') {
        result_flag = check_system_state(context_base + 0x1de0);
        temp_undef4 = 0x44;
        if (result_flag == '\0') {
            temp_undef4 = 0x1044;
        }
    }
    
    result_flag = process_object_interaction(&stack_float3, temp_uint1, &stack_float1, &stack_char1, temp_undef4);
    temp_byte1 = stack_float1._0_1_ | *(uint *)(context_base + 0x1b18) == temp_uint1;
    stack_float1 = (float)CONCAT31(stack_float1._1_3_, temp_byte1);
    
    if ((result_flag != '\0') || (((stack_uint1 & 2) != 0 && ((byte)stack_undef1 == '\0')))) {
        object_manager[6] = temp_uint1;
    }
    
    temp_uint3 = stack_uint1;
    if (stack_char1 == '\0') {
        cleanup_temporary_data();
    }
    
    temp_float7 = stack_float4;
    position_y = stack_float3;
    
    // 处理对象上下文
    if (((((object_context == 0) || (temp_long2 = *(longlong *)(object_context + 0x408), temp_long2 == 0)) || (*(longlong *)(temp_long2 + 8) != 0)) || (((*(byte *)(temp_long2 + 0xa0) & 0x10) != 0 || (*(int *)(temp_long2 + 0x20) != 1)))) || (*(char *)(context_base + 0xc2) == '\0')) {
        temp_bool1 = false;
    } else {
        temp_bool1 = true;
    }
    
    if (stack_char1 == '\0') {
        goto FINAL_PROCESSING;
    }
    
    if (((!temp_bool1) || (*(char *)(temp_long4 + 0x120) == '\0')) || (*(float *)(temp_long4 + 0x474) <= 0.0 && *(float *)(temp_long4 + 0x474) != 0.0)) {
        if (((stack_int1 < (int)temp_uint2) || (*(char *)(temp_long4 + 0x120) == '\0')) || (temp_float3 = *(float *)(temp_long4 + 0x38) * *(float *)(temp_long4 + 0x38), *(float *)(temp_long4 + 0x474) <= temp_float3 && temp_float3 != *(float *)(temp_long4 + 0x474))) {
            goto FINAL_PROCESSING;
        }
        temp_float3 = 0.0;
        if (*(char *)(context_base + 0x1dd0) != '\0') {
            goto ADVANCED_PROCESSING;
        }
        temp_uint2 = object_manager[0x13] & 1;
        if ((temp_uint2 == 0) && ((temp_uint3 >> 0x14 & 1) == 0)) {
            goto FINAL_PROCESSING;
        }
        if ((0.0 <= *(float *)(context_base + 0x3ac)) || (stack_float3 <= *(float *)(context_base + 0x118))) {
            if (((0.0 < *(float *)(context_base + 0x3ac)) && (stack_float5 < *(float *)(context_base + 0x118))) && (temp_float3 = *(float *)(context_base + 0x118) - stack_float5, temp_uint2 != 0)) {
                temp_uint2 = *temp_uint_ptr3;
                object_manager[0x15] = 1;
                goto POSITION_UPDATE;
            }
        } else {
            temp_float3 = stack_float3 - *(float *)(context_base + 0x118);
            if (temp_uint2 != 0) {
                temp_uint2 = *temp_uint_ptr3;
                object_manager[0x15] = -1;
            POSITION_UPDATE:
                object_manager[0x14] = temp_uint2;
            }
        }
    ADVANCED_PROCESSING:
        if ((temp_uint3 >> 0x14 & 1) == 0) {
            goto FINAL_PROCESSING;
        }
        if ((*(char *)(context_base + 0x1dd0) == '\0') || (*(uint *)(context_base + 0x1dec) != temp_uint1)) {
            temp_float6 = *(float *)(context_base + 0x19f8);
            temp_float8 = (ABS(*(float *)(context_base + 0x44c)) - (temp_float6 + temp_float6)) * 0.2;
            if (0.0 <= temp_float8) {
                temp_float5 = temp_float6 * 4.0;
                if (temp_float8 <= temp_float6 * 4.0) {
                    temp_float5 = temp_float8;
                }
            } else {
                temp_float5 = 0.0;
            }
            temp_float8 = stack_float4 - *(float *)(context_base + 0x11c);
            temp_float4 = *(float *)(context_base + 0x11c) - stack_float6;
            if (temp_float8 <= temp_float4) {
                temp_float8 = temp_float4;
            }
            if (temp_float8 < temp_float6 * 1.5 + temp_float5) {
                if (temp_float3 <= temp_float6 * 2.2) {
                    goto FINAL_PROCESSING;
                }
                if (((-1 < object_manager[0x15]) || (temp_int2 = (int)((longlong)temp_uint_ptr3 - *(longlong *)(object_manager + 2) >> 0x3f), (int)(((longlong)temp_uint_ptr3 - *(longlong *)(object_manager + 2)) / 0x28) + temp_int2 != temp_int2)) && ((object_manager[0x15] < 1 || ((int)(((longlong)temp_uint_ptr3 - *(longlong *)(object_manager + 2)) / 0x28) != *object_manager + -1)))) {
                    goto CONTEXT_UPDATE;
                }
            }
        }
        
        temp_long2 = *(longlong *)(context_base + 0x2df8);
        stack_undef5 = 0;
        stack_undef6 = 0;
        stack_undef3 = 0;
        stack_long2 = 0;
        temp_int2 = *(int *)(temp_long2 + 0x14);
        stack_undef4 = 0;
        stack_undef9 = 0;
        temp_int1 = *(int *)(temp_long2 + 0x10);
        stack_undef7 = 0xffffffff;
        stack_undef8 = 0x3f000000;
        stack_undef2 = CONCAT44(stack_undef2._4_4_, 2);
        stack_long1 = object_context;
        
        if (temp_int1 == temp_int2) {
            if (temp_int2 == 0) {
                temp_int2 = 8;
            } else {
                temp_int2 = temp_int2 / 2 + temp_int2;
            }
            temp_int1 = temp_int1 + 1;
            if (temp_int1 + 1 < temp_int2) {
                temp_int1 = temp_int2;
            }
            resize_object_array(temp_long2 + 0x10, temp_int1);
            temp_int1 = *(int *)(temp_long2 + 0x10);
            temp_long4 = get_global_context_base();
        }
        
        temp_long3 = *(longlong *)(temp_long2 + 0x18);
        temp_long3 = (longlong)temp_int1 * 0x40;
        *(undefined8 *)(temp_long3 + temp_long3) = stack_undef2;
        ((undefined8 *)(temp_long3 + temp_long3))[1] = stack_undef3;
        temp_undef1 = (undefined8 *)(temp_long3 + 0x10 + temp_long3);
        *temp_undef1 = stack_undef4;
        temp_undef1[1] = CONCAT44(stack_undef6, stack_undef5);
        temp_undef1 = (undefined8 *)(temp_long3 + 0x20 + temp_long3);
        *temp_undef1 = CONCAT44(stack_undef8, stack_undef7);
        temp_undef1[1] = CONCAT71(stack_undef10, stack_undef9);
        temp_undef1 = (longlong *)(temp_long3 + 0x30 + temp_long3);
        *temp_undef1 = stack_long1;
        temp_undef1[1] = stack_long2;
        *(int *)(temp_long2 + 0x10) = *(int *)(temp_long2 + 0x10) + 1;
        *(longlong *)(context_base + 0x1b78) = object_context;
        *(undefined4 *)(context_base + 0x1b2c) = *(undefined4 *)(object_context + 0x84);
        temp_float3 = *(float *)(object_context + 0x44);
        *(float *)(context_base + 0x1b48) = *(float *)(context_base + 0x1b48) - (*(float *)(object_context + 0x40) - position_y);
        *(float *)(context_base + 0x1b4c) = *(float *)(context_base + 0x1b4c) - (temp_float3 - temp_float7);
    } else {
        process_object_context(object_context);
    }
    
CONTEXT_UPDATE:
    temp_byte1 = stack_float1._0_1_;
    
FINAL_PROCESSING:
    temp_undef2 = *(undefined8 *)(stack_ulong1 + 0x2e8);
    if ((stack_char1 == '\0') && (temp_byte1 == 0)) {
        if ((byte)stack_undef1 == '\0') {
            temp_long2 = 0x24;
            if ((byte)stack_uint2 != 0) {
                temp_long2 = 0x21;
            }
        } else {
            temp_long2 = ((ulonglong)(byte)stack_uint2 ^ 1) * 2 + 0x23;
        }
    } else {
        temp_long2 = 0x22;
    }
    
    position_ptr = (float *)(temp_long4 + 0x1628 + (temp_long2 + 10) * 0x10);
    stack_float7 = *position_ptr;
    stack_float8 = position_ptr[1];
    stack_float9 = position_ptr[2];
    stack_float10 = (float)position_ptr[3] * *(float *)(temp_long4 + 0x1628);
    temp_undef4 = get_render_parameters(&stack_float7);
    temp_uint2 = stack_uint1;
    update_render_state(temp_undef2, &stack_float3, stack_uint1, temp_undef4);
    
    if (temp_uint1 == *(uint *)(get_global_context_base() + 0x1ca0)) {
        update_object_visual(&stack_float3, 1, get_global_context_base());
    }
    
    temp_long4 = get_global_context_base();
    result_flag = get_system_status(8);
    temp_ulong2 = stack_ulong1;
    
    if ((result_flag != '\0') && ((*(float *)(temp_long4 + 0x428) == 0.0 || (*(char *)(temp_long4 + 0x41b) != '\0')))) {
        object_manager[6] = temp_uint1;
    }
    
    temp_uint3 = temp_uint2 | 4;
    if ((object_manager[0x13] & 4U) == 0) {
        temp_uint3 = temp_uint2;
    }
    
    if (stack_char_ptr2 == (char *)0x0) {
        temp_undef4 = 0;
    } else {
        temp_undef4 = get_object_instance_data(stack_ulong1, (ulonglong)temp_uint1 + 1);
    }
    
    result_flag = finalize_object_update(temp_undef2, &stack_float3, temp_uint3, stack_char_ptr1, temp_uint1, temp_undef4);
    
    if (result_flag != '\0') {
        *stack_char_ptr2 = '\0';
        if (object_manager[7] == *temp_uint_ptr3) {
            if ((temp_uint_ptr3[1] & 1) == 0) {
                temp_uint_ptr3[4] = 0xffffffff;
                object_manager[5] = 0;
                object_manager[6] = 0;
            }
        } else if ((temp_uint_ptr3[1] & 1) != 0) {
            object_manager[6] = *temp_uint_ptr3;
        }
    }
    
    if (stack_char2 != '\0') {
        trigger_collision_event();
    }
    
    *(undefined4 *)(temp_ulong2 + 0x100) = temp_undef4;
    *(undefined4 *)(temp_ulong2 + 0x104) = temp_undef5;
    
    if ((((*(uint *)(context_base + 0x1b18) == temp_uint1) && (stack_char1 == '\0')) && (0.5 < *(float *)(context_base + 0x1b28))) && (temp_char_ptr = stack_char_ptr1, (*(byte *)(object_manager + 0x13) & 0x20) == 0)) {
        for (; ((temp_char_ptr != (char *)0xffffffffffffffff && (*temp_char_ptr != '\0')) && ((*temp_char_ptr != '#' || (temp_char_ptr[1] != '#')))); temp_char_ptr = temp_char_ptr + 1) {
        }
        log_object_interaction(&GLOBAL_DEBUG_INFO, (int)temp_char_ptr - (int)stack_char_ptr1, stack_char_ptr1);
    }
    
    return (ulonglong)(byte)stack_undef1;
}

/**
 * 对象交互处理函数
 * 
 * 处理对象之间的交互逻辑，包括碰撞检测、状态同步等
 * 
 * @param param1 交互参数1
 * @param param2 交互参数2
 * @param param3 交互参数3
 * @param param4 交互参数4
 * @param param5 交互参数5
 * @param param6 交互参数6
 * @param param7 交互参数7
 * @param param8 交互参数8
 * @param param9 交互参数9
 * @param param10 交互参数10
 * @param param11 交互参数11
 * @param param12 交互参数12
 * @param param13 交互参数13
 * @param param14 交互参数14
 * @param param15 交互参数15
 * @return 交互处理结果
 */
ulonglong process_object_interaction_ext(undefined8 param1, undefined8 param2, ulonglong param3, undefined8 param4, undefined8 param5, char param6, float param7, float param8, uint param9, longlong param10, int param11, undefined8 param12, undefined4 param13, undefined8 param14, undefined8 param15) {
    uint *object_ptr;
    undefined8 *temp_undef_ptr1;
    undefined4 *temp_undef_ptr2;
    float temp_float1;
    undefined4 temp_undef4;
    undefined8 temp_undef8;
    int temp_int1;
    longlong temp_long1;
    char *temp_char_ptr;
    undefined8 temp_undef8_2;
    undefined8 temp_undef8_3;
    undefined8 temp_undef8_4;
    char temp_char1;
    uint temp_uint1;
    uint temp_uint2;
    int temp_int2;
    undefined4 temp_undef4_2;
    longlong temp_long2;
    char *temp_char_ptr2;
    int temp_int3;
    int *temp_int_ptr;
    longlong temp_long3;
    int *unaff_rbx;
    longlong unaff_rbp;
    longlong unaff_rsi;
    int temp_int4;
    ulonglong unaff_rdi;
    byte temp_byte1;
    int *temp_int_ptr2;
    ulonglong temp_ulong1;
    int *temp_int_ptr3;
    longlong unaff_r13;
    undefined8 unaff_r14;
    ulonglong temp_ulong2;
    bool temp_bool1;
    undefined4 temp_undef4_3;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    float temp_float8;
    char stack_char1;
    byte stack_byte1;
    float stack_float1;
    float stack_float2;
    float stack_float3;
    float stack_float4;
    undefined4 stack_undef1;
    undefined4 stack_undef2;
    undefined4 stack_undef3;
    undefined4 stack_undef4;
    undefined4 stack_undef5;
    undefined4 stack_undef6;
    undefined4 stack_undef7;
    undefined4 stack_undef8;
    undefined4 stack_undef9;
    int *temp_int_ptr4;
    
    temp_int_ptr2 = (int *)(param3 & 0xffffffffffffff00);
    temp_undef4_3 = get_object_position(unaff_rbp + 0x70);
    temp_int_ptr3 = (int *)0x0;
    temp_int4 = (int)unaff_rdi;
    
    if ((temp_int4 != 0) && (0 < *unaff_rbx)) {
        temp_int_ptr2 = *(int **)(unaff_rbx + 2);
        temp_int_ptr4 = temp_int_ptr3;
        temp_int_ptr = temp_int_ptr2;
        do {
            if (*temp_int_ptr == temp_int4) {
                temp_int_ptr3 = temp_int_ptr2 + (longlong)(int)temp_int_ptr4 * 10;
                break;
            }
            temp_uint1 = (int)temp_int_ptr4 + 1;
            temp_int_ptr4 = (int *)(ulonglong)temp_uint1;
            temp_int_ptr = temp_int_ptr + 10;
        } while ((int)temp_uint1 < *unaff_rbx);
    }
    
    temp_int2 = *(int *)(unaff_rbp + 0x70);
    temp_ulong1 = (ulonglong)temp_int_ptr2 & 0xffffffffffffff00;
    
    if (temp_int_ptr3 == (int *)0x0) {
        temp_int3 = *unaff_rbx;
        temp_int1 = unaff_rbx[1];
        param14 = 0;
        param15 = 0;
        *(undefined8 *)(unaff_rbp + -0x80) = 0xffffffffffffffff;
        *(undefined8 *)(unaff_rbp + -0x74) = 0;
        *(undefined4 *)(unaff_rbp + -0x78) = 0;
        
        if (temp_int3 == temp_int1) {
            if (temp_int1 == 0) {
                temp_uint1 = 8;
            } else {
                temp_uint1 = temp_int1 / 2 + temp_int1;
            }
            temp_uint2 = temp_int3 + 1U;
            if ((int)(temp_int3 + 1U) < (int)temp_uint1) {
                temp_uint2 = temp_uint1;
            }
            temp_ulong1 = (ulonglong)temp_uint2;
            resize_object_array(temp_undef4_3, temp_ulong1);
            temp_int3 = *unaff_rbx;
            unaff_r13 = get_global_context_base();
        }
        
        temp_long1 = (longlong)temp_int3;
        temp_ulong1 = CONCAT71((int7)(temp_ulong1 >> 8), 1);
        temp_undef8_2 = *(undefined8 *)(unaff_rbp + -0x80);
        temp_undef8_3 = *(undefined8 *)(unaff_rbp + -0x78);
        temp_long2 = *(longlong *)(unaff_rbx + 2);
        temp_undef_ptr1 = (undefined8 *)(temp_long2 + temp_long1 * 0x28);
        *temp_undef_ptr1 = param14;
        temp_undef_ptr1[1] = param15;
        temp_undef8 = *(undefined8 *)(unaff_rbp + -0x70);
        temp_undef_ptr1 = (undefined8 *)(temp_long2 + 0x10 + temp_long1 * 0x28);
        *temp_undef_ptr1 = temp_undef8_2;
        temp_undef_ptr1[1] = temp_undef8_3;
        *(undefined8 *)(temp_long2 + 0x20 + temp_long1 * 0x28) = temp_undef8;
        temp_long1 = (longlong)*unaff_rbx;
        *unaff_rbx = *unaff_rbx + 1;
        temp_long2 = *(longlong *)(unaff_rbx + 2);
        *(int *)(temp_long2 + 0x1c + temp_long1 * 0x28) = temp_int2;
        *(int *)(temp_long2 + temp_long1 * 0x28) = temp_int4;
        temp_int_ptr3 = (int *)(temp_long2 + temp_long1 * 0x28);
    }
    
    temp_long2 = *(longlong *)(unaff_rbp + 0x90);
    *(short *)((longlong)unaff_rbx + 0x5a) = (short)(((longlong)temp_int_ptr3 - *(longlong *)(unaff_rbx + 2)) / 0x28);
    temp_int_ptr3[8] = temp_int2;
    param11 = temp_int_ptr3[4] + 1;
    temp_int2 = *(int *)(unaff_rsi + 0x1a90);
    temp_int3 = unaff_rbx[9] + 1;
    param9 = (uint)unaff_rbx[0x13] >> 0x16 & 0xffffff01;
    temp_int_ptr3[4] = temp_int2;
    temp_int_ptr3[1] = *(int *)(unaff_rbp + 0x88);
    *(longlong *)(temp_int_ptr3 + 2) = temp_long2;
    
    if (param11 < temp_int2) {
        if ((((unaff_rbx[0x13] & 2U) != 0) && (unaff_rbx[6] == 0)) && ((temp_int2 <= temp_int3 || (unaff_rbx[5] == 0)))) {
            unaff_rbx[6] = temp_int4;
        }
    } else if ((unaff_rbx[0x13] & 1U) == 0) {
        temp_int_ptr3[6] = unaff_rbx[0x10];
        unaff_rbx[0x10] = (int)(*(float *)(unaff_rsi + 0x1674) + (float)temp_int_ptr3[7] + (float)unaff_rbx[0x10]);
    }
    
    temp_bool1 = unaff_rbx[7] == temp_int4;
    temp_ulong2 = CONCAT71((int7)((ulonglong)unaff_r14 >> 8), temp_bool1);
    _bStack0000000000000034 = (undefined4)temp_ulong2;
    
    if (temp_bool1) {
        *(undefined1 *)((longlong)unaff_rbx + 0x59) = 1;
    } else if ((((unaff_rbx[5] == 0) && (temp_int3 < temp_int2)) && (temp_long2 == 0)) && (*unaff_rbx == 1)) {
        temp_ulong2 = (ulonglong)temp_bool1;
        if ((*(byte *)(unaff_rbx + 0x13) & 2) == 0) {
            temp_ulong2 = 1;
        }
        _bStack0000000000000034 = (undefined4)temp_ulong2;
    }
    
    if ((param11 < temp_int2) && ((temp_int2 <= temp_int3 || ((char)temp_ulong1 != '\0')))) {
        *(undefined1 *)(*(longlong *)(unaff_r13 + 0x1af8) + 0xb1) = 1;
        temp_long2 = *(longlong *)(unaff_r13 + 0x1af8);
        object_ptr = (uint *)(temp_long2 + 0x1a8);
        *object_ptr = *object_ptr | 0x18;
        update_object_bounds(temp_long2 + 0x1b8);
        param7 = 3.4028235e+38;
        stack_float1 = 3.4028235e+38;
        param8 = -3.4028235e+38;
        stack_float2 = -3.4028235e+38;
        update_object_bounds_ext(&param7, unaff_rdi & 0xffffffff, 0);
        get_system_timestamp();
        return temp_ulong2 & 0xff;
    }
    
    if (unaff_rbx[5] == temp_int4) {
        temp_int_ptr3[5] = *(int *)(unaff_rsi + 0x1a90);
    }
    
    temp_float1 = (float)unaff_rbx[0xb];
    temp_float7 = (float)temp_int_ptr3[7];
    temp_float8 = temp_float1 + *(float *)(unaff_rbp + 0x74);
    temp_undef4_3 = *(undefined4 *)(param10 + 0x100);
    temp_undef4 = *(undefined4 *)(param10 + 0x104);
    temp_float6 = ((float)(int)(float)temp_int_ptr3[6] - (float)unaff_rbx[0x11]) + (float)unaff_rbx[10];
    *(float *)(param10 + 0x104) = temp_float1;
    *(float *)(param10 + 0x100) = temp_float6;
    temp_float2 = (float)unaff_rbx[10];
    temp_float7 = temp_float6 + temp_float7;
    param7 = temp_float6;
    stack_float1 = temp_float1;
    param8 = temp_float7;
    stack_float2 = temp_float8;
    
    if ((temp_float6 < temp_float2) || ((float)unaff_rbx[0xc] <= temp_float7)) {
        *(int *)(unaff_rbp + 0x70) = unaff_rbx[0xc];
        *(float *)(unaff_rbp + 0x74) = temp_float8;
        param12._4_4_ = temp_float1 - 1.0;
        stack_char1 = '\x01';
        param12._0_4_ = temp_float6;
        if (temp_float6 <= temp_float2) {
            param12._0_4_ = temp_float2;
        }
        process_collision_detection(&param12, unaff_rbp + 0x70, CONCAT71((int7)(temp_ulong1 >> 8), 1));
        unaff_r13 = get_global_context_base();
    } else {
        stack_char1 = '\0';
    }
    
    temp_undef4_2 = *(undefined4 *)(unaff_rsi + 0x1660);
    *(float *)(unaff_rbp + 0x70) = temp_float7 - temp_float6;
    *(float *)(unaff_rbp + 0x74) = temp_float8 - temp_float1;
    update_physics_system(unaff_rbp + 0x70, temp_undef4_2);
    temp_char1 = update_object_bounds_ext(&param7, unaff_rdi & 0xffffffff, 0);
    
    if (temp_char1 == '\0') {
        if (stack_char1 != '\0') {
            trigger_collision_event();
        }
        *(undefined4 *)(param10 + 0x100) = temp_undef4_3;
        *(undefined4 *)(param10 + 0x104) = temp_undef4;
        return temp_ulong2 & 0xff;
    }
    
    temp_undef4_2 = 0x44;
    if (*(char *)(unaff_rsi + 0x1dd0) != '\0') {
        temp_char1 = check_system_state(unaff_rsi + 0x1de0);
        temp_undef4_2 = 0x44;
        if (temp_char1 == '\0') {
            temp_undef4_2 = 0x1044;
        }
    }
    
    temp_char1 = process_object_interaction(&param7, unaff_rdi & 0xffffffff, unaff_rbp + 0x70, &param6, temp_undef4_2);
    temp_uint1 = *(uint *)(unaff_rbp + 0x88);
    stack_byte1 = *(byte *)(unaff_rbp + 0x70) | *(int *)(unaff_rsi + 0x1b18) == temp_int4;
    *(byte *)(unaff_rbp + 0x70) = stack_byte1;
    
    if ((temp_char1 != '\0') || (((temp_uint1 & 2) != 0 && (stack_byte1 == '\0')))) {
        unaff_rbx[6] = temp_int4;
    }
    
    if (param6 == '\0') {
        cleanup_temporary_data();
    }
    
    temp_float7 = stack_float1;
    temp_float1 = param7;
    temp_long2 = *(longlong *)(unaff_rbp + 0x90);
    
    if ((((temp_long2 == 0) || (temp_long1 = *(longlong *)(temp_long2 + 0x408), temp_long1 == 0)) || (*(longlong *)(temp_long1 + 8) != 0)) || (((*(byte *)(temp_long1 + 0xa0) & 0x10) != 0 || (*(int *)(temp_long1 + 0x20) != 1)) || (*(char *)(unaff_rsi + 0xc2) == '\0')))) {
        temp_bool1 = false;
    } else {
        temp_bool1 = true;
    }
    
    if (param6 == '\0') {
        goto FINAL_PROCESSING;
    }
    
    if (((!temp_bool1) || (*(char *)(unaff_r13 + 0x120) == '\0')) || (*(float *)(unaff_r13 + 0x474) <= 0.0 && *(float *)(unaff_r13 + 0x474) != 0.0)) {
        if (((param11 < temp_int2) || (*(char *)(unaff_r13 + 0x120) == '\0')) || (temp_float2 = *(float *)(unaff_r13 + 0x38) * *(float *)(unaff_r13 + 0x38), *(float *)(unaff_r13 + 0x474) <= temp_float2 && temp_float2 != *(float *)(unaff_r13 + 0x474))) {
            goto FINAL_PROCESSING;
        }
        temp_float2 = 0.0;
        if (*(char *)(unaff_rsi + 0x1dd0) != '\0') {
            goto ADVANCED_PROCESSING;
        }
        temp_uint2 = unaff_rbx[0x13] & 1;
        if ((temp_uint2 == 0) && ((temp_uint1 >> 0x14 & 1) == 0)) {
            goto FINAL_PROCESSING;
        }
        if ((0.0 <= *(float *)(unaff_rsi + 0x3ac)) || (param7 <= *(float *)(unaff_rsi + 0x118))) {
            if (((0.0 < *(float *)(unaff_rsi + 0x3ac)) && (param8 < *(float *)(unaff_rsi + 0x118))) && (temp_float2 = *(float *)(unaff_rsi + 0x118) - param8, temp_uint2 != 0)) {
                temp_int2 = *temp_int_ptr3;
                unaff_rbx[0x15] = 1;
                goto POSITION_UPDATE;
            }
        } else {
            temp_float2 = param7 - *(float *)(unaff_rsi + 0x118);
            if (temp_uint2 != 0) {
                temp_int2 = *temp_int_ptr3;
                unaff_rbx[0x15] = -1;
            POSITION_UPDATE:
                unaff_rbx[0x14] = temp_int2;
            }
        }
    ADVANCED_PROCESSING:
        if ((temp_uint1 >> 0x14 & 1) == 0) {
            goto FINAL_PROCESSING;
        }
        if ((*(char *)(unaff_rsi + 0x1dd0) == '\0') || (*(int *)(unaff_rsi + 0x1dec) != temp_int4)) {
            temp_float6 = *(float *)(unaff_rsi + 0x19f8);
            temp_float8 = (ABS(*(float *)(unaff_rsi + 0x44c)) - (temp_float6 + temp_float6)) * 0.2;
            if (0.0 <= temp_float8) {
                temp_float5 = temp_float6 * 4.0;
                if (temp_float8 <= temp_float6 * 4.0) {
                    temp_float5 = temp_float8;
                }
            } else {
                temp_float5 = 0.0;
            }
            temp_float8 = stack_float1 - *(float *)(unaff_rsi + 0x11c);
            temp_float3 = *(float *)(unaff_rsi + 0x11c) - stack_float2;
            if (temp_float8 <= temp_float3) {
                temp_float8 = temp_float3;
            }
            if (temp_float8 < temp_float6 * 1.5 + temp_float5) {
                if (temp_float2 <= temp_float6 * 2.2) {
                    goto FINAL_PROCESSING;
                }
                if (((-1 < unaff_rbx[0x15]) || (temp_int2 = (int)((longlong)temp_int_ptr3 - *(longlong *)(unaff_rbx + 2) >> 0x3f), (int)(((longlong)temp_int_ptr3 - *(longlong *)(unaff_rbx + 2)) / 0x28) + temp_int2 != temp_int2)) && ((unaff_rbx[0x15] < 1 || ((int)(((longlong)temp_int_ptr3 - *(longlong *)(unaff_rbx + 2)) / 0x28) != *unaff_rbx + -1)))) {
                    goto CONTEXT_UPDATE;
                }
            }
        }
        
        temp_long1 = *(longlong *)(unaff_rsi + 0x2df8);
        *(undefined8 *)(unaff_rbp + -0x78) = 0;
        param15 = 0;
        *(undefined8 *)(unaff_rbp + -0x58) = 0;
        temp_int2 = *(int *)(temp_long1 + 0x14);
        *(undefined8 *)(unaff_rbp + -0x80) = 0;
        *(undefined1 *)(unaff_rbp + -0x68) = 0;
        temp_int3 = *(int *)(temp_long1 + 0x10);
        *(undefined4 *)(unaff_rbp + -0x70) = 0xffffffff;
        *(undefined4 *)(unaff_rbp + -0x6c) = 0x3f000000;
        param14 = CONCAT44(param14._4_4_, 2);
        *(longlong *)(unaff_rbp + -0x60) = temp_long2;
        
        if (temp_int3 == temp_int2) {
            if (temp_int2 == 0) {
                temp_int2 = 8;
            } else {
                temp_int2 = temp_int2 / 2 + temp_int2;
            }
            temp_int1 = temp_int3 + 1;
            if (temp_int3 + 1 < temp_int2) {
                temp_int1 = temp_int2;
            }
            resize_object_array(temp_long1 + 0x10, temp_int1);
            temp_int3 = *(int *)(temp_long1 + 0x10);
            temp_long2 = *(longlong *)(unaff_rbp + 0x90);
            unaff_r13 = get_global_context_base();
        }
        
        temp_undef8 = *(undefined8 *)(unaff_rbp + -0x80);
        temp_undef8_2 = *(undefined8 *)(unaff_rbp + -0x78);
        temp_long3 = *(longlong *)(temp_long1 + 0x18);
        temp_long3 = (longlong)temp_int3 * 0x40;
        *(undefined8 *)(temp_long3 + temp_long3) = param14;
        ((undefined8 *)(temp_long3 + temp_long3))[1] = param15;
        temp_undef8_3 = *(undefined8 *)(unaff_rbp + -0x70);
        temp_undef8_4 = *(undefined8 *)(unaff_rbp + -0x68);
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x10 + temp_long3);
        *temp_undef_ptr1 = temp_undef8;
        temp_undef_ptr1[1] = temp_undef8_2;
        temp_undef8 = *(undefined8 *)(unaff_rbp + -0x60);
        temp_undef8_2 = *(undefined8 *)(unaff_rbp + -0x58);
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x20 + temp_long3);
        *temp_undef_ptr1 = temp_undef8_3;
        temp_undef_ptr1[1] = temp_undef8_4;
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x30 + temp_long3);
        *temp_undef_ptr1 = temp_undef8;
        temp_undef_ptr1[1] = temp_undef8_2;
        *(int *)(temp_long1 + 0x10) = *(int *)(temp_long1 + 0x10) + 1;
        *(longlong *)(unaff_rsi + 0x1b78) = temp_long2;
        *(undefined4 *)(unaff_rsi + 0x1b2c) = *(undefined4 *)(temp_long2 + 0x84);
        temp_float2 = *(float *)(temp_long2 + 0x44);
        *(float *)(unaff_rsi + 0x1b48) = *(float *)(unaff_rsi + 0x1b48) - (*(float *)(temp_long2 + 0x40) - temp_float1);
        *(float *)(unaff_rsi + 0x1b4c) = *(float *)(unaff_rsi + 0x1b4c) - (temp_float2 - temp_float7);
    } else {
        process_object_context(temp_long2);
    }
    
CONTEXT_UPDATE:
    stack_byte1 = *(byte *)(unaff_rbp + 0x70);
    
FINAL_PROCESSING:
    temp_undef8 = *(undefined8 *)(param10 + 0x2e8);
    if ((param6 == '\0') && (stack_byte1 == 0)) {
        if (stack_byte1 == '\0') {
            temp_long2 = 0x24;
            if ((byte)param9 != 0) {
                temp_long2 = 0x21;
            }
        } else {
            temp_long2 = ((ulonglong)(byte)param9 ^ 1) * 2 + 0x23;
        }
    } else {
        temp_long2 = 0x22;
    }
    
    temp_undef_ptr2 = (undefined4 *)(unaff_r13 + 0x1628 + (temp_long2 + 10) * 0x10);
    param12._0_4_ = (float)*temp_undef_ptr2;
    param12._4_4_ = (float)temp_undef_ptr2[1];
    param13 = temp_undef_ptr2[2];
    stack_float3 = (float)temp_undef_ptr2[3] * *(float *)(unaff_r13 + 0x1628);
    temp_undef4_2 = get_render_parameters(&param12);
    temp_uint1 = *(uint *)(unaff_rbp + 0x88);
    update_render_state(temp_undef8, &param7, temp_uint1, temp_undef4_2);
    
    if (temp_int4 == *(int *)(get_global_context_base() + 0x1ca0)) {
        update_object_visual(&param7, 1, get_global_context_base());
    }
    
    temp_long1 = get_global_context_base();
    temp_char1 = get_system_status(8);
    temp_long2 = param10;
    
    if ((temp_char1 != '\0') && ((*(float *)(temp_long1 + 0x428) == 0.0 || (*(char *)(temp_long1 + 0x41b) != '\0')))) {
        unaff_rbx[6] = temp_int4;
    }
    
    temp_uint2 = temp_uint1 | 4;
    if ((unaff_rbx[0x13] & 4U) == 0) {
        temp_uint2 = temp_uint1;
    }
    
    if (*(longlong *)(unaff_rbp + 0x80) != 0) {
        get_object_instance_data(param10, unaff_rdi + 1);
    }
    
    temp_char1 = finalize_object_update(temp_undef8, &param7, temp_uint2, *(undefined8 *)(unaff_rbp + 0x78));
    
    if (temp_char1 != '\0') {
        **(undefined1 **)(unaff_rbp + 0x80) = 0;
        if (unaff_rbx[7] == *temp_int_ptr3) {
            if ((temp_int_ptr3[1] & 1U) == 0) {
                temp_int_ptr3[4] = -1;
                unaff_rbx[5] = 0;
                unaff_rbx[6] = 0;
            }
        } else if ((temp_int_ptr3[1] & 1U) != 0) {
            unaff_rbx[6] = *temp_int_ptr3;
        }
    }
    
    if (stack_char1 != '\0') {
        trigger_collision_event();
    }
    
    *(undefined4 *)(temp_long2 + 0x100) = temp_undef4_3;
    *(undefined4 *)(temp_long2 + 0x104) = temp_undef4;
    
    if ((((*(int *)(unaff_rsi + 0x1b18) == temp_int4) && (param6 == '\0')) && (0.5 < *(float *)(unaff_rsi + 0x1b28))) && ((*(byte *)(unaff_rbx + 0x13) & 0x20) == 0)) {
        temp_char_ptr = *(char **)(unaff_rbp + 0x78);
        for (temp_char_ptr2 = temp_char_ptr; ((temp_char_ptr2 != (char *)0xffffffffffffffff && (*temp_char_ptr2 != '\0')) && ((*temp_char_ptr2 != '#' || (temp_char_ptr2[1] != '#')))); temp_char_ptr2 = temp_char_ptr2 + 1) {
        }
        log_object_interaction(&GLOBAL_DEBUG_INFO, (int)temp_char_ptr2 - (int)temp_char_ptr, temp_char_ptr);
    }
    
    return (ulonglong)stack_byte1;
}

/**
 * 对象状态更新函数
 * 
 * 更新对象的状态信息，包括位置、旋转、缩放等属性
 * 
 * @return 更新状态标志
 */
char update_object_state() {
    undefined8 *temp_undef_ptr1;
    undefined4 *temp_undef_ptr2;
    float temp_float1;
    undefined4 temp_undef4;
    undefined4 temp_undef4_2;
    longlong temp_long1;
    undefined8 temp_undef8;
    char *temp_char_ptr;
    int temp_int1;
    undefined8 temp_undef8_2;
    undefined8 temp_undef8_3;
    undefined8 temp_undef8_4;
    bool temp_bool1;
    char temp_char1;
    uint temp_uint1;
    int temp_int2;
    int temp_int3;
    undefined4 temp_undef4_3;
    longlong temp_long2;
    char *temp_char_ptr2;
    longlong temp_long3;
    int *unaff_rbx;
    longlong unaff_rbp;
    longlong unaff_rsi;
    int temp_int4;
    ulonglong unaff_rdi;
    byte temp_byte1;
    uint temp_uint2;
    longlong temp_long4;
    int unaff_r12d;
    longlong unaff_r13;
    char unaff_r14b;
    int *unaff_r15;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    float unaff_xmm10_da;
    char stack_char1;
    char stack_char2;
    char stack_char3;
    float stack_float1;
    float stack_float2;
    float stack_float3;
    float stack_float4;
    byte stack_byte1;
    longlong stack_long1;
    int stack_int1;
    float stack_float5;
    float stack_float6;
    undefined4 stack_undef1;
    float stack_float7;
    undefined4 stack_undef2;
    undefined4 stack_undef3;
    undefined8 stack_undef4;
    
    temp_int4 = (int)unaff_rdi;
    if (unaff_rbx[5] == temp_int4) {
        unaff_r15[5] = *(int *)(unaff_rsi + 0x1a90);
    }
    
    temp_float1 = (float)unaff_rbx[0xb];
    temp_float6 = (float)unaff_r15[7];
    temp_float7 = temp_float1 + *(float *)(unaff_rbp + 0x74);
    temp_undef4 = *(undefined4 *)(stack_long1 + 0x100);
    temp_undef4_2 = *(undefined4 *)(stack_long1 + 0x104);
    temp_float5 = ((float)(int)(float)unaff_r15[6] - (float)unaff_rbx[0x11]) + (float)unaff_rbx[10];
    *(float *)(stack_long1 + 0x104) = temp_float1;
    *(float *)(stack_long1 + 0x100) = temp_float5;
    temp_float2 = (float)unaff_rbx[10];
    temp_float6 = temp_float5 + temp_float6;
    stack_float1 = temp_float5;
    stack_float2 = temp_float1;
    stack_float3 = temp_float6;
    stack_float4 = temp_float7;
    
    if ((temp_float5 < temp_float2) || ((float)unaff_rbx[0xc] <= temp_float6)) {
        *(int *)(unaff_rbp + 0x70) = unaff_rbx[0xc];
        *(float *)(unaff_rbp + 0x74) = temp_float7;
        stack_float6 = temp_float1 - 1.0;
        stack_char2 = '\x01';
        stack_float5 = temp_float5;
        if (temp_float5 <= temp_float2) {
            stack_float5 = temp_float2;
        }
        process_collision_detection(&stack0x00000060, unaff_rbp + 0x70, 1);
        unaff_r13 = get_global_context_base();
    } else {
        stack_char2 = '\0';
    }
    
    temp_undef4_3 = *(undefined4 *)(unaff_rsi + 0x1660);
    *(float *)(unaff_rbp + 0x70) = temp_float6 - temp_float5;
    *(float *)(unaff_rbp + 0x74) = temp_float7 - temp_float1;
    update_physics_system(unaff_rbp + 0x70, temp_undef4_3);
    temp_char1 = update_object_bounds_ext(&stack0x00000038, unaff_rdi & 0xffffffff, 0);
    
    if (temp_char1 == '\0') {
        if (stack_char2 != '\0') {
            trigger_collision_event();
        }
        *(undefined4 *)(stack_long1 + 0x100) = temp_undef4;
        *(undefined4 *)(stack_long1 + 0x104) = temp_undef4_2;
        return unaff_r14b;
    }
    
    temp_undef4_3 = 0x44;
    if (*(char *)(unaff_rsi + 0x1dd0) != '\0') {
        temp_char1 = check_system_state(unaff_rsi + 0x1de0);
        temp_undef4_3 = 0x44;
        if (temp_char1 == '\0') {
            temp_undef4_3 = 0x1044;
        }
    }
    
    temp_char1 = process_object_interaction(&stack0x00000038, unaff_rdi & 0xffffffff, unaff_rbp + 0x70, &stack0x00000030, temp_undef4_3);
    temp_uint2 = *(uint *)(unaff_rbp + 0x88);
    temp_byte1 = *(byte *)(unaff_rbp + 0x70) | *(int *)(unaff_rsi + 0x1b18) == temp_int4;
    *(byte *)(unaff_rbp + 0x70) = temp_byte1;
    
    if ((temp_char1 != '\0') || (((temp_uint2 & 2) != 0 && (stack_char3 == '\0')))) {
        unaff_rbx[6] = temp_int4;
    }
    
    if (stack_char1 == '\0') {
        cleanup_temporary_data();
    }
    
    temp_float6 = stack_float2;
    temp_float1 = stack_float1;
    temp_long2 = *(longlong *)(unaff_rbp + 0x90);
    
    if ((((temp_long2 == 0) || (temp_long4 = *(longlong *)(temp_long2 + 0x408), temp_long4 == 0)) || (*(longlong *)(temp_long4 + 8) != 0)) || ((((*(byte *)(temp_long4 + 0xa0) & 0x10) != 0 || (*(int *)(temp_long4 + 0x20) != 1)) || (*(char *)(unaff_rsi + 0xc2) == '\0')))) {
        temp_bool1 = false;
    } else {
        temp_bool1 = true;
    }
    
    if (stack_char1 == '\0') {
        goto FINAL_PROCESSING;
    }
    
    if (((!temp_bool1) || (*(char *)(unaff_r13 + 0x120) == '\0')) || (*(float *)(unaff_r13 + 0x474) <= unaff_xmm10_da && unaff_xmm10_da != *(float *)(unaff_r13 + 0x474))) {
        if (((stack_int1 < unaff_r12d) || (*(char *)(unaff_r13 + 0x120) == '\0')) || (temp_float2 = *(float *)(unaff_r13 + 0x38) * *(float *)(unaff_r13 + 0x38), *(float *)(unaff_r13 + 0x474) <= temp_float2 && temp_float2 != *(float *)(unaff_r13 + 0x474))) {
            goto FINAL_PROCESSING;
        }
        temp_float2 = 0.0;
        if (*(char *)(unaff_rsi + 0x1dd0) != '\0') {
            goto ADVANCED_PROCESSING;
        }
        temp_uint1 = unaff_rbx[0x13] & 1;
        if ((temp_uint1 == 0) && ((temp_uint2 >> 0x14 & 1) == 0)) {
            goto FINAL_PROCESSING;
        }
        if ((unaff_xmm10_da <= *(float *)(unaff_rsi + 0x3ac)) || (stack_float1 <= *(float *)(unaff_rsi + 0x118))) {
            if (((unaff_xmm10_da < *(float *)(unaff_rsi + 0x3ac)) && (stack_float3 < *(float *)(unaff_rsi + 0x118))) && (temp_float2 = *(float *)(unaff_rsi + 0x118) - stack_float3, temp_uint1 != 0)) {
                temp_int2 = *unaff_r15;
                unaff_rbx[0x15] = 1;
                goto POSITION_UPDATE;
            }
        } else {
            temp_float2 = stack_float1 - *(float *)(unaff_rsi + 0x118);
            if (temp_uint1 != 0) {
                temp_int2 = *unaff_r15;
                unaff_rbx[0x15] = -1;
            POSITION_UPDATE:
                unaff_rbx[0x14] = temp_int2;
            }
        }
    ADVANCED_PROCESSING:
        if ((temp_uint2 >> 0x14 & 1) == 0) {
            goto FINAL_PROCESSING;
        }
        if ((*(char *)(unaff_rsi + 0x1dd0) == '\0') || (*(int *)(unaff_rsi + 0x1dec) != temp_int4)) {
            temp_float5 = *(float *)(unaff_rsi + 0x19f8);
            temp_float7 = (ABS(*(float *)(unaff_rsi + 0x44c)) - (temp_float5 + temp_float5)) * 0.2;
            if (unaff_xmm10_da <= temp_float7) {
                temp_float4 = temp_float5 * 4.0;
                if (temp_float7 <= temp_float5 * 4.0) {
                    temp_float4 = temp_float7;
                }
            } else {
                temp_float4 = 0.0;
            }
            temp_float7 = stack_float2 - *(float *)(unaff_rsi + 0x11c);
            temp_float3 = *(float *)(unaff_rsi + 0x11c) - stack_float4;
            if (temp_float7 <= temp_float3) {
                temp_float7 = temp_float3;
            }
            if (temp_float7 < temp_float5 * 1.5 + temp_float4) {
                if (temp_float2 <= temp_float5 * 2.2) {
                    goto FINAL_PROCESSING;
                }
                if (((-1 < unaff_rbx[0x15]) || (temp_int2 = (int)((longlong)unaff_r15 - *(longlong *)(unaff_rbx + 2) >> 0x3f), (int)(((longlong)unaff_r15 - *(longlong *)(unaff_rbx + 2)) / 0x28) + temp_int2 != temp_int2)) && ((unaff_rbx[0x15] < 1 || ((int)(((longlong)unaff_r15 - *(longlong *)(unaff_rbx + 2)) / 0x28) != *unaff_rbx + -1)))) {
                    goto CONTEXT_UPDATE;
                }
            }
        }
        
        temp_long4 = *(longlong *)(unaff_rsi + 0x2df8);
        *(undefined8 *)(unaff_rbp + -0x78) = 0;
        stack_undef4 = 0;
        *(undefined8 *)(unaff_rbp + -0x58) = 0;
        temp_int2 = *(int *)(temp_long4 + 0x14);
        *(undefined8 *)(unaff_rbp + -0x80) = 0;
        *(undefined1 *)(unaff_rbp + -0x68) = 0;
        temp_int3 = *(int *)(temp_long4 + 0x10);
        *(undefined4 *)(unaff_rbp + -0x70) = 0xffffffff;
        *(undefined4 *)(unaff_rbp + -0x6c) = 0x3f000000;
        stack_undef2 = 2;
        *(longlong *)(unaff_rbp + -0x60) = temp_long2;
        
        if (temp_int3 == temp_int2) {
            if (temp_int2 == 0) {
                temp_int2 = 8;
            } else {
                temp_int2 = temp_int2 / 2 + temp_int2;
            }
            temp_int1 = temp_int3 + 1;
            if (temp_int3 + 1 < temp_int2) {
                temp_int1 = temp_int2;
            }
            resize_object_array(temp_long4 + 0x10, temp_int1);
            temp_int3 = *(int *)(temp_long4 + 0x10);
            temp_long2 = *(longlong *)(unaff_rbp + 0x90);
            unaff_r13 = get_global_context_base();
        }
        
        temp_undef8 = *(undefined8 *)(unaff_rbp + -0x80);
        temp_undef8_2 = *(undefined8 *)(unaff_rbp + -0x78);
        temp_long1 = *(longlong *)(temp_long4 + 0x18);
        temp_long3 = (longlong)temp_int3 * 0x40;
        *(undefined8 *)(temp_long3 + temp_long1) = CONCAT44(stack_undef3, stack_undef2);
        ((undefined8 *)(temp_long3 + temp_long1))[1] = stack_undef4;
        temp_undef8_3 = *(undefined8 *)(unaff_rbp + -0x70);
        temp_undef8_4 = *(undefined8 *)(unaff_rbp + -0x68);
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x10 + temp_long1);
        *temp_undef_ptr1 = temp_undef8;
        temp_undef_ptr1[1] = temp_undef8_2;
        temp_undef8 = *(undefined8 *)(unaff_rbp + -0x60);
        temp_undef8_2 = *(undefined8 *)(unaff_rbp + -0x58);
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x20 + temp_long1);
        *temp_undef_ptr1 = temp_undef8_3;
        temp_undef_ptr1[1] = temp_undef8_4;
        temp_undef_ptr1 = (undefined8 *)(temp_long3 + 0x30 + temp_long1);
        *temp_undef_ptr1 = temp_undef8;
        temp_undef_ptr1[1] = temp_undef8_2;
        *(int *)(temp_long4 + 0x10) = *(int *)(temp_long4 + 0x10) + 1;
        *(longlong *)(unaff_rsi + 0x1b78) = temp_long2;
        *(undefined4 *)(unaff_rsi + 0x1b2c) = *(undefined4 *)(temp_long2 + 0x84);
        temp_float2 = *(float *)(temp_long2 + 0x44);
        *(float *)(unaff_rsi + 0x1b48) = *(float *)(unaff_rsi + 0x1b48) - (*(float *)(temp_long2 + 0x40) - temp_float1);
        *(float *)(unaff_rsi + 0x1b4c) = *(float *)(unaff_rsi + 0x1b4c) - (temp_float2 - temp_float6);
    } else {
        process_object_context(temp_long2);
    }
    
CONTEXT_UPDATE:
    temp_byte1 = *(byte *)(unaff_rbp + 0x70);
    
FINAL_PROCESSING:
    temp_undef8 = *(undefined8 *)(stack_long1 + 0x2e8);
    if ((stack_char1 == '\0') && (temp_byte1 == 0)) {
        if (stack_char3 == '\0') {
            temp_long2 = 0x24;
            if (stack_byte1 != 0) {
                temp_long2 = 0x21;
            }
        } else {
            temp_long2 = ((ulonglong)stack_byte1 ^ 1) * 2 + 0x23;
        }
    } else {
        temp_long2 = 0x22;
    }
    
    temp_undef_ptr2 = (undefined4 *)(unaff_r13 + 0x1628 + (temp_long2 + 10) * 0x10);
    stack_float5 = (float)*temp_undef_ptr2;
    stack_float6 = (float)temp_undef_ptr2[1];
    stack_undef1 = temp_undef_ptr2[2];
    stack_float7 = (float)temp_undef_ptr2[3] * *(float *)(unaff_r13 + 0x1628);
    temp_undef4_3 = get_render_parameters(&stack0x00000060);
    temp_uint2 = *(uint *)(unaff_rbp + 0x88);
    update_render_state(temp_undef8, &stack0x00000038, temp_uint2, temp_undef4_3);
    
    if (temp_int4 == *(int *)(get_global_context_base() + 0x1ca0)) {
        update_object_visual(&stack0x00000038, 1, get_global_context_base());
    }
    
    temp_long4 = get_global_context_base();
    temp_char1 = get_system_status(8);
    temp_long2 = stack_long1;
    
    if ((temp_char1 != '\0') && ((*(float *)(temp_long4 + 0x428) == unaff_xmm10_da || (*(char *)(temp_long4 + 0x41b) != '\0')))) {
        unaff_rbx[6] = temp_int4;
    }
    
    temp_uint1 = temp_uint2 | 4;
    if ((unaff_rbx[0x13] & 4U) == 0) {
        temp_uint1 = temp_uint2;
    }
    
    if (*(longlong *)(unaff_rbp + 0x80) != 0) {
        get_object_instance_data(stack_long1, unaff_rdi + 1);
    }
    
    temp_char1 = finalize_object_update(temp_undef8, &stack0x00000038, temp_uint1, *(undefined8 *)(unaff_rbp + 0x78));
    
    if (temp_char1 != '\0') {
        **(undefined1 **)(unaff_rbp + 0x80) = 0;
        if (unaff_rbx[7] == *unaff_r15) {
            if ((unaff_r15[1] & 1U) == 0) {
                unaff_r15[4] = -1;
                unaff_rbx[5] = 0;
                unaff_rbx[6] = 0;
            }
        } else if ((unaff_r15[1] & 1U) != 0) {
            unaff_rbx[6] = *unaff_r15;
        }
    }
    
    if (stack_char2 != '\0') {
        trigger_collision_event();
    }
    
    *(undefined4 *)(temp_long2 + 0x100) = temp_undef4;
    *(undefined4 *)(temp_long2 + 0x104) = temp_undef4_2;
    
    if ((((*(int *)(unaff_rsi + 0x1b18) == temp_int4) && (stack_char1 == '\0')) && (0.5 < *(float *)(unaff_rsi + 0x1b28))) && ((*(byte *)(unaff_rbx + 0x13) & 0x20) == 0)) {
        temp_char_ptr = *(char **)(unaff_rbp + 0x78);
        for (temp_char_ptr2 = temp_char_ptr; ((temp_char_ptr2 != (char *)0xffffffffffffffff && (*temp_char_ptr2 != '\0')) && ((*temp_char_ptr2 != '#' || (temp_char_ptr2[1] != '#')))); temp_char_ptr2 = temp_char_ptr2 + 1) {
        }
        log_object_interaction(&GLOBAL_DEBUG_INFO, (int)temp_char_ptr2 - (int)temp_char_ptr, temp_char_ptr);
    }
    
    return stack_char3;
}

/**
 * 对象碰撞事件处理函数
 * 
 * 处理对象之间的碰撞事件，触发相应的响应逻辑
 * 
 * @return 处理状态
 */
undefined1 handle_object_collision() {
    char in_al;
    undefined1 unaff_r14b;
    undefined4 unaff_xmm11_da;
    undefined4 unaff_xmm12_da;
    undefined8 in_stack_00000030;
    longlong in_stack_00000050;
    
    if (in_stack_00000030._1_1_ != in_al) {
        trigger_collision_event();
    }
    
    *(undefined4 *)(in_stack_00000050 + 0x100) = unaff_xmm11_da;
    *(undefined4 *)(in_stack_00000050 + 0x104) = unaff_xmm12_da;
    return unaff_r14b;
}