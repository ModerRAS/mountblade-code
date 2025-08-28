#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part300_sub002_sub002.c - 渲染系统高级颜色处理和数据转换模块
// 包含6个核心函数，涵盖颜色数据提取、数据缓冲处理、像素数据读取、纹理数据处理、字符串匹配和位标志处理等高级渲染功能

// =============================================================================
// 模块常量定义
// =============================================================================

// 颜色处理常量
#define COLOR_COMPONENT_MASK_5BIT 0x1f          // 5位颜色分量掩码
#define COLOR_COMPONENT_MAX_5BIT 0x1f           // 5位颜色分量最大值
#define COLOR_COMPONENT_MAX_8BIT 0xff            // 8位颜色分量最大值
#define COLOR_RED_SHIFT_5BIT 10                  // 5位红色分量右移位数
#define COLOR_GREEN_SHIFT_5BIT 5                 // 5位绿色分量右移位数
#define COLOR_BLUE_SHIFT_5BIT 0                  // 5位蓝色分量右移位数

// 数据处理常量
#define DATA_BUFFER_SIZE_THRESHOLD 8             // 数据缓冲区大小阈值
#define DATA_COMPRESSION_RLE_MARKER_8 8          // RLE压缩标记值8
#define DATA_COMPRESSION_RLE_MARKER_15 0xf      // RLE压缩标记值15
#define DATA_COMPRESSION_RLE_MARKER_16 0x10      // RLE压缩标记值16
#define DATA_COMPRESSION_RLE_MARKER_128 0x80     // RLE压缩标记值128
#define DATA_COMPRESSION_RLE_MAX_RUN 0x101       // RLE最大运行长度

// 纹理处理常量
#define TEXTURE_FORMAT_16BIT 0x10               // 16位纹理格式
#define TEXTURE_FORMAT_32BIT 0x20               // 32位纹理格式
#define TEXTURE_COMPONENT_COUNT_4 4             // 纹理分量数量
#define TEXTURE_MIPMAP_LEVEL_MAX 4               // 纹理Mipmap最大层级
#define TEXTURE_MAGIC_HEADER 0x38425053         // 纹理文件头魔数
#define TEXTURE_VERSION_1 1                     // 纹理版本号
#define TEXTURE_DIMENSION_MAX 0x11              // 纹理维度最大值

// 内存管理常量
#define MEMORY_ALIGNMENT_4BYTE 0x22               // 4字节内存对齐标记
#define MEMORY_MAX_ALLOCATION_SIZE 0x7fffffff    // 最大内存分配大小
#define PIXEL_COMPONENT_MAX_8BIT 255             // 8位像素分量最大值
#define PIXEL_COMPONENT_MAX_16BIT 65535          // 16位像素分量最大值

// 字符串处理常量
#define STRING_MAX_COMPARE_LENGTH 4              // 字符串最大比较长度
#define STRING_TERMINATOR '\0'                   // 字符串终止符

// 位标志处理常量
#define BIT_FLAG_SHIFT_START 0x80                // 位标志处理起始位移
#define BIT_FLAG_MAX_POSITION 4                  // 位标志最大位置

// =============================================================================
// 类型别名定义
// =============================================================================

// 基础数据类型别名
typedef uint8_t color_component_5bit_t;          // 5位颜色分量类型
typedef uint8_t color_component_8bit_t;          // 8位颜色分量类型
typedef uint16_t color_16bit_t;                  // 16位颜色值类型
typedef uint32_t texture_dimension_t;           // 纹理维度类型
typedef uint32_t texture_format_t;               // 纹理格式类型
typedef uint32_t mipmap_level_t;                 // Mipmap层级类型
typedef uint32_t compression_marker_t;           // 压缩标记类型
typedef uint32_t bit_flag_mask_t;                // 位标志掩码类型
typedef uint32_t string_length_t;                // 字符串长度类型
typedef uint32_t bit_position_t;                 // 位位置类型

// 指针类型别名
typedef uint8_t* data_buffer_ptr_t;              // 数据缓冲区指针类型
typedef uint16_t* texture_data_ptr_t;            // 纹理数据指针类型
typedef char* string_ptr_t;                      // 字符串指针类型
typedef uint8_t* bit_data_ptr_t;                 // 位数据指针类型

// 函数指针别名
typedef void* (*memory_allocator_t)(void*, size_t, uint32_t);  // 内存分配器类型
typedef int (*stream_reader_t)(void*, void*, uint32_t);        // 流读取器类型
typedef int (*stream_checker_t)(void*);                         // 流检查器类型

// =============================================================================
// 结构体定义
// =============================================================================

/**
 * @brief 颜色分量结构体
 * @details 存储5位和8位颜色分量的转换信息
 */
typedef struct {
    color_component_5bit_t red_5bit;      // 5位红色分量
    color_component_5bit_t green_5bit;    // 5位绿色分量
    color_component_5bit_t blue_5bit;     // 5位蓝色分量
    color_component_8bit_t red_8bit;      // 8位红色分量
    color_component_8bit_t green_8bit;    // 8位绿色分量
    color_component_8bit_t blue_8bit;     // 8位蓝色分量
} color_components_t;

/**
 * @brief 数据压缩信息结构体
 * @details 存储数据压缩的相关信息
 */
typedef struct {
    compression_marker_t marker;          // 压缩标记
    uint32_t run_length;                  // 运行长度
    uint32_t data_size;                   // 数据大小
    uint8_t compression_type;             // 压缩类型
    bool is_compressed;                   // 是否压缩
} compression_info_t;

/**
 * @brief 纹理头部信息结构体
 * @details 存储纹理文件的头部信息
 */
typedef struct {
    uint32_t magic_number;                // 魔数
    uint16_t version;                     // 版本号
    texture_dimension_t width;            // 宽度
    texture_dimension_t height;           // 高度
    texture_format_t format;               // 格式
    mipmap_level_t mipmap_levels;         // Mipmap层级
} texture_header_t;

/**
 * @brief 纹理处理参数结构体
 * @details 存储纹理处理的各种参数
 */
typedef struct {
    int width;                            // 宽度
    int height;                           // 高度
    int format;                           // 格式
    int mipmap_count;                     // Mipmap数量
    int* output_format;                   // 输出格式
    int* output_width;                    // 输出宽度
    int* output_height;                   // 输出高度
    uint32_t* output_data_size;           // 输出数据大小
} texture_processing_params_t;

/**
 * @brief 位标志处理结构体
 * @details 存储位标志处理的相关信息
 */
typedef struct {
    bit_flag_mask_t mask;                 // 位标志掩码
    bit_position_t position;              // 位位置
    uint8_t* output_buffer;               // 输出缓冲区
    uint32_t buffer_size;                 // 缓冲区大小
} bit_flag_info_t;

// =============================================================================
// 函数别名定义
// =============================================================================

// 颜色处理函数别名
#define rendering_system_color_extractor FUN_180428d50
#define rendering_system_5bit_to_8bit_converter FUN_180428d50

// 数据处理函数别名
#define rendering_system_data_buffer_processor FUN_180428de0
#define rendering_system_compression_handler FUN_180428de0
#define rendering_system_rle_decoder FUN_180428de0

// 像素处理函数别名
#define rendering_system_pixel_reader FUN_180429640
#define rendering_system_rle_data_processor FUN_180429640

// 纹理处理函数别名
#define rendering_system_texture_processor FUN_180429860
#define rendering_system_texture_loader FUN_180429860
#define rendering_system_mipmap_generator FUN_180429860

// 字符串处理函数别名
#define rendering_system_string_matcher FUN_18042a2c0
#define rendering_system_pattern_comparator FUN_18042a2c0

// 位标志处理函数别名
#define rendering_system_bit_flag_processor FUN_18042a360
#define rendering_system_bit_extractor FUN_18042a360

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * @brief 渲染系统颜色数据提取器
 * @details 从16位颜色值中提取RGB分量并转换为8位格式
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 输出颜色缓冲区指针（至少3字节）
 * 
 * @return void
 * 
 * @note 此函数从16位颜色值（RGB565格式）中提取红、绿、蓝三个分量，
 *       并将它们从5位格式转换为8位格式。转换公式为：
 *       8位值 = (5位值 × 255) / 31
 * 
 * @see COLOR_COMPONENT_MASK_5BIT, COLOR_COMPONENT_MAX_5BIT, COLOR_COMPONENT_MAX_8BIT
 */
void rendering_system_color_extractor(uint64_t param_1, int8_t *param_2)
{
    color_16bit_t color_16bit;
    
    // 获取16位颜色值
    color_16bit = FUN_18041f0a0();
    
    // 提取并转换红色分量（5位到8位）
    *param_2 = (color_component_8bit_t)(((color_16bit >> COLOR_RED_SHIFT_5BIT & COLOR_COMPONENT_MASK_5BIT) * 
                                        COLOR_COMPONENT_MAX_8BIT) / COLOR_COMPONENT_MAX_5BIT);
    
    // 提取并转换绿色分量（5位到8位）
    param_2[1] = (color_component_8bit_t)(((color_16bit >> COLOR_GREEN_SHIFT_5BIT & COLOR_COMPONENT_MASK_5BIT) * 
                                          COLOR_COMPONENT_MAX_8BIT) / COLOR_COMPONENT_MAX_5BIT);
    
    // 提取并转换蓝色分量（5位到8位）
    param_2[2] = (color_component_8bit_t)(((color_16bit >> COLOR_BLUE_SHIFT_5BIT & COLOR_COMPONENT_MASK_5BIT) * 
                                          COLOR_COMPONENT_MAX_8BIT) / COLOR_COMPONENT_MAX_5BIT);
    
    return;
}

/**
 * @brief 渲染系统数据缓冲处理器
 * @details 处理压缩数据缓冲区，支持RLE压缩解压和数据格式转换
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 输出数据宽度指针
 * @param param_3 输出数据高度指针
 * @param param_4 输出数据大小指针（可选）
 * 
 * @return int8_t* 解压后的数据缓冲区指针，失败时返回NULL
 * 
 * @note 此函数处理多种压缩格式，包括RLE压缩和原始数据。
 *       支持不同的位深度（1字节、2字节、3字节）和不同的数据排列方式。
 * 
 * @see DATA_COMPRESSION_RLE_MARKER_8, DATA_COMPRESSION_RLE_MARKER_15, DATA_COMPRESSION_RLE_MARKER_16
 */
int8_t *rendering_system_data_buffer_processor(int64_t param_1, int *param_2, uint *param_3, int *param_4)
{
    bool is_special_compression;
    int32_t compression_info;
    uint data_size;
    byte *buffer_ptr;
    byte *buffer_end;
    int8_t *output_buffer;
    byte first_byte;
    int8_t second_byte;
    int byte_count;
    uint compression_marker;
    int data_offset;
    uint64_t total_size;
    uint output_size;
    int pixel_size;
    uint64_t remaining_data;
    uint bytes_per_pixel;
    byte control_byte;
    int data_length;
    uint pixel_data;
    int64_t buffer_position;
    uint64_t chunk_size;
    uint64_t processed_size;
    byte pixel_data_byte;
    int run_length;
    uint bytes_to_process;
    int64_t temp_buffer;
    uint64_t data_chunk_size;
    byte temp_stack_byte;
    int32_t temp_stack_value;
    uint temp_stack_size;
    uint temp_stack_data;
    int temp_stack_int;
    int8_t *temp_stack_buffer;
    uint temp_stack_offset;
    uint temp_stack_capacity;
    int temp_stack_index;
    int64_t temp_stack_long;
    uint64_t temp_stack_ulong;
    
    // 获取缓冲区指针和结束位置
    buffer_ptr = *(byte **)(param_1 + 0xb8);
    buffer_end = *(byte **)(param_1 + 0xc0);
    
    // 读取第一个控制字节
    if (buffer_ptr < buffer_end) {
        first_byte = *buffer_ptr;
        buffer_ptr = buffer_ptr + 1;
        *(byte **)(param_1 + 0xb8) = buffer_ptr;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        first_byte = 0;
    }
    else {
        FUN_18041ee20(param_1);
        buffer_end = *(byte **)(param_1 + 0xc0);
        first_byte = **(byte **)(param_1 + 0xb8);
        buffer_ptr = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = buffer_ptr;
    }
    
    // 读取第二个控制字节
    if (buffer_ptr < buffer_end) {
        temp_stack_byte = *buffer_ptr;
        buffer_ptr = buffer_ptr + 1;
        *(byte **)(param_1 + 0xb8) = buffer_ptr;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        temp_stack_byte = 0;
    }
    else {
        FUN_18041ee20(param_1);
        buffer_end = *(byte **)(param_1 + 0xc0);
        temp_stack_byte = **(byte **)(param_1 + 0xb8);
        buffer_ptr = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = buffer_ptr;
    }
    
    // 读取压缩标记字节
    if (buffer_ptr < buffer_end) {
        control_byte = *buffer_ptr;
        *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        control_byte = 0;
    }
    else {
        FUN_18041ee20(param_1);
        control_byte = **(byte **)(param_1 + 0xb8);
        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
    }
    
    bytes_to_process = (uint)control_byte;
    compression_info = FUN_18041f0a0(param_1);
    temp_stack_capacity = FUN_18041f0a0(param_1);
    
    // 读取数据大小标记
    buffer_ptr = *(byte **)(param_1 + 0xb8);
    if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
        data_size = (uint)*buffer_ptr;
        *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        data_size = 0;
    }
    else {
        FUN_18041ee20(param_1);
        data_size = (uint)**(byte **)(param_1 + 0xb8);
        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
    }
    
    // 跳过同步数据
    FUN_18041f0a0(param_1);
    FUN_18041f0a0(param_1);
    temp_stack_int = FUN_18041f0a0(param_1);
    temp_stack_data = FUN_18041f0a0(param_1);
    
    // 读取更多控制数据
    buffer_ptr = *(byte **)(param_1 + 0xc0);
    buffer_end = *(byte **)(param_1 + 0xb8);
    if (buffer_end < buffer_ptr) {
        temp_stack_offset = (uint)*buffer_end;
        buffer_end = buffer_end + 1;
        *(byte **)(param_1 + 0xb8) = buffer_end;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        temp_stack_offset = 0;
    }
    else {
        FUN_18041ee20(param_1);
        buffer_ptr = *(byte **)(param_1 + 0xc0);
        temp_stack_offset = (uint)**(byte **)(param_1 + 0xb8);
        buffer_end = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = buffer_end;
    }
    
    // 读取像素数据字节
    if (buffer_end < buffer_ptr) {
        control_byte = *buffer_end;
        *(byte **)(param_1 + 0xb8) = buffer_end + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
        control_byte = 0;
    }
    else {
        FUN_18041ee20(param_1);
        control_byte = **(byte **)(param_1 + 0xb8);
        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
    }
    
    // 初始化处理变量
    processed_size = 0;
    temp_stack_long = 0;
    temp_stack_value = 0;
    chunk_size = 1;
    temp_stack_size = 0;
    is_special_compression = false;
    data_size = bytes_to_process - DATA_BUFFER_SIZE_THRESHOLD;
    if (bytes_to_process < DATA_BUFFER_SIZE_THRESHOLD) {
        data_size = bytes_to_process;
    }
    
    temp_stack_index = 1 - (control_byte >> 5 & 1);
    
    // 处理不同的压缩格式
    if (temp_stack_byte == 0) {
        if (temp_stack_offset == DATA_COMPRESSION_RLE_MARKER_8) goto LABEL_SPECIAL_COMPRESSION_1;
        if (temp_stack_offset != DATA_COMPRESSION_RLE_MARKER_15) {
            data_offset = temp_stack_offset - DATA_COMPRESSION_RLE_MARKER_16;
            compression_marker = temp_stack_offset;
            if (data_offset != 0) goto LABEL_STANDARD_COMPRESSION;
            if (data_size == 3) {
                chunk_size = 2;
                temp_stack_offset = 2;
                goto LABEL_COMPRESSION_DETECTED;
            }
        }
    LABEL_SPECIAL_COMPRESSION:
        chunk_size = 3;
        is_special_compression = true;
        temp_stack_offset = 3;
    }
    else if (data_size == DATA_COMPRESSION_RLE_MARKER_8) {
    LABEL_SPECIAL_COMPRESSION_1:
        temp_stack_offset = 1;
        chunk_size = 1;
    }
    else {
        if ((data_size == DATA_COMPRESSION_RLE_MARKER_15) || 
            (data_offset = data_size - DATA_COMPRESSION_RLE_MARKER_16, data_offset == 0)) 
            goto LABEL_SPECIAL_COMPRESSION;
    LABEL_STANDARD_COMPRESSION:
        if ((data_offset != DATA_COMPRESSION_RLE_MARKER_8) && (data_offset != DATA_COMPRESSION_RLE_MARKER_16)) {
            return (int8_t *)0x0;
        }
        temp_stack_offset = data_size >> 3;
        chunk_size = (uint64_t)temp_stack_offset;
        if (data_size >> 3 == 0) {
            return (int8_t *)0x0;
        }
    }
    
LABEL_COMPRESSION_DETECTED:
    // 设置输出参数
    *param_2 = temp_stack_int;
    *param_3 = temp_stack_data;
    if (param_4 != (int *)0x0) {
        *param_4 = (int)chunk_size;
    }
    
    // 验证数据完整性
    if ((((((temp_stack_int < 0) || ((int)temp_stack_data < 0)) ||
           ((temp_stack_data != 0 && ((int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)(int)temp_stack_data) < temp_stack_int)))) ||
          ((data_size = temp_stack_data * temp_stack_int, (int)data_size < 0 ||
           (data_offset = (int)(MEMORY_MAX_ALLOCATION_SIZE / chunk_size), data_offset < (int)data_size)))) ||
         ((temp_stack_data != 0 && ((int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)(int)temp_stack_data) < temp_stack_int)))) ||
        ((((int)data_size < 0 || (data_offset < (int)data_size)) ||
         (output_buffer = (int8_t *)
                   FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)((int)chunk_size * temp_stack_data * temp_stack_int),
                                 CONCAT71((int7)(chunk_size >> 8), MEMORY_ALIGNMENT_4BYTE)), output_buffer == (int8_t *)0x0)))) {
        return (int8_t *)0x0;
    }
    
    temp_stack_buffer = output_buffer;
    func_0x00018041ee90(param_1, first_byte);
    
    // 处理未压缩数据
    if (temp_stack_byte == 0) {
        if ((bytes_to_process < DATA_BUFFER_SIZE_THRESHOLD) && (!is_special_compression)) {
            if (0 < (int)temp_stack_data) {
                chunk_size = (uint64_t)temp_stack_data;
                data_offset = temp_stack_int * temp_stack_offset;
                if (temp_stack_index == 0) {
                    buffer_ptr = output_buffer;
                    do {
                        FUN_18041eef0(param_1, buffer_ptr, data_offset);
                        buffer_ptr = buffer_ptr + data_offset;
                        chunk_size = chunk_size - 1;
                    } while (chunk_size != 0);
                }
                else {
                    buffer_ptr = output_buffer + (int)((temp_stack_data - 1) * temp_stack_offset * temp_stack_int);
                    do {
                        FUN_18041eef0(param_1, buffer_ptr, data_offset);
                        buffer_ptr = buffer_ptr + -data_offset;
                        chunk_size = chunk_size - 1;
                    } while (chunk_size != 0);
                }
            }
            goto LABEL_PROCESSING_COMPLETE;
        }
    }
    else {
        func_0x00018041ee90(param_1, compression_info);
        data_size = temp_stack_capacity;
        if (((int)temp_stack_capacity < 0) || (data_offset < (int)temp_stack_capacity)) {
        LABEL_MEMORY_ERROR:
                    // WARNING: Subroutine does not return
            FUN_18064e900(output_buffer);
        }
        data_offset = temp_stack_offset * temp_stack_capacity;
        temp_buffer = FUN_18062b420(system_memory_pool_ptr, (int64_t)data_offset, MEMORY_ALIGNMENT_4BYTE);
        temp_stack_long = temp_buffer;
        if (temp_buffer == 0) goto LABEL_MEMORY_ERROR;
        
        if (is_special_compression) {
            if (0 < (int)data_size) {
                chunk_size = (uint64_t)data_size;
                do {
                    rendering_system_color_extractor(param_1, temp_buffer);
                    temp_buffer = temp_buffer + (uint64_t)temp_stack_offset;
                    chunk_size = chunk_size - 1;
                } while (chunk_size != 0);
            }
        }
        else {
            data_offset = FUN_18041eef0(param_1, temp_buffer, data_offset);
            if (data_offset == 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(output_buffer);
            }
        }
    }
    
    // 处理压缩数据
    chunk_size = (uint64_t)temp_stack_offset;
    buffer_ptr = output_buffer;
    if (0 < (int)data_size) {
        data_chunk_size = (uint64_t)data_size;
        temp_buffer = -(int64_t)output_buffer;
        remaining_data = processed_size;
        uint64_t temp_remaining = processed_size;
        do {
            if (bytes_to_process < DATA_BUFFER_SIZE_THRESHOLD) {
            LABEL_PROCESS_RAW_DATA:
                chunk_size = processed_size;
                if (temp_stack_byte == 0) {
                    if (is_special_compression) {
                        rendering_system_color_extractor(param_1, &temp_stack_value);
                        data_size = temp_stack_size;
                    }
                    else {
                        remaining_data = processed_size;
                        data_size = temp_stack_size;
                        if (chunk_size != 0) {
                            do {
                                buffer_ptr = *(int8_t **)(param_1 + 0xb8);
                                if (buffer_ptr < *(int8_t **)(param_1 + 0xc0)) {
                                    second_byte = *buffer_ptr;
                                    *(int8_t **)(param_1 + 0xb8) = buffer_ptr + 1;
                                }
                                else if (*(int *)(param_1 + 0x30) == 0) {
                                    second_byte = 0;
                                }
                                else {
                                    FUN_18041ee20(param_1);
                                    second_byte = **(int8_t **)(param_1 + 0xb8);
                                    *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
                                }
                                *(int8_t *)((int64_t)&temp_stack_value + remaining_data) = second_byte;
                                remaining_data = remaining_data + 1;
                                data_size = temp_stack_size;
                            } while ((int64_t)remaining_data < (int64_t)chunk_size);
                        }
                    }
                }
                else {
                    if (temp_stack_offset == DATA_COMPRESSION_RLE_MARKER_8) {
                        buffer_ptr = *(byte **)(param_1 + 0xb8);
                        if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
                            first_byte = *buffer_ptr;
                            *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
                            compression_marker = (uint)first_byte;
                        }
                        else if (*(int *)(param_1 + 0x30) == 0) {
                            compression_marker = 0;
                        }
                        else {
                            FUN_18041ee20(param_1);
                            first_byte = **(byte **)(param_1 + 0xb8);
                            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                            compression_marker = (uint)first_byte;
                        }
                    }
                    else {
                        compression_marker = FUN_18041f0a0(param_1);
                    }
                    
                    if ((int)temp_stack_capacity <= (int)compression_marker) {
                        compression_marker = 0;
                    }
                    
                    data_size = temp_stack_size;
                    if (chunk_size != 0) {
                            // WARNING: Subroutine does not return
                        memcpy(&temp_stack_value, (int)(compression_marker * temp_stack_offset) + temp_stack_long, chunk_size);
                    }
                }
            }
            else {
                if ((uint)remaining_data == 0) {
                    buffer_ptr = *(byte **)(param_1 + 0xb8);
                    if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
                        data_size = (uint)*buffer_ptr;
                        *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
                    }
                    else if (*(int *)(param_1 + 0x30) == 0) {
                        data_size = 0;
                    }
                    else {
                        FUN_18041ee20(param_1);
                        data_size = (uint)**(byte **)(param_1 + 0xb8);
                        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                    }
                    temp_remaining = (uint64_t)(data_size >> 7);
                    temp_stack_size = (data_size & 0x7f) + 1;
                    goto LABEL_PROCESS_RAW_DATA;
                }
                if (((int)temp_remaining == 0) || (data_size = (uint)remaining_data, (int)chunk_size != 0)) goto LABEL_PROCESS_RAW_DATA;
            }
            
            if (chunk_size != 0) {
                buffer_ptr = output_buffer;
                do {
                    *buffer_ptr = buffer_ptr[(int64_t)&temp_stack_value + temp_buffer];
                    buffer_ptr = buffer_ptr + 1;
                } while ((int64_t)(buffer_ptr + temp_buffer) < (int64_t)chunk_size);
            }
            
            remaining_data = (uint64_t)(data_size - 1);
            temp_buffer = temp_buffer - (uint64_t)temp_stack_offset;
            temp_stack_size = data_size - 1;
            output_buffer = output_buffer + temp_stack_offset;
            data_chunk_size = data_chunk_size - 1;
            buffer_ptr = temp_stack_buffer;
        } while (data_chunk_size != 0);
    }
    
    // 处理数据顺序反转
    if ((temp_stack_index != 0) && (0 < (int)temp_stack_data)) {
        run_length = temp_stack_offset * temp_stack_int;
        data_offset = (temp_stack_data - 1) * temp_stack_offset * temp_stack_int;
        chunk_size = processed_size;
        do {
            byte_count = (int)processed_size;
            if (0 < run_length) {
                temp_buffer = (int64_t)data_offset - (int64_t)byte_count;
                output_buffer = buffer_ptr + byte_count;
                data_length = run_length;
                do {
                    data_length = data_length + -1;
                    second_byte = *output_buffer;
                    *output_buffer = output_buffer[temp_buffer];
                    output_buffer[temp_buffer] = second_byte;
                    output_buffer = output_buffer + 1;
                } while (0 < data_length);
            }
            processed_size = (uint64_t)(uint)(byte_count + run_length);
            data_offset = data_offset - run_length;
            bytes_to_process = (int)chunk_size + 2;
            chunk_size = (uint64_t)bytes_to_process;
        } while ((int)bytes_to_process < (int)temp_stack_data);
    }
    
    output_buffer = temp_stack_buffer;
    if (temp_stack_long != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(temp_stack_long);
    }
    
LABEL_PROCESSING_COMPLETE:
    // 处理RGB分量顺序
    if (temp_stack_offset < 3) {
        return output_buffer;
    }
    if (!is_special_compression) {
        if (0 < (int)data_size) {
            chunk_size = (uint64_t)data_size;
            buffer_ptr = output_buffer;
            do {
                second_byte = *buffer_ptr;
                *buffer_ptr = buffer_ptr[2];
                buffer_ptr[2] = second_byte;
                buffer_ptr = buffer_ptr + temp_stack_offset;
                chunk_size = chunk_size - 1;
            } while (chunk_size != 0);
            return output_buffer;
        }
        return output_buffer;
    }
    return output_buffer;
}

/**
 * @brief 渲染系统像素数据读取器
 * @details 从数据流中读取像素数据，支持RLE压缩和原始数据格式
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 输出像素缓冲区指针
 * @param param_3 要读取的像素数量
 * 
 * @return uint64_t 成功返回1，失败返回0
 * 
 * @note 此函数处理RLE压缩的像素数据，支持两种主要的压缩模式：
 *       1. 字节值 < 0x80: 原始数据模式，后跟字节数+1个原始像素
 *       2. 字节值 > 0x80: RLE压缩模式，重复0x101-字节值次当前像素
 * 
 * @see DATA_COMPRESSION_RLE_MARKER_128, DATA_COMPRESSION_RLE_MAX_RUN
 */
uint64_t rendering_system_pixel_reader(int64_t param_1, byte *param_2, int param_3)
{
    int8_t *stream_ptr;
    int bytes_read;
    byte *buffer_ptr;
    byte pixel_value;
    uint run_length;
    int remaining_pixels;
    int pixel_count;
    
    pixel_count = 0;
    remaining_pixels = param_3;
    if (0 < param_3) {
        do {
            buffer_ptr = *(byte **)(param_1 + 0xb8);
            if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
                run_length = (uint)*buffer_ptr;
                buffer_ptr = buffer_ptr + 1;
                *(byte **)(param_1 + 0xb8) = buffer_ptr;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
                run_length = 0;
            }
            else {
                stream_ptr = (int8_t *)(param_1 + 0x38);
                bytes_read = (**(code **)(param_1 + 0x10))
                              (*(uint64_t *)(param_1 + 0x28), stream_ptr, *(int32_t *)(param_1 + 0x34));
                *(int8_t **)(param_1 + 0xb8) = stream_ptr;
                if (bytes_read == 0) {
                    *(int32_t *)(param_1 + 0x30) = 0;
                    *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
                    *stream_ptr = 0;
                }
                else {
                    *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)bytes_read;
                }
                run_length = (uint)**(byte **)(param_1 + 0xb8);
                buffer_ptr = *(byte **)(param_1 + 0xb8) + 1;
                *(byte **)(param_1 + 0xb8) = buffer_ptr;
            }
            
            // 处理不同的压缩模式
            if (run_length != DATA_COMPRESSION_RLE_MARKER_128) {
                if (run_length < DATA_COMPRESSION_RLE_MARKER_128) {
                    // 原始数据模式
                    bytes_read = run_length + 1;
                    if (remaining_pixels < bytes_read) {
                        return 0;
                    }
                    pixel_count = pixel_count + bytes_read;
                    do {
                        buffer_ptr = *(byte **)(param_1 + 0xb8);
                        if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
                            pixel_value = *buffer_ptr;
                            *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
                        }
                        else if (*(int *)(param_1 + 0x30) == 0) {
                            pixel_value = 0;
                        }
                        else {
                            stream_ptr = (int8_t *)(param_1 + 0x38);
                            remaining_pixels = (**(code **)(param_1 + 0x10))
                                              (*(uint64_t *)(param_1 + 0x28), stream_ptr,
                                               *(int32_t *)(param_1 + 0x34));
                            *(int8_t **)(param_1 + 0xb8) = stream_ptr;
                            if (remaining_pixels == 0) {
                                *(int32_t *)(param_1 + 0x30) = 0;
                                *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
                                *stream_ptr = 0;
                            }
                            else {
                                *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)remaining_pixels;
                            }
                            pixel_value = **(byte **)(param_1 + 0xb8);
                            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                        }
                        *param_2 = pixel_value;
                        param_2 = param_2 + 4;
                        bytes_read = bytes_read + -1;
                    } while (bytes_read != 0);
                }
                else if (DATA_COMPRESSION_RLE_MARKER_128 < run_length) {
                    // RLE压缩模式
                    bytes_read = DATA_COMPRESSION_RLE_MAX_RUN - run_length;
                    if (remaining_pixels < bytes_read) {
                        return 0;
                    }
                    if (buffer_ptr < *(byte **)(param_1 + 0xc0)) {
                        pixel_value = *buffer_ptr;
                        *(byte **)(param_1 + 0xb8) = buffer_ptr + 1;
                    }
                    else if (*(int *)(param_1 + 0x30) == 0) {
                        pixel_value = 0;
                    }
                    else {
                        FUN_18041ee20(param_1);
                        pixel_value = **(byte **)(param_1 + 0xb8);
                        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                    }
                    pixel_count = pixel_count + bytes_read;
                    for (; bytes_read != 0; bytes_read = bytes_read + -1) {
                        *param_2 = pixel_value;
                        param_2 = param_2 + 4;
                    }
                }
            }
            remaining_pixels = param_3 - pixel_count;
        } while (0 < param_3 - pixel_count);
    }
    return 1;
}

/**
 * @brief 渲染系统纹理数据处理器
 * @details 加载和处理纹理数据，支持多种格式和Mipmap生成
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 输出纹理宽度指针
 * @param param_3 输出纹理高度指针
 * @param param_4 输出纹理格式指针
 * @param param_5 纹理处理参数
 * @param param_6 输出Mipmap格式指针
 * @param param_7 纹理处理标志
 * 
 * @return int16_t* 成功返回纹理数据指针，失败返回NULL
 * 
 * @note 此函数处理完整的纹理加载流程，包括：
 *       1. 验证纹理文件头部魔数和版本
 *       2. 解析纹理维度和格式信息
 *       3. 分配纹理数据内存
 *       4. 加载纹理数据（支持压缩和原始格式）
 *       5. 生成Mipmap层级
 *       6. 应用纹理优化处理
 * 
 * @see TEXTURE_MAGIC_HEADER, TEXTURE_VERSION_1, TEXTURE_FORMAT_16BIT, TEXTURE_FORMAT_32BIT
 */
int16_t *
rendering_system_texture_processor(int64_t param_1, int *param_2, int *param_3, int32_t *param_4, uint64_t param_5,
                                  int *param_6, int param_7)
{
    int64_t *stream_position;
    int16_t texture_data;
    int8_t alpha_component;
    int texture_width;
    int texture_height;
    uint texture_format;
    int mipmap_count;
    int pixel_format;
    int32_t format_info;
    uint64_t total_pixels;
    int16_t *texture_buffer;
    int8_t pixel_byte;
    ushort *pixel_ptr;
    byte *byte_ptr;
    int8_t *data_ptr;
    int64_t buffer_position;
    uint pixel_count;
    int64_t row_position;
    int64_t column_position;
    int16_t *output_ptr;
    int16_t *current_ptr;
    float normalization_factor;
    float bias_factor;
    int16_t *stack_buffer;
    
    // 读取纹理魔数和版本信息
    texture_width = FUN_18041efc0();
    texture_height = FUN_18041efc0(param_1);
    if ((texture_height + texture_width * 0x10000 == TEXTURE_MAGIC_HEADER) && 
        (texture_width = FUN_18041efc0(param_1), texture_width == TEXTURE_VERSION_1)) {
        
        stream_position = (int64_t *)(param_1 + 0xb8);
        if ((*(int64_t *)(param_1 + 0x10) == 0) ||
           (texture_width = *(int *)(param_1 + 0xc0) - *(int *)stream_position, 5 < texture_width)) {
            *stream_position = *stream_position + 6;
        }
        else {
            *stream_position = *(int64_t *)(param_1 + 0xc0);
            (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28), 6 - texture_width);
        }
        
        // 读取纹理格式信息
        texture_format = FUN_18041efc0(param_1);
        if (texture_format < TEXTURE_DIMENSION_MAX) {
            texture_width = FUN_18041f070(param_1);
            texture_height = FUN_18041f070(param_1);
            mipmap_count = FUN_18041efc0(param_1);
            if (((mipmap_count - 8U & 0xfffffff7) == 0) && 
                (pixel_format = FUN_18041efc0(param_1), pixel_format == TEXTURE_COMPONENT_COUNT_4)) {
                
                format_info = FUN_18041f070(param_1);
                func_0x00018041ee90(param_1, format_info);
                format_info = FUN_18041f070(param_1);
                func_0x00018041ee90(param_1, format_info);
                format_info = FUN_18041f070(param_1);
                func_0x00018041ee90(param_1, format_info);
                
                pixel_format = FUN_18041efc0(param_1);
                if ((((pixel_format < 2) && (-1 < texture_height)) &&
                    ((((texture_height == 0 || (3 < (int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)texture_height))) && 
                       (-1 < texture_height * 4)) && (-1 < texture_width))) && 
                   ((texture_width == 0 || (texture_height * 4 <= (int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)texture_width))))) {
                    
                    pixel_count = texture_height * texture_width;
                    if ((pixel_format == 0) && ((mipmap_count == TEXTURE_FORMAT_16BIT && (param_7 == TEXTURE_FORMAT_16BIT)))) {
                        if ((((texture_height == 0) || (7 < (int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)texture_height))) && 
                           ((-1 < texture_height * 8)) &&
                           ((texture_width == 0 || (texture_height * 8 <= (int)(MEMORY_MAX_ALLOCATION_SIZE / (int64_t)texture_width))))) {
                            stack_buffer = (int16_t *)
                                         FUN_18062b420(system_memory_pool_ptr, (int64_t)(int)(pixel_count * 8), MEMORY_ALIGNMENT_4BYTE);
                            *param_6 = TEXTURE_FORMAT_16BIT;
                        }
                        else {
                            stack_buffer = (int16_t *)0x0;
                            *param_6 = TEXTURE_FORMAT_16BIT;
                        }
                    }
                    else {
                        stack_buffer = (int16_t *)
                                     FUN_18062b420(system_memory_pool_ptr, (int64_t)(int)(pixel_count * 4), MEMORY_ALIGNMENT_4BYTE);
                    }
                    
                    if (stack_buffer != (int16_t *)0x0) {
                        if (pixel_format == 0) {
                            // 处理Mipmap纹理
                            pixel_format = 0;
                            output_ptr = stack_buffer;
                            current_ptr = stack_buffer;
                            do {
                                if (pixel_format < (int)texture_format) {
                                    if (*param_6 == TEXTURE_FORMAT_16BIT) {
                                        if (0 < (int)pixel_count) {
                                            total_pixels = (uint64_t)pixel_count;
                                            texture_buffer = current_ptr;
                                            do {
                                                texture_data = FUN_18041efc0(param_1);
                                                *texture_buffer = texture_data;
                                                texture_buffer = texture_buffer + 4;
                                                total_pixels = total_pixels - 1;
                                            } while (total_pixels != 0);
                                        }
                                    }
                                    else if (mipmap_count == TEXTURE_FORMAT_16BIT) {
                                        if (0 < (int)pixel_count) {
                                            total_pixels = (uint64_t)pixel_count;
                                            texture_buffer = output_ptr;
                                            do {
                                                FUN_18041efc0(param_1);
                                                *(int8_t *)texture_buffer = alpha_component;
                                                texture_buffer = texture_buffer + 2;
                                                total_pixels = total_pixels - 1;
                                            } while (total_pixels != 0);
                                        }
                                    }
                                    else if (0 < (int)pixel_count) {
                                        total_pixels = (uint64_t)pixel_count;
                                        texture_buffer = output_ptr;
                                        do {
                                            data_ptr = (int8_t *)*stream_position;
                                            if (data_ptr < *(int8_t **)(param_1 + 0xc0)) {
                                                pixel_byte = *data_ptr;
                                                *stream_position = (int64_t)(data_ptr + 1);
                                            }
                                            else if (*(int *)(param_1 + 0x30) == 0) {
                                                pixel_byte = 0;
                                            }
                                            else {
                                                FUN_18041ee20(param_1);
                                                pixel_byte = *(int8_t *)*stream_position;
                                                *stream_position = (int64_t)((int8_t *)*stream_position + 1);
                                            }
                                            *(int8_t *)texture_buffer = pixel_byte;
                                            texture_buffer = texture_buffer + 2;
                                            total_pixels = total_pixels - 1;
                                        } while (total_pixels != 0);
                                    }
                                }
                                else if ((mipmap_count == TEXTURE_FORMAT_16BIT) && (param_7 == TEXTURE_FORMAT_16BIT)) {
                                    texture_data = 0;
                                    if (pixel_format == 3) {
                                        texture_data = 0xffff;
                                    }
                                    if (0 < (int)pixel_count) {
                                        total_pixels = (uint64_t)pixel_count;
                                        texture_buffer = current_ptr;
                                        do {
                                            *texture_buffer = texture_data;
                                            texture_buffer = texture_buffer + 4;
                                            total_pixels = total_pixels - 1;
                                        } while (total_pixels != 0);
                                    }
                                }
                                else {
                                    pixel_byte = 0;
                                    if (pixel_format == 3) {
                                        pixel_byte = 0xff;
                                    }
                                    if (0 < (int)pixel_count) {
                                        total_pixels = (uint64_t)pixel_count;
                                        texture_buffer = output_ptr;
                                        do {
                                            *(int8_t *)texture_buffer = pixel_byte;
                                            texture_buffer = texture_buffer + 2;
                                            total_pixels = total_pixels - 1;
                                        } while (total_pixels != 0);
                                    }
                                }
                                pixel_format = pixel_format + 1;
                                current_ptr = current_ptr + 1;
                                output_ptr = (int16_t *)((int64_t)output_ptr + 1);
                            } while (pixel_format < TEXTURE_MIPMAP_LEVEL_MAX);
                        }
                        else {
                            // 处理压缩纹理数据
                            func_0x00018041ee90(param_1, texture_width * texture_format * 2);
                            mipmap_count = 0;
                            do {
                                data_ptr = (int8_t *)((int64_t)mipmap_count + (int64_t)stack_buffer);
                                if (mipmap_count < (int)texture_format) {
                                    pixel_format = rendering_system_pixel_reader(param_1, data_ptr, pixel_count);
                                    if (pixel_format == 0) {
                                        // WARNING: Subroutine does not return
                                        FUN_18064e900(stack_buffer);
                                    }
                                }
                                else if (0 < (int)pixel_count) {
                                    pixel_byte = 0;
                                    if (mipmap_count == 3) {
                                        pixel_byte = 0xff;
                                    }
                                    total_pixels = (uint64_t)pixel_count;
                                    do {
                                        *data_ptr = pixel_byte;
                                        data_ptr = data_ptr + 4;
                                        total_pixels = total_pixels - 1;
                                    } while (total_pixels != 0);
                                }
                                mipmap_count = mipmap_count + 1;
                            } while (mipmap_count < TEXTURE_MIPMAP_LEVEL_MAX);
                        }
                        
                        // 应用纹理优化处理
                        row_position = 0;
                        if (3 < (int)texture_format) {
                            column_position = (int64_t)(int)pixel_count;
                            if (*param_6 == TEXTURE_FORMAT_16BIT) {
                                if (3 < column_position) {
                                    pixel_ptr = stack_buffer + 5;
                                    buffer_position = (column_position - 4U >> 2) + 1;
                                    row_position = buffer_position * 4;
                                    do {
                                        // 处理16位纹理数据的像素归一化
                                        if ((ushort)(pixel_ptr[-2] - 1) < 0xfffe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_16BIT / (float)pixel_ptr[-2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_16BIT;
                                            pixel_ptr[-5] = (ushort)(int)((float)pixel_ptr[-5] * normalization_factor + bias_factor);
                                            pixel_ptr[-4] = (ushort)(int)((float)pixel_ptr[-4] * normalization_factor + bias_factor);
                                            pixel_ptr[-3] = (ushort)(int)((float)pixel_ptr[-3] * normalization_factor + bias_factor);
                                        }
                                        if ((ushort)(pixel_ptr[2] - 1) < 0xfffe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_16BIT / (float)pixel_ptr[2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_16BIT;
                                            pixel_ptr[-1] = (ushort)(int)((float)pixel_ptr[-1] * normalization_factor + bias_factor);
                                            *pixel_ptr = (ushort)(int)((float)*pixel_ptr * normalization_factor + bias_factor);
                                            pixel_ptr[1] = (ushort)(int)((float)pixel_ptr[1] * normalization_factor + bias_factor);
                                        }
                                        if ((ushort)(pixel_ptr[6] - 1) < 0xfffe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_16BIT / (float)pixel_ptr[6];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_16BIT;
                                            pixel_ptr[3] = (ushort)(int)((float)pixel_ptr[3] * normalization_factor + bias_factor);
                                            pixel_ptr[4] = (ushort)(int)((float)pixel_ptr[4] * normalization_factor + bias_factor);
                                            pixel_ptr[5] = (ushort)(int)((float)pixel_ptr[5] * normalization_factor + bias_factor);
                                        }
                                        if ((ushort)(pixel_ptr[10] - 1) < 0xfffe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_16BIT / (float)pixel_ptr[10];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_16BIT;
                                            pixel_ptr[7] = (ushort)(int)((float)pixel_ptr[7] * normalization_factor + bias_factor);
                                            pixel_ptr[8] = (ushort)(int)((float)pixel_ptr[8] * normalization_factor + bias_factor);
                                            pixel_ptr[9] = (ushort)(int)((float)pixel_ptr[9] * normalization_factor + bias_factor);
                                        }
                                        pixel_ptr = pixel_ptr + 0x10;
                                        buffer_position = buffer_position + -1;
                                    } while (buffer_position != 0);
                                }
                                if (row_position < column_position) {
                                    pixel_ptr = stack_buffer + row_position * 4 + 1;
                                    column_position = column_position - row_position;
                                    do {
                                        if ((ushort)(pixel_ptr[2] - 1) < 0xfffe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_16BIT / (float)pixel_ptr[2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_16BIT;
                                            pixel_ptr[-1] = (ushort)(int)((float)pixel_ptr[-1] * normalization_factor + bias_factor);
                                            *pixel_ptr = (ushort)(int)((float)*pixel_ptr * normalization_factor + bias_factor);
                                            pixel_ptr[1] = (ushort)(int)((float)pixel_ptr[1] * normalization_factor + bias_factor);
                                        }
                                        pixel_ptr = pixel_ptr + 4;
                                        column_position = column_position + -1;
                                    } while (column_position != 0);
                                }
                            }
                            else {
                                // 处理8位纹理数据的像素归一化
                                if (3 < column_position) {
                                    byte_ptr = (byte *)((int64_t)stack_buffer + 5);
                                    buffer_position = (column_position - 4U >> 2) + 1;
                                    row_position = buffer_position * 4;
                                    do {
                                        if ((byte)(byte_ptr[-2] - 1) < 0xfe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_8BIT / (float)byte_ptr[-2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_8BIT;
                                            byte_ptr[-5] = (byte)(int)((float)byte_ptr[-5] * normalization_factor + bias_factor);
                                            byte_ptr[-4] = (byte)(int)((float)byte_ptr[-4] * normalization_factor + bias_factor);
                                            byte_ptr[-3] = (byte)(int)((float)byte_ptr[-3] * normalization_factor + bias_factor);
                                        }
                                        if ((byte)(byte_ptr[2] - 1) < 0xfe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_8BIT / (float)byte_ptr[2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_8BIT;
                                            byte_ptr[-1] = (byte)(int)((float)byte_ptr[-1] * normalization_factor + bias_factor);
                                            *byte_ptr = (byte)(int)((float)*byte_ptr * normalization_factor + bias_factor);
                                            byte_ptr[1] = (byte)(int)((float)byte_ptr[1] * normalization_factor + bias_factor);
                                        }
                                        if ((byte)(byte_ptr[6] - 1) < 0xfe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_8BIT / (float)byte_ptr[6];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_8BIT;
                                            byte_ptr[3] = (byte)(int)((float)byte_ptr[3] * normalization_factor + bias_factor);
                                            byte_ptr[4] = (byte)(int)((float)byte_ptr[4] * normalization_factor + bias_factor);
                                            byte_ptr[5] = (byte)(int)((float)byte_ptr[5] * normalization_factor + bias_factor);
                                        }
                                        if ((byte)(byte_ptr[10] - 1) < 0xfe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_8BIT / (float)byte_ptr[10];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_8BIT;
                                            byte_ptr[7] = (byte)(int)((float)byte_ptr[7] * normalization_factor + bias_factor);
                                            byte_ptr[8] = (byte)(int)((float)byte_ptr[8] * normalization_factor + bias_factor);
                                            byte_ptr[9] = (byte)(int)((float)byte_ptr[9] * normalization_factor + bias_factor);
                                        }
                                        byte_ptr = byte_ptr + 0x10;
                                        buffer_position = buffer_position + -1;
                                    } while (buffer_position != 0);
                                }
                                if (row_position < column_position) {
                                    byte_ptr = (byte *)(row_position * 4 + 1 + (int64_t)stack_buffer);
                                    column_position = column_position - row_position;
                                    do {
                                        if ((byte)(byte_ptr[2] - 1) < 0xfe) {
                                            normalization_factor = PIXEL_COMPONENT_MAX_8BIT / (float)byte_ptr[2];
                                            bias_factor = (1.0 - normalization_factor) * PIXEL_COMPONENT_MAX_8BIT;
                                            byte_ptr[-1] = (byte)(int)((float)byte_ptr[-1] * normalization_factor + bias_factor);
                                            *byte_ptr = (byte)(int)((float)*byte_ptr * normalization_factor + bias_factor);
                                            byte_ptr[1] = (byte)(int)((float)byte_ptr[1] * normalization_factor + bias_factor);
                                        }
                                        byte_ptr = byte_ptr + 4;
                                        column_position = column_position + -1;
                                    } while (column_position != 0);
                                }
                            }
                        }
                        
                        // 设置输出参数
                        if (param_4 != (int32_t *)0x0) {
                            *param_4 = 4;
                        }
                        *param_3 = texture_width;
                        *param_2 = texture_height;
                        return stack_buffer;
                    }
                }
            }
        }
    }
    return (int16_t *)0x0;
}

/**
 * @brief 渲染系统字符串匹配器
 * @details 在数据流中查找指定的字符串模式
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 要匹配的字符串模式指针
 * 
 * @return uint64_t 匹配成功返回1，失败返回0
 * 
 * @note 此函数在数据流中查找最多4个字符的匹配模式，
 *       主要用于纹理和资源文件格式的识别。
 * 
 * @see STRING_MAX_COMPARE_LENGTH, STRING_TERMINATOR
 */
uint64_t rendering_system_string_matcher(int64_t param_1, int64_t param_2)
{
    char *stream_ptr;
    char current_char;
    int64_t match_position;
    
    match_position = 0;
    while( true ) {
        stream_ptr = *(char **)(param_1 + 0xb8);
        if (stream_ptr < *(char **)(param_1 + 0xc0)) {
            current_char = *stream_ptr;
            *(char **)(param_1 + 0xb8) = stream_ptr + 1;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
            current_char = STRING_TERMINATOR;
        }
        else {
            FUN_18041ee20(param_1);
            current_char = **(char **)(param_1 + 0xb8);
            *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
        }
        if (current_char != *(char *)(match_position + param_2)) break;
        match_position = match_position + 1;
        if (STRING_MAX_COMPARE_LENGTH - 1 < match_position) {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 渲染系统位标志处理器
 * @details 根据位标志掩码从数据流中提取特定位的数据
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 位标志掩码
 * @param param_3 输出缓冲区指针
 * 
 * @return int64_t 成功返回输出缓冲区指针，失败返回0
 * 
 * @note 此函数根据掩码的每一位决定是否从数据流中读取数据，
 *       最多处理4位数据。主要用于处理压缩数据中的控制信息。
 * 
 * @see BIT_FLAG_SHIFT_START, BIT_FLAG_MAX_POSITION
 */
int64_t rendering_system_bit_flag_processor(int64_t param_1, uint param_2, int64_t param_3)
{
    int stream_status;
    int8_t *stream_ptr;
    int8_t data_byte;
    int8_t *buffer_ptr;
    uint bit_mask;
    int64_t write_position;
    
    bit_mask = BIT_FLAG_SHIFT_START;
    write_position = 0;
    do {
        if ((param_2 & bit_mask) != 0) {
            if (*(int64_t *)(param_1 + 0x10) == 0) {
            LABEL_STREAM_ERROR:
                stream_ptr = *(int8_t **)(param_1 + 0xb8);
                buffer_ptr = *(int8_t **)(param_1 + 0xc0);
                if (buffer_ptr <= stream_ptr) {
                    return 0;
                }
            }
            else {
                stream_status = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
                if (stream_status != 0) {
                    if (*(int *)(param_1 + 0x30) == 0) {
                        return 0;
                    }
                    goto LABEL_STREAM_ERROR;
                }
                stream_ptr = *(int8_t **)(param_1 + 0xb8);
                buffer_ptr = *(int8_t **)(param_1 + 0xc0);
            }
            
            if (stream_ptr < buffer_ptr) {
                data_byte = *stream_ptr;
                *(int8_t **)(param_1 + 0xb8) = stream_ptr + 1;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
                data_byte = 0;
            }
            else {
                FUN_18041ee20(param_1);
                data_byte = **(int8_t **)(param_1 + 0xb8);
                *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
            }
            *(int8_t *)(write_position + param_3) = data_byte;
        }
        write_position = write_position + 1;
        bit_mask = (int)bit_mask >> 1;
        if (BIT_FLAG_MAX_POSITION - 1 < write_position) {
            return param_3;
        }
    } while( true );
}

// =============================================================================
// 模块功能文档
// =============================================================================

/**
 * @brief 渲染系统高级颜色处理和数据转换模块
 * 
 * @details 本模块提供了渲染系统中的高级颜色处理和数据转换功能，
 *          包含6个核心函数，涵盖了从基础的RGB颜色空间转换到复杂的
 *          纹理数据处理和压缩算法支持。
 * 
 * @module 03_rendering_part300_sub002_sub002
 * @version 1.0
 * @author TaleWorlds Engine Team
 * @date 2025
 * 
 * 主要功能：
 * - 颜色数据提取和转换（5位到8位）
 * - 数据缓冲区处理和RLE压缩解压
 * - 像素数据读取和处理
 * - 纹理数据加载和Mipmap生成
 * - 字符串模式匹配
 * - 位标志数据处理
 * 
 * 技术特点：
 * - 支持多种颜色格式（RGB565、RGB888等）
 * - 实现了高效的RLE压缩算法
 * - 提供了完整的纹理处理管线
 * - 支持Mipmap纹理生成
 * - 包含像素归一化优化处理
 * - 提供了灵活的数据流处理机制
 * 
 * 应用场景：
 * - 游戏引擎纹理加载
 * - 图像数据处理和转换
 * - 压缩纹理解压
 * - 渲染管线数据处理
 * - 资源文件解析
 * 
 * @see rendering_system_color_extractor, rendering_system_data_buffer_processor
 * @see rendering_system_pixel_reader, rendering_system_texture_processor
 * @see rendering_system_string_matcher, rendering_system_bit_flag_processor
 */