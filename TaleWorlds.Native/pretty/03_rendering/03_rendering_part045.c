#include "TaleWorlds.Native.Split.h"

// 03_rendering_part045.c - 渲染系统高级数据解析和内存管理模块
// 包含13个核心函数，涵盖渲染数据解析和处理、内存管理、参数处理和初始化、系统工具函数等高级渲染功能

// 全局变量定义
static void* g_rendering_memory_manager = NULL;    // 渲染内存管理器指针
static void* g_rendering_allocator = NULL;          // 渲染内存分配器
static int g_rendering_counter = 0;                  // 渲染计数器
static void* g_error_data_pointer = NULL;           // 错误数据指针
static void* g_system_allocator = NULL;             // 系统内存分配器

/**
 * 初始化渲染数据解析器
 * 这是一个空函数，作为系统初始化的占位符
 */
void initialize_rendering_data_parser(void)
{
    return;
}



/**
 * 解析渲染数据块并返回处理结果
 * @param data_block 数据块指针
 * @param block_size 数据块大小
 * @param config 配置参数
 * @param output_data 输出数据指针
 * @param data_count 数据计数
 * @return 处理结果状态码
 */
ulonglong parse_rendering_data_block(longlong data_block, int block_size, undefined8 config, 
                                    longlong *output_data, int *data_count)
{
    char data_type;
    short data_value;
    ulonglong result;
    longlong remaining_size;
    char *data_ptr;
    ulonglong valid_count;
    longlong iteration_count;
    ulonglong data_index;
    int processed_count;
    longlong current_offset;
    longlong max_offset;
    uint temp_value;
    ulonglong loop_counter;
    uint stack_buffer[2];
    
    result = 0;
    max_offset = (longlong)block_size;
    valid_count = result;
    
    // 第一阶段：计算有效数据数量
    if (0 < block_size) {
        data_ptr = (char *)(data_block + 0xc);
        remaining_size = max_offset;
        loop_counter = result;
        
        do {
            data_type = *data_ptr;
            data_ptr = data_ptr + 0xe;
            valid_count = (ulonglong)((int)loop_counter + 1);
            
            // 检查数据类型是否为有效类型
            if (data_type != '\x01') {
                valid_count = loop_counter;
            }
            
            remaining_size = remaining_size - 1;
            loop_counter = valid_count;
        } while (remaining_size != 0);
    }
    
    processed_count = (int)valid_count;
    *data_count = processed_count;
    
    // 第二阶段：处理有效数据
    if (processed_count != 0) {
        if (g_rendering_memory_manager != 0) {
            // 更新内存管理器计数
            *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + 1;
        }
        
        // 分配输出缓冲区
        remaining_size = allocate_rendering_memory((longlong)processed_count << 2, g_rendering_allocator);
        *output_data = remaining_size;
        
        valid_count = result;
        loop_counter = result;
        data_index = result;
        
        if (remaining_size != 0) {
            do {
                if ((int)data_index == 1) {
                    if (g_rendering_memory_manager != 0) {
                        *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + 1;
                    }
                    
                    // 分配数据存储空间
                    loop_counter = allocate_rendering_memory((longlong)(int)result << 3, g_rendering_allocator);
                    if (loop_counter == 0) {
                        // 内存分配失败，调用错误处理
                        handle_rendering_error(0, g_rendering_allocator);
                    }
                }
                
                result = 0;
                stack_buffer[0] = 0;
                remaining_size = -1;
                
                if (0 < max_offset) {
                    current_offset = data_block + 10;
                    iteration_count = max_offset;
                    
                    do {
                        data_type = *(char *)(current_offset + 2);
                        processed_count = (int)result;
                        
                        if (data_type == '\x01') {
                            // 类型1数据处理
                            if (-1 < remaining_size) {
                                *(int *)(*output_data + remaining_size * 4) = processed_count - (int)valid_count;
                            }
                            
                            remaining_size = remaining_size + 1;
                            valid_count = (ulonglong)processed_count;
                            data_value = *(short *)(current_offset + -8);
                            stack_buffer[0] = processed_count + 1;
                            result = (ulonglong)stack_buffer[0];
                            
                            if (loop_counter != 0) {
                                // 存储浮点数据
                                *(float *)(loop_counter + valid_count * 8) = (float)(int)*(short *)(current_offset + -10);
                                *(float *)(loop_counter + 4 + valid_count * 8) = (float)(int)data_value;
                            }
                        }
                        else if (data_type == '\x02') {
                            // 类型2数据处理
                            data_value = *(short *)(current_offset + -8);
                            stack_buffer[0] = processed_count + 1;
                            result = (ulonglong)stack_buffer[0];
                            
                            if (loop_counter != 0) {
                                *(float *)(loop_counter + (longlong)processed_count * 8) = (float)(int)*(short *)(current_offset + -10);
                                *(float *)(loop_counter + 4 + (longlong)processed_count * 8) = (float)(int)data_value;
                            }
                        }
                        else {
                            if (data_type == '\x03') {
                                // 类型3数据处理
                                process_rendering_data_type3(loop_counter, stack_buffer);
                            }
                            else {
                                if (data_type != '\x04') goto continue_processing;
                                // 类型4数据处理
                                process_rendering_data_type4(loop_counter, stack_buffer);
                            }
                            result = (ulonglong)stack_buffer[0];
                        }
                        
                    continue_processing:
                        current_offset = current_offset + 0xe;
                        iteration_count = iteration_count - 1;
                    } while (iteration_count != 0);
                }
                
                temp_value = (int)data_index + 1;
                *(int *)(*output_data + remaining_size * 4) = (int)result - (int)valid_count;
                data_index = (ulonglong)temp_value;
                
                if (1 < (int)temp_value) {
                    return loop_counter;
                }
            } while( true );
        }
        
        *data_count = 0;
    }
    
    return 0;
}



/**
 * 处理渲染数据块的内部函数
 * @return 处理结果指针
 */
longlong process_rendering_data_internal(void)
{
    char data_type;
    short data_value;
    longlong block_size;
    int data_offset;
    longlong data_count;
    longlong data_position;
    longlong buffer_ptr;
    longlong config_ptr;
    longlong result_ptr;
    longlong *output_ptr;
    int output_count;
    int stack_value;
    
    do {
        if (output_count == 1) {
            if (g_rendering_memory_manager != 0) {
                *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + 1;
            }
            
            // 分配处理缓冲区
            config_ptr = allocate_rendering_memory((longlong)data_offset << 3, g_rendering_allocator);
            if (config_ptr == 0) {
                // 内存分配失败，调用错误处理
                handle_rendering_error(0, g_rendering_allocator);
            }
        }
        
        data_offset = 0;
        stack_value = 0;
        block_size = -1;
        
        if (0 < data_count) {
            buffer_ptr = data_position + 10;
            result_ptr = data_count;
            
            do {
                data_type = *(char *)(buffer_ptr + 2);
                
                if (data_type == '\x01') {
                    // 类型1数据处理
                    if (-1 < block_size) {
                        *(int *)(*output_ptr + block_size * 4) = data_offset - (int)config_ptr;
                    }
                    
                    block_size = block_size + 1;
                    config_ptr = (longlong)data_offset;
                    data_value = *(short *)(buffer_ptr + -8);
                    stack_value = data_offset + 1;
                    data_offset = stack_value;
                    
                    if (buffer_ptr != 0) {
                        *(float *)(buffer_ptr + config_ptr * 8) = (float)(int)*(short *)(buffer_ptr + -10);
                        *(float *)(buffer_ptr + 4 + config_ptr * 8) = (float)(int)data_value;
                    }
                }
                else if (data_type == '\x02') {
                    // 类型2数据处理
                    data_value = *(short *)(buffer_ptr + -8);
                    buffer_ptr = (longlong)data_offset;
                    stack_value = data_offset + 1;
                    data_offset = stack_value;
                    
                    if (buffer_ptr != 0) {
                        *(float *)(buffer_ptr + buffer_ptr * 8) = (float)(int)*(short *)(buffer_ptr + -10);
                        *(float *)(buffer_ptr + 4 + buffer_ptr * 8) = (float)(int)data_value;
                    }
                }
                else if (data_type == '\x03') {
                    // 类型3数据处理
                    process_rendering_data_type3(buffer_ptr, &stack_value);
                    data_offset = stack_value;
                }
                else if (data_type == '\x04') {
                    // 类型4数据处理
                    process_rendering_data_type4(buffer_ptr, &stack_value);
                    data_offset = stack_value;
                }
                
                buffer_ptr = buffer_ptr + 0xe;
                result_ptr = result_ptr - 1;
            } while (result_ptr != 0);
        }
        
        output_count = output_count + 1;
        *(int *)(*output_ptr + block_size * 4) = data_offset - (int)config_ptr;
    } while (output_count < 2);
    
    return buffer_ptr;
}





/**
 * 清理渲染数据解析器
 * 这是一个空函数，作为系统清理的占位符
 */
void cleanup_rendering_data_parser(void)
{
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统错误处理函数
 * 处理渲染系统中的严重错误，不会返回
 * 简化实现：直接调用系统错误处理函数
 */
void handle_rendering_error(void)
{
    // 调用系统错误处理函数，处理严重错误
    // 参数：错误码0，错误数据指针
    // 注意：此函数不会返回
    system_error_handler(0, g_error_data_pointer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统高级参数处理函数
 * 处理渲染系统的复杂参数配置和内存管理
 * @param render_context 渲染上下文指针
 * @param config_param 配置参数
 * @param width_param 宽度参数
 * @param height_param 高度参数
 * @param format_param 格式参数
 * @param scale_x_param X轴缩放参数
 * @param scale_y_param Y轴缩放参数
 * @param reserved_param1 保留参数1
 * @param reserved_param2 保留参数2
 * @param flags_param 标志参数
 * 简化实现：处理参数验证和内存分配
 */
void process_rendering_parameters(longlong render_context, undefined8 config_param, int width_param, int height_param, undefined4 format_param,
                                 float scale_x_param, float scale_y_param, undefined8 reserved_param1, undefined8 reserved_param2,
                                 undefined4 flags_param)
{
    int *memory_ref;
    float min_scale;
    byte data_byte;
    undefined8 *temp_ptr1;
    undefined8 *temp_ptr2;
    float scale_x;
    float scale_y;
    undefined4 flags;
    uint render_flags;
    uint data_type;
    int texture_id;
    longlong data_ptr;
    longlong offset;
    ulonglong valid_count;
    int texture_height;
    undefined1 scale_vector1 [16];
    undefined1 scale_vector2 [16];
    undefined8 *buffer_ptr;
    int width;
    int height;
    undefined4 format;
    undefined8 config;
    undefined8 buffer1;
    undefined8 buffer2;
    undefined8 buffer3;
    undefined8 buffer4;
    undefined8 buffer5;
    undefined8 buffer6;
    undefined8 buffer7;
    undefined8 buffer8;
    undefined4 temp_count;
    undefined8 temp_buffer;
    undefined1 temp_scale [16];
    
    flags = flags_param;
    render_flags = get_rendering_flags(render_context, flags_param, &buffer_ptr);
    scale_y = scale_y_param;
    scale_x = scale_x_param;
    valid_count = (ulonglong)render_flags;
    
    // 检查渲染上下文状态
    if (*(int *)(render_context + 0x4c) == 0) {
        // 标准渲染路径
        texture_id = get_texture_index(render_context, flags);
        if (texture_id < 0) goto error_handler;
        data_ptr = *(longlong *)(render_context + 8);
        offset = (longlong)texture_id;
        data_byte = *(byte *)(data_ptr + 3 + offset);
        data_type = (uint)data_byte;
        texture_height = (int)(short)((ushort)*(byte *)(data_ptr + 8 + offset) * 0x100 +
                                    (ushort)*(byte *)(data_ptr + 9 + offset));
        texture_id = (int)(short)((ushort)*(byte *)(data_ptr + 2 + offset) * 0x100 + (ushort)data_byte);
    }
    else {
        // 高级渲染路径
        buffer1 = 1;
        buffer2 = 0;
        buffer3 = 0;
        buffer4 = 0;
        buffer5 = 0;
        buffer6 = 0;
        buffer7 = 0;
        data_type = get_advanced_rendering_data(render_context, flags, &buffer1);
        valid_count = (ulonglong)render_flags;
        texture_height = 0;
        if (data_type != 0) {
            texture_height = buffer7._4_4_;
        }
        texture_id = 0;
        if (data_type != 0) {
            texture_id = (int)buffer6;
        }
    }
    
    // 计算缩放向量
    scale_vector1._0_4_ = -((float)texture_height * scale_y);
    temp_scale._4_4_ = 0x80000000;
    temp_scale._0_4_ = scale_vector1._0_4_;
    if (((int)scale_vector1._0_4_ != -0x80000000) && ((float)(int)scale_vector1._0_4_ != scale_vector1._0_4_)) {
        temp_scale._8_4_ = 0x80000000;
        temp_scale._12_4_ = 0x80000000;
        scale_vector1._8_8_ = temp_scale._8_8_;
        scale_vector1._4_4_ = scale_vector1._0_4_;
        data_type = movmskps(data_type, scale_vector1);
        data_type = data_type & 1;
    }
    
    scale_vector2._0_4_ = (float)texture_id * scale_x;
    if (((int)scale_vector2._0_4_ != -0x80000000) && ((float)(int)scale_vector2._0_4_ != scale_vector2._0_4_)) {
        scale_vector2._4_4_ = scale_vector2._0_4_;
        scale_vector2._8_8_ = 0;
        movmskps(data_type, scale_vector2);
    }

error_handler:
    temp_ptr1 = buffer_ptr;
    format = format_param;
    width = width_param;
    height = height_param;
    config = config_param;
    
    // 处理有效的尺寸参数
    if ((width_param != 0) && (height_param != 0)) {
        format_param = 0;
        min_scale = scale_x;
        if (scale_y <= scale_x) {
            min_scale = scale_y;
        }
        
        buffer_ptr = (undefined8 *)0x0;
        data_ptr = parse_rendering_data_block(temp_ptr1, valid_count & 0xffffffff, 0.35 / min_scale, &buffer_ptr, &format_param);
        temp_ptr2 = buffer_ptr;
        
        if (data_ptr != 0) {
            process_rendering_data_internal(&width, data_ptr, buffer_ptr, format_param, scale_x, scale_y);
            if ((temp_ptr2 != (undefined8 *)0x0) && (g_rendering_memory_manager != 0)) {
                *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + -1;
            }
            
            // 清理内存
            cleanup_rendering_memory(temp_ptr2, g_system_allocator);
        }
    }
    
    // 清理临时缓冲区
    if ((temp_ptr1 != (undefined8 *)0x0) && (g_rendering_memory_manager != 0)) {
        *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + -1;
    }
    
    if (temp_ptr1 != (undefined8 *)0x0) {
        // 内存清理逻辑
        valid_count = (ulonglong)temp_ptr1 & 0xffffffffffc00000;
        if (valid_count != 0) {
            data_ptr = valid_count + 0x80 + ((longlong)temp_ptr1 - valid_count >> 0x10) * 0x50;
            data_ptr = data_ptr - (ulonglong)*(uint *)(data_ptr + 4);
            
            if ((*(void ***)(valid_count + 0x70) == &ExceptionList) && (*(char *)(data_ptr + 0xe) == '\0')) {
                *temp_ptr1 = *(undefined8 *)(data_ptr + 0x20);
                *(undefined8 **)(data_ptr + 0x20) = temp_ptr1;
                memory_ref = (int *)(data_ptr + 0x18);
                *memory_ref = *memory_ref + -1;
                
                if (*memory_ref == 0) {
                    temp_buffer = 0x18064e96c;
                    system_cleanup_function();
                    return;
                }
            }
            else {
                temp_buffer = 0x18064e984;
                system_memory_cleanup(valid_count, (*(void ***)(valid_count + 0x70) == &ExceptionList));
            }
        }
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统寄存器保存和恢复函数
 * 保存和恢复CPU寄存器状态，用于渲染过程中的上下文切换
 * @param render_context 渲染上下文指针
 * @param config_param 配置参数
 * @param width_param 宽度参数
 * @param height_param 高度参数
 * 简化实现：处理寄存器保存和恢复逻辑
 */
void save_restore_rendering_registers(longlong render_context, undefined8 config_param, int width_param, int height_param)
{
    int *memory_ref;
    float min_scale;
    byte data_byte;
    undefined8 *temp_ptr1;
    undefined8 *temp_ptr2;
    float scale_x;
    float scale_y;
    undefined4 flags;
    uint render_flags;
    int texture_id;
    longlong context_ptr;
    longlong data_ptr;
    longlong offset;
    ulonglong valid_count;
    int texture_height;
    undefined8 reg_rbx;
    undefined8 reg_rbp;
    undefined8 reg_rsi;
    undefined8 reg_r12;
    undefined8 reg_r13;
    undefined8 reg_r14;
    undefined8 reg_r15;
    undefined1 scale_vector1 [16];
    undefined1 scale_vector2 [16];
    undefined4 xmm6_da;
    undefined4 xmm6_db;
    undefined4 xmm6_dc;
    undefined4 xmm6_dd;
    undefined4 xmm7_da;
    undefined4 xmm7_db;
    undefined4 xmm7_dc;
    undefined4 xmm7_dd;
    int stack_width;
    int stack_height;
    undefined4 stack_format;
    undefined8 stack_config;
    undefined8 stack_buffer1;
    undefined8 stack_buffer2;
    undefined8 stack_buffer3;
    undefined8 stack_buffer4;
    int stack_counter;
    undefined8 stack_buffer5;
    undefined8 stack_buffer6;
    undefined8 stack_buffer7;
    undefined8 stack_buffer8;
    undefined8 stack_buffer9;
    undefined8 *data_buffer;
    uint data_count;
    undefined4 data_format;
    float scale_x_value;
    float scale_y_value;
    undefined4 data_flags;
    undefined1 temp_scale [16];
    
    data_flags = data_flags;
    
    // 保存寄存器状态到栈上
    *(undefined8 *)(context_ptr + 0x10) = reg_rbx;
    *(undefined8 *)(context_ptr + -0x10) = reg_rbp;
    *(undefined8 *)(context_ptr + -0x18) = reg_rsi;
    *(undefined8 *)(context_ptr + -0x20) = reg_r12;
    *(undefined8 *)(context_ptr + -0x28) = reg_r13;
    *(undefined8 *)(context_ptr + -0x30) = reg_r14;
    *(undefined8 *)(context_ptr + -0x38) = reg_r15;
    *(undefined4 *)(context_ptr + -0x48) = xmm6_da;
    *(undefined4 *)(context_ptr + -0x44) = xmm6_db;
    *(undefined4 *)(context_ptr + -0x40) = xmm6_dc;
    *(undefined4 *)(context_ptr + -0x3c) = xmm6_dd;
    *(undefined4 *)(context_ptr + -0x58) = xmm7_da;
    *(undefined4 *)(context_ptr + -0x54) = xmm7_db;
    *(undefined4 *)(context_ptr + -0x50) = xmm7_dc;
    *(undefined4 *)(context_ptr + -0x4c) = xmm7_dd;
    
    data_count = get_rendering_flags(render_context, data_flags, context_ptr + 8);
    scale_y_value = scale_y_value;
    scale_x_value = scale_x_value;
    valid_count = (ulonglong)data_count;
    
    // 检查渲染上下文状态
    if (*(int *)(render_context + 0x4c) == 0) {
        // 标准渲染路径
        texture_id = get_texture_index(render_context, data_flags);
        if (texture_id < 0) goto error_handler;
        data_ptr = *(longlong *)(render_context + 8);
        offset = (longlong)texture_id;
        data_byte = *(byte *)(data_ptr + 3 + offset);
        render_flags = (uint)data_byte;
        texture_height = (int)(short)((ushort)*(byte *)(data_ptr + 8 + offset) * 0x100 +
                                     (ushort)*(byte *)(data_ptr + 9 + offset));
        texture_id = (int)(short)((ushort)*(byte *)(data_ptr + 2 + offset) * 0x100 + (ushort)data_byte);
    }
    else {
        // 高级渲染路径
        stack_buffer2 = 1;
        stack_buffer4 = 0;
        stack_buffer5 = 0;
        stack_buffer3 = 0;
        stack_buffer6 = 0;
        stack_counter = 0;
        stack_buffer7 = 0;
        render_flags = get_advanced_rendering_data(render_context, data_flags, &stack_buffer2);
        valid_count = (ulonglong)data_count;
        texture_height = 0;
        if (render_flags != 0) {
            texture_height = stack_buffer7._4_4_;
        }
        texture_id = 0;
        if (render_flags != 0) {
            texture_id = stack_counter;
        }
    }
    
    // 计算缩放向量
    scale_vector1._0_4_ = -((float)texture_height * scale_y_value);
    temp_scale._4_4_ = 0x80000000;
    temp_scale._0_4_ = scale_vector1._0_4_;
    if (((int)scale_vector1._0_4_ != -0x80000000) && ((float)(int)scale_vector1._0_4_ != scale_vector1._0_4_)) {
        temp_scale._8_4_ = 0x80000000;
        temp_scale._12_4_ = 0x80000000;
        scale_vector1._8_8_ = temp_scale._8_8_;
        scale_vector1._4_4_ = scale_vector1._0_4_;
        render_flags = movmskps(render_flags, scale_vector1);
        render_flags = render_flags & 1;
    }
    
    scale_vector2._0_4_ = (float)texture_id * scale_x_value;
    if (((int)scale_vector2._0_4_ != -0x80000000) && ((float)(int)scale_vector2._0_4_ != scale_vector2._0_4_)) {
        scale_vector2._4_4_ = scale_vector2._0_4_;
        scale_vector2._8_8_ = 0;
        movmskps(render_flags, scale_vector2);
    }

error_handler:
    temp_ptr1 = data_buffer;
    stack_format = data_format;
    stack_width = width_param;
    stack_height = height_param;
    stack_config = config_param;
    
    // 处理有效的尺寸参数
    if ((width_param != 0) && (height_param != 0)) {
        data_format = 0;
        min_scale = scale_x_value;
        if (scale_y_value <= scale_x_value) {
            min_scale = scale_y_value;
        }
        
        data_buffer = (undefined8 *)0x0;
        data_ptr = parse_rendering_data_block(temp_ptr1, valid_count & 0xffffffff, 0.35 / min_scale, &data_buffer, &data_format);
        temp_ptr2 = data_buffer;
        
        if (data_ptr != 0) {
            process_rendering_data_internal(&stack_width, data_ptr, data_buffer, data_format, scale_x_value);
            if ((temp_ptr2 != (undefined8 *)0x0) && (g_rendering_memory_manager != 0)) {
                *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + -1;
            }
            
            // 清理内存
            cleanup_rendering_memory(temp_ptr2, g_system_allocator);
        }
    }
    
    // 清理临时缓冲区
    if ((temp_ptr1 != (undefined8 *)0x0) && (g_rendering_memory_manager != 0)) {
        *(int *)(g_rendering_memory_manager + 0x3a8) = *(int *)(g_rendering_memory_manager + 0x3a8) + -1;
    }
    
    if (temp_ptr1 != (undefined8 *)0x0) {
        // 内存清理逻辑
        valid_count = (ulonglong)temp_ptr1 & 0xffffffffffc00000;
        if (valid_count != 0) {
            data_ptr = valid_count + 0x80 + ((longlong)temp_ptr1 - valid_count >> 0x10) * 0x50;
            data_ptr = data_ptr - (ulonglong)*(uint *)(data_ptr + 4);
            
            if ((*(void ***)(valid_count + 0x70) == &ExceptionList) && (*(char *)(data_ptr + 0xe) == '\0')) {
                *temp_ptr1 = *(undefined8 *)(data_ptr + 0x20);
                *(undefined8 **)(data_ptr + 0x20) = temp_ptr1;
                memory_ref = (int *)(data_ptr + 0x18);
                *memory_ref = *memory_ref + -1;
                
                if (*memory_ref == 0) {
                    stack_buffer9 = 0x18064e96c;
                    system_cleanup_function();
                    return;
                }
            }
            else {
                stack_buffer9 = 0x18064e984;
                system_memory_cleanup(valid_count, (*(void ***)(valid_count + 0x70) == &ExceptionList));
            }
        }
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290091(undefined8 param_1,undefined8 param_2,int param_3,int param_4)
void FUN_180290091(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  longlong in_RAX;
  longlong lVar10;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  int in_stack_00000060;
  int iStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int iStack0000000000000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_00000110;
  uint in_stack_00000120;
  undefined4 in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  undefined1 auVar15 [16];
  
  *(undefined8 *)(in_RAX + -0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  in_stack_00000120 = FUN_18028e460(param_1,unaff_ESI,in_RAX + 8);
  fVar7 = in_stack_00000140;
  fVar6 = in_stack_00000138;
  uVar12 = (ulonglong)in_stack_00000120;
  if (*(int *)(unaff_RDI + 0x4c) == 0) {
    iVar9 = func_0x00018028c210(extraout_XMM0_Qa,unaff_ESI);
    if (iVar9 < 0) goto LAB_18029020c;
    lVar10 = *(longlong *)(unaff_RDI + 8);
    lVar11 = (longlong)iVar9;
    bVar3 = *(byte *)(lVar10 + 3 + lVar11);
    uVar8 = (uint)bVar3;
    iVar13 = (int)(short)((ushort)*(byte *)(lVar10 + 8 + lVar11) * 0x100 +
                         (ushort)*(byte *)(lVar10 + 9 + lVar11));
    iVar9 = (int)(short)((ushort)*(byte *)(lVar10 + 2 + lVar11) * 0x100 + (ushort)bVar3);
  }
  else {
    in_stack_00000078 = 1;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    _iStack0000000000000090 = 0;
    in_stack_00000098 = 0;
    uVar8 = FUN_18028d680();
    uVar12 = (ulonglong)in_stack_00000120;
    iVar13 = 0;
    if (uVar8 != 0) {
      iVar13 = in_stack_00000098._4_4_;
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      iVar9 = iStack0000000000000090;
    }
  }
  auVar14._0_4_ = -((float)iVar13 * fVar7);
  auVar15._4_4_ = 0x80000000;
  auVar15._0_4_ = auVar14._0_4_;
  if (((int)auVar14._0_4_ != -0x80000000) && ((float)(int)auVar14._0_4_ != auVar14._0_4_)) {
    auVar15._8_4_ = 0x80000000;
    auVar15._12_4_ = 0x80000000;
    auVar14._8_8_ = auVar15._8_8_;
    auVar14._4_4_ = auVar14._0_4_;
    uVar8 = movmskps(uVar8,auVar14);
    uVar8 = uVar8 & 1;
  }
  auVar16._0_4_ = (float)iVar9 * fVar6;
  if (((int)auVar16._0_4_ != -0x80000000) && ((float)(int)auVar16._0_4_ != auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_8_ = 0;
    movmskps(uVar8,auVar16);
  }
LAB_18029020c:
  puVar4 = in_stack_00000110;
  in_stack_00000068 = in_stack_00000130;
  in_stack_00000060 = param_3;
  iStack0000000000000064 = param_4;
  in_stack_00000070 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    in_stack_00000130 = 0;
    fVar2 = fVar6;
    if (fVar7 <= fVar6) {
      fVar2 = fVar7;
    }
    in_stack_00000110 = (undefined8 *)0x0;
    lVar10 = FUN_18028fca0(puVar4,uVar12 & 0xffffffff,0.35 / fVar2,&stack0x00000110,&stack0x00000130
                          );
    puVar5 = in_stack_00000110;
    if (lVar10 != 0) {
      FUN_18028f350(&stack0x00000060,lVar10,in_stack_00000110,in_stack_00000130,fVar6);
      if ((puVar5 != (undefined8 *)0x0) && (_DAT_180c8a9b0 != 0)) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(puVar5,_DAT_180c8a9a8);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && (_DAT_180c8a9b0 != 0)) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    in_stack_000000f0 = 0xfffffffffffffffe;
    uVar12 = (ulonglong)puVar4 & 0xffffffffffc00000;
    if (uVar12 != 0) {
      lVar10 = uVar12 + 0x80 + ((longlong)puVar4 - uVar12 >> 0x10) * 0x50;
      lVar10 = lVar10 - (ulonglong)*(uint *)(lVar10 + 4);
      if ((*(void ***)(uVar12 + 0x70) == &ExceptionList) && (*(char *)(lVar10 + 0xe) == '\0')) {
        *puVar4 = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 **)(lVar10 + 0x20) = puVar4;
        piVar1 = (int *)(lVar10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          in_stack_000000c8 = 0x18064e96c;
          FUN_18064d630();
          return;
        }
      }
      else {
        in_stack_000000c8 = 0x18064e984;
        func_0x00018064e870(uVar12,CONCAT71(0xff000000,*(void ***)(uVar12 + 0x70) == &ExceptionList)
                           );
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290247(void)
void FUN_180290247(void)

{
  int *piVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  ulonglong uVar3;
  int unaff_R15D;
  undefined4 unaff_XMM6_Da;
  undefined4 uVar4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_00000130;
  
  if (unaff_R15D != 0) {
    uVar4 = (undefined4)((ulonglong)&stack0x00000130 >> 0x20);
    in_stack_00000130 = (undefined4)unaff_RBX;
    lVar2 = FUN_18028fca0();
    if (lVar2 != 0) {
      FUN_18028f350(&stack0x00000060,lVar2,unaff_RBX,in_stack_00000130,CONCAT44(uVar4,unaff_XMM6_Da)
                   );
      if ((unaff_RBX != 0) && (_DAT_180c8a9b0 != 0)) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(unaff_RBX,_DAT_180c8a9a8);
    }
  }
  if ((unaff_RDI != (undefined8 *)0x0) && (_DAT_180c8a9b0 != 0)) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
  if (unaff_RDI == (undefined8 *)0x0) {
    return;
  }
  in_stack_000000f0 = 0xfffffffffffffffe;
  uVar3 = (ulonglong)unaff_RDI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)unaff_RDI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RDI = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 **)(lVar2 + 0x20) = unaff_RDI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        in_stack_000000c8 = 0x18064e96c;
        FUN_18064d630();
        return;
      }
    }
    else {
      in_stack_000000c8 = 0x18064e984;
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290353(void)
void FUN_180290353(void)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  ulonglong uVar3;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000f0;
  
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
  if (unaff_RDI == (undefined8 *)0x0) {
    return;
  }
  uStack00000000000000f0 = 0xfffffffffffffffe;
  uVar3 = (ulonglong)unaff_RDI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)unaff_RDI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RDI = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 **)(lVar2 + 0x20) = unaff_RDI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uStack00000000000000c8 = 0x18064e96c;
        FUN_18064d630();
        return;
      }
    }
    else {
      uStack00000000000000c8 = 0x18064e984;
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290380(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
void FUN_180290380(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  if (0 < param_3) {
    uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
    uStack_38 = 0;
                    // WARNING: Subroutine does not return
    memset(&uStack_38,0,param_5);
  }
  return;
}





// 函数: void FUN_1802903aa(void)
void FUN_1802903aa(void)

{
  undefined8 uStackX_20;
  
  uStackX_20 = 0;
                    // WARNING: Subroutine does not return
  memset(&uStackX_20,0);
}





// 函数: void FUN_180290628(void)
void FUN_180290628(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290630(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
void FUN_180290630(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  if (0 < param_2) {
    uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
    uStack_38 = 0;
                    // WARNING: Subroutine does not return
    memset(&uStack_38,0,param_5);
  }
  return;
}





// 函数: void FUN_18029065d(void)
void FUN_18029065d(void)

{
  undefined8 uStackX_20;
  
  uStackX_20 = 0;
                    // WARNING: Subroutine does not return
  memset(&uStackX_20,0);
}





