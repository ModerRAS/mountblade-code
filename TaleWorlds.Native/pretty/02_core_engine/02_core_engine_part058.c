#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part058.c - 核心引擎模块第058部分
// 本文件包含14个函数，主要负责矩阵运算、容器管理、颜色转换等功能

// 全局变量声明
static longlong* g_engine_context = (longlong*)0x180c86870;  // 引擎上下文指针
static longlong* g_memory_allocator = (longlong*)0x180c8ed18; // 内存分配器
static longlong* g_global_manager = (longlong*)0x180c86930;  // 全局管理器
static longlong* g_stack_guard = (longlong*)0x180bf00a8;     // 栈保护变量

/**
 * 计算物体在屏幕上的投影偏移
 * @param object_context 物体上下文指针
 * 该函数根据物体的位置和视角计算屏幕投影的偏移量
 */
void calculate_screen_projection_offset(longlong object_context)
{
    int current_x_offset;
    int current_y_offset;
    longlong engine_data;
    longlong render_context;
    longlong transform_data;
    uint projection_index;
    uint viewport_width;
    ulonglong transform_offset;
    ulonglong viewport_offset;
    ulonglong projection_offset;
    uint max_width;
    uint max_height;
    
    // 获取引擎上下文数据
    engine_data = *(longlong*)(g_engine_context + 8);
    projection_offset = (ulonglong)(*(uint*)(engine_data + 0x13c) & 1);
    current_x_offset = *(int*)(engine_data + 0xc4 + projection_offset * 0x48);
    
    // 获取渲染上下文
    render_context = *(longlong*)(g_engine_context + 8);
    transform_offset = (ulonglong)(*(uint*)(render_context + 0x13c) & 1);
    current_y_offset = *(int*)(render_context + 0xf0 + transform_offset * 0x48);
    
    // 获取变换数据
    transform_data = *(longlong*)(g_engine_context + 8);
    viewport_offset = (ulonglong)(*(uint*)(transform_data + 0x13c) & 1);
    
    // 计算视口尺寸
    viewport_width = *(int*)(transform_data + 0xb4 + viewport_offset * 0x48) - 
                    *(int*)(transform_data + 0xac + viewport_offset * 0x48);
    max_height = *(int*)(transform_data + 0xb8 + viewport_offset * 0x48) - 
                 *(int*)(transform_data + 0xb0 + viewport_offset * 0x48);
    
    // 确保最小尺寸
    max_width = 1;
    if (1 < viewport_width) {
        max_width = viewport_width;
    }
    
    viewport_width = 1;
    if (1 < max_height) {
        viewport_width = max_height;
    }
    
    // 计算并设置投影偏移
    *(float*)(object_context + 0x17e0) = 
        (float)(*(int*)(engine_data + 0xc0 + projection_offset * 0x48) - 
               *(int*)(render_context + 0xec + transform_offset * 0x48)) / (float)max_width;
    *(float*)(object_context + 0x17e4) = (float)(current_x_offset - current_y_offset) / (float)viewport_width;
}

/**
 * 向数组容器中添加元素
 * @param container 数组容器指针
 * @param element 要添加的元素数据
 * 该函数实现动态数组的功能，当空间不足时会自动扩容
 */
void array_container_add_element(longlong* container, undefined8* element)
{
    undefined8* current_position;
    undefined8* container_start;
    undefined4 element_data_1;
    undefined4 element_data_2;
    undefined4 element_data_3;
    undefined8 element_value;
    undefined8* new_buffer;
    undefined8* source_ptr;
    undefined8* dest_ptr;
    longlong element_count;
    undefined8* current_end;
    longlong buffer_offset;
    longlong old_buffer_size;
    
    current_end = (undefined8*)container[1];
    if (current_end < (undefined8*)container[2]) {
        // 容器中还有空间，直接添加
        container[1] = (longlong)(current_end + 6);
        current_end[4] = 0xffffffffffffffff;  // 标记为有效元素
        
        // 复制元素数据
        element_value = element[1];
        *current_end = *element;
        current_end[1] = element_value;
        element_value = element[3];
        current_end[2] = element[2];
        current_end[3] = element_value;
        
        // 复制附加数据
        *(undefined4*)(current_end + 4) = *(undefined4*)(element + 4);
        *(undefined4*)((longlong)current_end + 0x24) = *(undefined4*)((longlong)element + 0x24);
        *(undefined4*)((longlong)current_end + 0x2c) = *(undefined4*)((longlong)element + 0x2c);
        *(undefined4*)(current_end + 5) = *(undefined4*)(element + 5);
        return;
    }
    
    // 容器空间不足，需要扩容
    container_start = (undefined8*)*container;
    element_count = ((longlong)current_end - (longlong)container_start) / 0x30;
    if (element_count == 0) {
        element_count = 1;
    } else {
        element_count = element_count * 2;  // 双倍扩容
        if (element_count == 0) {
            new_buffer = (undefined8*)0x0;
            goto copy_data;
        }
    }
    
    // 分配新的缓冲区
    new_buffer = (undefined8*)allocate_memory(g_memory_allocator, element_count * 0x30, (char)container[3]);
    current_end = (undefined8*)container[1];
    container_start = (undefined8*)*container;

copy_data:
    dest_ptr = new_buffer;
    if (container_start != current_end) {
        // 复制现有数据到新缓冲区
        buffer_offset = (longlong)dest_ptr - (longlong)container_start;
        container_start = container_start + 4;
        do {
            *(undefined8*)(buffer_offset + (longlong)container_start) = 0xffffffffffffffff;
            element_value = container_start[-3];
            source_ptr = container_start + 6;
            *dest_ptr = container_start[-4];
            dest_ptr[1] = element_value;
            dest_ptr = dest_ptr + 6;
            element_value = container_start[-1];
            source_ptr = (undefined8*)(buffer_offset + -0x40 + (longlong)source_ptr);
            *source_ptr = container_start[-2];
            source_ptr[1] = element_value;
            
            // 复制附加数据
            *(undefined4*)(buffer_offset + -0x30 + (longlong)source_ptr) = *(undefined4*)container_start;
            *(undefined4*)(buffer_offset + -0x2c + (longlong)source_ptr) = *(undefined4*)((longlong)container_start + 4);
            *(undefined4*)(buffer_offset + -0x24 + (longlong)source_ptr) = *(undefined4*)((longlong)container_start + 0xc);
            *(undefined4*)((longlong)container_start + buffer_offset + 8) = *(undefined4*)(container_start + 1);
            source_ptr = container_start + 2;
            container_start = source_ptr;
        } while (source_ptr != current_end);
    }
    
    // 添加新元素到新缓冲区
    dest_ptr[4] = 0xffffffffffffffff;
    element_value = element[1];
    *dest_ptr = *element;
    dest_ptr[1] = element_value;
    element_data_1 = *(undefined4*)((longlong)element + 0x14);
    element_data_2 = *(undefined4*)(element + 3);
    element_data_3 = *(undefined4*)((longlong)element + 0x1c);
    *(undefined4*)(dest_ptr + 2) = *(undefined4*)(element + 2);
    *(undefined4*)((longlong)dest_ptr + 0x14) = element_data_1;
    *(undefined4*)(dest_ptr + 3) = element_data_2;
    *(undefined4*)((longlong)dest_ptr + 0x1c) = element_data_3;
    *(undefined4*)(dest_ptr + 4) = *(undefined4*)(element + 4);
    *(undefined4*)((longlong)dest_ptr + 0x24) = *(undefined4*)((longlong)element + 0x24);
    *(undefined4*)((longlong)dest_ptr + 0x2c) = *(undefined4*)((longlong)element + 0x2c);
    *(undefined4*)(dest_ptr + 5) = *(undefined4*)(element + 5);
    
    // 释放旧缓冲区
    if (*container != 0) {
        free_memory();
    }
    
    // 更新容器信息
    *container = (longlong)new_buffer;
    container[1] = (longlong)(dest_ptr + 6);
    container[2] = (longlong)(new_buffer + element_count * 6);
}

/**
 * 向映射容器中添加键值对
 * @param container 映射容器指针
 * @param key_value 键值数据
 * 该函数实现类似map的功能，支持自动扩容
 */
void map_container_add_entry(longlong* container, undefined8 key_value)
{
    undefined4* key_ptr;
    undefined4 key_data_1;
    undefined4 key_data_2;
    undefined4 key_data_3;
    undefined1* new_buffer;
    undefined8* entry_ptr;
    undefined1* buffer_end;
    longlong container_start;
    longlong container_end;
    longlong entry_count;
    
    container_end = container[1];
    container_start = *container;
    entry_count = (container_end - container_start) / 0x50;
    new_buffer = (undefined1*)0x0;
    
    if (entry_count == 0) {
        entry_count = 1;
    } else {
        entry_count = entry_count * 2;  // 双倍扩容
        if (entry_count == 0) goto allocate_new_buffer;
    }
    
    // 分配新的缓冲区
    new_buffer = (undefined1*)allocate_memory(g_memory_allocator, entry_count * 0x50, 
                                           (char)container[3], container_start, 0xfffffffffffffffe);
    container_end = container[1];
    container_start = *container;

allocate_new_buffer:
    buffer_end = new_buffer;
    if (container_start != container_end) {
        // 复制现有数据到新缓冲区
        entry_ptr = (undefined8*)(new_buffer + 0x20);
        container_start = container_start - (longlong)new_buffer;
        do {
            *buffer_end = *(undefined1*)((longlong)entry_ptr + container_start + -0x20);
            key_ptr = (undefined4*)(container_start + -0x1c + (longlong)entry_ptr);
            key_data_1 = key_ptr[1];
            key_data_2 = key_ptr[2];
            key_data_3 = key_ptr[3];
            *(undefined4*)((longlong)entry_ptr + -0x1c) = *key_ptr;
            *(undefined4*)(entry_ptr + -3) = key_data_1;
            *(undefined4*)((longlong)entry_ptr + -0x14) = key_data_2;
            *(undefined4*)(entry_ptr + -2) = key_data_3;
            
            // 设置虚函数表
            entry_ptr[-1] = &VTABLE_18098bcb0;
            *entry_ptr = 0;
            *(undefined4*)(entry_ptr + 1) = 0;
            entry_ptr[-1] = &VTABLE_180a3c3e0;
            entry_ptr[2] = 0;
            *entry_ptr = 0;
            *(undefined4*)(entry_ptr + 1) = 0;
            
            // 复制键值数据
            *(undefined4*)(entry_ptr + 1) = *(undefined4*)(container_start + 8 + (longlong)entry_ptr);
            *entry_ptr = *(undefined8*)(container_start + (longlong)entry_ptr);
            *(undefined4*)((longlong)entry_ptr + 0x14) = *(undefined4*)(container_start + 0x14 + (longlong)entry_ptr);
            *(undefined4*)(entry_ptr + 2) = *(undefined4*)(container_start + 0x10 + (longlong)entry_ptr);
            
            // 清理旧数据
            *(undefined4*)(container_start + 8 + (longlong)entry_ptr) = 0;
            *(undefined8*)(container_start + (longlong)entry_ptr) = 0;
            *(undefined8*)(container_start + 0x10 + (longlong)entry_ptr) = 0;
            
            *(undefined4*)(entry_ptr + 3) = *(undefined4*)(container_start + 0x18 + (longlong)entry_ptr);
            *(undefined8*)((longlong)entry_ptr + 0x1c) = *(undefined8*)(container_start + 0x1c + (longlong)entry_ptr);
            *(undefined4*)((longlong)entry_ptr + 0x24) = *(undefined4*)((longlong)entry_ptr + container_start + 0x24);
            *(undefined4*)(entry_ptr + 5) = *(undefined4*)((longlong)entry_ptr + container_start + 0x28);
            
            buffer_end = buffer_end + 0x50;
            entry_ptr = entry_ptr + 10;
        } while (container_start + -0x20 + (longlong)entry_ptr != container_end);
    }
    
    // 添加新键值对
    map_entry_create(buffer_end, key_value);
    
    // 清理旧缓冲区
    container_end = container[1];
    container_start = *container;
    if (container_start != container_end) {
        do {
            *(undefined8*)(container_start + 0x18) = &VTABLE_180a3c3e0;
            if (*(longlong*)(container_start + 0x20) != 0) {
                free_memory();
            }
            *(undefined8*)(container_start + 0x20) = 0;
            *(undefined4*)(container_start + 0x30) = 0;
            *(undefined8*)(container_start + 0x18) = &VTABLE_18098bcb0;
            container_start = container_start + 0x50;
        } while (container_start != container_end);
        container_start = *container;
    }
    
    // 更新容器信息
    if (container_start == 0) {
        *container = (longlong)new_buffer;
        container[1] = (longlong)(buffer_end + 0x50);
        container[2] = (longlong)(new_buffer + entry_count * 0x50);
        return;
    }
    free_memory(container_start);
}

/**
 * 复制键值对数据
 * @param destination 目标位置
 * @param source 源位置
 * @return 目标位置指针
 */
undefined1* copy_key_value_data(undefined1* destination, undefined1* source)
{
    undefined8 key_value;
    
    // 复制基本数据
    *destination = *source;
    key_value = *(undefined8*)(source + 0xc);
    *(undefined8*)(destination + 4) = *(undefined8*)(source + 4);
    *(undefined8*)(destination + 0xc) = key_value;
    
    // 设置虚函数表
    *(undefined**)(destination + 0x18) = &VTABLE_18098bcb0;
    *(undefined8*)(destination + 0x20) = 0;
    *(undefined4*)(destination + 0x28) = 0;
    *(undefined**)(destination + 0x18) = &VTABLE_180a3c3e0;
    *(undefined8*)(destination + 0x30) = 0;
    *(undefined8*)(destination + 0x20) = 0;
    *(undefined4*)(destination + 0x28) = 0;
    
    // 复制键值数据
    *(undefined4*)(destination + 0x28) = *(undefined4*)(source + 0x28);
    *(undefined8*)(destination + 0x20) = *(undefined8*)(source + 0x20);
    *(undefined4*)(destination + 0x34) = *(undefined4*)(source + 0x34);
    *(undefined4*)(destination + 0x30) = *(undefined4*)(source + 0x30);
    
    // 清理源数据
    *(undefined4*)(source + 0x28) = 0;
    *(undefined8*)(source + 0x20) = 0;
    *(undefined8*)(source + 0x30) = 0;
    
    // 复制剩余数据
    *(undefined4*)(destination + 0x38) = *(undefined4*)(source + 0x38);
    *(undefined8*)(destination + 0x3c) = *(undefined8*)(source + 0x3c);
    *(undefined4*)(destination + 0x44) = *(undefined4*)(source + 0x44);
    *(undefined4*)(destination + 0x48) = *(undefined4*)(source + 0x48);
    return destination;
}

/**
 * 创建新的键值对条目
 * @param buffer 缓冲区指针
 * @param key_data 键数据
 * @param param3 参数3
 * @param param4 参数4
 * @return 缓冲区指针
 */
undefined1* map_entry_create(undefined1* buffer, undefined1* key_data, undefined8 param3, undefined8 param4)
{
    undefined4 key_data_1;
    undefined4 key_data_2;
    undefined4 key_data_3;
    
    // 复制键数据
    *buffer = *key_data;
    key_data_1 = *(undefined4*)(key_data + 8);
    key_data_2 = *(undefined4*)(key_data + 0xc);
    key_data_3 = *(undefined4*)(key_data + 0x10);
    *(undefined4*)(buffer + 4) = *(undefined4*)(key_data + 4);
    *(undefined4*)(buffer + 8) = key_data_1;
    *(undefined4*)(buffer + 0xc) = key_data_2;
    *(undefined4*)(buffer + 0x10) = key_data_3;
    
    // 复制对象数据
    copy_object_data(buffer + 0x18, key_data + 0x18, param3, param4, 0xfffffffffffffffe);
    
    // 复制值数据
    *(undefined4*)(buffer + 0x38) = *(undefined4*)(key_data + 0x38);
    *(undefined8*)(buffer + 0x3c) = *(undefined8*)(key_data + 0x3c);
    *(undefined4*)(buffer + 0x44) = *(undefined4*)(key_data + 0x44);
    *(undefined4*)(buffer + 0x48) = *(undefined4*)(key_data + 0x48);
    return buffer;
}

/**
 * 计算4x4矩阵的逆矩阵
 * @param source_matrix 源矩阵
 * @param destination_matrix 目标矩阵
 * 该函数使用伴随矩阵法计算矩阵的逆
 */
void calculate_matrix_inverse(float* source_matrix, float* destination_matrix)
{
    float m00, m01, m02, m03, m04, m05, m06, m07, m08, m09;
    float m10, m11, m12, m13, m14, m15, m16, m17, m18, m19;
    float m20, m21, m22, m23, m24, m25, m26, m27, m28, m29;
    float m30, m31, m32, m33, m34, m35, m36, m37, m38, m39;
    float m40, m41, m42, m43, m44, m45, m46, m47, m48, m49;
    float det, det_inv;
    
    // 提取矩阵元素
    m06 = source_matrix[0xf];
    m07 = source_matrix[0xb];
    m09 = source_matrix[7];
    m10 = source_matrix[0xd];
    m11 = source_matrix[2];
    m12 = source_matrix[0xe];
    m13 = source_matrix[6];
    m16 = source_matrix[10];
    m04 = m16 * m06 - m07 * m12;
    m05 = source_matrix[5];
    m08 = m13 * m06 - m09 * m12;
    m17 = source_matrix[3];
    m14 = m13 * m07 - m09 * m16;
    m15 = m11 * m06 - m17 * m12;
    m25 = m11 * m07 - m17 * m16;
    m19 = source_matrix[9];
    m23 = m11 * m09 - m17 * m13;
    m18 = m19 * m06 - m10 * m07;
    m20 = m05 * m06 - m10 * m09;
    m21 = source_matrix[1];
    m22 = m05 * m07 - m19 * m09;
    m24 = m21 * m06 - m10 * m17;
    m26 = m21 * m07 - m19 * m17;
    m27 = m21 * m09 - m05 * m17;
    m06 = m19 * m12 - m10 * m16;
    m07 = m05 * m12 - m10 * m13;
    m09 = m05 * m16 - m19 * m13;
    m28 = m21 * m12 - m10 * m11;
    m17 = m21 * m16 - m19 * m11;
    m12 = m21 * m13 - m05 * m11;
    m11 = (m05 * m04 - m19 * m08) + m10 * m14;
    
    // 计算伴随矩阵元素
    *destination_matrix = m11;
    m10 = (m15 * source_matrix[9] - m04 * source_matrix[1]) - m25 * source_matrix[0xd];
    destination_matrix[1] = m10;
    m16 = (m08 * source_matrix[1] - m15 * source_matrix[5]) + m23 * source_matrix[0xd];
    destination_matrix[2] = m16;
    m13 = (m25 * source_matrix[5] - m14 * source_matrix[1]) - m23 * source_matrix[9];
    destination_matrix[3] = m13;
    
    // 继续计算伴随矩阵
    destination_matrix[4] = (m08 * source_matrix[8] - m04 * source_matrix[4]) - m14 * source_matrix[0xc];
    destination_matrix[5] = (m04 * *source_matrix - m15 * source_matrix[8]) + m25 * source_matrix[0xc];
    destination_matrix[6] = (m15 * source_matrix[4] - m08 * *source_matrix) - m23 * source_matrix[0xc];
    destination_matrix[7] = (m14 * *source_matrix - m25 * source_matrix[4]) + m23 * source_matrix[8];
    
    destination_matrix[8] = (m18 * source_matrix[4] - m20 * source_matrix[8]) + m22 * source_matrix[0xc];
    destination_matrix[9] = (m24 * source_matrix[8] - m18 * *source_matrix) - m26 * source_matrix[0xc];
    destination_matrix[10] = (m20 * *source_matrix - m24 * source_matrix[4]) + m27 * source_matrix[0xc];
    destination_matrix[11] = (m26 * source_matrix[4] - m22 * *source_matrix) - m27 * source_matrix[8];
    
    destination_matrix[12] = (m07 * source_matrix[8] - m06 * source_matrix[4]) - m09 * source_matrix[0xc];
    destination_matrix[13] = (m06 * *source_matrix - m28 * source_matrix[8]) + m17 * source_matrix[0xc];
    destination_matrix[14] = (m28 * source_matrix[4] - m07 * *source_matrix) - m12 * source_matrix[0xc];
    destination_matrix[15] = (m09 * *source_matrix - m17 * source_matrix[4]) + m12 * source_matrix[8];
    
    // 计算行列式
    det = m10 * source_matrix[4] + m11 * *source_matrix + source_matrix[8] * m16 + m13 * source_matrix[0xc];
    if (det != 1.0) {
        det_inv = 1.0 / det;
        // 归一化逆矩阵
        *destination_matrix = *destination_matrix * det_inv;
        destination_matrix[1] = destination_matrix[1] * det_inv;
        destination_matrix[2] = destination_matrix[2] * det_inv;
        destination_matrix[3] = destination_matrix[3] * det_inv;
        destination_matrix[4] = destination_matrix[4] * det_inv;
        destination_matrix[5] = destination_matrix[5] * det_inv;
        destination_matrix[6] = destination_matrix[6] * det_inv;
        destination_matrix[7] = destination_matrix[7] * det_inv;
        destination_matrix[8] = destination_matrix[8] * det_inv;
        destination_matrix[9] = destination_matrix[9] * det_inv;
        destination_matrix[10] = destination_matrix[10] * det_inv;
        destination_matrix[11] = destination_matrix[11] * det_inv;
        destination_matrix[12] = destination_matrix[12] * det_inv;
        destination_matrix[13] = destination_matrix[13] * det_inv;
        destination_matrix[14] = destination_matrix[14] * det_inv;
        destination_matrix[15] = destination_matrix[15] * det_inv;
    }
}

/**
 * 矩阵乘法运算
 * @param matrix_a 第一个矩阵
 * @param matrix_b 第二个矩阵
 * @param result 结果矩阵
 * @return 结果矩阵指针
 */
float* multiply_matrices(float* matrix_a, float* matrix_b, float* result)
{
    float a00, a01, a02, a03, a04, a05, a06, a07, a08, a09;
    float a10, a11, a12, a13, a14, a15, a16, a17, a18;
    float b00, b01, b02, b03, b04, b05, b06, b07, b08, b09;
    float b10, b11, b12, b13, b14, b15, b16, b17, b18;
    
    // 提取矩阵A的元素
    a01 = matrix_a[1];
    a02 = matrix_a[2];
    a00 = *matrix_a;
    a03 = matrix_a[3];
    a04 = matrix_a[4];
    b06 = matrix_b[3];
    b07 = matrix_b[7];
    b08 = matrix_b[9];
    b09 = matrix_b[1];
    b10 = matrix_b[6];
    b11 = matrix_b[2];
    b12 = matrix_b[5];
    b13 = matrix_b[10];
    b14 = matrix_b[0xb];
    b15 = matrix_b[0xf];
    
    // 计算第一行
    *result = a00 * *matrix_b + a01 * matrix_b[4] + a02 * matrix_b[8] + a03 * matrix_b[0xc];
    result[1] = b09 * a00 + b12 * a01 + b08 * a02 + matrix_b[0xd] * a03;
    b08 = matrix_a[6];
    b12 = matrix_a[5];
    result[2] = b11 * a00 + b10 * a01 + b13 * a02 + matrix_b[0xe] * a03;
    a16 = matrix_a[7];
    a17 = matrix_b[8];
    a18 = matrix_b[4];
    result[3] = b06 * a00 + b07 * a01 + b14 * a02 + b15 * a03;
    
    // 计算第二行
    b01 = matrix_b[9];
    b02 = matrix_b[5];
    result[4] = a04 * *matrix_b + b12 * a18 + b08 * a17 + a16 * matrix_b[0xc];
    result[5] = a04 * b09 + b12 * b02 + b08 * b01 + a16 * matrix_b[0xd];
    b01 = matrix_a[9];
    b02 = matrix_a[10];
    a17 = matrix_b[8];
    a18 = matrix_b[4];
    a16 = matrix_a[0xb];
    result[6] = a04 * b11 + b12 * b10 + b08 * b13 + a16 * matrix_b[0xe];
    result[7] = a04 * b06 + b12 * b07 + b08 * b14 + a16 * b15;
    
    // 计算第三行
    a04 = matrix_a[8];
    b08 = matrix_b[9];
    b12 = matrix_b[5];
    result[8] = a04 * *matrix_b + b01 * a18 + b02 * a17 + a16 * matrix_b[0xc];
    result[9] = a04 * b09 + b01 * b12 + b02 * b08 + a16 * matrix_b[0xd];
    result[10] = a04 * b11 + b01 * b10 + b02 * b13 + a16 * matrix_b[0xe];
    
    // 计算第四行
    a17 = matrix_a[0xd];
    a18 = matrix_a[0xe];
    b08 = matrix_b[4];
    b12 = matrix_b[8];
    a16 = matrix_a[0xf];
    result[11] = a04 * b06 + b01 * b07 + b02 * b14 + a16 * b15;
    b01 = matrix_a[0xc];
    b02 = matrix_b[9];
    a04 = matrix_b[5];
    result[12] = b01 * *matrix_b + a17 * b08 + a18 * b12 + a16 * matrix_b[0xc];
    result[13] = b01 * b09 + a17 * a04 + a18 * b02 + a16 * matrix_b[0xd];
    result[14] = b01 * b11 + a17 * b10 + a18 * b13 + a16 * matrix_b[0xe];
    result[15] = b01 * b06 + a17 * b07 + a18 * b14 + a16 * b15;
    return result;
}

/**
 * 设置调试信息
 * @param debug_context 调试上下文
 * @param message 调试消息
 */
void set_debug_info(longlong debug_context, longlong message)
{
    longlong message_length;
    undefined* message_ptr;
    undefined1 stack_buffer[32];
    undefined8 stack_guard_1;
    undefined* stack_ptr_1;
    undefined* stack_ptr_2;
    undefined4 stack_size;
    undefined stack_buffer_2[72];
    ulonglong stack_guard_2;
    
    stack_guard_1 = 0xfffffffffffffffe;
    stack_guard_2 = g_stack_guard ^ (ulonglong)stack_buffer;
    stack_ptr_1 = &DEBUG_SYMBOL_1809fcc58;
    stack_ptr_2 = stack_buffer_2;
    stack_size = 0;
    stack_buffer_2[0] = 0;
    
    if (message != 0) {
        message_length = -1;
        do {
            message_length = message_length + 1;
        } while (*(char*)(message + message_length) != '\0');
        stack_size = (undefined4)message_length;
        strcpy_s(stack_buffer_2, 0x40, message);
    }
    
    *(undefined4*)(debug_context + 0x3530) = stack_size;
    message_ptr = &DEFAULT_MESSAGE_18098bc73;
    if (stack_ptr_2 != (undefined*)0x0) {
        message_ptr = stack_ptr_2;
    }
    strcpy_s(*(undefined8*)(debug_context + 0x3528), 0x40, message_ptr);
    stack_ptr_1 = &VTABLE_18098bcb0;
    security_check(stack_guard_2 ^ (ulonglong)stack_buffer);
}

/**
 * 初始化渲染对象
 * @param render_object 渲染对象指针
 * @return 渲染对象指针
 */
longlong initialize_render_object(longlong render_object)
{
    longlong loop_counter;
    longlong object_ptr;
    
    loop_counter = 6;
    object_ptr = render_object;
    do {
        initialize_object_component(object_ptr);
        object_ptr = object_ptr + 0x20;
        loop_counter = loop_counter + -1;
    } while (loop_counter != 0);
    
    // 设置默认值
    *(undefined8*)(render_object + 0xc0) = 0x3f800000;  // 1.0f
    *(undefined8*)(render_object + 200) = 0;
    *(undefined8*)(render_object + 0xd0) = 0x3f80000000000000;  // 1.0
    *(undefined8*)(render_object + 0xd8) = 0;
    *(undefined4*)(render_object + 0xe0) = 0;
    *(undefined4*)(render_object + 0xe4) = 0;
    *(undefined4*)(render_object + 0xe8) = 0x3f800000;  // 1.0f
    *(undefined4*)(render_object + 0xec) = 0;
    *(undefined4*)(render_object + 0xf0) = 0;
    *(undefined4*)(render_object + 0xf4) = 0;
    *(undefined4*)(render_object + 0xf8) = 0;
    *(undefined4*)(render_object + 0xfc) = 0x3f800000;  // 1.0f
    *(undefined1*)(render_object + 0x100) = 1;
    *(undefined4*)(render_object + 0x104) = 0xbf800000;  // -1.0f
    *(undefined4*)(render_object + 0x108) = 0x3f800000;  // 1.0f
    *(undefined4*)(render_object + 0x110) = 0xbf800000;  // -1.0f
    *(undefined4*)(render_object + 0x10c) = 0x3f800000;  // 1.0f
    *(undefined4*)(render_object + 0x114) = 0x3f800000;  // 1.0f
    *(undefined8*)(render_object + 0x118) = 0x447a0000;  // 1000.0f
    *(undefined4*)(render_object + 0x120) = 0x3f800000;  // 1.0f
    
    setup_render_pipeline(render_object);
    
    *(undefined8*)(render_object + 0x128) = 0;
    *(undefined8*)(render_object + 0x130) = 0x7f7fffff00000000;  // 最大float值
    *(undefined1*)(render_object + 0x124) = 0;
    return render_object;
}

/**
 * 处理渲染对象
 * @param render_object 渲染对象指针
 * @param render_params 渲染参数
 */
void process_render_object(longlong* render_object, undefined8 render_params)
{
    longlong* object_manager;
    undefined8 params_copy;
    longlong* stack_ptr_1;
    longlong* stack_ptr_2;
    undefined1 stack_buffer[8];
    undefined8 stack_guard;
    longlong* stack_ptr_3;
    char cleanup_flag_1;
    char cleanup_flag_2;
    char cleanup_flag_3;
    
    params_copy = 0xfffffffffffffffe;
    if (render_object != (longlong*)0x0) {
        ((void (*)(void))(*(render_object[0] + 0x28)))();
    }
    
    stack_ptr_1 = (longlong*)0x0;
    stack_ptr_2 = (longlong*)0x0;
    stack_ptr_3 = (longlong*)0x0;
    stack_guard = 0;
    stack_buffer[0] = 0;
    
    setup_render_context(&stack_ptr_1, render_object, 0);
    if (render_object != (longlong*)0x0) {
        ((void (*)(longlong))(*(render_object[0] + 0x38)))(render_object);
    }
    
    render_with_params(&stack_ptr_1, render_params, 0, 0x3f800000, params_copy);
    
    if ((stack_ptr_1 != (longlong*)0x0) && (stack_ptr_2 != (longlong*)0x0)) {
        if (cleanup_flag_3 != '\0') {
            cleanup_resources();
        }
        cleanup_stack_buffer(stack_buffer);
        if (cleanup_flag_1 != '\0') {
            release_render_object(stack_ptr_1);
        }
        if (cleanup_flag_2 != '\0') {
            release_render_object(stack_ptr_1);
        }
        object_manager = stack_ptr_2;
        stack_ptr_2 = (longlong*)0x0;
        if (object_manager != (longlong*)0x0) {
            ((void (*)(void))(*(object_manager[0] + 0x38)))();
        }
    }
    
    cleanup_stack_buffer(stack_buffer);
    if (stack_ptr_3 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_3[0] + 0x38)))();
    }
    if (stack_ptr_2 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_2[0] + 0x38)))();
    }
    if (stack_ptr_1 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_1[0] + 0x38)))();
    }
}

/**
 * 记录渲染事件
 * @param event_type 事件类型
 * @param event_data 事件数据
 * @param context 上下文
 */
void log_render_event(undefined8 event_type, undefined8 event_data, longlong context)
{
    undefined8 manager_ptr;
    longlong string_length;
    undefined1 stack_buffer[32];
    undefined8 stack_guard_1;
    undefined4 stack_size;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined* stack_ptr_1;
    undefined1* stack_ptr_2;
    undefined4 stack_data_3;
    undefined1 stack_buffer_2[72];
    ulonglong stack_guard_2;
    
    manager_ptr = g_global_manager;
    stack_data_1 = 0xfffffffffffffffe;
    stack_guard_2 = g_stack_guard ^ (ulonglong)stack_buffer;
    stack_size = 0;
    stack_ptr_1 = &DEBUG_SYMBOL_1809fcc58;
    stack_ptr_2 = stack_buffer_2;
    stack_data_3 = 0;
    stack_buffer_2[0] = 0;
    stack_data_2 = event_data;
    
    if (context != 0) {
        string_length = -1;
        do {
            string_length = string_length + 1;
        } while (*(char*)(context + string_length) != '\0');
        stack_data_3 = (undefined4)string_length;
        strcpy_s(stack_buffer_2, 0x40);
    }
    
    stack_guard_1 = 0;
    register_event_callback(manager_ptr, event_data, &stack_ptr_1, 0);
    stack_size = 1;
    stack_ptr_1 = &VTABLE_18098bcb0;
    security_check(stack_guard_2 ^ (ulonglong)stack_buffer);
}

/**
 * 设置对象颜色
 * @param object 对象指针
 * @param color 颜色值 (RGBA格式)
 */
void set_object_color(longlong object, uint color)
{
    // 将颜色值从整数转换为浮点数 (0.0-1.0范围)
    *(float*)(object + 0x238) = (float)((color >> 0x10) & 0xff) * 0.003921569;  // R
    *(float*)(object + 0x23c) = (float)((color >> 8) & 0xff) * 0.003921569;   // G
    *(float*)(object + 0x240) = (float)(color & 0xff) * 0.003921569;        // B
    *(float*)(object + 0x244) = (float)((color >> 0x18) & 0xff) * 0.003921569; // A
}

/**
 * 注册渲染回调
 * @param callback_type 回调类型
 * @param callback_data 回调数据
 * @param context 上下文
 * @param flags 标志
 */
void register_render_callback(undefined8 callback_type, undefined8 callback_data, 
                             longlong context, undefined1 flags)
{
    undefined8 manager_ptr;
    longlong string_length;
    undefined1 stack_buffer[32];
    undefined4 stack_size;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined* stack_ptr_1;
    undefined1* stack_ptr_2;
    undefined4 stack_data_3;
    undefined1 stack_buffer_2[72];
    ulonglong stack_guard;
    
    manager_ptr = g_global_manager;
    stack_data_1 = 0xfffffffffffffffe;
    stack_guard = g_stack_guard ^ (ulonglong)stack_buffer;
    stack_size = 0;
    stack_ptr_1 = &DEBUG_SYMBOL_1809fcc58;
    stack_ptr_2 = stack_buffer_2;
    stack_data_3 = 0;
    stack_buffer_2[0] = 0;
    stack_data_2 = callback_data;
    
    if (context != 0) {
        string_length = -1;
        do {
            string_length = string_length + 1;
        } while (*(char*)(context + string_length) != '\0');
        stack_data_3 = (undefined4)string_length;
        strcpy_s(stack_buffer_2, 0x40);
    }
    
    register_callback(manager_ptr, callback_data, &stack_ptr_1, flags);
    stack_size = 1;
    stack_ptr_1 = &VTABLE_18098bcb0;
    security_check(stack_guard ^ (ulonglong)stack_buffer);
}

/**
 * 执行渲染操作
 * @param render_context 渲染上下文
 * @param param1 参数1
 * @param param2 参数2
 */
void execute_render_operation(longlong* render_context, undefined8 param1, undefined8 param2)
{
    longlong* object_manager;
    undefined4 color_r, color_g, color_b, color_a;
    longlong* stack_ptr_1;
    longlong* stack_ptr_2;
    undefined1 stack_buffer[8];
    undefined8 stack_guard;
    longlong* stack_ptr_3;
    char cleanup_flag_1;
    char cleanup_flag_2;
    char cleanup_flag_3;
    
    if (render_context != (longlong*)0x0) {
        ((void (*)(void))(*(render_context[0] + 0x28)))();
    }
    
    stack_ptr_1 = (longlong*)0x0;
    stack_ptr_2 = (longlong*)0x0;
    stack_ptr_3 = (longlong*)0x0;
    stack_guard = 0;
    stack_buffer[0] = 0;
    
    setup_render_context(&stack_ptr_1, render_context, 0);
    if (render_context != (longlong*)0x0) {
        ((void (*)(longlong))(*(render_context[0] + 0x38)))(render_context);
    }
    
    // 设置默认颜色 (白色，不透明)
    color_r = 0x3f800000;  // 1.0f
    color_g = 0x3f800000;  // 1.0f
    color_b = 0x3f800000;  // 1.0f
    color_a = 0x3f800000;  // 1.0f
    
    render_with_color(&stack_ptr_1, param1, param2, 0xff, &color_r, 1, 0, 0, 1);
    
    if ((stack_ptr_1 != (longlong*)0x0) && (stack_ptr_2 != (longlong*)0x0)) {
        if (cleanup_flag_3 != '\0') {
            cleanup_resources();
        }
        cleanup_stack_buffer(stack_buffer);
        if (cleanup_flag_1 != '\0') {
            release_render_object(stack_ptr_1);
        }
        if (cleanup_flag_2 != '\0') {
            release_render_object(stack_ptr_1);
        }
        object_manager = stack_ptr_2;
        stack_ptr_2 = (longlong*)0x0;
        if (object_manager != (longlong*)0x0) {
            ((void (*)(void))(*(object_manager[0] + 0x38)))();
        }
    }
    
    cleanup_stack_buffer(stack_buffer);
    if (stack_ptr_3 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_3[0] + 0x38)))();
    }
    if (stack_ptr_2 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_2[0] + 0x38)))();
    }
    if (stack_ptr_1 != (longlong*)0x0) {
        ((void (*)(void))(*(stack_ptr_1[0] + 0x38)))();
    }
}

/**
 * 清理容器元素
 * @param container 容器指针
 * @param start_pos 开始位置
 * @return 开始位置
 */
longlong cleanup_container_elements(longlong container, longlong start_pos)
{
    undefined8* element_ptr;
    longlong element_count;
    ulonglong container_size;
    
    container_size = *(ulonglong*)(container + 8);
    if ((start_pos + 0x20U < container_size) && 
        (element_count = (longlong)(container_size - (start_pos + 0x20U)) >> 5, 0 < element_count)) {
        element_ptr = (undefined8*)(start_pos + 0x28);
        do {
            if (element_ptr[-4] != 0) {
                free_memory();
            }
            element_ptr[-2] = 0;
            element_count = element_count + -1;
            element_ptr[-4] = 0;
            *(undefined4*)(element_ptr + -3) = 0;
            *(undefined4*)(element_ptr + -3) = *(undefined4*)(element_ptr + 1);
            element_ptr[-4] = *element_ptr;
            *(undefined4*)((longlong)element_ptr + -0xc) = *(undefined4*)((longlong)element_ptr + 0x14);
            *(undefined4*)(element_ptr + -2) = *(undefined4*)(element_ptr + 2);
            *(undefined4*)(element_ptr + 1) = 0;
            *element_ptr = 0;
            element_ptr[2] = 0;
            element_ptr = element_ptr + 4;
        } while (0 < element_count);
        container_size = *(ulonglong*)(container + 8);
    }
    
    element_ptr = (undefined8*)(container_size - 0x20);
    *(undefined8**)(container + 8) = element_ptr;
    ((void (*)(undefined8*, longlong))(*element_ptr))(element_ptr, 0);
    return start_pos;
}

/**
 * 批量清理容器元素
 * @param container 容器指针
 * @param start_pos 开始位置
 */
void batch_cleanup_container_elements(longlong container, longlong start_pos)
{
    longlong in_RAX;
    undefined8* element_ptr;
    longlong container_base;
    longlong element_count;
    
    element_count = container - in_RAX >> 5;
    if (0 < element_count) {
        element_ptr = (undefined8*)(start_pos + 0x28);
        do {
            if (element_ptr[-4] != 0) {
                free_memory();
            }
            element_ptr[-2] = 0;
            element_count = element_count + -1;
            element_ptr[-4] = 0;
            *(undefined4*)(element_ptr + -3) = 0;
            *(undefined4*)(element_ptr + -3) = *(undefined4*)(element_ptr + 1);
            element_ptr[-4] = *element_ptr;
            *(undefined4*)((longlong)element_ptr + -0xc) = *(undefined4*)((longlong)element_ptr + 0x14);
            *(undefined4*)(element_ptr + -2) = *(undefined4*)(element_ptr + 2);
            *(undefined4*)(element_ptr + 1) = 0;
            *element_ptr = 0;
            element_ptr[2] = 0;
            element_ptr = element_ptr + 4;
        } while (0 < element_count);
        container = *(longlong*)(container_base + 8);
    }
    
    element_ptr = (undefined8*)(container + -0x20);
    *(undefined8**)(container_base + 8) = element_ptr;
    ((void (*)(undefined8*, longlong))(*element_ptr))(element_ptr, 0);
}

/**
 * 快速清理容器元素
 * @param param1 参数1
 * @param start_pos 开始位置
 */
void quick_cleanup_container_elements(undefined8 param1, longlong start_pos)
{
    undefined8* element_ptr;
    longlong container_base;
    longlong element_count;
    
    element_ptr = (undefined8*)(start_pos + 0x28);
    do {
        if (element_ptr[-4] != 0) {
            free_memory();
        }
        element_ptr[-2] = 0;
        element_count = element_count + -1;
        element_ptr[-4] = 0;
        *(undefined4*)(element_ptr + -3) = 0;
        *(undefined4*)(element_ptr + -3) = *(undefined4*)(element_ptr + 1);
        element_ptr[-4] = *element_ptr;
        *(undefined4*)((longlong)element_ptr + -0xc) = *(undefined4*)((longlong)element_ptr + 0x14);
        *(undefined4*)(element_ptr + -2) = *(undefined4*)(element_ptr + 2);
        *(undefined4*)(element_ptr + 1) = 0;
        *element_ptr = 0;
        element_ptr[2] = 0;
        element_ptr = element_ptr + 4;
    } while (0 < element_count);
    
    element_ptr = (undefined8*)(*(longlong*)(container_base + 8) + -0x20);
    *(undefined8**)(container_base + 8) = element_ptr;
    ((void (*)(undefined8*, longlong))(*element_ptr))(element_ptr, 0);
}

/**
 * 释放容器资源
 * @param position 位置
 */
void release_container_resources(longlong position)
{
    undefined8* element_ptr;
    longlong container_base;
    
    element_ptr = (undefined8*)(position + -0x20);
    *(undefined8**)(container_base + 8) = element_ptr;
    ((void (*)(undefined8*, longlong))(*element_ptr))(element_ptr, 0);
}

/**
 * 销毁容器元素
 * @param position 位置
 */
void destroy_container_element(longlong position)
{
    undefined8* element_ptr;
    longlong container_base;
    
    element_ptr = (undefined8*)(position + -0x20);
    *(undefined8**)(container_base + 8) = element_ptr;
    ((void (*)(undefined8*, longlong))(*element_ptr))(element_ptr, 0);
}

/**
 * 初始化渲染设备
 * @param device 设备指针
 * @param device_desc 设备描述
 * @return 设备指针
 */
undefined8* initialize_render_device(undefined8* device, undefined8 device_desc)
{
    // 初始化设备基本参数
    device[2] = 0;
    device[3] = 0;
    device[0xc] = 0;
    device[0xd] = 0;
    *(undefined4*)(device + 0xe) = 0x1060101;  // 设备标志
    *(undefined4*)((longlong)device + 0x74) = 0xff000000;  // Alpha掩码
    *(undefined4*)(device + 0xf) = 0x40300ff;   // 设备能力
    *(undefined8*)((longlong)device + 0x7c) = 0x30503;    // 设备版本
    
    // 初始化扩展参数
    *(undefined8*)((longlong)device + 0x84) = 0;
    *(undefined8*)((longlong)device + 0x8c) = 0;
    *(undefined8*)((longlong)device + 0x94) = 0;
    *(undefined4*)((longlong)device + 0x9c) = 0;
    
    // 设置主设备参数
    device[0x14] = 0x900;  // 分辨率宽度
    device[0x15] = 0;       // 保留
    *(undefined4*)(device + 0x16) = 0x1060101;  // 设备标志
    *(undefined4*)((longlong)device + 0xb4) = 0xff000000;  // Alpha掩码
    *(undefined4*)(device + 0x17) = 0x40300ff;   // 设备能力
    *(undefined8*)((longlong)device + 0xbc) = 0x30503;    // 设备版本
    
    // 初始化次级设备参数
    *(undefined8*)((longlong)device + 0xc4) = 0;
    *(undefined8*)((longlong)device + 0xcc) = 0;
    *(undefined8*)((longlong)device + 0xd4) = 0;
    *(undefined4*)((longlong)device + 0xdc) = 0;
    device[0x1c] = 0x900;  // 分辨率高度
    *device = device_desc;  // 设置设备描述符
    *(undefined1*)(device + 1) = 0;  // 清零状态
    return device;
}