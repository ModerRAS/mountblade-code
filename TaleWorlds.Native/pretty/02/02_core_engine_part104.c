#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part104.c - 字符串处理和文件操作函数集

/**
 * @brief 打开文件并写入字符串数据
 * @param file_path 文件路径
 * @param mode 文件打开模式
 * @param content1 第一个字符串内容
 * @param content2 第二个字符串内容
 * @param flags 附加标志
 */
void open_and_write_string_data(undefined8 file_path, undefined8 mode, undefined8 content1, undefined8 content2, undefined8 flags)
{
    longlong allocated_buffer;
    int content1_length;
    int content2_length;
    longlong buffer_size;
    int total_length;
    
    // 计算第一个字符串的长度
    content1_length = calculate_string_length(content1, 0);
    content1_length = content1_length + 1;
    
    // 计算第二个字符串的长度
    content2_length = calculate_string_length(content2, 0);
    total_length = content2_length + 1 + content1_length;
    
    buffer_size = 0;
    if (0 < total_length) {
        // 确保最小缓冲区大小为8字节
        if (total_length < 8) {
            total_length = 8;
        }
        buffer_size = 0;
        if (0 < total_length) {
            // 更新内存分配计数器
            if (memory_manager_instance != 0) {
                *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) = 
                    *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) + 1;
            }
            // 分配缓冲区内存
            buffer_size = allocate_memory((longlong)total_length * 2, memory_allocator_context);
        }
    }
    
    // 将第一个字符串复制到缓冲区
    copy_string_to_buffer(buffer_size, content1_length, content1, flags, 0);
    
    // 计算第二个字符串的写入位置
    allocated_buffer = buffer_size + (longlong)content1_length * 2;
    
    // 将第二个字符串复制到缓冲区
    copy_string_to_buffer(allocated_buffer, content2_length + 1, content2, flags, 0);
    
    // 打开文件并写入数据
    _wfopen(buffer_size, allocated_buffer);
    
    // 清理分配的内存
    if (buffer_size != 0) {
        if (memory_manager_instance != 0) {
            *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) = 
                *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) + -1;
        }
        // 释放内存
        free_memory(buffer_size, memory_allocator_context);
    }
    return;
}

/**
 * @brief 读取文件内容到内存缓冲区
 * @param file_path 文件路径
 * @param mode 文件打开模式
 * @param file_size_ptr 输出文件大小指针
 * @return 成功返回分配的缓冲区指针，失败返回0
 */
longlong read_file_to_buffer(undefined8 file_path, undefined8 mode, longlong *file_size_ptr)
{
    int file_operation_result;
    longlong file_handle;
    longlong buffer_size;
    longlong bytes_read;
    longlong allocated_buffer;
    
    if (file_size_ptr != (longlong *)0x0) {
        *file_size_ptr = 0;
    }
    
    // 打开文件
    file_handle = open_and_write_string_data(file_path, &default_file_mode);
    if (file_handle == 0) {
        return 0;
    }
    
    // 移动到文件末尾获取文件大小
    file_operation_result = fseek(file_handle, 0, 2);
    if (file_operation_result == 0) {
        file_operation_result = ftell(file_handle);
        buffer_size = (longlong)file_operation_result;
        
        // 移回文件开头
        if ((file_operation_result != -1) && 
            (file_operation_result = fseek(file_handle, 0, 0), file_operation_result == 0)) {
            
            // 更新内存分配计数器
            if (memory_manager_instance != 0) {
                *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) = 
                    *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) + 1;
            }
            
            // 分配缓冲区
            allocated_buffer = allocate_memory(buffer_size, memory_allocator_context);
            if (allocated_buffer != 0) {
                // 读取文件内容
                bytes_read = fread(allocated_buffer, 1, buffer_size, file_handle);
                
                // 检查是否完全读取
                if (bytes_read != buffer_size) {
                    fclose();
                    if (memory_manager_instance != 0) {
                        *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) = 
                            *(int *)(memory_manager_instance + MEMORY_COUNTER_OFFSET) + -1;
                    }
                    // 释放内存
                    free_memory(allocated_buffer, memory_allocator_context);
                }
                
                fclose(file_handle);
                
                // 返回结果
                if (file_size_ptr == (longlong *)0x0) {
                    return allocated_buffer;
                }
                *file_size_ptr = buffer_size;
                return allocated_buffer;
            }
        }
    }
    
    fclose(file_handle);
    return 0;
}

/**
 * @brief 解析UTF-8字符到Unicode码点
 * @param output_char_ptr 输出字符指针
 * @param input_string 输入字符串
 * @param max_length 最大长度限制
 * @return 返回消耗的字节数
 */
undefined8 parse_utf8_to_unicode(uint *output_char_ptr, byte *input_string, longlong max_length)
{
    byte first_byte;
    uint unicode_char;
    
    first_byte = *input_string;
    
    // 处理ASCII字符 (0-127)
    if (-1 < (char)first_byte) {
        *output_char_ptr = (uint)first_byte;
        return 1;
    }
    
    // 处理2字节UTF-8序列 (110xxxxx 10xxxxxx)
    if ((first_byte & 0xe0) == 0xc0) {
        *output_char_ptr = 0xfffd; // 默认无效字符
        if ((max_length != 0) && (max_length - (longlong)input_string < 2)) {
            return 1;
        }
        if ((0xc1 < first_byte) && ((input_string[1] & 0xc0) == 0x80)) {
            *output_char_ptr = (first_byte & 0x1f) * 0x40 + (input_string[1] & 0x3f);
        }
        return 2;
    }
    
    // 处理3字节UTF-8序列 (1110xxxx 10xxxxxx 10xxxxxx)
    if ((first_byte & 0xf0) == 0xe0) {
        *output_char_ptr = 0xfffd; // 默认无效字符
        if ((max_length != 0) && (max_length - (longlong)input_string < 3)) {
            return 1;
        }
        
        // 检查过长的编码
        if (first_byte == 0xe0) {
            if (0x1f < (byte)(input_string[1] + 0x60)) {
                return 3;
            }
        }
        else if ((first_byte == 0xed) && (0x9f < input_string[1])) {
            return 3;
        }
        
        // 验证后续字节格式
        if (((input_string[1] & 0xc0) == 0x80) && ((input_string[2] & 0xc0) == 0x80)) {
            *output_char_ptr = (first_byte & 0xf) * 0x1000 + 
                              (input_string[1] & 0x3f) * 0x40 + 
                              (input_string[2] & 0x3f);
        }
        return 3;
    }
    
    // 处理4字节UTF-8序列 (11110xxx 10xxxxxx 10xxxxxx 10xxxxxx)
    if ((first_byte & 0xf8) != 0xf0) {
        *output_char_ptr = 0x3f; // 问号字符
        return 1;
    }
    
    *output_char_ptr = 0xfffd; // 默认无效字符
    if ((max_length != 0) && (max_length - (longlong)input_string < 4)) {
        return 1;
    }
    
    if (first_byte < 0xf5) {
        // 检查过长的编码
        if (first_byte == 0xf0) {
            if (0x2f < (byte)(input_string[1] + 0x70)) {
                return 4;
            }
        }
        else if ((first_byte == 0xf4) && (0x8f < input_string[1])) {
            return 4;
        }
        
        // 验证后续字节格式并计算Unicode值
        if (((((input_string[1] & 0xc0) == 0x80) && ((input_string[2] & 0xc0) == 0x80)) &&
            ((input_string[3] & 0xc0) == 0x80)) &&
           (unicode_char = (first_byte & 7) * 0x40000 + 
                          (input_string[2] & 0x3f) * 0x40 + 
                          (input_string[1] & 0x3f) * 0x1000 + 
                          (input_string[3] & 0x3f), 
           (unicode_char & 0xfffff800) != 0xd800)) { // 排除代理对区域
            *output_char_ptr = unicode_char;
        }
    }
    return 4;
}

/**
 * @brief 处理4字节UTF-8序列的辅助函数
 * @param context 上下文指针
 * @param string_ptr 字符串指针
 * @param param3 第三个参数
 * @param first_byte 首字节
 * @return 返回消耗的字节数
 */
undefined8 process_utf8_4byte_sequence(undefined8 context, longlong string_ptr, undefined8 param3, byte first_byte)
{
    uint unicode_char;
    uint *output_ptr;
    
    if (first_byte < 0xf5) {
        // 检查编码范围限制
        if (first_byte == 0xf0) {
            if (0x2f < (byte)(*(char *)(string_ptr + 1) + 0x70U)) {
                return 4;
            }
        }
        else if ((first_byte == 0xf4) && (0x8f < *(byte *)(string_ptr + 1))) {
            return 4;
        }
        
        // 验证后续字节格式
        if (((((*(byte *)(string_ptr + 1) & 0xc0) == 0x80) && 
            ((*(byte *)(string_ptr + 2) & 0xc0) == 0x80)) &&
            ((*(byte *)(string_ptr + 3) & 0xc0) == 0x80)) &&
           (unicode_char = (first_byte & 7) * 0x40000 + 
                          (*(byte *)(string_ptr + 2) & 0x3f) * 0x40 + 
                          (*(byte *)(string_ptr + 1) & 0x3f) * 0x1000 + 
                          (*(byte *)(string_ptr + 3) & 0x3f), 
           (unicode_char & 0xfffff800) != 0xd800)) {
            *output_ptr = unicode_char;
        }
    }
    return 4;
}

/**
 * @brief 处理特定UTF-8序列的辅助函数
 * @param context 上下文指针
 * @param string_ptr 字符串指针
 * @param param3 第三个参数
 * @param first_byte 首字节
 * @return 返回消耗的字节数
 */
undefined8 process_utf8_special_sequence(undefined8 context, longlong string_ptr, undefined8 param3, byte first_byte)
{
    uint unicode_char;
    uint *output_ptr;
    
    if ((((first_byte != 0xf4) || (*(byte *)(string_ptr + 1) < 0x90)) &&
        ((*(byte *)(string_ptr + 1) & 0xc0) == 0x80)) &&
        ((((*(byte *)(string_ptr + 2) & 0xc0) == 0x80 && 
           ((*(byte *)(string_ptr + 3) & 0xc0) == 0x80)) &&
          (unicode_char = (first_byte & 7) * 0x40000 + 
                         (*(byte *)(string_ptr + 2) & 0x3f) * 0x40 + 
                         (*(byte *)(string_ptr + 1) & 0x3f) * 0x1000 + 
                         (*(byte *)(string_ptr + 3) & 0x3f), 
          (unicode_char & 0xfffff800) != 0xd800)))) {
        *output_ptr = unicode_char;
    }
    return 4;
}

/**
 * @brief 设置默认字符
 * @param output_ptr 输出指针
 * @return 返回1
 */
undefined8 set_default_character(undefined4 *output_ptr)
{
    *output_ptr = 0x3f; // 问号字符
    return 1;
}

/**
 * @brief 将UTF-8字符串转换为宽字符字符串
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @param input_string 输入字符串
 * @param param4 第四个参数
 * @param param5 第五个参数
 * @param end_ptr_ptr 结束指针指针
 * @return 返回转换的字符数
 */
ulonglong convert_utf8_to_wstring(undefined2 *output_buffer, int buffer_size, byte *input_string, 
                                 undefined8 param4, undefined8 param5, undefined8 *end_ptr_ptr)
{
    byte current_byte;
    int bytes_consumed;
    uint unicode_char;
    uint temp_unicode;
    undefined2 *output_pos;
    
    output_pos = output_buffer;
    if (output_buffer < output_buffer + (longlong)buffer_size + -1) {
        do {
            current_byte = *input_string;
            if (current_byte == 0) break;
            
            // 处理多字节UTF-8字符
            if ((char)current_byte < '\0') {
                if ((current_byte & 0xe0) == 0xc0) {
                    // 2字节序列
                    unicode_char = 0xfffd;
                    if (current_byte < 0xc2) {
                        bytes_consumed = 2;
                    }
                    else if ((input_string[1] & 0xc0) == 0x80) {
                        bytes_consumed = 2;
                        unicode_char = (current_byte & 0x1f) * 0x40 + (input_string[1] & 0x3f);
                    }
                    else {
                        bytes_consumed = 2;
                    }
                }
                else if ((current_byte & 0xf0) == 0xe0) {
                    // 3字节序列
                    unicode_char = 0xfffd;
                    if (current_byte == 0xe0) {
                        if ((byte)(input_string[1] + 0x60) < 0x20) {
                            // 验证并计算3字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    bytes_consumed = 3;
                                    unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                                  (current_byte & 0xf) * 0x1000 + 
                                                  (input_string[2] & 0x3f);
                                }
                                else {
                                    bytes_consumed = 3;
                                }
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        if ((current_byte != 0xed) || (input_string[1] < 0xa0)) {
                            // 处理常规3字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    bytes_consumed = 3;
                                    unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                                  (current_byte & 0xf) * 0x1000 + 
                                                  (input_string[2] & 0x3f);
                                }
                                else {
                                    bytes_consumed = 3;
                                }
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                }
                else {
                    // 4字节序列
                    if ((current_byte & 0xf8) != 0xf0) {
                        unicode_char = 0x3f;
                        goto handle_ascii;
                    }
                    unicode_char = 0xfffd;
                    if (current_byte < 0xf5) {
                        if (current_byte == 0xf0) {
                            if ((byte)(input_string[1] + 0x70) < 0x30) {
                                // 验证并计算4字节序列
                                if ((input_string[1] & 0xc0) == 0x80) {
                                    if ((input_string[2] & 0xc0) == 0x80) {
                                        if ((input_string[3] & 0xc0) == 0x80) {
                                            temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                          (current_byte & 7) * 0x40000 + 
                                                          (input_string[1] & 0x3f) * 0x1000 + 
                                                          (input_string[3] & 0x3f);
                                            bytes_consumed = 4;
                                            if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                unicode_char = temp_unicode;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                        else {
                            if ((current_byte != 0xf4) || (input_string[1] < 0x90)) {
                                // 处理常规4字节序列
                                if ((input_string[1] & 0xc0) == 0x80) {
                                    if ((input_string[2] & 0xc0) == 0x80) {
                                        if ((input_string[3] & 0xc0) == 0x80) {
                                            temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                          (current_byte & 7) * 0x40000 + 
                                                          (input_string[1] & 0x3f) * 0x1000 + 
                                                          (input_string[3] & 0x3f);
                                            bytes_consumed = 4;
                                            if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                unicode_char = temp_unicode;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                    }
                    else {
                        bytes_consumed = 4;
                    }
                }
            }
            else {
                // ASCII字符
                unicode_char = (uint)current_byte;
handle_ascii:
                bytes_consumed = 1;
            }
            
            input_string = input_string + bytes_consumed;
            if (unicode_char == 0) break;
            
            // 只处理BMP字符（小于0x10000）
            if (unicode_char < 0x10000) {
                *output_pos = (short)unicode_char;
                output_pos = output_pos + 1;
            }
        } while (output_pos < output_buffer + (longlong)buffer_size + -1);
    }
    
    // 字符串终止符
    *output_pos = 0;
    if (end_ptr_ptr != (undefined8 *)0x0) {
        *end_ptr_ptr = input_string;
    }
    
    return (longlong)output_pos - (longlong)output_buffer >> 1 & 0xffffffff;
}

/**
 * @brief 将UTF-8字符串转换为宽字符字符串的变体
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @param input_string 输入字符串
 * @param param4 第四个参数
 * @param param5 第五个参数
 * @param end_ptr_ptr 结束指针指针
 * @return 返回转换的字符数
 */
ulonglong convert_utf8_to_wstring_variant(undefined2 *output_buffer, int buffer_size, byte *input_string, 
                                        undefined8 param4, undefined8 param5, undefined8 *end_ptr_ptr)
{
    byte current_byte;
    int bytes_consumed;
    uint unicode_char;
    uint temp_unicode;
    undefined2 *output_pos;
    
    output_pos = output_buffer;
    if (output_buffer < output_buffer + (longlong)buffer_size + -1) {
        do {
            current_byte = *input_string;
            if (current_byte == 0) break;
            
            // 处理多字节UTF-8字符
            if ((char)current_byte < '\0') {
                if ((current_byte & 0xe0) == 0xc0) {
                    // 2字节序列
                    unicode_char = 0xfffd;
                    if (current_byte < 0xc2) {
                        bytes_consumed = 2;
                    }
                    else if ((input_string[1] & 0xc0) == 0x80) {
                        bytes_consumed = 2;
                        unicode_char = (current_byte & 0x1f) * 0x40 + (input_string[1] & 0x3f);
                    }
                    else {
                        bytes_consumed = 2;
                    }
                }
                else if ((current_byte & 0xf0) == 0xe0) {
                    // 3字节序列
                    unicode_char = 0xfffd;
                    if (current_byte == 0xe0) {
                        if ((byte)(input_string[1] + 0x60) < 0x20) {
                            // 验证并计算3字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    bytes_consumed = 3;
                                    unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                                  (current_byte & 0xf) * 0x1000 + 
                                                  (input_string[2] & 0x3f);
                                }
                                else {
                                    bytes_consumed = 3;
                                }
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        if ((current_byte != 0xed) || (input_string[1] < 0xa0)) {
                            // 处理常规3字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    bytes_consumed = 3;
                                    unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                                  (current_byte & 0xf) * 0x1000 + 
                                                  (input_string[2] & 0x3f);
                                }
                                else {
                                    bytes_consumed = 3;
                                }
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                }
                else {
                    // 4字节序列
                    if ((current_byte & 0xf8) != 0xf0) {
                        unicode_char = 0x3f;
                        goto handle_ascii_variant;
                    }
                    unicode_char = 0xfffd;
                    if (current_byte < 0xf5) {
                        if (current_byte == 0xf0) {
                            if ((byte)(input_string[1] + 0x70) < 0x30) {
                                // 验证并计算4字节序列
                                if ((input_string[1] & 0xc0) == 0x80) {
                                    if ((input_string[2] & 0xc0) == 0x80) {
                                        if ((input_string[3] & 0xc0) == 0x80) {
                                            temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                          (current_byte & 7) * 0x40000 + 
                                                          (input_string[1] & 0x3f) * 0x1000 + 
                                                          (input_string[3] & 0x3f);
                                            bytes_consumed = 4;
                                            if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                unicode_char = temp_unicode;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                        else {
                            if ((current_byte != 0xf4) || (input_string[1] < 0x90)) {
                                // 处理常规4字节序列
                                if ((input_string[1] & 0xc0) == 0x80) {
                                    if ((input_string[2] & 0xc0) == 0x80) {
                                        if ((input_string[3] & 0xc0) == 0x80) {
                                            temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                          (current_byte & 7) * 0x40000 + 
                                                          (input_string[1] & 0x3f) * 0x1000 + 
                                                          (input_string[3] & 0x3f);
                                            bytes_consumed = 4;
                                            if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                unicode_char = temp_unicode;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                    }
                    else {
                        bytes_consumed = 4;
                    }
                }
            }
            else {
                // ASCII字符
                unicode_char = (uint)current_byte;
handle_ascii_variant:
                bytes_consumed = 1;
            }
            
            input_string = input_string + bytes_consumed;
            if (unicode_char == 0) break;
            
            // 只处理BMP字符（小于0x10000）
            if (unicode_char < 0x10000) {
                *output_pos = (short)unicode_char;
                output_pos = output_pos + 1;
            }
        } while (output_pos < output_buffer + (longlong)buffer_size + -1);
    }
    
    // 字符串终止符
    *output_pos = 0;
    if (end_ptr_ptr != (undefined8 *)0x0) {
        *end_ptr_ptr = input_string;
    }
    
    return (longlong)output_pos - (longlong)output_buffer >> 1 & 0xffffffff;
}

/**
 * @brief UTF-8到宽字符转换的另一个变体
 * @param param1 第一个参数
 * @param param2 第二个参数
 * @param input_string 输入字符串
 * @param param4 第四个参数
 * @param param5 第五个参数
 * @param end_ptr_ptr 结束指针指针
 * @return 返回转换的字符数
 */
ulonglong convert_utf8_to_wstring_variant2(undefined8 param1, undefined8 param2, byte *input_string, 
                                          undefined8 param4, undefined8 param5, undefined8 *end_ptr_ptr)
{
    byte current_byte;
    int bytes_consumed;
    uint unicode_char;
    longlong stack_base;
    undefined2 *output_ptr;
    uint temp_unicode;
    undefined2 *in_register;
    
    do {
        current_byte = *input_string;
        if (current_byte == 0) break;
        
        // 处理多字节UTF-8字符
        if ((char)current_byte < '\0') {
            if ((current_byte & 0xe0) == 0xc0) {
                // 2字节序列
                unicode_char = 0xfffd;
                if (current_byte < 0xc2) {
                    bytes_consumed = 2;
                }
                else if ((input_string[1] & 0xc0) == 0x80) {
                    bytes_consumed = 2;
                    unicode_char = (current_byte & 0x1f) * 0x40 + (input_string[1] & 0x3f);
                }
                else {
                    bytes_consumed = 2;
                }
            }
            else if ((current_byte & 0xf0) == 0xe0) {
                // 3字节序列
                unicode_char = 0xfffd;
                if (current_byte == 0xe0) {
                    if ((byte)(input_string[1] + 0x60) < 0x20) {
                        // 验证并计算3字节序列
                        if ((input_string[1] & 0xc0) == 0x80) {
                            if ((input_string[2] & 0xc0) == 0x80) {
                                bytes_consumed = 3;
                                unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                              (current_byte & 0xf) * 0x1000 + 
                                              (input_string[2] & 0x3f);
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        bytes_consumed = 3;
                    }
                }
                else {
                    if ((current_byte != 0xed) || (input_string[1] < 0xa0)) {
                        // 处理常规3字节序列
                        if ((input_string[1] & 0xc0) == 0x80) {
                            if ((input_string[2] & 0xc0) == 0x80) {
                                bytes_consumed = 3;
                                unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                              (current_byte & 0xf) * 0x1000 + 
                                              (input_string[2] & 0x3f);
                            }
                            else {
                                bytes_consumed = 3;
                            }
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        bytes_consumed = 3;
                    }
                }
            }
            else {
                // 4字节序列
                if ((current_byte & 0xf8) != 0xf0) {
                    unicode_char = 0x3f;
                    goto handle_ascii_variant2;
                }
                unicode_char = 0xfffd;
                if (current_byte < 0xf5) {
                    if (current_byte == 0xf0) {
                        if ((byte)(input_string[1] + 0x70) < 0x30) {
                            // 验证并计算4字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    if ((input_string[3] & 0xc0) == 0x80) {
                                        temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                      (current_byte & 7) * 0x40000 + 
                                                      (input_string[1] & 0x3f) * 0x1000 + 
                                                      (input_string[3] & 0x3f);
                                        bytes_consumed = 4;
                                        if ((temp_unicode & 0xfffff800) != 0xd800) {
                                            unicode_char = temp_unicode;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                        else {
                            bytes_consumed = 4;
                        }
                    }
                    else {
                        if ((current_byte != 0xf4) || (input_string[1] < 0x90)) {
                            // 处理常规4字节序列
                            if ((input_string[1] & 0xc0) == 0x80) {
                                if ((input_string[2] & 0xc0) == 0x80) {
                                    if ((input_string[3] & 0xc0) == 0x80) {
                                        temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                      (current_byte & 7) * 0x40000 + 
                                                      (input_string[1] & 0x3f) * 0x1000 + 
                                                      (input_string[3] & 0x3f);
                                        bytes_consumed = 4;
                                        if ((temp_unicode & 0xfffff800) != 0xd800) {
                                            unicode_char = temp_unicode;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                bytes_consumed = 4;
                            }
                        }
                        else {
                            bytes_consumed = 4;
                        }
                    }
                }
                else {
                    bytes_consumed = 4;
                }
            }
        }
        else {
            // ASCII字符
            unicode_char = (uint)current_byte;
handle_ascii_variant2:
            bytes_consumed = 1;
        }
        
        input_string = input_string + bytes_consumed;
        if (unicode_char == 0) break;
        
        // 只处理BMP字符（小于0x10000）
        if (unicode_char < 0x10000) {
            *in_register = (short)unicode_char;
            in_register = in_register + 1;
        }
    } while (in_register < output_ptr);
    
    *in_register = 0;
    if (end_ptr_ptr != (undefined8 *)0x0) {
        *end_ptr_ptr = input_string;
    }
    
    return (longlong)in_register - stack_base >> 1 & 0xffffffff;
}

/**
 * @brief 空转换函数
 * @param param1 第一个参数
 * @param param2 第二个参数
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @param param5 第五个参数
 * @param end_ptr_ptr 结束指针指针
 * @return 返回0
 */
ulonglong empty_conversion_function(undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4,
                                  undefined8 param5, undefined8 *end_ptr_ptr)
{
    longlong stack_base;
    undefined2 *output_ptr;
    
    *output_ptr = 0;
    if (end_ptr_ptr != (undefined8 *)0x0) {
        *end_ptr_ptr = param3;
    }
    return (longlong)output_ptr - stack_base >> 1 & 0xffffffff;
}

/**
 * @brief 简单的字符串复制函数
 * @param param1 第一个参数
 * @param param2 第二个参数
 * @param param3 第三个参数
 * @return 返回复制的字符数
 */
ulonglong simple_string_copy(undefined8 param1, undefined8 param2, undefined8 param3)
{
    undefined8 *output_ptr;
    longlong stack_base;
    longlong register_value;
    
    *output_ptr = param3;
    return register_value - stack_base >> 1 & 0xffffffff;
}

/**
 * @brief 计算UTF-8字符串中的字符数
 * @param input_string 输入字符串
 * @param end_ptr 结束指针
 * @return 返回字符数
 */
int calculate_string_length(byte *input_string, byte *end_ptr)
{
    byte current_byte;
    int char_count;
    uint unicode_char;
    int bytes_consumed;
    int prev_char_count;
    uint temp_unicode;
    
    char_count = 0;
    do {
        prev_char_count = char_count;
        
        // 检查边界条件
        if ((end_ptr != (byte *)0x0) && (end_ptr <= input_string)) {
            return prev_char_count;
        }
        
        current_byte = *input_string;
        if (current_byte == 0) {
            return prev_char_count;
        }
        
        // 处理多字节UTF-8字符
        if ((char)current_byte < '\0') {
            if ((current_byte & 0xe0) == 0xc0) {
                // 2字节序列
                unicode_char = 0xfffd;
                if ((end_ptr == (byte *)0x0) || (1 < (longlong)end_ptr - (longlong)input_string)) {
                    if (current_byte < 0xc2) {
                        bytes_consumed = 2;
                    }
                    else if ((input_string[1] & 0xc0) == 0x80) {
                        bytes_consumed = 2;
                        unicode_char = (current_byte & 0x1f) * 0x40 + (input_string[1] & 0x3f);
                    }
                    else {
                        bytes_consumed = 2;
                    }
                    goto process_character;
                }
                goto handle_invalid;
            }
            
            if ((current_byte & 0xf0) != 0xe0) {
                if ((current_byte & 0xf8) == 0xf0) {
                    // 4字节序列
                    unicode_char = 0xfffd;
                    if ((end_ptr == (byte *)0x0) || (3 < (longlong)end_ptr - (longlong)input_string)) {
                        if (current_byte < 0xf5) {
                            if (current_byte == 0xf0) {
                                if ((byte)(input_string[1] + 0x70) < 0x30) {
                                    // 验证并计算4字节序列
                                    if ((input_string[1] & 0xc0) == 0x80) {
                                        if ((input_string[2] & 0xc0) == 0x80) {
                                            if ((input_string[3] & 0xc0) == 0x80) {
                                                temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                              (current_byte & 7) * 0x40000 + 
                                                              (input_string[1] & 0x3f) * 0x1000 + 
                                                              (input_string[3] & 0x3f);
                                                bytes_consumed = 4;
                                                if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                    unicode_char = temp_unicode;
                                                }
                                            }
                                            else {
                                                bytes_consumed = 4;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                            else {
                                if ((current_byte != 0xf4) || (input_string[1] < 0x90)) {
                                    // 处理常规4字节序列
                                    if ((input_string[1] & 0xc0) == 0x80) {
                                        if ((input_string[2] & 0xc0) == 0x80) {
                                            if ((input_string[3] & 0xc0) == 0x80) {
                                                temp_unicode = (input_string[2] & 0x3f) * 0x40 + 
                                                              (current_byte & 7) * 0x40000 + 
                                                              (input_string[1] & 0x3f) * 0x1000 + 
                                                              (input_string[3] & 0x3f);
                                                bytes_consumed = 4;
                                                if ((temp_unicode & 0xfffff800) != 0xd800) {
                                                    unicode_char = temp_unicode;
                                                }
                                            }
                                            else {
                                                bytes_consumed = 4;
                                            }
                                        }
                                        else {
                                            bytes_consumed = 4;
                                        }
                                    }
                                    else {
                                        bytes_consumed = 4;
                                    }
                                }
                                else {
                                    bytes_consumed = 4;
                                }
                            }
                        }
                        else {
                            bytes_consumed = 4;
                        }
                        goto process_character;
                    }
                }
                else {
                    unicode_char = 0x3f;
                }
                goto handle_invalid;
            }
            
            // 3字节序列
            unicode_char = 0xfffd;
            if ((end_ptr != (byte *)0x0) && ((longlong)end_ptr - (longlong)input_string < 3)) {
                goto handle_invalid;
            }
            
            if (current_byte == 0xe0) {
                if ((byte)(input_string[1] + 0x60) < 0x20) {
                    // 验证并计算3字节序列
                    if ((input_string[1] & 0xc0) == 0x80) {
                        if ((input_string[2] & 0xc0) == 0x80) {
                            bytes_consumed = 3;
                            unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                          (current_byte & 0xf) * 0x1000 + 
                                          (input_string[2] & 0x3f);
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        bytes_consumed = 3;
                    }
                }
                else {
                    bytes_consumed = 3;
                }
            }
            else {
                if ((current_byte != 0xed) || (input_string[1] < 0xa0)) {
                    // 处理常规3字节序列
                    if ((input_string[1] & 0xc0) == 0x80) {
                        if ((input_string[2] & 0xc0) == 0x80) {
                            bytes_consumed = 3;
                            unicode_char = (input_string[1] & 0x3f) * 0x40 + 
                                          (current_byte & 0xf) * 0x1000 + 
                                          (input_string[2] & 0x3f);
                        }
                        else {
                            bytes_consumed = 3;
                        }
                    }
                    else {
                        bytes_consumed = 3;
                    }
                }
                else {
                    bytes_consumed = 3;
                }
            }
        }
        else {
            // ASCII字符
            unicode_char = (uint)current_byte;
handle_invalid:
            bytes_consumed = 1;
        }
        
process_character:
        input_string = input_string + bytes_consumed;
        if (unicode_char == 0) {
            return prev_char_count;
        }
        
        char_count = prev_char_count + 1;
        
        // 只计算BMP字符（小于0x10000）
        if (0xffff < unicode_char) {
            char_count = prev_char_count;
        }
    } while( true );
}

/**
 * @brief 将宽字符字符串转换为UTF-8字符串
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @param input_string 输入字符串
 * @param end_ptr 结束指针
 * @return 返回写入的字节数
 */
int convert_wstring_to_utf8(byte *output_buffer, int buffer_size, ushort *input_string, ushort *end_ptr)
{
    ushort current_char;
    byte first_byte;
    byte second_byte;
    longlong bytes_needed;
    int available_space;
    byte *output_pos;
    byte *buffer_end;
    
    buffer_end = output_buffer + buffer_size;
    output_pos = output_buffer;
    
    if (output_buffer < buffer_end + -1) {
        do {
            // 检查输出边界和输入终止条件
            if (((end_ptr != (ushort *)0x0) && (end_ptr <= input_string)) || 
                (current_char = *input_string, current_char == 0)) {
                break;
            }
            
            input_string = input_string + 1;
            first_byte = (byte)current_char;
            
            // 处理ASCII字符 (0-127)
            if (current_char < 0x80) {
                *output_pos = first_byte;
                bytes_needed = 1;
            }
            else {
                available_space = ((int)buffer_end - (int)output_pos) + -1;
                
                // 处理2字节UTF-8序列 (128-2047)
                if (current_char < 0x800) {
                    if (available_space < 2) {
                        bytes_needed = 0;
                    }
                    else {
                        *output_pos = (char)(current_char >> 6) - 0x40;
                        output_pos[1] = (first_byte & 0x3f) + 0x80;
                        bytes_needed = 2;
                    }
                }
                // 处理代理对字符 (无效)
                else if (current_char - 0xdc00 < 0x400) {
                    bytes_needed = 0;
                }
                else {
                    second_byte = (byte)(current_char >> 8);
                    
                    // 处理4字节UTF-8序列 (大于0xFFFF，需要代理对)
                    if (current_char - 0xd800 < 0x400) {
                        if (available_space < 4) {
                            bytes_needed = 0;
                        }
                        else {
                            *output_pos = 0xf0;
                            output_pos[1] = (second_byte >> 4) + 0x80;
                            output_pos[2] = ((byte)(current_char >> 6) & 0x3f) + 0x80;
                            output_pos[3] = (first_byte & 0x3f) + 0x80;
                            bytes_needed = 4;
                        }
                    }
                    // 处理3字节UTF-8序列 (2048-65535，排除代理对)
                    else if (available_space < 3) {
                        bytes_needed = 0;
                    }
                    else {
                        *output_pos = (second_byte >> 4) - 0x20;
                        output_pos[1] = ((byte)(current_char >> 6) & 0x3f) + 0x80;
                        output_pos[2] = (first_byte & 0x3f) + 0x80;
                        bytes_needed = 3;
                    }
                }
            }
            
            output_pos = output_pos + bytes_needed;
        } while (output_pos < buffer_end + -1);
    }
    
    // 字符串终止符
    *output_pos = 0;
    return (int)output_pos - (int)output_buffer;
}

/**
 * @brief 计算宽字符字符串转换为UTF-8后需要的字节数
 * @param input_string 输入字符串
 * @param end_ptr 结束指针
 * @return 返回需要的字节数
 */
int calculate_utf8_size_needed(ushort *input_string, ushort *end_ptr)
{
    ushort current_char;
    int byte_count;
    
    byte_count = 0;
    while (((end_ptr == (ushort *)0x0 || (input_string < end_ptr)) && 
           (current_char = *input_string, current_char != 0))) {
        input_string = input_string + 1;
        
        // 计算每个字符需要的UTF-8字节数
        if (current_char < 0x80) {
            byte_count = byte_count + 1; // ASCII字符
        }
        else if (current_char < 0x800) {
            byte_count = byte_count + 2; // 2字节UTF-8
        }
        else if (0x3ff < (ushort)(current_char + 0x2400)) {
            // 处理需要4字节UTF-8的字符（代理对）
            byte_count = byte_count + ((ushort)(current_char + 0x2800) < 0x400) + 3;
        }
    }
    return byte_count;
}

// 全局变量和内存管理相关常量
#define MEMORY_COUNTER_OFFSET 0x3a8
#define MEMORY_ALLOCATOR_CONTEXT_OFFSET 0x3a8

// 函数指针和全局变量声明（简化实现）
extern longlong memory_manager_instance;
extern longlong memory_allocator_context;
extern undefined8 default_file_mode;

// 内存管理函数声明
extern longlong allocate_memory(longlong size, longlong context);
extern void free_memory(longlong ptr, longlong context);

// 字符串处理函数声明
extern int calculate_string_length(undefined8 str, undefined8 end);
extern void copy_string_to_buffer(undefined8 buffer, int length, undefined8 str, undefined8 flags, undefined8 param);
extern void _wfopen(undefined8 param1, undefined8 param2);
extern int fseek(undefined8 file, long offset, int origin);
extern long ftell(undefined8 file);
extern long fread(undefined8 buffer, long size, long count, undefined8 file);
extern void fclose(undefined8 file);

// 渲染和图形相关函数声明
extern void func_0x000180121e20(undefined4 *param);
extern float *global_render_context;
extern longlong *global_texture_manager;

/**
 * @brief 应用缩放变换到渲染对象
 * @param object_id 对象ID
 * @param scale_factor 缩放因子
 */
void apply_scale_transform(int object_id, float scale_factor)
{
    undefined4 *transform_matrix;
    undefined4 stack_matrix[3];
    float scaled_value;
    
    // 获取对象的变换矩阵
    transform_matrix = (undefined4 *)(global_render_context + TRANSFORM_MATRIX_OFFSET + 
                                     ((longlong)object_id + 10) * 0x10);
    
    // 复制当前矩阵到栈
    stack_matrix[0] = *transform_matrix;
    stack_matrix[1] = transform_matrix[1];
    stack_matrix[2] = transform_matrix[2];
    
    // 应用缩放
    scaled_value = (float)transform_matrix[3] * scale_factor * *global_scale_factor;
    
    // 更新变换矩阵
    func_0x000180121e20(&stack_matrix[0]);
    return;
}

/**
 * @brief 在哈希表中查找uint值
 * @param hash_table_ptr 哈希表指针
 * @param key 查找键
 * @param default_value 默认值
 * @return 找到返回对应值，否则返回默认值
 */
uint find_value_in_hash_table(int *hash_table_ptr, uint key, uint default_value)
{
    int table_size;
    uint *table_data;
    ulonglong search_range;
    ulonglong mid_point;
    uint *current_entry;
    
    table_size = *hash_table_ptr;
    table_data = *(uint **)(hash_table_ptr + 2);
    search_range = (longlong)table_size;
    current_entry = table_data;
    
    // 二分查找
    if (table_size != 0) {
        do {
            mid_point = search_range >> 1;
            if (current_entry[mid_point * 4] < key) {
                current_entry = current_entry + mid_point * 4 + 4;
                search_range = search_range + (-1 - mid_point);
            }
            search_range = mid_point;
        } while (search_range != 0);
    }
    
    // 检查是否找到匹配项
    if ((current_entry != table_data + (longlong)table_size * 4) && (*current_entry == key)) {
        return current_entry[2]; // 返回找到的值
    }
    return default_value; // 返回默认值
}

/**
 * @brief 在哈希表中查找指针值
 * @param hash_table_ptr 哈希表指针
 * @param key 查找键
 * @return 找到返回对应指针，否则返回0
 */
undefined8 find_pointer_in_hash_table(int *hash_table_ptr, uint key)
{
    int table_size;
    uint *table_data;
    ulonglong search_range;
    ulonglong mid_point;
    uint *current_entry;
    
    table_size = *hash_table_ptr;
    table_data = *(uint **)(hash_table_ptr + 2);
    search_range = (longlong)table_size;
    current_entry = table_data;
    
    // 二分查找
    if (table_size != 0) {
        do {
            mid_point = search_range >> 1;
            if (current_entry[mid_point * 4] < key) {
                current_entry = current_entry + mid_point * 4 + 4;
                search_range = search_range + (-1 - mid_point);
            }
            search_range = mid_point;
        } while (search_range != 0);
    }
    
    // 检查是否找到匹配项
    if ((current_entry != table_data + (longlong)table_size * 4) && (*current_entry == key)) {
        return *(undefined8 *)(current_entry + 2); // 返回找到的指针
    }
    return 0; // 未找到返回0
}

/**
 * @brief 在哈希表中设置uint值
 * @param hash_table_ptr 哈希表指针
 * @param key 键
 * @param value 值
 */
void set_value_in_hash_table(int *hash_table_ptr, uint key, uint value)
{
    int table_size;
    uint *table_data;
    ulonglong search_range;
    uint *insert_position;
    ulonglong mid_point;
    uint new_entry[3];
    uint entry_value;
    
    table_size = *hash_table_ptr;
    table_data = *(uint **)(hash_table_ptr + 2);
    insert_position = table_data;
    search_range = (longlong)table_size;
    
    // 二分查找插入位置
    if (table_size != 0) {
        do {
            mid_point = search_range >> 1;
            if (insert_position[mid_point * 4] < key) {
                insert_position = insert_position + mid_point * 4 + 4;
                search_range = search_range + (-1 - mid_point);
            }
            search_range = mid_point;
        } while (search_range != 0);
    }
    
    // 如果键已存在，更新值
    if ((insert_position != table_data + (longlong)table_size * 4) && (*insert_position == key)) {
        insert_position[2] = value;
        return;
    }
    
    // 插入新条目
    new_entry[0] = key;
    entry_value = value;
    insert_into_hash_table(hash_table_ptr, insert_position, new_entry);
    return;
}

/**
 * @brief 在哈希表中设置指针值
 * @param hash_table_ptr 哈希表指针
 * @param key 键
 * @param value 指针值
 */
void set_pointer_in_hash_table(int *hash_table_ptr, uint key, undefined8 value)
{
    int table_size;
    uint *table_data;
    ulonglong search_range;
    uint *insert_position;
    ulonglong mid_point;
    uint new_entry[3];
    undefined8 pointer_value;
    
    table_size = *hash_table_ptr;
    table_data = *(uint **)(hash_table_ptr + 2);
    insert_position = table_data;
    search_range = (longlong)table_size;
    
    // 二分查找插入位置
    if (table_size != 0) {
        do {
            mid_point = search_range >> 1;
            if (insert_position[mid_point * 4] < key) {
                insert_position = insert_position + mid_point * 4 + 4;
                search_range = search_range + (-1 - mid_point);
            }
            search_range = mid_point;
        } while (search_range != 0);
    }
    
    // 如果键已存在，更新值
    if ((insert_position != table_data + (longlong)table_size * 4) && (*insert_position == key)) {
        *(undefined8 *)(insert_position + 2) = value;
        return;
    }
    
    // 插入新条目
    new_entry[0] = key;
    pointer_value = value;
    insert_into_hash_table(hash_table_ptr, insert_position, new_entry);
    return;
}

/**
 * @brief 字符串拼接的包装函数
 * @param dest 目标字符串
 * @param src 源字符串
 * @param separator 分隔符
 * @param flags 标志
 */
void concatenate_strings_wrapper(undefined8 dest, undefined8 src, undefined8 separator, undefined8 flags)
{
    undefined8 stack_params[2];
    
    stack_params[0] = separator;
    stack_params[1] = flags;
    concatenate_strings_internal(dest, src, &stack_params[0]);
    return;
}

/**
 * @brief 字符串拼接的内部实现
 * @param dest_ptr 目标字符串指针
 * @param src 源字符串
 * @param params 参数数组
 */
void concatenate_strings_internal(int *dest_ptr, undefined8 src, undefined8 params)
{
    int src_length;
    int dest_capacity;
    int new_size;
    int required_size;
    longlong dest_data;
    
    // 计算源字符串长度
    src_length = calculate_string_copy_length(0, 0, src, params);
    
    if (0 < src_length) {
        // 确定目标字符串的当前容量
        dest_capacity = 1;
        if (*dest_ptr != 0) {
            dest_capacity = *dest_ptr;
        }
        
        required_size = dest_capacity + src_length;
        
        // 检查是否需要扩容
        if (dest_ptr[1] <= required_size) {
            new_size = dest_ptr[1] * 2;
            if (new_size < required_size) {
                new_size = required_size;
            }
            resize_string_buffer(dest_ptr, new_size);
            new_size = dest_ptr[1];
            
            // 再次检查容量
            if (new_size < required_size) {
                if (new_size == 0) {
                    new_size = 8;
                }
                else {
                    new_size = new_size / 2 + new_size;
                }
                src_length = required_size;
                if (required_size < new_size) {
                    src_length = new_size;
                }
                resize_string_buffer(dest_ptr, src_length);
            }
        }
        
        *dest_ptr = required_size;
        dest_data = (longlong)(dest_capacity + -1) + *(longlong *)(dest_ptr + 2);
        src_length = calculate_string_copy_length(dest_data, (longlong)src_length + 1, src, params);
        
        // 添加字符串终止符
        if (dest_data != 0) {
            required_size = (int)((longlong)src_length + 1);
            if ((src_length == -1) || (required_size <= src_length)) {
                src_length = required_size + -1;
            }
            *(undefined1 *)(src_length + dest_data) = 0;
        }
    }
    return;
}

/**
 * @brief 字符串拼接的变体实现
 * @param dest_ptr 目标字符串指针
 * @param src 源字符串
 * @param params 参数数组
 * @param initial_size 初始大小
 */
void concatenate_strings_variant(int dest_ptr, undefined8 src, undefined8 params, int initial_size)
{
    int src_length;
    int dest_capacity;
    longlong stack_base;
    longlong param_value;
    int *dest_pointer;
    bool has_capacity;
    
    dest_capacity = 1;
    if (!has_capacity) {
        dest_capacity = initial_size;
    }
    
    src_length = dest_capacity + (int)stack_base;
    
    // 检查是否需要扩容
    if ((dest_ptr <= src_length) && (resize_string_buffer(), dest_pointer[1] < src_length)) {
        resize_string_buffer();
    }
    
    *dest_pointer = src_length;
    param_value = (longlong)(dest_capacity + -1) + *(longlong *)(dest_pointer + 2);
    dest_capacity = calculate_string_copy_length(param_value, stack_base + 1);
    
    // 添加字符串终止符
    if (param_value != 0) {
        src_length = (int)(stack_base + 1);
        if ((dest_capacity == -1) || (src_length <= dest_capacity)) {
            dest_capacity = src_length + -1;
        }
        *(undefined1 *)(dest_capacity + param_value) = 0;
    }
    return;
}

/**
 * @brief 空操作函数
 */
void empty_function(void)
{
    return;
}

/**
 * @brief 处理字符串注释的函数
 * @param context 上下文指针
 * @param start_ptr 字符串开始指针
 * @param end_ptr 字符串结束指针
 * @param comment_char 注释字符
 */
void process_string_comments(undefined8 context, char *start_ptr, char *end_ptr, char comment_char)
{
    undefined4 *render_color;
    longlong renderer_context;
    uint render_flags;
    longlong font_manager;
    longlong texture_manager;
    char *current_pos;
    longlong font_data;
    longlong texture_data;
    float font_scale;
    undefined8 stack_params[5];
    undefined4 stack_colors[3];
    float scaled_font_size;
    
    renderer_context = global_render_context;
    
    // 如果没有注释字符，处理到字符串末尾
    if (comment_char == '\0') {
        if (end_ptr == (char *)0x0) {
            longlong string_length = -1;
            do {
                string_length = string_length + 1;
            } while (start_ptr[string_length] != '\0');
            end_ptr = start_ptr + string_length;
        }
    }
    else {
        // 查找注释开始位置
        current_pos = (char *)0xffffffffffffffff;
        if (end_ptr != (char *)0x0) {
            current_pos = end_ptr;
        }
        end_ptr = start_ptr;
        
        // 查找注释标记
        if (start_ptr < current_pos) {
            while (*end_ptr != '\0') {
                if (((*end_ptr == '#') && (end_ptr[1] == '#')) || 
                    (end_ptr = end_ptr + 1, current_pos <= end_ptr)) {
                    break;
                }
            }
        }
    }
    
    // 如果有有效字符串内容，进行渲染处理
    if (start_ptr != end_ptr) {
        // 获取当前渲染颜色
        stack_colors[0] = *(undefined4 *)(global_render_context + RENDER_COLOR_OFFSET);
        stack_colors[1] = *(undefined4 *)(global_render_context + RENDER_COLOR_OFFSET + 4);
        stack_colors[2] = *(undefined4 *)(global_render_context + RENDER_COLOR_OFFSET + 8);
        
        // 获取字体管理器
        font_manager = *(longlong *)(*(longlong *)(global_render_context + FONT_MANAGER_OFFSET) + 0x2e8);
        
        // 计算字体大小
        scaled_font_size = *(float *)(global_render_context + FONT_SIZE_OFFSET) * 
                          *(float *)(global_render_context + SCALE_FACTOR_OFFSET);
        
        // 设置渲染参数
        stack_params[0] = context;
        render_flags = func_0x000180121e20(&stack_colors[0]);
        
        // 获取字体和纹理数据
        font_scale = *(float *)(renderer_context + DEFAULT_FONT_SCALE_OFFSET);
        font_data = *(longlong *)(renderer_context + FONT_DATA_OFFSET);
        
        if ((render_flags & 0xff000000) != 0) {
            current_pos = end_ptr;
            if (end_ptr == (char *)0x0) {
                longlong string_length = -1;
                do {
                    string_length = string_length + 1;
                } while (start_ptr[string_length] != '\0');
                current_pos = start_ptr + string_length;
            }
            
            if (start_ptr != current_pos) {
                // 获取字体数据
                if (font_data == 0) {
                    font_data = *(longlong *)(*(longlong *)(font_manager + 0x38) + 8);
                }
                
                // 获取字体大小
                if (font_scale == 0.0) {
                    font_scale = *(float *)(*(longlong *)(font_manager + 0x38) + 0x10);
                }
                
                // 获取纹理数据
                render_color = (undefined4 *)
                              (*(longlong *)(font_manager + 0x68) + -0x10 + 
                               (longlong)*(int *)(font_manager + 0x60) * 0x10);
                
                stack_colors[0] = *render_color;
                stack_colors[1] = render_color[1];
                stack_colors[2] = render_color[2];
                scaled_font_size = (float)render_color[3];
                
                // 渲染文本
                render_text_with_font(font_data, font_manager, font_scale, context, render_flags, 
                                     &stack_colors[0], start_ptr, current_pos, 0, 0);
            }
        }
        
        // 如果启用了注释处理，处理注释部分
        if (*(char *)(renderer_context + COMMENT_PROCESSING_OFFSET) != '\0') {
            process_comment_text(&stack_params[0], start_ptr, end_ptr);
        }
    }
    return;
}

// 渲染相关常量定义
#define TRANSFORM_MATRIX_OFFSET 0x1628
#define RENDER_COLOR_OFFSET 0x16c8
#define FONT_MANAGER_OFFSET 0x1af8
#define FONT_SIZE_OFFSET 0x16d4
#define SCALE_FACTOR_OFFSET 0x1628
#define DEFAULT_FONT_SCALE_OFFSET 0x19f8
#define FONT_DATA_OFFSET 0x19f0
#define COMMENT_PROCESSING_OFFSET 0x2e38

// 全局变量声明
extern float *global_scale_factor;

// 辅助函数声明
extern int calculate_string_copy_length(undefined8 dest, undefined8 size, undefined8 src, undefined8 params);
extern void resize_string_buffer(int *buffer_ptr, int new_size);
extern void insert_into_hash_table(int *table_ptr, uint *position, uint *entry);
extern void render_text_with_font(longlong font_data, longlong font_manager, float font_scale, 
                                 undefined8 context, uint flags, undefined4 *colors, 
                                 char *text_start, char *text_end, int param1, int param2);
extern void process_comment_text(undefined8 *params, char *start, char *end);