#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part075.c - UI系统高级数据处理和控制模块
// 包含8个核心函数，涵盖UI数据处理、参数计算、内存管理、音频处理、浮点数处理等高级UI功能

// 全局常量定义
#define UI_MAX_FLOAT_VALUE 2.0f
#define UI_MIN_FLOAT_VALUE -2.0f
#define UI_MAX_DATA_SIZE 0x4fc
#define UI_AUDIO_SAMPLE_RATE_48K 48000
#define UI_AUDIO_SAMPLE_RATE_44K 44100
#define UI_AUDIO_SAMPLE_RATE_32K 32000
#define UI_AUDIO_SAMPLE_RATE_24K 24000
#define UI_AUDIO_SAMPLE_RATE_16K 16000
#define UI_AUDIO_SAMPLE_RATE_12K 12000
#define UI_AUDIO_SAMPLE_RATE_8K 8000
#define UI_ERROR_INVALID_PARAM 0xfffffffc
#define UI_ERROR_NULL_POINTER 0xffffffff

// 函数别名定义
#define ui_system_empty_function FUN_18070f535
#define ui_system_calculate_parameters FUN_18070f540
#define ui_system_process_parameters FUN_18070f57b
#define ui_system_set_control_flag FUN_18070f64d
#define ui_system_process_audio_data FUN_18070f860
#define ui_system_process_audio_data_alt FUN_18070f8a4
#define ui_system_process_audio_final FUN_18070fb8e
#define ui_system_get_error_code FUN_18070fc08
#define ui_system_process_float_data FUN_18070fc20

// 全局变量
static const float _ui_max_float_value = 2.0f;
static const float _ui_min_float_value = -2.0f;

/**
 * UI系统空函数
 * 用作占位符或初始化函数
 */
void ui_system_empty_function(void)
{
    return;
}

/**
 * UI系统参数计算函数
 * 计算UI系统中的各种参数值，包括大小调整、位置计算等
 * 
 * @param param_1 参数数据指针
 * @param param_2 输入参数值
 * @return 计算后的参数值
 */
uint ui_system_calculate_parameters(longlong *param_1, uint param_2)
{
    int calculated_value;
    uint result;
    byte shift_bits;
    int temp_value;
    uint temp_result;
    uint temp_result2;
    uint temp_result3;
    uint temp_result4;
    uint temp_result5;
    uint temp_result6;
    int loop_counter;
    
    temp_result3 = *(uint *)(param_1 + 4);
    temp_result = param_2 - 1;
    temp_result4 = *(uint *)((longlong)param_1 + 0x24);
    loop_counter = 0x1f;
    
    // 计算需要的位移位数
    if (temp_result != 0) {
        for (; temp_result >> loop_counter == 0; loop_counter = loop_counter + -1) {
        }
    }
    
    if (loop_counter + 1 < 9) {
        // 简单计算模式
        calculated_value = (int)((ulonglong)temp_result3 / (ulonglong)param_2);
        *(int *)(param_1 + 5) = calculated_value;
        temp_value = (int)((ulonglong)temp_result4 / ((ulonglong)temp_result3 / (ulonglong)param_2));
        loop_counter = 0;
        
        if (param_2 < temp_value + 1U) {
            loop_counter = (param_2 - temp_value) + -1;
        }
        
        temp_value = (param_2 - loop_counter) - temp_value;
        loop_counter = (param_2 - temp_value) * calculated_value;
        temp_result2 = temp_value - 1;
        *(uint *)((longlong)param_1 + 0x24) = temp_result4 - loop_counter;
        
        if (temp_result2 == 0) {
            calculated_value = temp_result3 - loop_counter;
        }
        
        *(int *)(param_1 + 4) = calculated_value;
        ui_system_empty_function();
    }
    else {
        // 复杂计算模式
        temp_result2 = loop_counter - 7;
        shift_bits = (byte)temp_result2;
        temp_result5 = (temp_result >> (shift_bits & 0x1f)) + 1;
        calculated_value = (int)((ulonglong)temp_result3 / (ulonglong)temp_result5);
        *(int *)(param_1 + 5) = calculated_value;
        temp_value = (int)((ulonglong)temp_result4 / ((ulonglong)temp_result3 / (ulonglong)temp_result5));
        loop_counter = 0;
        
        if (temp_result5 < temp_value + 1U) {
            loop_counter = (temp_result5 - temp_value) + -1;
        }
        
        temp_value = (temp_result5 - loop_counter) - temp_value;
        loop_counter = (temp_result5 - temp_value) * calculated_value;
        temp_value = temp_value + -1;
        *(uint *)((longlong)param_1 + 0x24) = temp_result4 - loop_counter;
        
        if (temp_value == 0) {
            calculated_value = temp_result3 - loop_counter;
        }
        
        *(int *)(param_1 + 4) = calculated_value;
        ui_system_empty_function();
        
        temp_result3 = *(uint *)((longlong)param_1 + 0x14);
        temp_result4 = *(uint *)(param_1 + 2);
        
        if (temp_result3 < temp_result2) {
            temp_result5 = *(uint *)((longlong)param_1 + 0xc);
            temp_result6 = temp_result3;
            
            do {
                if (temp_result5 < *(uint *)(param_1 + 1)) {
                    temp_result5 = temp_result5 + 1;
                    *(uint *)((longlong)param_1 + 0xc) = temp_result5;
                    result = (uint)*(byte *)((ulonglong)(*(uint *)(param_1 + 1) - temp_result5) + *param_1);
                }
                else {
                    result = 0;
                }
                
                temp_result3 = temp_result6 + 8;
                temp_result4 = temp_result4 | result << ((byte)temp_result6 & 0x1f);
                temp_result6 = temp_result3;
            } while ((int)temp_result3 < 0x19);
        }
        
        *(uint *)(param_1 + 3) = (int)param_1[3] + temp_result2;
        *(uint *)((longlong)param_1 + 0x14) = temp_result3 - temp_result2;
        *(uint *)(param_1 + 2) = temp_result4 >> (shift_bits & 0x1f);
        temp_result2 = (1 << (shift_bits & 0x1f)) - 1U & temp_result4 | temp_value << (shift_bits & 0x1f);
        
        if (temp_result < temp_result2) {
            *(undefined4 *)(param_1 + 6) = 1;
            temp_result2 = temp_result;
        }
    }
    
    return temp_result2;
}

/**
 * UI系统参数处理函数
 * 处理UI系统中的高级参数计算和状态管理
 * 
 * @param param_1 参数数据指针
 * @param param_2 输入参数值
 * @return 处理后的参数值
 */
uint ui_system_process_parameters(undefined8 param_1, uint param_2)
{
    ulonglong calculated_value;
    byte shift_bits;
    int temp_value;
    uint result;
    ulonglong input_value;
    int temp_value2;
    uint temp_result;
    uint temp_result2;
    uint temp_result3;
    int temp_value3;
    uint input_param;
    int temp_value4;
    longlong *data_pointer;
    uint temp_result4;
    uint temp_result5;
    
    shift_bits = (byte)temp_result3;
    temp_result3 = (temp_result >> (shift_bits & 0x1f)) + 1;
    calculated_value = ((ulonglong)param_2 << 0x20 | input_value & 0xffffffff) / (ulonglong)temp_result3;
    temp_value = (int)calculated_value;
    *(int *)(data_pointer + 5) = temp_value;
    temp_value2 = (int)((ulonglong)input_param / (calculated_value & 0xffffffff));
    temp_result2 = temp_result;
    
    if (temp_result3 < temp_value2 + 1U) {
        temp_result2 = (temp_result3 - temp_value2) - 1;
    }
    
    temp_value2 = (temp_result3 - temp_result2) - temp_value2;
    temp_value3 = (temp_result3 - temp_value2) * temp_value;
    temp_value2 = temp_value2 + -1;
    *(uint *)((longlong)data_pointer + 0x24) = input_param - temp_value3;
    
    if (temp_value2 == 0) {
        temp_value = temp_value4 - temp_value3;
    }
    
    *(int *)(data_pointer + 4) = temp_value;
    ui_system_empty_function();
    
    temp_result2 = *(uint *)((longlong)data_pointer + 0x14);
    temp_result3 = *(uint *)(data_pointer + 2);
    
    if (temp_result2 < temp_result3) {
        result = *(uint *)((longlong)data_pointer + 0xc);
        temp_result4 = temp_result2;
        
        do {
            temp_result = temp_result;
            if (result < *(uint *)(data_pointer + 1)) {
                result = result + 1;
                *(uint *)((longlong)data_pointer + 0xc) = result;
                temp_result = (uint)*(byte *)((ulonglong)(*(uint *)(data_pointer + 1) - result) + *data_pointer);
            }
            
            temp_result2 = temp_result4 + 8;
            temp_result3 = temp_result3 | temp_result << ((byte)temp_result4 & 0x1f);
            temp_result4 = temp_result2;
        } while ((int)temp_result2 < 0x19);
    }
    
    *(uint *)(data_pointer + 3) = (int)data_pointer[3] + temp_result3;
    *(uint *)((longlong)data_pointer + 0x14) = temp_result2 - temp_result3;
    *(uint *)(data_pointer + 2) = temp_result3 >> (shift_bits & 0x1f);
    temp_result2 = (1 << (shift_bits & 0x1f)) - 1U & temp_result3 | temp_value2 << (shift_bits & 0x1f);
    
    if (temp_result < temp_result2) {
        *(undefined4 *)(data_pointer + 6) = 1;
        temp_result2 = temp_result;
    }
    
    return temp_result2;
}

/**
 * UI系统控制标志设置函数
 * 设置UI系统中的控制标志位
 * 
 * @return 当前控制标志状态
 */
undefined4 ui_system_set_control_flag(void)
{
    undefined4 current_flag;
    longlong data_pointer;
    
    *(undefined4 *)(data_pointer + 0x30) = 1;
    return current_flag;
}

/**
 * UI系统音频数据处理函数
 * 处理UI系统中的音频数据，包括采样率转换、数据格式处理等
 * 
 * @param param_1 音频数据指针
 * @param param_2 数据大小
 * @param param_3 处理模式
 * @param param_4 输出格式指针
 * @param param_5 数据缓冲区指针
 * @param param_6 输出参数指针
 * @param param_7 处理结果指针
 * @param param_8 完成状态指针
 * @return 处理状态码
 */
ulonglong ui_system_process_audio_data(byte *param_1, int param_2, int param_3, byte *param_4, 
                                     longlong param_5, short *param_6, int *param_7, int *param_8)
{
    byte format_header;
    byte temp_byte;
    short temp_short;
    byte format_info;
    ulonglong result;
    int sample_rate;
    int temp_value;
    int temp_value2;
    ulonglong temp_ulong;
    uint temp_uint;
    ulonglong temp_ulong2;
    uint temp_uint2;
    short *short_pointer;
    uint temp_uint3;
    byte *byte_pointer;
    uint temp_uint4;
    uint stack_temp;
    
    temp_ulong2 = 0;
    temp_uint = 0;
    stack_temp = 0;
    
    // 参数验证
    if ((param_6 == (short *)0x0) || (param_2 < 0)) {
        return UI_ERROR_NULL_POINTER;
    }
    
    if (param_2 == 0) {
        return UI_ERROR_INVALID_PARAM;
    }
    
    format_header = *param_1;
    
    // 计算采样率
    if ((char)format_header < '\0') {
        sample_rate = UI_AUDIO_SAMPLE_RATE_48K << (format_header >> 3 & 3);
        sample_rate = sample_rate / 400 + (sample_rate >> 0x1f);
SAMPLE_RATE_CALCULATION:
        sample_rate = sample_rate - (sample_rate >> 0x1f);
    }
    else if ((format_header & 0x60) == 0x60) {
        sample_rate = 0x3c0;
        if ((format_header & 8) == 0) {
            sample_rate = 0x1e0;
        }
    }
    else {
        format_info = format_header >> 3 & 3;
        if (format_info != 3) {
            sample_rate = UI_AUDIO_SAMPLE_RATE_48K << format_info;
            sample_rate = sample_rate / 100 + (sample_rate >> 0x1f);
            goto SAMPLE_RATE_CALCULATION;
        }
        sample_rate = 0xb40;
    }
    
    temp_uint4 = param_2 - 1;
    byte_pointer = param_1 + 1;
    format_info = 0;
    temp_uint3 = temp_uint4;
    
    // 处理不同的音频格式
    if ((format_header & 3) == 0) {
        temp_ulong = 1;
        stack_temp = temp_uint;
    }
    else if ((format_header & 3) == 1) {
        temp_ulong = 2;
        format_info = 1;
        stack_temp = temp_uint;
        
        if (param_3 == 0) {
            if ((temp_uint4 & 1) != 0) {
                return UI_ERROR_INVALID_PARAM;
            }
            *param_6 = (short)((int)temp_uint4 / 2);
            temp_uint3 = (int)temp_uint4 / 2;
        }
    }
    else if ((format_header & 3) == 2) {
        temp_ulong = 2;
        sample_rate = func_0x0001807104d0(byte_pointer, temp_uint4, param_6);
        temp_short = *param_6;
        temp_uint4 = temp_uint4 - sample_rate;
        
        if (temp_short < 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        if ((int)temp_uint4 < (int)temp_short) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        byte_pointer = byte_pointer + sample_rate;
        stack_temp = temp_uint;
        temp_uint3 = temp_uint4 - (int)temp_short;
    }
    else {
        if ((int)temp_uint4 < 1) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        format_info = *byte_pointer;
        byte_pointer = param_1 + 2;
        temp_uint = format_info & 0x3f;
        temp_ulong = (ulonglong)temp_uint;
        
        if ((format_info & 0x3f) == 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        if (0x1680 < (int)(sample_rate * temp_uint)) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        temp_uint4 = param_2 - 2;
        temp_ulong = temp_ulong2;
        
        if ((format_info & 0x40) != 0) {
            do {
                if ((int)temp_uint4 < 1) {
                    return UI_ERROR_INVALID_PARAM;
                }
                
                temp_byte = *byte_pointer;
                byte_pointer = byte_pointer + 1;
                temp_uint2 = (uint)temp_byte;
                
                if (temp_byte == 0xff) {
                    temp_uint2 = 0xfe;
                }
                
                stack_temp = (int)temp_ulong + temp_uint2;
                temp_uint4 = temp_uint4 + (-1 - temp_uint2);
                temp_ulong = (ulonglong)stack_temp;
            } while (temp_byte == 0xff);
        }
        
        if ((int)temp_uint4 < 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        format_info = ~(format_info >> 7) & 1;
        
        if (format_info == 0) {
            temp_ulong = temp_ulong2;
            short_pointer = param_6;
            temp_uint3 = temp_uint4;
            
            if (0 < (int)(temp_uint - 1)) {
                do {
                    sample_rate = func_0x0001807104d0(byte_pointer, temp_uint4, param_6 + (int)temp_ulong);
                    temp_short = *short_pointer;
                    temp_uint4 = temp_uint4 - sample_rate;
                    
                    if (temp_short < 0) {
                        return UI_ERROR_INVALID_PARAM;
                    }
                    
                    if ((int)temp_uint4 < (int)temp_short) {
                        return UI_ERROR_INVALID_PARAM;
                    }
                    
                    temp_uint2 = (int)temp_ulong + 1;
                    byte_pointer = byte_pointer + sample_rate;
                    temp_uint3 = temp_uint3 - (sample_rate + temp_short);
                    temp_ulong = (ulonglong)temp_uint2;
                    short_pointer = short_pointer + 1;
                } while ((int)temp_uint2 < (int)(temp_uint - 1));
            }
            
            if ((int)temp_uint3 < 0) {
                return UI_ERROR_INVALID_PARAM;
            }
        }
        else if (param_3 == 0) {
            temp_uint3 = (int)temp_uint4 / (int)temp_uint;
            
            if (temp_uint * temp_uint3 != temp_uint4) {
                return UI_ERROR_INVALID_PARAM;
            }
            
            if (0 < (int)(temp_uint - 1)) {
                short_pointer = param_6;
                for (temp_ulong = temp_ulong * 2 - 2 >> 1; temp_ulong != 0; temp_ulong = temp_ulong - 1) {
                    *short_pointer = (short)temp_uint3;
                    short_pointer = short_pointer + 1;
                }
            }
        }
    }
    
    if (param_3 == 0) {
        if ((int)temp_uint3 < UI_MAX_DATA_SIZE) {
            param_6[temp_ulong - 1] = (short)temp_uint3;
            goto PROCESSING_COMPLETE;
        }
    }
    else {
        sample_rate = func_0x0001807104d0(byte_pointer, temp_uint4, param_6 + (temp_ulong - 1));
        
        if ((-1 < param_6[temp_ulong - 1]) &&
           (temp_value2 = (int)param_6[temp_ulong - 1], temp_value2 <= (int)(temp_uint4 - sample_rate))) {
            byte_pointer = byte_pointer + sample_rate;
            
            if (format_info == 0) {
                if (sample_rate + temp_value2 <= (int)temp_uint3) goto PROCESSING_COMPLETE;
            }
            else if (temp_value2 * (int)temp_ulong <= (int)(temp_uint4 - sample_rate)) {
                temp_ulong = temp_ulong2;
                
                if (0 < (longlong)(temp_ulong - 1)) {
                    do {
                        param_6[temp_ulong] = param_6[temp_ulong - 1];
                        temp_ulong = temp_ulong + 1;
                    } while ((longlong)temp_ulong < (longlong)(temp_ulong - 1));
                }
                
PROCESSING_COMPLETE:
                if (param_7 != (int *)0x0) {
                    *param_7 = (int)byte_pointer - (int)param_1;
                }
                
                if ((int)temp_ulong != 0) {
                    do {
                        if (param_5 != 0) {
                            *(byte **)(param_5 + temp_ulong2 * 8) = byte_pointer;
                        }
                        
                        short_pointer = param_6 + temp_ulong2;
                        temp_ulong2 = temp_ulong2 + 1;
                        byte_pointer = byte_pointer + *short_pointer;
                    } while ((longlong)temp_ulong2 < (longlong)temp_ulong);
                }
                
                if (param_8 != (int *)0x0) {
                    *param_8 = ((int)byte_pointer - (int)param_1) + stack_temp;
                }
                
                if (param_4 != (byte *)0x0) {
                    *param_4 = format_header;
                    return temp_ulong;
                }
                
                return temp_ulong;
            }
        }
    }
    
    return UI_ERROR_INVALID_PARAM;
}

/**
 * UI系统音频数据处理替代函数
 * 提供音频数据处理的替代实现
 * 
 * @param param_1 音频数据指针
 * @param param_2 数据参数
 * @param param_3 处理模式
 * @return 处理状态码
 */
ulonglong ui_system_process_audio_data_alt(byte *param_1, undefined8 param_2, int param_3)
{
    byte format_header;
    byte temp_byte;
    short temp_short;
    byte format_info;
    ulonglong temp_ulong;
    int sample_rate;
    int temp_value;
    int temp_value2;
    ulonglong temp_ulong2;
    uint temp_uint;
    ulonglong temp_ulong3;
    short *short_pointer;
    uint temp_uint2;
    short *short_pointer2;
    uint temp_uint3;
    longlong input_param;
    byte *byte_pointer;
    int input_param2;
    uint temp_uint4;
    uint temp_uint5;
    int temp_value3;
    int temp_value4;
    bool zero_flag;
    int stack_temp;
    int stack_param;
    int stack_param2;
    byte *stack_pointer;
    longlong stack_pointer2;
    int *stack_pointer3;
    int *stack_pointer4;
    
    if (zero_flag) {
        return UI_ERROR_INVALID_PARAM;
    }
    
    format_header = *param_1;
    
    // 计算采样率
    if ((char)format_header < '\0') {
        sample_rate = UI_AUDIO_SAMPLE_RATE_48K << (format_header >> 3 & 3);
        sample_rate = sample_rate / 400 + (sample_rate >> 0x1f);
SAMPLE_RATE_CALCULATION:
        sample_rate = sample_rate - (sample_rate >> 0x1f);
    }
    else if ((format_header & 0x60) == 0x60) {
        sample_rate = 0x3c0;
        if ((format_header & 8) == 0) {
            sample_rate = 0x1e0;
        }
    }
    else {
        format_info = format_header >> 3 & 3;
        if (format_info != 3) {
            sample_rate = UI_AUDIO_SAMPLE_RATE_48K << format_info;
            sample_rate = sample_rate / 100 + (sample_rate >> 0x1f);
            goto SAMPLE_RATE_CALCULATION;
        }
        sample_rate = 0xb40;
    }
    
    temp_uint5 = input_param2 - 1;
    byte_pointer = (byte *)(input_param + 1);
    temp_uint4 = (uint)temp_ulong2;
    temp_uint3 = temp_uint5;
    
    if ((format_header & 3) == 0) {
        temp_ulong3 = 1;
    }
    else if ((format_header & 3) == 1) {
        temp_ulong3 = 2;
        temp_uint4 = 1;
        
        if (param_3 == 0) {
            if ((temp_uint5 & 1) != 0) {
                return UI_ERROR_INVALID_PARAM;
            }
            *short_pointer = (short)((int)temp_uint5 / 2);
            temp_uint3 = (int)temp_uint5 / 2;
        }
    }
    else if ((format_header & 3) == 2) {
        temp_ulong3 = 2;
        sample_rate = func_0x0001807104d0(byte_pointer, temp_uint5);
        temp_short = *short_pointer;
        temp_uint5 = temp_uint5 - sample_rate;
        
        if (temp_short < 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        if ((int)temp_uint5 < (int)temp_short) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        byte_pointer = byte_pointer + sample_rate;
        temp_uint3 = temp_uint5 - (int)temp_short;
    }
    else {
        if ((int)temp_uint5 < 1) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        format_info = *byte_pointer;
        byte_pointer = (byte *)(input_param + 2);
        temp_uint = format_info & 0x3f;
        temp_ulong3 = (ulonglong)temp_uint;
        
        if ((format_info & 0x3f) == 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        if (0x1680 < (int)(sample_rate * temp_uint)) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        temp_uint5 = input_param2 - 2;
        
        if ((format_info & 0x40) != 0) {
            do {
                if ((int)temp_uint5 < 1) {
                    return UI_ERROR_INVALID_PARAM;
                }
                
                temp_byte = *byte_pointer;
                byte_pointer = byte_pointer + 1;
                temp_uint4 = (uint)temp_byte;
                
                if (temp_byte == 0xff) {
                    temp_uint4 = 0xfe;
                }
                
                temp_value4 = temp_value4 + temp_uint4;
                temp_uint5 = temp_uint5 + (-1 - temp_uint4);
                stack_param = temp_value4;
            } while (temp_byte == 0xff);
        }
        
        if ((int)temp_uint5 < 0) {
            return UI_ERROR_INVALID_PARAM;
        }
        
        temp_uint4 = ~(uint)(format_info >> 7) & 1;
        
        if (temp_uint4 == 0) {
            temp_ulong = temp_ulong2 & 0xffffffff;
            short_pointer2 = short_pointer;
            temp_uint3 = temp_uint5;
            
            if (0 < (int)(temp_uint - 1)) {
                do {
                    sample_rate = func_0x0001807104d0(byte_pointer, temp_uint5, short_pointer + (int)temp_ulong);
                    temp_short = *short_pointer2;
                    temp_uint5 = temp_uint5 - sample_rate;
                    
                    if (temp_short < 0) {
                        return UI_ERROR_INVALID_PARAM;
                    }
                    
                    if ((int)temp_uint5 < (int)temp_short) {
                        return UI_ERROR_INVALID_PARAM;
                    }
                    
                    temp_uint2 = (int)temp_ulong + 1;
                    temp_ulong = (ulonglong)temp_uint2;
                    byte_pointer = byte_pointer + sample_rate;
                    temp_uint3 = temp_uint3 - (sample_rate + temp_short);
                    short_pointer2 = short_pointer2 + 1;
                    temp_value3 = stack_param2;
                } while ((int)temp_uint2 < (int)(temp_uint - 1));
            }
            
            temp_value4 = stack_param;
            
            if ((int)temp_uint3 < 0) {
                return UI_ERROR_INVALID_PARAM;
            }
        }
        else if (param_3 == 0) {
            temp_uint3 = (int)temp_uint5 / (int)temp_uint;
            
            if (temp_uint * temp_uint3 != temp_uint5) {
                return UI_ERROR_INVALID_PARAM;
            }
            
            if (0 < (int)(temp_uint - 1)) {
                short_pointer2 = short_pointer;
                for (temp_ulong = temp_ulong3 * 2 - 2 >> 1; temp_ulong != 0; temp_ulong = temp_ulong - 1) {
                    *short_pointer2 = (short)temp_uint3;
                    short_pointer2 = short_pointer2 + 1;
                }
            }
        }
    }
    
    if (temp_value3 == 0) {
        if ((int)temp_uint3 < UI_MAX_DATA_SIZE) {
            short_pointer[temp_ulong3 - 1] = (short)temp_uint3;
            goto PROCESSING_COMPLETE;
        }
    }
    else {
        sample_rate = func_0x0001807104d0(byte_pointer, temp_uint5, short_pointer + (temp_ulong3 - 1));
        
        if ((-1 < short_pointer[temp_ulong3 - 1]) &&
           (temp_value2 = (int)short_pointer[temp_ulong3 - 1], temp_value2 <= (int)(temp_uint5 - sample_rate))) {
            byte_pointer = byte_pointer + sample_rate;
            
            if (temp_uint4 == 0) {
                if (sample_rate + temp_value2 <= (int)temp_uint3) goto PROCESSING_COMPLETE;
            }
            else if (temp_value2 * (int)temp_ulong3 <= (int)(temp_uint5 - sample_rate)) {
                temp_ulong = temp_ulong2;
                
                if (0 < (longlong)(temp_ulong3 - 1)) {
                    do {
                        short_pointer[temp_ulong] = short_pointer[temp_ulong3 - 1];
                        temp_ulong = temp_ulong + 1;
                    } while ((longlong)temp_ulong < (longlong)(temp_ulong3 - 1));
                }
                
PROCESSING_COMPLETE:
                if (stack_pointer3 != (int *)0x0) {
                    *stack_pointer3 = (int)byte_pointer - stack_temp;
                }
                
                if ((int)temp_ulong3 != 0) {
                    do {
                        if (stack_pointer2 != 0) {
                            *(byte **)(stack_pointer2 + temp_ulong2 * 8) = byte_pointer;
                        }
                        
                        short_pointer2 = short_pointer + temp_ulong2;
                        temp_ulong2 = temp_ulong2 + 1;
                        byte_pointer = byte_pointer + *short_pointer2;
                    } while ((longlong)temp_ulong2 < (longlong)temp_ulong3);
                }
                
                if (stack_pointer4 != (int *)0x0) {
                    *stack_pointer4 = ((int)byte_pointer - stack_temp) + temp_value4;
                }
                
                if (stack_pointer != (byte *)0x0) {
                    *stack_pointer = format_header;
                    return temp_ulong3;
                }
                
                return temp_ulong3;
            }
        }
    }
    
    return UI_ERROR_INVALID_PARAM;
}

/**
 * UI系统音频处理完成函数
 * 完成音频处理的收尾工作
 * 
 * @return 完成状态码
 */
int ui_system_process_audio_final(void)
{
    longlong temp_long;
    longlong temp_long2;
    int temp_value;
    longlong temp_long3;
    longlong temp_long4;
    int input_param;
    longlong input_param2;
    undefined1 format_byte;
    int temp_value2;
    undefined4 stack_temp;
    undefined1 *stack_pointer;
    longlong stack_pointer2;
    int *stack_pointer3;
    int *stack_pointer4;
    
    if (input_param < UI_MAX_DATA_SIZE) {
        *(short *)(temp_long3 + -2 + temp_long4 * 2) = (short)input_param;
        
        if (stack_pointer3 != (int *)0x0) {
            *stack_pointer3 = (int)input_param2 - stack_temp;
        }
        
        if (temp_value != 0) {
            do {
                if (stack_pointer2 != 0) {
                    *(longlong *)(stack_pointer2 + temp_long2 * 8) = input_param2;
                }
                
                temp_long = temp_long2 * 2;
                temp_long2 = temp_long2 + 1;
                input_param2 = input_param2 + *(short *)(temp_long3 + temp_long);
            } while (temp_long2 < temp_long4);
        }
        
        if (stack_pointer4 != (int *)0x0) {
            *stack_pointer4 = ((int)input_param2 - stack_temp) + temp_value2;
        }
        
        if (stack_pointer != (undefined1 *)0x0) {
            *stack_pointer = format_byte;
        }
    }
    else {
        temp_value = -4;
    }
    
    return temp_value;
}

/**
 * UI系统错误码获取函数
 * 获取UI系统的错误状态码
 * 
 * @return 错误状态码
 */
undefined8 ui_system_get_error_code(void)
{
    return UI_ERROR_INVALID_PARAM;
}

/**
 * UI系统浮点数据处理函数
 * 处理UI系统中的浮点数数据，包括范围限制、数值计算等
 * 
 * @param param_1 数据指针
 * @param param_2 数据宽度
 * @param param_3 数据高度
 * @param param_4 输出数据指针
 */
void ui_system_process_float_data(longlong param_1, int param_2, int param_3, float *param_4)
{
    bool condition;
    undefined1 temp_array1 [16];
    undefined1 temp_array2 [16];
    int temp_value;
    undefined1 (*array_pointer) [16];
    uint temp_uint;
    int temp_value2;
    longlong temp_long;
    float *float_pointer;
    float *float_pointer2;
    uint temp_uint2;
    int temp_value3;
    longlong temp_long2;
    longlong temp_long3;
    int temp_value4;
    int temp_value5;
    ulonglong temp_ulong;
    int temp_value6;
    longlong temp_long4;
    float temp_float;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    undefined1 temp_array3 [16];
    float *stack_pointer;
    longlong stack_long;
    
    temp_array2 = _DAT_180a401b0;
    temp_array1 = _DAT_18094ed40;
    temp_long4 = (longlong)param_3;
    
    // 参数验证
    if ((((0 < param_3) && (0 < param_2)) && (param_1 != 0)) && (param_4 != (float *)0x0)) {
        temp_uint2 = param_2 * param_3;
        temp_value4 = 0;
        
        if (0 < (int)temp_uint2) {
            // 批量处理数据
            if (0xf < temp_uint2) {
                temp_uint = temp_uint2 & 0x8000000f;
                if ((int)temp_uint < 0) {
                    temp_uint = (temp_uint - 1 | 0xfffffff0) + 1;
                }
                
                temp_long = 0;
                array_pointer = (undefined1 (*) [16])(param_1 + 0x20);
                
                do {
                    temp_value4 = temp_value4 + 0x10;
                    temp_array3 = minps(temp_array2, array_pointer[-2]);
                    temp_long = temp_long + 0x10;
                    temp_array3 = maxps(temp_array1, temp_array3);
                    array_pointer[-2] = temp_array3;
                    temp_array3 = minps(temp_array2, array_pointer[-1]);
                    temp_array3 = maxps(temp_array1, temp_array3);
                    array_pointer[-1] = temp_array3;
                    temp_array3 = minps(temp_array2, *array_pointer);
                    temp_array3 = maxps(temp_array1, temp_array3);
                    *array_pointer = temp_array3;
                    temp_array3 = minps(temp_array2, array_pointer[1]);
                    temp_array3 = maxps(temp_array1, temp_array3);
                    array_pointer[1] = temp_array3;
                    array_pointer = array_pointer + 4;
                } while (temp_long < (int)(temp_uint2 - temp_uint));
            }
            
            // 处理剩余数据
            if (temp_value4 < (int)temp_uint2) {
                if (3 < (int)(temp_uint2 - temp_value4)) {
                    temp_uint = ((temp_uint2 - temp_value4) - 4 >> 2) + 1;
                    float_pointer = (float *)(param_1 + ((longlong)temp_value4 + 2) * 4);
                    temp_ulong = (ulonglong)temp_uint;
                    temp_value4 = temp_value4 + temp_uint * 4;
                    
                    do {
                        temp_float3 = float_pointer[-2];
                        if (UI_MAX_FLOAT_VALUE <= temp_float3) {
                            temp_float3 = UI_MAX_FLOAT_VALUE;
                        }
                        if (temp_float3 < UI_MIN_FLOAT_VALUE) {
                            temp_float3 = UI_MIN_FLOAT_VALUE;
                        }
                        
                        temp_float = float_pointer[-1];
                        if (UI_MAX_FLOAT_VALUE <= temp_float) {
                            temp_float = UI_MAX_FLOAT_VALUE;
                        }
                        float_pointer[-2] = temp_float3;
                        
                        if (temp_float < UI_MIN_FLOAT_VALUE) {
                            temp_float = UI_MIN_FLOAT_VALUE;
                        }
                        
                        temp_float3 = *float_pointer;
                        if (UI_MAX_FLOAT_VALUE <= temp_float3) {
                            temp_float3 = UI_MAX_FLOAT_VALUE;
                        }
                        float_pointer[-1] = temp_float;
                        
                        if (temp_float3 < UI_MIN_FLOAT_VALUE) {
                            temp_float3 = UI_MIN_FLOAT_VALUE;
                        }
                        *float_pointer = temp_float3;
                        
                        temp_float3 = float_pointer[1];
                        if (UI_MAX_FLOAT_VALUE <= temp_float3) {
                            temp_float3 = UI_MAX_FLOAT_VALUE;
                        }
                        if (temp_float3 < UI_MIN_FLOAT_VALUE) {
                            temp_float3 = UI_MIN_FLOAT_VALUE;
                        }
                        float_pointer[1] = temp_float3;
                        float_pointer = float_pointer + 4;
                        temp_ulong = temp_ulong - 1;
                    } while (temp_ulong != 0);
                }
                
                if (temp_value4 < (int)temp_uint2) {
                    float_pointer = (float *)(param_1 + (longlong)temp_value4 * 4);
                    temp_long = (longlong)(int)(temp_uint2 - temp_value4);
                    
                    do {
                        temp_float3 = *float_pointer;
                        if (UI_MAX_FLOAT_VALUE <= temp_float3) {
                            temp_float3 = UI_MAX_FLOAT_VALUE;
                        }
                        if (temp_float3 < UI_MIN_FLOAT_VALUE) {
                            temp_float3 = UI_MIN_FLOAT_VALUE;
                        }
                        *float_pointer = temp_float3;
                        float_pointer = float_pointer + 1;
                        temp_long = temp_long + -1;
                    } while (temp_long != 0);
                }
            }
        }
        
        // 处理输出数据
        if (0 < param_3) {
            stack_pointer = param_4;
            stack_long = temp_long4;
            
            do {
                temp_float3 = *stack_pointer;
                float_pointer = (float *)((param_1 - (longlong)param_4) + (longlong)stack_pointer);
                temp_value4 = 0;
                
                if (3 < param_2) {
                    temp_value3 = param_3 * 2;
                    
                    do {
                        temp_value = param_3 * -2 + temp_value3;
                        temp_float = float_pointer[temp_value] * temp_float3;
                        if (0.0 <= temp_float) goto PROCESSING_DONE;
                        float_pointer[temp_value] = (temp_float + 1.0) * float_pointer[temp_value];
                        
                        temp_float = float_pointer[temp_value3 - param_3] * temp_float3;
                        if (0.0 <= temp_float) goto PROCESSING_DONE;
                        float_pointer[temp_value3 - param_3] = (temp_float + 1.0) * float_pointer[temp_value3 - param_3];
                        
                        temp_float = float_pointer[temp_value3] * temp_float3;
                        if (0.0 <= temp_float) goto PROCESSING_DONE;
                        temp_value = temp_value3 + param_3;
                        temp_float = float_pointer[temp_value] * temp_float3;
                        if (0.0 <= temp_float) goto PROCESSING_DONE;
                        
                        temp_value4 = temp_value4 + 4;
                        temp_value3 = temp_value3 + param_3 * 4;
                        float_pointer[temp_value] = (temp_float + 1.0) * float_pointer[temp_value];
                    } while (temp_value4 < param_2 + -3);
                }
                
                if (temp_value4 < param_2) {
                    temp_value3 = temp_value4 * param_3;
                    
                    do {
                        temp_float = float_pointer[temp_value3] * temp_float3;
                        if (0.0 <= temp_float) break;
                        temp_value4 = temp_value4 + 1;
                        float_pointer[temp_value3] = (temp_float + 1.0) * float_pointer[temp_value3];
                        temp_value3 = temp_value3 + param_3;
                    } while (temp_value4 < param_2);
                }
                
PROCESSING_DONE:
                temp_float3 = *float_pointer;
                temp_value4 = 0;
                
                do {
                    temp_value3 = temp_value4;
                    if (temp_value4 < param_2) {
                        if (3 < param_2 - temp_value4) {
                            temp_value6 = temp_value4 - (temp_value4 + 2);
                            temp_value = (temp_value4 + 2) * param_3;
                            
                            do {
                                if ((1.0 < float_pointer[temp_value6 * param_3 + temp_value]) ||
                                   (float_pointer[temp_value6 * param_3 + temp_value] < -1.0)) goto FIND_EXTREME;
                                if ((1.0 < float_pointer[(temp_value6 + 1) * param_3 + temp_value]) ||
                                   (float_pointer[(temp_value6 + 1) * param_3 + temp_value] < -1.0)) {
                                    temp_value3 = temp_value3 + 1;
                                    goto FIND_EXTREME;
                                }
                                if ((1.0 < float_pointer[temp_value]) || (float_pointer[temp_value] < -1.0)) {
                                    temp_value3 = temp_value3 + 2;
                                    goto FIND_EXTREME;
                                }
                                if ((1.0 < float_pointer[(temp_value6 + 3) * param_3 + temp_value]) ||
                                   (float_pointer[(temp_value6 + 3) * param_3 + temp_value] < -1.0)) {
                                    temp_value3 = temp_value3 + 3;
                                    goto FIND_EXTREME;
                                }
                                temp_value3 = temp_value3 + 4;
                                temp_value = temp_value + param_3 * 4;
                            } while (temp_value3 < param_2 + -3);
                        }
                        
                        if (temp_value3 < param_2) {
                            temp_value = temp_value3 * param_3;
                            
                            do {
                                if ((1.0 < float_pointer[temp_value]) || (float_pointer[temp_value] < -1.0)) break;
                                temp_value3 = temp_value3 + 1;
                                temp_value = temp_value + param_3;
                            } while (temp_value3 < param_2);
                        }
                    }
                    
FIND_EXTREME:
                    if (temp_value3 == param_2) {
                        temp_float = 0.0;
                        break;
                    }
                    
                    temp_value = temp_value3 * param_3;
                    temp_float5 = float_pointer[temp_value];
                    temp_float = ABS(temp_float5);
                    temp_value6 = temp_value3;
                    temp_value5 = temp_value3;
                    
                    if (0 < temp_value3) {
                        temp_value2 = (temp_value3 + -1) * param_3;
                        
                        do {
                            if (temp_float5 * float_pointer[temp_value2] < 0.0) break;
                            temp_value5 = temp_value5 + -1;
                            temp_value2 = temp_value2 - param_3;
                        } while (0 < temp_value5);
                    }
                    
                    while ((temp_value2 = temp_value6, temp_value6 = temp_value3, temp_value6 < param_2 &&
                           (0.0 <= temp_float5 * float_pointer[temp_value]))) {
                        temp_float4 = ABS(float_pointer[temp_value]);
                        temp_float2 = temp_float;
                        if (temp_float < temp_float4) {
                            temp_float2 = temp_float4;
                        }
                        temp_value = temp_value + param_3;
                        condition = temp_float4 <= temp_float;
                        temp_float = temp_float2;
                        temp_value3 = temp_value6 + 1;
                        if (condition) {
                            temp_value6 = temp_value2;
                        }
                    }
                    
                    if ((temp_value5 != 0) || (temp_float5 * *float_pointer < 0.0)) {
                        condition = false;
                    }
                    else {
                        condition = true;
                    }
                    
                    temp_float2 = (temp_float - 1.0) / (temp_float * temp_float);
                    temp_float = temp_float2 * 1.0000002;
                    if (0.0 < temp_float5) {
                        temp_float = temp_float2 * -1.0000002;
                    }
                    
                    if (temp_value5 < temp_value6) {
                        if (3 < temp_value6 - temp_value5) {
                            temp_long = (longlong)((temp_value5 + 2) * param_3);
                            float_pointer2 = float_pointer + temp_long;
                            temp_long2 = (temp_value5 + 1) * param_3 - temp_long;
                            temp_long3 = (temp_value5 + 3) * param_3 - temp_long;
                            temp_long = temp_value5 * param_3 - temp_long;
                            temp_uint = ((temp_value6 - temp_value5) - 4U >> 2) + 1;
                            temp_ulong = (ulonglong)temp_uint;
                            temp_value5 = temp_value5 + temp_uint * 4;
                            
                            do {
                                float_pointer2[temp_long] = (float_pointer2[temp_long] * temp_float + 1.0) * float_pointer2[temp_long];
                                float_pointer2[temp_long2] = (float_pointer2[temp_long2] * temp_float + 1.0) * float_pointer2[temp_long2];
                                *float_pointer2 = (temp_float * *float_pointer2 + 1.0) * *float_pointer2;
                                float_pointer2[temp_long3] = (float_pointer2[temp_long3] * temp_float + 1.0) * float_pointer2[temp_long3];
                                float_pointer2 = float_pointer2 + param_3 * 4;
                                temp_ulong = temp_ulong - 1;
                            } while (temp_ulong != 0);
                        }
                        
                        if (temp_value5 < temp_value6) {
                            float_pointer2 = float_pointer + temp_value5 * param_3;
                            temp_long = (longlong)(temp_value6 - temp_value5);
                            
                            do {
                                *float_pointer2 = (*float_pointer2 * temp_float + 1.0) * *float_pointer2;
                                float_pointer2 = float_pointer2 + temp_long4;
                                temp_long = temp_long + -1;
                            } while (temp_long != 0);
                        }
                    }
                    
                    if ((condition) && (1 < temp_value2)) {
                        temp_float5 = temp_float3 - *float_pointer;
                        temp_float2 = temp_float5 / (float)temp_value2;
                        
                        if (temp_value4 < temp_value2) {
                            if (3 < temp_value2 - temp_value4) {
                                temp_long = (longlong)((temp_value4 + 2) * param_3);
                                float_pointer2 = float_pointer + temp_long;
                                temp_long2 = (temp_value4 + 1) * param_3 - temp_long;
                                temp_long3 = (temp_value4 + 3) * param_3 - temp_long;
                                temp_long = temp_value4 * param_3 - temp_long;
                                temp_uint = ((temp_value2 - temp_value4) - 4U >> 2) + 1;
                                temp_ulong = (ulonglong)temp_uint;
                                temp_value4 = temp_value4 + temp_uint * 4;
                                
                                do {
                                    temp_float4 = (temp_float5 - temp_float2) + float_pointer2[temp_long];
                                    if (1.0 <= temp_float4) {
                                        temp_float4 = 1.0;
                                    }
                                    if (temp_float4 < -1.0) {
                                        temp_float4 = -1.0;
                                    }
                                    float_pointer2[temp_long] = temp_float4;
                                    temp_float5 = (temp_float5 - temp_float2) - temp_float2;
                                    temp_float4 = temp_float5 + float_pointer2[temp_long2];
                                    if (1.0 <= temp_float4) {
                                        temp_float4 = 1.0;
                                    }
                                    if (temp_float4 < -1.0) {
                                        temp_float4 = -1.0;
                                    }
                                    float_pointer2[temp_long2] = temp_float4;
                                    temp_float5 = temp_float5 - temp_float2;
                                    temp_float4 = temp_float5 + *float_pointer2;
                                    if (1.0 <= temp_float4) {
                                        temp_float4 = 1.0;
                                    }
                                    if (temp_float4 < -1.0) {
                                        temp_float4 = -1.0;
                                    }
                                    *float_pointer2 = temp_float4;
                                    temp_float5 = temp_float5 - temp_float2;
                                    temp_float4 = temp_float5 + float_pointer2[temp_long3];
                                    if (1.0 <= temp_float4) {
                                        temp_float4 = 1.0;
                                    }
                                    if (temp_float4 < -1.0) {
                                        temp_float4 = -1.0;
                                    }
                                    float_pointer2[temp_long3] = temp_float4;
                                    float_pointer2 = float_pointer2 + param_3 * 4;
                                    temp_ulong = temp_ulong - 1;
                                } while (temp_ulong != 0);
                            }
                            
                            if (temp_value4 < temp_value2) {
                                float_pointer2 = float_pointer + temp_value4 * param_3;
                                temp_long = (longlong)(temp_value2 - temp_value4);
                                
                                do {
                                    temp_float5 = temp_float5 - temp_float2;
                                    temp_float4 = temp_float5 + *float_pointer2;
                                    if (1.0 <= temp_float4) {
                                        temp_float4 = 1.0;
                                    }
                                    if (temp_float4 < -1.0) {
                                        temp_float4 = -1.0;
                                    }
                                    *float_pointer2 = temp_float4;
                                    float_pointer2 = float_pointer2 + temp_long4;
                                    temp_long = temp_long + -1;
                                } while (temp_long != 0);
                            }
                        }
                    }
                    
                    temp_value4 = temp_value6;
                } while (temp_value6 != param_2);
                
                *stack_pointer = temp_float;
                stack_pointer = stack_pointer + 1;
                stack_long = stack_long + -1;
            } while (stack_long != 0);
        }
    }
    
    return;
}

// 全局变量警告说明
// WARNING: Globals starting with '_' overlap smaller symbols at the same address