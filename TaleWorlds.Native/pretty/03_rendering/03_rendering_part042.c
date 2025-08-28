#include "TaleWorlds.Native.Split.h"

// 03_rendering_part042.c - 渲染系统高级指令处理和数据解析模块
// 包含9个核心函数，涵盖渲染指令处理、数据解析、浮点运算、内存管理和高级渲染操作等功能

// 渲染指令类型常量定义
#define RENDER_CMD_MOVE_TO              0x01    // 移动到指令
#define RENDER_CMD_LINE_TO              0x03    // 画线到指令
#define RENDER_CMD_CURVE_TO             0x12    // 曲线到指令
#define RENDER_CMD_QUAD_CURVE           0x17    // 二次曲线指令
#define RENDER_CMD_FLOAT_VALUE          0xff    // 浮点数值指令
#define RENDER_CMD_SPECIAL_1C           0x1c    // 特殊指令1C
#define RENDER_CMD_STRING_QUOTE         0x22    // 字符串引号指令
#define RENDER_CMD_STRING_HASH          0x23    // 字符串哈希指令
#define RENDER_CMD_STRING_DOLLAR        0x24    // 字符串美元指令
#define RENDER_CMD_STRING_PERCENT       0x25    // 字符串百分比指令
#define RENDER_CMD_PUSH_STATE           0x0d    // 推送状态指令
#define RENDER_CMD_POP_STATE            0x0e    // 弹出状态指令
#define RENDER_CMD_CALL_FUNCTION        0x13    // 调用函数指令
#define RENDER_CMD_RETURN_FUNCTION      0x14    // 返回函数指令
#define RENDER_CMD_JUMP_RELATIVE        0x15    // 相对跳转指令
#define RENDER_CMD_JUMP_ABSOLUTE        0x16    // 绝对跳转指令
#define RENDER_CMD_DRAW_CURVE           0x18    // 绘制曲线指令
#define RENDER_CMD_DRAW_QUAD_CURVE      0x19    // 绘制二次曲线指令
#define RENDER_CMD_DRAW_LINE            0x1a    // 绘制线条指令
#define RENDER_CMD_DRAW_LINE_STRIP       0x1b    // 绘制线条带指令
#define RENDER_CMD_CALL_SUBROUTINE      0x1d    // 调用子程序指令
#define RENDER_CMD_DRAW_SEQUENCE        0x1e    // 绘制序列指令
#define RENDER_CMD_DRAW_QUAD            0x1f    // 绘制四边形指令

// 渲染数据常量
#define RENDER_DATA_STACK_SIZE          38      // 数据栈大小
#define RENDER_FLOAT_SCALE              1.5258789e-05  // 浮点数缩放因子
#define RENDER_UNICODE_THRESHOLD        0x846c  // Unicode阈值
#define RENDER_UNICODE_OFFSET_1         0x6b    // Unicode偏移量1
#define RENDER_UNICODE_OFFSET_2         0x46b   // Unicode偏移量2
#define RENDER_UNICODE_BASE             0x8000  // Unicode基础值

// 渲染状态结构体偏移量
#define RENDER_STATE_PARAM_OFFSET      0x50    // 状态参数偏移量
#define RENDER_STATE_DATA_OFFSET       0x60    // 状态数据偏移量
#define RENDER_STATE_STACK_OFFSET      0x70    // 状态栈偏移量
#define RENDER_STATE_FLAG_OFFSET       0x9c    // 状态标志偏移量

// 函数: process_render_commands
// 功能: 处理渲染命令序列
// 参数:
//   - context_ptr: 渲染上下文指针
//   - command_id: 命令ID
//   - render_target: 渲染目标
void process_render_commands(longlong context_ptr, undefined4 command_id, undefined8 render_target)
{
    undefined1 temp_buffer_1[16];
    byte command_byte;
    undefined8 data_ptr;
    undefined1 byte_1, byte_2, byte_3, byte_4;
    char char_val;
    undefined1 byte_5, byte_6, byte_7, byte_8;
    short short_val;
    uint data_length;
    int index;
    undefined1 (*buffer_ptr)[16];
    undefined8 *result_ptr;
    int *int_ptr;
    longlong offset;
    uint unicode_val;
    ulonglong long_val;
    float *float_ptr;
    uint stack_index;
    int temp_int;
    uint temp_uint;
    longlong temp_long;
    ulonglong temp_ulong;
    uint temp_uint_2;
    int temp_int_2;
    float float_val_1, float_val_2, float_val_3, float_val_4, float_val_5, float_val_6, float_val_7, float_val_8, float_val_9;
    undefined1 stack_buffer_1[32];
    float stack_float_1, stack_float_2, stack_float_3;
    int stack_int_1;
    undefined1 stack_buffer_2[16];
    int stack_int_2;
    uint stack_uint_1;
    int stack_int_3, stack_int_4;
    undefined4 stack_param_1;
    longlong stack_long;
    undefined1 stack_buffer_3[16];
    undefined1 stack_buffer_4[16];
    undefined1 stack_buffer_5[16];
    undefined1 stack_buffer_6[12];
    float float_array[4];
    float stack_float_4, stack_float_5, stack_float_6, stack_float_7, stack_float_8, stack_float_9, stack_float_10;
    undefined8 stack_data_1;
    uint data_stack[RENDER_DATA_STACK_SIZE];
    ulonglong security_key;
    
    // 初始化安全密钥
    security_key = _DAT_180bf00a8 ^ (ulonglong)stack_buffer_1;
    stack_int_4 = 0;
    
    // 初始化渲染状态
    stack_buffer_4._0_8_ = *(undefined8 *)(context_ptr + 0x70);
    stack_buffer_4._8_8_ = *(undefined8 *)(context_ptr + 0x78);
    stack_buffer_3 = *(undefined1 (*) [16])(context_ptr + RENDER_STATE_PARAM_OFFSET);
    stack_uint_1 = 1;
    stack_int_2 = 0;
    stack_int_3 = 0;
    stack_param_1 = command_id;
    stack_long = context_ptr;
    
    // 获取渲染数据
    buffer_ptr = (undefined1 (*) [16])FUN_18028b4c0(stack_buffer_2, stack_buffer_3, command_id);
    temp_ulong = 0;
    stack_buffer_2._8_4_ = SUB124(*(undefined1 (*) [12])*buffer_ptr, 8);
    
    // 初始化浮点数栈
    float_val_1 = stack_float_9;
    float_val_3 = float_array[1];
    float_val_4 = float_array[3];
    float_val_5 = stack_float_4;
    float_val_6 = float_array[2];
    float_val_7 = stack_float_6;
    float_val_8 = stack_float_7;
    float_val_9 = stack_float_8;
    temp_int_2 = 0;
    data_length = stack_buffer_2._8_4_;
    stack_index = 0;
    stack_buffer_2 = *buffer_ptr;
    
process_command_loop:
    temp_uint = stack_index;
    offset = stack_long;
    data_length = stack_buffer_2._12_4_;
    
    // 检查数据长度
    if ((int)data_length <= (int)data_length) {
        // 数据处理完成，清理资源
        FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
    }
    
    data_ptr = stack_buffer_2._0_8_;
    stack_index = (uint)temp_ulong;
    temp_ulong = temp_ulong & 0xffffffff;
    temp_uint_2 = data_length + 1;
    stack_int_1 = 1;
    temp_long = (longlong)(int)temp_uint_2;
    stack_buffer_2._8_4_ = temp_uint_2;
    stack_buffer_2._12_4_ = data_length;
    command_byte = *(byte *)((longlong)(int)data_length + stack_buffer_2._0_8_);
    
    switch(command_byte) {
        case RENDER_CMD_MOVE_TO:
        case RENDER_CMD_LINE_TO:
        case RENDER_CMD_CURVE_TO:
        case RENDER_CMD_QUAD_CURVE:
            // 处理移动和绘制命令
            stack_int_2 = stack_int_2 + (int)temp_uint / 2;
            data_length = temp_uint_2;
            goto process_command_loop;
            
        default:
            if (command_byte == RENDER_CMD_FLOAT_VALUE) {
                // 处理浮点数值
                if ((int)temp_uint_2 < (int)data_length) {
                    temp_uint_2 = data_length + 2;
                    byte_1 = *(undefined1 *)(temp_long + stack_buffer_2._0_8_);
                    stack_buffer_2._8_4_ = temp_uint_2;
                } else {
                    byte_1 = 0;
                }
                
                if ((int)temp_uint_2 < (int)data_length) {
                    offset = (longlong)(int)temp_uint_2;
                    temp_uint_2 = temp_uint_2 + 1;
                    stack_buffer_2._8_4_ = temp_uint_2;
                    byte_5 = *(undefined1 *)(offset + data_ptr);
                } else {
                    byte_5 = 0;
                }
                
                if ((int)temp_uint_2 < (int)data_length) {
                    offset = (longlong)(int)temp_uint_2;
                    temp_uint_2 = temp_uint_2 + 1;
                    stack_buffer_2._8_4_ = temp_uint_2;
                    byte_6 = *(undefined1 *)(offset + data_ptr);
                } else {
                    byte_6 = 0;
                }
                
                if ((int)temp_uint_2 < (int)data_length) {
                    offset = (longlong)(int)temp_uint_2;
                    temp_uint_2 = temp_uint_2 + 1;
                    stack_buffer_2._8_4_ = temp_uint_2;
                    byte_7 = *(undefined1 *)(offset + data_ptr);
                } else {
                    byte_7 = 0;
                }
                
                // 转换为浮点数
                float_val_1 = (float)CONCAT31(CONCAT21(CONCAT11(byte_1, byte_5), byte_6), byte_7) * RENDER_FLOAT_SCALE;
                data_length = temp_uint_2;
            } else {
                if ((command_byte != RENDER_CMD_SPECIAL_1C) && (0xde < command_byte - 0x20)) {
                    FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
                }
                
                if ((int)data_length < (int)data_length) {
reset_data_length:
                    stack_buffer_2._8_4_ = data_length;
                } else {
                    stack_buffer_2._8_4_ = data_length;
                    if ((int)data_length < 0) goto reset_data_length;
                }
                
                short_val = func_0x00018028b140(stack_buffer_2);
                temp_ulong = 0;
                float_val_1 = (float)(int)short_val;
                data_length = stack_buffer_2._8_4_;
            }
            
            if (0x2f < (int)temp_uint) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            float_array[(longlong)(int)temp_uint + 1] = float_val_1;
            float_val_1 = stack_float_9;
            float_val_3 = float_array[1];
            float_val_4 = float_array[3];
            float_val_5 = stack_float_4;
            float_val_6 = float_array[2];
            float_val_7 = stack_float_6;
            float_val_8 = stack_float_7;
            float_val_9 = stack_float_8;
            stack_index = (uint)temp_ulong;
            
            if ((uint)temp_ulong == 0) {
                stack_index = temp_uint + 1;
            }
            goto process_command_loop;
            
        case 4:
            // 处理绘制命令
            stack_uint_1 = stack_index;
            if ((int)temp_uint < 1) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            FUN_18028d290(render_target, 0x180000000, float_array[(int)temp_uint]);
            temp_ulong = 0;
            data_length = temp_uint_2;
            stack_index = 0;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case 5:
            // 处理重复绘制命令
            if ((int)temp_uint < 2) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            if (1 < (int)temp_uint) {
                temp_int = 1;
                do {
                    func_0x00018028d360(render_target);
                    temp_int = temp_int + 2;
                } while (temp_int < (int)temp_uint);
                
                temp_ulong = 0;
                data_length = temp_uint_2;
                stack_index = 0;
                
                if (stack_int_1 == 0) {
                    stack_index = temp_uint;
                }
                goto process_command_loop;
            }
            break;
            
        case 6:
            // 处理连续绘制命令
            if ((int)temp_uint < 1) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            while ((int)temp_ulong < (int)temp_uint) {
                func_0x00018028d360(render_target);
                stack_index = (int)temp_ulong + 1;
                
                if ((int)temp_uint <= (int)stack_index) break;
                func_0x00018028d360(render_target);
                temp_ulong = (ulonglong)(stack_index + 1);
            }
            break;
            
        case 7:
            // 处理反向绘制命令
            if (0 < (int)temp_uint) {
                stack_index = (int)temp_ulong + 1;
                
                if ((int)temp_uint <= (int)stack_index) break;
                func_0x00018028d360(render_target);
                temp_ulong = (ulonglong)(stack_index + 1);
            }
            goto process_command_loop;
            
        case 8:
            // 处理复杂曲线绘制
            if ((int)temp_uint < 6) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            if (5 < (int)temp_uint) {
                temp_int = 5;
                float_ptr = float_array + 5;
                do {
                    stack_float_3 = float_ptr[1];
                    stack_float_2 = *float_ptr;
                    stack_float_1 = float_ptr[-1];
                    FUN_18028d400(render_target);
                    temp_int = temp_int + 6;
                    float_ptr = float_ptr + 6;
                } while (temp_int < (int)temp_uint);
                
                temp_ulong = 0;
                data_length = temp_uint_2;
                stack_index = 0;
                
                if (stack_int_1 == 0) {
                    stack_index = temp_uint;
                }
                goto process_command_loop;
            }
            break;
            
        case 10:
            // 处理状态保存命令
            if (stack_int_4 == 0) {
                if (*(int *)(stack_long + RENDER_STATE_FLAG_OFFSET) != 0) {
                    result_ptr = (undefined8 *)FUN_18028d4a0(stack_buffer_5, stack_long, stack_param_1);
                    temp_ulong = 0;
                    stack_buffer_4._0_8_ = *result_ptr;
                    stack_buffer_4._8_8_ = result_ptr[1];
                }
                stack_int_4 = 1;
            }
            goto process_subroutine_call;
            
        case 0xb:
            // 处理状态恢复命令
            if (temp_int_2 < 1) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            stack_int_3 = temp_int_2 + -1;
            offset = (longlong)stack_int_3;
            
            if (stack_index == 0) {
                stack_index = temp_uint;
            }
            
            stack_buffer_2._4_4_ = data_stack[offset * 4 + -1];
            stack_buffer_2._0_4_ = *(undefined4 *)(&stack_data_1 + offset * 2);
            stack_buffer_2._8_4_ = data_stack[offset * 4];
            stack_buffer_2._12_4_ = data_stack[offset * 4 + 1];
            temp_int_2 = stack_int_3;
            data_length = data_stack[offset * 4];
            goto process_command_loop;
            
        case 0xc:
            // 处理字符串处理命令
            if ((int)temp_uint_2 < (int)data_length) {
                temp_uint_2 = data_length + 2;
                char_val = *(char *)(temp_long + stack_buffer_2._0_8_);
                stack_buffer_2._8_4_ = temp_uint_2;
            } else {
                char_val = '\0';
            }
            
            data_length = temp_uint_2;
            
            if (char_val == '\"') {
                // 处理引号字符串
                if ((int)temp_uint < 7) {
                    FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
                }
                
                stack_float_3 = 0.0;
                FUN_18028d400(render_target, 0x180000000, 0, float_val_6);
                stack_float_3 = 0.0;
                stack_float_1 = -float_val_4;
                stack_float_2 = float_val_7;
                FUN_18028d400(render_target);
                temp_ulong = 0;
                stack_index = 0;
                
                if (stack_int_1 == 0) {
                    stack_index = temp_uint;
                }
                goto process_command_loop;
            }
            
            if (char_val == '#') {
                // 处理哈希字符串
                if ((int)temp_uint < 0xd) {
                    FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
                }
                
                FUN_18028d400(render_target, 0x180000000, float_val_6, float_val_4);
                stack_float_3 = stack_float_10;
                stack_float_2 = stack_float_9;
            } else {
                if (char_val == '$') {
                    // 处理美元字符串
                    if ((int)temp_uint < 9) {
                        FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
                    }
                    
                    stack_float_3 = 0.0;
                    FUN_18028d400(render_target, 0x180000000, float_val_6, float_val_4);
                    stack_float_3 = -(float_val_5 + float_val_6 + stack_float_8);
                    stack_float_1 = stack_float_8;
                    stack_float_2 = float_val_1;
                    FUN_18028d400(render_target);
                    temp_ulong = 0;
                    stack_index = 0;
                    
                    if (stack_int_1 == 0) {
                        stack_index = temp_uint;
                    }
                    goto process_command_loop;
                }
                
                if ((char_val != '%') || ((int)temp_uint < 0xb)) {
                    FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
                }
                
                // 处理百分比字符串
                float_val_1 = float_val_4 + float_val_3 + float_val_9 + float_val_7 + stack_float_9;
                float_val_2 = float_val_5 + float_val_6 + float_val_8 + stack_float_8 + stack_float_9;
                
                if (ABS(float_val_1) <= ABS(float_val_2)) {
                    float_val_1 = -float_val_1;
                    float_val_2 = stack_float_9;
                } else {
                    float_val_2 = -float_val_2;
                    float_val_1 = stack_float_9;
                }
                
                FUN_18028d400(render_target, 0x180000000, float_val_6, float_val_4);
                stack_float_2 = float_val_1;
                stack_float_3 = float_val_2;
            }
            
            stack_float_1 = stack_float_9;
            float_val_1 = stack_float_9;
            FUN_18028d400(render_target);
            temp_ulong = 0;
            stack_index = 0;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case 0xe:
            // 处理弹出状态命令
            func_0x00018028d1e0(render_target);
            goto process_command_loop;
            
        case RENDER_CMD_CALL_FUNCTION:
        case RENDER_CMD_RETURN_FUNCTION:
            // 处理函数调用和返回命令
            if (stack_uint_1 != 0) {
                stack_int_2 = stack_int_2 + (int)temp_uint / 2;
            }
            
            stack_buffer_2._8_4_ = ((int)((stack_int_2 + 7 >> 0x1f & 7U) + stack_int_2 + 7) >> 3) + temp_uint_2;
            
            if (((int)data_length < (int)stack_buffer_2._8_4_) || ((int)stack_buffer_2._8_4_ < 0)) {
                stack_buffer_2._8_4_ = data_length;
                data_length = data_length;
                stack_uint_1 = stack_index;
            } else {
                data_length = stack_buffer_2._8_4_;
                stack_uint_1 = stack_index;
            }
            goto process_command_loop;
            
        case RENDER_CMD_JUMP_RELATIVE:
        case RENDER_CMD_JUMP_ABSOLUTE:
            // 处理跳转命令
            stack_uint_1 = stack_index;
            if ((int)temp_uint < 2) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            FUN_18028d290(render_target, 0x180000000, float_array[(int)temp_uint]);
            temp_ulong = 0;
            data_length = temp_uint_2;
            stack_index = 0;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case RENDER_CMD_DRAW_CURVE:
            // 处理曲线绘制命令
            stack_uint_1 = stack_index;
            if ((int)temp_uint < 1) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            FUN_18028d290(render_target, 0x180000000, 0);
            temp_ulong = 0;
            data_length = temp_uint_2;
            stack_index = 0;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case RENDER_CMD_DRAW_QUAD_CURVE:
            // 处理二次曲线绘制命令
            if ((int)temp_uint < 8) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            if (5 < (int)(temp_uint - 2)) {
                temp_int_2 = 5;
                float_ptr = float_array + 5;
                do {
                    stack_float_3 = float_ptr[1];
                    stack_float_2 = *float_ptr;
                    stack_float_1 = float_ptr[-1];
                    FUN_18028d400(render_target);
                    stack_index = (int)temp_ulong + 6;
                    temp_ulong = (ulonglong)stack_index;
                    float_ptr = float_ptr + 6;
                    temp_int_2 = temp_int_2 + 6;
                } while (temp_int_2 < (int)(temp_uint - 2));
                
                temp_ulong = 0;
            }
            
            if ((int)temp_uint <= (int)(stack_index + 1)) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            func_0x00018028d360(render_target);
            temp_int_2 = stack_int_3;
            data_length = temp_uint_2;
            stack_index = (uint)temp_ulong;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case RENDER_CMD_DRAW_LINE:
        case RENDER_CMD_DRAW_LINE_STRIP:
            // 处理线条绘制命令
            if ((int)temp_uint < 4) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            temp_int = (temp_uint & 1) + 3;
            if ((int)temp_uint <= temp_int) break;
            
            float_ptr = float_array + (ulonglong)(temp_uint & 1) + 3;
            do {
                stack_float_3 = float_ptr[1];
                stack_float_1 = *float_ptr;
                if (command_byte == RENDER_CMD_DRAW_LINE_STRIP) {
                    stack_float_2 = stack_float_3;
                    stack_float_3 = 0.0;
                } else {
                    stack_float_2 = 0.0;
                }
                FUN_18028d400(render_target);
                temp_int = temp_int + 4;
                float_ptr = float_ptr + 4;
            } while (temp_int < (int)temp_uint);
            
            temp_ulong = 0;
            data_length = temp_uint_2;
            stack_index = 0;
            
            if (stack_int_1 == 0) {
                stack_index = temp_uint;
            }
            goto process_command_loop;
            
        case RENDER_CMD_CALL_SUBROUTINE:
process_subroutine_call:
            // 处理子程序调用
            if (((int)temp_uint < 1) || (9 < temp_int_2)) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            temp_long = (longlong)temp_int_2;
            temp_int_2 = temp_int_2 + 1;
            (&stack_data_1)[temp_long * 2] = stack_buffer_2._0_8_;
            *(undefined8 *)(data_stack + temp_long * 4) = stack_buffer_2._8_8_;
            buffer_ptr = &stack_buffer_4;
            
            if (command_byte != 10) {
                buffer_ptr = (undefined1 (*) [16])(offset + RENDER_STATE_DATA_OFFSET);
            }
            
            temp_buffer_1 = *buffer_ptr;
            stack_buffer_2._0_8_ = temp_buffer_1._0_8_;
            stack_buffer_2._12_4_ = temp_buffer_1._12_4_;
            temp_int = (int)temp_ulong;
            stack_buffer_2._8_4_ = stack_buffer_2._12_4_;
            
            if (-1 < temp_buffer_1._8_8_) {
                stack_buffer_2._8_4_ = temp_int;
            }
            
            if ((int)stack_buffer_2._8_4_ < (int)stack_buffer_2._12_4_) {
                offset = (longlong)(int)stack_buffer_2._8_4_;
                stack_buffer_2._8_4_ = stack_buffer_2._8_4_ + 1;
                byte_1 = *(undefined1 *)(offset + stack_buffer_2._0_8_);
            } else {
                byte_1 = 0;
            }
            
            if ((int)stack_buffer_2._8_4_ < (int)stack_buffer_2._12_4_) {
                offset = (longlong)(int)stack_buffer_2._8_4_;
                stack_buffer_2._8_4_ = stack_buffer_2._8_4_ + 1;
                byte_5 = *(undefined1 *)(offset + stack_buffer_2._0_8_);
            } else {
                byte_5 = 0;
            }
            
            data_length = (uint)CONCAT11(byte_1, byte_5);
            
            if (data_length < RENDER_UNICODE_THRESHOLD) {
                temp_int = RENDER_UNICODE_OFFSET_1;
                if (RENDER_UNICODE_OFFSET_2 < data_length) {
                    temp_int = RENDER_UNICODE_OFFSET_2;
                }
            } else {
                temp_int = RENDER_UNICODE_BASE;
            }
            
            stack_int_3 = temp_int_2;
            
            if (((int)float_array[(longlong)(int)(temp_uint - 1) + 1] + temp_int < 0) ||
                ((int)data_length <= (int)float_array[(longlong)(int)(temp_uint - 1) + 1] + temp_int)) {
                stack_buffer_3._8_8_ = 0;
                stack_buffer_3._0_8_ = temp_ulong;
                temp_buffer_1 = stack_buffer_3;
                stack_buffer_3._4_4_ = (undefined4)(temp_ulong >> 0x20);
                stack_buffer_3._8_4_ = 0;
                stack_buffer_3._12_4_ = 0;
                stack_buffer_2._4_4_ = stack_buffer_3._4_4_;
                stack_buffer_2._8_4_ = stack_buffer_3._8_4_;
                stack_buffer_2._12_4_ = stack_buffer_3._12_4_;
                stack_buffer_3 = temp_buffer_1;
            } else {
                int_ptr = (int *)FUN_18028b4c0(stack_buffer_6, stack_buffer_2);
                temp_ulong = 0;
                temp_int = *int_ptr;
                stack_buffer_2._4_4_ = int_ptr[1];
                stack_buffer_2._8_4_ = int_ptr[2];
                stack_buffer_2._12_4_ = int_ptr[3];
            }
            
            stack_buffer_2._0_4_ = temp_int;
            if (stack_buffer_2._12_4_ == 0) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            stack_buffer_2._8_4_ = (undefined4)temp_ulong;
            data_length = stack_buffer_2._8_4_;
            stack_index = stack_buffer_2._8_4_;
            
            if (stack_buffer_2._8_4_ == 0) {
                stack_index = temp_uint - 1;
            }
            goto process_command_loop;
            
        case RENDER_CMD_DRAW_SEQUENCE:
            // 处理序列绘制命令
            if ((int)temp_uint < 4) {
                FUN_1808fc050(security_key ^ (ulonglong)stack_buffer_1);
            }
            
            while (temp_int = (int)temp_ulong, temp_int + 3 < (int)temp_uint) {
                stack_index = temp_int + 4;
                if (temp_uint - temp_int == 5) {
                    stack_float_3 = float_array[(longlong)(int)stack_index + 1];
                } else {
                    stack_float_3 = 0.0;
                }
                
                stack_float_1 = float_array[(longlong)temp_int + 3];
                stack_float_2 = float_array[(longlong)temp_int + 4];
                FUN_18028d400(render_target);
                
                if ((int)temp_uint <= (int)(stack_index + 3)) break;
                stack_float_3 = float_array[(longlong)(int)stack_index + 4];
                
                if (temp_uint - stack_index == 5) {
                    stack_float_2 = float_array[(longlong)(int)(stack_index + 4) + 1];
                } else {
                    stack_float_2 = 0.0;
                }
                
                stack_float_1 = float_array[(longlong)(int)stack_index + 3];
                FUN_18028d400(render_target);
                temp_ulong = (ulonglong)(stack_index + 4);
            }
            
            temp_ulong = 0;
            break;
            
        case RENDER_CMD_DRAW_QUAD:
            // 处理四边形绘制命令
            if (3 < (int)temp_uint) {
                stack_index = (int)temp_ulong + 4;
                
                if (temp_uint - temp_int == 5) {
                    stack_float_3 = float_array[(longlong)(int)stack_index + 1];
                } else {
                    stack_float_3 = 0.0;
                }
                
                stack_float_1 = float_array[(longlong)temp_int + 3];
                stack_float_2 = float_array[(longlong)temp_int + 4];
                FUN_18028d400(render_target);
            }
            goto process_command_loop;
    }
    
    data_length = temp_uint_2;
    stack_index = (uint)temp_ulong;
    
    if (stack_int_1 == 0) {
        stack_index = temp_uint;
    }
    goto process_command_loop;
}

// 函数: create_render_command_processor
// 功能: 创建渲染命令处理器
// 参数:
//   - param_1: 保留参数
//   - command_id: 命令ID
//   - result_ptr: 结果指针
// 返回值: 处理结果
undefined4 create_render_command_processor(undefined8 param_1, undefined4 command_id, undefined8 *result_ptr)
{
    int result;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined8 stack_data_3;
    undefined8 stack_data_4;
    undefined8 stack_data_5;
    undefined8 stack_data_6;
    int stack_int_1;
    undefined8 stack_data_7;
    undefined8 stack_data_8;
    undefined8 stack_data_9;
    undefined8 stack_data_10;
    undefined8 stack_data_11;
    undefined8 stack_data_12;
    undefined4 stack_param_1;
    
    stack_data_1 = 1;
    stack_data_6 = 0;
    stack_int_1 = 0;
    stack_data_7 = 0;
    stack_param_1 = 0;
    stack_data_2 = 0;
    stack_data_3 = 0;
    stack_data_4 = 0;
    stack_data_5 = 0;
    stack_data_8 = 0;
    stack_data_9 = 0;
    stack_data_10 = 0;
    stack_data_11 = 0;
    stack_data_12 = 0;
    
    result = FUN_18028d680(0, 0, &stack_data_1);
    
    if (result != 0) {
        if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
        }
        
        stack_data_11 = func_0x000180120ce0((longlong)stack_int_1 * 0xe, _DAT_180c8a9a8);
        *result_ptr = stack_data_11;
        result = FUN_18028d680(param_1, command_id, &stack_data_7);
        
        if (result != 0) {
            return stack_param_1;
        }
    }
    
    *result_ptr = 0;
    return 0;
}

// 函数: create_render_command_processor_ext
// 功能: 创建扩展渲染命令处理器
// 参数:
//   - context_ptr: 上下文指针
//   - command_id: 命令ID
//   - result_ptr: 结果指针
// 返回值: 处理结果
ulonglong create_render_command_processor_ext(longlong context_ptr, undefined4 command_id, undefined8 *result_ptr)
{
    int result;
    ulonglong return_val;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined8 stack_data_3;
    undefined8 stack_data_4;
    undefined8 stack_data_5;
    undefined8 stack_data_6;
    int stack_int_1;
    undefined8 stack_data_7;
    undefined8 stack_data_8;
    undefined8 stack_data_9;
    undefined8 stack_data_10;
    undefined8 stack_data_11;
    undefined8 stack_data_12;
    uint stack_uint_1;
    
    if (*(int *)(context_ptr + 0x4c) == 0) {
        return_val = FUN_18028c3e0();
    } else {
        return_val = 0;
        stack_data_1 = 1;
        stack_data_6 = 0;
        stack_int_1 = 0;
        stack_data_7 = 0;
        stack_uint_1 = 0;
        stack_data_2 = 0;
        stack_data_3 = 0;
        stack_data_4 = 0;
        stack_data_5 = 0;
        stack_data_8 = 0;
        stack_data_9 = 0;
        stack_data_10 = 0;
        stack_data_11 = 0;
        stack_data_12 = 0;
        
        result = FUN_18028d680(0, 0, &stack_data_1);
        
        if (result != 0) {
            if (_DAT_180c8a9b0 != 0) {
                *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
            }
            
            stack_data_11 = func_0x000180120ce0((longlong)stack_int_1 * 0xe, _DAT_180c8a9a8);
            *result_ptr = stack_data_11;
            result = FUN_18028d680(context_ptr, command_id, &stack_data_7);
            
            if (result != 0) {
                return (ulonglong)stack_uint_1;
            }
        }
        
        *result_ptr = 0;
    }
    
    return return_val;
}

// 函数: execute_render_command_batch
// 功能: 执行渲染命令批次
// 参数:
//   - param_1: 命令参数1
//   - param_2: 命令参数2
//   - param_3: 命令参数3
//   - param_4: 命令参数4
// 返回值: 执行结果
undefined4 execute_render_command_batch(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    int result;
    undefined4 unaff_EBP;
    undefined8 *unaff_RSI;
    undefined8 in_XMM0_Qa;
    undefined8 extraout_XMM0_Qa;
    undefined8 temp_data;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined8 stack_data_3;
    undefined8 stack_data_4;
    int stack_int_1;
    undefined8 stack_data_5;
    undefined8 stack_data_6;
    undefined8 stack_data_7;
    undefined8 stack_data_8;
    undefined8 in_stack_1;
    undefined4 stack_param_1;
    
    temp_data = 1;
    stack_data_4 = 0;
    stack_int_1 = 0;
    stack_data_5 = 0;
    stack_param_1 = 0;
    stack_data_2 = 0;
    stack_data_3 = 0;
    stack_data_7 = 0;
    stack_data_8 = 0;
    stack_data_1 = in_XMM0_Qa;
    stack_data_6 = in_XMM0_Qa;
    
    result = FUN_18028d680(param_1, 0, &stack0x00000020, param_4, 1);
    
    if (result != 0) {
        if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
        }
        
        in_stack_1 = func_0x000180120ce0((longlong)stack_int_1 * 0xe, _DAT_180c8a9a8);
        *unaff_RSI = in_stack_1;
        result = FUN_18028d680(extraout_XMM0_Qa, unaff_EBP, &stack0x00000058, param_4, temp_data);
        
        if (result != 0) {
            return stack_param_1;
        }
    }
    
    *unaff_RSI = 0;
    return 0;
}

// 函数: initialize_render_processor
// 功能: 初始化渲染处理器
void initialize_render_processor(void)
{
    return;
}

// 函数: calculate_render_interpolation
// 功能: 计算渲染插值
// 参数:
//   - target_ptr: 目标指针
//   - index: 索引
//   - source_ptr: 源指针
//   - start_val: 起始值
//   - end_val: 结束值
//   - param_6: 参数6
//   - param_7: 参数7
void calculate_render_interpolation(longlong target_ptr, int index, longlong source_ptr, 
                                  float start_val, float end_val, float param_6, float param_7)
{
    float temp_float_1, temp_float_2;
    
    if (((end_val != param_7) && (temp_float_2 = *(float *)(source_ptr + 0x1c), end_val <= temp_float_2)) &&
        (temp_float_1 = *(float *)(source_ptr + 0x18), temp_float_1 <= param_7)) {
        
        if (end_val < temp_float_1) {
            start_val = start_val + ((temp_float_1 - end_val) * (param_6 - start_val)) / (param_7 - end_val);
            end_val = temp_float_1;
        }
        
        if (temp_float_2 < param_7) {
            param_6 = param_6 + ((temp_float_2 - param_7) * (param_6 - start_val)) / (param_7 - end_val);
            param_7 = temp_float_2;
        }
        
        temp_float_2 = (float)index;
        
        if ((start_val <= temp_float_2) && (param_6 <= temp_float_2)) {
            *(float *)(target_ptr + (longlong)index * 4) =
                (param_7 - end_val) * *(float *)(source_ptr + 0x14) +
                *(float *)(target_ptr + (longlong)index * 4);
            return;
        }
        
        if ((start_val < (float)(index + 1)) || (param_6 < (float)(index + 1))) {
            *(float *)(target_ptr + (longlong)index * 4) =
                (1.0 - ((start_val - temp_float_2) + (param_6 - temp_float_2)) * 0.5) *
                (param_7 - end_val) * *(float *)(source_ptr + 0x14) +
                *(float *)(target_ptr + (longlong)index * 4);
        }
    }
    return;
}

// 函数: calculate_render_interpolation_ext
// 功能: 计算扩展渲染插值
// 参数:
//   - target_ptr: 目标指针
//   - index: 索引
//   - source_ptr: 源指针
//   - start_val: 起始值
void calculate_render_interpolation_ext(longlong target_ptr, int index, longlong source_ptr, float start_val)
{
    float temp_float_1, temp_float_2;
    float in_XMM4_Da, in_XMM5_Da;
    float in_stack_1;
    
    temp_float_2 = *(float *)(source_ptr + 0x1c);
    
    if ((in_XMM5_Da <= temp_float_2) && (temp_float_1 = *(float *)(source_ptr + 0x18), temp_float_1 <= in_XMM4_Da)) {
        if (in_XMM5_Da < temp_float_1) {
            start_val = start_val + ((temp_float_1 - in_XMM5_Da) * (in_stack_1 - start_val)) /
                        (in_XMM4_Da - in_XMM5_Da);
            in_XMM5_Da = temp_float_1;
        }
        
        if (temp_float_2 < in_XMM4_Da) {
            in_stack_1 = in_stack_1 + ((temp_float_2 - in_XMM4_Da) * (in_stack_1 - start_val)) /
                         (in_XMM4_Da - in_XMM5_Da);
            in_XMM4_Da = temp_float_2;
        }
        
        temp_float_2 = (float)index;
        
        if ((start_val <= temp_float_2) && (in_stack_1 <= temp_float_2)) {
            *(float *)(target_ptr + (longlong)index * 4) =
                (in_XMM4_Da - in_XMM5_Da) * *(float *)(source_ptr + 0x14) +
                *(float *)(target_ptr + (longlong)index * 4);
            return;
        }
        
        if ((start_val < (float)(index + 1)) || (in_stack_1 < (float)(index + 1))) {
            *(float *)(target_ptr + (longlong)index * 4) =
                (1.0 - ((start_val - temp_float_2) + (in_stack_1 - temp_float_2)) * 0.5) *
                (in_XMM4_Da - in_XMM5_Da) * *(float *)(source_ptr + 0x14) +
                *(float *)(target_ptr + (longlong)index * 4);
        }
    }
    return;
}

// 函数: apply_render_interpolation_simple
// 功能: 应用简单渲染插值
// 参数:
//   - target_ptr: 目标指针
//   - index: 索引
//   - source_ptr: 源指针
//   - start_val: 起始值
void apply_render_interpolation_simple(longlong target_ptr, int index, longlong source_ptr, float start_val)
{
    float in_XMM0_Da, in_XMM4_Da, in_XMM5_Da;
    float unaff_XMM6_Da;
    
    if ((start_val < (float)(index + 1)) || (unaff_XMM6_Da < (float)(index + 1))) {
        *(float *)(target_ptr + (longlong)index * 4) =
            (1.0 - ((start_val - in_XMM0_Da) + (unaff_XMM6_Da - in_XMM0_Da)) * 0.5) *
            (in_XMM4_Da - in_XMM5_Da) * *(float *)(source_ptr + 0x14) +
            *(float *)(target_ptr + (longlong)index * 4);
    }
    return;
}

// 函数: cleanup_render_processor
// 功能: 清理渲染处理器
void cleanup_render_processor(void)
{
    return;
}

// 函数: reset_render_processor
// 功能: 重置渲染处理器
void reset_render_processor(void)
{
    return;
}

// 函数: process_render_batch_interpolation
// 功能: 处理渲染批次插值
// 参数:
//   - target_ptr_1: 目标指针1
//   - target_ptr_2: 目标指针2
//   - index: 索引
//   - source_ptr: 源指针
//   - start_val: 起始值
void process_render_batch_interpolation(longlong target_ptr_1, longlong target_ptr_2, 
                                     int index, longlong *source_ptr, float start_val)
{
    longlong offset;
    float *float_ptr;
    int temp_int;
    longlong temp_long;
    ulonglong temp_ulong;
    longlong temp_long_2;
    int temp_int_2;
    uint temp_uint;
    float temp_float_1, temp_float_2, temp_float_3, temp_float_4, temp_float_5, temp_float_6, temp_float_7, temp_float_8;
    float temp_float_9, temp_float_10, temp_float_11, temp_float_12, temp_float_13, temp_float_14;
    ulonglong temp_ulong_2;
    
    if (source_ptr != (longlong *)0x0) {
        temp_float_14 = start_val + 1.0;
        
        do {
            temp_float_9 = *(float *)((longlong)source_ptr + 0xc);
            temp_float_4 = *(float *)(source_ptr + 1);
            
            if (temp_float_9 == 0.0) {
                if (temp_float_4 < (float)index) {
                    if (temp_float_4 < 0.0) {
                        FUN_18028e550(target_ptr_2 + -4, 0, source_ptr, temp_float_4, start_val, temp_float_4, temp_float_14);
                    } else {
                        FUN_18028e550(target_ptr_1, (int)temp_float_4, source_ptr, temp_float_4, start_val, temp_float_4, temp_float_14);
                        FUN_18028e550(target_ptr_2 + -4);
                    }
                }
            } else {
                temp_float_10 = *(float *)(source_ptr + 3);
                temp_float_12 = *(float *)(source_ptr + 2);
                temp_float_13 = temp_float_9 + temp_float_4;
                temp_float_8 = temp_float_4;
                temp_float_11 = start_val;
                
                if (start_val < temp_float_10) {
                    temp_float_8 = (temp_float_10 - start_val) * temp_float_9 + temp_float_4;
                    temp_float_11 = temp_float_10;
                }
                
                temp_float_10 = *(float *)((longlong)source_ptr + 0x1c);
                temp_float_7 = temp_float_13;
                temp_float_3 = temp_float_14;
                
                if (temp_float_10 < temp_float_14) {
                    temp_float_7 = (temp_float_10 - start_val) * temp_float_9 + temp_float_4;
                    temp_float_3 = temp_float_10;
                }
                
                if ((((temp_float_8 < 0.0) || (temp_float_7 < 0.0)) || ((float)index <= temp_float_8)) ||
                    ((float)index <= temp_float_7)) {
                    
                    temp_ulong = 0;
                    if (0 < index) {
                        do {
                            temp_uint = (int)temp_ulong + 1;
                            temp_ulong_2 = (ulonglong)temp_uint;
                            temp_float_8 = (float)(int)temp_ulong;
                            temp_float_10 = (float)(int)temp_uint;
                            temp_float_11 = (temp_float_8 - temp_float_4) * (1.0 / temp_float_9) + start_val;
                            temp_float_12 = (temp_float_10 - temp_float_4) * (1.0 / temp_float_9) + start_val;
                            
                            if ((temp_float_8 <= temp_float_4) || (temp_float_13 <= temp_float_10)) {
                                if ((temp_float_8 <= temp_float_13) || (temp_float_4 <= temp_float_10)) {
                                    if (((temp_float_4 < temp_float_8) && (temp_float_8 < temp_float_13)) ||
                                        ((temp_float_13 < temp_float_8 && (temp_float_8 < temp_float_4)))) {
                                        FUN_18028e550(target_ptr_1, temp_ulong, source_ptr, temp_float_4, start_val, temp_float_8, temp_float_11);
                                    } else if ((temp_float_10 <= temp_float_4) || (temp_float_13 <= temp_float_10)) {
                                        if ((temp_float_13 < temp_float_10) && (temp_float_10 < temp_float_4)) {
                                            FUN_18028e550(target_ptr_1, temp_ulong, source_ptr, temp_float_4, start_val, temp_float_10, temp_float_12);
                                        }
                                    } else {
                                        FUN_18028e550(target_ptr_1, temp_ulong, source_ptr, temp_float_4, start_val, temp_float_10, temp_float_12);
                                    }
                                } else {
                                    FUN_18028e550(target_ptr_1, temp_ulong, source_ptr, temp_float_4, start_val, temp_float_10, temp_float_12);
                                    FUN_18028e550(target_ptr_1);
                                }
                            } else {
                                FUN_18028e550(target_ptr_1, temp_ulong, source_ptr, temp_float_4, start_val, temp_float_8, temp_float_11);
                                FUN_18028e550(target_ptr_1);
                            }
                            
                            FUN_18028e550(target_ptr_1);
                            temp_ulong = temp_ulong_2 & 0xffffffff;
                        } while ((int)temp_ulong_2 < index);
                    }
                } else {
                    temp_int = (int)temp_float_8;
                    if (temp_int == (int)temp_float_7) {
                        offset = (longlong)temp_int;
                        *(float *)(target_ptr_1 + offset * 4) =
                            (1.0 - ((temp_float_7 - (float)temp_int) + (temp_float_8 - (float)temp_int)) * 0.5) *
                            *(float *)((longlong)source_ptr + 0x14) * (temp_float_3 - temp_float_11) +
                            *(float *)(target_ptr_1 + offset * 4);
                        *(float *)(target_ptr_2 + offset * 4) =
                            (temp_float_3 - temp_float_11) * *(float *)((longlong)source_ptr + 0x14) +
                            *(float *)(target_ptr_2 + offset * 4);
                    } else {
                        temp_float_9 = temp_float_8;
                        if (temp_float_7 < temp_float_8) {
                            temp_float_12 = -temp_float_12;
                            temp_float_9 = temp_float_3 - start_val;
                            temp_float_3 = temp_float_14 - (temp_float_11 - start_val);
                            temp_float_11 = temp_float_14 - temp_float_9;
                            temp_float_9 = temp_float_7;
                            temp_float_7 = temp_float_8;
                            temp_float_4 = temp_float_13;
                        }
                        
                        temp_int_2 = (int)temp_float_9;
                        temp_int = (int)temp_float_7;
                        offset = (longlong)(temp_int_2 + 1);
                        temp_long_2 = (longlong)temp_int;
                        temp_float_10 = *(float *)((longlong)source_ptr + 0x14);
                        temp_float_8 = temp_float_10 * temp_float_12;
                        temp_float_13 = ((float)(temp_int_2 + 1) - temp_float_4) * temp_float_12 + start_val;
                        temp_float_4 = (temp_float_13 - temp_float_11) * temp_float_10;
                        *(float *)(target_ptr_1 + (longlong)temp_int_2 * 4) =
                            (0.5 - (temp_float_9 - (float)temp_int_2) * 0.5) * temp_float_4 +
                            *(float *)(target_ptr_1 + (longlong)temp_int_2 * 4);
                        
                        if (offset < temp_long_2) {
                            if (3 < temp_long_2 - offset) {
                                float_ptr = (float *)(target_ptr_1 + 8 + offset * 4);
                                temp_long = ((temp_long_2 - offset) - 4U >> 2) + 1;
                                temp_float_9 = temp_float_8 * 0.5;
                                offset = offset + temp_long * 4;
                                
                                do {
                                    float_ptr[-2] = temp_float_9 + temp_float_4 + float_ptr[-2];
                                    temp_float_1 = temp_float_4 + temp_float_8 + temp_float_8;
                                    temp_float_2 = temp_float_1 + temp_float_8;
                                    float_ptr[-1] = temp_float_9 + temp_float_4 + temp_float_8 + float_ptr[-1];
                                    temp_float_4 = temp_float_2 + temp_float_8;
                                    *float_ptr = temp_float_9 + temp_float_1 + *float_ptr;
                                    float_ptr[1] = temp_float_9 + temp_float_2 + float_ptr[1];
                                    float_ptr = float_ptr + 4;
                                    temp_long = temp_long + -1;
                                } while (temp_long != 0);
                            }
                            
                            if (offset < temp_long_2) {
                                do {
                                    temp_float_9 = temp_float_8 * 0.5 + temp_float_4;
                                    temp_float_4 = temp_float_4 + temp_float_8;
                                    *(float *)(target_ptr_1 + offset * 4) = temp_float_9 + *(float *)(target_ptr_1 + offset * 4);
                                    offset = offset + 1;
                                } while (offset < temp_long_2);
                            }
                        }
                        
                        *(float *)(target_ptr_1 + temp_long_2 * 4) =
                            (temp_float_3 - ((float)((temp_int - temp_int_2) + -1) * temp_float_12 + temp_float_13)) *
                            (1.0 - (temp_float_7 - (float)temp_int) * 0.5) * temp_float_10 + temp_float_4 +
                            *(float *)(target_ptr_1 + temp_long_2 * 4);
                        *(float *)(target_ptr_2 + temp_long_2 * 4) =
                            (temp_float_3 - temp_float_11) * temp_float_10 + *(float *)(target_ptr_2 + temp_long_2 * 4);
                    }
                }
            }
            source_ptr = (longlong *)*source_ptr;
        } while (source_ptr != (longlong *)0x0);
    }
    return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address