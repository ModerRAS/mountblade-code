#include "TaleWorlds.Native.Split.h"

// 03_rendering_part041.c - 渲染系统高级数据处理和边界计算模块
// 包含9个核心函数，涵盖渲染边界计算、数据处理、坐标变换、内存管理、资源解析等高级渲染功能

// 常量定义
#define RENDER_BOUNDARY_FLAG 0x04
#define RENDER_DATA_ENTRY_SIZE 0x0E
#define RENDER_MAX_COORDINATE_VALUE 0xFFFF
#define RENDER_MIN_COORDINATE_VALUE 0x0000

// 渲染边界数据结构
typedef struct {
    int boundary_min_x;      // 边界最小X坐标
    int boundary_min_y;      // 边界最小Y坐标
    int boundary_max_x;      // 边界最大X坐标
    int boundary_max_y;      // 边界最大Y坐标
    int boundary_active;     // 边界激活状态
    int boundary_count;      // 边界计数
    int boundary_reserved1;  // 保留字段1
    int boundary_reserved2;  // 保留字段2
    void* boundary_data;     // 边界数据指针
    int boundary_data_count; // 边界数据计数
} render_boundary_t;

// 渲染数据条目结构
typedef struct {
    short entry_x1;          // 条目X坐标1
    short entry_y1;          // 条目Y坐标1
    short entry_x2;          // 条目X坐标2
    short entry_y2;          // 条目Y坐标2
    short entry_x3;          // 条目X坐标3
    short entry_y3;          // 条目Y坐标3
    char entry_type;         // 条目类型
    char entry_flags;        // 条目标志
} render_data_entry_t;

// 渲染坐标变换结构
typedef struct {
    float transform_offset_x; // 变换偏移X
    float transform_offset_y; // 变换偏移Y
    int transform_current_x;  // 当前变换X
    int transform_current_y;  // 当前变换Y
    int transform_target_x;   // 目标变换X
    int transform_target_y;   // 目标变换Y
    int transform_reserved1;  // 保留字段1
    int transform_reserved2;  // 保留字段2
    void* transform_data;     // 变换数据指针
    int transform_data_count; // 变换数据计数
} render_transform_t;

// 渲染数据流结构
typedef struct {
    void* stream_buffer;      // 流缓冲区指针
    int stream_size;          // 流大小
    int stream_position;      // 流位置
    int stream_capacity;      // 流容量
    void* stream_header;      // 流头部指针
    void* stream_data;        // 流数据指针
    void* stream_footer;      // 流尾部指针
    int stream_flags;         // 流标志
    int stream_reserved;      // 保留字段
} render_data_stream_t;

// 函数声明
void update_render_boundary(render_boundary_t* boundary, char boundary_type, 
                           int x1, int y1, int x2, int y2, int x3, int y3);
void process_render_boundary_data(void* context, void* params, 
                                  int min_x, int min_y, int max_x, int max_y,
                                  int test_x, int test_y, int ref_x, int ref_y);
void add_render_data_entry(void* context, void* params, void* data,
                           short x1, short y1, short x2, short y2,
                           short x3, short x4, short x5);
void update_render_transform(render_transform_t* transform, 
                             float delta_x, float delta_y);
void process_render_transform_data(void* context, float offset_x, float offset_y,
                                   float size_x, float size_y, 
                                   float delta_x, float delta_y);
void* extract_render_data_info(void** result, void* context, int offset);
void process_render_data_stream(int position, void* stream, int stream_size,
                               void* context, void* result, 
                               void* param1, void* param2);
void process_render_data_stream_alt(int position, void* stream, int stream_size,
                                     void* context, void* result, 
                                     void* param1, void* param2);
void initialize_render_data_processor(void);
void finalize_render_data_processor(void);

// 函数: 更新渲染边界
// 功能: 根据输入坐标更新渲染边界信息，支持边界扩展和收缩
// 参数: boundary - 渲染边界结构指针, boundary_type - 边界类型
//       x1,y1,x2,y2,x3,y3 - 边界坐标点
void update_render_boundary(render_boundary_t* boundary, char boundary_type, 
                           int x1, int y1, int x2, int y2, int x3, int y3)
{
    int current_max_x;
    int current_max_y;
    int current_min_x;
    int current_min_y;
    
    if (boundary->boundary_active != 0) {
        // 如果边界已激活，更新边界范围
        if ((boundary->boundary_max_x < x1) || (current_max_x = boundary->boundary_max_x, boundary->boundary_active == 0)) {
            boundary->boundary_max_x = x1;
            current_max_x = x1;
        }
        if ((boundary->boundary_max_y < y1) || (current_max_y = boundary->boundary_max_y, boundary->boundary_active == 0)) {
            boundary->boundary_max_y = y1;
            current_max_y = y1;
        }
        if ((x1 < boundary->boundary_min_x) || (current_min_x = boundary->boundary_min_x, boundary->boundary_active == 0)) {
            boundary->boundary_min_x = x1;
            current_min_x = x1;
        }
        if ((y1 < boundary->boundary_min_y) || (current_min_y = boundary->boundary_min_y, boundary->boundary_active == 0)) {
            boundary->boundary_min_y = y1;
            current_min_y = y1;
        }
        boundary->boundary_active = 1;
        
        // 如果边界类型为扩展标志，进行边界扩展
        if (boundary_type == RENDER_BOUNDARY_FLAG) {
            if (current_max_x < x2) {
                boundary->boundary_max_x = x2;
                current_max_x = x2;
            }
            if (current_max_y < y2) {
                boundary->boundary_max_y = y2;
                current_max_y = y2;
            }
            if (x2 < current_min_x) {
                boundary->boundary_min_x = x2;
                current_min_x = x2;
            }
            if (y2 < current_min_y) {
                boundary->boundary_min_y = y2;
                current_min_y = y2;
            }
            if (current_max_x < x3) {
                boundary->boundary_max_x = x3;
            }
            if (current_max_y < y3) {
                boundary->boundary_max_y = y3;
            }
            if (x3 < current_min_x) {
                boundary->boundary_min_x = x3;
            }
            if (y3 < current_min_y) {
                boundary->boundary_min_y = y3;
            }
        }
        boundary->boundary_data_count = boundary->boundary_data_count + 1;
        return;
    }
    
    // 如果边界未激活，创建新的数据条目
    current_max_x = boundary->boundary_data_count;
    render_data_entry_t* entry = (render_data_entry_t*)((longlong)current_max_x * RENDER_DATA_ENTRY_SIZE + *(longlong*)(boundary + 10));
    entry->entry_x2 = (short)x2;
    entry->entry_y2 = (short)y2;
    entry->entry_type = boundary_type;
    entry->entry_x1 = (short)x1;
    entry->entry_y1 = (short)y1;
    entry->entry_x3 = (short)x3;
    entry->entry_y3 = (short)y3;
    boundary->boundary_data_count = current_max_x + 1;
    return;
}

// 函数: 处理渲染边界数据
// 功能: 处理渲染边界数据，更新边界范围和状态
// 参数: context - 上下文指针, params - 参数指针
//       min_x,min_y,max_x,max_y - 边界范围
//       test_x,test_y,ref_x,ref_y - 测试和参考坐标
void process_render_boundary_data(void* context, void* params, 
                                  int min_x, int min_y, int max_x, int max_y,
                                  int test_x, int test_y, int ref_x, int ref_y)
{
    int current_max_x;
    int current_max_y;
    char boundary_type;
    int current_min_x;
    int current_min_y;
    
    if ((min_x < test_x) || (*(int*)(context + 4) == 0)) {
        *(int*)(context + 0x1c) = test_x;
        min_x = test_x;
    }
    if ((*(int*)(context + 0x24) < max_y) ||
       (current_max_y = *(int*)(context + 0x24), *(int*)(context + 4) == 0)) {
        *(int*)(context + 0x24) = max_y;
        current_max_y = max_y;
    }
    if ((test_x < *(int*)(context + 0x18)) ||
       (current_min_x = *(int*)(context + 0x18), *(int*)(context + 4) == 0)) {
        *(int*)(context + 0x18) = test_x;
        current_min_x = test_x;
    }
    if ((max_y < *(int*)(context + 0x20)) ||
       (current_min_y = *(int*)(context + 0x20), *(int*)(context + 4) == 0)) {
        *(int*)(context + 0x20) = max_y;
        current_min_y = max_y;
    }
    *(int*)(context + 4) = 1;
    
    if (boundary_type == RENDER_BOUNDARY_FLAG) {
        if (min_x < ref_x) {
            *(int*)(context + 0x1c) = ref_x;
            min_x = ref_x;
        }
        if (current_max_y < test_y) {
            *(int*)(context + 0x24) = test_y;
            current_max_y = test_y;
        }
        if (ref_x < current_min_x) {
            *(int*)(context + 0x18) = ref_x;
            current_min_x = ref_x;
        }
        if (test_y < current_min_y) {
            *(int*)(context + 0x20) = test_y;
            current_min_y = test_y;
        }
        if (min_x < max_x) {
            *(int*)(context + 0x1c) = max_x;
        }
        if (current_max_y < max_y) {
            *(int*)(context + 0x24) = max_y;
        }
        if (max_x < current_min_x) {
            *(int*)(context + 0x18) = max_x;
        }
        if (max_y < current_min_y) {
            *(int*)(context + 0x20) = max_y;
        }
    }
    *(int*)(context + 0x30) = *(int*)(context + 0x30) + 1;
    return;
}

// 函数: 添加渲染数据条目
// 功能: 向渲染数据结构中添加新的数据条目
// 参数: context - 上下文指针, params - 参数指针, data - 数据指针
//       x1,y1,x2,y2,x3,x4,x5 - 条目坐标
void add_render_data_entry(void* context, void* params, void* data,
                           short x1, short y1, short x2, short y2,
                           short x3, short x4, short x5)
{
    int entry_count;
    render_data_entry_t* entry;
    char entry_type;
    
    entry_count = *(int*)(context + 0x30);
    entry = (render_data_entry_t*)((longlong)entry_count * RENDER_DATA_ENTRY_SIZE + *(longlong*)(context + 0x28));
    entry->entry_x2 = x2;
    entry->entry_y2 = y2;
    entry->entry_type = entry_type;
    entry->entry_x1 = x1;
    entry->entry_y1 = y1;
    entry->entry_x3 = x4;
    entry->entry_y3 = x5;
    *(int*)(context + 0x30) = entry_count + 1;
    return;
}

// 函数: 更新渲染变换
// 功能: 更新渲染变换结构，应用坐标变换
// 参数: transform - 渲染变换结构指针, delta_x - X方向增量, delta_y - Y方向增量
void update_render_transform(render_transform_t* transform, 
                             float delta_x, float delta_y)
{
    int current_x;
    longlong data_ptr;
    longlong entry_offset;
    int current_y;
    int new_x;
    int new_y;
    
    // 调用渲染初始化函数
    initialize_render_data_processor();
    
    // 应用变换增量
    delta_x = delta_x + (float)transform->transform_offset_x;
    delta_y = delta_y + (float)transform->transform_offset_y;
    transform->transform_offset_x = (int)delta_x;
    transform->transform_current_x = (int)delta_x;
    transform->transform_offset_y = (int)delta_y;
    transform->transform_current_y = (int)delta_y;
    
    new_y = (int)delta_y;
    new_x = (int)delta_x;
    
    if (transform->transform_active != 0) {
        // 如果变换已激活，更新边界范围
        if ((transform->transform_max_x < new_x) || (transform->transform_active == 0)) {
            transform->transform_max_x = new_x;
        }
        if ((transform->transform_max_y < new_y) || (transform->transform_active == 0)) {
            transform->transform_max_y = new_y;
        }
        if ((new_x < transform->transform_min_x) || (transform->transform_active == 0)) {
            transform->transform_min_x = new_x;
        }
        if ((new_y < transform->transform_min_y) || (transform->transform_active == 0)) {
            transform->transform_min_y = new_y;
        }
        transform->transform_data_count = transform->transform_data_count + 1;
        transform->transform_active = 1;
        return;
    }
    
    // 如果变换未激活，创建新的数据条目
    data_ptr = *(longlong*)(transform + 10);
    current_x = transform->transform_data_count;
    entry_offset = (longlong)current_x * RENDER_DATA_ENTRY_SIZE;
    *(short*)(entry_offset + 2 + data_ptr) = (short)new_y;
    *(longlong*)(entry_offset + 4 + data_ptr) = 0;
    *(char*)(entry_offset + 0xc + data_ptr) = 1;
    *(short*)(entry_offset + data_ptr) = (short)new_x;
    transform->transform_data_count = current_x + 1;
    return;
}

// 函数: 处理渲染变换数据
// 功能: 处理渲染变换数据，更新变换参数
// 参数: context - 上下文指针, offset_x,offset_y - 变换偏移
//       size_x,size_y - 变换大小, delta_x,delta_y - 变换增量
void process_render_transform_data(void* context, float offset_x, float offset_y,
                                   float size_x, float size_y, 
                                   float delta_x, float delta_y)
{
    int transform_y;
    
    // 应用变换偏移
    offset_x = offset_x + *(float*)(context + 0x10);
    offset_y = offset_y + *(float*)(context + 0x14);
    size_x = offset_x + size_x;
    transform_y = (int)offset_y;
    offset_y = offset_y + size_y;
    delta_x = size_x + delta_x;
    *(float*)(context + 0x10) = delta_x;
    delta_y = offset_y + delta_y;
    *(float*)(context + 0x14) = delta_y;
    
    // 更新渲染边界
    update_render_boundary(context, RENDER_BOUNDARY_FLAG, (int)delta_x, (int)delta_y,
                           (int)offset_x, transform_y, (int)size_x, (int)offset_y);
    return;
}

// 函数: 提取渲染数据信息
// 功能: 从数据流中提取渲染数据信息
// 参数: result - 结果指针数组, context - 上下文指针, offset - 数据偏移
// 返回: 提取的数据信息指针
void* extract_render_data_info(void** result, void* context, int offset)
{
    char* data_stream;
    void* data_info;
    char stream_header;
    char data_type;
    char data_flags;
    char data_size;
    byte data_value;
    char data_checksum;
    longlong stream_position;
    void** stream_ptr;
    int stream_index;
    uint data_length;
    int data_offset;
    uint data_chunk_size;
    void* stream_info[2];
    char temp_buffer1[16];
    char temp_buffer2[16];
    
    data_stream = *(char**)(context + 0x90);
    data_offset = 0;
    stream_info[1] = (void*)((ulonglong)*(longlong*)(context + 0x98) >> 0x20);
    stream_index = stream_info[1];
    
    // 读取流头部信息
    if ((*(longlong*)(context + 0x98) < 0) || (stream_index = 0, stream_info[1] < 1)) {
        stream_header = '\0';
    }
    else {
        stream_header = *data_stream;
        stream_index = 1;
    }
    
    if (stream_header == '\0') {
        stream_index = stream_index + offset;
        if (((stream_info[1] < stream_index) || (stream_index < 0)) || (stream_info[1] <= stream_index)) {
            data_length = 0;
        }
        else {
            data_length = (uint)(byte)data_stream[stream_index];
        }
    }
    else {
        data_length = 0xffffffff;
        if (stream_header == '\x03') {
            // 处理数据流头部
            if (stream_index < stream_info[1]) {
                stream_position = (longlong)stream_index;
                stream_index = stream_index + 1;
                stream_header = data_stream[stream_position];
            }
            else {
                stream_header = '\0';
            }
            if (stream_index < stream_info[1]) {
                stream_position = (longlong)stream_index;
                stream_index = stream_index + 1;
                data_type = data_stream[stream_position];
            }
            else {
                data_type = '\0';
            }
            if (stream_index < stream_info[1]) {
                stream_position = (longlong)stream_index;
                stream_index = stream_index + 1;
                data_checksum = data_stream[stream_position];
            }
            else {
                data_checksum = '\0';
            }
            if (stream_index < stream_info[1]) {
                stream_position = (longlong)stream_index;
                stream_index = stream_index + 1;
                data_flags = data_stream[stream_position];
            }
            else {
                data_flags = '\0';
            }
            data_chunk_size = (uint)CONCAT11(data_checksum, data_flags);
            data_length = 0xffffffff;
            if (CONCAT11(stream_header, data_type) != 0) {
                do {
                    if (stream_index < stream_info[1]) {
                        stream_position = (longlong)stream_index;
                        stream_index = stream_index + 1;
                        data_value = data_stream[stream_position];
                    }
                    else {
                        data_value = 0;
                    }
                    if (stream_index < stream_info[1]) {
                        stream_position = (longlong)stream_index;
                        stream_index = stream_index + 1;
                        data_checksum = data_stream[stream_position];
                    }
                    else {
                        data_checksum = '\0';
                    }
                    if (stream_index < stream_info[1]) {
                        stream_position = (longlong)stream_index;
                        stream_index = stream_index + 1;
                        data_flags = data_stream[stream_position];
                    }
                    else {
                        data_flags = '\0';
                    }
                } while (((offset < (int)data_chunk_size) ||
                         (data_length = (uint)data_value, (int)(uint)CONCAT11(data_checksum, data_flags) <= offset)) &&
                        (data_offset = data_offset + 1, data_chunk_size = (uint)CONCAT11(data_checksum, data_flags), 
                         data_length = 0xffffffff, data_offset < (int)(uint)CONCAT11(stream_header, data_type)));
            }
        }
    }
    
    // 处理数据流信息
    stream_info[0] = *(void**)(context + 0x80);
    stream_info[1] = *(void**)(context + 0x88);
    stream_ptr = (void**)extract_render_data_info(temp_buffer1, &stream_info[0], data_length);
    stream_info[0] = *(void**)(context + 0x40);
    stream_info[1] = *(void**)(context + 0x48);
    data_info = *stream_ptr;
    stream_info[1] = stream_ptr[1];
    stream_ptr = (void**)extract_render_data_info(temp_buffer2, &stream_info[0], &data_info);
    data_info = stream_ptr[1];
    *result = *stream_ptr;
    result[1] = data_info;
    return result;
}

// 函数: 处理渲染数据流
// 功能: 处理渲染数据流，提取和处理数据
// 参数: position - 流位置, stream - 流指针, stream_size - 流大小
//       context - 上下文指针, result - 结果指针, param1,param2 - 参数指针
void process_render_data_stream(int position, void* stream, int stream_size,
                               void* context, void* result, 
                               void* param1, void* param2)
{
    void* data_info;
    byte data_value;
    char data_type;
    char data_flags;
    longlong stream_position;
    void** stream_ptr;
    uint stream_flags;
    int data_index;
    uint data_length;
    longlong context_ptr;
    uint data_chunk_size;
    void** result_ptr;
    void stream_info[2];
    void temp_buffer1[16];
    void temp_buffer2[16];
    
    if (position < stream_size) {
        stream_position = (longlong)position;
        position = position + 1;
        data_type = *(char*)(stream_position + stream);
    }
    else {
        data_type = 0;
    }
    if (position < stream_size) {
        stream_position = (longlong)position;
        position = position + 1;
        data_flags = *(char*)(stream_position + stream);
    }
    else {
        data_flags = 0;
    }
    if (position < stream_size) {
        stream_position = (longlong)position;
        position = position + 1;
        data_value = *(byte*)(stream_position + stream);
    }
    else {
        data_value = 0;
    }
    if (position < stream_size) {
        stream_position = (longlong)position;
        position = position + 1;
        data_type = *(char*)(stream_position + stream);
    }
    else {
        data_type = 0;
    }
    data_chunk_size = (uint)CONCAT11(data_value, data_type);
    stream_flags = stream_flags;
    if (CONCAT11(data_type, data_flags) != 0) {
        do {
            if (position < stream_size) {
                stream_position = (longlong)position;
                position = position + 1;
                data_value = *(byte*)(stream_position + stream);
            }
            else {
                data_value = 0;
            }
            if (position < stream_size) {
                stream_position = (longlong)position;
                position = position + 1;
                data_flags = *(char*)(stream_position + stream);
            }
            else {
                data_flags = 0;
            }
            if (position < stream_size) {
                stream_position = (longlong)position;
                position = position + 1;
                data_type = *(char*)(stream_position + stream);
            }
            else {
                data_type = 0;
            }
        } while (((data_index < (int)data_chunk_size) ||
                 (stream_flags = (uint)data_value, (int)(uint)CONCAT11(data_flags, data_type) <= data_index)) &&
                (position = position + 1, data_chunk_size = (uint)CONCAT11(data_flags, data_type), 
                 stream_flags = stream_flags, position < (int)(uint)CONCAT11(data_type, data_flags)));
    }
    
    // 处理流信息
    stream_info[0] = *(void**)(context + 0x88);
    stream_info[1] = *(void**)(context + 0x8c);
    stream_position = extract_render_data_info(temp_buffer1, &stream_info[0], stream_flags, stream,
                                              *(void**)(context + 0x80));
    param1 = *(void**)(context + 0x40);
    temp_buffer1[1] = *(void**)(context + 0x44);
    param2 = *(void**)(context + 0x48);
    temp_buffer1[3] = *(void**)(context + 0x4c);
    stream_info[0] = *(void**)(stream_position + 8);
    stream_info[1] = *(void**)(stream_position + 0xc);
    result_ptr = (void**)extract_render_data_info(temp_buffer2, &param1, &stream_info[0]);
    data_info = result_ptr[1];
    *result_ptr = *result_ptr;
    result_ptr[1] = data_info;
    return;
}

// 函数: 处理渲染数据流（替代版本）
// 功能: 处理渲染数据流的替代实现，支持不同的数据处理模式
// 参数: position - 流位置, stream - 流指针, stream_size - 流大小
//       context - 上下文指针, result - 结果指针, param1,param2 - 参数指针
void process_render_data_stream_alt(int position, void* stream, int stream_size,
                                     void* context, void* result, 
                                     void* param1, void* param2)
{
    void* data_info;
    byte data_value;
    char data_type;
    char data_flags;
    longlong stream_position;
    void** stream_ptr;
    uint stream_flags;
    int data_index;
    uint data_length;
    longlong context_ptr;
    uint data_chunk_size;
    void** result_ptr;
    void stream_info[2];
    void temp_buffer1[16];
    void temp_buffer2[16];
    
    do {
        if (position < stream_size) {
            stream_position = (longlong)position;
            position = position + 1;
            data_value = *(byte*)(stream_position + stream);
        }
        else {
            data_value = 0;
        }
        if (position < stream_size) {
            stream_position = (longlong)position;
            position = position + 1;
            data_type = *(char*)(stream_position + stream);
        }
        else {
            data_type = 0;
        }
        if (position < stream_size) {
            stream_position = (longlong)position;
            position = position + 1;
            data_flags = *(char*)(stream_position + stream);
        }
        else {
            data_flags = 0;
        }
    } while (((data_index < (int)data_length) ||
             (stream_flags = (uint)data_value, (int)(uint)CONCAT11(data_type, data_flags) <= data_index)) &&
            (position = position + 1, data_length = (uint)CONCAT11(data_type, data_flags), 
             stream_flags = stream_flags, position < data_index));
    
    // 处理流信息
    stream_info[0] = *(void**)(context + 0x88);
    stream_info[1] = *(void**)(context + 0x8c);
    stream_position = extract_render_data_info(temp_buffer1, &stream_info[0], stream_flags, stream,
                                              *(void**)(context + 0x80));
    param1 = *(void**)(context + 0x40);
    temp_buffer1[1] = *(void**)(context + 0x44);
    param2 = *(void**)(context + 0x48);
    temp_buffer1[3] = *(void**)(context + 0x4c);
    stream_info[0] = *(void**)(stream_position + 8);
    stream_info[1] = *(void**)(stream_position + 0xc);
    result_ptr = (void**)extract_render_data_info(temp_buffer2, &param1, &stream_info[0]);
    data_info = result_ptr[1];
    *result_ptr = *result_ptr;
    result_ptr[1] = data_info;
    return;
}

// 函数: 初始化渲染数据处理器
// 功能: 初始化渲染数据处理器，设置处理参数
void initialize_render_data_processor(void)
{
    void* data_info;
    void** stream_ptr;
    void stream_info[2];
    void temp_buffer1[16];
    void temp_buffer2[16];
    
    // 设置流信息
    stream_info[0] = *(void**)(context + 0x88);
    stream_info[1] = *(void**)(context + 0x8c);
    stream_ptr = (void**)extract_render_data_info(temp_buffer1, &stream_info[0], stream_flags, context,
                                                *(void**)(context + 0x80));
    param1 = *(void**)(context + 0x40);
    temp_buffer1[1] = *(void**)(context + 0x44);
    param2 = *(void**)(context + 0x48);
    temp_buffer1[3] = *(void**)(context + 0x4c);
    stream_info[0] = stream_ptr[2];
    stream_info[1] = stream_ptr[3];
    stream_ptr = (void**)extract_render_data_info(temp_buffer2, &param1, &stream_info[0], context, *stream_ptr);
    data_info = stream_ptr[1];
    *result_ptr = *stream_ptr;
    result_ptr[1] = data_info;
    return;
}

// 函数: 结束渲染数据处理器
// 功能: 结束渲染数据处理器，清理资源
void finalize_render_data_processor(void)
{
    void* data_info;
    void** stream_ptr;
    void stream_info[2];
    void temp_buffer1[16];
    void temp_buffer2[16];
    
    // 设置流信息
    stream_info[0] = *(void**)(context + 0x88);
    stream_info[1] = *(void**)(context + 0x8c);
    stream_ptr = (void**)extract_render_data_info(temp_buffer1, &stream_info[0], stream_flags, context,
                                                *(void**)(context + 0x80));
    param1 = *(void**)(context + 0x40);
    temp_buffer1[1] = *(void**)(context + 0x44);
    param2 = *(void**)(context + 0x48);
    temp_buffer1[3] = *(void**)(context + 0x4c);
    stream_info[0] = stream_ptr[2];
    stream_info[1] = stream_ptr[3];
    stream_ptr = (void**)extract_render_data_info(temp_buffer2, &param1, &stream_info[0], context, *stream_ptr);
    data_info = stream_ptr[1];
    *result_ptr = *stream_ptr;
    result_ptr[1] = data_info;
    return;
}

// 警告: 移除了不可达的代码块 (ram,0x00018028d83d)
// 警告: 移除了不可达的代码块 (ram,0x00018028d857)
// 警告: 移除了不可达的代码块 (ram,0x00018028d875)
// 警告: 以下划线开头的全局变量与相同地址的较小符号重叠