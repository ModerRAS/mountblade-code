#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part053.c - 2 个函数

// 函数: void FUN_180079270(int64_t param_1,int64_t param_2)
// 功能: 处理游戏对象的初始化和矩阵变换
// 参数: param_1 - 游戏对象指针, param_2 - 参数数据指针
void FUN_180079270(int64_t param_1,int64_t param_2)
{
    int64_t *game_object_ptr;
    int *counter_ptr;
    int64_t *temp_ptr1;
    byte *byte_ptr;
    uint64_t *data_ptr;
    float matrix_row1_x, matrix_row1_y, matrix_row1_z;
    float matrix_row2_x, matrix_row2_y, matrix_row2_z;
    float matrix_row3_x, matrix_row3_y, matrix_row3_z;
    float result_matrix[12];
    int8_t flag_byte;
    char index_char;
    int64_t temp_long;
    float *transform_matrix;
    float temp_float1, temp_float2, temp_float3, temp_float4;
    float temp_float5, temp_float6, temp_float7, temp_float8;
    float temp_float9, temp_float10, temp_float11, temp_float12;
    uint64_t temp_uint64_t;
    int32_t temp_int32_t;
    int64_t offset_value;
    int64_t *array_ptr;
    int64_t loop_counter;
    uint chunk_index;
    int temp_int1;
    uint temp_uint1;
    int temp_int2;
    uint64_t temp_ulong1;
    char *char_ptr;
    uint *uint_ptr;
    int item_count;
    int array_size;
    int loop_index;
    int32_t *data_array;
    uint *chunk_ptr;
    uint64_t chunk_start;
    uint64_t chunk_end;
    bool is_allocated;
    
    // 获取全局数据地址
    temp_long = system_parameter_buffer;
    offset_value = param_1;
    
    // 检查对象标志位
    if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
        offset_value = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
    }
    
    // 更新全局计数器
    LOCK();
    counter_ptr = (int *)(temp_long + 0xed8);
    item_count = *counter_ptr;
    *counter_ptr = *counter_ptr + *(int *)(offset_value + 0x200);
    UNLOCK();
    
    // 获取游戏对象数据
    temp_long = *(int64_t *)(param_1 + 600);
    flag_byte = *(int8_t *)(param_2 + 0x24);
    temp_int32_t = *(int32_t *)(param_2 + 0x20);
    index_char = *(char *)(param_2 + 0xd);
    
    // 保存当前状态
    *(int32_t *)(temp_long + 0x48) = *(int32_t *)(temp_long + 0x2c);
    *(int32_t *)(temp_long + 0x50) = *(int32_t *)(temp_long + 0x4c);
    *(int *)(temp_long + 0x4c) = item_count;
    *(int8_t *)(temp_long + 0x44) = flag_byte;
    *(int32_t *)(temp_long + 0x2c) = temp_int32_t;
    
    // 处理矩阵变换
    if (index_char != -1) {
        temp_uint1 = (int)*(char *)(param_2 + 0xd) + *(int *)(param_2 + 0x18);
        transform_matrix = (float *)**(int64_t **)(param_1 + 600);
        chunk_index = temp_uint1 >> 0xd;
        
        // 计算矩阵数据地址
        temp_long = *(int64_t *)
                   ((int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc30 +
                   (uint64_t)chunk_index * 8);
        offset_value = (uint64_t)(temp_uint1 + chunk_index * -0x2000) * 0x40;
        
        // 加载矩阵数据
        temp_uint64_t = ((uint64_t *)(temp_long + offset_value))[1];
        *(uint64_t *)transform_matrix = *(uint64_t *)(temp_long + offset_value);
        *(uint64_t *)(transform_matrix + 2) = temp_uint64_t;
        
        // 加载第二行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x10 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 4) = *data_ptr;
        *(uint64_t *)(transform_matrix + 6) = temp_uint64_t;
        
        // 加载第三行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x20 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 8) = *data_ptr;
        *(uint64_t *)(transform_matrix + 10) = temp_uint64_t;
        
        // 加载第四行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x30 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 0xc) = *data_ptr;
        *(uint64_t *)(transform_matrix + 0xe) = temp_uint64_t;
        
        // 获取变换矩阵数据
        temp_long = *(int64_t *)(param_2 + 0x10);
        temp_float1 = transform_matrix[8];
        temp_float2 = transform_matrix[9];
        temp_float3 = transform_matrix[10];
        temp_float4 = transform_matrix[0xb];
        temp_float5 = *transform_matrix;
        temp_float6 = transform_matrix[1];
        temp_float7 = transform_matrix[2];
        temp_float8 = transform_matrix[3];
        temp_float9 = transform_matrix[4];
        temp_float10 = transform_matrix[5];
        temp_float11 = transform_matrix[6];
        temp_float12 = transform_matrix[7];
        
        // 获取变换参数
        matrix_row1_x = *(float *)(temp_long + 0x374);
        matrix_row1_y = *(float *)(temp_long + 0x370);
        matrix_row1_z = *(float *)(temp_long + 0x378);
        matrix_row2_x = *(float *)(temp_long + 900);
        matrix_row2_y = *(float *)(temp_long + 0x394);
        matrix_row2_z = *(float *)(temp_long + 0x380);
        matrix_row3_x = *(float *)(temp_long + 0x388);
        matrix_row3_y = *(float *)(temp_long + 0x390);
        matrix_row3_z = *(float *)(temp_long + 0x398);
        
        // 执行矩阵变换计算
        *transform_matrix = matrix_row1_x * temp_float9 + matrix_row1_y * temp_float5 + matrix_row1_z * temp_float1;
        transform_matrix[1] = matrix_row1_x * temp_float10 + matrix_row1_y * temp_float6 + matrix_row1_z * temp_float2;
        transform_matrix[2] = matrix_row1_x * temp_float11 + matrix_row1_y * temp_float7 + matrix_row1_z * temp_float3;
        transform_matrix[3] = matrix_row1_x * temp_float12 + matrix_row1_y * temp_float8 + matrix_row1_z * temp_float4;
        transform_matrix[4] = matrix_row2_x * temp_float9 + matrix_row2_z * temp_float5 + matrix_row3_x * temp_float1;
        transform_matrix[5] = matrix_row2_x * temp_float10 + matrix_row2_z * temp_float6 + matrix_row3_x * temp_float2;
        transform_matrix[6] = matrix_row2_x * temp_float11 + matrix_row2_z * temp_float7 + matrix_row3_x * temp_float3;
        transform_matrix[7] = matrix_row2_x * temp_float12 + matrix_row2_z * temp_float8 + matrix_row3_x * temp_float4;
        transform_matrix[8] = matrix_row2_y * temp_float9 + matrix_row3_y * temp_float5 + matrix_row3_z * temp_float1;
        transform_matrix[9] = matrix_row2_y * temp_float10 + matrix_row3_y * temp_float6 + matrix_row3_z * temp_float2;
        transform_matrix[10] = matrix_row2_y * temp_float11 + matrix_row3_y * temp_float7 + matrix_row3_z * temp_float3;
        transform_matrix[0xb] = matrix_row2_y * temp_float12 + matrix_row3_y * temp_float8 + matrix_row3_z * temp_float4;
    }
    
    // 检查是否需要更新
    temp_long = *(int64_t *)(param_1 + 600);
    if (*(int *)(temp_long + 0x28) != *(int *)(system_main_module_state + 0x224)) {
        item_count = *(int *)(temp_long + 0x1c) + *(int *)(temp_long + 0x18);
        *(int *)(temp_long + 0x28) = *(int *)(system_main_module_state + 0x224);
        
        if (0 < item_count) {
            // 分配内存
            offset_value = (int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
            temp_int32_t = FUN_180080380(offset_value, item_count);
            *(int32_t *)(temp_long + 0x30) = temp_int32_t;
            FUN_1800802e0(offset_value, temp_int32_t);
            
            // 检查数据指针
            if (*(int64_t *)(temp_long + 0x10) == 0) {
                if (*(int *)(temp_long + 0x18) != 0) {
                    *(int32_t *)(temp_long + 0x2c) = *(int32_t *)(temp_long + 0x30);
                    return;
                }
            }
            else {
                // 处理数组分配
                index_char = *(char *)(temp_long + 0x44);
                temp_ulong1 = (uint64_t)index_char;
                game_object_ptr = (int64_t *)(temp_long + 0x38);
                item_count = (int)index_char;
                
                if (*(int *)(temp_long + 0x40) == (int)index_char) {
                    array_ptr = (int64_t *)*game_object_ptr;
                }
                else {
                    *(int *)(temp_long + 0x40) = item_count;
                    if (*game_object_ptr != 0) {
                        // 释放旧内存
                        CoreEngineMemoryPoolCleaner();
                    }
                    *game_object_ptr = 0;
                    
                    if (index_char == '\0') {
                        array_ptr = (int64_t *)0x0;
                        *game_object_ptr = 0;
                    }
                    else {
                        // 分配新内存
                        array_ptr = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, (int64_t)index_char * 4);
                        *game_object_ptr = (int64_t)array_ptr;
                    }
                }
                
                // 初始化数组数据
                if (array_ptr != (int64_t *)0x0) {
                    array_size = 0;
                    chunk_index = (uint)index_char;
                    loop_index = array_size;
                    
                    if ((0 < item_count) && (0xf < chunk_index)) {
                        temp_int2 = *(int *)(temp_long + 0x2c);
                        temp_ptr1 = (int64_t *)((int64_t)array_ptr + (int64_t)(index_char + -1) * 4);
                        
                        if ((((int64_t *)(temp_long + 0x2c) < array_ptr) || (temp_ptr1 < (int64_t *)(temp_long + 0x2c))) &&
                           ((game_object_ptr < array_ptr || (loop_index = 0, temp_ptr1 < game_object_ptr)))) {
                            
                            temp_uint1 = chunk_index & 0x8000000f;
                            if ((int)temp_uint1 < 0) {
                                temp_uint1 = (temp_uint1 - 1 | 0xfffffff0) + 1;
                            }
                            
                            array_ptr = array_ptr + 4;
                            temp_int1 = 8;
                            
                            // 批量初始化数组
                            do {
                                *(int *)(array_ptr + -4) = array_size + temp_int2;
                                *(int *)((int64_t)array_ptr + -0x1c) = array_size + 1 + temp_int2;
                                *(int *)(array_ptr + -3) = array_size + 2 + temp_int2;
                                *(int *)((int64_t)array_ptr + -0x14) = array_size + 3 + temp_int2;
                                array_size = array_size + 0x10;
                                *(int *)(array_ptr + -2) = temp_int1 + -4 + temp_int2;
                                *(int *)((int64_t)array_ptr + -0xc) = temp_int1 + -3 + temp_int2;
                                *(int *)(array_ptr + -1) = temp_int1 + -2 + temp_int2;
                                *(int *)((int64_t)array_ptr + -4) = temp_int1 + -1 + temp_int2;
                                *(int *)array_ptr = temp_int1 + temp_int2;
                                *(int *)((int64_t)array_ptr + 4) = temp_int1 + 1 + temp_int2;
                                *(int *)(array_ptr + 1) = temp_int1 + 2 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0xc) = temp_int1 + 3 + temp_int2;
                                *(int *)(array_ptr + 2) = temp_int1 + 4 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0x14) = temp_int1 + 5 + temp_int2;
                                *(int *)(array_ptr + 3) = temp_int1 + 6 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0x1c) = temp_int1 + 7 + temp_int2;
                                array_ptr = array_ptr + 8;
                                temp_int1 = temp_int1 + 0x10;
                                loop_index = array_size;
                            } while (array_size < (int)(chunk_index - temp_uint1));
                        }
                    }
                    
                    // 填充剩余数组元素
                    for (offset_value = (int64_t)loop_index; offset_value < (int64_t)temp_ulong1; offset_value = offset_value + 1) {
                        array_size = *(int *)(temp_long + 0x2c) + loop_index;
                        loop_index = loop_index + 1;
                        *(int *)(*game_object_ptr + offset_value * 4) = array_size;
                    }
                    
                    // 处理数据映射
                    loop_index = *(int *)(temp_long + 0x18);
                    array_size = 0;
                    if (0 < (int64_t)loop_index) {
                        offset_value = 0;
                        do {
                            temp_int2 = *(int *)(temp_long + 0x30) + array_size;
                            array_size = array_size + 1;
                            byte_ptr = (byte *)(*(int64_t *)(temp_long + 0x10) + offset_value);
                            offset_value = offset_value + 1;
                            *(int *)(*game_object_ptr + (uint64_t)*byte_ptr * 4) = temp_int2;
                        } while (offset_value < loop_index);
                    }
                }
                
                // 处理内存块分配
                uint_ptr = (uint *)((int64_t)*(int *)(system_parameter_buffer + 0xc20) * 0x128 + system_parameter_buffer + 0x9d0);
                
                if (item_count == 0) {
                    temp_uint1 = (int)index_char - 1;
                }
                else {
                    LOCK();
                    temp_uint1 = *uint_ptr;
                    *uint_ptr = *uint_ptr + (int)index_char;
                    UNLOCK();
                    
                    chunk_start = (uint64_t)(temp_uint1 >> 0xb);
                    chunk_end = (uint64_t)(index_char + -1 + temp_uint1 >> 0xb);
                    
                    if (chunk_start <= chunk_end) {
                        char_ptr = (char *)((int64_t)uint_ptr + chunk_start + 0x108);
                        offset_value = (chunk_end - chunk_start) + 1;
                        chunk_ptr = uint_ptr + chunk_start * 2 + 2;
                        
                        do {
                            loop_index = (int)chunk_start;
                            if (*(int64_t *)chunk_ptr == 0) {
                                loop_counter = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x2000, 0x25);
                                LOCK();
                                is_allocated = *(int64_t *)(uint_ptr + (int64_t)loop_index * 2 + 2) == 0;
                                if (is_allocated) {
                                    *(int64_t *)(uint_ptr + (int64_t)loop_index * 2 + 2) = loop_counter;
                                }
                                UNLOCK();
                                
                                if (is_allocated) {
                                    LOCK();
                                    *(int8_t *)((int64_t)loop_index + 0x108 + (int64_t)uint_ptr) = 0;
                                    UNLOCK();
                                }
                                else {
                                    if (loop_counter != 0) {
                                        CoreEngineMemoryPoolCleaner();
                                    }
                                    do {
                                    } while (*char_ptr != '\0');
                                }
                            }
                            else {
                                do {
                                } while (*char_ptr != '\0');
                            }
                            chunk_start = (uint64_t)(loop_index + 1);
                            chunk_ptr = chunk_ptr + 2;
                            char_ptr = char_ptr + 1;
                            offset_value = offset_value + -1;
                        } while (offset_value != 0);
                    }
                }
                
                // 复制数据到内存块
                data_array = *(int32_t **)(temp_long + 0x38);
                temp_uint1 = temp_uint1 >> 0xb;
                *(uint *)(temp_long + 0x2c) = temp_uint1;
                
                if (temp_uint1 == (int)index_char + temp_uint1 >> 0xb) {
                    memcpy(*(int64_t *)(uint_ptr + (uint64_t)temp_uint1 * 2 + 2) +
                           (uint64_t)(temp_uint1 + temp_uint1 * -0x800) * 4, data_array, (temp_ulong1 & 0xffffffff) << 2);
                }
                
                if (item_count != 0) {
                    temp_ulong1 = temp_ulong1 & 0xffffffff;
                    do {
                        temp_int32_t = *data_array;
                        data_array = data_array + 1;
                        *(int32_t *)
                         (*(int64_t *)(uint_ptr + (uint64_t)(temp_uint1 >> 0xb) * 2 + 2) +
                         (uint64_t)(temp_uint1 + (temp_uint1 >> 0xb) * -0x800) * 4) = temp_int32_t;
                        temp_ulong1 = temp_ulong1 - 1;
                        temp_uint1 = temp_uint1 + 1;
                    } while (temp_ulong1 != 0);
                }
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180079284(int64_t param_1)
// 功能: 处理游戏对象的初始化和矩阵变换（第二个版本）
// 参数: param_1 - 游戏对象指针
void FUN_180079284(int64_t param_1)
{
    int64_t *game_object_ptr;
    int *counter_ptr;
    int64_t *temp_ptr1;
    byte *byte_ptr;
    uint64_t *data_ptr;
    float matrix_row1_x, matrix_row1_y, matrix_row1_z;
    float matrix_row2_x, matrix_row2_y, matrix_row2_z;
    float matrix_row3_x, matrix_row3_y, matrix_row3_z;
    float result_matrix[12];
    int8_t flag_byte;
    char index_char;
    int64_t temp_long;
    float *transform_matrix;
    float temp_float1, temp_float2, temp_float3, temp_float4;
    float temp_float5, temp_float6, temp_float7, temp_float8;
    float temp_float9, temp_float10, temp_float11, temp_float12;
    uint64_t temp_uint64_t;
    int32_t temp_int32_t;
    int64_t offset_value;
    int64_t *array_ptr;
    int64_t loop_counter;
    uint chunk_index;
    int temp_int1;
    uint temp_uint1;
    int temp_int2;
    uint64_t temp_ulong1;
    char *char_ptr;
    uint *uint_ptr;
    int item_count;
    int64_t unaff_RDI;
    int array_size;
    int loop_index;
    int32_t *data_array;
    uint *chunk_ptr;
    uint64_t chunk_start;
    uint64_t chunk_end;
    bool in_ZF;
    bool is_allocated;
    
    // 获取全局数据地址
    temp_long = system_parameter_buffer;
    offset_value = param_1;
    
    // 根据标志位决定是否使用偏移地址
    if (in_ZF) {
        offset_value = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
    }
    
    // 更新全局计数器
    LOCK();
    counter_ptr = (int *)(temp_long + 0xed8);
    item_count = *counter_ptr;
    *counter_ptr = *counter_ptr + *(int *)(offset_value + 0x200);
    UNLOCK();
    
    // 获取游戏对象数据
    temp_long = *(int64_t *)(param_1 + 600);
    flag_byte = *(int8_t *)(unaff_RDI + 0x24);
    temp_int32_t = *(int32_t *)(unaff_RDI + 0x20);
    index_char = *(char *)(unaff_RDI + 0xd);
    
    // 保存当前状态
    *(int32_t *)(temp_long + 0x48) = *(int32_t *)(temp_long + 0x2c);
    *(int32_t *)(temp_long + 0x50) = *(int32_t *)(temp_long + 0x4c);
    *(int *)(temp_long + 0x4c) = item_count;
    *(int8_t *)(temp_long + 0x44) = flag_byte;
    *(int32_t *)(temp_long + 0x2c) = temp_int32_t;
    
    // 处理矩阵变换
    if (index_char != -1) {
        temp_uint1 = (int)*(char *)(unaff_RDI + 0xd) + *(int *)(unaff_RDI + 0x18);
        transform_matrix = (float *)**(int64_t **)(param_1 + 600);
        chunk_index = temp_uint1 >> 0xd;
        
        // 计算矩阵数据地址
        temp_long = *(int64_t *)
                   ((int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc30 +
                   (uint64_t)chunk_index * 8);
        offset_value = (uint64_t)(temp_uint1 + chunk_index * -0x2000) * 0x40;
        
        // 加载矩阵数据
        temp_uint64_t = ((uint64_t *)(temp_long + offset_value))[1];
        *(uint64_t *)transform_matrix = *(uint64_t *)(temp_long + offset_value);
        *(uint64_t *)(transform_matrix + 2) = temp_uint64_t;
        
        // 加载第二行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x10 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 4) = *data_ptr;
        *(uint64_t *)(transform_matrix + 6) = temp_uint64_t;
        
        // 加载第三行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x20 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 8) = *data_ptr;
        *(uint64_t *)(transform_matrix + 10) = temp_uint64_t;
        
        // 加载第四行矩阵数据
        data_ptr = (uint64_t *)(temp_long + 0x30 + offset_value);
        temp_uint64_t = data_ptr[1];
        *(uint64_t *)(transform_matrix + 0xc) = *data_ptr;
        *(uint64_t *)(transform_matrix + 0xe) = temp_uint64_t;
        
        // 获取变换矩阵数据
        temp_long = *(int64_t *)(unaff_RDI + 0x10);
        temp_float1 = transform_matrix[8];
        temp_float2 = transform_matrix[9];
        temp_float3 = transform_matrix[10];
        temp_float4 = transform_matrix[0xb];
        temp_float5 = *transform_matrix;
        temp_float6 = transform_matrix[1];
        temp_float7 = transform_matrix[2];
        temp_float8 = transform_matrix[3];
        temp_float9 = transform_matrix[4];
        temp_float10 = transform_matrix[5];
        temp_float11 = transform_matrix[6];
        temp_float12 = transform_matrix[7];
        
        // 获取变换参数
        matrix_row1_x = *(float *)(temp_long + 0x374);
        matrix_row1_y = *(float *)(temp_long + 0x370);
        matrix_row1_z = *(float *)(temp_long + 0x378);
        matrix_row2_x = *(float *)(temp_long + 900);
        matrix_row2_y = *(float *)(temp_long + 0x394);
        matrix_row2_z = *(float *)(temp_long + 0x380);
        matrix_row3_x = *(float *)(temp_long + 0x388);
        matrix_row3_y = *(float *)(temp_long + 0x390);
        matrix_row3_z = *(float *)(temp_long + 0x398);
        
        // 执行矩阵变换计算
        *transform_matrix = matrix_row1_x * temp_float9 + matrix_row1_y * temp_float5 + matrix_row1_z * temp_float1;
        transform_matrix[1] = matrix_row1_x * temp_float10 + matrix_row1_y * temp_float6 + matrix_row1_z * temp_float2;
        transform_matrix[2] = matrix_row1_x * temp_float11 + matrix_row1_y * temp_float7 + matrix_row1_z * temp_float3;
        transform_matrix[3] = matrix_row1_x * temp_float12 + matrix_row1_y * temp_float8 + matrix_row1_z * temp_float4;
        transform_matrix[4] = matrix_row2_x * temp_float9 + matrix_row2_z * temp_float5 + matrix_row3_x * temp_float1;
        transform_matrix[5] = matrix_row2_x * temp_float10 + matrix_row2_z * temp_float6 + matrix_row3_x * temp_float2;
        transform_matrix[6] = matrix_row2_x * temp_float11 + matrix_row2_z * temp_float7 + matrix_row3_x * temp_float3;
        transform_matrix[7] = matrix_row2_x * temp_float12 + matrix_row2_z * temp_float8 + matrix_row3_x * temp_float4;
        transform_matrix[8] = matrix_row2_y * temp_float9 + matrix_row3_y * temp_float5 + matrix_row3_z * temp_float1;
        transform_matrix[9] = matrix_row2_y * temp_float10 + matrix_row3_y * temp_float6 + matrix_row3_z * temp_float2;
        transform_matrix[10] = matrix_row2_y * temp_float11 + matrix_row3_y * temp_float7 + matrix_row3_z * temp_float3;
        transform_matrix[0xb] = matrix_row2_y * temp_float12 + matrix_row3_y * temp_float8 + matrix_row3_z * temp_float4;
    }
    
    // 检查是否需要更新
    temp_long = *(int64_t *)(param_1 + 600);
    if (*(int *)(temp_long + 0x28) != *(int *)(system_main_module_state + 0x224)) {
        item_count = *(int *)(temp_long + 0x1c) + *(int *)(temp_long + 0x18);
        *(int *)(temp_long + 0x28) = *(int *)(system_main_module_state + 0x224);
        
        if (0 < item_count) {
            // 分配内存
            offset_value = (int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
            temp_int32_t = FUN_180080380(offset_value, item_count);
            *(int32_t *)(temp_long + 0x30) = temp_int32_t;
            FUN_1800802e0(offset_value, temp_int32_t);
            
            // 检查数据指针
            if (*(int64_t *)(temp_long + 0x10) == 0) {
                if (*(int *)(temp_long + 0x18) != 0) {
                    *(int32_t *)(temp_long + 0x2c) = *(int32_t *)(temp_long + 0x30);
                    return;
                }
            }
            else {
                // 处理数组分配
                index_char = *(char *)(temp_long + 0x44);
                temp_ulong1 = (uint64_t)index_char;
                game_object_ptr = (int64_t *)(temp_long + 0x38);
                item_count = (int)index_char;
                
                if (*(int *)(temp_long + 0x40) == (int)index_char) {
                    array_ptr = (int64_t *)*game_object_ptr;
                }
                else {
                    *(int *)(temp_long + 0x40) = item_count;
                    if (*game_object_ptr != 0) {
                        // 释放旧内存
                        CoreEngineMemoryPoolCleaner();
                    }
                    *game_object_ptr = 0;
                    
                    if (index_char == '\0') {
                        array_ptr = (int64_t *)0x0;
                        *game_object_ptr = 0;
                    }
                    else {
                        // 分配新内存
                        array_ptr = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, (int64_t)index_char * 4);
                        *game_object_ptr = (int64_t)array_ptr;
                    }
                }
                
                // 初始化数组数据
                if (array_ptr != (int64_t *)0x0) {
                    array_size = 0;
                    chunk_index = (uint)index_char;
                    loop_index = array_size;
                    
                    if ((0 < item_count) && (0xf < chunk_index)) {
                        temp_int2 = *(int *)(temp_long + 0x2c);
                        temp_ptr1 = (int64_t *)((int64_t)array_ptr + (int64_t)(index_char + -1) * 4);
                        
                        if ((((int64_t *)(temp_long + 0x2c) < array_ptr) || (temp_ptr1 < (int64_t *)(temp_long + 0x2c))) &&
                           ((game_object_ptr < array_ptr || (loop_index = 0, temp_ptr1 < game_object_ptr)))) {
                            
                            temp_uint1 = chunk_index & 0x8000000f;
                            if ((int)temp_uint1 < 0) {
                                temp_uint1 = (temp_uint1 - 1 | 0xfffffff0) + 1;
                            }
                            
                            array_ptr = array_ptr + 4;
                            temp_int1 = 8;
                            
                            // 批量初始化数组
                            do {
                                *(int *)(array_ptr + -4) = array_size + temp_int2;
                                *(int *)((int64_t)array_ptr + -0x1c) = array_size + 1 + temp_int2;
                                *(int *)(array_ptr + -3) = array_size + 2 + temp_int2;
                                *(int *)((int64_t)array_ptr + -0x14) = array_size + 3 + temp_int2;
                                array_size = array_size + 0x10;
                                *(int *)(array_ptr + -2) = temp_int1 + -4 + temp_int2;
                                *(int *)((int64_t)array_ptr + -0xc) = temp_int1 + -3 + temp_int2;
                                *(int *)(array_ptr + -1) = temp_int1 + -2 + temp_int2;
                                *(int *)((int64_t)array_ptr + -4) = temp_int1 + -1 + temp_int2;
                                *(int *)array_ptr = temp_int1 + temp_int2;
                                *(int *)((int64_t)array_ptr + 4) = temp_int1 + 1 + temp_int2;
                                *(int *)(array_ptr + 1) = temp_int1 + 2 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0xc) = temp_int1 + 3 + temp_int2;
                                *(int *)(array_ptr + 2) = temp_int1 + 4 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0x14) = temp_int1 + 5 + temp_int2;
                                *(int *)(array_ptr + 3) = temp_int1 + 6 + temp_int2;
                                *(int *)((int64_t)array_ptr + 0x1c) = temp_int1 + 7 + temp_int2;
                                array_ptr = array_ptr + 8;
                                temp_int1 = temp_int1 + 0x10;
                                loop_index = array_size;
                            } while (array_size < (int)(chunk_index - temp_uint1));
                        }
                    }
                    
                    // 填充剩余数组元素
                    for (offset_value = (int64_t)loop_index; offset_value < (int64_t)temp_ulong1; offset_value = offset_value + 1) {
                        array_size = *(int *)(temp_long + 0x2c) + loop_index;
                        loop_index = loop_index + 1;
                        *(int *)(*game_object_ptr + offset_value * 4) = array_size;
                    }
                    
                    // 处理数据映射
                    loop_index = *(int *)(temp_long + 0x18);
                    array_size = 0;
                    if (0 < (int64_t)loop_index) {
                        offset_value = 0;
                        do {
                            temp_int2 = *(int *)(temp_long + 0x30) + array_size;
                            array_size = array_size + 1;
                            byte_ptr = (byte *)(*(int64_t *)(temp_long + 0x10) + offset_value);
                            offset_value = offset_value + 1;
                            *(int *)(*game_object_ptr + (uint64_t)*byte_ptr * 4) = temp_int2;
                        } while (offset_value < loop_index);
                    }
                }
                
                // 处理内存块分配
                uint_ptr = (uint *)((int64_t)*(int *)(system_parameter_buffer + 0xc20) * 0x128 + system_parameter_buffer + 0x9d0);
                
                if (item_count == 0) {
                    temp_uint1 = (int)index_char - 1;
                }
                else {
                    LOCK();
                    temp_uint1 = *uint_ptr;
                    *uint_ptr = *uint_ptr + (int)index_char;
                    UNLOCK();
                    
                    chunk_start = (uint64_t)(temp_uint1 >> 0xb);
                    chunk_end = (uint64_t)(index_char + -1 + temp_uint1 >> 0xb);
                    
                    if (chunk_start <= chunk_end) {
                        char_ptr = (char *)((int64_t)uint_ptr + chunk_start + 0x108);
                        offset_value = (chunk_end - chunk_start) + 1;
                        chunk_ptr = uint_ptr + chunk_start * 2 + 2;
                        
                        do {
                            loop_index = (int)chunk_start;
                            if (*(int64_t *)chunk_ptr == 0) {
                                loop_counter = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x2000, 0x25);
                                LOCK();
                                is_allocated = *(int64_t *)(uint_ptr + (int64_t)loop_index * 2 + 2) == 0;
                                if (is_allocated) {
                                    *(int64_t *)(uint_ptr + (int64_t)loop_index * 2 + 2) = loop_counter;
                                }
                                UNLOCK();
                                
                                if (is_allocated) {
                                    LOCK();
                                    *(int8_t *)((int64_t)loop_index + 0x108 + (int64_t)uint_ptr) = 0;
                                    UNLOCK();
                                }
                                else {
                                    if (loop_counter != 0) {
                                        CoreEngineMemoryPoolCleaner();
                                    }
                                    do {
                                    } while (*char_ptr != '\0');
                                }
                            }
                            else {
                                do {
                                } while (*char_ptr != '\0');
                            }
                            chunk_start = (uint64_t)(loop_index + 1);
                            chunk_ptr = chunk_ptr + 2;
                            char_ptr = char_ptr + 1;
                            offset_value = offset_value + -1;
                        } while (offset_value != 0);
                    }
                }
                
                // 复制数据到内存块
                data_array = *(int32_t **)(temp_long + 0x38);
                temp_uint1 = temp_uint1 >> 0xb;
                *(uint *)(temp_long + 0x2c) = temp_uint1;
                
                if (temp_uint1 == (int)index_char + temp_uint1 >> 0xb) {
                    memcpy(*(int64_t *)(uint_ptr + (uint64_t)temp_uint1 * 2 + 2) +
                           (uint64_t)(temp_uint1 + temp_uint1 * -0x800) * 4, data_array, (temp_ulong1 & 0xffffffff) << 2);
                }
                
                if (item_count != 0) {
                    temp_ulong1 = temp_ulong1 & 0xffffffff;
                    do {
                        temp_int32_t = *data_array;
                        data_array = data_array + 1;
                        *(int32_t *)
                         (*(int64_t *)(uint_ptr + (uint64_t)(temp_uint1 >> 0xb) * 2 + 2) +
                         (uint64_t)(temp_uint1 + (temp_uint1 >> 0xb) * -0x800) * 4) = temp_int32_t;
                        temp_ulong1 = temp_ulong1 - 1;
                        temp_uint1 = temp_uint1 + 1;
                    } while (temp_ulong1 != 0);
                }
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



