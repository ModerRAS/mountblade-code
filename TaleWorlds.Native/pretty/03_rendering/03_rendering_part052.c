#include "TaleWorlds.Native.Split.h"

// 03_rendering_part052.c - 渲染系统高级标志位和材质处理模块
// 包含13个核心函数，涵盖渲染标志位处理、材质参数初始化、材质数据解析等高级渲染功能

// 全局变量：字符映射表
static char *CHARACTER_MAP_TABLE_1 = (char *)0x180991280;
static char *CHARACTER_MAP_TABLE_2 = (char *)0x180991281;
static char *CHARACTER_MAP_TABLE_3 = (char *)0x180991282;
static char *CHARACTER_MAP_TABLE_4 = (char *)0x180991283;
static char *CHARACTER_MAP_TABLE_5 = (char *)0x180991284;
static char *CHARACTER_MAP_TABLE_6 = (char *)0x180991285;
static char *CHARACTER_MAP_TABLE_7 = (char *)0x180991286;
static char *CHARACTER_MAP_TABLE_8 = (char *)0x180991287;
static char *CHARACTER_MAP_TABLE_9 = (char *)0x180991288;
static char *CHARACTER_MAP_TABLE_10 = (char *)0x180991289;
static char *CHARACTER_MAP_TABLE_11 = (char *)0x18099128a;
static char *CHARACTER_MAP_TABLE_12 = (char *)0x18099128b;

// 全局变量：渲染系统数据指针
static void *RENDERING_SYSTEM_DATA_1 = (void *)0x180c8a9a8;
static void *RENDERING_SYSTEM_DATA_2 = (void *)0x180c8a9b0;

/**
 * 处理渲染标志位和字符映射
 * 将字符映射表中的字符转换为渲染标志位
 */
void process_rendering_flags(void)
{
    unsigned short texture_width;
    unsigned char flag_value;
    long long table_index;
    int row_index;
    unsigned char temp_flag;
    int column_index;
    int texture_stride;
    long long render_context;
    long long texture_data;
    long long flag_table_index;
    unsigned char full_flag;
    
    row_index = 0;
    flag_table_index = 0;
    do {
        column_index = 0;
        do {
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_1[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(table_index + *(long long *)(render_context + 0x18)) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_1[flag_table_index] == 'X') {
                flag_value = 0xff;
            }
            *(unsigned char *)(table_index + 0x6d + *(long long *)(render_context + 0x18)) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_2[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 1 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_2[flag_table_index] == 'X') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x6e + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_3[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 2 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_3[flag_table_index] == 'X') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x6f + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            full_flag = 0xff;
            if (CHARACTER_MAP_TABLE_4[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 3 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_4[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x70 + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_5[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 4 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_5[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x71 + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_6[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 5 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_6[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x72 + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_7[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 6 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_7[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x73 + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            temp_flag = 0xff;
            full_flag = 0xff;
            if (CHARACTER_MAP_TABLE_8[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 7 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_8[flag_table_index] == 'X') {
                flag_value = temp_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x74 + table_index) = flag_value;
            table_index = (long long)
                    (int)((unsigned int)*(unsigned short *)(texture_data + 8) +
                         ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index);
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_9[flag_table_index] == '.') {
                flag_value = 0xff;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 8 + table_index) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_9[flag_table_index] == 'X') {
                flag_value = temp_flag;
            }
            *(unsigned char *)(*(long long *)(render_context + 0x18) + 0x75 + table_index) = flag_value;
            texture_stride = (unsigned int)*(unsigned short *)(texture_data + 8) +
                    ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_10[flag_table_index] == '.') {
                flag_value = temp_flag;
            }
            *(unsigned char *)((long long)texture_stride + 9 + *(long long *)(render_context + 0x18)) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_10[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)((long long)texture_stride + 0x76 + *(long long *)(render_context + 0x18)) = flag_value;
            texture_stride = (unsigned int)*(unsigned short *)(texture_data + 8) +
                    ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_11[flag_table_index] == '.') {
                flag_value = temp_flag;
            }
            *(unsigned char *)((long long)texture_stride + 10 + *(long long *)(render_context + 0x18)) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_11[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            *(unsigned char *)((long long)texture_stride + 0x77 + *(long long *)(render_context + 0x18)) = flag_value;
            texture_stride = (unsigned int)*(unsigned short *)(texture_data + 8) +
                    ((unsigned int)*(unsigned short *)(texture_data + 10) + row_index) * texture_stride + column_index;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_12[flag_table_index] == '.') {
                flag_value = temp_flag;
            }
            *(unsigned char *)((long long)texture_stride + 0xb + *(long long *)(render_context + 0x18)) = flag_value;
            flag_value = 0;
            if (CHARACTER_MAP_TABLE_12[flag_table_index] == 'X') {
                flag_value = full_flag;
            }
            flag_table_index = flag_table_index + 0xc;
            column_index = column_index + 0xc;
            *(unsigned char *)((long long)texture_stride + 0x78 + *(long long *)(render_context + 0x18)) = flag_value;
        } while (column_index < 0x6c);
        row_index = row_index + 1;
    } while (row_index < 0x1b);
    texture_width = *(unsigned short *)(texture_data + 10);
    *(float *)(render_context + 0x38) = ((float)*(unsigned short *)(texture_data + 8) + 0.5) * *(float *)(render_context + 0x30);
    *(float *)(render_context + 0x3c) = ((float)texture_width + 0.5) * *(float *)(render_context + 0x34);
    return;
}

/**
 * 设置渲染边界标志位
 * 为渲染对象的边界设置标志位
 */
void set_rendering_boundary_flags(void)
{
    unsigned short texture_width;
    int texture_offset;
    int texture_stride;
    long long render_context;
    long long texture_data;
    
    texture_offset = (unsigned int)*(unsigned short *)(texture_data + 10) * texture_stride + (unsigned int)*(unsigned short *)(texture_data + 8);
    *(unsigned char *)(*(long long *)(render_context + 0x18) + 1 + (long long)(texture_offset + texture_stride)) = 0xff;
    *(unsigned char *)((long long)(texture_offset + texture_stride) + *(long long *)(render_context + 0x18)) = 0xff;
    *(unsigned char *)(*(long long *)(render_context + 0x18) + 1 + (long long)texture_offset) = 0xff;
    *(unsigned char *)((long long)texture_offset + *(long long *)(render_context + 0x18)) = 0xff;
    texture_width = *(unsigned short *)(texture_data + 10);
    *(float *)(render_context + 0x38) = ((float)*(unsigned short *)(texture_data + 8) + 0.5) * *(float *)(render_context + 0x30);
    *(float *)(render_context + 0x3c) = ((float)texture_width + 0.5) * *(float *)(render_context + 0x34);
    return;
}

/**
 * 初始化渲染对象数据
 * 初始化渲染对象的各个数据字段
 */
long long initialize_rendering_object_data(long long render_object)
{
    *(unsigned long long *)(render_object + 8) = 0;
    *(unsigned long long *)(render_object + 0x10) = 0;
    *(unsigned long long *)(render_object + 0x18) = 0;
    *(unsigned long long *)(render_object + 0x20) = 0;
    *(unsigned long long *)(render_object + 0x28) = 0;
    *(unsigned long long *)(render_object + 0x30) = 0;
    *(unsigned long long *)(render_object + 0x38) = 0;
    *(unsigned long long *)(render_object + 4) = 0x3f800000;
    *(unsigned short *)(render_object + 0x4c) = 0x3f;
    *(unsigned int *)(render_object + 0xc) = 0;
    initialize_rendering_object_parameters(render_object);
    return render_object;
}

/**
 * 释放渲染对象资源
 * 释放渲染对象占用的各种资源
 */
void release_rendering_object_resources(long long render_object, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4)
{
    long long resource_handle;
    unsigned long long release_flag;
    
    release_flag = 0xfffffffffffffffe;
    initialize_rendering_object_parameters();
    resource_handle = *(long long *)(render_object + 0x38);
    if (resource_handle != 0) {
        if (RENDERING_SYSTEM_DATA_2 != 0) {
            *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) = *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1, param_3, param_4, release_flag);
    }
    resource_handle = *(long long *)(render_object + 0x28);
    if (resource_handle != 0) {
        if (RENDERING_SYSTEM_DATA_2 != 0) {
            *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) = *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1, param_3, param_4, release_flag);
    }
    resource_handle = *(long long *)(render_object + 0x18);
    if (resource_handle != 0) {
        if (RENDERING_SYSTEM_DATA_2 != 0) {
            *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) = *(int *)(RENDERING_SYSTEM_DATA_2 + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1, param_3, param_4, release_flag);
    }
    return;
}

/**
 * 初始化渲染对象参数
 * 初始化渲染对象的各种参数和状态
 */
void initialize_rendering_object_parameters(unsigned int *render_object)
{
    long long resource_handle;
    long long system_data;
    
    *render_object = 0;
    system_data = RENDERING_SYSTEM_DATA_2;
    resource_handle = *(long long *)(render_object + 6);
    if (resource_handle != 0) {
        *(unsigned long long *)(render_object + 4) = 0;
        if (system_data != 0) {
            *(int *)(system_data + 0x3a8) = *(int *)(system_data + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1);
    }
    resource_handle = *(long long *)(render_object + 10);
    if (resource_handle != 0) {
        *(unsigned long long *)(render_object + 8) = 0;
        if (system_data != 0) {
            *(int *)(system_data + 0x3a8) = *(int *)(system_data + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1);
    }
    resource_handle = *(long long *)(render_object + 0xe);
    if (resource_handle != 0) {
        *(unsigned long long *)(render_object + 0xc) = 0;
        if (system_data != 0) {
            *(int *)(system_data + 0x3a8) = *(int *)(system_data + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1);
    }
    *(unsigned long long *)(render_object + 0x10) = 0;
    render_object[0x12] = 0;
    *(unsigned short *)((long long)render_object + 0x4e) = 0;
    *(unsigned long long *)(render_object + 0x14) = 0;
    *(unsigned long long *)(render_object + 0x16) = 0;
    *(unsigned long long *)(render_object + 0x18) = 0;
    *(unsigned char *)(render_object + 0x1a) = 1;
    render_object[0x1b] = 0;
    return;
}

/**
 * 处理渲染数据的高级操作
 * 执行渲染数据的高级处理和优化
 */
void process_advanced_rendering_data(long long render_data)
{
    unsigned long long *data_pointer;
    unsigned short texture_index;
    unsigned long long texture_data;
    long long resource_handle;
    unsigned long long *data_source;
    unsigned short *index_pointer;
    float *float_pointer;
    int data_count;
    unsigned long long loop_counter;
    long long system_data;
    unsigned int max_index;
    unsigned long long texture_size;
    unsigned long long texture_data_size;
    int item_count;
    float scale_factor;
    unsigned int default_value;
    
    system_data = RENDERING_SYSTEM_DATA_2;
    texture_data_size = 0;
    max_index = 0;
    if (*(unsigned int *)(render_data + 0x10) != 0) {
        index_pointer = *(unsigned short **)(render_data + 0x18);
        texture_size = (unsigned long long)*(unsigned int *)(render_data + 0x10);
        texture_data = texture_data_size;
        do {
            texture_index = *index_pointer;
            index_pointer = index_pointer + 0x14;
            max_index = (unsigned int)texture_index;
            if ((unsigned int)texture_index <= (unsigned int)texture_data) {
                max_index = (unsigned int)texture_data;
            }
            texture_data = (unsigned long long)max_index;
            texture_size = texture_size - 1;
        } while (texture_size != 0);
    }
    resource_handle = *(long long *)(render_data + 0x28);
    if (resource_handle == 0) {
        resource_handle = *(long long *)(render_data + 0x38);
        if (resource_handle == 0) {
            *(unsigned char *)(render_data + 0x68) = 0;
            resize_rendering_buffers(render_data, max_index + 1);
            data_count = *(int *)(render_data + 0x10);
            texture_data = texture_data_size;
            if (0 < data_count) {
                do {
                    item_count = (int)texture_data;
                    texture_size = (unsigned long long)*(unsigned short *)(*(long long *)(render_data + 0x18) + (long long)item_count * 0x28);
                    *(unsigned int *)(*(long long *)(render_data + 0x28) + texture_size * 4) =
                         *(unsigned int *)(*(long long *)(render_data + 0x18) + 4 + (long long)item_count * 0x28);
                    *(short *)(*(long long *)(render_data + 0x38) + texture_size * 2) = (short)texture_data;
                    texture_data = (unsigned long long)(item_count + 1U);
                    data_count = *(int *)(render_data + 0x10);
                } while ((int)(item_count + 1U) < data_count);
            }
            item_count = *(int *)(render_data + 0x30);
            if (item_count < 0x21) {
                system_data = *(long long *)(render_data + 0x40);
            }
            else {
                texture_index = *(unsigned short *)(*(long long *)(render_data + 0x38) + 0x40);
                if (texture_index == 0xffff) {
                    system_data = *(long long *)(render_data + 0x40);
                }
                else {
                    system_data = *(long long *)(render_data + 0x18) + (unsigned long long)texture_index * 0x28;
                }
            }
            if (system_data != 0) {
                if (*(short *)(*(long long *)(render_data + 0x18) + -0x28 + (long long)data_count * 0x28) != 9) {
                    expand_rendering_data_array(render_data + 0x10, data_count + 1);
                    item_count = *(int *)(render_data + 0x30);
                }
                resource_handle = (long long)*(int *)(render_data + 0x10);
                system_data = *(long long *)(render_data + 0x18);
                if (item_count < 0x21) {
                    data_source = *(unsigned long long **)(render_data + 0x40);
                }
                else {
                    texture_index = *(unsigned short *)(*(long long *)(render_data + 0x38) + 0x40);
                    if (texture_index == 0xffff) {
                        data_source = *(unsigned long long **)(render_data + 0x40);
                    }
                    else {
                        data_source = (unsigned long long *)(system_data + (unsigned long long)texture_index * 0x28);
                    }
                }
                texture_data = data_source[1];
                data_pointer = (unsigned long long *)(system_data + -0x28 + resource_handle * 0x28);
                *data_pointer = *data_source;
                data_pointer[1] = texture_data;
                texture_data = data_source[3];
                data_pointer = (unsigned long long *)(system_data + -0x18 + resource_handle * 0x28);
                *data_pointer = data_source[2];
                data_pointer[1] = texture_data;
                *(unsigned long long *)(system_data + -8 + resource_handle * 0x28) = data_source[4];
                scale_factor = *(float *)(system_data + -0x24 + resource_handle * 0x28) * 4.0;
                *(unsigned short *)(system_data + -0x28 + resource_handle * 0x28) = 9;
                *(float *)(system_data + -0x24 + resource_handle * 0x28) = scale_factor;
                *(float *)(*(long long *)(render_data + 0x28) + 0x24) = scale_factor;
                *(short *)(*(long long *)(render_data + 0x38) +
                          (unsigned long long)*(unsigned short *)(system_data + -0x28 + resource_handle * 0x28) * 2) =
                     *(short *)(render_data + 0x10) + -1;
                item_count = *(int *)(render_data + 0x30);
            }
            texture_data = texture_data_size;
            if (((int)(unsigned int)*(unsigned short *)(render_data + 0x4c) < item_count) &&
               (texture_index = *(unsigned short *)
                         (*(long long *)(render_data + 0x38) + (unsigned long long)*(unsigned short *)(render_data + 0x4c) * 2),
               texture_index != 0xffff)) {
                texture_data = *(long long *)(render_data + 0x18) + (unsigned long long)texture_index * 0x28;
            }
            *(unsigned long long *)(render_data + 0x40) = texture_data;
            if (texture_data == 0) {
                default_value = 0;
            }
            else {
                default_value = *(unsigned int *)(texture_data + 4);
            }
            texture_data = (unsigned long long)(int)(max_index + 1);
            *(unsigned int *)(render_data + 0x48) = default_value;
            if (3 < texture_data) {
                float_pointer = (float *)(*(long long *)(render_data + 0x28) + 8);
                system_data = (texture_data - 4 >> 2) + 1;
                texture_data_size = system_data * 4;
                do {
                    if (float_pointer[-2] <= 0.0 && float_pointer[-2] != 0.0) {
                        float_pointer[-2] = *(float *)(render_data + 0x48);
                    }
                    if (float_pointer[-1] <= 0.0 && float_pointer[-1] != 0.0) {
                        float_pointer[-1] = *(float *)(render_data + 0x48);
                    }
                    if (*float_pointer <= 0.0 && *float_pointer != 0.0) {
                        *float_pointer = *(float *)(render_data + 0x48);
                    }
                    if (float_pointer[1] <= 0.0 && float_pointer[1] != 0.0) {
                        float_pointer[1] = *(float *)(render_data + 0x48);
                    }
                    float_pointer = float_pointer + 4;
                    system_data = system_data + -1;
                } while (system_data != 0);
            }
            if ((long long)texture_data_size < (long long)texture_data) {
                system_data = *(long long *)(render_data + 0x28);
                do {
                    float_pointer = (float *)(system_data + texture_data_size * 4);
                    if (*float_pointer <= 0.0 && *float_pointer != 0.0) {
                        *(unsigned int *)(system_data + texture_data_size * 4) = *(unsigned int *)(render_data + 0x48);
                    }
                    texture_data_size = texture_data_size + 1;
                } while ((long long)texture_data_size < (long long)texture_data);
            }
            return;
        }
        *(unsigned long long *)(render_data + 0x30) = 0;
        if (system_data != 0) {
            *(int *)(system_data + 0x3a8) = *(int *)(system_data + 0x3a8) + -1;
        }
        // 警告：子函数不返回
        release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1);
    }
    *(unsigned long long *)(render_data + 0x20) = 0;
    if (system_data != 0) {
        *(int *)(system_data + 0x3a8) = *(int *)(system_data + 0x3a8) + -1;
    }
    // 警告：子函数不返回
    release_rendering_resource(resource_handle, RENDERING_SYSTEM_DATA_1);
}

/**
 * 调整渲染缓冲区大小
 * 根据需要调整渲染缓冲区的大小
 */
void resize_rendering_buffers(long long render_data, int new_size)
{
    int *buffer_size_ptr;
    int *buffer_capacity_ptr;
    int current_capacity;
    long long buffer_base;
    int buffer_index;
    int new_capacity;
    
    buffer_size_ptr = (int *)(render_data + 0x30);
    if (*buffer_size_ptr < new_size) {
        new_capacity = 8;
        buffer_capacity_ptr = (int *)(render_data + 0x20);
        current_capacity = *(int *)(render_data + 0x24);
        if (current_capacity < new_size) {
            if (current_capacity == 0) {
                current_capacity = 8;
            }
            else {
                current_capacity = current_capacity / 2 + current_capacity;
            }
            buffer_index = new_size;
            if (new_size < current_capacity) {
                buffer_index = current_capacity;
            }
            resize_rendering_buffer(buffer_capacity_ptr, buffer_index);
        }
        buffer_base = (long long)*buffer_capacity_ptr;
        if (*buffer_capacity_ptr < new_size) {
            for (; buffer_base < new_size; buffer_base = buffer_base + 1) {
                *(unsigned int *)(*(long long *)(render_data + 0x28) + buffer_base * 4) = 0xbf800000;
            }
        }
        *buffer_capacity_ptr = new_size;
        current_capacity = *(int *)(render_data + 0x34);
        if (current_capacity < new_size) {
            if (current_capacity != 0) {
                new_capacity = current_capacity + current_capacity / 2;
            }
            current_capacity = new_size;
            if (new_size < new_capacity) {
                current_capacity = new_capacity;
            }
            resize_rendering_index_buffer(buffer_size_ptr, current_capacity);
        }
        buffer_base = (long long)*buffer_size_ptr;
        if (*buffer_size_ptr < new_size) {
            for (; buffer_base < new_size; buffer_base = buffer_base + 1) {
                *(unsigned short *)(*(long long *)(render_data + 0x38) + buffer_base * 2) = 0xffff;
            }
        }
        *buffer_size_ptr = new_size;
    }
    return;
}

/**
 * 调整渲染缓冲区大小（浮点数版本）
 * 调整渲染缓冲区的大小并初始化浮点数值
 */
void resize_rendering_buffers_float(long long render_data)
{
    int *buffer_size_ptr;
    int current_capacity;
    unsigned int new_capacity;
    long long buffer_base;
    unsigned long long buffer_size;
    int buffer_index;
    unsigned long long unaff_rbx;
    unsigned int new_size;
    int *unaff_rdi;
    unsigned int init_value;
    unsigned int stack_temp;
    
    new_size = 8;
    buffer_size_ptr = (int *)(render_data + 0x20);
    current_capacity = *(int *)(render_data + 0x24);
    buffer_index = (int)unaff_rbx;
    stack_temp = init_value;
    if (current_capacity < buffer_index) {
        if (current_capacity == 0) {
            new_capacity = 8;
        }
        else {
            new_capacity = current_capacity / 2 + current_capacity;
        }
        buffer_size = unaff_rbx & 0xffffffff;
        if (buffer_index < (int)new_capacity) {
            buffer_size = (unsigned long long)new_capacity;
        }
        init_value = resize_rendering_buffer(buffer_size_ptr, buffer_size);
    }
    buffer_base = (long long)*buffer_size_ptr;
    if (*buffer_size_ptr < buffer_index) {
        for (; buffer_base < (long long)unaff_rbx; buffer_base = buffer_base + 1) {
            *(unsigned int *)(*(long long *)(render_data + 0x28) + buffer_base * 4) = stack_temp;
        }
    }
    *buffer_size_ptr = buffer_index;
    current_capacity = unaff_rdi[1];
    if (current_capacity < buffer_index) {
        if (current_capacity != 0) {
            new_size = current_capacity + current_capacity / 2;
        }
        buffer_size = unaff_rbx & 0xffffffff;
        if (buffer_index < (int)new_size) {
            buffer_size = (unsigned long long)new_size;
        }
        resize_rendering_index_buffer(init_value, buffer_size);
    }
    buffer_base = (long long)*unaff_rdi;
    if (*unaff_rdi < buffer_index) {
        for (; buffer_base < (long long)unaff_rbx; buffer_base = buffer_base + 1) {
            *(unsigned short *)(*(long long *)(unaff_rdi + 2) + buffer_base * 2) = 0xffff;
        }
    }
    *unaff_rdi = buffer_index;
    return;
}

/**
 * 调整渲染缓冲区大小（参数化版本）
 * 使用指定参数调整渲染缓冲区大小
 */
void resize_rendering_buffers_parametric(unsigned int init_value)
{
    int *buffer_size_ptr;
    int current_capacity;
    unsigned int new_capacity;
    long long buffer_base;
    long long render_context;
    unsigned long long buffer_size;
    int buffer_index;
    unsigned long long unaff_rbx;
    unsigned int unaff_ebp;
    int *unaff_rdi;
    unsigned int stack_temp;
    
    buffer_size_ptr = (int *)(render_context + 0x20);
    current_capacity = *(int *)(render_context + 0x24);
    buffer_index = (int)unaff_rbx;
    stack_temp = init_value;
    if (current_capacity < buffer_index) {
        new_capacity = unaff_ebp;
        if (current_capacity != 0) {
            new_capacity = current_capacity / 2 + current_capacity;
        }
        buffer_size = unaff_rbx & 0xffffffff;
        if (buffer_index < (int)new_capacity) {
            buffer_size = (unsigned long long)new_capacity;
        }
        init_value = resize_rendering_buffer(buffer_size_ptr, buffer_size);
    }
    buffer_base = (long long)*buffer_size_ptr;
    if (*buffer_size_ptr < buffer_index) {
        for (; buffer_base < (long long)unaff_rbx; buffer_base = buffer_base + 1) {
            *(unsigned int *)(*(long long *)(render_context + 0x28) + buffer_base * 4) = stack_temp;
        }
    }
    *buffer_size_ptr = buffer_index;
    current_capacity = unaff_rdi[1];
    if (current_capacity < buffer_index) {
        if (current_capacity != 0) {
            unaff_ebp = current_capacity + current_capacity / 2;
        }
        buffer_size = unaff_rbx & 0xffffffff;
        if (buffer_index < (int)unaff_ebp) {
            buffer_size = (unsigned long long)unaff_ebp;
        }
        resize_rendering_index_buffer(init_value, buffer_size);
    }
    buffer_base = (long long)*unaff_rdi;
    if (*unaff_rdi < buffer_index) {
        for (; buffer_base < (long long)unaff_rbx; buffer_base = buffer_base + 1) {
            *(unsigned short *)(*(long long *)(unaff_rdi + 2) + buffer_base * 2) = 0xffff;
        }
    }
    *unaff_rdi = buffer_index;
    return;
}

/**
 * 调整渲染索引缓冲区大小
 * 调整渲染索引缓冲区的大小
 */
void resize_rendering_index_buffer(void)
{
    long long buffer_base;
    long long unaff_rbx;
    int *unaff_rdi;
    
    resize_rendering_index_buffer_internal();
    buffer_base = (long long)*unaff_rdi;
    if (*unaff_rdi < (int)unaff_rbx) {
        for (; buffer_base < unaff_rbx; buffer_base = buffer_base + 1) {
            *(unsigned short *)(*(long long *)(unaff_rdi + 2) + buffer_base * 2) = 0xffff;
        }
    }
    *unaff_rdi = (int)unaff_rbx;
    return;
}

/**
 * 调整渲染索引缓冲区大小（循环版本）
 * 使用循环方式调整渲染索引缓冲区大小
 */
void resize_rendering_index_buffer_loop(void)
{
    long long buffer_index;
    long long unaff_rbx;
    unsigned int *unaff_rdi;
    
    if (buffer_index < unaff_rbx) {
        do {
            *(unsigned short *)(*(long long *)(unaff_rdi + 2) + buffer_index * 2) = 0xffff;
            buffer_index = buffer_index + 1;
        } while (buffer_index < unaff_rbx);
    }
    *unaff_rdi = (int)unaff_rbx;
    return;
}

/**
 * 空函数（保留）
 * 保留的空函数，可能用于未来扩展
 */
void rendering_reserved_function_1(void)
{
    return;
}

/**
 * 添加渲染项到渲染队列
 * 将新的渲染项添加到渲染队列中
 */
void add_rendering_item_to_queue(long long render_queue, unsigned short item_type, unsigned int param_3, unsigned int param_4,
                                 unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned int param_8,
                                 unsigned int param_9, unsigned int param_10, float param_11)
{
    long long queue_size;
    long long queue_base;
    
    expand_rendering_data_array(render_queue + 0x10, *(int *)(render_queue + 0x10) + 1);
    queue_size = (long long)*(int *)(render_queue + 0x10);
    queue_base = *(long long *)(render_queue + 0x18);
    *(unsigned int *)(queue_base + -0x18 + queue_size * 0x28) = param_5;
    *(unsigned int *)(queue_base + -0x14 + queue_size * 0x28) = param_6;
    *(unsigned int *)(queue_base + -0x10 + queue_size * 0x28) = param_7;
    *(unsigned int *)(queue_base + -0xc + queue_size * 0x28) = param_8;
    *(unsigned int *)(queue_base + -8 + queue_size * 0x28) = param_9;
    *(unsigned int *)(queue_base + -4 + queue_size * 0x28) = param_10;
    *(unsigned int *)(queue_base + -0x20 + queue_size * 0x28) = param_3;
    *(unsigned int *)(queue_base + -0x1c + queue_size * 0x28) = param_4;
    *(unsigned short *)(queue_base + -0x28 + queue_size * 0x28) = item_type;
    param_11 = param_11 + *(float *)(*(long long *)(render_queue + 0x50) + 0x24);
    *(float *)(queue_base + -0x24 + queue_size * 0x28) = param_11;
    if (*(char *)(*(long long *)(render_queue + 0x50) + 0x20) != '\0') {
        *(float *)(queue_base + -0x24 + queue_size * 0x28) = (float)(int)(param_11 + 0.5);
    }
    *(unsigned char *)(render_queue + 0x68) = 1;
    *(int *)(render_queue + 0x6c) =
         *(int *)(render_queue + 0x6c) +
         (int)((float)*(int *)(*(long long *)(render_queue + 0x58) + 0x28) *
               (*(float *)(queue_base + -8 + queue_size * 0x28) - *(float *)(queue_base + -0x10 + queue_size * 0x28)) +
              1.99) *
         (int)((*(float *)(queue_base + -4 + queue_size * 0x28) - *(float *)(queue_base + -0xc + queue_size * 0x28)) *
               (float)*(int *)(*(long long *)(render_queue + 0x58) + 0x2c) + 1.99);
    return;
}

/**
 * 处理渲染字符映射
 * 处理渲染字符到纹理坐标的映射
 */
char *process_rendering_character_mapping(long long mapping_data, float scale_factor, char *start_pos, char *end_pos, float threshold)
{
    bool is_first_segment;
    int char_width;
    long long char_handle;
    char *current_pos;
    char *segment_start;
    char *segment_end;
    float char_width_float;
    float segment_width;
    float total_width;
    float accumulated_width;
    
    segment_end = (char *)0x0;
    accumulated_width = 0.0;
    total_width = 0.0;
    segment_width = 0.0;
    is_first_segment = true;
    scale_factor = threshold / scale_factor;
    segment_start = start_pos;
    current_pos = start_pos;
    if (start_pos < end_pos) {
        do {
            threshold = (float)(int)*current_pos;
            if ((unsigned int)threshold < 0x80) {
                char_handle = 1;
            }
            else {
                char_width = get_character_width(&threshold, current_pos, end_pos);
                char_handle = (long long)char_width;
            }
            start_pos = current_pos + char_handle;
            if (threshold == 0.0) {
                return current_pos;
            }
            segment_start = segment_start;
            if ((unsigned int)threshold < 0x20) {
                if (threshold == 1.4013e-44) {
                    segment_width = 0.0;
                    total_width = 0.0;
                    accumulated_width = 0.0;
                    is_first_segment = true;
                }
                else if (threshold != 1.82169e-44) goto PROCESS_CHARACTER;
            }
            else {
PROCESS_CHARACTER:
                if ((int)threshold < *(int *)(mapping_data + 0x20)) {
                    char_width_float = *(float *)(*(long long *)(mapping_data + 0x28) + (unsigned long long)(unsigned int)threshold * 4);
                }
                else {
                    char_width_float = *(float *)(mapping_data + 0x48);
                }
                if (((threshold == 4.48416e-44) || (threshold == 1.26117e-44)) || (threshold == 1.72192e-41)) {
                    if (is_first_segment) {
                        accumulated_width = accumulated_width + segment_width;
                        segment_width = 0.0;
                    }
                    segment_width = segment_width + char_width_float;
                    segment_start = current_pos;
                    if (!is_first_segment) {
                        segment_start = segment_start;
                    }
UPDATE_SEGMENT_STATE:
                    is_first_segment = false;
                }
                else {
                    total_width = total_width + char_width_float;
                    segment_start = start_pos;
                    if (!is_first_segment) {
                        segment_width = segment_width + total_width;
                        total_width = 0.0;
                        accumulated_width = accumulated_width + segment_width;
                        segment_width = 0.0;
                        segment_start = segment_start;
                        segment_end = segment_start;
                    }
                    if (((unsigned int)threshold < 0x40) &&
                       ((0x8800500600000000U >> ((unsigned long long)(unsigned int)threshold & 0x3f) & 1) != 0))
                    goto UPDATE_SEGMENT_STATE;
                    is_first_segment = true;
                }
                if (scale_factor <= total_width + accumulated_width) {
                    if (scale_factor <= total_width) {
                        return current_pos;
                    }
                    if (segment_end == (char *)0x0) {
                        return segment_start;
                    }
                    return segment_end;
                }
            }
            segment_start = segment_start;
            current_pos = start_pos;
        } while (start_pos < end_pos);
    }
    return start_pos;
}

/**
 * 处理渲染字符映射（高级版本）
 * 处理渲染字符到纹理坐标的高级映射
 */
char *process_advanced_rendering_character_mapping(unsigned long long param_1, unsigned long long param_2, float param_3, float param_4)
{
    char *char_pos;
    int char_width;
    long long char_handle;
    char *next_pos;
    char *segment_start;
    char unaff_bl;
    char *unaff_rbp;
    char *unaff_rsi;
    char *unaff_rdi;
    long long unaff_r14;
    char *unaff_r15;
    float char_width_float;
    float accumulated_width;
    float total_width;
    float segment_width;
    unsigned int char_code;
    unsigned int stack_temp;
    
    do {
        stack_temp = (unsigned int)*unaff_rdi;
        if (stack_temp < 0x80) {
            char_handle = 1;
        }
        else {
            char_width = get_character_width(&stack_temp, unaff_rdi);
            char_handle = (long long)char_width;
        }
        char_pos = unaff_rdi + char_handle;
        if (stack_temp == 0) {
            return unaff_rdi;
        }
        next_pos = unaff_rsi;
        if (stack_temp < 0x20) {
            if (stack_temp == 10) {
                param_3 = 0.0;
                param_4 = 0.0;
                accumulated_width = 0.0;
                unaff_bl = '\x01';
            }
            else if (stack_temp != 0xd) goto PROCESS_CHARACTER_ADVANCED;
        }
        else {
PROCESS_CHARACTER_ADVANCED:
            if ((int)stack_temp < *(int *)(unaff_r14 + 0x20)) {
                char_width_float = *(float *)(*(long long *)(unaff_r14 + 0x28) + (unsigned long long)stack_temp * 4);
            }
            else {
                char_width_float = *(float *)(unaff_r14 + 0x48);
            }
            if (((stack_temp == 0x20) || (stack_temp == 9)) ||
               (stack_temp == 0x3000)) {
                if (unaff_bl != '\0') {
                    accumulated_width = accumulated_width + param_3;
                    param_3 = 0.0;
                }
                param_3 = param_3 + char_width_float;
                next_pos = unaff_rdi;
                if (unaff_bl == '\0') {
                    next_pos = unaff_rsi;
                }
UPDATE_SEGMENT_STATE_ADVANCED:
                unaff_bl = '\0';
            }
            else {
                param_4 = param_4 + char_width_float;
                next_pos = char_pos;
                if (unaff_bl == '\0') {
                    param_3 = param_3 + param_4;
                    param_4 = 0.0;
                    accumulated_width = accumulated_width + param_3;
                    param_3 = 0.0;
                    next_pos = unaff_rsi;
                    unaff_rbp = unaff_rsi;
                }
                if ((stack_temp < 0x40) &&
                   ((0x8800500600000000U >> ((unsigned long long)stack_temp & 0x3f) & 1) != 0))
                goto UPDATE_SEGMENT_STATE_ADVANCED;
                unaff_bl = '\x01';
            }
            if (total_width <= param_4 + accumulated_width) {
                if (total_width <= param_4) {
                    return unaff_rdi;
                }
                if (unaff_rbp == (char *)0x0) {
                    return next_pos;
                }
                return unaff_rbp;
            }
        }
        unaff_rsi = next_pos;
        unaff_rdi = char_pos;
        if (unaff_r15 <= char_pos) {
            return char_pos;
        }
    } while( true );
}

/**
 * 空函数（保留2）
 * 保留的空函数，可能用于未来扩展
 */
void rendering_reserved_function_2(void)
{
    return;
}