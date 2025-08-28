#include "TaleWorlds.Native.Split.h"

// 03_rendering_part041.c - 渲染系统边界计算和数据处理模块
// 包含9个核心函数，涵盖渲染边界计算、数据转换、位置更新、边界扩展、高级数据搜索等功能

// 渲染边界结构体偏移量定义
#define RENDER_BOUNDS_ACTIVE_FLAG     1     // 激活标志偏移量
#define RENDER_BOUNDS_MIN_X_OFFSET    6     // 最小X坐标偏移量
#define RENDER_BOUNDS_MIN_Y_OFFSET    8     // 最小Y坐标偏移量
#define RENDER_BOUNDS_MAX_X_OFFSET    7     // 最大X坐标偏移量
#define RENDER_BOUNDS_MAX_Y_OFFSET    9     // 最大Y坐标偏移量
#define RENDER_BOUNDS_DATA_OFFSET     10    // 数据指针偏移量
#define RENDER_BOUNDS_COUNT_OFFSET    12    // 计数器偏移量

// 边界更新模式常量
#define BOUNDS_UPDATE_MODE_EXTEND    0x04   // 边界扩展模式

// 渲染数据块大小
#define RENDER_DATA_BLOCK_SIZE       0x0e   // 14字节每个数据块

// 函数: update_render_bounds
// 功能: 更新渲染对象的边界框
// 参数: 
//   - bounds_data: 边界数据指针
//   - update_mode: 更新模式
//   - x1, y1: 第一个点坐标
//   - x2, y2: 第二个点坐标
//   - x3, y3: 第三个点坐标
void update_render_bounds(int *bounds_data, char update_mode, int x1, int y1, int x2, int y2, int x3, int y3)
{
    int current_max_x, current_max_y;
    int current_min_x, current_min_y;
    
    if (*bounds_data != 0) {
        // 更新最大X坐标
        if ((bounds_data[RENDER_BOUNDS_MAX_X_OFFSET] < x1) || 
            (current_max_x = bounds_data[RENDER_BOUNDS_MAX_X_OFFSET], bounds_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            bounds_data[RENDER_BOUNDS_MAX_X_OFFSET] = x1;
            current_max_x = x1;
        }
        
        // 更新最大Y坐标
        if ((bounds_data[RENDER_BOUNDS_MAX_Y_OFFSET] < y1) || 
            (current_max_y = bounds_data[RENDER_BOUNDS_MAX_Y_OFFSET], bounds_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            bounds_data[RENDER_BOUNDS_MAX_Y_OFFSET] = y1;
            current_max_y = y1;
        }
        
        // 更新最小X坐标
        if ((x1 < bounds_data[RENDER_BOUNDS_MIN_X_OFFSET]) || 
            (current_min_x = bounds_data[RENDER_BOUNDS_MIN_X_OFFSET], bounds_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            bounds_data[RENDER_BOUNDS_MIN_X_OFFSET] = x1;
            current_min_x = x1;
        }
        
        // 更新最小Y坐标
        if ((y1 < bounds_data[RENDER_BOUNDS_MIN_Y_OFFSET]) || 
            (current_min_y = bounds_data[RENDER_BOUNDS_MIN_Y_OFFSET], bounds_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            bounds_data[RENDER_BOUNDS_MIN_Y_OFFSET] = y1;
            current_min_y = y1;
        }
        
        bounds_data[RENDER_BOUNDS_ACTIVE_FLAG] = 1;
        
        // 扩展模式处理
        if (update_mode == BOUNDS_UPDATE_MODE_EXTEND) {
            // 扩展最大边界
            if (current_max_x < x2) {
                bounds_data[RENDER_BOUNDS_MAX_X_OFFSET] = x2;
                current_max_x = x2;
            }
            if (current_max_y < y2) {
                bounds_data[RENDER_BOUNDS_MAX_Y_OFFSET] = y2;
                current_max_y = y2;
            }
            
            // 扩展最小边界
            if (x2 < current_min_x) {
                bounds_data[RENDER_BOUNDS_MIN_X_OFFSET] = x2;
                current_min_x = x2;
            }
            if (y2 < current_min_y) {
                bounds_data[RENDER_BOUNDS_MIN_Y_OFFSET] = y2;
                current_min_y = y2;
            }
            
            // 进一步扩展到第三组坐标
            if (current_max_x < x3) {
                bounds_data[RENDER_BOUNDS_MAX_X_OFFSET] = x3;
            }
            if (current_max_y < y3) {
                bounds_data[RENDER_BOUNDS_MAX_Y_OFFSET] = y3;
            }
            if (x3 < current_min_x) {
                bounds_data[RENDER_BOUNDS_MIN_X_OFFSET] = x3;
            }
            if (y3 < current_min_y) {
                bounds_data[RENDER_BOUNDS_MIN_Y_OFFSET] = y3;
            }
        }
        
        bounds_data[RENDER_BOUNDS_COUNT_OFFSET]++;
        return;
    }
    
    // 处理新数据项
    current_max_x = bounds_data[RENDER_BOUNDS_COUNT_OFFSET];
    unsigned short *data_block = (unsigned short *)((int64_t)current_max_x * RENDER_DATA_BLOCK_SIZE + 
                                                   *(int64_t *)(bounds_data + RENDER_BOUNDS_DATA_OFFSET));
    
    // 存储坐标数据
    data_block[2] = (unsigned short)x2;  // 第二个点X
    data_block[3] = (unsigned short)y2;  // 第二个点Y
    *(char *)(data_block + 6) = update_mode;  // 更新模式
    *data_block = (unsigned short)x1;         // 第一个点X
    data_block[1] = (unsigned short)y1;       // 第一个点Y
    data_block[4] = (unsigned short)x3;       // 第三个点X
    data_block[5] = (unsigned short)y3;       // 第三个点Y
    
    bounds_data[RENDER_BOUNDS_COUNT_OFFSET] = current_max_x + 1;
    return;
}

// 函数: update_render_bounds_extended
// 功能: 扩展更新渲染边界（64位版本）
// 参数:
//   - bounds_ptr: 边界数据指针
//   - param_2: 保留参数
//   - x1, y1: 第一个点坐标
//   - x2, y2: 第二个点坐标
//   - x3, y3: 第三个点坐标
void update_render_bounds_extended(int64_t bounds_ptr, uint64_t param_2, int x1, int y1, 
                                 uint64_t param_5, int x2, int y2, int x3, int y3)
{
    int current_max_x, current_max_y;
    int current_min_x, current_min_y;
    char update_mode;
    
    // 更新最大X坐标
    if ((x1 < *(int *)(bounds_ptr + 0x18)) || (*(int *)(bounds_ptr + 4) == 0)) {
        *(int *)(bounds_ptr + 0x1c) = *(int *)(bounds_ptr + 0x18);
        x1 = *(int *)(bounds_ptr + 0x18);
    }
    
    // 更新最大Y坐标
    if ((*(int *)(bounds_ptr + 0x24) < y1) || 
        (current_max_y = *(int *)(bounds_ptr + 0x24), *(int *)(bounds_ptr + 4) == 0)) {
        *(int *)(bounds_ptr + 0x24) = y1;
        current_max_y = y1;
    }
    
    // 更新最小X坐标
    if ((*(int *)(bounds_ptr + 0x18) < *(int *)(bounds_ptr + 0x18)) || 
        (current_min_x = *(int *)(bounds_ptr + 0x18), *(int *)(bounds_ptr + 4) == 0)) {
        *(int *)(bounds_ptr + 0x18) = *(int *)(bounds_ptr + 0x18);
        current_min_x = *(int *)(bounds_ptr + 0x18);
    }
    
    // 更新最小Y坐标
    if ((y1 < *(int *)(bounds_ptr + 0x20)) || 
        (current_min_y = *(int *)(bounds_ptr + 0x20), *(int *)(bounds_ptr + 4) == 0)) {
        *(int *)(bounds_ptr + 0x20) = y1;
        current_min_y = y1;
    }
    
    *(int32_t *)(bounds_ptr + 4) = 1;
    
    // 扩展模式处理
    if (update_mode == BOUNDS_UPDATE_MODE_EXTEND) {
        // 扩展边界到第二组坐标
        if (x1 < x2) {
            *(int *)(bounds_ptr + 0x1c) = x2;
            x1 = x2;
        }
        if (current_max_y < y2) {
            *(int *)(bounds_ptr + 0x24) = y2;
            current_max_y = y2;
        }
        if (x2 < current_min_x) {
            *(int *)(bounds_ptr + 0x18) = x2;
            current_min_x = x2;
        }
        if (y2 < current_min_y) {
            *(int *)(bounds_ptr + 0x20) = y2;
            current_min_y = y2;
        }
        
        // 扩展边界到第三组坐标
        if (x1 < x3) {
            *(int *)(bounds_ptr + 0x1c) = x3;
        }
        if (current_max_y < y3) {
            *(int *)(bounds_ptr + 0x24) = y3;
        }
        if (x3 < current_min_x) {
            *(int *)(bounds_ptr + 0x18) = x3;
        }
        if (y3 < current_min_y) {
            *(int *)(bounds_ptr + 0x20) = y3;
        }
    }
    
    *(int *)(bounds_ptr + 0x30) = *(int *)(bounds_ptr + 0x30) + 1;
    return;
}

// 函数: add_render_bounds_data
// 功能: 添加渲染边界数据（64位版本）
// 参数:
//   - bounds_ptr: 边界数据指针
//   - param_2, param_3: 保留参数
//   - x1, y1: 第一个点坐标
//   - param_5: 保留参数
//   - x2, y2: 第二个点坐标
//   - x3, y3: 第三个点坐标
void add_render_bounds_data(int64_t bounds_ptr, uint64_t param_2, uint64_t param_3, 
                           unsigned short x1, uint64_t param_5, unsigned short y1, 
                           unsigned short x2, unsigned short y2, unsigned short x3)
{
    int data_count;
    unsigned short *data_block;
    char update_mode;
    unsigned short first_x;
    
    data_count = *(int *)(bounds_ptr + 0x30);
    data_block = (unsigned short *)((int64_t)data_count * RENDER_DATA_BLOCK_SIZE + 
                                   *(int64_t *)(bounds_ptr + 0x28));
    
    // 存储边界数据
    data_block[2] = y1;        // 第一个点Y
    data_block[3] = x2;        // 第二个点X
    *(unsigned char *)(data_block + 6) = update_mode;  // 更新模式
    *data_block = first_x;     // 第一个点X
    data_block[1] = x1;        // 原始X坐标
    data_block[4] = y2;        // 第二个点Y
    data_block[5] = x3;        // 第三个点X
    
    *(int *)(bounds_ptr + 0x30) = data_count + 1;
    return;
}

// 函数: update_render_position
// 功能: 更新渲染对象位置
// 参数:
//   - render_data: 渲染数据指针
//   - delta_x: X方向增量
//   - delta_y: Y方向增量
void update_render_position(int *render_data, float delta_x, float delta_y)
{
    int current_x, current_y;
    int64_t data_ptr;
    int64_t data_offset;
    int new_y, new_x;
    
    // 调用渲染初始化函数
    func_0x00018028d1e0();
    
    // 计算新位置
    delta_x = delta_x + (float)render_data[4];
    delta_y = delta_y + (float)render_data[5];
    
    // 更新位置数据
    render_data[4] = (int)delta_x;
    render_data[2] = (int)delta_x;
    render_data[5] = (int)delta_y;
    render_data[3] = (int)delta_y;
    
    new_y = (int)delta_y;
    new_x = (int)delta_x;
    
    if (*render_data != 0) {
        // 更新边界
        if ((render_data[RENDER_BOUNDS_MAX_X_OFFSET] < new_x) || (render_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            render_data[RENDER_BOUNDS_MAX_X_OFFSET] = new_x;
        }
        if ((render_data[RENDER_BOUNDS_MAX_Y_OFFSET] < new_y) || (render_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            render_data[RENDER_BOUNDS_MAX_Y_OFFSET] = new_y;
        }
        if ((new_x < render_data[RENDER_BOUNDS_MIN_X_OFFSET]) || (render_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            render_data[RENDER_BOUNDS_MIN_X_OFFSET] = new_x;
        }
        if ((new_y < render_data[RENDER_BOUNDS_MIN_Y_OFFSET]) || (render_data[RENDER_BOUNDS_ACTIVE_FLAG] == 0)) {
            render_data[RENDER_BOUNDS_MIN_Y_OFFSET] = new_y;
        }
        
        render_data[RENDER_BOUNDS_COUNT_OFFSET]++;
        render_data[RENDER_BOUNDS_ACTIVE_FLAG] = 1;
        return;
    }
    
    // 处理新位置数据
    data_ptr = *(int64_t *)(render_data + RENDER_BOUNDS_DATA_OFFSET);
    current_x = render_data[RENDER_BOUNDS_COUNT_OFFSET];
    data_offset = (int64_t)current_x * RENDER_DATA_BLOCK_SIZE;
    
    // 存储位置数据
    *(unsigned short *)(data_offset + 2 + data_ptr) = (unsigned short)new_y;
    *(uint64_t *)(data_offset + 4 + data_ptr) = 0;
    *(unsigned char *)(data_offset + 0xc + data_ptr) = 1;
    *(unsigned short *)(data_offset + data_ptr) = (unsigned short)new_x;
    
    render_data[RENDER_BOUNDS_COUNT_OFFSET] = current_x + 1;
    return;
}

// 函数: extend_render_bounds_float
// 功能: 使用浮点数扩展渲染边界
// 参数:
//   - render_ptr: 渲染数据指针
//   - offset_x, offset_y: 偏移量
//   - size_x, size_y: 尺寸
//   - extend_x, extend_y: 扩展量
void extend_render_bounds_float(int64_t render_ptr, float offset_x, float offset_y, 
                               float size_x, float size_y, float extend_x, float extend_y)
{
    int new_x;
    
    // 计算扩展后的坐标
    offset_x = offset_x + *(float *)(render_ptr + 0x10);
    offset_y = offset_y + *(float *)(render_ptr + 0x14);
    size_x = offset_x + size_x;
    new_x = (int)offset_y;
    offset_y = offset_y + size_y;
    extend_x = size_x + extend_x;
    *(float *)(render_ptr + 0x10) = extend_x;
    extend_y = offset_y + extend_y;
    *(float *)(render_ptr + 0x14) = extend_y;
    
    // 调用边界更新函数
    update_render_bounds(render_ptr, CONCAT71((uint7)(uint3)((uint)new_x >> 8), BOUNDS_UPDATE_MODE_EXTEND), 
                        (int)extend_x, (int)extend_y, (int)offset_x, new_x, (int)size_x, (int)offset_y);
    return;
}

// 函数: search_render_data_by_index
// 功能: 根据索引搜索渲染数据
// 参数:
//   - result_ptr: 结果指针
//   - data_ptr: 数据指针
//   - search_index: 搜索索引
// 返回值: 找到的数据指针
uint64_t *search_render_data_by_index(uint64_t *result_ptr, int64_t data_ptr, int search_index)
{
    char *data_buffer;
    uint64_t temp_data;
    char first_char;
    char second_char;
    char third_char;
    char fourth_char;
    byte data_byte;
    char fifth_char;
    int64_t buffer_offset;
    uint64_t *found_ptr;
    int current_index;
    uint search_value;
    int data_length;
    uint chunk_value;
    uint64_t stack_data_1;
    uint64_t stack_data_2;
    uint64_t stack_data_3;
    uint64_t stack_data_4;
    int8_t temp_buffer_1[16];
    int8_t temp_buffer_2[16];
    
    data_buffer = *(char **)(data_ptr + 0x90);
    current_index = 0;
    
    // 获取数据长度
    stack_data_2._4_4_ = (int)((uint64_t)*(int64_t *)(data_ptr + 0x98) >> 0x20);
    data_length = stack_data_2._4_4_;
    
    if ((*(int64_t *)(data_ptr + 0x98) < 0) || (data_length = 0, stack_data_2._4_4_ < 1)) {
        first_char = '\0';
    } else {
        first_char = *data_buffer;
        data_length = 1;
    }
    
    // 检查第一个字符
    if (first_char == '\0') {
        current_index = current_index + search_index;
        if (((stack_data_2._4_4_ < current_index) || (current_index < 0)) || (stack_data_2._4_4_ <= current_index)) {
            search_value = 0;
        } else {
            search_value = (uint)(byte)data_buffer[current_index];
        }
    } else {
        search_value = 0xffffffff;
        if (first_char == '\x03') {
            // 读取数据块头信息
            if (data_length < stack_data_2._4_4_) {
                buffer_offset = (int64_t)data_length;
                data_length = data_length + 1;
                first_char = data_buffer[buffer_offset];
            } else {
                first_char = '\0';
            }
            if (data_length < stack_data_2._4_4_) {
                buffer_offset = (int64_t)data_length;
                data_length = data_length + 1;
                second_char = data_buffer[buffer_offset];
            } else {
                second_char = '\0';
            }
            if (data_length < stack_data_2._4_4_) {
                buffer_offset = (int64_t)data_length;
                data_length = data_length + 1;
                fifth_char = data_buffer[buffer_offset];
            } else {
                fifth_char = '\0';
            }
            if (data_length < stack_data_2._4_4_) {
                buffer_offset = (int64_t)data_length;
                data_length = data_length + 1;
                third_char = data_buffer[buffer_offset];
            } else {
                third_char = '\0';
            }
            
            chunk_value = (uint)CONCAT11(fifth_char, third_char);
            search_value = 0xffffffff;
            
            // 搜索匹配的数据块
            if (CONCAT11(first_char, second_char) != 0) {
                do {
                    if (data_length < stack_data_2._4_4_) {
                        buffer_offset = (int64_t)data_length;
                        data_length = data_length + 1;
                        data_byte = data_buffer[buffer_offset];
                    } else {
                        data_byte = 0;
                    }
                    if (data_length < stack_data_2._4_4_) {
                        buffer_offset = (int64_t)data_length;
                        data_length = data_length + 1;
                        fifth_char = data_buffer[buffer_offset];
                    } else {
                        fifth_char = '\0';
                    }
                    if (data_length < stack_data_2._4_4_) {
                        buffer_offset = (int64_t)data_length;
                        data_length = data_length + 1;
                        third_char = data_buffer[buffer_offset];
                    } else {
                        third_char = '\0';
                    }
                } while (((search_index < (int)chunk_value) ||
                         (search_value = (uint)data_byte, (int)(uint)CONCAT11(fifth_char, third_char) <= search_index)) &&
                        (current_index = current_index + 1, chunk_value = (uint)CONCAT11(fifth_char, third_char), 
                         search_value = 0xffffffff, current_index < (int)(uint)CONCAT11(first_char, second_char)));
            }
        }
    }
    
    // 处理搜索结果
    stack_data_1 = *(uint64_t *)(data_ptr + 0x80);
    stack_data_2 = *(uint64_t *)(data_ptr + 0x88);
    found_ptr = (uint64_t *)FUN_18028b4c0(temp_buffer_1, &stack_data_1, search_value);
    
    stack_data_3 = *(uint64_t *)(data_ptr + 0x40);
    stack_data_4 = *(uint64_t *)(data_ptr + 0x48);
    stack_data_1 = *found_ptr;
    stack_data_2 = found_ptr[1];
    found_ptr = (uint64_t *)FUN_18028b820(temp_buffer_2, &stack_data_3, &stack_data_1);
    
    temp_data = found_ptr[1];
    *result_ptr = *found_ptr;
    result_ptr[1] = temp_data;
    return result_ptr;
}

// 函数: process_render_data_sequence
// 功能: 处理渲染数据序列
// 参数:
//   - start_index: 起始索引
//   - param_2: 保留参数
//   - end_index: 结束索引
//   - data_ptr: 数据指针
//   - result_ptr: 结果指针
//   - param_6, param_7: 保留参数
void process_render_data_sequence(int start_index, uint64_t param_2, int end_index, 
                                  int64_t data_ptr, uint64_t result_ptr, 
                                  int32_t param_6, int32_t param_7)
{
    uint64_t result_data;
    int8_t first_byte;
    int8_t second_byte;
    int8_t third_byte;
    byte data_byte;
    int8_t fourth_byte;
    int64_t offset;
    uint64_t *processed_ptr;
    uint search_value;
    int data_length;
    uint chunk_value;
    int64_t context_ptr;
    uint64_t *output_ptr;
    uint temp_value;
    int current_index;
    uint chunk_data;
    int32_t stack_param_1;
    int32_t stack_param_2;
    
    if (start_index < end_index) {
        offset = (int64_t)start_index;
        start_index = start_index + 1;
        first_byte = *(int8_t *)(offset + data_ptr);
    } else {
        first_byte = 0;
    }
    
    if (start_index < end_index) {
        offset = (int64_t)start_index;
        start_index = start_index + 1;
        second_byte = *(int8_t *)(offset + data_ptr);
    } else {
        second_byte = 0;
    }
    
    if (start_index < end_index) {
        offset = (int64_t)start_index;
        start_index = start_index + 1;
        fourth_byte = *(int8_t *)(offset + data_ptr);
    } else {
        fourth_byte = 0;
    }
    
    if (start_index < end_index) {
        offset = (int64_t)start_index;
        start_index = start_index + 1;
        third_byte = *(int8_t *)(offset + data_ptr);
    } else {
        third_byte = 0;
    }
    
    chunk_value = (uint)CONCAT11(fourth_byte, third_byte);
    search_value = 0;  // 初始搜索值
    
    // 处理数据序列
    if (CONCAT11(first_byte, second_byte) != 0) {
        do {
            if (start_index < end_index) {
                offset = (int64_t)start_index;
                start_index = start_index + 1;
                data_byte = *(byte *)(offset + data_ptr);
            } else {
                data_byte = 0;
            }
            if (start_index < end_index) {
                offset = (int64_t)start_index;
                start_index = start_index + 1;
                fourth_byte = *(int8_t *)(offset + data_ptr);
            } else {
                fourth_byte = 0;
            }
            if (start_index < end_index) {
                offset = (int64_t)start_index;
                start_index = start_index + 1;
                third_byte = *(int8_t *)(offset + data_ptr);
            } else {
                third_byte = 0;
            }
        } while (((data_length < (int)chunk_value) ||
                 (search_value = (uint)data_byte, (int)(uint)CONCAT11(fourth_byte, third_byte) <= data_length)) &&
                (current_index = current_index + 1, chunk_value = (uint)CONCAT11(fourth_byte, third_byte), 
                 search_value = 0, current_index < (int)(uint)CONCAT11(first_byte, second_byte)));
    }
    
    // 设置结果参数
    result_ptr._0_4_ = *(int32_t *)(context_ptr + 0x88);
    result_ptr._4_4_ = *(int32_t *)(context_ptr + 0x8c);
    
    offset = FUN_18028b4c0(&stack0x00000040, &stack0x00000020, search_value, data_ptr, 
                          *(int32_t *)(context_ptr + 0x80));
    
    param_6 = *(int32_t *)(context_ptr + 0x40);
    stack_param_1 = *(int32_t *)(context_ptr + 0x44);
    param_7 = *(int32_t *)(context_ptr + 0x48);
    stack_param_2 = *(int32_t *)(context_ptr + 0x4c);
    
    result_ptr._0_4_ = *(int32_t *)(offset + 8);
    result_ptr._4_4_ = *(int32_t *)(offset + 0xc);
    
    processed_ptr = (uint64_t *)FUN_18028b820(&stack0x00000050, &param_6, &stack0x00000020);
    result_data = processed_ptr[1];
    *output_ptr = *processed_ptr;
    output_ptr[1] = result_data;
    return;
}

// 函数: process_render_data_stream
// 功能: 处理渲染数据流
// 参数:
//   - start_index: 起始索引
//   - param_2: 保留参数
//   - end_index: 结束索引
//   - data_ptr: 数据指针
//   - result_ptr: 结果指针
//   - param_6, param_7: 保留参数
void process_render_data_stream(int start_index, uint64_t param_2, int end_index, 
                                int64_t data_ptr, uint64_t result_ptr, 
                                int32_t param_6, int32_t param_7)
{
    uint64_t result_data;
    byte data_byte;
    int8_t second_byte;
    int8_t third_byte;
    int64_t offset;
    uint64_t *processed_ptr;
    uint search_value;
    int data_length;
    uint chunk_value;
    int64_t context_ptr;
    uint64_t *output_ptr;
    int current_index;
    uint stream_data;
    int32_t stack_param_1;
    int32_t stack_param_2;
    
    // 处理数据流
    do {
        if (start_index < end_index) {
            offset = (int64_t)start_index;
            start_index = start_index + 1;
            data_byte = *(byte *)(offset + data_ptr);
        } else {
            data_byte = 0;
        }
        if (start_index < end_index) {
            offset = (int64_t)start_index;
            start_index = start_index + 1;
            second_byte = *(int8_t *)(offset + data_ptr);
        } else {
            second_byte = 0;
        }
        if (start_index < end_index) {
            offset = (int64_t)start_index;
            start_index = start_index + 1;
            third_byte = *(int8_t *)(offset + data_ptr);
        } else {
            third_byte = 0;
        }
    } while (((data_length < (int)stream_data) ||
             (search_value = (uint)data_byte, (int)(uint)CONCAT11(second_byte, third_byte) <= data_length)) &&
            (current_index = current_index + 1, stream_data = (uint)CONCAT11(second_byte, third_byte), 
             search_value = 0, current_index < data_length));
    
    // 设置结果参数
    result_ptr._0_4_ = *(int32_t *)(context_ptr + 0x88);
    result_ptr._4_4_ = *(int32_t *)(context_ptr + 0x8c);
    
    offset = FUN_18028b4c0(&stack0x00000040, &stack0x00000020, search_value, data_ptr, 
                          *(int32_t *)(context_ptr + 0x80));
    
    param_6 = *(int32_t *)(context_ptr + 0x40);
    stack_param_1 = *(int32_t *)(context_ptr + 0x44);
    param_7 = *(int32_t *)(context_ptr + 0x48);
    stack_param_2 = *(int32_t *)(context_ptr + 0x4c);
    
    result_ptr._0_4_ = *(int32_t *)(offset + 8);
    result_ptr._4_4_ = *(int32_t *)(offset + 0xc);
    
    processed_ptr = (uint64_t *)FUN_18028b820(&stack0x00000050, &param_6, &stack0x00000020);
    result_data = processed_ptr[1];
    *output_ptr = *processed_ptr;
    output_ptr[1] = result_data;
    return;
}

// 函数: finalize_render_data_processing
// 功能: 完成渲染数据处理
void finalize_render_data_processing(void)
{
    uint64_t result_data;
    int32_t *temp_ptr;
    uint64_t *processed_ptr;
    int32_t process_flag;
    uint64_t context_data;
    int64_t context_ptr;
    uint64_t *output_ptr;
    int32_t stack_param_1;
    int32_t stack_param_2;
    int32_t in_param_1;
    int32_t stack_param_3;
    int32_t in_param_2;
    int32_t stack_param_4;
    
    // 设置处理参数
    stack_param_1 = *(int32_t *)(context_ptr + 0x88);
    stack_param_2 = *(int32_t *)(context_ptr + 0x8c);
    
    temp_ptr = (int32_t *)FUN_18028b4c0(&stack0x00000040, &stack0x00000020, process_flag, context_data, 
                                          *(int32_t *)(context_ptr + 0x80));
    
    in_param_1 = *(int32_t *)(context_ptr + 0x40);
    stack_param_3 = *(int32_t *)(context_ptr + 0x44);
    in_param_2 = *(int32_t *)(context_ptr + 0x48);
    stack_param_4 = *(int32_t *)(context_ptr + 0x4c);
    
    stack_param_1 = temp_ptr[2];
    stack_param_2 = temp_ptr[3];
    
    processed_ptr = (uint64_t *)FUN_18028b820(&stack0x00000050, &in_param_1, &stack0x00000020, context_data, *temp_ptr);
    result_data = processed_ptr[1];
    *output_ptr = *processed_ptr;
    output_ptr[1] = result_data;
    return;
}

// 函数: complete_render_data_processing
// 功能: 完成渲染数据处理（简化版本）
void complete_render_data_processing(void)
{
    uint64_t result_data;
    int32_t *temp_ptr;
    uint64_t *processed_ptr;
    int32_t process_flag;
    uint64_t context_data;
    int64_t context_ptr;
    uint64_t *output_ptr;
    int32_t stack_param_1;
    int32_t stack_param_2;
    int32_t in_param_1;
    int32_t stack_param_3;
    int32_t in_param_2;
    int32_t stack_param_4;
    
    // 设置处理参数
    stack_param_1 = *(int32_t *)(context_ptr + 0x88);
    stack_param_2 = *(int32_t *)(context_ptr + 0x8c);
    
    temp_ptr = (int32_t *)FUN_18028b4c0(&stack0x00000040, &stack0x00000020, process_flag, context_data, 
                                          *(int32_t *)(context_ptr + 0x80));
    
    in_param_1 = *(int32_t *)(context_ptr + 0x40);
    stack_param_3 = *(int32_t *)(context_ptr + 0x44);
    in_param_2 = *(int32_t *)(context_ptr + 0x48);
    stack_param_4 = *(int32_t *)(context_ptr + 0x4c);
    
    stack_param_1 = temp_ptr[2];
    stack_param_2 = temp_ptr[3];
    
    processed_ptr = (uint64_t *)FUN_18028b820(&stack0x00000050, &in_param_1, &stack0x00000020, context_data, *temp_ptr);
    result_data = processed_ptr[1];
    *output_ptr = *processed_ptr;
    output_ptr[1] = result_data;
    return;
}

// WARNING: Removing unreachable block (ram,0x00018028d83d)
// WARNING: Removing unreachable block (ram,0x00018028d857)
// WARNING: Removing unreachable block (ram,0x00018028d875)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address