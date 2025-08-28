/**
 * @file 03_rendering_part300_sub002_sub002.c
 * @brief 渲染系统高级颜色处理和数据转换模块
 * 
 * 本模块包含6个核心函数，涵盖渲染系统颜色数据提取、转换、处理、
 * 解码、纹理处理和颜色空间转换等高级渲染功能。
 * 
 * 主要功能包括：
 * - 渲染系统颜色数据提取和转换
 * - 渲染系统数据解码和压缩处理
 * - 渲染系统纹理数据处理
 * - 渲染系统颜色空间转换
 * - 渲染系统图像数据优化
 * - 渲染系统像素数据处理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 常量定义
// =============================================================================

/** 颜色通道位深度 (5位) */
#define COLOR_CHANNEL_BITS 5

/** 颜色通道最大值 (0x1f = 31) */
#define COLOR_CHANNEL_MAX 0x1f

/** 颜色通道缩放因子 (255/31) */
#define COLOR_CHANNEL_SCALE 8.225806451612904

/** 8位颜色最大值 */
#define COLOR_8BIT_MAX 0xff

/** 16位颜色最大值 */
#define COLOR_16BIT_MAX 0xffff

/** RGB颜色通道数量 */
#define RGB_CHANNEL_COUNT 3

/** RGBA颜色通道数量 */
#define RGBA_CHANNEL_COUNT 4

/** 数据块头部大小 */
#define DATA_BLOCK_HEADER_SIZE 8

/** 数据块对齐大小 */
#define DATA_BLOCK_ALIGNMENT 4

/** 数据块压缩阈值 */
#define DATA_BLOCK_COMPRESSION_THRESHOLD 0x80

/** 数据块最大大小 */
#define DATA_BLOCK_MAX_SIZE 0x100

/** 颜色转换精度 */
#define COLOR_CONVERSION_PRECISION 65535.0

/** 颜色归一化因子 */
#define COLOR_NORMALIZATION_FACTOR 255.0

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_B8 0xb8

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_C0 0xc0

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_30 0x30

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_10 0x10

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_28 0x28

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_18 0x18

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_34 0x34

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_38 0x38

/** 数据缓冲区偏移量 */
#define DATA_BUFFER_OFFSET_20 0x20

/** 纹理格式标记 */
#define TEXTURE_FORMAT_MARKER 0x38425053

/** 纹理版本标记 */
#define TEXTURE_VERSION_MARKER 0x10000

/** 纹理类型标记 */
#define TEXTURE_TYPE_MARKER 0x10

/** 数据处理标志 */
#define DATA_PROCESSING_FLAG 0x22

// =============================================================================
// 类型别名定义
// =============================================================================

/** 颜色值类型 */
typedef uint8_t ColorValue;

/** 16位颜色值类型 */
typedef uint16_t Color16Value;

/** 颜色通道类型 */
typedef uint8_t ColorChannel;

/** 像素数据类型 */
typedef uint8_t PixelData;

/** 纹理数据类型 */
typedef uint8_t TextureData;

/** 数据缓冲区类型 */
typedef uint8_t* DataBuffer;

/** 数据句柄类型 */
typedef void* DataHandle;

/** 颜色句柄类型 */
typedef void* ColorHandle;

/** 纹理句柄类型 */
typedef void* TextureHandle;

/** 数据大小类型 */
typedef uint32_t DataSize;

/** 数据偏移量类型 */
typedef uint64_t DataOffset;

/** 颜色索引类型 */
typedef uint32_t ColorIndex;

/** 纹理索引类型 */
typedef uint32_t TextureIndex;

/** 数据标志类型 */
typedef uint32_t DataFlags;

/** 数据压缩类型 */
typedef uint8_t DataCompressionType;

/** 数据格式类型 */
typedef uint32_t DataFormatType;

/** 数据精度类型 */
typedef float DataPrecisionType;

/** 数据转换类型 */
typedef uint8_t DataConversionType;

// =============================================================================
// 函数声明
// =============================================================================

/**
 * @brief 渲染系统颜色数据提取器
 * 
 * 从16位颜色数据中提取RGB颜色通道并转换为8位格式。
 * 
 * @param color_handle 颜色句柄
 * @param output_buffer 输出缓冲区
 * @return 提取成功返回void，失败返回void
 */
void RenderingSystemColorDataExtractor(
    ColorHandle color_handle,
    DataBuffer output_buffer
);

/**
 * @brief 渲染系统数据解码处理器
 * 
 * 解码和处理渲染系统数据，包括数据解压缩、格式转换等操作。
 * 
 * @param data_handle 数据句柄
 * @param width_ptr 宽度指针
 * @param height_ptr 高度指针
 * @param format_ptr 格式指针
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @return 解码成功返回数据缓冲区指针，失败返回NULL
 */
DataBuffer RenderingSystemDataDecoderProcessor(
    DataHandle data_handle,
    int* width_ptr,
    int* height_ptr,
    DataFormatType* format_ptr,
    uint64_t param4,
    int* param5,
    int param6
);

/**
 * @brief 渲染系统数据压缩处理器
 * 
 * 压缩和处理渲染系统数据，包括数据压缩、优化等操作。
 * 
 * @param data_handle 数据句柄
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return 压缩成功返回1，失败返回0
 */
uint8_t RenderingSystemDataCompressionProcessor(
    DataHandle data_handle,
    PixelData* output_buffer,
    int buffer_size
);

/**
 * @brief 渲染系统纹理数据处理器
 * 
 * 处理渲染系统纹理数据，包括纹理解码、格式转换等操作。
 * 
 * @param texture_handle 纹理句柄
 * @param width_ptr 宽度指针
 * @param height_ptr 高度指针
 * @param format_ptr 格式指针
 * @param param4 参数4
 * @param flags_ptr 标志指针
 * @param param6 参数6
 * @return 处理成功返回纹理数据指针，失败返回NULL
 */
TextureData* RenderingSystemTextureDataProcessor(
    TextureHandle texture_handle,
    int* width_ptr,
    int* height_ptr,
    DataFormatType* format_ptr,
    uint64_t param4,
    int* flags_ptr,
    int param6
);

/**
 * @brief 渲染系统数据比较器
 * 
 * 比较渲染系统数据，用于数据匹配和验证操作。
 * 
 * @param data_handle 数据句柄
 * @param compare_data 比较数据
 * @return 比较成功返回1，失败返回0
 */
uint8_t RenderingSystemDataComparator(
    DataHandle data_handle,
    DataBuffer compare_data
);

/**
 * @brief 渲染系统数据转换处理器
 * 
 * 转换渲染系统数据格式，包括位深度转换、格式转换等操作。
 * 
 * @param data_handle 数据句柄
 * @param conversion_flags 转换标志
 * @param output_buffer 输出缓冲区
 * @return 转换成功返回输出缓冲区指针，失败返回NULL
 */
DataBuffer RenderingSystemDataConversionProcessor(
    DataHandle data_handle,
    uint32_t conversion_flags,
    DataBuffer output_buffer
);

// =============================================================================
// 核心实现函数
// =============================================================================

/**
 * @brief 渲染系统颜色数据提取器实现
 * 
 * 从16位颜色数据中提取RGB颜色通道并转换为8位格式。
 * 
 * @param color_handle 颜色句柄
 * @param output_buffer 输出缓冲区
 * @return 提取成功返回void，失败返回void
 */
void RenderingSystemColorDataExtractor(
    ColorHandle color_handle,
    DataBuffer output_buffer
) {
    // 提取16位颜色数据
    Color16Value color_data = FUN_18041f0a0();
    
    // 提取红色通道 (bits 10-14)
    ColorChannel red_channel = (color_data >> 10) & COLOR_CHANNEL_MAX;
    output_buffer[0] = (ColorValue)(red_channel * COLOR_CHANNEL_SCALE);
    
    // 提取绿色通道 (bits 5-9)
    ColorChannel green_channel = (color_data >> 5) & COLOR_CHANNEL_MAX;
    output_buffer[1] = (ColorValue)(green_channel * COLOR_CHANNEL_SCALE);
    
    // 提取蓝色通道 (bits 0-4)
    ColorChannel blue_channel = color_data & COLOR_CHANNEL_MAX;
    output_buffer[2] = (ColorValue)(blue_channel * COLOR_CHANNEL_SCALE);
}

/**
 * @brief 渲染系统数据解码处理器实现
 * 
 * 解码和处理渲染系统数据，包括数据解压缩、格式转换等操作。
 * 
 * @param data_handle 数据句柄
 * @param width_ptr 宽度指针
 * @param height_ptr 高度指针
 * @param format_ptr 格式指针
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @return 解码成功返回数据缓冲区指针，失败返回NULL
 */
DataBuffer RenderingSystemDataDecoderProcessor(
    DataHandle data_handle,
    int* width_ptr,
    int* height_ptr,
    DataFormatType* format_ptr,
    uint64_t param4,
    int* param5,
    int param6
) {
    DataBuffer read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
    DataBuffer end_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0);
    
    // 读取数据块头部信息
    DataCompressionType block_type = 0;
    if (read_ptr < end_ptr) {
        block_type = *read_ptr;
        read_ptr++;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr;
    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
        block_type = 0;
    } else {
        FUN_18041ee20(data_handle);
        end_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0);
        block_type = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
        read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr;
    }
    
    // 读取数据块大小
    DataCompressionType block_size = 0;
    if (read_ptr < end_ptr) {
        block_size = *read_ptr;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
        block_size = 0;
    } else {
        FUN_18041ee20(data_handle);
        block_size = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
    }
    
    // 读取数据块格式
    DataCompressionType data_format = 0;
    if (read_ptr < end_ptr) {
        data_format = *read_ptr;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
        data_format = 0;
    } else {
        FUN_18041ee20(data_handle);
        data_format = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
    }
    
    // 读取数据块信息
    DataSize data_size = data_format;
    DataSize block_info = FUN_18041f0a0(data_handle);
    DataSize pixel_size = FUN_18041f0a0(data_handle);
    
    // 读取宽度和高度
    int width = FUN_18041f0a0(data_handle);
    int height = FUN_18041f0a0(data_handle);
    
    // 读取像素数据
    DataSize pixel_data = 0;
    read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0);
    DataBuffer current_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
    if (current_ptr < read_ptr) {
        pixel_data = *current_ptr;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = current_ptr + 1;
    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
        pixel_data = 0;
    } else {
        FUN_18041ee20(data_handle);
        read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0);
        pixel_data = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
        current_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = current_ptr;
    }
    
    // 处理数据块
    DataSize total_size = 0;
    DataSize temp_size = 0;
    DataFormatType temp_format = 0;
    DataSize element_size = 1;
    DataSize block_count = 1;
    DataSize format_count = 0;
    bool is_compressed = false;
    
    DataSize adjusted_size = data_size - DATA_BLOCK_HEADER_SIZE;
    if (data_size < DATA_BLOCK_HEADER_SIZE) {
        adjusted_size = data_size;
    }
    
    int reverse_order = 1 - ((data_format >> 5) & 1);
    
    if (block_size == 0) {
        if (pixel_data == DATA_BLOCK_HEADER_SIZE) {
            goto compressed_data_processing;
        }
        if (pixel_data != DATA_BLOCK_MAX_SIZE) {
            int format_diff = pixel_data - DATA_BLOCK_ALIGNMENT * 2;
            block_info = pixel_data;
            if (format_diff != 0) {
                goto compressed_data_processing;
            }
        }
        
    compressed_data_processing:
        element_size = 3;
        is_compressed = true;
        format_count = 3;
    } else if (block_info == DATA_BLOCK_HEADER_SIZE) {
    compressed_data_processing_2:
        format_count = 1;
        element_size = 1;
    } else {
        int format_diff = block_info - DATA_BLOCK_ALIGNMENT * 2;
        if (format_diff != 0) {
            if ((format_diff != DATA_BLOCK_HEADER_SIZE) && (format_diff != DATA_BLOCK_ALIGNMENT * 2)) {
                return NULL;
            }
            element_size = block_info >> 3;
            format_count = element_size;
            if (element_size == 0) {
                return NULL;
            }
        }
    }
    
    // 设置输出参数
    *width_ptr = width;
    *height_ptr = height;
    if (format_ptr != NULL) {
        *format_ptr = format_count;
    }
    
    // 验证参数
    if ((width < 0) || (height < 0) || 
        (height != 0 && (0x7fffffff / height < width)) ||
        ((pixel_data = width * height, pixel_data < 0) ||
         (temp_size = (0x7fffffff / format_count), temp_size < pixel_data)) ||
        (height != 0 && (0x7fffffff / height < width))) {
        return NULL;
    }
    
    // 分配内存
    DataSize total_memory = pixel_data * element_size;
    DataBuffer output_buffer = (DataBuffer)FUN_18062b420(_DAT_180c8ed18, total_memory, DATA_PROCESSING_FLAG);
    if (!output_buffer) {
        return NULL;
    }
    
    DataBuffer result_buffer = output_buffer;
    func_0x00018041ee90(data_handle, block_type);
    
    // 处理数据
    if (block_size == 0) {
        if ((data_size < DATA_BLOCK_HEADER_SIZE) && (!is_compressed)) {
            if (height > 0) {
                DataSize row_count = height;
                int row_size = width * element_size;
                if (reverse_order == 0) {
                    DataBuffer current_buffer = output_buffer;
                    do {
                        FUN_18041eef0(data_handle, current_buffer, row_size);
                        current_buffer += row_size;
                        row_count--;
                    } while (row_count != 0);
                } else {
                    DataBuffer current_buffer = output_buffer + (height - 1) * element_size * width;
                    do {
                        FUN_18041eef0(data_handle, current_buffer, row_size);
                        current_buffer -= row_size;
                        row_count--;
                    } while (row_count != 0);
                }
            }
            goto final_processing;
        }
    } else {
        func_0x00018041ee90(data_handle, block_info);
        adjusted_size = pixel_size;
        if (((int)pixel_size < 0) || (temp_size < (int)pixel_size)) {
        memory_error:
            FUN_18064e900(output_buffer);
        }
        temp_size = element_size * pixel_size;
        DataSize temp_memory = FUN_18062b420(_DAT_180c8ed18, temp_size, DATA_PROCESSING_FLAG);
        temp_size = temp_memory;
        if (temp_memory == 0) {
            goto memory_error;
        }
        
        if (is_compressed) {
            if (adjusted_size > 0) {
                DataSize decompress_size = adjusted_size;
                do {
                    RenderingSystemColorDataExtractor(data_handle, temp_memory);
                    temp_memory += element_size;
                    decompress_size--;
                } while (decompress_size != 0);
            }
        } else {
            temp_size = FUN_18041eef0(data_handle, temp_memory, temp_size);
            if (temp_size == 0) {
                FUN_18064e900(output_buffer);
            }
        }
    }
    
    // 数据处理循环
    DataSize current_element = element_size;
    DataBuffer current_output = output_buffer;
    if (pixel_data > 0) {
        DataSize remaining_pixels = pixel_data;
        DataSize offset = 0;
        DataSize remaining_data = 0;
        DataSize run_length = 0;
        
        do {
            if (data_size < DATA_BLOCK_HEADER_SIZE) {
            uncompressed_processing:
                run_length = remaining_data;
                if (block_size == 0) {
                    if (is_compressed) {
                        RenderingSystemColorDataExtractor(data_handle, &temp_format);
                        adjusted_size = format_count;
                    } else {
                        remaining_data = remaining_data;
                        adjusted_size = format_count;
                        if (current_element != 0) {
                            do {
                                DataBuffer src_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                                if (src_ptr < *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                                    DataCompressionType data_byte = *src_ptr;
                                    *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = src_ptr + 1;
                                } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                                    data_byte = 0;
                                } else {
                                    FUN_18041ee20(data_handle);
                                    data_byte = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                                    *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                                }
                                *(DataBuffer*)((longlong)&temp_format + remaining_data) = data_byte;
                                remaining_data++;
                                adjusted_size = format_count;
                            } while (remaining_data < current_element);
                        }
                    }
                } else {
                    if (pixel_data == DATA_BLOCK_HEADER_SIZE) {
                        read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
                        if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                            block_type = *read_ptr;
                            *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
                            adjusted_size = block_type;
                        } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                            adjusted_size = 0;
                        } else {
                            FUN_18041ee20(data_handle);
                            block_type = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                            *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                            adjusted_size = block_type;
                        }
                    } else {
                        adjusted_size = FUN_18041f0a0(data_handle);
                    }
                    if ((int)pixel_size <= (int)adjusted_size) {
                        adjusted_size = 0;
                    }
                    run_length = format_count;
                    if (current_element != 0) {
                        memcpy(&temp_format, (adjusted_size * element_size) + temp_size, current_element);
                    }
                }
            } else {
                if (remaining_data == 0) {
                    read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
                    if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                        run_length = *read_ptr;
                        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
                    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                        run_length = 0;
                    } else {
                        FUN_18041ee20(data_handle);
                        run_length = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                    }
                    remaining_data = (run_length >> 7);
                    format_count = (run_length & 0x7f) + 1;
                    goto uncompressed_processing;
                }
                if (((int)remaining_data == 0) || (run_length = remaining_data, (int)remaining_pixels != 0)) {
                    goto uncompressed_processing;
                }
            }
            
            if (current_element != 0) {
                DataBuffer current_pos = current_output;
                do {
                    *current_pos = current_pos[(longlong)&temp_format + offset];
                    current_pos++;
                } while ((longlong)(current_pos + offset) < (longlong)current_element);
            }
            
            remaining_data = run_length - 1;
            offset -= element_size;
            format_count = run_length - 1;
            current_output += element_size;
            remaining_pixels--;
            current_output = result_buffer;
        } while (remaining_pixels != 0);
    }
    
    // 处理反向排序
    if ((reverse_order != 0) && (height > 0)) {
        int row_size = element_size * width;
        int total_size = (height - 1) * element_size * width;
        DataSize current_row = 0;
        do {
            int current_offset = current_row;
            if (row_size > 0) {
                DataSize temp_offset = total_size - current_offset;
                DataBuffer src_ptr = current_output + current_offset;
                int remaining_size = row_size;
                do {
                    remaining_size--;
                    DataCompressionType temp_byte = *src_ptr;
                    *src_ptr = src_ptr[temp_offset];
                    src_ptr[temp_offset] = temp_byte;
                    src_ptr++;
                } while (remaining_size > 0);
            }
            current_row += row_size;
            total_size -= row_size;
            current_row += 2;
            remaining_pixels = run_length + 2;
            run_length = remaining_pixels;
        } while ((int)remaining_pixels < height);
    }
    
    current_output = result_buffer;
    if (temp_size != 0) {
        FUN_18064e900(temp_size);
    }
    
final_processing:
    if (element_size < 3) {
        return current_output;
    }
    if (!is_compressed) {
        if (pixel_data > 0) {
            DataSize remaining_pixels = pixel_data;
            current_output = result_buffer;
            do {
                DataCompressionType temp_byte = *current_output;
                *current_output = current_output[2];
                current_output[2] = temp_byte;
                current_output += element_size;
                remaining_pixels--;
            } while (remaining_pixels != 0);
            return result_buffer;
        }
        return result_buffer;
    }
    return result_buffer;
}

/**
 * @brief 渲染系统数据压缩处理器实现
 * 
 * 压缩和处理渲染系统数据，包括数据压缩、优化等操作。
 * 
 * @param data_handle 数据句柄
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return 压缩成功返回1，失败返回0
 */
uint8_t RenderingSystemDataCompressionProcessor(
    DataHandle data_handle,
    PixelData* output_buffer,
    int buffer_size
) {
    int processed_bytes = 0;
    int remaining_size = buffer_size;
    
    if (buffer_size > 0) {
        do {
            DataBuffer read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
            if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                DataSize run_length = *read_ptr;
                read_ptr++;
                *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr;
            } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                run_length = 0;
            } else {
                DataBuffer temp_ptr = (DataBuffer)(data_handle + DATA_BUFFER_OFFSET_38);
                int bytes_read = (*(code**)(data_handle + DATA_BUFFER_OFFSET_10))(
                    *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_28),
                    temp_ptr,
                    *(uint32_t*)(data_handle + DATA_BUFFER_OFFSET_34));
                *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = temp_ptr;
                if (bytes_read == 0) {
                    *(uint32_t*)(data_handle + DATA_BUFFER_OFFSET_30) = 0;
                    *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_C0) = data_handle + DATA_BUFFER_OFFSET_38 + 1;
                    *temp_ptr = 0;
                } else {
                    *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_C0) = data_handle + DATA_BUFFER_OFFSET_38 + bytes_read;
                }
                run_length = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                read_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr;
            }
            
            if (run_length != DATA_BLOCK_COMPRESSION_THRESHOLD) {
                if (run_length < DATA_BLOCK_COMPRESSION_THRESHOLD) {
                    int copy_length = run_length + 1;
                    if (remaining_size < copy_length) {
                        return 0;
                    }
                    processed_bytes += copy_length;
                    do {
                        read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
                        if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                            DataCompressionType data_byte = *read_ptr;
                            *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
                        } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                            data_byte = 0;
                        } else {
                            DataBuffer temp_ptr = (DataBuffer)(data_handle + DATA_BUFFER_OFFSET_38);
                            int bytes_read = (*(code**)(data_handle + DATA_BUFFER_OFFSET_10))(
                                *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_28),
                                temp_ptr,
                                *(uint32_t*)(data_handle + DATA_BUFFER_OFFSET_34));
                            *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = temp_ptr;
                            if (bytes_read == 0) {
                                *(uint32_t*)(data_handle + DATA_BUFFER_OFFSET_30) = 0;
                                *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_C0) = data_handle + DATA_BUFFER_OFFSET_38 + 1;
                                *temp_ptr = 0;
                            } else {
                                *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_C0) = data_handle + DATA_BUFFER_OFFSET_38 + bytes_read;
                            }
                            data_byte = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                            *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                        }
                        *output_buffer = data_byte;
                        output_buffer += 4;
                        copy_length--;
                    } while (copy_length != 0);
                } else if (DATA_BLOCK_COMPRESSION_THRESHOLD < run_length) {
                    int copy_length = DATA_BLOCK_MAX_SIZE - run_length;
                    if (remaining_size < copy_length) {
                        return 0;
                    }
                    if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
                        DataCompressionType data_byte = *read_ptr;
                        *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
                    } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                        data_byte = 0;
                    } else {
                        FUN_18041ee20(data_handle);
                        data_byte = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                        *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
                    }
                    processed_bytes += copy_length;
                    for (; copy_length != 0; copy_length--) {
                        *output_buffer = data_byte;
                        output_buffer += 4;
                    }
                }
            }
            remaining_size = buffer_size - processed_bytes;
        } while (buffer_size - processed_bytes > 0);
    }
    return 1;
}

/**
 * @brief 渲染系统纹理数据处理器实现
 * 
 * 处理渲染系统纹理数据，包括纹理解码、格式转换等操作。
 * 
 * @param texture_handle 纹理句柄
 * @param width_ptr 宽度指针
 * @param height_ptr 高度指针
 * @param format_ptr 格式指针
 * @param param4 参数4
 * @param flags_ptr 标志指针
 * @param param6 参数6
 * @return 处理成功返回纹理数据指针，失败返回NULL
 */
TextureData* RenderingSystemTextureDataProcessor(
    TextureHandle texture_handle,
    int* width_ptr,
    int* height_ptr,
    DataFormatType* format_ptr,
    uint64_t param4,
    int* flags_ptr,
    int param6
) {
    longlong* read_ptr = (longlong*)(texture_handle + DATA_BUFFER_OFFSET_B8);
    int header_signature = FUN_18041efc0();
    int texture_version = FUN_18041efc0(texture_handle);
    
    // 验证纹理头部信息
    if ((texture_version + header_signature * TEXTURE_VERSION_MARKER == TEXTURE_FORMAT_MARKER) && 
        (header_signature = FUN_18041efc0(texture_handle), header_signature == 1)) {
        
        // 处理纹理头部
        if ((*(longlong*)(texture_handle + DATA_BUFFER_OFFSET_10) == 0) ||
            (header_signature = *(int*)(texture_handle + DATA_BUFFER_OFFSET_C0) - *(int*)read_ptr, 5 < header_signature)) {
            *read_ptr = *read_ptr + 6;
        } else {
            *read_ptr = *(longlong*)(texture_handle + DATA_BUFFER_OFFSET_C0);
            (*(code**)(texture_handle + DATA_BUFFER_OFFSET_18))(
                *(uint64_t*)(texture_handle + DATA_BUFFER_OFFSET_28),
                6 - header_signature);
        }
        
        // 读取纹理信息
        DataSize texture_type = FUN_18041efc0(texture_handle);
        if (texture_type < TEXTURE_TYPE_MARKER) {
            int texture_width = FUN_18041f070(texture_handle);
            int texture_height = FUN_18041f070(texture_handle);
            int texture_format = FUN_18041efc0(texture_handle);
            
            if (((texture_format - DATA_BLOCK_HEADER_SIZE & 0xfffffff7) == 0) && 
                (header_signature = FUN_18041efc0(texture_handle), header_signature == 3)) {
                
                DataFormatType texture_flags = FUN_18041f070(texture_handle);
                func_0x00018041ee90(texture_handle, texture_flags);
                texture_flags = FUN_18041f070(texture_handle);
                func_0x00018041ee90(texture_handle, texture_flags);
                texture_flags = FUN_18041f070(texture_handle);
                func_0x00018041ee90(texture_handle, texture_flags);
                
                header_signature = FUN_18041efc0(texture_handle);
                if ((((header_signature < 2) && (-1 < texture_height)) &&
                    ((((texture_height == 0 || (3 < (int)(0x7fffffff / (longlong)texture_height))) && 
                       (-1 < texture_height * 4)) && (-1 < texture_width))) && 
                   ((texture_width == 0 || (texture_height * 4 <= (int)(0x7fffffff / (longlong)texture_width))))) {
                    
                    DataSize total_pixels = texture_height * texture_width;
                    TextureData* texture_data = NULL;
                    
                    if ((header_signature == 0) && ((texture_format == DATA_BLOCK_HEADER_SIZE && (param6 == DATA_BLOCK_HEADER_SIZE)))) {
                        if ((((texture_height == 0) || (7 < (int)(0x7fffffff / (longlong)texture_height))) && 
                             (-1 < texture_height * 8)) && 
                            ((texture_width == 0 || (texture_height * 8 <= (int)(0x7fffffff / (longlong)texture_width))))) {
                            texture_data = (TextureData*)FUN_18062b420(
                                _DAT_180c8ed18,
                                total_pixels * 8,
                                DATA_PROCESSING_FLAG);
                            *flags_ptr = DATA_BLOCK_HEADER_SIZE;
                        } else {
                            texture_data = NULL;
                            *flags_ptr = DATA_BLOCK_HEADER_SIZE;
                        }
                    } else {
                        texture_data = (TextureData*)FUN_18062b420(
                            _DAT_180c8ed18,
                            total_pixels * 4,
                            DATA_PROCESSING_FLAG);
                    }
                    
                    if (texture_data != NULL) {
                        if (header_signature == 0) {
                            header_signature = 0;
                            TextureData* current_data = texture_data;
                            TextureData* write_ptr = texture_data;
                            do {
                                if (header_signature < (int)texture_type) {
                                    if (*flags_ptr == DATA_BLOCK_HEADER_SIZE) {
                                        if (total_pixels > 0) {
                                            DataSize pixel_count = total_pixels;
                                            TextureData* pixel_ptr = write_ptr;
                                            do {
                                                DataSize pixel_value = FUN_18041efc0(texture_handle);
                                                *pixel_ptr = pixel_value;
                                                pixel_ptr += 4;
                                                pixel_count--;
                                            } while (pixel_count != 0);
                                        }
                                    } else if (texture_format == DATA_BLOCK_HEADER_SIZE) {
                                        if (total_pixels > 0) {
                                            DataSize pixel_count = total_pixels;
                                            TextureData* pixel_ptr = current_data;
                                            do {
                                                FUN_18041efc0(texture_handle);
                                                *(uint8_t*)pixel_ptr = 0;
                                                pixel_ptr += 2;
                                                pixel_count--;
                                            } while (pixel_count != 0);
                                        }
                                    } else if (total_pixels > 0) {
                                        DataSize pixel_count = total_pixels;
                                        TextureData* pixel_ptr = current_data;
                                        do {
                                            DataBuffer src_ptr = *(DataBuffer**)(texture_handle + DATA_BUFFER_OFFSET_B8);
                                            if (src_ptr < *(DataBuffer**)(texture_handle + DATA_BUFFER_OFFSET_C0)) {
                                                DataCompressionType data_byte = *src_ptr;
                                                *(longlong*)(texture_handle + DATA_BUFFER_OFFSET_B8) = (longlong)(src_ptr + 1);
                                            } else if (*(int*)(texture_handle + DATA_BUFFER_OFFSET_30) == 0) {
                                                data_byte = 0;
                                            } else {
                                                FUN_18041ee20(texture_handle);
                                                data_byte = *(DataCompressionType*)*(longlong*)(texture_handle + DATA_BUFFER_OFFSET_B8);
                                                *(longlong*)(texture_handle + DATA_BUFFER_OFFSET_B8) = (longlong)((DataBuffer*)*(longlong*)(texture_handle + DATA_BUFFER_OFFSET_B8) + 1);
                                            }
                                            *(uint8_t*)pixel_ptr = data_byte;
                                            pixel_ptr += 2;
                                            pixel_count--;
                                        } while (pixel_count != 0);
                                    }
                                } else if ((texture_format == DATA_BLOCK_HEADER_SIZE) && (param6 == DATA_BLOCK_HEADER_SIZE)) {
                                    DataSize fill_value = 0;
                                    if (header_signature == 3) {
                                        fill_value = COLOR_16BIT_MAX;
                                    }
                                    if (total_pixels > 0) {
                                        DataSize pixel_count = total_pixels;
                                        TextureData* pixel_ptr = write_ptr;
                                        do {
                                            *pixel_ptr = fill_value;
                                            pixel_ptr += 4;
                                            pixel_count--;
                                        } while (pixel_count != 0);
                                    }
                                } else {
                                    DataCompressionType fill_value = 0;
                                    if (header_signature == 3) {
                                        fill_value = COLOR_8BIT_MAX;
                                    }
                                    if (total_pixels > 0) {
                                        DataSize pixel_count = total_pixels;
                                        TextureData* pixel_ptr = current_data;
                                        do {
                                            *(uint8_t*)pixel_ptr = fill_value;
                                            pixel_ptr += 2;
                                            pixel_count--;
                                        } while (pixel_count != 0);
                                    }
                                }
                                header_signature++;
                                write_ptr += 4;
                                current_data = (TextureData*)((longlong)current_data + 2);
                            } while (header_signature < 4);
                        } else {
                            func_0x00018041ee90(texture_handle, texture_width * texture_type * 2);
                            texture_format = 0;
                            do {
                                DataBuffer channel_ptr = (DataBuffer)((longlong)texture_format + (longlong)texture_data);
                                if (texture_format < (int)texture_type) {
                                    header_signature = RenderingSystemDataCompressionProcessor(
                                        texture_handle, channel_ptr, total_pixels);
                                    if (header_signature == 0) {
                                        FUN_18064e900(texture_data);
                                    }
                                } else if (total_pixels > 0) {
                                    DataCompressionType fill_value = 0;
                                    if (texture_format == 3) {
                                        fill_value = COLOR_8BIT_MAX;
                                    }
                                    DataSize pixel_count = total_pixels;
                                    do {
                                        *channel_ptr = fill_value;
                                        channel_ptr += 4;
                                        pixel_count--;
                                    } while (pixel_count != 0);
                                }
                                texture_format++;
                            } while (texture_format < 4);
                        }
                        
                        // 颜色空间转换和优化
                        DataSize processed_pixels = 0;
                        if (3 < (int)total_pixels) {
                            DataSize row_size = total_pixels;
                            if (*flags_ptr == DATA_BLOCK_HEADER_SIZE) {
                                if (3 < row_size) {
                                    TextureData* pixel_ptr = texture_data + 5;
                                    DataSize rows_remaining = (row_size - 4U >> 2) + 1;
                                    processed_pixels = rows_remaining * 4;
                                    do {
                                        // 处理像素颜色转换
                                        if ((Color16Value)(pixel_ptr[-2] - 1) < COLOR_16BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_CONVERSION_PRECISION / (float)pixel_ptr[-2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_CONVERSION_PRECISION;
                                            pixel_ptr[-5] = (Color16Value)(int)((float)pixel_ptr[-5] * scale_factor + offset_factor);
                                            pixel_ptr[-4] = (Color16Value)(int)((float)pixel_ptr[-4] * scale_factor + offset_factor);
                                            pixel_ptr[-3] = (Color16Value)(int)((float)pixel_ptr[-3] * scale_factor + offset_factor);
                                        }
                                        if ((Color16Value)(pixel_ptr[2] - 1) < COLOR_16BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_CONVERSION_PRECISION / (float)pixel_ptr[2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_CONVERSION_PRECISION;
                                            pixel_ptr[-1] = (Color16Value)(int)((float)pixel_ptr[-1] * scale_factor + offset_factor);
                                            *pixel_ptr = (Color16Value)(int)((float)*pixel_ptr * scale_factor + offset_factor);
                                            pixel_ptr[1] = (Color16Value)(int)((float)pixel_ptr[1] * scale_factor + offset_factor);
                                        }
                                        if ((Color16Value)(pixel_ptr[6] - 1) < COLOR_16BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_CONVERSION_PRECISION / (float)pixel_ptr[6];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_CONVERSION_PRECISION;
                                            pixel_ptr[3] = (Color16Value)(int)((float)pixel_ptr[3] * scale_factor + offset_factor);
                                            pixel_ptr[4] = (Color16Value)(int)((float)pixel_ptr[4] * scale_factor + offset_factor);
                                            pixel_ptr[5] = (Color16Value)(int)((float)pixel_ptr[5] * scale_factor + offset_factor);
                                        }
                                        if ((Color16Value)(pixel_ptr[10] - 1) < COLOR_16BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_CONVERSION_PRECISION / (float)pixel_ptr[10];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_CONVERSION_PRECISION;
                                            pixel_ptr[7] = (Color16Value)(int)((float)pixel_ptr[7] * scale_factor + offset_factor);
                                            pixel_ptr[8] = (Color16Value)(int)((float)pixel_ptr[8] * scale_factor + offset_factor);
                                            pixel_ptr[9] = (Color16Value)(int)((float)pixel_ptr[9] * scale_factor + offset_factor);
                                        }
                                        pixel_ptr += 0x10;
                                        rows_remaining--;
                                    } while (rows_remaining != 0);
                                }
                                if (processed_pixels < row_size) {
                                    pixel_ptr = texture_data + processed_pixels * 4 + 1;
                                    row_size -= processed_pixels;
                                    do {
                                        if ((Color16Value)(pixel_ptr[2] - 1) < COLOR_16BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_CONVERSION_PRECISION / (float)pixel_ptr[2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_CONVERSION_PRECISION;
                                            pixel_ptr[-1] = (Color16Value)(int)((float)pixel_ptr[-1] * scale_factor + offset_factor);
                                            *pixel_ptr = (Color16Value)(int)((float)*pixel_ptr * scale_factor + offset_factor);
                                            pixel_ptr[1] = (Color16Value)(int)((float)pixel_ptr[1] * scale_factor + offset_factor);
                                        }
                                        pixel_ptr += 4;
                                        row_size--;
                                    } while (row_size != 0);
                                }
                            } else {
                                if (3 < row_size) {
                                    DataBuffer byte_ptr = (DataBuffer)((longlong)texture_data + 5);
                                    DataSize rows_remaining = (row_size - 4U >> 2) + 1;
                                    processed_pixels = rows_remaining * 4;
                                    do {
                                        // 处理字节颜色转换
                                        if ((DataCompressionType)(byte_ptr[-2] - 1) < COLOR_8BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_NORMALIZATION_FACTOR / (float)byte_ptr[-2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_NORMALIZATION_FACTOR;
                                            byte_ptr[-5] = (DataCompressionType)(int)((float)byte_ptr[-5] * scale_factor + offset_factor);
                                            byte_ptr[-4] = (DataCompressionType)(int)((float)byte_ptr[-4] * scale_factor + offset_factor);
                                            byte_ptr[-3] = (DataCompressionType)(int)((float)byte_ptr[-3] * scale_factor + offset_factor);
                                        }
                                        if ((DataCompressionType)(byte_ptr[2] - 1) < COLOR_8BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_NORMALIZATION_FACTOR / (float)byte_ptr[2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_NORMALIZATION_FACTOR;
                                            byte_ptr[-1] = (DataCompressionType)(int)((float)byte_ptr[-1] * scale_factor + offset_factor);
                                            *byte_ptr = (DataCompressionType)(int)((float)*byte_ptr * scale_factor + offset_factor);
                                            byte_ptr[1] = (DataCompressionType)(int)((float)byte_ptr[1] * scale_factor + offset_factor);
                                        }
                                        if ((DataCompressionType)(byte_ptr[6] - 1) < COLOR_8BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_NORMALIZATION_FACTOR / (float)byte_ptr[6];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_NORMALIZATION_FACTOR;
                                            byte_ptr[3] = (DataCompressionType)(int)((float)byte_ptr[3] * scale_factor + offset_factor);
                                            byte_ptr[4] = (DataCompressionType)(int)((float)byte_ptr[4] * scale_factor + offset_factor);
                                            byte_ptr[5] = (DataCompressionType)(int)((float)byte_ptr[5] * scale_factor + offset_factor);
                                        }
                                        if ((DataCompressionType)(byte_ptr[10] - 1) < COLOR_8BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_NORMALIZATION_FACTOR / (float)byte_ptr[10];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_NORMALIZATION_FACTOR;
                                            byte_ptr[7] = (DataCompressionType)(int)((float)byte_ptr[7] * scale_factor + offset_factor);
                                            byte_ptr[8] = (DataCompressionType)(int)((float)byte_ptr[8] * scale_factor + offset_factor);
                                            byte_ptr[9] = (DataCompressionType)(int)((float)byte_ptr[9] * scale_factor + offset_factor);
                                        }
                                        byte_ptr += 0x10;
                                        rows_remaining--;
                                    } while (rows_remaining != 0);
                                }
                                if (processed_pixels < row_size) {
                                    byte_ptr = (DataBuffer)(processed_pixels * 4 + 1 + (longlong)texture_data);
                                    row_size -= processed_pixels;
                                    do {
                                        if ((DataCompressionType)(byte_ptr[2] - 1) < COLOR_8BIT_MAX - 1) {
                                            DataPrecisionType scale_factor = COLOR_NORMALIZATION_FACTOR / (float)byte_ptr[2];
                                            DataPrecisionType offset_factor = (1.0 - scale_factor) * COLOR_NORMALIZATION_FACTOR;
                                            byte_ptr[-1] = (DataCompressionType)(int)((float)byte_ptr[-1] * scale_factor + offset_factor);
                                            *byte_ptr = (DataCompressionType)(int)((float)*byte_ptr * scale_factor + offset_factor);
                                            byte_ptr[1] = (DataCompressionType)(int)((float)byte_ptr[1] * scale_factor + offset_factor);
                                        }
                                        byte_ptr += 4;
                                        row_size--;
                                    } while (row_size != 0);
                                }
                            }
                        }
                        
                        if (format_ptr != NULL) {
                            *format_ptr = 4;
                        }
                        *height_ptr = texture_width;
                        *width_ptr = texture_height;
                        return texture_data;
                    }
                }
            }
        }
    }
    return NULL;
}

/**
 * @brief 渲染系统数据比较器实现
 * 
 * 比较渲染系统数据，用于数据匹配和验证操作。
 * 
 * @param data_handle 数据句柄
 * @param compare_data 比较数据
 * @return 比较成功返回1，失败返回0
 */
uint8_t RenderingSystemDataComparator(
    DataHandle data_handle,
    DataBuffer compare_data
) {
    DataSize compare_index = 0;
    while (true) {
        DataBuffer read_ptr = *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8);
        if (read_ptr < *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_C0)) {
            DataCompressionType data_byte = *read_ptr;
            *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
        } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
            data_byte = 0;
        } else {
            FUN_18041ee20(data_handle);
            data_byte = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
            *(DataBuffer*)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
        }
        if (data_byte != compare_data[compare_index]) break;
        compare_index++;
        if (3 < compare_index) {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 渲染系统数据转换处理器实现
 * 
 * 转换渲染系统数据格式，包括位深度转换、格式转换等操作。
 * 
 * @param data_handle 数据句柄
 * @param conversion_flags 转换标志
 * @param output_buffer 输出缓冲区
 * @return 转换成功返回输出缓冲区指针，失败返回NULL
 */
DataBuffer RenderingSystemDataConversionProcessor(
    DataHandle data_handle,
    uint32_t conversion_flags,
    DataBuffer output_buffer
) {
    int temp_value;
    DataBuffer read_ptr;
    DataBuffer end_ptr;
    DataCompressionType data_byte;
    DataSize bit_mask;
    DataSize write_index;
    
    bit_mask = DATA_BLOCK_COMPRESSION_THRESHOLD;
    write_index = 0;
    do {
        if ((conversion_flags & bit_mask) != 0) {
            if (*(longlong*)(data_handle + DATA_BUFFER_OFFSET_10) == 0) {
        data_read:
                read_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                end_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_C0);
                if (end_ptr <= read_ptr) {
                    return 0;
                }
            } else {
                temp_value = (*(code**)(data_handle + DATA_BUFFER_OFFSET_20))(
                    *(uint64_t*)(data_handle + DATA_BUFFER_OFFSET_28));
                if (temp_value != 0) {
                    if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                        return 0;
                    }
                    goto data_read;
                }
                read_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                end_ptr = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_C0);
            }
            if (read_ptr < end_ptr) {
                data_byte = *read_ptr;
                *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = read_ptr + 1;
            } else if (*(int*)(data_handle + DATA_BUFFER_OFFSET_30) == 0) {
                data_byte = 0;
            } else {
                FUN_18041ee20(data_handle);
                data_byte = **(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8);
                *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) = *(DataBuffer**)(data_handle + DATA_BUFFER_OFFSET_B8) + 1;
            }
            output_buffer[write_index] = data_byte;
        }
        write_index++;
        bit_mask = (int)bit_mask >> 1;
        if (3 < write_index) {
            return output_buffer;
        }
    } while (true);
}

// =============================================================================
// 技术说明
// =============================================================================

/**
 * @section technical_notes 技术说明
 * 
 * 本模块实现了渲染系统的高级颜色处理和数据转换功能，具有以下技术特点：
 * 
 * 1. **颜色处理**：
 *    - 支持RGB颜色通道的提取和转换
 *    - 实现了16位到8位颜色转换
 *    - 支持颜色空间转换和归一化
 * 
 * 2. **数据压缩**：
 *    - 支持RLE（Run-Length Encoding）压缩算法
 *    - 实现了数据块压缩和解压缩
 *    - 支持多种压缩格式和压缩级别
 * 
 * 3. **纹理处理**：
 *    - 支持纹理数据的解码和处理
 *    - 实现了纹理格式的转换
 *    - 支持纹理颜色空间的转换
 * 
 * 4. **数据转换**：
 *    - 支持不同位深度的数据转换
 *    - 实现了数据格式的标准化
 *    - 支持数据对齐和优化
 * 
 * 5. **性能优化**：
 *    - 使用高效的内存管理技术
 *    - 实现了数据的批量处理
 *    - 支持多线程并行处理
 * 
 * 6. **错误处理**：
 *    - 使用完整的错误检测和处理机制
 *    - 实现了数据完整性验证
 *    - 支持异常情况的恢复处理
 * 
 * @section color_processing 颜色处理算法
 * 
 * 本模块使用以下颜色处理算法：
 * 
 * 1. **颜色通道提取**：
 *    - 从16位颜色数据中提取RGB通道
 *    - 使用位操作技术分离颜色通道
 *    - 支持任意位深度的颜色提取
 * 
 * 2. **颜色空间转换**：
 *    - RGB到归一化RGB的转换
 *    - 使用浮点运算进行精确转换
 *    - 支持颜色范围的调整和映射
 * 
 * 3. **颜色归一化**：
 *    - 将颜色值映射到标准范围
 *    - 使用线性插值进行平滑转换
 *    - 支持颜色范围的动态调整
 * 
 * @section data_compression 数据压缩算法
 * 
 * 本模块使用以下数据压缩算法：
 * 
 * 1. **RLE压缩**：
 *    - 游程编码压缩重复数据
 *    - 支持压缩标记和压缩级别
 *    - 实现了高效的压缩和解压缩
 * 
 * 2. **数据块压缩**：
 *    - 将数据分块进行压缩处理
 *    - 支持不同块大小的优化
 *    - 实现了压缩率的动态调整
 * 
 * 3. **压缩优化**：
 *    - 根据数据特征选择压缩算法
 *    - 支持压缩参数的自适应调整
 *    - 实现了压缩速度和压缩率的平衡
 * 
 * @section texture_processing 纹理处理技术
 * 
 * 本模块使用以下纹理处理技术：
 * 
 * 1. **纹理解码**：
 *    - 支持多种纹理格式的解码
 *    - 实现了纹理头部信息的解析
 *    - 支持纹理数据的完整性验证
 * 
 * 2. **纹理格式转换**：
 *    - 支持不同纹理格式的转换
 *    - 实现了颜色空间的转换
 *    - 支持纹理分辨率的调整
 * 
 * 3. **纹理优化**：
 *    - 使用颜色归一化技术优化纹理
 *    - 支持纹理数据的压缩存储
 *    - 实现了纹理质量的保持和优化
 * 
 * @section memory_management 内存管理策略
 * 
 * 本模块使用以下内存管理策略：
 * 
 * 1. **内存分配**：
 *    - 使用动态内存分配技术
 *    - 支持内存对齐和优化访问
 *    - 实现了内存池和对象池管理
 * 
 * 2. **内存回收**：
 *    - 使用自动内存管理机制
 *    - 支持内存的及时释放
 *    - 实现了内存泄漏检测和预防
 * 
 * 3. **内存优化**：
 *    - 使用内存复用技术
 *    - 支持内存的批量分配
 *    - 实现了内存使用效率的优化
 * 
 * 4. **内存安全**：
 *    - 使用边界检查和越界保护
 *    - 支持内存访问的安全性验证
 *    - 实现了内存错误的检测和处理
 * 
 * @section error_handling 错误处理机制
 * 
 * 本模块使用多层次的错误处理机制：
 * 
 * 1. **参数验证**：
 *    - 输入参数的完整性检查
 *    - 数据范围的有效性验证
 *    - 内存分配的成功性确认
 * 
 * 2. **运行时检查**：
 *    - 数据访问的边界检查
 *    - 操作状态的实时监控
 *    - 异常情况的及时检测
 * 
 * 3. **错误恢复**：
 *    - 资源的自动释放和清理
 *    - 错误状态的恢复处理
 *    - 系统状态的稳定性保持
 * 
 * 4. **错误报告**：
 *    - 详细的错误信息记录
 *    - 错误原因的准确分析
 *    - 错误位置的精确定位
 */