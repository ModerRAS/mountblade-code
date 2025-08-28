#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part072.c - 渲染系统高级变换和数据处理模块
 * 
 * 本模块包含7个核心函数，涵盖渲染对象高级变换、数据处理、
 * 内存管理、资源分配等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染对象变换和插值处理
 * - 渲染数据批处理和状态管理
 * - 渲染资源分配和释放
 * - 渲染系统高级控制
 */

// 函数别名定义
#define rendering_system_process_transform_data FUN_180309bd0
#define rendering_system_advanced_transform_processor FUN_180309dae
#define rendering_system_interpolation_handler FUN_180309e9d
#define rendering_system_batch_processor FUN_18030a08b
#define rendering_system_data_transformer FUN_18030a0da
#define rendering_system_resource_allocator FUN_18030a110
#define rendering_system_memory_manager FUN_18030a2a0
#define rendering_system_data_handler FUN_18030a460
#define rendering_system_parameter_processor FUN_18030a6a0

// 常量定义
#define RENDERING_DISTANCE_THRESHOLD 50.0f
#define RENDERING_MAX_FLOAT_VALUE 0x7f7fffff
#define RENDERING_RESOURCE_HANDLE 0xfffffffffffffffe

/**
 * 渲染系统变换数据处理函数
 * 
 * 处理渲染对象的变换数据，包括位置插值、距离计算和状态更新。
 * 
 * @param render_context 渲染上下文指针
 * @param transform_factor 变换因子
 * @param render_flags 渲染标志
 * @param process_mode 处理模式
 * @param transform_data 变换数据数组
 * @param position_data 位置数据
 * @param update_flag 更新标志
 */
void rendering_system_process_transform_data(
    longlong render_context, 
    float transform_factor, 
    uint32_t render_flags, 
    char process_mode,
    uint64_t *transform_data, 
    uint64_t position_data, 
    char update_flag
) {
    uint64_t temp_data;
    int intensity_value;
    float scale_factor;
    float distance_x, distance_y, distance_z;
    float total_distance;
    float interpolated_value;
    float blend_factor;
    float current_x, current_y, current_z;
    float target_x, target_y, target_z;
    
    if (update_flag == '\0') {
        transform_factor = transform_factor + *(float *)(render_context + 0x114);
        *(float *)(render_context + 0x114) = transform_factor;
        scale_factor = 1.0f / (float)*(int *)(render_context + 0x11c);
        
        if (process_mode == '\0') {
            if (transform_factor <= scale_factor) {
                *(uint32_t *)(render_context + 0x118) = 0;
            }
            else {
                distance_x = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
                distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
                distance_z = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
                
                if (RENDERING_DISTANCE_THRESHOLD < 
                    SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * 
                    (1.0f / transform_factor)) {
                    
                    temp_data = transform_data[1];
                    *(uint64_t *)(render_context + 0xd0) = *transform_data;
                    *(uint64_t *)(render_context + 0xd8) = temp_data;
                    temp_data = transform_data[3];
                    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
                    *(uint64_t *)(render_context + 0xe8) = temp_data;
                    temp_data = transform_data[5];
                    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
                    *(uint64_t *)(render_context + 0xf8) = temp_data;
                    temp_data = transform_data[7];
                    *(uint64_t *)(render_context + 0x100) = transform_data[6];
                    *(uint64_t *)(render_context + 0x108) = temp_data;
                    
                    temp_data = transform_data[1];
                    *(uint64_t *)(render_context + 0x90) = *transform_data;
                    *(uint64_t *)(render_context + 0x98) = temp_data;
                    temp_data = transform_data[3];
                    *(uint64_t *)(render_context + 0xa0) = transform_data[2];
                    *(uint64_t *)(render_context + 0xa8) = temp_data;
                    temp_data = transform_data[5];
                    *(uint64_t *)(render_context + 0xb0) = transform_data[4];
                    *(uint64_t *)(render_context + 0xb8) = temp_data;
                    temp_data = transform_data[7];
                    *(uint64_t *)(render_context + 0xc0) = transform_data[6];
                    *(uint64_t *)(render_context + 200) = temp_data;
                }
                
                intensity_value = (int)(transform_factor * (float)*(int *)(render_context + 0x11c));
                *(int *)(render_context + 0x118) = intensity_value;
                interpolated_value = (float)intensity_value * scale_factor;
                blend_factor = interpolated_value / transform_factor;
                *(float *)(render_context + 0x114) = transform_factor - interpolated_value;
                
                temp_data = transform_data[1];
                *(uint64_t *)(render_context + 0xd0) = *transform_data;
                *(uint64_t *)(render_context + 0xd8) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(render_context + 0xe0) = transform_data[2];
                *(uint64_t *)(render_context + 0xe8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(render_context + 0xf0) = transform_data[4];
                *(uint64_t *)(render_context + 0xf8) = temp_data;
                
                current_x = *(float *)(transform_data + 7);
                current_y = *(float *)((longlong)transform_data + 0x34);
                current_z = *(float *)(transform_data + 6);
                
                *(float *)(render_context + 0x124) = scale_factor;
                *(float *)(render_context + 0x128) = scale_factor;
                
                target_x = (current_z - *(float *)(render_context + 0xc0)) * blend_factor + *(float *)(render_context + 0xc0);
                target_y = *(float *)(render_context + 0x8c) / interpolated_value;
                
                *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
                *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
                *(float *)(render_context + 0x100) = target_x;
                *(float *)(render_context + 0x104) = 
                    (current_y - *(float *)(render_context + 0xc4)) * blend_factor + *(float *)(render_context + 0xc4);
                *(float *)(render_context + 0x108) = 
                    (current_x - *(float *)(render_context + 200)) * blend_factor + *(float *)(render_context + 200);
                *(uint32_t *)(render_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
                
                *(float *)(render_context + 0x78) = (target_x - *(float *)(render_context + 0xc0)) * target_y;
                *(float *)(render_context + 0x7c) = 
                    (*(float *)(render_context + 0x104) - *(float *)(render_context + 0xc4)) * target_y;
                *(float *)(render_context + 0x80) = 
                    (*(float *)(render_context + 0x108) - *(float *)(render_context + 200)) * target_y;
                *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
                
                if (0.0f < *(float *)(render_context + 0x88)) {
                    func_0x00018030a230();
                }
                
                *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
                *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
                *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
                *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
                *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
                *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
                *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
                *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
            }
        }
        else {
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0x90) = *transform_data;
            *(uint64_t *)(render_context + 0x98) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xa0) = transform_data[2];
            *(uint64_t *)(render_context + 0xa8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xb0) = transform_data[4];
            *(uint64_t *)(render_context + 0xb8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0xc0) = transform_data[6];
            *(uint64_t *)(render_context + 200) = temp_data;
            
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0xd0) = *transform_data;
            *(uint64_t *)(render_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xe0) = transform_data[2];
            *(uint64_t *)(render_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xf0) = transform_data[4];
            *(uint64_t *)(render_context + 0xf8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0x100) = transform_data[6];
            *(uint64_t *)(render_context + 0x108) = temp_data;
            
            *(uint32_t *)(render_context + 0x114) = 0;
            *(float *)(render_context + 0x124) = scale_factor;
            *(float *)(render_context + 0x128) = scale_factor;
            *(uint32_t *)(render_context + 0x118) = 1;
        }
    }
    else {
        distance_x = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
        distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
        distance_z = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
        scale_factor = 1.0f / transform_factor;
        
        if (RENDERING_DISTANCE_THRESHOLD < 
            SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * scale_factor) {
            
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0xd0) = *transform_data;
            *(uint64_t *)(render_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xe0) = transform_data[2];
            *(uint64_t *)(render_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xf0) = transform_data[4];
            *(uint64_t *)(render_context + 0xf8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0x100) = transform_data[6];
            *(uint64_t *)(render_context + 0x108) = temp_data;
        }
        
        *(uint32_t *)(render_context + 0x118) = 1;
        *(float *)(render_context + 0x124) = transform_factor;
        *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
        *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
        *(uint32_t *)(render_context + 0x114) = 0;
        
        scale_factor = *(float *)(render_context + 0x8c);
        current_x = *(float *)(transform_data + 7);
        current_y = *(float *)((longlong)transform_data + 0x34);
        
        *(float *)(render_context + 0x78) = 
            (*(float *)(transform_data + 6) - *(float *)(render_context + 0x100)) * scale_factor * scale_factor;
        *(float *)(render_context + 0x7c) = 
            (current_y - *(float *)(render_context + 0x104)) * scale_factor * scale_factor;
        *(float *)(render_context + 0x80) = 
            (current_x - *(float *)(render_context + 0x108)) * scale_factor * scale_factor;
        *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
        
        if (0.0f < *(float *)(render_context + 0x88)) {
            func_0x00018030a230();
        }
        
        *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
        *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
        *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
        *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
        *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
        *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
        *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
        *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
        
        temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0xd0) = *transform_data;
        *(uint64_t *)(render_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xe0) = transform_data[2];
        *(uint64_t *)(render_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xf0) = transform_data[4];
        *(uint64_t *)(render_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0x100) = transform_data[6];
        *(uint64_t *)(render_context + 0x108) = temp_data;
        
        *(uint32_t *)(render_context + 0x128) = render_flags;
    }
    
    temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0x28) = *transform_data;
    *(uint64_t *)(render_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0x38) = transform_data[2];
    *(uint64_t *)(render_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0x48) = transform_data[4];
    *(uint64_t *)(render_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(render_context + 0x58) = transform_data[6];
    *(uint64_t *)(render_context + 0x60) = temp_data;
}
/**
 * 渲染系统高级变换处理器
 * 
 * 处理复杂的渲染变换操作，包括双上下文处理和高级插值计算。
 * 
 * @param primary_context 主要渲染上下文
 * @param secondary_context 次要渲染上下文
 * @param transform_data 变换数据数组
 * @param process_flag 处理标志
 */
void rendering_system_advanced_transform_processor(
    longlong primary_context, 
    longlong secondary_context, 
    uint64_t *transform_data, 
    char process_flag
) {
    uint64_t temp_data;
    int intensity_value;
    float *position_ptr;
    float distance_x, distance_y, distance_z;
    float accumulated_distance;
    float interpolated_value;
    float blend_factor;
    float scale_value;
    float intensity_factor;
    float target_distance;
    float stack_distance;
    uint32_t stack_flag;
    
    accumulated_distance = intensity_factor + *(float *)(primary_context + 0x114);
    *(float *)(primary_context + 0x114) = accumulated_distance;
    scale_value = intensity_factor / (float)intensity_value;
    
    if (process_flag == '\0') {
        if (accumulated_distance <= scale_value) {
            *(uint32_t *)(primary_context + 0x118) = 0;
        }
        else {
            distance_x = *(float *)(primary_context + 0x60) - *(float *)(transform_data + 7);
            distance_y = *(float *)(primary_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
            distance_z = *(float *)(primary_context + 0x58) - *(float *)(transform_data + 6);
            
            if (RENDERING_DISTANCE_THRESHOLD < 
                SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * 
                (intensity_factor / accumulated_distance)) {
                
                temp_data = transform_data[1];
                *(uint64_t *)(primary_context + 0xd0) = *transform_data;
                *(uint64_t *)(primary_context + 0xd8) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
                *(uint64_t *)(primary_context + 0xe8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
                *(uint64_t *)(primary_context + 0xf8) = temp_data;
                temp_data = transform_data[7];
                *(uint64_t *)(primary_context + 0x100) = transform_data[6];
                *(uint64_t *)(primary_context + 0x108) = temp_data;
                
                temp_data = transform_data[1];
                *(uint64_t *)(primary_context + 0x90) = *transform_data;
                *(uint64_t *)(primary_context + 0x98) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
                *(uint64_t *)(primary_context + 0xa8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
                *(uint64_t *)(primary_context + 0xb8) = temp_data;
                temp_data = transform_data[7];
                *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
                *(uint64_t *)(primary_context + 200) = temp_data;
            }
            
            intensity_value = (int)(accumulated_distance * (float)intensity_value);
            *(int *)(primary_context + 0x118) = intensity_value;
            interpolated_value = (float)intensity_value * scale_value;
            blend_factor = interpolated_value / accumulated_distance;
            *(float *)(primary_context + 0x114) = accumulated_distance - interpolated_value;
            
            temp_data = transform_data[1];
            *(uint64_t *)(primary_context + 0xd0) = *transform_data;
            *(uint64_t *)(primary_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
            *(uint64_t *)(primary_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
            *(uint64_t *)(primary_context + 0xf8) = temp_data;
            
            accumulated_distance = *(float *)(primary_context + 0xc4);
            distance_x = *(float *)(transform_data + 7);
            distance_y = *(float *)((longlong)transform_data + 0x34);
            distance_z = *(float *)(transform_data + 6);
            
            *(float *)(primary_context + 0x124) = scale_value;
            *(float *)(primary_context + 0x128) = scale_value;
            
            position_ptr = (float *)(primary_context + 0x78);
            stack_distance = 
                (distance_x - *(float *)(primary_context + 200)) * blend_factor + *(float *)(primary_context + 200);
            distance_z = (distance_z - *(float *)(primary_context + 0xc0)) * blend_factor + *(float *)(primary_context + 0xc0);
            
            temp_data = *(uint64_t *)(primary_context + 0x80);
            interpolated_value = *(float *)(secondary_context + 0x8c) / interpolated_value;
            
            *(uint64_t *)(secondary_context + 0x68) = *(uint64_t *)position_ptr;
            *(uint64_t *)(secondary_context + 0x70) = temp_data;
            *(float *)(secondary_context + 0x100) = distance_z;
            *(float *)(secondary_context + 0x104) = (distance_y - accumulated_distance) * blend_factor + accumulated_distance;
            *(float *)(secondary_context + 0x108) = stack_distance;
            *(uint32_t *)(secondary_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
            
            stack_flag = RENDERING_MAX_FLOAT_VALUE;
            scale_value = (*(float *)(secondary_context + 0x104) - *(float *)(secondary_context + 0xc4)) * interpolated_value;
            distance_x = (*(float *)(secondary_context + 0x108) - *(float *)(secondary_context + 200)) * interpolated_value;
            accumulated_distance = *(float *)(secondary_context + 0x88);
            
            *position_ptr = (distance_z - *(float *)(secondary_context + 0xc0)) * interpolated_value;
            *(float *)(primary_context + 0x7c) = scale_value;
            *(float *)(primary_context + 0x80) = distance_x;
            *(uint32_t *)(primary_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
            
            if (0.0f < accumulated_distance) {
                func_0x00018030a230(position_ptr, accumulated_distance, scale_value, distance_x, distance_z);
            }
            
            *(uint64_t *)(secondary_context + 0x90) = *(uint64_t *)(secondary_context + 0xd0);
            *(uint64_t *)(secondary_context + 0x98) = *(uint64_t *)(secondary_context + 0xd8);
            *(uint64_t *)(secondary_context + 0xa0) = *(uint64_t *)(secondary_context + 0xe0);
            *(uint64_t *)(secondary_context + 0xa8) = *(uint64_t *)(secondary_context + 0xe8);
            *(uint64_t *)(secondary_context + 0xb0) = *(uint64_t *)(secondary_context + 0xf0);
            *(uint64_t *)(secondary_context + 0xb8) = *(uint64_t *)(secondary_context + 0xf8);
            *(uint64_t *)(secondary_context + 0xc0) = *(uint64_t *)(secondary_context + 0x100);
            *(uint64_t *)(secondary_context + 200) = *(uint64_t *)(secondary_context + 0x108);
        }
    }
    else {
        temp_data = transform_data[1];
        *(uint64_t *)(primary_context + 0x90) = *transform_data;
        *(uint64_t *)(primary_context + 0x98) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xa8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xb8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
        *(uint64_t *)(primary_context + 200) = temp_data;
        
        temp_data = transform_data[1];
        *(uint64_t *)(primary_context + 0xd0) = *transform_data;
        *(uint64_t *)(primary_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(primary_context + 0x100) = transform_data[6];
        *(uint64_t *)(primary_context + 0x108) = temp_data;
        
        *(uint32_t *)(primary_context + 0x114) = 0;
        *(float *)(primary_context + 0x124) = scale_value;
        *(float *)(primary_context + 0x128) = scale_value;
        *(uint32_t *)(primary_context + 0x118) = 1;
    }
    
    temp_data = transform_data[1];
    *(uint64_t *)(secondary_context + 0x28) = *transform_data;
    *(uint64_t *)(secondary_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(secondary_context + 0x38) = transform_data[2];
    *(uint64_t *)(secondary_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(secondary_context + 0x48) = transform_data[4];
    *(uint64_t *)(secondary_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(secondary_context + 0x58) = transform_data[6];
    *(uint64_t *)(secondary_context + 0x60) = temp_data;
}
/**
 * 渲染系统插值处理器
 * 
 * 执行高级插值计算，处理渲染对象的平滑过渡和动画效果。
 * 
 * @param render_context 渲染上下文指针
 * @param interpolation_factor 插值因子
 * @param transform_data 变换数据数组
 * @param distance_scale 距离缩放因子
 */
void rendering_system_interpolation_handler(
    longlong render_context, 
    float interpolation_factor, 
    uint64_t *transform_data, 
    float distance_scale
) {
    float current_x, current_y, current_z;
    float target_x, target_y, target_z;
    float distance_sum;
    float interpolated_value;
    float blend_factor;
    float scale_factor;
    float intensity_value;
    float distance_factor;
    float stack_distance;
    uint32_t stack_flag;
    longlong secondary_context;
    
    if (RENDERING_DISTANCE_THRESHOLD < 
        SQRT(distance_factor + interpolation_factor + intensity_value) * distance_scale) {
        
        uint64_t temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0xd0) = *transform_data;
        *(uint64_t *)(render_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xe0) = transform_data[2];
        *(uint64_t *)(render_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xf0) = transform_data[4];
        *(uint64_t *)(render_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0x100) = transform_data[6];
        *(uint64_t *)(render_context + 0x108) = temp_data;
        
        temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0x90) = *transform_data;
        *(uint64_t *)(render_context + 0x98) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xa0) = transform_data[2];
        *(uint64_t *)(render_context + 0xa8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xb0) = transform_data[4];
        *(uint64_t *)(render_context + 0xb8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0xc0) = transform_data[6];
        *(uint64_t *)(render_context + 200) = temp_data;
    }
    
    *(int *)(render_context + 0x118) = (int)(intensity_value * distance_factor);
    interpolated_value = (float)(int)(intensity_value * distance_factor) * scale_factor;
    blend_factor = interpolated_value / intensity_value;
    *(float *)(render_context + 0x114) = intensity_value - interpolated_value;
    
    uint64_t temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0xd0) = *transform_data;
    *(uint64_t *)(render_context + 0xd8) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
    *(uint64_t *)(render_context + 0xe8) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
    *(uint64_t *)(render_context + 0xf8) = temp_data;
    
    current_x = *(float *)(render_context + 0xc4);
    current_y = *(float *)(transform_data + 7);
    current_z = *(float *)((longlong)transform_data + 0x34);
    target_x = *(float *)(transform_data + 6);
    
    *(float *)(render_context + 0x124) = scale_factor;
    *(float *)(render_context + 0x128) = scale_factor;
    
    stack_distance = (current_y - *(float *)(render_context + 200)) * blend_factor + *(float *)(render_context + 200);
    target_y = (target_x - *(float *)(render_context + 0xc0)) * blend_factor + *(float *)(render_context + 0xc0);
    
    temp_data = *(uint64_t *)(render_context + 0x80);
    interpolated_value = *(float *)(secondary_context + 0x8c) / interpolated_value;
    
    *(uint64_t *)(secondary_context + 0x68) = *(uint64_t *)(render_context + 0x78);
    *(uint64_t *)(secondary_context + 0x70) = temp_data;
    *(float *)(secondary_context + 0x100) = target_y;
    *(float *)(secondary_context + 0x104) = (current_z - current_x) * blend_factor + current_x;
    *(float *)(secondary_context + 0x108) = stack_distance;
    *(uint32_t *)(secondary_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
    
    current_x = *(float *)(secondary_context + 0x104);
    current_y = *(float *)(secondary_context + 0xc4);
    current_z = *(float *)(secondary_context + 0x108);
    target_x = *(float *)(secondary_context + 200);
    
    stack_flag = RENDERING_MAX_FLOAT_VALUE;
    blend_factor = *(float *)(secondary_context + 0x88);
    
    *(float *)(render_context + 0x78) = (target_y - *(float *)(secondary_context + 0xc0)) * interpolated_value;
    *(float *)(render_context + 0x7c) = (current_x - current_y) * interpolated_value;
    *(float *)(render_context + 0x80) = (current_z - target_x) * interpolated_value;
    *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
    
    if (0.0f < blend_factor) {
        func_0x00018030a230();
    }
    
    *(uint64_t *)(secondary_context + 0x90) = *(uint64_t *)(secondary_context + 0xd0);
    *(uint64_t *)(secondary_context + 0x98) = *(uint64_t *)(secondary_context + 0xd8);
    *(uint64_t *)(secondary_context + 0xa0) = *(uint64_t *)(secondary_context + 0xe0);
    *(uint64_t *)(secondary_context + 0xa8) = *(uint64_t *)(secondary_context + 0xe8);
    *(uint64_t *)(secondary_context + 0xb0) = *(uint64_t *)(secondary_context + 0xf0);
    *(uint64_t *)(secondary_context + 0xb8) = *(uint64_t *)(secondary_context + 0xf8);
    *(uint64_t *)(secondary_context + 0xc0) = *(uint64_t *)(secondary_context + 0x100);
    *(uint64_t *)(secondary_context + 200) = *(uint64_t *)(secondary_context + 0x108);
    
    temp_data = transform_data[1];
    *(uint64_t *)(secondary_context + 0x28) = *transform_data;
    *(uint64_t *)(secondary_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(secondary_context + 0x38) = transform_data[2];
    *(uint64_t *)(secondary_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(secondary_context + 0x48) = transform_data[4];
    *(uint64_t *)(secondary_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(secondary_context + 0x58) = transform_data[6];
    *(uint64_t *)(secondary_context + 0x60) = temp_data;
}





// 函数: void FUN_18030a08b(undefined8 param_1,longlong param_2,undefined8 *param_3)
void FUN_18030a08b(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x00018030a230();
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = param_3[1];
  *(undefined8 *)(param_2 + 0x28) = *param_3;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(param_2 + 0x38) = param_3[2];
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  uVar1 = param_3[5];
  *(undefined8 *)(param_2 + 0x48) = param_3[4];
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  uVar1 = param_3[7];
  *(undefined8 *)(param_2 + 0x58) = param_3[6];
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}





// 函数: void FUN_18030a0da(undefined8 param_1,longlong param_2,undefined8 *param_3)
void FUN_18030a0da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *(undefined8 *)(param_2 + 0x28) = *param_3;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(param_2 + 0x38) = param_3[2];
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  uVar1 = param_3[5];
  *(undefined8 *)(param_2 + 0x48) = param_3[4];
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  uVar1 = param_3[7];
  *(undefined8 *)(param_2 + 0x58) = param_3[6];
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18030a110(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  undefined8 *puStackX_18;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1a368;
  lVar2 = _DAT_180c8a980;
  aiStackX_10[0] = *(int *)(param_1 + 2);
  lVar3 = (longlong)aiStackX_10[0];
  lVar1 = _DAT_180c8a980 + 0x2b8;
  lVar5 = lVar1;
  AcquireSRWLockExclusive(lVar1);
  *(undefined1 *)(lVar2 + 1) = 1;
  *(undefined1 *)(*(longlong *)(lVar2 + 0x180) + lVar3 * 0x30) = 0;
  FUN_1800571e0(lVar2 + 0xe0,aiStackX_10,param_3,param_4,uVar4,lVar5,1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  ReleaseSRWLockExclusive(lVar1);
  if ((longlong *)param_1[0x30] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x30] + 0x38))();
  }
  param_1[0x1c] = &UNK_18098bcb0;
  param_1[7] = &UNK_18098bcb0;
  puStackX_18 = param_1 + 3;
  FUN_1800f89b0();
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x188);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_18030a2a0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar8 = param_3 + 0xffU & 0xffffff00;
  iVar6 = _Mtx_lock(param_1 + 6);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 2);
    for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
      uVar1 = *(uint *)(plVar3 + 2);
      if ((int)uVar8 <= (int)uVar1) {
        iVar6 = *(int *)((longlong)plVar3 + 0x14);
        if (uVar1 == uVar8) {
          if (plVar3 == plVar2) {
            *(longlong *)(param_1 + 2) = *plVar2;
          }
          if (plVar3 == *(longlong **)(param_1 + 4)) {
            *(longlong *)(param_1 + 4) = (*(longlong **)(param_1 + 4))[1];
          }
          if ((longlong *)plVar3[1] != (longlong *)0x0) {
            *(longlong *)plVar3[1] = *plVar3;
          }
          if (*plVar3 != 0) {
            *(longlong *)(*plVar3 + 8) = plVar3[1];
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar3);
        }
        *(uint *)((longlong)plVar3 + 0x14) = iVar6 + uVar8;
        *(uint *)(plVar3 + 2) = uVar1 - uVar8;
        *param_2 = iVar6;
        param_2[1] = uVar8;
        goto LAB_18030a42d;
      }
    }
    if ((char)param_1[1] == '\0') break;
    iVar6 = *param_1;
    iVar5 = iVar6 * 2;
    lVar4 = *(longlong *)(param_1 + 4);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0x10) != iVar6)) {
      puVar7 = (undefined8 *)
               FUN_18062b1e0(_DAT_180c8ed18,0x18,8,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),3),
                             uVar9);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
      *(int *)((longlong)puVar7 + 0x14) = *param_1;
      *(int *)(puVar7 + 2) = iVar5 - *param_1;
      puVar7[1] = *(undefined8 *)(param_1 + 4);
      if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 4) = puVar7;
      }
      if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 4) == 0)) {
        *(undefined8 **)(param_1 + 2) = puVar7;
      }
      *(undefined8 **)(param_1 + 4) = puVar7;
      *param_1 = iVar5;
    }
    else {
      *(int *)(lVar4 + 0x10) = (*(int *)(lVar4 + 0x10) - iVar6) + iVar5;
      *param_1 = iVar5;
    }
  }
  param_2[0] = -1;
  param_2[1] = -1;
LAB_18030a42d:
  iVar6 = _Mtx_unlock(param_1 + 6);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030a460(longlong param_1,undefined8 param_2)
void FUN_18030a460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int iStackX_14;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  iVar6 = _Mtx_lock(param_1 + 0x18);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar6 = (int)param_2;
  iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
  do {
    if (plVar3 == (longlong *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (lVar4 == 0) {
        puVar7 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,uVar8);
        *(int *)((longlong)puVar7 + 0x14) = iVar6;
        *(int *)(puVar7 + 2) = iStackX_14;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined8 **)(param_1 + 0x10) = puVar7;
LAB_18030a65e:
        *(undefined8 **)(param_1 + 8) = puVar7;
      }
      else if (*(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0x10) == iVar6) {
        *(int *)(lVar4 + 0x10) = iStackX_14 + *(int *)(lVar4 + 0x10);
      }
      else {
        puVar7 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,uVar8);
        puVar7[1] = 0;
        *(int *)((longlong)puVar7 + 0x14) = iVar6;
        *(int *)(puVar7 + 2) = iStackX_14;
        *puVar7 = 0;
        puVar7[1] = *(undefined8 *)(param_1 + 0x10);
        **(undefined8 **)(param_1 + 0x10) = puVar7;
        *(undefined8 **)(param_1 + 0x10) = puVar7;
      }
LAB_18030a662:
      iVar6 = _Mtx_unlock(param_1 + 0x18);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      return;
    }
    iVar1 = *(int *)((longlong)plVar3 + 0x14);
    if (iVar6 < iVar1) {
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 == (longlong *)0x0) {
        if (iStackX_14 + iVar6 != iVar1) {
          puVar7 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,uVar8);
          *(int *)((longlong)puVar7 + 0x14) = iVar6;
          *(int *)(puVar7 + 2) = iStackX_14;
          *puVar7 = plVar3;
          puVar7[1] = 0;
          plVar3[1] = (longlong)puVar7;
          goto LAB_18030a65e;
        }
        *(int *)((longlong)plVar3 + 0x14) = iVar1 - iStackX_14;
        *(int *)(plVar3 + 2) = (int)plVar3[2] + iStackX_14;
      }
      else {
        iVar2 = (int)plVar5[2];
        if (*(int *)((longlong)plVar5 + 0x14) + iVar2 == iVar6) {
          if (iStackX_14 + iVar6 == iVar1) {
            if (plVar3 == *(longlong **)(param_1 + 0x10)) {
              *(longlong **)(param_1 + 0x10) = plVar5;
              iVar2 = (int)plVar5[2];
            }
            *(int *)(plVar5 + 2) = (int)plVar3[2] + iVar2 + iStackX_14;
            lVar4 = *plVar3;
            *plVar5 = lVar4;
            if (lVar4 != 0) {
              *(longlong **)(lVar4 + 8) = plVar5;
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar3);
          }
          *(int *)(plVar5 + 2) = iVar2 + iStackX_14;
        }
        else if (iStackX_14 + iVar6 == iVar1) {
          *(int *)((longlong)plVar3 + 0x14) = iVar1 - iStackX_14;
          *(int *)(plVar3 + 2) = (int)plVar3[2] + iStackX_14;
        }
        else {
          puVar7 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,uVar8);
          *(int *)((longlong)puVar7 + 0x14) = iVar6;
          *(int *)(puVar7 + 2) = iStackX_14;
          *puVar7 = plVar3;
          puVar7[1] = plVar5;
          *plVar5 = (longlong)puVar7;
          plVar3[1] = (longlong)puVar7;
        }
      }
      goto LAB_18030a662;
    }
    plVar3 = (longlong *)*plVar3;
  } while( true );
}



undefined8 *
FUN_18030a6a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x1c;
  strcpy_s(param_2[1],0x80,&UNK_180a1a450,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



