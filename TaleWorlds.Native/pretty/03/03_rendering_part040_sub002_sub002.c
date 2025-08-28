#include "TaleWorlds.Native.Split.h"

// 03_rendering_part040_sub002_sub002.c - 渲染系统高级数据处理和资源管理模块
// 包含7个核心函数，涵盖渲染数据提取、内存管理、资源解析、坐标变换、批处理等高级渲染功能

// ============================================================================
// 数据结构定义
// ============================================================================

// 渲染数据块结构
typedef struct {
    void* data_ptr;          // 数据指针
    uint32_t data_size;      // 数据大小
    uint32_t data_type;      // 数据类型
    uint32_t flags;          // 标志位
    uint32_t hash_value;     // 哈希值
    uint32_t reference_count; // 引用计数
    void* custom_data;       // 自定义数据
    uint32_t reserved[8];    // 保留字段
} render_data_block_t;

// 渲染资源信息结构
typedef struct {
    uint32_t resource_id;    // 资源ID
    uint32_t resource_type;  // 资源类型
    uint32_t offset;         // 偏移量
    uint32_t size;           // 大小
    uint32_t flags;          // 标志位
    uint32_t compression;    // 压缩类型
    uint32_t checksum;       // 校验和
    uint32_t reserved[9];    // 保留字段
} render_resource_info_t;

// 渲染坐标变换结构
typedef struct {
    float x;                 // X坐标
    float y;                 // Y坐标
    float z;                 // Z坐标
    float w;                 // W坐标
    float u;                 // U纹理坐标
    float v;                 // V纹理坐标
    float reserved[2];       // 保留字段
} render_coord_transform_t;

// 渲染批处理项结构
typedef struct {
    uint16_t x;             // X坐标
    uint16_t y;             // Y坐标
    uint16_t width;          // 宽度
    uint16_t height;         // 高度
    uint8_t flags;          // 标志位
    uint8_t reserved[3];    // 保留字段
    uint32_t color;         // 颜色值
    uint32_t texture_id;    // 纹理ID
} render_batch_item_t;

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 提取渲染数据块
 * @param context 渲染上下文
 * @param offset 偏移量
 * @param size 大小
 * @param data_ptr 数据指针指针
 * @return 提取的数据大小，失败返回0
 */
uint32_t extract_render_data_block(void* context, int32_t offset, int32_t size, void** data_ptr)
{
    longlong* context_ptr = (longlong*)context;
    int data_size;
    int max_size;
    void* result_ptr;
    
    // 计算实际数据大小
    data_size = size - 1 + *(int*)((longlong)context_ptr + 0xc);
    if ((*(int*)((longlong)context_ptr + 4) < data_size) || (data_size < 0)) {
        data_size = *(int*)((longlong)context_ptr + 4);
    }
    *(int*)(context_ptr + 1) = data_size;
    
    // 计算偏移量
    data_size = data_size - offset;
    int valid_size = 0;
    result_ptr = 0;
    
    // 验证参数有效性
    if ((((-1 < offset) && (result_ptr = 0, -1 < data_size)) &&
         (valid_size = 0, result_ptr = 0, offset <= *(int*)((longlong)context_ptr + 4))) &&
        (result_ptr = 0, data_size <= *(int*)((longlong)context_ptr + 4) - offset)) {
        result_ptr = (void*)((longlong)offset + *context_ptr);
        valid_size = data_size;
    }
    
    *data_ptr = result_ptr;
    *(uint32_t*)((longlong)data_ptr + 4) = 0;
    *(int*)((longlong)data_ptr + 0xc) = valid_size;
    return valid_size;
}

/**
 * @brief 查找渲染数据标记
 * @param output 输出缓冲区
 * @param input 输入数据
 * @param marker 标记值
 * @return 找到的数据大小，失败返回0
 */
uint32_t* find_render_data_marker(uint32_t* output, void* input, uint32_t marker)
{
    uint8_t byte1, byte2;
    uint8_t byte3;
    uint32_t value;
    uint64_t size;
    longlong position;
    uint32_t current_size;
    uint32_t temp_size;
    uint32_t result;
    uint32_t stack_data[4];
    
    current_size = *(uint32_t*)((longlong)input + 0xc);
    size = (uint64_t)current_size;
    result = 0;
    
    // 处理负数大小
    if ((int)current_size < 0) {
        result = size;
    }
    *(int*)(input + 1) = (int)result;
    
    // 查找标记
    if ((int)result < (int)current_size) {
        size = (uint64_t)current_size;
        do {
            temp_size = (int)result;
            byte3 = func_0x00018028afe0();
            
            // 跳过无效字节
            while (0x1b < byte3) {
                current_size = (int)*(int*)(input + 1);
                temp_size = (int)size;
                size = size & 0xffffffff;
                
                // 检查结束标记
                if ((current_size < temp_size) && 
                    (*(char*)((longlong)current_size + *input) == '\x1e')) {
                    result = current_size + 1;
                    size = (uint64_t)result;
                    
                    // 边界检查
                    if ((temp_size < (int)result) || ((int)result < 0)) {
                        size = size & 0xffffffff;
                    }
                    current_size = (int)size;
                    *(int*)(input + 1) = current_size;
                    
                    if (current_size < temp_size) {
                        if (current_size < temp_size) goto LAB_FOUND_MARKER;
                        byte3 = 0;
                        
                        // 处理标记字节
                        while (((current_size = (int)size, (byte3 & 0xf) != 0xf && 
                               ((byte3 & 0xf0) != 0xf0)) && (current_size < temp_size))) {
LAB_FOUND_MARKER:
                            byte3 = *(uint8_t*)((longlong)current_size + *input);
                            *(uint32_t*)(input + 1) = current_size + 1U;
                            size = (uint64_t)(current_size + 1U);
                        }
                    }
                }
                else {
                    func_0x00018028b140(input);
                    size = (uint64_t)*(uint32_t*)((longlong)input + 0xc);
                    temp_size = (uint64_t)*(uint32_t*)((longlong)input + 0xc);
                    result = (uint64_t)*(uint32_t*)(input + 1);
                }
                byte3 = func_0x00018028afe0();
            }
            
            temp_size = (uint32_t)size;
            current_size = (int)result;
            
            if (current_size < (int)temp_size) {
                size = (uint64_t)(current_size + 1U);
                byte3 = *(uint8_t*)((longlong)current_size + *input);
                *(uint32_t*)(input + 1) = current_size + 1U;
            }
            else {
                byte3 = 0;
                size = result & 0xffffffff;
            }
            
            value = (uint32_t)byte3;
            
            // 处理特殊标记
            if (byte3 == 0xc) {
                temp_size = (int)size;
                if (temp_size < (int)temp_size) {
                    size = (uint64_t)(temp_size + 1U);
                    byte3 = *(uint8_t*)((longlong)temp_size + *input);
                    *(uint32_t*)(input + 1) = temp_size + 1U;
                }
                else {
                    byte3 = 0;
                }
                value = byte3 | 0x100;
            }
            
            if (value == marker) {
                current_size = current_size - temp_size;
                stack_data[0] = 0;
                stack_data[1] = 0;
                stack_data[2] = 0;
                stack_data[3] = 0;
                temp_size = 0;
                
                // 验证数据有效性
                if (((temp_size < 0) || (stack_data[0] = 0, stack_data[1] = 0, 
                     stack_data[2] = temp_size, current_size < 0)) ||
                    (((int)temp_size < temp_size || ((int)(temp_size - temp_size) < current_size)))) {
                    goto LAB_RETURN_RESULT;
                }
                
                position = (longlong)temp_size + *input;
                stack_data[2] = current_size;
                goto LAB_RETURN_OUTPUT;
            }
        } while ((int)size < (int)temp_size);
    }
    
    stack_data[0] = 0;
    stack_data[1] = 0;
    stack_data[2] = 0;
    
    if (-1 < (int)temp_size) {
        position = *input;
        stack_data[2] = 0;
LAB_RETURN_OUTPUT:
        stack_data[0] = (uint32_t)position;
        stack_data[1] = (uint32_t)((uint64_t)position >> 0x20);
    }
LAB_RETURN_RESULT:
    *output = stack_data[0];
    output[1] = stack_data[1];
    output[2] = 0;
    output[3] = stack_data[2];
    return output;
}

/**
 * @brief 解析渲染资源数据
 * @param output 输出缓冲区
 * @param input 输入数据
 * @param param 参数
 * @return 解析后的数据指针
 */
void* parse_render_resource_data(void* output, void* input, int32_t param)
{
    int input_size;
    uint8_t byte1, byte2;
    uint8_t byte3;
    int offset;
    longlong position;
    uint64_t size1, size2;
    int result_size;
    uint32_t value1, value2;
    int output_size;
    
    input_size = *(int*)((longlong)input + 0xc);
    offset = 0;
    
    // 处理负数大小
    if (input_size < 0) {
        offset = input_size;
    }
    *(int*)(input + 1) = offset;
    position = (longlong)offset;
    
    // 读取前两个字节
    if (position < input_size) {
        offset = offset + 1;
        byte1 = *(uint8_t*)(position + *input);
        position = position + 1;
    }
    else {
        byte1 = 0;
    }
    
    if (position < input_size) {
        offset = offset + 1;
        byte2 = *(uint8_t*)(position + *input);
    }
    else {
        byte2 = 0;
    }
    
    // 读取第三个字节作为大小
    if (offset < input_size) {
        position = (longlong)offset;
        offset = offset + 1;
        size1 = (uint64_t)*(uint8_t*)(position + *input);
    }
    else {
        size1 = 0;
    }
    
    result_size = (int)size1;
    offset = result_size * param + offset;
    
    // 边界检查
    if ((input_size < offset) || (offset < 0)) {
        offset = input_size;
    }
    
    value2 = 0;
    *(int*)(input + 1) = offset;
    size2 = size1;
    
    // 读取扩展数据
    if ((uint8_t)size1 != '\0') {
        do {
            if (offset < input_size) {
                position = (longlong)offset;
                offset = offset + 1;
                byte3 = *(uint8_t*)(position + *input);
            }
            else {
                byte3 = 0;
            }
            value2 = value2 << 8 | (uint32_t)byte3;
            size2 = size2 - 1;
        } while (size2 != 0);
        *(int*)(input + 1) = offset;
    }
    
    value1 = 0;
    if (result_size != 0) {
        do {
            if (offset < input_size) {
                position = (longlong)offset;
                offset = offset + 1;
                byte3 = *(uint8_t*)(position + *input);
            }
            else {
                byte3 = 0;
            }
            value1 = value1 << 8 | (uint32_t)byte3;
            size1 = size1 - 1;
        } while (size1 != 0);
        *(int*)(input + 1) = offset;
    }
    
    output_size = 0;
    result_size = value1 - value2;
    offset = value2 + 2 + (((uint32_t)byte1 << 8 | byte2) + 1) * result_size;
    position = 0;
    
    // 验证输出参数
    if ((((-1 < offset) && (position = 0, -1 < result_size)) && 
         (output_size = 0, position = 0, offset <= input_size)) &&
        (position = 0, result_size <= input_size - offset)) {
        position = (longlong)offset + *input;
        output_size = result_size;
    }
    
    *(void**)output = position;
    *(uint32_t*)((longlong)output + 4) = 0;
    *(int*)((longlong)output + 0xc) = output_size;
    return output;
}

/**
 * @brief 查找渲染资源信息
 * @param base_address 基地址
 * @param resource_id 资源ID
 * @param signature 签名
 * @return 资源偏移量，失败返回0
 */
int32_t find_render_resource_info(longlong base_address, uint32_t resource_id, char* signature)
{
    uint32_t offset;
    uint64_t position;
    int32_t count;
    int32_t entry_count;
    
    count = 0;
    entry_count = (uint32_t)*(uint8_t*)((uint64_t)resource_id + 4 + base_address) * 0x100 +
                 (uint32_t)*(uint8_t*)((uint64_t)resource_id + 5 + base_address);
    
    if (entry_count != 0) {
        do {
            offset = count * 0x10 + resource_id + 0xc;
            position = (uint64_t)offset;
            
            // 检查签名匹配
            if (((((uint32_t)*(uint8_t*)((uint64_t)offset + base_address) == (int32_t)*signature) &&
                  ((uint32_t)*(uint8_t*)(position + 1 + base_address) == (int32_t)signature[1])) &&
                 ((uint32_t)*(uint8_t*)(position + 2 + base_address) == (int32_t)signature[2])) &&
                ((uint32_t)*(uint8_t*)(position + 3 + base_address) == (int32_t)signature[3])) {
                return (((uint32_t)*(uint8_t*)(position + 8 + base_address) * 0x100 + 
                        (uint32_t)*(uint8_t*)(position + 9 + base_address)) * 0x100 + 
                        (uint32_t)*(uint8_t*)(position + 10 + base_address)) * 0x100 + 
                       (uint32_t)*(uint8_t*)(position + 0xb + base_address);
            }
            count = count + 1;
        } while (count < entry_count);
    }
    return 0;
}

/**
 * @brief 处理渲染坐标变换
 * @param output 输出缓冲区
 * @param input 输入数据
 * @param param 参数
 * @return 处理后的数据指针
 */
void* process_render_coordinate_transform(void* output, void* input, void* param)
{
    uint32_t value1;
    int32_t count1, count2;
    void* temp_ptr;
    void* result_ptr;
    longlong position1, position2;
    int32_t stack_data[2];
    void* stack_data1[2];
    void* stack_data2[2];
    uint8_t temp_buffer[16];
    
    position2 = 0;
    stack_data[0] = 0;
    stack_data1[0] = 0;
    
    // 查找标记数据
    result_ptr = (void*)find_render_data_marker(stack_data2, param, 0x12);
    stack_data2[0] = *result_ptr;
    stack_data2[1] = result_ptr[1];
    stack_data1[1] = *(int*)((longlong)result_ptr + 0xc);
    
    position1 = position2;
    do {
        if ((int)stack_data1[1] <= (int)stack_data2[0]) break;
        value1 = func_0x00018028b140(stack_data2);
        *(uint32_t*)((longlong)&stack_data1[0] + position1 * 4) = value1;
        position1 = position1 + 1;
    } while (position1 < 2);
    
    count2 = stack_data1[1];
    
    // 处理有效数据
    if ((stack_data1[1] != 0) && ((uint32_t)stack_data1[0] != 0)) {
        stack_data1[1] = 0;
        stack_data2[0] = 0;
        
        // 验证数据范围
        if ((-1 < stack_data1[0]) &&
            (((stack_data2[0] = 0, -1 < (int)(uint32_t)stack_data1[0] &&
              (stack_data1[1] = 0, stack_data2[0] = 0, stack_data1[0] <= *(int*)((longlong)input + 0xc))) &&
             (stack_data2[0] = 0, (int)(uint32_t)stack_data1[0] <= *(int*)((longlong)input + 0xc) - stack_data1[1])))) {
            stack_data2[0] = (void*)((longlong)stack_data1[1] + *input);
            stack_data1[1] = (uint32_t)stack_data1[0];
        }
        
        stack_data2[1] = (uint64_t)stack_data1[1] << 0x20;
        temp_ptr = (void*)find_render_data_marker(temp_buffer, stack_data2, 0x13);
        stack_data2[0] = *temp_ptr;
        stack_data2[1] = temp_ptr[1];
        stack_data1[1] = *(int*)((longlong)temp_ptr + 0xc);
        
        do {
            if ((int)stack_data1[1] <= (int)stack_data2[0]) break;
            count1 = func_0x00018028b140(stack_data2);
            stack_data[position2] = count1;
            position2 = position2 + 1;
        } while (position2 < 1);
        
        if (stack_data[0] != 0) {
            count2 = stack_data[0] + count2;
            if ((*(int*)((longlong)input + 0xc) < count2) || (count2 < 0)) {
                count2 = *(int*)((longlong)input + 0xc);
            }
            *(int*)(input + 1) = count2;
            result_ptr = (void*)parse_render_resource_data(temp_buffer, stack_data2, 0);
            stack_data2[0] = *result_ptr;
            stack_data2[1] = result_ptr[1];
            stack_data1[0] = result_ptr[2];
            stack_data1[1] = *(int*)((longlong)result_ptr + 0xc);
            goto LAB_RETURN_RESULT;
        }
    }
    
    stack_data2[0] = 0;
    stack_data2[1] = 0;
    stack_data1[0] = 0;
    stack_data1[1] = 0;
LAB_RETURN_RESULT:
    *output = stack_data2[0];
    output[1] = stack_data2[1];
    output[2] = stack_data1[0];
    output[3] = stack_data1[1];
    return output;
}

/**
 * @brief 初始化渲染资源
 * @param context 渲染上下文
 * @param data_ptr 数据指针
 * @param param 参数
 * @return 初始化成功返回1，失败返回0
 */
int32_t initialize_render_resource(void* context, void* data_ptr, uint32_t param)
{
    uint8_t byte1, byte2;
    uint64_t result;
    uint8_t temp_buffer[16];
    uint32_t value1;
    int32_t value2, value3, value4;
    uint32_t value5;
    int32_t stack_data[4];
    uint32_t stack_value1;
    int32_t stack_data2[2];
    int32_t stack_data3[4];
    void* stack_data4[2];
    uint32_t stack_value2;
    uint32_t stack_value3;
    void* stack_data5[2];
    void* stack_data6[2];
    uint8_t stack_buffer[24];
    
    *(longlong*)(context + 8) = (longlong)data_ptr;
    *(uint32_t*)(context + 0x10) = param;
    result = 0;
    stack_data5[0] = 0;
    stack_data5[1] = 0;
    stack_data6[0] = 0;
    stack_data6[1] = 0;
    *(void**)(context + 0x40) = 0;
    *(void**)(context + 0x48) = 0;
    stack_value1 = param;
    
    // 查找资源信息
    value1 = find_render_resource_info((longlong)data_ptr, param, &UNK_180a16ee0);
    value2 = find_render_resource_info((longlong)data_ptr, param, &UNK_180a16ef8);
    *(int*)(context + 0x18) = value2;
    value3 = find_render_resource_info((longlong)data_ptr, param, &UNK_180a13928);
    *(int*)(context + 0x1c) = value3;
    stack_data[2] = find_render_resource_info((longlong)data_ptr, param, &UNK_180a16f00);
    *(int*)(context + 0x20) = stack_data[2];
    value4 = find_render_resource_info((longlong)data_ptr, param, &UNK_180a16ee8);
    *(int*)(context + 0x24) = value4;
    stack_data[0] = find_render_resource_info((longlong)data_ptr, stack_value1, &UNK_180a16ef0);
    *(int*)(context + 0x28) = stack_data[0];
    value5 = find_render_resource_info((longlong)data_ptr, stack_value1, &UNK_180a16f18);
    *(uint32_t*)(context + 0x2c) = value5;
    value5 = find_render_resource_info((longlong)data_ptr, stack_value1, &UNK_180a16f20);
    *(uint32_t*)(context + 0x30) = value5;
    
    // 验证必要资源
    if (value1 == 0) {
        return 0;
    }
    if (value3 == 0) {
        return 0;
    }
    if (value4 == 0) {
        return 0;
    }
    if (stack_data[0] == 0) {
        return 0;
    }
    
    if (stack_data[2] != 0) {
        if (value2 == 0) {
            return 0;
        }
        goto LAB_PROCESS_RESOURCE;
    }
    
    stack_data[2] = 0;
    stack_data[0] = 2;
    stack_data2[0] = 0;
    stack_data3[0] = 0;
    value5 = find_render_resource_info((longlong)data_ptr, stack_value1, &UNK_180a16f08);
    if (value5 == 0) {
        return 0;
    }
    
    *(void**)(context + 0x80) = 0;
    *(void**)(context + 0x88) = 0;
    stack_data6[0] = (void*)((uint64_t)value5 + (longlong)data_ptr);
    stack_data6[1] = (void*)0x20000000;
    *(void**)(context + 0x90) = 0;
    *(void**)(context + 0x98) = 0;
    stack_data5[0] = 0;
    temp_buffer[8] = 0;
    temp_buffer[0] = stack_data6[0];
    temp_buffer[12] = 0x20000000;
    stack_value3 = 0x20000000;
    *(uint8_t(*)[16])(context + 0x40) = temp_buffer;
    
    if (*(uint8_t*)((uint64_t)stack_data6[0] + 2) < 0x20000001) {
        stack_value3 = (uint32_t)*(uint8_t*)((uint64_t)stack_data6[0] + 2);
    }
    stack_value2 = stack_value3;
    stack_data4[0] = stack_data6[0];
    stack_data6[1] = (void*)0x20000000;
    
    extract_render_data_block(&stack_data5[0], stack_data4);
    data_ptr = (void*)extract_render_data_block(&stack_data5[0], stack_data4);
    stack_data5[0] = *data_ptr;
    stack_data6[1] = data_ptr[1];
    
    data_ptr = (void*)parse_render_resource_data(&stack_data6[0], &stack_data5[0], 0);
    stack_data6[0] = (void*)*(uint32_t*)data_ptr;
    stack_data6[1] = (void*)((uint64_t)*(uint32_t*)data_ptr >> 0x20);
    stack_data5[0] = (void*)data_ptr[1];
    stack_data6[1] = (void*)((uint64_t)data_ptr[1] >> 0x20);
    
    extract_render_data_block(&stack_data5[0], stack_data4);
    data_ptr = (void*)extract_render_data_block(&stack_data5[0], stack_data4);
    result = data_ptr[1];
    *(void**)(context + 0x60) = *data_ptr;
    *(void**)(context + 0x68) = (void*)result;
    
    data_ptr = (void*)find_render_data_marker(&stack_data5[0], &stack_data6[0], 0x11);
    stack_data5[0] = *data_ptr;
    stack_data6[1] = data_ptr[1];
    result = 0;
    
    // 处理标记数据
    do {
        if (stack_data6[1] <= (void*)stack_data5[0]) break;
        value2 = func_0x00018028b140(&stack_data5[0]);
        stack_data[result + 2] = value2;
        result = result + 1;
    } while ((longlong)result < 1);
    
    data_ptr = (void*)find_render_data_marker(&stack_data5[0], &stack_data6[0], 0x106);
    stack_data5[0] = *data_ptr;
    stack_data6[1] = data_ptr[1];
    result = 0;
    
    do {
        if (stack_data6[1] <= (void*)stack_data5[0]) break;
        value2 = func_0x00018028b140(&stack_data5[0]);
        stack_data[result] = value2;
        result = result + 1;
    } while ((longlong)result < 1);
    
    data_ptr = (void*)find_render_data_marker(&stack_data5[0], &stack_data6[0], 0x124);
    stack_data5[0] = *data_ptr;
    stack_data6[1] = data_ptr[1];
    result = 0;
    
    do {
        if (stack_data6[1] <= (void*)stack_data5[0]) break;
        value2 = func_0x00018028b140(&stack_data5[0]);
        stack_data2[result] = value2;
        result = result + 1;
    } while ((longlong)result < 1);
    
    data_ptr = (void*)find_render_data_marker(&stack_data5[0], &stack_data6[0], 0x125);
    stack_data5[0] = *data_ptr;
    stack_data6[1] = data_ptr[1];
    result = 0;
    
    do {
        if (stack_data6[1] <= (void*)stack_data5[0]) break;
        value2 = func_0x00018028b140(&stack_data5[0]);
        stack_data3[result] = value2;
        result = result + 1;
    } while ((longlong)result < 1);
    
    stack_data5[0] = (void*)((uint32_t)stack_data6[1] << 0x20 | (uint32_t)stack_data6[0]);
    stack_data6[1] = (void*)((uint32_t)stack_data6[1] << 0x20 | (uint32_t)stack_data5[0]);
    stack_data5[0] = stack_data4[0];
    stack_data6[1] = stack_data4[1];
    stack_data5[0] = stack_value2;
    stack_data6[1] = (void*)stack_value3;
    
    data_ptr = (void*)process_render_coordinate_transform(stack_buffer, stack_data4, &stack_data5[0]);
    value3 = stack_data3[0];
    value2 = stack_data[2];
    result = data_ptr[1];
    *(void**)(context + 0x70) = *data_ptr;
    *(void**)(context + 0x78) = (void*)result;
    
    if (stack_data[0] != 2) {
        return 0;
    }
    if (stack_data[2] == 0) {
        return 0;
    }
    
    result = stack_value3;
    if (stack_data2[0] != 0) {
        if (stack_data3[0] == 0) {
            return 0;
        }
        
        if ((int)stack_value3 < stack_data2[0]) {
LAB_SET_STACK_VALUE:
            stack_value2 = result;
        }
        else {
            stack_value2 = stack_data2[0];
            if (stack_data2[0] < 0) goto LAB_SET_STACK_VALUE;
        }
        
        data_ptr = (void*)extract_render_data_block(stack_buffer, stack_data4);
        result = data_ptr[1];
        *(void**)(context + 0x80) = *data_ptr;
        *(void**)(context + 0x88) = (void*)result;
        
        stack_data5[0] = 0;
        stack_data6[1] = 0;
        
        if (((-1 < value3) && (-1 < (int)(stack_value3 - value3))) && 
            (value3 <= (int)stack_value3)) {
            stack_data6[1] = (void*)((uint64_t)(stack_value3 - value3) << 0x20);
            stack_data5[0] = (void*)((longlong)value3 + (longlong)stack_data4[0]);
        }
        
        *(longlong*)(context + 0x90) = (longlong)stack_data5[0];
        *(longlong*)(context + 0x98) = (longlong)stack_data6[1];
        result = stack_value3;
    }
    
    if ((int)result < value2) {
LAB_SET_RESULT:
        stack_value2 = result;
    }
    else {
        stack_value2 = value2;
        if (value2 < 0) goto LAB_SET_RESULT;
    }
    
    data_ptr = (void*)extract_render_data_block(stack_buffer, stack_data4);
    result = data_ptr[1];
    *(void**)(context + 0x50) = *data_ptr;
    *(void**)(context + 0x58) = (void*)result;
    
LAB_PROCESS_RESOURCE:
    value5 = find_render_resource_info((longlong)data_ptr, stack_value1, &UNK_180a16f10);
    if (value5 == 0) {
        value2 = 0xffff;
    }
    else {
        value2 = (uint32_t)*(uint8_t*)((uint64_t)value5 + 4 + (longlong)data_ptr) * 0x100 +
                (uint32_t)*(uint8_t*)((uint64_t)value5 + 5 + (longlong)data_ptr);
    }
    *(int*)(context + 0x14) = value2;
    
    byte1 = *(uint8_t*)((uint64_t)value1 + 2 + (longlong)data_ptr);
    byte2 = *(uint8_t*)((uint64_t)value1 + 3 + (longlong)data_ptr);
    *(uint32_t*)(context + 0x34) = 0;
    value2 = (uint32_t)byte1 * 0x100 + (uint32_t)byte2;
    
    if (value2 != 0) {
        do {
            value5 = value1 + 4 + (int)result * 8;
            result = (uint64_t)value5;
            value3 = (uint32_t)*(uint8_t*)((uint64_t)value5 + (longlong)data_ptr) * 0x100 +
                    (uint32_t)*(uint8_t*)((uint64_t)value5 + 1 + (longlong)data_ptr);
            
            if ((value3 == 0) ||
                ((value3 == 3 &&
                 ((value3 = (uint32_t)*(uint8_t*)(result + 3 + (longlong)data_ptr) +
                           (uint32_t)*(uint8_t*)(result + 2 + (longlong)data_ptr) * 0x100, 
                           value3 == 1 || (value3 == 10))))))
            {
                *(uint32_t*)(context + 0x34) =
                     (uint32_t)*(uint8_t*)(result + 7 + (longlong)data_ptr) +
                     ((uint32_t)*(uint8_t*)(result + 6 + (longlong)data_ptr) +
                     ((uint32_t)*(uint8_t*)(result + 5 + (longlong)data_ptr) + 
                     (uint32_t)*(uint8_t*)(result + 4 + (longlong)data_ptr) * 0x100) * 0x100) + value1;
            }
            value5 = (int)result + 1;
            result = (uint64_t)value5;
        } while ((int)value5 < value2);
        
        if (*(uint32_t*)(context + 0x34) != 0) {
            *(uint32_t*)(context + 0x38) =
                 (uint32_t)*(uint8_t*)((longlong)*(int*)(context + 0x1c) + 0x33 + (longlong)data_ptr) +
                 (uint32_t)*(uint8_t*)((longlong)*(int*)(context + 0x1c) + 0x32 + (longlong)data_ptr) * 0x100;
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 获取渲染数据值
 * @param context 渲染上下文
 * @param offset 偏移量
 * @return 数据值
 */
uint32_t get_render_data_value(void* context, uint32_t offset)
{
    int32_t value1;
    longlong position1, position2;
    uint32_t value2;
    uint16_t value3;
    longlong position3;
    int32_t value4;
    uint32_t value5;
    int32_t value6;
    uint16_t value7;
    uint64_t result;
    uint64_t result2;
    longlong position4;
    uint16_t value8;
    
    result = (uint64_t)*(uint32_t*)(context + 0x34);
    position2 = *(longlong*)(context + 8);
    value3 = (uint16_t)*(uint8_t*)(result + position2) * 0x100 + (uint16_t)*(uint8_t*)(result + 1 + position2);
    
    if (value3 == 0) {
        if ((int)offset <
            (int)((uint32_t)*(uint8_t*)(result + 2 + position2) * 0x100 + 
                  (*(uint8_t*)(result + 3 + position2) - 6))) {
            return (uint32_t)*(uint8_t*)(result + (longlong)(int)offset + 6 + position2);
        }
    }
    else if (value3 == 6) {
        value2 = (uint32_t)*(uint8_t*)(result + 6 + position2) * 0x100 + 
                (uint32_t)*(uint8_t*)(result + 7 + position2);
        if ((value2 <= offset) &&
           (offset < (uint32_t)*(uint8_t*)(result + 9 + position2) +
                      (uint32_t)*(uint8_t*)(result + 8 + position2) * 0x100 + value2)) {
            position1 = (offset - value2) * 2 + result;
            return (uint32_t)*(uint8_t*)(position1 + 0xb + position2) + 
                   (uint32_t)*(uint8_t*)(position1 + 10 + position2) * 0x100;
        }
    }
    else if (value3 != 2) {
        if (value3 == 4) {
            value8 = (uint16_t)((uint16_t)*(uint8_t*)(result + 6 + position2) * 0x100 +
                               (uint16_t)*(uint8_t*)(result + 7 + position2)) >> 1;
            value2 = *(uint32_t*)(context + 0x34) + 0xe;
            value7 = (uint16_t)((uint16_t)*(uint8_t*)(result + 9 + position2) +
                               (uint16_t)*(uint8_t*)(result + 8 + position2) * 0x100) >> 1;
            value3 = (uint16_t)*(uint8_t*)(result + 0xb + position2) +
                     (uint16_t)*(uint8_t*)(result + 10 + position2) * 0x100;
            value5 = (uint16_t)((uint16_t)*(uint8_t*)(result + 0xc + position2) * 0x100 +
                               (uint16_t)*(uint8_t*)(result + 0xd + position2)) >> 1;
            
            if ((int)offset < 0x10000) {
                value5 = value2;
                if ((int)((uint32_t)*(uint8_t*)((uint64_t)value2 + position2 + (uint64_t)value5 * 2) * 0x100 +
                         (uint32_t)*(uint8_t*)((uint64_t)value2 + position2 + 1 + (uint64_t)value5 * 2)) <=
                    (int)offset) {
                    value5 = value2 + (uint32_t)value5 * 2;
                }
                value5 = value5 - 2;
                
                for (; value3 != 0; value3 = value3 + -1) {
                    value7 = value7 >> 1;
                    if ((int)((uint32_t)*(uint8_t*)((uint64_t)value5 + position2 + (uint64_t)value7 * 2) * 0x100 +
                             (uint32_t)*(uint8_t*)((uint64_t)value5 + position2 + 1 + (uint64_t)value7 * 2)) <
                        (int)offset) {
                        value5 = value5 + (uint32_t)value7 * 2;
                    }
                }
                
                result2 = (uint64_t)(((value5 - value2) + 2 >> 1 & 0xffff) * 2);
                position1 = ((uint32_t)value8 + (uint32_t)value8 * 2) * 2 + result2 + result;
                value4 = (uint32_t)*(uint8_t*)(position1 + 0x10 + position2) * 0x100 +
                        (uint32_t)*(uint8_t*)(position1 + 0x11 + position2);
                
                if (value4 <= (int)offset) {
                    value2 = ((uint32_t)value8 + (uint32_t)value8 * 2) * 2;
                    position1 = value2 + result2 + result;
                    value7 = (uint16_t)*(uint8_t*)(position1 + 0x10 + position2) * 0x100 +
                             (uint16_t)*(uint8_t*)(position1 + 0x11 + position2);
                    
                    if (value7 == 0) {
                        position1 = (uint32_t)value8 * 4 + result2 + result;
                        return (uint32_t)(uint16_t)((uint16_t)*(uint8_t*)(position1 + 0x10 + position2) * 0x100 +
                                                  (uint16_t)*(uint8_t*)(position1 + 0x11 + position2) + (int16_t)offset);
                    }
                    
                    position1 = (uint64_t)value7 + (longlong)(int)((offset - value4) * 2) + (uint64_t)value2 +
                            result2 + result;
                    return (uint32_t)*(uint8_t*)(position1 + 0x11 + position2) +
                           (uint32_t)*(uint8_t*)(position1 + 0x10 + position2) * 0x100;
                }
            }
        }
        else if ((uint16_t)(value3 - 0xcU) < 2) {
            value4 = 0;
            value6 = (((uint32_t)*(uint8_t*)(result + 0xd + position2) +
                     (uint32_t)*(uint8_t*)(result + 0xc + position2) * 0x100) * 0x100 +
                    (uint32_t)*(uint8_t*)(result + 0xe + position2)) * 0x100 + 
                   (uint32_t)*(uint8_t*)(result + 0xf + position2);
            
            if (0 < value6) {
                position1 = result + position2;
                position4 = result + position2;
                do {
                    value1 = (value6 - value4 >> 1) + value4;
                    position3 = (longlong)(value1 * 0xc);
                    value2 = (uint32_t)*(uint8_t*)(position3 + 0x11 + position1) * 0x10000 +
                            (uint32_t)*(uint8_t*)(position3 + 0x12 + position1) * 0x100 +
                            (uint32_t)*(uint8_t*)(position3 + 0x10 + position1) * 0x1000000 +
                            (uint32_t)*(uint8_t*)(position3 + 0x13 + position1);
                    
                    if (value2 <= offset) {
                        if (offset <=
                            (uint32_t)*(uint8_t*)(position4 + 0x15 + position3) * 0x10000 +
                            (uint32_t)*(uint8_t*)(position4 + 0x16 + position3) * 0x100 +
                            (uint32_t)*(uint8_t*)(position4 + 0x14 + position3) * 0x1000000 +
                            (uint32_t)*(uint8_t*)(position4 + 0x17 + position3)) {
                            position2 = position3 + result + position2;
                            value5 = (uint32_t)*(uint8_t*)(position2 + 0x19) * 0x10000 +
                                    (uint32_t)*(uint8_t*)(position2 + 0x1a) * 0x100 +
                                    (uint32_t)*(uint8_t*)(position2 + 0x18) * 0x1000000 + 
                                    (uint32_t)*(uint8_t*)(position2 + 0x1b);
                            if (value3 != 0xc) {
                                return value5;
                            }
                            return offset + (value5 - value2);
                        }
                        value4 = value1 + 1;
                        value1 = value6;
                    }
                    value6 = value1;
                } while (value4 < value6);
            }
        }
    }
    return 0;
}

/**
 * @brief 添加渲染批处理项
 * @param data_ptr 数据指针
 * @param index 索引
 * @param flag1 标志1
 * @param flag2 标志2
 * @param x X坐标
 * @param y Y坐标
 * @param width 宽度
 * @param height 高度
 * @param color 颜色
 * @return 新的索引值
 */
int32_t add_render_batch_item(void* data_ptr, int32_t index, int32_t flag1, int32_t flag2, 
                              uint16_t x, uint16_t y, int32_t width, int32_t height, 
                              uint32_t color)
{
    longlong position;
    
    if (flag2 != 0) {
        if (flag1 != 0) {
            position = (longlong)index * 0xe;
            index = index + 1;
            *(int16_t*)(position + data_ptr) = (int16_t)(width + color >> 1);
            *(uint8_t*)(position + 0xc + data_ptr) = 3;
            *(uint16_t*)(position + 4 + data_ptr) = (uint16_t)color;
            *(uint16_t*)(position + 6 + data_ptr) = (uint16_t)height;
            *(int16_t*)(position + 2 + data_ptr) = (int16_t)(height + height >> 1);
        }
        position = (longlong)index * 0xe;
        *(uint16_t*)(position + data_ptr) = x;
        *(uint16_t*)(position + 2 + data_ptr) = y;
        *(int16_t*)(position + 4 + data_ptr) = (int16_t)width;
        *(uint8_t*)(position + 0xc + data_ptr) = 3;
        *(int16_t*)(position + 6 + data_ptr) = (int16_t)height;
        return index + 1;
    }
    
    position = (longlong)index * 0xe;
    *(uint16_t*)(position + data_ptr) = x;
    *(uint16_t*)(position + 2 + data_ptr) = y;
    
    if (flag1 != 0) {
        *(uint16_t*)(position + 4 + data_ptr) = (uint16_t)color;
        *(uint16_t*)(position + 6 + data_ptr) = (uint16_t)height;
        *(uint8_t*)(position + 0xc + data_ptr) = 3;
        return index + 1;
    }
    
    *(uint8_t*)(position + 0xc + data_ptr) = 2;
    *(uint32_t*)(position + 4 + data_ptr) = 0;
    return index + 1;
}

// ============================================================================
// 函数别名（用于向后兼容）
// ============================================================================

// 原始函数别名
void FUN_18028b0d2(uint64_t param_1, int param_2, int param_3, longlong *param_4)
    __attribute__((alias("extract_render_data_block")));

uint32_t* FUN_18028b2f0(int32_t *param_1, longlong *param_2, uint param_3)
    __attribute__((alias("find_render_data_marker")));

void* FUN_18028b4c0(longlong *param_1, longlong *param_2, int param_3)
    __attribute__((alias("parse_render_resource_data")));

int32_t FUN_18028b630(longlong param_1, uint param_2, char *param_3)
    __attribute__((alias("find_render_resource_info")));

void* FUN_18028b820(int32_t *param_1, longlong *param_2, uint64_t param_3)
    __attribute__((alias("process_render_coordinate_transform")));

int32_t FUN_18028b960(longlong param_1, longlong param_2, int32_t param_3)
    __attribute__((alias("initialize_render_resource")));

uint32_t FUN_18028be60(longlong param_1, uint param_2)
    __attribute__((alias("get_render_data_value")));

int32_t FUN_18028c2f0(longlong param_1, int param_2, int param_3, int param_4, 
                       int16_t param_5, int16_t param_6, int param_7, 
                       int param_8, int param_9, int param_10)
    __attribute__((alias("add_render_batch_item")));

// ============================================================================
// 模块信息
// ============================================================================

/**
 * @file 03_rendering_part040_sub002_sub002.c
 * @brief 渲染系统高级数据处理和资源管理模块
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 该模块提供了渲染系统的高级数据处理和资源管理功能，包括：
 * - 渲染数据块的提取和处理
 * - 渲染资源的解析和初始化
 * - 坐标变换和批处理
 * - 内存管理和数据验证
 * 
 * 主要功能：
 * 1. extract_render_data_block - 提取渲染数据块
 * 2. find_render_data_marker - 查找渲染数据标记
 * 3. parse_render_resource_data - 解析渲染资源数据
 * 4. find_render_resource_info - 查找渲染资源信息
 * 5. process_render_coordinate_transform - 处理渲染坐标变换
 * 6. initialize_render_resource - 初始化渲染资源
 * 7. get_render_data_value - 获取渲染数据值
 * 8. add_render_batch_item - 添加渲染批处理项
 * 
 * 适用于TaleWorlds.Native渲染系统的高级数据处理需求。
 */