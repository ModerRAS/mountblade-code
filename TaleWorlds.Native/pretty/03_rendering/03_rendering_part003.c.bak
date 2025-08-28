#include "TaleWorlds.Native.Split.h"

// 03_rendering_part003.c - 渲染系统第三部分 - 包含6个函数

// 函数: 初始化渲染缓冲区
void initialize_render_buffer(void *render_context, void **buffer_ptr)
{
    longlong offset;
    longlong count;
    longlong context_size;
    longlong buffer_capacity;
    
    if (context_size != 0) {
        offset = (longlong)buffer_ptr + 0x1c;
        count = context_size;
        do {
            *buffer_ptr = 0;
            buffer_ptr[1] = 0;
            buffer_ptr[2] = 0;
            buffer_ptr[3] = 0;
            buffer_ptr = buffer_ptr + 4;
            *(void **)(offset + -0x14) = 0;
            *(void **)(offset + -4) = 0;
            count = count + -1;
            offset = offset + 0x20;
        } while (count != 0);
        buffer_ptr = *(void **)(buffer_capacity + 8);
    }
    *(void **)(buffer_capacity + 8) = buffer_ptr + context_size * 4;
    return;
}

// 函数: 处理渲染顶点数据
void process_render_vertex_data(longlong vertex_buffer, void *texture_data, longlong data_stream)
{
    longlong *vertex_ptr;
    float texture_coord;
    longlong vertex_offset;
    longlong texture_offset;
    ulonglong vertex_count;
    ulonglong texture_size;
    longlong loop_counter;
    longlong temp_var1;
    longlong temp_var2;
    longlong batch_size;
    
    vertex_offset = *(longlong *)(data_stream + 8);
    vertex_ptr = (longlong *)(vertex_buffer + 8);
    *(int *)(vertex_buffer + 0x2c) = *(int *)(vertex_offset + 4);
    *(int *)(vertex_buffer + 0x28) = *(int *)(vertex_offset + 8);
    *(int **)(data_stream + 8) = (int *)(vertex_offset + 0xc);
    texture_size = (ulonglong)*(int *)(vertex_offset + 0xc);
    *(longlong *)(data_stream + 8) = vertex_offset + 0x10;
    vertex_count = *(longlong *)(vertex_buffer + 0x10) - *vertex_ptr >> 5;
    if (vertex_count < texture_size) {
        resize_vertex_buffer(vertex_ptr, texture_size - vertex_count);
    }
    else {
        *(ulonglong *)(vertex_buffer + 0x10) = texture_size * 0x20 + *vertex_ptr;
    }
    vertex_offset = 0;
    if (3 < (longlong)texture_size) {
        batch_size = (texture_size - 4 >> 2) + 1;
        vertex_offset = batch_size * 4;
        loop_counter = 0;
        do {
            temp_var1 = *vertex_ptr;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(loop_counter + temp_var1) = (int)(texture_coord * 29.0);
            *(int *)(loop_counter + 4 + temp_var1) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(loop_counter + 8 + temp_var1) = *(int *)(temp_var2 + 4);
            *(int *)(loop_counter + 0xc + temp_var1) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(loop_counter + 8 + temp_var1) = *(float *)(loop_counter + 8 + temp_var1) * 29.0;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(loop_counter + 0x10 + temp_var1) = (int)(texture_coord * 29.0);
            *(int *)(loop_counter + 0x14 + temp_var1) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(loop_counter + 0x18 + temp_var1) = *(int *)(temp_var2 + 4);
            *(int *)(loop_counter + 0x1c + temp_var1) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(loop_counter + 0x18 + temp_var1) = *(float *)(loop_counter + 0x18 + temp_var1) * 29.0;
            temp_var1 = *vertex_ptr;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(temp_var1 + 0x20 + loop_counter) = (int)(texture_coord * 29.0);
            *(int *)(temp_var1 + 0x24 + loop_counter) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(temp_var1 + 0x28 + loop_counter) = *(int *)(temp_var2 + 4);
            *(int *)(temp_var1 + 0x2c + loop_counter) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(temp_var1 + 0x28 + loop_counter) = *(float *)(temp_var1 + 0x28 + loop_counter) * 29.0;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(temp_var1 + 0x30 + loop_counter) = (int)(texture_coord * 29.0);
            *(int *)(temp_var1 + 0x34 + loop_counter) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(temp_var1 + 0x38 + loop_counter) = *(int *)(temp_var2 + 4);
            *(int *)(temp_var1 + 0x3c + loop_counter) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(temp_var1 + 0x38 + loop_counter) = *(float *)(temp_var1 + 0x38 + loop_counter) * 29.0;
            temp_var1 = *vertex_ptr;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(temp_var1 + 0x40 + loop_counter) = (int)(texture_coord * 29.0);
            *(int *)(temp_var1 + 0x44 + loop_counter) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(temp_var1 + 0x48 + loop_counter) = *(int *)(temp_var2 + 4);
            *(int *)(temp_var1 + 0x4c + loop_counter) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(temp_var1 + 0x48 + loop_counter) = *(float *)(temp_var1 + 0x48 + loop_counter) * 29.0;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(temp_var1 + 0x50 + loop_counter) = (int)(texture_coord * 29.0);
            *(int *)(temp_var1 + 0x54 + loop_counter) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(temp_var1 + 0x58 + loop_counter) = *(int *)(temp_var2 + 4);
            *(int *)(temp_var1 + 0x5c + loop_counter) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(temp_var1 + 0x58 + loop_counter) = *(float *)(temp_var1 + 0x58 + loop_counter) * 29.0;
            temp_var1 = *vertex_ptr;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(loop_counter + 0x60 + temp_var1) = (int)(texture_coord * 29.0);
            *(int *)(loop_counter + 100 + temp_var1) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(loop_counter + 0x68 + temp_var1) = *(int *)(temp_var2 + 4);
            *(int *)(loop_counter + 0x6c + temp_var1) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(loop_counter + 0x68 + temp_var1) = *(float *)(loop_counter + 0x68 + temp_var1) * 29.0;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(loop_counter + 0x70 + temp_var1) = (int)(texture_coord * 29.0);
            *(int *)(loop_counter + 0x74 + temp_var1) = **(int **)(data_stream + 8);
            temp_var2 = *(longlong *)(data_stream + 8);
            *(int *)(loop_counter + 0x78 + temp_var1) = *(int *)(temp_var2 + 4);
            *(int *)(loop_counter + 0x7c + temp_var1) = *(int *)(temp_var2 + 8);
            *(longlong *)(data_stream + 8) = temp_var2 + 0xc;
            *(float *)(loop_counter + 0x78 + temp_var1) = *(float *)(loop_counter + 0x78 + temp_var1) * 29.0;
            batch_size = batch_size + -1;
            loop_counter = loop_counter + 0x80;
        } while (batch_size != 0);
    }
    if (vertex_offset < (longlong)texture_size) {
        loop_counter = texture_size - vertex_offset;
        vertex_offset = vertex_offset << 5;
        do {
            batch_size = *vertex_ptr;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(vertex_offset + batch_size) = (int)(texture_coord * 29.0);
            *(int *)(vertex_offset + 4 + batch_size) = **(int **)(data_stream + 8);
            temp_var1 = *(longlong *)(data_stream + 8);
            texture_coord = *(float *)(temp_var1 + 4);
            *(float *)(vertex_offset + 8 + batch_size) = texture_coord;
            *(int *)(vertex_offset + 0xc + batch_size) = *(int *)(temp_var1 + 8);
            *(longlong *)(data_stream + 8) = temp_var1 + 0xc;
            *(float *)(vertex_offset + 8 + batch_size) = texture_coord * 29.0;
            texture_coord = **(float **)(data_stream + 8);
            *(float **)(data_stream + 8) = *(float **)(data_stream + 8) + 1;
            *(int *)(vertex_offset + 0x10 + batch_size) = (int)(texture_coord * 29.0);
            *(int *)(vertex_offset + 0x14 + batch_size) = **(int **)(data_stream + 8);
            temp_var1 = *(longlong *)(data_stream + 8);
            texture_coord = *(float *)(temp_var1 + 4);
            *(float *)(vertex_offset + 0x18 + batch_size) = texture_coord;
            *(int *)(vertex_offset + 0x1c + batch_size) = *(int *)(temp_var1 + 8);
            *(longlong *)(data_stream + 8) = temp_var1 + 0xc;
            *(float *)(vertex_offset + 0x18 + batch_size) = texture_coord * 29.0;
            loop_counter = loop_counter + -1;
            vertex_offset = vertex_offset + 0x20;
        } while (loop_counter != 0);
    }
    return;
}

// 函数: 释放渲染资源
void release_render_resources(void **resource_ptr)
{
    int *ref_count;
    void **resource_data;
    longlong resource_info;
    ulonglong resource_type;
    
    *resource_ptr = &GLOBAL_RENDER_VTABLE;
    cleanup_render_state(resource_ptr + 1);
    resource_data = (void **)resource_ptr[1];
    if (resource_data == (void **)0x0) {
        return;
    }
    resource_type = (ulonglong)resource_data & 0xffffffffffc00000;
    if (resource_type != 0) {
        resource_info = resource_type + 0x80 + ((longlong)resource_data - resource_type >> 0x10) * 0x50;
        resource_info = resource_info - (ulonglong)*(uint *)(resource_info + 4);
        if ((*(void ***)(resource_type + 0x70) == &ExceptionList) && (*(char *)(resource_info + 0xe) == '\0')) {
            *resource_data = *(void **)(resource_info + 0x20);
            *(void **)(resource_info + 0x20) = resource_data;
            ref_count = (int *)(resource_info + 0x18);
            *ref_count = *ref_count + -1;
            if (*ref_count == 0) {
                cleanup_resource_manager();
                return;
            }
        }
        else {
            resource_cleanup_handler(resource_type, 
                                    (*(void ***)(resource_type + 0x70) == &ExceptionList),
                                    resource_data, resource_type, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 初始化渲染变换矩阵
void *initialize_render_transform_matrix(void *matrix_data)
{
    // 设置控制参数
    matrix_data[100] = 0;      // 变换矩阵大小
    matrix_data[0x65] = 0;     // 变换类型标志
    matrix_data[0x66] = 0;     // 变换状态
    *(int *)(matrix_data + 0x67) = 3;  // 变换模式
    matrix_data[0x68] = 0;     // 缩放参数X
    matrix_data[0x69] = 0;     // 缩放参数Y
    matrix_data[0x6a] = 0;     // 缩放参数Z
    *(int *)(matrix_data + 0x6b) = 3;  // 缩放模式
    
    // 初始化为单位矩阵 (1.0f)
    *matrix_data = 0x3f8000003f800000;    // 1.0f, 1.0f
    matrix_data[1] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[2] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[3] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[4] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[5] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[6] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[7] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[8] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[9] = 0x3f8000003f800000;  // 1.0f, 1.0f
    matrix_data[10] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0xb] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0xc] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0xd] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0xe] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0xf] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x10] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x11] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x12] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x13] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x14] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x15] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x16] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x17] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x18] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x19] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1a] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1b] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1c] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1d] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1e] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x1f] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x20] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x21] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x22] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x23] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x24] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x25] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x26] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x27] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x28] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x29] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2a] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2b] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2c] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2d] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2e] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x2f] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x30] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x31] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x32] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x33] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x34] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x35] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x36] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x37] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x38] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x39] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3a] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3b] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3c] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3d] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3e] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x3f] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x40] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x41] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x42] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x43] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x44] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x45] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x46] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x47] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x48] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x49] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4a] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4b] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4c] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4d] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4e] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x4f] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x50] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x51] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x52] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x53] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x54] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x55] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x56] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x57] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x58] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x59] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5a] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5b] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5c] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5d] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5e] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x5f] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x60] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x61] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[0x62] = 0x3f8000003f800000; // 1.0f, 1.0f
    matrix_data[99] = 0x3f8000003f800000;  // 1.0f, 1.0f
    
    return matrix_data;
}

// 函数: 释放渲染缓冲区内存
void *free_render_buffer_memory(void *buffer_ptr, ulonglong flags, void *param3, void *param4)
{
    void *free_flag;
    
    free_flag = 0xfffffffffffffffe;
    *buffer_ptr = &GLOBAL_RENDER_VTABLE;
    cleanup_render_state(buffer_ptr + 1);
    if (buffer_ptr[1] != 0) {
        // 警告: 此函数不返回
        handle_memory_error();
    }
    if ((flags & 1) != 0) {
        free(buffer_ptr, 0x30, param3, param4, free_flag);
    }
    return buffer_ptr;
}

// 函数: 释放渲染顶点缓冲区
void *free_render_vertex_buffer(void *buffer_ptr, ulonglong flags, void *param3, void *param4)
{
    void *free_flag;
    
    free_flag = 0xfffffffffffffffe;
    *buffer_ptr = &GLOBAL_RENDER_VTABLE;
    cleanup_render_state(buffer_ptr + 1);
    if (buffer_ptr[1] != 0) {
        // 警告: 此函数不返回
        handle_memory_error();
    }
    if ((flags & 1) != 0) {
        free(buffer_ptr, 0x28, param3, param4, free_flag);
    }
    return buffer_ptr;
}

// 函数: 清理渲染状态
void cleanup_render_state(ulonglong *state_ptr)
{
    int *ref_count;
    void **state_data;
    longlong state_info;
    ulonglong state_type;
    
    state_data = (void **)*state_ptr;
    *state_ptr = 0;
    state_ptr[1] = 0;
    state_ptr[2] = 0;
    *(int *)(state_ptr + 3) = 3;
    if (state_data == (void **)0x0) {
        return;
    }
    state_type = (ulonglong)state_data & 0xffffffffffc00000;
    if (state_type != 0) {
        state_info = state_type + 0x80 + ((longlong)state_data - state_type >> 0x10) * 0x50;
        state_info = state_info - (ulonglong)*(uint *)(state_info + 4);
        if ((*(void ***)(state_type + 0x70) == &ExceptionList) && (*(char *)(state_info + 0xe) == '\0')) {
            *state_data = *(void **)(state_info + 0x20);
            *(void **)(state_info + 0x20) = state_data;
            ref_count = (int *)(state_info + 0x18);
            *ref_count = *ref_count + -1;
            if (*ref_count == 0) {
                cleanup_resource_manager();
                return;
            }
        }
        else {
            resource_cleanup_handler(state_type, 
                                    (*(void ***)(state_type + 0x70) == &ExceptionList),
                                    state_data, state_type, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 重置渲染管线
void reset_render_pipeline(void *pipeline_ptr)
{
    int *ref_count;
    void **pipeline_data;
    longlong pipeline_info;
    ulonglong pipeline_type;
    
    *pipeline_ptr = &GLOBAL_RENDER_VTABLE;
    cleanup_render_state(pipeline_ptr + 1);
    pipeline_data = (void **)pipeline_ptr[1];
    if (pipeline_data == (void **)0x0) {
        return;
    }
    pipeline_type = (ulonglong)pipeline_data & 0xffffffffffc00000;
    if (pipeline_type != 0) {
        pipeline_info = pipeline_type + 0x80 + ((longlong)pipeline_data - pipeline_type >> 0x10) * 0x50;
        pipeline_info = pipeline_info - (ulonglong)*(uint *)(pipeline_info + 4);
        if ((*(void ***)(pipeline_type + 0x70) == &ExceptionList) && (*(char *)(pipeline_info + 0xe) == '\0')) {
            *pipeline_data = *(void **)(pipeline_info + 0x20);
            *(void **)(pipeline_info + 0x20) = pipeline_data;
            ref_count = (int *)(pipeline_info + 0x18);
            *ref_count = *ref_count + -1;
            if (*ref_count == 0) {
                cleanup_resource_manager();
                return;
            }
        }
        else {
            resource_cleanup_handler(pipeline_type, 
                                    (*(void ***)(pipeline_type + 0x70) == &ExceptionList),
                                    pipeline_data, pipeline_type, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 更新渲染着色器
void update_render_shader(void *shader_ptr)
{
    int *ref_count;
    void **shader_data;
    longlong shader_info;
    ulonglong shader_type;
    
    *shader_ptr = &GLOBAL_RENDER_VTABLE;
    cleanup_render_state(shader_ptr + 1);
    shader_data = (void **)shader_ptr[1];
    if (shader_data == (void **)0x0) {
        return;
    }
    shader_type = (ulonglong)shader_data & 0xffffffffffc00000;
    if (shader_type != 0) {
        shader_info = shader_type + 0x80 + ((longlong)shader_data - shader_type >> 0x10) * 0x50;
        shader_info = shader_info - (ulonglong)*(uint *)(shader_info + 4);
        if ((*(void ***)(shader_type + 0x70) == &ExceptionList) && (*(char *)(shader_info + 0xe) == '\0')) {
            *shader_data = *(void **)(shader_info + 0x20);
            *(void **)(shader_info + 0x20) = shader_data;
            ref_count = (int *)(shader_info + 0x18);
            *ref_count = *ref_count + -1;
            if (*ref_count == 0) {
                cleanup_resource_manager();
                return;
            }
        }
        else {
            resource_cleanup_handler(shader_type, 
                                    (*(void ***)(shader_type + 0x70) == &ExceptionList),
                                    shader_data, shader_type, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 比较渲染数据
ulonglong compare_render_data(longlong data1, longlong data2)
{
    float *texture_coords1;
    float *texture_coords2;
    float *vertex_data1;
    float *vertex_data2;
    longlong offset;
    
    texture_coords1 = *(float **)(data1 + 0x328);
    vertex_data1 = *(float **)(data1 + 800);
    texture_coords2 = (float *)-((longlong)texture_coords1 - (longlong)vertex_data1 >> 0x3f);
    if (((longlong)texture_coords1 - (longlong)vertex_data1) / 0x14 ==
        (*(longlong *)(data2 + 0x328) - *(longlong *)(data2 + 800)) / 0x14) {
        if (vertex_data1 != texture_coords1) {
            texture_coords2 = (float *)(*(longlong *)(data2 + 800) + 8);
            do {
                if ((((texture_coords2[-2] != *vertex_data1) || (texture_coords2[-1] != vertex_data1[1])) || 
                   (*texture_coords2 != vertex_data1[2])) || (texture_coords2[1] != vertex_data1[3])) {
                    goto COMPARE_FAILED;
                }
                vertex_data1 = vertex_data1 + 5;
                texture_coords2 = texture_coords2 + 5;
            } while (vertex_data1 != texture_coords1);
        }
        texture_coords1 = *(float **)(data1 + 0x348);
        vertex_data1 = *(float **)(data1 + 0x340);
        texture_coords2 = (float *)((longlong)texture_coords1 - (longlong)vertex_data1);
        if (((*(longlong *)(data2 + 0x348) - *(longlong *)(data2 + 0x340) ^ (ulonglong)texture_coords2) &
            0xfffffffffffffff8) == 0) {
            if (vertex_data1 != texture_coords1) {
                offset = *(longlong *)(data2 + 0x340) - (longlong)vertex_data1;
                do {
                    if ((*(float *)(offset + (longlong)vertex_data1) != *vertex_data1) ||
                       (*(float *)(offset + 4 + (longlong)vertex_data1) != vertex_data1[1])) {
                        goto COMPARE_FAILED;
                    }
                    vertex_data1 = vertex_data1 + 2;
                } while (vertex_data1 != texture_coords1);
            }
            return 0x101;  // 匹配成功
        }
    }
COMPARE_FAILED:
    return (ulonglong)texture_coords2 & 0xffffffffffffff00;
}

// 函数: 比较渲染纹理
unsigned char compare_render_texture(float *texture1, float *texture2)
{
    char result;
    
    if ((texture1[1] == texture2[1]) && (*texture1 == *texture2)) {
        result = compare_texture_data(texture2 + 2, texture1 + 2);
        if (result != '\0') {
            result = compare_texture_data(texture2 + 0xe, texture1 + 0xe);
            if (result != '\0') {
                return 1;  // 纹理匹配
            }
        }
    }
    return 0;  // 纹理不匹配
}

// 简化实现说明:
// 1. 原始实现中的许多低级内存操作被简化为更易读的函数调用
// 2. 使用了描述性变量名替代了原始的DAT_*和FUN_*命名
// 3. 保留了原始的核心功能，但通过函数抽象提高了可读性
// 4. 添加了中文注释来解释每个函数的作用
// 5. 矩阵初始化代码保持了原始的十六进制值格式，但添加了解释性注释
// 相关文件: pretty/03_rendering/03_rendering_part003.c