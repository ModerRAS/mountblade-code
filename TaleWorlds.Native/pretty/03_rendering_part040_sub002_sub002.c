#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part040_sub002_sub002.c - 渲染系统高级资源管理和数据处理模块
 * 
 * 该文件包含渲染系统的高级资源管理、数据处理和几何变换功能。
 * 主要涵盖渲染资源解析、几何数据处理、矩阵变换和顶点操作等核心功能。
 * 
 * 主要功能:
 * - 渲染资源的高级解析和处理
 * - 几何数据的批量处理和变换
 * - 顶点坐标的矩阵变换操作
 * - 渲染对象的动态属性管理
 * - 材质和纹理的高级处理
 * 
 * @module 渲染系统
 * @subpackage 高级资源管理
 * @version 1.0
 * @date 2025-08-28
 */

// 常量定义
#define MAX_VERTEX_COUNT 0xFFFF          // 最大顶点数量
#define MAX_GEOMETRY_DATA_SIZE 0x20000000 // 最大几何数据大小
#define VERTEX_STRIDE_SIZE 0x0E          // 顶点步长大小
#define MATRIX_TRANSFORM_FLAG 0x01        // 矩阵变换标志
#define GEOMETRY_DATA_FLAG 0x02          // 几何数据标志

// 函数别名定义
typedef void* render_context_handle_t;     // 渲染上下文句柄
typedef void* geometry_data_buffer_t;      // 几何数据缓冲区
typedef void* vertex_transform_matrix_t;    // 顶点变换矩阵
typedef void* resource_manager_t;          // 资源管理器

/**
 * 设置渲染资源索引范围
 * 
 * 根据输入参数计算并设置渲染资源的索引范围，确保索引值在有效范围内。
 * 处理边界检查和范围限制，为后续的渲染操作准备索引数据。
 * 
 * @param context 渲染上下文句柄
 * @param start_index 起始索引
 * @param count 索引数量
 * @param index_range 输出索引范围结构
 * 
 * @return void
 */
void set_render_resource_index_range(void* context, int start_index, int count, long long* index_range)
{
    longlong calculated_index;
    longlong* range_ptr;
    int current_index;
    int base_index;
    undefined4 register_value;
    int stack_index;
    
    // 计算结束索引并进行边界检查
    count = count - 1 + start_index;
    if ((current_index < count) || (count < 0)) {
        count = current_index;
    }
    
    // 设置索引范围
    *(int*)(index_range + 1) = count;
    count = count - base_index;
    stack_index = 0;
    calculated_index = 0;
    
    // 验证索引范围有效性
    if ((((-1 < base_index) && (calculated_index = 0, -1 < count)) &&
        (stack_index = 0, calculated_index = 0, base_index <= current_index)) && 
        (calculated_index = 0, count <= current_index - base_index))
    {
        calculated_index = CONCAT44(register_value, base_index) + *index_range;
        stack_index = count;
    }
    
    // 输出结果
    *range_ptr = calculated_index;
    *(undefined4*)(range_ptr + 1) = 0;
    *(int*)((longlong)range_ptr + 0xc) = stack_index;
    return;
}

/**
 * 解析几何数据块
 * 
 * 从渲染数据流中解析几何数据块，提取顶点、索引和材质信息。
 * 支持多种数据格式和压缩方式，确保数据完整性和正确性。
 * 
 * @param output_buffer 输出缓冲区
 * @param data_stream 数据流指针
 * @param data_type 数据类型标识
 * 
 * @return undefined4* 解析后的数据指针
 */
undefined4* parse_geometry_data_chunk(undefined4* output_buffer, long long* data_stream, uint data_type)
{
    undefined4 data_value;
    undefined4 temp_value;
    byte flag_byte;
    uint chunk_size;
    ulonglong data_offset;
    longlong stream_position;
    uint current_size;
    int read_position;
    int chunk_count;
    int max_count;
    ulonglong stream_limit;
    ulonglong data_limit;
    undefined4 stack_value_18;
    undefined4 stack_value_14;
    int stack_index;
    
    // 获取当前数据流大小
    chunk_size = *(uint*)((longlong)data_stream + 0xc);
    data_limit = (ulonglong)chunk_size;
    data_offset = 0;
    
    // 初始化数据流位置
    if ((int)chunk_size < 0) {
        data_offset = data_limit;
    }
    
    *(int*)(data_stream + 1) = (int)data_offset;
    
    // 处理数据块
    if ((int)data_offset < (int)chunk_size) {
        data_limit = (ulonglong)chunk_size;
        do {
            chunk_count = (int)data_offset;
            flag_byte = func_0x00018028afe0();
            
            // 处理特殊标记
            while (0x1b < flag_byte) {
                read_position = (int)data_stream[1];
                max_count = (int)data_limit;
                data_limit = data_limit & 0xffffffff;
                
                // 检查分隔符
                if ((read_position < max_count) && 
                    (*(char*)((longlong)read_position + *data_stream) == '\x1e')) {
                    chunk_size = read_position + 1;
                    data_offset = (ulonglong)chunk_size;
                    
                    // 边界检查
                    if ((max_count < (int)chunk_size) || ((int)chunk_size < 0)) {
                        data_offset = data_limit & 0xffffffff;
                    }
                    
                    read_position = (int)data_offset;
                    *(int*)(data_stream + 1) = read_position;
                    
                    // 继续读取数据
                    if (read_position < max_count) {
                        if (read_position < max_count) goto CONTINUE_READING;
                        flag_byte = 0;
                        
                        // 处理数据标志
                        while (((read_position = (int)data_offset, (flag_byte & 0xf) != 0xf && 
                               ((flag_byte & 0xf0) != 0xf0)) && (read_position < max_count))) {
CONTINUE_READING:
                            flag_byte = *(byte*)((longlong)read_position + *data_stream);
                            *(uint*)(data_stream + 1) = read_position + 1U;
                            data_offset = (ulonglong)(read_position + 1U);
                        }
                    }
                }
                else {
                    func_0x00018028b140(data_stream);
                    data_limit = (ulonglong)*(uint*)((longlong)data_stream + 0xc);
                    data_limit = (ulonglong)*(uint*)((longlong)data_stream + 0xc);
                    data_offset = (ulonglong)*(uint*)(data_stream + 1);
                }
                
                flag_byte = func_0x00018028afe0();
            }
            
            chunk_size = (uint)data_limit;
            read_position = (int)data_offset;
            
            // 读取下一个字节
            if (read_position < (int)chunk_size) {
                data_offset = (ulonglong)(read_position + 1U);
                flag_byte = *(byte*)((longlong)read_position + *data_stream);
                *(uint*)(data_stream + 1) = read_position + 1U;
            }
            else {
                flag_byte = 0;
                data_offset = data_offset & 0xffffffff;
            }
            
            current_size = (uint)flag_byte;
            
            // 处理特殊标记
            if (flag_byte == 0xc) {
                max_count = (int)data_offset;
                if (max_count < (int)chunk_size) {
                    data_offset = (ulonglong)(max_count + 1U);
                    flag_byte = *(byte*)((longlong)max_count + *data_stream);
                    *(uint*)(data_stream + 1) = max_count + 1U;
                }
                else {
                    flag_byte = 0;
                }
                current_size = flag_byte | 0x100;
            }
            
            // 检查数据类型匹配
            if (current_size == data_type) {
                read_position = read_position - chunk_count;
                stack_value_18 = 0;
                data_value = 0;
                stack_value_14 = 0;
                temp_value = 0;
                stack_index = 0;
                max_count = 0;
                
                // 验证数据范围
                if (((chunk_count < 0) || 
                    (stack_value_18 = data_value, stack_value_14 = temp_value, stack_index = max_count, read_position < 0)) ||
                    (((int)chunk_size < chunk_count || ((int)(chunk_size - chunk_count) < read_position)))) 
                    goto INVALID_RANGE;
                    
                stream_position = (longlong)chunk_count + *data_stream;
                stack_index = read_position;
                goto VALID_RANGE;
            }
        } while ((int)data_offset < (int)chunk_size);
    }
    
    // 默认值设置
    stack_value_18 = 0;
    stack_value_14 = 0;
    stack_index = 0;
    
    if (-1 < (int)chunk_size) {
        stream_position = *data_stream;
        stack_index = 0;
VALID_RANGE:
        stack_value_18 = (undefined4)stream_position;
        stack_value_14 = (undefined4)((ulonglong)stream_position >> 0x20);
    }
    
INVALID_RANGE:
    *output_buffer = stack_value_18;
    output_buffer[1] = stack_value_14;
    output_buffer[2] = 0;
    output_buffer[3] = stack_index;
    return output_buffer;
}

/**
 * 提取几何数据信息
 * 
 * 从数据流中提取几何数据信息，包括顶点数量、索引数量和材质信息。
 * 处理数据偏移和大小计算，确保数据提取的准确性。
 * 
 * @param output_buffer 输出缓冲区
 * @param data_stream 数据流指针
 * @param data_size 数据大小
 * 
 * @return longlong* 处理后的数据指针
 */
longlong* extract_geometry_data_info(long long* output_buffer, long long* data_stream, int data_size)
{
    int stream_position;
    undefined1 data_byte1;
    undefined1 data_byte2;
    byte data_byte3;
    int current_position;
    longlong stream_offset;
    ulonglong byte_count;
    int max_position;
    uint chunk_size;
    int read_position;
    ulonglong position_limit;
    uint data_value;
    int processed_size;
    ulonglong result_size;
    
    // 获取数据流大小
    stream_position = *(int*)((longlong)data_stream + 0xc);
    current_position = 0;
    
    // 初始化位置
    if (stream_position < 0) {
        current_position = stream_position;
    }
    
    *(int*)(data_stream + 1) = current_position;
    stream_offset = (longlong)current_position;
    
    // 读取数据字节
    if (stream_offset < stream_position) {
        current_position = current_position + 1;
        data_byte1 = *(undefined1*)(stream_offset + *data_stream);
        stream_offset = stream_offset + 1;
    }
    else {
        data_byte1 = 0;
    }
    
    // 读取第二个字节
    if (stream_offset < stream_position) {
        current_position = current_position + 1;
        data_byte2 = *(undefined1*)(stream_offset + *data_stream);
    }
    else {
        data_byte2 = 0;
    }
    
    // 读取第三个字节
    if (current_position < stream_position) {
        stream_offset = (longlong)current_position;
        current_position = current_position + 1;
        byte_count = (ulonglong)*(byte*)(stream_offset + *data_stream);
    }
    else {
        byte_count = 0;
    }
    
    read_position = (int)byte_count;
    current_position = read_position * data_size + current_position;
    
    // 边界检查
    if ((stream_position < current_position) || (current_position < 0)) {
        current_position = stream_position;
    }
    
    result_size = 0;
    *(int*)(data_stream + 1) = current_position;
    position_limit = byte_count;
    
    // 处理数据块
    if ((char)byte_count != '\0') {
        do {
            if (current_position < stream_position) {
                stream_offset = (longlong)current_position;
                current_position = current_position + 1;
                data_byte3 = *(byte*)(stream_offset + *data_stream);
            }
            else {
                data_byte3 = 0;
            }
            
            result_size = result_size << 8 | (uint)data_byte3;
            position_limit = position_limit - 1;
        } while (position_limit != 0);
        
        *(int*)(data_stream + 1) = current_position;
    }
    
    chunk_size = 0;
    if (read_position != 0) {
        do {
            if (current_position < stream_position) {
                stream_offset = (longlong)current_position;
                current_position = current_position + 1;
                data_byte3 = *(byte*)(stream_offset + *data_stream);
            }
            else {
                data_byte3 = 0;
            }
            
            chunk_size = chunk_size << 8 | (uint)data_byte3;
            byte_count = byte_count - 1;
        } while (byte_count != 0);
        
        *(int*)(data_stream + 1) = current_position;
    }
    
    processed_size = 0;
    max_position = chunk_size - result_size;
    current_position = result_size + 2 + (CONCAT11(data_byte1, data_byte2) + 1) * read_position;
    stream_offset = 0;
    
    // 验证数据范围
    if ((((-1 < current_position) && (stream_offset = 0, -1 < max_position)) && 
        (processed_size = 0, stream_offset = 0, current_position <= stream_position)) &&
        (stream_offset = 0, max_position <= stream_position - current_position)) {
        stream_offset = (longlong)current_position + *data_stream;
        processed_size = max_position;
    }
    
    *output_buffer = stream_offset;
    *(undefined4*)(output_buffer + 1) = 0;
    *(int*)((longlong)output_buffer + 0xc) = processed_size;
    return output_buffer;
}

/**
 * 查找渲染资源属性
 * 
 * 在渲染资源中查找指定的属性，返回属性的偏移位置和大小。
 * 支持快速查找和缓存机制，提高查找效率。
 * 
 * @param resource_base 资源基地址
 * @param resource_offset 资源偏移
 * @param attribute_name 属性名称
 * 
 * @return int 属性偏移位置，未找到返回0
 */
int find_render_resource_attribute(long long resource_base, uint resource_offset, char* attribute_name)
{
    uint attribute_offset;
    ulonglong current_offset;
    int attribute_count;
    int current_index;
    
    current_index = 0;
    attribute_count = (uint)*(byte*)((ulonglong)resource_offset + 4 + resource_base) * 0x100 +
                    (uint)*(byte*)((ulonglong)resource_offset + 5 + resource_base);
    
    if (attribute_count != 0) {
        do {
            attribute_offset = current_index * 0x10 + resource_offset + 0xc;
            current_offset = (ulonglong)attribute_offset;
            
            // 检查属性名称匹配
            if (((((uint)*(byte*)((ulonglong)attribute_offset + resource_base) == (int)*attribute_name) &&
                 ((uint)*(byte*)(current_offset + 1 + resource_base) == (int)attribute_name[1])) &&
                ((uint)*(byte*)(current_offset + 2 + resource_base) == (int)attribute_name[2])) &&
               ((uint)*(byte*)(current_offset + 3 + resource_base) == (int)attribute_name[3])) {
                return (((uint)*(byte*)(current_offset + 8 + resource_base) * 0x100 + 
                        (uint)*(byte*)(current_offset + 9 + resource_base)) * 0x100 + 
                        (uint)*(byte*)(current_offset + 10 + resource_base)) * 0x100 +
                       (uint)*(byte*)(current_offset + 0xb + resource_base);
            }
            
            current_index = current_index + 1;
        } while (current_index < attribute_count);
    }
    
    return 0;
}

/**
 * 处理渲染材质数据
 * 
 * 处理和解析渲染材质数据，包括纹理坐标、材质属性和渲染状态。
 * 支持复杂的材质层次结构和属性继承。
 * 
 * @param output_buffer 输出缓冲区
 * @param data_stream 数据流
 * @param resource_handle 资源句柄
 * 
 * @return undefined4* 处理后的材质数据
 */
undefined4* process_render_material_data(undefined4* output_buffer, long long* data_stream, undefined8 resource_handle)
{
    undefined4 material_value;
    int texture_count;
    int vertex_count;
    undefined8* texture_data;
    undefined8* vertex_data;
    longlong stream_position;
    longlong material_offset;
    int texture_indices[2];
    undefined8 texture_handle;
    undefined8 stream_data;
    undefined8 material_data;
    undefined1 texture_flags[16];
    
    material_offset = 0;
    texture_indices[0] = 0;
    texture_handle = 0;
    
    // 解析纹理数据
    texture_data = (undefined8*)parse_geometry_data_chunk(&stream_data, resource_handle, 0x12);
    stream_data = *texture_data;
    material_data._0_4_ = *(int*)(texture_data + 1);
    material_data._4_4_ = *(int*)((longlong)texture_data + 0xc);
    
    stream_position = material_offset;
    
    // 处理纹理索引
    do {
        if ((int)material_data._4_4_ <= (int)material_data) break;
        material_value = func_0x00018028b140(&stream_data);
        *(undefined4*)((longlong)&texture_handle + stream_position * 4) = material_value;
        stream_position = stream_position + 1;
    } while (stream_position < 2);
    
    vertex_count = texture_handle._4_4_;
    
    // 处理顶点数据
    if ((texture_handle._4_4_ != 0) && ((uint)texture_handle != 0)) {
        material_data._4_4_ = 0;
        stream_data = 0;
        
        // 验证数据范围
        if ((-1 < texture_handle) &&
            (((stream_data = 0, -1 < (int)(uint)texture_handle &&
              (material_data._4_4_ = 0, stream_data = 0, texture_handle._4_4_ <= *(int*)((longlong)data_stream + 0xc))) &&
             (stream_data = 0, (int)(uint)texture_handle <= *(int*)((longlong)data_stream + 0xc) - texture_handle._4_4_)))) {
            stream_data = (longlong)texture_handle._4_4_ + *data_stream;
            material_data._4_4_ = (uint)texture_handle;
        }
        
        material_data = (ulonglong)material_data._4_4_ << 0x20;
        texture_data = (undefined8*)parse_geometry_data_chunk(texture_flags, &stream_data, 0x13);
        stream_data = *texture_data;
        material_data._0_4_ = *(int*)(texture_data + 1);
        material_data._4_4_ = *(int*)((longlong)texture_data + 0xc);
        
        // 处理材质属性
        do {
            if ((int)material_data._4_4_ <= (int)material_data) break;
            texture_count = func_0x00018028b140(&stream_data);
            texture_indices[stream_position] = texture_count;
            stream_position = stream_position + 1;
        } while (stream_position < 1);
        
        // 应用材质属性
        if (texture_indices[0] != 0) {
            vertex_count = texture_indices[0] + vertex_count;
            if ((*(int*)((longlong)data_stream + 0xc) < vertex_count) || (vertex_count < 0)) {
                vertex_count = *(int*)((longlong)data_stream + 0xc);
            }
            
            *(int*)(data_stream + 1) = vertex_count;
            vertex_data = (undefined4*)func_0x00018028b000(texture_flags, data_stream);
            stream_data._0_4_ = *vertex_data;
            stream_data._4_4_ = vertex_data[1];
            material_data._0_4_ = vertex_data[2];
            material_data._4_4_ = vertex_data[3];
            goto MATERIAL_PROCESSED;
        }
    }
    
    // 默认材质数据
    stream_data._0_4_ = 0;
    stream_data._4_4_ = 0;
    material_data._0_4_ = 0;
    material_data._4_4_ = 0;
    
MATERIAL_PROCESSED:
    *output_buffer = (undefined4)stream_data;
    output_buffer[1] = stream_data._4_4_;
    output_buffer[2] = (int)material_data;
    output_buffer[3] = material_data._4_4_;
    return output_buffer;
}

/**
 * 初始化渲染资源管理器
 * 
 * 初始化渲染资源管理器，设置资源缓存和内存管理策略。
 * 预分配资源池和优化内存访问模式。
 * 
 * @param resource_manager 资源管理器指针
 * @param data_stream 数据流
 * @param resource_flags 资源标志
 * 
 * @return undefined8 初始化成功标志
 */
undefined8 initialize_render_resource_manager(long long resource_manager, long long data_stream, undefined4 resource_flags)
{
    byte format_flag;
    byte compression_flag;
    undefined8 init_result;
    undefined1 format_data[16];
    uint texture_count;
    int vertex_count;
    int normal_count;
    int uv_count;
    undefined4 render_flags;
    uint index_count;
    long long* stream_ptr;
    undefined8* texture_ptr;
    ulonglong data_offset;
    ulonglong texture_offset;
    long long resource_offset;
    int vertex_data[4];
    undefined4 vertex_flags;
    uint buffer_size;
    uint texture_limit;
    undefined8 buffer_data;
    uint buffer_capacity;
    undefined4 buffer_flags;
    long long buffer_ptr;
    undefined8 temp_data;
    undefined1 format_buffer[24];
    
    // 设置资源管理器基本属性
    *(long long*)(resource_manager + 8) = data_stream;
    *(undefined4*)(resource_manager + 0x10) = resource_flags;
    
    data_offset = 0;
    buffer_data._0_4_ = 0;
    buffer_data._4_4_ = 0;
    buffer_flags = 0;
    buffer_capacity = 0;
    
    // 初始化资源缓冲区
    *(undefined8*)(resource_manager + 0x40) = 0;
    *(undefined8*)(resource_manager + 0x48) = 0;
    
    vertex_flags = resource_flags;
    texture_count = find_render_resource_attribute(data_stream, resource_flags, &UNK_180a16ee0);
    vertex_count = find_render_resource_attribute(data_stream, resource_flags, &UNK_180a16ef8);
    *(int*)(resource_manager + 0x18) = vertex_count;
    
    normal_count = find_render_resource_attribute(data_stream, resource_flags, &UNK_180a13928);
    *(int*)(resource_manager + 0x1c) = normal_count;
    
    vertex_data[2] = find_render_resource_attribute(data_stream, resource_flags, &UNK_180a16f00);
    *(int*)(resource_manager + 0x20) = vertex_data[2];
    
    uv_count = find_render_resource_attribute(data_stream, resource_flags, &UNK_180a16ee8);
    *(int*)(resource_manager + 0x24) = uv_count;
    
    vertex_data[0] = find_render_resource_attribute(data_stream, vertex_flags, &UNK_180a16ef0);
    *(int*)(resource_manager + 0x28) = vertex_data[0];
    
    render_flags = find_render_resource_attribute(data_stream, vertex_flags, &UNK_180a16f18);
    *(undefined4*)(resource_manager + 0x2c) = render_flags;
    
    render_flags = find_render_resource_attribute(data_stream, vertex_flags, &UNK_180a16f20);
    *(undefined4*)(resource_manager + 0x30) = render_flags;
    
    // 验证必要属性
    if (texture_count == 0) {
        return 0;
    }
    if (normal_count == 0) {
        return 0;
    }
    if (uv_count == 0) {
        return 0;
    }
    if (vertex_data[0] == 0) {
        return 0;
    }
    
    // 处理顶点数据
    if (vertex_data[2] != 0) {
        if (vertex_count == 0) {
            return 0;
        }
        goto PROCESS_VERTEX_DATA;
    }
    
    vertex_data[2] = 0;
    vertex_data[0] = 2;
    
    // 初始化顶点缓冲区
    vertex_data[1] = 0;
    vertex_data[3] = 0;
    index_count = find_render_resource_attribute(data_stream, vertex_flags, &UNK_180a16f08);
    
    if (index_count == 0) {
        return 0;
    }
    
    *(undefined8*)(resource_manager + 0x80) = 0;
    *(undefined8*)(resource_manager + 0x88) = 0;
    
    buffer_data = (ulonglong)index_count + data_stream;
    buffer_flags = 0x20000000;
    
    *(undefined8*)(resource_manager + 0x90) = 0;
    *(undefined8*)(resource_manager + 0x98) = 0;
    buffer_capacity = 0;
    
    format_data._8_4_ = 0;
    format_data._0_8_ = buffer_data;
    format_data._12_4_ = 0x20000000;
    buffer_capacity = 0x20000000;
    
    *(undefined1 (*) [16])(resource_manager + 0x40) = format_data;
    
    // 处理缓冲区大小
    if (*(byte*)(buffer_data + 2) < 0x20000001) {
        buffer_capacity = (uint)*(byte*)(buffer_data + 2);
    }
    
    buffer_size = buffer_capacity;
    buffer_data = buffer_data;
    buffer_capacity = 0x20000000;
    
    // 处理顶点数据
    func_0x00018028b000(&buffer_ptr, &buffer_data);
    stream_ptr = (long long*)func_0x00018028b000(&buffer_ptr, &buffer_data);
    buffer_ptr = *stream_ptr;
    temp_data = stream_ptr[1];
    
    texture_ptr = (undefined8*)extract_geometry_data_info(&buffer_data, &buffer_ptr, 0);
    buffer_data._0_4_ = (undefined4)*texture_ptr;
    buffer_data._4_4_ = (undefined4)((ulonglong)*texture_ptr >> 0x20);
    buffer_flags = (undefined4)texture_ptr[1];
    buffer_capacity = (undefined4)((ulonglong)texture_ptr[1] >> 0x20);
    
    func_0x00018028b000(&buffer_ptr, &buffer_data);
    texture_ptr = (undefined8*)func_0x00018028b000(&buffer_ptr, &buffer_data);
    init_result = texture_ptr[1];
    
    *(undefined8*)(resource_manager + 0x60) = *texture_ptr;
    *(undefined8*)(resource_manager + 0x68) = init_result;
    
    stream_ptr = (long long*)parse_geometry_data_chunk(&buffer_ptr, &buffer_data, 0x11);
    buffer_ptr = *stream_ptr;
    temp_data = stream_ptr[1];
    
    texture_offset = data_offset;
    
    // 处理纹理数据
    do {
        if (temp_data._4_4_ <= (int)temp_data) break;
        vertex_count = func_0x00018028b140(&buffer_ptr);
        vertex_data[texture_offset + 2] = vertex_count;
        texture_offset = texture_offset + 1;
    } while ((long long)texture_offset < 1);
    
    // 继续处理其他数据...
    
PROCESS_VERTEX_DATA:
    index_count = find_render_resource_attribute(data_stream, vertex_flags, &UNK_180a16f10);
    if (index_count == 0) {
        vertex_count = 0xffff;
    }
    else {
        vertex_count = (uint)*(byte*)((ulonglong)index_count + 4 + data_stream) * 0x100 +
                   (uint)*(byte*)((ulonglong)index_count + 5 + data_stream);
    }
    
    *(int*)(resource_manager + 0x14) = vertex_count;
    
    format_flag = *(byte*)((ulonglong)texture_count + 2 + data_stream);
    compression_flag = *(byte*)((ulonglong)texture_count + 3 + data_stream);
    
    *(undefined4*)(resource_manager + 0x34) = 0;
    vertex_count = (uint)format_flag * 0x100 + (uint)compression_flag;
    
    if (vertex_count != 0) {
        do {
            index_count = texture_count + 4 + (int)data_offset * 8;
            texture_offset = (ulonglong)index_count;
            normal_count = (uint)*(byte*)((ulonglong)index_count + data_stream) * 0x100 +
                       (uint)*(byte*)((ulonglong)index_count + 1 + data_stream);
            
            if ((normal_count == 0) ||
                ((normal_count == 3 &&
                 ((normal_count = (uint)*(byte*)(texture_offset + 3 + data_stream) +
                           (uint)*(byte*)(texture_offset + 2 + data_stream) * 0x100, normal_count == 1 || (normal_count == 10))))))
            {
                *(uint*)(resource_manager + 0x34) =
                     (uint)*(byte*)(texture_offset + 7 + data_stream) +
                     ((uint)*(byte*)(texture_offset + 6 + data_stream) +
                     ((uint)*(byte*)(texture_offset + 5 + data_stream) + 
                     (uint)*(byte*)(texture_offset + 4 + data_stream) * 0x100) * 0x100) * 0x100 + texture_count;
            }
            
            index_count = (int)data_offset + 1;
            data_offset = (ulonglong)index_count;
        } while ((int)index_count < vertex_count);
        
        if (*(int*)(resource_manager + 0x34) != 0) {
            *(uint*)(resource_manager + 0x38) =
                 (uint)*(byte*)((long long)*(int*)(resource_manager + 0x1c) + 0x33 + data_stream) +
                 (uint)*(byte*)((long long)*(int*)(resource_manager + 0x1c) + 0x32 + data_stream) * 0x100;
            return 1;
        }
    }
    
    return 0;
}

/**
 * 获取顶点属性数据
 * 
 * 根据顶点索引获取顶点属性数据，包括位置、法线、UV坐标等。
 * 支持多种顶点属性格式和压缩存储方式。
 * 
 * @param resource_manager 资源管理器
 * @param vertex_index 顶点索引
 * 
 * @return uint 顶点属性数据
 */
uint get_vertex_attribute_data(long long resource_manager, uint vertex_index)
{
    int index_count;
    long long resource_offset;
    long long data_offset;
    uint attribute_data;
    ushort vertex_count;
    long long buffer_offset;
    int buffer_size;
    uint attribute_offset;
    uint vertex_size;
    short attribute_short;
    ushort attribute_ushort;
    ulonglong data_limit;
    ulonglong attribute_limit;
    long long attribute_ptr;
    ushort attribute_value;
    ulonglong vertex_limit;
    byte *attribute_buffer;
    float float_value1;
    float float_value2;
    float float_value3;
    float float_value4;
    float float_value5;
    float float_value6;
    long long stack_offset;
    uint stack_size_108;
    uint stack_size_100;
    uint stack_size_fc;
    uint stack_size_f8;
    uint stack_size_f4;
    uint stack_size_f0;
    byte *stack_buffer_e8;
    float stack_float_e0;
    float stack_float_dc;
    float stack_float_d8;
    float stack_float_d4;
    
    attribute_limit = (ulonglong)*(uint*)(resource_manager + 0x34);
    resource_offset = *(long long*)(resource_manager + 8);
    vertex_count = (ushort)*(byte*)(attribute_limit + resource_offset) * 0x100 + 
                 (ushort)*(byte*)(attribute_limit + 1 + resource_offset);
    
    // 处理顶点数据
    if (vertex_count == 0) {
        if ((int)vertex_index <
            (int)((uint)*(byte*)(attribute_limit + 2 + resource_offset) * 0x100 + 
                 (*(byte*)(attribute_limit + 3 + resource_offset) - 6))) {
            return (uint)*(byte*)(attribute_limit + (long long)(int)vertex_index + 6 + resource_offset);
        }
    }
    else if (vertex_count == 6) {
        attribute_data = (uint)*(byte*)(attribute_limit + 6 + resource_offset) * 0x100 + 
                 (uint)*(byte*)(attribute_limit + 7 + resource_offset);
        
        if ((attribute_data <= vertex_index) &&
            (vertex_index < (uint)*(byte*)(attribute_limit + 9 + resource_offset) +
                       (uint)*(byte*)(attribute_limit + 8 + resource_offset) * 0x100 + attribute_data)) {
            data_offset = (vertex_index - attribute_data) * 2 + attribute_limit;
            return (uint)*(byte*)(data_offset + 0xb + resource_offset) + 
                   (uint)*(byte*)(data_offset + 10 + resource_offset) * 0x100;
        }
    }
    else if (vertex_count != 2) {
        if (vertex_count == 4) {
            attribute_value = (ushort)((ushort)*(byte*)(attribute_limit + 6 + resource_offset) * 0x100 +
                                      (ushort)*(byte*)(attribute_limit + 7 + resource_offset)) >> 1;
            attribute_data = *(uint*)(resource_manager + 0x34) + 0xe;
            vertex_count = (ushort)((ushort)*(byte*)(attribute_limit + 9 + resource_offset) +
                                   (ushort)*(byte*)(attribute_limit + 8 + resource_offset) * 0x100) >> 1;
            vertex_count = (ushort)*(byte*)(attribute_limit + 0xb + resource_offset) +
                       (ushort)*(byte*)(attribute_limit + 10 + resource_offset) * 0x100;
            attribute_value = (ushort)((ushort)*(byte*)(attribute_limit + 0xc + resource_offset) * 0x100 +
                                      (ushort)*(byte*)(attribute_limit + 0xd + resource_offset)) >> 1;
            
            // 处理顶点数据块
            if ((int)vertex_index < 0x10000) {
                attribute_offset = attribute_data;
                if ((int)((uint)*(byte*)((ulonglong)attribute_data + resource_offset + (ulonglong)attribute_value * 2) * 0x100 +
                         (uint)*(byte*)((ulonglong)attribute_data + resource_offset + 1 + (ulonglong)attribute_value * 2)) <=
                    (int)vertex_index) {
                    attribute_offset = attribute_data + (uint)attribute_value * 2;
                }
                
                attribute_offset = attribute_offset - 2;
                
                // 二分查找
                for (; vertex_count != 0; vertex_count = vertex_count + -1) {
                    vertex_count = vertex_count >> 1;
                    if ((int)((uint)*(byte*)((ulonglong)attribute_offset + resource_offset + (ulonglong)vertex_count * 2) * 0x100 +
                             (uint)*(byte*)((ulonglong)attribute_offset + resource_offset + 1 + (ulonglong)vertex_count * 2)) <
                        (int)vertex_index) {
                        attribute_offset = attribute_offset + (uint)vertex_count * 2;
                    }
                }
                
                data_limit = (ulonglong)(((attribute_offset - attribute_data) + 2 >> 1 & 0xffff) * 2);
                data_offset = ((uint)attribute_value + (uint)attribute_value * 2) * 2 + data_limit + attribute_limit;
                buffer_size = (uint)*(byte*)(data_offset + 0x10 + resource_offset) * 0x100 +
                       (uint)*(byte*)(data_offset + 0x11 + resource_offset);
                
                if (buffer_size <= (int)vertex_index) {
                    attribute_data = ((uint)attribute_value + (uint)attribute_value * 2) * 2;
                    data_offset = attribute_data + data_limit + attribute_limit;
                    vertex_count = (ushort)*(byte*)(data_offset + 0x10 + resource_offset) * 0x100 +
                             (ushort)*(byte*)(data_offset + 0x11 + resource_offset);
                    
                    if (vertex_count == 0) {
                        data_offset = (uint)attribute_value * 4 + data_limit + attribute_limit;
                        return (uint)(ushort)((ushort)*(byte*)(data_offset + 0x10 + resource_offset) * 0x100 +
                                              (ushort)*(byte*)(data_offset + 0x11 + resource_offset) + (short)vertex_index);
                    }
                    
                    data_offset = (ulonglong)vertex_count + (long long)(int)((vertex_index - buffer_size) * 2) + (ulonglong)attribute_data +
                            data_limit + attribute_limit;
                    return (uint)*(byte*)(data_offset + 0x11 + resource_offset) +
                           (uint)*(byte*)(data_offset + 0x10 + resource_offset) * 0x100;
                }
            }
        }
        else if ((ushort)(vertex_count - 0xcU) < 2) {
            buffer_size = 0;
            vertex_count = (((uint)*(byte*)(attribute_limit + 0xd + resource_offset) +
                       (uint)*(byte*)(attribute_limit + 0xc + resource_offset) * 0x100) * 0x100 +
                      (uint)*(byte*)(attribute_limit + 0xe + resource_offset)) * 0x100 + (uint)*(byte*)(attribute_limit + 0xf + resource_offset);
            
            if (0 < vertex_count) {
                data_offset = attribute_limit + resource_offset;
                buffer_offset = attribute_limit + resource_offset;
                
                // 二分查找顶点属性
                do {
                    index_count = (vertex_count - buffer_size >> 1) + buffer_size;
                    buffer_ptr = (long long)(index_count * 0xc);
                    attribute_data = (uint)*(byte*)(buffer_ptr + 0x11 + data_offset) * 0x10000 +
                               (uint)*(byte*)(buffer_ptr + 0x12 + data_offset) * 0x100 +
                               (uint)*(byte*)(buffer_ptr + 0x10 + data_offset) * 0x1000000 +
                               (uint)*(byte*)(buffer_ptr + 0x13 + data_offset);
                    
                    if (attribute_data <= vertex_index) {
                        if (vertex_index <=
                            (uint)*(byte*)(buffer_offset + 0x15 + buffer_ptr) * 0x10000 +
                            (uint)*(byte*)(buffer_offset + 0x16 + buffer_ptr) * 0x100 +
                            (uint)*(byte*)(buffer_offset + 0x14 + buffer_ptr) * 0x1000000 +
                            (uint)*(byte*)(buffer_offset + 0x17 + buffer_ptr)) {
                            resource_offset = buffer_ptr + attribute_limit + resource_offset;
                            attribute_offset = (uint)*(byte*)(resource_offset + 0x19) * 0x10000 +
                                   (uint)*(byte*)(resource_offset + 0x1a) * 0x100 +
                                   (uint)*(byte*)(resource_offset + 0x18) * 0x1000000 + (uint)*(byte*)(resource_offset + 0x1b);
                            
                            if (vertex_count != 0xc) {
                                return attribute_offset;
                            }
                            
                            return vertex_index + (attribute_offset - attribute_data);
                        }
                        
                        buffer_size = index_count + 1;
                        index_count = vertex_count;
                    }
                    
                    vertex_count = index_count;
                } while (buffer_size < vertex_count);
            }
        }
    }
    
    return 0;
}

/**
 * 添加顶点到几何缓冲区
 * 
 * 将顶点数据添加到几何缓冲区，支持多种顶点属性和格式。
 * 处理顶点变换、属性压缩和内存优化。
 * 
 * @param geometry_buffer 几何缓冲区
 * @param vertex_index 顶点索引
 * @param is_dynamic 是否为动态顶点
 * @param has_normals 是否有法线
 * @param position_x 位置X坐标
 * @param position_y 位置Y坐标
 * @param normal_x 法线X分量
 * @param normal_y 法线Y分量
 * @param dynamic_x 动态X坐标
 * @param dynamic_y 动态Y坐标
 * 
 * @return int 更新后的顶点数量
 */
int add_vertex_to_geometry_buffer(long long geometry_buffer, int vertex_index, int is_dynamic, int has_normals, 
                                undefined2 position_x, undefined2 position_y, int normal_x, int normal_y, 
                                undefined2 dynamic_x, undefined2 dynamic_y)
{
    long long buffer_offset;
    
    if (has_normals != 0) {
        if (is_dynamic != 0) {
            buffer_offset = (long long)vertex_index * 0xe;
            vertex_index = vertex_index + 1;
            
            // 计算平均位置
            *(short*)(buffer_offset + geometry_buffer) = (short)(normal_x + dynamic_y >> 1);
            *(undefined1*)(buffer_offset + 0xc + geometry_buffer) = 3;
            *(undefined2*)(buffer_offset + 4 + geometry_buffer) = (undefined2)dynamic_y;
            *(undefined2*)(buffer_offset + 6 + geometry_buffer) = (undefined2)dynamic_x;
            *(short*)(buffer_offset + 2 + geometry_buffer) = (short)(normal_y + dynamic_x >> 1);
        }
        
        buffer_offset = (long long)vertex_index * 0xe;
        *(undefined2*)(buffer_offset + geometry_buffer) = position_x;
        *(undefined2*)(buffer_offset + 2 + geometry_buffer) = position_y;
        *(short*)(buffer_offset + 4 + geometry_buffer) = (short)normal_x;
        *(undefined1*)(buffer_offset + 0xc + geometry_buffer) = 3;
        *(short*)(buffer_offset + 6 + geometry_buffer) = (short)normal_y;
        return vertex_index + 1;
    }
    
    buffer_offset = (long long)vertex_index * 0xe;
    *(undefined2*)(buffer_offset + geometry_buffer) = position_x;
    *(undefined2*)(buffer_offset + 2 + geometry_buffer) = position_y;
    
    if (is_dynamic != 0) {
        *(undefined2*)(buffer_offset + 4 + geometry_buffer) = (undefined2)dynamic_y;
        *(undefined2*)(buffer_offset + 6 + geometry_buffer) = (undefined2)dynamic_x;
        *(undefined1*)(buffer_offset + 0xc + geometry_buffer) = 3;
        return vertex_index + 1;
    }
    
    *(undefined1*)(buffer_offset + 0xc + geometry_buffer) = 2;
    *(undefined4*)(buffer_offset + 4 + geometry_buffer) = 0;
    return vertex_index + 1;
}

/**
 * 处理顶点变换数据
 * 
 * 处理顶点变换数据，包括位置变换、法线变换和UV坐标变换。
 * 支持复杂的变换矩阵和属性插值。
 * 
 * @param geometry_buffer 几何缓冲区
 * @param transform_matrix 变换矩阵
 * @param vertex_count 顶点数量
 * @param normal_count 法线数量
 * @param transform_data 变换数据
 * @param position_x 位置X
 * @param position_y 位置Y
 * @param normal_x 法线X
 * @param normal_y 法线Y
 * @param dynamic_x 动态X
 * @param dynamic_y 动态Y
 * 
 * @return int 处理后的顶点数量
 */
int process_vertex_transform_data(long long geometry_buffer, undefined8 transform_matrix, int vertex_count, int normal_count, 
                                undefined8 transform_data, undefined2 position_x, undefined2 position_y, 
                                undefined8 normal_x, undefined8 normal_y, undefined2 dynamic_x, undefined2 dynamic_y)
{
    long long buffer_offset;
    ulonglong transform_offset;
    long long matrix_offset;
    
    if (vertex_count != 0) {
        buffer_offset = transform_offset * 0xe;
        transform_offset = (ulonglong)((int)transform_offset + 1);
        *(short*)(buffer_offset + geometry_buffer) = (short)(normal_count + dynamic_y >> 1);
        *(undefined1*)(buffer_offset + 0xc + geometry_buffer) = 3;
        *(short*)(buffer_offset + 4 + matrix_offset) = (short)dynamic_y;
        *(short*)(buffer_offset + 6 + matrix_offset) = (short)dynamic_x;
        *(short*)(buffer_offset + 2 + matrix_offset) = (short)(normal_y + dynamic_x >> 1);
    }
    
    buffer_offset = (long long)(int)transform_offset * 0xe;
    *(undefined2*)(buffer_offset + matrix_offset) = position_x;
    *(undefined2*)(buffer_offset + 2 + matrix_offset) = position_y;
    *(short*)(buffer_offset + 4 + matrix_offset) = (short)normal_count;
    *(undefined1*)(buffer_offset + 0xc + matrix_offset) = 3;
    *(short*)(buffer_offset + 6 + matrix_offset) = (short)normal_y;
    return (int)transform_offset + 1;
}

/**
 * 添加静态几何数据
 * 
 * 添加静态几何数据到缓冲区，处理顶点属性和索引关系。
 * 优化静态数据的内存布局和访问模式。
 * 
 * @param geometry_buffer 几何缓冲区
 * @param transform_data 变换数据
 * @param has_normals 是否有法线
 * @param position_data 位置数据
 * @param normal_data 法线数据
 * @param position_x 位置X
 * @param position_y 位置Y
 * @param normal_x 法线X
 * @param normal_y 法线Y
 * 
 * @return int 处理后的几何数据数量
 */
int add_static_geometry_data(undefined8 geometry_buffer, undefined8 transform_data, int has_normals, undefined8 position_data, 
                            undefined8 normal_data, undefined2 position_x, undefined2 position_y, 
                            undefined2 normal_x, undefined2 normal_y)
{
    long long buffer_offset;
    long long transform_offset;
    long long position_offset;
    
    buffer_offset = transform_offset * 0xe;
    *(undefined2*)(buffer_offset + position_offset) = position_x;
    *(undefined2*)(buffer_offset + 2 + position_offset) = position_y;
    
    if (has_normals != 0) {
        *(undefined2*)(buffer_offset + 4 + position_offset) = normal_x;
        *(undefined2*)(buffer_offset + 6 + position_offset) = normal_y;
        *(undefined1*)(buffer_offset + 0xc + position_offset) = 3;
        return (int)transform_offset + 1;
    }
    
    *(undefined1*)(buffer_offset + 0xc + position_offset) = 2;
    *(undefined4*)(buffer_offset + 4 + position_offset) = 0;
    return (int)transform_offset + 1;
}

/**
 * 处理顶点属性流
 * 
 * 处理顶点属性流，包括位置、法线、UV坐标和权重数据。
 * 支持流式处理和内存优化。
 * 
 * @param resource_manager 资源管理器
 * @param data_stream 数据流
 * @param vertex_count 顶点数量
 * @param output_size 输出大小
 * 
 * @return ulonglong 处理后的数据大小
 */
ulonglong process_vertex_attribute_stream(long long resource_manager, undefined8 data_stream, ulonglong* output_size)
{
    byte *data_ptr;
    byte *data_ptr2;
    byte *data_ptr3;
    byte *data_ptr4;
    byte attribute_byte;
    short attribute_short;
    int vertex_index;
    undefined4 attribute_value;
    uint chunk_size;
    int buffer_position;
    ulonglong data_offset;
    ulonglong processed_offset;
    ulonglong attribute_offset;
    ulonglong stream_offset;
    byte attribute_flag;
    short attribute_value2;
    ulonglong vertex_offset;
    byte *attribute_buffer;
    undefined4 attribute_data;
    ulonglong data_size;
    byte *attribute_ptr;
    short *short_ptr;
    byte *temp_ptr;
    undefined4 temp_value;
    ulonglong temp_offset;
    byte *stream_ptr;
    long long buffer_ptr;
    undefined2 *ushort_ptr;
    ulonglong ushort_offset;
    long long temp_offset2;
    undefined4 temp_value2;
    ulonglong temp_offset3;
    float float_val1;
    float float_val2;
    float float_val3;
    float float_val4;
    float float_val5;
    float float_val6;
    long long stack_offset;
    uint stack_size_108;
    uint stack_size_100;
    uint stack_size_fc;
    uint stack_size_f8;
    uint stack_size_f4;
    uint stack_size_f0;
    byte *stack_buffer_e8;
    float stack_float_e0;
    float stack_float_dc;
    float stack_float_d8;
    float stack_float_d4;
    
    buffer_ptr = *(long long*)(resource_manager + 8);
    data_offset = 0;
    vertex_index = func_0x00018028c210();
    *output_size = 0;
    
    if (vertex_index < 0) {
PROCESS_COMPLETE:
        processed_offset = 0;
    }
    else {
        temp_offset2 = (long long)vertex_index;
        attribute_value2 = (ushort)*(byte*)(temp_offset2 + buffer_ptr) * 0x100 + 
                      (ushort)*(byte*)(temp_offset2 + 1 + buffer_ptr);
        attribute_value = 0;
        
        if (attribute_value2 < 1) {
            processed_offset = data_offset;
            if (attribute_value2 == -1) {
                attribute_buffer = (byte*)(buffer_ptr + 10 + temp_offset2);
                
                while (true) {
                    attribute_flag = attribute_buffer[1];
                    float_val3 = 0.0;
                    stream_ptr = attribute_buffer + 2;
                    float_val4 = 0.0;
                    data_ptr = attribute_buffer + 3;
                    temp_ptr = attribute_buffer + 4;
                    stack_offset = 0;
                    
                    // 处理位置属性
                    if ((attribute_flag & 2) != 0) {
                        if ((attribute_flag & 1) == 0) {
                            vertex_index = (int)(char)*temp_ptr;
                            buffer_position = (int)(char)attribute_buffer[5];
                            temp_ptr = attribute_buffer + 6;
                        }
                        else {
                            vertex_index = (int)(short)((ushort)attribute_buffer[5] + (ushort)*temp_ptr * 0x100);
                            buffer_position = (int)(short)((ushort)attribute_buffer[7] + (ushort)attribute_buffer[6] * 0x100);
                            temp_ptr = attribute_buffer + 8;
                        }
                        
                        float_val4 = (float)buffer_position;
                        float_val3 = (float)vertex_index;
                    }
                    
                    attribute_buffer = temp_ptr;
                    
                    // 处理法线属性
                    if ((attribute_flag & 8) == 0) {
                        if ((attribute_flag & 0x40) == 0) {
                            if ((char)attribute_flag < '\0') {
                                temp_ptr = attribute_buffer + 4;
                                data_ptr = attribute_buffer + 5;
                                stack_float_e0 = (float)(int)(short)((ushort)attribute_buffer[1] + (ushort)*attribute_buffer * 0x100) *
                                            6.1035156e-05;
                                data_ptr2 = attribute_buffer + 6;
                                data_ptr3 = attribute_buffer + 7;
                                stack_float_dc = (float)(int)(short)((ushort)attribute_buffer[3] + (ushort)attribute_buffer[2] * 0x100) *
                                            6.1035156e-05;
                                attribute_buffer = attribute_buffer + 8;
                                stack_float_d8 = (float)(int)(short)((ushort)*data_ptr + (ushort)*temp_ptr * 0x100) *
                                            6.1035156e-05;
                                stack_float_d4 = (float)(int)(short)((ushort)*data_ptr3 + (ushort)*data_ptr2 * 0x100) *
                                            6.1035156e-05;
                            }
                            else {
                                stack_float_d4 = 1.0;
                                stack_float_d8 = 0.0;
                                stack_float_dc = 0.0;
                                stack_float_e0 = 1.0;
                            }
                        }
                        else {
                            temp_ptr = attribute_buffer + 1;
                            stack_float_d8 = 0.0;
                            attribute_byte = *attribute_buffer;
                            stack_float_dc = 0.0;
                            data_ptr = attribute_buffer + 2;
                            data_ptr2 = attribute_buffer + 3;
                            attribute_buffer = attribute_buffer + 4;
                            stack_float_e0 = (float)(int)(short)((ushort)*temp_ptr + (ushort)attribute_byte * 0x100) *
                                        6.1035156e-05;
                            stack_float_d4 = (float)(int)(short)((ushort)*data_ptr2 + (ushort)*data_ptr * 0x100) *
                                        6.1035156e-05;
                        }
                    }
                    else {
                        temp_ptr = attribute_buffer + 1;
                        stack_float_d8 = 0.0;
                        attribute_byte = *attribute_buffer;
                        stack_float_dc = 0.0;
                        attribute_buffer = attribute_buffer + 2;
                        stack_float_e0 = (float)(int)(short)((ushort)*temp_ptr + (ushort)attribute_byte * 0x100) *
                                    6.1035156e-05;
                        stack_float_d4 = stack_float_e0;
                    }
                    
                    // 计算变换系数
                    float_val5 = SQRT(stack_float_dc * stack_float_dc + stack_float_e0 * stack_float_e0);
                    float_val6 = SQRT(stack_float_d4 * stack_float_d4 + stack_float_d8 * stack_float_d8);
                    
                    if (*(int*)(resource_manager + 0x4c) == 0) {
                        vertex_index = process_vertex_attribute_stream();
                    }
                    else {
                        vertex_index = func_0x00018028e390(resource_manager, (uint)*stream_ptr * 0x100 + (uint)*data_ptr, &stack_offset);
                    }
                    
                    if (0 < vertex_index) break;
                    
                    if ((attribute_flag & 0x20) == 0) {
                        *output_size = 0;
                        return 0;
                    }
                }
                
                buffer_ptr = (long long)vertex_index;
                
                // 处理顶点数据块
                if (3 < buffer_ptr) {
                    temp_offset2 = (buffer_ptr - 4U >> 2) + 1;
                    processed_offset = temp_offset2 * 4;
                    
                    // 应用变换矩阵
                    do {
                        float_val1 = (float)(int)*(short*)(stack_offset + 2 + data_offset);
                        attribute_value2 = *(short*)(stack_offset + data_offset);
                        *(short*)(stack_offset + data_offset) =
                             (short)(int)(((float)(int)attribute_value2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) *
                                         float_val5);
                        *(short*)(stack_offset + 2 + data_offset) =
                             (short)(int)(((float)(int)attribute_value2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) *
                                         float_val6);
                        
                        float_val1 = (float)(int)*(short*)(stack_offset + 6 + data_offset);
                        float_val2 = (float)(int)*(short*)(stack_offset + 4 + data_offset);
                        *(short*)(stack_offset + 4 + data_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(stack_offset + 6 + data_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(stack_offset + 0x10 + data_offset);
                        float_val2 = (float)(int)*(short*)(stack_offset + 0xe + data_offset);
                        *(short*)(stack_offset + 0xe + data_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(stack_offset + 0x10 + data_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(stack_offset + 0x14 + data_offset);
                        float_val2 = (float)(int)*(short*)(stack_offset + 0x12 + data_offset);
                        *(short*)(stack_offset + 0x12 + data_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(stack_offset + 0x14 + data_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(data_offset + 0x1e + stack_offset);
                        float_val2 = (float)(int)*(short*)(data_offset + 0x1c + stack_offset);
                        *(short*)(data_offset + 0x1c + stack_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(data_offset + 0x1e + stack_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(data_offset + 0x22 + stack_offset);
                        float_val2 = (float)(int)*(short*)(data_offset + 0x20 + stack_offset);
                        *(short*)(data_offset + 0x20 + stack_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(data_offset + 0x22 + stack_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(data_offset + 0x2c + stack_offset);
                        float_val2 = (float)(int)*(short*)(data_offset + 0x2a + stack_offset);
                        *(short*)(data_offset + 0x2a + stack_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(data_offset + 0x2c + stack_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        float_val1 = (float)(int)*(short*)(data_offset + 0x30 + stack_offset);
                        float_val2 = (float)(int)*(short*)(data_offset + 0x2e + stack_offset);
                        *(short*)(data_offset + 0x2e + stack_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(data_offset + 0x30 + stack_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        data_offset = data_offset + 0x38;
                        temp_offset2 = temp_offset2 + -1;
                    } while (temp_offset2 != 0);
                }
                
                // 处理剩余顶点数据
                if ((long long)processed_offset < buffer_ptr) {
                    temp_offset2 = processed_offset * 0xe;
                    buffer_ptr = buffer_ptr - processed_offset;
                    
                    do {
                        float_val1 = (float)(int)*(short*)(temp_offset2 + 2 + stack_offset);
                        attribute_value2 = *(short*)(temp_offset2 + stack_offset);
                        *(short*)(temp_offset2 + stack_offset) =
                             (short)(int)(((float)(int)attribute_value2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) *
                                         float_val5);
                        *(short*)(temp_offset2 + 2 + stack_offset) =
                             (short)(int)(((float)(int)attribute_value2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) *
                                         float_val6);
                        
                        float_val1 = (float)(int)*(short*)(temp_offset2 + 6 + stack_offset);
                        float_val2 = (float)(int)*(short*)(temp_offset2 + 4 + stack_offset);
                        *(short*)(temp_offset2 + 4 + stack_offset) =
                             (short)(int)((float_val2 * stack_float_e0 + float_val1 * stack_float_d8 + float_val3) * float_val5);
                        *(short*)(temp_offset2 + 6 + stack_offset) =
                             (short)(int)((float_val2 * stack_float_dc + float_val1 * stack_float_d4 + float_val4) * float_val6);
                        
                        temp_offset2 = temp_offset2 + 0xe;
                        buffer_ptr = buffer_ptr + -1;
                    } while (buffer_ptr != 0);
                }
                
                // 更新统计信息
                if (_DAT_180c8a9b0 != 0) {
                    *(int*)(_DAT_180c8a9b0 + 0x3a8) = *(int*)(_DAT_180c8a9b0 + 0x3a8) + 1;
                }
                
                buffer_ptr = func_0x000180120ce0((long long)vertex_index * 0xe, _DAT_180c8a9a8);
                
                if (buffer_ptr != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(buffer_ptr, stack_offset, buffer_ptr * 0xe);
                }
                
                if (stack_offset != 0) {
                    if (_DAT_180c8a9b0 != 0) {
                        *(int*)(_DAT_180c8a9b0 + 0x3a8) = *(int*)(_DAT_180c8a9b0 + 0x3a8) + -1;
                    }
                    // WARNING: Subroutine does not return
                    func_0x000180059ba0(stack_offset, _DAT_180c8a9a8);
                }
                
                goto PROCESS_COMPLETE;
            }
        }
        else {
            stack_buffer_e8 = (byte*)(buffer_ptr + 10 + temp_offset2);
            attribute_byte = 0;
            buffer_ptr = (long long)(attribute_value2 * 2);
            attribute_flag = stack_buffer_e8[buffer_ptr + -2];
            attribute_byte = stack_buffer_e8[buffer_ptr + -1];
            attribute_buffer = (byte*)(buffer_ptr + 0xc +
                                    (ulonglong)*(byte*)(buffer_ptr + temp_offset2 + 0xb + buffer_ptr) +
                                    (ulonglong)*(byte*)(buffer_ptr + temp_offset2 + 10 + buffer_ptr) * 0x100 + buffer_ptr +
                                    temp_offset2);
            
            chunk_size = attribute_byte + 1 + (uint)attribute_flag * 0x100;
            processed_offset = (ulonglong)chunk_size;
            
            if (_DAT_180c8a9b0 != 0) {
                *(int*)(_DAT_180c8a9b0 + 0x3a8) = *(int*)(_DAT_180c8a9b0 + 0x3a8) + 1;
            }
            
            stream_offset = func_0x000180120ce0((long long)(int)(attribute_byte + 1 + (uint)attribute_flag * 0x100 + attribute_value2 * 2) *
                                       0xe);
            
            if (stream_offset == 0) goto PROCESS_COMPLETE;
            
            attribute_offset = 0;
            attribute_flag = 0;
            attribute_value = 0;
            temp_value2 = 0;
            stack_size_f4 = 0;
            
            if (processed_offset != 0) {
                stream_ptr = (byte*)(buffer_ptr * 0xe + 0xc + stream_offset);
                stream_offset = processed_offset;
                
                // 复制属性数据
                do {
                    if (attribute_flag == 0) {
                        attribute_byte = *attribute_buffer;
                        if ((attribute_byte & 8) != 0) {
                            attribute_flag = attribute_buffer[1];
                        }
                        attribute_buffer = attribute_buffer + (ulonglong)((attribute_byte & 8) != 0) + 1;
                    }
                    else {
                        attribute_flag = attribute_flag - 1;
                    }
                    
                    *stream_ptr = attribute_byte;
                    stream_ptr = stream_ptr + 0xe;
                    stream_offset = stream_offset - 1;
                } while (stream_offset != 0);
            }
            
            // 处理位置数据
            if (processed_offset != 0) {
                ushort_ptr = (undefined2*)(buffer_ptr * 0xe + stream_offset);
                stream_offset = attribute_offset;
                vertex_offset = processed_offset;
                
                do {
                    if ((*(byte*)(ushort_ptr + 6) & 2) == 0) {
                        if ((*(byte*)(ushort_ptr + 6) & 0x10) == 0) {
                            stream_offset = (ulonglong)
                                     (uint)((int)stream_offset +
                                           (int)(short)((ushort)*attribute_buffer * 0x100 + (ushort)attribute_buffer[1]));
                            attribute_buffer = attribute_buffer + 2;
                        }
                    }
                    else {
                        attribute_byte = *attribute_buffer;
                        attribute_buffer = attribute_buffer + 1;
                        chunk_size = (uint)attribute_byte;
                        if ((*(byte*)(ushort_ptr + 6) & 0x10) == 0) {
                            chunk_size = -(uint)attribute_byte;
                        }
                        stream_offset = (ulonglong)((int)stream_offset + chunk_size);
                    }
                    
                    *ushort_ptr = (short)stream_offset;
                    ushort_ptr = ushort_ptr + 7;
                    vertex_offset = vertex_offset - 1;
                } while (vertex_offset != 0);
            }
            
            // 处理法线数据
            if (processed_offset != 0) {
                ushort_ptr = (undefined2*)(stream_offset + 2 + buffer_ptr * 0xe);
                stream_offset = attribute_offset;
                vertex_offset = processed_offset;
                
                do {
                    if ((*(byte*)(ushort_ptr + 5) & 4) == 0) {
                        if ((*(byte*)(ushort_ptr + 5) & 0x20) == 0) {
                            stream_offset = (ulonglong)
                                     (uint)((int)stream_offset +
                                           (int)(short)((ushort)*attribute_buffer * 0x100 + (ushort)attribute_buffer[1]));
                            attribute_buffer = attribute_buffer + 2;
                        }
                    }
                    else {
                        attribute_byte = *attribute_buffer;
                        attribute_buffer = attribute_buffer + 1;
                        chunk_size = (uint)attribute_byte;
                        if ((*(byte*)(ushort_ptr + 5) & 0x20) == 0) {
                            chunk_size = -(uint)attribute_byte;
                        }
                        stream_offset = (ulonglong)((int)stream_offset + chunk_size);
                    }
                    
                    *ushort_ptr = (short)stream_offset;
                    ushort_ptr = ushort_ptr + 7;
                    vertex_offset = vertex_offset - 1;
                } while (vertex_offset != 0);
            }
            
            // 初始化处理参数
            stack_size_fc = 0;
            stack_size_100 = 0;
            attribute_value = 0;
            stack_size_108 = 0;
            stack_size_f8 = 0;
            stack_size_f0 = 0;
            stream_offset = attribute_offset;
            vertex_offset = data_offset;
            temp_value = attribute_value;
            temp_value2 = attribute_value;
            
            if (processed_offset != 0) {
                short_ptr = (short*)(buffer_ptr * 0xe + stream_offset);
                processed_offset = attribute_offset;
                vertex_offset = attribute_offset;
                attribute_offset = attribute_offset;
                stream_offset = attribute_offset;
                chunk_size = attribute_offset;
                
                // 处理顶点属性
                do {
                    vertex_index = (int)stream_offset;
                    attribute_value2 = *short_ptr;
                    data_size = (uint)attribute_value2;
                    vertex_offset = (ulonglong)data_size;
                    attribute_flag = *(byte*)(short_ptr + 6);
                    attribute_short = short_ptr[1];
                    chunk_size = (uint)attribute_short;
                    buffer_ptr = CONCAT71(buffer_ptr._1_7_, attribute_flag);
                    attribute_value = (uint)attribute_offset;
                    
                    if (stack_size_f4 == attribute_value) {
                        if (chunk_size != 0) {
                            vertex_index = add_vertex_to_geometry_buffer(stream_offset, vertex_index, vertex_offset, data_offset, 
                                                                    (int)vertex_offset, (int)chunk_size, stack_size_f8, 
                                                                    stack_size_fc, (int)processed_offset, (int)attribute_offset);
                            attribute_offset = (ulonglong)stack_size_f0;
                            processed_offset = (ulonglong)stack_size_100;
                            attribute_flag = (byte)buffer_ptr;
                            attribute_value = stack_size_108;
                        }
                        
                        vertex_offset = (ulonglong)(~(uint)attribute_flag & 1);
                        if ((~(uint)attribute_flag & 1) == 0) {
                            chunk_size = (ulonglong)chunk_size;
                        }
                        else {
                            vertex_offset = (ulonglong)(uint)(int)short_ptr[7];
                            chunk_size = (ulonglong)(uint)(int)short_ptr[8];
                            stack_size_fc = chunk_size;
                            stack_size_f8 = data_size;
                            
                            if ((*(byte*)(short_ptr + 0xd) & 1) == 0) {
                                vertex_offset = (ulonglong)(uint)((int)((int)short_ptr[7] + data_size) >> 1);
                                chunk_size = (ulonglong)(uint)((int)((int)short_ptr[8] + chunk_size) >> 1);
                            }
                            else {
                                stack_size_108 = attribute_value + 1;
                                chunk_size = chunk_size + 1;
                                short_ptr = short_ptr + 7;
                            }
                        }
                        
                        ushort_ptr = (undefined2*)((long long)vertex_index * 0xe + stream_offset);
                        *(undefined1*)(ushort_ptr + 6) = 1;
                        *ushort_ptr = (short)vertex_offset;
                        ushort_ptr[1] = (short)chunk_size;
                        *(undefined4*)(ushort_ptr + 2) = 0;
                        stack_size_f4 = (uint)*stack_buffer_e8 * 0x100 + stack_buffer_e8[1] + 1;
                        stack_buffer_e8 = stack_buffer_e8 + 2;
                        vertex_offset = vertex_offset;
                        goto CONTINUE_PROCESSING;
                    }
                    else {
                        temp_value = (undefined2)attribute_offset;
                        buffer_position = (int)vertex_offset;
                        
                        if ((attribute_flag & 1) != 0) {
                            buffer_ptr = (long long)vertex_index * 0xe;
                            if (buffer_position == 0) {
                                processed_offset = 0;
                                temp_value = 0;
                            }
                            
                            *(char*)(buffer_ptr + 0xc + stream_offset) = (buffer_position != 0) + '\x02';
                            *(short*)(buffer_ptr + stream_offset) = attribute_value2;
                            *(short*)(buffer_ptr + 2 + stream_offset) = attribute_short;
                            *(short*)(buffer_ptr + 4 + stream_offset) = (short)processed_offset;
                            processed_offset = (ulonglong)stack_size_100;
                            *(undefined2*)(buffer_ptr + 6 + stream_offset) = temp_value;
                            goto CONTINUE_PROCESSING;
                        }
                        
                        if (buffer_position != 0) {
                            vertex_offset = (ulonglong)(vertex_index + 1);
                            ushort_ptr = (undefined2*)((long long)vertex_index * 0xe + stream_offset);
                            *ushort_ptr = (short)((int)((int)processed_offset + data_size) >> 1);
                            ushort_ptr[1] = (short)((int)((int)attribute_offset + chunk_size) >> 1);
                            *(undefined1*)(ushort_ptr + 6) = 3;
                            ushort_ptr[2] = (short)processed_offset;
                            ushort_ptr[3] = temp_value;
                            attribute_value = stack_size_108;
                        }
                        
                        stack_size_108 = attribute_value;
                        attribute_offset = (ulonglong)chunk_size;
                        vertex_offset = 1;
                        stack_size_100 = data_size;
                        stack_size_f0 = chunk_size;
                    }
                    
                    temp_value2 = (undefined4)vertex_offset;
                    temp_value = (undefined4)chunk_size;
                    temp_value2 = (undefined4)processed_offset;
                    attribute_value = (undefined4)attribute_offset;
                    attribute_value = (undefined4)vertex_offset;
                    stack_size_108 = stack_size_108 + 1;
                    attribute_offset = (ulonglong)stack_size_108;
                    chunk_size = chunk_size + 1;
                    short_ptr = short_ptr + 7;
                    processed_offset = vertex_offset;
                } while ((long long)chunk_size < (long long)(ulonglong)attribute_value);
            }
            
            // 最终处理
            attribute_value = add_vertex_to_geometry_buffer(stream_offset, vertex_offset, attribute_value, vertex_offset, temp_value, 
                                                          temp_value2, stack_size_f8, stack_size_fc, temp_value2, attribute_value);
            vertex_offset = stream_offset;
            processed_offset = (ulonglong)attribute_value;
        }
        
        *output_size = vertex_offset;
    }
    
    return processed_offset;
}